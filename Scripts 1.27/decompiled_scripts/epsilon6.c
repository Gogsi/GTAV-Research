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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = -1;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 1000;
	var uLocal_88 = 1000;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	struct<61> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	struct<7> Local_162 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_169 = { 0, 0, 0, 0 } ;
	struct<8> Local_173 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_181 = { 0, 0 } ;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	struct<3> Local_198[3];
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	struct<3> Local_217 = { 0, 0, 0 } ;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	bool bLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	bool bLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	bool bLocal_231 = 0;
	bool bLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	float fLocal_249 = 0f;
	float fLocal_250 = 0f;
	int iLocal_251 = 0;
	struct<3> Local_252 = { 0, 0, 0 } ;
	struct<3> Local_255 = { 0, 0, 0 } ;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 16;
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
	var uLocal_429 = 16;
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
	var uLocal_594 = 16;
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
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	struct<3> Local_763 = { 0, 0, 0 } ;
	struct<3> Local_766 = { 0, 0, 0 } ;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	uLocal_91 = GlobalFunc_4946(60);
	uLocal_92 = GlobalFunc_4946(14);
	iLocal_225 = 1;
	iLocal_235 = -1;
	iLocal_236 = -1;
	fLocal_249 = 300f;
	fLocal_250 = 350f;
	iLocal_251 = 5;
	Local_252 = { 1720.961f, 3254.951f, 42.5f };
	Local_255 = { 1620.34f, 3228.95f, 37.65051f };
	iLocal_262 = -1;
	iLocal_760 = joaat("velum");
	iLocal_761 = joaat("ig_tomepsilon");
	GlobalFunc_2838("*** Epsilon 6 is now running");
	Local_94 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_94);
	GlobalFunc_4923(&Local_94, 0, 1);
	GlobalFunc_9161();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
		GlobalFunc_10102(1);
		func_457();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
		{
			Global_68490 = 1;
			iLocal_90 = 0;
			while (!func_451(&Local_94))
			{
				SYSTEM::WAIT(0);
			}
			Global_68490 = 0;
		}
	}
	if (GlobalFunc_4947(Local_94.f_35[0]))
	{
		Local_155.x = Local_94.f_35[0];
		GlobalFunc_743(Local_155.x, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_155.x, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_155.x, 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		uLocal_759 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_115(Local_94.f_28[0]))
	{
		Local_181 = Local_94.f_28[0];
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_181, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_181, uLocal_759);
		PED::SET_PED_CONFIG_FLAG(Local_181, 132, 1);
	}
	func_444();
	GlobalFunc_2838("*** Epsilon 6 is now in loop");
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_2838("*** Replay detected! Skipping to appropriate stage!");
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(-2907.29f, 3215.91f, 9.866f, 215.2019f, 1, 0);
				break;
			
			case 1:
				GlobalFunc_4972(376.0205f, 2886.552f, 171.3085f, -132.35f, 1, 0);
				func_440(2);
				break;
			
			case 2:
				GlobalFunc_4972(1681.54f, 3259.38f, 39.77f, 298.33f, 1, 0);
				func_440(4);
				break;
			
			case 3:
				GlobalFunc_4972(1688.45f, 3277.15f, 40.08f, 131.1749f, 1, 0);
				func_440(5);
				break;
			
			case 4:
				GlobalFunc_4972(1688.45f, 3277.15f, 40.08f, 131.1749f, 1, 0);
				func_440(6);
				break;
			
			default:
				break;
		}
	}
	else
	{
		func_439(0, 1, 1);
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_Epsilon6", 0);
		SYSTEM::WAIT(0);
		func_423(Local_94.f_9, 0, 0, 0, 0, 0);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SANDY_PLANES"))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("SANDY_PLANES"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("SANDY_PLANES", 0);
				GlobalFunc_2838("Disabled Sandy planes");
			}
		}
		switch (iLocal_189)
		{
			case 0:
				func_422();
				break;
			
			case 1:
				func_419();
				break;
			
			case 2:
				func_383();
				break;
			
			case 3:
				func_374();
				break;
			
			case 4:
				func_344();
				break;
			
			case 5:
				func_23();
				break;
			
			case 6:
				func_2();
				break;
		}
		GlobalFunc_587();
	}
}


void func_2()//Position - 0x364
{
	char* sVar0;
	
	switch (iLocal_190)
	{
		case 0:
			GlobalFunc_2838("*******************    MISSION FAILED    *********************");
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (((iLocal_263 != 8 && iLocal_263 != 5) && iLocal_263 != 10) && iLocal_263 != 11)
			{
				while (GlobalFunc_111())
				{
					GlobalFunc_2838("*** Failed() kill conversation");
					GlobalFunc_4935();
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_4927(37, 1);
			GlobalFunc_846(&(Local_155.f_2));
			GlobalFunc_846(&(Local_173.f_1));
			GlobalFunc_846(&(Local_169.f_3));
			if (bLocal_223)
			{
				GlobalFunc_173(&uLocal_594, 3, Local_173, "JIMMYBOSTON", 0, 1);
				GlobalFunc_173(&uLocal_594, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			switch (iLocal_263)
			{
				case 4:
					sVar0 = "EPS6_FAIL";
					break;
				
				case 7:
					sVar0 = "EPS6_DEAD";
					break;
				
				case 8:
					sVar0 = "EPS6_HURT";
					break;
				
				case 5:
					sVar0 = "EPS6_SPOOK";
					break;
				
				case 6:
					sVar0 = "EPS6_ATTACK";
					break;
				
				case 1:
					sVar0 = "EPS6_04";
					break;
				
				case 2:
					sVar0 = "EPS6_LEFT";
					break;
				
				case 3:
					sVar0 = "EPS6_ABAND";
					break;
				
				case 9:
					sVar0 = "EPS6_BUDDYDEAD";
					break;
				
				case 10:
					sVar0 = "EPS6_BUDDYSPOOK";
					break;
				
				case 11:
					sVar0 = "EPS6_BUDDYHURT";
					break;
				
				case 12:
					sVar0 = "EPS6_STICKYB";
					break;
				
				default:
					break;
			}
			if (iLocal_263 == 0)
			{
				GlobalFunc_10102(1);
			}
			else
			{
				GlobalFunc_10700(sVar0, 1);
			}
			iLocal_190 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (bLocal_232)
				{
					GlobalFunc_5129(-2932.734f, 3241.304f, 9.452f, 228.8328f);
					GlobalFunc_5166(-2932.734f, 3241.304f, 9.452f, 228.8328f);
				}
				func_3(0);
				func_457();
			}
			else if (bLocal_223)
			{
			}
			break;
	}
}

void func_3(bool bParam0)//Position - 0x544
{
	if (bParam0)
	{
		GlobalFunc_2838("DeleteEverything: Releasing entities");
		GlobalFunc_2297(&Local_173, 1, 0, 1);
		GlobalFunc_190(&Local_155);
		STREAMING::REMOVE_ANIM_DICT(Local_173.f_6);
		GlobalFunc_190(&Local_162);
		if (GlobalFunc_115(Local_181))
		{
			if (PED::IS_PED_IN_GROUP(Local_181))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_181);
			}
		}
		GlobalFunc_2297(&Local_181, 1, 0, 1);
	}
	else
	{
		GlobalFunc_6692(&Local_155);
		GlobalFunc_2838("Deleted Plane");
		if (ENTITY::DOES_ENTITY_EXIST(Local_155.x))
		{
			GlobalFunc_2838("Plane still exists!!");
		}
		STREAMING::REMOVE_ANIM_DICT(Local_173.f_6);
		GlobalFunc_69(&Local_173);
		GlobalFunc_6692(&Local_162);
		GlobalFunc_69(&Local_181);
	}
}




















void func_23()//Position - 0xA37
{
	switch (iLocal_190)
	{
		case 0:
			GlobalFunc_2838("*** Doing Wait for Jimmy init");
			GlobalFunc_Checkpoint6(3, "Wait For Jimmy stage", 0, 0, 0, 1);
			if (iLocal_208 == 1)
			{
				func_261();
				if (!GlobalFunc_188())
				{
					func_439(1, 1, 1);
				}
				iLocal_208 = 0;
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(501, "Eps6_Takeoff");
			iLocal_242 = 0;
			iLocal_244 = 0;
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				func_439(1, 1, 1);
			}
			if (GlobalFunc_4947(Local_162))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_162, 1);
			}
			if (iLocal_262 != -1)
			{
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_262);
				GlobalFunc_2838("Navmesh blocking object removed");
			}
			iLocal_248 = (MISC::GET_GAME_TIMER() - 6000);
			GlobalFunc_2838("*** Going into Wait for Jimmy loop");
			iLocal_190 = 1;
			break;
		
		case 1:
			if (func_258())
			{
				func_255();
			}
			if (bLocal_209)
			{
				iLocal_190 = 2;
			}
			else
			{
				func_232();
				if (func_231())
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_155.x, 1) > 300f && !ENTITY::IS_ENTITY_ON_SCREEN(Local_155.x))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
						TASK::TASK_PLANE_MISSION(0, Local_155.x, 0, 0, 3891.478f, 2298.554f, 301.6707f, 4, 40f, 10f, -1f, 300, 30);
						TASK::TASK_PLANE_MISSION(0, Local_155.x, 0, 0, 1562.099f, 2167.677f, 329.9366f, 4, 40f, 10f, -1f, 300, 100);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_260, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
						TASK::TASK_PERFORM_SEQUENCE(Local_173, uLocal_260);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_260);
						iLocal_190 = 2;
					}
					if (((((!GlobalFunc_111() && !PED::IS_PED_FLEEING(Local_173)) && !PED::IS_PED_RAGDOLL(Local_173)) && !PED::IS_PED_PRONE(Local_173)) && !PED::IS_PED_INJURED(Local_173)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_173, 0))
					{
						if (GlobalFunc_156(Local_173, PLAYER::PLAYER_PED_ID(), 1) <= 2.3f)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_248) > 8000)
							{
								if (GlobalFunc_10618(&uLocal_594, "EPS6AUD", "EPS6_FOLLOW", 7, 0, 0, 0))
								{
									iLocal_248 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					switch (iLocal_242)
					{
						case 0:
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_173, Local_155.x))
							{
								iLocal_242++;
							}
							break;
						
						case 1:
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
							{
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff"))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_155.x, 501, "Eps6_Takeoff", 1);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_155.x, 1);
									GlobalFunc_2838("Started vehicle recording on plane #2");
									iLocal_242++;
									iLocal_243 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								GlobalFunc_2838("Unpaused vehicle recording on plane");
								VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_155.x);
								VEHICLE::SET_HELI_BLADES_SPEED(Local_155.x, 1f);
								iLocal_242++;
								iLocal_243 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
							{
								VEHICLE::SET_HELI_BLADES_SPEED(Local_155.x, 1f);
								if (iLocal_244 == 0)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_243) > 23000)
									{
										GlobalFunc_2838(" Retracting Jimmy's landing gear");
										VEHICLE::CONTROL_LANDING_GEAR(Local_155.x, 1);
										iLocal_244 = 1;
									}
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
								TASK::TASK_PLANE_MISSION(0, Local_155.x, 0, 0, 3891.478f, 2298.554f, 301.6707f, 4, 40f, 10f, -1f, 300, 30);
								TASK::TASK_PLANE_MISSION(0, Local_155.x, 0, 0, 1562.099f, 2167.677f, 329.9366f, 4, 40f, 10f, -1f, 300, 100);
								TASK::SET_SEQUENCE_TO_REPEAT(uLocal_260, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
								TASK::TASK_PERFORM_SEQUENCE(Local_173, uLocal_260);
								if (GlobalFunc_4947(Local_155.x))
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_155.x, 1, 1);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_260);
								iLocal_242++;
							}
							break;
						
						case 3:
							iLocal_190 = 2;
							break;
					}
				}
				else
				{
					iLocal_263 = 4;
					iLocal_190 = 0;
					iLocal_189 = 6;
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
					{
						bLocal_232 = true;
					}
					AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("*** Doing Wait for Jimmy cleanup");
			if (!bLocal_209)
			{
				if (func_231())
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) != 3 || VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) != 1)
					{
						GlobalFunc_2838(" Retracting Jimmy's landing gear (cleanup)");
						VEHICLE::CONTROL_LANDING_GEAR(Local_155.x, 1);
					}
				}
				GlobalFunc_2297(&Local_173, 1, 0, 1);
				GlobalFunc_190(&Local_155);
			}
			else
			{
				GlobalFunc_69(&Local_173);
				GlobalFunc_6692(&Local_155);
			}
			func_24();
			break;
	}
}

