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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<5> Local_90 = { 0, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 21;
	var uLocal_98 = 6;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105[4] = { 0, 0, 0, 0 };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114[5] = { 0, 0, 0, 0, 0 };
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122[2] = { 0, 0 };
	int iLocal_125[2] = { 0, 0 };
	var uLocal_128[2] = { 0, 0 };
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	struct<3> Local_145[15];
	int iLocal_191 = 0;
	struct<3> Local_192 = { 0, 0, 0 } ;
	struct<3> Local_195 = { 0, 0, 0 } ;
	struct<3> Local_198 = { 0, 0, 0 } ;
	float fLocal_201 = 0f;
	struct<3> Local_202 = { 0, 0, 0 } ;
	float fLocal_205 = 0f;
	struct<3> Local_206 = { 0, 0, 0 } ;
	float fLocal_209 = 0f;
	struct<3> Local_210 = { 0, 0, 0 } ;
	float fLocal_213 = 0f;
	struct<3> Local_214 = { 0, 0, 0 } ;
	struct<3> Local_217 = { 0, 0, 0 } ;
	float fLocal_220 = 0f;
	struct<3> Local_221 = { 0, 0, 0 } ;
	float fLocal_224 = 0f;
	struct<3> Local_225 = { 0, 0, 0 } ;
	struct<3> Local_228 = { 0, 0, 0 } ;
	float fLocal_231 = 0f;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	float fLocal_238 = 0f;
	float fLocal_239 = 0f;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_243 = { 0, 0, 0 } ;
	float fLocal_246 = 0f;
	struct<3> Local_247 = { 0, 0, 0 } ;
	struct<3> Local_250 = { 0, 0, 0 } ;
	float fLocal_253 = 0f;
	struct<3> Local_254 = { 0, 0, 0 } ;
	float fLocal_257 = 0f;
	float fLocal_258 = 0f;
	float fLocal_259 = 0f;
	float fLocal_260 = 0f;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	bool bLocal_264 = 0;
	int iLocal_265 = 0;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	bool bLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	bool bLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	bool bLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	char* sLocal_311 = NULL;
	char[] cLocal_312[8] = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	struct<3> Local_325 = { 0, 0, 0 } ;
	float fLocal_328 = 0f;
	var uLocal_329 = 100;
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
	struct<3> Local_630 = { 0, 0, 0 } ;
	struct<3> Local_633 = { 0, 0, 0 } ;
	struct<3> Local_636 = { 0, 0, 0 } ;
	float fLocal_639 = 0f;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
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
	int iLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	struct<2> Local_665 = { 0, 0 } ;
	struct<2> Local_667 = { 0, 0 } ;
	struct<2> Local_669 = { 0, 0 } ;
	struct<2> Local_671 = { 0, 0 } ;
	int iLocal_673 = 0;
	char[] cLocal_674[8] = 0;
	struct<10> Local_675[16];
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	struct<6> Local_842 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	struct<7> Local_852[2];
	int iLocal_867[2] = { 0, 0 };
	int iLocal_870[2] = { 0, 0 };
	var uLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	float fLocal_879 = 0f;
	int iLocal_880 = 0;
	struct<8> Local_881[2];
	float fLocal_898 = 0f;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	int iLocal_922 = 0;
	float fLocal_923 = 0f;
	float fLocal_924 = 0f;
	float fLocal_925 = 0f;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	struct<3> Local_928[4];
	int iLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	bool bLocal_944 = 0;
	struct<3> Local_945 = { 0, 0, 0 } ;
	float fLocal_948 = 0f;
	char* sLocal_949[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959[3] = { 0, 0, 0 };
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	bool bLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	float fLocal_974 = 0f;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	float fLocal_979 = 0f;
	struct<3> Local_980[4];
	struct<3> Local_993[6];
	struct<3> Local_1012[6];
	struct<3> Local_1031[5];
	struct<3> Local_1047[4];
	struct<3> Local_1060[5];
	struct<3> Local_1076[5];
	float fLocal_1092[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1098 = 4;
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
	var uLocal_1111 = 4;
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
	var uLocal_1124 = 15;
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
	var uLocal_1170 = 15;
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
	var uLocal_1216 = 8;
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
	var uLocal_1241 = 8;
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
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	struct<25> Local_1266[2];
	var uLocal_1317 = 8;
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
	var uLocal_1342 = 6;
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
	var uLocal_1361 = 6;
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
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	int iLocal_1380[2] = { 0, 0 };
	bool bLocal_1383 = 0;
	int iLocal_1384[2] = { 0, 0 };
	int iLocal_1387[2] = { 0, 0 };
	int iLocal_1390 = 0;
	bool bLocal_1391 = 0;
	int iLocal_1392 = 0;
	int iLocal_1393 = 0;
	int iLocal_1394[2] = { 0, 0 };
	int iLocal_1397 = 0;
	int iLocal_1398 = 0;
	int iLocal_1399 = 0;
	int iLocal_1400 = 0;
	int iLocal_1401 = 0;
	float fLocal_1402 = 0f;
	float fLocal_1403 = 0f;
	int iLocal_1404 = 0;
	int iLocal_1405 = 0;
	bool bLocal_1406 = 0;
	float fLocal_1407 = 0f;
	int iLocal_1408 = 0;
	float fLocal_1409[2] = { 0f, 0f };
	bool bLocal_1412 = 0;
	int iLocal_1413 = 0;
	int iLocal_1414 = 0;
	int iLocal_1415 = 0;
	var uLocal_1416 = 0;
	bool bLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	bool bLocal_1420 = 0;
	float fLocal_1421 = 0f;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
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
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	uLocal_67 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_68 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_69 = -1;
	iLocal_88 = 6;
	Local_192 = { -1614.526f, -1137.882f, 0.9178f };
	Local_195 = { -1626.046f, -1137.165f, 0.47598f };
	Local_198 = { -805.4391f, 175.644f, 75.7407f };
	fLocal_201 = 336.1657f;
	Local_202 = { -804.3638f, 178.5257f, 75.7407f };
	fLocal_205 = 14.3431f;
	Local_206 = { -1862.529f, -1211.253f, 12.017f };
	fLocal_209 = 45.6064f;
	Local_210 = { -823.2707f, 181.5663f, 70.6967f };
	fLocal_213 = 136.7262f;
	Local_214 = { -2019.921f, -1030.525f, 0.001f };
	Local_217 = { -2008.722f, -1033.154f, 0f };
	fLocal_220 = 280.6858f;
	Local_221 = { -1072.8f, -1703.924f, 3.514f };
	fLocal_224 = 181.9476f;
	Local_225 = { -1105.932f, -1695.893f, 3.3731f };
	Local_228 = { -1106.255f, -1694.977f, 3.3742f };
	fLocal_231 = 122.5477f;
	Local_232 = { -1866.951f, -1208.529f, 12.63051f };
	Local_235 = { -1865.153f, -1210.694f, 12.60679f };
	fLocal_238 = 54.5399f;
	fLocal_239 = 65.01204f;
	Local_240 = { -1627.998f, -1143.906f, -0.612126f };
	Local_243 = { -1608.71f, -1116.125f, 7.893201f };
	fLocal_246 = 45f;
	Local_247 = { -1084.216f, -1707.052f, -6.638385f };
	Local_250 = { -967.2344f, -1829.366f, 40.31441f };
	fLocal_253 = 116f;
	Local_254 = { -1851.92f, -1217.777f, 12.01752f };
	fLocal_257 = 332.3918f;
	fLocal_258 = 113.3809f;
	fLocal_259 = -107.7502f;
	bLocal_264 = true;
	sLocal_266 = "fam2";
	sLocal_267 = "fam2stairs";
	iLocal_268 = 2;
	iLocal_274 = 4;
	iLocal_275 = 4;
	iLocal_276 = 1;
	iLocal_278 = -1;
	iLocal_279 = -1;
	iLocal_280 = -1;
	iLocal_281 = 900;
	bLocal_284 = true;
	sLocal_311 = "family_2_mcs_4";
	cLocal_312 = "FAM2AUD";
	Local_319 = { -2030.409f, -1039.463f, -23.59287f };
	Local_322 = { -1797.853f, -982.6022f, 0f };
	Local_325 = { -934.5598f, -1360.544f, 0f };
	fLocal_328 = 288.2051f;
	Local_630 = { -816.716f, 179.098f, 72.8274f };
	Local_633 = { -816.1068f, 177.5108f, 72.8274f };
	cLocal_674 = cLocal_312;
	StringCopy(&Local_842, "", 24);
	iLocal_927 = -1;
	fLocal_979 = 0f;
	fLocal_1403 = 0f;
	fLocal_1407 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_2237(3);
		GlobalFunc_10632();
		AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
		func_517();
	}
	MISC::SET_MISSION_FLAG(1);
	func_487();
	GlobalFunc_52(0, 1);
	iLocal_1425 = 0;
	while (true)
	{
		if (!iLocal_283)
		{
			func_483();
		}
		if (!iLocal_282)
		{
			func_428();
		}
		func_425();
		func_422();
		RECORDING::_0x208784099002BC30("M_DaddysLittleGirl", 0);
		switch (iLocal_69)
		{
			case -1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
				switch (iLocal_269)
				{
					case 0:
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_103))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
							{
								func_421(-808.0422f, 168.5755f, 75.7504f, 244.0649f);
							}
							else
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
								iLocal_103 = Global_86864.f_9[0];
							}
						}
						if (!INTERIOR::IS_VALID_INTERIOR(iLocal_142))
						{
							iLocal_142 = INTERIOR::GET_INTERIOR_AT_COORDS(-813.1963f, 179.4912f, 71.1592f);
						}
						STREAMING::REQUEST_ANIM_DICT("missfam2mcs_intp1");
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_267);
						STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_l"));
						STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_r"));
						HUD::REQUEST_ADDITIONAL_TEXT("FAMILY2", 0);
						HUD::REQUEST_ADDITIONAL_TEXT(cLocal_312, 6);
						if (!iLocal_1425)
						{
							STREAMING::PREFETCH_SRL("family_2_Timelapse_srl");
							iLocal_1425 = 1;
						}
						if ((((((((((INTERIOR::IS_INTERIOR_READY(iLocal_142) && STREAMING::HAS_ANIM_DICT_LOADED("missfam2mcs_intp1")) && ENTITY::DOES_ENTITY_EXIST(iLocal_103)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_103)) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_mm_doorm_l"))) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_mm_doorm_r"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_267)) && STREAMING::IS_SRL_LOADED()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
						{
							RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							iLocal_1424 = PED::CREATE_SYNCHRONIZED_SCENE(-817.311f, 179.33f, 71.241f, 0f, 0f, -113f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1424, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 8, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
							{
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 1f, 0, 0);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 1, 0, 1);
							}
							if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
							{
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, -1f, 0, 0);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 1, 0, 1);
							}
							ENTITY::CREATE_MODEL_HIDE(Local_630, 1f, joaat("v_ilev_mm_doorm_l"), 0);
							ENTITY::CREATE_MODEL_HIDE(Local_633, 1f, joaat("v_ilev_mm_doorm_r"), 0);
							iLocal_138 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_l"), Local_630, 1, 1, 0);
							iLocal_139 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_r"), Local_633, 1, 1, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_138, iLocal_1424, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_139, iLocal_1424, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_138);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_139);
							CAM::DESTROY_ALL_CAMS(0);
							uLocal_140 = CAM::CREATE_CAMERA(964613260, 1);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_140, iLocal_1424, "fam_2_int_p1_cam", "missfam2mcs_intp1");
							CAM::SET_WIDESCREEN_BORDERS(1, 0);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							GlobalFunc_562(18);
							STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
							STREAMING::BEGIN_SRL();
							SYSTEM::SETTIMERA(0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_doorm_l"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_doorm_r"));
							func_418(PLAYER::PLAYER_PED_ID(), 32);
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 17, 0);
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 16, 0);
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 1, 0);
							PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								if (GlobalFunc_85(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									iVar0 = 0;
									while (iVar0 < 3)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Global_87728[iVar0]))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_87728[iVar0], 1), Local_210) < 900f)
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_87728[iVar0], 1, 1);
												VEHICLE::DELETE_VEHICLE(&(Global_87728[iVar0]));
												iVar0 = 3;
											}
										}
										iVar0++;
									}
								}
							}
							GlobalFunc_8365(Local_202, 1000f, 0);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							}
							else
							{
								iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
							{
								if (!VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("taxi")) && !GlobalFunc_4929(iVar1, 0, 1))
								{
									if (func_410(iVar1) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 50f)
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
										if (GlobalFunc_99(iVar1) == 0)
										{
											VEHICLE::DELETE_VEHICLE(&iVar1);
										}
										else
										{
											GlobalFunc_10236(iVar1, -822.4229f, 157.8134f, 69.0913f, 91.16499f, 24, 0);
											ENTITY::SET_ENTITY_COORDS(iVar1, -822.4229f, 157.8134f, 69.0913f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(iVar1, 91.16499f);
											VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
										}
									}
								}
							}
							MISC::CLEAR_AREA(Local_210, 200f, 1, 0, 0, 0);
							GlobalFunc_76(24);
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f);
							PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
							iLocal_269++;
						}
						break;
					
					case 1:
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
						if (GlobalFunc_4926(1000))
						{
							GlobalFunc_570(500);
							iLocal_269 += 2;
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1424) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1424) > 0.95f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1424))
						{
							iLocal_1424 = -1;
							Local_90.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
							CAM::ADD_CAM_SPLINE_NODE(Local_90.f_4, -835.1494f, 180.1434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(Local_90.f_4, -835.7494f, 180.2434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							CAM::SET_CAM_FOV(Local_90.f_4, 47.9931f);
							CAM::SET_CAM_ACTIVE(Local_90.f_4, 1);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, 1);
							GlobalFunc_9258(&Local_90, 1, 0, 2000, 1, 1, 0, 1);
							CAM::SET_CAM_ACTIVE(uLocal_140, 0);
							iLocal_1423 = 10;
							PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
							iLocal_269++;
						}
						break;
					
					case 2:
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
						if (GlobalFunc_9141(iLocal_1423, 0, "EXTRASUNNY", "cirrocumulus", &Local_90, -1082130432, 0, 1, 1065353216))
						{
							AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
							SYSTEM::SETTIMERA(0);
							iLocal_269++;
						}
						if (GlobalFunc_75())
						{
							GlobalFunc_9258(&Local_90, 0, 0, 2000, 1, 1, 0, 1);
							SYSTEM::WAIT(0);
							GlobalFunc_570(500);
							iLocal_269++;
						}
						break;
					
					case 3:
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						if ((SYSTEM::TIMERA() > 300 && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fam2Stairs"))
						{
							func_336(0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
							{
								ENTITY::SET_ENTITY_VISIBLE(iLocal_103, 1);
								ENTITY::SET_ENTITY_COLLISION(iLocal_103, 1, 0);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_103, 0);
							}
							CLOCK::SET_CLOCK_TIME(10, 0, 0);
							iLocal_269++;
						}
						break;
					
					case 4:
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						iLocal_269 = 0;
						iLocal_69 = 0;
						break;
				}
				break;
			
			case 0:
				func_325();
				break;
			
			case 1:
				func_299();
				break;
			
			case 2:
				func_271();
				break;
			
			case 3:
				func_262();
				break;
			
			case 4:
				func_260();
				break;
			
			case 5:
				func_249();
				break;
			
			case 6:
				func_247();
				break;
			
			case 7:
				func_209();
				func_206();
				break;
			
			case 8:
				func_189();
				break;
			
			case 9:
				func_168();
				break;
			
			case 11:
				func_142();
				break;
			
			default:
				break;
		}
		GlobalFunc_502();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && !PED::IS_PED_INJURED(iLocal_103))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_113, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_103, 0);
			}
		}
		func_139(0);
		func_100();
		func_1();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_103) && !PED::IS_PED_INJURED(iLocal_103))
		{
			PED::SET_PED_RESET_FLAG(iLocal_103, 328, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_102) && !PED::IS_PED_INJURED(iLocal_102))
		{
			PED::SET_PED_RESET_FLAG(iLocal_102, 328, 1);
		}
		if (iLocal_262)
		{
			iLocal_262 = 0;
		}
		if (iLocal_263)
		{
			iLocal_263 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xB67
{
	int iVar0;
	bool bVar1;
	
	switch (iLocal_876)
	{
		case 0:
			if (iLocal_69 == 5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2033.821f, -1031.864f, 4.89f) < 62500f)
			{
				STREAMING::REQUEST_MODEL(joaat("csb_porndudes"));
				STREAMING::REQUEST_MODEL(joaat("a_f_y_beach_01"));
				STREAMING::REQUEST_ANIM_DICT("missfam2leadinoutmcs3");
				if (((STREAMING::HAS_MODEL_LOADED(joaat("csb_porndudes")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_beach_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missfam2leadinoutmcs3")) && func_95(-2033.23f, -1032.27f, 4.89f, 0f))
				{
					if (!PED::IS_PED_INJURED(iLocal_102))
					{
						iLocal_105[0] = PED::CREATE_PED(26, joaat("csb_porndudes"), -2032.69f, -1031.36f, 5.59f, 0f, 1, 1);
						PED::SET_PED_LOD_MULTIPLIER(iLocal_105[0], 1.75f);
						iLocal_105[1] = PED::CREATE_PED(26, joaat("csb_porndudes"), -2034.42f, -1032.71f, 5.54f, 0f, 1, 1);
						iLocal_105[2] = PED::CREATE_PED(26, joaat("a_f_y_beach_01"), -2033.32f, -1031.07f, 5.54f, 0f, 1, 1);
						iLocal_105[3] = PED::CREATE_PED(26, joaat("a_f_y_beach_01"), -2034.48f, -1031.6f, 5.48f, 0f, 1, 1);
						uLocal_877 = PED::CREATE_SYNCHRONIZED_SCENE(-2033.821f, -1031.864f, 4.89f, 0f, 0f, -4.4f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_105[0], uLocal_877, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_105[1], iLocal_877, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_105[2], iLocal_877, "missfam2leadinoutmcs3", "onboat_leadin_porngal_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_105[3], iLocal_877, "missfam2leadinoutmcs3", "onboat_leadin_porngal_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_102, iLocal_877, "missfam2leadinoutmcs3", "onboat_leadin_tracy", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_105[0], 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_105[0], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_105[0], 4, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_105[0], 1, 0, 0, false);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_105[1], 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_105[1], 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_105[1], 4, 2, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_105[1], 0, 0, 0, false);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_877, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("csb_porndudes"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_beach_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_tracydisanto"));
						iLocal_876++;
					}
				}
			}
			break;
		
		case 1:
			func_94("family_2_mcs_3", -2033.821f, -1031.864f, 4.89f, 100f, &iLocal_288);
			if (iLocal_288)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoplayer");
					func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[0]) && !PED::IS_PED_INJURED(iLocal_105[0]))
					{
						func_2("Guy_on_sofa", iLocal_105[0], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[1]) && !PED::IS_PED_INJURED(iLocal_105[1]))
					{
						func_2("Man_getting_wood", iLocal_105[1], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[2]) && !PED::IS_PED_INJURED(iLocal_105[2]))
					{
						func_2("Girl_on_sofa", iLocal_105[2], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[3]) && !PED::IS_PED_INJURED(iLocal_105[3]))
					{
						func_2("Girl_being_chatted_up", iLocal_105[3], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_102) && !PED::IS_PED_INJURED(iLocal_102))
					{
						func_2("Tracy", iLocal_102, 0, 2);
					}
				}
			}
			if (iLocal_288)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2033.821f, -1031.864f, 4.89f) > (120f * 120f))
				{
					iLocal_288 = 0;
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2033.821f, -1031.864f, 4.89f) > 75625f || (iLocal_69 != 5 && iLocal_69 != 6))
			{
				if (iLocal_69 != 6)
				{
					bVar1 = true;
					iVar0 = 0;
					while (iVar0 < iLocal_105)
					{
						if (!PED::IS_PED_INJURED(iLocal_105[iVar0]))
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_105[iVar0]))
							{
								bVar1 = false;
							}
						}
						iVar0++;
					}
					if (!PED::IS_PED_INJURED(iLocal_102))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_102))
						{
							bVar1 = false;
						}
					}
					if (bVar1)
					{
						iVar0 = 0;
						while (iVar0 < iLocal_105)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[iVar0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_105[iVar0]);
								PED::DELETE_PED(&(iLocal_105[iVar0]));
							}
							iVar0++;
						}
					}
					iLocal_876 = 0;
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1029
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_3(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}

void func_3(int iParam0, var uParam1, int iParam2)//Position - 0x10E4
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_8358(iParam0, &Var2, 0);
	GlobalFunc_8358(iParam0, uParam1, iParam2);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (GlobalFunc_4911(iVar81, GlobalFunc_33(iVar0), GlobalFunc_4915(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10841(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, GlobalFunc_33(iVar0), GlobalFunc_4915(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10841(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_7138(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10841(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_7138(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10841(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = GlobalFunc_24(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { GlobalFunc_10841(iVar81, 0, iVar86) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}



























































































void func_94(char* sParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x17CFF
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1, 1) < fParam4 && !*bParam5)
	{
		CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
		*bParam5 = 1;
	}
}

int func_95(struct<3> Param0, float fParam3)//Position - 0x17D34
{
	switch (iLocal_875)
	{
		case 0:
			if (GlobalFunc_7047(&iLocal_102, 15, -808.0422f, 168.5755f, 75.7504f, 244.0649f, 1))
			{
				iLocal_875++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_102))
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_102, 2, 3, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_102, 3, 4, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_102, 4, 4, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_102, 6, 2, 0);
				PED::SET_PED_PRELOAD_PROP_DATA(iLocal_102, 0, 0, 0);
				PED::SET_PED_PRELOAD_PROP_DATA(iLocal_102, 1, 1, 0);
				iLocal_875++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_102))
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_102))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_102, 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_102, 3, 4, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_102, 4, 4, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_102, 6, 2, 0, 0);
					PED::SET_PED_PROP_INDEX(iLocal_102, 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(iLocal_102, 1, 1, 0, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_102, Param0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_102, fParam3);
					func_96(iLocal_102);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_102);
					PED::RELEASE_PED_PRELOAD_PROP_DATA(iLocal_102);
					iLocal_875 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x17E55
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 104, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
		PED::SET_PED_NEVER_LEAVES_GROUP(iParam0, 1);
		PED::SET_PED_DIES_IN_WATER(iParam0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_143);
	}
}




void func_100()//Position - 0x17FA8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_878)
	{
		case 0:
			if (iLocal_69 < 3 || (iLocal_69 == 11 && iLocal_82 < 3))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_225) < 40000f)
				{
					iLocal_878++;
				}
			}
			break;
		
		case 1:
			bVar0 = false;
			if ((iLocal_69 > 2 && iLocal_69 != 11) || (iLocal_69 == 11 && iLocal_82 > 2))
			{
				bVar0 = true;
			}
			if (func_137(bVar0))
			{
				fLocal_879 = 0f;
				iLocal_878++;
			}
			break;
		
		case 2:
			if (!iLocal_880)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 0))
				{
					iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 1, 0, 1);
					ENTITY::SET_ENTITY_PROOFS(iVar1, 1, 1, 1, 1, 1, 1, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, 1);
					iLocal_880 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_104))
			{
				if (!PED::IS_PED_FLEEING(iLocal_104))
				{
					if (!PED::IS_PED_USING_SCENARIO(iLocal_104, "PROP_HUMAN_SEAT_CHAIR"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_104, Local_225, 1, 0, 0, 1);
						if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Local_225, "PROP_HUMAN_SEAT_CHAIR", 2f, 1))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_104, -1105.241f, -1697.025f, 3.3678f, 2f, 0);
						}
					}
				}
			}
			iVar2 = 0;
			while (iVar2 < iLocal_114)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[iVar2], 0))
				{
					if (iLocal_69 <= 2)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_114[iVar2], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 9f)
						{
							PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
						}
					}
					if (iLocal_69 < 2)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_114[iVar2]) != 2)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_114[iVar2], 2);
						}
					}
					else if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_114[iVar2]) == 2)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_114[iVar2], 1);
					}
				}
				iVar2++;
			}
			func_102();
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_225) > 44100f)
			{
				func_101();
				iLocal_878 = 0;
			}
			break;
	}
}

void func_101()//Position - 0x181D5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_104))
	{
		PED::DELETE_PED(&iLocal_104);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_114)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_114[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tribike"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bmx"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cruiser"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scorcher"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_m_bikehire_01"));
}

void func_102()//Position - 0x18243
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar1 = 0;
	bVar2 = false;
	iVar3 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("scorcher"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("cruiser"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("bmx")))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar0)) > 2f)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -1106.309f, -1693.715f, 5.12379f, 6.25f, 7f, 3.25f, 0, 1, 0))
			{
				iVar4 = 0;
				while (iVar4 < iLocal_114)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[iVar4], 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_114[iVar4], iVar0))
						{
							bVar2 = true;
						}
					}
					iVar4++;
				}
			}
		}
	}
	if (iVar1 || bVar2)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_114)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[iVar4], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_114[iVar4], 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_114[iVar4], 0, 0f, 0f, -0.001f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			iVar4++;
		}
		if (!PED::IS_PED_INJURED(iLocal_104))
		{
			if (bVar2)
			{
				func_103("FM2_BIKES");
			}
		}
	}
	bVar5 = false;
	if (!PED::IS_PED_INJURED(iLocal_104))
	{
		if ((((FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_104, 1), 20f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_104, 1), 20f, 1)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_104, 1) + Vector(20f, 20f, 20f), ENTITY::GET_ENTITY_COORDS(iLocal_104, 1) - Vector(20f, 20f, 20f), 0)) || PED::IS_PED_FLEEING(iLocal_104)) || ((iLocal_69 == 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_225, 40f, 40f, 20f, 0, 1, 0)))
		{
			bVar5 = true;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_104, 1)) < 100f)
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_104, PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_104))
				{
					fLocal_879 = (fLocal_879 + MISC::GET_FRAME_TIME());
					if (fLocal_879 > 0.5f)
					{
						bVar5 = true;
					}
				}
				else if (fLocal_879 > 0f)
				{
					fLocal_879 = (fLocal_879 - (MISC::GET_FRAME_TIME() * 2f));
				}
				else if (fLocal_879 != 0f)
				{
					fLocal_879 = 0f;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_104, PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(iLocal_104))
			{
				bVar5 = true;
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_104, 1)) < 400f && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			iVar3 = 1;
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_114)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar4]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_114[iVar4], 0);
			}
			iVar4++;
		}
		if ((!PED::IS_PED_INJURED(iLocal_104) && !PED::IS_PED_FLEEING(iLocal_104)) && PED::IS_PED_USING_ANY_SCENARIO(iLocal_104))
		{
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iLocal_104, ENTITY::GET_ENTITY_COORDS(iLocal_104, 1) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_104));
			TASK::TASK_SMART_FLEE_PED(iLocal_104, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
			}
		}
		if (((iLocal_69 == 1 || iLocal_69 == 2) || (iLocal_69 == 3 && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_103, iLocal_104, 30f, 30f, 30f, 0, 1, 0))) || iLocal_69 == 11)
		{
			if (!PED::IS_PED_INJURED(iLocal_103))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_103, 2, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_103, PLAYER::PLAYER_PED_ID(), 200f, 20000, 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_104) && (ENTITY::IS_ENTITY_DEAD(iLocal_104) || PED::IS_PED_INJURED(iLocal_104)))
	{
		if ((iLocal_69 < 3 || (iLocal_69 == 3 && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_103, iLocal_104, 30f, 30f, 30f, 0, 1, 0))) || iLocal_69 == 11)
		{
			func_103("FM2_BGHIT");
		}
	}
	else if ((((!PED::IS_PED_INJURED(iLocal_104) && PED::IS_PED_FLEEING(iLocal_104)) && iLocal_69 < 3) || fLocal_879 > 0.5f) || iVar3)
	{
		func_103("FM2_BGRUN");
	}
	else if (!PED::IS_PED_INJURED(iLocal_103) && PED::IS_PED_FLEEING(iLocal_103))
	{
		func_103("FM2_JSPOOK");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = 0;
	}
}

void func_103(char* sParam0)//Position - 0x18719
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "FM2_JSPOOK"))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iLocal_103))
		{
			sParam0 = "FM2_JIMHIT";
		}
	}
	GlobalFunc_10835(sParam0);
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "FM2_TSPOOK") || MISC::ARE_STRINGS_EQUAL(sParam0, "FM2_JSPOOK"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_102))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_102, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_102);
			}
			TASK::TASK_SMART_FLEE_PED(iLocal_102, PLAYER::PLAYER_PED_ID(), 500f, 60000, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_103, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_103);
			}
			TASK::TASK_SMART_FLEE_PED(iLocal_103, PLAYER::PLAYER_PED_ID(), 500f, 60000, 0, 0);
		}
	}
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_69 == 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		else
		{
			iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		}
		bVar1 = false;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (GlobalFunc_85(iVar0))
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_87728[iVar2]))
					{
						bVar1 = true;
						iVar2 = 3;
					}
					iVar2++;
				}
			}
			if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")) && !bVar1)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 50f)
				{
					if (GlobalFunc_99(iVar0) != 0)
					{
						GlobalFunc_9257(iVar0, 0, 145);
					}
				}
			}
		}
	}
	STREAMING::REMOVE_IPL("smboat");
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_128[iVar3]))
		{
			HUD::REMOVE_BLIP(&(uLocal_128[iVar3]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_125[iVar3]))
		{
			PED::DELETE_PED(&(iLocal_125[iVar3]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[iVar3]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_122[iVar3]));
		}
		iVar3++;
	}
	if (iLocal_69 >= 5 && iLocal_69 != 11)
	{
		while (!func_336(1, 1))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5129(Local_206, fLocal_209);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
	{
		PED::DELETE_PED(&iLocal_103);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_102))
	{
		PED::DELETE_PED(&iLocal_102);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_111);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_112);
	}
	func_517();
}


































