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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 8;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 2;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 8;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	struct<110> Local_78 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
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
	var uLocal_240 = 3;
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
	var uLocal_337 = 16;
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
	var uLocal_502 = 16;
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
	var uLocal_668 = 3;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 1092616192;
	var uLocal_675 = 1101004800;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 3;
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
	var uLocal_732 = 5;
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
	var uLocal_749 = 5;
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
	var uLocal_809 = 3;
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
	var uLocal_828 = 13;
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
	var uLocal_857 = 4;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 4;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 4;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 4;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 4;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 4;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 4;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 8;
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
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_949 = 0;
	var uLocal_950 = 16;
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
	int iLocal_1115 = 0;
	int iLocal_1116 = 0;
	struct<3> Local_1117 = { 0, 0, 0 } ;
	int iLocal_1120 = 0;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	int iLocal_1125 = 0;
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	bool bLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	struct<3> Local_1132 = { 0, 0, 0 } ;
	struct<3> Local_1135 = { 0, 0, 0 } ;
	struct<2> Local_1138 = { 0, 0 } ;
	var uLocal_1140 = 0;
	struct<2> Local_1141 = { 0, 0 } ;
	var uLocal_1143 = 0;
	int iLocal_1144 = 0;
	char[] cLocal_1145[8] = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	char[] cLocal_1149[8] = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	bool bLocal_1153 = 0;
	int iLocal_1154 = 0;
	char cLocal_1155[48] = "";
	int iLocal_1161 = 0;
	int iLocal_1162 = 0;
	int iLocal_1163 = 0;
	var uLocal_1164 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_77 = joaat("p_amb_phone_01");
	Local_1117 = { 693.1158f, -1012.418f, 21.72802f };
	Local_1132 = { 692.8695f, -998.7867f, 22.3201f };
	Local_1135 = { 693.3784f, -1025.671f, 21.506f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_102();
		GlobalFunc_10632();
		func_98();
	}
	func_90();
	MISC::SET_MISSION_FLAG(1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_1122)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1117, 200f, 200f, 200f, 0, 1, 0) && !CAM::IS_SPHERE_VISIBLE(Local_1117, 50f))
			{
				MISC::CLEAR_AREA(Local_1117, 50f, 1, 0, 0, 0);
				iLocal_1122 = 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1117, 200f, 200f, 200f, 0, 1, 0))
		{
			iLocal_1122 = 0;
		}
		if (!iLocal_1127)
		{
			if (Global_86864.f_358 == MISC::GET_HASH_KEY("AHP1_TRUCKCALLED") || Global_86794)
			{
				GlobalFunc_553(543);
				Global_86864.f_358 = 0;
				iLocal_1127 = 1;
			}
		}
		func_88();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_940[iVar0]) && !PED::IS_PED_INJURED(iLocal_940[iVar0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_938))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_940[iVar0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f)
				{
					PED::SET_PED_KEEP_TASK(iLocal_940[iVar0], 1);
					TASK::TASK_SMART_FLEE_PED(iLocal_940[iVar0], PLAYER::PLAYER_PED_ID(), 300f, 20000, 1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_940[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1163 < 8 && iLocal_1115 >= 0)
		{
			func_86();
		}
		switch (iLocal_1115)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_940)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_940[iVar1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar2, 1)) < 30f) && VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("firetruk")))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_949);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_949, 1862763509);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
								PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_85())
				{
					RECORDING::_0x293220DA1B46CEBC(15f, 15f, 4);
					AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
					iLocal_1115++;
				}
				break;
			
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_938))
				{
					func_85();
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) == joaat("firetruk"))
					{
						iLocal_938 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_938, 1, 1);
					}
				}
				else
				{
					func_43();
					if (!iLocal_1123 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0))
					{
						GlobalFunc_503(iLocal_938, -1);
						GlobalFunc_504(iLocal_938, -1);
						GlobalFunc_574(541, 0);
						iLocal_1123 = 1;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1117) < SYSTEM::POW(100f, 2f))
					{
						PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
					}
					func_85();
					if (bLocal_1128)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_939, 0))
						{
							func_34(iLocal_939);
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_939) && ENTITY::IS_ENTITY_AT_COORD(iLocal_938, Local_1117, Global_18, 1, 1, 0))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_936))
								{
									HUD::REMOVE_BLIP(&uLocal_936);
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 15f, 4);
								iLocal_1115++;
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0))
					{
						func_34(iLocal_938);
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_938) && ENTITY::IS_ENTITY_AT_COORD(iLocal_938, Local_1117, Global_18, 1, 1, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_936))
							{
								HUD::REMOVE_BLIP(&uLocal_936);
							}
							RECORDING::_0x293220DA1B46CEBC(5f, 15f, 4);
							iLocal_1115++;
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_1115 = 100;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_938))
				{
					func_13("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0))
				{
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_938, 1)) > 22500f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_938)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_938, 1)) > 90000f)
					{
						func_13("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_13("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0))
				{
					if (GlobalFunc_763(iLocal_938, 1093140480, 1, 1056964608, 0, 1))
					{
						if (!iLocal_1126)
						{
							GlobalFunc_164("AHP_GETOUT", 7500, 1);
							iLocal_1126 = 1;
						}
						AUDIO::TRIGGER_MUSIC_EVENT("AHP1_STOP");
						RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
						iLocal_1115++;
					}
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_938, Local_1117, Global_18 + Vector(2f, 2f, 2f), 1, 1, 0))
					{
						iLocal_1115 = 0;
					}
					else if (bLocal_1128)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_939, iLocal_938))
							{
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_938, 0, 0);
								if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_938))
								{
									VEHICLE::SET_VEHICLE_SIREN(iLocal_938, 0);
								}
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_938, 2);
								HUD::CLEAR_PRINTS();
								SYSTEM::SETTIMERA(0);
								iLocal_1115++;
							}
							else
							{
								VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_939, iLocal_938);
							}
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_938, 0))
					{
						if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_938))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_938, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_938, 2);
						HUD::CLEAR_PRINTS();
						SYSTEM::SETTIMERA(0);
						iLocal_1115++;
					}
				}
				break;
			
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0))
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (HUD::DOES_BLIP_EXIST(uLocal_936))
				{
					HUD::REMOVE_BLIP(&uLocal_936);
				}
				if (!GlobalFunc_485(13))
				{
					GlobalFunc_585(13, 1);
				}
				iLocal_1115++;
				break;
			
			case 101:
				func_85();
				if (bLocal_1128)
				{
					func_34(iLocal_939);
				}
				else
				{
					func_34(iLocal_938);
				}
				if (!iLocal_1129)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_938, 0)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_939, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_939, 0)))
					{
						if ((ENTITY::IS_ENTITY_IN_ZONE(PLAYER::PLAYER_PED_ID(), "DAVIS") && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (GlobalFunc_745())
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_1129 = 1;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_938))
				{
					func_13("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						HUD::CLEAR_PRINTS();
						iLocal_1115 = 0;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_938))
					{
						if (!iLocal_1125)
						{
							GlobalFunc_164("AHP_LOSECOPS", 7500, 1);
							iLocal_1125 = 1;
							iLocal_1116 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((iLocal_1125 && (MISC::GET_GAME_TIMER() - iLocal_1116) < 7500) && HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_938, 1)) > 22500f)
					{
						func_13("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_13("AHP_DEADTRUCK");
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_938))
		{
			if (!GlobalFunc_543(iLocal_938))
			{
				GlobalFunc_534(iLocal_938, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
}






void func_6()//Position - 0x92D
{
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	GlobalFunc_5103(0, 0);
	func_98();
}







void func_13(char* sParam0)//Position - 0xC54
{
	int iVar0;
	
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	GlobalFunc_10835(sParam0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_938))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_938, 0))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_938);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_940)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_940[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_940[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_86864.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
		{
			PED::DELETE_PED(&(Global_86864.f_9[iVar0]));
		}
		iVar0++;
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 1, 0, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("AHP1_FAIL");
	if (GlobalFunc_764())
	{
		func_102();
	}
	else if (func_16())
	{
		GlobalFunc_5129(229.1676f, -1614.979f, 28.2892f, 142.5156f);
	}
	func_98();
}



int func_16()//Position - 0xD9F
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 226.6765f, -1668.942f, 25.46082f, 185.6446f, -1635.836f, 39.29184f, 57.75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}


