void func_24()//Position - 0xE28
{
	int iVar0;
	
	GlobalFunc_4927(37, 0);
	func_26(78, 1);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 17)
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), 17, 1);
		GlobalFunc_4(23, 17);
	}
	GlobalFunc_2838("Doing cleanup now");
	func_457();
}


void func_26(int iParam0, bool bParam1)//Position - 0xEF6
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
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
	func_53();
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



























void func_53()//Position - 0x2251
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
				if (func_169(iVar1, 14, iVar2))
				{
					func_54(iVar1, 14, iVar2);
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

int func_54(int iParam0, int iParam1, int iParam2)//Position - 0x2312
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
	if (!func_169(iParam0, iParam1, iParam2))
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
				func_54(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_54(iParam0, 14, uVar20[iVar18]))
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
	if (func_95(iParam0, iVar0, &iVar46, 0))
	{
		func_57(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_55(iParam0, iVar0, &iVar46))
	{
		func_57(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x24CB
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_169(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_57(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2592
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
				iVar5 = GlobalFunc_7197(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7197(iParam0, 9);
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
			iVar7 = GlobalFunc_8023(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_8023(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_8023(iParam0, 2);
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
							GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_65(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_57(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = func_65(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_57(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_63(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_95(iParam0, iVar10, &iVar4, 1))
							{
								func_57(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_57(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_57(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_57(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_57(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_57(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_57(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_65(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_57(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_65(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_57(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_65(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_57(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_95(iParam0, iVar10, &iVar4, 0))
		{
			func_57(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_55(iParam0, iVar10, &iVar4))
		{
			func_57(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x35A5
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_169(iParam0, iParam1, iVar0))
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
				if (func_169(iParam0, iParam1, iVar1))
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
				return GlobalFunc_8023(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7197(iParam0, iParam1);
		}
	}
	return -99;
}


int func_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x394D
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_7197(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7197(uParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_8022(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_8022(uParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_8022(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_8022(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_8022(uParam0, 3, 176, 191) && !GlobalFunc_8022(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_7197(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7197(uParam0, 11);
								iVar5 = GlobalFunc_11156(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7197(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_7197(uParam0, 8);
								iVar8 = GlobalFunc_7197(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_7197(uParam0, 11);
								iVar0 = GlobalFunc_11156(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}






























int func_95(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7C45
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_169(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}










































































int func_169(int iParam0, int iParam1, int iParam2)//Position - 0x1E5E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_169(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_169(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_169(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7197(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_169(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}






























































int func_231()//Position - 0x26227
{
	if (GlobalFunc_4947(Local_155.x))
	{
		if (VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) == 4)
		{
			GlobalFunc_2838("Detected plane landing gear is broken");
			return 0;
		}
		else if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_155.x))
		{
			GlobalFunc_2838("Detected plane is stuck on roof");
			return 0;
		}
		else if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_155.x) <= 0f)
		{
			GlobalFunc_2838("Detected plane engine health is <= 0");
			return 0;
		}
		else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_155.x, 3, 30000))
		{
			GlobalFunc_2838("Detected plane IS_VEHICLE_STUCK_TIMER_UP > JAMMED_TIME");
			return 0;
		}
		else
		{
			return 1;
		}
	}
	GlobalFunc_2838("The plane is broken!");
	return 0;
}

void func_232()//Position - 0x262AC
{
	if (GlobalFunc_115(Local_173))
	{
		if (func_236(Local_173, 0, 1116471296, 1126825984, 1, 0, 0, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_173, 1), 3f, 1))
		{
			if (iLocal_189 != 5 && iLocal_189 != 3)
			{
				bLocal_232 = true;
			}
			iLocal_263 = 6;
			iLocal_190 = 0;
			iLocal_189 = 6;
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			GlobalFunc_173(&uLocal_594, 3, Local_173, "JIMMYBOSTON", 0, 1);
			GlobalFunc_173(&uLocal_594, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
				GlobalFunc_5157(&uLocal_594, "EPS6AUD", "EPS6_SHOT", 9, 1, 0);
			}
			else
			{
				GlobalFunc_10618(&uLocal_594, "EPS6AUD", "EPS6_SHOT", 9, 1, 0, 0);
			}
			func_234();
		}
		else if ((GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), Local_173, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_173, 1), 3f, 0)) || PED::IS_PED_BEING_JACKED(Local_173))
		{
			if (iLocal_189 != 5 && iLocal_189 != 3)
			{
				bLocal_232 = true;
			}
			iLocal_263 = 5;
			iLocal_190 = 0;
			iLocal_189 = 6;
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			GlobalFunc_173(&uLocal_594, 3, Local_173, "JIMMYBOSTON", 0, 1);
			GlobalFunc_173(&uLocal_594, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
				GlobalFunc_5157(&uLocal_594, "EPS6AUD", "EPS6_SHOT", 9, 1, 0);
			}
			else
			{
				GlobalFunc_10618(&uLocal_594, "EPS6AUD", "EPS6_SHOT", 9, 1, 0, 0);
			}
			func_234();
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_173, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_173, 0, 2))
			{
				if (iLocal_189 != 5 && iLocal_189 != 3)
				{
					bLocal_232 = true;
				}
				iLocal_263 = 8;
				iLocal_190 = 0;
				iLocal_189 = 6;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
				GlobalFunc_173(&uLocal_594, 3, Local_173, "JIMMYBOSTON", 0, 1);
				GlobalFunc_173(&uLocal_594, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
					GlobalFunc_5157(&uLocal_594, "EPS6AUD", "EPS6_SHOT", 9, 1, 0);
				}
				else
				{
					GlobalFunc_10618(&uLocal_594, "EPS6AUD", "EPS6_SHOT", 9, 1, 0, 0);
				}
				func_234();
			}
		}
	}
	else if (iLocal_229 == 1)
	{
		if (iLocal_189 != 5 && iLocal_189 != 3)
		{
			bLocal_232 = true;
		}
		iLocal_263 = 7;
		iLocal_190 = 0;
		iLocal_189 = 6;
		AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
	}
}


void func_234()//Position - 0x26531
{
	if (GlobalFunc_115(Local_173))
	{
		TASK::CLEAR_PED_TASKS(Local_173);
		PED::SET_PED_KEEP_TASK(Local_173, 1);
		TASK::TASK_SMART_FLEE_PED(Local_173, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
	}
}


int func_236(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2659C
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
		else if (func_237(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, float fParam1)//Position - 0x26657
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
				if (func_238(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_238(int iParam0, float fParam1)//Position - 0x266CD
{
	return func_239(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_239(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x266E5
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_247(iParam0, iParam1);
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
		iVar4 = func_242();
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



int func_242()//Position - 0x26997
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





int func_247(int iParam0, int iParam1)//Position - 0x26AED
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








void func_255()//Position - 0x26F0D
{
	if (GlobalFunc_115(Local_181))
	{
		func_256(6);
	}
	iLocal_263 = 12;
	iLocal_190 = 0;
	iLocal_189 = 6;
	AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
}

void func_256(int iParam0)//Position - 0x26F36
{
	func_257(iParam0);
	iLocal_193 = iParam0;
	iLocal_194 = 0;
}

void func_257(var uParam0)//Position - 0x26F4B
{
	uParam0 = uParam0;
}

int func_258()//Position - 0x26F57
{
	if (func_231())
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_155.x, 0), joaat("weapon_stickybomb"), 10f, 0))
		{
			GlobalFunc_2838("Sticky bomb in range of plane");
			return 1;
		}
	}
	return 0;
}



void func_261()//Position - 0x27064
{
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	switch (iLocal_189)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_761);
			STREAMING::REQUEST_MODEL(iLocal_760);
			STREAMING::REQUEST_ANIM_DICT("rcm_epsilonism4");
			while ((!STREAMING::HAS_MODEL_LOADED(iLocal_761) || !STREAMING::HAS_MODEL_LOADED(iLocal_760)) || !STREAMING::HAS_ANIM_DICT_LOADED("rcm_epsilonism4"))
			{
				GlobalFunc_2838("WAITING FOR MS_INIT RESOURCES");
				SYSTEM::WAIT(0);
			}
			iLocal_210 = 0;
			iLocal_224 = 0;
			iLocal_233 = 0;
			iLocal_258 = 0;
			iLocal_229 = 0;
			iLocal_228 = 0;
			iLocal_234 = 0;
			iLocal_237 = 0;
			iLocal_192 = 0;
			iLocal_193 = 0;
			iLocal_194 = 0;
			func_282();
			func_275();
			func_273();
			func_271();
			GlobalFunc_846(&(Local_169.f_3));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_761);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_760);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_760);
			STREAMING::REQUEST_MODEL(iLocal_761);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_760) || !STREAMING::HAS_MODEL_LOADED(iLocal_761))
			{
				GlobalFunc_2838("WAITING FOR MS_FLIGHT RESOURCES");
				SYSTEM::WAIT(0);
			}
			iLocal_224 = 0;
			iLocal_233 = 0;
			iLocal_229 = 0;
			iLocal_228 = 0;
			iLocal_192 = 2;
			iLocal_193 = 4;
			iLocal_194 = 0;
			func_273();
			func_275();
			func_282();
			func_271();
			AUDIO::STOP_SOUND(iLocal_236);
			AUDIO::STOP_SOUND(iLocal_235);
			AUDIO::TRIGGER_MUSIC_EVENT("EPS6_START");
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_761);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_760);
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_760);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_760))
			{
				GlobalFunc_2838("WAITING FOR MS_LANDING SKIP RESOURCES");
				SYSTEM::WAIT(0);
			}
			iLocal_192 = 3;
			iLocal_193 = 6;
			iLocal_225 = 0;
			iLocal_226 = 0;
			iLocal_229 = 0;
			func_282();
			func_273();
			func_271();
			GlobalFunc_846(&(Local_173.f_1));
			AUDIO::STOP_SOUND(iLocal_236);
			AUDIO::STOP_SOUND(iLocal_235);
			AUDIO::TRIGGER_MUSIC_EVENT("EPS6_START");
			GlobalFunc_Checkpoint6(1, "Landing stage", 0, 0, 0, 1);
			iLocal_228 = 1;
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			if (func_231())
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 200f, 12, 5000, 0, 0);
				}
				if (func_231())
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_155.x, 0);
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Eps6_LandingSkip"))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
						{
							if (!GlobalFunc_188())
							{
								GlobalFunc_2838("Doing plane boost");
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_155.x, 500, "Eps6_LandingSkip", 1);
							}
						}
					}
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_760);
			break;
		
		case 3:
			STREAMING::REQUEST_ANIM_DICT(Local_173.f_6);
			STREAMING::REQUEST_MODEL(iLocal_760);
			STREAMING::REQUEST_MODEL(Local_162.f_1);
			GlobalFunc_7049(55);
			while (((!STREAMING::HAS_MODEL_LOADED(iLocal_760) || !STREAMING::HAS_MODEL_LOADED(Local_162.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_173.f_6)) || !GlobalFunc_7048(55))
			{
				GlobalFunc_2838("WAITING FOR MS_SEEJIMMY RESOURCES");
				SYSTEM::WAIT(0);
			}
			func_282();
			func_273();
			func_275();
			func_262();
			func_271();
			GlobalFunc_846(&(Local_169.f_3));
			GlobalFunc_846(&(Local_181.f_1));
			AUDIO::STOP_SOUND(iLocal_236);
			AUDIO::STOP_SOUND(iLocal_235);
			AUDIO::TRIGGER_MUSIC_EVENT("EPS6_START");
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_760);
			if (iLocal_262 != -1)
			{
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_262);
				GlobalFunc_2838("Navmesh blocking object removed");
				iLocal_262 = -1;
			}
			iLocal_251 = 5;
			break;
		
		case 4:
			if (!GlobalFunc_188())
			{
				CUTSCENE::REQUEST_CUTSCENE("ep_6_rcm", 4);
			}
			STREAMING::REQUEST_MODEL(Local_162.f_1);
			STREAMING::REQUEST_MODEL(Local_155.f_1);
			STREAMING::REQUEST_ANIM_DICT(Local_173.f_6);
			VEHICLE::REQUEST_VEHICLE_RECORDING(501, "Eps6_Takeoff");
			GlobalFunc_7049(55);
			if (!GlobalFunc_188())
			{
				while (((((!STREAMING::HAS_MODEL_LOADED(Local_162.f_1) || !CUTSCENE::HAS_CUTSCENE_LOADED()) || !STREAMING::HAS_MODEL_LOADED(Local_155.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_173.f_6)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff")) || !GlobalFunc_7048(55))
				{
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
					}
					GlobalFunc_2838("WAITING FOR MS_ENDCUTSCENE RESOURCES");
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				while ((((!STREAMING::HAS_MODEL_LOADED(Local_162.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_155.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_173.f_6)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff")) || !GlobalFunc_7048(55))
				{
					GlobalFunc_2838("WAITING FOR MS_ENDCUTSCENE RESOURCES");
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_846(&(Local_169.f_3));
			GlobalFunc_846(&(Local_181.f_1));
			AUDIO::STOP_SOUND(iLocal_236);
			AUDIO::STOP_SOUND(iLocal_235);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_262();
			func_273();
			func_275();
			func_282();
			func_271();
			if (!GlobalFunc_188())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(5000);
				}
			}
			if (iLocal_262 != -1)
			{
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_262);
				GlobalFunc_2838("Navmesh blocking object removed");
				iLocal_262 = -1;
			}
			if (iLocal_262 == -1)
			{
				iLocal_262 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1687.954f, 3277.727f, 40.25f, 6f, 6f, 6f, 0f, 0, 7);
				GlobalFunc_2838("Navmesh blocking object created");
			}
			break;
		
		case 5:
			STREAMING::REQUEST_ANIM_DICT(Local_173.f_6);
			STREAMING::REQUEST_MODEL(Local_162.f_1);
			STREAMING::REQUEST_MODEL(Local_155.f_1);
			VEHICLE::REQUEST_VEHICLE_RECORDING(501, "Eps6_Takeoff");
			GlobalFunc_7049(55);
			while ((((!STREAMING::HAS_MODEL_LOADED(Local_162.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_155.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_173.f_6)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff")) || !GlobalFunc_7048(55))
			{
				GlobalFunc_2838("WAITING FOR MS_WAITFORJIMMY RESOURCES");
				SYSTEM::WAIT(0);
			}
			GlobalFunc_846(&(Local_169.f_3));
			GlobalFunc_846(&(Local_181.f_1));
			AUDIO::STOP_SOUND(iLocal_236);
			AUDIO::STOP_SOUND(iLocal_235);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_282();
			func_273();
			func_275();
			func_262();
			func_271();
			break;
	}
}

void func_262()//Position - 0x275DE
{
	switch (iLocal_189)
	{
		case 4:
		case 5:
			if (!GlobalFunc_4947(Local_162))
			{
				Local_162 = VEHICLE::CREATE_VEHICLE(Local_162.f_1, Local_162.f_3, Local_162.f_6, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_162);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Local_162, 1);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_162, 13f);
				VEHICLE::SET_VEHICLE_COLOURS(Local_162, 157, 157);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_162, 157, 5);
			}
			break;
		
		default:
			if (!GlobalFunc_4947(Local_162))
			{
				Local_162 = VEHICLE::CREATE_VEHICLE(Local_162.f_1, Local_162.f_3, Local_162.f_6, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_162);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Local_162, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_162, 3);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_162, 13f);
				VEHICLE::SET_VEHICLE_COLOURS(Local_162, 157, 157);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_162, 157, 5);
			}
			break;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_162.f_1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_162.f_1);
}









void func_271()//Position - 0x278E0
{
	switch (iLocal_189)
	{
		case 0:
			if (GlobalFunc_115(Local_181))
			{
				ENTITY::SET_ENTITY_HEADING(Local_181, 254.1723f);
				ENTITY::SET_ENTITY_COORDS(Local_181, -2881.755f, 3188.125f, 10.1136f, 1, 0, 0, 1);
				TASK::CLEAR_PED_TASKS(Local_181);
				func_272();
			}
			else
			{
				GlobalFunc_69(&Local_181);
				Local_181 = PED::CREATE_PED(26, iLocal_761, -2881.755f, 3188.125f, 10.1136f, 254.1723f, 1, 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_181);
				func_272();
			}
			if (GlobalFunc_115(Local_181))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_181, 0f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_181, 1);
				PED::SET_PED_CONFIG_FLAG(Local_181, 167, 1);
				AUDIO::STOP_PED_SPEAKING(Local_181, 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_181, 1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_181, 0);
				PED::SET_PED_CONFIG_FLAG(Local_181, 185, 1);
				PED::SET_PED_CONFIG_FLAG(Local_181, 188, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_181, uLocal_759);
				PED::SET_PED_CONFIG_FLAG(Local_181, 132, 1);
				GlobalFunc_173(&uLocal_264, 4, Local_181, "TOM", 1, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_115(Local_181))
			{
				ENTITY::SET_ENTITY_HEADING(Local_181, 254.1723f);
				ENTITY::SET_ENTITY_COORDS(Local_181, -2889.89f, 3198.69f, 10.11f, 1, 0, 0, 1);
				TASK::CLEAR_PED_TASKS(Local_181);
			}
			else
			{
				GlobalFunc_69(&Local_181);
				Local_181 = PED::CREATE_PED(26, iLocal_761, -2889.89f, 3198.69f, 10.11f, 254.1723f, 1, 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_181);
			}
			if (GlobalFunc_115(Local_181))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_181, 0f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_181, 1);
				PED::SET_PED_CONFIG_FLAG(Local_181, 167, 1);
				AUDIO::STOP_PED_SPEAKING(Local_181, 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_181, 1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_181, 0);
				PED::SET_PED_CONFIG_FLAG(Local_181, 188, 0);
				PED::SET_PED_CONFIG_FLAG(Local_181, 185, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_181, uLocal_759);
				PED::SET_PED_CONFIG_FLAG(Local_181, 132, 1);
				GlobalFunc_173(&uLocal_264, 4, Local_181, "TOM", 1, 1);
			}
			break;
		
		default:
			if (GlobalFunc_115(Local_181))
			{
				if (PED::IS_PED_IN_GROUP(Local_181))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_181);
				}
			}
			GlobalFunc_846(&(Local_181.f_1));
			GlobalFunc_69(&Local_181);
			break;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_761);
}

void func_272()//Position - 0x27AD1
{
	WEAPON::GIVE_WEAPON_TO_PED(Local_181, joaat("weapon_digiscanner"), 0, 1, 1);
	PED::SET_PED_CAN_SWITCH_WEAPON(Local_181, 0);
	AUDIO::STOP_PED_SPEAKING(Local_181, 1);
	PED::SET_PED_DIES_WHEN_INJURED(Local_181, 1);
	PED::SET_PED_CAN_BE_TARGETTED(Local_181, 0);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2887.95f, 3194.88f, 10.06f, -2887.95f, 3194.88f, 10.06f, 1.2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
	TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2888.92f, 3203.76f, 10.6f, -2888.92f, 3203.76f, 10.6f, 1.2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
	TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2895.37f, 3199.37f, 10.03f, -2895.37f, 3199.37f, 10.03f, 1.2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
	TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
	TASK::SET_SEQUENCE_TO_REPEAT(uLocal_260, 1);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
	TASK::TASK_PERFORM_SEQUENCE(Local_181, uLocal_260);
}

void func_273()//Position - 0x27C1E
{
	switch (iLocal_189)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_155.x))
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -2882.42f, 3197.76f, 10.74f, 0, 0, 1);
					}
				}
				VEHICLE::DELETE_VEHICLE(&Local_155);
			}
			Local_155.x = VEHICLE::CREATE_VEHICLE(iLocal_760, -2892.93f, 3192.37f, 11.66f, -132.35f, 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_155.x);
			VEHICLE::SET_VEHICLE_COLOURS(Local_155.x, 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_155.x, 157, 5);
			VEHICLE::SET_VEHICLE_LIVERY(Local_155.x, 3);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_155.x, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_155.x, 1);
			GlobalFunc_743(Local_155.x, 0);
			GlobalFunc_2838("Creating plane in init skip...");
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_155.x))
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -2882.42f, 3197.76f, 10.74f, 0, 0, 1);
					}
				}
				VEHICLE::DELETE_VEHICLE(&Local_155);
			}
			Local_155.x = VEHICLE::CREATE_VEHICLE(iLocal_760, -2892.93f, 3192.37f, 11.66f, -132.35f, 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_155.x);
			VEHICLE::SET_VEHICLE_COLOURS(Local_155.x, 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_155.x, 157, 5);
			VEHICLE::SET_VEHICLE_LIVERY(Local_155.x, 3);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_155.x, 1, 1);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_155.x, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_155.x, 1);
			GlobalFunc_743(Local_155.x, 0);
			GlobalFunc_2838("Creating plane in Flight skip...");
			break;
		
		case 2:
			if (func_231())
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_155.x, 1);
				ENTITY::SET_ENTITY_HEADING(Local_155.x, 290.823f);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_155.x, 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_155.x, 75f);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_155.x, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_155.x, 1);
				VEHICLE::CONTROL_LANDING_GEAR(Local_155.x, 3);
				ENTITY::FREEZE_ENTITY_POSITION(Local_155.x, 1);
			}
			else
			{
				Local_155.x = VEHICLE::CREATE_VEHICLE(iLocal_760, 595.7562f, 2926.42f, 173.2301f, 283.3833f, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_155.x);
				VEHICLE::SET_VEHICLE_COLOURS(Local_155.x, 157, 157);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_155.x, 157, 5);
				VEHICLE::SET_VEHICLE_LIVERY(Local_155.x, 3);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_155.x, 1, 1);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_155.x, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_155.x, 1);
				GlobalFunc_743(Local_155.x, 0);
				if (!GlobalFunc_188())
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, -1);
				}
				VEHICLE::CONTROL_LANDING_GEAR(Local_155.x, 3);
				ENTITY::FREEZE_ENTITY_POSITION(Local_155.x, 1);
				GlobalFunc_2838("Creating plane for landing skip...");
			}
			break;
		
		case 3:
		case 4:
			GlobalFunc_2838("Doing plane skip for SeeJimmy/EndCutscene");
			if (GlobalFunc_4947(Local_155.x))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_155.x);
				}
				GlobalFunc_6692(&Local_155);
			}
			Local_155.x = VEHICLE::CREATE_VEHICLE(Local_155.f_1, 1684.78f, 3255.58f, 41.78f, 284.26f, 1, 1);
			if (GlobalFunc_4947(Local_155.x))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_155.x);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_155.x, 3);
				VEHICLE::SET_VEHICLE_COLOURS(Local_155.x, 157, 157);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_155.x, 157, 5);
				VEHICLE::SET_VEHICLE_LIVERY(Local_155.x, 3);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_155.x, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_155.x, 1);
				GlobalFunc_743(Local_155.x, 0);
			}
			GlobalFunc_846(&(Local_155.f_2));
			break;
		
		case 5:
			GlobalFunc_2838("Doing plane skip for WaitForJimmy");
			if (!bLocal_209)
			{
				if (GlobalFunc_4947(Local_155.x))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_155.x);
					}
					GlobalFunc_6692(&Local_155);
				}
				Local_155.x = VEHICLE::CREATE_VEHICLE(Local_155.f_1, 1674.91f, 3252.47f, 41.69f, 284.26f, 1, 1);
				if (GlobalFunc_4947(Local_155.x))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_155.x);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_155.x, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_155.x, 157, 157);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_155.x, 157, 5);
					VEHICLE::SET_VEHICLE_LIVERY(Local_155.x, 3);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_155.x, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_155.x, 1);
					GlobalFunc_743(Local_155.x, 0);
				}
				GlobalFunc_846(&(Local_155.f_2));
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_155.x, 501, "Eps6_Takeoff", 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_155.x, 1);
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_155.x);
						GlobalFunc_2838("Started/paused vehicle recording on plane (skip)");
					}
				}
			}
			else
			{
				GlobalFunc_846(&(Local_155.f_2));
				GlobalFunc_6692(&Local_155);
			}
			break;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_155.f_1, 1);
}