bool func_137(bool bParam0)//Position - 0x1A75F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	STREAMING::REQUEST_MODEL(joaat("u_m_m_bikehire_01"));
	STREAMING::REQUEST_MODEL(joaat("cruiser"));
	STREAMING::REQUEST_MODEL(joaat("bmx"));
	STREAMING::REQUEST_MODEL(joaat("scorcher"));
	STREAMING::REQUEST_MODEL(joaat("tribike"));
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_bikehire_01")) && STREAMING::HAS_MODEL_LOADED(joaat("cruiser"))) && STREAMING::HAS_MODEL_LOADED(joaat("bmx"))) && STREAMING::HAS_MODEL_LOADED(joaat("scorcher"))) && STREAMING::HAS_MODEL_LOADED(joaat("tribike")))
	{
		if (iLocal_276 != 0 || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]))
			{
				iLocal_114[0] = VEHICLE::CREATE_VEHICLE(joaat("scorcher"), -1106.885f, -1692.229f, 4.0189f, 0f, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[0], 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_114[0], -1106.885f, -1692.229f, 4.0189f, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_114[0], -0.0504f, -0.0723f, -0.4427f, 0.8923f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_114[0], 2);
			}
		}
		if ((iLocal_275 != 1 && iLocal_276 != 1) || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[1]))
			{
				iLocal_114[1] = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), -1108.396f, -1690.399f, 3.9549f, 0f, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[1], 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_114[1], -1108.396f, -1690.399f, 3.9549f, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_114[1], -0.0466f, -0.074f, -0.4628f, 0.8822f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_114[1], 1);
			}
		}
		if (iLocal_276 != 2 || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[2]))
			{
				iLocal_114[2] = VEHICLE::CREATE_VEHICLE(joaat("bmx"), -1109.405f, -1688.704f, 3.7501f, 0f, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[2], 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_114[2], -1109.405f, -1688.704f, 3.7501f, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_114[2], 0.0178f, 0.0525f, -0.4469f, 0.8929f);
			}
		}
		if (iLocal_276 != 3 || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[3]))
			{
				iLocal_114[3] = VEHICLE::CREATE_VEHICLE(joaat("tribike"), -1111.001f, -1686.629f, 3.9705f, 0f, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[3], 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_114[3], -1111.001f, -1686.629f, 3.9705f, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_114[3], -0.0563f, -0.0702f, -0.5377f, 0.8383f);
			}
		}
		if ((iLocal_275 != 4 && iLocal_276 != 4) || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[4]))
			{
				iLocal_114[4] = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), -1105.606f, -1693.98f, 3.9518f, 0f, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[4], 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_114[4], -1105.606f, -1693.98f, 3.9518f, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_114[4], -0.0437f, -0.0759f, -0.4104f, 0.9077f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_114[4], 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_114[4], 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_104))
		{
			iLocal_104 = PED::CREATE_PED(26, joaat("u_m_m_bikehire_01"), Local_225, fLocal_257, 1, 1);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_104);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_104, 17, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_104, 128, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_104, 1024, 1);
		GlobalFunc_173(&Local_675, 4, iLocal_104, "FAM2BIKEHIRE", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_104, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_104, -2065892691);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_104, 0);
		PED::_0x425AECF167663F48(iLocal_104, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_114)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_114[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
			}
			iVar0++;
		}
	}
	if (bParam0)
	{
		iVar2 = 1;
		iVar3 = 0;
		while (iVar3 < iLocal_114)
		{
			if (iVar3 != iLocal_276 && iVar3 != iLocal_275)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar3]))
				{
					iVar2 = 0;
				}
			}
			iVar3++;
		}
		bVar1 = iVar2;
	}
	else
	{
		bVar1 = (((((ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_114[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_114[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_114[3])) && ENTITY::DOES_ENTITY_EXIST(iLocal_114[4])) && ENTITY::DOES_ENTITY_EXIST(iLocal_104));
	}
	return bVar1;
}


void func_139(bool bParam0)//Position - 0x1AC79
{
	if (!iLocal_662 && !bParam0)
	{
		if (iLocal_69 < 5)
		{
			uLocal_661 = PED::ADD_SCENARIO_BLOCKING_AREA(-1120.292f, -1681.018f, 13.274f, -1081.289f, -1706.522f, 1.5344f, 0, 1, 1, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1082.088f, -1714.033f, 3.285254f, -1107.201f, -1681.87f, 14.29007f, 37.5f, 0, 0, 1);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(5.919011f, -1697.383f, -1112.611f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.383f, -1112.611f) + Vector(2.75f, 30f, 42.688f), 0, 1);
			uLocal_873 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1107.517f, -1692.887f, 4.374f, 4.161f, 13.858f, 4.5f, GlobalFunc_723(36.0244f), 0, 1);
			iLocal_662 = 1;
		}
	}
	else if (iLocal_69 >= 5 || bParam0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_661, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1082.088f, -1714.033f, 3.285254f, -1107.201f, -1681.87f, 14.29007f, 37.5f, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(5.919011f, -1697.383f, -1112.611f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.383f, -1112.611f) + Vector(2.75f, 30f, 42.688f), 1, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_873))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_873);
		}
		iLocal_662 = 0;
	}
}



void func_142()//Position - 0x1AE78
{
	if (iLocal_69 != 11)
	{
		iLocal_82 = iLocal_69;
		iLocal_69 = 11;
		if (HUD::DOES_BLIP_EXIST(uLocal_131))
		{
			HUD::REMOVE_BLIP(&uLocal_131);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_132))
		{
			HUD::REMOVE_BLIP(&uLocal_132);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_133))
		{
			HUD::REMOVE_BLIP(&uLocal_133);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_134))
		{
			HUD::REMOVE_BLIP(&uLocal_134);
		}
		if (GlobalFunc_111())
		{
			if (!iLocal_841)
			{
				Local_842 = { GlobalFunc_514() };
				GlobalFunc_5105();
				iLocal_841 = 1;
				iLocal_908 = 0;
				iLocal_910 = 0;
				iLocal_909 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_82 == 1)
	{
		func_102();
		if (!PED::IS_PED_INJURED(iLocal_103))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 625f)
			{
				if ((!iLocal_908 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_WANTED", 8, 0, 0, 0))
					{
						iLocal_909 = MISC::GET_GAME_TIMER();
						iLocal_908 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_909) > 15000 && !GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_LOSE", 8, 0, 0, 0))
					{
						iLocal_909 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_152(iLocal_103))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_133))
				{
					HUD::REMOVE_BLIP(&uLocal_133);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_133))
			{
				GlobalFunc_4956();
				uLocal_133 = GlobalFunc_6797(iLocal_103, 0, 145);
			}
			else
			{
				if (!bLocal_286 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_527("FM2_JIMGB", 7500, 1);
					bLocal_286 = true;
				}
				if (func_145(iLocal_103, 300f))
				{
					func_103("FM2_JIMAB");
				}
			}
		}
	}
	else if (iLocal_82 == 8)
	{
		if (!PED::IS_PED_INJURED(iLocal_102))
		{
			if (func_152(iLocal_102))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_133))
				{
					HUD::REMOVE_BLIP(&uLocal_133);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_133))
			{
				GlobalFunc_4956();
				uLocal_133 = GlobalFunc_6797(iLocal_102, 0, 145);
			}
			else
			{
				if (!bLocal_287 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_527("FM2_TRAGB", 7500, 1);
					bLocal_287 = true;
				}
				if (func_145(iLocal_102, 300f))
				{
					func_103("FM2_TRAAB");
				}
			}
		}
		if (!iLocal_910)
		{
			iLocal_910 = 1;
		}
	}
	else if (!iLocal_910)
	{
		iLocal_910 = 1;
	}
	if (!GlobalFunc_111())
	{
		func_143(&Local_671);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (!iLocal_910)
		{
			if (iLocal_82 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 625f)
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_LOSTCOP", 8, 0, 0, 0))
						{
							iLocal_910 = 1;
						}
					}
				}
			}
		}
		else
		{
			iLocal_69 = iLocal_82;
			Local_671.f_1 = 0;
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_143(var uParam0)//Position - 0x1B122
{
	if (!uParam0->f_1)
	{
		if (!MISC::IS_STRING_NULL(*uParam0))
		{
			GlobalFunc_164(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}


int func_145(int iParam0, float fParam1)//Position - 0x1B166
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) > fParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}







int func_152(int iParam0)//Position - 0x1B301
{
	if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 50f, 50f, 50f, 0, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::_0x03EA03AF85A85CB7(iLocal_103, 0, 1, 0, 0, 0, 0, 1, -1))
			{
				PED::REMOVE_PED_FROM_GROUP(iParam0);
			}
		}
		return 1;
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_18, 0, 1, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	if (PED::_0x03EA03AF85A85CB7(iParam0, 0, 1, 0, 0, 0, 0, 1, -1))
	{
	}
	if (PED::_0x03EA03AF85A85CB7(iParam0, 0, 1, 0, 0, 0, 0, 0, -1))
	{
	}
	return 0;
}
















void func_168()//Position - 0x1BB2F
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
	}
	switch (iLocal_269)
	{
		case 0:
			AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 1);
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("missfam2_pier");
			STREAMING::REQUEST_MODEL(joaat("prop_cigar_01"));
			STREAMING::REQUEST_MODEL(joaat("cruiser"));
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (bLocal_284)
				{
					CUTSCENE::REQUEST_CUTSCENE("family_2_mcs_4", 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_4", 2, 8);
				}
				iLocal_269++;
			}
			else
			{
				iLocal_269 += 2;
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_102, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 1, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 0, 0, 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
				}
				iLocal_269++;
			}
			break;
		
		case 2:
			func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_102, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 0, 0, 0, 0);
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				GlobalFunc_4956();
				GlobalFunc_8316(1, 1, 1, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 0, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_110, "Michaels_seashark", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_102))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_102, "Tracy", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_103, "Jimmy", 0, 0, 0);
				}
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				GlobalFunc_4956();
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_COMPLETE");
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				STREAMING::REQUEST_ANIM_DICT("missfam2_pier");
				STREAMING::REQUEST_MODEL(joaat("prop_cigar_01"));
				STREAMING::REQUEST_MODEL(joaat("cruiser"));
				GlobalFunc_2885();
				iLocal_269++;
			}
			break;
		
		case 3:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f);
			GlobalFunc_45(1, 1);
			AUDIO::SET_AUDIO_FLAG("AvoidMissionCompleteDelay", 0);
			iLocal_269++;
			break;
		
		case 4:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_110);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_110, 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
				{
					PED::DELETE_PED(&iLocal_103);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_102))
				{
					PED::DELETE_PED(&iLocal_102);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1607.251f, -1138.103f, 1.1443f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 262.2968f);
			}
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.5f);
			if (CAM::IS_SCREEN_FADED_OUT() && CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				SYSTEM::SETTIMERA(0);
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 31400)
				{
					if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1500);
					}
					PAD::DISABLE_CONTROL_ACTION(0, 18, 1);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				GlobalFunc_8316(0, 1, 1, 0);
				GlobalFunc_657();
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_269++;
			}
			break;
		
		case 5:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_113))
				{
					GlobalFunc_10236(iLocal_113, -1060.518f, -1691.88f, 3.5097f, 185.4265f, 24, 0);
				}
				PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 3);
				PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 2);
				while (!func_336(0, 1))
				{
					SYSTEM::WAIT(0);
					PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
				}
				SYSTEM::SETTIMERA(0);
				STREAMING::REMOVE_IPL("smboat");
				iLocal_269 = 100;
			}
			break;
		
		case 100:
			STREAMING::REQUEST_PTFX_ASSET();
			func_176(-1850.139f, -1250.253f, 8.59f, -120.1799f, 1);
			STREAMING::REQUEST_ANIM_DICT("missfam2_pier");
			STREAMING::REQUEST_MODEL(joaat("prop_cigar_01"));
			STREAMING::REQUEST_MODEL(joaat("cruiser"));
			while ((!STREAMING::HAS_ANIM_DICT_LOADED("missfam2_pier") || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cigar_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cruiser")))
			{
				SYSTEM::WAIT(0);
				PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
			}
			AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1850.139f, -1250.253f, 8.59f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 134.28f);
			iLocal_318 = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), -1846.573f, -1214.731f, 12.5755f, 0f, 1, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_318, -0.0155f, -0.0834f, -0.306f, 0.9483f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_318);
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			iLocal_317 = OBJECT::CREATE_OBJECT(joaat("prop_cigar_01"), -1850.139f, -1250.253f, 8.59f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_317, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
			GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_cig_smoke", iLocal_317, 0.05f, 0f, 0f, 0f, 0f, 90f, 1065353216, 0, 0, 0);
			uLocal_316 = CAM::CREATE_CAMERA(26379945, 1);
			CAM::SET_CAM_PARAMS(uLocal_316, -1852.002f, -1250.224f, 8.9706f, -3.6975f, 0f, -120.1799f, 45f, 0, 1, 1, 2);
			CAM::SET_CAM_PARAMS(uLocal_316, -1852.087f, -1250.395f, 8.9706f, -1.3266f, 0f, -102.4498f, 45f, 10000, 1, 1, 2);
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("mission_stat_watcher")) > 0)
			{
				GlobalFunc_45(1, 1);
				while (!Global_68505)
				{
					SYSTEM::WAIT(0);
					PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
				}
				while (Global_68505)
				{
					SYSTEM::WAIT(0);
					PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
				}
			}
			else
			{
				SYSTEM::WAIT(3000);
			}
			MISC::CLEAR_AREA_OF_PEDS(-1850.15f, -1250.253f, 8.625f, 5f, 0);
			uLocal_315 = PED::CREATE_SYNCHRONIZED_SCENE(-1850.15f, -1250.253f, 8.625f, 0f, 0f, 134.28f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_315, "missfam2_pier", "pier_lean_toss_cigarette", 1000f, -4f, 0, 0, 1148846080, 0);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			SYSTEM::SETTIMERA(0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			iLocal_269++;
			break;
		
		case 101:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_315) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_315) > 0.227f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), -0.025f, 0.12f, 0f, 0f, 90f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_269++;
			}
			break;
		
		case 102:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_315) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_315) > 0.563f)
			{
				CAM::SET_CAM_PARAMS(uLocal_316, CAM::GET_CAM_COORD(uLocal_316), CAM::GET_CAM_ROT(uLocal_316, 2), CAM::GET_CAM_FOV(uLocal_316), 0, 1, 1, 2);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
				{
					CAM::SET_CAM_PARAMS(uLocal_316, -1852.922f, -1252.698f, 9.3524f, -2.9046f, 0f, -46.5763f, 50f, 4000, 1, 1, 2);
				}
				else
				{
					CAM::SET_CAM_PARAMS(uLocal_316, -1851.685f, -1251.438f, 9.3524f, -0.0547f, 0.0543f, -38.2308f, 50f, 4000, 1, 1, 2);
				}
				iLocal_269++;
			}
			break;
		
		case 103:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_317) && ENTITY::IS_ENTITY_ATTACHED(iLocal_317))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_315) > 0.711f)
				{
					ENTITY::DETACH_ENTITY(iLocal_317, 1, 1);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_317, Vector(8.3737f, -1250.913f, -1852.43f) - Vector(9.2628f, -1250.44f, -1850.899f));
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_315) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_315) > 0.768f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_269++;
			}
			break;
		
		case 104:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_315) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_315) > 0.7116f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				GlobalFunc_669(&uLocal_643, PLAYER::PLAYER_PED_ID(), 0, 1069547520, 1000, 1000, 700, 0, 1045220557);
				iLocal_269++;
			}
			break;
		
		case 105:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_315))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					if (CAM::DOES_CAM_EXIST(uLocal_316))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_315) > 0.85f && GlobalFunc_7208(&uLocal_643, 0, 1, 1, 0, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_316))
							{
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
								CAM::RENDER_SCRIPT_CAMS(false, 1, 1000, 1, 0, 0);
								CAM::DESTROY_CAM(uLocal_316, 0);
							}
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_315) > 0.98f)
				{
					if (CAM::DOES_CAM_EXIST(uLocal_316))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::RENDER_SCRIPT_CAMS(false, 1, 1000, 1, 0, 0);
						CAM::DESTROY_CAM(uLocal_316, 0);
					}
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					CAM::SET_WIDESCREEN_BORDERS(0, 100);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_317))
					{
						OBJECT::DELETE_OBJECT(&iLocal_317);
					}
					SYSTEM::SETTIMERA(0);
					iLocal_269++;
				}
			}
			break;
		
		case 106:
			if (SYSTEM::TIMERA() > 100)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				GlobalFunc_5103(0, 0);
				func_517();
			}
			break;
	}
}








void func_176(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x1CA59
{
	int iVar0;
	
	if (!GlobalFunc_188())
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
		STREAMING::NEW_LOAD_SCENE_START(Param0, SYSTEM::COS((fParam3 + 90f)), SYSTEM::SIN((fParam3 + 90f)), 0f, 25f, 0);
		SYSTEM::SETTIMERA(0);
		iVar0 = MISC::GET_GAME_TIMER();
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iVar0) < 12000)
		{
			SYSTEM::WAIT(0);
		}
		if (bParam4)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
}













void func_189()//Position - 0x1CD8A
{
	bool bVar0;
	bool bVar1;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!PED::IS_PED_INJURED(iLocal_102))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_319) < 10f)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		}
		if (iLocal_269 < 100)
		{
			if (func_205(&iLocal_110, &uLocal_261, &iLocal_262) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
			{
				iLocal_269 = 100;
			}
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			AUDIO::START_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		switch (iLocal_269)
		{
			case 0:
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
					}
					Local_669.f_1 = 0;
					iLocal_978 = 0;
					fLocal_979 = 0f;
					iLocal_280 = 0;
					iLocal_288 = 0;
					iLocal_269++;
					if (iLocal_265)
					{
						iLocal_269 = -1;
					}
				}
				break;
			
			case -1:
				STREAMING::REQUEST_IPL("smboat");
				while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
				{
					RECORDING::_0x208784099002BC30("M_DaddysLittleGirl", 0);
					SYSTEM::WAIT(0);
				}
				iLocal_269 = 1;
				break;
			
			case 1:
				func_202(&iLocal_110, &uLocal_134, Local_195, &uLocal_131, &Local_669);
				if (!GlobalFunc_111() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_102);
					ENTITY::SET_ENTITY_PROOFS(iLocal_110, 0, 0, 0, 0, 0, 0, 0, 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					if (!iLocal_265)
					{
						GlobalFunc_164("FM2_DRIVE", 5000, 1);
					}
					SYSTEM::SETTIMERA(0);
					if (iLocal_265)
					{
						iLocal_269 = -2;
					}
					else
					{
						iLocal_269++;
					}
				}
				break;
			
			case -2:
				func_202(&iLocal_110, &uLocal_134, Local_195, &uLocal_131, &Local_669);
				if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_TALK1", 8, 0, 0, 0))
				{
					iLocal_265 = 0;
					iLocal_269 = -3;
				}
				break;
			
			case -3:
				func_202(&iLocal_110, &uLocal_134, Local_195, &uLocal_131, &Local_669);
				if (!GlobalFunc_111())
				{
					SYSTEM::SETTIMERA(0);
					GlobalFunc_164("FM2_DRIVE", 5000, 1);
					iLocal_269 = 2;
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					if (SYSTEM::TIMERA() > 5000 || (SYSTEM::TIMERA() > 2000 && MISC::GET_PROFILE_SETTING(203) == 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0) && !GlobalFunc_111())
						{
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_102, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_102, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							}
							iLocal_296 = MISC::GET_GAME_TIMER();
							iLocal_640 = 0;
							iLocal_641 = 0;
							iLocal_840 = 0;
							iLocal_841 = 0;
							iLocal_269++;
						}
					}
					func_202(&iLocal_110, &uLocal_134, Local_195, &uLocal_131, &Local_669);
				}
				break;
			
			case 3:
				bVar0 = ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0));
				switch (iLocal_978)
				{
					case 0:
						if (!bLocal_301 && !bLocal_303)
						{
							if (GlobalFunc_Is_Mission_Retry())
							{
								func_199("FAM2_TALK2", bVar0);
							}
							else
							{
								func_199("FAM2_TALK2b", bVar0);
							}
						}
						else
						{
							func_199("FAM2_KILTALK", bVar0);
						}
						if ((!GlobalFunc_111() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0)) && !iLocal_841)
						{
							iLocal_840 = 0;
							iLocal_841 = 0;
							TASK::TASK_CLEAR_LOOK_AT(iLocal_102);
							iLocal_978++;
						}
						break;
					
					case 1:
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_192) > 10000f)
						{
							if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0)) && ENTITY::GET_ENTITY_SPEED(iLocal_110) < 5f)
							{
								fLocal_979 = (fLocal_979 + MISC::GET_FRAME_TIME());
							}
							else if (fLocal_979 > 0f)
							{
								fLocal_979 = (fLocal_979 - (MISC::GET_FRAME_TIME() * 5f));
							}
						}
						if (fLocal_979 > 10f)
						{
							if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_GOBACK", 8, 0, 0, 0))
							{
								fLocal_979 = 0f;
							}
						}
						if (!bLocal_301 && !bLocal_303)
						{
						}
						break;
				}
				func_198();
				if (!PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_102, -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_102, iLocal_110, 20000, 0, 2f, 1, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_133))
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_4956();
							if (!bLocal_287)
							{
								GlobalFunc_527("FM2_WAIT2", 7500, 1);
								bLocal_287 = true;
							}
							uLocal_133 = GlobalFunc_6797(iLocal_102, 0, 145);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_131))
						{
							HUD::REMOVE_BLIP(&uLocal_131);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_133))
					{
						HUD::REMOVE_BLIP(&uLocal_133);
					}
					if (func_205(&iLocal_110, &uLocal_261, &iLocal_262))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_110, 1), Local_195) < 50f)
						{
							bVar1 = true;
						}
					}
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_240, Local_243, fLocal_246, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_195 + Vector(0.3f, 0f, 0f), 1f, 1f, 2.5f, 1, 1, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						HUD::REMOVE_BLIP(&uLocal_131);
						bLocal_284 = true;
						iLocal_269++;
					}
				}
				if (!bVar1)
				{
					if (func_205(&iLocal_110, &uLocal_261, &iLocal_262) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
					{
						iLocal_269 = 100;
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_192) < 10000f)
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_102) < 2f)
							{
								iLocal_269 = 100;
							}
						}
					}
				}
				if (iLocal_269 < 100)
				{
					func_202(&iLocal_110, &uLocal_134, Local_195, &uLocal_131, &Local_669);
				}
				break;
			
			case 4:
				GlobalFunc_5105();
				if (GlobalFunc_530(iLocal_110, 5f, 1, 1056964608, 0, 1) || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110))
				{
					GlobalFunc_5105();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					iLocal_269++;
				}
				break;
			
			case 5:
				if (!GlobalFunc_111())
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 3f, 4);
					func_196(9);
				}
				break;
			
			case 100:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_192) < SYSTEM::POW(100f, 2f))
				{
					if (!PED::IS_PED_INJURED(iLocal_103))
					{
						HUD::CLEAR_HELP(1);
						Local_842 = { GlobalFunc_514() };
						GlobalFunc_4956();
						iLocal_841 = 1;
						HUD::REMOVE_BLIP(&uLocal_131);
						sLocal_311 = "family_2_mcs_4p2";
						iLocal_288 = 0;
						iLocal_641 = 0;
						CUTSCENE::REMOVE_CUTSCENE();
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_4", 2, 8);
						SYSTEM::SETTIMERA(0);
						if (HUD::DOES_BLIP_EXIST(uLocal_134))
						{
							HUD::REMOVE_BLIP(&uLocal_134);
						}
						uLocal_131 = GlobalFunc_6797(iLocal_103, 0, 145);
						GlobalFunc_164("FM2_ONFOOT", 7500, 1);
						if (!PED::IS_PED_GROUP_MEMBER(iLocal_102, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_102, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_102, 0);
						}
						bLocal_287 = false;
						iLocal_269++;
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(iLocal_110))
				{
					func_103("FM2_SKIDED");
				}
				else
				{
					func_103("FM2_SKIGRN");
				}
				break;
			
			case 101:
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					if (func_152(iLocal_102))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_131))
						{
							uLocal_131 = GlobalFunc_6797(iLocal_103, 0, 145);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_133))
						{
							HUD::REMOVE_BLIP(&uLocal_133);
						}
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1)) < 30f)
						{
							SYSTEM::SETTIMERA(0);
							iLocal_269++;
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_131))
						{
							HUD::REMOVE_BLIP(&uLocal_131);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_133))
						{
							if (!bLocal_287)
							{
								GlobalFunc_527("FM2_TRAGB", 7500, 1);
							}
							uLocal_133 = GlobalFunc_6797(iLocal_102, 0, 145);
						}
					}
				}
				if (!bLocal_301 && !bLocal_303)
				{
					bVar0 = false;
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_102, 0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_102, 1)) < 400f)
						{
							bVar0 = true;
						}
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_102, 0) && PED::GET_VEHICLE_PED_IS_IN(iLocal_102, 0) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))
					{
						bVar0 = true;
					}
				}
				break;
			
			case 102:
				if (SYSTEM::TIMERA() > 1000)
				{
					bLocal_284 = false;
					iLocal_269++;
				}
				break;
			
			case 103:
				GlobalFunc_5105();
				if (!GlobalFunc_111())
				{
					func_196(9);
				}
				break;
		}
		if (iLocal_269 > 0)
		{
			func_193(9);
		}
		func_94(sLocal_311, Local_192, 100f, &iLocal_288);
		if (iLocal_288)
		{
			if (!iLocal_641)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_102, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 1, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 0, 0, 0, 0);
					iLocal_641 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_279) > 7500)
			{
				GlobalFunc_5653(iLocal_102, "GENERIC_SHOCKED_MED", "Tracey", 3);
				iLocal_279 = MISC::GET_GAME_TIMER();
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_103))
		{
			if (!iLocal_640)
			{
				if (!PED::IS_PED_INJURED(iLocal_102))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 5625f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_102, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 225f)
					{
						GlobalFunc_5105();
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_SEES", 8, 0, 0, 0))
							{
								iLocal_640 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_280)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_192) < 90000f)
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_192, 5f))
					{
						MISC::CLEAR_AREA(Local_192, 4f, 1, 0, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_103))
						{
							func_190(&iLocal_103, 14, Local_192, fLocal_258);
						}
						iLocal_280 = 2;
					}
					else
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_103))
						{
							func_190(&iLocal_103, 14, -1611.595f, -1121.009f, 1.544f, 42.8275f);
						}
						iLocal_280++;
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_103, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_103, Local_192, 1f, -1, 0.25f, 512, fLocal_258);
					iLocal_280++;
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_103) && ENTITY::IS_ENTITY_AT_COORD(iLocal_103, Local_192, Global_21, 0, 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(200f, 2f))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_103, PLAYER::PLAYER_PED_ID(), 60f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, 242628503) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_103);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_642);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_642);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_103, uLocal_642);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_642);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, 242628503) != 1)
						{
							if (!PED::IS_PED_INJURED(iLocal_103))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							}
						}
					}
				}
				break;
		}
		if (iLocal_69 != 8)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_142();
		}
	}
}

void func_190(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x1D901
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (iParam1 == 15)
		{
			while (!func_95(Param2, fParam5))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_421(Param2, fParam5))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			TASK::CLEAR_PED_TASKS(*iParam0);
		}
	}
	else if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
	}
}



int func_193(int iParam0)//Position - 0x1DB90
{
	int iVar0;
	int iVar1[10];
	int iVar12[3];
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		iVar12[iVar0] = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("cruiser");
			iVar1[3] = GlobalFunc_5112(15, 1);
			break;
		
		case 2:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar12[0] = iLocal_268;
			iVar12[1] = 1;
			break;
		
		case 3:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar12[0] = iLocal_268;
			iVar12[1] = 1;
			break;
		
		case 4:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			break;
		
		case 5:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			iVar1[2] = joaat("seashark");
			iVar1[3] = joaat("a_m_y_musclbeac_01");
			break;
		
		case 6:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			break;
		
		case 7:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("csb_porndudes");
			iVar1[3] = joaat("ig_jimmydisanto");
			break;
		
		case 8:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
		
		case 9:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
	}
	iVar16 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iVar1[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1[iVar0]);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1[iVar0]))
			{
				iVar16 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if (iVar12[iVar0] != 0)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(iVar12[iVar0], "fam2");
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar12[iVar0], "fam2"))
			{
				iVar16 = 0;
			}
		}
		iVar0++;
	}
	return iVar16;
}



