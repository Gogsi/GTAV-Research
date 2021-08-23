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
	struct<3> Local_44[8];
	struct<3> Local_69[1];
	int iLocal_73 = 0;
	int iLocal_74[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_81[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<165> Local_95 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_271[16] = "";
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	char cLocal_275[16] = "";
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	struct<3> Local_279[12];
	char cLocal_316[32] = "";
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 1132396544;
	var uLocal_327 = 1132396544;
	var uLocal_328 = 1132396544;
	var uLocal_329 = 0;
	var uLocal_330 = -1082130432;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 8;
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
	var uLocal_390 = -1;
	var uLocal_391 = 1092616192;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	bool bLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = -1;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 1000;
	var uLocal_408 = 1000;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 1097859072;
	var uLocal_414 = 1500;
	var uLocal_415 = 45;
	var uLocal_416 = 1103626240;
	var uLocal_417 = 5;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	bool bLocal_426 = 0;
	float fLocal_427 = 0f;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	struct<3> Local_436 = { 0, 0, 0 } ;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	bool bLocal_441 = 0;
	int iLocal_442 = 0;
	bool bLocal_443 = 0;
	int iLocal_444 = 0;
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
	int iLocal_456 = 0;
	var uLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	bool bLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	bool bLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	bool bLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	struct<6> Local_476 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_482 = NULL;
	var uLocal_483 = 16;
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
	int iLocal_648 = 0;
	struct<23> Local_649[53];
	struct<28> Local_1869[17];
	var uLocal_2346 = 0;
	struct<165> Local_2347 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	struct<3> Local_2530 = { 0, 0, 0 } ;
	float fLocal_2533 = 0f;
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
	struct<18> Local_2555[2];
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	int iLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	float fLocal_2599 = 0f;
	int iLocal_2600 = 0;
	bool bLocal_2601 = 0;
	int iLocal_2602 = 0;
	int iLocal_2603 = 0;
	int iLocal_2604 = 0;
	int iLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	char* sLocal_2617 = NULL;
	char* sLocal_2618 = NULL;
	char* sLocal_2619[3] = { NULL, NULL, NULL };
	char* sLocal_2623 = NULL;
	struct<3> Local_2624[1];
	struct<3> Local_2628 = { 0, 0, 0 } ;
	struct<3> Local_2631 = { 0, 0, 0 } ;
	struct<3> Local_2634 = { 0, 0, 0 } ;
	var uLocal_2637 = 9;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 7;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 15;
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
	var uLocal_2670 = 0;
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
	var uLocal_2697 = 0;
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
	var uLocal_2727 = 0;
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
	var uLocal_2754 = 0;
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
	var uLocal_2784 = 0;
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
	var uLocal_2811 = 0;
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
	var uLocal_2841 = 0;
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
	var uLocal_2868 = 0;
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
	var uLocal_2928 = 1;
	int iLocal_2929 = 0;
	int iLocal_2930 = 0;
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	int iLocal_2933 = 0;
	bool bLocal_2934 = 0;
	bool bLocal_2935 = 0;
	int iLocal_2936 = 0;
	int iLocal_2937 = 0;
	bool bLocal_2938 = 0;
	bool bLocal_2939 = 0;
	int iLocal_2940 = 0;
	bool bLocal_2941 = 0;
	bool bLocal_2942 = 0;
	var uLocal_2943 = 0;
	bool bLocal_2944 = 0;
	int iLocal_2945 = 0;
	int iLocal_2946 = 0;
	bool bLocal_2947 = 0;
	int iLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	int iLocal_2952 = 0;
	int iLocal_2953 = 0;
	var uLocal_2954 = 0;
	bool bLocal_2955 = 0;
	bool bLocal_2956 = 0;
	bool bLocal_2957 = 0;
	bool bLocal_2958 = 0;
	int iLocal_2959 = 0;
	int iLocal_2960 = 0;
	int iLocal_2961 = 0;
	int iLocal_2962 = 0;
	bool bLocal_2963 = 0;
	bool bLocal_2964 = 0;
	bool bLocal_2965 = 0;
	int iLocal_2966 = 0;
	bool bLocal_2967 = 0;
	var uLocal_2968 = 0;
	bool bLocal_2969 = 0;
	bool bLocal_2970 = 0;
	int iLocal_2971 = 0;
	bool bLocal_2972 = 0;
	int iLocal_2973 = 0;
	int iLocal_2974 = 0;
	int iLocal_2975 = 0;
	int iLocal_2976 = 0;
	int iLocal_2977 = 0;
	bool bLocal_2978 = 0;
	var uLocal_2979[2] = { 0, 0 };
	int iLocal_2982 = 0;
	int iLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	int iLocal_2986[1] = { 0 };
	var uLocal_2988[2] = { 0, 0 };
	int iLocal_2991 = 0;
	struct<2> Local_2992 = { 0, 0 } ;
	var uLocal_2994 = 0;
	struct<20> Local_2995[1];
	struct<7> Local_3016 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_3036 = 0;
	int iLocal_3037 = 0;
	int iLocal_3038 = 0;
	int iLocal_3039 = 0;
	int iLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	int iLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	int iLocal_3049 = 0;
	int iLocal_3050 = 0;
	int iLocal_3051 = 0;
	int iLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	struct<3> Local_3059 = { 0, 0, 0 } ;
	struct<3> Local_3062 = { 0, 0, 0 } ;
	float fLocal_3065 = 0f;
	float fLocal_3066 = 0f;
	char cLocal_3067[64] = "";
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	int iLocal_3083 = 0;
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
	int iLocal_3108 = 0;
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	char* sLocal_3113 = NULL;
	int iLocal_3114 = 0;
	var uLocal_3115 = 0;
	int iLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 8;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	int iLocal_3135 = 0;
	bool bLocal_3136 = 0;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	var uVar1;
	
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
	Local_92 = { 500f, 500f, 500f };
	fLocal_427 = 0f;
	fLocal_428 = 0f;
	fLocal_429 = 0f;
	fLocal_430 = 0.8f;
	fLocal_431 = 1.5f;
	fLocal_432 = 0.5f;
	Local_436 = { 401.55f, -1631.309f, 29.3f };
	iLocal_439 = 1;
	iLocal_440 = 1;
	iLocal_648 = joaat("towtruck");
	Local_2530 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_2533 = 275.5635f;
	iLocal_2595 = -1;
	iLocal_2596 = -1;
	iLocal_2597 = -1;
	iLocal_2598 = -1;
	fLocal_2599 = 0f;
	sLocal_2617 = "";
	sLocal_2618 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2930 = 1;
	iLocal_2931 = 1;
	iLocal_2932 = 1;
	iLocal_2940 = 1;
	iLocal_2975 = 1;
	iLocal_3036 = -1;
	Local_3059 = { -229.8159f, -1172f, 21.8557f };
	iLocal_3114 = 1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		if (!func_275())
		{
			func_273(&Global_96007, 3);
			func_246(SCRIPT::GET_THIS_SCRIPT_NAME());
		}
		func_242();
	}
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0) && ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(ScriptParam_0) && !ENTITY::IS_ENTITY_DEAD(ScriptParam_0.f_1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0, 1, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_1, 1, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
	func_241(&Local_649);
	func_240(&Local_1869);
	func_239();
	iVar0 = 0;
	func_238(&uLocal_3090);
	switch (ScriptParam_0.f_2)
	{
		case 1:
			if (ScriptParam_0.f_4)
			{
				iLocal_419 = ScriptParam_0.f_3;
				if (iVar0 > 0)
				{
					iLocal_2603 = iVar0;
				}
				else
				{
					iLocal_2603 = func_237(100000f, iLocal_419, Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iLastNodeIndex);
				}
			}
			else
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0)
				{
					bLocal_2958 = true;
				}
				if (!func_236())
				{
					func_233();
				}
				else
				{
					iLocal_2603 = Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iLastNodeIndex;
					iLocal_419 = Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_eLastNode;
				}
				ScriptParam_0.f_3 = iLocal_419;
			}
			iLocal_2991 = 0;
			break;
	}
	if (!bLocal_2958)
	{
		func_232(&Local_2347, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_419 == 0)
	{
		iLocal_2961 = 1;
		if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iHandiCompleted % 2) == 0)
		{
			bLocal_2964 = true;
		}
	}
	else if (iLocal_419 == 2)
	{
		bLocal_2965 = true;
		iLocal_2961 = 1;
	}
	if (iLocal_419 == 3 || iLocal_419 == 1)
	{
		iLocal_2960 = 1;
		iLocal_2961 = 1;
		iLocal_3050 = 1;
	}
	else if (iLocal_419 == 4)
	{
		iLocal_2961 = 1;
		iLocal_3050 = Local_1869[func_231() /*28*/].f_27;
	}
	func_230();
	func_206(&ScriptParam_0);
	if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted >= 5)
	{
		bLocal_2944 = true;
		bLocal_2944 = bLocal_2944;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_3108 = ScriptParam_0.f_1;
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck2"))
				{
					iLocal_3108 = iVar1;
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3108))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3108, 1, 1);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3108);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_3108, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3108, 1);
		}
	}
	uLocal_3111 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	uLocal_3112 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3059 - Vector(15f, 15f, 15f), Local_3059 + Vector(15f, 15f, 15f), 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_3059 - Vector(15f, 15f, 15f), Local_3059 + Vector(15f, 15f, 15f));
	func_205();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_201(&uLocal_2655);
		func_200();
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (bLocal_2944 && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::NEW_LOAD_SCENE_START(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				MISC::CLEAR_AREA_OF_VEHICLES(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, 0);
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		if (iLocal_3114 < 15)
		{
			func_198(&iLocal_3108, &uLocal_2984, &Local_2995, &Local_2624, &cLocal_3067, &iLocal_3051, iLocal_3046, bLocal_2957, &iLocal_2966, iLocal_2948, bLocal_2938, bLocal_460, iLocal_3114, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_2991)
			{
				case 0:
					if (iLocal_3114 > 4 && iLocal_3114 < 15)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3108, 0))
						{
						}
						if (iLocal_419 != 2 && iLocal_419 != 4)
						{
							if (!func_195(&uLocal_3121, Local_2995[0 /*20*/].f_6, iLocal_3108, &uLocal_3041, &uLocal_3042, bLocal_2944))
							{
								iLocal_3083 = 15;
								func_242();
							}
						}
						if (bLocal_2958 || uLocal_2954)
						{
							func_194(&uLocal_3122, iLocal_3108, &uLocal_3044, &uLocal_3045, bLocal_2944);
						}
					}
					if (bLocal_2958)
					{
						if (iLocal_3114 >= 7)
						{
							func_189(iLocal_3108, Local_2995[0 /*20*/].f_6, Local_3016, &(Local_2995[0 /*20*/].f_8), &Local_2624, &cLocal_3067, &Local_436, bLocal_2958, &(Local_2995[0 /*20*/]));
						}
					}
					bLocal_2947 = false;
					if (((iLocal_419 == 0 || iLocal_419 == 2) && iLocal_3114 > 4) && iLocal_3114 < 17)
					{
						if (bLocal_2964 && iLocal_2975)
						{
							func_187();
							func_186(Local_2995[0 /*20*/].f_6, Local_2995[0 /*20*/]);
						}
						if (!bLocal_2958)
						{
							func_175();
						}
					}
					else if ((iLocal_419 == 1 && iLocal_3114 > 4) && iLocal_3114 < 17)
					{
						if (func_171())
						{
							func_168();
						}
						if (iLocal_3118 > 0)
						{
							func_164();
						}
					}
					else if (iLocal_419 == 3)
					{
						if ((iLocal_3114 == 5 && iLocal_3116 < 1) && !iLocal_2929)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2995[0 /*20*/].f_6))
								{
									iLocal_2929 = 1;
									TASK::CLEAR_PED_TASKS(Local_2995[0 /*20*/]);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0);
								}
							}
						}
					}
					if (iLocal_2949 && !bLocal_441)
					{
						func_160(&(Local_1869[func_231() /*28*/]), &(Local_1869[func_231() /*28*/].f_10), Local_649[iLocal_2603 /*23*/].f_1, &(Local_2995[0 /*20*/]), &(Local_2995[0 /*20*/].f_2), &uLocal_2988, fLocal_3065, sLocal_2618, &sLocal_2619, iLocal_3050);
					}
					if (iLocal_419 == 4)
					{
						func_158(&uLocal_3115, iLocal_3109, iLocal_3110, iLocal_3108, &(Local_2995[0 /*20*/].f_2), iLocal_3050, sLocal_2618, &sLocal_2619, &iLocal_2983, bLocal_2944, &(Local_2995[0 /*20*/].f_6));
					}
					if (!bLocal_2944)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2983) && !ENTITY::IS_ENTITY_DEAD(iLocal_2983))
						{
							if (func_150(iLocal_2983, 0, &uLocal_411, &iLocal_418, 0, 1, 0, 1, 0))
							{
								bLocal_2941 = true;
								TASK::TASK_SMART_FLEE_PED(iLocal_2983, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							if (func_148())
							{
								bLocal_2942 = true;
							}
						}
					}
					if (bLocal_441 && !bLocal_2963)
					{
						if (func_150(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, &uLocal_411, &iLocal_418, 0, 1, 1, 1, 0))
						{
							func_147();
							if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_2995[0 /*20*/]);
								PED::SET_PED_KEEP_TASK(Local_2995[0 /*20*/], 1);
								TASK::TASK_SMART_FLEE_PED(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								iLocal_3083 = 18;
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_1))
							{
								TASK::CLEAR_PED_TASKS(Local_2995[0 /*20*/].f_1);
								PED::SET_PED_KEEP_TASK(Local_2995[0 /*20*/].f_1, 1);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1, 256);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
								if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_1))
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/].f_1, uLocal_420);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
								iLocal_3083 = 18;
							}
							if (!bLocal_2958)
							{
								switch (iLocal_418)
								{
									case 16:
										if (iLocal_419 == 2)
										{
											iLocal_3083 = 17;
											func_242();
										}
										else
										{
											iLocal_3083 = 16;
											func_242();
										}
										break;
									
									case 2:
										func_146(&Local_2347, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_3083 = 3;
										func_242();
										break;
								}
							}
							else
							{
								iLocal_3083 = 21;
								func_242();
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
							{
								func_242();
							}
						}
						if (func_150(Local_2995[0 /*20*/].f_1, Local_2995[0 /*20*/].f_6, &uLocal_411, &iLocal_418, 0, 1, 0, 1, 0))
						{
							func_147();
							if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_1))
							{
								TASK::CLEAR_PED_TASKS(Local_2995[0 /*20*/].f_1);
								PED::SET_PED_KEEP_TASK(Local_2995[0 /*20*/].f_1, 1);
								TASK::TASK_SMART_FLEE_PED(Local_2995[0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								iLocal_3083 = 18;
							}
						}
					}
					else if (bLocal_2963)
					{
					}
					if (!bLocal_2947 && func_145(0))
					{
						if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3108)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3108, 0))
						{
							if (!iLocal_467)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/].f_6))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
									{
										func_129(&uLocal_398, ENTITY::GET_ENTITY_COORDS(Local_2995[0 /*20*/].f_6, 1), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_129(&uLocal_398, Local_2628, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_145(0))
					{
						func_128(&uLocal_398, 0, 0);
					}
					func_126(&uLocal_3093, 7f, 1);
					func_125();
					func_124();
					if (((!bLocal_466 || iLocal_3114 >= 15) || uLocal_2943) || bLocal_2938)
					{
						if (func_49())
						{
							func_43();
						}
					}
					if (iLocal_3114 == 9)
					{
						if (iLocal_419 == 1 || iLocal_419 == 3)
						{
							func_13(Local_2347, &Local_2995, &iLocal_3108);
						}
					}
					break;
			}
			if (func_1(ScriptParam_0))
			{
				func_242();
			}
		}
	}
}