void func_275()//Position - 0x2806F
{
	switch (iLocal_189)
	{
		case 0:
		case 1:
			GlobalFunc_69(&Local_173);
			GlobalFunc_846(&(Local_173.f_1));
			break;
		
		case 2:
		case 3:
		case 4:
			if (!GlobalFunc_115(Local_173))
			{
				while (!GlobalFunc_8025(&Local_173, 55, Local_173.f_2, Local_173.f_5, "JimmyB", 1))
				{
					SYSTEM::WAIT(0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_173, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_173, 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_173, 0);
				PED::SET_PED_CONFIG_FLAG(Local_173, 185, 1);
				PED::SET_PED_PROP_INDEX(Local_173, 1, 0, 0, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_173, uLocal_759);
				PED::SET_PED_CONFIG_FLAG(Local_173, 132, 1);
				TASK::TASK_PLAY_ANIM(Local_173, Local_173.f_6, Local_173.f_7, 8f, -8f, -1, 49, 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5705(Local_173, Local_173.f_2, Local_173.f_5, 0, 1);
				if (GlobalFunc_115(Local_173))
				{
					TASK::TASK_PLAY_ANIM(Local_173, Local_173.f_6, Local_173.f_7, 8f, -8f, -1, 49, 0, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_173, 1, 0, 0, false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_261))
			{
				iLocal_261 = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), ENTITY::GET_ENTITY_COORDS(Local_173, 1), 1, 1, 0);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_261))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_261, Local_173, PED::GET_PED_BONE_INDEX(Local_173, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
			}
			GlobalFunc_7052(55);
			break;
		
		case 5:
			if (!bLocal_209)
			{
				if (!GlobalFunc_115(Local_173))
				{
					while (!GlobalFunc_8025(&Local_173, 55, 1683.76f, 3270.74f, 39.78f, 168.3395f, "JimmyB", 1))
					{
						SYSTEM::WAIT(0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_173, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_173, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_173, 0);
					PED::SET_PED_CONFIG_FLAG(Local_173, 185, 1);
					PED::SET_PED_PROP_INDEX(Local_173, 1, 0, 0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_173, uLocal_759);
					PED::SET_PED_CONFIG_FLAG(Local_173, 132, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_173.f_1))
					{
						Local_173.f_1 = GlobalFunc_5739(Local_173, 1, 1, 9);
					}
					if (GlobalFunc_115(Local_173) && func_231())
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1682.44f, 3258.81f, 39.81f, 2f, 20000, 7.5f, 1, 1193033728);
						TASK::TASK_ENTER_VEHICLE(0, Local_155.x, 20000, -1, 1073741824, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
						TASK::TASK_PERFORM_SEQUENCE(Local_173, uLocal_260);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_260);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_173, 0, 0);
				}
				else
				{
					GlobalFunc_5705(Local_173, 1683.76f, 3270.74f, 39.78f, 168.3395f, 0, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_173.f_1))
					{
						Local_173.f_1 = GlobalFunc_5739(Local_173, 1, 1, 9);
					}
					if (GlobalFunc_115(Local_173) && func_231())
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1682.44f, 3258.81f, 39.81f, 2f, 20000, 7.5f, 1, 1193033728);
						TASK::TASK_ENTER_VEHICLE(0, Local_155.x, 20000, -1, 1073741824, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
						TASK::TASK_PERFORM_SEQUENCE(Local_173, uLocal_260);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_260);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_173, 1, 0);
				}
				GlobalFunc_130(&iLocal_261);
			}
			else
			{
				GlobalFunc_846(&(Local_173.f_1));
				GlobalFunc_69(&Local_173);
			}
			GlobalFunc_7052(55);
			break;
	}
}







