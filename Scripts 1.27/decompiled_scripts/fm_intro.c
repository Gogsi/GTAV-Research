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
		func_659();
		if (func_651())
		{
			func_366(1);
		}
		if (func_363(0))
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
				if (func_360() && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMINT", 0))
				{
					if (func_359() > 0)
					{
						func_358(&uLocal_396, 1, 0, "Lamar", 0, 1);
						func_357(0);
						func_356(4, 1);
						func_356(1, 1);
						func_356(0, 1);
						func_356(2, 1);
						func_356(3, 0);
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
				func_18(&(Local_561.f_5));
				if (func_17(&(Local_561.f_5)))
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
					func_8();
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
	if (func_7(Global_2446554.f_733) && func_7(Global_2446554.f_734))
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
			if (func_5(uParam1, *uParam0, 25, Global_2446554.f_734, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(*uParam1), 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2446554.f_733);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2446554.f_734);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(*uParam0), 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam1), 1);
				func_358(uParam6, 8, NETWORK::NET_TO_PED(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x5DA
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
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

bool func_7(int iParam0)//Position - 0x6E5
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_8()//Position - 0x703
{
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
	if (!func_13(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (!func_11(PLAYER::PLAYER_ID()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)//Position - 0x7BA
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2414009[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x7DB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_13(int iParam0, bool bParam1)//Position - 0x81F
{
	if (Global_1312449 != 0)
	{
		return func_11(iParam0) != 0;
	}
	return func_14(iParam0, bParam1);
}

int func_14(int iParam0, bool bParam1)//Position - 0x845
{
	if (bParam1)
	{
		if (func_15(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)//Position - 0x871
{
	return func_16(iParam0);
}

bool func_16(int iParam0)//Position - 0x87F
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

int func_17(var uParam0)//Position - 0x899
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_18(var uParam0)//Position - 0x8C2
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)//Position - 0x8E1
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
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
			if (!func_22(iLocal_86))
			{
				MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 2);
				Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_22(int iParam0)//Position - 0x9C1
{
	return func_23(iParam0, 5, 1);
}

int func_23(int iParam0, int iParam1, bool bParam2)//Position - 0x9D1
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_28() == 0)
		{
			return MISC::IS_BIT_SET(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0], iParam1);
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0xA31
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_25(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0xA63
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_26()//Position - 0xA97
{
	return Global_1312737;
}

int func_27(int iParam0)//Position - 0xAA3
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_28()//Position - 0xD4C
{
	return Global_24444;
}

void func_29()//Position - 0xD57
{
	int iVar0;
	
	if (func_182())
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_181(0);
		}
	}
	if (!func_180(&uLocal_386))
	{
		func_19(&uLocal_386, 0, 0);
	}
	if (!MISC::IS_BIT_SET(uLocal_744, 21))
	{
		MISC::SET_BIT(&uLocal_744, 21);
	}
	if (!MISC::IS_BIT_SET(uLocal_744, 3))
	{
		if (!func_180(&uLocal_384))
		{
			func_19(&uLocal_384, 0, 0);
		}
		else if (MISC::IS_BIT_SET(uLocal_744, 21))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (func_179(&uLocal_384, 3000, 0))
					{
						MISC::SET_BIT(&uLocal_744, 3);
					}
				}
			}
		}
		if (func_179(&uLocal_384, 40000, 0))
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
				func_178(&uLocal_384);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
	{
		if (!func_180(&uLocal_390))
		{
			func_19(&uLocal_390, 0, 0);
		}
		else if (!MISC::IS_BIT_SET(uLocal_745, 1))
		{
			if (func_179(&uLocal_390, 10000, 0))
			{
				MISC::SET_BIT(&uLocal_745, 1);
				func_178(&uLocal_390);
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_744, 19))
		{
			if (!MISC::IS_BIT_SET(uLocal_744, 18))
			{
				if (!func_176() || func_179(&uLocal_384, 5000, 0))
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
						func_76(19, 3, 1);
						MISC::SET_BIT(&uLocal_744, 20);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
				}
			}
		}
		else if (!func_75(0))
		{
			if (!func_74())
			{
				if (!func_72())
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
						func_19(&uLocal_388, 0, 0);
						func_19(&uLocal_392, 0, 0);
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
					func_178(&uLocal_384);
				}
			}
			else if (!func_176())
			{
				if (!MISC::IS_BIT_SET(uLocal_744, 23))
				{
					if (func_179(&uLocal_392, 4500, 0))
					{
						MISC::SET_BIT(&uLocal_744, 23);
						MISC::SET_BIT(&(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 3);
					}
				}
				if (func_179(&uLocal_388, 15000, 0))
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
					if (!func_22(iLocal_86))
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
									func_62("GET_AMMU", 0);
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
							func_62("GET_GUN", 0);
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
					func_62("LOSE_COP", 0);
					MISC::SET_BIT(&uLocal_744, 14);
				}
			}
		}
	}
	else if (func_179(&uLocal_386, 300000, 0))
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
				if (func_22(iLocal_86))
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
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!MISC::IS_BIT_SET(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				MISC::SET_BIT(&uLocal_744, 31);
			}
			func_178(&uLocal_384);
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

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x141D
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2473393[iParam0 /*6*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_31()//Position - 0x144F
{
	return 1;
	return 0;
}

void func_32(char* sParam0, int iParam1)//Position - 0x145C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_33()//Position - 0x1473
{
	if (!func_39())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312579.f_7)
	{
		return;
	}
	func_34();
}

void func_34()//Position - 0x14A0
{
	func_36();
	func_35(0);
}

void func_35(bool bParam0)//Position - 0x14B1
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312579 = 11;
	StringCopy(&(Global_1312579.f_1), "", 24);
	Global_1312579.f_7 = 0;
	if (bVar0)
	{
		Global_1312579.f_8 = NETWORK::GET_NETWORK_TIME();
		Global_1312579.f_9 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312579.f_10), "", 16);
	StringCopy(&(Global_1312579.f_14), "", 64);
	StringCopy(&(Global_1312579.f_30), "", 16);
	Global_1312579.f_34 = 0;
	Global_1312579.f_35 = 0;
	Global_1312579.f_36 = 0;
	Global_1312579.f_37 = -1;
	Global_1312579.f_38 = 0;
	Global_1312579.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_36()//Position - 0x1543
{
	if (!func_38())
	{
	}
	if (func_39())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312579.f_10));
		func_37();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_37()//Position - 0x156C
{
	switch (Global_1312579)
	{
		case 11:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312579.f_34);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312579.f_34);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312579.f_35);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_30));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312579.f_14));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312579.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312579.f_14));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312579.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312579.f_14));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312579.f_14));
			return;
		
		default:
	}
}

int func_38()//Position - 0x1675
{
	if (!func_39())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312579.f_10));
	func_37();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_39()//Position - 0x169B
{
	if (Global_1312579 == 11)
	{
		return 0;
	}
	return 1;
}

bool func_40()//Position - 0x16B1
{
	return ((((((((((func_41(28) || func_41(29)) || func_41(30)) || func_41(31)) || func_41(32)) || func_41(33)) || func_41(34)) || func_41(35)) || func_41(36)) || func_41(37)) || func_41(38));
}

int func_41(int iParam0)//Position - 0x1737
{
	return func_23(iParam0, 6, 1);
}

void func_42(int iParam0)//Position - 0x1747
{
	int iVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = func_51(PLAYER::PLAYER_ID());
		if (iVar0 < iParam0)
		{
			if (func_50())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_HOLDUPS((iParam0 - iVar0));
			}
		}
	}
}

void func_43(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x1791
{
	int iVar0;
	
	if (!func_50())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_44(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_44(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1A29
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_50())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_26()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540096[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			*uParam0 = func_49(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540096[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2540554 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2540556 = 1;
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_48(1, iParam4);
			Global_2540556 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_45(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1B9D
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_46(iParam0);
	}
}

void func_46(int iParam0)//Position - 0x1BD4
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_50())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_47(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_2540096[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540096[iParam0 /*69*/] = { Var1 };
	}
}

int func_47(int iParam0)//Position - 0x1C35
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_48(int iParam0, var uParam1)//Position - 0x1C5D
{
	Global_2437132 = uParam1;
	Global_2437131 = iParam0;
}

int func_49(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)//Position - 0x1C71
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540096[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_50())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540096[iVar0 /*69*/].f_2 = 1;
			Global_2540096[iVar0 /*69*/].f_1 = uParam5;
			Global_2540096[iVar0 /*69*/].f_3 = uParam1;
			Global_2540096[iVar0 /*69*/].f_4 = uParam2;
			Global_2540096[iVar0 /*69*/].f_7 = uParam3;
			Global_2540096[iVar0 /*69*/].f_5 = 0;
			Global_2540096[iVar0 /*69*/] = iParam0;
			Global_2540096[iVar0 /*69*/].f_6 = iParam4;
			Global_2540096[iVar0 /*69*/].f_65 = uParam8;
			Global_2540096[iVar0 /*69*/].f_64 = uParam7;
			Global_2540096[iVar0 /*69*/].f_68 = 0;
			Global_2540554 = 0;
			if (bParam6)
			{
				Global_2540096[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_50()//Position - 0x1D45
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

var func_51(int iParam0)//Position - 0x1D59
{
	var uVar0;
	
	uVar0 = func_52(iParam0);
	return uVar0;
}

int func_52(int iParam0)//Position - 0x1D6B
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_53(iParam0))
		{
			return Global_1582596[iParam0 /*324*/].f_180.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x1DAE
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2422140.f_1, iParam0);
	}
	return 1;
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
		if (!func_23(iParam0, 14, 1))
		{
			func_58(iParam0, 14, 1);
		}
	}
	else if (func_23(iParam0, 14, 1))
	{
		func_56(iParam0, 14, 1);
	}
}

void func_56(int iParam0, int iParam1, bool bParam2)//Position - 0x1E6E
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1ED6
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)//Position - 0x1F01
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

bool func_59()//Position - 0x1F69
{
	return ((((((((((func_60(28) || func_60(29)) || func_60(30)) || func_60(31)) || func_60(32)) || func_60(33)) || func_60(34)) || func_60(35)) || func_60(36)) || func_60(37)) || func_60(38));
}

int func_60(int iParam0)//Position - 0x1FEF
{
	return func_23(iParam0, 3, 0);
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

void func_62(char* sParam0, bool bParam1)//Position - 0x203E
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_66(sParam0))
	{
		return;
	}
	func_34();
	Global_1312579 = 0;
	StringCopy(&(Global_1312579.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_1312579.f_7 = MISC::GET_HASH_KEY(&(Global_1312579.f_1));
	StringCopy(&(Global_1312579.f_10), sParam0, 16);
	func_65();
	func_64(bParam1);
	func_63();
}

void func_63()//Position - 0x20A9
{
	MISC::SET_BIT(&(Global_1312579.f_39), 1);
}

void func_64(bool bParam0)//Position - 0x20BC
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312579.f_39), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312579.f_39), 0);
}

void func_65()//Position - 0x20E2
{
	Global_1312579.f_8 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312579.f_9 = NETWORK::GET_NETWORK_TIME();
}

bool func_66(char* sParam0)//Position - 0x2107
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		return func_67(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_10));
}

bool func_67(char* sParam0)//Position - 0x214B
{
	if (!func_39())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_14));
}

void func_68()//Position - 0x217D
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_71(PLAYER::PLAYER_ID()) };
	bVar13 = NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT();
	bVar14 = func_70(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_69("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_69("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_69("HLP_SOC1", 9000);
	}
}

void func_69(char* sParam0, int iParam1)//Position - 0x21EB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_70(var uParam0)//Position - 0x2202
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_71(int iParam0)//Position - 0x2228
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_72()//Position - 0x223F
{
	return func_73();
}

bool func_73()//Position - 0x224B
{
	return Global_1321259.f_40 == 3;
}

int func_74()//Position - 0x225B
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x227D
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

void func_76(int iParam0, int iParam1, bool bParam2)//Position - 0x22D7
{
	Global_2949 = iParam0;
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		func_78();
		if (iParam1 == 4)
		{
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[0] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[1] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[2] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[0] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[1] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[iParam1] == 1 && Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68245)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_77();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_77();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
				Global_2873[1 /*6*/].f_5 = iParam1;
				func_77();
			}
		}
	}
}

void func_77()//Position - 0x2481
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_2873[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2873[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2263, 0);
}