void func_34(int iParam0)//Position - 0x1DE6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_937))
					{
						HUD::REMOVE_BLIP(&uLocal_937);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_937))
				{
					uLocal_937 = GlobalFunc_6783(iParam0, 0, 0);
				}
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_937))
			{
				HUD::REMOVE_BLIP(&uLocal_937);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_936))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_1121)
				{
					GlobalFunc_527("AHP_DROPOFF", 7500, 1);
					iLocal_1121 = 1;
				}
				uLocal_936 = GlobalFunc_5104(Local_1117, 1);
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_936))
			{
				HUD::REMOVE_BLIP(&uLocal_936);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_937))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_1120)
				{
					GlobalFunc_527("AHP_GETBAKIN", 7500, 1);
					iLocal_1120 = 1;
				}
				uLocal_937 = GlobalFunc_6783(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_937))
		{
			HUD::REMOVE_BLIP(&uLocal_937);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_936))
		{
			HUD::REMOVE_BLIP(&uLocal_936);
		}
	}
}









void func_43()//Position - 0x20EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_1128)
	{
		iVar0 = iLocal_939;
	}
	else
	{
		iVar0 = iLocal_938;
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		switch (iLocal_1130)
		{
			case 0:
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = GlobalFunc_9028(iVar1);
						if ((!PED::IS_PED_INJURED(iVar2) && PED::IS_PED_IN_VEHICLE(iVar2, iVar0, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar2)
						{
							if (!GlobalFunc_9814(iVar2) && GlobalFunc_9813(iVar2, 0))
							{
								if (GlobalFunc_9812(iVar2, 0))
								{
									iLocal_1162 = 0;
									iLocal_1131 = iVar1;
									iLocal_1130 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if ((((PED::IS_PED_INJURED(GlobalFunc_9028(iLocal_1131)) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != GlobalFunc_9028(iLocal_1131)) || !PED::IS_PED_IN_VEHICLE(GlobalFunc_9028(iLocal_1131), iVar0, 0)) || !GlobalFunc_9814(GlobalFunc_9028(iLocal_1131))) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
					{
						GlobalFunc_9811(GlobalFunc_9028(iLocal_1131));
						iLocal_1130 = 0;
					}
					else
					{
						switch (iLocal_1162)
						{
							case 0:
								iLocal_1162 = 2;
								break;
							
							case 1:
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_1138, Local_1138.f_1, Local_1141, Local_1141.f_1))
								{
									iLocal_1162++;
								}
								break;
							
							case 2:
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(GlobalFunc_9028(iLocal_1131), iVar0, Local_1117, 15f, 0, joaat("firetruk"), 786484, 5f, 5f);
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_1117) > 250f)
								{
									VEHICLE::_0x182F266C2D9E2BEB(iVar0, SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_938, 1), Local_1117));
								}
								iLocal_1162++;
								break;
							
							case 3:
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 697.6884f, -1013.364f, 27.4968f, 688.3482f, -1013.179f, 22.32968f, 29.25f, 0, 1, 0))
								{
									if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_1132) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_1135))
									{
										if (bLocal_1128)
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(GlobalFunc_9028(iLocal_1131), iVar0, Local_1135, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
										}
										else
										{
											TASK::TASK_VEHICLE_PARK(GlobalFunc_9028(iLocal_1131), iVar0, Local_1117, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_1128)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(GlobalFunc_9028(iLocal_1131), iVar0, Local_1132, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
									}
									else
									{
										TASK::TASK_VEHICLE_PARK(GlobalFunc_9028(iLocal_1131), iVar0, Local_1117, 0f, 1, 15f, 0);
									}
									iLocal_1162++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_44();
				break;
		}
	}
	else if (iLocal_1130 != 0)
	{
		if (GlobalFunc_9811(GlobalFunc_9028(iLocal_1131)))
		{
			iLocal_1130 = 0;
		}
	}
}