void func_196(int iParam0)//Position - 0x1E232
{
	iLocal_282 = 0;
	iLocal_69 = iParam0;
}


void func_198()//Position - 0x1E3C4
{
	if ((!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && (MISC::GET_GAME_TIMER() - iLocal_277) > 5000)
	{
		if ((((((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && !PED::IS_PED_INJURED(iLocal_102)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0)) && ENTITY::IS_ENTITY_IN_WATER(iLocal_110)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) != iLocal_110) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_102, 1)) < 35f) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) && Local_669.f_1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_296) > 6000)
			{
				if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_GETOFF", 8, 0, 0, 0))
				{
					iLocal_296 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_199(char* sParam0, bool bParam1)//Position - 0x1E4AF
{
	if (bParam1)
	{
		if (!iLocal_840)
		{
			if (GlobalFunc_10618(&Local_675, cLocal_674, sParam0, 8, 0, 0, 0))
			{
				iLocal_841 = 0;
				iLocal_840 = 1;
			}
		}
		if (iLocal_841)
		{
			if (GlobalFunc_10626(&Local_675, cLocal_674, sParam0, &Local_842, 8, 0, 0))
			{
				iLocal_841 = 0;
			}
		}
	}
	if (!bParam1)
	{
		if (!iLocal_841)
		{
			Local_842 = { GlobalFunc_514() };
			GlobalFunc_5105();
			iLocal_841 = 1;
		}
	}
}



void func_202(int iParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6)//Position - 0x1E595
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0) && ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::CLEAR_PRINTS();
				if (!uParam6->f_1)
				{
					iLocal_277 = MISC::GET_GAME_TIMER();
					func_143(uParam6);
				}
				*uParam1 = GlobalFunc_6783(*iParam0, 0, 0);
			}
			if (HUD::DOES_BLIP_EXIST(*uParam5))
			{
				HUD::REMOVE_BLIP(uParam5);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(*uParam5))
			{
				*uParam5 = GlobalFunc_5104(Param2, 1);
			}
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(uParam1);
			}
		}
	}
}



int func_205(int iParam0, var uParam1, var uParam2)//Position - 0x1E671
{
	*uParam2 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(*iParam0) && ENTITY::GET_ENTITY_SPEED(*iParam0) < 2f)
		{
			*uParam1 = (*uParam1 + MISC::GET_FRAME_TIME());
			return *uParam1 > 3f;
		}
		else
		{
			*uParam1 = 0f;
		}
	}
	return 0;
}

void func_206()//Position - 0x1E6BC
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < Local_881)
	{
		switch (Local_881[iVar0 /*8*/].f_2)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_881[iVar0 /*8*/].f_4) < 2500f)
				{
					Var1 = { func_208(iVar0) };
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_881[iVar0 /*8*/].f_4, Var1.f_3, 0, 1, 0))
					{
						if (func_207(iVar0, joaat("squalo"), Var1))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 8f, 3);
							Local_881[iVar0 /*8*/].f_2++;
						}
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(Local_881[iVar0 /*8*/].f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881[iVar0 /*8*/], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881[iVar0 /*8*/]) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_881[iVar0 /*8*/]))
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_881[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[0], 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_122[0], Local_881[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[1], 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_122[1], Local_881[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0)))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Local_881[iVar0 /*8*/], 5000, 786469, 1);
						}
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_881[iVar0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_881[iVar0 /*8*/].f_1)) && (((!PED::IS_PED_INJURED(Local_881[iVar0 /*8*/].f_1) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881[iVar0 /*8*/])) || PED::IS_PED_INJURED(Local_881[iVar0 /*8*/].f_1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_881[iVar0 /*8*/], 0)))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_881[iVar0 /*8*/].f_1, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 10000f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_881[iVar0 /*8*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 10000f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_881[iVar0 /*8*/].f_1));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_881[iVar0 /*8*/]));
					}
				}
				break;
		}
		iVar0++;
	}
}

int func_207(int iParam0, int iParam1, struct<3> Param2)//Position - 0x1E900
{
	STREAMING::REQUEST_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_01"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0 + 1, "fam2amb");
	if ((STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0 + 1, "fam2amb"))
	{
		Local_881[iParam0 /*8*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, 0f, 1, 1);
		Local_881[iParam0 /*8*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_881[iParam0 /*8*/], 26, joaat("a_m_y_genstreet_01"), -1, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_881[iParam0 /*8*/].f_1, 1);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_881[iParam0 /*8*/], iParam0 + 1, "fam2amb", 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_881[iParam0 /*8*/], 2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_01"));
		return 1;
	}
	return 0;
}

struct<10> func_208(int iParam0)//Position - 0x1E9BF
{
	struct<10> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -935.5378f, -1633.737f, 0.3306f };
			Var0.f_3 = { 62.75f, 48.75f, 11f };
			Var0.f_6 = { -997.8688f, -1383.004f, 0.406f };
			Var0.f_9 = 314.1291f;
			break;
		
		case 1:
			Var0 = { -928.3334f, -1359.194f, 0.3531f };
			Var0.f_3 = { 28.25f, 34.75f, 11f };
			Var0.f_6 = { -723.3589f, -1350.093f, 0.3208f };
			Var0.f_9 = 294.1011f;
			break;
	}
	return Var0;
}

void func_209()//Position - 0x1EA71
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	char* sVar10;
	char* sVar11;
	int iVar12;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
	{
		if ((!iLocal_1413 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0)) && SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(iLocal_110)) > 324f)
		{
			iLocal_1413 = 1;
		}
		if ((iLocal_1413 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(iLocal_110)) < 225f)
		{
			iLocal_1413 = 0;
		}
		if (!iLocal_1414)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110))
			{
				iLocal_1414 = 1;
			}
		}
		else
		{
			iLocal_1414 = 0;
		}
		if ((iLocal_1414 && iLocal_1413) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	iLocal_83 = func_244();
	if (iLocal_83 < 7 && iLocal_83 > iLocal_85)
	{
		iLocal_85 = iLocal_83;
	}
	if (iLocal_83 != iLocal_84)
	{
		if (!MISC::IS_BIT_SET(iLocal_86, iLocal_83))
		{
			MISC::SET_BIT(&iLocal_86, iLocal_83);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[0]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[0]);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[1]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[1]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[1]);
			}
		}
	}
	if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_110) && SYSTEM::TIMERA() > 500)
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
	}
	iLocal_84 = iLocal_83;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_136))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_136 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_192, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_136, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_136, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_136, 1);
		}
	}
	switch (iLocal_269)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			if ((((func_243() && func_242(0, 0)) && func_242(1, 0)) && func_241()) && func_240())
			{
				if (!PED::IS_PED_INJURED(iLocal_105[0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_105[0], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_105[0], iLocal_89);
				}
				if (!PED::IS_PED_INJURED(iLocal_102))
				{
					STREAMING::REQUEST_ANIM_DICT("missfam2_tracy_jetski");
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_110, 1000f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_110, 1, 0, 0, 1, 0, 0, 0, 0);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_102, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_102, 5000);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_102, 20, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_102, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_102, 1);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_102, 1);
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_89, 1862763509);
				GlobalFunc_200(&Local_675, 2);
				GlobalFunc_173(&Local_675, 2, iLocal_102, "TRACEY", 0, 1);
				GlobalFunc_1998(1);
				func_237();
				func_236();
				iLocal_300 = 0;
				fLocal_1403 = 0f;
				fLocal_1407 = 0f;
				iLocal_1390 = 0;
				bLocal_1391 = false;
				iLocal_1387[0] = 0;
				iLocal_1387[1] = 0;
				bLocal_301 = false;
				iLocal_302 = 0;
				iLocal_304 = 0;
				iLocal_305 = 0;
				bLocal_303 = false;
				iLocal_1392 = 0;
				bLocal_1412 = false;
				iLocal_87 = 0;
				iLocal_88 = 6;
				iLocal_85 = 0;
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_ON_JETSKI");
				ENTITY::_0x694E00132F2823ED(iLocal_122[0], 1);
				ENTITY::_0x694E00132F2823ED(iLocal_122[1], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_122[0], 101, "famtwo", 15f, 262144);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_122[1], 102, "famtwo", 15f, 262144);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_110, 1, "famtwoplayer", 24f, 262144);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_122[0], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_122[1], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_110) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					AUDIO::SET_INITIAL_PLAYER_STATION("OFF");
					AUDIO::SET_VEH_RADIO_STATION(iLocal_110, "OFF");
					ENTITY::_0x694E00132F2823ED(iLocal_110, 1);
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_CHASE"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_2_JETSKI_CHASE");
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				SYSTEM::SETTIMERB(0);
				RECORDING::_0x293220DA1B46CEBC(0f, 8f, 4);
				func_235(0, 4f);
				iLocal_86 = 0;
				iLocal_269++;
				if (iLocal_265)
				{
					iLocal_269 = -1;
				}
			}
			break;
		
		case -1:
			STREAMING::REQUEST_IPL("smboat");
			while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_269 = 1;
			iLocal_265 = 0;
			break;
		
		case 1:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_141))
			{
				if (SYSTEM::TIMERB() > 1000)
				{
					CAM::DESTROY_CAM(uLocal_141, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_675[7 /*10*/]) || PED::IS_PED_INJURED(Local_675[7 /*10*/]))
			{
				if (!PED::IS_PED_INJURED(iLocal_125[0]))
				{
					GlobalFunc_173(&Local_675, 7, iLocal_125[0], "FAM2MAN2", 0, 1);
				}
				else if (!PED::IS_PED_INJURED(iLocal_125[1]))
				{
					GlobalFunc_173(&Local_675, 7, iLocal_125[1], "FAM2MAN2", 0, 1);
				}
			}
			if (!iLocal_1404)
			{
				if (bLocal_1406)
				{
					iVar0 = 0;
					while (iVar0 <= 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_125[iVar0]))
						{
							PED::SET_PED_COMBAT_ABILITY(iLocal_125[iVar0], 0);
							PED::SET_PED_COMBAT_RANGE(iLocal_125[iVar0], 2);
							PED::SET_PED_ACCURACY(iLocal_125[iVar0], 0);
							PED::SET_PED_FIRING_PATTERN(iLocal_125[iVar0], 2055493265);
							PED::SET_PED_SHOOT_RATE(iLocal_125[iVar0], 50);
						}
						iVar0++;
					}
					bLocal_1406 = false;
				}
				if ((((((iLocal_83 == 7 && iLocal_300 < 100) || iLocal_1384[0]) || iLocal_1384[1]) || iLocal_83 < iLocal_85) || iLocal_1405) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0)))
				{
					if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_867[0] = MISC::GET_GAME_TIMER();
						iLocal_867[1] = (MISC::GET_GAME_TIMER() - 1500);
						iLocal_1404 = 1;
					}
				}
			}
			else
			{
				if (fLocal_1407 > 10f && fLocal_1407 < 12f)
				{
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					if ((!PED::IS_PED_INJURED(iLocal_125[0]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_125[0], 1), ENTITY::GET_ENTITY_COORDS(iLocal_110, 1)) < 225f) || (!PED::IS_PED_INJURED(iLocal_125[1]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_125[1], 1), ENTITY::GET_ENTITY_COORDS(iLocal_110, 1)) < 225f))
					{
						fLocal_1407 = (fLocal_1407 + MISC::GET_FRAME_TIME());
					}
				}
				if (!bLocal_1406)
				{
					iVar1 = 0;
					while (iVar1 <= 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_125[iVar1]) && !PED::IS_PED_INJURED(iLocal_125[iVar1]))
						{
							PED::SET_PED_COMBAT_ABILITY(iLocal_125[iVar1], 1);
							PED::SET_PED_COMBAT_RANGE(iLocal_125[iVar1], 2);
							PED::SET_PED_ACCURACY(iLocal_125[iVar1], 20);
							PED::SET_PED_FIRING_PATTERN(iLocal_125[iVar1], 1566631136);
							PED::SET_PED_SHOOT_RATE(iLocal_125[iVar1], 40);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[iVar1]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[iVar1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[iVar1]);
								}
							}
						}
						iVar1++;
					}
					bLocal_1406 = true;
				}
				else if ((iLocal_83 != 2 || (iLocal_83 == 2 && iLocal_87 == 0)) && !iLocal_1390)
				{
					func_233();
				}
				if (((((!iLocal_1384[0] && !iLocal_1384[1]) && iLocal_83 != 7) && iLocal_83 >= iLocal_85) && !iLocal_1405) && (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0)))
				{
					iLocal_1404 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_1404 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_105[0]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_105[0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 10000f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_105[0]));
				}
			}
			func_230();
			func_217();
			if (iLocal_300 < 100)
			{
				if (!iLocal_304)
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_304 = 1;
					}
				}
				else if (!iLocal_305)
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_SHOOT", 8, 0, 0, 0))
					{
						iLocal_305 = 1;
					}
				}
				if (!bLocal_301 || !bLocal_303)
				{
					bLocal_303 = true;
					iVar2 = 0;
					while (iVar2 < iLocal_125)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_125[iVar2]))
						{
							if (PED::IS_PED_INJURED(iLocal_125[iVar2]) || ENTITY::IS_ENTITY_DEAD(iLocal_125[iVar2]))
							{
								bLocal_301 = true;
							}
							else
							{
								bLocal_303 = false;
							}
						}
						iVar2++;
					}
				}
				if ((bLocal_301 && !iLocal_302) && !bLocal_303)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
					{
						GlobalFunc_4956();
						if (iLocal_300 < 50 || iLocal_300 >= 100)
						{
							iLocal_273 = iLocal_300;
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_134))
						{
							HUD::REMOVE_BLIP(&uLocal_134);
						}
						iLocal_300 = 50;
						iLocal_302 = 1;
					}
				}
				if (iLocal_83 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						HUD::REMOVE_BLIP(&uLocal_131);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				if (iLocal_300 < 5)
				{
					if (iLocal_83 == 1)
					{
						iLocal_300 = 5;
					}
				}
				func_215();
			}
			if (iLocal_300 != 60 && iLocal_300 != 61)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
				{
					if (iLocal_300 < 50 || iLocal_300 >= 100)
					{
						iLocal_273 = iLocal_300;
					}
					iLocal_300 = 60;
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_131) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
			{
				if (iLocal_83 == 1)
				{
					HUD::REMOVE_BLIP(&uLocal_131);
				}
			}
			switch (iLocal_300)
			{
				case 0:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam2_tracy_jetski"))
					{
						if (!PED::IS_PED_INJURED(iLocal_102))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_a", 3))
							{
								if (func_214(0))
								{
									TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_COMING", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_COMING");
									TASK::TASK_LOOK_AT_ENTITY(iLocal_102, iLocal_125[0], -1, 0, 2);
									iLocal_300++;
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_a") > 0.12f)
							{
								if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_COMING", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_COMING");
									iLocal_300++;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
					break;
				
				case 1:
					if (SYSTEM::TIMERA() > 1000)
					{
						Var3 = { Local_322 - ENTITY::GET_ENTITY_COORDS(iLocal_110, 1) };
						Var6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_110) };
						fVar9 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var6.x, Var6.f_1, Var3.x, Var3.f_1);
						if (fVar9 > 180f)
						{
							fVar9 = (fVar9 - 360f);
						}
						if (fVar9 < -180f)
						{
							fVar9 = (fVar9 + 360f);
						}
						if (fVar9 < 0f)
						{
							if (fVar9 > -90f)
							{
								if (!PED::IS_PED_INJURED(iLocal_102))
								{
									TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_point_right", 4f, -8f, -1, 0, 0, 0, 0, 0);
								}
							}
						}
						else if (fVar9 < 90f)
						{
							if (!PED::IS_PED_INJURED(iLocal_102))
							{
								TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_point_left", 4f, -8f, -1, 0, 0, 0, 0, 0);
							}
						}
					}
					if ((((!GlobalFunc_111() || SYSTEM::TIMERA() > 3000) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0)) && !HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						uLocal_131 = GlobalFunc_5104(Local_322, 0);
						iLocal_300++;
					}
					break;
				
				case 2:
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_MRESP", 8, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_322, 7500, 1, 2);
						SYSTEM::SETTIMERA(0);
						iLocal_300++;
					}
					break;
				
				case 3:
					if (!GlobalFunc_111())
					{
						GlobalFunc_527("FM2_CHASE1", 7500, 1);
						SYSTEM::SETTIMERA(0);
						iLocal_300++;
					}
					break;
				
				case 4:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_322) > 900f)
					{
						func_213("FAM2_OLREM", "", 9000);
					}
					break;
				
				case 5:
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_125[0]) && !PED::IS_PED_INJURED(iLocal_125[0])) && PED::IS_PED_SHOOTING(iLocal_125[0])) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_125[1]) && !PED::IS_PED_INJURED(iLocal_125[1])) && PED::IS_PED_SHOOTING(iLocal_125[1])))
					{
						iLocal_300++;
					}
					break;
				
				case 6:
					if (!GlobalFunc_111())
					{
						if (!PED::IS_PED_INJURED(iLocal_102))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_c", 3))
							{
								if (func_214(0))
								{
									TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_SHOOTING");
									TASK::TASK_LOOK_AT_ENTITY(iLocal_102, iLocal_125[0], -1, 0, 2);
									iLocal_300++;
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_c") > 0.12f)
							{
								if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_SHOOTING");
									iLocal_300++;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
					break;
				
				case 7:
					if (!GlobalFunc_111())
					{
						GlobalFunc_527("FM2_CHASE3", 7500, 1);
						SYSTEM::SETTIMERB(0);
						iLocal_300++;
					}
					break;
				
				case 8:
					if (SYSTEM::TIMERB() > 5000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_LOSEM", 8, 0, 0, 0))
							{
								iLocal_300++;
							}
						}
					}
					break;
				
				case 9:
					if (!GlobalFunc_111())
					{
						if (func_210(&Local_675, cLocal_312, "FAM2_WHO", "FAM2_WHO_3", "FAM2_WHO", "FAM2_WHO_5", "FAM2_WHO", "FAM2_WHO_7", "FAM2_WHO", "FAM2_WHO_9", 8, 0, 0))
						{
							iLocal_300++;
						}
					}
					break;
				
				case 10:
					func_213("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					if (iLocal_83 == 2)
					{
						iLocal_300++;
					}
					break;
				
				case 11:
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_LOSET", 8, 0, 0, 0))
					{
						iLocal_300++;
					}
					break;
				
				case 12:
					func_213("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					break;
				
				case 50:
					GlobalFunc_5105();
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_KILLONE", 8, 0, 0, 0))
					{
						iLocal_300++;
					}
					break;
				
				case 51:
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_KILLER", 8, 0, 0, 0))
					{
						iLocal_300 = iLocal_273;
					}
					break;
				
				case 60:
					GlobalFunc_4956();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_134))
						{
							uLocal_134 = GlobalFunc_6783(iLocal_110, 0, 0);
							func_143(&Local_669);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_131))
						{
							HUD::REMOVE_BLIP(&uLocal_131);
						}
						iLocal_1397 = MISC::GET_GAME_TIMER();
						iLocal_300++;
					}
					break;
				
				case 61:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if ((((!PED::IS_PED_INJURED(iLocal_102) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_102, 20f, 20f, 20f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 1))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1397) > 6000)
								{
									if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_FALL", 8, 0, 0, 0))
									{
										iLocal_1397 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
						{
							GlobalFunc_4956();
							if (((iLocal_83 == 0 || iLocal_83 == 7) && !HUD::DOES_BLIP_EXIST(uLocal_131)) && iLocal_273 < 5)
							{
								uLocal_131 = GlobalFunc_5104(Local_322, 0);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_134))
							{
								HUD::REMOVE_BLIP(&uLocal_134);
							}
							HUD::CLEAR_PRINTS();
							iLocal_300 = iLocal_273;
						}
					}
					break;
				
				case 100:
					if (HUD::DOES_BLIP_EXIST(uLocal_128[0]))
					{
						HUD::REMOVE_BLIP(&(uLocal_128[0]));
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_128[1]))
					{
						HUD::REMOVE_BLIP(&(uLocal_128[1]));
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						HUD::REMOVE_BLIP(&uLocal_131);
					}
					GlobalFunc_5105();
					if (!GlobalFunc_111())
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_102))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_d", 3))
								{
									TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_d", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_d") > 0.25f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_CHASE"))
									{
										AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_CHASE");
									}
									TASK::TASK_CLEAR_LOOK_AT(iLocal_102);
									iLocal_300++;
								}
							}
						}
					}
					break;
				
				case 101:
					if (bLocal_303)
					{
						sVar10 = "FAM2_KILLTWO";
					}
					else if (bLocal_301)
					{
						sVar10 = "FAM2_ESCAPE";
					}
					else
					{
						sVar10 = "FAM2_LOST";
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
					{
						bLocal_1412 = true;
					}
					func_199(sVar10, bLocal_1412);
					if ((iLocal_840 && !GlobalFunc_111()) && !iLocal_841)
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 3);
						iLocal_840 = 0;
						iLocal_300++;
					}
					break;
				
				case 102:
					if (bLocal_303 || bLocal_301)
					{
						sVar11 = "FAM2_KILLER2";
					}
					else
					{
						sVar11 = "FAM2_TALK1";
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
					{
						bLocal_1412 = true;
					}
					func_199(sVar11, bLocal_1412);
					if ((iLocal_840 && !GlobalFunc_111()) && !iLocal_841)
					{
						STREAMING::REMOVE_ANIM_DICT("missfam2_tracy_jetski");
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_840 = 0;
						func_196(8);
					}
					break;
			}
			if ((((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_102, 1)) > 30f)
			{
				iLocal_269 = 2;
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
			{
				iLocal_269 = 3;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) || func_205(&iLocal_110, &uLocal_261, &iLocal_262))
			{
				iLocal_269 = 4;
			}
			if ((((iLocal_300 < 100 && ((PED::IS_PED_INJURED(iLocal_125[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_125[0])) || iLocal_1387[0])) && ((PED::IS_PED_INJURED(iLocal_125[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_125[1])) || iLocal_1387[1])) && iLocal_300 != 60) && iLocal_300 != 61)
			{
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_LOST_HIM");
				iLocal_300 = 100;
			}
			if (iLocal_269 > 1)
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_5105();
				iVar12 = 0;
				while (iVar12 < iLocal_125)
				{
					if (((!PED::IS_PED_INJURED(iLocal_125[iVar12]) && ENTITY::DOES_ENTITY_EXIST(iLocal_122[iVar12])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iVar12], 0)) && PED::IS_PED_IN_VEHICLE(iLocal_125[iVar12], iLocal_122[iVar12], 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_125[iVar12]);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[iVar12]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[iVar12]);
						}
					}
					iVar12++;
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_131))
				{
					HUD::REMOVE_BLIP(&uLocal_131);
				}
				SYSTEM::SETTIMERA(0);
			}
			break;
		
		case 2:
			if (SYSTEM::TIMERA() > 2000)
			{
				func_103("FM2_TRAAB");
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 2000)
			{
				func_103("FM2_TRAFELL");
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 1000)
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
				if (ENTITY::IS_ENTITY_DEAD(iLocal_110))
				{
					func_103("FM2_SKIDED");
				}
				else
				{
					func_103("FM2_SKIGRN");
				}
			}
			break;
	}
}

bool func_210(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1FE57
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, 145, sParam1, iParam11, iParam12, 0);
	if (iParam10 > 7)
	{
		if (iParam10 < 12)
		{
			iParam10 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_212(4, &uVar0, &uVar11, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, sParam9, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_9753(&uVar0, &uVar11, iParam10, 0);
}


void func_212(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2021F
{
	Global_15689 = iParam0;
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = uParam9;
	(*uParam2)[3] = uParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_213(char* sParam0, char* sParam1, int iParam2)//Position - 0x202A7
{
	int iVar0;
	int iVar1;
	
	if (iLocal_1408 > iLocal_1397)
	{
		iParam2 = 3000;
	}
	if (((MISC::GET_GAME_TIMER() - iLocal_1397) > iParam2 && !GlobalFunc_111()) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
		if (((!PED::IS_PED_INJURED(iLocal_125[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[0], 0)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_122[0], iLocal_110, 20f, 20f, 5f, 0, 1, 0)) && iLocal_1408 < iLocal_1397)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
		}
		if (iVar0 == 1 && bLocal_301)
		{
			iVar0 = 2;
		}
		if (iVar0 == 1 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (GlobalFunc_10618(&Local_675, cLocal_312, sParam1, 8, 0, 0, 0))
			{
				iLocal_1397 = MISC::GET_GAME_TIMER();
			}
		}
		else if (iVar0 == 2)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "FAM2_TSHOUT"))
			{
				if (func_214(0))
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					switch (iVar1)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_e", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 1:
							TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_f", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 2:
							TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_g", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 3:
							TASK::TASK_PLAY_ANIM(iLocal_102, "missfam2_tracy_jetski", "tracy_jetski_h", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						}
					}
			}
			if (bLocal_301)
			{
				if (!MISC::ARE_STRINGS_EQUAL(sParam0, "FAM2_ONE"))
				{
					sParam0 = "FAM2_ONE";
				}
			}
			if (GlobalFunc_10618(&Local_675, cLocal_312, sParam0, 8, 0, 0, 0))
			{
				iLocal_1397 = MISC::GET_GAME_TIMER();
			}
		}
		else if (iVar0 >= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_675[7 /*10*/]) && !PED::IS_PED_INJURED(Local_675[7 /*10*/]))
			{
				if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_BGUY2", 8, 0, 0, 0))
				{
					iLocal_1408 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

int func_214(int iParam0)//Position - 0x204B4
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!PED::IS_PED_INJURED(iLocal_125[iParam0]) && !PED::IS_PED_INJURED(iLocal_102))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_125[iParam0], 1) - ENTITY::GET_ENTITY_COORDS(iLocal_102, 1) };
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_102) };
		if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.x, Var3.f_1, Var0.x, Var0.f_1)) >= 60f)
		{
			return 1;
		}
	}
	return 0;
}

void func_215()//Position - 0x20519
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (bLocal_1391)
	{
		if (iLocal_1390)
		{
			fVar1 = 3f;
			fVar2 = 50f;
		}
		else if (iLocal_83 == 7)
		{
			fVar1 = 5f;
			fVar2 = 250f;
		}
		else
		{
			fVar1 = 5f;
			fVar2 = 100f;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_125)
		{
			if (func_216(iVar0, fVar2, fVar1))
			{
				iLocal_1387[iVar0] = 1;
				PED::DELETE_PED(&(iLocal_125[iVar0]));
				VEHICLE::DELETE_VEHICLE(&(iLocal_122[iVar0]));
				if (HUD::DOES_BLIP_EXIST(uLocal_128[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_128[iVar0]));
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_1390)
	{
		iLocal_1390 = 0;
	}
	if (!iLocal_1387[0] || !iLocal_1387[1])
	{
		iVar0 = 0;
		while (iVar0 < iLocal_125)
		{
			if (!iLocal_1387[iVar0])
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_125[iVar0]) && (PED::IS_PED_INJURED(iLocal_125[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_125[iVar0]))) || !ENTITY::DOES_ENTITY_EXIST(iLocal_125[iVar0]))
				{
					iLocal_1387[iVar0] = 1;
				}
			}
			iVar0++;
		}
	}
}