void func_282()//Position - 0x2856C
{
	switch (iLocal_189)
	{
		case 0:
			GlobalFunc_2838("*** Moving/realigning player...");
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -2914.707f, 3234.639f, 9.7863f, 215.2149f, 0, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_4947(Local_155.x))
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -2892.93f, 3192.37f, 11.66f, 0, 0, 1);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, -1);
			}
			break;
		
		case 2:
			if (!GlobalFunc_188())
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4947(Local_155.x))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, -1);
					}
					PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 376.0205f, 2886.552f, 171.3085f);
				}
			}
			break;
		
		case 3:
		case 4:
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 1681.54f, 3259.38f, 39.77f, 298.33f, 0, 1);
			}
			break;
		
		case 5:
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 1688.45f, 3277.15f, 40.08f, 131.1749f, 1, 1);
			}
			break;
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}






























































void func_344()//Position - 0x2DAE8
{
	switch (iLocal_190)
	{
		case 0:
			GlobalFunc_2838("*** Doing End Cutscene init");
			if (iLocal_208 == 1)
			{
				func_261();
				if (!GlobalFunc_188())
				{
					func_439(1, 1, 1);
				}
				iLocal_208 = 0;
			}
			if (!HUD::DOES_BLIP_EXIST(Local_173.f_1))
			{
				Local_173.f_1 = GlobalFunc_5739(Local_173, 1, 1, 9);
			}
			GlobalFunc_173(&uLocal_594, 3, Local_173, "JIMMYBOSTON", 0, 1);
			GlobalFunc_173(&uLocal_594, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
					CUTSCENE::REQUEST_CUTSCENE("ep_6_rcm", 8);
					GlobalFunc_2838("Requested cutscene for replay skip");
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
					}
					while (!CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GlobalFunc_2838("Waiting for cutscene to load in replay skip...");
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
						}
						SYSTEM::WAIT(0);
					}
					func_439(0, 0, 0);
				}
			}
			if (GlobalFunc_7961(1, 1093140480, 0))
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(1775.157f, 3373.425f, 37.24686f, 1893.735f, 3203.022f, 48.48723f, 96.5f, 0, 0, 1);
				GlobalFunc_846(&(Local_155.f_2));
				if (func_231())
				{
					ENTITY::SET_ENTITY_COORDS(Local_155.x, 1674.91f, 3252.47f, 41.69f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_155.x, 284.26f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
				}
				else
				{
					GlobalFunc_6692(&Local_155);
					Local_155.x = VEHICLE::CREATE_VEHICLE(Local_155.f_1, 1674.91f, 3252.47f, 41.69f, 284.26f, 1, 1);
					GlobalFunc_743(Local_155.x, 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
				}
				if (GlobalFunc_115(Local_173))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_173, "Jimmy_Boston", 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_155.x))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_155.x, "ep_plane", 0, 0, 0);
				}
				RECORDING::_0x48621C9FCA3EBD28(1);
				AUDIO::TRIGGER_MUSIC_EVENT("EPS6_STOP");
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				if (GlobalFunc_Is_Mission_Retry())
				{
					GlobalFunc_79(500, 0);
				}
				GlobalFunc_130(&iLocal_261);
				GlobalFunc_9805(1679.917f, 3270.735f, 39.34466f, 1697.999f, 3281.172f, 44.14951f, 7.75f, 1530.862f, 3767.051f, 33.0489f, 304.28f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_358(1525.085f, 3772.686f, 33.5119f, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				GlobalFunc_2838("*** Going into End Cutscene running state");
				iLocal_190 = 1;
			}
			func_232();
			break;
		
		case 1:
			if (iLocal_245 == 0)
			{
				if (GlobalFunc_4926(1000))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					iLocal_245 = 1;
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
				}
				if (func_355())
				{
					iLocal_245 = 1;
				}
				func_354();
				func_353();
			}
			else if (iLocal_245 == 1)
			{
				func_354();
				func_355();
				func_353();
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					iLocal_190 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("*** Doing End Cutscene cleanup");
			if (GlobalFunc_4947(Local_162))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_155.x, 3);
			}
			GlobalFunc_5705(Local_155.x, 1684.78f, 3255.58f, 41.78f, 284.26f, 0, 1);
			if (STREAMING::IS_STREAMVOL_ACTIVE())
			{
				STREAMING::STREAMVOL_DELETE(uLocal_259);
			}
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1775.157f, 3373.425f, 37.24686f, 1893.735f, 3203.022f, 48.48723f, 96.5f, 1);
			func_345(1, 1, 1, 1);
			iLocal_189 = 5;
			iLocal_190 = 0;
			break;
	}
}

void func_345(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2DE72
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_353()//Position - 0x2E11C
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("ep_plane", 0))
	{
		GlobalFunc_2838("Doing plane exit state");
		if (func_231())
		{
			ENTITY::SET_ENTITY_COORDS(Local_155.x, 1684.78f, 3255.58f, 41.78f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_155.x, 284.26f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
		}
		else
		{
			GlobalFunc_6692(&Local_155);
			Local_155.x = VEHICLE::CREATE_VEHICLE(Local_155.f_1, 1684.78f, 3255.58f, 41.78f, 284.26f, 1, 1);
			GlobalFunc_743(Local_155.x, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_155.x);
		}
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff"))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_155.x, 501, "Eps6_Takeoff", 1);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_155.x, 1);
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_155.x);
				GlobalFunc_2838("Started/paused vehicle recording on plane");
			}
		}
	}
}

void func_354()//Position - 0x2E1DD
{
	if (GlobalFunc_115(Local_173))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
		{
			GlobalFunc_2838("Doing Jimmy exit state");
			if (GlobalFunc_115(Local_173) && func_231())
			{
				GlobalFunc_5705(Local_173, 1682.13f, 3268.65f, 39.75f, 183.3768f, 0, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1682.44f, 3258.81f, 39.81f, 2f, 20000, 7.5f, 1, 1193033728);
				TASK::TASK_ENTER_VEHICLE(0, Local_155.x, 20000, -1, 1073741824, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
				TASK::TASK_PERFORM_SEQUENCE(Local_173, uLocal_260);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_260);
			}
			PED::FORCE_PED_MOTION_STATE(Local_173, -530524, 0, 1, 0);
		}
	}
}

int func_355()//Position - 0x2E294
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_173, -1, 0, 2);
			GlobalFunc_2838("Do Michael exit");
			GlobalFunc_5705(Local_162, Local_162.f_3, Local_162.f_6, 1, 1);
			if (GlobalFunc_4947(Local_162))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_162, 1);
			}
			return 1;
		}
	}
	return 0;
}