int func_1(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0xB46
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_2969)
	{
		iLocal_3083 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_3083 = 11;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/].f_6))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2995[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_3083 = 15;
				return 1;
			}
		}
	}
	if (bLocal_466)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_3051) > 50000)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(iLocal_3108))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3108, 1) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 625f)
			{
				iLocal_3083 = 0;
				return 1;
			}
		}
	}
	if (bLocal_2941)
	{
		iLocal_3083 = 22;
		return 1;
	}
	if (bLocal_2942)
	{
		iLocal_3083 = 23;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3108))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3108, 0))
		{
			iLocal_3083 = 2;
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3108))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_3108))
		{
			iLocal_3083 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_3114 > 4 && iLocal_3114 < 17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/].f_6))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
					{
						iLocal_3083 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_419)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_441)
					{
						if (!bLocal_2963)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
								{
									iLocal_3083 = 8;
									return 1;
								}
							}
						}
						if (bLocal_2964)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/].f_1))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_1))
								{
									iLocal_3083 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_3083 = 3;
		return 1;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_3108))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3108);
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_3108))
	{
		iLocal_3083 = 4;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0xD8E
{
	if (!iLocal_2950)
	{
		if (func_3(&uLocal_3099, 180f))
		{
			iLocal_2950 = 1;
			func_146(&Local_2347, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&uLocal_3099, 300f))
	{
		if (iLocal_419 != 2)
		{
			iLocal_3083 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0, float fParam1)//Position - 0xDE3
{
	if (func_7(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)//Position - 0xE05
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)//Position - 0xE44
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_6(var uParam0)//Position - 0xE8C
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_7(var uParam0)//Position - 0xE9C
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_8()//Position - 0xEAC
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_419 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_3114 < 9)
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
	if (!func_11(Local_2624[0 /*3*/]))
	{
		if (!iLocal_2951)
		{
			if (func_9(Local_2624[0 /*3*/], 0) > (fLocal_429 + 400f))
			{
				func_146(&Local_2347, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_2951 = 1;
			}
		}
		if (func_9(Local_2624[0 /*3*/], 0) > (fLocal_429 + 450f))
		{
			iLocal_3083 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, int iParam3)//Position - 0xF59
{
	return func_10(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, iParam3);
}

float func_10(int iParam0, struct<3> Param1, int iParam4)//Position - 0xF73
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam4);
}

int func_11(struct<3> Param0)//Position - 0xF9C
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()//Position - 0xFC6
{
	return Global_90014.f_290 > 0;
}

void func_13(struct<165> Param0, int iParam165, int iParam166)//Position - 0xFD7
{
	if (!iLocal_462)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_2604 > 1)
			{
				if (func_42(iParam165, iParam166))
				{
					if (func_41())
					{
						Local_476 = { func_40() };
						func_38();
						iLocal_462 = 1;
						iLocal_2604 = 3;
					}
					else
					{
						iLocal_462 = 1;
						iLocal_2604 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2604)
	{
		case 0:
			if (!func_41())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2604 = 1;
			}
			break;
		
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && iLocal_467) && !func_37("TOWT_OBJ_04", 0, 0))
			{
				if (!func_41())
				{
					func_232(&Param0, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
					{
						if (iLocal_419 == 1)
						{
							func_146(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_482 = "TOW_TRN_C1";
						}
						else if (iLocal_419 == 3)
						{
							func_146(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_C";
						}
						bLocal_463 = true;
					}
					else if (iLocal_419 == 1)
					{
						if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
						{
							func_232(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_146(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_482 = "TOW_MECH";
						}
						else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
						{
							func_232(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_146(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_482 = "TOW_MECH2";
						}
						else
						{
							func_36(Param0, iParam165);
						}
						bLocal_463 = true;
					}
					else if (iLocal_419 == 3)
					{
						if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
						{
							func_232(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_146(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_CONV";
						}
						else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
						{
							func_232(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_146(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_CON2";
						}
						else
						{
							func_35(Param0, iParam165);
						}
						bLocal_463 = true;
					}
				}
				else if (func_33(sLocal_482))
				{
					iLocal_2604 = 2;
				}
			}
			break;
		
		case 3:
			func_32(Param0, iParam165);
			if (iLocal_464)
			{
				iLocal_2604 = 2;
			}
			break;
		
		case 2:
			if (func_31(iParam166))
			{
				if (bLocal_463)
				{
					if (iLocal_462)
					{
						if (!func_41())
						{
							if (func_14(&Local_2347, "TOWAUD", sLocal_482, &Local_476, 8, 0, 0))
							{
								iLocal_462 = 0;
								iLocal_2604 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_31(iParam166);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12B8
{
	func_30(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)//Position - 0x130C
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_29();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_27();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_20();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_19())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_18())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_17();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_16();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_29();
	}
	return 0;
}

void func_16()//Position - 0x15D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_17()//Position - 0x1608
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_18()//Position - 0x169D
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0x16C4
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_20()//Position - 0x175D
{
	if (func_26(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_21();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_21()//Position - 0x17FE
{
	func_22();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_22()//Position - 0x1817
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_26(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_23(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_23(int iParam0)//Position - 0x1914
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0x1920
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0x195D
{
	if (func_23(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_26(int iParam0)//Position - 0x1987
{
	return Global_34913 == iParam0;
}

void func_27()//Position - 0x1995
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_28(int iParam0, int iParam1)//Position - 0x19EB
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_29()//Position - 0x1A26
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1A7D
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_31(var uParam0)//Position - 0x1AD3
{
	switch (iLocal_2605)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_464 = 0;
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
					iLocal_464 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_32(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x1B5B
{
	switch (iLocal_2605)
	{
		case 1:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_419 == 1)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (func_146(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_33(char* sParam0)//Position - 0x22F7
{
	var uVar0;
	
	if (func_41())
	{
		MemCopy(&uVar0, {func_34()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_34()//Position - 0x231F
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x2343
{
	int iVar0;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_232(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_146(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_232(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_146(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_232(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_146(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_232(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_146(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH4";
	}
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x2425
{
	func_232(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_146(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_482 = "TOW_GEN_MCH2";
}

bool func_37(char* sParam0, int iParam1, int iParam2)//Position - 0x2458
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_38()//Position - 0x2476
{
	Global_14558 = 0;
	func_39();
}

void func_39()//Position - 0x2486
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16703 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

struct<6> func_40()//Position - 0x24AA
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14560[iVar8 /*6*/])))
					{
						return Global_14560[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_41()//Position - 0x2556
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_42(var uParam0, var uParam1)//Position - 0x2578
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_2605 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*20*/])->f_6) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_426)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((uParam0[0 /*20*/])->f_6, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT((uParam0[0 /*20*/])->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((uParam0[0 /*20*/])->f_6))
			{
				iLocal_2605 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0 /*20*/])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_2605 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, 0))
		{
			iLocal_2605 = 6;
			return 1;
		}
	}
	return 0;
}

void func_43()//Position - 0x269B
{
	func_47(&Global_96007, 3);
	func_273(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBools), 8192);
	func_44();
	func_168();
}

void func_44()//Position - 0x26C4
{
	func_45();
}

int func_45()//Position - 0x26D1
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_46(bool bParam0)//Position - 0x271C
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_47(var uParam0, int iParam1)//Position - 0x2747
{
	func_48(uParam0, iParam1);
}

void func_48(var uParam0, var uParam1)//Position - 0x2757
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_49()//Position - 0x276C
{
	var uVar0;
	var uVar1;
	char* sVar2;
	var uVar3;
	var uVar6;
	var uVar9;
	
	switch (iLocal_3114)
	{
		case 1:
			func_123(14);
			if (iLocal_419 == 3)
			{
				if (func_121(&Local_3062, &fLocal_3065, &uLocal_3053, &uLocal_3056))
				{
					iLocal_3114 = 2;
				}
			}
			else
			{
				iLocal_3114 = 2;
			}
			break;
		
		case 2:
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				switch (iLocal_419)
				{
					case 3:
						func_232(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_146(&Local_2347, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 2:
						func_232(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_146(&Local_2347, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 0:
						func_232(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2964)
						{
							if (func_146(&Local_2347, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3114 = 4;
							}
						}
						else if (func_146(&Local_2347, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 1:
						func_232(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_146(&Local_2347, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 4:
						func_232(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_146(&Local_2347, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_419)
			{
				case 3:
					if (func_114("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2995[0 /*20*/].f_6, 10);
						}
						func_112();
						func_238(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 2:
					if (func_114("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_2631 = { (Local_2624[0 /*3*/] + 15f), (Local_2624[0 /*3*/].f_1 + 15f), (Local_2624[0 /*3*/].f_2 + 15f) };
						Local_2634 = { (Local_2624[0 /*3*/] - 15f), (Local_2624[0 /*3*/].f_1 - 15f), (Local_2624[0 /*3*/].f_2 - 15f) };
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2631, Local_2634, 0, 1);
						iLocal_2962 = 1;
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2995[0 /*20*/].f_6, 1);
						func_238(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 0:
					if (func_114("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_238(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 1:
					if (func_114("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2995[0 /*20*/].f_6, 1);
						func_112();
						VEHICLE::SET_RANDOM_TRAINS(0);
						func_111(0, 0);
						func_111(1, 0);
						func_111(2, 0);
						func_111(3, 0);
						func_111(4, 0);
						func_111(5, 0);
						func_111(6, 0);
						func_111(7, 0);
						func_111(8, 0);
						func_111(9, 0);
						func_111(10, 0);
						func_111(11, 0);
						iLocal_2959 = 1;
						func_238(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 4:
					if (func_114("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2995[0 /*20*/].f_6, 1);
						func_112();
						func_238(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/].f_6))
				{
					Local_2995[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[0 /*20*/].f_6);
					HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_8, 3);
					HUD::SET_BLIP_ROUTE(Local_2995[0 /*20*/].f_8, 1);
				}
			}
			break;
		
		case 5:
			func_106();
			if (func_98(&iLocal_3116, 0, "TOW_BREAK1"))
			{
				iLocal_3114 = 7;
			}
			break;
		
		case 6:
			if (!func_41())
			{
				func_97(sLocal_3113, 7500, 1);
				StringCopy(&cLocal_3067, sLocal_3113, 64);
				if (iLocal_419 == 3)
				{
					iLocal_3114 = 5;
				}
				else
				{
					iLocal_3114 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_419)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_2628))
					{
						Local_2628 = { Local_69[0 /*3*/] };
					}
					func_96(8, &Local_3016);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_419 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], iLocal_3108, 0))
			{
				bLocal_2956 = true;
			}
			func_95();
			if (func_88(sVar2, Local_2628))
			{
				if (iLocal_419 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], iLocal_3108, 0))
				{
					bLocal_2956 = false;
					iLocal_2952 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/]))
					{
						Local_2995[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[0 /*20*/]);
						HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_9, 3);
						HUD::SET_BLIP_SCALE(Local_2995[0 /*20*/].f_9, 0.7f);
					}
					iLocal_3114 = 5;
				}
				else
				{
					iLocal_3114 = 9;
				}
			}
			if (func_86(&uVar3, &uVar6, &uVar9))
			{
				bLocal_2934 = true;
				iLocal_3114 = 9;
			}
			break;
		
		case 9:
			if (iLocal_419 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_85(sVar2))
			{
				func_128(&uLocal_398, 0, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2995[0 /*20*/].f_6, 0, 0);
				if (iLocal_3037 == 0)
				{
					iLocal_2940 = 0;
					iLocal_3114 = 15;
				}
				else
				{
					func_97("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_3067, "TOWT_OBJ_05", 64);
					iLocal_3114 = 7;
				}
			}
			break;
		
		case 15:
			func_84();
			if (bLocal_2938)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_2984))
				{
					HUD::REMOVE_BLIP(&uLocal_2984);
				}
			}
			HUD::CLEAR_HELP(1);
			fLocal_428 = (fLocal_428 + 500f);
			if (iLocal_469 != 0 && !bLocal_2934)
			{
				if (bLocal_2944)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_469) < 12000)
					{
						fLocal_428 = (fLocal_428 + 50f);
					}
				}
			}
			if (!bLocal_2944)
			{
				fLocal_428 = 0f;
			}
			fLocal_3066 = func_4(&uLocal_3090);
			fLocal_3066 = (fLocal_3066 * 1000f);
			uVar1 = SYSTEM::ROUND(fLocal_3066);
			STATS::PLAYSTATS_ODDJOB_DONE(uVar1, 14, 0);
			if (iLocal_419 != 2)
			{
			}
			if (bLocal_2944)
			{
				fLocal_428 = (fLocal_428 - fLocal_427);
			}
			iLocal_471 = SYSTEM::ROUND(fLocal_428);
			func_83(&uLocal_2607, "TOW_UI07", 500, SYSTEM::ROUND(fLocal_427), SYSTEM::ROUND(fLocal_428), "TOW_UI08", 4000, 1);
			if (iLocal_471 > 0)
			{
				func_56(0, iLocal_471);
			}
			func_55(1);
			iLocal_3114 = 16;
			break;
		
		case 16:
			if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				HUD::CLEAR_HELP(1);
			}
			if (!func_50(&uLocal_2607, 0))
			{
				HUD::CLEAR_THIS_PRINT("TOW_TUT_04A");
				HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03Ga");
				iLocal_3114 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_69[0 /*3*/] = { Local_69[0 /*3*/] };
	return 0;
}

int func_50(var uParam0, int iParam1)//Position - 0x2E43
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_53(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_53(&(uParam0->f_5));
				func_52(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_4(&(uParam0->f_5)) > 0.33f)
			{
				func_51(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_53(&(uParam0->f_5));
			func_52(uParam0, 1051260355);
		}
		else if (func_4(&(uParam0->f_5)) > 0.33f)
		{
			func_51(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_51(var uParam0)//Position - 0x2F46
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_52(var uParam0, int iParam1)//Position - 0x2F5C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_53(var uParam0)//Position - 0x2F82
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)//Position - 0x2F91
{
	uParam0->f_1 = (func_5(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55(bool bParam0)//Position - 0x2FBF
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_21())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

void func_56(int iParam0, int iParam1)//Position - 0x3032
{
	int iVar0;
	
	func_58(Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iParam0 /*4*/], func_82(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_SAVE_DATA.PROPERTIES_SAVED_DATA.f_69 = (Global_SAVE_DATA.PROPERTIES_SAVED_DATA.f_69 + iParam1);
			break;
		
		case 2:
			Global_SAVE_DATA.PROPERTIES_SAVED_DATA.f_70 = (Global_SAVE_DATA.PROPERTIES_SAVED_DATA.f_70 + iParam1);
			break;
		
		case 0:
			Global_SAVE_DATA.PROPERTIES_SAVED_DATA.f_71 = (Global_SAVE_DATA.PROPERTIES_SAVED_DATA.f_71 + iParam1);
			break;
	}
	STATS::STAT_GET_INT(func_57(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(func_57(iParam0, 1), iVar0, 1);
}

int func_57(int iParam0, int iParam1)//Position - 0x30D9
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_58(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x34B7
{
	int iVar0;
	int iVar1;
	
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_59(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x359E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_81();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_80(99, 1);
					func_79(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_79(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_79(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_67(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_66(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_79(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_66(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_79(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_79(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_79(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_66(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_65(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_80(95, iParam3);
					break;
				
				case 1:
					func_80(97, iParam3);
					break;
				
				case 2:
					func_80(96, iParam3);
					break;
			}
			func_80(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_62(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_62(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_79(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_79(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_79(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/]++;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1++;
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_61(iParam0);
	if (Global_34913 == 15)
	{
		func_60(0);
	}
	return 1;
}

void func_60(bool bParam0)//Position - 0x3B9D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_61(int iParam0)//Position - 0x3E1F
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_62(int iParam0)//Position - 0x3E79
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_64() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_64() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_63(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_63(int iParam0)//Position - 0x3F3A
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_64()//Position - 0x3FB3
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_65(int iParam0)//Position - 0x3FC0
{
	func_80(93, iParam0);
	func_80(29, iParam0);
	func_80(30, iParam0);
}

bool func_66(int iParam0)//Position - 0x3FE0
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_64() /*8053*/].f_5756.f_10, iParam0);
}

int func_67(bool bParam0)//Position - 0x401C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_78(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_68(27, 1);
	return 1;
}

int func_68(int iParam0, int iParam1)//Position - 0x40D3
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_69(iParam0, iParam1);
}

int func_69(int iParam0, int iParam1)//Position - 0x40EE
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_77(&Global_2544859))
	{
		if (func_75(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_70(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_70(var uParam0, int iParam1)//Position - 0x4172
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	func_73(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_71(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_71(var uParam0, int iParam1)//Position - 0x41F8
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_72(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_72(var uParam0, int iParam1)//Position - 0x4248
{
	return (*uParam0)[iParam1] == 61;
}

void func_73(var uParam0)//Position - 0x4259
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_74(uParam0, iVar0);
		iVar0++;
	}
	func_54(&(uParam0->f_62), (8f - 0.5f));
}

void func_74(var uParam0, int iParam1)//Position - 0x4290
{
	(*uParam0)[iParam1] = 61;
}

bool func_75(var uParam0, int iParam1)//Position - 0x42A0
{
	return func_76(uParam0, iParam1) != -1;
}

int func_76(var uParam0, int iParam1)//Position - 0x42B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_77(var uParam0)//Position - 0x42DF
{
	return uParam0->f_68 == 1;
}

int func_78(int iParam0, int iParam1)//Position - 0x42ED
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_79(int iParam0, int iParam1)//Position - 0x433E
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_80(int iParam0, int iParam1)//Position - 0x4361
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_81()//Position - 0x43BE
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_82(int iParam0)//Position - 0x4433
{
	switch (iParam0)
	{
		case 0:
			return 97;
			break;
		
		case 1:
			return 98;
			break;
		
		case 2:
			return 99;
			break;
		
		case 3:
			return 100;
			break;
		
		case 4:
			return 101;
			break;
		
		case 5:
			return 102;
			break;
		
		case 6:
			return 103;
			break;
		
		case 7:
			return 104;
			break;
		
		case 8:
			return 105;
			break;
		
		case 9:
			return 106;
			break;
		
		case 10:
			return 107;
			break;
		
		case 11:
			return 108;
			break;
		
		case 12:
			return 109;
			break;
		
		case 13:
			return 110;
			break;
		
		case 14:
			return 111;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_83(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)//Position - 0x4523
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam7);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_53(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

void func_84()//Position - 0x4582
{
	Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted++;
	Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_eLastNode = iLocal_419;
	switch (iLocal_419)
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

int func_85(char* sParam0)//Position - 0x4643
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar7;
	
	if (iLocal_3036 == -1)
	{
	}
	if (Local_2995[iLocal_3036 /*20*/].f_15)
	{
		if ((func_4(&(Local_2995[iLocal_3036 /*20*/].f_11)) - Local_2995[iLocal_3036 /*20*/].f_14) > 120f)
		{
			VEHICLE::EXPLODE_VEHICLE(Local_2995[iLocal_3036 /*20*/].f_6, 1, 0);
		}
	}
	if (func_86(&uVar0, &uVar3, &uVar6))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2995[iLocal_3036 /*20*/]) && PED::IS_PED_IN_VEHICLE(Local_2995[iLocal_3036 /*20*/], iLocal_3108, 0))
		{
			VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_3108, 6f, 2, 0);
			iLocal_465 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iLocal_3036 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iLocal_3036 /*20*/]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_GOTO_ENTITY_OFFSET(0, Local_2995[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar7 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
				if (iVar7 == 0)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar7 == 1)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar7 == 2)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
				TASK::TASK_PERFORM_SEQUENCE(Local_2995[iLocal_3036 /*20*/], uLocal_420);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
				PED::SET_PED_KEEP_TASK(Local_2995[iLocal_3036 /*20*/], 1);
			}
			if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 1) || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2983) && !ENTITY::IS_ENTITY_DEAD(iLocal_2983))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 227.082f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2983))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2983, uLocal_420);
						PED::SET_PED_KEEP_TASK(iLocal_2983, 1);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
				}
			}
			if (func_41())
			{
				func_147();
			}
			if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 1) || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 4)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0)
				{
					func_146(&Local_2347, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 1)
				{
					func_146(&Local_2347, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 4)
				{
					func_146(&Local_2347, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
					func_146(&Local_2347, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_146(&Local_2347, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					func_146(&Local_2347, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_146(&Local_2347, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2958)
		{
		}
		iLocal_467 = 0;
		HUD::REMOVE_BLIP(&(Local_2995[iLocal_3036 /*20*/].f_8));
		func_53(&uLocal_3087);
		iLocal_3037 = (iLocal_3037 - 1);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iLocal_3036 /*20*/].f_6))
	{
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6))
		{
			iLocal_467 = 0;
			func_128(&uLocal_398, 0, 0);
			HUD::SET_BLIP_ROUTE(Local_2995[iLocal_3036 /*20*/].f_8, 0);
			HUD::REMOVE_BLIP(&(Local_2995[iLocal_3036 /*20*/].f_8));
			if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iLocal_3036 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iLocal_3036 /*20*/].f_6))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_2995[iLocal_3036 /*20*/].f_8))
				{
					Local_2995[iLocal_3036 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[iLocal_3036 /*20*/].f_6);
					HUD::SET_BLIP_COLOUR(Local_2995[iLocal_3036 /*20*/].f_8, 3);
				}
			}
			if (iLocal_419 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_2977)
					{
						if (func_146(&Local_2347, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_2977)
					{
						if (func_146(&Local_2347, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_2977)
					{
						if (func_146(&Local_2347, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_2977)
					{
						if (func_146(&Local_2347, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
			}
			func_53(&uLocal_3087);
			if (!bLocal_2956)
			{
				if (func_41())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(1);
					HUD::CLEAR_PRINTS();
					func_97(sParam0, 7500, 1);
				}
				if (!func_41())
				{
					if (iLocal_2930)
					{
						HUD::CLEAR_PRINTS();
						func_97(sParam0, 7500, 1);
						iLocal_2930 = 0;
					}
					else
					{
						HUD::CLEAR_PRINTS();
						func_97(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_3067, sParam0, 64);
				}
			}
			iLocal_3114 = 7;
		}
	}
	return 0;
}

int func_86(var uParam0, var uParam1, var uParam2)//Position - 0x4CAE
{
	if (iLocal_3036 != -1)
	{
		if (!func_11(Local_3016.f_14))
		{
			Local_2628 = { Local_3016.f_14 };
			*uParam0 = { Local_3016.f_7 };
			*uParam1 = { Local_3016.f_10 };
			*uParam2 = Local_3016.f_13;
		}
		else
		{
			*uParam0 = { Local_3016 };
			*uParam1 = { Local_3016.f_3 };
			*uParam2 = Local_3016.f_6;
		}
		if (!bLocal_2958)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2628, 30f, 30f, 2f, 1, 1, 0))
				{
					if (iLocal_419 == 0 || iLocal_419 == 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2995[0 /*20*/].f_6, 1);
							bLocal_2938 = true;
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iLocal_3036 /*20*/].f_6))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2995[iLocal_3036 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, 0, 0))
			{
				if (iLocal_2940)
				{
					func_87("TOWT_HELP_UH", -1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iLocal_3036 /*20*/].f_6))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6) || (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2995[iLocal_3036 /*20*/].f_6, 0) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6)))
					{
						if (func_41())
						{
							func_147();
						}
						func_128(&uLocal_398, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_87(char* sParam0, int iParam1)//Position - 0x4E36
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_88(char* sParam0, struct<3> Param1)//Position - 0x4E4D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_2944 && !bLocal_2955)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(iLocal_3108))
		{
			iVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_3108);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2) != Local_2995[0 /*20*/].f_6)
					{
						if (!iLocal_2971)
						{
							func_232(&uLocal_483, 3, iLocal_2983, "TONYA", 0, 1);
							if (func_146(&uLocal_483, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_2971 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2971 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iVar1 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iVar1 /*20*/].f_6))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[iVar1 /*20*/].f_6) && func_94())
				{
					VEHICLE::SET_VEHICLE_SIREN(iLocal_3108, 1);
					func_91();
					func_128(&uLocal_398, 0, 0);
					iLocal_467 = 1;
					if (iLocal_2960 && !PED::IS_PED_IN_VEHICLE(Local_2995[iVar1 /*20*/], iLocal_3108, 0))
					{
						bVar0 = false;
						if (iLocal_3119 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_3119 = 5;
						}
					}
					if (bVar0)
					{
						func_90(&uLocal_3093);
						HUD::SET_BLIP_ROUTE(Local_2995[iVar1 /*20*/].f_8, 0);
						iLocal_2966 = 0;
						func_89(Local_2995[iVar1 /*20*/].f_8);
						Local_2995[iVar1 /*20*/].f_14 = func_4(&(Local_2995[iVar1 /*20*/].f_11));
						if (iLocal_2991 == 0)
						{
							Local_2995[iVar1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Param1);
							fLocal_429 = func_9(Param1, 0);
							Local_2624[0 /*3*/] = { Param1 };
						}
						if (iLocal_419 == 4)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_2995[0 /*20*/].f_6, 0, 0);
						}
						func_53(&uLocal_3099);
						HUD::SET_BLIP_COLOUR(Local_2995[iVar1 /*20*/].f_8, 5);
						HUD::SET_BLIP_ROUTE(Local_2995[iVar1 /*20*/].f_8, 1);
						if (iLocal_419 == 0 && bLocal_2964)
						{
						}
						else if (iLocal_2931)
						{
							func_97(sParam0, 7500, 1);
							iLocal_2931 = 0;
						}
						StringCopy(&cLocal_3067, sParam0, 64);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_2624[0 /*3*/], 6f, 0, 0, 0, 0, 0);
						iLocal_3036 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_89(var uParam0)//Position - 0x5086
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		HUD::REMOVE_BLIP(&uParam0);
	}
}

void func_90(var uParam0)//Position - 0x509D
{
	func_51(uParam0);
	StringCopy(&cLocal_316, "", 32);
}

void func_91()//Position - 0x50B2
{
	func_92("TOW_TUT_03");
	func_92("TOW_TUT_02");
	func_92("TOW_TUT_01");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03a");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03G");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03Ga");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJS_03");
}

void func_92(char* sParam0)//Position - 0x50FA
{
	if (func_93(sParam0))
	{
		HUD::CLEAR_HELP(1);
	}
}

bool func_93(char* sParam0)//Position - 0x5110
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_94()//Position - 0x5123
{
	if (bLocal_2958)
	{
		if (bLocal_2601 && !func_41())
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

void func_95()//Position - 0x514D
{
	int iVar0;
	
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6)) || (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted > 2))
	{
		return;
	}
	switch (iLocal_3049)
	{
		case 0:
			if (!func_7(&uLocal_3105))
			{
				func_238(&uLocal_3105);
				iLocal_3049 = 1;
			}
			break;
		
		case 1:
			if (func_7(&uLocal_3105))
			{
				if (func_4(&uLocal_3105) > 10f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_41())
					{
						iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_87("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_87("TOW_TUT_02", -1);
						}
						else
						{
							func_87("TOW_TUT_04C", -1);
						}
						func_53(&uLocal_3105);
						iLocal_3049 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_3105))
			{
				if (func_4(&uLocal_3105) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_41())
					{
						func_87("TOW_TUT_03", -1);
						func_53(&uLocal_3105);
						iLocal_3049 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&uLocal_3105))
			{
				if (func_4(&uLocal_3105) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_41())
					{
						func_87("TOW_TUT_01", -1);
						iLocal_3049 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_96(int iParam0, var uParam1)//Position - 0x52E0
{
	if (func_11(Local_44[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_44[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_44[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_44[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_44[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_44[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_44[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_44[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_44[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_69[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_97(char* sParam0, int iParam1, int iParam2)//Position - 0x55C0
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_98(int iParam0, int iParam1, char* sParam2)//Position - 0x55D9
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2957)
			{
				if ((func_105(Local_2995[iParam1 /*20*/].f_6, iLocal_3108, &iLocal_2602, 10, 150f, 4f, 1) || iLocal_2952) || iLocal_467)
				{
					if (!bLocal_2935)
					{
						iLocal_2602 = 0;
						func_104(&iLocal_2597);
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2995[iParam1 /*20*/], -875674219) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2995[iParam1 /*20*/], PLAYER::PLAYER_PED_ID(), -1);
						}
						bLocal_2935 = true;
					}
					if (bLocal_2935)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3108, ENTITY::GET_ENTITY_COORDS(Local_2995[iParam1 /*20*/], 1), 25f, 25f, 25f, 0, 1, 0))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2995[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								TASK::STOP_ANIM_TASK(Local_2995[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_103())
							{
								if (iLocal_419 == 1)
								{
									if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
									{
										func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_232(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_146(&Local_2347, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
									{
										func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_232(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_146(&Local_2347, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									TASK::TASK_ENTER_VEHICLE(Local_2995[iParam1 /*20*/], iLocal_3108, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_419 == 3)
								{
									if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
									{
										func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_232(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_146(&Local_2347, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
									{
										func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_232(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_146(&Local_2347, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									TASK::TASK_ENTER_VEHICLE(Local_2995[iParam1 /*20*/], iLocal_3108, 20000, 0, 2f, 1048577, 0);
								}
								if (iLocal_2952)
								{
									HUD::REMOVE_BLIP(&(Local_2995[iParam1 /*20*/].f_8));
									if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iParam1 /*20*/]))
									{
										Local_2995[iParam1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[iParam1 /*20*/]);
										HUD::SET_BLIP_COLOUR(Local_2995[iParam1 /*20*/].f_8, 3);
										HUD::SET_BLIP_SCALE(Local_2995[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3108, ENTITY::GET_ENTITY_COORDS(Local_2995[iParam1 /*20*/], 1), 50f, 50f, 50f, 0, 1, 0))
						{
							if (!iLocal_2976)
							{
								if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
								{
									func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									func_232(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_146(&Local_2347, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_2976 = 1;
									}
								}
								else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
								{
									func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									func_232(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_146(&Local_2347, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_2976 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_2939 = true;
			func_53(&uLocal_3099);
			func_53(&uLocal_3084);
			func_89(Local_2995[iParam1 /*20*/].f_8);
			if (!HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iParam1 /*20*/]))
				{
					Local_2995[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[iParam1 /*20*/]);
					HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2995[0 /*20*/].f_9, 0.7f);
				}
			}
			func_97("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			PED::ADD_RELATIONSHIP_GROUP("TOWBUDDIES", &uLocal_2994);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_2994, 1862763509);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2995[iParam1 /*20*/], uLocal_2994);
			func_102(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(Local_2995[iParam1 /*20*/], iLocal_3108, 0))
			{
				if (func_99(&uLocal_3123, Local_2995[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_3083 = 11;
					func_242();
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2995[iParam1 /*20*/], iLocal_3108, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3108, 9);
					func_89(Local_2995[0 /*20*/].f_9);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2995[iParam1 /*20*/], iLocal_3108, 0) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_419 == 1)
				{
					if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
					{
						if (iLocal_2952)
						{
							func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
					{
						if (iLocal_2952)
						{
							func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_419 == 3)
				{
					if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
					{
						if (iLocal_2952)
						{
							func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
					{
						if (iLocal_2952)
						{
							func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_146(&Local_2347, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_IN_VEHICLE(Local_2995[iParam1 /*20*/], iLocal_3108, 0))
			{
				func_102(iParam1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
				{
					if (iLocal_2952 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_8))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iParam1 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iParam1 /*20*/].f_6))
					{
						Local_2995[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[iParam1 /*20*/].f_6);
						HUD::SET_BLIP_COLOUR(Local_2995[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						func_97("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3067, "TOWT_OBJ_03", 64);
					}
				}
				func_53(&uLocal_3084);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_99(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5DBD
{
	struct<3> Var0;
	struct<3> Var3;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = func_100(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_100(int iParam0, int iParam1)//Position - 0x5E46
{
	return func_101(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

float func_101(int iParam0, int iParam1, int iParam2)//Position - 0x5E5E
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_102(int iParam0)//Position - 0x5EBA
{
	int iVar0;
	
	bLocal_2957 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_2995[iVar0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2995[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_103()//Position - 0x5EFC
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_3108);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_104(int iParam0)//Position - 0x5F48
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x5F69
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uVar0) && PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam6)
			{
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && func_100(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_100(iParam0, 1) < 8f) && ENTITY::GET_ENTITY_SPEED(iParam1) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_106()//Position - 0x6048
{
	int iVar0;
	
	if (!bLocal_2939)
	{
		iVar0 = SYSTEM::ROUND(((300f - func_110(&uLocal_3099)) * 1000f));
		if (iLocal_419 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_107(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			else
			{
				func_107(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_107(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x60B1
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_109(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_108(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
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

void func_108(int iParam0, int iParam1)//Position - 0x61CB
{
	MISC::SET_BIT(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_109(int iParam0, int iParam1)//Position - 0x61E4
{
	return MISC::IS_BIT_SET(Global_1328872.f_3613[iParam0], iParam1);
}

float func_110(var uParam0)//Position - 0x61FD
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_111(int iParam0, bool bParam1)//Position - 0x6239
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_95994, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_95994, iParam0);
	}
	Global_95993 = 1;
}

void func_112()//Position - 0x6262
{
	int iVar0;
	
	iVar0 = func_113(&Local_44, Local_2624[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_2628 = { Local_44[iVar0 /*3*/] };
		func_96(iVar0, &Local_3016);
	}
	else
	{
		Local_2628 = { Local_44[0 /*3*/] };
	}
}

int func_113(var uParam0, struct<3> Param1, float fParam4)//Position - 0x62AA
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = SYSTEM::VDIST2(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam4)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_114(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x6314
{
	fLocal_429 = func_9(Local_3062, 0);
	Local_2624[0 /*3*/] = { Local_3062 };
	sLocal_3113 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_120(Local_3062, fLocal_3065, uParam2, 0))
		{
			func_119(Local_2995[0 /*20*/].f_6, &uLocal_3041, &uLocal_3043);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_2995[0 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2995[0 /*20*/].f_6, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2995[0 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2995[0 /*20*/].f_6, 1);
			return 1;
		}
	}
	else if (func_115(bParam4, 0))
	{
		func_119(Local_2995[0 /*20*/].f_6, &uLocal_3041, &uLocal_3043);
		VEHICLE::SET_FORCE_HD_VEHICLE(Local_2995[0 /*20*/].f_6, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2995[0 /*20*/].f_6, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2995[0 /*20*/].f_6, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2995[0 /*20*/].f_6, 1);
		return 1;
	}
	return 0;
}

int func_115(bool bParam0, int iParam1)//Position - 0x63F8
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_117(Local_649[iLocal_2603 /*23*/].f_1, Local_649[iLocal_2603 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_429 = func_9(Local_649[iLocal_2603 /*23*/].f_1, 0);
	Local_2624[0 /*3*/] = { Local_649[iLocal_2603 /*23*/].f_1 };
	if (Local_649[iLocal_2603 /*23*/] == 2)
	{
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_649[iLocal_2603 /*23*/] == 4)
	{
		fLocal_3065 = -1f;
		iLocal_2949 = 1;
		iLocal_3109 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), Local_1869[func_231() /*28*/].f_23, Local_1869[func_231() /*28*/].f_26, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109))
		{
			VEHICLE::SET_VEHICLE_SIREN(iLocal_3109, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3109, 1, 1);
			iLocal_3110 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3109, 4, joaat("s_m_m_paramedic_01"), -1, 1, 1);
		}
		if (!func_11(Local_1869[func_231() /*28*/].f_17))
		{
			uLocal_2346 = func_116(Local_1869[func_231() /*28*/].f_17, Local_1869[func_231() /*28*/].f_20);
		}
		switch (Local_649[iLocal_2603 /*23*/].f_21)
		{
			case 1:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2995[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2995[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_441 = true;
		if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
		{
			Local_2995[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), -1, 1, 1);
		}
		else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
		{
			Local_2995[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), -1, 1, 1);
		}
		else
		{
			Local_2995[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, uLocal_2988[0], -1, 1, 1);
		}
	}
	return 1;
}

var func_116(struct<3> Param0, struct<3> Param3)//Position - 0x66FC
{
	PED::SET_PED_NON_CREATION_AREA(Param0, Param3);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param0, Param3, 1);
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0, Param3, 0, 1, 1, 1);
}

int func_117(struct<3> Param0, var uParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x672D
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam4 = func_118(&Local_2995);
	if (*iParam4 == -1)
	{
		return 0;
	}
	if (iLocal_3038 >= 2)
	{
		iLocal_3038 = 0;
	}
	Local_2995[*iParam4 /*20*/].f_6 = VEHICLE::CREATE_VEHICLE(iLocal_2986[iLocal_3038], Param0, uParam3, 1, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2995[*iParam4 /*20*/].f_6, 1);
	iLocal_3038++;
	fLocal_429 = func_9(Param0, 0);
	if (iLocal_419 == 1)
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
	if (!func_11(Local_649[iLocal_2603 /*23*/].f_10))
	{
		Local_2995[*iParam4 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Local_649[iLocal_2603 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_2995[*iParam4 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar0, 0f, 0);
	}
	Local_2995[*iParam4 /*20*/].f_18 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar1, 2.5f, 0);
	Local_2995[*iParam4 /*20*/].f_19 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar2, 4f, 0);
	if (bParam5)
	{
		if (Local_2995[*iParam4 /*20*/].f_15)
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2995[*iParam4 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2995[*iParam4 /*20*/].f_6, 1f);
			VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_2995[*iParam4 /*20*/].f_6, 1);
		}
		else
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2995[*iParam4 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2995[*iParam4 /*20*/].f_6, 1f);
			VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_2995[*iParam4 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_2957 && uParam6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2995[*iParam4 /*20*/].f_6))
		{
			Local_2995[*iParam4 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[*iParam4 /*20*/].f_6);
			HUD::SET_BLIP_COLOUR(Local_2995[*iParam4 /*20*/].f_8, 3);
		}
	}
	iLocal_3037++;
	func_238(&(Local_2995[*iParam4 /*20*/].f_11));
	return 1;
}

int func_118(var uParam0)//Position - 0x690D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((uParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_119(int iParam0, var uParam1, var uParam2)//Position - 0x6939
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_120(struct<3> Param0, float fParam3, var uParam4, int iParam5)//Position - 0x6959
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	var uVar15;
	
	if (!func_117(Param0, fParam3, uParam4, 1, iParam5))
	{
		return 0;
	}
	if (*uParam4 == -1)
	{
	}
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2995[*uParam4 /*20*/].f_6, 4, 0, 0);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Local_2995[*uParam4 /*20*/].f_6), &Var3, &Var6);
	Var9 = { Var6 - Var3 };
	Var9 = { Var9 / Vector(2f, 2f, 2f) };
	iLocal_2949 = 1;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2995[*uParam4 /*20*/].f_6, 1.5f, 0f, 0f) };
	Var12 = { ENTITY::GET_ENTITY_COORDS(Local_2995[*uParam4 /*20*/].f_6, 1) };
	uVar15 = ENTITY::GET_ENTITY_HEADING(Local_2995[*uParam4 /*20*/].f_6);
	uLocal_3047 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var12, uVar15, -1.5f, -30f, 0f), 10f, 0f, 0);
	uLocal_3048 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var12, uVar15, -1.5f, 30f, 0f), 10f, 0f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Var0, 30f, 0, 0, 0, 0, 0);
	Local_1869[func_231() /*28*/][0 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 1f) };
	return 1;
}

int func_121(var uParam0, float fParam1, var uParam2, var uParam3)//Position - 0x6A71
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	
	fVar8 = 0f;
	fVar9 = 0f;
	iVar10 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 3999) / 1000);
	if (iVar10 == 0)
	{
		fVar8 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else if (iVar10 == 1)
	{
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 100f);
	}
	else if (iVar10 == 2)
	{
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else
	{
		fVar9 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), fVar8, fVar9, 0f) };
	if (!PATHFIND::GET_RANDOM_VEHICLE_NODE(Var0, 10f, 1, 1, 1, &Var5, &uVar4))
	{
		return 0;
	}
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var5, 2, uParam2, fParam1, &uVar3, 1, 1077936128, 0);
	*uParam0 = { Var5 };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (func_122(*uParam0, 0f, 0f, 0f))
	{
		return 0;
	}
	return 1;
}

bool func_122(struct<3> Param0, struct<3> Param3)//Position - 0x6BB1
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_123(int iParam0)//Position - 0x6BDA
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_124()//Position - 0x6C33
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (HUD::DOES_BLIP_EXIST(Local_279[iVar0 /*3*/].f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_279[iVar0 /*3*/]))
			{
				HUD::REMOVE_BLIP(&(Local_279[iVar0 /*3*/].f_1));
			}
			else if (Local_279[iVar0 /*3*/].f_2 && func_100(Local_279[iVar0 /*3*/], 1) > 200f)
			{
				HUD::REMOVE_BLIP(&(Local_279[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_125()//Position - 0x6CAC
{
	if (!MISC::ARE_STRINGS_EQUAL(&cLocal_271, ""))
	{
		if (!func_41())
		{
			func_146(&Local_95, &cLocal_271, &cLocal_275, 9, 0, 0, 0);
			StringCopy(&cLocal_271, "", 16);
		}
	}
}

void func_126(var uParam0, float fParam1, bool bParam2)//Position - 0x6CE2
{
	if (func_127(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_87(&cLocal_316, -1);
		}
		else
		{
			func_97(&cLocal_316, 7500, 1);
		}
	}
}

int func_127(var uParam0, float fParam1)//Position - 0x6D10
{
	if (func_3(uParam0, fParam1))
	{
		func_51(uParam0);
		return 1;
	}
	return 0;
}

void func_128(var uParam0, int iParam1, int iParam2)//Position - 0x6D2E
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2446554.f_4397, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_93(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_93(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_129(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x6E0B
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
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
	if (func_93(iVar0))
	{
		func_144();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_139(uParam0, bParam6, bParam8, 0))
		{
			func_138(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_134(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
					{
						if (!func_93(iVar0))
						{
							func_87(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_133(1);
							}
						}
					}
				}
			}
		}
		else if (func_134(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
				{
					if (!func_93(iVar0))
					{
						func_87(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_133(1);
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
			if (func_93(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
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
					func_128(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_128(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_128(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_128(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_128(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_128(uParam0, iVar0, 1);
			}
		}
		if (!func_139(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_132(uParam0))
			{
				func_130(uParam0);
			}
		}
	}
}

void func_130(var uParam0)//Position - 0x70E5
{
	if (func_131(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
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

int func_131(int iParam0)//Position - 0x714E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(var uParam0)//Position - 0x71A9
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_133(bool bParam0)//Position - 0x71D4
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_134(char* sParam0)//Position - 0x727E
{
	if (!func_135(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_93(sParam0)) || func_93("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_133(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_133(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_133(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_135(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7317
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_137(0))
	{
		return 0;
	}
	if (func_136())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_136()//Position - 0x7493
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

int func_137(int iParam0)//Position - 0x74A8
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_138(var uParam0, struct<3> Param1, int iParam4)//Position - 0x7502
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
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

int func_139(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x759E
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
					if (func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_143(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_132(uParam0))
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
						if (!func_143(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_143(bParam1, bParam2, bParam3))
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
					if (!func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_142(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_143(bParam1, bParam2, bParam3))
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
						if (func_141(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_140(bParam1, bParam2, bParam3))
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
					else if (func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_132(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_135(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_144();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_140(bool bParam0, bool bParam1, bool bParam2)//Position - 0x790A
{
	if (!func_135(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141(bool bParam0, bool bParam1, bool bParam2)//Position - 0x795C
{
	if (!func_135(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_142(bool bParam0, bool bParam1, bool bParam2)//Position - 0x79A5
{
	if (!func_135(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7A04
{
	if (!func_135(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_144()//Position - 0x7A5A
{
	MISC::SET_BIT(&Global_2264, 4);
}

int func_145(bool bParam0)//Position - 0x7A6A
{
	if (bLocal_466 || iLocal_465)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_467)
		{
			return 0;
		}
	}
	return 1;
}

bool func_146(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7A95
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_15(sParam2, iParam3, 0);
}

void func_147()//Position - 0x7AE3
{
	Global_14558 = 0;
	func_29();
}

int func_148()//Position - 0x7AF3
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2983) && !ENTITY::IS_ENTITY_DEAD(iLocal_2983))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2983, 1) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 2500f)
	{
		if (!bLocal_2967)
		{
			func_149("TOW_TUT_RETONYA", 7500, 1);
			bLocal_2967 = true;
			if (!HUD::DOES_BLIP_EXIST(uLocal_424))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2983))
				{
					uLocal_424 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2983);
					HUD::SET_BLIP_COLOUR(uLocal_424, 3);
					HUD::SET_BLIP_SCALE(uLocal_424, 0.5f);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_2967)
	{
		bLocal_2967 = false;
		if (HUD::DOES_BLIP_EXIST(uLocal_424))
		{
			HUD::REMOVE_BLIP(&uLocal_424);
		}
		if (!HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_8))
		{
			Local_2995[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Local_2624[0 /*3*/]);
			if (iLocal_467)
			{
				HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_8, 5);
				HUD::SET_BLIP_ROUTE(Local_2995[0 /*20*/].f_8, 1);
				HUD::SET_BLIP_ROUTE_COLOUR(Local_2995[0 /*20*/].f_8, 5);
			}
			else
			{
				HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_2995[0 /*20*/].f_8, 1);
				HUD::SET_BLIP_ROUTE_COLOUR(Local_2995[0 /*20*/].f_8, 3);
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
	{
		if (bLocal_2967)
		{
			return 1;
		}
	}
	return 0;
}

void func_149(char* sParam0, int iParam1, int iParam2)//Position - 0x7C6B
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

int func_150(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x7C84
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_157(*uParam2, 1))
		{
			if (func_156(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_157(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_157(*uParam2, 4))
		{
			if (func_154(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_157(*uParam2, 8))
		{
			if (func_153(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_157(*uParam2, 128);
		if (bParam4)
		{
			if (func_151(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_157(*uParam2, 16))
		{
			if (func_151(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_151(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x7DAC
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_394)
		{
			iLocal_395 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_394 = true;
		}
		iLocal_396 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_397 = (iLocal_395 - iLocal_396);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_397) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_394)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_397) > 100f)
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
	if (func_152(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_100(iParam0, 1) < 1.5f)
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

int func_152(int iParam0, int iParam1)//Position - 0x7F7A
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_153(int iParam0, int iParam1, var uParam2)//Position - 0x7FCF
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x801F
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_155(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x8197
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_101(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_156(int iParam0, var uParam1)//Position - 0x8263
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_100(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_157(var uParam0, int iParam1)//Position - 0x82E7
{
	return (uParam0 && iParam1) != 0;
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)//Position - 0x82F6
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
				if (func_150((*uParam4)[iVar0], 0, &uLocal_411, &iLocal_418, 0, 1, 0, 1, 1))
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
			if (func_105(iParam1, iParam3, &iLocal_2602, 20, 70f, 65f, 0))
			{
				iLocal_2602 = 0;
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
			if (iLocal_467)
			{
				func_53(&uLocal_2512);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0]))
					{
						if (func_100((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_470 = iVar0;
							iLocal_470 = iLocal_470;
							func_53(&uLocal_2512);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_1869[func_231() /*28*/].f_17))
			{
				func_159(uLocal_2346, Local_1869[func_231() /*28*/].f_17, Local_1869[func_231() /*28*/].f_20);
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				if (!iLocal_456)
				{
					func_232(&uLocal_483, 3, *uParam8, "TONYA", 0, 1);
					if (func_146(&uLocal_483, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_456 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
					TASK::TASK_PLAY_ANIM(0, sParam6, (*sParam7)[iVar0], 4f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000), 0, 0, 0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
					TASK::TASK_PERFORM_SEQUENCE((*uParam4)[iVar0], uLocal_420);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
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
				if (!iLocal_456)
				{
					func_232(&uLocal_483, 3, *uParam8, "TONYA", 0, 1);
					if (func_146(&uLocal_483, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_456 = 1;
					}
				}
				if (!iLocal_468)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam3) && !ENTITY::IS_ENTITY_DEAD(*uParam10))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam3, *uParam10))
						{
							if (!func_7(&uLocal_2527))
							{
								func_238(&uLocal_2527);
							}
							else if (func_4(&uLocal_2527) > 20f)
							{
								if (func_146(&uLocal_483, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_468 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_159(var uParam0, struct<3> Param1, struct<3> Param4)//Position - 0x8628
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param1, Param4, 0);
}

int func_160(var uParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, float fParam8, char[4] cParam9, char* sParam10, int iParam11)//Position - 0x8648
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &uVar0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_162(uParam1);
		MISC::CLEAR_AREA_OF_PEDS(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam11)
		{
			if (fParam8 == -1f)
			{
				fParam8 = func_161(*(uParam0[iVar2 /*3*/]), Param2);
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
			cParam9 = cParam9;
			(*sParam10)[iVar2] = (*sParam10)[iVar2];
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 42, 1);
			PED::SET_PED_MOVEMENT_CLIPSET(iVar1, "move_m@JOG@", 1048576000);
			PED::SET_PED_RESET_FLAG(iVar1, 109, 1);
			if (iLocal_419 == 3)
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
		bLocal_441 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_161(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x8893
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_162(var uParam0)//Position - 0x88AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2555[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_2555[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2555[iVar0 /*18*/].f_8 = { func_163(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0f) };
		}
		else
		{
			Local_2555[iVar0 /*18*/].f_8 = { func_163(0.5f, 1f, 0f) };
		}
		Local_2555[iVar0 /*18*/].f_11 = 2f;
		Local_2555[iVar0 /*18*/].f_12 = 1f;
		Local_2555[iVar0 /*18*/].f_13 = 1f;
		Local_2555[iVar0 /*18*/].f_14 = -1f;
		Local_2555[iVar0 /*18*/].f_15 = 0.1f;
		Local_2555[iVar0 /*18*/].f_17 = 0;
		Local_2555[iVar0 /*18*/].f_1 = 1110;
		Local_2555[iVar0 /*18*/] = GRAPHICS::ADD_DECAL(Local_2555[iVar0 /*18*/].f_1, Local_2555[iVar0 /*18*/].f_2, Local_2555[iVar0 /*18*/].f_5, Local_2555[iVar0 /*18*/].f_8, Local_2555[iVar0 /*18*/].f_11, Local_2555[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_163(struct<3> Param0)//Position - 0x89CA
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_164()//Position - 0x8A09
{
	func_167();
	switch (iLocal_3119)
	{
		case 0:
			func_232(&Local_2347, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			func_232(&Local_2347, 3, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/], 1);
			iLocal_3040 = MISC::GET_RANDOM_INT_IN_RANGE(35, 80);
			iLocal_3119 = 1;
			break;
		
		case 1:
			TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
			TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
			if (func_9(Local_649[iLocal_2603 /*23*/].f_1, 1) < 40f || Local_2992.f_1 > 0)
			{
				if (iLocal_419 == 1)
				{
					if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
					{
						func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
						func_146(&Local_2347, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3119 = 2;
					}
					else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
					{
						func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_146(&Local_2347, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3119 = 2;
					}
				}
			}
			else if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040 + 10))
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_3119 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_649[iLocal_2603 /*23*/].f_13))
			{
				Local_649[iLocal_2603 /*23*/].f_13.f_2 = 45f;
				Local_649[iLocal_2603 /*23*/].f_16.f_2 = -45f;
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
				{
					func_104(&iLocal_2597);
					iLocal_2946 = 1;
					iLocal_2953 = 1;
					bLocal_426 = true;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2995[0 /*20*/], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
						TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
						iLocal_3119 = 4;
					}
				}
			}
			if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040 + 15))
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					func_146(&Local_2347, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_146(&Local_2347, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_104(&iLocal_2597);
				TASK::TASK_LOOK_AT_ENTITY(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_7, -1, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_3119 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
				{
					if (iLocal_3039 == 1)
					{
						func_166(&Local_2992);
					}
					iLocal_2946 = 1;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2995[0 /*20*/], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_GO_TO_COORD_ANY_MEANS(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_649[iLocal_2603 /*23*/].f_1, Local_649[iLocal_2603 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_2995[0 /*20*/], 64, 0);
						TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
						iLocal_3119 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_3118 == 8 && iLocal_467) || func_165())
			{
				SYSTEM::SETTIMERB(3000);
				iLocal_3119 = 5;
			}
			break;
		
		case 5:
			iLocal_2952 = 1;
			if (SYSTEM::TIMERB() > 3000)
			{
				if (func_98(&iLocal_3116, 0, "TOW_TRAIN1"))
				{
					iLocal_3119 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_165()//Position - 0x8E79
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
	{
		if (bLocal_426)
		{
			switch (iLocal_3052)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_2995[0 /*20*/]) == 1)
					{
						iLocal_3052 = 1;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2995[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_3052 = 2;
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

void func_166(var uParam0)//Position - 0x8EEA
{
	uParam0->f_1 = 0;
	CAM::DESTROY_CAM(*uParam0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

void func_167()//Position - 0x8F0B
{
	float fVar0;
	
	if (iLocal_2946 || ((!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6)) && !PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0)))
	{
		if (iLocal_2597 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_2597);
			AUDIO::RELEASE_SOUND_ID(iLocal_2597);
			iLocal_2597 = -1;
			return;
		}
	}
	if (!iLocal_2937)
	{
		iLocal_2597 = AUDIO::GET_SOUND_ID();
		iLocal_2937 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2995[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_2995[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_2936)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2597, "TOWING_ENGINE_TURNING_MASTER", Local_2995[0 /*20*/].f_6, 0, 0, 0);
					iLocal_2936 = 1;
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_2597);
				iLocal_2936 = 0;
			}
		}
	}
}

void func_168()//Position - 0x9078
{
	int iVar0;
	
	func_170();
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_2607))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_2607);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3108, 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_3108, 0);
	}
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3047);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3048);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3111, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3112, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3059 - Vector(15f, 15f, 15f), Local_3059 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2995[iVar0 /*20*/].f_17);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2995[iVar0 /*20*/].f_18);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2995[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_1869[func_231() /*28*/].f_17))
	{
		func_159(uLocal_2346, Local_1869[func_231() /*28*/].f_17, Local_1869[func_231() /*28*/].f_20);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2995[0 /*20*/].f_6));
	if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2995[0 /*20*/]));
		if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/]))
		{
			if (PED::IS_PED_IN_GROUP(Local_2995[0 /*20*/]))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_2995[0 /*20*/]);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2982))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2982))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2982);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3108, 1, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3108);
	}
	if (iLocal_2962)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2631, Local_2634, 1, 1);
	}
	if (iLocal_2959 && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_7))
	{
		VEHICLE::_0x1CF38D529D7441D9(Local_2995[0 /*20*/].f_7, 1);
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_2995[0 /*20*/].f_7), 0);
		VEHICLE::SET_RANDOM_TRAINS(1);
		func_111(0, 1);
		func_111(1, 0);
		func_111(2, 0);
		func_111(3, 1);
		func_111(4, 0);
		func_111(5, 0);
		func_111(6, 0);
		func_111(7, 0);
		func_111(8, 0);
		func_111(9, 0);
		func_111(10, 0);
		func_111(11, 0);
	}
	func_104(&iLocal_2595);
	func_104(&iLocal_2596);
	func_169(&uLocal_3126);
	func_104(&iLocal_2597);
	func_128(&uLocal_398, 0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2992))
	{
		func_166(&Local_2992);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_169(var uParam0)//Position - 0x92DE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_170()//Position - 0x9315
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

int func_171()//Position - 0x9358
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_3108))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], iLocal_3108, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_10))
			{
				HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_10));
				func_104(&iLocal_2597);
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0))
		{
			func_104(&iLocal_2597);
		}
	}
	switch (iLocal_3118)
	{
		case 0:
			if (func_9(Local_649[iLocal_2603 /*23*/].f_1, 1) < 100f)
			{
				Local_2995[0 /*20*/].f_7 = VEHICLE::CREATE_MISSION_TRAIN(6, Local_649[iLocal_2603 /*23*/].f_6, Local_649[iLocal_2603 /*23*/].f_5);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/].f_7))
				{
					Local_2995[0 /*20*/].f_10 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[0 /*20*/].f_7);
				}
				iLocal_2982 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2982, 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_7))
				{
					VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2995[0 /*20*/].f_7, 0f);
				}
				func_97("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				func_174("CROSSING_BELL", &iLocal_2598, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3118 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_649[iLocal_2603 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3118 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_7))
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2995[0 /*20*/].f_7, 26f);
				VEHICLE::SET_TRAIN_SPEED(Local_2995[0 /*20*/].f_7, 22f);
			}
			iLocal_3118 = 3;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
			{
				if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < 175f)
				{
					func_173(Local_2995[0 /*20*/].f_7);
					func_174("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2596, 1, Local_2995[0 /*20*/].f_7, 0, 0, 0, 0);
					func_172(&uLocal_3126, Local_2995[0 /*20*/].f_7);
					func_174("TOWING_TRAIN_HORN_MASTER", &iLocal_2595, 1, Local_2995[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_3118 = 4;
				}
			}
			else
			{
				iLocal_3118 = 8;
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
			{
				func_173(Local_2995[0 /*20*/].f_7);
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
				{
					func_169(&uLocal_3126);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_2995[0 /*20*/].f_7, 1) };
				if (func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < 3f)
				{
					iLocal_2933 = 1;
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2995[0 /*20*/].f_7, Local_2995[0 /*20*/].f_6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2995[0 /*20*/].f_6, 1, 0);
					iLocal_3118 = 6;
				}
				else if (func_10(Local_2995[0 /*20*/].f_6, Var0, 1) < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
				{
					iLocal_2933 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2995[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_2933 && func_10(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) > 4f)
				{
					iLocal_3118 = 6;
				}
			}
			else
			{
				iLocal_3118 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_467)
			{
				func_97("TOWT_OBJ_03G", 7500, 1);
				if (HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_10))
				{
					HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_10));
				}
			}
			HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_10));
			func_104(&iLocal_2595);
			func_104(&iLocal_2596);
			func_169(&uLocal_3126);
			func_104(&iLocal_2597);
			func_104(&iLocal_2598);
			iLocal_3118 = 7;
			break;
		
		case 7:
			if (!func_41())
			{
				if (!iLocal_467)
				{
					func_97("TOWT_OBJ_03G", 7500, 1);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3118 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_172(var uParam0, var uParam1)//Position - 0x9872
{
	(*uParam0)[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_173(int iParam0)//Position - 0x99E2
{
	float fVar0;
	
	if (!func_7(&uLocal_2592))
	{
		func_238(&uLocal_2592);
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
	if (func_3(&uLocal_2592, 0.15f))
	{
		fLocal_2599 = (fVar0 - 0.35f);
		if (fLocal_2599 < 8f)
		{
			fLocal_2599 = 8f;
		}
		func_53(&uLocal_2592);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fLocal_2599);
		VEHICLE::SET_TRAIN_SPEED(iParam0, fLocal_2599);
	}
	return 1;
}

void func_174(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)//Position - 0x9A66
{
	func_104(iParam1);
	if (bParam2)
	{
		*iParam1 = AUDIO::GET_SOUND_ID();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(*iParam1, sParam0, iParam3, sParam7, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(*iParam1, sParam0, sParam7, 1);
	}
}

int func_175()//Position - 0x9ADD
{
	var uVar0;
	struct<3> Var1;
	
	func_185();
	switch (iLocal_3117)
	{
		case 0:
			if (bLocal_2964)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
				{
					Local_2995[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, uLocal_2988[0], 1, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/], 1);
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_2995[0 /*20*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, iLocal_73, 2, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/].f_1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_2995[0 /*20*/].f_1, 42, 1);
					func_232(&Local_2347, 6, Local_2995[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2995[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(Local_2995[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2995[0 /*20*/].f_6, 10);
					}
					bLocal_441 = true;
					func_232(&Local_2347, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2965)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
				{
					Local_2995[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, uLocal_2988[0], 0, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2995[0 /*20*/], 42, 1);
					func_232(&Local_2347, 2, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2995[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_441 = true;
				}
			}
			else if (func_184())
			{
				bLocal_2963 = true;
			}
			else
			{
				bLocal_2963 = false;
			}
			iLocal_3117 = 1;
			break;
		
		case 1:
			if (bLocal_2964)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_2995[0 /*20*/].f_6, 1), 15f, 15f, 15f, 0, 1, 0))
					{
						if (!iLocal_3135)
						{
							if (func_146(&Local_2347, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_3135 = 1;
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6) || func_183(iLocal_3108, Local_2995[0 /*20*/].f_6, !(bLocal_2964 || bLocal_2965)))
				{
					if (func_183(iLocal_3108, Local_2995[0 /*20*/].f_6, !(bLocal_2964 || bLocal_2965)))
					{
						bLocal_2978 = true;
					}
					if (!bLocal_2965)
					{
						func_182(&uLocal_3102, 1f);
					}
					else
					{
						func_238(&uLocal_3102);
					}
				}
			}
			if (func_7(&uLocal_3102) && func_4(&uLocal_3102) > 1f)
			{
				if (bLocal_2964 && func_7(&uLocal_3102))
				{
					if (func_41())
					{
						func_147();
					}
					iLocal_2975 = 0;
					if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 750, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
						TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_2995[0 /*20*/], 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, Local_2995[0 /*20*/], 1000f, -1, 0, 0);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_1))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/].f_1, uLocal_420);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
					}
					iLocal_3117 = 2;
				}
				else if (bLocal_2965)
				{
					if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted % 2) == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_3108, 20000, 9f, 1f, 1073741824, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_PLAY_ANIM(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
							TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
						}
						func_232(&Local_2347, 2, Local_2995[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_146(&Local_2347, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
						{
							func_181(Local_2995[0 /*20*/]);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2995[0 /*20*/], 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2995[0 /*20*/], 1, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
							TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
							if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/]))
							{
								uLocal_2985 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[0 /*20*/]);
								HUD::SET_BLIP_COLOUR(uLocal_2985, 1);
								HUD::SET_BLIP_SCALE(uLocal_2985, 0.7f);
								func_180(Local_2995[0 /*20*/], uLocal_2985, 1);
							}
							bLocal_2963 = true;
						}
						func_146(&Local_2347, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_3117 = 2;
				}
				else if (bLocal_2963)
				{
					Local_2995[0 /*20*/] = PED::CREATE_PED(4, uLocal_2988[0], Local_649[iLocal_2603 /*23*/].f_6, Local_649[iLocal_2603 /*23*/].f_9, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2995[0 /*20*/], 42, 1);
					bLocal_441 = true;
					sLocal_2617 = "TOW_PED_ANGR";
					bLocal_441 = false;
					if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
						TASK::TASK_GO_TO_ENTITY(0, iLocal_3108, 20000, 15f, 3f, 1073741824, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
						TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
					}
					iLocal_3117 = 3;
				}
				else
				{
					Local_2995[0 /*20*/] = PED::CREATE_PED(4, uLocal_2988[0], Local_649[iLocal_2603 /*23*/].f_6, Local_649[iLocal_2603 /*23*/].f_9, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2995[0 /*20*/], 42, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2995[0 /*20*/], 1);
					bLocal_441 = true;
					sLocal_2617 = "TOW_ILLEG1";
					if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
						TASK::TASK_GOTO_ENTITY_OFFSET(0, PLAYER::PLAYER_PED_ID(), 20000, 12f, 0f, 3f, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
						TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
					}
					iLocal_3117 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_2964)
			{
				if (!bLocal_2972)
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6) || bLocal_2978)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_41())
							{
								if (func_146(&Local_2347, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_2972 = true;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_2995[0 /*20*/], 0))
				{
					if (bLocal_2965)
					{
						if (!func_41())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_2995[0 /*20*/], 242628503) == 1)
							{
								if (TASK::GET_SEQUENCE_PROGRESS(Local_2995[0 /*20*/]) == 2)
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
									{
										Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
									}
									if (SYSTEM::VDIST2(Var1, ENTITY::GET_ENTITY_COORDS(Local_2995[0 /*20*/], 1)) < 400f)
									{
										if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted % 2) == 0)
										{
											func_146(&Local_2347, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_146(&Local_2347, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_3117 = 8;
								}
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
					{
						if (func_179() || (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6) && !bLocal_2978))
						{
							func_147();
							iLocal_3117 = 5;
						}
						else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6) && bLocal_2978)
						{
							if (bLocal_2972)
							{
								if (!func_41())
								{
									iLocal_3117 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
			{
				if (func_101(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
				{
					TASK::CLEAR_PED_TASKS(Local_2995[0 /*20*/]);
					if (bLocal_2963)
					{
						TASK::TASK_COMBAT_PED(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_420);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_420);
						TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uLocal_420);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_420);
					}
					iLocal_2948 = 1;
					if (bLocal_2964)
					{
						iLocal_3117 = 5;
					}
					else
					{
						iLocal_3117 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/]))
			{
				Local_2995[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[0 /*20*/]);
				if (bLocal_2963)
				{
					HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_9, 1);
					HUD::SET_BLIP_SCALE(Local_2995[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2995[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_2963)
			{
				if (iLocal_419 == 0)
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_178(Local_2347, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_232(&Local_2347, 2, Local_2995[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_178(Local_2347, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				func_232(&Local_2347, 3, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
				func_178(Local_2347, "TOWAUD", sLocal_2617, 0);
			}
			bLocal_2956 = true;
			SYSTEM::SETTIMERA(0);
			if (bLocal_2963)
			{
				func_53(&uLocal_3096);
				iLocal_3117 = 6;
			}
			else
			{
				iLocal_3117 = 5;
			}
			break;
		
		case 5:
			if (!func_41())
			{
				if (bLocal_2964)
				{
					SYSTEM::SETTIMERB(0);
				}
				func_53(&uLocal_3096);
				if ((!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3108))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2995[0 /*20*/].f_6, 1);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_ENTER_VEHICLE(0, Local_2995[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_2995[0 /*20*/].f_6, 5f, 786597);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uVar0);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						bLocal_3136 = true;
					}
				}
				iLocal_3117 = 6;
			}
			break;
		
		case 6:
			func_176(0);
			if (!bLocal_2970)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
					{
						if (bLocal_2964)
						{
							if (SYSTEM::TIMERB() > 8000)
							{
								func_53(&uLocal_3096);
								if (!bLocal_3136)
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2995[0 /*20*/].f_6, 1);
									TASK::TASK_ENTER_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
								}
								iLocal_3117 = 7;
							}
						}
						else
						{
							func_53(&uLocal_3096);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2995[0 /*20*/].f_6, 1);
							TASK::TASK_ENTER_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
							iLocal_3117 = 7;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
					{
						if (SYSTEM::TIMERB() > 7000)
						{
							if (!bLocal_2963)
							{
								if (PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108))
									{
										if (ENTITY::GET_ENTITY_SPEED(iLocal_3108) < 2f)
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_2995[0 /*20*/], -258271821) != 1)
											{
												TASK::TASK_VEHICLE_DRIVE_WANDER(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											TASK::CLEAR_SEQUENCE_TASK(&uVar0);
											TASK::OPEN_SEQUENCE_TASK(&uVar0);
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 5000, 4096);
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uVar0);
											if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
											{
												TASK::TASK_PERFORM_SEQUENCE(Local_2995[0 /*20*/], uVar0);
											}
											TASK::CLEAR_SEQUENCE_TASK(&uVar0);
											iLocal_3117 = 7;
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108))
								{
									if (ENTITY::GET_ENTITY_SPEED(iLocal_3108) < 5f)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_2995[0 /*20*/], -1794415470) != 1)
										{
											if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_2995[0 /*20*/].f_6, -1))
											{
												TASK::TASK_ENTER_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, -1, -1, 1073741824, 1, 0);
											}
										}
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2995[0 /*20*/], 1056466932) != 1)
									{
										TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_176(1);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_2995[0 /*20*/], 0) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6))
			{
				if (bLocal_2963)
				{
					sLocal_2617 = "TOW_PED_ANTH";
				}
				else if (bLocal_2964)
				{
					sLocal_2617 = "TOW_ILLEG_SE";
				}
				bLocal_2969 = true;
				func_146(&Local_2347, "TOWAUD", sLocal_2617, 9, 0, 0, 0);
				bLocal_2956 = false;
				TASK::TASK_VEHICLE_DRIVE_WANDER(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 5f, 786597);
				iLocal_3117 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_2948 = 0;
			bLocal_2956 = false;
			if (HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_9))
			{
				HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_176(bool bParam0)//Position - 0xA94F
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_101(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6) && !PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2995[0 /*20*/], 1))
		{
			func_53(&uLocal_3096);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_2995[0 /*20*/]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
	{
		iLocal_3117 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&uLocal_3096) > 30f && fVar1 > 5f)) || iVar0) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
	{
		if (bLocal_2963)
		{
			func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2964)
		{
			func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_232(&Local_2347, 6, Local_2995[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_2979[0] = Local_2995[0 /*20*/];
		uLocal_2979[1] = Local_2995[0 /*20*/].f_1;
		bLocal_2970 = true;
		func_177(Local_2347, "TOWAUD", sVar2, &uLocal_2979, 0);
		HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_9));
		if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_2995[0 /*20*/]);
			TASK::TASK_SMART_FLEE_PED(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		}
		iLocal_3117 = 8;
	}
}

int func_177(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)//Position - 0xAB3F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_100((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_146(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_178(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)//Position - 0xAB9B
{
	if (bParam167)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	StringCopy(&cLocal_271, sParam165, 16);
	StringCopy(&cLocal_275, sParam166, 16);
	Local_95 = { Param0 };
}

int func_179()//Position - 0xABC6
{
	switch (iLocal_3120)
	{
		case 0:
			if (TASK::GET_SEQUENCE_PROGRESS(Local_2995[0 /*20*/]) >= 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_3120 = 1;
			}
			break;
		
		case 1:
			if (bLocal_2972 && !iLocal_2973)
			{
				if (!func_41())
				{
					if (!iLocal_2974)
					{
						if (!bLocal_2978)
						{
							func_97("TOWT_OBJ_06", 7500, 1);
							iLocal_2974 = 1;
						}
					}
					if (iLocal_2974 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2995[0 /*20*/], -875674219) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_1, 0);
						}
						iLocal_2973 = 1;
						iLocal_3120 = 2;
					}
				}
			}
			if (func_100(Local_2995[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return 1;
			}
			break;
		
		case 2:
			if (func_100(Local_2995[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return 1;
			}
			if (!func_41())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_180(int iParam0, var uParam1, int iParam2)//Position - 0xACCD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_279[iVar0 /*3*/] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_279[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_279[iVar0 /*3*/].f_1))
		{
			Local_279[iVar0 /*3*/] = iParam0;
			Local_279[iVar0 /*3*/].f_1 = uParam1;
			Local_279[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_181(int iParam0)//Position - 0xAD50
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 23, 0);
			PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_microsmg"), 1000, 1, 1);
			PED::SET_PED_SHOOT_RATE(iParam0, 500);
		}
	}
}

void func_182(var uParam0, float fParam1)//Position - 0xADA2
{
	if (!func_7(uParam0))
	{
		func_54(uParam0, fParam1);
	}
}

int func_183(int iParam0, int iParam1, bool bParam2)//Position - 0xADBC
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_100(uParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, uParam1))
	{
		iVar0 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_184()//Position - 0xAE2E
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_185()//Position - 0xAE4F
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!iLocal_2945)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2995[0 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2995[0 /*20*/].f_6, 1) };
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (bLocal_2964)
		{
			if (SYSTEM::VDIST2(Var0, Var3) < 25f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				if (!func_41())
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
					func_232(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_146(&Local_2347, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_2945 = 1;
					}
				}
			}
		}
	}
}

int func_186(var uParam0, int iParam1)//Position - 0xAF11
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&uLocal_433))
	{
		func_53(&uLocal_433);
	}
	if (func_100(uParam0, 0) < 15f)
	{
		fLocal_430 = 0.3f;
		fLocal_431 = 0.5f;
		fLocal_432 = 0.1f;
	}
	else if (func_100(uParam0, 0) < 40f)
	{
		fLocal_430 = 0.6f;
		fLocal_431 = 1f;
		fLocal_432 = 0.2f;
	}
	if (func_3(&uLocal_433, MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_430, fLocal_431)))
	{
		func_53(&uLocal_433);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0, 1, 0f, 0f, fLocal_432, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_187()//Position - 0xAFE0
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_188();
}

void func_188()//Position - 0xAFF0
{
	Global_17098.f_134 = 1;
}

int func_189(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, var uParam27)//Position - 0xAFFE
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (iLocal_2600 != 12)
	{
		func_193(Param2, uParam0, uParam1);
	}
	if (!bLocal_466)
	{
		if (iLocal_2600 >= 6 && iLocal_2600 <= 11)
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
		switch (iLocal_2600)
		{
			case 0:
				if (func_105(uParam1, uParam0, &iLocal_2602, 10, 90f, 100f, 0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam1, 0);
					func_232(&Local_2347, 3, *uParam27, "TONYA", 0, 1);
					func_232(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_146(&Local_2347, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2600 = 1;
				}
				break;
			
			case 1:
				if (!func_41())
				{
					func_87("TOW_TUT_03", -1);
					SYSTEM::SETTIMERA(0);
					iLocal_2600 = 2;
				}
				break;
			
			case 2:
				if (iLocal_467)
				{
					HUD::CLEAR_HELP(1);
					iLocal_2600 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || func_101(uParam0, uParam1, 1) < 15f) && func_101(uParam0, uParam1, 1) < 30f) && !func_41())
					{
						func_146(&Local_2347, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2600 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_467)
				{
					if (!func_41() && !func_93("TOW_TUT_03"))
					{
						func_192("TOW_TUT_02");
						iLocal_2600 = 4;
					}
				}
				else
				{
					iLocal_2600 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 5000 || iLocal_467)
				{
					if ((SYSTEM::TIMERA() > 12000 || func_101(uParam0, uParam1, 1) < 7.5f) || (iLocal_467 && func_101(uParam0, uParam1, 1) < 30f))
					{
						iLocal_442 = 1;
						iLocal_442 = iLocal_442;
						func_192("TOW_TUT_01");
						iLocal_2600 = 5;
					}
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_2600 = 6;
				}
				break;
			
			case 6:
				if ((!func_41() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_459)
					{
						func_87("TOWT_HELP_CR", -1);
						iLocal_459 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					func_146(&Local_2347, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(*uParam22))
					{
						HUD::SET_BLIP_ROUTE(*uParam22, 0);
						HUD::REMOVE_BLIP(uParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_429 = func_9(Param2.f_14, 0);
					*uParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_2600 = 7;
				}
				break;
			
			case 7:
				if (!func_41())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						func_97("TOW_TUT_04A", 7500, 1);
						iLocal_2600 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_2600 = 10;
				}
				if (!func_41())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_469 = MISC::GET_GAME_TIMER();
						if (bLocal_443)
						{
							HUD::SET_BLIP_ROUTE(*uParam22, 0);
							HUD::REMOVE_BLIP(uParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_429 = func_9(Param2.f_14, 0);
							*uParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam22))
						{
							HUD::SET_BLIP_COLOUR(*uParam22, 5);
						}
						iLocal_2600 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_87("TOWT_HELP_UH", -1);
					func_191();
					if (!ENTITY::IS_ENTITY_DEAD(uParam0) && !ENTITY::IS_ENTITY_DEAD(uParam1))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
						{
							iLocal_2600 = 11;
						}
					}
				}
				else
				{
					func_190();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_87("TOWT_HELP_UH", -1);
					func_191();
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
					{
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						func_128(&uLocal_398, 0, 0);
						iLocal_2600 = 12;
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
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1) && !bLocal_2601)
				{
					if (func_41())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						func_147();
						iLocal_2600 = 6;
					}
					else
					{
						func_89(*uParam22);
						SYSTEM::SETTIMERA(0);
						iLocal_2600 = 6;
						func_146(&Local_2347, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2601 = true;
					}
				}
			}
			if (!iLocal_461)
			{
				if (bLocal_2601)
				{
					if (!func_41())
					{
						HUD::CLEAR_HELP(1);
						func_97("TOWT_OBJ_06", 7500, 1);
						iLocal_461 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_190()//Position - 0xB5CA
{
	switch (iLocal_475)
	{
		case 0:
			if (!func_7(&uLocal_2524))
			{
				func_238(&uLocal_2524);
			}
			else if (func_4(&uLocal_2524) > 10f)
			{
				if (func_146(&uLocal_483, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_475 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_41())
			{
				if (func_146(&uLocal_483, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_53(&uLocal_2524);
					iLocal_475 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_2524))
			{
				if (func_4(&uLocal_2524) > 15f)
				{
					if (!func_41())
					{
						if (func_146(&uLocal_483, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_475 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_191()//Position - 0xB6A2
{
	if (!iLocal_458)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!func_41())
			{
				if (func_146(&uLocal_483, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_458 = 1;
				}
			}
		}
	}
}

void func_192(char* sParam0)//Position - 0xB6DB
{
	SYSTEM::SETTIMERA(0);
	func_87(sParam0, -1);
}

void func_193(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, int iParam21)//Position - 0xB6EF
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam20) || !ENTITY::DOES_ENTITY_EXIST(uParam21))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam20) || ENTITY::IS_ENTITY_DEAD(iParam21))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var3 = { Param0.f_10 };
		uVar6 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var3 = { Param0.f_3 };
		uVar6 = Param0.f_6;
	}
	if (!iLocal_444)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam21, Var0, Var3, uVar6, 0, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam20) && !ENTITY::IS_ENTITY_DEAD(iParam21))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam20, iParam21))
				{
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					iLocal_2600 = 12;
					iLocal_444 = 1;
				}
			}
		}
	}
}

int func_194(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xB7BD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		iVar0 = (*uParam2 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (fLocal_427 == 0f)
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
					if (func_146(&Local_2347, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_146(&Local_2347, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_427 = (fLocal_427 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_146(&Local_2347, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_146(&Local_2347, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_427 = (fLocal_427 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_146(&Local_2347, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_146(&Local_2347, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_427 = (fLocal_427 + 75f);
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

int func_195(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)//Position - 0xB985
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		iVar0 = (*uParam3 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(uParam2))
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
					func_197("TOW_DMG_01", 25, -1);
					func_196(func_21(), 1, 25);
					fLocal_427 = (fLocal_427 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_197("TOW_DMG_01", 75, -1);
					func_196(func_21(), 1, 75);
					fLocal_427 = (fLocal_427 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_87("TOW_DMG_03", -1);
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

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0xBAE3
{
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_59(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

void func_197(char* sParam0, int iParam1, int iParam2)//Position - 0xBB2C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

void func_198(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xBB49
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
		bLocal_466 = !func_199(uParam0);
		return;
	}
	else if (!HUD::DOES_BLIP_EXIST(*uParam1) && bLocal_466)
	{
		*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
		HUD::SET_BLIP_COLOUR(*uParam1, 3);
		HUD::SET_BLIP_ROUTE(*uParam1, 1);
	}
	if (!bParam9)
	{
		if (!bLocal_466)
		{
			if (!func_199(uParam0))
			{
				HUD::CLEAR_SMALL_PRINTS();
				*uParam5 = MISC::GET_GAME_TIMER();
				if (bParam13)
				{
					if (iLocal_439)
					{
						func_97("DTRSHRD_03", 7500, 1);
						iLocal_439 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(*uParam1))
					{
						*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
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
				bLocal_466 = true;
			}
		}
		else if (func_199(uParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			if (!PED::IS_PED_INJURED((*uParam2)[0 /*20*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], *uParam0, 0) && !PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0 /*20*/]);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_9, 3);
						HUD::SET_BLIP_SCALE((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_440)
			{
				func_97(sParam4, 7500, 1);
				iLocal_440 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
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
					if (iLocal_419 == 3)
					{
						Local_649[iLocal_2603 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_649[iLocal_2603 /*23*/].f_1);
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
						if (iLocal_419 == 3)
						{
							Local_649[iLocal_2603 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_649[iLocal_2603 /*23*/].f_1);
							HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_466 = false;
		}
	}
}

int func_199(var uParam0)//Position - 0xBED9
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != *uParam0)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_200()//Position - 0xBF2D
{
	int iVar0;
	
	iVar0 = func_21();
	if (iVar0 != 1)
	{
		func_168();
	}
}

void func_201(var uParam0)//Position - 0xBF45
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_89962.f_20, 2)) || MISC::IS_BIT_SET(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_202(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_202(var uParam0)//Position - 0xBFD3
{
	func_203(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_203(var uParam0, char* sParam1, var uParam2)//Position - 0xBFE9
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_204(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, uParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, uParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}

int func_204(int iParam0)//Position - 0xC0C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_205()//Position - 0xC0F1
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_2263, 25);
	MISC::SET_BIT(&Global_2264, 11);
}

void func_206(var uParam0)//Position - 0xC16E
{
	int iVar0;
	int iVar1;
	
	func_229();
	uLocal_2607 = func_228();
	if (uParam0->f_3 == 3)
	{
		sLocal_2619[0] = "base";
		func_226(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		func_226(&uLocal_2647, "oddjobs@towingcome_here");
		func_226(&uLocal_2647, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2958)
	{
		func_226(&uLocal_2647, "Ped");
		func_226(&uLocal_2647, "oddjobs@towing");
		func_226(&uLocal_2647, "oddjobs@towingangryidle_a");
		func_226(&uLocal_2647, "oddjobs@towingpleadingidle_b");
		func_226(&uLocal_2647, "oddjobs@towingpleadingidle_a");
		func_226(&uLocal_2647, "move_m@JOG@");
	}
	else if (bLocal_2958)
	{
		func_226(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		func_226(&uLocal_2647, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_226(&uLocal_2647, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_2618 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_226(&uLocal_2647, sLocal_2618);
		func_224(&uLocal_2637, joaat("ambulance"));
		func_224(&uLocal_2637, joaat("s_m_m_paramedic_01"));
		sLocal_2619[0] = "react_big_variations_a";
		sLocal_2619[1] = "react_big_variations_b";
		sLocal_2619[2] = "react_big_variations_c";
		func_226(&uLocal_2647, "move_m@JOG@");
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_226(&uLocal_2647, "oddjobs@towing");
		func_226(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		func_226(&uLocal_2647, "oddjobs@towingpleadingidle_b");
		func_224(&uLocal_2637, joaat("freightcont1"));
		func_224(&uLocal_2637, joaat("tankercar"));
		func_224(&uLocal_2637, joaat("freight"));
		func_224(&uLocal_2637, joaat("freightcar"));
		func_224(&uLocal_2637, joaat("s_m_m_lsmetro_01"));
		func_224(&uLocal_2637, joaat("a_f_m_bevhills_01"));
		func_224(&uLocal_2637, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_223();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_2986[iVar0] = Local_649[iLocal_2603 /*23*/].f_20;
	}
	else
	{
		func_222();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_2986[iVar0] == 0)
		{
			iLocal_2986[iVar0] = func_220(&iLocal_2986, &iLocal_81, 10);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2986[iVar0], 3);
		}
		if (bLocal_2964)
		{
			iLocal_2986[iVar0] = joaat("landstalker");
			func_224(&uLocal_2637, iLocal_2986[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2986[iVar0], 3);
		}
		else if (iLocal_2986[iVar0] != 0)
		{
			func_224(&uLocal_2637, iLocal_2986[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2986[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_2958 && iLocal_2961)
	{
		if (bLocal_2964)
		{
			func_219(&iVar1);
			iLocal_73 = joaat("a_m_m_tranvest_01");
			iLocal_73 = iLocal_73;
			func_224(&uLocal_2637, iLocal_73);
		}
		else if (bLocal_2965)
		{
			func_218(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_217(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_2964)
		{
			func_217(&iVar1, 1);
		}
		else
		{
			func_217(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_2988[iVar0] = func_220(&uLocal_2988, &iLocal_74, iVar1);
			if (uLocal_2988[iVar0] != 0)
			{
				func_224(&uLocal_2637, uLocal_2988[iVar0]);
			}
			iVar0++;
		}
	}
	func_224(&uLocal_2637, iLocal_648);
	func_216(&uLocal_2655, "TOW", 2, 0);
	func_216(&uLocal_2655, "DTRSHRD", 3, 0);
	func_215(&uLocal_2637);
	func_212(&uLocal_2647, &uLocal_2655);
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_2607))
	{
		func_201(&uLocal_2655);
		SYSTEM::WAIT(0);
	}
	while (!func_211(&uLocal_2637) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_2986[0]))
	{
		func_201(&uLocal_2655);
		SYSTEM::WAIT(0);
	}
	while (!func_207(&uLocal_2655))
	{
		func_201(&uLocal_2655);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TOWING_TRAIN", false) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			func_201(&uLocal_2655);
			SYSTEM::WAIT(0);
		}
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		func_201(&uLocal_2655);
		SYSTEM::WAIT(0);
	}
}

bool func_207(var uParam0)//Position - 0xC5AC
{
	return func_208(uParam0);
}

int func_208(var uParam0)//Position - 0xC5BA
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_209(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_209(var uParam0)//Position - 0xC61E
{
	return func_210(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_210(int iParam0, char* sParam1, int iParam2)//Position - 0xC635
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_204(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(uParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2, uParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, MISC::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(uParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(uParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_211(var uParam0)//Position - 0xC728
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_212(var uParam0, var uParam1)//Position - 0xC76F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			func_213(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_213(var uParam0, char* sParam1)//Position - 0xC7A5
{
	func_214(uParam0, 1, -1, sParam1, 0);
}

void func_214(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xC7B8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_215(var uParam0)//Position - 0xC8A2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_216(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xC8D2
{
	var uVar0;
	
	if (bParam3)
	{
		MISC::SET_BIT(&uVar0, 26);
	}
	func_214(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_217(var uParam0, bool bParam1)//Position - 0xC8F5
{
	if (bParam1)
	{
		iLocal_74[0] = joaat("a_m_y_genstreet_02");
		iLocal_74[1] = joaat("a_m_y_beach_03");
		iLocal_74[2] = joaat("g_m_y_salvagoon_01");
		iLocal_74[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_74[0] = joaat("a_f_m_bevhills_01");
		iLocal_74[1] = joaat("a_m_y_genstreet_02");
		iLocal_74[2] = joaat("a_f_y_hipster_02");
		iLocal_74[3] = joaat("a_m_y_beach_03");
		iLocal_74[4] = joaat("s_f_y_sweatshop_01");
		iLocal_74[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_218(var uParam0)//Position - 0xC971
{
	iLocal_74[0] = joaat("a_m_m_tramp_01");
	iLocal_74[1] = joaat("a_m_y_methhead_01");
	iLocal_74[2] = joaat("a_m_m_tramp_01");
	iLocal_74[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_219(var uParam0)//Position - 0xC9A5
{
	iLocal_74[0] = joaat("a_m_y_yoga_01");
	iLocal_74[1] = joaat("a_m_y_beach_03");
	iLocal_74[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_220(var uParam0, int iParam1, int iParam2)//Position - 0xC9CF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iParam2 - 1));
	while (func_221((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_221(int iParam0, var uParam1)//Position - 0xCA19
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_222()//Position - 0xCA59
{
	iLocal_81[0] = joaat("tailgater");
	iLocal_81[1] = joaat("asterope");
	iLocal_81[2] = joaat("primo");
	iLocal_81[3] = joaat("primo");
	iLocal_81[4] = joaat("schwarzer");
	iLocal_81[5] = joaat("emperor");
	iLocal_81[6] = joaat("premier");
	iLocal_81[7] = joaat("buffalo");
	iLocal_81[8] = joaat("intruder");
	iLocal_81[9] = joaat("intruder");
}

void func_223()//Position - 0xCAC7
{
	iLocal_81[0] = joaat("buccaneer");
	iLocal_81[1] = joaat("voodoo2");
	iLocal_81[2] = joaat("manana");
	iLocal_81[3] = joaat("ruiner");
	iLocal_81[4] = joaat("ruiner");
	iLocal_81[5] = joaat("voodoo2");
	iLocal_81[6] = joaat("surfer2");
	iLocal_81[7] = joaat("emperor2");
	iLocal_81[8] = joaat("stanier");
	iLocal_81[9] = joaat("tailgater");
}

int func_224(var uParam0, int iParam1)//Position - 0xCB35
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_225(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_225(var uParam0)//Position - 0xCB92
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_226(var uParam0, char* sParam1)//Position - 0xCBBE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_227(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_227(var uParam0)//Position - 0xCC23
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_228()//Position - 0xCC52
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

void func_229()//Position - 0xCC62
{
	func_273(&uLocal_411, 1);
}

void func_230()//Position - 0xCC72
{
	switch (iLocal_419)
	{
		case 2:
			if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted % 2) == 0)
			{
				sLocal_2623 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_2623 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_2623 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_2964)
			{
			}
			else
			{
				sLocal_2623 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_2623 = "TOWTRAINM";
			break;
	}
}

int func_231()//Position - 0xCCEC
{
	return Local_649[iLocal_2603 /*23*/].f_22;
}

void func_232(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xCCFE
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_233()//Position - 0xCD99
{
	iLocal_419 = func_235(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_eLastNode);
	if (!func_234(iLocal_419))
	{
		iLocal_419 = 3;
	}
	if (iLocal_419 == 3)
	{
	}
	else
	{
		iLocal_2603 = func_237(1300f, iLocal_419, Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iLastNodeIndex);
		Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iLastNodeIndex = iLocal_2603;
	}
	if (iLocal_2603 == 0)
	{
		iLocal_419 = 3;
	}
	Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_eLastNode = iLocal_419;
}

int func_234(int iParam0)//Position - 0xCE08
{
	iLocal_2603 = func_237(1300f, iParam0, Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iLastNodeIndex);
	if (iLocal_2603 == -1)
	{
		return 0;
	}
	return 1;
}

int func_235(int iParam0)//Position - 0xCE36
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted < iVar0)
		{
			iVar0 = Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iHandiCompleted < iVar0)
		{
			iVar0 = Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iHandiCompleted;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted < iVar0)
		{
			iVar0 = Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted < iVar0)
		{
			iVar0 = Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAccidentCompleted < iVar0)
		{
			iVar0 = Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAccidentCompleted;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_236()//Position - 0xCEF3
{
	if (Global_89962 == 10 || Global_89962 == 9)
	{
		return 1;
	}
	return 0;
}

int func_237(float fParam0, int iParam1, int iParam2)//Position - 0xCF17
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
		fVar2 = func_9(Local_649[iVar58 /*23*/].f_1, 1);
		if (!func_11(Local_649[iVar58 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_649[iVar58 /*23*/] == iParam1)
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

void func_238(var uParam0)//Position - 0xCFE5
{
	if (!func_7(uParam0))
	{
		func_53(uParam0);
	}
}

void func_239()//Position - 0xCFFD
{
	Local_44[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_44[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_44[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_44[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_44[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	Local_44[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_44[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_44[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	Local_69[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_240(var uParam0)//Position - 0xD0CB
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.549f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.875f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.813f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.707f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.221f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.433f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.75f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.763f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.141f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.753f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.855f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.252f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.656f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.84f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.689f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.069f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.362f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.219f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.459f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.422f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.026f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.768f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.305f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.522f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.695f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.078f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.392f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.542f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.48f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.183f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.963f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.473f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.783f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.58f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.098f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.365f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.806f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.198f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.379f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.433f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.901f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.54f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.039f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.881f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.237f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.254f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.116f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.637f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.57f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.197f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.783f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.737f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_241(var uParam0)//Position - 0xDAF4
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.867f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.226f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.658f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.002f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.607f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.826f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.779f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.093f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.568f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.657f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.999f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.885f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.846f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.903f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.293f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.781f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.73f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.237f, 4389.601f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.444f, 4772.696f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.061f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.663f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.8829f, -2593.548f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.779f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_242()//Position - 0xECD9
{
	char* sVar0;
	
	if (iLocal_3114 < 16)
	{
		HUD::CLEAR_PRINTS();
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		func_273(&Global_96007, 3);
		switch (iLocal_3083)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			func_245(sVar0);
		}
		func_244();
		func_246(SCRIPT::GET_THIS_SCRIPT_NAME());
		while (!func_243())
		{
			SYSTEM::WAIT(0);
		}
		func_168();
	}
}

int func_243()//Position - 0xEE62
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_89962 == 7 || Global_89962 == 8)
	{
		return 1;
	}
	return 0;
}

void func_244()//Position - 0xEE8F
{
	Global_89997 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_68477))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_68477))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
		MISC::SET_BIT(&(Global_89962.f_20), 25);
	}
}

void func_245(char* sParam0)//Position - 0xEF7A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_68477, sParam0, 16);
			StringCopy(&Global_68481, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_246(char* sParam0)//Position - 0xEFB8
{
	if (Global_89962 != 12)
	{
		func_247(sParam0, 5, -1);
	}
}

int func_247(char* sParam0, int iParam1, int iParam2)//Position - 0xEFD5
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_270();
	func_269();
	Global_89962 = 0;
	StringCopy(&(Global_89962.f_3), sParam0, 32);
	Global_89962.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	func_267(1);
	func_265(1);
	func_262(0);
	func_261(1);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 9);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 6);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 20);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 21);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(uVar0))
				{
					MISC::SET_BIT(&(Global_89962.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	func_260(0);
	func_259(1);
	Global_89962.f_2 = Global_89999;
	if (func_258())
	{
		if (func_257())
		{
			if (Global_89999 >= func_254())
			{
				if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 16))
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam2 /*6*/].f_1 >= 2)
					{
						Global_84543 = 1;
					}
				}
			}
		}
		else if (Global_89962.f_11 == 6)
		{
			func_249(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam2 /*6*/].f_4 >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_248(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar33] >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
	}
	return 1;
}

int func_248(char* sParam0)//Position - 0xF167
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", uParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_249(int iParam0, var uParam1)//Position - 0xF1BD
{
	switch (iParam0)
	{
		case 0:
			func_250(uParam1, "Abigail1", func_252(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 1:
			func_250(uParam1, "Abigail2", func_252(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 2:
			func_250(uParam1, "Barry1", func_252(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 3:
			func_250(uParam1, "Barry2", func_252(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_251(iParam0), 1, 1);
			break;
		
		case 4:
			func_250(uParam1, "Barry3", func_252(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 5:
			func_250(uParam1, "Barry3A", func_252(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 6:
			func_250(uParam1, "Barry3C", func_252(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 7:
			func_250(uParam1, "Barry4", func_252(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_251(iParam0), 0, 0);
			break;
		
		case 8:
			func_250(uParam1, "Dreyfuss1", func_252(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 9:
			func_250(uParam1, "Epsilon1", func_252(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 10:
			func_250(uParam1, "Epsilon2", func_252(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 11:
			func_250(uParam1, "Epsilon3", func_252(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 12:
			func_250(uParam1, "Epsilon4", func_252(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 13:
			func_250(uParam1, "Epsilon5", func_252(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 14:
			func_250(uParam1, "Epsilon6", func_252(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 15:
			func_250(uParam1, "Epsilon7", func_252(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 16:
			func_250(uParam1, "Epsilon8", func_252(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 17:
			func_250(uParam1, "Extreme1", func_252(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 18:
			func_250(uParam1, "Extreme2", func_252(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 19:
			func_250(uParam1, "Extreme3", func_252(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 20:
			func_250(uParam1, "Extreme4", func_252(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 21:
			func_250(uParam1, "Fanatic1", func_252(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_251(iParam0), 1, 0);
			break;
		
		case 22:
			func_250(uParam1, "Fanatic2", func_252(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_251(iParam0), 1, 0);
			break;
		
		case 23:
			func_250(uParam1, "Fanatic3", func_252(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_251(iParam0), 0, 1);
			break;
		
		case 24:
			func_250(uParam1, "Hao1", func_252(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_251(iParam0), 0, 1);
			break;
		
		case 25:
			func_250(uParam1, "Hunting1", func_252(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 26:
			func_250(uParam1, "Hunting2", func_252(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 27:
			func_250(uParam1, "Josh1", func_252(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 28:
			func_250(uParam1, "Josh2", func_252(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_251(iParam0), 1, 1);
			break;
		
		case 29:
			func_250(uParam1, "Josh3", func_252(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_251(iParam0), 1, 1);
			break;
		
		case 30:
			func_250(uParam1, "Josh4", func_252(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 31:
			func_250(uParam1, "Maude1", func_252(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 32:
			func_250(uParam1, "Minute1", func_252(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 33:
			func_250(uParam1, "Minute2", func_252(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 34:
			func_250(uParam1, "Minute3", func_252(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 35:
			func_250(uParam1, "MrsPhilips1", func_252(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 36:
			func_250(uParam1, "MrsPhilips2", func_252(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 37:
			func_250(uParam1, "Nigel1", func_252(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 38:
			func_250(uParam1, "Nigel1A", func_252(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_251(iParam0), 1, 1);
			break;
		
		case 39:
			func_250(uParam1, "Nigel1B", func_252(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_251(iParam0), 1, 1);
			break;
		
		case 40:
			func_250(uParam1, "Nigel1C", func_252(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_251(iParam0), 1, 1);
			break;
		
		case 41:
			func_250(uParam1, "Nigel1D", func_252(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_251(iParam0), 1, 1);
			break;
		
		case 42:
			func_250(uParam1, "Nigel2", func_252(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_251(iParam0), 1, 1);
			break;
		
		case 43:
			func_250(uParam1, "Nigel3", func_252(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_251(iParam0), 1, 1);
			break;
		
		case 44:
			func_250(uParam1, "Omega1", func_252(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 45:
			func_250(uParam1, "Omega2", func_252(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 46:
			func_250(uParam1, "Paparazzo1", func_252(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 47:
			func_250(uParam1, "Paparazzo2", func_252(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 48:
			func_250(uParam1, "Paparazzo3", func_252(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 49:
			func_250(uParam1, "Paparazzo3A", func_252(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 50:
			func_250(uParam1, "Paparazzo3B", func_252(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 51:
			func_250(uParam1, "Paparazzo4", func_252(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 52:
			func_250(uParam1, "Rampage1", func_252(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 54:
			func_250(uParam1, "Rampage3", func_252(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 55:
			func_250(uParam1, "Rampage4", func_252(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 56:
			func_250(uParam1, "Rampage5", func_252(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_251(iParam0), 0, 0);
			break;
		
		case 53:
			func_250(uParam1, "Rampage2", func_252(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_251(iParam0), 1, 0);
			break;
		
		case 57:
			func_250(uParam1, "TheLastOne", func_252(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 58:
			func_250(uParam1, "Tonya1", func_252(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 59:
			func_250(uParam1, "Tonya2", func_252(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 60:
			func_250(uParam1, "Tonya3", func_252(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 61:
			func_250(uParam1, "Tonya4", func_252(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		case 62:
			func_250(uParam1, "Tonya5", func_252(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_251(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_250(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x10334
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_251(int iParam0)//Position - 0x103C5
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
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_252(int iParam0)//Position - 0x1070B
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_253(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_253(int iParam0)//Position - 0x10741
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_254()//Position - 0x10B8C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_255(&(Global_89962.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_255(var uParam0, bool bParam1)//Position - 0x10BB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(uParam0);
	iVar1 = func_256(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_256(int iParam0, bool bParam1)//Position - 0x10BDA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_81155[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_257()//Position - 0x10C10
{
	if ((((Global_89962.f_11 == 0 || Global_89962.f_11 == 1) || Global_89962.f_11 == 2) || Global_89962.f_11 == 3) || Global_89962.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_258()//Position - 0x10C60
{
	if ((((Global_89962.f_11 == 0 || Global_89962.f_11 == 1) || Global_89962.f_11 == 2) || Global_89962.f_11 == 6) || Global_89962.f_11 == 3)
	{
		return 1;
	}
	if (Global_89962.f_11 == 5)
	{
		if (func_248(&(Global_89962.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_259(int iParam0)//Position - 0x10CCC
{
	if (iParam0 == 1)
	{
		Global_35462 = 1;
	}
	else
	{
		Global_35462 = 0;
	}
}

void func_260(int iParam0)//Position - 0x10CE5
{
	HUD::DISPLAY_HUD(iParam0);
	HUD::DISPLAY_RADAR(iParam0);
}

void func_261(int iParam0)//Position - 0x10CF9
{
	if (iParam0 == 1)
	{
		HUD::THEFEED_PAUSE();
		MISC::SET_BIT(&(Global_89962.f_20), 3);
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 3))
	{
		HUD::THEFEED_RESUME();
		MISC::CLEAR_BIT(&(Global_89962.f_20), 3);
	}
}

void func_262(int iParam0)//Position - 0x10D36
{
	if (iParam0 == 1)
	{
		if (MISC::IS_BIT_SET(Global_89962.f_20, 4))
		{
			func_264();
			MISC::CLEAR_BIT(&(Global_89962.f_20), 4);
		}
	}
	else
	{
		func_263();
		MISC::SET_BIT(&(Global_89962.f_20), 4);
	}
}

void func_263()//Position - 0x10D73
{
	Global_17098.f_5 = 1;
}

void func_264()//Position - 0x10D81
{
	Global_17098.f_5 = 0;
}

void func_265(bool bParam0)//Position - 0x10D8F
{
	if (bParam0)
	{
		func_266();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_137(0))
		{
			func_267(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_266()//Position - 0x10DF2
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_267(int iParam0)//Position - 0x10E1B
{
	if (Global_14551)
	{
		func_268(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_18())
	{
		Global_14393.f_1 = 3;
	}
}

void func_268(bool bParam0, bool bParam1)//Position - 0x10E8B
{
	if (bParam0)
	{
		if (func_137(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

void func_269()//Position - 0x10EFF
{
	Global_84543 = 0;
	Global_84544 = 0;
}

void func_270()//Position - 0x10F11
{
	Global_89962 = 13;
	Global_89962.f_1 = -1;
	Global_89962.f_2 = 0;
	Global_89962.f_30 = 0f;
	MISC::CLEAR_BIT(&(Global_89962.f_20), 25);
	Global_89996 = 0;
	func_259(0);
	func_272();
	func_271();
	Global_89962.f_18 = -1;
	Global_89962.f_19 = -1;
}

void func_271()//Position - 0x10F60
{
	MISC::CLEAR_BIT(&(Global_89962.f_20), 22);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 8);
}

void func_272()//Position - 0x10F80
{
	if (Global_89962.f_16 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_89962.f_16));
		Global_89962.f_16 = 0;
	}
	if (Global_89962.f_17 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_89962.f_17));
		Global_89962.f_17 = 0;
	}
}

void func_273(var uParam0, int iParam1)//Position - 0x10FBE
{
	func_274(uParam0, iParam1);
}

void func_274(var uParam0, var uParam1)//Position - 0x10FCE
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_275()//Position - 0x10FDF
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