int func_216(int iParam0, float fParam1, float fParam2)//Position - 0x20631
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_125[iParam0]))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_125[iParam0], 1));
			if ((fVar0 > (fParam1 * fParam1) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_125[iParam0])) || fVar0 > 90000f)
			{
				if (fVar0 > 90000f)
				{
					fLocal_1409[iParam0] = (fLocal_1409[iParam0] + (MISC::GET_FRAME_TIME() * 10f));
				}
				fLocal_1409[iParam0] = (fLocal_1409[iParam0] + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_1409[iParam0] > 0f)
			{
				fLocal_1409[iParam0] = (fLocal_1409[iParam0] - (MISC::GET_FRAME_TIME() * 3f));
			}
			else
			{
				fLocal_1409[iParam0] = 0f;
			}
		}
		if (fLocal_1409[iParam0] > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_217()//Position - 0x2070F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	int iVar10;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_125[iVar0]))
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_125[iVar0], 0) && ENTITY::IS_ENTITY_IN_WATER(iLocal_125[iVar0])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_125[iVar0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 100f)
			{
				PED::EXPLODE_PED_HEAD(iLocal_125[iVar0], joaat("weapon_sniperrifle"));
			}
		}
		iVar0++;
	}
	switch (iLocal_83)
	{
		case 0:
			if (SYSTEM::TIMERB() > 5000)
			{
				func_228(0, &uLocal_1098, 101, "famtwo", 1, 0);
				func_228(1, &uLocal_1111, 102, "famtwo", 1, 0);
			}
			if (SYSTEM::TIMERB() < 2000)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			}
			if (fLocal_1403 < 1f)
			{
				fLocal_1403 = (fLocal_1403 + 0.01f);
			}
			else
			{
				fLocal_1403 = 1f;
			}
			break;
		
		case 1:
			func_228(0, &uLocal_1124, 201, "famtwo", 0, 0);
			func_228(1, &uLocal_1170, 202, "famtwo", 0, 0);
			break;
		
		case 2:
			iLocal_87 = func_227();
			if (iLocal_87 != 6)
			{
				if (iLocal_87 != iLocal_88)
				{
					func_225(&(Local_1266[0 /*25*/]), 1, func_226(iLocal_87));
					func_225(&(Local_1266[1 /*25*/]), 2, func_226(iLocal_87));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[0]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[0]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[1]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[1]);
						}
					}
				}
				iLocal_88 = iLocal_87;
			}
			func_222(0);
			if (!iLocal_1405)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_122[0]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_122[0], 1)) < 100f && ENTITY::GET_ENTITY_SPEED(iLocal_110) < 7f)
					{
						iLocal_1405 = 1;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_122[1]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_122[1], 1)) < 100f && ENTITY::GET_ENTITY_SPEED(iLocal_110) < 7f)
					{
						iLocal_1405 = 1;
					}
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(iLocal_110) > 10f)
			{
				iLocal_1405 = 0;
			}
			if (iLocal_87 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_122[1]))
				{
					if (func_220(ENTITY::GET_ENTITY_COORDS(iLocal_122[1], 1), 1, "famtwoCanalsAlt", &uLocal_1317, 0) > func_220(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, "famtwoCanalsAlt", &uLocal_1317, 0))
					{
						iLocal_1384[1] = 1;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_122[0]))
				{
					if (func_220(ENTITY::GET_ENTITY_COORDS(iLocal_122[0], 1), 1, "famtwoCanalsAlt", &uLocal_1317, 0) > func_220(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, "famtwoCanalsAlt", &uLocal_1317, 0))
					{
						iLocal_1384[0] = 1;
					}
				}
				func_228(1, &uLocal_1317, 1, "famtwoCanalsAlt", 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_125[1]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1061.247f, -1027.52f, -1.839872f, -1158.562f, -864.5836f, 17.98512f, 250f, 0, 1, 0))
				{
					Var1 = { -1191.48f, -1002.427f, 0f };
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1061.247f, -1027.52f, -1.839872f, -1006.939f, -1120.256f, 6.144058f, 250f, 0, 1, 0))
				{
					Var1 = { -1137.652f, -1097.164f, 0f };
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -900.0117f, -1305.718f, 15.90007f, -1006.939f, -1120.256f, -8.855943f, 250f, 0, 1, 0))
				{
					Var1 = { -1083.993f, -1189.703f, 0f };
				}
				if (!GlobalFunc_105(Var1))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_122[1], Var1, 2.5f, 2.5f, 2f, 0, 1, 0))
					{
						Var4 = { Vector(-1.599754f, -1082.671f, -1114.952f) + Vector(17.75f, 133.25f, 81.25f) };
						Var7 = { Vector(-1.599754f, -1082.671f, -1114.952f) - Vector(17.75f, 133.25f, 81.25f) };
						if (PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Var7.x, Var7.f_1, Var4.x, Var4.f_1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_125[1], -1817882002) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_125[1], iLocal_122[1], Var1, 10f, 0, joaat("seashark"), 262144, 1f, 3f);
							}
						}
						if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_122[1], 1), 2f) && !CAM::IS_SPHERE_VISIBLE(Var1, 2f))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_122[1], Var1, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_122[1], 214f);
						}
					}
				}
			}
			break;
		
		case 3:
			if ((((!PED::IS_PED_INJURED(iLocal_125[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_125[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[1], 0)) && PED::IS_PED_IN_VEHICLE(iLocal_125[1], iLocal_122[1], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_125[1], 579380604) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_125[1], 579380604) != 2)
					{
						TASK::TASK_VEHICLE_CHASE(iLocal_125[1], PLAYER::PLAYER_PED_ID());
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_125[1], PLAYER::PLAYER_PED_ID(), 10f, 10f, 5f, 0, 1, 0))
				{
					iLocal_1392 = 1;
				}
			}
			break;
		
		case 4:
			iLocal_87 = func_227();
			if (iLocal_87 != 6)
			{
				if (iLocal_87 != iLocal_88)
				{
					func_225(&(Local_1266[0 /*25*/]), 1, func_226(iLocal_87));
					func_225(&(Local_1266[1 /*25*/]), 2, func_226(iLocal_87));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[1]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[1]);
						}
					}
				}
				iLocal_88 = iLocal_87;
			}
			func_222(1);
			if (!iLocal_1405)
			{
				if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_122[0], 1)) < 100f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_122[1], 1)) < 100f) && ENTITY::GET_ENTITY_SPEED(iLocal_110) < 7f)
				{
					iLocal_1405 = 1;
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(iLocal_110) > 10f)
			{
				iLocal_1405 = 0;
			}
			break;
		
		case 5:
			func_228(0, &uLocal_1216, 301, "famtwo", 0, 0);
			func_228(1, &uLocal_1241, 302, "famtwo", 0, 0);
			break;
		
		case 6:
			if (!iLocal_1390)
			{
				func_228(0, &uLocal_1342, 401, "famtwo", 1, 0);
				func_228(1, &uLocal_1361, 402, "famtwo", 1, 0);
				if (!bLocal_1406)
				{
					if (fLocal_1403 > 0.1f)
					{
						fLocal_1403 = (fLocal_1403 - 0.01f);
					}
					else
					{
						fLocal_1403 = 0.1f;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_247, Local_250, fLocal_253, 0, 1, 0))
				{
					iVar10 = 0;
					while (iVar10 < iLocal_125)
					{
						if (!PED::IS_PED_INJURED(iLocal_125[iVar10]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_125[iVar10]);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_125[iVar10], iLocal_122[iVar10], -901.3011f, -1359.937f, 0f, 14, 20f, 262144, 3f, 3f, 1);
						}
						iVar10++;
					}
					iLocal_1390 = 1;
				}
			}
			break;
	}
	func_218(0);
	func_218(1);
	if ((iLocal_83 == 6 || iLocal_83 == 7) || iLocal_1390)
	{
		if (!bLocal_1391)
		{
			bLocal_1391 = true;
		}
	}
	else if (bLocal_1391)
	{
		bLocal_1391 = false;
	}
}

void func_218(int iParam0)//Position - 0x20EA5
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_128[iParam0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_125[iParam0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iParam0], 0) && PED::IS_PED_IN_VEHICLE(iLocal_125[iParam0], iLocal_122[iParam0], 0))
				{
					uLocal_128[iParam0] = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1), 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_128[iParam0], "FM2_PURSUER");
					HUD::SET_BLIP_COLOUR(uLocal_128[iParam0], 1);
					HUD::SET_BLIP_PRIORITY(uLocal_128[iParam0], 9);
					iLocal_1394[iParam0] = 1;
				}
				else
				{
					uLocal_128[iParam0] = GlobalFunc_6797(iLocal_125[iParam0], 1, 145);
					iLocal_1394[iParam0] = 0;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_125[iParam0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iParam0], 0) && PED::IS_PED_IN_VEHICLE(iLocal_125[iParam0], iLocal_122[iParam0], 0))
			{
				if (iLocal_1394[iParam0])
				{
					Var0 = { HUD::GET_BLIP_COORDS(uLocal_128[iParam0]) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1) };
					Var0.x = (Var0.x + ((Var3.x - Var0.x) / 25f));
					Var0.f_1 = (Var0.f_1 + ((Var3.f_1 - Var0.f_1) / 25f));
					Var0.f_2 = (Var0.f_2 + ((Var3.f_2 - Var0.f_2) / 25f));
					HUD::SET_BLIP_COORDS(uLocal_128[iParam0], Var0);
				}
				else
				{
					HUD::REMOVE_BLIP(&(uLocal_128[iParam0]));
				}
			}
			else if (iLocal_1394[iParam0])
			{
				HUD::REMOVE_BLIP(&(uLocal_128[iParam0]));
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_128[iParam0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_128[iParam0]));
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_128[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_128[iParam0]));
	}
}


float func_220(struct<3> Param0, int iParam3, char* sParam4, var uParam5, bool bParam6)//Position - 0x21094
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = func_221(Param0, uParam5);
	fVar1 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam3, sParam4) / IntToFloat((*uParam5 - 1)));
	fVar2 = (MISC::_0x7F8F6405F4777AF6(Param0, *(uParam5[iVar0 /*3*/]), *(uParam5[iVar0 + 1 /*3*/]), 1) * fVar1);
	if (bParam6)
	{
	}
	return ((fVar2 + (IntToFloat(iVar0) * fVar1)) - 0.1f);
}

int func_221(struct<3> Param0, var uParam3)//Position - 0x210ED
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < (*uParam3 - 1))
	{
		if (SYSTEM::VDIST2(MISC::_0x21C235BC64831E5A(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1), Param0) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = SYSTEM::VDIST2(MISC::_0x21C235BC64831E5A(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1), Param0);
		}
		iVar0++;
	}
	return iVar1;
}

void func_222(int iParam0)//Position - 0x21166
{
	if (bLocal_1383)
	{
		func_228(iParam0, &(Local_1266[0 /*25*/]), 1, func_226(iLocal_88), 0, 1);
	}
	else
	{
		func_228(iParam0, &(Local_1266[1 /*25*/]), 2, func_226(iLocal_88), 0, 1);
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_1393) > 500)
	{
		bLocal_1383 = func_223(iLocal_88);
		iLocal_1393 = MISC::GET_GAME_TIMER();
	}
}

bool func_223(int iParam0)//Position - 0x211BF
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	Var3 = { GlobalFunc_107(Local_1076[iParam0 /*3*/] - Local_1060[iParam0 /*3*/]) };
	return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.x, Var3.f_1, Var0.x, Var0.f_1)) < 90f;
}


void func_225(var uParam0, int iParam1, char* sParam2)//Position - 0x21247
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / IntToFloat((*uParam0 - 1)));
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

char* func_226(int iParam0)//Position - 0x212A1
{
	switch (iParam0)
	{
		case 0:
			return "famtwoCanalsbottom";
			break;
		
		case 1:
			return "famtwoCanalstop";
			break;
		
		case 2:
			return "famtwoCanalsLeft";
			break;
		
		case 3:
			return "famtwoCanalsMiddle";
			break;
		
		case 4:
			return "famtwoCanalsRight";
			break;
	}
	return "famtwoCanalsbottom";
}

int func_227()//Position - 0x21304
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1060[iVar0 /*3*/], Local_1076[iVar0 /*3*/], fLocal_1092[iVar0], 0, 1, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 6;
}

void func_228(int iParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2134B
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if ((((((!PED::IS_PED_INJURED(iLocal_125[iParam0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_125[iParam0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_122[iParam0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iParam0], 0)) && PED::IS_PED_IN_VEHICLE(iLocal_125[iParam0], iLocal_122[iParam0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
	{
		fVar0 = func_220(ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1), iParam2, sParam3, uParam1, 0);
		fVar1 = func_220(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iParam2, sParam3, uParam1, 0);
		Var2 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fVar0, sParam3) };
		Var5 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fVar1, sParam3) };
		if (!iLocal_1380[iParam0])
		{
			if (!bLocal_1406)
			{
				if (((fVar0 < fVar1 && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1), 3f)) && !CAM::IS_SPHERE_VISIBLE(Var2, 3f)) && SYSTEM::VDIST2(Var5, ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1)) > 25f)
				{
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[iParam0]);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_122[iParam0], iParam2, sParam3, 1);
					VEHICLE::_0x796A877E459B99EA(iLocal_122[iParam0], 0f, 0f, 0.1f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_122[iParam0], GlobalFunc_253((fVar0 + (IntToFloat(iParam0) * 0.5f)), 0f, 999999f));
					iLocal_1380[iParam0] = 1;
				}
			}
			if (iLocal_83 != 2)
			{
				iLocal_1384[iParam0] = fVar0 > fVar1;
			}
			else
			{
				iLocal_1384[iParam0] = 0;
			}
		}
		else
		{
			fVar8 = SYSTEM::VDIST2(Var5, Var2);
			fVar9 = 999999f;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_122[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_122[1]))
			{
				fVar9 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_122[0], 1), ENTITY::GET_ENTITY_COORDS(iLocal_122[1], 1));
			}
			if (((((CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1), 3f) && (fVar8 < 25f || iParam4)) || fVar8 < 9f) || fVar0 > fVar1) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[iParam0])) || fVar9 < (1.5f * 1.5f))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[iParam0]))
				{
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_122[iParam0], 262144);
				}
				else
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_122[iParam0], iParam2, sParam3, 20f, 262144);
				}
				if (iParam5 && (fVar0 > 0.85f || fVar0 < 0.15f))
				{
				}
				TASK::TASK_VEHICLE_CHASE(iLocal_125[iParam0], PLAYER::PLAYER_PED_ID());
				iLocal_1380[iParam0] = 0;
			}
			else
			{
				fVar10 = 40f;
				if (iParam5 && (fVar0 > 0.8f || fVar0 < 0.2f))
				{
					fVar11 = 1f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_122[iParam0], GlobalFunc_253(((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) * (fVar11 / fVar10)) * fLocal_1403), 0.2f, fVar11));
				}
				else
				{
					fVar11 = 1.3f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_122[iParam0], GlobalFunc_253(((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_122[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) * (fVar11 / fVar10)) * fLocal_1403), 0.8f, fVar11));
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[iParam0]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_122[iParam0]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_122[iParam0]);
		}
	}
}


void func_230()//Position - 0x216EE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
	{
		switch (iLocal_1398)
		{
			case 0:
				if (!iLocal_1400)
				{
					GlobalFunc_159("FM2_JSHLP1", 12000);
					iLocal_1399 = MISC::GET_GAME_TIMER();
					iLocal_1400 = 1;
				}
				if (PAD::IS_CONTROL_PRESSED(0, 71))
				{
					fLocal_1402 = (fLocal_1402 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_1402 > 3f || (MISC::GET_GAME_TIMER() - iLocal_1399) > 10000)
				{
					fLocal_1402 = 0f;
					iLocal_1398++;
				}
				break;
			
			case 1:
				if (GlobalFunc_74("FM2_JSHLP1"))
				{
					if (!iLocal_1401)
					{
						HUD::CLEAR_HELP(0);
						iLocal_1401 = 1;
					}
				}
				else
				{
					iLocal_1399 = MISC::GET_GAME_TIMER();
					iLocal_1398++;
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_1399) > 2000)
				{
					iLocal_1400 = 0;
					iLocal_1401 = 0;
					iLocal_1398++;
				}
				break;
			
			case 3:
				if (!iLocal_1400)
				{
					GlobalFunc_159("FM2_JSHLP2", 12000);
					iLocal_1399 = MISC::GET_GAME_TIMER();
					iLocal_1400 = 1;
				}
				if (PAD::IS_CONTROL_PRESSED(0, 72))
				{
					fLocal_1402 = (fLocal_1402 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_1402 > 1f || (MISC::GET_GAME_TIMER() - iLocal_1399) > 10000)
				{
					iLocal_1398++;
				}
				break;
			
			case 4:
				if (GlobalFunc_74("FM2_JSHLP2"))
				{
					if (!iLocal_1401)
					{
						iLocal_1401 = 1;
						HUD::CLEAR_HELP(0);
					}
				}
				else
				{
					iLocal_1398++;
				}
				break;
			
			case 5:
				if ((MISC::GET_GAME_TIMER() - iLocal_1399) > 2000)
				{
					iLocal_1400 = 0;
					iLocal_1401 = 0;
					iLocal_1398++;
				}
				break;
			
			case 6:
				if (!iLocal_1400)
				{
					GlobalFunc_159("FM2_JSHLP3", 12000);
					iLocal_1399 = MISC::GET_GAME_TIMER();
					iLocal_1400 = 1;
				}
				if (PAD::IS_CONTROL_PRESSED(0, 76))
				{
					fLocal_1402 = (fLocal_1402 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_1402 > 2f || (MISC::GET_GAME_TIMER() - iLocal_1399) > 7500)
				{
					fLocal_1402 = 0f;
					iLocal_1398++;
				}
				break;
			
			case 7:
				if (GlobalFunc_74("FM2_JSHLP3"))
				{
					if (!iLocal_1401)
					{
						HUD::CLEAR_HELP(0);
						iLocal_1401 = 1;
					}
				}
				else
				{
					iLocal_1399 = MISC::GET_GAME_TIMER();
					iLocal_1398++;
				}
				break;
		}
	}
	else if ((GlobalFunc_74("FM2_JSHLP1") || GlobalFunc_74("FM2_JSHLP2")) || GlobalFunc_74("FM2_JSHLP3"))
	{
		HUD::CLEAR_HELP(1);
	}
}



void func_233()//Position - 0x21969
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iVar0], 0) && !PED::IS_PED_INJURED(iLocal_125[iVar0])) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_125[iVar0], iLocal_122[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_122[iVar0], 1) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_110, 1) };
				if (SYSTEM::VDIST2(Var4, Local_852[0 /*7*/]) > 100f && SYSTEM::VDIST2(Var4, Local_852[1 /*7*/]) > 100f)
				{
					if (SYSTEM::VDIST2(Var4, Local_852[iVar0 /*7*/]) > 400f)
					{
						if (GlobalFunc_2900(iLocal_122[iVar0], iLocal_110, iLocal_136, Var4, ENTITY::GET_ENTITY_ROTATION(iLocal_110, 2)))
						{
							Local_852[iVar0 /*7*/] = { Var4 };
							Local_852[iVar0 /*7*/].f_3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_110, 2) };
							Local_852[iVar0 /*7*/].f_6 = SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iLocal_122[iVar0]));
						}
					}
				}
				if (!GlobalFunc_105(Local_852[iVar0 /*7*/]) && Local_852[iVar0 /*7*/].f_2 < 1f)
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_122[iVar0]))
					{
						iLocal_870[iVar0] = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_870[iVar0]) > 1000 && (MISC::GET_GAME_TIMER() - iLocal_867[iVar0]) > 2000)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Local_852[iVar0 /*7*/], 3f) && !CAM::IS_SPHERE_VISIBLE(Var1, 3f))
						{
							fVar7 = 99f;
							iVar8 = 0;
							if (iVar0 == 0)
							{
								iVar8 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iVar8], 0))
							{
								fVar7 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_122[iVar8], 1), Local_852[iVar0 /*7*/]);
							}
							if ((((SYSTEM::VDIST2(Var1, Var4) > 225f && SYSTEM::VDIST2(Var1, Local_852[iVar0 /*7*/]) < SYSTEM::VDIST2(Var1, Var4)) && SYSTEM::VDIST2(Var4, Local_852[iVar0 /*7*/]) > 225f) && fVar7 > 5f) && GlobalFunc_2900(iLocal_122[iVar0], iLocal_110, iLocal_136, Local_852[iVar0 /*7*/], Local_852[iVar0 /*7*/].f_3))
							{
								MISC::CLEAR_AREA_OF_PEDS(Local_852[iVar0 /*7*/], 3f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(Local_852[iVar0 /*7*/], 3f, 0, 0, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_122[iVar0], Local_852[iVar0 /*7*/], 1, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_122[iVar0], Local_852[iVar0 /*7*/].f_3, 2, 1);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_122[iVar0], (Local_852[iVar0 /*7*/].f_6 + 5f));
								TASK::TASK_VEHICLE_CHASE(iLocal_125[iVar0], PLAYER::PLAYER_PED_ID());
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_122[iVar0], 1, 1);
								iLocal_867[iVar0] = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}


void func_235(bool bParam0, float fParam1)//Position - 0x21D8F
{
	if (bParam0)
	{
		MISC::WATER_OVERRIDE_FADE_IN(fParam1);
		MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0.35f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0.3f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0.25f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0.35f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0.4f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0.25f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0.55f);
		MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0.45f);
		MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0.5f);
		MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0.6f);
		MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0.25f);
		MISC::WATER_OVERRIDE_SET_STRENGTH(0.75f);
	}
	else
	{
		MISC::WATER_OVERRIDE_FADE_OUT(fParam1);
	}
}

void func_236()//Position - 0x21E17
{
	Local_1060[0 /*3*/] = { -1237.274f, -923.97f, 5.135533f };
	Local_1076[0 /*3*/] = { -985.1348f, -1359.68f, -7.479084f };
	fLocal_1092[0] = 23f;
	Local_1060[1 /*3*/] = { -1003.908f, -914.4536f, -1.611186f };
	Local_1076[1 /*3*/] = { -880.5477f, -1124.602f, 6.150022f };
	fLocal_1092[1] = 29f;
	Local_1060[2 /*3*/] = { -1169.471f, -1027.087f, 5.78508f };
	Local_1076[2 /*3*/] = { -1003.961f, -932.3284f, -2.993861f };
	fLocal_1092[2] = 29f;
	Local_1060[3 /*3*/] = { -1116.554f, -1119.791f, 5.784778f };
	Local_1076[3 /*3*/] = { -950.7761f, -1023.823f, -1.496439f };
	fLocal_1092[3] = 29f;
	Local_1060[4 /*3*/] = { -1062.391f, -1213.474f, -2.315868f };
	Local_1076[4 /*3*/] = { -897.3085f, -1116.901f, 4.92553f };
	fLocal_1092[4] = 29f;
}

void func_237()//Position - 0x21F3C
{
	Local_980[0 /*3*/] = { -2033.74f, -1004.776f, 1f };
	Local_980[1 /*3*/] = { -1801.432f, -975.5541f, 1f };
	Local_980[2 /*3*/] = { -1796.255f, -988.166f, 1f };
	Local_980[3 /*3*/] = { -2012.245f, -1073.776f, 1f };
	Local_993[5 /*3*/] = { -1241.138f, -933.0004f, 1f };
	Local_993[4 /*3*/] = { -1227.203f, -924.2169f, 1f };
	Local_993[3 /*3*/] = { -1240.015f, -751.6861f, 1f };
	Local_993[2 /*3*/] = { -1431.875f, -747.558f, 1f };
	Local_993[1 /*3*/] = { Local_980[1 /*3*/] };
	Local_993[0 /*3*/] = { Local_980[2 /*3*/] };
	Local_1012[0 /*3*/] = { -988.3516f, -908.0377f, 1f };
	Local_1012[1 /*3*/] = { -866.9206f, -1116.04f, 1f };
	Local_1012[2 /*3*/] = { -978.9424f, -1351.054f, 1f };
	Local_1012[3 /*3*/] = { -1007.62f, -1362.316f, 1f };
	Local_1012[4 /*3*/] = { Local_993[5 /*3*/] };
	Local_1012[5 /*3*/] = { Local_993[4 /*3*/] };
	Local_1031[0 /*3*/] = { Local_1012[3 /*3*/] };
	Local_1031[1 /*3*/] = { Local_1012[2 /*3*/] };
	Local_1031[2 /*3*/] = { -844.5858f, -1302.006f, 4.1001f };
	Local_1031[3 /*3*/] = { -768.9856f, -1524.338f, 4.98f };
	Local_1031[4 /*3*/] = { -1052.374f, -1553.313f, 13.0317f };
	Local_1047[0 /*3*/] = { Local_1031[4 /*3*/] };
	Local_1047[1 /*3*/] = { Local_1031[3 /*3*/] };
	Local_1047[2 /*3*/] = { -1165.894f, -1923.179f, 2.5698f };
	Local_1047[3 /*3*/] = { -1226.947f, -1873.531f, 4.8338f };
}



bool func_240()//Position - 0x22150
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_105[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("csb_porndudes"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("csb_porndudes")))
		{
			iLocal_105[0] = PED::CREATE_PED(26, joaat("csb_porndudes"), -2028.336f, -1026.387f, 0.0897f, 222.4424f, 1, 1);
			if (bLocal_144)
			{
				iVar0 = 0;
				while (iVar0 < 12)
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_105[0], iVar0, Local_145[iVar0 /*3*/][0], Local_145[iVar0 /*3*/][1], 0);
					iVar0++;
				}
			}
			PED::SET_PED_DIES_IN_WATER(iLocal_105[0], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_105[0], 17, 1);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_105[0], 1.75f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_105[0], 1);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_105[0], PLAYER::PLAYER_PED_ID(), -1, 4, 3);
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(iLocal_105[0]);
}

int func_241()//Position - 0x2221D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, func_226(iVar1));
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, func_226(iVar1));
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, func_226(iVar1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, func_226(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_242(int iParam0, bool bParam1)//Position - 0x22276
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	STREAMING::REQUEST_MODEL(joaat("seashark"));
	STREAMING::REQUEST_MODEL(joaat("csb_porndudes"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("seashark")) && STREAMING::HAS_MODEL_LOADED(joaat("csb_porndudes")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[iParam0]))
		{
			if (iParam0 == 0)
			{
				if (bParam1)
				{
					Var0 = { -2023.64f, -1047.04f, 0.6916f };
					fVar3 = -108f;
				}
				else
				{
					Var0 = { -2024.716f, -1046.387f, 0f };
					fVar3 = -108.9627f;
				}
			}
			else if (bParam1)
			{
				Var0 = { -2027.4f, -1045.88f, 0.6916f };
				fVar3 = -108f;
			}
			else
			{
				Var0 = { -2021.2f, -1046.926f, 0f };
				fVar3 = -84.578f;
			}
			if (WATER::GET_WATER_HEIGHT(Var0, &uVar4))
			{
				Var0.f_2 = uVar4;
				iLocal_122[iParam0] = VEHICLE::CREATE_VEHICLE(joaat("seashark"), Var0, fVar3, 1, 1);
				if (iParam0 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_122[iParam0], 3);
				}
				else
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_122[iParam0], 1);
				}
				VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(iLocal_122[iParam0], 100f);
				VEHICLE::SET_BOAT_ANCHOR(iLocal_122[iParam0], bParam1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iParam0], 0))
		{
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_122[iParam0], 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_122[iParam0], 0, 0, 0, 1, 1, 0, 0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_122[iParam0], 3);
			if (bParam1)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_122[iParam0], 0, 1);
			}
			else
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_122[iParam0], 1, 1);
			}
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_122[iParam0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iParam0], 0))
		{
			if (!bParam1)
			{
				iLocal_125[iParam0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_122[iParam0], 26, joaat("csb_porndudes"), -1, 1, 1);
			}
			else
			{
				iLocal_125[iParam0] = PED::CREATE_PED(26, joaat("csb_porndudes"), Vector(10.9101f, -1024.399f, -2068.027f) + Vector(0f, 0f, IntToFloat(iParam0)), 0f, 1, 1);
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_125[iParam0]) && !PED::IS_PED_INJURED(iLocal_125[iParam0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_122[iParam0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iParam0], 0))
		{
			if (!bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_125[iParam0], 0);
				if (!PED::IS_PED_IN_VEHICLE(iLocal_125[iParam0], iLocal_122[iParam0], 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_125[iParam0], iLocal_122[iParam0], -1);
				}
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_125[iParam0], 1);
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_125[iParam0], 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_125[iParam0], 0, 0, 0, 1, 1, 0, 0, 0);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_125[iParam0], joaat("weapon_pistol"), -1, 0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_125[iParam0], 3, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_125[iParam0], 1, 1);
			PED::SET_PED_COMBAT_ABILITY(iLocal_125[iParam0], 0);
			PED::SET_PED_COMBAT_RANGE(iLocal_125[iParam0], 2);
			PED::SET_PED_ACCURACY(iLocal_125[iParam0], 0);
			PED::SET_PED_SHOOT_RATE(iLocal_125[iParam0], 15);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_125[iParam0], 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_125[iParam0], 1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_125[iParam0], 0);
			PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(iLocal_125[iParam0], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_125[iParam0], iLocal_89);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_125[iParam0], 0);
			if (iParam0 == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_125[iParam0], 0, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_125[iParam0], 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_125[iParam0], 4, 2, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_125[iParam0], 0, 0, 0, false);
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_125[iParam0], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_125[iParam0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_125[iParam0], 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_125[iParam0], 1, 1, 0, false);
			}
		}
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_125[iParam0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_122[iParam0])) && !PED::IS_PED_INJURED(iLocal_125[iParam0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iParam0], 0)) && (PED::IS_PED_IN_VEHICLE(iLocal_125[iParam0], iLocal_122[iParam0], 0) || bParam1))
	{
		return 1;
	}
	return 0;
}