void func_44()//Position - 0x23F2
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!PED::IS_PED_INJURED(GlobalFunc_9028(iLocal_1131)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_938) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_938, 0)) && PED::IS_PED_IN_VEHICLE(GlobalFunc_9028(iLocal_1131), iLocal_938, 0)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_939) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_939, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_939, 0)) && PED::IS_PED_IN_VEHICLE(GlobalFunc_9028(iLocal_1131), iLocal_939, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			iVar1 = func_76();
			if (func_64(0, 1, 145, 0, iVar1, &cLocal_1145, &cLocal_1149, 1))
			{
				GlobalFunc_200(&uLocal_950, 0);
				GlobalFunc_200(&uLocal_950, 1);
				GlobalFunc_200(&uLocal_950, 2);
				if (GlobalFunc_8315() == 1)
				{
					GlobalFunc_173(&uLocal_950, 0, GlobalFunc_9028(0), "MICHAEL", 0, 1);
					GlobalFunc_173(&uLocal_950, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				else
				{
					GlobalFunc_173(&uLocal_950, 1, GlobalFunc_9028(1), "FRANKLIN", 0, 1);
					GlobalFunc_173(&uLocal_950, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1154)
				{
					iLocal_1161 = MISC::GET_GAME_TIMER();
				}
				iLocal_1144 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1161) > 5000 || iLocal_1154)
				{
					if (GlobalFunc_10618(&uLocal_950, &cLocal_1145, &cLocal_1149, 8, 0, 0, 0))
					{
						iLocal_1154 = 1;
						iLocal_1144 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_1153)
			{
				if (!bVar0)
				{
					cLocal_1155 = { GlobalFunc_514() };
					GlobalFunc_4935();
					bLocal_1153 = true;
				}
			}
			else if (bVar0)
			{
				if (GlobalFunc_10626(&uLocal_950, &cLocal_1145, &cLocal_1149, &cLocal_1155, 8, 0, 0))
				{
					bLocal_1153 = false;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || (!bLocal_1153 && !GlobalFunc_111()))
			{
				GlobalFunc_5105();
				iLocal_1144 = 3;
				iLocal_1161 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_1161) > 10000)
			{
				iLocal_1144 = 0;
			}
			break;
	}
}




















int func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)//Position - 0x2EB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_769(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = GlobalFunc_768(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && GlobalFunc_485(137)) && iParam3 == 1)
		{
			if (func_73(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_68(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_73(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_68(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = GlobalFunc_766(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_73(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_68(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { GlobalFunc_5197(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}




void func_68(var uParam0, int iParam1, int iParam2)//Position - 0x336B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_72((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_71((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_70((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	GlobalFunc_767(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}


void func_70(var uParam0, int iParam1)//Position - 0x349B
{
	*iParam1 = uParam0 & 255;
}

void func_71(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34AB
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(uParam0, 16) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(uParam0, 12) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(uParam0, 8) & 15;
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34DD
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(uParam0, 28) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(uParam0, 24) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(uParam0, 20) & 15;
}

int func_73(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x350F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_70((*uParam0)[*iParam2], &iVar6);
		if (MISC::IS_BIT_SET(iParam4, iVar6))
		{
			func_72((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_71((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}



int func_76()//Position - 0x37B2
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	if (Local_78.f_109 == 0)
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	if (GlobalFunc_485(128))
	{
		MISC::SET_BIT(&iVar0, 4);
		if (!GlobalFunc_230(24))
		{
			MISC::SET_BIT(&iVar0, 21);
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	if (GlobalFunc_485(131))
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 5);
	}
	if (GlobalFunc_485(137))
	{
		MISC::SET_BIT(&iVar0, 9);
	}
	else if (GlobalFunc_485(126))
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	if (GlobalFunc_485(137))
	{
		if (!GlobalFunc_485(135) && !GlobalFunc_485(136))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		if (GlobalFunc_485(135))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		if (GlobalFunc_485(136))
		{
			MISC::SET_BIT(&iVar0, 12);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 14);
		}
	}
	if (!GlobalFunc_230(20))
	{
		MISC::SET_BIT(&iVar0, 15);
	}
	if (!GlobalFunc_230(46))
	{
		MISC::SET_BIT(&iVar0, 16);
	}
	if (GlobalFunc_485(129) && !MISC::IS_BIT_SET(iVar0, 9))
	{
		MISC::SET_BIT(&iVar0, 17);
	}
	if (GlobalFunc_230(40) && !GlobalFunc_230(43))
	{
		MISC::SET_BIT(&iVar0, 18);
	}
	if (GlobalFunc_230(43) && !GlobalFunc_230(42))
	{
		MISC::SET_BIT(&iVar0, 19);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_77(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
		{
			MISC::SET_BIT(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_77(struct<2> Param0, Vector3 vParam2)//Position - 0x394A
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}








int func_85()//Position - 0x3BA2
{
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_938) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_939)
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("firetruk")))
		{
			iLocal_938 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_938, 1, 1);
			iLocal_1123 = 0;
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2")))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0))
				{
					iLocal_939 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_939, 1, 1);
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_939)) != iLocal_938)
					{
						iLocal_938 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)));
						iLocal_1123 = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_938, 1, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_86()//Position - 0x3CC5
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (iLocal_1163 < 8)
	{
		if (iLocal_1163 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iLocal_1163]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[iLocal_1163]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[iLocal_1163], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 900f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[iLocal_1163], 1, 1);
						iLocal_940[iLocal_1163] = Global_86864.f_9[iLocal_1163];
						bVar0 = true;
						Global_86864.f_9[iLocal_1163] = 0;
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[iLocal_1163], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f && ENTITY::IS_ENTITY_OCCLUDED(Global_86864.f_9[iLocal_1163]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[iLocal_1163], 1, 1);
						PED::DELETE_PED(&(Global_86864.f_9[iLocal_1163]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1, 1, &iVar1, 0, 1, 21))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && !func_87(iVar1, &iLocal_940))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
					iLocal_940[iLocal_1163] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!PED::IS_PED_INJURED(iLocal_940[iLocal_1163]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_940[iLocal_1163], iLocal_949);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iLocal_1163], 17, 0);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
			}
			iLocal_1163++;
		}
	}
}

int func_87(int iParam0, int iParam1)//Position - 0x3E64
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_88()//Position - 0x3EA6
{
	if (bLocal_1128)
	{
		if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_939, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_939, 0) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_938, iLocal_939))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_938, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_938, 0))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_939) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_939, 1)) > 250f))
		{
			bLocal_1128 = false;
		}
	}
	else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_939, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_939, 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_938, iLocal_939))
	{
		bLocal_1128 = true;
	}
}


