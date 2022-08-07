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
		if (!GlobalFunc_142())
		{
			GlobalFunc_5211(&Global_96007, 3);
			GlobalFunc_9156(SCRIPT::GET_THIS_SCRIPT_NAME());
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
	GlobalFunc_4902(&Local_649);
	GlobalFunc_4901(&Local_1869);
	func_239();
	iVar0 = 0;
	GlobalFunc_7731(&uLocal_3090);
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
				if (!GlobalFunc_Is_Mission_Retry())
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
		GlobalFunc_173(&Local_2347, 3, 0, "TOWDISPATCH", 0, 1);
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
	GlobalFunc_872();
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
							GlobalFunc_5077();
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
							GlobalFunc_4935();
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
										GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
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
							GlobalFunc_4935();
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
										GlobalFunc_8932(&uLocal_398, ENTITY::GET_ENTITY_COORDS(Local_2995[0 /*20*/].f_6, 1), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								GlobalFunc_8932(&uLocal_398, Local_2628, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_145(0))
					{
						GlobalFunc_4948(&uLocal_398, 0, 0);
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
	if (GlobalFunc_490())
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
		if (GlobalFunc_7072(&uLocal_3099, 180f))
		{
			iLocal_2950 = 1;
			GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (GlobalFunc_7072(&uLocal_3099, 300f))
	{
		if (iLocal_419 != 2)
		{
			iLocal_3083 = 14;
			return 1;
		}
	}
	return 0;
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
	if (!GlobalFunc_105(Local_2624[0 /*3*/]))
	{
		if (!iLocal_2951)
		{
			if (GlobalFunc_6618(Local_2624[0 /*3*/], 0) > (fLocal_429 + 400f))
			{
				GlobalFunc_10652(&Local_2347, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_2951 = 1;
			}
		}
		if (GlobalFunc_6618(Local_2624[0 /*3*/], 0) > (fLocal_429 + 450f))
		{
			iLocal_3083 = 11;
			return 1;
		}
	}
	return 0;
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
					if (GlobalFunc_111())
					{
						Local_476 = { GlobalFunc_514() };
						GlobalFunc_5105();
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
			if (!GlobalFunc_111())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2604 = 1;
			}
			break;
		
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && iLocal_467) && !GlobalFunc_663("TOWT_OBJ_04", 0, 0))
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_173(&Param0, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
					{
						if (iLocal_419 == 1)
						{
							GlobalFunc_10652(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_482 = "TOW_TRN_C1";
						}
						else if (iLocal_419 == 3)
						{
							GlobalFunc_10652(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_C";
						}
						bLocal_463 = true;
					}
					else if (iLocal_419 == 1)
					{
						if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
						{
							GlobalFunc_173(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							GlobalFunc_10652(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_482 = "TOW_MECH";
						}
						else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
						{
							GlobalFunc_173(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							GlobalFunc_10652(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
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
							GlobalFunc_173(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							GlobalFunc_10652(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_CONV";
						}
						else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
						{
							GlobalFunc_173(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							GlobalFunc_10652(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_482 = "TOW_BRK_CON2";
						}
						else
						{
							func_35(Param0, iParam165);
						}
						bLocal_463 = true;
					}
				}
				else if (GlobalFunc_5672(sLocal_482))
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
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10699(&Local_2347, "TOWAUD", sLocal_482, &Local_476, 8, 0, 0))
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
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
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
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
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
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
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
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
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
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (iLocal_419 == 3)
				{
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_464)
					{
						if (GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_464 = 1;
						}
					}
				}
			}
			break;
	}
}



void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x2343
{
	int iVar0;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_482 = "TOW_GEN_MCH4";
	}
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x2425
{
	GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	GlobalFunc_10652(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_482 = "TOW_GEN_MCH2";
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
	GlobalFunc_5312(&Global_96007, 3);
	GlobalFunc_5211(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBools), 8192);
	GlobalFunc_7068();
	func_168();
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
			GlobalFunc_2656(14);
			if (iLocal_419 == 3)
			{
				if (GlobalFunc_6656(&Local_3062, &fLocal_3065, &uLocal_3053, &uLocal_3056))
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
						GlobalFunc_173(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 2:
						GlobalFunc_173(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 0:
						GlobalFunc_173(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2964)
						{
							if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3114 = 4;
							}
						}
						else if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 1:
						GlobalFunc_173(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3114 = 4;
						}
						break;
					
					case 4:
						GlobalFunc_173(&Local_2347, 4, 0, "TOWDISPATCH", 0, 1);
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
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
						GlobalFunc_7731(&uLocal_3099);
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
						GlobalFunc_7731(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 0:
					if (func_114("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						GlobalFunc_7731(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 1:
					if (func_114("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2995[0 /*20*/].f_6, 1);
						func_112();
						VEHICLE::SET_RANDOM_TRAINS(0);
						GlobalFunc_58(0, 0);
						GlobalFunc_58(1, 0);
						GlobalFunc_58(2, 0);
						GlobalFunc_58(3, 0);
						GlobalFunc_58(4, 0);
						GlobalFunc_58(5, 0);
						GlobalFunc_58(6, 0);
						GlobalFunc_58(7, 0);
						GlobalFunc_58(8, 0);
						GlobalFunc_58(9, 0);
						GlobalFunc_58(10, 0);
						GlobalFunc_58(11, 0);
						iLocal_2959 = 1;
						GlobalFunc_7731(&uLocal_3099);
						iLocal_3114 = 6;
					}
					break;
				
				case 4:
					if (func_114("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2995[0 /*20*/].f_6, 1);
						func_112();
						GlobalFunc_7731(&uLocal_3099);
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
			if (!GlobalFunc_111())
			{
				GlobalFunc_164(sLocal_3113, 7500, 1);
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
					if (GlobalFunc_105(Local_2628))
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
				GlobalFunc_4948(&uLocal_398, 0, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2995[0 /*20*/].f_6, 0, 0);
				if (iLocal_3037 == 0)
				{
					iLocal_2940 = 0;
					iLocal_3114 = 15;
				}
				else
				{
					GlobalFunc_164("TOWT_OBJ_05", 7500, 1);
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
			fLocal_3066 = GlobalFunc_4981(&uLocal_3090);
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
			if (!GlobalFunc_8254(&uLocal_2607, 0))
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






void func_55(bool bParam0)//Position - 0x2FBF
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (GlobalFunc_8329())
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
	
	GlobalFunc_10844(Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iParam0 /*4*/], GlobalFunc_888(iParam0), iParam1, 0, 0);
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
	STATS::STAT_GET_INT(GlobalFunc_887(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(GlobalFunc_887(iParam0, 1), iVar0, 1);
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
	GlobalFunc_6715(&(uParam0->f_2));
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
		if ((GlobalFunc_4981(&(Local_2995[iLocal_3036 /*20*/].f_11)) - Local_2995[iLocal_3036 /*20*/].f_14) > 120f)
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
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 1) || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 4)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0)
				{
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 1)
				{
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 4)
				{
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_419 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_419 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2958)
		{
		}
		iLocal_467 = 0;
		HUD::REMOVE_BLIP(&(Local_2995[iLocal_3036 /*20*/].f_8));
		GlobalFunc_6715(&uLocal_3087);
		iLocal_3037 = (iLocal_3037 - 1);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iLocal_3036 /*20*/].f_6))
	{
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6))
		{
			iLocal_467 = 0;
			GlobalFunc_4948(&uLocal_398, 0, 0);
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_2977)
					{
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_2977)
					{
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_2977)
					{
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_2977)
					{
						if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_2977 = 1;
						}
					}
				}
			}
			GlobalFunc_6715(&uLocal_3087);
			if (!bLocal_2956)
			{
				if (GlobalFunc_111())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(1);
					HUD::CLEAR_PRINTS();
					GlobalFunc_164(sParam0, 7500, 1);
				}
				if (!GlobalFunc_111())
				{
					if (iLocal_2930)
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_164(sParam0, 7500, 1);
						iLocal_2930 = 0;
					}
					else
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_164(sParam0, 7500, 1);
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
		if (!GlobalFunc_105(Local_3016.f_14))
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
					GlobalFunc_159("TOWT_HELP_UH", -1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108) && !ENTITY::IS_ENTITY_DEAD(Local_2995[iLocal_3036 /*20*/].f_6))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6) || (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2995[iLocal_3036 /*20*/].f_6, 0) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[iLocal_3036 /*20*/].f_6)))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4935();
						}
						GlobalFunc_4948(&uLocal_398, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
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
							GlobalFunc_173(&uLocal_483, 3, iLocal_2983, "TONYA", 0, 1);
							if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
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
					GlobalFunc_7604();
					GlobalFunc_4948(&uLocal_398, 0, 0);
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
						GlobalFunc_4720(Local_2995[iVar1 /*20*/].f_8);
						Local_2995[iVar1 /*20*/].f_14 = GlobalFunc_4981(&(Local_2995[iVar1 /*20*/].f_11));
						if (iLocal_2991 == 0)
						{
							Local_2995[iVar1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Param1);
							fLocal_429 = GlobalFunc_6618(Param1, 0);
							Local_2624[0 /*3*/] = { Param1 };
						}
						if (iLocal_419 == 4)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_2995[0 /*20*/].f_6, 0, 0);
						}
						GlobalFunc_6715(&uLocal_3099);
						HUD::SET_BLIP_COLOUR(Local_2995[iVar1 /*20*/].f_8, 5);
						HUD::SET_BLIP_ROUTE(Local_2995[iVar1 /*20*/].f_8, 1);
						if (iLocal_419 == 0 && bLocal_2964)
						{
						}
						else if (iLocal_2931)
						{
							GlobalFunc_164(sParam0, 7500, 1);
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


void func_90(var uParam0)//Position - 0x509D
{
	GlobalFunc_235(uParam0);
	StringCopy(&cLocal_316, "", 32);
}




int func_94()//Position - 0x5123
{
	if (bLocal_2958)
	{
		if (bLocal_2601 && !GlobalFunc_111())
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
			if (!GlobalFunc_226(&uLocal_3105))
			{
				GlobalFunc_7731(&uLocal_3105);
				iLocal_3049 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_226(&uLocal_3105))
			{
				if (GlobalFunc_4981(&uLocal_3105) > 10f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !GlobalFunc_111())
					{
						iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
						if (iVar0 == 0)
						{
							GlobalFunc_159("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							GlobalFunc_159("TOW_TUT_02", -1);
						}
						else
						{
							GlobalFunc_159("TOW_TUT_04C", -1);
						}
						GlobalFunc_6715(&uLocal_3105);
						iLocal_3049 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_226(&uLocal_3105))
			{
				if (GlobalFunc_4981(&uLocal_3105) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !GlobalFunc_111())
					{
						GlobalFunc_159("TOW_TUT_03", -1);
						GlobalFunc_6715(&uLocal_3105);
						iLocal_3049 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_226(&uLocal_3105))
			{
				if (GlobalFunc_4981(&uLocal_3105) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !GlobalFunc_111())
					{
						GlobalFunc_159("TOW_TUT_01", -1);
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
	if (GlobalFunc_105(Local_44[0 /*3*/]))
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
						GlobalFunc_894(&iLocal_2597);
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
										GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										GlobalFunc_173(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
									{
										GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										GlobalFunc_173(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									TASK::TASK_ENTER_VEHICLE(Local_2995[iParam1 /*20*/], iLocal_3108, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_419 == 3)
								{
									if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
									{
										GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										GlobalFunc_173(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
									{
										GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										GlobalFunc_173(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
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
									GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									GlobalFunc_173(&Local_2347, 5, Local_2995[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_2976 = 1;
									}
								}
								else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
								{
									GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									GlobalFunc_173(&Local_2347, 6, Local_2995[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
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
			GlobalFunc_6715(&uLocal_3099);
			GlobalFunc_6715(&uLocal_3084);
			GlobalFunc_4720(Local_2995[iParam1 /*20*/].f_8);
			if (!HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2995[iParam1 /*20*/]))
				{
					Local_2995[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2995[iParam1 /*20*/]);
					HUD::SET_BLIP_COLOUR(Local_2995[0 /*20*/].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2995[0 /*20*/].f_9, 0.7f);
				}
			}
			GlobalFunc_164("TOWT_OBJ_02", 7500, 1);
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
				if (GlobalFunc_7605(&uLocal_3123, Local_2995[iParam1 /*20*/], 1125515264, 30000))
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
					GlobalFunc_4720(Local_2995[0 /*20*/].f_9);
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
							GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
					{
						if (iLocal_2952)
						{
							GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
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
							GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWBREAKM", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
					{
						if (iLocal_2952)
						{
							GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
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
						GlobalFunc_164("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3067, "TOWT_OBJ_03", 64);
					}
				}
				GlobalFunc_6715(&uLocal_3084);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
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
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && GlobalFunc_5682(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || GlobalFunc_5682(iParam0, 1) < 8f) && ENTITY::GET_ENTITY_SPEED(iParam1) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
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
		iVar0 = SYSTEM::ROUND(((300f - GlobalFunc_4986(&uLocal_3099)) * 1000f));
		if (iLocal_419 == 3)
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






void func_112()//Position - 0x6262
{
	int iVar0;
	
	iVar0 = GlobalFunc_6653(&Local_44, Local_2624[0 /*3*/], 400f);
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


int func_114(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x6314
{
	fLocal_429 = GlobalFunc_6618(Local_3062, 0);
	Local_2624[0 /*3*/] = { Local_3062 };
	sLocal_3113 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_120(Local_3062, fLocal_3065, uParam2, 0))
		{
			GlobalFunc_4893(Local_2995[0 /*20*/].f_6, &uLocal_3041, &uLocal_3043);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_2995[0 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2995[0 /*20*/].f_6, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2995[0 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2995[0 /*20*/].f_6, 1);
			return 1;
		}
	}
	else if (func_115(bParam4, 0))
	{
		GlobalFunc_4893(Local_2995[0 /*20*/].f_6, &uLocal_3041, &uLocal_3043);
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
	fLocal_429 = GlobalFunc_6618(Local_649[iLocal_2603 /*23*/].f_1, 0);
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
		if (!GlobalFunc_105(Local_1869[func_231() /*28*/].f_17))
		{
			uLocal_2346 = GlobalFunc_2280(Local_1869[func_231() /*28*/].f_17, Local_1869[func_231() /*28*/].f_20);
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


int func_117(struct<3> Param0, var uParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x672D
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam4 = GlobalFunc_4906(&Local_2995);
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
	fLocal_429 = GlobalFunc_6618(Param0, 0);
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
	if (!GlobalFunc_105(Local_649[iLocal_2603 /*23*/].f_10))
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
	GlobalFunc_7731(&(Local_2995[*iParam4 /*20*/].f_11));
	return 1;
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
			else if (Local_279[iVar0 /*3*/].f_2 && GlobalFunc_5682(Local_279[iVar0 /*3*/], 1) > 200f)
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
		if (!GlobalFunc_111())
		{
			GlobalFunc_10652(&Local_95, &cLocal_271, &cLocal_275, 9, 0, 0, 0);
			StringCopy(&cLocal_271, "", 16);
		}
	}
}

void func_126(var uParam0, float fParam1, bool bParam2)//Position - 0x6CE2
{
	if (GlobalFunc_7944(uParam0, fParam1))
	{
		if (bParam2)
		{
			GlobalFunc_159(&cLocal_316, -1);
		}
		else
		{
			GlobalFunc_164(&cLocal_316, 7500, 1);
		}
	}
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
			GlobalFunc_527("TOW_TUT_RETONYA", 7500, 1);
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


int func_150(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x7C84
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
			if (func_151(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
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
				GlobalFunc_6715(&uLocal_2512);
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
							iLocal_470 = iVar0;
							iLocal_470 = iLocal_470;
							GlobalFunc_6715(&uLocal_2512);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!GlobalFunc_105(Local_1869[func_231() /*28*/].f_17))
			{
				GlobalFunc_2275(uLocal_2346, Local_1869[func_231() /*28*/].f_17, Local_1869[func_231() /*28*/].f_20);
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				if (!iLocal_456)
				{
					GlobalFunc_173(&uLocal_483, 3, *uParam8, "TONYA", 0, 1);
					if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
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
					GlobalFunc_173(&uLocal_483, 3, *uParam8, "TONYA", 0, 1);
					if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
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
							if (!GlobalFunc_226(&uLocal_2527))
							{
								GlobalFunc_7731(&uLocal_2527);
							}
							else if (GlobalFunc_4981(&uLocal_2527) > 20f)
							{
								if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
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


int func_160(var uParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, float fParam8, char[4] cParam9, char* sParam10, int iParam11)//Position - 0x8648
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &uVar0) || GlobalFunc_6618(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_162(uParam1);
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
	else if (GlobalFunc_6618(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
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
			Local_2555[iVar0 /*18*/].f_8 = { GlobalFunc_107(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0f) };
		}
		else
		{
			Local_2555[iVar0 /*18*/].f_8 = { GlobalFunc_107(0.5f, 1f, 0f) };
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


int func_164()//Position - 0x8A09
{
	func_167();
	switch (iLocal_3119)
	{
		case 0:
			GlobalFunc_173(&Local_2347, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&Local_2347, 3, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
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
			if (GlobalFunc_6618(Local_649[iLocal_2603 /*23*/].f_1, 1) < 40f || Local_2992.f_1 > 0)
			{
				if (iLocal_419 == 1)
				{
					if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
					{
						GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
						GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3119 = 2;
					}
					else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
					{
						GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3119 = 2;
					}
				}
			}
			else if (GlobalFunc_4710(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040 + 10))
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_3119 = 2;
			}
			break;
		
		case 2:
			if (!GlobalFunc_105(Local_649[iLocal_2603 /*23*/].f_13))
			{
				Local_649[iLocal_2603 /*23*/].f_13.f_2 = 45f;
				Local_649[iLocal_2603 /*23*/].f_16.f_2 = -45f;
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
				{
					GlobalFunc_894(&iLocal_2597);
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
			if (GlobalFunc_4710(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040 + 15))
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWTRAINF", 0, 1);
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				GlobalFunc_894(&iLocal_2597);
				TASK::TASK_LOOK_AT_ENTITY(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_7, -1, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_3119 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_4710(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < IntToFloat(iLocal_3040))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
				{
					if (iLocal_3039 == 1)
					{
						GlobalFunc_4894(&Local_2992);
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
	
	GlobalFunc_51();
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
	if (!GlobalFunc_105(Local_1869[func_231() /*28*/].f_17))
	{
		GlobalFunc_2275(uLocal_2346, Local_1869[func_231() /*28*/].f_17, Local_1869[func_231() /*28*/].f_20);
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
	GlobalFunc_894(&iLocal_2595);
	GlobalFunc_894(&iLocal_2596);
	GlobalFunc_4895(&uLocal_3126);
	GlobalFunc_894(&iLocal_2597);
	GlobalFunc_4948(&uLocal_398, 0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2992))
	{
		GlobalFunc_4894(&Local_2992);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	SCRIPT::TERMINATE_THIS_THREAD();
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
				GlobalFunc_894(&iLocal_2597);
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 0))
		{
			GlobalFunc_894(&iLocal_2597);
		}
	}
	switch (iLocal_3118)
	{
		case 0:
			if (GlobalFunc_6618(Local_649[iLocal_2603 /*23*/].f_1, 1) < 100f)
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
				GlobalFunc_164("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				GlobalFunc_5694("CROSSING_BELL", &iLocal_2598, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3118 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_6618(Local_649[iLocal_2603 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
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
				if (GlobalFunc_4710(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < 175f)
				{
					func_173(Local_2995[0 /*20*/].f_7);
					GlobalFunc_5694("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2596, 1, Local_2995[0 /*20*/].f_7, 0, 0, 0, 0);
					GlobalFunc_4896(&uLocal_3126, Local_2995[0 /*20*/].f_7);
					GlobalFunc_5694("TOWING_TRAIN_HORN_MASTER", &iLocal_2595, 1, Local_2995[0 /*20*/].f_7, 0, 0, 0, 0);
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
					GlobalFunc_4895(&uLocal_3126);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_2995[0 /*20*/].f_7, 1) };
				if (GlobalFunc_4710(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) < 3f)
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
				else if (GlobalFunc_4710(Local_2995[0 /*20*/].f_6, Var0, 1) < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2995[0 /*20*/].f_6, Local_649[iLocal_2603 /*23*/].f_13, Local_649[iLocal_2603 /*23*/].f_16, Local_649[iLocal_2603 /*23*/].f_19, 0, 1, 0))
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
				if (iLocal_2933 && GlobalFunc_4710(Local_2995[0 /*20*/].f_7, Local_649[iLocal_2603 /*23*/].f_1, 1) > 4f)
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
				GlobalFunc_164("TOWT_OBJ_03G", 7500, 1);
				if (HUD::DOES_BLIP_EXIST(Local_2995[0 /*20*/].f_10))
				{
					HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_10));
				}
			}
			HUD::REMOVE_BLIP(&(Local_2995[0 /*20*/].f_10));
			GlobalFunc_894(&iLocal_2595);
			GlobalFunc_894(&iLocal_2596);
			GlobalFunc_4895(&uLocal_3126);
			GlobalFunc_894(&iLocal_2597);
			GlobalFunc_894(&iLocal_2598);
			iLocal_3118 = 7;
			break;
		
		case 7:
			if (!GlobalFunc_111())
			{
				if (!iLocal_467)
				{
					GlobalFunc_164("TOWT_OBJ_03G", 7500, 1);
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


int func_173(int iParam0)//Position - 0x99E2
{
	float fVar0;
	
	if (!GlobalFunc_226(&uLocal_2592))
	{
		GlobalFunc_7731(&uLocal_2592);
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
	if (GlobalFunc_7072(&uLocal_2592, 0.15f))
	{
		fLocal_2599 = (fVar0 - 0.35f);
		if (fLocal_2599 < 8f)
		{
			fLocal_2599 = 8f;
		}
		GlobalFunc_6715(&uLocal_2592);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fLocal_2599);
		VEHICLE::SET_TRAIN_SPEED(iParam0, fLocal_2599);
	}
	return 1;
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
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_2995[0 /*20*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, iLocal_73, 2, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/].f_1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_2995[0 /*20*/].f_1, 42, 1);
					GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2995[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(Local_2995[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2995[0 /*20*/].f_6, 10);
					}
					bLocal_441 = true;
					GlobalFunc_173(&Local_2347, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2965)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/].f_6))
				{
					Local_2995[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2995[0 /*20*/].f_6, 26, uLocal_2988[0], 0, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2995[0 /*20*/], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2995[0 /*20*/], 42, 1);
					GlobalFunc_173(&Local_2347, 2, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2995[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_441 = true;
				}
			}
			else if (GlobalFunc_745())
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
							if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
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
						GlobalFunc_6844(&uLocal_3102, 1f);
					}
					else
					{
						GlobalFunc_7731(&uLocal_3102);
					}
				}
			}
			if (GlobalFunc_226(&uLocal_3102) && GlobalFunc_4981(&uLocal_3102) > 1f)
			{
				if (bLocal_2964 && GlobalFunc_226(&uLocal_3102))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
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
						GlobalFunc_173(&Local_2347, 2, Local_2995[0 /*20*/], "TOWABDBITCHM", 0, 1);
						GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
						{
							GlobalFunc_4897(Local_2995[0 /*20*/]);
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
						GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
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
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
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
						if (!GlobalFunc_111())
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
											GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
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
							GlobalFunc_4935();
							iLocal_3117 = 5;
						}
						else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3108, Local_2995[0 /*20*/].f_6) && bLocal_2978)
						{
							if (bLocal_2972)
							{
								if (!GlobalFunc_111())
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
				if (GlobalFunc_156(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
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
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_178(Local_2347, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2347, 2, Local_2995[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_178(Local_2347, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				GlobalFunc_173(&Local_2347, 3, Local_2995[0 /*20*/], sLocal_2623, 0, 1);
				func_178(Local_2347, "TOWAUD", sLocal_2617, 0);
			}
			bLocal_2956 = true;
			SYSTEM::SETTIMERA(0);
			if (bLocal_2963)
			{
				GlobalFunc_6715(&uLocal_3096);
				iLocal_3117 = 6;
			}
			else
			{
				iLocal_3117 = 5;
			}
			break;
		
		case 5:
			if (!GlobalFunc_111())
			{
				if (bLocal_2964)
				{
					SYSTEM::SETTIMERB(0);
				}
				GlobalFunc_6715(&uLocal_3096);
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
								GlobalFunc_6715(&uLocal_3096);
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
							GlobalFunc_6715(&uLocal_3096);
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
				GlobalFunc_10652(&Local_2347, "TOWAUD", sLocal_2617, 9, 0, 0, 0);
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
	fVar1 = GlobalFunc_156(Local_2995[0 /*20*/], Local_2995[0 /*20*/].f_6, 1);
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
			GlobalFunc_6715(&uLocal_3096);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_2995[0 /*20*/]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_2995[0 /*20*/]))
	{
		iLocal_3117 = 8;
	}
	else if (((fVar1 > 35f || (GlobalFunc_4981(&uLocal_3096) > 30f && fVar1 > 5f)) || iVar0) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
	{
		if (bLocal_2963)
		{
			GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2964)
		{
			GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			GlobalFunc_173(&Local_2347, 6, Local_2995[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
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
		if (GlobalFunc_5682((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		GlobalFunc_10652(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
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
				if (!GlobalFunc_111())
				{
					if (!iLocal_2974)
					{
						if (!bLocal_2978)
						{
							GlobalFunc_164("TOWT_OBJ_06", 7500, 1);
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
			if (GlobalFunc_5682(Local_2995[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_5682(Local_2995[0 /*20*/], 1) > 20f)
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



int func_183(int iParam0, int iParam1, bool bParam2)//Position - 0xADBC
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && GlobalFunc_5682(uParam1, 1) < 40f)
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
				if (!GlobalFunc_111())
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_2995[0 /*20*/], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
					GlobalFunc_173(&Local_2347, 5, Local_2995[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
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
	if (!GlobalFunc_226(&uLocal_433))
	{
		GlobalFunc_6715(&uLocal_433);
	}
	if (GlobalFunc_5682(uParam0, 0) < 15f)
	{
		fLocal_430 = 0.3f;
		fLocal_431 = 0.5f;
		fLocal_432 = 0.1f;
	}
	else if (GlobalFunc_5682(uParam0, 0) < 40f)
	{
		fLocal_430 = 0.6f;
		fLocal_431 = 1f;
		fLocal_432 = 0.2f;
	}
	if (GlobalFunc_7072(&uLocal_433, MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_430, fLocal_431)))
	{
		GlobalFunc_6715(&uLocal_433);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0, 1, 0f, 0f, fLocal_432, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
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
					GlobalFunc_173(&Local_2347, 3, *uParam27, "TONYA", 0, 1);
					GlobalFunc_173(&Local_2347, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2600 = 1;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					GlobalFunc_159("TOW_TUT_03", -1);
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
					if (((SYSTEM::TIMERA() > 12000 || GlobalFunc_156(uParam0, uParam1, 1) < 15f) && GlobalFunc_156(uParam0, uParam1, 1) < 30f) && !GlobalFunc_111())
					{
						GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2600 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_467)
				{
					if (!GlobalFunc_111() && !GlobalFunc_74("TOW_TUT_03"))
					{
						GlobalFunc_6658("TOW_TUT_02");
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
					if ((SYSTEM::TIMERA() > 12000 || GlobalFunc_156(uParam0, uParam1, 1) < 7.5f) || (iLocal_467 && GlobalFunc_156(uParam0, uParam1, 1) < 30f))
					{
						iLocal_442 = 1;
						iLocal_442 = iLocal_442;
						GlobalFunc_6658("TOW_TUT_01");
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
				if ((!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_459)
					{
						GlobalFunc_159("TOWT_HELP_CR", -1);
						iLocal_459 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(*uParam22))
					{
						HUD::SET_BLIP_ROUTE(*uParam22, 0);
						HUD::REMOVE_BLIP(uParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_429 = GlobalFunc_6618(Param2.f_14, 0);
					*uParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_2600 = 7;
				}
				break;
			
			case 7:
				if (!GlobalFunc_111())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_164("TOW_TUT_04A", 7500, 1);
						iLocal_2600 = 9;
					}
				}
				break;
			
			case 9:
				if (GlobalFunc_105(Param2.f_14))
				{
					iLocal_2600 = 10;
				}
				if (!GlobalFunc_111())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_469 = MISC::GET_GAME_TIMER();
						if (bLocal_443)
						{
							HUD::SET_BLIP_ROUTE(*uParam22, 0);
							HUD::REMOVE_BLIP(uParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_429 = GlobalFunc_6618(Param2.f_14, 0);
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
				if (!GlobalFunc_105(Param2.f_14))
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
					GlobalFunc_159("TOWT_HELP_UH", -1);
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
				if (!GlobalFunc_105(Param2.f_14))
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
					GlobalFunc_159("TOWT_HELP_UH", -1);
					func_191();
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
					{
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						GlobalFunc_4948(&uLocal_398, 0, 0);
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
					if (GlobalFunc_111())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						GlobalFunc_4935();
						iLocal_2600 = 6;
					}
					else
					{
						GlobalFunc_4720(*uParam22);
						SYSTEM::SETTIMERA(0);
						iLocal_2600 = 6;
						GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2601 = true;
					}
				}
			}
			if (!iLocal_461)
			{
				if (bLocal_2601)
				{
					if (!GlobalFunc_111())
					{
						HUD::CLEAR_HELP(1);
						GlobalFunc_164("TOWT_OBJ_06", 7500, 1);
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
			if (!GlobalFunc_226(&uLocal_2524))
			{
				GlobalFunc_7731(&uLocal_2524);
			}
			else if (GlobalFunc_4981(&uLocal_2524) > 10f)
			{
				if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_475 = 1;
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					GlobalFunc_6715(&uLocal_2524);
					iLocal_475 = 2;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_226(&uLocal_2524))
			{
				if (GlobalFunc_4981(&uLocal_2524) > 15f)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
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
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_483, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_458 = 1;
				}
			}
		}
	}
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
	if (!GlobalFunc_105(Param0.f_14))
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
					if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
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
					if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
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
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					GlobalFunc_10652(&Local_2347, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
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
					GlobalFunc_2154("TOW_DMG_01", 25, -1);
					GlobalFunc_10871(GlobalFunc_8329(), 1, 25);
					fLocal_427 = (fLocal_427 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					GlobalFunc_2154("TOW_DMG_01", 75, -1);
					GlobalFunc_10871(GlobalFunc_8329(), 1, 75);
					fLocal_427 = (fLocal_427 + 75f);
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
		bLocal_466 = !GlobalFunc_4898(uParam0);
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
			if (!GlobalFunc_4898(uParam0))
			{
				HUD::CLEAR_SMALL_PRINTS();
				*uParam5 = MISC::GET_GAME_TIMER();
				if (bParam13)
				{
					if (iLocal_439)
					{
						GlobalFunc_164("DTRSHRD_03", 7500, 1);
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
		else if (GlobalFunc_4898(uParam0))
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
				GlobalFunc_164(sParam4, 7500, 1);
				iLocal_440 = 0;
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


void func_200()//Position - 0xBF2D
{
	int iVar0;
	
	iVar0 = GlobalFunc_8329();
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
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 2)) || MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 13))
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
		switch (GlobalFunc_2270(*uParam0))
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



void func_206(var uParam0)//Position - 0xC16E
{
	int iVar0;
	int iVar1;
	
	func_229();
	uLocal_2607 = GlobalFunc_1455();
	if (uParam0->f_3 == 3)
	{
		sLocal_2619[0] = "base";
		GlobalFunc_5687(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towingcome_here");
		GlobalFunc_5687(&uLocal_2647, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2958)
	{
		GlobalFunc_5687(&uLocal_2647, "Ped");
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towing");
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towingangryidle_a");
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towingpleadingidle_b");
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towingpleadingidle_a");
		GlobalFunc_5687(&uLocal_2647, "move_m@JOG@");
	}
	else if (bLocal_2958)
	{
		GlobalFunc_5687(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		GlobalFunc_5687(&uLocal_2647, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_2618 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		GlobalFunc_5687(&uLocal_2647, sLocal_2618);
		GlobalFunc_5303(&uLocal_2637, joaat("ambulance"));
		GlobalFunc_5303(&uLocal_2637, joaat("s_m_m_paramedic_01"));
		sLocal_2619[0] = "react_big_variations_a";
		sLocal_2619[1] = "react_big_variations_b";
		sLocal_2619[2] = "react_big_variations_c";
		GlobalFunc_5687(&uLocal_2647, "move_m@JOG@");
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towing");
		GlobalFunc_5687(&uLocal_2647, "amb@world_human_smoking@male@male_a@base");
		GlobalFunc_5687(&uLocal_2647, "oddjobs@towingpleadingidle_b");
		GlobalFunc_5303(&uLocal_2637, joaat("freightcont1"));
		GlobalFunc_5303(&uLocal_2637, joaat("tankercar"));
		GlobalFunc_5303(&uLocal_2637, joaat("freight"));
		GlobalFunc_5303(&uLocal_2637, joaat("freightcar"));
		GlobalFunc_5303(&uLocal_2637, joaat("s_m_m_lsmetro_01"));
		GlobalFunc_5303(&uLocal_2637, joaat("a_f_m_bevhills_01"));
		GlobalFunc_5303(&uLocal_2637, joaat("a_m_y_genstreet_02"));
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
			GlobalFunc_5303(&uLocal_2637, iLocal_2986[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2986[iVar0], 3);
		}
		else if (iLocal_2986[iVar0] != 0)
		{
			GlobalFunc_5303(&uLocal_2637, iLocal_2986[iVar0]);
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
			GlobalFunc_5303(&uLocal_2637, iLocal_73);
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
				GlobalFunc_5303(&uLocal_2637, uLocal_2988[iVar0]);
			}
			iVar0++;
		}
	}
	GlobalFunc_5303(&uLocal_2637, iLocal_648);
	GlobalFunc_6655(&uLocal_2655, "TOW", 2, 0);
	GlobalFunc_6655(&uLocal_2655, "DTRSHRD", 3, 0);
	GlobalFunc_1090(&uLocal_2637);
	GlobalFunc_7078(&uLocal_2647, &uLocal_2655);
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_2607))
	{
		func_201(&uLocal_2655);
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_1089(&uLocal_2637) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_2986[0]))
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
			switch (GlobalFunc_2270(iParam0))
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






void func_229()//Position - 0xCC62
{
	GlobalFunc_5211(&uLocal_411, 1);
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
		fVar2 = GlobalFunc_6618(Local_649[iVar58 /*23*/].f_1, 1);
		if (!GlobalFunc_105(Local_649[iVar58 /*23*/].f_1))
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



void func_242()//Position - 0xECD9
{
	char* sVar0;
	
	if (iLocal_3114 < 16)
	{
		HUD::CLEAR_PRINTS();
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		GlobalFunc_5211(&Global_96007, 3);
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
			GlobalFunc_509(sVar0);
		}
		GlobalFunc_9157();
		GlobalFunc_9156(SCRIPT::GET_THIS_SCRIPT_NAME());
		while (!GlobalFunc_145())
		{
			SYSTEM::WAIT(0);
		}
		func_168();
	}
}


