int func_243()//Position - 0x2267F
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(301, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(302, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoCanalsAlt");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoplayer");
	if ((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "famtwo") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(301, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(302, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "famtwoCanalsAlt"))
	{
		func_225(&uLocal_1098, 101, "famtwo");
		func_225(&uLocal_1111, 102, "famtwo");
		func_225(&uLocal_1124, 201, "famtwo");
		func_225(&uLocal_1170, 202, "famtwo");
		func_225(&uLocal_1216, 301, "famtwo");
		func_225(&uLocal_1241, 302, "famtwo");
		func_225(&uLocal_1342, 401, "famtwo");
		func_225(&uLocal_1361, 402, "famtwo");
		func_225(&uLocal_1317, 1, "famtwoCanalsAlt");
		return 1;
	}
	return 0;
}

int func_244()//Position - 0x227BC
{
	if (func_245(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_980, 0))
	{
		return 0;
	}
	if (func_245(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_993, 0))
	{
		return 1;
	}
	if (func_245(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_1012, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_125[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_125[0]))
		{
			return 2;
		}
		else if (iLocal_1392)
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	if (func_245(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_1031, 0))
	{
		return 5;
	}
	if (func_245(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_1047, 0))
	{
		return 6;
	}
	return 7;
}

int func_245(struct<3> Param0, var uParam3, bool bParam4)//Position - 0x2286D
{
	int iVar0;
	int iVar1;
	
	if (*uParam3 < 3)
	{
	}
	iVar0 = 1;
	if (!func_246(Param0, *(uParam3[0 /*3*/]), *(uParam3[(*uParam3 - 1) /*3*/])))
	{
		if (bParam4)
		{
		}
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < (*uParam3 - 1))
	{
		if (!func_246(Param0, *(uParam3[iVar1 + 1 /*3*/]), *(uParam3[iVar1 /*3*/])))
		{
			if (bParam4)
			{
			}
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_246(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)//Position - 0x228E3
{
	return (((Param6 - Param3) * (Param0.f_1 - Param3.f_1)) - ((Param6.f_1 - Param3.f_1) * (Param0 - Param3))) >= 0f;
}

void func_247()//Position - 0x2290C
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	
	switch (iLocal_269)
	{
		case 0:
			bLocal_1420 = false;
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoplayer");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "famtwo");
			VEHICLE::REQUEST_VEHICLE_RECORDING(102, "famtwo");
			STREAMING::REQUEST_ANIM_DICT("missfam2_tracy_jetski");
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("family_2_mcs_3", 8);
				iLocal_269++;
			}
			else
			{
				iLocal_269 += 2;
			}
			iLocal_1419 = 0;
			break;
		
		case -1:
			STREAMING::REQUEST_IPL("smboat");
			while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_269 = 3;
			iLocal_265 = 0;
			break;
		
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[0]) && !PED::IS_PED_INJURED(iLocal_105[0]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Guy_on_sofa", iLocal_105[0], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[1]) && !PED::IS_PED_INJURED(iLocal_105[1]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Man_getting_wood", iLocal_105[1], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[2]) && !PED::IS_PED_INJURED(iLocal_105[2]))
				{
					func_2("Girl_on_sofa", iLocal_105[2], 0, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[3]) && !PED::IS_PED_INJURED(iLocal_105[3]))
				{
					func_2("Girl_being_chatted_up", iLocal_105[3], 0, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_102) && !PED::IS_PED_INJURED(iLocal_102))
				{
					func_2("Tracy", iLocal_102, 0, 2);
				}
				iLocal_269++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			if (func_242(0, 1) && func_242(1, 1))
			{
				iVar0 = 1;
			}
			if (iVar0 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "famtwoplayer"))
			{
				iLocal_269++;
				if (iLocal_265)
				{
					iLocal_269 = -1;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				bLocal_144 = false;
				GlobalFunc_8316(1, 1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_102))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_102, "Tracy", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					VEHICLE::SET_BOAT_ANCHOR(iLocal_110, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_110, "Michaels_seashark", 0, 0, 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_135))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_135, "Prop_MP3_Dock", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_125[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_125[0], 0);
					PED::SET_PED_CAN_RAGDOLL(iLocal_125[0], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_125[0], "Porn_Dude", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_125[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_125[1], 0);
					PED::SET_PED_CAN_RAGDOLL(iLocal_125[1], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_125[1], "Porn_Dude^1", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[0], 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_122[0], "Porn_Dude_seashark", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[1], 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_122[1], "Porn_Dude_^1_seashark", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[0]) && !PED::IS_PED_INJURED(iLocal_105[0]))
				{
					PED::SET_PED_DIES_IN_WATER(iLocal_105[0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_105[0], 17, 1);
					PED::SET_PED_LOD_MULTIPLIER(iLocal_105[0], 1.75f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_105[0], 1);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_105[0], PLAYER::PLAYER_PED_ID(), -1, 4, 3);
					bLocal_144 = true;
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105[0], "Guy_on_sofa", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[1]) && !PED::IS_PED_INJURED(iLocal_105[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105[1], "Man_getting_wood", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[2]) && !PED::IS_PED_INJURED(iLocal_105[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105[2], "Girl_on_sofa", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[3]) && !PED::IS_PED_INJURED(iLocal_105[3]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105[3], "Girl_being_chatted_up", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(2048);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_4956();
				func_193(7);
				GlobalFunc_2885();
				AUDIO::PREPARE_MUSIC_EVENT("FAM2_NECK_GRAB");
				bLocal_1417 = false;
				iLocal_1418 = 0;
				iLocal_269++;
			}
			break;
		
		case 4:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			MISC::CLEAR_AREA(-2006.247f, -1043.832f, -1.481001f, 200f, 1, 0, 0, 0);
			iLocal_269++;
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracy", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_102, iLocal_110, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_102, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_102, 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude^1", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude_seashark", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude^1_seashark", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_seashark", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, -1);
					}
					func_235(1, 0f);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_110, 1, "famtwoplayer", 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_110, 0.66f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					ENTITY::SET_ENTITY_COORDS(iLocal_110, Local_217, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_110, fLocal_220);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_110, 15f);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
					WATER::GET_WATER_HEIGHT(Local_217, &fLocal_1421);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_110, Local_217.x, Local_217.f_1, fLocal_1421, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_110, fLocal_220);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_110, 17f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					iVar1 = 0;
					while (iVar1 < iLocal_122)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(iLocal_122[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[iVar1], 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_125[iVar1])) && !PED::IS_PED_INJURED(iLocal_125[iVar1]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_125[iVar1], 0);
							PED::SET_PED_CAN_RAGDOLL(iLocal_125[iVar1], 1);
							VEHICLE::SET_BOAT_ANCHOR(iLocal_122[iVar1], false);
							if (!PED::IS_PED_IN_VEHICLE(iLocal_125[iVar1], iLocal_122[iVar1], 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_125[iVar1], iLocal_122[iVar1], -1);
							}
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_122[iVar1], 1) };
							WATER::GET_WATER_HEIGHT(Var2, &fVar5);
							ENTITY::SET_ENTITY_COORDS(iLocal_122[iVar1], Var2.x, Var2.f_1, fVar5, 1, 0, 0, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_122[iVar1], (10f + (2f * SYSTEM::TO_FLOAT(iVar1))));
						}
						iVar1++;
					}
					if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_141 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_141, 1);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_141, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2023.174f, -1052.98f, 1.529f, 2.1162f, 0f, -39.8484f, 50f, 1, 2), 0, 3);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_141, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2008.224f, -1037.217f, 1.8555f, -2.0921f, 0.0684f, -60.6791f, 50f, 1, 2), 1400, 1);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_141, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1985.437f, -1024.533f, 2.0868f, -3.9139f, 0f, -78.7979f, 50f, 1, 2), 1850, 3);
						CAM::SET_CAM_ACTIVE(uLocal_141, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_141, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.3f, 1);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						GlobalFunc_669(&uLocal_643, PLAYER::PLAYER_PED_ID(), 0, 20f, 1000, 1000, 500, 0, 1045220557);
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						bLocal_1420 = true;
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
						func_235(1, 0.1f);
						WATER::GET_WATER_HEIGHT(Local_217, &fLocal_1421);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_110, Local_217.x, Local_217.f_1, fLocal_1421, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_110, fLocal_220);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_110, 18f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						}
					}
				}
			}
			if (!bLocal_1417)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM2_NECK_GRAB") && CUTSCENE::GET_CUTSCENE_TIME() > 31250)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM2_NECK_GRAB");
					bLocal_1417 = true;
				}
			}
			if (!iLocal_1418)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 9700)
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_FAMILY_2_BOAT_RADIO", 0);
					iLocal_1418 = 1;
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 37500)
			{
				if (!iLocal_1422)
				{
					func_235(1, 1065353216);
					iLocal_1422 = 1;
				}
			}
			if (!iLocal_1419)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 45000)
				{
					if (!PED::IS_PED_INJURED(iLocal_105[0]))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_105[0], -2097.867f, -973.0261f, -1f, 2f, -1, 1193033728, 1056964608);
						iLocal_1419 = 1;
					}
				}
			}
			if (!bLocal_144)
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0)) && !PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0))))
				{
					iVar6 = 0;
					while (iVar6 < 12)
					{
						Local_145[iVar6 /*3*/][0] = PED::GET_PED_DRAWABLE_VARIATION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0)), iVar6);
						Local_145[iVar6 /*3*/][1] = PED::GET_PED_TEXTURE_VARIATION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0)), iVar6);
						iVar6++;
					}
					bLocal_144 = true;
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_105[0]))
			{
				func_240();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::_0x81CBAE94390F9F89();
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_135))
				{
					OBJECT::DELETE_OBJECT(&iLocal_135);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_mp3_dock"));
				}
				if (!bLocal_1417)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM2_CS_SKIP");
				}
				GlobalFunc_8316(0, 1, 1, 0);
				GlobalFunc_657();
				PLAYER::SPECIAL_ABILITY_CHARGE_LARGE(PLAYER::PLAYER_ID(), 1, 0);
				if (!bLocal_1417)
				{
					AUDIO::CANCEL_MUSIC_EVENT("FAM2_GRAB_NECK");
				}
				SYSTEM::SETTIMERA(0);
				if (!bLocal_1420)
				{
					iLocal_269++;
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_110))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
					}
					func_196(7);
				}
			}
			break;
		
		case 6:
			if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (SYSTEM::TIMERB() > 2350)
				{
					CAM::RENDER_SCRIPT_CAMS(false, 1, 1500, 0, 0, 0);
				}
				if (SYSTEM::TIMERB() > 2500)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_110))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
						}
						func_196(7);
					}
				}
			}
			else if (SYSTEM::TIMERB() > 2350)
			{
				if (GlobalFunc_7208(&uLocal_643, 1, 1, 1, 0, 1, 0))
				{
					CAM::RENDER_SCRIPT_CAMS(false, 1, 1500, 0, 0, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_110))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
					}
					GlobalFunc_5810(&uLocal_643);
					func_196(7);
				}
			}
			break;
	}
}


void func_249()//Position - 0x2338A
{
	int iVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	func_258();
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_110) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_122[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[0], 0))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_122[1]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_122[1], 0)))
	{
		func_103("FM2_TSPOOK");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135))
	{
		func_257();
	}
	iVar0 = 0;
	while (iVar0 < iLocal_122)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[iVar0]))
		{
			func_242(iVar0, 1);
		}
		iVar0++;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iLocal_105)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_105[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_105[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_105[iVar0]))
			{
				func_103("FM2_TSPOOK");
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (((((((((((((((((MISC::IS_BULLET_IN_AREA(-2033.821f, -1031.864f, 4.89f, 5f, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(4, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(20, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(19, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, -2033.821f, -1031.864f, 4.89f, 10f)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_smokegrenade"), 5f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_rpg"), 5f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenade"), 5f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenadelauncher"), 5f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenadelauncher_smoke"), 5f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_smokegrenade"), 5f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_bzgas"), 5f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_molotov"), 5f, 1)) || (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Vector(4.89f, -1031.864f, -2033.821f) - Vector(30f, 30f, 30f), Vector(4.89f, -1031.864f, -2033.821f) + Vector(30f, 30f, 30f), 0, 1) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())))
		{
			func_103("FM2_TSPOOK");
		}
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_131))
	{
		uLocal_131 = GlobalFunc_5104(-2034.37f, -1032.23f, 4.88f, 0);
		HUD::SET_BLIP_COLOUR(uLocal_131, 3);
		HUD::SET_BLIP_SCALE(uLocal_131, 1f);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_131, "FM2_YACHTL");
	}
	switch (iLocal_269)
	{
		case 0:
			if (!GlobalFunc_74("FM2_DIVOFF"))
			{
				GlobalFunc_159("FM2_DIVOFF", -1);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_STOP", 8, 0, 0, 0);
			GlobalFunc_574(207, 0);
			func_193(6);
			SYSTEM::SETTIMERA(0);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				sLocal_949[2] = "FM2_USWIM1_KM";
				sLocal_949[0] = "FM2_SWIM_KM";
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				sLocal_949[2] = "FM2_SWIM_FP";
				sLocal_949[0] = "FM2_SWIM_FP";
			}
			else
			{
				sLocal_949[2] = "FM2_USWIM1";
				sLocal_949[0] = "FM2_SWIM";
			}
			sLocal_949[3] = "FM2_USWIM2";
			sLocal_949[1] = "FM2_DIVE";
			sLocal_949[4] = "FM2_STAT1";
			sLocal_949[5] = "FM2_DROWN";
			iLocal_959[0] = "shouting_jimmy_idle_a";
			iLocal_959[1] = "shouting_jimmy_idle_b";
			iLocal_959[2] = "shouting_jimmy_idle_c";
			iLocal_963 = 0;
			iLocal_269++;
			iLocal_278 = -1;
			iLocal_966 = -1;
			iLocal_956 = -1;
			iLocal_964 = 0;
			bLocal_968 = false;
			iLocal_967 = 0;
			iLocal_288 = 0;
			STREAMING::REQUEST_ANIM_DICT("missfam2ig_3");
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			if (iLocal_265)
			{
				iLocal_269 = -1;
			}
			iLocal_965 = 1;
			break;
		
		case -1:
			STREAMING::REQUEST_IPL("smboat");
			while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
			{
				SYSTEM::WAIT(0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1115154469, 0, 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, iLocal_281, 0, 1, 0);
			}
			iLocal_269 = 1;
			iLocal_265 = 0;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (iLocal_965)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				if (SYSTEM::TIMERA() < 1000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1871.083f, -1203.116f, 13.01658f, 2.5f, 2.5f, 3f, 0, 1, 0))
				{
					iLocal_965 = 0;
				}
			}
			if (iLocal_966 == -1 && (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				GlobalFunc_527("FM2_YACHT", 7500, 1);
				iLocal_966 = MISC::GET_GAME_TIMER();
			}
			fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1));
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfam2ig_3"))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), -1859.264f, -1216.776f, 13.0174f) > 3f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, 713668775) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_103);
						iLocal_956 = 0;
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_103, -1859.264f, -1216.776f, 13.0174f, 1f, -1, 0.25f, 0, 1193033728);
					}
				}
				else if (fVar2 < 900f)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_103, PLAYER::PLAYER_PED_ID(), 10f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, -875674219) != 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_103, "missfam2ig_3", "shouting_jimmy_base", 3))
						{
							TASK::CLEAR_PED_TASKS(iLocal_103);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							iLocal_956 = 0;
						}
					}
					else
					{
						switch (iLocal_956)
						{
							case -1:
								STREAMING::REQUEST_ANIM_DICT("missfam2ig_3");
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfam2ig_3"))
								{
									iLocal_956 = 0;
								}
								break;
							
							case 0:
								if ((MISC::GET_GAME_TIMER() - iLocal_958) > 1000)
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_103, "missfam2ig_3", "shouting_jimmy_base", 3))
									{
										TASK::TASK_PLAY_ANIM(iLocal_103, "missfam2ig_3", "shouting_jimmy_base", 4f, -4f, -1, 49, 0, 0, 0, 0);
									}
									else
									{
										iLocal_956++;
									}
									iLocal_958 = MISC::GET_GAME_TIMER();
								}
								break;
							
							case 1:
								if ((((MISC::GET_GAME_TIMER() - iLocal_966) > 5000 || MISC::GET_PROFILE_SETTING(203) == 0) && fVar2 < 900f) && (iLocal_278 == -1 || (MISC::GET_GAME_TIMER() - iLocal_278) > 10000))
								{
									TASK::CLEAR_PED_TASKS(iLocal_103);
									if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_STOP", 8, 0, 0, 0))
									{
										TASK::TASK_PLAY_ANIM(iLocal_103, "missfam2ig_3", iLocal_959[iLocal_957], 4f, -4f, -1, 48, 0, 0, 0, 0);
										iLocal_278 = MISC::GET_GAME_TIMER();
										iLocal_956++;
									}
								}
								break;
							
							case 2:
								if ((MISC::GET_GAME_TIMER() - iLocal_278) > 1000)
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_103, "missfam2ig_3", iLocal_959[iLocal_957], 3))
									{
										TASK::CLEAR_PED_TASKS(iLocal_103);
										iLocal_957++;
										if (iLocal_957 >= iLocal_959)
										{
											iLocal_957 = 0;
										}
										iLocal_956 = 0;
									}
								}
								break;
							}
						}
					}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DIVE_INTO_WATER"))
			{
				if (PED::IS_PED_DIVING(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_2_DIVE_INTO_WATER");
				}
			}
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_319) < 100f)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (Var3.f_2 < 2f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_103);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_111);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_112))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_112);
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DIVE_INTO_WATER"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DIVE_INTO_WATER");
				}
				iLocal_269++;
				SYSTEM::SETTIMERA(0);
				if (GlobalFunc_74("FM2_DIVOFF"))
				{
					HUD::CLEAR_HELP(0);
				}
				STREAMING::REMOVE_ANIM_DICT("missfam2ig_3");
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_SPLASH");
			}
			break;
		
		case 2:
			if (!GlobalFunc_74("FM2_DIVOFF") && SYSTEM::TIMERA() > 3000)
			{
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
				RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
				iLocal_269++;
			}
			break;
		
		case 3:
			if (!iLocal_964)
			{
				if (AUDIO::LOAD_STREAM("FAM2_BOAT_PARTY_MASTER", 0))
				{
					AUDIO::PLAY_STREAM_FROM_POSITION(-2032.599f, -1032.639f, 4.8831f);
					iLocal_964 = 1;
				}
			}
			func_251();
			if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_968)
					{
						bLocal_968 = true;
					}
				}
				else if (bLocal_968)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
					}
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2033.124f, -1042.981f, 0f, -2028.863f, -1028.328f, 8.97435f, 18.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2017.999f, -1035.053f, 5.946373f, -2023.154f, -1033.719f, 1.287564f, 3.25f, 0, 1, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_STREAM();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
				}
				RECORDING::_0x293220DA1B46CEBC(5f, 4f, 3);
				func_196(6);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2030.86f, -1035.417f, 7.882243f, -2006.247f, -1043.832f, -1.481001f, 21.25f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_NEAR_YACHT");
				iLocal_963 = 1;
				iLocal_269++;
			}
			if (!iLocal_963)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2017.155f, -1040.214f, 1.4499f) < 400f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM2_NEAR_YACHT");
					iLocal_963 = 1;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1))
				{
					AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
					AUDIO::STOP_STREAM();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
					}
					RECORDING::_0x293220DA1B46CEBC(0f, 8f, 3);
					func_196(6);
				}
			}
			break;
	}
	if (func_250(&uLocal_943, &iLocal_941, &uLocal_942))
	{
		func_103("FM2_JSPOOK");
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_103) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 30f)
		{
			func_103("FM2_JSPOOK");
		}
		else
		{
			func_142();
		}
	}
	if (!iLocal_967)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_110, 3);
			iLocal_967 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_319) > 250000f)
	{
		func_103("FM2_TRAAB");
	}
	if (!PED::IS_PED_INJURED(iLocal_103))
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) };
		fVar9 = Var6.f_2;
		if (fVar9 < 10f)
		{
			func_103("FM2_JIMHIT");
		}
	}
}

int func_250(var uParam0, int iParam1, var uParam2)//Position - 0x23F9C
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
	{
		if (!*uParam0)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), 10f, 1))
			{
				*uParam0 = 1;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam2) > 200)
		{
			*iParam1++;
			*uParam2 = MISC::GET_GAME_TIMER();
			*uParam0 = 0;
		}
		if ((*iParam1 > 0 && !*uParam0) && (MISC::GET_GAME_TIMER() - *uParam2) > 1000)
		{
			*iParam1 = (*iParam1 - 1);
		}
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
		if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_279) > 7500)
		{
			GlobalFunc_5653(iLocal_103, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_279 = MISC::GET_GAME_TIMER();
		}
		if ((((((((*iParam1 > 5 || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenade"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher_smoke"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(5f, 10f, 10f), joaat("weapon_rpg"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(5f, 10f, 10f), joaat("weapon_molotov"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(5f, 10f, 10f), joaat("weapon_bzgas"), 0)) || FIRE::IS_EXPLOSION_IN_AREA(2, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(2f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(2f, 10f, 10f))) || (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_112, uVar0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_251()//Position - 0x24202
{
	iLocal_970 = iLocal_969;
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (!MISC::IS_BIT_SET(uLocal_975, 5) && PLAYER::GET_PLAYER_UNDERWATER_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
			{
				if (iLocal_969 != 5)
				{
					iLocal_969 = 5;
				}
			}
			else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!MISC::IS_BIT_SET(iLocal_975, 2))
				{
					if (iLocal_969 != 2)
					{
						iLocal_969 = 2;
					}
				}
				else if (!MISC::IS_BIT_SET(iLocal_975, 3))
				{
					if (iLocal_969 != 3)
					{
						iLocal_969 = 3;
					}
				}
				else if (!MISC::IS_BIT_SET(iLocal_975, 4))
				{
					if (iLocal_969 != 4)
					{
						iLocal_969 = 4;
					}
				}
			}
		}
		else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!MISC::IS_BIT_SET(iLocal_975, 0))
			{
				if (iLocal_969 != 0)
				{
					iLocal_969 = 0;
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_975, 1))
			{
				if (iLocal_969 != 1)
				{
					iLocal_969 = 1;
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_975, 4))
			{
				if (iLocal_969 != 4)
				{
					iLocal_969 = 4;
				}
			}
		}
	}
	if (iLocal_969 != iLocal_970)
	{
		iLocal_972 = 0;
		iLocal_971 = 0;
		iLocal_973 = 0;
		fLocal_974 = 0f;
	}
	if (!iLocal_971)
	{
		if ((iLocal_969 != 1 && iLocal_969 != 2) && iLocal_969 != 3)
		{
			if (func_254(sLocal_949[iLocal_969], 0))
			{
				iLocal_971 = 1;
			}
		}
		else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
		{
			if (func_254(sLocal_949[iLocal_969], 0))
			{
				iLocal_971 = 1;
			}
		}
		else
		{
			iLocal_971 = 1;
		}
	}
	else if (GlobalFunc_74(sLocal_949[iLocal_969]))
	{
		fLocal_974 = (fLocal_974 + MISC::GET_FRAME_TIME());
		if (fLocal_974 > 2f || !func_253(iLocal_969))
		{
			if (!MISC::IS_BIT_SET(iLocal_975, iLocal_969))
			{
				MISC::SET_BIT(&iLocal_975, iLocal_969);
			}
			if (!iLocal_972 && func_253(iLocal_969))
			{
				if (func_252(iLocal_969))
				{
					iLocal_972 = 1;
				}
			}
			else if (!iLocal_973)
			{
				HUD::CLEAR_HELP(0);
				iLocal_973 = 1;
			}
		}
	}
}

int func_252(int iParam0)//Position - 0x243EE
{
	switch (iParam0)
	{
		case 2:
		case 0:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 21) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 4f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			break;
		
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 30) || PAD::IS_CONTROL_JUST_PRESSED(0, 31))
			{
				return 1;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_253(int iParam0)//Position - 0x2447F
{
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (((iParam0 == 5 || iParam0 == 3) || iParam0 == 2) || iParam0 == 4)
			{
				return 1;
			}
		}
		else if ((iParam0 == 1 || iParam0 == 0) || iParam0 == 4)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_254(char* sParam0, bool bParam1)//Position - 0x244F0
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_74(sParam0))
	{
		HUD::CLEAR_HELP(1);
	}
	else if (bParam1)
	{
		GlobalFunc_Display_Help_Text(sParam0);
	}
	else
	{
		GlobalFunc_159(sParam0, -1);
	}
	if (GlobalFunc_74(sParam0))
	{
		return 1;
	}
	return 0;
}



bool func_257()//Position - 0x24596
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_mp3_dock"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_mp3_dock")))
		{
			iLocal_135 = OBJECT::CREATE_OBJECT(joaat("prop_mp3_dock"), -2032.539f, -1032.35f, 5.421927f, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_135))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_135, -2032.539f, -1032.35f, 5.421927f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_135, 0f, 0f, 66.5523f, 2, 1);
	}
	return ENTITY::DOES_ENTITY_EXIST(iLocal_135);
}

void func_258()//Position - 0x24611
{
	struct<3> Var0;
	
	switch (iLocal_976)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_c_stingray"));
			iLocal_976++;
			break;
		
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("a_c_stingray")))
			{
				iLocal_976++;
			}
			break;
		
		case 2:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var0.f_2 < 1f)
			{
				iLocal_977 = PED::CREATE_PED(26, joaat("a_c_stingray"), -1885.497f, -1189.883f, -8.2945f, -136.1128f, 1, 1);
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_977, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1f, 20000, 1193033728, 1056964608);
				iLocal_976++;
			}
			break;
		
		case 3:
			if (GlobalFunc_156(iLocal_977, PLAYER::PLAYER_PED_ID(), 1) > 20f || TASK::GET_SCRIPT_TASK_STATUS(iLocal_977, 2106541073) == 7)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_stingray"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_977);
				iLocal_976++;
			}
			break;
	}
}


void func_260()//Position - 0x24767
{
	switch (iLocal_269)
	{
		case 0:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 6, 8);
				iLocal_269++;
			}
			else
			{
				iLocal_269 += 2;
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				iLocal_269++;
			}
			break;
		
		case 2:
			GlobalFunc_4956();
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (GlobalFunc_550("family_2_mcs_2"))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					GlobalFunc_8316(1, 1, 1, 0);
					if (!PED::IS_PED_INJURED(iLocal_103))
					{
						PED::SET_PED_SWEAT(iLocal_103, 100f);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_103, "Jimmy", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_111))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_111);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_112, 0);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_112, "FAM_2_Jimmys_bike", 0, 0, 0);
					}
					RECORDING::_0x48621C9FCA3EBD28(4);
					CUTSCENE::START_CUTSCENE(0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					GlobalFunc_2885();
					PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 26, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 27, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
					}
					AUDIO::_0x149AEE66F0CB3A99(0f, 0f);
					iLocal_269++;
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 5, 8);
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
			{
				if (bLocal_290)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_111, -1848.195f, -1218.706f, 12.58357f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_111, 129.3527f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_111, -1867.383f, -1212.198f, 12.57401f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_111, -0.030485f);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_111);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_111);
			}
			MISC::CLEAR_AREA(-1859.045f, -1215.503f, 12.0665f, 2f, 1, 0, 0, 0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_269++;
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.5f);
				if (CUTSCENE::GET_CUTSCENE_TIME() > 90500)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_336(1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1115154469, 0, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, iLocal_281, 0, 1, 0);
				GlobalFunc_159("FM2_DIVOFF", -1);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_112, -1858.612f, -1214.563f, 12.307f, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_112, 0.388f, -0.438f, 0.4777f, 0.6553f);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_112, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				GlobalFunc_8316(0, 1, 1, 0);
				GlobalFunc_657();
				func_196(5);
			}
			break;
	}
}