void func_358(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2E38D
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
					if (func_169(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_57(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_169(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_57(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_169(PLAYER::PLAYER_PED_ID(), 8, 1) || func_169(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_57(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_169(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_57(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
















void func_374()//Position - 0x2F12A
{
	switch (iLocal_190)
	{
		case 0:
			GlobalFunc_2838("*** Doing See Jimmy init");
			GlobalFunc_Checkpoint6(1, "See Jimmy stage", 0, 0, 0, 1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			GlobalFunc_7049(55);
			STREAMING::REQUEST_ANIM_DICT(Local_173.f_6);
			STREAMING::REQUEST_MODEL(Local_162.f_1);
			STREAMING::REQUEST_MODEL(joaat("p_amb_phone_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(501, "Eps6_Takeoff");
			while ((((!GlobalFunc_7048(55) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_173.f_6)) || !STREAMING::HAS_MODEL_LOADED(Local_162.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("p_amb_phone_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff"))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_208)
			{
				func_261();
				if (!GlobalFunc_188())
				{
					func_439(1, 1, 1);
				}
				iLocal_208 = 0;
			}
			GlobalFunc_173(&uLocal_594, 3, Local_173, "JIMMYBOSTON", 0, 1);
			GlobalFunc_173(&uLocal_594, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (GlobalFunc_115(Local_173))
			{
				TASK::TASK_PLAY_ANIM(Local_173, Local_173.f_6, Local_173.f_7, 8f, -8f, -1, 49, 0, 0, 0, 0);
			}
			if (func_231())
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_155.x, 0, 0);
			}
			if (!HUD::DOES_BLIP_EXIST(Local_173.f_1))
			{
				Local_173.f_1 = GlobalFunc_5739(Local_173, 1, 1, 9);
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				func_439(1, 1, 1);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_2838("Trying to set player component variation (init)");
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_11106("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
			if (iLocal_262 == -1)
			{
				iLocal_262 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1687.954f, 3277.727f, 40.25f, 6f, 6f, 6f, 0f, 0, 7);
				GlobalFunc_2838("Navmesh blocking object created");
			}
			iLocal_240 = (MISC::GET_GAME_TIMER() - 10000);
			iLocal_213 = 0;
			GlobalFunc_2838("*** Going into See Jimmy running state");
			iLocal_190 = 1;
			break;
		
		case 1:
			if (func_258())
			{
				func_255();
			}
			if (GlobalFunc_115(Local_173))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_173, 1) < 100f)
				{
					if (!CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						CUTSCENE::REQUEST_CUTSCENE("ep_6_rcm", 8);
						GlobalFunc_2838("Requesting cutscene now");
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_173, 1) > 120f)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GlobalFunc_2838("Player moved away - unloading midtro");
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_2838("Trying to set player component variation (running)");
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_11106("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
			func_380();
			func_378();
			func_376();
			if (func_231())
			{
				func_232();
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
					{
						iLocal_190 = 2;
						iLocal_189 = 2;
					}
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_173, 13f))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, -1, 0);
						}
						else
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							while (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							iLocal_190 = 2;
						}
					}
				}
				else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_173, 5f))
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_173))
					{
						Local_763 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Local_766 = { ENTITY::GET_ENTITY_COORDS(Local_173, 1) };
						if (((Local_763.f_2 - Local_766.f_2) < 1.5f && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_190 = 2;
						}
					}
				}
			}
			else
			{
				iLocal_263 = 4;
				iLocal_190 = 0;
				iLocal_189 = 6;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
			break;
		
		case 2:
			GlobalFunc_2838("*** Doing See Jimmy cleanup");
			iLocal_189 = 4;
			iLocal_190 = 0;
			break;
	}
}


void func_376()//Position - 0x2F4FE
{
	if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_173, 1) <= 15f)
	{
		if (!STREAMING::IS_STREAMVOL_ACTIVE())
		{
			if (!STREAMING::STREAMVOL_HAS_LOADED(uLocal_259))
			{
				GlobalFunc_2838("Loading streamvol");
				uLocal_259 = STREAMING::STREAMVOL_CREATE_FRUSTUM(1684.85f, 3276.16f, 39.93f, GlobalFunc_590(-2.1719f, 0f, -78.5672f), 50f, 12, 127);
			}
		}
	}
	else if (STREAMING::IS_STREAMVOL_ACTIVE())
	{
		GlobalFunc_2838("Removing streamvol");
		STREAMING::STREAMVOL_DELETE(uLocal_259);
	}
}


void func_378()//Position - 0x2F5AA
{
	float fVar0;
	
	if (GlobalFunc_115(Local_173) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_173, 1), 1);
	}
	if (fVar0 < 50f)
	{
		fLocal_249 = 100f;
		fLocal_250 = 150f;
		iLocal_251 = 1;
	}
	else if (fVar0 < 100f)
	{
		if (iLocal_251 > 1)
		{
			fLocal_249 = 150f;
			fLocal_250 = 200f;
			iLocal_251 = 2;
		}
	}
	else if (fVar0 < 150f)
	{
		if (iLocal_251 > 2)
		{
			fLocal_249 = 200f;
			fLocal_250 = 250f;
			iLocal_251 = 3;
		}
	}
	else if (fVar0 < 200f)
	{
		if (iLocal_251 > 3)
		{
			fLocal_249 = 250f;
			fLocal_250 = 300f;
			iLocal_251 = 4;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_173, 1), 1) > fLocal_249)
	{
		if (!iLocal_213)
		{
			GlobalFunc_164("EPS6_GOBACK", 7500, 1);
			iLocal_213 = 1;
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_173, 1), 1) > fLocal_250)
		{
			iLocal_263 = 2;
			iLocal_190 = 0;
			iLocal_189 = 6;
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
		}
	}
	else if (iLocal_213)
	{
		iLocal_213 = 0;
	}
}


void func_380()//Position - 0x2F6EF
{
	if (GlobalFunc_115(Local_173))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_173, 1) <= 15f)
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Local_173, PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_2838("Jimmy headlooking");
				TASK::TASK_LOOK_AT_ENTITY(Local_173, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
			}
		}
		else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_173, 1) <= 25f && GlobalFunc_111())
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Local_173, PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_2838("Jimmy headlooking (during conv)");
				TASK::TASK_LOOK_AT_ENTITY(Local_173, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
			}
		}
		else if (PED::IS_PED_HEADTRACKING_PED(Local_173, PLAYER::PLAYER_PED_ID()) && !GlobalFunc_111())
		{
			GlobalFunc_2838("Clear Jimmy headlook");
			TASK::TASK_CLEAR_LOOK_AT(Local_173);
		}
	}
	if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (GlobalFunc_115(Local_173) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_173, 25f))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_240) > 15000)
				{
					if (GlobalFunc_10618(&uLocal_594, "EPS6AUD", "EPS6_BECKON", 8, 0, 0, 0))
					{
						iLocal_240 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}



void func_383()//Position - 0x2FB37
{
	switch (iLocal_190)
	{
		case 0:
			GlobalFunc_2838("*** Doing Landing init");
			STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
			if (iLocal_208)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Eps6_LandingSkip");
			}
			GlobalFunc_2838("Landing resources loaded!");
			if (iLocal_208)
			{
				while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Eps6_LandingSkip"))
				{
					GlobalFunc_2838("WAITING FOR LANDING SKIP RECORDING");
					SYSTEM::WAIT(0);
				}
				GlobalFunc_2838("Landing skip loaded!");
			}
			iLocal_251 = 5;
			GlobalFunc_2297(&Local_181, 1, 0, 1);
			iLocal_213 = 0;
			iLocal_228 = 0;
			if (iLocal_208 == 1)
			{
				func_261();
				if (!GlobalFunc_188())
				{
					func_439(1, 1, 1);
				}
				iLocal_208 = 0;
			}
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(1727.442f, 3288.315f, 39.406f, 1706.909f, 3280.669f, 45.13256f, 14.25f, 0, 0, 0, 0, 0);
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(Local_155.x, -1, 1);
					if (GlobalFunc_4947(Local_155.x))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_155.x, 500, "Eps6_LandingSkip", 1);
					}
					SYSTEM::WAIT(750);
				}
				func_439(1, 1, 1);
			}
			func_417();
			GlobalFunc_2838("*** Going into Landing running state");
			iLocal_190 = 1;
			break;
		
		case 1:
			func_397();
			func_396();
			func_232();
			if (func_258())
			{
				func_255();
			}
			if (func_231())
			{
				if (iLocal_228 == 0)
				{
					if (GlobalFunc_713(Local_155.x, Local_169, 1) < 1100f)
					{
						GlobalFunc_Checkpoint6(1, "Landing stage", 0, 0, 0, 1);
						iLocal_228 = 1;
						GlobalFunc_2838("Landing checkpoint set");
					}
				}
				if (iLocal_229 == 0)
				{
					if (GlobalFunc_713(Local_155.x, Local_169, 1) < 350f)
					{
						STREAMING::REQUEST_MODEL(Local_162.f_1);
						GlobalFunc_7049(55);
						STREAMING::REQUEST_ANIM_DICT(Local_173.f_6);
						STREAMING::REQUEST_MODEL(joaat("p_amb_phone_01"));
						GlobalFunc_2838("Requesting Jimmy resources...");
						if (((STREAMING::HAS_MODEL_LOADED(Local_162.f_1) && GlobalFunc_7048(55)) && STREAMING::HAS_ANIM_DICT_LOADED(Local_173.f_6)) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_phone_01")))
						{
							func_275();
							func_262();
							GlobalFunc_173(&uLocal_594, 3, Local_173, "JIMMYBOSTON", 0, 1);
							GlobalFunc_173(&uLocal_594, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							iLocal_229 = 1;
							GlobalFunc_2838("Jimmy created");
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
				{
					func_417();
					func_393();
					func_392();
					HUD::SET_MINIMAP_COMPONENT(3, 0);
					GlobalFunc_846(&(Local_155.f_2));
					GlobalFunc_846(&(Local_173.f_1));
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_155.x, Local_252, Local_255, 33.25f, 0, 1, 2))
						{
							GlobalFunc_2838("Plane detected");
							GlobalFunc_2838("*** Entering Landing cleanup");
							iLocal_190 = 2;
						}
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(Local_155.f_2))
					{
						Local_155.f_2 = GlobalFunc_5743(Local_155.x, 1, 5);
						GlobalFunc_2838("***** GET BACK IN PLANE");
						if (!iLocal_211)
						{
							GlobalFunc_164("EPS6_03", 7500, 1);
							iLocal_211 = 1;
						}
					}
					if (iLocal_212)
					{
						iLocal_212 = 0;
					}
					if (GlobalFunc_111())
					{
						if ((((GlobalFunc_5664("EPS6_ARMY") || GlobalFunc_5664("EPS6_LEAVE")) || GlobalFunc_5664("EPS6_SAFE")) || GlobalFunc_5664("EPS6_PUSHED")) || GlobalFunc_5664("EPS6_FLIGHT"))
						{
							GlobalFunc_4935();
						}
					}
					GlobalFunc_846(&(Local_169.f_3));
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 1) > 80f)
					{
						if (GlobalFunc_713(Local_155.x, 1654.72f, 3239.21f, 39.55f, 1) >= 50f)
						{
							if (!iLocal_213)
							{
								GlobalFunc_164("EPS6_BACKPL", 7500, 1);
								iLocal_213 = 1;
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 1) > 150f)
							{
								if (func_388())
								{
									bLocal_232 = true;
								}
								iLocal_263 = 1;
								iLocal_190 = 0;
								iLocal_189 = 6;
								AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
							}
						}
						else if (!iLocal_213)
						{
							GlobalFunc_164("EPS6_BACKPL", 7500, 1);
							iLocal_213 = 1;
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 1) > 250f)
						{
							if (func_388())
							{
								bLocal_232 = true;
							}
							iLocal_263 = 1;
							iLocal_190 = 0;
							iLocal_189 = 6;
							AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
						}
					}
					else if (iLocal_213)
					{
						iLocal_213 = 0;
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_155.x, Local_252, Local_255, 33.25f, 0, 1, 2))
						{
							GlobalFunc_2838("Plane detected");
							GlobalFunc_2838("*** Entering Landing cleanup");
							iLocal_190 = 2;
						}
					}
					func_232();
				}
			}
			else
			{
				iLocal_263 = 4;
				iLocal_190 = 0;
				iLocal_189 = 6;
				bLocal_232 = true;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
			if (iLocal_229 == 1)
			{
				if (!GlobalFunc_115(Local_173))
				{
					iLocal_263 = 7;
					iLocal_190 = 0;
					iLocal_189 = 6;
					AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_4947(Local_155.x))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_155.x, Local_252, Local_255, 33.25f, 0, 1, 2))
				{
					GlobalFunc_846(&(Local_155.f_2));
					if (VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) == 0 || VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) == 2)
					{
						if (!HUD::DOES_BLIP_EXIST(Local_173.f_1))
						{
							Local_173.f_1 = GlobalFunc_5739(Local_173, 1, 1, 9);
						}
						GlobalFunc_846(&(Local_169.f_3));
						if (iLocal_225)
						{
							HUD::CLEAR_PRINTS();
						}
						if (!iLocal_226)
						{
							RECORDING::_0x293220DA1B46CEBC(15f, 5f, 1);
							GlobalFunc_164("EPS6_LEAVE", 7500, 1);
							iLocal_226 = 1;
							iLocal_225 = 0;
						}
						if (func_387() && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
						{
							GlobalFunc_2838("*** Finishing Landing cleanup");
							func_386("*** Plane 'entity' health: ", ENTITY::GET_ENTITY_HEALTH(Local_155.x));
							GlobalFunc_2839("*** Plane engine health: ", VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_155.x));
							GlobalFunc_2839("*** Plane petrol tank health: ", VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_155.x));
							if ((ENTITY::GET_ENTITY_HEALTH(Local_155.x) == 1000 && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_155.x) == 1000f) && VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_155.x) == 1000f)
							{
								GlobalFunc_553(751);
							}
							GlobalFunc_846(&(Local_169.f_3));
							iLocal_189 = 3;
							iLocal_190 = 0;
						}
					}
					if ((VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) == 1 || VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) == 3) || VEHICLE::GET_LANDING_GEAR_STATE(Local_155.x) == 4)
					{
						GlobalFunc_2838("In the landing area and landing gear is retracting, locked up or broken");
						iLocal_263 = 4;
						iLocal_190 = 0;
						iLocal_189 = 6;
						AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
					}
				}
				else
				{
					GlobalFunc_2838("*** Plane out of delivery area, reverting back to Landing running state");
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_155.x, 1, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_155.x, 1);
					iLocal_190 = 1;
				}
			}
			else
			{
				GlobalFunc_2838("Plane not OK in landing cleanup");
				iLocal_263 = 4;
				iLocal_190 = 0;
				iLocal_189 = 6;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
			break;
	}
}



