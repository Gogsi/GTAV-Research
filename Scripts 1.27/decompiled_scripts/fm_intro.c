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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<123> Local_87 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_210 = 16;
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
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
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
	var uLocal_396 = 16;
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
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	struct<6> Local_561 = { 0, 0, 0, 0, 0, 0 } ;
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
	struct<5> Local_733[2];
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	bool bLocal_750 = 0;
	bool bLocal_751 = 0;
	bool bLocal_752 = 0;
	bool bLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_85 = 20;
	iLocal_86 = 33;
	bLocal_750 = true;
	bLocal_751 = true;
	bLocal_752 = true;
	bLocal_753 = true;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_660(ScriptParam_0);
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7680())
		{
			func_366(1);
		}
		if (GlobalFunc_7749(0))
		{
			Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
		}
		if (func_362(NETWORK::PARTICIPANT_ID_TO_INT()) > -1)
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (func_361(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (!MISC::IS_BIT_SET(uLocal_744, 10))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						MISC::SET_BIT(&uLocal_744, 10);
					}
				}
				HUD::REQUEST_ADDITIONAL_TEXT("FMINT", 0);
				if (GlobalFunc_82() && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMINT", 0))
				{
					if (func_359() > 0)
					{
						GlobalFunc_173(&uLocal_396, 1, 0, "Lamar", 0, 1);
						GlobalFunc_6004(0);
						GlobalFunc_1297(4, 1);
						GlobalFunc_1297(1, 1);
						GlobalFunc_1297(0, 1);
						GlobalFunc_1297(2, 1);
						GlobalFunc_1297(3, 0);
						func_354(iLocal_86, 1);
						Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
						if (bLocal_752)
						{
							Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -2;
						}
						else
						{
							Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_359() == 4)
				{
					Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_359() == 6 && Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_337();
				func_20();
				if (func_359() == 4)
				{
					Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_359() == 6 && Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				break;
			
			case 5:
				GlobalFunc_5240(&(Local_561.f_5));
				if (GlobalFunc_914(&(Local_561.f_5)))
				{
					Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_85);
				Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
			
			case 6:
				func_366(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_359())
			{
				case 0:
					Local_561 = 2;
					break;
				
				case 2:
					func_9();
					GlobalFunc_587();
					func_2();
					if (func_1())
					{
						Local_561 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2B3
{
	if (!bLocal_750)
	{
		if (MISC::IS_BIT_SET(Local_561.f_1, 1))
		{
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Local_561.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x2E8
{
	func_3();
}

void func_3()//Position - 0x2F4
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!MISC::IS_BIT_SET(Local_561.f_1, 3))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
			{
				MISC::SET_BIT(&(Local_561.f_1), 3);
			}
		}
		if (!MISC::IS_BIT_SET(Local_561.f_1, 4))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				MISC::SET_BIT(&(Local_561.f_1), 4);
			}
		}
		if (!MISC::IS_BIT_SET(Local_561.f_1, 5))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 3))
			{
				MISC::SET_BIT(&(Local_561.f_1), 5);
			}
		}
		if (!MISC::IS_BIT_SET(Local_561.f_1, 6))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
			{
				MISC::SET_BIT(&(Local_561.f_1), 6);
			}
		}
		if (!MISC::IS_BIT_SET(Local_561.f_1, 7))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				MISC::SET_BIT(&(Local_561.f_1), 7);
			}
		}
		if (!MISC::IS_BIT_SET(Local_561.f_1, 8))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
			{
				MISC::SET_BIT(&(Local_561.f_1), 8);
			}
		}
		switch (Local_561.f_2)
		{
			case 0:
				if (MISC::IS_BIT_SET(Local_561.f_1, 3))
				{
					if (func_4(&(Local_561.f_3), &(Local_561.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_568))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_561.f_3), 1, 0);
						Local_561.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (MISC::IS_BIT_SET(Local_561.f_1, 4))
				{
					Local_561.f_2 = 1;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(Local_561.f_1, 5))
				{
					Local_561.f_2 = 3;
				}
				break;
			
			case 3:
				if (MISC::IS_BIT_SET(Local_561.f_1, 6))
				{
					Local_561.f_2 = 4;
				}
				break;
			
			case 4:
				if (MISC::IS_BIT_SET(Local_561.f_1, 7))
				{
					Local_561.f_2 = 5;
				}
				break;
			
			case 5:
				if (MISC::IS_BIT_SET(Local_561.f_1, 8))
				{
					Local_561.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)//Position - 0x4F1
{
	if (GlobalFunc_356(Global_2446554.f_733) && GlobalFunc_356(Global_2446554.f_734))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (func_6(uParam0, Global_2446554.f_733, Param2, fParam5, 1, 1, 1, 0, 1, 1))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(*uParam0), 1);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
		{
			if (GlobalFunc_900(uParam1, *uParam0, 25, Global_2446554.f_734, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(*uParam1), 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2446554.f_733);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2446554.f_734);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(*uParam0), 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam1), 1);
				GlobalFunc_173(uParam6, 8, NETWORK::NET_TO_PED(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}


int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x662
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = NETWORK::VEH_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam10);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam8)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
			else
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
			}
		}
		VEHICLE::SET_VEHICLE_IS_STOLEN(iVar0, iParam9);
		return 1;
	}
	return 0;
}



void func_9()//Position - 0x70B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (bLocal_750)
			{
				if (!MISC::IS_BIT_SET(Local_561.f_1, 2))
				{
					if (MISC::IS_BIT_SET(Local_733[iVar0 /*5*/].f_3, 2))
					{
						MISC::SET_BIT(&(Local_561.f_1), 2);
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_561.f_1, 1))
			{
				if (MISC::IS_BIT_SET(Local_733[iVar0 /*5*/].f_3, 1))
				{
					MISC::SET_BIT(&(Local_561.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)//Position - 0x790
{
	if (!GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (!GlobalFunc_4994(PLAYER::PLAYER_ID()) == iParam0)
	{
		return;
	}
}










void func_20()//Position - 0x926
{
	switch (func_362(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case -2:
			func_184();
			break;
		
		case -1:
			func_183();
			break;
		
		case 0:
			func_29();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_21();
			break;
	}
}

void func_21()//Position - 0x981
{
	switch (iLocal_749)
	{
		case 0:
			if (!GlobalFunc_8419(iLocal_86))
			{
				MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 2);
				Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
			break;
	}
}








void func_29()//Position - 0xD57
{
	int iVar0;
	
	if (func_182())
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_181(0);
		}
	}
	if (!GlobalFunc_439(&uLocal_386))
	{
		GlobalFunc_436(&uLocal_386, 0, 0);
	}
	if (!MISC::IS_BIT_SET(uLocal_744, 21))
	{
		MISC::SET_BIT(&uLocal_744, 21);
	}
	if (!MISC::IS_BIT_SET(uLocal_744, 3))
	{
		if (!GlobalFunc_439(&uLocal_384))
		{
			GlobalFunc_436(&uLocal_384, 0, 0);
		}
		else if (MISC::IS_BIT_SET(uLocal_744, 21))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_5071(&uLocal_384, 3000, 0))
					{
						MISC::SET_BIT(&uLocal_744, 3);
					}
				}
			}
		}
		if (GlobalFunc_5071(&uLocal_384, 40000, 0))
		{
			MISC::SET_BIT(&uLocal_744, 3);
		}
	}
	else if (!MISC::IS_BIT_SET(uLocal_744, 16))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				MISC::SET_BIT(&uLocal_744, 16);
				GlobalFunc_434(&uLocal_384);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
	{
		if (!GlobalFunc_439(&uLocal_390))
		{
			GlobalFunc_436(&uLocal_390, 0, 0);
		}
		else if (!MISC::IS_BIT_SET(uLocal_745, 1))
		{
			if (GlobalFunc_5071(&uLocal_390, 10000, 0))
			{
				MISC::SET_BIT(&uLocal_745, 1);
				GlobalFunc_434(&uLocal_390);
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_744, 19))
		{
			if (!MISC::IS_BIT_SET(uLocal_744, 18))
			{
				if (!func_176() || GlobalFunc_5071(&uLocal_384, 5000, 0))
				{
					func_175(0);
					MISC::SET_BIT(&uLocal_744, 18);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
					}
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(uLocal_744, 18))
	{
		if (!MISC::IS_BIT_SET(uLocal_744, 2))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iVar0 = 0;
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 5);
				if (func_86(&uLocal_396, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_85(1);
					MISC::SET_BIT(&uLocal_744, 2);
					if (!MISC::IS_BIT_SET(uLocal_744, 20))
					{
						GlobalFunc_9818(19, 3, 1);
						MISC::SET_BIT(&uLocal_744, 20);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
				}
			}
		}
		else if (!GlobalFunc_116(0))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5428())
				{
					if (!MISC::IS_BIT_SET(uLocal_744, 12))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
						}
						MISC::SET_BIT(&uLocal_744, 12);
						GlobalFunc_436(&uLocal_388, 0, 0);
						GlobalFunc_436(&uLocal_392, 0, 0);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(uLocal_744, 12))
		{
			if (!MISC::IS_BIT_SET(uLocal_744, 17))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					func_68();
					MISC::SET_BIT(&uLocal_744, 17);
					GlobalFunc_434(&uLocal_384);
				}
			}
			else if (!func_176())
			{
				if (!MISC::IS_BIT_SET(uLocal_744, 23))
				{
					if (GlobalFunc_5071(&uLocal_392, 4500, 0))
					{
						MISC::SET_BIT(&uLocal_744, 23);
						MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 3);
					}
				}
				if (GlobalFunc_5071(&uLocal_388, 15000, 0))
				{
					if (!MISC::IS_BIT_SET(uLocal_744, 22))
					{
						MISC::SET_BIT(&uLocal_744, 22);
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (MISC::IS_BIT_SET(uLocal_744, 14))
					{
						MISC::CLEAR_BIT(&uLocal_744, 14);
					}
					if (!GlobalFunc_8419(iLocal_86))
					{
						if (MISC::IS_BIT_SET(uLocal_744, 13))
						{
							MISC::CLEAR_BIT(&uLocal_744, 13);
						}
						if (MISC::IS_BIT_SET(uLocal_744, 25) || (!MISC::IS_BIT_SET(uLocal_744, 25) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (!MISC::IS_BIT_SET(uLocal_744, 0))
							{
								if (MISC::IS_BIT_SET(uLocal_744, 15))
								{
									MISC::CLEAR_BIT(&uLocal_744, 15);
								}
								if (HUD::DOES_BLIP_EXIST(Global_90014.f_198[iLocal_86]))
								{
									GlobalFunc_8450("GET_AMMU", 0);
									MISC::SET_BIT(&uLocal_744, 0);
									MISC::SET_BIT(&uLocal_744, 25);
									if (HUD::DOES_BLIP_EXIST(Global_90014.f_198[iLocal_86]))
									{
										if (!MISC::IS_BIT_SET(Global_2446554.f_732, 2))
										{
											HUD::SET_BLIP_ROUTE(Global_90014.f_198[iLocal_86], 1);
										}
										func_354(iLocal_86, 1);
									}
								}
							}
							else if (MISC::IS_BIT_SET(Global_2446554.f_732, 2))
							{
								if (HUD::DOES_BLIP_EXIST(Global_90014.f_198[iLocal_86]))
								{
									if (!MISC::IS_BIT_SET(uLocal_744, 15))
									{
										HUD::SET_BLIP_ROUTE(Global_90014.f_198[iLocal_86], 0);
										MISC::SET_BIT(&uLocal_744, 15);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(Global_90014.f_198[iLocal_86]))
							{
								if (MISC::IS_BIT_SET(uLocal_744, 15))
								{
									HUD::SET_BLIP_ROUTE(Global_90014.f_198[iLocal_86], 1);
									MISC::CLEAR_BIT(&uLocal_744, 15);
								}
							}
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(uLocal_744, 0))
						{
							MISC::CLEAR_BIT(&uLocal_744, 0);
						}
						if (!MISC::IS_BIT_SET(uLocal_744, 13))
						{
							GlobalFunc_8450("GET_GUN", 0);
							func_61(1);
							MISC::SET_BIT(&uLocal_744, 13);
						}
					}
				}
				else if (!MISC::IS_BIT_SET(uLocal_744, 14))
				{
					HUD::CLEAR_HELP(1);
					if (MISC::IS_BIT_SET(uLocal_744, 0))
					{
						MISC::CLEAR_BIT(&uLocal_744, 0);
					}
					if (MISC::IS_BIT_SET(uLocal_744, 13))
					{
						MISC::CLEAR_BIT(&uLocal_744, 13);
					}
					if (HUD::DOES_BLIP_EXIST(Global_90014.f_198[iLocal_86]))
					{
						HUD::SET_BLIP_ROUTE(Global_90014.f_198[iLocal_86], 0);
						HUD::SET_BLIP_FLASHES(Global_90014.f_198[iLocal_86], 0);
						func_354(iLocal_86, 0);
					}
					GlobalFunc_8450("LOSE_COP", 0);
					MISC::SET_BIT(&uLocal_744, 14);
				}
			}
		}
	}
	else if (GlobalFunc_5071(&uLocal_386, 300000, 0))
	{
		MISC::SET_BIT(&uLocal_744, 18);
	}
	if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 0))
	{
		if (((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg"), 0))
		{
			if (func_59())
			{
				func_54(1);
				MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 0);
				if (GlobalFunc_8419(iLocal_86))
				{
				}
			}
		}
		else
		{
			func_42(400);
		}
	}
	else if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 1);
			GlobalFunc_8420();
			GlobalFunc_159("FM_IHELP_AMMU", -1);
			if (!MISC::IS_BIT_SET(uLocal_744, 31))
			{
				GlobalFunc_6857(119, 1, -1, 1);
				GlobalFunc_6857(115, 1, -1, 1);
				MISC::SET_BIT(&uLocal_744, 31);
			}
			GlobalFunc_434(&uLocal_384);
			if (bLocal_750)
			{
				if (bLocal_751)
				{
					Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
				}
				else
				{
					Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
		}
	}
}