void func_262()//Position - 0x24AAC
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		if (((((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cruiser")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("scorcher"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("tribike"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("tribike3"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("bmx")))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_111);
			iLocal_111 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar0 = 0;
			while (iVar0 < iLocal_114)
			{
				if (iLocal_114[iVar0] == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_114[iVar0] = 0;
				}
				iVar0++;
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_111, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_113) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
	{
		if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_113, 1)) > 1000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_113)) && !CAM::IS_SPHERE_VISIBLE(Local_221, 5f))
		{
			if (SYSTEM::VDIST2(Local_221, ENTITY::GET_ENTITY_COORDS(iLocal_113, 1)) < 625f)
			{
				GlobalFunc_10236(iLocal_113, Local_221 + Vector(1f, 0f, 0f), fLocal_224, 24, 0);
				GlobalFunc_76(24);
			}
			VEHICLE::DELETE_VEHICLE(&iLocal_113);
		}
	}
	if ((!PED::IS_PED_INJURED(iLocal_103) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
	{
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1308.715f, -1310.135f, -22.62013f, -1171.372f, -1261.148f, 47.98976f, 250f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1348.925f, -1155.041f, -20.53191f, -1163.36f, -1143.443f, 34.68446f, 142.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1386.385f, -1054.306f, -16.12128f, -1245.289f, -965.9915f, 32.39125f, 142.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1462.164f, -972.0999f, -20.40302f, -1332.72f, -833.9435f, 45.98875f, 227.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1178.163f, -1629.206f, 1.873874f, -1315.888f, -1365.294f, 25.02553f, 173.75f, 0, 1, 0))
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
		}
		else
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_111) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
			}
		}
		switch (iLocal_269)
		{
			case 0:
				fLocal_925 = 0f;
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_103, 1);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
				}
				uLocal_133 = GlobalFunc_6783(iLocal_112, 0, 0);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_133, "BLIP_280");
				TASK::TASK_LOOK_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				iLocal_295 = 0;
				iLocal_294 = 0;
				bLocal_290 = false;
				iLocal_291 = 0;
				iLocal_926 = 0;
				iLocal_927 = (Local_928.x - 1);
				iLocal_941 = 0;
				bLocal_944 = false;
				Local_928[0 /*3*/] = { -1266.288f, -1689.561f, 3.4691f };
				Local_928[1 /*3*/] = { -1345.057f, -1263.89f, 3.8977f };
				Local_928[2 /*3*/] = { -1564.547f, -928.2069f, 12.0173f };
				Local_928[3 /*3*/] = { Local_254 };
				PATHFIND::SET_PED_PATHS_IN_AREA(Vector(5.75302f, -1325.827f, -1329.113f) + Vector(2.5f, 44f, 13.25f), Vector(5.75302f, -1325.827f, -1329.113f) - Vector(2.5f, 44f, 13.25f), 0, 0);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-1361.568f, -1207.053f, 3.4492f, 10f, 0);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-1396.34f, -1059.049f, 3.2013f, 15f, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_103, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_103, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_112, 1);
				func_225(&uLocal_329, iLocal_268, sLocal_266);
				iLocal_269++;
				AUDIO::_0x149AEE66F0CB3A99(0.5f, 0.5f);
				GlobalFunc_575(500);
				MISC::ENABLE_DISPATCH_SERVICE(1, 0);
				MISC::ENABLE_DISPATCH_SERVICE(7, 0);
				MISC::ENABLE_DISPATCH_SERVICE(2, 0);
				MISC::ENABLE_DISPATCH_SERVICE(4, 0);
				MISC::ENABLE_DISPATCH_SERVICE(10, 0);
				MISC::ENABLE_DISPATCH_SERVICE(9, 0);
				MISC::ENABLE_DISPATCH_SERVICE(8, 0);
				STREAMING::REQUEST_IPL("smboat");
				break;
			
			case 1:
				if (PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_112, 0))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_103, iLocal_112, -1092.392f, -1708.092f, 3.2771f, 7f, 0, joaat("cruiser"), 786471, 3f, 4f);
					iLocal_269++;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_103, iLocal_112, -1, -1, 3f, 1, 0);
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_112, -1092.392f, -1708.092f, 3.2771f, 4f, 4f, 4f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_103);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_112, iLocal_268, sLocal_266, 15f, 786549);
					iLocal_269++;
				}
				break;
			
			case 3:
				fLocal_948 = func_268(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iLocal_268, sLocal_266, &uLocal_329);
				Local_945 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_268, fLocal_948, sLocal_266) };
				fLocal_925 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_945);
				if (bLocal_944)
				{
					if (fLocal_925 < 75f)
					{
						HUD::REMOVE_BLIP(&uLocal_131);
						bLocal_944 = false;
					}
					if (!iLocal_313)
					{
						GlobalFunc_164("FM2_RIDEBK", 7500, 1);
						iLocal_314 = MISC::GET_GAME_TIMER();
						iLocal_313 = 1;
					}
					if (fLocal_925 > 300f)
					{
						func_103("FM2_RACEFAIL");
					}
				}
				else
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_314) > 20000)
					{
						iLocal_313 = 0;
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_134))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_133))
						{
							HUD::REMOVE_BLIP(&uLocal_133);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_111, 1)) > 22500f)
						{
							func_103("FM2_BIKLOST");
						}
					}
					else if (!bLocal_290)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_133))
						{
							uLocal_133 = GlobalFunc_6783(iLocal_112, 0, 0);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_133, "BLIP_280");
						}
					}
					if (fLocal_925 > 150f)
					{
						HUD::REMOVE_BLIP(&uLocal_131);
						HUD::REMOVE_BLIP(&uLocal_133);
						HUD::CLEAR_GPS_MULTI_ROUTE();
						iLocal_927 = (Local_928.x - 1);
						bLocal_944 = true;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_103, 15f, 15f, 10f, 0, 1, 0) && !GlobalFunc_111())
				{
					if (MISC::GET_GAME_TIMER() - iLocal_926) > MISC::GET_RANDOM_INT_IN_RANGE(1200, 1400)
					{
						GlobalFunc_5653(iLocal_103, "BREATHING", "JIMMY_NORMAL", 24);
						iLocal_926 = MISC::GET_GAME_TIMER();
					}
				}
				if ((((((FIRE::IS_EXPLOSION_IN_AREA(2, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(3f, 3f, 3f)) || FIRE::IS_EXPLOSION_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(1, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(4, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(7, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(10, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(25, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(3f, 3f, 3f)))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_103, 2);
				}
				if (bLocal_290)
				{
					if (!iLocal_288)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 5, 8);
						iLocal_289 = 0;
						iLocal_288 = 1;
					}
					if (iLocal_288 && !iLocal_289)
					{
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
							iLocal_289 = 1;
						}
					}
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1811.906f, -1195.154f, 11.7672f, -1846.906f, -1237.279f, 19.5172f, 21.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1816.365f, -1234.039f, 7.017199f, -1859.197f, -1241.141f, 22.87097f, 57.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1856.623f, -1201.832f, 7.017204f, -1859.197f, -1241.141f, 22.87097f, 57.75f, 0, 1, 0))
					{
						if (iLocal_289)
						{
							HUD::REMOVE_BLIP(&uLocal_131);
							HUD::REMOVE_BLIP(&uLocal_133);
							RECORDING::_0x293220DA1B46CEBC(12f, 5f, 4);
							func_196(4);
						}
					}
				}
				else
				{
					func_267();
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_206) < 10000f)
					{
						if (!iLocal_288)
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 6, 8);
							iLocal_288 = 1;
						}
						else if (!iLocal_289 && CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
							iLocal_289 = 1;
						}
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_254, Global_18, 1, 1, 0))
						{
							HUD::REMOVE_BLIP(&uLocal_131);
							HUD::REMOVE_BLIP(&uLocal_133);
							iLocal_269++;
						}
					}
				}
				break;
			
			case 4:
				if (GlobalFunc_530(iLocal_111, 30f, 1, 1056964608, 0, 1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1823.195f, -1213.526f, 12.152f, -1, 0, 3);
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0);
					iLocal_269++;
				}
				break;
			
			case 5:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_269++;
				}
				break;
			
			case 6:
				if (SYSTEM::TIMERA() > 800)
				{
					RECORDING::_0x293220DA1B46CEBC(12f, 5f, 4);
					func_196(4);
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_103) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
		{
			if (func_250(&uLocal_943, &iLocal_941, &uLocal_942))
			{
				func_103("FM2_JSPOOK");
			}
			if (!iLocal_291)
			{
				if (iLocal_269 < 4)
				{
					fLocal_923 = func_268(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iLocal_268, sLocal_266, &uLocal_329);
					fLocal_924 = func_268(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), iLocal_268, sLocal_266, &uLocal_329);
					fVar1 = (fLocal_924 - fLocal_923);
					func_266(fVar1, fLocal_925, fLocal_923 > fLocal_924);
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_103, Local_254, Global_18, 0, 1, 0))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_112, 1, 0);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_103, 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_112, 1);
						if (!bLocal_290)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							iLocal_288 = 0;
							bLocal_290 = true;
						}
						iLocal_291 = 1;
					}
				}
				else if ((!bLocal_290 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_103, -1806.987f, -1191.762f, -42.98238f, -1854.44f, -1247.811f, 30.4819f, 90f, 0, 1, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 36f)
				{
					HUD::REMOVE_BLIP(&uLocal_131);
					HUD::REMOVE_BLIP(&uLocal_133);
					func_196(4);
				}
			}
			if (iLocal_291 || (iLocal_269 >= 4 && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112)))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_112, 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_103) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 2500f)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
						}
					}
					else
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_112, 1);
					}
				}
			}
		}
		if (iLocal_269 < 4 && iLocal_269 > 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_111))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_134))
					{
						HUD::CLEAR_PRINTS();
						if (iLocal_673)
						{
							func_143(&Local_667);
						}
						uLocal_134 = GlobalFunc_6783(iLocal_111, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						HUD::REMOVE_BLIP(&uLocal_131);
						iLocal_927 = (Local_928.x - 1);
						HUD::CLEAR_GPS_MULTI_ROUTE();
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_133))
					{
						HUD::REMOVE_BLIP(&uLocal_133);
					}
				}
				else
				{
					iLocal_673 = 1;
					if (bLocal_944)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_131))
						{
							fVar2 = GlobalFunc_253((fLocal_948 + 10000f), 20000f, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_268, sLocal_266));
							uLocal_131 = GlobalFunc_5104(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_268, fVar2, sLocal_266), 1);
						}
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_131))
						{
							HUD::CLEAR_PRINTS();
							uLocal_131 = GlobalFunc_5104(Local_254, 0);
						}
						func_265(&Local_928, &iLocal_927);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_134))
					{
						HUD::REMOVE_BLIP(&uLocal_134);
					}
				}
			}
		}
	}
	func_263();
}

void func_263()//Position - 0x25777
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_111) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
	{
		switch (iLocal_270)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0) && !GlobalFunc_1593())
				{
					if (!PAD::_IS_USING_KEYBOARD(0))
					{
						GlobalFunc_159("FM2_BIKE1", -1);
					}
					else
					{
						GlobalFunc_159("FM2_BIKE1_KM", -1);
					}
					iLocal_270++;
				}
				break;
			
			case 1:
				if (!MISC::IS_PC_VERSION())
				{
					if ((!GlobalFunc_74("FM2_BIKE1") && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0)) && !GlobalFunc_1593())
					{
						GlobalFunc_159("FM2_BIKE2", -1);
						iLocal_270++;
					}
				}
				else if (((!GlobalFunc_74("FM2_BIKE1") && !GlobalFunc_74("FM2_BIKE1_KM")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0)) && !GlobalFunc_1593())
				{
					GlobalFunc_159("FM2_BIKE2", -1);
					iLocal_270++;
				}
				break;
			
			case 2:
				if ((!GlobalFunc_74("FM2_BIKE2") && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0)) && !GlobalFunc_1593())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_111, joaat("bmx")) || VEHICLE::IS_VEHICLE_MODEL(iLocal_111, joaat("scorcher")))
					{
						GlobalFunc_159("FM2_BIKE3", -1);
					}
					iLocal_270++;
				}
				break;
			
			case 3:
				if (((!GlobalFunc_74("FM2_BIKE2") && !GlobalFunc_74("FM2_BIKE3")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0)) && !GlobalFunc_1593())
				{
					GlobalFunc_159("FM2_BIKE4", -1);
					iLocal_270++;
				}
				break;
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0) || GlobalFunc_1593())
		{
			if (MISC::IS_PC_VERSION())
			{
				if (GlobalFunc_74("FM2_BIKE1_KM"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if ((((GlobalFunc_74("FM2_BIKE1") || GlobalFunc_74("FM2_BIKE2")) || GlobalFunc_74("FM2_BIKE3")) || GlobalFunc_74("FM2_BIKE4")) || GlobalFunc_74("FM2_WHEELIE"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}


void func_265(int iParam0, int iParam1)//Position - 0x259A4
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		fVar6 = SYSTEM::VDIST2(Var3, *(iParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar6 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar6;
		}
		iVar0++;
	}
	if (SYSTEM::VDIST2(Var3, *(iParam0[iVar1 + 1 /*3*/])) < SYSTEM::VDIST2(*(iParam0[iVar1 /*3*/]), *(iParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*iParam1 != iVar1)
	{
		if (*iParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(iParam0[*iParam1 /*3*/])) > 25f)
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(iParam0[iVar0 /*3*/]));
				iVar0++;
			}
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(iParam0[(*iParam0 - 1) /*3*/]));
			HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
		}
		*iParam1 = iVar1;
	}
}

void func_266(float fParam0, float fParam1, bool bParam2)//Position - 0x25AAF
{
	float fVar0;
	
	fParam0 = MISC::ABSF(fParam0);
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0) && !PED::IS_PED_INJURED(iLocal_103))
	{
		switch (iLocal_294)
		{
			case 0:
				iLocal_306 = 0;
				iLocal_307 = 0;
				iLocal_308 = 0;
				iLocal_309 = 0;
				iLocal_310 = 0;
				iLocal_297 = 0;
				iLocal_298 = 0;
				iLocal_299 = 0;
				if (bParam2 && fParam0 > 15000f)
				{
					iLocal_309 = 1;
				}
				if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_PIER", 8, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_294++;
						}
					}
					else
					{
						iLocal_294++;
					}
				}
				break;
			
			case 1:
				if (SYSTEM::TIMERA() > 2000)
				{
					if ((!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111))
					{
						SYSTEM::SETTIMERA(0);
						HUD::CLEAR_PRINTS();
						func_143(&Local_665);
						iLocal_294++;
					}
				}
				break;
			
			case 2:
				if ((SYSTEM::TIMERA() > 1000 && !GlobalFunc_111()) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_RACEM", 8, 0, 0, 0))
						{
							iLocal_294++;
						}
					}
				}
				else if (SYSTEM::TIMERA() > 15000)
				{
					iLocal_294++;
				}
				break;
			
			case 3:
				if ((!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 35f)
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_TRIA", 8, 0, 0, 0))
					{
						iLocal_294++;
					}
				}
				break;
			
			case 4:
				if (bParam2)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Player in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				else
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Jimmy in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_306)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Michael take over line should fire", 0.01f, 0.7f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_307)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Jimmy take over line should fire", 0.01f, 0.72f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_309)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("bPlayerHasCheated", 0.01f, 0.74f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_310)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("bPlayerHasBumpedJimmy", 0.01f, 0.76f, 0f, 0, 0, 255, 255);
				}
				if (bParam2 != bLocal_848)
				{
					iLocal_849 = MISC::GET_GAME_TIMER();
					if (bParam2)
					{
						iLocal_306 = 1;
						iLocal_307 = 0;
						iLocal_296 = (MISC::GET_GAME_TIMER() - 10000);
					}
					else
					{
						iLocal_306 = 0;
						iLocal_307 = 1;
						iLocal_296 = (MISC::GET_GAME_TIMER() - 10000);
					}
				}
				if (iLocal_307)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_849) < 4000 && fVar0 < 30f) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_STUFF", 8, 0, 0, 0))
						{
							iLocal_307 = 0;
						}
					}
					else
					{
						iLocal_307 = 0;
					}
				}
				if (iLocal_306)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_849) < 4000 && fVar0 < 30f) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_PASS", 8, 0, 0, 0))
						{
							iLocal_306 = 0;
						}
					}
					else
					{
						iLocal_306 = 0;
					}
				}
				if (!iLocal_309 && !iLocal_310)
				{
					if (bParam2)
					{
						if (!GlobalFunc_111())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_850) > 10000)
							{
								if ((!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 35f)
								{
									if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_ROFF", 8, 0, 0, 0))
									{
										iLocal_850 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_850) < 5000 && (MISC::GET_GAME_TIMER() - iLocal_296) > 10000)
							{
								if ((!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 40f)
								{
									if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_FRONT", 8, 0, 0, 0))
									{
										iLocal_296 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_850) > 10000)
					{
						if (((!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 35f) && !bParam2)
						{
							if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_CLOSE", 8, 0, 0, 0))
							{
								iLocal_850 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_850) < 5000 && (MISC::GET_GAME_TIMER() - iLocal_296) > 10000)
					{
						if ((!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 40f)
						{
							if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_BEH", 8, 0, 0, 0))
							{
								iLocal_296 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if ((fVar0 < 5f && (MISC::GET_GAME_TIMER() - iLocal_297) > 1000) && (MISC::GET_GAME_TIMER() - iLocal_298) > 10000)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_111, iLocal_112))
						{
							iLocal_310 = 1;
						}
						iLocal_297 = MISC::GET_GAME_TIMER();
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_299) > 10000)
					{
						if (!iLocal_309)
						{
							if (fParam1 > 50f)
							{
								iLocal_309 = 1;
							}
						}
					}
				}
				else if (iLocal_309)
				{
					if ((fVar0 < 35f && !GlobalFunc_111()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_CHEAT", 8, 0, 0, 0))
						{
							iLocal_299 = MISC::GET_GAME_TIMER();
							iLocal_309 = 0;
						}
					}
				}
				else if (iLocal_310)
				{
					if ((fVar0 < 35f && !GlobalFunc_111()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_HIT", 8, 0, 0, 0))
						{
							iLocal_298 = MISC::GET_GAME_TIMER();
							iLocal_310 = 0;
						}
					}
				}
				if (!iLocal_308)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_103, -1545.975f, -937.1822f, 10.33204f, -1556.068f, -928.8806f, 16.72215f, 3.75f, 0, 1, 0) && fVar0 < 35f)
					{
						iLocal_294++;
						iLocal_296 = MISC::GET_GAME_TIMER();
						iLocal_308 = 1;
					}
				}
				break;
			
			case 5:
				if ((fVar0 < 35f && !GlobalFunc_111()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_JEND", 8, 0, 0, 0))
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
						iLocal_294++;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_296) > 5000)
				{
					iLocal_294 = 4;
				}
				break;
			
			case 6:
				if ((fVar0 < 35f && !GlobalFunc_111()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_ROFF", 8, 0, 0, 0))
					{
						iLocal_294 = 4;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_296) > 5000)
				{
					iLocal_294 = 4;
				}
				break;
		}
		bLocal_848 = bParam2;
	}
}

void func_267()//Position - 0x26236
{
	if (!PED::IS_PED_INJURED(iLocal_103) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_112, 0))
		{
			fLocal_923 = func_268(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iLocal_268, sLocal_266, &uLocal_329);
			fLocal_924 = func_268(ENTITY::GET_ENTITY_COORDS(iLocal_112, 1), iLocal_268, sLocal_266, &uLocal_329);
			if (!iLocal_921)
			{
				if (!iLocal_922)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_103, -1572.474f, -994.6667f, 2.017392f, -1515.634f, -926.8091f, 29.12276f, 100f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_103, -1382.942f, -1442.319f, 3.013994f, -1367.638f, -1471.879f, 8.426488f, 22.25f, 0, 1, 0))
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_112) || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_112, iLocal_268, sLocal_266, 15f, 262144);
						iLocal_922 = 1;
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_103, -1572.474f, -994.6667f, 2.017392f, -1515.634f, -926.8091f, 29.12276f, 100f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_103, -1382.942f, -1442.319f, 3.013994f, -1367.638f, -1471.879f, 8.426488f, 22.25f, 0, 1, 0))
				{
					if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_112) || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_112, iLocal_268, sLocal_266, 15f, 786549);
					iLocal_922 = 0;
				}
				if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1)) > 10000f && fLocal_924 > 10f) && (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_268, sLocal_266) && fLocal_924 < (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_268, sLocal_266) - 10f)))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_103) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_112)) && !CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_268, fLocal_924, sLocal_266), 4f))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_112, 0, 0);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_112, iLocal_268, sLocal_266, 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_112, fLocal_924);
						iLocal_921 = 1;
					}
				}
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1)) < 9025f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_112, 1, 0);
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_112, 786549);
					iLocal_921 = 0;
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, -1794415470) != 1)
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_103, iLocal_112, 20000, -1, 2f, 1, 0);
		}
	}
}

float func_268(struct<3> Param0, int iParam3, char* sParam4, var uParam5)//Position - 0x264D7
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	bool bVar28;
	float fVar29;
	float fVar30;
	
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam3, sParam4))
	{
		iVar2[0] = (*uParam5 - 1);
		iVar2[1] = (*uParam5 - 2);
		iVar2[2] = (*uParam5 - 3);
		iVar0 = 0;
		while (iVar0 < *uParam5)
		{
			fVar6 = MISC::ABSF((Param0.x - (*uParam5)[iVar0 /*3*/]));
			fVar7 = MISC::ABSF((Param0.f_1 - (uParam5[iVar0 /*3*/])->f_1));
			fVar8 = (fVar6 + fVar7);
			fVar9 = 0f;
			iVar10 = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 != iVar2[iVar1])
				{
					fVar11 = MISC::ABSF((Param0.x - (*uParam5)[iVar2[iVar1] /*3*/]));
					fVar12 = MISC::ABSF((Param0.f_1 - (uParam5[iVar2[iVar1] /*3*/])->f_1));
					fVar13 = (fVar11 + fVar12);
					if (fVar13 > fVar9)
					{
						iVar10 = iVar1;
						fVar9 = fVar13;
					}
				}
				iVar1++;
			}
			if (fVar8 < fVar9)
			{
				iVar2[iVar10] = iVar0;
			}
			iVar0++;
		}
		fVar14 = 999999f;
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iVar2[iVar0] > 0)
			{
				Var19 = { MISC::_0x21C235BC64831E5A(Param0, *(uParam5[iVar2[iVar0] /*3*/]), *(uParam5[(iVar2[iVar0] - 1) /*3*/]), 1) };
			}
			else
			{
				Var19 = { *(uParam5[0 /*3*/]) };
			}
			if (iVar2[iVar0] < (*uParam5 - 2))
			{
				Var22 = { MISC::_0x21C235BC64831E5A(Param0, *(uParam5[iVar2[iVar0] /*3*/]), *(uParam5[iVar2[iVar0] + 1 /*3*/]), 1) };
			}
			else
			{
				Var22 = { *(uParam5[(*uParam5 - 1) /*3*/]) };
			}
			bVar28 = false;
			if (SYSTEM::VDIST2(Param0, Var19) < SYSTEM::VDIST2(Param0, Var22))
			{
				Var25 = { Var19 };
			}
			else
			{
				bVar28 = true;
				Var25 = { Var22 };
			}
			if (SYSTEM::VDIST2(Param0, Var25) < fVar14)
			{
				if (bVar28)
				{
					iVar15 = iVar2[iVar0];
				}
				else
				{
					iVar15 = (iVar2[iVar0] - 1);
				}
				fVar14 = SYSTEM::VDIST2(Param0, Var25);
				Var16 = { Var25 };
			}
			iVar0++;
		}
		iVar15 = GlobalFunc_254(iVar15, 0, (*uParam5 - 2));
		fVar29 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam3, sParam4) / IntToFloat((*uParam5 - 1)));
		fVar30 = ((SYSTEM::VDIST(*(uParam5[iVar15 /*3*/]), Var16) / SYSTEM::VDIST(*(uParam5[iVar15 /*3*/]), *(uParam5[iVar15 + 1 /*3*/]))) * fVar29);
		return (fVar30 + (IntToFloat(iVar15) * fVar29));
	}
	return 0f;
}



void func_271()//Position - 0x2677C
{
	int iVar0;
	struct<6> Var1;
	var uVar7;
	var uVar8;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
	if (iLocal_269 != 1000)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f)
		{
			iLocal_273 = iLocal_269;
			iLocal_269 = 1000;
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
		}
	}
	if (iLocal_191 && iLocal_269 > 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_920) < 2000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		else
		{
			iLocal_191 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_103) && !PED::IS_PED_INJURED(iLocal_104))
	{
		switch (iLocal_269)
		{
			case 0:
				iLocal_673 = 0;
				PED::REMOVE_PED_FROM_GROUP(iLocal_103);
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_268, sLocal_266);
				STREAMING::REQUEST_ANIM_DICT("veh@bicycle@mountain_f@front@base");
				iLocal_269++;
				iLocal_275 = 0;
				iLocal_276 = 0;
				iLocal_274 = 4;
				iLocal_919 = 0;
				iLocal_920 = MISC::GET_GAME_TIMER();
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
				if (iLocal_265)
				{
					iLocal_269 = -1;
				}
				break;
			
			case -1:
				func_100();
				if ((!PED::IS_PED_INJURED(iLocal_104) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 0)) && PED::IS_PED_USING_SCENARIO(iLocal_104, "PROP_HUMAN_SEAT_CHAIR"))
				{
					iLocal_265 = 0;
					iLocal_269 = 1;
				}
				break;
			
			case 1:
				uLocal_131 = GlobalFunc_5104(Local_225, 0);
				if (bLocal_292)
				{
					GlobalFunc_527("FM2_BK2BIKE", 7500, 1);
					SYSTEM::SETTIMERA(0);
				}
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_103, 40000, 4, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), 40000, 4, 2);
				iLocal_916 = 0;
				if (GlobalFunc_111())
				{
					Var1 = { GlobalFunc_560() };
					if (!MISC::ARE_STRINGS_EQUAL("FAM2_HIRE1", &Var1))
					{
						GlobalFunc_5105();
					}
				}
				iLocal_918 = 0;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				}
				iLocal_269++;
				break;
			
			case 2:
				if (Global_96400)
				{
					while (Global_96400)
					{
						SYSTEM::WAIT(0);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_103, 1))
				{
					if (!GlobalFunc_111())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_113, 0))
						{
							TASK::TASK_LEAVE_VEHICLE(iLocal_103, iLocal_113, 0);
						}
						else
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_103, 0, 0);
						}
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_269++;
				}
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(iLocal_103) && SYSTEM::TIMERA() > 3000)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_103, PLAYER::PLAYER_PED_ID(), 60f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, 242628503) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_103);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_642);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_642);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_103, uLocal_642);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_642);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, 242628503) != 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_103))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_104))
					{
						if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(iLocal_104, 1)) > (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_104, 1)) + 0.3f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0)) || SYSTEM::TIMERA() > 6000)
						{
							TASK::CLEAR_PED_TASKS(iLocal_103);
							iLocal_269++;
						}
					}
				}
				break;
			
			case 4:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_103, 242628503) != 1 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_113, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_103, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1102.187f, -1697.891f, 3.3562f, 2f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_103, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_103, 1f);
					iLocal_269++;
				}
				break;
			
			case 5:
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_103, 1f);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						GlobalFunc_4956();
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_HIRE3", 8, 0, 0, 0))
						{
							HUD::CLEAR_PRINTS();
							TASK::TASK_LOOK_AT_ENTITY(iLocal_104, PLAYER::PLAYER_PED_ID(), 30000, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_104, 10000, 0, 2);
							HUD::REMOVE_BLIP(&uLocal_131);
							SYSTEM::SETTIMERA(0);
							iLocal_269++;
						}
					}
					else
					{
						iLocal_269++;
					}
				}
				break;
			
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[iLocal_274], 0) && !PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_114[iLocal_274], 0))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_114[iLocal_274], -1))
					{
						if (iLocal_918)
						{
							TASK::CLEAR_PED_TASKS(iLocal_103);
							iLocal_918 = 0;
						}
						if (iLocal_274 == 4)
						{
							iLocal_274 = 1;
						}
						else if (iLocal_274 == 1)
						{
							iLocal_274 = 4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_103, 1f);
				}
				STREAMING::REQUEST_ANIM_DICT("veh@bicycle@mountain_f@front@base");
				if (STREAMING::HAS_ANIM_DICT_LOADED("veh@bicycle@mountain_f@front@base"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[iLocal_274], 0))
					{
						if (!iLocal_918 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_103, -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 9.25f, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[iLocal_274], -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 9.25f, 0, 1, 0)))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar8);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_114[iLocal_274], -1, -1, 2f, 1, 0);
							TASK::TASK_STAND_STILL(0, 2000);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_114[iLocal_274], -1099.682f, -1694.073f, 3.2758f, 5f, 0, joaat("cruiser"), 786471, 2f, 3f);
							TASK::CLOSE_SEQUENCE_TASK(uVar8);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_103, uVar8);
							TASK::CLEAR_SEQUENCE_TASK(&uVar8);
							iLocal_918 = 1;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_112))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_114)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[iVar0], 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_103, iLocal_114[iVar0]))
							{
								iLocal_112 = iLocal_114[iVar0];
								PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_103, MISC::GET_HASH_KEY("MISS_FAMILY2_JIMMY_BICYCLE"));
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_112, 0);
								GlobalFunc_10834(0, 1, 20);
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
								{
									GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_JBIKE", 8, 0, 0, 0);
								}
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_103, 1);
								iLocal_275 = iVar0;
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_112, 0);
							}
						}
						iVar0++;
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_103, 0))
				{
					func_103("FM2_JSPOOK");
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_114)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114[iVar0], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_114[iVar0], 1))
							{
								iLocal_111 = iLocal_114[iVar0];
								GlobalFunc_10834(0, 1, 20);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_114[iVar0], 0);
								HUD::CLEAR_PRINTS();
								iLocal_276 = iVar0;
								if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), -1108.664f, -1691.623f, 3.3746f) > 5f && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_103, 0)) && iLocal_918)
								{
									iLocal_918 = 0;
								}
							}
						}
						iVar0++;
					}
					if (!iLocal_916)
					{
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
							{
								GlobalFunc_164("FM2_CHSEBIKE", 7500, 1);
								iLocal_916 = 1;
							}
						}
					}
				}
				else
				{
					if (!iLocal_919)
					{
						if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_HIRE4", 8, 0, 0, 0))
						{
							iLocal_919 = 1;
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
					{
						iLocal_111 = 0;
					}
				}
				if (((((!GlobalFunc_111() && ENTITY::DOES_ENTITY_EXIST(iLocal_112)) && ENTITY::DOES_ENTITY_EXIST(iLocal_111)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_103, iLocal_112))
				{
					iLocal_114[iLocal_276] = 0;
					iLocal_114[iLocal_275] = 0;
					RECORDING::_0x293220DA1B46CEBC(4f, 10f, 3);
					iLocal_269++;
				}
				break;
			
			case 7:
				if (SYSTEM::TIMERA() > 3000)
				{
					func_196(3);
				}
				break;
			
			case 1000:
				if (!HUD::DOES_BLIP_EXIST(uLocal_133))
				{
					if (!bLocal_286)
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_4956();
						GlobalFunc_527("FM2_JIMGB", 7500, 1);
					}
					uLocal_133 = GlobalFunc_6797(iLocal_103, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_131))
				{
					if (HUD::GET_BLIP_ALPHA(uLocal_131) != 0)
					{
						HUD::SET_BLIP_ALPHA(uLocal_131, 0);
					}
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 400f || (!PED::IS_PED_INJURED(iLocal_104) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_104, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 900f))
				{
					iLocal_269 = iLocal_273;
					if (HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						if (HUD::GET_BLIP_ALPHA(uLocal_131) != 255)
						{
							HUD::SET_BLIP_ALPHA(uLocal_131, 255);
						}
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_133))
					{
						HUD::REMOVE_BLIP(&uLocal_133);
					}
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 22500f)
				{
					func_103("FM2_JIMAB");
				}
				break;
		}
		if (!iLocal_917)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0) && !PED::IS_PED_INJURED(iLocal_103)) && PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_112, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_112, 0);
				iLocal_917 = 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_111) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, 0))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			AUDIO::START_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
		}
	}
}




