void func_386(char* sParam0, var uParam1)//Position - 0x301F0
{
	sParam0 = sParam0;
	uParam1 = uParam1;
}

int func_387()//Position - 0x30200
{
	float fVar0;
	
	if (func_231())
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(Local_155.x);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_388()//Position - 0x30234
{
	struct<3> Var0;
	float fVar3;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3);
		if (Var0.f_2 > (fVar3 + 5f))
		{
			return 1;
		}
	}
	return 0;
}




void func_392()//Position - 0x302E9
{
	if (GlobalFunc_115(Local_173))
	{
		if (GlobalFunc_156(Local_173, Local_155.x, 1) < 17f)
		{
			if (!bLocal_223)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_594, "EPS6AUD", "EPS6_CLOSE", 9, 0, 0, 0))
					{
						bLocal_223 = true;
						iLocal_241 = MISC::GET_GAME_TIMER();
						TASK::CLEAR_PED_TASKS(Local_173);
						TASK::TASK_LOOK_AT_ENTITY(Local_173, PLAYER::PLAYER_PED_ID(), 10000, 48, 2);
						GlobalFunc_2838("*** Played diag EPS6_CLOSE");
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_241) > 10000)
				{
					bLocal_223 = false;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_173, Local_173.f_6, Local_173.f_7, 3))
		{
			GlobalFunc_2838("*** Retasking Jimmy to play anim from plane fear check");
			TASK::TASK_PLAY_ANIM(Local_173, Local_173.f_6, Local_173.f_7, 8f, -8f, -1, 49, 0, 0, 0, 0);
		}
		if (GlobalFunc_156(Local_173, Local_155.x, 1) < 12f)
		{
			func_234();
			iLocal_263 = 5;
			iLocal_190 = 0;
			iLocal_189 = 6;
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			return;
		}
	}
}

void func_393()//Position - 0x303DE
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (!iLocal_212)
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_164("EPS6_COPS", 7500, 1);
				iLocal_212 = 1;
			}
		}
		GlobalFunc_846(&(Local_169.f_3));
	}
	else
	{
		if (iLocal_212)
		{
			HUD::CLEAR_PRINTS();
			iLocal_212 = 0;
		}
		if (!HUD::DOES_BLIP_EXIST(Local_169.f_3))
		{
			Local_169.f_3 = GlobalFunc_2324(Local_169, 5, 1);
		}
	}
}



void func_396()//Position - 0x304A8
{
	if (func_231())
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2611.599f, 2953.922f, 10.79497f, -2698.713f, 2367.25f, -0.336048f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1506.538f, 2717.231f, 15.28982f, -1377.953f, 2609.015f, 0.028772f, 3f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -395.9501f, 2960.714f, 23.47385f, -426.3539f, 2966.561f, 14.00403f, 3f, 0, 1, 0))
			{
				if (!iLocal_762)
				{
					iLocal_762 = 1;
				}
				GlobalFunc_553(752);
			}
			else if (iLocal_762 == 1)
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
				iLocal_762 = 0;
			}
		}
	}
}

void func_397()//Position - 0x3057D
{
	struct<3> Var0;
	
	if (iLocal_189 < 2)
	{
		switch (iLocal_192)
		{
			case 0:
				func_398();
				break;
			
			case 1:
				func_398();
				break;
			
			case 2:
				func_398();
				break;
			
			case 3:
				func_398();
				break;
			}
	}
	if (iLocal_189 >= 1)
	{
		Var0 = { -2896.33f, 3201.92f, 10.01f };
		if (GlobalFunc_111())
		{
			if (((GlobalFunc_5664("EPS6_ARMY") || GlobalFunc_5664("EPS6_LEAVE")) || GlobalFunc_5664("EPS6_SAFE")) || GlobalFunc_5664("EPS6_PUSHED"))
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var0, 1) > 35f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_2838("*** Killing an intro conversation because player is too far away");
						GlobalFunc_4935();
					}
				}
			}
		}
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var0, 1) > 450f)
		{
			GlobalFunc_2297(&Local_181, 1, 0, 1);
		}
	}
}

void func_398()//Position - 0x30668
{
	func_416();
	if (iLocal_193 == 0 || iLocal_193 == 1)
	{
		if (func_415())
		{
			func_414();
		}
	}
	else if (func_413())
	{
		func_414();
	}
	switch (iLocal_193)
	{
		case 0:
			if (iLocal_194 == 0)
			{
				if (GlobalFunc_115(Local_181))
				{
					iLocal_194 = 1;
				}
			}
			else if (iLocal_194 == 1)
			{
				func_412();
				switch (iLocal_237)
				{
					case 0:
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_181, 1) < 50f)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
								{
									iLocal_237++;
								}
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_CULT", 8, 0, 0, 0))
						{
							iLocal_237++;
							iLocal_246 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_246) > 12000)
						{
							iLocal_237 = 0;
						}
						break;
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4947(Local_155.x))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_181, 1) < 10f || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_155.x, 1) < 10f)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2915.73f, 3195.936f, 7.80361f, -2897.807f, 3171.756f, 12.6042f, 16f, 0, 1, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								func_256(2);
								iLocal_192 = 1;
							}
							else
							{
								func_256(1);
							}
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								func_256(2);
								iLocal_192 = 1;
							}
							else
							{
								func_256(1);
							}
						}
					}
				}
				if (!GlobalFunc_115(Local_181))
				{
					func_256(7);
				}
			}
			break;
		
		case 1:
			if (iLocal_194 == 0)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_181))
				{
					TASK::CLEAR_PED_TASKS(Local_181);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), 0);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
							GlobalFunc_5157(&uLocal_264, "EPS6AUD", "EPS6_INCAR", 7, 0, 0);
						}
						else
						{
							GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_INCAR", 8, 1, 0, 0);
						}
					}
					else if (GlobalFunc_111())
					{
						GlobalFunc_4956();
						GlobalFunc_5157(&uLocal_264, "EPS6AUD", "EPS6_INCAR", 8, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_INCAR", 8, 0, 0, 0);
					}
					iLocal_194 = 1;
				}
			}
			else if (iLocal_194 == 1)
			{
				if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4947(Local_155.x)) && GlobalFunc_IsPedNotInjuredOrDead(Local_181))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_181, 1) < 15f || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_155.x, 1) < 10f)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2915.73f, 3195.936f, 7.80361f, -2897.807f, 3171.756f, 12.6042f, 16f, 0, 1, 0))
							{
								func_256(2);
								iLocal_192 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_194 == 0)
			{
				if (GlobalFunc_115(Local_181))
				{
					TASK::CLEAR_PED_TASKS(Local_181);
					iLocal_195 = 1;
					func_407();
					AUDIO::STOP_SOUND(iLocal_236);
					AUDIO::STOP_SOUND(iLocal_235);
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_10630(&uLocal_264, "EPS6AUD", "EPS6_SPOT", "EPS6_SPOT_1", 8, 1, 0);
						iLocal_247 = 0;
						iLocal_234 = 1;
						GlobalFunc_2838("EPSILONIST: Play single line with subs");
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_181, -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						RECORDING::_0x293220DA1B46CEBC(3f, 10f, 1);
						iLocal_194 = 1;
					}
					else if (GlobalFunc_111())
					{
						GlobalFunc_4956();
						GlobalFunc_5157(&uLocal_264, "EPS6AUD", "EPS6_SPOT", 8, 0, 0);
						iLocal_247 = MISC::GET_GAME_TIMER();
						GlobalFunc_2838("EPSILONIST: Play full convo as add to buffer");
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_181, -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						RECORDING::_0x293220DA1B46CEBC(3f, 10f, 1);
						iLocal_194 = 1;
					}
					else if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_SPOT", 8, 0, 0, 0))
					{
						iLocal_247 = 0;
						GlobalFunc_2838("EPSILONIST: Play full convo normally");
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_181, -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						RECORDING::_0x293220DA1B46CEBC(3f, 10f, 1);
						iLocal_194 = 1;
					}
				}
				else
				{
					func_256(7);
				}
			}
			else if (iLocal_194 == 1)
			{
				if (!GlobalFunc_115(Local_181))
				{
					func_256(7);
				}
				func_407();
				if (func_405())
				{
					if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_SHPLNE", 8, 0, 0, 0))
					{
						iLocal_233 = 1;
						func_256(3);
					}
				}
				if (func_237(Local_181, 1126825984))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					func_256(3);
				}
				if (iLocal_234 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (!bLocal_231)
						{
							if (GlobalFunc_10626(&uLocal_264, "EPS6AUD", "EPS6_SPOT", "EPS6_SPOT_3", 8, 0, 0))
							{
								iLocal_234 = 0;
								GlobalFunc_2838("EPSILONIST: Play rest of EPS6_SPOT");
							}
						}
						else
						{
							iLocal_234 = 0;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_247) > 1000 || iLocal_247 == 0)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_2838("No conversation is ongoing at all...");
					}
					else
					{
						GlobalFunc_2838("A conversation is playing!");
					}
					if (GlobalFunc_5664("EPS6_SPOT"))
					{
						GlobalFunc_2838("EPS6_SPOT is playing...");
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 5)
						{
							GlobalFunc_846(&(Local_181.f_1));
							if (!HUD::DOES_BLIP_EXIST(Local_155.f_2))
							{
								Local_155.f_2 = GlobalFunc_5743(Local_155.x, 1, 5);
							}
							if (iLocal_258 == 0)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("EPS6_START");
								iLocal_258 = 1;
							}
						}
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 3)
						{
							if (GlobalFunc_4951(Local_181, PLAYER::PLAYER_PED_ID()) > 10f)
							{
								GlobalFunc_4935();
								bLocal_227 = true;
							}
						}
					}
					else
					{
						GlobalFunc_2838("EPSILONIST: EPS6_SPOT not playing");
						GlobalFunc_846(&(Local_181.f_1));
						if (!HUD::DOES_BLIP_EXIST(Local_155.f_2))
						{
							Local_155.f_2 = GlobalFunc_5743(Local_155.x, 1, 5);
						}
						func_256(4);
					}
				}
				else
				{
					GlobalFunc_2838("EPS6_SPOT delay timer...");
				}
				if (bLocal_227)
				{
					if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_TOOFAR", 8, 0, 0, 0))
					{
						func_256(5);
					}
				}
				if (GlobalFunc_4947(Local_155.x) && GlobalFunc_115(Local_181))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 1))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4935();
							GlobalFunc_2838("Kill convo as player getting into plane (1)");
						}
						while (!GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_LEAVE", 8, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						func_256(4);
						iLocal_192 = 2;
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_194 == 0)
			{
				GlobalFunc_2838("EPSILONIST: In EPS_HANDSUP");
				if (iLocal_233 == 0)
				{
					GlobalFunc_5653(Local_181, "AIMED_AT_BY_PLAYER", "TOM", 4);
					if (!GlobalFunc_6964(Local_181, -1519143300))
					{
						TASK::CLEAR_PED_TASKS(Local_181);
						TASK::TASK_HANDS_UP(Local_181, -1, PLAYER::PLAYER_PED_ID(), -1, 1);
					}
					iLocal_238 = -1;
					iLocal_194 = 1;
				}
				else
				{
					if (!GlobalFunc_6964(Local_181, -1519143300))
					{
						TASK::CLEAR_PED_TASKS(Local_181);
						TASK::TASK_HANDS_UP(Local_181, -1, PLAYER::PLAYER_PED_ID(), -1, 1);
					}
					iLocal_238 = -1;
					iLocal_194 = 1;
				}
			}
			else if (iLocal_194 == 1)
			{
				if (!func_237(Local_181, 1126825984))
				{
					if (iLocal_238 == -1)
					{
						iLocal_238 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_238) > 1200)
					{
						TASK::CLEAR_PED_TASKS(Local_181);
						TASK::TASK_LOOK_AT_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), 0);
						if (iLocal_233 == 0)
						{
							if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_LEAVE", 8, 0, 0, 0))
							{
								iLocal_233 = 1;
								func_256(4);
							}
						}
						else
						{
							func_256(4);
						}
					}
				}
				else
				{
					iLocal_238 = -1;
				}
			}
			break;
		
		case 5:
			if (iLocal_194 == 0)
			{
				GlobalFunc_2838("EPSILONIST: In EPS_WAIT");
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), -1);
				iLocal_194 = 1;
			}
			else if (iLocal_194 == 1)
			{
				if (iLocal_210 == 0)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 1))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 10f, 1);
						GlobalFunc_527("EPS6_GETIN", 7500, 1);
						GlobalFunc_2838("Printed EPS6_GETIN from EPS_WAIT");
						iLocal_210 = 1;
					}
				}
				if (GlobalFunc_4947(Local_155.x) && GlobalFunc_115(Local_181))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 1))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4935();
							GlobalFunc_2838("Kill convo as player getting into plane (2)");
						}
						if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_LEAVE", 8, 0, 0, 0))
						{
							func_256(4);
							iLocal_192 = 2;
						}
					}
				}
				if (func_405())
				{
					if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_SHPLNE", 8, 0, 0, 0))
					{
						iLocal_233 = 1;
						func_256(3);
					}
				}
				if (func_237(Local_181, 1126825984))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					func_256(3);
				}
				if (!GlobalFunc_115(Local_181))
				{
					func_256(7);
				}
			}
			break;
		
		case 4:
			if (iLocal_194 == 0)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_181))
				{
					if (GlobalFunc_713(Local_181, -2884.934f, 3200.156f, 10.7036f, 1) > 2f)
					{
						TASK::CLEAR_PED_TASKS(Local_181);
						TASK::TASK_CLEAR_LOOK_AT(Local_181);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_bye_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2884.934f, 3200.156f, 10.7036f, 1f, 20000, 0.25f, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
						TASK::TASK_PERFORM_SEQUENCE(Local_181, uLocal_260);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_260);
					}
					iLocal_194 = 1;
				}
				if (!GlobalFunc_115(Local_181))
				{
					func_256(7);
				}
			}
			else if (iLocal_194 == 1)
			{
				if (iLocal_189 == 0)
				{
					if (iLocal_210 == 0)
					{
						if ((!GlobalFunc_5664("EPS6_SPOT") && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 1)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_527("EPS6_GETIN", 7500, 1);
							GlobalFunc_2838("Printed EPS6_GETIN from EPS_SAFE");
							iLocal_210 = 1;
						}
					}
				}
				if (func_405())
				{
					if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_SHPLNE", 8, 0, 0, 0))
					{
						iLocal_233 = 1;
						func_256(3);
					}
				}
				if (func_237(Local_181, 1126825984))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					func_256(3);
				}
				if (!GlobalFunc_115(Local_181))
				{
					func_256(7);
				}
			}
			break;
		
		case 6:
			if (iLocal_194 == 0)
			{
				func_399();
				if (!HUD::DOES_BLIP_EXIST(Local_155.f_2))
				{
					Local_155.f_2 = GlobalFunc_5743(Local_155.x, 1, 5);
				}
				iLocal_194 = 1;
			}
			else if (iLocal_194 == 1)
			{
				if (!GlobalFunc_115(Local_181))
				{
					func_256(7);
				}
			}
			break;
		
		case 7:
			if (iLocal_194 == 0)
			{
				GlobalFunc_2838("EPSILONIST: Dead!?");
				GlobalFunc_846(&(Local_181.f_1));
				iLocal_194 = 1;
			}
			else if (iLocal_194 == 1)
			{
			}
			break;
	}
}