void func_90()//Position - 0x3FD1
{
	struct<3> Var0;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(Global_86864[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_86864[0], 0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
		iLocal_938 = Global_86864[0];
		Global_86864[0] = 0;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Global_86864[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_86864[1], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
			iLocal_939 = Global_86864[1];
			Global_86864[1] = 0;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
			iLocal_938 = Global_86864[0];
			Global_86864[0] = 0;
			bLocal_1128 = true;
		}
	}
	HUD::REQUEST_ADDITIONAL_TEXT("AHPREP1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("FireMen", &iLocal_949);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_949);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_949, 1862763509);
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01")))
		{
			SYSTEM::WAIT(0);
		}
		Var0 = { 202.0504f, -1655.773f, 28.8031f };
		uLocal_1164 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(Var0, 20f, 1, 0, 0, 0);
		iLocal_940[0] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, 1, 1);
		iLocal_940[1] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 214.4446f, -1643.72f, 28.7776f, 279.1055f, 1, 1);
		iLocal_940[2] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 217.0826f, -1644.117f, 28.7155f, 72.8262f, 1, 1);
		iVar3 = 0;
		while (iVar3 <= (iLocal_940 - 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_940[iVar3]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_940[iVar3], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_940[iVar3], 17, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_940[iVar3], iLocal_949);
			}
			iVar3++;
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_949);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_949, 1862763509);
		iLocal_1115 = -1;
		if (GlobalFunc_Is_Mission_Retry())
		{
			GlobalFunc_5116(354.3055f, -1722.206f, 28.259f, 109.6154f, 1, 0);
			GlobalFunc_5108(0, -1, 1);
		}
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (func_16())
	{
		iLocal_1124 = 1;
	}
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
	}
	iLocal_1123 = 0;
	GlobalFunc_5198(68);
}








void func_98()//Position - 0x454F
{
	GlobalFunc_771();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_938))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_938);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1164, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}




void func_102()//Position - 0x4634
{
	if (iLocal_1124 == 1)
	{
		GlobalFunc_5129(354.3055f, -1722.206f, 28.259f, 109.6154f);
	}
}