bool func_40()//Position - 0x16B1
{
	return ((((((((((GlobalFunc_8423(28) || GlobalFunc_8423(29)) || GlobalFunc_8423(30)) || GlobalFunc_8423(31)) || GlobalFunc_8423(32)) || GlobalFunc_8423(33)) || GlobalFunc_8423(34)) || GlobalFunc_8423(35)) || GlobalFunc_8423(36)) || GlobalFunc_8423(37)) || GlobalFunc_8423(38));
}


void func_42(int iParam0)//Position - 0x1747
{
	int iVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = GlobalFunc_6899(PLAYER::PLAYER_ID());
		if (iVar0 < iParam0)
		{
			if (GlobalFunc_218())
			{
				GlobalFunc_8416(1734805203, (iParam0 - iVar0), &uVar1, 0, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_HOLDUPS((iParam0 - iVar0));
			}
		}
	}
}












void func_54(bool bParam0)//Position - 0x1DD3
{
	func_55(28, bParam0);
	func_55(29, bParam0);
	func_55(30, bParam0);
	func_55(31, bParam0);
	func_55(32, bParam0);
	func_55(33, bParam0);
	func_55(34, bParam0);
	func_55(35, bParam0);
	func_55(36, bParam0);
	func_55(37, bParam0);
	func_55(38, bParam0);
}

void func_55(int iParam0, bool bParam1)//Position - 0x1E33
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 14, 1))
		{
			GlobalFunc_7834(iParam0, 14, 1);
		}
	}
	else if (GlobalFunc_7782(iParam0, 14, 1))
	{
		GlobalFunc_7833(iParam0, 14, 1);
	}
}




bool func_59()//Position - 0x1F69
{
	return ((((((((((func_60(28) || func_60(29)) || func_60(30)) || func_60(31)) || func_60(32)) || func_60(33)) || func_60(34)) || func_60(35)) || func_60(36)) || func_60(37)) || func_60(38));
}

int func_60(int iParam0)//Position - 0x1FEF
{
	return GlobalFunc_7782(iParam0, 3, 0);
}

void func_61(bool bParam0)//Position - 0x1FFF
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1675327, 19))
		{
			MISC::SET_BIT(&Global_1675327, 19);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1675327, 19))
	{
		MISC::CLEAR_BIT(&Global_1675327, 19);
	}
}







void func_68()//Position - 0x217D
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { GlobalFunc_318(PLAYER::PLAYER_ID()) };
	bVar13 = NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT();
	bVar14 = GlobalFunc_964(&Var0);
	if (!bVar13 && !bVar14)
	{
		GlobalFunc_1673("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		GlobalFunc_1673("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		GlobalFunc_1673("HLP_SOC1", 9000);
	}
}

















void func_85(bool bParam0)//Position - 0x2736
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_2264, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2264, 17);
	}
}