void func_399()//Position - 0x310BC
{
	if (GlobalFunc_111())
	{
		GlobalFunc_4956();
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_181))
	{
		TASK::CLEAR_PED_TASKS(Local_181);
		if (PED::IS_PED_IN_GROUP(Local_181))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_181);
		}
		TASK::TASK_SMART_FLEE_PED(Local_181, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
		GlobalFunc_846(&(Local_181.f_1));
	}
}






int func_405()//Position - 0x313B8
{
	if (func_231() && GlobalFunc_115(Local_181))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_155.x, PLAYER::PLAYER_PED_ID(), 1))
			{
				GlobalFunc_2838("Player damaged plane");
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_155.x);
				return 1;
			}
		}
	}
	return 0;
}


void func_407()//Position - 0x31457
{
	if (iLocal_193 == 2)
	{
		switch (iLocal_195)
		{
			case 0:
				break;
			
			case 1:
				if (GlobalFunc_115(Local_181) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(Local_181);
					Local_763 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					TASK::OPEN_SEQUENCE_TASK(&uLocal_260);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_763, 1f, 20000, 0.25f, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_260);
					TASK::TASK_PERFORM_SEQUENCE(Local_181, uLocal_260);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_260);
					iLocal_195 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_115(Local_181) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_156(Local_181, PLAYER::PLAYER_PED_ID(), 1) < 5f || TASK::GET_SCRIPT_TASK_STATUS(Local_181, 242628503) == 7)
					{
						TASK::CLEAR_PED_TASKS(Local_181);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), -1);
						iLocal_195 = 0;
					}
				}
				break;
			}
	}
}





void func_412()//Position - 0x315A9
{
	if (GlobalFunc_115(Local_181))
	{
		switch (iLocal_196)
		{
			case 0:
				iLocal_197 = 0;
				Local_198[0 /*3*/] = { -2887.15f, 3197.88f, 10.17f };
				Local_198[1 /*3*/] = { -2888.92f, 3203.76f, 10.6f };
				Local_198[2 /*3*/] = { -2895.37f, 3199.37f, 10.03f };
				STREAMING::REQUEST_ANIM_DICT("rcmepsilonism6");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism6") && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_181, "rcmepsilonism6", "cultist_idle_a", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_181, "rcmepsilonism6", "cultist_upperstatic", 8f, -8f, -1, 49, 0, 0, 0, 0);
					iLocal_196 = 1;
					GlobalFunc_2838("Initialised Eps 6 Tom state machine");
				}
				break;
			
			case 1:
				if (!GlobalFunc_6964(Local_181, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_181, Local_198[iLocal_197 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
					GlobalFunc_2838("Eps 6: Nav tasking Tom...");
					iLocal_196 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_713(Local_181, Local_198[iLocal_197 /*3*/], 1) <= 1.2f)
				{
					iLocal_196 = 3;
					GlobalFunc_2838("Eps 6: Tom at coord; do idle anim");
				}
				break;
			
			case 3:
				TASK::CLEAR_PED_TASKS(Local_181);
				TASK::TASK_PLAY_ANIM(Local_181, "rcmepsilonism6", "cultist_idle_a", 16f, -2f, -1, 131072, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_181, 0, 0);
				iLocal_196 = 4;
				GlobalFunc_2838("Eps 6: Done Tom idle anim");
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_181, "rcmepsilonism6", "cultist_idle_a", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_181, "rcmepsilonism6", "cultist_idle_a") >= 0.98f)
					{
						if (iLocal_197 >= 2)
						{
							iLocal_197 = 0;
						}
						else
						{
							iLocal_197++;
						}
						TASK::TASK_PLAY_ANIM(Local_181, "rcmepsilonism6", "cultist_upperstatic", 16f, -8f, -1, 49, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_181, 0, 0);
						iLocal_196 = 1;
						GlobalFunc_2838("Eps 6: Tom idle anim >0.98");
					}
				}
				else
				{
					if (iLocal_197 >= 2)
					{
						iLocal_197 = 0;
					}
					else
					{
						iLocal_197++;
					}
					TASK::TASK_PLAY_ANIM(Local_181, "rcmepsilonism6", "cultist_upperstatic", 8f, -8f, -1, 49, 0, 0, 0, 0);
					iLocal_196 = 1;
					GlobalFunc_2838("Eps 6: Tom idle anim not playing");
				}
				break;
			}
	}
}

int func_413()//Position - 0x317CE
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_181))
	{
		if (GlobalFunc_8324(Local_181, 0, 0, 0, 0))
		{
			GlobalFunc_2838("Player shot near cultist");
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), 1))
		{
			GlobalFunc_2838("Player damaged cultist");
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_181))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), 1))
		{
			GlobalFunc_2838("Player damaged cultist (while he wasn't alive, so dead?)");
			return 1;
		}
	}
	return 0;
}

void func_414()//Position - 0x31849
{
	if (GlobalFunc_115(Local_181))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_181))
		{
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), 1))
			{
				GlobalFunc_2838("EPSILONIST got scared by player, will never stop fleeing...");
				func_256(6);
				iLocal_263 = 10;
				iLocal_190 = 0;
				iLocal_189 = 6;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
			else
			{
				GlobalFunc_2838("EPSILONIST got hurt by player - 2ND CHECK, NOT INJURED?");
				func_256(6);
				iLocal_263 = 11;
				iLocal_190 = 0;
				iLocal_189 = 6;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
		}
		else
		{
			GlobalFunc_2838("EPSILONIST got hurt by player...");
			iLocal_263 = 11;
			iLocal_190 = 0;
			iLocal_189 = 6;
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
		}
	}
	else
	{
		GlobalFunc_2838("EPSILONIST got killed by player...");
		iLocal_263 = 9;
		iLocal_190 = 0;
		iLocal_189 = 6;
		AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
	}
	if (iLocal_192 <= 1)
	{
		iLocal_192 = 3;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_181))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_181, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_181))
			{
				GlobalFunc_2838("EPSILONIST got killed by player - 2ND CHECK");
				iLocal_263 = 9;
				iLocal_190 = 0;
				iLocal_189 = 6;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
		}
	}
}

int func_415()//Position - 0x3193A
{
	if ((func_236(Local_181, 0, 1116471296, 1126825984, 0, 0, 0, 0) || GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), Local_181, 0)) || func_405())
	{
		if (func_236(Local_181, 0, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			GlobalFunc_2838("Player threatened cultist");
		}
		if (GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), Local_181, 0))
		{
			GlobalFunc_2838("Player bumped cultist with vehicle");
		}
		iLocal_237 = 3;
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_181))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			GlobalFunc_5653(Local_181, "FIGHT_RUN", "TOM", 4);
		}
		return 1;
	}
	return 0;
}

void func_416()//Position - 0x319D9
{
	if (bLocal_231 == 0)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_181) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_230 == 0)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_181) && PED::IS_PED_RAGDOLL(Local_181))
				{
					GlobalFunc_4935();
					GlobalFunc_2838("Player knocked Tom over!");
					iLocal_230 = 1;
				}
			}
			else if (GlobalFunc_IsPedNotInjuredOrDead(Local_181))
			{
				if (TASK::IS_PED_GETTING_UP(Local_181) || PED::IS_PED_ON_FOOT(Local_181))
				{
					if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_PUSHED", 8, 0, 0, 0))
						{
							iLocal_230 = 0;
							bLocal_231 = true;
						}
					}
				}
			}
		}
	}
}

void func_417()//Position - 0x31A7C
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (GlobalFunc_4947(Local_155.x))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_155.x))
			{
				if (func_418())
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_155.x);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
		}
	}
}

int func_418()//Position - 0x31AB4
{
	if (((((((((PAD::IS_CONTROL_PRESSED(0, 59) || PAD::IS_CONTROL_PRESSED(0, 60)) || PAD::IS_CONTROL_PRESSED(0, 107)) || PAD::IS_CONTROL_PRESSED(0, 110)) || PAD::IS_CONTROL_PRESSED(0, 113)) || PAD::IS_CONTROL_PRESSED(0, 114)) || PAD::IS_CONTROL_PRESSED(0, 88)) || PAD::IS_CONTROL_PRESSED(0, 87)) || PAD::IS_CONTROL_PRESSED(0, 89)) || PAD::IS_CONTROL_PRESSED(0, 90))
	{
		GlobalFunc_2838("*** Player input detected");
		return 1;
	}
	return 0;
}