void func_78()//Position - 0x24FE
{
	if (func_84(14))
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
		Global_14393 = func_79();
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

var func_79()//Position - 0x259F
{
	func_80();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_80()//Position - 0x25B8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_83(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_82(PLAYER::PLAYER_PED_ID());
			if (func_81(iVar0) && (!func_84(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_81(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_81(int iParam0)//Position - 0x26B5
{
	return iParam0 < 3;
}

int func_82(var uParam0)//Position - 0x26C1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_83(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_83(int iParam0)//Position - 0x26FE
{
	if (func_81(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_84(int iParam0)//Position - 0x2728
{
	return Global_34913 == iParam0;
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
	
	if (func_173())
	{
		return 0;
	}
	if (func_172())
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
	iVar1 = func_171(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_170(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_166(uParam6))
	{
		return 0;
	}
	if (func_163(iVar0, iVar1, iVar2))
	{
		if (func_162())
		{
			return 0;
		}
		func_161();
		return func_94(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_93(iParam4))
	{
		return 0;
	}
	func_88(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0x2882
{
	Global_1321259.f_40.f_1 = iParam0;
	Global_1321259.f_40.f_2 = iParam1;
	Global_1321259.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321259.f_40.f_4), sParam3, 16);
	Global_1321259.f_40.f_8 = iParam4;
	Global_1321259.f_40.f_9 = iParam5;
	Global_1321259.f_40.f_14 = uParam6;
	func_89(iParam4);
	func_161();
	Global_1321259.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_89(int iParam0)//Position - 0x28EF
{
	if (func_92(iParam0))
	{
		func_91();
		return;
	}
	func_90();
}

void func_90()//Position - 0x290B
{
	Global_1321259.f_40.f_10 = 0;
}

void func_91()//Position - 0x291C
{
	Global_1321259.f_40.f_10 = 1;
}

int func_92(int iParam0)//Position - 0x292D
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_93(int iParam0)//Position - 0x2975
{
	return iParam0 > Global_1321259.f_40.f_8;
}

int func_94(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x2988
{
	struct<2> Var0;
	
	func_160();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_157(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_154(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_157(uParam0, sParam3, sParam4);
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
	
	func_124();
	bVar0 = true;
	if (func_97(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_96(120000);
		return 1;
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x2AB8
{
	Global_1321259.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1321259.f_40.f_12 = 1;
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_117(iVar0);
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
	uVar5 = func_114(iParam7, &iVar3);
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
		bVar12 = func_113(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_101(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam4, 0))
	{
		func_100();
	}
	func_124();
	func_99();
	func_98();
	return 1;
}

void func_98()//Position - 0x2C2C
{
	Global_1321259.f_57 = 0;
	Global_1321259.f_57.f_1 = 0;
}

void func_99()//Position - 0x2C44
{
	Global_1321259.f_40 = 3;
}

void func_100()//Position - 0x2C53
{
	MISC::SET_BIT(&Global_2263, 8);
}

int func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x2C64
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_102(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			MISC::SET_BIT(&Global_2544648, 0);
		}
		return 1;
	}
	return 0;
}

int func_102(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x2CD0
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_78();
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
		if (Global_2544633 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_112() == 0)
	{
		func_110();
		return 0;
	}
	func_109(Global_2544632);
	StringCopy(&(Global_2543383[Global_2544632 /*104*/]), sParam1, 64);
	Global_2543383[Global_2544632 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2543383[Global_2544632 /*104*/].f_24 = iParam2;
	}
	Global_2543383[Global_2544632 /*104*/].f_25 = iParam7;
	Global_2543383[Global_2544632 /*104*/].f_26 = uParam8;
	Global_2543383[Global_2544632 /*104*/].f_29 = uParam9;
	Global_2543383[Global_2544632 /*104*/].f_30 = uParam12;
	Global_2543383[Global_2544632 /*104*/].f_31 = uParam11;
	Global_2543383[Global_2544632 /*104*/].f_28 = 0;
	Global_2543383[Global_2544632 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_33), sParam4, 64);
	Global_2543383[Global_2544632 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_50), sParam5, 64);
	Global_2543383[Global_2544632 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_83), sParam15, 64);
	func_78();
	switch (iParam16)
	{
		case 3:
			Global_2543383[Global_2544632 /*104*/].f_99[Global_14393] = 1;
			break;
		
		case 0:
			Global_2543383[Global_2544632 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2543383[Global_2544632 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2543383[Global_2544632 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14393)
		{
			case 0:
				func_108(0);
				break;
			
			case 1:
				func_108(1);
				break;
			
			case 2:
				func_108(2);
				break;
			
			case 3:
				func_108(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2544633 = 1;
				break;
			
			case 0:
				Global_2544633 = 1;
				break;
			
			case 2:
				Global_2544633 = 1;
				break;
			
			case 1:
				Global_2544633 = 1;
				break;
			}
	}
	Global_16761[Global_2544632] = 0;
	if (bParam10)
	{
		func_78();
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
			if (!func_107())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_106(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(1);
			func_106(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_103(int iParam0)//Position - 0x308D
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_84(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2269);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_104(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x3523
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_105(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_105(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_105(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_105(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_105(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_105(char* sParam0)//Position - 0x35D6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x35E8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_107()//Position - 0x364B
{
	return Global_1315900;
}

void func_108(int iParam0)//Position - 0x3657
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_109(int iParam0)//Position - 0x3676
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_2543383[iParam0 /*104*/].f_18 = uVar0;
	Global_2543383[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2543383[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2543383[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2543383[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2543383[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_110()//Position - 0x36F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2544632 = 11;
	Global_2543383[Global_2544632 /*104*/].f_18 = -1;
	Global_2543383[Global_2544632 /*104*/].f_18.f_1 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_2 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_3 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_111(Global_2543383[iVar2 /*104*/].f_18, Global_2543383[Global_2544632 /*104*/].f_18))
		{
			Global_2544632 = iVar2;
		}
		iVar2++;
	}
	Global_2543383[Global_2544632 /*104*/].f_24 = 1;
}

int func_111(struct<6> Param0, struct<6> Param6)//Position - 0x37A0
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
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

int func_112()//Position - 0x388B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2543383[iVar2 /*104*/].f_24 == 0)
		{
			Global_2544632 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2544632 = 11;
	Global_2543383[Global_2544632 /*104*/].f_18 = -1;
	Global_2543383[Global_2544632 /*104*/].f_18.f_1 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_2 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_3 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2543383[iVar2 /*104*/].f_24 == 0 || Global_2543383[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_111(Global_2543383[iVar2 /*104*/].f_18, Global_2543383[Global_2544632 /*104*/].f_18))
			{
				Global_2544632 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2544632 == 11)
	{
		return 0;
	}
	Global_2543383[Global_2544632 /*104*/].f_99[0] = 0;
	Global_2543383[Global_2544632 /*104*/].f_99[1] = 0;
	Global_2543383[Global_2544632 /*104*/].f_99[2] = 0;
	return 1;
}

int func_113(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x39B6
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
	iVar0 = 3;
	if (func_102(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			MISC::SET_BIT(&Global_2544648, 0);
		}
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)//Position - 0x3A38
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_115(2, iParam1);
	return iParam0;
}

void func_115(int iParam0, var uParam1)//Position - 0x3A57
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
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
	func_115(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_117(int iParam0)//Position - 0x3B45
{
	int iVar0;
	
	iVar0 = func_120(iParam0);
	if (iVar0 == -1)
	{
		func_118(iParam0, 1);
		return 0;
	}
	Global_1336400[iVar0 /*5*/].f_4 = 1;
	return Global_1336400[iVar0 /*5*/].f_2;
}

void func_118(int iParam0, bool bParam1)//Position - 0x3B7B
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_120(iParam0) != -1)
	{
		return;
	}
	if (Global_1336563)
	{
		if (iParam0 == Global_1336563.f_1)
		{
			return;
		}
	}
	if (func_119(iParam0))
	{
		return;
	}
	if (Global_1336601 >= 32)
	{
		return;
	}
	Global_1336568[Global_1336601] = iParam0;
	Global_1336601++;
	if (bParam1)
	{
	}
}

int func_119(int iParam0)//Position - 0x3BE7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336601)
	{
		if (Global_1336568[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x3C19
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1336561 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336561)
	{
		if (Global_1336400[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1336400[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1336400[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_121(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_121(int iParam0)//Position - 0x3C98
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1336561)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1336400[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1336400[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1336400[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1336400[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1336561)
	{
		Global_1336400[iVar32 /*5*/] = { Global_1336400[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_122(&(Global_1336400[iVar32 /*5*/]));
	Global_1336561 = (Global_1336561 - 1);
}

void func_122(var uParam0)//Position - 0x3D4E
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_123()//Position - 0x3D7B
{
	return -1;
}

void func_124()//Position - 0x3D84
{
	Global_1321259.f_40.f_9 = 4;
}

int func_125(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x3D95
{
	bool bVar0;
	
	func_124();
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_117(iVar0);
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
	uVar5 = func_114(iParam7, &iVar3);
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
		bVar12 = func_129(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam4, 0))
	{
		func_100();
	}
	func_128();
	func_99();
	func_98();
	return 1;
}

void func_128()//Position - 0x3F35
{
	Global_1321259.f_40.f_9 = 3;
}

int func_129(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x3F46
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
	if (func_130(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_130(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x3FDE
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_78();
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
	if (func_134() == 0)
	{
		func_132();
		return 0;
	}
	func_131(Global_16759);
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
		func_108(0);
		func_108(2);
		func_108(1);
	}
	else
	{
		func_78();
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
					func_108(0);
					Global_2969 = 0;
					break;
				
				case 1:
					func_108(1);
					Global_2969 = 1;
					break;
				
				case 2:
					func_108(2);
					Global_2969 = 2;
					break;
				
				case 3:
					func_108(3);
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
		func_78();
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
			if (!func_107())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_106(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(1);
			func_106(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_131(int iParam0)//Position - 0x4491
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18 = uVar0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_132()//Position - 0x4523
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18 = -1;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_133(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_18, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18))
		{
			Global_16759 = iVar2;
		}
		iVar2++;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = 1;
}

int func_133(struct<6> Param0, struct<6> Param6)//Position - 0x45EE
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
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

int func_134()//Position - 0x46D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_24 == 0)
		{
			Global_16759 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18 = -1;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_24 == 0 || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_133(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_18, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18))
			{
				Global_16759 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16759 == 34)
	{
		return 0;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 0;
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
	if (func_130(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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
	func_128();
	bVar0 = true;
	if (func_127(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_96(120000);
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
		bVar0 = func_153(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_143(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(uParam4, 3))
		{
			func_142(1);
		}
		if (MISC::IS_BIT_SET(uParam4, 5))
		{
			func_141(1);
		}
		func_140();
		func_99();
		func_139();
		func_138();
		return 1;
	}
	return 0;
}

void func_138()//Position - 0x49DA
{
	Global_2452829 = 0;
}

void func_139()//Position - 0x49E7
{
	Global_1321259.f_57 = 1;
	Global_1321259.f_57.f_1 = 0;
}

void func_140()//Position - 0x49FF
{
	Global_1321259.f_40.f_9 = 1;
}

void func_141(int iParam0)//Position - 0x4A10
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2265, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2265, 0);
	}
}

void func_142(int iParam0)//Position - 0x4A31
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 20);
	}
}

int func_143(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4A54
{
	func_152(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam7);
}

int func_144(char* sParam0, int iParam1, bool bParam2)//Position - 0x4AA2
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
					func_151();
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
		if (func_150(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_149();
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
				func_78();
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
				if (func_148())
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
			if (func_147())
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
			func_146();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_145();
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
		func_151();
	}
	return 0;
}

void func_145()//Position - 0x4D6E
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

void func_146()//Position - 0x4D9F
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

int func_147()//Position - 0x4E34
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()//Position - 0x4E5B
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

void func_149()//Position - 0x4EF4
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

bool func_150(int iParam0, int iParam1)//Position - 0x4F4B
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

void func_151()//Position - 0x4F86
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

void func_152(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4FDD
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

int func_153(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5033
{
	func_152(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 1;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam7);
}

int func_154(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x5081
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_156(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_155();
		func_140();
		func_99();
		func_139();
		func_138();
		return 1;
	}
	return 0;
}

void func_155()//Position - 0x50D3
{
	Global_16710 = 0;
}

bool func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x50DF
{
	func_152(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 1;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 1;
	Global_15746 = 0;
	StringCopy(&Global_15840, sParam5, 24);
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam8);
}

int func_157(var uParam0, char* sParam1, char* sParam2)//Position - 0x5134
{
	if (func_159(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_158();
		func_99();
		func_139();
		return 1;
	}
	return 0;
}

void func_158()//Position - 0x515F
{
	Global_1321259.f_40.f_9 = 2;
}

bool func_159(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5170
{
	func_152(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_144(sParam2, iParam3, 0);
}

void func_160()//Position - 0x51BE
{
	Global_1321259.f_55 = Global_1321259.f_40.f_1;
	Global_1321259.f_55.f_1 = Global_1321259.f_40.f_10;
}

void func_161()//Position - 0x51E4
{
	Global_1321259.f_40 = 1;
}

bool func_162()//Position - 0x51F3
{
	return Global_1321259.f_40 == 1;
}

int func_163(int iParam0, int iParam1, int iParam2)//Position - 0x5203
{
	if (!func_164(iParam0))
	{
		return 0;
	}
	if (Global_1321259.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321259.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x5242
{
	if (!func_165())
	{
		return 0;
	}
	if (!Global_1321259.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_165()//Position - 0x526A
{
	if (Global_1321259.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_166(var uParam0)//Position - 0x5281
{
	if (func_169())
	{
		return 0;
	}
	if (func_73())
	{
		return 0;
	}
	if (func_75(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1683626 || func_168())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0, 6))
	{
		if (func_167())
		{
			return 0;
		}
	}
	return 1;
}

bool func_167()//Position - 0x52E5
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1335192);
}

int func_168()//Position - 0x52F9
{
	if (Global_2535381.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_169()//Position - 0x5311
{
	return func_147();
}

int func_170(int iParam0, int iParam1, int iParam2)//Position - 0x531D
{
	if (!func_73())
	{
		return 0;
	}
	return func_163(iParam0, iParam1, iParam2);
}

int func_171(char* sParam0, char* sParam1)//Position - 0x533B
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_172()//Position - 0x5355
{
	return Global_2451015.f_1;
}

int func_173()//Position - 0x5363
{
	if (Global_1321447.f_2)
	{
		return 1;
	}
	return func_174();
}

bool func_174()//Position - 0x537C
{
	return func_169();
}

void func_175(int iParam0)//Position - 0x5388
{
	Global_2453244.f_1060 = iParam0;
}

int func_176()//Position - 0x5399
{
	if (func_177("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_177("HLP_SOC1"))
	{
		return 1;
	}
	if (func_177("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_177(char* sParam0)//Position - 0x53CC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_178(var uParam0)//Position - 0x53DF
{
	uParam0->f_1 = 0;
}

int func_179(var uParam0, int iParam1, bool bParam2)//Position - 0x53EC
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_180(var uParam0)//Position - 0x544A
{
	return uParam0->f_1;
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
				if (!func_180(&uLocal_754))
				{
					func_19(&uLocal_754, 0, 0);
				}
				if (!bVar0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_69("HLP_XP1", 9000);
						func_178(&uLocal_754);
						func_19(&uLocal_754, 0, 0);
						iLocal_748++;
					}
				}
				else if (func_179(&uLocal_754, 5000, 0))
				{
					iLocal_748++;
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_69("HLP_XP2", 9000);
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
					iLocal_748++;
				}
			}
			else if (func_179(&uLocal_754, 5000, 0))
			{
				iLocal_748++;
				func_178(&uLocal_754);
				func_19(&uLocal_754, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_69("HLP_RNK1", 9000);
					func_187(1);
					Global_2446554.f_1687 = 1;
					func_186(1, 0, -1);
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
					iLocal_748++;
				}
			}
			else if (func_179(&uLocal_754, 5000, 0))
			{
				iLocal_748++;
				func_178(&uLocal_754);
				func_19(&uLocal_754, 0, 0);
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
						func_69("HLP_CASHXBX", 9000);
					}
					else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						func_69("HLP_CASHPSN", 9000);
					}
					else
					{
						func_69("HLP_CASHGEN", 9000);
					}
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
					iLocal_748 = 99;
				}
			}
			else if (func_179(&uLocal_754, 5000, 0))
			{
				iLocal_748 = 99;
				func_178(&uLocal_754);
				func_19(&uLocal_754, 0, 0);
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

void func_186(int iParam0, bool bParam1, int iParam2)//Position - 0x577F
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1327593.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1327593.f_947), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1327593.f_947), iParam0);
			}
			break;
	}
}

void func_187(int iParam0)//Position - 0x57CE
{
	Global_2446554.f_4365 = iParam0;
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
				if (!func_180(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
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
					func_357(1);
					INTERIOR::_0x9E6542F0CE8E70A3(1);
					MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 0, 0);
					NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(1);
					func_320(0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
					func_315(1, 0);
					func_307(1, 1);
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_intro")) < 1 || !func_306())
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
					func_298(14, 0);
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
						if (func_295())
						{
							STREAMING::_0x4E52E752C76E7E7A(0);
							func_290(1, 1);
							GRAPHICS::DONT_RENDER_IN_GAME_UI(0);
							HUD::CLEAR_HELP(1);
							if (!func_174())
							{
								func_289();
							}
							func_187(0);
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
						if (func_287() == 65 || func_287() == 66)
						{
							STREAMING::CLEAR_FOCUS();
							STREAMING::NEW_LOAD_SCENE_START(754.2219f, 1226.831f, 356.5081f, func_286(-14.367f, 0f, 157.3524f), 100f, 0);
							func_178(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							MISC::SET_BIT(uParam0, 4);
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_START") && (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || func_179(&(uParam0->f_17), 5000, 0)))
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
					func_69("FMIC_INTRO2", -1);
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
					func_69("FMIC_RACE1", -1);
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
					func_69("FMIC_RACE2", -1);
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
					func_69("FMIC_GAR", -1);
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
				func_69("FMIC_TENN", -1);
				CUTSCENE::START_CUTSCENE(4);
				func_232(1, 1, 1, 0);
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
					func_232(0, 1, 1, 0);
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
				func_232(1, 1, 1, 0);
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
					func_214(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
				if (!func_213(PLAYER::PLAYER_ID()))
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
					func_232(0, 1, 1, 0);
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
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						MISC::SET_BIT(uParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
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
						func_214(1);
						if (!func_213(PLAYER::PLAYER_ID()))
						{
							func_212(1);
						}
						func_232(0, 1, 1, 0);
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
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						MISC::SET_BIT(uParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
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
						if (!func_213(PLAYER::PLAYER_ID()))
						{
						}
						func_232(0, 1, 1, 0);
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
					func_30(115, 1, -1, 1);
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
					func_190(1);
					MISC::SET_BIT(uParam0, 9);
				}
			}
			else
			{
				func_190(1);
				MISC::SET_BIT(uParam0, 9);
			}
		}
	}
}

void func_190(bool bParam0)//Position - 0x8FFF
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 18))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 18);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 18))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 18);
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
			func_357(0);
		}
		func_203();
		func_198();
		func_232(0, 1, 1, 0);
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
			func_315(1, 0);
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
		func_187(1);
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
		func_298(14, 1);
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

void func_198()//Position - 0x9758
{
	func_199(0);
}

void func_199(bool bParam0)//Position - 0x9765
{
	if (bParam0)
	{
		func_202();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_75(0))
		{
			func_200(0);
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

void func_200(int iParam0)//Position - 0x97C8
{
	if (Global_14551)
	{
		func_201(0, 0);
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
	if (!func_147())
	{
		Global_14393.f_1 = 3;
	}
}

void func_201(bool bParam0, bool bParam1)//Position - 0x9838
{
	if (bParam0)
	{
		if (func_75(0))
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

void func_202()//Position - 0x98AC
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_203()//Position - 0x98D5
{
	if (!Global_1312571)
	{
		return;
	}
	func_204();
}

void func_204()//Position - 0x98EC
{
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), "", 24);
	Global_1312571.f_7 = 0;
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
			iVar1 = (iVar1 + func_209(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_208(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_208(int iParam0)//Position - 0x9A09
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x9BE8
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
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

bool func_213(int iParam0)//Position - 0x9F60
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_120, 22);
}

void func_214(bool bParam0)//Position - 0x9F79
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 4);
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
			func_7(iVar1);
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
	func_152(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_144(sParam2, iParam4, 0);
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
	STREAMING::REQUEST_MODEL(func_225());
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
	if (STREAMING::HAS_MODEL_LOADED(func_225()))
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
						uParam0->f_98[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_92[iVar0], 4, func_225(), -1, 0, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_98[iVar0], 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_92[iVar0], 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_225());
	MISC::SET_BIT(&(uParam0->f_3), 11);
	return 1;
}

int func_225()//Position - 0xA7CF
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
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
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_225());
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
				func_358(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
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

void func_232(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xAA6C
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_238(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_147())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_237(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_238(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_237(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_233(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_233(int iParam0)//Position - 0xAB3D
{
	if (func_235(iParam0, 0))
	{
		return 1;
	}
	if (func_234())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_234()//Position - 0xAB7E
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_235(int iParam0, int iParam1)//Position - 0xAB8F
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_236(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_236(int iParam0, bool bParam1)//Position - 0xABDA
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_237(int iParam0, var uParam1, var uParam2)//Position - 0xAC1B
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_238(int iParam0)//Position - 0xAC4C
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 13);
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
		return func_242();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_242()//Position - 0xAD5C
{
	return func_243(PLAYER::PLAYER_ID());
}

int func_243(int iParam0)//Position - 0xAD6C
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
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
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)//Position - 0xBC82
{
	if (func_257(uParam0, iParam1))
	{
		return func_243(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]));
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
		if (func_12(iVar2, 0, 1))
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
			if (!func_268(Var1, 0f, 0f, 0f))
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

bool func_268(struct<3> Param0, struct<3> Param3)//Position - 0xCB89
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
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
		if (STREAMING::HAS_MODEL_LOADED(func_225()))
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
							uParam0->f_98[iVar1] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_92[iVar1], 4, func_225(), -1, 0, false);
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
	if (STREAMING::HAS_MODEL_LOADED(func_225()))
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
	STREAMING::REQUEST_MODEL(func_225());
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
		STREAMING::REQUEST_MODEL(func_225());
		if ((STREAMING::HAS_MODEL_LOADED(joaat("asterope")) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(func_225()))
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
						uParam0->f_74[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_58[iVar0], 4, func_225(), -1, 0, false);
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

Vector3 func_286(struct<3> Param0)//Position - 0xE0DF
{
	return (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.x)), (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.x)), SYSTEM::SIN(Param0.x);
}

int func_287()//Position - 0xE10C
{
	return Global_1315832;
}

void func_288()//Position - 0xE118
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_289()//Position - 0xE174
{
	func_200(0);
	func_199(1);
}

void func_290(bool bParam0, int iParam1)//Position - 0xE186
{
	func_294();
	func_292(1);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	func_232(1, 1, 1, 0);
	func_291();
	func_186(12, 1, -1);
	func_187(0);
	CAM::SET_WIDESCREEN_BORDERS(1, -1);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_292(1);
	func_238(1);
	Global_2422140.f_3033 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(1, iParam1);
		}
	}
}

void func_291()//Position - 0xE1EF
{
	func_187(0);
	func_186(4, 1, -1);
	func_186(6, 1, -1);
	func_186(7, 1, -1);
	func_186(3, 1, -1);
	func_186(1, 1, -1);
	func_186(2, 1, -1);
	func_186(11, 1, -1);
	func_186(13, 1, -1);
	func_186(14, 1, -1);
	func_186(16, 1, -1);
}

void func_292(int iParam0)//Position - 0xE246
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_96008)
	{
		HUD::CLEAR_FLOATING_HELP(iVar0, iParam0);
		func_293(iVar0);
		iVar0++;
	}
}

void func_293(int iParam0)//Position - 0xE274
{
	Global_96008[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_96008[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_96008[iParam0 /*28*/].f_4), "", 64);
	Global_96008[iParam0 /*28*/].f_23 = 0;
	Global_96008[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_96008[iParam0 /*28*/].f_27 = 0;
	Global_96008[iParam0 /*28*/].f_20 = 0;
	Global_96008[iParam0 /*28*/].f_22 = 0;
}

void func_294()//Position - 0xE2DE
{
	Global_1312571 = 1;
	StringCopy(&(Global_1312571.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_1312571.f_7 = MISC::GET_HASH_KEY(&(Global_1312571.f_1));
}

int func_295()//Position - 0xE307
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_297(0);
		GRAPHICS::DISABLE_SCREENBLUR_FADE();
		return 1;
	}
	if (func_296() == 3)
	{
		func_297(2);
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() >= 250f)
	{
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING() == 0)
	{
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() <= 0f)
	{
		func_297(0);
		return 1;
	}
	return 0;
}

int func_296()//Position - 0xE376
{
	return Global_1312467.f_19;
}

void func_297(int iParam0)//Position - 0xE384
{
	if (Global_1312467.f_19 != iParam0)
	{
		Global_1312467.f_19 = iParam0;
	}
}

void func_298(int iParam0, bool bParam1)//Position - 0xE39F
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_302(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_301(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_299(iParam0))
			{
				func_301(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_299(int iParam0)//Position - 0xE42A
{
	struct<2> Var0;
	
	Var0 = { func_300(iParam0) };
	if (MISC::IS_BIT_SET(Global_30782[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_300(var uParam0)//Position - 0xE453
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 2)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_301(int iParam0, bool bParam1)//Position - 0xE4A5
{
	struct<2> Var0;
	
	Var0 = { func_300(iParam0) };
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_30782[Var0.f_1]), Var0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_30782[Var0.f_1]), Var0);
	}
}

var func_302(int iParam0, int iParam1)//Position - 0xE4DD
{
	struct<5> Var0;
	
	Var0 = { func_303(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_303(int iParam0)//Position - 0xE502
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_304(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_304(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_304(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_304(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_304(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_304(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_304(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1048995[34 /*1425*/].f_146.f_1041 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_304(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_304(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_304(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_304(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_304(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_304(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_304(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_304(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_304(43) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_304(int iParam0)//Position - 0xEDC1
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_305()//Position - 0xF23F
{
	return Global_2435882;
}

bool func_306()//Position - 0xF24B
{
	return Global_2435236;
}

void func_307(bool bParam0, bool bParam1)//Position - 0xF257
{
	if (bParam1)
	{
		func_311(bParam0);
	}
	func_309(0);
	func_308(66);
}

void func_308(int iParam0)//Position - 0xF275
{
	var uVar0;
	
	uVar0 = func_287();
	Global_1315832 = iParam0;
}

void func_309(int iParam0)//Position - 0xF289
{
	var uVar0;
	
	uVar0 = func_310();
	Global_1315831 = iParam0;
}

var func_310()//Position - 0xF29D
{
	return Global_1315831;
}

void func_311(bool bParam0)//Position - 0xF2A9
{
	int iVar0;
	
	func_313(&Global_17018);
	GRAPHICS::DONT_RENDER_IN_GAME_UI(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			func_312(0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_1318685))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1318685, 0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1318685))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1318685, 0, 0);
					}
					PED::DELETE_PED(&Global_1318685);
				}
			}
		}
	}
}

void func_312(int iParam0)//Position - 0xF30C
{
	if (iParam0 == 0)
	{
		Global_2437057 = 0;
	}
	Global_1312467.f_18 = iParam0;
}

void func_313(var uParam0)//Position - 0xF327
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_9))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
		{
			func_314(0);
		}
		CAM::DESTROY_CAM(uParam0->f_9, 0);
	}
	if (!Global_35923)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
		CAM::_0x487A82C650EB7799(0f);
		CAM::_0x0225778816FDC28C(0f);
	}
	Global_2404548.f_481 = 0f;
	CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
}

void func_314(int iParam0)//Position - 0xF399
{
	Global_17096 = iParam0;
}

void func_315(bool bParam0, int iParam1)//Position - 0xF3A6
{
	if (bParam0)
	{
		func_319(1);
	}
	else
	{
		func_316(iParam1);
	}
}

void func_316(int iParam0)//Position - 0xF3C1
{
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
		{
			return;
		}
	}
	if (func_318() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_317(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
	}
}

void func_317(int iParam0)//Position - 0xF3FE
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_318()//Position - 0xF419
{
	return Global_1312467.f_20;
}

void func_319(int iParam0)//Position - 0xF427
{
	if ((func_318() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_317(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
	}
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
	
	func_289();
	func_199(1);
	func_187(1);
	func_186(12, 1, -1);
	func_328();
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
		if (!func_326())
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
				if (!func_325(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
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
				func_324();
				func_323();
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
				if (!func_325(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
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

void func_323()//Position - 0xF8DF
{
	struct<2> Var0;
	
	Global_2422140.f_676 = 0;
	Global_2422140.f_677 = 0;
	Global_2422140.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404548.f_1376 = { Var0 };
}

void func_324()//Position - 0xF91C
{
	Global_2404548.f_538 = 0;
	Global_2404548.f_1417 = 0;
	Global_2404548.f_420 = 0;
	Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 0;
}

int func_325(int iParam0)//Position - 0xF949
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_326()//Position - 0xF97A
{
	if (func_327() == 0)
	{
		return 1;
	}
	return 0;
}

int func_327()//Position - 0xF98F
{
	return Global_1312467.f_18;
}

void func_328()//Position - 0xF99D
{
	Global_17098.f_5 = 1;
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
										func_335("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_335("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_334("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("artdir", "AARON GARBUT", 210f, "|", 1);
									func_332("artdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -3390))
							{
								func_331("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 33, -2940))
								{
									func_335("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_334("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_332("techdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -450))
							{
								func_331("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_335("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_334("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_332("assartdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_331("assartdir", 0f);
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
										func_335("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_335("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_334("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_332("asstecdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -4740))
							{
								func_331("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 36, -3810))
								{
									func_335("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_334("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_332("leadprog", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -600))
							{
								func_331("leadprog", 0.16f);
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
										func_335("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_335("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_334("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_332("senprog", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 37, -1350))
							{
								func_331("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_335("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_334("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_332("prog", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -4320))
							{
								func_331("prog", 0.16f);
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
										func_335("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_335("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_334("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_332("socclub", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -870))
							{
								func_331("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_335("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_334("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_332("audio", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 39, -1620))
							{
								func_331("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_335("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_334("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_332("scrlead", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 40, -1470))
							{
								func_331("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_335("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_332("script1", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 41, -1200))
							{
								func_331("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_335("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_332("script2", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 42, -1320))
							{
								func_331("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_335("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_334("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_334("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_332("visdes", 0.05f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 43, -1320))
							{
								func_331("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_335("uides", 40f, 20f, "right", 0f, 0.3f);
									func_334("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_332("uides", 0f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 45, -1650))
							{
								func_331("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_335("concre", 0f, 20f, "left", 0f, 0.3f);
									func_334("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_333("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_332("concre", 0f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 46, -1950))
							{
								func_331("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_335("devass", 0f, 400f, "right", 0f, 0f);
									func_334("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_332("devass", 0f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_331("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_335("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_334("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_334("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_332("qasup", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 48, -1320))
							{
								func_331("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_335("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_334("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_332("senta", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -5070))
							{
								func_331("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!MISC::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 49, -3750))
								{
									func_335("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_334("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_332("asspro", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -720))
							{
								func_331("asspro", 0.16f);
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
										func_335("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_334("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_333("animdir", "ROB NELSON", 200f, "|", 1);
										func_332("animdir", 0.16f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_335("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_334("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("animdir", "ROB NELSON", 90f, "|", 1);
									func_332("animdir", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6123)
								{
									func_331("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 1898)
							{
								func_331("animdir", 0.16f);
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
										func_335("producer", 65f, 55f, "right", 0f, 0f);
										func_334("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_333("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_332("producer", 0f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2452)
								{
									func_335("producer", 0f, 100f, "left", 0.3f, 0f);
									func_334("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_332("producer", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
								{
									func_331("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
							{
								func_331("producer", 0f);
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
										func_335("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_332("vpcre", 0.16f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6921)
								{
									func_335("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_332("vpcre", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 16955)
								{
									func_331("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 10513)
							{
								func_331("vpcre", 0.16f);
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
										func_335("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_334("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_333("execpro", "SAM HOUSER", 165f, "|", 1);
										func_332("execpro", 0.16f);
										MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 12358)
								{
									Global_1684031 = 0;
									func_335("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_334("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("execpro", "SAM HOUSER", 190f, "|", 1);
									func_332("execpro", 0.16f);
									MISC::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 21785)
								{
									func_331("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 15333)
							{
								func_331("execpro", 0.16f);
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

void func_331(char* sParam0, float fParam1)//Position - 0x10DE9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1684029, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_332(char* sParam0, float fParam1)//Position - 0x10E1A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1684029, "SHOW_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
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

void func_335(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)//Position - 0x10F01
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1684029, "SETUP_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
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
						if (func_352(Local_561.f_3))
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
				if (func_352(Local_561.f_3))
				{
					if (!func_350(Local_561.f_4))
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
						if (!func_107())
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
				if (!func_350(Local_561.f_4))
				{
					if (!MISC::IS_BIT_SET(uLocal_744, 29))
					{
						if (func_352(Local_561.f_3))
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
						func_32("HLP_TAXI", -1);
						if (func_50())
						{
							func_43(-1834046564, 200, &uVar0, 0, 0);
						}
						else
						{
							func_340(-200, 0);
							MONEY::NETWORK_SPENT_TAXI(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_350(Local_561.f_4))
				{
					if (func_352(Local_561.f_3))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_561.f_4), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_561.f_4), -258271821) != 0)
						{
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_561.f_4), 1);
							TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_561.f_4), NETWORK::NET_TO_VEH(Local_561.f_3), 12f, 786599);
							func_339(&(Local_561.f_3));
							func_339(&(Local_561.f_4));
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
				if (!func_180(&uLocal_394))
				{
					func_198();
					func_19(&uLocal_394, 0, 0);
				}
				else if (func_179(&uLocal_394, 5000, 0))
				{
					if (func_159(&uLocal_568, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
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
				if (func_159(&uLocal_568, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					MISC::SET_BIT(&uLocal_744, 30);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
		{
			func_338();
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

void func_338()//Position - 0x11552
{
	Global_2454318.f_258 = 1;
}

void func_339(var uParam0)//Position - 0x11562
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

void func_340(int iParam0, int iParam1)//Position - 0x11586
{
	func_342(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_341(iParam0, 0);
	}
}

void func_341(int iParam0, bool bParam1)//Position - 0x115A4
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_342(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x115B5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_4 = iVar1;
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 = (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_341(iVar1, 0);
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
			func_349(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_348())
	{
		if (func_347(PLAYER::PLAYER_ID(), 1))
		{
			if (((bParam9 && func_12(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 1)
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2422140.f_682) < func_346())
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
			func_345();
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
			func_349(bParam6, bParam9);
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
				func_349(bParam6, bParam9);
				return 1;
			}
		}
		if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_349(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_345()//Position - 0x11A98
{
	Global_2404548.f_1375 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
}

int func_346()//Position - 0x11AAB
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	return 1000;
}

int func_347(int iParam0, bool bParam1)//Position - 0x11AC3
{
	if (Global_2414009[iParam0 /*254*/].f_219 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2414009[iParam0 /*254*/].f_219 == 11)
		{
			return 0;
		}
	}
	return 1;
}

bool func_348()//Position - 0x11AF7
{
	return Global_1315874;
}

void func_349(bool bParam0, bool bParam1)//Position - 0x11B03
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_323();
}

int func_350(var uParam0)//Position - 0x11B4D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
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

int func_352(var uParam0)//Position - 0x11BCF
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_353(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_353(var uParam0)//Position - 0x11BEF
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
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

void func_354(int iParam0, bool bParam1)//Position - 0x11C27
{
	if (bParam1)
	{
		if (!func_23(iParam0, 8, 0))
		{
			func_58(iParam0, 8, 0);
			func_355(iParam0);
		}
	}
	else if (func_23(iParam0, 8, 0))
	{
		func_56(iParam0, 8, 0);
		func_355(iParam0);
	}
}

void func_355(int iParam0)//Position - 0x11C6E
{
	Global_90014.f_153[iParam0] = 1;
	Global_90014.f_152 = 1;
}

void func_356(int iParam0, bool bParam1)//Position - 0x11C88
{
	if (bParam1)
	{
		Global_90014.f_9[iParam0] = 1;
	}
	else
	{
		Global_90014.f_9[iParam0] = 0;
	}
}

void func_357(bool bParam0)//Position - 0x11CAE
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90014.f_8 = 1;
	}
	else
	{
		Global_90014.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_355(iVar0);
		iVar0++;
	}
}

void func_358(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x11CE5
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

int func_359()//Position - 0x11D80
{
	return Local_561;
}

int func_360()//Position - 0x11D8B
{
	return 1;
}

int func_361(int iParam0)//Position - 0x11D94
{
	return Local_733[iParam0 /*5*/];
}

int func_362(int iParam0)//Position - 0x11DA3
{
	return Local_733[iParam0 /*5*/].f_2;
}

int func_363(bool bParam0)//Position - 0x11DB4
{
	if (func_365())
	{
		if (bParam0)
		{
			if (!Global_1573682 && !func_364(PLAYER::PLAYER_ID(), 2))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
				func_315(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_364(int iParam0, int iParam1)//Position - 0x11DF4
{
	return MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

bool func_365()//Position - 0x11E0C
{
	return Global_2422140.f_2;
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
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_617(1);
				bVar0 = true;
			}
		}
		else if (MISC::IS_BIT_SET(Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
		{
			if (!MISC::IS_BIT_SET(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
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
	func_611(iLocal_86, 0);
	func_178(&(Global_2422140.f_3280));
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
	func_357(0);
	func_356(4, 0);
	func_356(1, 0);
	func_356(0, 0);
	func_356(2, 0);
	func_356(3, 0);
	func_354(iLocal_86, 0);
	func_343();
	func_33();
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
	func_367(Local_561.f_5);
}

void func_367(struct<2> Param0)//Position - 0x1203F
{
	if (Param0.f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Param0)) >= 1000)
		{
			NETWORK::NETWORK_SET_MISSION_FINISHED();
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
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
	func_610();
	func_606();
	PAD::_0xA0CEFCEA390AAB9B(0);
	Global_971496 = 0;
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(0);
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1573549 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_605(0);
	Global_1573538 = 0;
	Global_1573537 = 0;
	Global_1573558 = 0;
	Global_1573700 = 0;
	Global_1573706 = 0;
	Global_1573282 = 0;
	Global_1574148 = 1;
	Global_1573673 = 0;
	Global_1573550 = -1;
	func_604();
	func_603(0);
	MISC::CLEAR_BIT(&(Global_2359301.f_1), 5);
	func_602();
	func_601();
	func_600();
	func_599();
	func_598();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_597();
	}
	if (func_596())
	{
		func_595();
		func_594(1, 1, 1);
		func_593();
		func_592();
		if (iVar0 != -1)
		{
			Global_1600133[iVar0 /*32*/].f_22 = 0;
			Global_1600133[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_591();
	if (Global_1602437 != 6)
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
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
		if (func_590(PLAYER::PLAYER_ID()) || func_589(PLAYER::PLAYER_ID()))
		{
			Global_1572908 = 1;
		}
	}
	func_587();
	if (func_586())
	{
		func_585();
	}
	func_584();
	Global_1602437.f_57334 = 0;
	Global_1675360.f_4 = 0;
	PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), 1);
	StringCopy(&(Global_1602437.f_56685), "", 32);
	HUD::THEFEED_HIDE_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	if (bParam3 && !func_583())
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
	if (func_365() || (iVar0 != -1 && Global_1582596[iVar0 /*324*/].f_303))
	{
		func_582();
		func_581(1, 1);
		func_594(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1600133[iVar0 /*32*/].f_22 = 0;
			Global_1600133[iVar0 /*32*/].f_22.f_1 = 0;
		}
		func_580(1);
		if (func_579())
		{
			func_578();
		}
		if (!func_15(PLAYER::PLAYER_ID()))
		{
			func_576(4);
		}
		func_593();
		func_575(0);
		func_574();
		Global_1574141 = 0;
	}
	if (!func_573())
	{
		func_572();
		if (func_571())
		{
			if (func_570())
			{
				func_582();
			}
		}
		func_580(1);
		if (!func_569())
		{
			Global_2428891.f_5533 = 0;
			Global_2428891.f_5534 = 0;
			Global_2428891.f_5532 = 0;
			Global_2428891.f_5531 = 0;
		}
	}
	else
	{
		func_568(PLAYER::PLAYER_ID(), 0);
	}
	func_567((Global_1675400.f_9 != 4 && !func_573()));
	if (func_569())
	{
		Global_2428891.f_5622 = 1;
	}
	else
	{
		Global_2428891.f_5622 = 0;
	}
	if (!func_566())
	{
		Global_1675425.f_1121 = 0;
	}
	if (!func_573() && !func_566())
	{
		func_581(1, Global_1675400.f_9 != 4);
		func_594(1, 1, 0);
		func_565(0);
		func_564();
		Global_1574143 = 0;
		if (iVar0 != -1)
		{
			Global_1600133[iVar0 /*32*/].f_22 = 0;
			Global_1600133[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_561(1, -1);
	if (func_560())
	{
		func_559();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::_0x9465E683B12D3F6B();
	}
	if (!func_583() && !func_573())
	{
		func_555();
	}
	Global_1602437.f_57330 = 0;
	func_554();
	Global_1573531 = -1;
	Global_1600025 = -1;
	Global_1600019 = -1;
	Global_1600021 = -1;
	Global_1573536 = 0;
	Global_1600020 = 0;
	Global_1573684 = 0;
	Global_1573676 = 0;
	Global_1600026 = 0;
	func_553(0);
	func_552();
	Global_1582596[iVar0 /*324*/].f_303 = 0;
	Global_1600017 = 0f;
	Global_1600018 = 0f;
	Global_1573685 = 0;
	Global_1573686 = -1;
	Global_971738 = 0;
	Global_1573674 = 0;
	Global_1573283 = 0;
	func_551();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	func_550(1);
	if (func_549())
	{
		func_548();
	}
	if (func_547())
	{
		if (func_545(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < 2)
			{
				func_544();
				func_543(1);
			}
			else
			{
				func_542();
			}
			if (Global_1675400.f_9 != -1)
			{
				func_541();
			}
		}
		else if (Global_1582596[PLAYER::PLAYER_ID() /*324*/] == 0)
		{
			if (Global_1675400.f_9 != -1)
			{
				func_541();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1582596[iVar0 /*324*/].f_167 = 0;
	if (bVar4 && !func_566())
	{
		func_540();
	}
	if (!bVar4)
	{
		func_539(0);
	}
	if ((func_538() != 35 && func_538() != 34) && !func_537())
	{
		Global_1572864 = { 0f, 0f, 0f };
	}
	func_536();
	func_535();
	func_543(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1675400.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_534())
		{
			func_533(0, iVar6);
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
					func_531();
					func_530();
				}
				break;
			
			case 6:
				Global_1574141 = 0;
				if (!bVar4)
				{
					func_531();
				}
				func_530();
				Global_1675400 = 0;
				Global_1675400.f_22 = { 0f, 0f, 0f };
				Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 0;
				StringCopy(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_213), "", 24);
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_210 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_529(0);
				if (!func_528())
				{
					func_527(Global_1675400.f_16);
				}
				iVar5 = Global_1582596[iVar0 /*324*/].f_11;
				if (iVar5 != func_123())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2428891.f_5243 = { func_71(iVar5) };
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
				if ((iVar7 && func_528()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2428891.f_5243 = { func_526() };
				}
				if (Global_1602437.f_18 > 1)
				{
					func_525(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_28);
				}
				break;
			
			case 3:
				func_529(0);
				iVar2 = 1;
				func_524();
				iVar5 = Global_1582596[iVar0 /*324*/].f_11;
				if (iVar5 != func_123())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2428891.f_5243 = { func_71(iVar5) };
					}
				}
				if (Global_1602437.f_18 > 1)
				{
					func_525(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_28);
				}
				break;
			
			case 4:
				func_529(0);
				iVar2 = 1;
				if (func_523())
				{
					func_522();
				}
				else
				{
					Global_2428891.f_5533 = 0;
					Global_2428891.f_5534 = 0;
					Global_2428891.f_5532 = 0;
					Global_2428891.f_5531 = 0;
				}
				if (func_590(PLAYER::PLAYER_ID()) || func_589(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				if (!MISC::IS_BIT_SET(Global_1602437.f_10, 22))
				{
					if (!MISC::IS_BIT_SET(Global_1602437.f_10, 15))
					{
						func_521(Global_1602437.f_57306);
					}
					else
					{
						func_520(Global_1602437.f_71752, Global_1602437.f_71753);
					}
					if (Global_1675400.f_13 > -1)
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1675400.f_13, Global_1675400.f_14, 0);
					}
					else if (func_519() > -1)
					{
						func_518(func_519(), 0);
					}
				}
				if (func_517())
				{
					Var8 = { func_516() };
					func_515(Var8);
					if (func_514() != -1)
					{
						Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_28 = func_514();
					}
					func_513();
					func_512();
				}
				else
				{
					func_524();
				}
				break;
			
			case 5:
				func_529(0);
				iVar2 = 1;
				func_524();
				break;
			
			case 8:
				if (!func_528())
				{
					func_527(Global_1675400.f_16);
				}
				break;
			
			case 9:
				func_529(0);
				iVar2 = 1;
				func_524();
				break;
			
			case 10:
				func_495(10, 0f, 0f, 0f, Var14);
				func_494();
				break;
		}
	}
	else
	{
		Global_1574141 = 0;
	}
	if (iVar2 || func_589(PLAYER::PLAYER_ID()))
	{
		if ((func_493(PLAYER::PLAYER_ID()) || func_590(PLAYER::PLAYER_ID())) || func_589(PLAYER::PLAYER_ID()))
		{
			if (Global_1684010 > 0)
			{
				Global_2428891.f_1.f_2823.f_13 = Global_1684010;
				Global_2428891.f_1.f_2823 = { Global_1684010.f_1 };
			}
		}
		else
		{
			func_492();
		}
	}
	Global_2428891.f_1.f_840 = 0;
	MISC::CLEAR_BIT(&Global_1573287, 0);
	func_491(0);
	Global_1573541 = 0;
	Global_1573669 = -1;
	Global_1599948 = 0;
	Global_1312438 = 0;
	Global_1675400.f_1 = 0;
	Global_1675400.f_2 = 0;
	if (func_490() == 0)
	{
		if (Global_1675400.f_9 == -1 && bVar4 == 0)
		{
			func_482(0);
		}
		else
		{
			Global_1675400.f_9 = -1;
		}
	}
	func_481();
	if (func_480())
	{
		func_479();
	}
	if (func_478())
	{
		func_477();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(1);
	}
	if (func_490() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if ((((!func_476(Global_1582596[iVar0 /*324*/]) && !func_583()) && !bVar4) && !func_348()) && !func_573())
			{
				func_475(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_474();
	Global_1675400.f_1 = 0;
	if (!func_547())
	{
		func_473();
	}
	if (Global_1582596[iVar0 /*324*/] != -1)
	{
		iParam2 = iParam2;
		if (func_472(Global_1582596[iVar0 /*324*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar20 = func_459();
				func_456(1199, -1);
				func_451(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_451(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(PLAYER::PLAYER_ID());
	}
	func_449();
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
		func_475(0);
		Global_1582596[iVar0 /*324*/].f_12 = 1;
		Global_1582596[iVar0 /*324*/].f_11 = func_448(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(0);
		func_445(0, 0, 1);
		if (func_444())
		{
			func_442();
		}
	}
	if ((Global_1582596[iVar0 /*324*/] < 10 && Global_1582596[iVar0 /*324*/] != -1) && !func_348())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1582596[iVar0 /*324*/].f_121)) && Global_1582596[iVar0 /*324*/] != 5)
		{
			func_439(&(Global_1582596[iVar0 /*324*/].f_121));
		}
	}
	Global_1582596[iVar0 /*324*/] = -1;
	Global_1582596[iVar0 /*324*/].f_31.f_2 = -1;
	Global_1582596[iVar0 /*324*/].f_31.f_16 = -1;
	Global_1582596[iVar0 /*324*/].f_31.f_1 = -1;
	Global_1602437 = 0;
	if (!bVar4)
	{
		func_438(0);
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
		func_437();
	}
	StringCopy(&(Global_1592965[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1582596[iVar0 /*324*/].f_141), sVar21, 64);
	Global_1600133[iVar0 /*32*/].f_19 = { Var22 };
	Global_1573679 = 0;
	Global_1573680 = 0;
	Global_1573295 = -1;
	Global_1675347 = 1;
	bVar24 = false;
	func_436();
	func_435();
	func_434();
	if (func_433())
	{
		func_432();
	}
	if (func_431() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_430();
		func_322(PLAYER::PLAYER_ID(), 0, 57348, 1);
	}
	if (func_429())
	{
		func_428();
	}
	else if (func_427())
	{
		func_428();
	}
	else if (func_426())
	{
		func_428();
	}
	else if (func_425())
	{
		func_428();
	}
	else if (func_424())
	{
		func_428();
	}
	else if (func_490())
	{
		func_428();
	}
	else if (func_423() && func_422())
	{
		func_428();
	}
	else if (func_421())
	{
		func_428();
	}
	else
	{
		func_420();
		if (!Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 && !func_566())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (func_444())
				{
					func_419();
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						Global_2428891.f_2841.f_195 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					}
					func_418();
					func_593();
					func_417(6);
					func_530();
					if (bVar4)
					{
						func_575(0);
					}
				}
				func_416();
				func_415();
				func_414();
				if (Global_2428891.f_2841.f_4 == 2)
				{
					Global_2428891.f_2841.f_4 = 1;
				}
				if (func_235(PLAYER::PLAYER_ID(), 0))
				{
					func_413();
				}
				func_412();
				Global_2428891.f_2841 = 0;
			}
			else
			{
				func_411();
				func_428();
			}
		}
		else
		{
			if (!func_569() && !func_566())
			{
			}
			func_411();
			func_428();
		}
	}
	if ((((((((((!func_429() && !func_410()) && !func_422()) && !func_423()) && !func_426()) && !func_427()) && !func_409()) && !func_424()) && !func_490()) && !func_425()) && !func_408())
	{
		if (!func_407())
		{
			func_406();
			func_404();
			func_403();
			func_401(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				if (!func_400())
				{
					if (!bVar24)
					{
						if (func_15(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::_0x4D953DF78EBF8158();
						}
					}
				}
			}
		}
	}
	if (!func_348())
	{
		StringCopy(&(Global_1602437.f_56700), "", 64);
	}
	if (!func_566())
	{
		func_392();
	}
	func_391();
	if (!func_573() && !func_569())
	{
		func_390();
	}
	func_370(bParam3);
}

void func_370(bool bParam0)//Position - 0x12EC4
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_547())
		{
		}
		else if ((((!func_573() && !func_569()) && !func_566()) && Global_1675400.f_9 != 9) && Global_1675400.f_9 != 4)
		{
			func_518(0, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	func_389();
	func_388(1);
	if ((((bParam0 && !func_387()) && !func_573()) && !Global_262145.f_4825) && !func_385())
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	func_377(&uVar0, -1);
	if ((func_28() == 0 && !func_107()) && !func_573())
	{
		if (func_376())
		{
			func_375();
		}
		else
		{
			func_372(28, 0);
		}
	}
	func_371(0);
}

void func_371(int iParam0)//Position - 0x12FA9
{
	if (!Global_1683611 == iParam0)
	{
		Global_1683611 = iParam0;
	}
}

void func_372(int iParam0, int iParam1)//Position - 0x12FC2
{
	int iVar0;
	
	if (func_374(iParam0, iParam1))
	{
		iVar0 = func_373();
		Global_2435149[iVar0] = iParam0;
	}
}

int func_373()//Position - 0x12FE5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435149[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_374(int iParam0, var uParam1)//Position - 0x1301A
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_375()//Position - 0x130A0
{
	MISC::SET_BIT(&(Global_964222.f_8), 22);
}

bool func_376()//Position - 0x130B4
{
	return MISC::IS_BIT_SET(Global_964222.f_8, 21);
}

void func_377(var uParam0, int iParam1)//Position - 0x130C8
{
	func_383(uParam0, iParam1);
	func_378(iParam1);
}

void func_378(int iParam0)//Position - 0x130DE
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	uVar0 = func_382(iParam0);
	uVar1 = MISC::GET_PROFILE_SETTING(uVar0);
	if (func_379())
	{
		if (MISC::IS_BIT_SET(uVar1, 1))
		{
			func_30(133, 1, -1, 1);
		}
	}
}

int func_379()//Position - 0x1311C
{
	if (func_381() && func_380(0))
	{
		return 1;
	}
	return 0;
}

var func_380(int iParam0)//Position - 0x1313A
{
	return Global_1312369[iParam0];
}

var func_381()//Position - 0x1314A
{
	return func_380(func_26() + 1);
}

int func_382(int iParam0)//Position - 0x1315C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_383(var uParam0, int iParam1)//Position - 0x131BF
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	uVar1 = func_384(iParam1);
	uVar2 = MISC::GET_PROFILE_SETTING(uVar1);
	if (MISC::IS_BIT_SET(uVar2, 1))
	{
		func_456(1194, iParam1);
		func_451(joaat("mpply_dm_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 1);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 2))
	{
		func_456(1196, iParam1);
		func_451(joaat("mpply_race_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 2);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 3))
	{
		func_456(1106, iParam1);
		func_451(joaat("mpply_mc_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 3);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 4))
	{
		func_456(1198, iParam1);
		func_451(joaat("mpply_mgame_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 4);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 5))
	{
		func_456(1909, iParam1);
		func_451(joaat("mpply_cap_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 5);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 6))
	{
		func_456(1911, iParam1);
		func_451(joaat("mpply_sur_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 6);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 7))
	{
		func_456(1913, iParam1);
		func_451(joaat("mpply_lts_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 7);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 8))
	{
		func_456(1915, iParam1);
		func_451(joaat("mpply_para_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 8);
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uVar2, 9))
	{
		func_456(2638, iParam1);
		func_451(joaat("mpply_heist_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&uVar2, 9);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		STATS::_0x723C1CE13FBFDB67(uVar2, iParam1);
	}
}

int func_384(int iParam0)//Position - 0x133B1
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_385()//Position - 0x13414
{
	if (func_590(PLAYER::PLAYER_ID()) || func_589(PLAYER::PLAYER_ID()))
	{
		if (func_386() || func_569())
		{
			return 1;
		}
	}
	return 0;
}

bool func_386()//Position - 0x1344B
{
	return MISC::IS_BIT_SET(Global_1315806, 4);
}

bool func_387()//Position - 0x1345C
{
	return Global_1573682;
}

void func_388(int iParam0)//Position - 0x13468
{
	Global_2428891.f_5530 = iParam0;
}

void func_389()//Position - 0x13479
{
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(1);
}

void func_390()//Position - 0x13490
{
	Global_2428131.f_26.f_39 = 0;
}

void func_391()//Position - 0x134A1
{
	Global_1675400.f_6 = 0;
}

void func_392()//Position - 0x134B0
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_398(func_399(), Var0))
	{
		Var3 = 201;
		Var3.f_1 = PLAYER::PLAYER_ID();
		iVar5 = func_397(1, 1);
		if (!iVar5 == 0)
		{
			func_394();
			func_393(0);
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var3, 2, iVar5);
		}
	}
}

void func_393(int iParam0)//Position - 0x134FA
{
	if (iParam0 == 1)
	{
		Global_2422140.f_3028 = NETWORK::GET_NETWORK_TIME();
	}
	Global_2422140.f_2912 = iParam0;
}

void func_394()//Position - 0x1351C
{
	func_396();
	func_395();
}

void func_395()//Position - 0x1352C
{
	struct<72> Var0;
	
	if (func_53(PLAYER::PLAYER_ID()))
	{
		Var0.f_6 = 32;
		Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_121 = { Var0 };
	}
}

void func_396()//Position - 0x1355D
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2422140.f_2912.f_79 };
	Var0.f_95 = { Global_2422140.f_2912.f_95 };
	Global_2422140.f_2912 = { Var0 };
}

var func_397(int iParam0, bool bParam1)//Position - 0x135AA
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_235(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_398(struct<3> Param0, struct<3> Param3)//Position - 0x1360F
{
	if ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_399()//Position - 0x13640
{
	return Global_2413257[PLAYER::PLAYER_ID() /*10*/];
}

bool func_400()//Position - 0x13654
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 18);
}

void func_401(bool bParam0)//Position - 0x1366F
{
	struct<57> Var0;
	int iVar57;
	
	Global_2428891.f_1.f_2796 = 0;
	Global_2428891.f_1.f_2797 = 0;
	Global_2428891.f_1.f_2819 = 0;
	Global_2428891.f_1.f_2803 = 0;
	Global_2428891.f_1.f_2804 = 0;
	Global_2428891.f_1.f_2807 = 0;
	Global_2428891.f_1.f_2808 = 0;
	Global_2428891.f_1.f_2806 = -1;
	Global_2428891.f_1.f_2809 = -1;
	Global_2428891.f_1.f_2811 = 0;
	Global_2428891.f_1.f_2812 = 0;
	Global_2428891.f_1.f_2813 = 0;
	Global_2428891.f_1.f_2814 = 0;
	Global_2428891.f_1.f_2815 = 0;
	Global_2428891.f_1.f_2816 = 0;
	Global_2428891.f_1.f_2820 = -1;
	if (bParam0)
	{
		Global_2428891.f_1.f_2817 = -1;
		Global_2428891.f_1.f_2818 = -1;
	}
	Global_2428891.f_1.f_2839 = 0;
	func_402();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2428891.f_1.f_843[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2425447.f_20 = -1;
}

void func_402()//Position - 0x1377F
{
	Global_2425447.f_19 = 0;
}

void func_403()//Position - 0x1378E
{
	Global_2428131.f_565 = 0;
}

void func_404()//Position - 0x1379E
{
	Global_2428131.f_566 = 0;
	func_405();
}

void func_405()//Position - 0x137B2
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 >= 0)
	{
		MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_76.f_32), 6);
	}
}

void func_406()//Position - 0x137D8
{
	Global_2428131 = 0;
	Global_2428131.f_2 = 0;
}

bool func_407()//Position - 0x137EC
{
	return Global_2428131.f_565;
}

bool func_408()//Position - 0x137FB
{
	return Global_1684001;
}

bool func_409()//Position - 0x13807
{
	return MISC::IS_BIT_SET(Global_2428131, 1);
}

bool func_410()//Position - 0x13818
{
	return MISC::IS_BIT_SET(Global_2428131, 16);
}

void func_411()//Position - 0x1382A
{
	MISC::CLEAR_BIT(&Global_2428131, 21);
}

void func_412()//Position - 0x1383C
{
	Global_2428891.f_2841.f_34 = 1;
}

void func_413()//Position - 0x1384E
{
	Global_2428891.f_1.f_2822 = 1;
}

void func_414()//Position - 0x13860
{
	Global_2428131.f_698 = 1;
}

void func_415()//Position - 0x13870
{
	Global_2428891.f_1.f_2821 = 1;
}

void func_416()//Position - 0x13882
{
	MISC::SET_BIT(&Global_2428131, 21);
}

void func_417(int iParam0)//Position - 0x13894
{
	Global_2428891.f_1.f_836 = iParam0;
	Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_209 = iParam0;
}

void func_418()//Position - 0x138B5
{
	struct<24> Var0;
	
	Var0 = 18;
	Var0.f_20 = -1;
	Global_2425471 = { Var0 };
}

void func_419()//Position - 0x138D7
{
	Global_2428891.f_2841.f_1 = 1;
}

void func_420()//Position - 0x138E9
{
	Global_2428891.f_2841.f_1 = 0;
}

bool func_421()//Position - 0x138FB
{
	return Global_2428131.f_590;
}

bool func_422()//Position - 0x1390A
{
	return Global_2428131.f_580;
}

bool func_423()//Position - 0x13919
{
	return Global_2428131.f_567;
}

bool func_424()//Position - 0x13928
{
	return Global_2428131.f_576;
}

bool func_425()//Position - 0x13937
{
	return MISC::IS_BIT_SET(Global_2428131.f_2, 15);
}

bool func_426()//Position - 0x1394B
{
	return MISC::IS_BIT_SET(Global_2428131, 20);
}

bool func_427()//Position - 0x1395D
{
	return MISC::IS_BIT_SET(Global_2428131, 2);
}

void func_428()//Position - 0x1396E
{
	Global_2428891.f_2841.f_34 = 0;
}

bool func_429()//Position - 0x13980
{
	return MISC::IS_BIT_SET(Global_964222.f_8, 8);
}

void func_430()//Position - 0x13994
{
	Global_2428131.f_595 = 0;
}

var func_431()//Position - 0x139A4
{
	return Global_2428131.f_595;
}

void func_432()//Position - 0x139B3
{
	Global_2428131.f_625 = 0;
}

bool func_433()//Position - 0x139C3
{
	return Global_2428131.f_625;
}

void func_434()//Position - 0x139D2
{
	Global_2428891.f_1.f_837 = 0;
	Global_2428891.f_1.f_839 = 0;
}

void func_435()//Position - 0x139EE
{
	MISC::CLEAR_BIT(&Global_2428131, 4);
}

void func_436()//Position - 0x139FF
{
	MISC::CLEAR_BIT(&Global_2428131, 28);
}

void func_437()//Position - 0x13A11
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 4);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 5);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 7);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 8);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 9);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 10);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 11);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 12);
	MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_13.f_1), 13);
}

void func_438(int iParam0)//Position - 0x13AC7
{
	NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(iParam0);
}

void func_439(var uParam0)//Position - 0x13AD5
{
	var uVar0;
	
	if ((!func_441() && func_440(120, -1)) && !func_348())
	{
		NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(uParam0, &uVar0, 13);
		if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&uVar0))
			{
			}
		}
	}
}

int func_440(int iParam0, int iParam1)//Position - 0x13B19
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_25(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_441()//Position - 0x13B45
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if ((Global_1582596[iVar0 /*324*/].f_31.f_2 == 63 || Global_1582596[iVar0 /*324*/].f_31.f_2 == 62) || Global_1582596[iVar0 /*324*/].f_31.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_442()//Position - 0x13B97
{
	MISC::SET_BIT(&(Global_964222.f_8), 8);
	func_443();
}

void func_443()//Position - 0x13BAF
{
	Global_2428131.f_750 = 1;
}

bool func_444()//Position - 0x13BBF
{
	return Global_2428891.f_2841.f_2;
}

void func_445(int iParam0, int iParam1, int iParam2)//Position - 0x13BD0
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_447();
			}
			else if (!MISC::IS_BIT_SET(Global_2359301.f_66, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359301.f_66, 2))
				{
					iVar1 = 0;
					while (iVar1 < 7)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359301.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359301.f_66), 1);
			}
		}
		if (func_235(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_446(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_446(int iParam0, int iParam1)//Position - 0x13CA4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_447()//Position - 0x13CC0
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359301.f_66, 2))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Global_2359301.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359301.f_66), 2);
			MISC::SET_BIT(&(Global_2359301.f_66), 0);
		}
	}
}

var func_448(int iParam0)//Position - 0x13D1A
{
	return Global_1582596[iParam0 /*324*/].f_76.f_2;
}

void func_449()//Position - 0x13D2F
{
	if (func_450())
	{
		HUD::CLEAR_HELP(1);
	}
}

bool func_450()//Position - 0x13D43
{
	return func_177("FM_RETRY_INV");
}

void func_451(int iParam0, int iParam1)//Position - 0x13D53
{
	int iVar0;
	
	iVar0 = func_455(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_454(iParam0))
	{
		func_453(iParam0, iVar0);
	}
	else
	{
		func_452(iParam0, iVar0);
	}
}

void func_452(int iParam0, int iParam1)//Position - 0x13D87
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_453(int iParam0, int iParam1)//Position - 0x13EAC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_454(int iParam0)//Position - 0x13EC8
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_455(var uParam0)//Position - 0x13F4C
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_456(int iParam0, int iParam1)//Position - 0x13F6A
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam1), 0);
	iVar0++;
	if (!func_458(iParam0))
	{
		func_57(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_457(iParam0, iVar0, iParam1, 1);
	}
}

void func_457(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13FAA
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_25(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_25(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_25(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_25(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_25(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_25(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_25(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_25(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_25(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_25(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_25(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_25(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_25(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_25(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_25(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_25(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_25(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_25(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_25(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_25(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_25(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_25(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_458(int iParam0)//Position - 0x14250
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_459()//Position - 0x14304
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2435862 == 0)
	{
		return 0;
	}
	if (func_471())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_2435242 = 1;
		}
	}
	Global_2435862 = 0;
	if (Global_1318732)
	{
		iVar0 = 1;
	}
	if (Global_2435242)
	{
		iVar0 = 1;
	}
	if (Global_2435241)
	{
		iVar0 = 1;
	}
	if (func_470(Global_96381.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2435172)
	{
		iVar0 = 1;
	}
	if (func_469(512))
	{
		iVar0 = 1;
	}
	if (func_468(128))
	{
		iVar0 = 1;
	}
	if (Global_1318756 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_348())
	{
		iVar0 = 0;
	}
	if (Global_2435303)
	{
		iVar0 = 2;
	}
	if (!func_466())
	{
		if (Global_1602437.f_57332 == 0)
		{
			iVar0 = 0;
		}
	}
	if (func_235(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_464())
	{
		iVar0 = 0;
	}
	Global_2435303 = 0;
	Global_2435241 = 0;
	Global_2435242 = 0;
	Global_1318732 = 0;
	Global_2435172 = 0;
	func_462(&(Global_96381.f_1), 32);
	func_461(512);
	func_460(128);
	return iVar0;
}

void func_460(int iParam0)//Position - 0x14418
{
	Global_96438 = (Global_96438 - (Global_96438 && iParam0));
}

void func_461(int iParam0)//Position - 0x14430
{
	Global_96439 = (Global_96439 - (Global_96439 && iParam0));
}

void func_462(var uParam0, int iParam1)//Position - 0x14448
{
	func_463(uParam0, iParam1);
}

void func_463(var uParam0, var uParam1)//Position - 0x14458
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_464()//Position - 0x1446D
{
	if (((Global_1573704 || Global_1573675) || func_235(PLAYER::PLAYER_ID(), 0)) || func_465())
	{
		return 1;
	}
	return 0;
}

bool func_465()//Position - 0x144A4
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18, 14);
}

int func_466()//Position - 0x144C1
{
	switch (func_467())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_467()//Position - 0x144FB
{
	return Global_2428891.f_1.f_2817;
}

bool func_468(int iParam0)//Position - 0x1450C
{
	return (Global_96438 && iParam0) != 0;
}

bool func_469(int iParam0)//Position - 0x1451D
{
	return (Global_96439 && iParam0) != 0;
}

bool func_470(var uParam0, int iParam1)//Position - 0x1452E
{
	return (uParam0 && iParam1) != 0;
}

bool func_471()//Position - 0x1453D
{
	return MISC::IS_BIT_SET(Global_1312425, 0);
}

int func_472(int iParam0)//Position - 0x1454E
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_473()//Position - 0x14586
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId");
	}
}

void func_474()//Position - 0x14603
{
	Global_2428131.f_571 = 0;
	NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE();
}

void func_475(bool bParam0)//Position - 0x14617
{
	if (bParam0)
	{
		if (!Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_27)
		{
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_27 = 1;
		}
	}
	else if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_27)
	{
		Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_27 = 0;
	}
}

int func_476(int iParam0)//Position - 0x14664
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_477()//Position - 0x14682
{
	Global_2428131.f_711 = 0;
}

bool func_478()//Position - 0x14692
{
	return Global_2428131.f_711;
}

void func_479()//Position - 0x146A1
{
	Global_2428131.f_715 = 0;
}

bool func_480()//Position - 0x146B1
{
	return Global_2428131.f_715;
}

void func_481()//Position - 0x146C0
{
	MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_32), 1);
}

int func_482(int iParam0)//Position - 0x146DC
{
	int iVar0;
	
	if (func_465())
	{
		return 1;
	}
	if (func_487())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1602437.f_56980)))
	{
		return 1;
	}
	if (func_486())
	{
		return 1;
	}
	func_485();
	DATAFILE::DATAFILE_CREATE();
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	if (iParam0 == 0)
	{
		Global_1675360++;
		DATAFILE::DATADICT_SET_INT(iVar0, "quit", Global_1675360);
		DATAFILE::DATADICT_SET_INT(iVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(iVar0, "ply", Global_1675360.f_2);
		DATAFILE::DATADICT_SET_INT(iVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1675385.f_1++;
		DATAFILE::DATADICT_SET_INT(iVar0, "quit", Global_1675385.f_1);
		DATAFILE::DATADICT_SET_INT(iVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(iVar0, "ply", Global_1675385.f_4);
		DATAFILE::DATADICT_SET_INT(iVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	if (iParam0 == 0)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_1602437.f_56980), 0f, func_484(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_964222.f_34), 0f, func_484(iParam0)))
		{
		}
	}
	func_483();
	func_485();
	NETWORK::UGC_CLEAR_MODIFY_RESULT();
	return 1;
}

void func_483()//Position - 0x14821
{
	Global_1675360 = 0;
	Global_1675360.f_2 = 0;
	Global_1675360.f_8 = 0;
	Global_1675360.f_3 = 0;
	Global_1675360.f_6 = 0;
}

char* func_484(int iParam0)//Position - 0x1484A
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_485()//Position - 0x1489E
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

int func_486()//Position - 0x148B2
{
	if (NETWORK::_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_GETTING())
	{
		return 1;
	}
	else if (NETWORK::_0x45E816772E93A9DB())
	{
		return 1;
	}
	return 0;
}

int func_487()//Position - 0x148E2
{
	if (!func_488())
	{
		return 1;
	}
	return 0;
}

int func_488()//Position - 0x148F7
{
	if (func_489())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_489()//Position - 0x14917
{
	return Global_2435308;
}

bool func_490()//Position - 0x14923
{
	return Global_2428131.f_607;
}

void func_491(bool bParam0)//Position - 0x14932
{
	if (bParam0)
	{
		Global_1312452 = 1;
	}
	else
	{
		Global_1312452 = 0;
	}
}

void func_492()//Position - 0x1494C
{
	Global_2428891.f_1.f_2823.f_13 = 0;
	Global_2428891.f_1.f_2823 = 0;
	Global_2428891.f_1.f_2823.f_1 = 0;
	Global_2428891.f_1.f_2823.f_2 = 0;
	Global_2428891.f_1.f_2823.f_3 = 0;
	Global_2428891.f_1.f_2823.f_4 = 0;
	Global_2428891.f_1.f_2823.f_5 = 0;
	Global_2428891.f_1.f_2823.f_6 = 0;
	Global_2428891.f_1.f_2823.f_7 = 0;
	Global_2428891.f_1.f_2823.f_8 = 0;
	Global_2428891.f_1.f_2823.f_9 = 0;
	Global_2428891.f_1.f_2823.f_10 = 0;
	Global_2428891.f_1.f_2823.f_11 = 0;
	Global_2428891.f_1.f_2823.f_12 = 0;
}

bool func_493(int iParam0)//Position - 0x149FA
{
	return Global_2414009[iParam0 /*254*/].f_114 == 1;
}

void func_494()//Position - 0x14A0E
{
	Global_2428131.f_590 = 1;
}

void func_495(int iParam0, struct<3> Param1, struct<6> Param4)//Position - 0x14A1E
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_511();
	func_510();
	func_509();
	func_508();
	func_507();
	func_593();
	Global_1675400.f_9 = iParam0;
	switch (Global_1675400.f_9)
	{
		case 1:
			Global_1675400 = 0;
			Global_1675400.f_22 = { 0f, 0f, 0f };
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 0;
			break;
		
		case 2:
			Global_1675400 = 1;
			Global_1675400.f_22 = { Param1 };
			Global_1675400.f_16 = { Param4 };
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1582596[PLAYER::PLAYER_ID() /*324*/] == 0 || Global_1582596[PLAYER::PLAYER_ID() /*324*/] == 1)
			{
				func_506(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_76.f_28);
			}
			func_505();
			Global_1675400 = 1;
			Global_1675400.f_22 = { Param1 };
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 0;
			break;
		
		case 4:
			func_504();
			func_505();
			Global_1675400 = 1;
			if (func_589(PLAYER::PLAYER_ID()) || func_590(PLAYER::PLAYER_ID()))
			{
				func_503(1);
			}
			if ((func_502() || func_523()) && func_517())
			{
				Global_1675400.f_16 = { func_516() };
				Param4 = { Global_1675400.f_16 };
				Global_1675400.f_22 = { func_501() };
			}
			else if (func_502() || func_523())
			{
				if (func_500())
				{
					Global_1675400.f_22 = { func_499() };
				}
				else
				{
					Global_1675400.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1675400.f_22 = { Param1 };
			}
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 1;
			break;
		
		case 5:
			func_504();
			func_498();
			func_505();
			if (func_589(PLAYER::PLAYER_ID()) || func_590(PLAYER::PLAYER_ID()))
			{
				func_503(1);
			}
			Global_1675400 = 1;
			Global_1675400.f_22 = { Param1 };
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 1;
			break;
		
		case 8:
			Global_1675400 = 0;
			Global_1675400.f_22 = { Param1 };
			Global_1675400.f_16 = { Param4 };
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 0;
			break;
		
		case 9:
			func_505();
			Global_1675400 = 1;
			Global_1675400.f_22 = { Param1 };
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 1;
			break;
		
		case 10:
			Global_1675400 = 0;
			Global_1675400.f_22 = { 0f, 0f, 0f };
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_12 = 0;
			break;
	}
	func_497();
	func_496();
	func_417(Global_1675400.f_9);
	Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_210 = { Global_1675400.f_22 };
	Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_213 = { Param4 };
}

void func_496()//Position - 0x14CEF
{
	MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18), 23);
}

void func_497()//Position - 0x14D0C
{
	MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18), 12);
}

void func_498()//Position - 0x14D29
{
	Global_1675400.f_4 = 1;
}

Vector3 func_499()//Position - 0x14D38
{
	return Global_2428131.f_26.f_491;
}

int func_500()//Position - 0x14D4B
{
	if ((Global_2428131.f_26.f_491 != 0f || Global_2428131.f_26.f_491.f_1 != 0f) || Global_2428131.f_26.f_491.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_501()//Position - 0x14D8C
{
	return Global_2428131.f_26.f_494;
}

var func_502()//Position - 0x14D9F
{
	return Global_2428131.f_26.f_49;
}

void func_503(int iParam0)//Position - 0x14DAF
{
	Global_2428891.f_5529 = iParam0;
}

void func_504()//Position - 0x14DC0
{
	Global_1675400.f_3 = 1;
}

void func_505()//Position - 0x14DCF
{
	Global_1675400.f_7 = 1;
}

void func_506(var uParam0)//Position - 0x14DDE
{
	Global_1675400.f_10 = uParam0;
}

void func_507()//Position - 0x14DEE
{
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_5 = 0;
}

void func_508()//Position - 0x14E04
{
	Global_1675400.f_10 = -1;
}

void func_509()//Position - 0x14E13
{
	Global_1675400.f_4 = 0;
}

void func_510()//Position - 0x14E22
{
	Global_1675400.f_3 = 0;
}

void func_511()//Position - 0x14E31
{
	Global_2428891.f_2841.f_2 = 1;
}

void func_512()//Position - 0x14E43
{
	Global_2428131.f_26.f_47 = 0;
}

void func_513()//Position - 0x14E54
{
	Global_2428131.f_26.f_41 = -1;
}

int func_514()//Position - 0x14E65
{
	return Global_2428131.f_26.f_41;
}

void func_515(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x14E75
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_2398373)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2398373.f_1)))
	{
		return;
	}
	Global_2398439 = 1;
}

struct<6> func_516()//Position - 0x14EAC
{
	return Global_2428131.f_26.f_11;
}

bool func_517()//Position - 0x14EBE
{
	return Global_2428131.f_26.f_51;
}

void func_518(int iParam0, bool bParam1)//Position - 0x14ECE
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (NETWORK::NETWORK_IS_CLOCK_TIME_OVERRIDDEN())
				{
					NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
				}
			}
			break;
		
		case 1:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(6, 0, 0);
			break;
		
		case 2:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(12, 0, 0);
			break;
		
		case 3:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
			break;
		
		case 4:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
			break;
		
		default:
			break;
	}
}

int func_519()//Position - 0x14F3B
{
	return Global_1675400.f_12;
}

void func_520(var uParam0, var uParam1)//Position - 0x14F49
{
	Global_1675400.f_13 = uParam0;
	Global_1675400.f_14 = uParam1;
}

void func_521(var uParam0)//Position - 0x14F61
{
	Global_1675400.f_12 = uParam0;
}

void func_522()//Position - 0x14F71
{
	Global_2428131.f_26.f_48 = 1;
}

bool func_523()//Position - 0x14F82
{
	return Global_2428131.f_26.f_47;
}

void func_524()//Position - 0x14F92
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2391044.f_4.f_3)))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2397673.f_3)))
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2397673.f_3), &(Global_2391044.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391044.f_4.f_3 };
}

void func_525(var uParam0)//Position - 0x14FF3
{
	Global_1675400.f_5 = 1;
	Global_1675400.f_11 = uParam0;
}

struct<13> func_526()//Position - 0x1500A
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_527(struct<6> Param0)//Position - 0x1501F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_528()//Position - 0x15044
{
	return Global_2428131.f_9;
}

void func_529(int iParam0)//Position - 0x15052
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(iParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(0);
	}
}

void func_530()//Position - 0x1506C
{
	Global_971737 = -1;
}

void func_531()//Position - 0x15079
{
	func_532(-1f);
}

void func_532(float fParam0)//Position - 0x15086
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(0);
	}
}

void func_533(int iParam0, int iParam1)//Position - 0x150A0
{
	NETWORK::NETWORK_BLOCK_INVITES(iParam0);
	NETWORK::_0x4A9FDE3A5A6D0437(iParam0);
	if (NETWORK::NETWORK_IS_HOST())
	{
		NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(iParam1);
	}
}

bool func_534()//Position - 0x150C1
{
	return Global_2428131.f_616;
}

void func_535()//Position - 0x150D0
{
	if (MISC::IS_BIT_SET(Global_2359301, 24))
	{
		MISC::CLEAR_BIT(&Global_2359301, 24);
	}
}

void func_536()//Position - 0x150EF
{
	MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18), 14);
}

bool func_537()//Position - 0x1510C
{
	return Global_2428131.f_703;
}

int func_538()//Position - 0x1511B
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_165;
}

void func_539(bool bParam0)//Position - 0x15130
{
	if (bParam0)
	{
		if (Global_1573542 == 0)
		{
			Global_1573542 = 1;
		}
	}
	else if (Global_1573542 == 1)
	{
		Global_1573542 = 0;
	}
}

void func_540()//Position - 0x1515A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2428891.f_1.f_843[iVar0 /*57*/].f_44 = 0;
		Global_2428891.f_1.f_843[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_541()//Position - 0x15198
{
	int iVar0;
	
	if (func_465())
	{
		return 1;
	}
	if (func_487())
	{
		return 1;
	}
	if (func_486())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1602437.f_56980)))
	{
		return 1;
	}
	func_485();
	DATAFILE::DATAFILE_CREATE();
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	Global_1675360.f_2++;
	if (Global_1675360.f_2 < 1)
	{
		Global_1675360.f_2 = 1;
	}
	DATAFILE::DATADICT_SET_INT(iVar0, "quit", Global_1675360);
	DATAFILE::DATADICT_SET_INT(iVar0, "ply", Global_1675360.f_2);
	DATAFILE::DATADICT_SET_INT(iVar0, "plyd", 1);
	DATAFILE::DATADICT_SET_INT(iVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_1602437.f_56980), -1f, func_484(0)))
	{
	}
	func_483();
	func_485();
	NETWORK::UGC_CLEAR_MODIFY_RESULT();
	return 1;
}

void func_542()//Position - 0x1525F
{
	Global_2428131.f_714 = 1;
}

void func_543(bool bParam0)//Position - 0x1526F
{
	if (bParam0)
	{
		HUD::THEFEED_COMMENT_TELEPORT_POOL_ON();
	}
	else
	{
		HUD::THEFEED_COMMENT_TELEPORT_POOL_OFF();
	}
}

void func_544()//Position - 0x15287
{
	Global_2428131.f_713 = 1;
}

int func_545(int iParam0)//Position - 0x15297
{
	switch (Global_1312449)
	{
		case 0:
			if (!func_546(iParam0))
			{
				if (Global_1582596[iParam0 /*324*/] == 2 || Global_1582596[iParam0 /*324*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_546(int iParam0)//Position - 0x152E0
{
	return Global_1582596[iParam0 /*324*/].f_165 != 0;
}

bool func_547()//Position - 0x152F5
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 2);
}

void func_548()//Position - 0x1530F
{
	Global_2428131.f_713 = 0;
}

bool func_549()//Position - 0x1531F
{
	return Global_2428131.f_713;
}

void func_550(int iParam0)//Position - 0x1532E
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_551()//Position - 0x15354
{
	Global_1675400.f_12 = -1;
	Global_1675400.f_13 = -1;
	Global_1675400.f_14 = -1;
}

void func_552()//Position - 0x15371
{
	Global_1600023 = 0;
}

void func_553(bool bParam0)//Position - 0x1537E
{
	if (bParam0)
	{
		Global_1573685 = 1;
	}
	else
	{
		Global_1573685 = 0;
	}
}

void func_554()//Position - 0x15398
{
	Global_1600024 = -1;
	Global_1600027 = 0;
}

void func_555()//Position - 0x153AA
{
	Global_2446554.f_271 = 0;
	func_558(3782, 0, -1, 1);
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

int func_558(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x154C7
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_559()//Position - 0x15724
{
	Global_2428131.f_714 = 0;
}

bool func_560()//Position - 0x15734
{
	return Global_2428131.f_714;
}

void func_561(bool bParam0, int iParam1)//Position - 0x15743
{
	int iVar0;
	
	if (!func_563(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_17236.f_7207 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_17236.f_4886[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_562(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_562(var uParam0)//Position - 0x157E1
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_563(var uParam0, bool bParam1, int iParam2)//Position - 0x1580A
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_564()//Position - 0x158A7
{
}

void func_565(int iParam0)//Position - 0x158AF
{
	struct<35> Var0;
	int iVar35;
	var uVar36;
	
	Var0 = -1;
	Var0.f_21 = 3;
	if (Global_2428131.f_545.f_9 == 0)
	{
		Global_1675425.f_1121 = 0;
	}
	iVar35 = 0;
	while (iVar35 <= 31)
	{
		uVar36 = Global_1675425[iVar35 /*35*/].f_3;
		Global_1675425[iVar35 /*35*/] = { Var0 };
		if (func_566())
		{
			Global_1675425[iVar35 /*35*/].f_3 = uVar36;
		}
		Global_1675425[iVar35 /*35*/].f_1 = func_123();
		Global_1675425[iVar35 /*35*/] = -1;
		Global_1675425[iVar35 /*35*/].f_2 = -1;
		iVar35++;
	}
	if ((!func_566() && !func_573()) && iParam0)
	{
		Global_1675425.f_1123 = 0;
		Global_1675425.f_1124 = 0;
	}
}

bool func_566()//Position - 0x15966
{
	return MISC::IS_BIT_SET(Global_2428131.f_545.f_1, 0);
}

void func_567(bool bParam0)//Position - 0x1597C
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_568(int iParam0, int iParam1)//Position - 0x15AA6
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::CLEAR_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

bool func_569()//Position - 0x15AEB
{
	return Global_1675400.f_3;
}

bool func_570()//Position - 0x15AF9
{
	return Global_2434575.f_7;
}

bool func_571()//Position - 0x15B07
{
	return MISC::IS_BIT_SET(Global_2428131.f_26.f_3, 8);
}

void func_572()//Position - 0x15B1D
{
	Global_2428131.f_26.f_49 = 0;
}

bool func_573()//Position - 0x15B2E
{
	return MISC::IS_BIT_SET(Global_2428131.f_26.f_3, 0);
}

void func_574()//Position - 0x15B43
{
	MISC::CLEAR_BIT(&(Global_964222.f_8), 8);
}

void func_575(bool bParam0)//Position - 0x15B57
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_13.f_1), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_13.f_1), 0);
	}
}

void func_576(int iParam0)//Position - 0x15B8F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((Global_2428891.f_3153 != 0 && Global_2428891.f_3153.f_1 != 0) && Global_2428891.f_3153.f_2 != 0) && Global_2428891.f_3153.f_3 != 0)
		{
			STATS::PLAYSTATS_LEAVE_JOB_CHAIN(Global_2428891.f_3153, Global_2428891.f_3153.f_1, Global_2428891.f_3153.f_2, Global_2428891.f_3153.f_3, iParam0);
		}
	}
	func_577();
}

void func_577()//Position - 0x15C06
{
	Global_2428891.f_3153 = 0;
	Global_2428891.f_3153.f_1 = 0;
	Global_2428891.f_3153.f_2 = 0;
	Global_2428891.f_3153.f_3 = 0;
}

void func_578()//Position - 0x15C34
{
	Global_2428891.f_1.f_2799 = 1;
}

bool func_579()//Position - 0x15C46
{
	return MISC::IS_BIT_SET(Global_2428891.f_1.f_2807, 12);
}

void func_580(int iParam0)//Position - 0x15C5D
{
	if (!func_573() || iParam0)
	{
		Global_1574140 = 0;
		Global_1574139 = 0;
	}
}

void func_581(bool bParam0, bool bParam1)//Position - 0x15C7F
{
	struct<6> Var0;
	int iVar6;
	
	Global_2428131.f_26 = -1;
	Global_2428131.f_26.f_55 = -1;
	Global_2428131.f_26.f_1 = -1;
	Global_2428131.f_26.f_4 = 0;
	Global_2428131.f_26.f_2 = 0;
	Global_2428131.f_26.f_3 = 0;
	Global_2428131.f_26.f_40 = -1;
	Global_2428131.f_26.f_5 = { Var0 };
	Global_2428131.f_26.f_53 = 0;
	Global_2428131.f_26.f_129 = 0;
	Global_2428131.f_26.f_344 = 0;
	Global_2428131.f_26.f_54 = 0;
	Global_2428131.f_26.f_130 = 0;
	Global_2428131.f_26.f_345 = 0;
	Global_2428131.f_26.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428131.f_26.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2428131.f_26.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2428131.f_26.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2428131.f_26.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2428131.f_26.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2428131.f_26.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428131.f_26.f_346[iVar6] = 0;
		Global_2428131.f_26.f_361[iVar6] = 0;
		Global_2428131.f_26.f_391[iVar6 /*6*/] = { Var0 };
		Global_2428131.f_26.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2428131.f_26.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2428131.f_26.f_497 = 0;
			Global_2428131.f_26.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2428131.f_26.f_505[iVar6] = -1;
				Global_2428131.f_26.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2428131.f_26.f_47 = 0;
			Global_2428131.f_26.f_11 = { Var0 };
			Global_2428131.f_26.f_51 = 0;
			Global_2428131.f_26.f_491 = { 0f, 0f, 0f };
			Global_2428131.f_26.f_494 = { 0f, 0f, 0f };
			Global_2428131.f_26.f_50 = 0;
			Global_2428131.f_26.f_49 = 0;
		}
	}
}

void func_582()//Position - 0x15E9A
{
	Global_2434575.f_8 = 0;
	Global_2434575.f_7 = 0;
}

bool func_583()//Position - 0x15EB0
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/] == 5;
}

void func_584()//Position - 0x15EC5
{
	Global_1684076.f_1774 = 0;
}

void func_585()//Position - 0x15ED5
{
	Global_2428131.f_707 = 0;
}

bool func_586()//Position - 0x15EE5
{
	return Global_2428131.f_707;
}

void func_587()//Position - 0x15EF4
{
	Global_14558 = 0;
	func_588();
}

void func_588()//Position - 0x15F04
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

bool func_589(int iParam0)//Position - 0x15F25
{
	return Global_2414009[iParam0 /*254*/].f_114 == 7;
}

bool func_590(int iParam0)//Position - 0x15F39
{
	return Global_2414009[iParam0 /*254*/].f_114 == 2;
}

void func_591()//Position - 0x15F4D
{
	Global_2428131.f_574 = 0;
}

void func_592()//Position - 0x15F5D
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_3 = -1;
	iVar10 = PLAYER::PLAYER_ID();
	if (iVar10 != -1)
	{
		Global_1600133[iVar10 /*32*/].f_22 = { Var0 };
	}
}

void func_593()//Position - 0x15F8C
{
	Global_1675400.f_7 = 0;
}

void func_594(bool bParam0, bool bParam1, int iParam2)//Position - 0x15F9B
{
	struct<6> Var0;
	
	Global_2428131.f_545.f_3 = { Var0 };
	Global_2428131.f_545 = 0;
	Global_2428131.f_545.f_1 = 0;
	Global_2428131.f_545.f_11 = 0;
	if (bParam0)
	{
		Global_2428131.f_545.f_2 = 0;
		Global_2428131.f_545.f_12 = 0;
		Global_2428131.f_545.f_13 = 0;
		if (bParam1)
		{
			Global_2428131.f_545.f_9 = 0;
			Global_2428131.f_545.f_10 = 0;
		}
		if (iParam2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1675425.f_1123 = 0;
			Global_1675425.f_1124 = 0;
		}
		if (PLAYER::PLAYER_ID() != -1)
		{
			Global_1600133[PLAYER::PLAYER_ID() /*32*/].f_22.f_1 = 0;
		}
	}
}

void func_595()//Position - 0x16040
{
	Global_2428131.f_545.f_11 = 0;
}

bool func_596()//Position - 0x16052
{
	return Global_2428131.f_545.f_11;
}

void func_597()//Position - 0x16063
{
	MISC::CLEAR_BIT(&(Global_1600133[PLAYER::PLAYER_ID() /*32*/].f_18), 3);
}

void func_598()//Position - 0x1607C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574151[iVar0] = 0;
		iVar0++;
	}
}

void func_599()//Position - 0x160A0
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1600133[iVar0 /*32*/].f_22.f_4 = 0;
	}
}

void func_600()//Position - 0x160C1
{
	Global_2435275 = 0;
	Global_2435276 = 0;
	Global_2435277 = 0;
	Global_2435278 = 0;
}

void func_601()//Position - 0x160DD
{
	Global_2428131.f_26.f_48 = 0;
}

void func_602()//Position - 0x160EE
{
	Global_2428131.f_26.f_50 = 0;
}

void func_603(int iParam0)//Position - 0x160FF
{
	if (MISC::IS_PC_VERSION())
	{
		HUD::_0x7C226D5346D4D10A(iParam0);
	}
}

void func_604()//Position - 0x16114
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1573338[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573338[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_605(bool bParam0)//Position - 0x1614C
{
	int iVar0;
	
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_172, 0))
			{
				MISC::SET_BIT(&(Global_1582596[iVar0 /*324*/].f_172), 0);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_172, 0))
		{
			MISC::CLEAR_BIT(&(Global_1582596[iVar0 /*324*/].f_172), 0);
		}
	}
}

void func_606()//Position - 0x161AF
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_609(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1692405.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_608();
	func_607();
	Global_1692405 = 0;
}

void func_607()//Position - 0x16201
{
	Global_1692405.f_4 = 0;
}

void func_608()//Position - 0x16210
{
	Global_1692405.f_3 = 0;
}

void func_609(int iParam0)//Position - 0x1621F
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1692405.f_5[iParam0 /*53*/] = { Var0 };
}

void func_610()//Position - 0x16252
{
	MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18), 20);
}

void func_611(int iParam0, bool bParam1)//Position - 0x1626F
{
	if (bParam1)
	{
		if (!func_23(iParam0, 18, 1))
		{
			func_58(iParam0, 18, 1);
		}
	}
	else if (func_23(iParam0, 18, 1))
	{
		func_56(iParam0, 18, 1);
	}
}

void func_612()//Position - 0x162AA
{
	MISC::CLEAR_BIT(&(Global_2446554.f_732), 3);
}

void func_613(bool bParam0, int iParam1)//Position - 0x162BE
{
	func_203();
	if (bParam0)
	{
		func_292(1);
		HUD::CLEAR_HELP(1);
	}
	HUD::CLEAR_PRINTS();
	func_198();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	func_232(0, 1, 1, 0);
	func_616();
	func_186(12, 0, -1);
	func_187(1);
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	func_615();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
		}
	}
	func_238(0);
	if (((func_107() == 0 && func_614() == 0) && iParam1) && !func_233(PLAYER::PLAYER_ID()))
	{
		func_322(PLAYER::PLAYER_ID(), 1, 0, 1);
	}
	Global_2422140.f_3033 = 0;
}

bool func_614()//Position - 0x1636D
{
	return MISC::IS_BIT_SET(Global_2428131, 7);
}

void func_615()//Position - 0x1637E
{
	Global_17098.f_5 = 0;
}

void func_616()//Position - 0x1638C
{
	func_187(1);
	func_186(4, 0, -1);
	func_186(6, 0, -1);
	func_186(7, 0, -1);
	func_186(3, 0, -1);
	func_186(1, 0, -1);
	func_186(2, 0, -1);
	func_186(11, 0, -1);
	func_186(13, 0, -1);
	func_186(14, 0, -1);
	func_186(16, 0, -1);
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
		if (!func_650())
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
	iVar1 = func_648(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_646(iVar1, bParam0);
	if (!func_645(-1))
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
		iVar3 = func_644(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_642(iVar4))
			{
				func_633(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_626(func_628(59, 0), 0);
	func_625(func_628(22, 0), func_628(73, 0));
	if (func_650())
	{
		if (func_440(77, -1))
		{
			func_624(1);
			func_623(1);
		}
	}
	if (func_622() || func_621())
	{
		func_30(77, 1, -1, 1);
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
	if (func_628(21, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_971739 = 0;
}

void func_618(int iParam0, bool bParam1, int iParam2)//Position - 0x16575
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_90014.f_17[iParam0])
			{
				if (func_620(iParam0) == 3 && !func_22(iParam0))
				{
					func_619(iParam0);
					func_58(iParam0, 0, 0);
					func_56(iParam0, 1, 0);
					func_355(iParam0);
				}
				else
				{
					func_58(iParam0, 1, 0);
					func_355(iParam0);
				}
			}
			else
			{
				func_58(iParam0, 0, 0);
				func_56(iParam0, 1, 0);
				func_355(iParam0);
			}
		}
		else
		{
			func_56(iParam0, 1, 0);
			func_355(iParam0);
		}
	}
	else if (func_23(iParam0, 0, 0))
	{
		func_56(iParam0, 0, 0);
		func_56(iParam0, 1, 0);
		func_355(iParam0);
	}
}

void func_619(int iParam0)//Position - 0x16634
{
	if (Global_90014.f_17[iParam0])
	{
		func_58(iParam0, 10, 1);
		func_58(iParam0, 19, 1);
	}
}

int func_620(int iParam0)//Position - 0x1665B
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

bool func_621()//Position - 0x168B4
{
	return Global_1315888;
}

bool func_622()//Position - 0x168C0
{
	return Global_1315890;
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
	func_356(1, !bParam1);
	if (!bVar0)
	{
		func_619(12);
	}
}

void func_626(bool bParam0, bool bParam1)//Position - 0x16A7D
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_627(0);
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
		if (!func_22(39))
		{
			func_619(39);
		}
		if (!func_22(40))
		{
			func_619(40);
		}
		if (!func_22(41))
		{
			func_619(41);
		}
		if (!func_22(42))
		{
			func_619(42);
		}
		if (!func_22(43))
		{
			func_619(43);
		}
	}
}

int func_627(bool bParam0)//Position - 0x16B2E
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_1613, 26))
		{
			uVar0 = func_24(1179, -1, 0);
			if (!MISC::IS_BIT_SET(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_440(122, -1);
}

bool func_628(int iParam0, bool bParam1)//Position - 0x16B8F
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6017 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_630(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4821 == 1)
		{
			return 1;
		}
	}
	if (func_622() || func_621())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_629())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return MISC::IS_BIT_SET(Global_1573723[iVar1], iVar0);
}

int func_629()//Position - 0x16CF4
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2446554.f_1618, 23))
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	uVar0 = Global_1335599[func_25(-1)];
	if (MISC::IS_BIT_SET(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2446554.f_1618), 23);
		return 1;
	}
	return 0;
}

bool func_630(int iParam0, int iParam1)//Position - 0x16D5A
{
	var uVar0;
	int iVar1;
	
	if (!func_650())
	{
		return 0;
	}
	if (func_632())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_631(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_300, iVar1);
}

int func_631(int iParam0)//Position - 0x16DA2
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_632()//Position - 0x16E02
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 3);
}

void func_633(int iParam0, bool bParam1)//Position - 0x16E1C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_641(-1))
			{
				if (!func_650())
				{
					return;
				}
			}
			if (!func_641(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_640() && !func_639())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_638())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_641(-1))
				{
					if (!func_634())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1573723[iVar1]), iVar0);
	}
}

int func_634()//Position - 0x16EB5
{
	var uVar0;
	
	if (func_637(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = Global_1335599[func_25(-1)];
	if (MISC::IS_BIT_SET(uVar0, 2))
	{
		func_635(1);
		return 1;
	}
	return 0;
}

void func_635(bool bParam0)//Position - 0x16EED
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 25))
		{
			func_636(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 25);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 25))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 25);
	}
}

void func_636(int iParam0, int iParam1)//Position - 0x16F5A
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_631(iParam1);
	iVar1 = uVar0;
	MISC::SET_BIT(&(Global_1582596[iParam0 /*324*/].f_300), iVar1);
}

bool func_637(int iParam0)//Position - 0x16F80
{
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_116, 25);
}

int func_638()//Position - 0x16FAF
{
	var uVar0;
	
	if (MISC::IS_BIT_SET(Global_2446554.f_1618, 6))
	{
		return 1;
	}
	uVar0 = Global_1335599[func_25(-1)];
	if (MISC::IS_BIT_SET(uVar0, 0))
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_1618, 6))
		{
			MISC::SET_BIT(&(Global_2446554.f_1618), 6);
		}
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return 0;
}

bool func_639()//Position - 0x17018
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 7);
}

int func_640()//Position - 0x17032
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return func_440(121, -1);
}

bool func_641(int iParam0)//Position - 0x17062
{
	return func_440(123, iParam0);
}

int func_642(int iParam0)//Position - 0x17072
{
	var uVar0;
	int iVar1;
	
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
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
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_24(func_643(iParam0), -1, 0);
			if (MISC::IS_BIT_SET(uVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_643(int iParam0)//Position - 0x17262
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1188;
		
		case 1:
			return 1189;
		
		case 2:
			return 1190;
		
		case 3:
			return 1191;
		
		case 4:
			return 1192;
		
		default:
	}
	return 1188;
}

int func_644(int iParam0)//Position - 0x172C6
{
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
			if (!func_641(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_645(int iParam0)//Position - 0x17540
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return func_440(119, iParam0);
}

int func_646(int iParam0, bool bParam1)//Position - 0x17571
{
	if (bParam1)
	{
	}
	return func_647(iParam0, 0);
}

int func_647(int iParam0, int iParam1)//Position - 0x17585
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270489[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270489[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_648(int iParam0, bool bParam1)//Position - 0x17644
{
	if (bParam1)
	{
	}
	return func_649(iParam0);
}

int func_649(int iParam0)//Position - 0x17657
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1335605[func_25(-1)];
			}
			else if (func_53(iParam0))
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_25(-1)];
	}
	return 0;
}

int func_650()//Position - 0x176B4
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return func_440(120, -1);
}

int func_651()//Position - 0x176E4
{
	bool bVar0;
	
	func_656(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_423())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_655())
	{
		return 1;
	}
	if (func_654(157))
	{
		if (!func_653())
		{
			return 1;
		}
	}
	if (func_654(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_652() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_652()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_652()//Position - 0x17777
{
	switch (func_28())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_653()//Position - 0x177AB
{
	return Global_2428131.f_572;
}

int func_654(int iParam0)//Position - 0x177BA
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_655()//Position - 0x177D1
{
	return Global_2435238;
}

void func_656(var uParam0)//Position - 0x177DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_657(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_657(int iParam0)//Position - 0x1784D
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_658(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_658(int iParam0, var uParam1)//Position - 0x178CE
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_659()//Position - 0x1791C
{
	SYSTEM::WAIT(0);
}

void func_660(struct<17> Param0, var uParam17, var uParam18, var uParam19)//Position - 0x17929
{
	var uVar0;
	
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, 0, Param0.f_16);
	func_665(0, -1, 0);
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
				func_190(1);
			}
		}
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	if (!func_664())
	{
		func_366(0);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_611(iLocal_86, 1);
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
	func_661();
	Local_733[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_661()//Position - 0x17A2E
{
	NETWORK::NETWORK_BLOCK_INVITES(1);
	func_662(1, -1);
	NETWORK::_0x4A9FDE3A5A6D0437(1);
	if (func_440(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2428131.f_616 = 1;
}

void func_662(int iParam0, int iParam1)//Position - 0x17A61
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			break;
		
		default:
			uVar1 = func_382(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(uVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_30(120, 0, iParam1, 1);
			func_30(124, 0, iParam1, 1);
			func_30(115, 0, iParam1, 1);
			func_30(119, 0, iParam1, 1);
			break;
	}
}

void func_663()//Position - 0x17AF5
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_746);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	TASK::TASK_TURN_PED_TO_FACE_COORD(0, 17.0693f, -1115.935f, 28.7968f, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_746);
}

int func_664()//Position - 0x17B27
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_423())
		{
			return 0;
		}
		if (func_654(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_665(int iParam0, int iParam1, bool bParam2)//Position - 0x17B80
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_666();
			}
			else
			{
				return 0;
			}
		}
		if (!func_348())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_666();
					}
					else
					{
						return 0;
					}
				}
				if (func_423())
				{
					if (!bParam2)
					{
						func_666();
					}
					else
					{
						return 0;
					}
				}
				if (func_654(155))
				{
					if (!bParam2)
					{
						func_666();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_666();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_666();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_666();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_666()//Position - 0x17C95
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