void func_299()//Position - 0x2813E
{
	bool bVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_137))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_198) < 2500f)
			{
				STREAMING::REQUEST_MODEL(joaat("prop_cs_office_chair"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_office_chair")))
				{
					iLocal_137 = OBJECT::CREATE_OBJECT(joaat("prop_cs_office_chair"), -809.4098f, 172.7913f, 75.7732f, 1, 1, 0);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_137, 0f, 0f, 0.3857f, 0.9226f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_office_chair"));
				}
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_198) > 5625f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_137))
		{
			OBJECT::DELETE_OBJECT(&iLocal_137);
		}
	}
	func_322();
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_225) < 1000f)
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	if (!PED::IS_PED_INJURED(iLocal_103))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_103, 0))
		{
			PED::SET_PED_RESET_FLAG(iLocal_103, 60, 1);
		}
		switch (iLocal_269)
		{
			case 0:
				iLocal_915 = 0;
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121))
				{
					GlobalFunc_10097(&iLocal_121, 0, Local_210, fLocal_213, 1, 1);
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_121, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_121, Local_210, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_121, fLocal_213);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
				{
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_121, 1);
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_103))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_103, sLocal_267, 0, 8, -1);
				}
				bLocal_285 = false;
				bLocal_286 = false;
				CAM::DO_SCREEN_FADE_IN(500);
				AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_01_CLASS_ROCK");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_103) && !ENTITY::IS_ENTITY_VISIBLE(iLocal_103))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_103, 1);
				}
				if (iLocal_265)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					iLocal_265 = 0;
				}
				iLocal_269++;
				break;
			
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_113))
				{
					func_304(&iLocal_120, 15, -812.4639f, 159.7855f, 71.0588f, 113.1515f, 1, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121))
				{
					GlobalFunc_10097(&iLocal_121, 0, Local_210, fLocal_213, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_120) && ENTITY::DOES_ENTITY_EXIST(iLocal_121))
				{
					iLocal_269++;
				}
				break;
			
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_103) && !PED::IS_PED_IN_GROUP(iLocal_103))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_103) > 13)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_121) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_121, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_103, iLocal_121, -1, 0, 1f, 1, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_113) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_103, iLocal_113, -1, 0, 1f, 1, 0);
						}
						TASK::REMOVE_WAYPOINT_RECORDING(sLocal_267);
					}
				}
				if (!iLocal_915)
				{
					if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.1541f, 177.6431f, 75.12778f, -819.7911f, 176.9991f, 70.62586f, 3.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -795.1501f, 176.5434f, 74.13519f, -795.5303f, 177.5501f, 71.83518f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -793.7302f, 181.551f, 74.13519f, -792.5385f, 182.0002f, 71.83518f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.4019f, 167.6163f, 79.10717f, -801.4336f, 165.4639f, 76.0724f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.8907f, 185.8457f, 71.43164f, -807.4306f, 187.2417f, 74.22646f, 1.75f, 0, 1, 0))
					{
						iLocal_915 = 1;
					}
				}
				bVar0 = false;
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_121, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_121, 0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_121))
				{
					bVar0 = true;
				}
				if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 15f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && iLocal_915)
				{
					if (!bVar0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_103);
					}
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_103, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_103, 0);
					iLocal_269++;
				}
				break;
			
			case 3:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_103))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_103) > 13)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_121) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_121, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_103, iLocal_121, -1, 0, 1f, 1, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_113) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_103, iLocal_113, -1, 0, 1f, 1, 0);
							PED::FORCE_PED_MOTION_STATE(iLocal_103, -668482597, 0, 0, 0);
						}
						TASK::REMOVE_WAYPOINT_RECORDING(sLocal_267);
					}
				}
				if (func_152(iLocal_103))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_113))
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_113 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_113, 1, 1);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_113, 1);
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
							GlobalFunc_503(iLocal_113, 209);
						}
					}
					else
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, 0))
						{
							bLocal_285 = true;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
						{
							if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								iLocal_113 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_113, 1, 1);
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_113, 1);
								GlobalFunc_503(iLocal_113, 209);
							}
						}
						else
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_113);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						bLocal_285 = false;
					}
					if (bLocal_285)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_131))
						{
							if (!GlobalFunc_100(HUD::GET_BLIP_COORDS(uLocal_131), Local_221))
							{
								HUD::REMOVE_BLIP(&uLocal_131);
							}
						}
						else
						{
							uLocal_131 = GlobalFunc_5104(Local_221, 1);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						if (!GlobalFunc_100(HUD::GET_BLIP_COORDS(uLocal_131), -1103.213f, -1695.151f, 3.3416f))
						{
							HUD::REMOVE_BLIP(&uLocal_131);
						}
					}
					else
					{
						uLocal_131 = GlobalFunc_5104(-1103.213f, -1695.151f, 3.3416f, 0);
					}
					if (bLocal_285)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_113, Local_221, 3f, 3f, 2f, 1, 1, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113))
						{
							HUD::REMOVE_BLIP(&uLocal_131);
							iLocal_269++;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1103.213f, -1695.151f, 3.3416f, 6f, 6f, 2f, 1, 1, 0))
					{
						func_196(2);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_133))
					{
						HUD::CLEAR_PRINTS();
						HUD::REMOVE_BLIP(&uLocal_133);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						HUD::REMOVE_BLIP(&uLocal_131);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_133))
					{
						HUD::CLEAR_PRINTS();
						if (GlobalFunc_111())
						{
							Local_842 = { GlobalFunc_514() };
							GlobalFunc_5105();
							iLocal_841 = 1;
						}
						GlobalFunc_4956();
						if (!bLocal_286)
						{
							GlobalFunc_527("FM2_JIMGB", 7500, 1);
						}
						uLocal_133 = GlobalFunc_6797(iLocal_103, 0, 145);
					}
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == 0)
				{
					if (!GlobalFunc_111() && !iLocal_293)
					{
						GlobalFunc_527("FM2_BIGGERV", 7500, 1);
						iLocal_293 = 1;
					}
				}
				else if (!GlobalFunc_111() && iLocal_293)
				{
					HUD::CLEAR_PRINTS();
					iLocal_293 = 0;
				}
				break;
			
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
				{
					if (GlobalFunc_530(iLocal_113, 4f, 1, 1056964608, 0, 1))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_113, 0))
						{
							if (GlobalFunc_116(0))
							{
								GlobalFunc_6685(1);
							}
							GlobalFunc_5105();
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_113, 10f, 5f, 0f), 20000, 4, 3);
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_HIRE1", 8, 0, 0, 0))
								{
									iLocal_841 = 0;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_103, 30000, 4, 2);
									TASK::OPEN_SEQUENCE_TASK(&uVar1);
									TASK::TASK_LEAVE_VEHICLE(0, iLocal_113, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1102.187f, -1697.891f, 3.3562f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar1);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_103, uVar1);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									PED::REMOVE_PED_FROM_GROUP(iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
									iLocal_269 = 8;
								}
							}
						}
						else
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 10f, 3);
							GlobalFunc_503(0, 209);
							func_196(2);
						}
					}
				}
				break;
			
			case 5:
				if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_HIRE1", 8, 0, 0, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_103, 20000, 4, 3);
					SYSTEM::SETTIMERA(0);
					iLocal_269 = 8;
				}
				break;
			
			case 8:
				RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
				GlobalFunc_503(0, 209);
				func_196(2);
				break;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, 0))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_142();
	}
}





int func_304(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x28BD2
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
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
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				GlobalFunc_7216(iParam0, Var0);
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


















void func_322()//Position - 0x2CDAA
{
	bool bVar0;
	struct<6> Var1;
	
	if ((((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_103, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 225f) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_103, 15f, 15f, 1f, 0, 1, 0)) && !GlobalFunc_490())
	{
		bVar0 = true;
	}
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_113, 0)) && !GlobalFunc_490())
	{
		bVar0 = true;
	}
	if (!iLocal_913)
	{
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_113, 0))
		{
			if (iLocal_911 == 0)
			{
				if (MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "RADIO_01_CLASS_ROCK"))
				{
					fLocal_260 = (fLocal_260 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_260 > 7f)
				{
					iLocal_913 = 1;
				}
			}
			else if (iLocal_911 == 4)
			{
				if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 8)
				{
					iLocal_911++;
					iLocal_913 = 1;
				}
			}
		}
	}
	else if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, 0))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_103, iLocal_113, 0)))
	{
		iLocal_913 = 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1)) < 15f)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_914)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_278) > 7500)
					{
						iLocal_914 = 1;
						bVar0 = false;
					}
				}
			}
		}
	}
	if (iLocal_914)
	{
		bVar0 = false;
		if (!GlobalFunc_111())
		{
			GlobalFunc_5653(iLocal_102, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_279 = MISC::GET_GAME_TIMER();
			iLocal_914 = 0;
		}
	}
	if (!iLocal_913)
	{
		if (iLocal_271 < 7 && !MISC::ARE_STRINGS_EQUAL(&Local_842, "FAM2_DRIV2"))
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_113, -1) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_113) > 30f)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_113))
					{
						GlobalFunc_5105();
						iLocal_841 = 0;
						iLocal_840 = 0;
						StringCopy(&Local_842, "", 24);
						iLocal_271 = 7;
					}
				}
				if ((Global_66846[5 /*9*/].f_1 - iLocal_912) > 3)
				{
					GlobalFunc_5105();
					iLocal_841 = 0;
					iLocal_840 = 0;
					StringCopy(&Local_842, "", 24);
					iLocal_271 = 7;
				}
			}
		}
		switch (iLocal_271)
		{
			case 0:
				if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_BEACH", 8, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(1f, 7f, 3);
					fLocal_260 = 0f;
					iLocal_912 = Global_66846[5 /*9*/].f_1;
					iLocal_271++;
					iLocal_841 = 0;
					iLocal_840 = 0;
					iLocal_272 = MISC::GET_GAME_TIMER();
					StringCopy(&Local_842, "", 24);
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_272) > 2000)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						uLocal_131 = GlobalFunc_5104(Local_225, 0);
					}
					else if (!GlobalFunc_111())
					{
						GlobalFunc_527("FM2_BK2BIKE", 7500, 1);
						iLocal_272 = MISC::GET_GAME_TIMER();
						iLocal_271++;
					}
				}
				break;
			
			case 2:
				if (((MISC::GET_GAME_TIMER() - iLocal_272) > 2000 && MISC::GET_PROFILE_SETTING(203) == 0) || (MISC::GET_GAME_TIMER() - iLocal_272) > 6000)
				{
					iLocal_271++;
				}
				break;
			
			case 3:
				if (GlobalFunc_Is_Mission_Retry())
				{
					func_199("FAM2_WALK", bVar0);
				}
				else
				{
					func_199("FAM2_WALK2", bVar0);
				}
				if ((!GlobalFunc_111() && !iLocal_841) && iLocal_840)
				{
					fLocal_260 = 0f;
					iLocal_271++;
					iLocal_841 = 0;
					iLocal_840 = 0;
					StringCopy(&Local_842, "", 24);
					iLocal_272 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_272) > 3000)
				{
					iLocal_271++;
				}
				break;
			
			case 5:
				if (GlobalFunc_Is_Mission_Retry())
				{
					func_199("FAM2_DRIVB", bVar0);
				}
				else
				{
					func_199("FAM2_DRIVE", bVar0);
				}
				if ((!GlobalFunc_111() && !iLocal_841) && iLocal_840)
				{
					iLocal_271++;
					iLocal_841 = 0;
					iLocal_840 = 0;
					StringCopy(&Local_842, "", 24);
					iLocal_272 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 6:
				break;
			
			case 7:
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_103, 0) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					bVar0 = false;
				}
				func_199("FAM2_DRIV2", bVar0);
				if ((!GlobalFunc_111() && !iLocal_841) && iLocal_840)
				{
					iLocal_271++;
					iLocal_841 = 0;
					iLocal_840 = 0;
					StringCopy(&Local_842, "", 24);
				}
				break;
		}
	}
	else
	{
		switch (iLocal_911)
		{
			case 0:
				if (GlobalFunc_111())
				{
					Local_842 = { GlobalFunc_514() };
					GlobalFunc_5105();
					iLocal_841 = 1;
				}
				iLocal_911++;
				break;
			
			case 1:
				if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_JAZZ", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_911++;
				}
				break;
			
			case 2:
				if (SYSTEM::TIMERB() > 1000)
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(8);
					SYSTEM::SETTIMERB(0);
					iLocal_911++;
				}
				break;
			
			case 3:
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_JAZZ2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_911++;
					}
				}
				break;
			
			case 4:
				iLocal_913 = 0;
				break;
			
			case 5:
				if ((GlobalFunc_111() && !GlobalFunc_5672("FAM2_JAZZ")) && !GlobalFunc_5672("FAM2_JAZZ2"))
				{
					Var1 = { GlobalFunc_514() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1) && !MISC::ARE_STRINGS_EQUAL("NULL", &Var1))
					{
						Local_842 = { Var1 };
					}
					GlobalFunc_5105();
					iLocal_841 = 1;
				}
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_JAZZ3", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_911++;
					}
				}
				break;
			
			case 6:
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_675, cLocal_312, "FAM2_JAZZ4", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_911++;
					}
				}
				break;
			
			case 7:
				iLocal_913 = 0;
				break;
			}
	}
}



void func_325()//Position - 0x2D438
{
	switch (iLocal_269)
	{
		case 0:
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 0);
			iLocal_1415 = 0;
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("family_2_int", 8);
				iLocal_269 = -1;
			}
			else
			{
				iLocal_269++;
			}
			break;
		
		case -1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_329("Michael", GlobalFunc_4917(0), 32);
				iLocal_269 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (GlobalFunc_550("family_2_int"))
				{
					GlobalFunc_8316(1, 1, 1, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_103))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_103, "Jimmy", 2, GlobalFunc_4946(14), 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_103))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_103, "Jimmy", 0, 0, 0);
					}
					func_193(1);
					GlobalFunc_2885();
					HUD::CLEAR_HELP(1);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					STREAMING::END_SRL();
					iLocal_269++;
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_269 = 0;
				}
			}
			break;
		
		case 2:
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			MISC::SET_WIND(0.1f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				OBJECT::DELETE_OBJECT(&iLocal_138);
				ENTITY::REMOVE_MODEL_HIDE(Local_630, 1f, joaat("v_ilev_mm_doorm_l"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				OBJECT::DELETE_OBJECT(&iLocal_139);
				ENTITY::REMOVE_MODEL_HIDE(Local_633, 1f, joaat("v_ilev_mm_doorm_r"), 0);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
			}
			STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_138, -1000f, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_138);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_139, -1000f, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_139);
			}
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f);
			GlobalFunc_9258(&Local_90, 0, 0, 2000, 1, 0, 0, 1);
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			iLocal_269++;
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_103))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy", 0)))
				{
					iLocal_103 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_103, Local_202, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_103, fLocal_205);
					PED::FORCE_PED_MOTION_STATE(iLocal_103, -668482597, 1, 1, 0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_103, sLocal_267, 0, 8, -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					func_96(iLocal_103);
				}
			}
			if (!iLocal_1415)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					SYSTEM::SETTIMERA(0);
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_198, 30f, 2))
					{
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 5000)
						{
							CAM::DO_SCREEN_FADE_OUT(0);
							SYSTEM::WAIT(0);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_1415 = 1;
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121))
			{
				if (GlobalFunc_5886(0, 1, Local_210, 100f))
				{
					GlobalFunc_6791(0, 1);
				}
				PAD::DISABLE_CONTROL_ACTION(0, 18, 1);
				GlobalFunc_10097(&iLocal_121, 0, Local_210, fLocal_213, 1, 1);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				GlobalFunc_8316(0, 1, 1, 0);
				GlobalFunc_657();
				func_196(1);
				HUD::REQUEST_ADDITIONAL_TEXT("FAMILY2", 0);
				HUD::REQUEST_ADDITIONAL_TEXT(cLocal_312, 6);
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					func_96(iLocal_103);
				}
				RECORDING::_0x81CBAE94390F9F89();
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_142))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_142);
				}
				uLocal_1416 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1416))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1416, 9);
				}
				if (CAM::IS_SCREEN_FADED_OUT() || CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (!PED::IS_PED_INJURED(iLocal_103))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_103, Local_202, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_103, fLocal_205);
						PED::FORCE_PED_MOTION_STATE(iLocal_103, -668482597, 1, 1, 0);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_103, sLocal_267, 3, 0, -1);
					}
					SYSTEM::WAIT(0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
				GlobalFunc_76(24);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 1);
				CAM::SET_WIDESCREEN_BORDERS(0, 0);
				CAM::DO_SCREEN_FADE_IN(500);
			}
			break;
	}
}




void func_329(char* sParam0, int iParam1, int iParam2)//Position - 0x2DA5B
{
	int iVar0;
	struct<14> Var1;
	var uVar15;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar46;
	
	uVar15 = 9;
	uVar30 = { GlobalFunc_7617(iParam1, iParam2) };
	iVar46 = 0;
	if (uVar30[2] == -99 && uVar30[0] == -99)
	{
		iVar46 = 1;
	}
	iVar28 = 0;
	while (iVar28 <= 14)
	{
		iVar0 = iVar28;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar15 = { GlobalFunc_7616(iParam1, uVar30[iVar28]) };
				iVar29 = 0;
				while (iVar29 <= 8)
				{
					iVar25 = iVar29;
					iVar26 = GlobalFunc_40(iVar25);
					iVar27 = GlobalFunc_29(iVar26);
					if (uVar15[iVar29] != iVar27)
					{
						Var1 = { GlobalFunc_10841(iParam1, 14, uVar15[iVar29]) };
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar29++;
				}
			}
			else
			{
				Var1 = { GlobalFunc_10841(iParam1, iVar0, uVar30[iVar28]) };
				if (((iVar28 == 2 || iVar28 == 0) && iVar46) || uVar30[iVar28] == -99)
				{
					Var1.f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/].f_13[iVar28];
					Var1.f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/][iVar28];
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar28++;
	}
}







int func_336(bool bParam0, bool bParam1)//Position - 0x306C0
{
	if (bParam0)
	{
		func_418(PLAYER::PLAYER_PED_ID(), 51);
		if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) || !bParam1)
		{
			func_337(PLAYER::PLAYER_PED_ID(), 12, 51, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			return 1;
		}
	}
	else
	{
		func_418(PLAYER::PLAYER_PED_ID(), 32);
		if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) || !bParam1)
		{
			func_337(PLAYER::PLAYER_PED_ID(), 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			return 1;
		}
	}
	return 0;
}

int func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3074F
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
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
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
		Global_68106[1 /*14*/] = { GlobalFunc_10841(iVar10, iParam1, iParam2) };
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
				Global_68106[1 /*14*/] = { GlobalFunc_10841(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10841(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_347(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_337(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = func_347(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_337(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10841(iVar10, iVar0, func_346(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_345(iParam0, iVar10, &iVar4, 1))
							{
								func_337(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_337(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10841(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_337(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10841(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_337(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10841(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_337(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10841(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_337(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10841(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_337(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10841(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_347(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_337(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_347(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_337(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_347(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_337(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11044(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_345(iParam0, iVar10, &iVar4, 0))
		{
			func_337(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_338(iParam0, iVar10, &iVar4))
		{
			func_337(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_338(var uParam0, int iParam1, int iParam2)//Position - 0x30F3C
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_339(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0, int iParam1, int iParam2)//Position - 0x30FC8
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
	
	if (PED::IS_PED_INJURED(uParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10841(iVar0, iParam1, iParam2) };
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
				if (!func_339(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_339(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10841(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_339(iParam0, 14, iVar4))
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
						Global_68106[2 /*14*/] = { GlobalFunc_10841(iVar0, iVar2, iVar1) };
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
			if (!func_339(iParam0, 14, uVar32[iVar31]))
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






int func_345(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x31A46
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_339(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_346(int iParam0, int iParam1, int iParam2)//Position - 0x31ADC
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
				if (func_339(iParam0, iParam1, iVar0))
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
				if (func_339(iParam0, iParam1, iVar1))
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

int func_347(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x31B7D
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
										iVar0 = GlobalFunc_11045(iParam1, 3, 135, 150);
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
										iVar0 = GlobalFunc_11045(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_8022(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11045(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11045(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11045(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11045(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_8022(uParam0, 3, 176, 191) && !GlobalFunc_8022(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11045(iParam1, 3, 176, 191);
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
								iVar5 = GlobalFunc_11163(iParam1, iVar4, iVar5, 0);
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
									iVar0 = GlobalFunc_11163(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11163(iParam1, iParam3, iVar8, 1);
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
								iVar0 = GlobalFunc_11163(iParam1, -99, iVar9, 0);
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































































int func_410(int iParam0)//Position - 0x36894
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &Var4);
	fVar7 = (-Var1.f_2 + Var4.f_2);
	if (fVar7 < 2.6f)
	{
		return 1;
	}
	return 0;
}








void func_418(int iParam0, int iParam1)//Position - 0x36C8F
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Var1 = { GlobalFunc_7617(iVar0, iParam1) };
	func_419(iParam0, iVar0, &Var1);
}

void func_419(int iParam0, int iParam1, var uParam2)//Position - 0x36CB6
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Var1 = { GlobalFunc_10841(iParam1, GlobalFunc_33(iVar0), (*uParam2)[GlobalFunc_33(iVar0)]) };
		if (Var1.f_3 != -1 && Var1.f_4 != -1)
		{
			PED::SET_PED_PRELOAD_VARIATION_DATA(uParam0, iVar0, Var1.f_3, Var1.f_4);
		}
		iVar0++;
	}
	uVar19 = { GlobalFunc_7616(iParam1, (*uParam2)[13]) };
	iVar15 = 0;
	while (iVar15 <= 8)
	{
		iVar16 = iVar15;
		iVar17 = GlobalFunc_40(iVar16);
		iVar18 = GlobalFunc_29(iVar17);
		if (uVar19[iVar15] != iVar18)
		{
			Var1 = { GlobalFunc_10841(iParam1, 14, uVar19[iVar15]) };
			if (Var1.f_3 != -1 && Var1.f_3 != 255)
			{
				PED::SET_PED_PRELOAD_PROP_DATA(iParam0, iVar17, Var1.f_3, Var1.f_4);
			}
		}
		iVar15++;
	}
}


int func_421(struct<3> Param0, float fParam3)//Position - 0x36DB4
{
	switch (iLocal_874)
	{
		case 0:
			if (GlobalFunc_7047(&iLocal_103, 14, -808.0422f, 168.5755f, 75.7504f, 244.0649f, 1))
			{
				iLocal_874++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_103))
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_103, 1, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_103, 3, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_103, 4, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_103, 6, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_103, 10, 0, 0);
				iLocal_874++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_103))
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_103))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_103, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_103, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_103, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_103, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_103, 10, 0, 0, 0);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_103);
					ENTITY::SET_ENTITY_COORDS(iLocal_103, Param0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_103, fParam3);
					func_96(iLocal_103);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_103);
					iLocal_874 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_422()//Position - 0x36EC3
{
	if (!iLocal_907)
	{
		fLocal_898 = 0f;
		iLocal_899 = 0;
		iLocal_900 = 0;
		iLocal_901 = 0;
		iLocal_902 = 0;
		iLocal_903 = 0;
		iLocal_904 = 0;
		iLocal_905 = 0;
		iLocal_906 = 0;
		iLocal_907 = 1;
	}
	switch (iLocal_69)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_113) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
			{
				if (fLocal_898 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_113)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_113)))
				{
					GlobalFunc_565(208, 1, 0);
				}
				fLocal_898 = (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_113)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_113));
			}
			else
			{
				fLocal_898 = 0f;
			}
			break;
		
		case 2:
			if (!iLocal_902)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_111) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_111, joaat("tribike")))
					{
						GlobalFunc_565(214, 0, 1);
					}
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_111, joaat("bmx")))
					{
						GlobalFunc_565(214, 1, 1);
					}
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_111, joaat("cruiser")))
					{
						GlobalFunc_565(214, 2, 1);
					}
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_111, joaat("scorcher")))
					{
						GlobalFunc_565(214, 3, 1);
					}
					iLocal_902 = 1;
				}
			}
			break;
		
		case 3:
			if (!iLocal_900)
			{
				GlobalFunc_574(211, 0);
				iLocal_900 = 1;
			}
			else if (!iLocal_901)
			{
				if (iLocal_295)
				{
					GlobalFunc_571(0, -1);
					iLocal_901 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
			{
				if (!iLocal_899)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111))
					{
						iLocal_899 = 1;
					}
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111))
				{
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_565(206, 1, 0);
					}
					iLocal_899 = 0;
				}
			}
			break;
		
		case 5:
			if (!iLocal_903)
			{
				GlobalFunc_574(207, 0);
				iLocal_903 = 1;
			}
			else if (!iLocal_904)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2022.824f, -1045.762f, 1.449759f, -2018.304f, -1032.236f, 4.478201f, 8f, 0, 1, 0))
				{
					GlobalFunc_571(0, -1);
					iLocal_904 = 1;
				}
			}
			break;
		
		case 7:
			if (!iLocal_905)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_128[0]))
				{
					GlobalFunc_574(213, 0);
					iLocal_905 = 1;
				}
				break;
			}
			if (!iLocal_906)
			{
				if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_125[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_122[0])) || PED::IS_PED_INJURED(iLocal_125[0]))
				{
					GlobalFunc_571(0, -1);
					iLocal_906 = 1;
				}
			}
	}
}



void func_425()//Position - 0x3725B
{
	if (bLocal_264)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
			{
				if (!GlobalFunc_63(29))
				{
					GlobalFunc_159("AM_H_NOSTAM", -1);
					GlobalFunc_651(29);
				}
			}
		}
	}
}



void func_428()//Position - 0x3731C
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	func_435();
	if (!GlobalFunc_188())
	{
		if (iLocal_69 >= 4)
		{
			if (!STREAMING::IS_IPL_ACTIVE("smboat"))
			{
				STREAMING::REQUEST_IPL("smBoat");
			}
		}
		else if (STREAMING::IS_IPL_ACTIVE("smboat"))
		{
			STREAMING::REMOVE_IPL("smBoat");
		}
	}
	switch (iLocal_69)
	{
		case 0:
			if (iLocal_283)
			{
				func_176(-803.2507f, 172.9356f, 71.8447f, 108.735f, 1);
				while (!func_336(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				TASK::REQUEST_WAYPOINT_RECORDING(sLocal_267);
				while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_267))
				{
					SYSTEM::WAIT(0);
				}
				while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(-803.2507f, 172.9356f, 71.8447f)))
				{
					SYSTEM::WAIT(0);
				}
				func_190(&iLocal_103, 14, -809.6773f, 171.191f, 75.7409f, 138.7408f);
			}
			break;
		
		case 1:
			iLocal_313 = 0;
			iLocal_314 = 0;
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			if (!PED::IS_PED_INJURED(iLocal_103))
			{
				func_96(iLocal_103);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Mansion_1");
			if (iLocal_283)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_113))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_113);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_120))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_120);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_121);
				}
				while (!GlobalFunc_10097(&iLocal_121, 0, Local_210, fLocal_213, 1, 1))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
				{
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_113, 1);
				}
				while (!func_336(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				TASK::REQUEST_WAYPOINT_RECORDING(sLocal_267);
				while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_267))
				{
					SYSTEM::WAIT(0);
				}
				func_176(Local_198, fLocal_201, 1);
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_103);
				}
				func_190(&iLocal_103, 14, Local_202, fLocal_205);
				bVar0 = false;
				while (!bVar0)
				{
					if (!PED::IS_PED_INJURED(iLocal_103))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_103))
						{
							bVar0 = true;
						}
					}
					SYSTEM::WAIT(0);
				}
				if (!GlobalFunc_188())
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_113);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_113, 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_113, -0.0062f, -0.0656f, 0.9462f, 0.3169f);
			}
			SYSTEM::SETTIMERA(0);
			break;
		
		case 2:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_113) && iLocal_113 != iLocal_121) || !ENTITY::DOES_ENTITY_EXIST(iLocal_113))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_121);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_113) && iLocal_113 != iLocal_120) || !ENTITY::DOES_ENTITY_EXIST(iLocal_113))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_120);
				}
			}
			if (iLocal_283)
			{
				while (!func_336(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_113))
				{
					func_434(2, Local_221, fLocal_224);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_113))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_113, Local_221, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_113, fLocal_224);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_113);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_113, -1);
					func_433(&iLocal_103, 14, &iLocal_113, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_113))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_113, -1072.8f, -1703.923f, 4.138f, 0, 0, 1);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_113, 0.0123f, -0.0057f, 0.9998f, -0.0169f);
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1081.797f, -1699.492f, 3.5179f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 91.1321f);
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_103, -1085.249f, -1703.189f, 3.4167f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_103, 327.7033f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_111);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_112))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_112);
				}
				while (!func_137(0))
				{
					SYSTEM::WAIT(0);
				}
				MISC::CLEAR_AREA(Local_225, 10f, 1, 0, 0, 0);
				func_176(-1081.797f, -1699.492f, 3.5179f, 91.1321f, 1);
				bLocal_292 = true;
				iLocal_191 = 1;
			}
			break;
		
		case 3:
			iLocal_270 = 0;
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			iLocal_313 = 0;
			iLocal_314 = 0;
			if (iLocal_283)
			{
				while (!func_137(1))
				{
					SYSTEM::WAIT(0);
				}
				func_176(Local_228, fLocal_231, 1);
				while (!func_336(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_434(0, -1103.998f, -1691.691f, 3.3147f, 255.7254f);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_111, -1);
				func_434(1, -1100.827f, -1695.758f, 3.3089f, 245.1632f);
				func_433(&iLocal_103, 14, &iLocal_112, -1);
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_268, sLocal_266);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_266);
				STREAMING::REQUEST_ANIM_DICT("veh@bicycle@mountain_f@front@base");
				while ((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_268, sLocal_266) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_266)) || !STREAMING::HAS_ANIM_DICT_LOADED("veh@bicycle@mountain_f@front@base"))
				{
					SYSTEM::WAIT(0);
				}
				bVar1 = false;
				if (!PED::IS_PED_INJURED(iLocal_103))
				{
					while (!bVar1)
					{
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_103))
						{
							if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_103))
							{
								PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_103, MISC::GET_HASH_KEY("MISS_FAMILY2_JIMMY_BICYCLE"));
								bVar1 = true;
							}
						}
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			iLocal_840 = 0;
			iLocal_841 = 0;
			StringCopy(&Local_842, "", 24);
			break;
		
		case 4:
			if (iLocal_283)
			{
				while (!func_336(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_176(Local_235, fLocal_239, 1);
				func_434(1, Local_235, fLocal_239);
				func_434(0, Local_232, fLocal_238);
				func_190(&iLocal_103, 14, -1859.072f, -1217.333f, 12.0174f, 24.6128f);
			}
			break;
		
		case 5:
			func_434(3, Local_214, fLocal_259);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_110, true);
			}
			iLocal_278 = -1;
			if (iLocal_283)
			{
				while (!func_336(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_176(Local_206, fLocal_209, 1);
				func_190(&iLocal_103, 14, -1859.072f, -1217.333f, 12.0174f, 24.6128f);
				func_434(1, Local_235, fLocal_239);
				func_434(0, Local_232, fLocal_238);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_111, -1867.517f, -1209.121f, 12.5769f, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_111, 0.0501f, -0.0721f, 0.4606f, 0.8833f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_112, -1858.631f, -1214.661f, 12.5761f, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_112, 0.0568f, -0.0661f, 0.6354f, 0.7672f);
				}
			}
			break;
		
		case 6:
			while (!func_336(1, 1))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_283)
			{
				func_176(-2059.935f, -1026.109f, 9.7454f, 71.3421f, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
			{
				func_434(3, Local_214, fLocal_259);
			}
			while (!func_242(0, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_242(1, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_257())
			{
				SYSTEM::WAIT(0);
			}
			func_190(&iLocal_102, 15, -2059.935f, -1026.109f, 9.7454f, 71.3421f);
			func_190(&iLocal_103, 14, Local_192, fLocal_258);
			break;
		
		case 7:
			iLocal_269 = 0;
			uLocal_663 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(-10.77281f, -1509.857f, -919.2169f) + Vector(13.25f, 231f, 232f), Vector(-10.77281f, -1509.857f, -919.2169f) - Vector(13.25f, 231f, 232f), 0, 1, 1, 1);
			uLocal_664 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(-12.18635f, -888.8414f, -2055.108f) + Vector(14.5f, 250f, 246f), Vector(-12.18635f, -888.8414f, -2055.108f) + Vector(14.5f, 250f, 246f), 0, 1, 0, 1);
			func_432();
			if (iLocal_283)
			{
				func_235(1, 0f);
				while (!func_336(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_176(Local_214, fLocal_259, 1);
				func_434(3, Local_217, fLocal_220);
				func_433(&iLocal_102, 15, &iLocal_110, 0);
				bVar2 = false;
				while (!bVar2)
				{
					if (!PED::IS_PED_INJURED(iLocal_102))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_102))
						{
							bVar2 = true;
						}
					}
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_110, 17f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_CHASE_RT");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_110, 1);
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, -1);
				}
				if (!PED::IS_PED_INJURED(iLocal_102))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_102, iLocal_110, 0);
					}
				}
			}
			func_190(&iLocal_103, 14, -1611.595f, -1121.009f, 1.544f, 42.8275f);
			break;
		
		case 8:
			iLocal_269 = 0;
			func_431(0);
			SYSTEM::SETTIMERA(0);
			if (iLocal_283)
			{
				while (!func_336(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_176(Local_325, fLocal_328, 1);
				func_434(3, Local_325, fLocal_328);
				func_433(&iLocal_102, 15, &iLocal_110, 0);
				bVar3 = false;
				while (!bVar3)
				{
					if (!PED::IS_PED_INJURED(iLocal_102))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_102))
						{
							bVar3 = true;
						}
					}
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, -1);
					}
					if (!PED::IS_PED_INJURED(iLocal_102))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_102, iLocal_110, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_102, iLocal_110, 0);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_110, 10f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_110, 10f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_110, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_103))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_103, 1);
			}
			break;
		
		case 9:
			if (iLocal_283)
			{
				while (!func_336(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1623.554f, -1132.136f, 0.8638f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 107.3556f);
				if (!GlobalFunc_188())
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1624.927f, -1136.749f, 1.045f, 200f, 2);
					SYSTEM::SETTIMERA(0);
					iVar4 = MISC::GET_GAME_TIMER();
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iVar4) < 10000)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				func_190(&iLocal_102, 15, Local_192 + Vector(0f, 1f, 0f), 0f);
				func_190(&iLocal_103, 14, Local_192, fLocal_258);
				func_434(3, Local_214, fLocal_259);
			}
			break;
		
		case 10:
			break;
	}
	if (iLocal_69 == 7)
	{
	}
	if (GlobalFunc_188())
	{
		switch (iLocal_69)
		{
			case 1:
			case 2:
			case 4:
			case 6:
				GlobalFunc_4967(0, -1, 1);
				break;
			
			case 5:
				GlobalFunc_4967(0, -1, 1);
				break;
			
			case 7:
				GlobalFunc_4967(iLocal_110, -1, 1);
				break;
			
			case 8:
			case 9:
				GlobalFunc_4967(iLocal_110, -1, 1);
				break;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
	{
		if (!PED::IS_PED_INJURED(iLocal_103))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_675[1 /*10*/]))
			{
				GlobalFunc_173(&Local_675, 1, iLocal_103, "JIMMY", 0, 1);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_675[1 /*10*/]))
	{
		GlobalFunc_200(&Local_675, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_102))
	{
		if (!PED::IS_PED_INJURED(iLocal_102))
		{
			if (Local_675[2 /*10*/] == 0)
			{
				GlobalFunc_173(&Local_675, 2, iLocal_102, "TRACEY", 0, 1);
			}
		}
	}
	else if (Local_675[2 /*10*/] != 0)
	{
		GlobalFunc_200(&Local_675, 2);
	}
	if (iLocal_69 != 9)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	HUD::CLEAR_PRINTS();
	if (iLocal_283 && iLocal_69 != 7)
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	}
	iLocal_282 = 1;
	iLocal_283 = 0;
}