void func_419()//Position - 0x31B49
{
	switch (iLocal_190)
	{
		case 0:
			GlobalFunc_2838("*** Doing Flight init");
			if (iLocal_208 == 1)
			{
				func_261();
				func_439(1, 1, 1);
				iLocal_208 = 0;
			}
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-36.25134f, -465.8315f, 39.12256f, 25.801f, -287.1716f, 47.75863f, 59.5f, 0, 0, 1);
			GlobalFunc_173(&uLocal_429, 3, 0, "JIMMYBOSTON", 0, 1);
			GlobalFunc_173(&uLocal_429, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_264, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			if (iLocal_192 <= 0)
			{
				GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_LEAVE", 8, 0, 0, 0);
			}
			if (func_231())
			{
				func_386("*** Plane 'entity' health: ", ENTITY::GET_ENTITY_HEALTH(Local_155.x));
				GlobalFunc_2839("*** Plane engine health: ", VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_155.x));
				GlobalFunc_2839("*** Plane petrol tank health: ", VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_155.x));
			}
			if (iLocal_258 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EPS6_START");
				iLocal_258 = 1;
			}
			iLocal_213 = 0;
			iLocal_191 = 0;
			GlobalFunc_2838("*** Going into Flight running state");
			iLocal_190 = 1;
			break;
		
		case 1:
			func_397();
			func_396();
			func_420();
			if (func_258())
			{
				func_255();
			}
			if (!GlobalFunc_111())
			{
				if (iLocal_224 == 0)
				{
					GlobalFunc_164("EPS6_02", 7500, 1);
					iLocal_224 = 1;
				}
			}
			if (func_231())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
				{
					func_393();
					GlobalFunc_846(&(Local_155.f_2));
					HUD::SET_MINIMAP_COMPONENT(3, 0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_169, 0) < 2300f)
						{
							iLocal_190 = 2;
						}
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(Local_155.f_2))
					{
						Local_155.f_2 = GlobalFunc_5743(Local_155.x, 1, 5);
						GlobalFunc_2838("***** GET BACK IN PLANE");
						if (!iLocal_211)
						{
							GlobalFunc_164("EPS6_03", 7500, 1);
							iLocal_211 = 1;
						}
					}
					if (iLocal_212)
					{
						iLocal_212 = 0;
					}
					if (GlobalFunc_111())
					{
						if ((((GlobalFunc_5664("EPS6_ARMY") || GlobalFunc_5664("EPS6_LEAVE")) || GlobalFunc_5664("EPS6_SAFE")) || GlobalFunc_5664("EPS6_PUSHED")) || GlobalFunc_5664("EPS6_FLIGHT"))
						{
							GlobalFunc_4935();
						}
					}
					GlobalFunc_846(&(Local_169.f_3));
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 1) > 80f)
					{
						if (!iLocal_213)
						{
							GlobalFunc_164("EPS6_BACKPL", 7500, 1);
							iLocal_213 = 1;
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 1) > 120f)
						{
							if (func_388())
							{
								bLocal_232 = true;
							}
							iLocal_263 = 1;
							iLocal_190 = 0;
							iLocal_189 = 6;
							AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
						}
					}
					else if (iLocal_213)
					{
						iLocal_213 = 0;
					}
				}
			}
			else
			{
				iLocal_263 = 4;
				iLocal_190 = 0;
				iLocal_189 = 6;
				bLocal_232 = true;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
			break;
		
		case 2:
			GlobalFunc_2838("*** Doing Flight cleanup");
			iLocal_189 = 2;
			iLocal_190 = 0;
			break;
	}
}

void func_420()//Position - 0x31E2D
{
	struct<3> Var0;
	
	switch (iLocal_191)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (func_231())
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_155.x, 1) };
					if (Var0.f_2 > 15f)
					{
						GlobalFunc_2838("vPlanePos.z is > 15.0");
						iLocal_239 = MISC::GET_GAME_TIMER();
						GlobalFunc_2297(&Local_181, 1, 0, 1);
						GlobalFunc_2838("RELEASING CULTIST PED VIA JIMMY PHONECALL");
						iLocal_191 = 1;
					}
				}
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_239) > 12000)
			{
				iLocal_191 = 2;
			}
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (GlobalFunc_10638(&uLocal_429, 55, "EPS6AUD", "EPS6_FLIGHT", 11, 1, 0, 0, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					RECORDING::_0x293220DA1B46CEBC(3f, 10f, 1);
					iLocal_191 = 3;
				}
			}
			break;
		
		case 3:
			break;
	}
}


void func_422()//Position - 0x31F58
{
	char cVar0[24];
	
	switch (iLocal_190)
	{
		case 0:
			GlobalFunc_2838("*** Doing Init initialisation");
			if (iLocal_208 == 1)
			{
				func_261();
				if (!GlobalFunc_188())
				{
					func_439(1, 1, 1);
				}
				iLocal_208 = 0;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmepsilonism6");
			STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
			while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism6") || !STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&uLocal_264, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (GlobalFunc_115(Local_181))
			{
				GlobalFunc_173(&uLocal_264, 4, Local_181, "TOM", 1, 1);
				AUDIO::STOP_PED_SPEAKING(Local_181, 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_181, 1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_181, 0);
				PED::SET_PED_CONFIG_FLAG(Local_181, 167, 1);
				PED::SET_PED_CONFIG_FLAG(Local_181, 185, 1);
				PED::SET_PED_CAN_SWITCH_WEAPON(Local_181, 0);
				iLocal_235 = AUDIO::GET_SOUND_ID();
				iLocal_236 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_235, "DEVICE", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_181), "EPSILONISM_04_SOUNDSET", 0, 0);
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_236, "IDLE_BEEP_NPC", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_181), "EPSILONISM_04_SOUNDSET", 0, 0);
			}
			if (!HUD::DOES_BLIP_EXIST(Local_181.f_1))
			{
				Local_181.f_1 = GlobalFunc_5739(Local_181, 1, 1, 5);
			}
			if (func_231())
			{
				func_386("*** Plane 'entity' health: ", ENTITY::GET_ENTITY_HEALTH(Local_155.x));
				GlobalFunc_2839("*** Plane engine health: ", VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_155.x));
				GlobalFunc_2839("*** Plane petrol tank health: ", VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_155.x));
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				func_439(1, 1, 1);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 15f, 1);
			GlobalFunc_2838("*** Epsilon 6 initialised, now running");
			bLocal_231 = false;
			bLocal_227 = false;
			iLocal_213 = 0;
			iLocal_237 = 0;
			GlobalFunc_164("EPS6_01", 7500, 1);
			iLocal_246 = MISC::GET_GAME_TIMER();
			GlobalFunc_2838("*** Going into Init running state");
			iLocal_190 = 1;
			break;
		
		case 1:
			if (func_258())
			{
				func_255();
			}
			func_397();
			if (!GlobalFunc_4947(Local_155.x))
			{
				GlobalFunc_2838("*** FAILED: Plane destroyed");
				iLocal_263 = 4;
				iLocal_190 = 0;
				iLocal_189 = 6;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 1) > 50f)
			{
				if (!iLocal_213)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_215 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
						Local_217 = { GlobalFunc_560() };
						GlobalFunc_4935();
						iLocal_214 = 1;
						iLocal_216 = (MISC::GET_GAME_TIMER() - 7500);
					}
					GlobalFunc_164("EPS6_BACKPL", 7500, 1);
					iLocal_213 = 1;
				}
				else
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_216) > 7500 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (GlobalFunc_10618(&uLocal_264, "EPS6AUD", "EPS6_RUNAWAY", 8, 0, 0, 0))
						{
							iLocal_216 = MISC::GET_GAME_TIMER();
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_155.x, 1), 1) > 100f)
					{
						iLocal_263 = 1;
						iLocal_190 = 0;
						iLocal_189 = 6;
						AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
					}
				}
			}
			else if (iLocal_213)
			{
				if (iLocal_214)
				{
					StringConCat(&cVar0, &Local_217, 24);
					StringConCat(&cVar0, "_", 24);
					StringIntConCat(&cVar0, iLocal_215, 24);
					if (GlobalFunc_10626(&uLocal_264, "EPS6AUD", &Local_217, &cVar0, 8, 0, 0))
					{
						iLocal_214 = 0;
						iLocal_213 = 0;
					}
				}
				else
				{
					iLocal_213 = 0;
				}
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4947(Local_155.x))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_155.x, 0))
				{
					iLocal_190 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("*** Doing Init cleanup");
			GlobalFunc_846(&(Local_181.f_1));
			GlobalFunc_846(&(Local_155.f_2));
			iLocal_189 = 1;
			iLocal_190 = 0;
			break;
	}
}

void func_423(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x322A8
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
















void func_439(int iParam0, int iParam1, int iParam2)//Position - 0x32CE7
{
	func_345(0, 0, iParam2, 1);
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

void func_440(int iParam0)//Position - 0x32D1B
{
	if (!GlobalFunc_188())
	{
		func_441(1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
	}
	iLocal_208 = 1;
	switch (iParam0)
	{
		case 0:
			iLocal_189 = 0;
			iLocal_190 = 0;
			break;
		
		case 1:
			iLocal_189 = 1;
			iLocal_190 = 0;
			break;
		
		case 2:
			iLocal_189 = 2;
			iLocal_190 = 0;
			break;
		
		case 3:
			iLocal_189 = 3;
			iLocal_190 = 0;
			break;
		
		case 4:
			iLocal_189 = 4;
			iLocal_190 = 0;
			break;
		
		case 5:
			iLocal_189 = 5;
			iLocal_190 = 0;
			break;
		
		case 6:
			iLocal_189 = 5;
			iLocal_190 = 0;
			bLocal_209 = true;
			break;
		
		default:
			break;
	}
}

void func_441(bool bParam0, bool bParam1)//Position - 0x32DB2
{
	if (bParam0)
	{
		func_442(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_358(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_442(bool bParam0, int iParam1, int iParam2)//Position - 0x32DE5
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
			func_345(iParam1, iParam2, 1, 1);
		}
	}
}


void func_444()//Position - 0x32ED9
{
	Local_162.f_6 = 132.923f;
	Local_162.f_1 = joaat("f620");
	Local_162.f_3 = { 1692.16f, 3271.055f, 40.633f };
	Local_155.f_1 = joaat("velum");
	Local_173.f_2 = { 1687.51f, 3278.35f, 40.12f };
	Local_173.f_5 = 212.082f;
	Local_173.f_6 = "rcmepsilonism6";
	Local_173.f_7 = "idle_a";
	Local_169 = { 1620.34f, 3228.95f, 39.71f };
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	GlobalFunc_9621(60, 0, 0);
	GlobalFunc_9621(55, 0, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("EPS6", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
}







int func_451(var uParam0)//Position - 0x3324A
{
	int iVar0[2];
	int iVar3;
	var uVar4;
	char* sVar5;
	bool bVar6;
	var uVar7;
	
	sVar5 = "rcmepsilonism6";
	iVar0[0] = joaat("velum");
	iVar0[1] = joaat("ig_tomepsilon");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -2869.424f, 3170.774f, 1.954f };
			uParam0->f_17[1 /*3*/] = { -2918.701f, 3217.056f, 32.294f };
			uParam0->f_24 = 94.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar5);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar5))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar6 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				uVar4 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-2892.93f, 3192.37f, 11.66f, 11f, iVar0[0], 16390);
				if (GlobalFunc_115(uVar4))
				{
					uParam0->f_35[0] = uVar4;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar4, 1, 1);
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-2892.93f, 3192.37f, 11.66f, 11f, 0, 0, 0, 0, 0);
					GlobalFunc_8026(&(uParam0->f_35[0]), iVar0[0], -2892.93f, 3192.37f, 11.66f, -132.35f);
				}
			}
			GlobalFunc_4927(37, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_35[0]);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 157, 157);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 157, 5);
				VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_35[0], 3);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				if (Global_68490)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2907.29f, 3215.91f, 9.86f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 215.2149f);
					}
				}
			}
			else
			{
				bVar6 = false;
			}
			GlobalFunc_5903(&(uParam0->f_28[0]), iVar0[1], -2881.755f, 3188.125f, 10.1136f, 254.1723f, 26);
			if (GlobalFunc_115(uParam0->f_28[0]) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				uVar7 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_digiscanner"), -1, 1, 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
				PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_28[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 188, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
				AUDIO::STOP_PED_SPEAKING(uParam0->f_28[0], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uVar7);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 0);
			}
			else
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}






void func_457()//Position - 0x33661
{
	if (GlobalFunc_9162())
	{
		GlobalFunc_2838("...Random Character Script was triggered so additional cleanup required");
	}
	func_3(1);
	GlobalFunc_4948(&uLocal_78, 0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	if (CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	STREAMING::REMOVE_ANIM_DICT("rcm_epsilonism4");
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SANDY_PLANES"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("SANDY_PLANES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SANDY_PLANES", 1);
		}
	}
	GlobalFunc_9251(&Local_94, 0, 0, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-195.7097f, 1881.432f, 196.1571f, 842.2352f, 2249.857f, 48.50136f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(816.8527f, 2107.934f, 63.37452f, 176.1676f, 2902.73f, 46.61533f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-36.25134f, -465.8315f, 39.12256f, 25.801f, -287.1716f, 47.75863f, 1);
	GlobalFunc_7632(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



