int func_86(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2758
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (GlobalFunc_7816())
	{
		return 0;
	}
	if (GlobalFunc_1516())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_87(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_87(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x279D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = GlobalFunc_1515(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (GlobalFunc_7815(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!GlobalFunc_6950(uParam6))
	{
		return 0;
	}
	if (GlobalFunc_6928(iVar0, iVar1, iVar2))
	{
		if (GlobalFunc_1510())
		{
			return 0;
		}
		GlobalFunc_1509();
		return func_94(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!GlobalFunc_1488(iParam4))
	{
		return 0;
	}
	GlobalFunc_6949(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}







int func_94(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x2988
{
	struct<2> Var0;
	
	GlobalFunc_1508();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return GlobalFunc_10853(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return GlobalFunc_10852(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return GlobalFunc_10853(uParam0, sParam3, sParam4);
		}
		return func_137(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_136(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_126(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_125(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_95(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_95(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x2A81
{
	bool bVar0;
	
	GlobalFunc_1498();
	bVar0 = true;
	if (func_97(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		GlobalFunc_1489(120000);
		return 1;
	}
	return 0;
}


int func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x2ADB
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = GlobalFunc_314();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = GlobalFunc_9056(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1321259.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_116(sParam5, bParam6, &iVar3);
	uVar5 = GlobalFunc_5404(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = GlobalFunc_10801(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = GlobalFunc_10800(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam4, 0))
	{
		GlobalFunc_1492();
	}
	GlobalFunc_1498();
	GlobalFunc_1491();
	GlobalFunc_1490();
	return 1;
}



















char* func_116(char* sParam0, bool bParam1, int iParam2)//Position - 0x3B08
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	GlobalFunc_1497(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}









int func_125(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x3D95
{
	bool bVar0;
	
	GlobalFunc_1498();
	bVar0 = false;
	return func_97(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_126(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x3DBC
{
	bool bVar0;
	
	bVar0 = false;
	return func_127(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_127(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x3DDF
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = GlobalFunc_314();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = GlobalFunc_9056(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1321259.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16753 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_116(sParam5, bParam6, &iVar3);
	uVar5 = GlobalFunc_5404(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_135(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = GlobalFunc_10802(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam4, 0))
	{
		GlobalFunc_1492();
	}
	GlobalFunc_1499();
	GlobalFunc_1491();
	GlobalFunc_1490();
	return 1;
}








int func_135(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x4830
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 3;
	if (GlobalFunc_10485(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			StringCopy(&Global_2951, sParam5, 64);
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x48E5
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	GlobalFunc_1499();
	bVar0 = true;
	if (func_127(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		GlobalFunc_1489(120000);
		return 1;
	}
	return 0;
}

int func_137(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0x4937
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(uParam4, 4))
	{
		bVar0 = GlobalFunc_10668(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = GlobalFunc_10667(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(uParam4, 3))
		{
			GlobalFunc_1505(1);
		}
		if (MISC::IS_BIT_SET(uParam4, 5))
		{
			GlobalFunc_1504(1);
		}
		GlobalFunc_1503();
		GlobalFunc_1491();
		GlobalFunc_1502();
		GlobalFunc_1501();
		return 1;
	}
	return 0;
}






































void func_175(int iParam0)//Position - 0x5388
{
	Global_2453244.f_1060 = iParam0;
}

int func_176()//Position - 0x5399
{
	if (GlobalFunc_74("HLP_TAXI3"))
	{
		return 1;
	}
	if (GlobalFunc_74("HLP_SOC1"))
	{
		return 1;
	}
	if (GlobalFunc_74("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}





void func_181(bool bParam0)//Position - 0x5456
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 8))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 8);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 8))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 8);
	}
}

bool func_182()//Position - 0x54B9
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 8);
}

void func_183()//Position - 0x54D4
{
	CAM::DO_SCREEN_FADE_IN(800);
	if (!bLocal_752 || bLocal_753)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	if (!bLocal_753)
	{
		Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 0;
	}
	else
	{
		Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
	}
}

void func_184()//Position - 0x5521
{
	if (func_188(&Local_87, &(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4)))
	{
		Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
	}
	func_185(&Local_87);
}

void func_185(var uParam0)//Position - 0x554F
{
	bool bVar0;
	
	bVar0 = HUD::IS_PAUSE_MENU_ACTIVE();
	switch (iLocal_748)
	{
		case 0:
			if (MISC::IS_BIT_SET(*uParam0, 18))
			{
				if (!GlobalFunc_439(&uLocal_754))
				{
					GlobalFunc_436(&uLocal_754, 0, 0);
				}
				if (!bVar0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_1673("HLP_XP1", 9000);
						GlobalFunc_434(&uLocal_754);
						GlobalFunc_436(&uLocal_754, 0, 0);
						iLocal_748++;
					}
				}
				else if (GlobalFunc_5071(&uLocal_754, 5000, 0))
				{
					iLocal_748++;
					GlobalFunc_434(&uLocal_754);
					GlobalFunc_436(&uLocal_754, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_1673("HLP_XP2", 9000);
					GlobalFunc_434(&uLocal_754);
					GlobalFunc_436(&uLocal_754, 0, 0);
					iLocal_748++;
				}
			}
			else if (GlobalFunc_5071(&uLocal_754, 5000, 0))
			{
				iLocal_748++;
				GlobalFunc_434(&uLocal_754);
				GlobalFunc_436(&uLocal_754, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_1673("HLP_RNK1", 9000);
					GlobalFunc_1097(1);
					Global_2446554.f_1687 = 1;
					GlobalFunc_1096(1, 0, -1);
					GlobalFunc_434(&uLocal_754);
					GlobalFunc_436(&uLocal_754, 0, 0);
					iLocal_748++;
				}
			}
			else if (GlobalFunc_5071(&uLocal_754, 5000, 0))
			{
				iLocal_748++;
				GlobalFunc_434(&uLocal_754);
				GlobalFunc_436(&uLocal_754, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_175(0);
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						GlobalFunc_1673("HLP_CASHXBX", 9000);
					}
					else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						GlobalFunc_1673("HLP_CASHPSN", 9000);
					}
					else
					{
						GlobalFunc_1673("HLP_CASHGEN", 9000);
					}
					GlobalFunc_434(&uLocal_754);
					GlobalFunc_436(&uLocal_754, 0, 0);
					iLocal_748 = 99;
				}
			}
			else if (GlobalFunc_5071(&uLocal_754, 5000, 0))
			{
				iLocal_748 = 99;
				GlobalFunc_434(&uLocal_754);
				GlobalFunc_436(&uLocal_754, 0, 0);
			}
			break;
		
		case 99:
			if (!MISC::IS_BIT_SET(uLocal_745, 2))
			{
				MISC::SET_BIT(&uLocal_745, 2);
			}
			break;
	}
}



int func_188(var uParam0, var uParam1)//Position - 0x57DF
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!MISC::IS_BIT_SET(*uParam0, 13))
	{
		if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
		{
			Var5 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			if ((Var5.x != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var5, 0f, 0f, 0f);
				if (!MISC::IS_BIT_SET(*uParam0, 14))
				{
					MISC::SET_BIT(uParam0, 14);
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(*uParam0, 14))
	{
		STREAMING::CLEAR_FOCUS();
		MISC::CLEAR_BIT(uParam0, 14);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 337, 1);
	}
	func_336(uParam0);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	func_330(uParam0);
	func_329(PLAYER::PLAYER_ID());
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2446554.f_1686)
				{
					Global_2446554.f_1686 = 1;
					NETWORK::NETWORK_SET_VOICE_ACTIVE(0);
				}
				if (!func_182())
				{
					func_181(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (!GlobalFunc_439(&(uParam0->f_15)))
				{
					GlobalFunc_436(&(uParam0->f_15), 0, 0);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1684029);
				Global_1684030 = 0;
				Global_1684032 = 0;
				Global_1684031 = 0;
				Global_1684033 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_321(0, 0, 0, 1, 1, 1, 0);
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, 0);
					GlobalFunc_6004(1);
					INTERIOR::_0x9E6542F0CE8E70A3(1);
					MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 0, 0);
					NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(1);
					func_320(0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
					GlobalFunc_6856(1, 0);
					GlobalFunc_7850(1, 1);
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_intro")) < 1 || !GlobalFunc_3322())
					{
						if (uParam0->f_292)
						{
							if (func_305() == 0)
							{
								STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
								STREAMING::_0x20C6C7E4EB082A7F(1);
							}
						}
					}
					GlobalFunc_7678(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					MISC::CLEAR_BIT(uParam0, 0);
					MISC::CLEAR_BIT(uParam0, 1);
					MISC::CLEAR_BIT(uParam0, 2);
					MISC::CLEAR_BIT(uParam0, 9);
					MISC::SET_BIT(uParam0, 7);
					uParam0->f_122 = PED::ADD_SCENARIO_BLOCKING_AREA(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				STREAMING::REQUEST_MODEL(joaat("frogger"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")))
				{
					if (!uParam0->f_292 || STREAMING::IS_SRL_LOADED())
					{
						if (GlobalFunc_5270())
						{
							STREAMING::_0x4E52E752C76E7E7A(0);
							GlobalFunc_9069(1, 1);
							GRAPHICS::DONT_RENDER_IN_GAME_UI(0);
							HUD::CLEAR_HELP(1);
							if (!GlobalFunc_6930())
							{
								GlobalFunc_8443();
							}
							GlobalFunc_1097(0);
							func_288();
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_1312554, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
							ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
							{
								HUD::SET_BLIP_SCALE(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!MISC::IS_BIT_SET(*uParam0, 4))
					{
						if (GlobalFunc_259() == 65 || GlobalFunc_259() == 66)
						{
							STREAMING::CLEAR_FOCUS();
							STREAMING::NEW_LOAD_SCENE_START(754.2219f, 1226.831f, 356.5081f, GlobalFunc_590(-14.367f, 0f, 157.3524f), 100f, 0);
							GlobalFunc_434(&(uParam0->f_17));
							GlobalFunc_436(&(uParam0->f_17), 0, 0);
							MISC::SET_BIT(uParam0, 4);
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_START") && (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_5071(&(uParam0->f_17), 5000, 0)))
					{
						if (!MISC::IS_BIT_SET(*uParam0, 24))
						{
							if (MISC::IS_BIT_SET(*uParam0, 7))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_START");
								MISC::SET_BIT(uParam0, 24);
								MISC::SET_BIT(uParam0, 21);
							}
						}
						else if (AUDIO::GET_MUSIC_PLAYTIME() > 0)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							GRAPHICS::_0xE3E2C1B4C59DBC77(6);
							if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
							{
								uParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
								CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
							}
							CAM::SET_CAM_PARAMS(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							CAM::SHAKE_CAM(uParam0->f_7, "HAND_SHAKE", 0.15f);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 1, 0);
							func_285(uParam0);
							MISC::SET_BIT(uParam0, 11);
							if (uParam0->f_292)
							{
								STREAMING::_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
								STREAMING::BEGIN_SRL();
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_284(uParam0, 6);
				func_283(uParam0);
				if (func_282(uParam0, 6, 0))
				{
					HUD::CLEAR_HELP(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!MISC::IS_BIT_SET(*uParam0, 2))
				{
					HUD::CLEAR_HELP(1);
					GlobalFunc_1673("FMIC_INTRO2", -1);
					MISC::SET_BIT(uParam0, 2);
				}
				CAM::SET_CAM_PARAMS(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				STREAMING::_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_284(uParam0, 8);
				if (func_283(uParam0))
				{
					func_281(uParam0);
					if (func_282(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!MISC::IS_BIT_SET(*uParam0, 10))
				{
					func_280();
					MISC::SET_BIT(uParam0, 10);
				}
				CAM::SET_CAM_PARAMS(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_48, 0))
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_48, true);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_48, 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_48);
				}
				func_284(uParam0, 10);
				if (func_279())
				{
					if (func_278(uParam0))
					{
						if (func_281(uParam0))
						{
							if (func_282(uParam0, 10, 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
								}
								fVar0 = 5000f;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[0], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[0], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[1], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[1], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[2], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[2], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[3], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[3], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[4], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[4], fVar0);
								}
								MISC::SET_BIT(uParam0, 15);
								CAM::DO_SCREEN_FADE_IN(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					func_277(uParam0);
					func_276(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					CAM::STOP_CAM_SHAKING(uParam0->f_7, 1);
					CAM::DETACH_CAM(uParam0->f_7);
					CAM::DESTROY_CAM(uParam0->f_7, 0);
					AUDIO::START_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_274(uParam0, 14);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				if (!MISC::IS_BIT_SET(*uParam0, 5))
				{
					GlobalFunc_1673("FMIC_RACE1", -1);
					MISC::SET_BIT(uParam0, 5);
				}
				func_284(uParam0, 14);
				if (func_282(uParam0, 14, 0))
				{
					uParam0->f_32 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
					if (uParam0->f_32 != 0)
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_32);
					}
					func_273(uParam0, 23539f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_274(uParam0, 15);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 15);
				if (func_282(uParam0, 15, 0))
				{
					func_273(uParam0, 28833.33f, 75f);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_252(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_274(uParam0, 16);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 16);
				if (func_282(uParam0, 16, 0))
				{
					func_273(uParam0, 29700f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					PED::SET_SYNCHRONIZED_SCENE_RATE(uParam0->f_9, 0.7f);
					func_274(uParam0, 17);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				if (!MISC::IS_BIT_SET(*uParam0, 6))
				{
					MISC::SET_BIT(uParam0, 6);
					GlobalFunc_1673("FMIC_RACE2", -1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 17);
				if (func_282(uParam0, 17, 0))
				{
					func_273(uParam0, 36450f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 18);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 18);
				if (func_251() && func_282(uParam0, 18, 0))
				{
					func_273(uParam0, 43650f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[3]))
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[3]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[4]))
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[4]));
					}
					func_276(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 19);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else
				{
					if (!MISC::IS_BIT_SET(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (INTERIOR::IS_INTERIOR_READY(uParam0->f_32))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_91))
								{
									INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_91, uParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
								}
								AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_49[iVar4]))
									{
										INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_49[iVar4], uParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
									}
									iVar4++;
								}
								MISC::SET_BIT(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_261(uParam0) && func_255(uParam0))
					{
						func_253(uParam0);
					}
				}
				func_250(uParam0);
				func_249(uParam0);
				func_284(uParam0, 19);
				if (func_282(uParam0, 19, 0) && MISC::IS_BIT_SET(uParam0->f_3, 0))
				{
					if (MISC::IS_BIT_SET(*uParam0, 12))
					{
						MISC::CLEAR_BIT(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_282(uParam0, 19, -4968))
				{
					if (!MISC::IS_BIT_SET(*uParam0, 12))
					{
						HUD::CLEAR_HELP(1);
						MISC::SET_BIT(uParam0, 12);
					}
				}
				else if (func_282(uParam0, 19, -5618))
				{
					if (!MISC::IS_BIT_SET(*uParam0, 30))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_intro_logo", 0, 0);
						MISC::SET_BIT(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_250(uParam0);
				func_249(uParam0);
				if (MISC::IS_BIT_SET(uParam0->f_3, 0))
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
					{
						uParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
					CAM::SET_CAM_PARAMS(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					CAM::SHAKE_CAM(uParam0->f_7, "HAND_SHAKE", 0.1f);
					INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(uParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", 0);
					GRAPHICS::_0xE3E2C1B4C59DBC77(0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(uParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_91, 0, 0);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					}
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
					func_248(uParam0);
					func_247();
					GlobalFunc_1673("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_250(uParam0);
				func_249(uParam0);
				func_284(uParam0, 23);
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				if (func_282(uParam0, 23, 0))
				{
					CAM::SET_CAM_PARAMS(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(uParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_91, 0, 0);
					}
					func_245(uParam0, 0);
					func_245(uParam0, 1);
					func_245(uParam0, 5);
					func_245(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_250(uParam0);
				func_249(uParam0);
				func_284(uParam0, 24);
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				if (func_282(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_250(uParam0);
				func_249(uParam0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				MISC::SET_BIT(uParam0, 13);
				CAM::SET_CAM_PARAMS(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(18, 0, 0);
				func_245(uParam0, 2);
				func_245(uParam0, 7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_244());
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
				{
					PED::DELETE_PED(&(uParam0->f_91));
				}
				MISC::SET_BIT(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_250(uParam0);
				func_249(uParam0);
				if (!MISC::IS_BIT_SET(*uParam0, 8))
				{
					MISC::SET_BIT(uParam0, 8);
				}
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 28);
				if ((AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_START") && MISC::IS_BIT_SET(uParam0->f_3, 3)) && func_282(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (func_241(uParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Male_Character", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_241(uParam0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_33))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_33, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_239(uParam0);
				MISC::LOAD_CLOUD_HAT("CONTRAILS", 0);
				STREAMING::_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
				GlobalFunc_1673("FMIC_TENN", -1);
				CUTSCENE::START_CUTSCENE(4);
				GlobalFunc_8316(1, 1, 1, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (uParam0->f_32 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(uParam0->f_32);
					}
					func_231(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (MISC::GET_GAME_TIMER() - uParam0->f_13);
					}
					else
					{
						uParam0->f_26 = 52618;
						uParam0->f_27 = 52618;
					}
					uParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (uParam0->f_295)
				{
					if (func_241(uParam0))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Male_Character", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								TASK::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_34, 1, 1);
						ENTITY::SET_ENTITY_COORDS(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_34, -106.11f);
						func_230(uParam0, 3099.997f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(uParam0->f_34, 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
					func_274(uParam0, 33);
					func_276(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (MISC::IS_BIT_SET(*uParam0, 29))
				{
					if (CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME() || CUTSCENE::GET_CUTSCENE_TIME() > 3254)
					{
						MISC::CLEAR_BIT(uParam0, 29);
					}
				}
				if ((func_229(uParam0) && func_228(uParam0)) && !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (MISC::GET_GAME_TIMER() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_241(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					CAM::_0x62ECFCFDEE7885D6();
					CAM::_INVALIDATE_VEHICLE_IDLE_CAM();
					if (MISC::IS_BIT_SET(*uParam0, 7))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_START");
						MISC::SET_BIT(uParam0, 21);
					}
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
					if (!MISC::IS_BIT_SET(*uParam1, 1))
					{
						MISC::SET_BIT(uParam1, 1);
					}
					func_227(uParam0);
					func_226(uParam0);
					GlobalFunc_8316(0, 1, 1, 0);
					MISC::SET_BIT(uParam0, 15);
					MISC::CLEAR_BIT(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (MISC::GET_GAME_TIMER() - (uParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					if (!MISC::IS_BIT_SET(*uParam0, 22))
					{
						if (CUTSCENE::_0x583DF8E3D4AFBD98() == 1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 59, 0);
							MISC::SET_BIT(uParam0, 22);
						}
					}
					if (func_224(uParam0))
					{
						if (CUTSCENE::_0x583DF8E3D4AFBD98() == 2)
						{
							if (!MISC::IS_BIT_SET(*uParam0, 18))
							{
								MISC::SET_BIT(uParam0, 18);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23146)
							{
								if (!MISC::IS_BIT_SET(*uParam0, 27))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									MISC::SET_BIT(uParam0, 27);
								}
								if (!MISC::IS_BIT_SET(*uParam0, 28))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									MISC::SET_BIT(uParam0, 28);
								}
							}
							CAM::_0x12DED8CA53D47EA5(4950f);
							if (MISC::IS_BIT_SET(*uParam0, 22))
							{
								NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
								MISC::CLEAR_BIT(uParam0, 22);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23254)
							{
								func_223(uParam0);
							}
						}
					}
					if (CUTSCENE::_0x583DF8E3D4AFBD98() > 2)
					{
						func_226(uParam0);
						if (!MISC::IS_BIT_SET(*uParam0, 22))
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
							MISC::SET_BIT(uParam0, 22);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uParam0->f_34);
							VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = CUTSCENE::GET_CUTSCENE_TIME();
				}
				break;
			
			case 33:
				if (func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 1);
							}
						}
					}
					if (!MISC::IS_BIT_SET(uParam0->f_1, 2))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					AUDIO::START_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 33);
				func_221(uParam0);
				if (func_282(uParam0, 33, 0))
				{
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 2))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 2);
						}
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.129f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.145f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.145f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_36, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 34);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 34);
				func_221(uParam0);
				if (func_282(uParam0, 34, 0))
				{
					func_230(uParam0, 18966.65f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 3);
							}
						}
					}
					if (!MISC::IS_BIT_SET(uParam0->f_1, 4))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 35);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 35);
				func_221(uParam0);
				if (func_282(uParam0, 35, 0))
				{
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 5))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 4))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 4);
						}
					}
					if (!MISC::IS_BIT_SET(uParam0->f_1, 5))
					{
						if (func_282(uParam0, 36, -3750))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.363f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.298f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.298f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_36, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 36);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 36);
				func_221(uParam0);
				if (func_282(uParam0, 36, 0))
				{
					func_230(uParam0, 42700.96f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 6))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 6))
					{
						if (func_282(uParam0, 36, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 37);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 37);
				func_221(uParam0);
				if (func_282(uParam0, 37, 0))
				{
					func_230(uParam0, 51033.28f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 7))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 7);
						}
					}
					if (!MISC::IS_BIT_SET(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 8);
						}
					}
					if (!MISC::IS_BIT_SET(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 7))
					{
						if (func_282(uParam0, 37, 2500))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 38);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 38);
				func_221(uParam0);
				if (func_282(uParam0, 38, 0))
				{
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 8);
						}
					}
					if (!MISC::IS_BIT_SET(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 9);
						}
					}
					if (!MISC::IS_BIT_SET(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_241(uParam0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(uParam0->f_1), 31);
						}
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.811f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.791f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.791f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_36, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 39);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 39);
				func_221(uParam0);
				if (func_282(uParam0, 39, 0))
				{
					func_230(uParam0, 85050f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!MISC::IS_BIT_SET(uParam0->f_1, 31))
				{
					if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						MISC::SET_BIT(&(uParam0->f_1), 31);
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 40);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 40);
				if (func_221(uParam0) && func_282(uParam0, 40, 0))
				{
					func_230(uParam0, 116366.5f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_274(uParam0, 41);
					MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 41);
				if (func_282(uParam0, 41, 0))
				{
					GRAPHICS::_0x03300B57FCAC6DDB(1);
					func_230(uParam0, 127166.5f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_220(uParam0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 42);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 42);
				if (func_282(uParam0, 42, 0))
				{
					GRAPHICS::_0x03300B57FCAC6DDB(0);
					func_230(uParam0, 170800f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 43);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 43);
				if (func_282(uParam0, 43, 0))
				{
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_230(uParam0, 191799.8f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 44);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 44);
				if (func_282(uParam0, 44, 0))
				{
					func_230(uParam0, 196633.1f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 45);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 45);
				if (func_282(uParam0, 45, 0))
				{
					func_230(uParam0, 201466.5f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 46);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 46);
				if (func_282(uParam0, 46, 0))
				{
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_219(uParam0);
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.815f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_36, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 47);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 47);
				if (func_282(uParam0, 47, 0))
				{
					func_230(uParam0, 213066.4f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_219(uParam0);
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_274(uParam0, 48);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 48);
				if (func_282(uParam0, 48, 0))
				{
					MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 3);
					func_218(uParam0, 10177.75f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_219(uParam0);
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 49);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				func_284(uParam0, 49);
				if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_END") && func_282(uParam0, 49, 0))
				{
					func_216(uParam0, 4500f);
					MISC::SET_BIT(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_219(uParam0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
				}
				if (MISC::IS_BIT_SET(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						STREAMING::END_SRL();
						MISC::CLEAR_BIT(uParam0, 11);
					}
					func_274(uParam0, 50);
					MISC::CLEAR_BIT(uParam0, 15);
				}
				if (!MISC::IS_BIT_SET(*uParam0, 20))
				{
					if (func_241(uParam0))
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							if (func_241(uParam0))
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Female_Character", 0, 1);
							}
							else
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
							}
						}
					}
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						MISC::SET_BIT(uParam0, 20);
					}
				}
				func_284(uParam0, 50);
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_34))
					{
						if (ENTITY::GET_ENTITY_SPEED(uParam0->f_34) < 1f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_34);
						}
					}
				}
				if (func_282(uParam0, 50, 0) && MISC::IS_BIT_SET(*uParam0, 20))
				{
					if (MISC::IS_BIT_SET(*uParam0, 21))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
						MISC::CLEAR_BIT(uParam0, 21);
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (func_241(uParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				MISC::SET_BIT(uParam0, 13);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				CUTSCENE::START_CUTSCENE(4);
				GlobalFunc_8316(1, 1, 1, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (MISC::GET_GAME_TIMER() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_215(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_241(uParam0))
					{
						if (!MISC::IS_BIT_SET(*uParam0, 23))
						{
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1));
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
									MISC::SET_BIT(uParam0, 23);
								}
							}
						}
					}
					else if (!MISC::IS_BIT_SET(*uParam0, 23))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1));
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
								MISC::SET_BIT(uParam0, 23);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								TASK::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_34);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					GlobalFunc_4235(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
				if (!GlobalFunc_4234(PLAYER::PLAYER_ID()))
				{
					func_212(1);
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (MISC::GET_GAME_TIMER() - (uParam0->f_30 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_211(uParam0, 0);
							break;
						
						case 10:
							func_211(uParam0, 1);
							break;
						
						case 20:
							func_211(uParam0, 2);
							break;
						
						case 30:
							func_211(uParam0, 3);
							break;
						
						case 40:
							func_211(uParam0, 4);
							break;
						
						case 50:
							func_211(uParam0, 5);
							break;
						
						case 60:
							func_211(uParam0, 6);
							break;
						
						case 70:
							func_211(uParam0, 7);
							break;
						
						case 80:
							func_211(uParam0, 8);
							break;
						
						case 90:
							func_211(uParam0, 9);
							break;
						
						case 100:
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
							{
								PED::DELETE_PED(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					CAM::_0x62ECFCFDEE7885D6();
					CAM::_INVALIDATE_VEHICLE_IDLE_CAM();
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
					GlobalFunc_8316(0, 1, 1, 0);
					MISC::CLEAR_BIT(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!MISC::IS_BIT_SET(*uParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						MISC::SET_BIT(uParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (uParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(uParam0, 11);
						}
						GlobalFunc_434(&(uParam0->f_17));
						GlobalFunc_436(&(uParam0->f_17), 0, 0);
						MISC::SET_BIT(uParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (GlobalFunc_5071(&(uParam0->f_17), 10000, 0))
				{
					if (func_210(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
							}
						}
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
								{
									TASK::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						GlobalFunc_4235(1);
						if (!GlobalFunc_4234(PLAYER::PLAYER_ID()))
						{
							func_212(1);
						}
						GlobalFunc_8316(0, 1, 1, 0);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						if (MISC::IS_BIT_SET(*uParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(uParam0, 21);
						}
						MISC::SET_BIT(uParam0, 1);
						MISC::SET_BIT(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!MISC::IS_BIT_SET(*uParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						MISC::SET_BIT(uParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (uParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(uParam0, 11);
						}
						GlobalFunc_434(&(uParam0->f_17));
						GlobalFunc_436(&(uParam0->f_17), 0, 0);
						MISC::SET_BIT(uParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (GlobalFunc_5071(&(uParam0->f_17), 10000, 0))
				{
					if (func_261(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
								{
									TASK::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!GlobalFunc_4234(PLAYER::PLAYER_ID()))
						{
						}
						GlobalFunc_8316(0, 1, 1, 0);
						if (MISC::IS_BIT_SET(*uParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(uParam0, 21);
						}
						CAM::DO_SCREEN_FADE_IN(250);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 3);
						uParam0->f_13 = (MISC::GET_GAME_TIMER() - func_207(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_218(uParam0, 10177.75f);
						MISC::SET_BIT(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_284(uParam0, 57);
				bVar8 = !uParam0->f_288;
				func_197(uParam0, bVar8, 0);
				if (uParam0->f_292)
				{
					STREAMING::END_SRL();
					MISC::CLEAR_BIT(uParam0, 11);
				}
				if (!PED::IS_PED_INJURED(uParam0->f_35))
				{
					TASK::TASK_STAND_STILL(uParam0->f_35, -1);
					PED::SET_PED_KEEP_TASK(uParam0->f_35, 1);
				}
				NETWORK::NETWORK_SET_VOICE_ACTIVE(1);
				if (!uParam0->f_288)
				{
					GlobalFunc_6857(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_196(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = SYSTEM::TO_FLOAT(func_215(uParam0));
			}
			uParam0->f_290 = func_195(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && MISC::IS_BIT_SET(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				STREAMING::SET_SRL_TIME(uParam0->f_289);
			}
			else
			{
				STREAMING::SET_SRL_TIME(uParam0->f_290);
			}
		}
		func_192(uParam0);
		if (MISC::IS_BIT_SET(*uParam0, 12))
		{
			if (func_251())
			{
				func_191();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 60);
				}
			}
			func_189(uParam0);
			HUD::DISABLE_FRONTEND_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		}
		if (Global_2446554.f_1687)
		{
			PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
		}
	}
	return 0;
}

void func_189(var uParam0)//Position - 0x8FA6
{
	var uVar0;
	
	if (!MISC::IS_BIT_SET(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
				{
					uVar0 = PLAYER::PLAYER_ID() + 32;
					NETWORK::_0xFB680D403909DC70(1, uVar0);
					GlobalFunc_4232(1);
					MISC::SET_BIT(uParam0, 9);
				}
			}
			else
			{
				GlobalFunc_4232(1);
				MISC::SET_BIT(uParam0, 9);
			}
		}
	}
}


void func_191()//Position - 0x9062
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1318713, 255, 255, 255, 255, 0);
	if (Global_1318715 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1318713, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		Global_1318715 = 1;
	}
}

void func_192(var uParam0)//Position - 0x90A1
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[uParam0->f_90]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_58[uParam0->f_90]))
		{
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_193(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_193(var uParam0, int iParam1)//Position - 0x910D
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_58[iParam1]))
		{
		}
		func_194(iParam1, &Var0, &fVar3);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[iParam1], fVar3);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[iParam1], true);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[iParam1]);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[iParam1], false, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[iParam1], false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_74[iParam1]))
		{
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[iParam1], false);
	}
}

void func_194(int iParam0, var uParam1, var uParam2)//Position - 0x91BE
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_195(var uParam0)//Position - 0x93F4
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_241(uParam0))
		{
			fVar0 = SYSTEM::TO_FLOAT((uParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
			if (CUTSCENE::_0x583DF8E3D4AFBD98() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / SYSTEM::TO_FLOAT(52633/*func_274*/));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = SYSTEM::TO_FLOAT((uParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_196(var uParam0)//Position - 0x9471
{
	if (MISC::IS_BIT_SET(*uParam0, 29))
	{
		GRAPHICS::DRAW_SPOT_LIGHT(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		GRAPHICS::DRAW_SPOT_LIGHT(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_197(var uParam0, bool bParam1, bool bParam2)//Position - 0x94F3
{
	if (!MISC::IS_BIT_SET(*uParam0, 0))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
		INTERIOR::_0x9E6542F0CE8E70A3(0);
		if (uParam0->f_292)
		{
			STREAMING::_0x20C6C7E4EB082A7F(0);
			STREAMING::END_SRL();
			MISC::CLEAR_BIT(uParam0, 11);
		}
		if (MISC::IS_BIT_SET(*uParam0, 14))
		{
			STREAMING::CLEAR_FOCUS();
			MISC::CLEAR_BIT(uParam0, 14);
		}
		func_206();
		func_227(uParam0);
		func_277(uParam0);
		func_226(uParam0);
		func_247();
		func_231(uParam0);
		func_248(uParam0);
		func_205(uParam0);
		func_220(uParam0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		if (bParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_34));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_35));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
		{
			PED::DELETE_PED(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			GlobalFunc_6004(0);
		}
		GlobalFunc_4991();
		GlobalFunc_8442();
		GlobalFunc_8316(0, 1, 1, 0);
		CAM::SET_WIDESCREEN_BORDERS(0, -1);
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 1);
			}
		}
		if (MISC::IS_BIT_SET(*uParam0, 21))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
			MISC::CLEAR_BIT(uParam0, 21);
		}
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
		func_320(1);
		if (MISC::IS_BIT_SET(*uParam0, 26))
		{
			GlobalFunc_6856(1, 0);
			MISC::CLEAR_BIT(uParam0, 26);
		}
		Global_2422140.f_3033 = 0;
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			STREAMING::SET_RENDER_HD_ONLY(0);
		}
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
		if (bParam1)
		{
		}
		func_175(0);
		GlobalFunc_1097(1);
		Global_2446554.f_1687 = 0;
		Global_2446554.f_1686 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		GlobalFunc_7678(14, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0);
		VEHICLE::REMOVE_VEHICLE_RECORDING(5, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(6, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(7, "FMINTRO");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
		{
			HUD::SET_BLIP_SCALE(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0.7f);
		}
		HUD::SET_RADAR_ZOOM(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
			NETWORK::NETWORK_SET_VOICE_ACTIVE(1);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		MISC::SET_BIT(uParam0, 0);
	}
}








void func_205(var uParam0)//Position - 0x990B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_211(uParam0, iVar0);
		iVar0++;
	}
}

void func_206()//Position - 0x992E
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_207(var uParam0, int iParam1, bool bParam2)//Position - 0x9986
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = uParam0->f_29;
		}
		else
		{
			iVar1 = uParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + GlobalFunc_4233(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + GlobalFunc_4233(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}



int func_210(var uParam0)//Position - 0x9DC7
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
		{
			uParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(uParam0->f_34, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_34, 0);
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_34, 2);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
			{
				uParam0->f_35 = PED::CREATE_PED(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_35, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_34, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_35, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_211(var uParam0, int iParam1)//Position - 0x9EEC
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iParam1]))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_58[iParam1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1]))
	{
		PED::DELETE_PED(&(uParam0->f_74[iParam1]));
	}
}

void func_212(bool bParam0)//Position - 0x9F2A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 22);
	}
}



int func_215(var uParam0)//Position - 0x9FAD
{
	if (uParam0->f_6 < 31)
	{
		return AUDIO::GET_MUSIC_PLAYTIME();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME());
	}
	return (uParam0->f_28 + AUDIO::GET_MUSIC_PLAYTIME());
}

void func_216(var uParam0, float fParam1)//Position - 0x9FE9
{
	func_217(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_217(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)//Position - 0xA001
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (bParam4)
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0, iParam1, sParam2, 1);
		}
		else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0, iParam1, sParam2, 1);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(uParam0, 1);
		}
		else
		{
			iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2);
			if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(uParam0) != iVar0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0, iParam1, sParam2, 1);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(uParam0, 1);
			}
		}
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0, (fParam3 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(uParam0)));
	}
}

void func_218(var uParam0, float fParam1)//Position - 0xA081
{
	func_217(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_219(var uParam0)//Position - 0xA099
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = MISC::GET_HASH_KEY("ss1_rd1_03");
		iVar1 = iVar0;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			GlobalFunc_356(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_220(var uParam0)//Position - 0xA0CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_37[iVar0]))
		{
			PED::DELETE_PED(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
}

int func_221(var uParam0)//Position - 0xA11D
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_02"));
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_02")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = PED::CREATE_PED(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_37[iVar0], 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							ENTITY::SET_ENTITY_COORDS(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_37[iVar0], 76.8852f);
							WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							ENTITY::SET_ENTITY_COORDS(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_37[iVar0], 87.5786f);
							WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		MISC::SET_BIT(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_222(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA4F5
{
	GlobalFunc_513(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return GlobalFunc_9820(sParam2, iParam4, 0);
}

void func_223(var uParam0)//Position - 0xA549
{
	int iVar0;
	struct<3> Var1;
	
	if (!MISC::IS_BIT_SET(*uParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 1:
					Var1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!PED::IS_PED_INJURED(uParam0->f_98[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[iVar0], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_92[iVar0], false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_92[iVar0], 10f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, ENTITY::GET_ENTITY_MODEL(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		MISC::SET_BIT(uParam0, 25);
	}
}

int func_224(var uParam0)//Position - 0xA627
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (MISC::IS_BIT_SET(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	STREAMING::REQUEST_MODEL(iVar5);
	STREAMING::REQUEST_MODEL(GlobalFunc_1432());
	if (STREAMING::HAS_MODEL_LOADED(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar4 = 149.9339f;
						break;
					
					case 1:
						Var1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar4 = 239.9712f;
						break;
				}
				uParam0->f_92[iVar0] = VEHICLE::CREATE_VEHICLE(iVar5, Var1, fVar4, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_92[iVar0]);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_92[iVar0], true);
				VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_1432()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_92[iVar0], 4, GlobalFunc_1432(), -1, 0, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_98[iVar0], 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_92[iVar0], 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_1432());
	MISC::SET_BIT(&(uParam0->f_3), 11);
	return 1;
}


void func_226(var uParam0)//Position - 0xA7DF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar0]))
		{
			PED::DELETE_PED(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_1432());
}

void func_227(var uParam0)//Position - 0xA840
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_3, 2))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_120))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uParam0->f_120, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_121))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uParam0->f_121, 0);
			}
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REMOVE_PTFX_ASSET();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_104[iVar0]))
			{
				PED::DELETE_PED(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_3), 2);
	}
}

int func_228(var uParam0)//Position - 0xA8E1
{
	if (func_241(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_female") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_male") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_229(var uParam0)//Position - 0xA94E
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!MISC::IS_BIT_SET(uParam0->f_3, 10))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
			{
				uParam0->f_36 = PED::CREATE_PED(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_36, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_36, 1);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_36, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				GlobalFunc_173(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		MISC::SET_BIT(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_230(var uParam0, float fParam1)//Position - 0xAA16
{
	func_217(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_231(var uParam0)//Position - 0xAA2E
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_244());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_245(uParam0, iVar0);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		PED::DELETE_PED(&(uParam0->f_91));
	}
}








void func_239(var uParam0)//Position - 0xAC6F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_104[iVar0]))
		{
			PED::FINALIZE_HEAD_BLEND(uParam0->f_104[iVar0]);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_104[iVar0], func_240(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_240(int iParam0)//Position - 0xACBB
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_241(var uParam0)//Position - 0xAD3D
{
	if (uParam0->f_295)
	{
		return GlobalFunc_4954();
	}
	else
	{
		return 0;
	}
	return 0;
}



int func_244()//Position - 0xAD8B
{
	return joaat("s_m_y_xmech_02");
}

void func_245(var uParam0, int iParam1)//Position - 0xAD98
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_246(iParam1));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iParam1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
		{
		}
		VEHICLE::RELEASE_PRELOAD_MODS(uParam0->f_49[iParam1]);
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_49[iParam1]));
	}
}

int func_246(int iParam0)//Position - 0xADE1
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_247()//Position - 0xAE7D
{
	Global_1318715 = 0;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1318713))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1318713, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1318713);
	}
}

void func_248(var uParam0)//Position - 0xAEB8
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		iVar1++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
}

void func_249(var uParam0)//Position - 0xAF6E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[2], 0))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uParam0->f_49[2]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[4], 0))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uParam0->f_49[4]);
		}
	}
}

void func_250(var uParam0)//Position - 0xAFC6
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[2], 0))
		{
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_251()//Position - 0xAFF9
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1318713))
	{
		Global_1318713 = unk_0x67D02A194A2FC2BD("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_252(var uParam0, char* sParam1, char* sParam2, var uParam3, struct<3> Param4, struct<3> Param7)//Position - 0xB029
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam3))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam3))
		{
		}
		if (!CAM::DOES_CAM_EXIST(uParam0->f_8))
		{
			uParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Param4, Param7, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_9, uParam3, 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		CAM::SET_CAM_ACTIVE(uParam0->f_8, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 1, 0);
	}
}