void func_431(bool bParam0)//Position - 0x38054
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_881)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_881[iVar0 /*8*/].f_1))
		{
			if (!bParam0)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_881[iVar0 /*8*/].f_1));
			}
			else
			{
				PED::DELETE_PED(&(Local_881[iVar0 /*8*/].f_1));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_881[iVar0 /*8*/]))
		{
			if (!bParam0)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_881[iVar0 /*8*/]));
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(Local_881[iVar0 /*8*/]));
			}
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(iVar0 + 1, "fam2amb");
		iVar0++;
	}
}

void func_432()//Position - 0x380DC
{
	Local_881[0 /*8*/].f_4 = { -857.0314f, -1415.792f, 1.034999f };
	Local_881[0 /*8*/].f_2 = 0;
	Local_881[1 /*8*/].f_4 = { -1037.352f, -1272.711f, -6.625715f };
	Local_881[1 /*8*/].f_2 = 0;
}

void func_433(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38128
{
	struct<3> Var0;
	float fVar3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam2, 1) };
			fVar3 = ENTITY::GET_ENTITY_HEADING(*iParam2);
			if (iParam1 == 15)
			{
				while (!func_95(Var0, fVar3))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				while (!func_421(Var0, fVar3))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(*iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, 0))
			{
				PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam2, iParam3);
			}
		}
	}
}

void func_434(int iParam0, struct<3> Param1, float fParam4)//Position - 0x381C7
{
	switch (iParam0)
	{
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_113))
			{
				while (!GlobalFunc_10097(&iLocal_113, 0, Param1, fParam4, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_113, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_113, 1, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_113, 1);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_113, "Mike's Car");
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_113, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_113, Param1, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_113, fParam4);
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
			{
				STREAMING::REQUEST_MODEL(joaat("seashark"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("seashark")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_110 = VEHICLE::CREATE_VEHICLE(joaat("seashark"), Param1, fParam4, 1, 1);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_110, "Mike's Seashark");
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 0, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_110, 1);
				AUDIO::SET_VEH_RADIO_STATION(iLocal_110, "OFF");
				GlobalFunc_503(iLocal_110, 205);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_110, Param1, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_110, fParam4);
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_112))
			{
				STREAMING::REQUEST_MODEL(joaat("cruiser"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("cruiser")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_112 = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), Param1, fParam4, 1, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_112, 0);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_112, "Jimmy's Bike");
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_112, 0);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_112, Param1, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_112, fParam4);
			}
			break;
		
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
			{
				STREAMING::REQUEST_MODEL(joaat("cruiser"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("cruiser")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_111 = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), Param1, fParam4, 1, 1);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_111, "Mike's Bike");
				ENTITY::SET_ENTITY_PROOFS(iLocal_111, 0, 1, 0, 0, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_111, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_111, 1);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_111, Param1, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_111, fParam4);
			}
			break;
	}
}

void func_435()//Position - 0x383E6
{
	int iVar0;
	
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	if (iLocal_69 != 7)
	{
		STREAMING::REMOVE_ANIM_DICT("missfam2_tracy_jetski");
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.6f);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_663, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_664, 0);
	if ((iLocal_69 != 5 && iLocal_69 != 8) || iLocal_283)
	{
		HUD::CLEAR_PRINTS();
	}
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(7, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	func_482();
	func_481();
	func_479();
	if (iLocal_69 < 6 && ENTITY::DOES_ENTITY_EXIST(iLocal_102))
	{
		PED::DELETE_PED(&iLocal_102);
	}
	if (iLocal_69 == 3 || iLocal_69 == 7)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_137))
	{
		OBJECT::DELETE_OBJECT(&iLocal_137);
	}
	if (!PED::IS_PED_INJURED(iLocal_103))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_103, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_103);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_102))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_102, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_102);
		}
	}
	if (iLocal_283)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_128[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_128[iVar0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_125[iVar0]))
			{
				PED::DELETE_PED(&(iLocal_125[iVar0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_122[iVar0]));
			}
			iVar0++;
		}
		func_431(1);
		AUDIO::_0x149AEE66F0CB3A99(0f, 0f);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DIVE_INTO_WATER"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DIVE_INTO_WATER");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_CHASE"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_CHASE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		GlobalFunc_4956();
		func_101();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(0);
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_112))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_112);
			}
		}
		if (iLocal_69 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_111);
			}
		}
		if (iLocal_69 != 0)
		{
			STREAMING::END_SRL();
		}
		STREAMING::REMOVE_ANIM_DICT("missfam2ig_3");
		iLocal_907 = 0;
	}
	if (iLocal_69 > 5)
	{
		bLocal_264 = false;
	}
	if (iLocal_69 != 3)
	{
		STREAMING::REMOVE_ANIM_DICT("veh@bicycle@mountain_f@front@base");
	}
	while (!func_193(iLocal_69))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_103))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_103, 185, 1);
	}
	if (iLocal_69 == 2)
	{
		GlobalFunc_Checkpoint2(1, "stage_hire_bike", 0, 0, 0, 1);
	}
	else if (iLocal_69 == 3)
	{
		GlobalFunc_Checkpoint2(1, "stage_hire_bike", 0, 0, 0, 0);
	}
	else if ((iLocal_69 == 4 || iLocal_69 == 5) || iLocal_69 == 6)
	{
		GlobalFunc_Checkpoint2(2, "stage_go_to_yacht", 0, 0, 0, 1);
	}
	else if (iLocal_69 == 7)
	{
		GlobalFunc_Checkpoint2(3, "stage_speedophile_chase", 0, 0, 0, 1);
	}
	else if (iLocal_69 == 8)
	{
		GlobalFunc_Checkpoint2(4, "stage_drive_to_beach", 1, 0, 0, 1);
		if (MISC::IS_BIT_SET(iLocal_86, 1))
		{
			GlobalFunc_Checkpoint2(5, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (MISC::IS_BIT_SET(iLocal_86, 2))
		{
			GlobalFunc_Checkpoint2(6, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (MISC::IS_BIT_SET(iLocal_86, 5))
		{
			GlobalFunc_Checkpoint2(7, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (MISC::IS_BIT_SET(iLocal_86, 6))
		{
			GlobalFunc_Checkpoint2(8, "stage_drive_to_beach", 1, 0, 0, 1);
		}
	}
	iLocal_269 = 0;
	iLocal_273 = 0;
	if (iLocal_69 > 3)
	{
		func_101();
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_266);
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_266);
	}
}












































void func_479()//Position - 0x3DEA9
{
	Local_665 = { GlobalFunc_541("FM2_GOTOL") };
	Local_667 = { GlobalFunc_541("FM2_GETON") };
	Local_669 = { GlobalFunc_541("FM2_BKIN") };
	Local_671 = { GlobalFunc_541("FM2_COPS") };
}


void func_481()//Position - 0x3DEFA
{
	HUD::REMOVE_BLIP(&uLocal_134);
	HUD::REMOVE_BLIP(&uLocal_132);
	HUD::REMOVE_BLIP(&uLocal_133);
	HUD::REMOVE_BLIP(&uLocal_134);
	HUD::REMOVE_BLIP(&uLocal_131);
}

void func_482()//Position - 0x3DF20
{
	iLocal_288 = 0;
	iLocal_840 = 0;
	iLocal_841 = 0;
	StringCopy(&Local_842, "", 24);
	iLocal_271 = 0;
	bLocal_286 = false;
	bLocal_287 = false;
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
}

void func_483()//Position - 0x3DF52
{
	bool bVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
	{
		if (PED::IS_PED_INJURED(iLocal_103))
		{
			func_103("FM2_JIMDED");
		}
		if (func_485(iLocal_103))
		{
			func_103("FM2_JIMHIT");
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_102))
	{
		if (PED::IS_PED_INJURED(iLocal_102))
		{
			func_103("FM2_TRADED");
		}
		if (func_485(iLocal_102))
		{
			func_103("FM2_TRAHIT");
		}
	}
	if (iLocal_69 == 3)
	{
		bVar0 = false;
		if (func_484(iLocal_111, &bVar0))
		{
			if (!bVar0)
			{
				func_103("FM2_BIKDED");
			}
			else
			{
				func_103("FM2_BIKSTU");
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_111, 0))
		{
			if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_111, 6, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_111, 7, 0))
			{
				func_103("FM2_BIKDED");
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2109.599f, -998.3243f, -11.18568f, 167f, 122.5f, 32.25f, 0, 1, 0))
		{
			func_103("FM2_JIMAB");
		}
	}
	if (iLocal_69 == 1)
	{
		if (func_145(iLocal_103, 300f))
		{
			func_103("FM2_JIMAB");
		}
	}
	if (iLocal_69 == 7)
	{
		if (func_145(iLocal_102, 100f))
		{
			func_103("FM2_TRAAB");
		}
	}
	if (iLocal_69 == 8)
	{
		if (func_145(iLocal_102, 1125515264))
		{
			func_103("FM2_TRAAB");
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_103))
	{
		if ((FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(25f, 25f, 25f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(25f, 25f, 25f)) && !FIRE::IS_EXPLOSION_IN_AREA(13, ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) + Vector(25f, 25f, 25f), ENTITY::GET_ENTITY_COORDS(iLocal_103, 1) - Vector(25f, 25f, 25f))) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_103, 1), 25f, 1))
		{
			func_103("FM2_JSPOOK");
		}
	}
}

int func_484(int iParam0, int iParam1)//Position - 0x3E12A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000))
				{
				}
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000))
				{
				}
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000))
				{
				}
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
				{
				}
				*iParam1 = 1;
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 1) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, -1, 1, 0))
			{
				if (iLocal_851 == 0)
				{
					iLocal_851 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_851) >= 5000)
				{
					*iParam1 = 1;
					return 1;
				}
			}
			else
			{
				iLocal_851 = 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_485(int iParam0)//Position - 0x3E218
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}


void func_487()//Position - 0x3E257
{
	bool bVar0;
	int iVar1;
	
	GlobalFunc_8536(7, 1);
	GlobalFunc_8536(8, 1);
	GlobalFunc_8536(9, 1);
	GlobalFunc_8536(10, 1);
	GlobalFunc_8536(11, 1);
	GlobalFunc_8536(12, 1);
	GlobalFunc_8536(13, 1);
	GlobalFunc_8536(14, 1);
	GlobalFunc_8536(15, 1);
	GlobalFunc_8536(16, 1);
	GlobalFunc_8536(17, 1);
	GlobalFunc_8536(18, 1);
	GlobalFunc_8536(19, 1);
	GlobalFunc_8536(20, 1);
	GlobalFunc_8536(21, 1);
	func_193(0);
	iLocal_70[0] = 0;
	iLocal_70[1] = 1;
	iLocal_70[2] = 2;
	iLocal_70[3] = 3;
	iLocal_70[4] = 4;
	iLocal_70[5] = 4;
	iLocal_70[6] = 5;
	iLocal_70[7] = 6;
	iLocal_70[8] = 7;
	iLocal_70[9] = 8;
	iLocal_70[10] = 9;
	HUD::REQUEST_ADDITIONAL_TEXT("FAMILY2", 0);
	HUD::REQUEST_ADDITIONAL_TEXT(cLocal_312, 6);
	TASK::REQUEST_WAYPOINT_RECORDING("fam2Stairs");
	GlobalFunc_563(1);
	func_479();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (GlobalFunc_Is_Mission_Retry())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			GlobalFunc_9258(&Local_90, 0, 0, 2000, 1, 0, 0, 1);
			GlobalFunc_570(500);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			iVar1 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544 == 1)
			{
				if (iVar1 == 1 || iVar1 == 2)
				{
					bVar0 = true;
				}
				if (iVar1 < 4)
				{
					if (iVar1 == 3)
					{
						iVar1 = 8;
					}
					else
					{
						iVar1++;
					}
				}
				else
				{
					iVar1 = 9;
				}
			}
			if (iVar1 > 8)
			{
				while (!func_336(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				Local_636 = { -1623.554f, -1132.136f, 0.8638f };
				fLocal_639 = 107.3556f;
				STREAMING::REQUEST_MODEL(joaat("seashark"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("seashark")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_110 = VEHICLE::CREATE_VEHICLE(joaat("seashark"), -1490.071f, -1406.383f, 1.1279f, -94.2926f, 1, 1);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_110, -1490.071f, -1406.383f, 1.1279f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_110, 2.7893f, 9.6258f, -94.2926f, 2, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_110, -0.078f, -0.0393f, 0.7289f, -0.679f);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_110, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				func_196(9);
				iLocal_283 = 1;
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						iLocal_265 = 1;
						func_196(1);
						MISC::CLEAR_AREA(Local_210, 100f, 1, 0, 0, 0);
						Local_636 = { Local_198 };
						fLocal_639 = fLocal_201;
						break;
					
					case 1:
						iLocal_265 = 1;
						GlobalFunc_10698(&iLocal_113, Local_221, fLocal_224, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_225 + Vector(0f, 1f, 1f), 1, 0, 0, 1);
						MISC::CLEAR_AREA(Local_225, 100f, 1, 0, 0, 0);
						while (!func_137(0))
						{
							SYSTEM::WAIT(0);
						}
						func_196(2);
						Local_636 = { -1081.797f, -1699.492f, 3.5179f };
						fLocal_639 = 91.1321f;
						break;
					
					case 2:
						iLocal_265 = 1;
						if (bVar0)
						{
							Local_636 = { Local_235 };
							fLocal_639 = fLocal_239;
							STREAMING::REQUEST_IPL("smBoat");
							while (!STREAMING::IS_IPL_ACTIVE("smboat"))
							{
								SYSTEM::WAIT(0);
							}
							func_196(4);
						}
						else
						{
							if (((((GlobalFunc_622() == joaat("scorcher") || GlobalFunc_622() == joaat("bmx")) || GlobalFunc_622() == joaat("cruiser")) || GlobalFunc_622() == joaat("tribike")) || GlobalFunc_622() == joaat("tribike2")) || GlobalFunc_622() == joaat("tribike3"))
							{
								GlobalFunc_10698(&iLocal_111, Local_232, fLocal_238, 1, 0, 0, 0, 1, joaat("asterope"), 0, 145);
							}
							Local_636 = { Local_206 };
							fLocal_639 = fLocal_209;
							func_196(5);
						}
						break;
					
					case 3:
						iLocal_265 = 1;
						MISC::CLEAR_AREA_OF_VEHICLES(Local_214, 100f, 1, 0, 0, 0, 0);
						MISC::CLEAR_AREA_OF_PEDS(Local_214, 100f, 0);
						if (bVar0)
						{
							Local_636 = { -2018.791f, -1033.807f, 1.4462f };
							fLocal_639 = 71.2179f;
							func_196(6);
						}
						else
						{
							Local_636 = { Local_217 };
							fLocal_639 = fLocal_220;
							func_196(7);
						}
						break;
					
					case 4:
						Local_325 = { -1937.516f, -1031.919f, 0f };
						fLocal_328 = 288.2051f;
						MISC::SET_BIT(&iLocal_86, 0);
						MISC::CLEAR_AREA(Local_325, 500f, 1, 0, 0, 0);
						func_196(8);
						break;
					
					case 5:
						Local_325 = { -1693.749f, -936.2038f, 0f };
						fLocal_328 = 293.6241f;
						MISC::SET_BIT(&iLocal_86, 1);
						MISC::CLEAR_AREA(Local_325, 500f, 1, 0, 0, 0);
						func_196(8);
						break;
					
					case 6:
						Local_325 = { -1198.648f, -992.5767f, 0f };
						fLocal_328 = 209.213f;
						MISC::SET_BIT(&iLocal_86, 2);
						MISC::CLEAR_AREA(Local_325, 500f, 1, 0, 0, 0);
						func_196(8);
						break;
					
					case 7:
						Local_325 = { -966.1338f, -1365.776f, 0f };
						fLocal_328 = 279.4431f;
						MISC::SET_BIT(&iLocal_86, 5);
						MISC::CLEAR_AREA(Local_325, 500f, 1, 0, 0, 0);
						func_196(8);
						break;
					
					case 8:
						Local_325 = { -832.9591f, -1506.537f, 0f };
						fLocal_328 = 151.4369f;
						MISC::SET_BIT(&iLocal_86, 6);
						MISC::CLEAR_AREA(Local_325, 500f, 1, 0, 0, 0);
						func_196(8);
						break;
				}
				if (iVar1 >= 4)
				{
					iLocal_265 = 1;
					Local_636 = { Local_325 };
					fLocal_639 = fLocal_328;
				}
				iLocal_283 = 1;
			}
			GlobalFunc_4972(Local_636, fLocal_639, 0, 0);
		}
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		GlobalFunc_173(&Local_675, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 212);
	}
	GlobalFunc_2224(1);
	ENTITY::CREATE_FORCED_OBJECT(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bmx"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_m_bikehire_01"), 1);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Family5d");
	GlobalFunc_695(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.6f);
	PATHFIND::SET_ROADS_IN_AREA(Vector(5.785122f, -1682.939f, -1057.899f) + Vector(4f, 30f, 29f), Vector(5.785122f, -1682.939f, -1057.899f) - Vector(4f, 30f, 29f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(6.373647f, -1688.035f, -1112.913f) + Vector(3.5f, 24.75f, 22.75f), Vector(6.373647f, -1688.035f, -1112.913f) - Vector(3.5f, 24.75f, 22.75f), 0, 1);
	PED::ADD_RELATIONSHIP_GROUP("chasing_peds", &iLocal_89);
	PED::ADD_RELATIONSHIP_GROUP("buddies", &iLocal_143);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_89, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_89);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_89);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_89, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_143, iLocal_89);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_89, iLocal_143);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_143, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_143);
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		while (!func_336(0, 1))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_421(Local_202, fLocal_205))
		{
			SYSTEM::WAIT(0);
		}
		if (!GlobalFunc_188())
		{
			func_196(0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -803.2507f, 172.9356f, 71.8447f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 108.735f);
			CLOCK::SET_CLOCK_TIME(10, 0, 0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
}






























void func_517()//Position - 0x3FA83
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_103) && !PED::IS_PED_INJURED(iLocal_103))
	{
		TASK::CLEAR_PED_TASKS(iLocal_103);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_102) && !PED::IS_PED_INJURED(iLocal_102))
	{
		TASK::CLEAR_PED_TASKS(iLocal_102);
	}
	GlobalFunc_563(0);
	GlobalFunc_52(1, 1);
	GlobalFunc_8536(7, 0);
	GlobalFunc_8536(8, 0);
	GlobalFunc_8536(9, 0);
	GlobalFunc_8536(10, 0);
	GlobalFunc_8536(11, 0);
	GlobalFunc_8536(12, 0);
	GlobalFunc_8536(13, 0);
	GlobalFunc_8536(14, 0);
	GlobalFunc_8536(15, 0);
	GlobalFunc_8536(16, 0);
	GlobalFunc_8536(17, 0);
	GlobalFunc_8536(18, 0);
	GlobalFunc_8536(19, 0);
	GlobalFunc_8536(20, 0);
	GlobalFunc_8536(21, 0);
	GlobalFunc_4935();
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_110);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_103);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_111);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_112);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_102);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Family5d");
	GlobalFunc_695(1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(5.785122f, -1682.939f, -1057.899f) + Vector(4f, 30f, 29f), Vector(5.785122f, -1682.939f, -1057.899f) - Vector(4f, 30f, 29f), 1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(5.75302f, -1325.827f, -1329.113f) + Vector(2.5f, 44f, 13.25f), Vector(5.75302f, -1325.827f, -1329.113f) - Vector(2.5f, 44f, 13.25f), 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(6.373647f, -1688.035f, -1112.913f) + Vector(3.5f, 24.75f, 22.75f), Vector(6.373647f, -1688.035f, -1112.913f) - Vector(3.5f, 24.75f, 22.75f), 1, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(4.37374f, -1694.245f, -1106.889f) + Vector(1f, 2.5f, 2.5f), Vector(4.37374f, -1694.245f, -1106.889f) - Vector(1f, 2.5f, 2.5f), 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(4.374632f, -1691.397f, -1108.549f) + Vector(1f, 2.5f, 2.5f), Vector(4.374632f, -1691.397f, -1108.549f) - Vector(1f, 2.5f, 2.5f), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_138);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_139);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_140))
	{
		CAM::DESTROY_CAM(uLocal_140, 0);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_139(1);
	ENTITY::REMOVE_FORCED_OBJECT(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"));
	AUDIO::SET_AUDIO_FLAG("AvoidMissionCompleteDelay", 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}