void func_253(var uParam0)//Position - 0xB0A3
{
	if (!MISC::IS_BIT_SET(uParam0->f_3, 3))
	{
		MISC::PRELOAD_CLOUD_HAT("CONTRAILS");
		if (func_241(uParam0))
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MP_INTRO_CONCAT", 31, 8);
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (uParam0->f_295)
			{
				if (func_241(uParam0))
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Female_Character", 0, 1);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Male_Character", 0, 1);
				}
			}
			func_254();
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			MISC::SET_BIT(&(uParam0->f_3), 3);
		}
	}
}

void func_254()//Position - 0xB125
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS(func_240(iVar0), 0, 1);
		iVar0++;
	}
}

int func_255(var uParam0)//Position - 0xB14B
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!MISC::IS_BIT_SET(uParam0->f_3, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("p_cs_mp_jet_01_s"));
		STREAMING::REQUEST_MODEL(joaat("mp_m_freemode_01"));
		STREAMING::REQUEST_MODEL(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			STREAMING::REQUEST_PTFX_ASSET();
		}
		if (((STREAMING::HAS_MODEL_LOADED(joaat("p_cs_mp_jet_01_s")) && STREAMING::HAS_MODEL_LOADED(joaat("mp_m_freemode_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || STREAMING::HAS_PTFX_ASSET_LOADED()))
		{
			uParam0->f_33 = OBJECT::CREATE_OBJECT(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_33, 3000);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_33, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_33, false);
			if (uParam0->f_294)
			{
				uParam0->f_120 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_259(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_258(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_257(uParam0, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iVar0]))))
					{
					}
					PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					PED::FINALIZE_HEAD_BLEND(uParam0->f_104[iVar0]);
				}
				else
				{
					func_256(uParam0, iVar0);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
			MISC::SET_BIT(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_256(var uParam0, int iParam1)//Position - 0xB34C
{
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 21, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 13, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 11, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 13, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 1, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 1, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 6, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 14, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 1, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 11, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 12, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 18, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 2, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 4, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 27, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 7, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 11, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 13, 14, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 2, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 16, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 5, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 2, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_257(var uParam0, int iParam1)//Position - 0xBC47
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && GlobalFunc_252(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)//Position - 0xBC82
{
	if (func_257(uParam0, iParam1))
	{
		return GlobalFunc_161(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_259(var uParam0)//Position - 0xBCD5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		uParam0->f_112[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (GlobalFunc_252(iVar2, 0, 1))
		{
			if (PLAYER::PLAYER_ID() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_260(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_260(int iParam0)//Position - 0xBD44
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_261(var uParam0)//Position - 0xBDAF
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (MISC::IS_BIT_SET(uParam0->f_3, 9))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "FMINTRO");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
	if (((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "FMINTRO")) && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
		{
			MISC::CLEAR_AREA(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(uParam0->f_34, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_34, 0);
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
			{
				uParam0->f_35 = PED::CREATE_PED(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_35, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_34, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_35, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	MISC::SET_BIT(&(uParam0->f_3), 9);
	return 1;
}

void func_262(var uParam0)//Position - 0xBF7D
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uParam0->f_3, 0))
	{
		func_272();
		func_270();
		if (func_264(uParam0))
		{
			if (func_263(uParam0))
			{
				if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
				{
					uParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				CAM::SET_CAM_PARAMS(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_246(iVar0));
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_244());
				MISC::SET_BIT(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_263(var uParam0)//Position - 0xC025
{
	int iVar0;
	
	iVar0 = func_244();
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("MP_INTRO_SEQ@"))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_49[2]))
						{
							uParam0->f_10 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = PED::CREATE_PED(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_91, 1);
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_10, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_91, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_91, false, 0);
							WEAPON::REMOVE_WEAPON_FROM_PED(uParam0->f_91, joaat("gadget_parachute"));
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 2, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 3, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 5, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 11, 0, 0, 0);
							PED::CLEAR_PED_PROP(uParam0->f_91, 0);
							PED::CLEAR_PED_PROP(uParam0->f_91, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 2);
							PED::CLEAR_PED_PROP(uParam0->f_91, 3);
							PED::CLEAR_PED_PROP(uParam0->f_91, 4);
							PED::CLEAR_PED_PROP(uParam0->f_91, 5);
							PED::CLEAR_PED_PROP(uParam0->f_91, 6);
							PED::CLEAR_PED_PROP(uParam0->f_91, 7);
							PED::CLEAR_PED_PROP(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_264(var uParam0)//Position - 0xC209
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (!MISC::IS_BIT_SET(uParam0->f_2, 31))
	{
		func_272();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_269(iVar5, &Var1, &fVar4);
			if (!GlobalFunc_100(Var1, 0f, 0f, 0f))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iVar5]))
				{
					iVar0 = func_246(iVar5);
					if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar0))
					{
						if (STREAMING::HAS_MODEL_LOADED(iVar0))
						{
							uParam0->f_49[iVar5] = VEHICLE::CREATE_VEHICLE(iVar0, Var1, fVar4, 0, 0);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_49[iVar5], 1);
							VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_49[iVar5], 0f);
							VEHICLE::_0xAB04325045427AAE(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_49[iVar5], 4, 0, 1);
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_267(uParam0, iVar5);
							func_266(uParam0, iVar5);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!MISC::IS_BIT_SET(uParam0->f_2, iVar5))
			{
				if (func_265(uParam0, iVar5))
				{
					MISC::SET_BIT(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iVar5], 0))
			{
				if (!VEHICLE::HAVE_VEHICLE_MODS_STREAMED_IN(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		MISC::SET_BIT(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_265(var uParam0, int iParam1)//Position - 0xC370
{
	switch (iParam1)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 5, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 12, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 4, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 12, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 5, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 11, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 12, 2, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 13, 2, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 16, 4, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 6, 2, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 7, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 8, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 7, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 0, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_266(var uParam0, int iParam1)//Position - 0xC825
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 5, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 6, 2);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 3);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 8, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_267(var uParam0, int iParam1)//Position - 0xCA6C
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 83, 134);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 49, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 43, 5);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 3, 3);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 35, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}


void func_269(int iParam0, var uParam1, var uParam2)//Position - 0xCBB2
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_270()//Position - 0xCCE1
{
	STREAMING::REQUEST_MODEL(func_244());
	STREAMING::REQUEST_ANIM_DICT(func_271());
}

char* func_271()//Position - 0xCCF9
{
	return "MP_INTRO_SEQ@";
}

void func_272()//Position - 0xCD05
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		STREAMING::REQUEST_MODEL(func_246(iVar0));
		iVar0++;
	}
}

void func_273(var uParam0, float fParam1, float fParam2)//Position - 0xCD2A
{
	func_217(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_217(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_217(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_217(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_217(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_274(var uParam0, int iParam1)//Position - 0xCD99
{
	int iVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_275(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_275(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_275(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_275(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_275(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_275(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_275(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_275(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_275(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_275(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_275(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_275(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_275(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_275(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_275(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_275(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_275(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_275(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_275(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_275(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_275(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_275(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_275(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_275(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_275(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_275(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_275(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_275(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_275(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_275(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_275(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_275(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_275(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_275(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_275(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_275(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_275(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_275(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_275(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_275(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_275(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_275(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_275(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_275(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_275(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_275(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_275(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_275(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_275(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_275(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_275(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_275(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_275(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_275(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_275(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_275(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_275(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_275(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_275(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_275(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_275(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_275(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_275(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_275(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_275(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_275(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_275(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_275(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_275(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_275(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_275(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_275(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_275(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_275(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET(uVar1, iVar0))
		{
			func_193(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_275(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)//Position - 0xD768
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_58[iParam1], 0) && !PED::IS_PED_INJURED(uParam0->f_74[iParam1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[iParam1], false);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[iParam1], true, 0);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[iParam1], fParam5);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_58[iParam1]);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			TASK::TASK_VEHICLE_MISSION(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[iParam1], 10f);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_74[iParam1], 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[iParam1], true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[iParam1], true);
		MISC::SET_BIT(uParam6, iParam1);
	}
}

void func_276(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)//Position - 0xD885
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Param3, Param6, 2);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_9, fParam9);
	PED::SET_SYNCHRONIZED_SCENE_RATE(uParam0->f_9, iParam10);
	CAM::SET_CAM_ACTIVE(uParam0->f_8, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 1, 0);
}

void func_277(var uParam0)//Position - 0xD8F6
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(8, "FMIntro");
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_48));
	}
}

int func_278(var uParam0)//Position - 0xD924
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (MISC::IS_BIT_SET(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_280();
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[0]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				uParam0->f_92[0] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[0], 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[1]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				uParam0->f_92[1] = VEHICLE::CREATE_VEHICLE(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[1], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_92[1], 8);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[2]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				uParam0->f_92[2] = VEHICLE::CREATE_VEHICLE(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[2], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_92[2], 2);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[3]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				uParam0->f_92[3] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[3], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_92[3], 15);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[4]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
			{
				uParam0->f_92[4] = VEHICLE::CREATE_VEHICLE(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[4], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_92[4], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_92[4], 0, 156);
				VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[4], 0))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_3, 1))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_92[4]) > 0)
				{
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_92[4], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[4], 0);
					MISC::SET_BIT(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_1432()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_92[iVar1], 4, GlobalFunc_1432(), -1, 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_98[iVar1], 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_92[iVar1], 1, 1);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
			MISC::SET_BIT(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_279()//Position - 0xDCF5
{
	func_280();
	if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_1432()))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "FM_Intro_uber"))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "FM_Intro_uber"))
							{
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "FM_Intro_uber"))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "FM_Intro_uber"))
									{
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "FM_Intro_uber"))
										{
											if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
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
		}
	}
	return 0;
}

void func_280()//Position - 0xDD8D
{
	STREAMING::REQUEST_MODEL(joaat("cheetah"));
	STREAMING::REQUEST_MODEL(joaat("monroe"));
	STREAMING::REQUEST_MODEL(joaat("entityxf"));
	STREAMING::REQUEST_MODEL(joaat("feltzer2"));
	STREAMING::REQUEST_MODEL(GlobalFunc_1432());
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
}

int func_281(var uParam0)//Position - 0xDDFB
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (MISC::IS_BIT_SET(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("asterope"));
		STREAMING::REQUEST_MODEL(joaat("sentinel"));
		STREAMING::REQUEST_MODEL(GlobalFunc_1432());
		if ((STREAMING::HAS_MODEL_LOADED(joaat("asterope")) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_1432()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_194(iVar0, &Var2, &fVar5);
					uParam0->f_58[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, Var2, fVar5, 0, 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_58[iVar0], iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_58[iVar0], 1);
					VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_58[iVar0], 2);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[iVar0], true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_58[iVar0], 4, GlobalFunc_1432(), -1, 0, false);
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_74[iVar0], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("asterope"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
		MISC::SET_BIT(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_282(var uParam0, int iParam1, int iParam2)//Position - 0xDF95
{
	int iVar0;
	
	iVar0 = func_207(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_215(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0)//Position - 0xDFDB
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	STREAMING::REQUEST_MODEL(iVar0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "FMIntro");
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "FMIntro"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_48))
		{
			uParam0->f_48 = VEHICLE::CREATE_VEHICLE(iVar0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, "FMIntro"), 0f, 0, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48, 8, "FMIntro", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48, 5000f);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_48, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_48))
	{
		return 0;
	}
	MISC::SET_BIT(&(uParam0->f_3), 8);
	return 1;
}

void func_284(var uParam0, int iParam1)//Position - 0xE098
{
	if (func_282(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (MISC::GET_GAME_TIMER() - func_207(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_285(var uParam0)//Position - 0xE0CF
{
	uParam0->f_13 = MISC::GET_GAME_TIMER();
}



void func_288()//Position - 0xE118
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

















int func_305()//Position - 0xF23F
{
	return Global_2435882;
}















void func_320(bool bParam0)//Position - 0xF45D
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		VEHICLE::SET_GARBAGE_TRUCKS(1);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
		VEHICLE::SET_GARBAGE_TRUCKS(0);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
}

void func_321(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0xF4D1
{
	int iVar0;
	
	GlobalFunc_8443();
	GlobalFunc_7632(1);
	GlobalFunc_1097(1);
	GlobalFunc_1096(12, 1, -1);
	GlobalFunc_138();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
	if (bParam0)
	{
		NETWORK::_0xBF22E0F32968E967(PLAYER::PLAYER_ID(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_322(PLAYER::PLAYER_ID(), 0, iVar0, 1);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}

void func_322(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xF560
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!GlobalFunc_5085())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			uVar23 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2414009[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!GlobalFunc_453(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar23, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar23))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar23, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar23, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar23, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PED::FINALIZE_HEAD_BLEND(iVar23);
				PED::SET_PED_CAN_RAGDOLL(iVar23, 1);
				GlobalFunc_265();
				GlobalFunc_452();
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2414009[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!GlobalFunc_453(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar23, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar23))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar23, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar23) && !PED::IS_PED_IN_ANY_VEHICLE(iVar23, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar24);
		}
	}
}







void func_329(int iParam0)//Position - 0xF9AB
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 346, 1);
}

void func_330(var uParam0)//Position - 0xF9C1
{
	if (!MISC::IS_BIT_SET(uParam0->f_3, 12))
	{
		MISC::SET_BIT(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1684030)
			{
				Global_1684030 = 1;
				Global_1684031 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1684029))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
									{
										GlobalFunc_4238("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										GlobalFunc_4238("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_334("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("artdir", "AARON GARBUT", 210f, "|", 1);
									GlobalFunc_4237("artdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -3390))
							{
								GlobalFunc_4236("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 33, -2940))
								{
									GlobalFunc_4238("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_334("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("techdir", "ADAM FOWLER", 185f, "|", 1);
									GlobalFunc_4237("techdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -450))
							{
								GlobalFunc_4236("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									GlobalFunc_4238("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_334("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									GlobalFunc_4237("assartdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								GlobalFunc_4236("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
									{
										GlobalFunc_4238("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										GlobalFunc_4238("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_334("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									GlobalFunc_4237("asstecdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -4740))
							{
								GlobalFunc_4236("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 36, -3810))
								{
									GlobalFunc_4238("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_334("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									GlobalFunc_4237("leadprog", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -600))
							{
								GlobalFunc_4236("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
									{
										GlobalFunc_4238("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										GlobalFunc_4238("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_334("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									GlobalFunc_4237("senprog", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 37, -1350))
							{
								GlobalFunc_4236("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									GlobalFunc_4238("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_334("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									GlobalFunc_4237("prog", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -4320))
							{
								GlobalFunc_4236("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 38, -3240))
								{
									if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
									{
										GlobalFunc_4238("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										GlobalFunc_4238("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_334("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									GlobalFunc_4237("socclub", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -870))
							{
								GlobalFunc_4236("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									GlobalFunc_4238("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_334("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									GlobalFunc_4237("audio", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 39, -1620))
							{
								GlobalFunc_4236("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									GlobalFunc_4238("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_334("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									GlobalFunc_4237("scrlead", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 40, -1470))
							{
								GlobalFunc_4236("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									GlobalFunc_4238("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									GlobalFunc_4237("script1", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 41, -1200))
							{
								GlobalFunc_4236("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									GlobalFunc_4238("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									GlobalFunc_4237("script2", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 42, -1320))
							{
								GlobalFunc_4236("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									GlobalFunc_4238("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_334("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_334("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									GlobalFunc_4237("visdes", 0.05f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 43, -1320))
							{
								GlobalFunc_4236("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									GlobalFunc_4238("uides", 40f, 20f, "right", 0f, 0.3f);
									func_334("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									GlobalFunc_4237("uides", 0f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 45, -1650))
							{
								GlobalFunc_4236("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									GlobalFunc_4238("concre", 0f, 20f, "left", 0f, 0.3f);
									func_334("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_333("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									GlobalFunc_4237("concre", 0f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 46, -1950))
							{
								GlobalFunc_4236("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									GlobalFunc_4238("devass", 0f, 400f, "right", 0f, 0f);
									func_334("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									GlobalFunc_4237("devass", 0f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								GlobalFunc_4236("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									GlobalFunc_4238("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_334("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_334("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "CHRIS THOMSON", 160f, "|", 1);
									GlobalFunc_4237("qasup", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 48, -1320))
							{
								GlobalFunc_4236("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									GlobalFunc_4238("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_334("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									GlobalFunc_4237("senta", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -5070))
							{
								GlobalFunc_4236("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 49, -3750))
								{
									GlobalFunc_4238("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_334("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									GlobalFunc_4237("asspro", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -720))
							{
								GlobalFunc_4236("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2468)
									{
										GlobalFunc_4238("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_334("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_333("animdir", "ROB NELSON", 200f, "|", 1);
										GlobalFunc_4237("animdir", 0.16f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									GlobalFunc_4238("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_334("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("animdir", "ROB NELSON", 90f, "|", 1);
									GlobalFunc_4237("animdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6123)
								{
									GlobalFunc_4236("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 1898)
							{
								GlobalFunc_4236("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
									{
										GlobalFunc_4238("producer", 65f, 55f, "right", 0f, 0f);
										func_334("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_333("producer", "ANDY DUTHIE", 20f, "|", 1);
										GlobalFunc_4237("producer", 0f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2452)
								{
									GlobalFunc_4238("producer", 0f, 100f, "left", 0.3f, 0f);
									func_334("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("producer", "ANDY DUTHIE", 110f, "|", 1);
									GlobalFunc_4237("producer", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
								{
									GlobalFunc_4236("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
							{
								GlobalFunc_4236("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 13265)
									{
										GlobalFunc_4238("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
										GlobalFunc_4237("vpcre", 0.16f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6921)
								{
									GlobalFunc_4238("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
									GlobalFunc_4237("vpcre", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 16955)
								{
									GlobalFunc_4236("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 10513)
							{
								GlobalFunc_4236("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 18077)
									{
										Global_1684031 = 0;
										GlobalFunc_4238("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_334("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_333("execpro", "SAM HOUSER", 165f, "|", 1);
										GlobalFunc_4237("execpro", 0.16f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 12358)
								{
									Global_1684031 = 0;
									GlobalFunc_4238("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_334("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("execpro", "SAM HOUSER", 190f, "|", 1);
									GlobalFunc_4237("execpro", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 21785)
								{
									GlobalFunc_4236("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 15333)
							{
								GlobalFunc_4236("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1684031)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1684029, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}



void func_333(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)//Position - 0x10E4B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1684029, "ADD_NAMES_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_334(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)//Position - 0x10EA6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1684029, "ADD_ROLE_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_336(var uParam0)//Position - 0x10F56
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
			{
				GRAPHICS::DRAW_LIGHT_WITH_RANGE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_337()//Position - 0x10FB0
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_561.f_3))
	{
		switch (Local_561.f_2)
		{
			case 2:
				if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_5239(Local_561.f_3))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_561.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_561.f_3)))
								{
									MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_351(1);
								}
								else
								{
									MISC::CLEAR_AREA_OF_VEHICLES(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_5239(Local_561.f_3))
				{
					if (!GlobalFunc_904(Local_561.f_4))
					{
						if (MISC::IS_BIT_SET(uLocal_744, 26))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_561.f_4), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_561.f_4), -1273030092) != 0)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_561.f_4), NETWORK::NET_TO_VEH(Local_561.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!MISC::IS_BIT_SET(uLocal_744, 27))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						if (!GlobalFunc_268())
						{
							if (!HUD::IS_PAUSE_MENU_ACTIVE())
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
						}
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						MISC::SET_BIT(&uLocal_744, 27);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
				{
					if (func_344(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0);
						CAM::_0x62ECFCFDEE7885D6();
						CAM::_INVALIDATE_VEHICLE_IDLE_CAM();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!GlobalFunc_904(Local_561.f_4))
				{
					if (!MISC::IS_BIT_SET(uLocal_744, 29))
					{
						if (GlobalFunc_5239(Local_561.f_3))
						{
							TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_561.f_4), NETWORK::NET_TO_VEH(Local_561.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							CAM::DO_SCREEN_FADE_IN(800);
							MISC::SET_BIT(&uLocal_744, 29);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_561.f_4), -272084098) == 7)
						{
							MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
					{
						MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 6);
						MISC::SET_BIT(&(Global_2446554.f_732), 4);
						MISC::CLEAR_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						func_322(PLAYER::PLAYER_ID(), 1, 0, 1);
						func_343();
						func_351(0);
						GlobalFunc_159("HLP_TAXI", -1);
						if (GlobalFunc_218())
						{
							GlobalFunc_8416(-1834046564, 200, &uVar0, 0, 0);
						}
						else
						{
							GlobalFunc_6859(-200, 0);
							MONEY::NETWORK_SPENT_TAXI(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!GlobalFunc_904(Local_561.f_4))
				{
					if (GlobalFunc_5239(Local_561.f_3))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_561.f_4), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_561.f_4), -258271821) != 0)
						{
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_561.f_4), 1);
							TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_561.f_4), NETWORK::NET_TO_VEH(Local_561.f_3), 12f, 786599);
							GlobalFunc_909(&(Local_561.f_3));
							GlobalFunc_909(&(Local_561.f_4));
						}
					}
				}
				break;
		}
		if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
		{
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!MISC::IS_BIT_SET(uLocal_744, 26))
			{
				MISC::SET_BIT(&uLocal_744, 26);
			}
		}
		if (!MISC::IS_BIT_SET(uLocal_744, 28))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				if (!GlobalFunc_439(&uLocal_394))
				{
					GlobalFunc_8442();
					GlobalFunc_436(&uLocal_394, 0, 0);
				}
				else if (GlobalFunc_5071(&uLocal_394, 5000, 0))
				{
					if (GlobalFunc_10670(&uLocal_568, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						MISC::SET_BIT(&uLocal_744, 28);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(uLocal_744, 30))
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				if (GlobalFunc_10670(&uLocal_568, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					MISC::SET_BIT(&uLocal_744, 30);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
		{
			GlobalFunc_448();
		}
		if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
	}
}






void func_343()//Position - 0x11638
{
	PAD::ENABLE_CONTROL_ACTION(0, 22, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 36, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 32, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 34, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 35, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 33, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 31, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 30, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 44, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 141, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 140, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 263, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 264, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 143, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 24, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 257, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 263, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 264, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 143, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 262, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 261, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 37, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 25, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 26, 1);
}

int func_344(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)//Position - 0x11707
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	Global_17098.f_6 = 1;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2422140.f_676)
		{
			GlobalFunc_5075(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!GlobalFunc_456())
	{
		if (GlobalFunc_430(PLAYER::PLAYER_ID(), 1))
		{
			if (((bParam9 && GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 1)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2422140.f_676 && !bParam11)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if ((MISC::ABSF((Var0.x - Param0.x)) < 0.2f && MISC::ABSF((Var0.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (MISC::ABSF(fVar3) < 1f)
			{
				Global_2422140.f_676 = 0;
				Global_2422140.f_677 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.x == Global_2422140.f_678 || !Param0.f_1 == Global_2422140.f_678.f_1) || !Param0.f_2 == Global_2422140.f_678.f_2) || !fParam3 == Global_2422140.f_681)
	{
		if (Global_2422140.f_676 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2422140.f_682) < GlobalFunc_429())
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2422140.f_677 = 1;
		}
		else
		{
			Global_2422140.f_677 = 0;
		}
		Global_2422140.f_678 = { Param0 };
		Global_2422140.f_681 = fParam3;
		Global_2422140.f_676 = 0;
	}
	if (!Global_2422140.f_676 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_455();
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2404548.f_409)))
			{
				Global_2404548.f_409 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(uVar4, Param0, 0, 1, 1, 1);
					ENTITY::SET_ENTITY_HEADING(uVar4, fParam3);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
			}
			GlobalFunc_5075(bParam6, bParam9);
			return 1;
		}
		else
		{
			STREAMING::CLEAR_FOCUS();
			PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, iParam10, 0);
		}
		Global_2422140.f_682 = NETWORK::GET_NETWORK_TIME();
		Global_2422140.f_676 = 1;
	}
	if (Global_2422140.f_676)
	{
		Global_17098.f_6 = 1;
		Global_2422140.f_682 = NETWORK::GET_NETWORK_TIME();
		if (bParam9)
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2422140.f_678) < 2f)
			{
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				GlobalFunc_5075(bParam6, bParam9);
				return 1;
			}
		}
		if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			GlobalFunc_5075(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}







void func_351(bool bParam0)//Position - 0x11B6C
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 15))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 15);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 15))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 15);
	}
}



void func_354(int iParam0, bool bParam1)//Position - 0x11C27
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 8, 0))
		{
			GlobalFunc_7834(iParam0, 8, 0);
			GlobalFunc_1293(iParam0);
		}
	}
	else if (GlobalFunc_7782(iParam0, 8, 0))
	{
		GlobalFunc_7833(iParam0, 8, 0);
		GlobalFunc_1293(iParam0);
	}
}





int func_359()//Position - 0x11D80
{
	return Local_561;
}


int func_361(int iParam0)//Position - 0x11D94
{
	return Local_733[iParam0 /*5*/];
}

int func_362(int iParam0)//Position - 0x11DA3
{
	return Local_733[iParam0 /*5*/].f_2;
}




void func_366(bool bParam0)//Position - 0x11E1A
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_750)
		{
			if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 2))
			{
				if (!MISC::IS_BIT_SET(uLocal_744, 31))
				{
					GlobalFunc_6857(119, 1, -1, 1);
					GlobalFunc_6857(115, 1, -1, 1);
				}
				func_617(1);
				bVar0 = true;
			}
		}
		else if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
		{
			if (!MISC::IS_BIT_SET(uLocal_744, 31))
			{
				GlobalFunc_6857(119, 1, -1, 1);
				GlobalFunc_6857(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_197(&Local_87, 0, bParam0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2422140.f_3033)
		{
			func_613(0, 1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_351(0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_87.f_122, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	MISC::CLEAR_BIT(&(Global_2446554.f_732), 4);
	func_85(0);
	func_54(0);
	func_612();
	GlobalFunc_8594(iLocal_86, 0);
	GlobalFunc_434(&(Global_2422140.f_3280));
	Global_2422140.f_3278 = 0;
	Global_2422140.f_3277 = 0;
	Global_2422140.f_3279 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
	}
	if (bVar0)
	{
		func_369(0, 0, 0, 0);
	}
	else
	{
		HUD::CLEAR_HELP(1);
		func_369(0, 0, 3, 1);
	}
	MISC::CLEAR_BIT(&(Global_2446554.f_732), 0);
	GlobalFunc_6004(0);
	GlobalFunc_1297(4, 0);
	GlobalFunc_1297(1, 0);
	GlobalFunc_1297(0, 0);
	GlobalFunc_1297(2, 0);
	GlobalFunc_1297(3, 0);
	func_354(iLocal_86, 0);
	func_343();
	GlobalFunc_8420();
	if (HUD::DOES_BLIP_EXIST(Global_90014.f_198[iLocal_86]))
	{
		HUD::SET_BLIP_ROUTE(Global_90014.f_198[iLocal_86], 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_747))
	{
		HUD::REMOVE_BLIP(&uLocal_747);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_368(0);
		func_181(0);
	}
	GlobalFunc_4226(Local_561.f_5);
}


void func_368(bool bParam0)//Position - 0x1206A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 5);
	}
}

void func_369(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1209E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	char* sVar21;
	struct<2> Var22;
	bool bVar24;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1582596[iVar0 /*324*/];
	GlobalFunc_1245();
	GlobalFunc_5320();
	PAD::_0xA0CEFCEA390AAB9B(0);
	Global_971496 = 0;
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(0);
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1573549 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	GlobalFunc_1241(0);
	Global_1573538 = 0;
	Global_1573537 = 0;
	Global_1573558 = 0;
	Global_1573700 = 0;
	Global_1573706 = 0;
	Global_1573282 = 0;
	Global_1574148 = 1;
	Global_1573673 = 0;
	Global_1573550 = -1;
	GlobalFunc_1240();
	GlobalFunc_1239(0);
	MISC::CLEAR_BIT(&(Global_2359301.f_1), 5);
	GlobalFunc_1238();
	GlobalFunc_1237();
	GlobalFunc_1236();
	GlobalFunc_1235();
	GlobalFunc_1234();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GlobalFunc_1233();
	}
	if (GlobalFunc_994())
	{
		GlobalFunc_1232();
		GlobalFunc_1231(1, 1, 1);
		GlobalFunc_1046();
		GlobalFunc_1230();
		if (iVar0 != -1)
		{
			Global_1600133[iVar0 /*32*/].f_22 = 0;
			Global_1600133[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	GlobalFunc_1229();
	if (Global_1602437 != 6)
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
			}
		}
	}
	Global_1572908 = 0;
	if (Global_1675400.f_9 == 4)
	{
		if (GlobalFunc_362(PLAYER::PLAYER_ID()) || GlobalFunc_361(PLAYER::PLAYER_ID()))
		{
			Global_1572908 = 1;
		}
	}
	GlobalFunc_4956();
	if (GlobalFunc_1228())
	{
		GlobalFunc_1227();
	}
	GlobalFunc_1226();
	Global_1602437.f_57334 = 0;
	Global_1675360.f_4 = 0;
	PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), 1);
	StringCopy(&(Global_1602437.f_56685), "", 32);
	HUD::THEFEED_HIDE_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	if (bParam3 && !GlobalFunc_413())
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1599982[iVar3] = 0;
		Global_1599949[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		MISC::SET_BIT(&(Global_2428891.f_5242), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2428891.f_5242), 3);
	}
	if (GlobalFunc_995() || (iVar0 != -1 && Global_1582596[iVar0 /*324*/].f_303))
	{
		GlobalFunc_1225();
		GlobalFunc_1224(1, 1);
		GlobalFunc_1231(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1600133[iVar0 /*32*/].f_22 = 0;
			Global_1600133[iVar0 /*32*/].f_22.f_1 = 0;
		}
		GlobalFunc_5319(1);
		if (GlobalFunc_1223())
		{
			GlobalFunc_1222();
		}
		if (!GlobalFunc_4993(PLAYER::PLAYER_ID()))
		{
			GlobalFunc_5318(4);
		}
		GlobalFunc_1046();
		GlobalFunc_1220(0);
		GlobalFunc_1219();
		Global_1574141 = 0;
	}
	if (!GlobalFunc_1218())
	{
		GlobalFunc_1217();
		if (GlobalFunc_1216())
		{
			if (GlobalFunc_1215())
			{
				GlobalFunc_1225();
			}
		}
		GlobalFunc_5319(1);
		if (!GlobalFunc_355())
		{
			Global_2428891.f_5533 = 0;
			Global_2428891.f_5534 = 0;
			Global_2428891.f_5532 = 0;
			Global_2428891.f_5531 = 0;
		}
	}
	else
	{
		GlobalFunc_1214(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_1213((Global_1675400.f_9 != 4 && !GlobalFunc_1218()));
	if (GlobalFunc_355())
	{
		Global_2428891.f_5622 = 1;
	}
	else
	{
		Global_2428891.f_5622 = 0;
	}
	if (!GlobalFunc_1006())
	{
		Global_1675425.f_1121 = 0;
	}
	if (!GlobalFunc_1218() && !GlobalFunc_1006())
	{
		GlobalFunc_1224(1, Global_1675400.f_9 != 4);
		GlobalFunc_1231(1, 1, 0);
		GlobalFunc_5317(0);
		GlobalFunc_587();
		Global_1574143 = 0;
		if (iVar0 != -1)
		{
			Global_1600133[iVar0 /*32*/].f_22 = 0;
			Global_1600133[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	GlobalFunc_4988(1, -1);
	if (GlobalFunc_1212())
	{
		GlobalFunc_1211();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::_0x9465E683B12D3F6B();
	}
	if (!GlobalFunc_413() && !GlobalFunc_1218())
	{
		func_555();
	}
	Global_1602437.f_57330 = 0;
	GlobalFunc_266();
	Global_1573531 = -1;
	Global_1600025 = -1;
	Global_1600019 = -1;
	Global_1600021 = -1;
	Global_1573536 = 0;
	Global_1600020 = 0;
	Global_1573684 = 0;
	Global_1573676 = 0;
	Global_1600026 = 0;
	GlobalFunc_1209(0);
	GlobalFunc_1208();
	Global_1582596[iVar0 /*324*/].f_303 = 0;
	Global_1600017 = 0f;
	Global_1600018 = 0f;
	Global_1573685 = 0;
	Global_1573686 = -1;
	Global_971738 = 0;
	Global_1573674 = 0;
	Global_1573283 = 0;
	GlobalFunc_1207();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	GlobalFunc_1206(1);
	if (GlobalFunc_1205())
	{
		GlobalFunc_1204();
	}
	if (GlobalFunc_1007())
	{
		if (GlobalFunc_5315(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < 2)
			{
				GlobalFunc_1203();
				GlobalFunc_1202(1);
			}
			else
			{
				GlobalFunc_1201();
			}
			if (Global_1675400.f_9 != -1)
			{
				GlobalFunc_7773();
			}
		}
		else if (Global_1582596[PLAYER::PLAYER_ID() /*324*/] == 0)
		{
			if (Global_1675400.f_9 != -1)
			{
				GlobalFunc_7773();
			}
		}
	}
	bVar4 = GlobalFunc_250(iVar0);
	Global_1582596[iVar0 /*324*/].f_167 = 0;
	if (bVar4 && !GlobalFunc_1006())
	{
		GlobalFunc_1200();
	}
	if (!bVar4)
	{
		GlobalFunc_1199(0);
	}
	if ((GlobalFunc_360() != 35 && GlobalFunc_360() != 34) && !GlobalFunc_1198())
	{
		Global_1572864 = { 0f, 0f, 0f };
	}
	GlobalFunc_1197();
	GlobalFunc_1196();
	GlobalFunc_1202(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1675400.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!GlobalFunc_1195())
		{
			GlobalFunc_1194(0, iVar6);
		}
	}
	NETWORK::_0x9D7AFCBF21C51712(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (Global_1675400.f_9)
		{
			case 1:
				if (!bVar4)
				{
					GlobalFunc_5314();
					GlobalFunc_985();
				}
				break;
			
			case 6:
				Global_1574141 = 0;
				if (!bVar4)
				{
					GlobalFunc_5314();
				}
				GlobalFunc_985();
				Global_1675400 = 0;
				Global_1675400.f_22 = { 0f, 0f, 0f };
				Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 0;
				StringCopy(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_213), "", 24);
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_210 = { 0f, 0f, 0f };
				break;
			
			case 2:
				GlobalFunc_1192(0);
				if (!GlobalFunc_1191())
				{
					GlobalFunc_1190(Global_1675400.f_16);
				}
				iVar5 = Global_1582596[iVar0 /*324*/].f_11;
				if (iVar5 != GlobalFunc_314())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2428891.f_5243 = { GlobalFunc_318(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && GlobalFunc_1191()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2428891.f_5243 = { GlobalFunc_1189() };
				}
				if (Global_1602437.f_18 > 1)
				{
					GlobalFunc_1188(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_28);
				}
				break;
			
			case 3:
				GlobalFunc_1192(0);
				iVar2 = 1;
				GlobalFunc_1187();
				iVar5 = Global_1582596[iVar0 /*324*/].f_11;
				if (iVar5 != GlobalFunc_314())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2428891.f_5243 = { GlobalFunc_318(iVar5) };
					}
				}
				if (Global_1602437.f_18 > 1)
				{
					GlobalFunc_1188(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_28);
				}
				break;
			
			case 4:
				GlobalFunc_1192(0);
				iVar2 = 1;
				if (GlobalFunc_1041())
				{
					GlobalFunc_1186();
				}
				else
				{
					Global_2428891.f_5533 = 0;
					Global_2428891.f_5534 = 0;
					Global_2428891.f_5532 = 0;
					Global_2428891.f_5531 = 0;
				}
				if (GlobalFunc_362(PLAYER::PLAYER_ID()) || GlobalFunc_361(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				if (!MISC::IS_BIT_SET(Global_1602437.f_10, 22))
				{
					if (!MISC::IS_BIT_SET(Global_1602437.f_10, 15))
					{
						GlobalFunc_1185(Global_1602437.f_57306);
					}
					else
					{
						GlobalFunc_1184(Global_1602437.f_71752, Global_1602437.f_71753);
					}
					if (Global_1675400.f_13 > -1)
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1675400.f_13, Global_1675400.f_14, 0);
					}
					else if (GlobalFunc_1183() > -1)
					{
						GlobalFunc_1247(GlobalFunc_1183(), 0);
					}
				}
				if (GlobalFunc_1040())
				{
					Var8 = { GlobalFunc_1039() };
					GlobalFunc_1182(Var8);
					if (GlobalFunc_1181() != -1)
					{
						Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_28 = GlobalFunc_1181();
					}
					GlobalFunc_1180();
					GlobalFunc_1179();
				}
				else
				{
					GlobalFunc_1187();
				}
				break;
			
			case 5:
				GlobalFunc_1192(0);
				iVar2 = 1;
				GlobalFunc_1187();
				break;
			
			case 8:
				if (!GlobalFunc_1191())
				{
					GlobalFunc_1190(Global_1675400.f_16);
				}
				break;
			
			case 9:
				GlobalFunc_1192(0);
				iVar2 = 1;
				GlobalFunc_1187();
				break;
			
			case 10:
				GlobalFunc_5278(10, 0f, 0f, 0f, Var14);
				GlobalFunc_1178();
				break;
		}
	}
	else
	{
		Global_1574141 = 0;
	}
	if (iVar2 || GlobalFunc_361(PLAYER::PLAYER_ID()))
	{
		if ((GlobalFunc_1177(PLAYER::PLAYER_ID()) || GlobalFunc_362(PLAYER::PLAYER_ID())) || GlobalFunc_361(PLAYER::PLAYER_ID()))
		{
			if (Global_1684010 > 0)
			{
				Global_2428891.f_1.f_2823.f_13 = Global_1684010;
				Global_2428891.f_1.f_2823 = { Global_1684010.f_1 };
			}
		}
		else
		{
			GlobalFunc_1176();
		}
	}
	Global_2428891.f_1.f_840 = 0;
	MISC::CLEAR_BIT(&Global_1573287, 0);
	GlobalFunc_1175(0);
	Global_1573541 = 0;
	Global_1573669 = -1;
	Global_1599948 = 0;
	Global_1312438 = 0;
	Global_1675400.f_1 = 0;
	Global_1675400.f_2 = 0;
	if (GlobalFunc_1174() == 0)
	{
		if (Global_1675400.f_9 == -1 && bVar4 == 0)
		{
			GlobalFunc_7772(0);
		}
		else
		{
			Global_1675400.f_9 = -1;
		}
	}
	GlobalFunc_1169();
	if (GlobalFunc_1168())
	{
		GlobalFunc_1167();
	}
	if (GlobalFunc_1166())
	{
		GlobalFunc_1165();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(1);
	}
	if (GlobalFunc_1174() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if ((((!GlobalFunc_1164(Global_1582596[iVar0 /*324*/]) && !GlobalFunc_413()) && !bVar4) && !GlobalFunc_456()) && !GlobalFunc_1218())
			{
				GlobalFunc_1163(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	GlobalFunc_1162();
	Global_1675400.f_1 = 0;
	if (!GlobalFunc_1007())
	{
		GlobalFunc_1161();
	}
	if (Global_1582596[iVar0 /*324*/] != -1)
	{
		iParam2 = iParam2;
		if (GlobalFunc_1160(Global_1582596[iVar0 /*324*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar20 = GlobalFunc_8413();
				GlobalFunc_7748(1199, -1);
				GlobalFunc_6196(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					GlobalFunc_6196(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(PLAYER::PLAYER_ID());
	}
	GlobalFunc_6873();
	if (Global_1675400 == 0)
	{
		if (!bVar4)
		{
			Global_1582596[iVar0 /*324*/].f_11 = -1;
			Global_1582596[iVar0 /*324*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		GlobalFunc_1163(0);
		Global_1582596[iVar0 /*324*/].f_12 = 1;
		Global_1582596[iVar0 /*324*/].f_11 = GlobalFunc_1152(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(0);
		GlobalFunc_7770(0, 0, 1);
		if (GlobalFunc_1149())
		{
			GlobalFunc_5309();
		}
	}
	if ((Global_1582596[iVar0 /*324*/] < 10 && Global_1582596[iVar0 /*324*/] != -1) && !GlobalFunc_456())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1582596[iVar0 /*324*/].f_121)) && Global_1582596[iVar0 /*324*/] != 5)
		{
			GlobalFunc_7769(&(Global_1582596[iVar0 /*324*/].f_121));
		}
	}
	Global_1582596[iVar0 /*324*/] = -1;
	Global_1582596[iVar0 /*324*/].f_31.f_2 = -1;
	Global_1582596[iVar0 /*324*/].f_31.f_16 = -1;
	Global_1582596[iVar0 /*324*/].f_31.f_1 = -1;
	Global_1602437 = 0;
	if (!bVar4)
	{
		GlobalFunc_1146(0);
	}
	Global_1582596[iVar0 /*324*/].f_31.f_18 = 0;
	MISC::CLEAR_BIT(&(Global_1582596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*324*/].f_301), 0);
	HUD::_SET_MISSION_NAME_2(0, 0);
	if (iVar1 != 6)
	{
		HUD::THEFEED_FLUSH_QUEUE();
		Global_2435893 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1582596[iVar0 /*324*/].f_121), sVar21, 24);
		StringCopy(&(Global_1582596[iVar0 /*324*/].f_127), sVar21, 24);
		GlobalFunc_1145();
	}
	StringCopy(&(Global_1592965[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1582596[iVar0 /*324*/].f_141), sVar21, 64);
	Global_1600133[iVar0 /*32*/].f_19 = { Var22 };
	Global_1573679 = 0;
	Global_1573680 = 0;
	Global_1573295 = -1;
	Global_1675347 = 1;
	bVar24 = false;
	GlobalFunc_1144();
	GlobalFunc_1143();
	GlobalFunc_1142();
	if (GlobalFunc_1141())
	{
		GlobalFunc_1140();
	}
	if (GlobalFunc_1139() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		GlobalFunc_1138();
		func_322(PLAYER::PLAYER_ID(), 0, 57348, 1);
	}
	if (GlobalFunc_1137())
	{
		GlobalFunc_1136();
	}
	else if (GlobalFunc_1135())
	{
		GlobalFunc_1136();
	}
	else if (GlobalFunc_1134())
	{
		GlobalFunc_1136();
	}
	else if (GlobalFunc_1133())
	{
		GlobalFunc_1136();
	}
	else if (GlobalFunc_1132())
	{
		GlobalFunc_1136();
	}
	else if (GlobalFunc_1174())
	{
		GlobalFunc_1136();
	}
	else if (GlobalFunc_479() && GlobalFunc_1131())
	{
		GlobalFunc_1136();
	}
	else if (GlobalFunc_1130())
	{
		GlobalFunc_1136();
	}
	else
	{
		GlobalFunc_1129();
		if (!Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 && !GlobalFunc_1006())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (GlobalFunc_1149())
				{
					GlobalFunc_1128();
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						Global_2428891.f_2841.f_195 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					}
					GlobalFunc_1127();
					GlobalFunc_1046();
					GlobalFunc_1032(6);
					GlobalFunc_985();
					if (bVar4)
					{
						GlobalFunc_1220(0);
					}
				}
				GlobalFunc_1126();
				GlobalFunc_1125();
				GlobalFunc_1124();
				if (Global_2428891.f_2841.f_4 == 2)
				{
					Global_2428891.f_2841.f_4 = 1;
				}
				if (GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_1123();
				}
				GlobalFunc_1122();
				Global_2428891.f_2841 = 0;
			}
			else
			{
				GlobalFunc_1121();
				GlobalFunc_1136();
			}
		}
		else
		{
			if (!GlobalFunc_355() && !GlobalFunc_1006())
			{
			}
			GlobalFunc_1121();
			GlobalFunc_1136();
		}
	}
	if ((((((((((!GlobalFunc_1137() && !GlobalFunc_1120()) && !GlobalFunc_1131()) && !GlobalFunc_479()) && !GlobalFunc_1134()) && !GlobalFunc_1135()) && !GlobalFunc_1119()) && !GlobalFunc_1132()) && !GlobalFunc_1174()) && !GlobalFunc_1133()) && !GlobalFunc_1118())
	{
		if (!GlobalFunc_1117())
		{
			GlobalFunc_1116();
			GlobalFunc_5308();
			GlobalFunc_1114();
			GlobalFunc_5307(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				if (!GlobalFunc_1112())
				{
					if (!bVar24)
					{
						if (GlobalFunc_4993(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::_0x4D953DF78EBF8158();
						}
					}
				}
			}
		}
	}
	if (!GlobalFunc_456())
	{
		StringCopy(&(Global_1602437.f_56700), "", 64);
	}
	if (!GlobalFunc_1006())
	{
		GlobalFunc_8405();
	}
	GlobalFunc_1111();
	if (!GlobalFunc_1218() && !GlobalFunc_355())
	{
		GlobalFunc_1110();
	}
	func_370(bParam3);
}

void func_370(bool bParam0)//Position - 0x12EC4
{
	var uVar0;
	
	if (bParam0)
	{
		if (GlobalFunc_1007())
		{
		}
		else if ((((!GlobalFunc_1218() && !GlobalFunc_355()) && !GlobalFunc_1006()) && Global_1675400.f_9 != 9) && Global_1675400.f_9 != 4)
		{
			GlobalFunc_1247(0, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	GlobalFunc_1109();
	GlobalFunc_1108(1);
	if ((((bParam0 && !GlobalFunc_1107()) && !GlobalFunc_1218()) && !Global_262145.f_4825) && !GlobalFunc_5306())
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	func_377(&uVar0, -1);
	if ((GlobalFunc_3() == 0 && !GlobalFunc_268()) && !GlobalFunc_1218())
	{
		if (GlobalFunc_1105())
		{
			GlobalFunc_1104();
		}
		else
		{
			GlobalFunc_4989(28, 0);
		}
	}
	GlobalFunc_1103(0);
}







void func_377(var uParam0, int iParam1)//Position - 0x130C8
{
	func_383(uParam0, iParam1);
	GlobalFunc_7768(iParam1);
}






void func_383(var uParam0, int iParam1)//Position - 0x131BF
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = GlobalFunc_5();
	}
	uVar1 = GlobalFunc_5305(iParam1);
	uVar2 = MISC::GET_PROFILE_SETTING(uVar1);
	if (MISC::IS_BIT_SET(uVar2, 1))
	{
		GlobalFunc_7748(1194, iParam1);
		GlobalFunc_6196(joaat("mpply_dm_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 1);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 2))
	{
		GlobalFunc_7748(1196, iParam1);
		GlobalFunc_6196(joaat("mpply_race_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 2);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 3))
	{
		GlobalFunc_7748(1106, iParam1);
		GlobalFunc_6196(joaat("mpply_mc_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 3);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 4))
	{
		GlobalFunc_7748(1198, iParam1);
		GlobalFunc_6196(joaat("mpply_mgame_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 4);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 5))
	{
		GlobalFunc_7748(1909, iParam1);
		GlobalFunc_6196(joaat("mpply_cap_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 5);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 6))
	{
		GlobalFunc_7748(1911, iParam1);
		GlobalFunc_6196(joaat("mpply_sur_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 6);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 7))
	{
		GlobalFunc_7748(1913, iParam1);
		GlobalFunc_6196(joaat("mpply_lts_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 7);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 8))
	{
		GlobalFunc_7748(1915, iParam1);
		GlobalFunc_6196(joaat("mpply_para_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 8);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 9))
	{
		GlobalFunc_7748(2638, iParam1);
		GlobalFunc_6196(joaat("mpply_heist_cheat_start"), 2);
		GlobalFunc_6196(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 9);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		STATS::_0x723C1CE13FBFDB67(uVar2, iParam1);
	}
}












































































































































































void func_555()//Position - 0x153AA
{
	Global_2446554.f_271 = 0;
	GlobalFunc_4908(3782, 0, -1, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_556())
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
		}
	}
}

bool func_556()//Position - 0x153E7
{
	return func_557(PLAYER::PLAYER_PED_ID());
}

int func_557(var uParam0)//Position - 0x153F7
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(uParam0, 5);
	iVar1 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(uParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(uParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(uParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(uParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}























































void func_612()//Position - 0x162AA
{
	MISC::CLEAR_BIT(&(Global_2446554.f_732), 3);
}

void func_613(bool bParam0, int iParam1)//Position - 0x162BE
{
	GlobalFunc_4991();
	if (bParam0)
	{
		GlobalFunc_5385(1);
		HUD::CLEAR_HELP(1);
	}
	HUD::CLEAR_PRINTS();
	GlobalFunc_8442();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_5321();
	GlobalFunc_1096(12, 0, -1);
	GlobalFunc_1097(1);
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	GlobalFunc_139();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
		}
	}
	GlobalFunc_73(0);
	if (((GlobalFunc_268() == 0 && GlobalFunc_1527() == 0) && iParam1) && !GlobalFunc_7624(PLAYER::PLAYER_ID()))
	{
		func_322(PLAYER::PLAYER_ID(), 1, 0, 1);
	}
	Global_2422140.f_3033 = 0;
}




void func_617(bool bParam0)//Position - 0x163E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312448)
	{
		if (!GlobalFunc_7679())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1573723[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = GlobalFunc_7788(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = GlobalFunc_5249(iVar1, bParam0);
	if (!GlobalFunc_7787(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1573723[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1573723[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 134)
	{
		iVar3 = GlobalFunc_8422(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (GlobalFunc_7776(iVar4))
			{
				GlobalFunc_8421(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_626(GlobalFunc_8987(59, 0), 0);
	func_625(GlobalFunc_8987(22, 0), GlobalFunc_8987(73, 0));
	if (GlobalFunc_7679())
	{
		if (GlobalFunc_6725(77, -1))
		{
			func_624(1);
			func_623(1);
		}
	}
	if (GlobalFunc_228() || GlobalFunc_227())
	{
		GlobalFunc_6857(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_618(28, 1, 0);
			func_618(29, 1, 0);
			func_618(30, 1, 0);
			func_618(31, 1, 0);
			func_618(32, 1, 0);
			func_618(33, 1, 0);
			func_618(34, 1, 0);
			func_618(35, 1, 0);
			func_618(36, 1, 0);
			func_618(37, 1, 0);
			func_618(38, 1, 0);
		}
	}
	if (GlobalFunc_8987(21, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_971739 = 0;
}

void func_618(int iParam0, bool bParam1, int iParam2)//Position - 0x16575
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 0, 0))
		{
			if (iParam2 && Global_90014.f_17[iParam0])
			{
				if (GlobalFunc_330(iParam0) == 3 && !GlobalFunc_8419(iParam0))
				{
					GlobalFunc_8591(iParam0);
					GlobalFunc_7834(iParam0, 0, 0);
					GlobalFunc_7833(iParam0, 1, 0);
					GlobalFunc_1293(iParam0);
				}
				else
				{
					GlobalFunc_7834(iParam0, 1, 0);
					GlobalFunc_1293(iParam0);
				}
			}
			else
			{
				GlobalFunc_7834(iParam0, 0, 0);
				GlobalFunc_7833(iParam0, 1, 0);
				GlobalFunc_1293(iParam0);
			}
		}
		else
		{
			GlobalFunc_7833(iParam0, 1, 0);
			GlobalFunc_1293(iParam0);
		}
	}
	else if (GlobalFunc_7782(iParam0, 0, 0))
	{
		GlobalFunc_7833(iParam0, 0, 0);
		GlobalFunc_7833(iParam0, 1, 0);
		GlobalFunc_1293(iParam0);
	}
}





void func_623(bool bParam0)//Position - 0x168CC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_618(28, bParam0, 0);
	func_618(30, bParam0, 0);
	func_618(31, bParam0, 0);
	func_618(33, bParam0, 0);
	func_618(34, bParam0, 0);
	func_618(38, bParam0, 0);
}

void func_624(bool bParam0)//Position - 0x16915
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_618(29, bParam0, 0);
	func_618(32, bParam0, 0);
	func_618(36, bParam0, 0);
	func_618(35, bParam0, 0);
	func_618(37, bParam0, 0);
}

void func_625(bool bParam0, bool bParam1)//Position - 0x16955
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_618(0, bParam0, 1);
	func_618(1, bParam0, 1);
	func_618(2, bParam0, 1);
	func_618(3, bParam0, 1);
	func_618(4, bParam0, 1);
	func_618(5, bParam0, 1);
	func_618(6, bParam0, 1);
	func_618(7, bParam0, bVar0);
	func_618(8, bParam0, 1);
	func_618(9, bParam0, 1);
	func_618(10, bParam0, 1);
	func_618(11, bParam0, 1);
	func_618(12, bParam0, bVar0);
	func_618(13, bParam0, 1);
	func_618(21, bParam0, 1);
	func_618(14, bParam0, 1);
	func_618(15, bParam0, 1);
	func_618(16, bParam0, 1);
	func_618(17, bParam0, 1);
	func_618(18, bParam0, 1);
	func_618(19, bParam0, 1);
	func_618(20, bParam0, 1);
	func_618(22, bParam0, 1);
	func_618(23, bParam0, 1);
	func_618(24, bParam0, 1);
	func_618(25, bParam0, 1);
	func_618(26, bParam0, 1);
	func_618(27, bParam0, 1);
	GlobalFunc_1297(1, !bParam1);
	if (!bVar0)
	{
		GlobalFunc_8591(12);
	}
}

void func_626(bool bParam0, bool bParam1)//Position - 0x16A7D
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = GlobalFunc_7789(0);
	func_618(39, bParam0, 0);
	func_618(40, bParam0, 0);
	func_618(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_618(43, bParam0, 0);
		func_618(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!GlobalFunc_8419(39))
		{
			GlobalFunc_8591(39);
		}
		if (!GlobalFunc_8419(40))
		{
			GlobalFunc_8591(40);
		}
		if (!GlobalFunc_8419(41))
		{
			GlobalFunc_8591(41);
		}
		if (!GlobalFunc_8419(42))
		{
			GlobalFunc_8591(42);
		}
		if (!GlobalFunc_8419(43))
		{
			GlobalFunc_8591(43);
		}
	}
}


































void func_660(struct<17> Param0, var uParam17, var uParam18, var uParam19)//Position - 0x17929
{
	var uVar0;
	
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, 0, Param0.f_16);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_561, 7);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_733, 11);
	Global_1582596[PLAYER::PLAYER_ID() /*324*/] = 16;
	if (bLocal_752)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				uVar0 = PLAYER::PLAYER_ID() + 32;
				NETWORK::_0xFB680D403909DC70(1, uVar0);
				GlobalFunc_4232(1);
			}
		}
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	if (!GlobalFunc_5091())
	{
		func_366(0);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	GlobalFunc_8594(iLocal_86, 1);
	func_368(1);
	if (!bLocal_752)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_322(PLAYER::PLAYER_ID(), 1, 0, 1);
		}
	}
	Global_2446554.f_1613 = 0;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_663();
	GlobalFunc_8424();
	Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}



void func_663()//Position - 0x17AF5
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_746);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	TASK::TASK_TURN_PED_TO_FACE_COORD(0, 17.0693f, -1115.935f, 28.7968f, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_746);
}




