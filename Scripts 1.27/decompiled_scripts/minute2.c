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
	var uLocal_36 = 0;
	var uLocal_37 = -1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1000;
	var uLocal_45 = 1000;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_156[4] = { 0, 0, 0, 0 };
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165[4] = { 0, 0, 0, 0 };
	int iLocal_170 = 0;
	var uLocal_171[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_182 = 0;
	int iLocal_183[4] = { 0, 0, 0, 0 };
	var uLocal_188[4] = { 0, 0, 0, 0 };
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
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
	var uLocal_208[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_224[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_240 = 15;
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
	var uLocal_286 = 15;
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
	var uLocal_302[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_318[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_334 = 15;
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
	var uLocal_380 = 15;
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
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 16;
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
	float fLocal_572 = 0f;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
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
	var uLocal_596 = 0;
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
	struct<3> Local_629[3];
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	struct<3> Local_645[55];
	float fLocal_811 = 0f;
	float fLocal_812 = 0f;
	float fLocal_813 = 0f;
	float fLocal_814 = 0f;
	float fLocal_815 = 0f;
	float fLocal_816 = 0f;
	float fLocal_817 = 0f;
	float fLocal_818 = 0f;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	var uLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	struct<3> Local_895 = { 0, 0, 0 } ;
	int iLocal_898 = 0;
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
	char* sLocal_922 = NULL;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
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
	uLocal_91 = GlobalFunc_4946(56);
	uLocal_92 = GlobalFunc_4946(57);
	uLocal_93 = GlobalFunc_4946(59);
	iLocal_94 = joaat("pranger");
	fLocal_572 = 12f;
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_533();
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_90 = 0;
		while (!func_529(&Local_95))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_95, 0, 1);
		Global_68490 = 0;
	}
	GlobalFunc_9621(56, 2, 0);
	GlobalFunc_9621(57, 2, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_95.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95.f_35[0], 1);
	}
	func_524();
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_AAW", 0);
		func_508(Local_95.f_9, 0, 0, 0, 0, 0);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (iLocal_926 != 1 && iLocal_926 != 0)
		{
			if (iLocal_926 != 16)
			{
				func_506();
			}
			if (!func_505())
			{
				func_502();
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				GlobalFunc_146(&(uLocal_188[iLocal_573]));
			}
		}
		func_500();
		func_499();
		func_498();
		switch (iLocal_926)
		{
			case 0:
				func_432();
				break;
			
			case 1:
				func_426();
				break;
			
			case 2:
				func_425();
				break;
			
			case 3:
				func_421();
				break;
			
			case 5:
				func_419();
				break;
			
			case 6:
				func_410();
				break;
			
			case 7:
				func_345();
				break;
			
			case 8:
				func_276();
				break;
			
			case 15:
				func_232();
				break;
			
			case 17:
				func_19();
				break;
			
			case 16:
				func_3();
				break;
		}
		if (iLocal_926 != 16)
		{
			GlobalFunc_587();
			GlobalFunc_587();
		}
	}
}



void func_3()//Position - 0x24A
{
	switch (iLocal_924)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_FAIL");
			func_18();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_4956();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_922))
			{
				GlobalFunc_10811(sLocal_922, 1);
			}
			else
			{
				GlobalFunc_10539(1);
			}
			iLocal_924 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_4();
				func_533();
			}
			break;
	}
}

void func_4()//Position - 0x2B3
{
	func_10();
	iLocal_573 = 0;
	HUD::CLEAR_PRINTS();
	iLocal_925 = 0;
	GlobalFunc_146(&(iLocal_183[0]));
	GlobalFunc_146(&(iLocal_183[1]));
	GlobalFunc_146(&(iLocal_183[2]));
	GlobalFunc_146(&(uLocal_188[0]));
	GlobalFunc_146(&(uLocal_188[1]));
	GlobalFunc_146(&(uLocal_188[2]));
	GlobalFunc_146(&iLocal_193);
	GlobalFunc_146(&iLocal_194);
	GlobalFunc_146(&iLocal_195);
	GlobalFunc_69(&(Local_95.f_28[0]));
	GlobalFunc_69(&(Local_95.f_28[1]));
	GlobalFunc_69(&(uLocal_165[0]));
	GlobalFunc_69(&(uLocal_165[1]));
	GlobalFunc_69(&(uLocal_165[2]));
	GlobalFunc_69(&(uLocal_171[0]));
	GlobalFunc_69(&(uLocal_171[1]));
	GlobalFunc_69(&iLocal_170);
	GlobalFunc_69(&uLocal_182);
	GlobalFunc_6692(&uLocal_163);
	GlobalFunc_6692(&(uLocal_156[0]));
	GlobalFunc_6692(&(uLocal_156[1]));
	GlobalFunc_6692(&(uLocal_156[2]));
	GlobalFunc_6692(&iLocal_161);
	GlobalFunc_6692(&iLocal_162);
	GlobalFunc_130(&uLocal_405);
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
	}
	VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(Local_95.f_35[0]);
	GlobalFunc_6692(&(Local_95.f_35[0]));
	iLocal_821 = 0;
	iLocal_822 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_586 = 0;
	iLocal_587 = 0;
	iLocal_836 = 0;
	iLocal_837 = 0;
	iLocal_838 = 0;
	iLocal_824 = 0;
	iLocal_825 = 0;
	iLocal_830 = 0;
	iLocal_839 = 0;
	iLocal_840 = 0;
	iLocal_841 = 0;
	iLocal_823 = 0;
	iLocal_589 = 0;
	iLocal_844 = 0;
	iLocal_845 = 0;
	iLocal_580 = 0;
	iLocal_848 = 0;
	iLocal_592 = 0;
	iLocal_594 = 0;
	iLocal_849 = 0;
	iLocal_850 = 0;
	iLocal_597 = 0;
	iLocal_854 = 0;
	iLocal_599 = 0;
	iLocal_600 = 0;
	iLocal_855 = 0;
	iLocal_857 = 0;
	iLocal_858 = 0;
	iLocal_859 = 0;
	fLocal_818 = 0f;
	iLocal_602 = 0;
	iLocal_860 = 0;
	iLocal_861 = 0;
	iLocal_608 = 0;
	iLocal_607 = 0;
	iLocal_611 = 0;
	iLocal_862 = 0;
	iLocal_863 = 0;
	iLocal_864 = 0;
	iLocal_865 = 0;
	iLocal_866 = 0;
	iLocal_867 = 0;
	iLocal_868 = 0;
	iLocal_613 = 0;
	iLocal_869 = 0;
	iLocal_870 = 0;
	iLocal_579 = 0;
	iLocal_871 = 0;
	iLocal_872 = 0;
	iLocal_873 = 0;
	iLocal_874 = 0;
	iLocal_875 = 0;
	iLocal_881 = 0;
	iLocal_882 = 0;
	iLocal_615 = 0;
	iLocal_617 = 0;
	iLocal_883 = 0;
	iLocal_881 = 0;
	iLocal_882 = 0;
	iLocal_883 = 0;
	iLocal_884 = 0;
	iLocal_885 = 0;
	iLocal_886 = 0;
	iLocal_887 = 0;
	iLocal_890 = 0;
	iLocal_918 = 0;
	iLocal_920 = 0;
	iLocal_902 = 0;
	iLocal_903 = 0;
	iLocal_904 = 0;
	iLocal_905 = 0;
	iLocal_906 = 0;
	iLocal_907 = 0;
	iLocal_908 = 0;
	iLocal_909 = 0;
	iLocal_910 = 0;
	iLocal_911 = 0;
	iLocal_912 = 0;
	iLocal_856 = 0;
	iLocal_913 = 0;
	iLocal_914 = 0;
	iLocal_917 = 0;
	iLocal_851 = 0;
	iLocal_852 = 0;
	iLocal_853 = 0;
	iLocal_923 = 0;
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_198);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_199);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_200);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_201);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_202);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_203);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_204);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
}






void func_10()//Position - 0x6A2
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surfer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tornado3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stanier"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("mesa"));
	GlobalFunc_132(&(uLocal_224[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[6]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[7]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[8]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[9]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_224[10]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_208[0]));
	GlobalFunc_131(&(uLocal_208[1]));
	GlobalFunc_131(&(uLocal_208[2]));
	GlobalFunc_131(&(uLocal_208[3]));
	GlobalFunc_131(&(uLocal_208[4]));
	GlobalFunc_131(&(uLocal_208[5]));
	GlobalFunc_131(&(uLocal_208[6]));
	GlobalFunc_131(&(uLocal_208[7]));
	GlobalFunc_131(&(uLocal_208[8]));
	GlobalFunc_131(&(uLocal_208[9]));
	GlobalFunc_131(&(uLocal_208[10]));
	GlobalFunc_132(&(uLocal_318[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[6]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[7]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[8]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[9]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_318[10]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_302[0]));
	GlobalFunc_131(&(uLocal_302[1]));
	GlobalFunc_131(&(uLocal_302[2]));
	GlobalFunc_131(&(uLocal_302[3]));
	GlobalFunc_131(&(uLocal_302[4]));
	GlobalFunc_131(&(uLocal_302[5]));
	GlobalFunc_131(&(uLocal_302[6]));
	GlobalFunc_131(&(uLocal_302[7]));
	GlobalFunc_131(&(uLocal_302[8]));
	GlobalFunc_131(&(uLocal_302[9]));
	GlobalFunc_131(&(uLocal_302[10]));
}








void func_18()//Position - 0xA07
{
	GlobalFunc_146(&(iLocal_183[0]));
	GlobalFunc_146(&(iLocal_183[1]));
	GlobalFunc_146(&(iLocal_183[2]));
	GlobalFunc_146(&(iLocal_183[3]));
	GlobalFunc_146(&(uLocal_188[0]));
	GlobalFunc_146(&(uLocal_188[1]));
	GlobalFunc_146(&(uLocal_188[2]));
	GlobalFunc_146(&(uLocal_188[3]));
	GlobalFunc_146(&iLocal_193);
	GlobalFunc_146(&iLocal_194);
	GlobalFunc_146(&iLocal_195);
	GlobalFunc_146(&iLocal_196);
}

void func_19()//Position - 0xA6F
{
	if (!GlobalFunc_111())
	{
		if ((!iLocal_885 && GlobalFunc_4947(Local_95.f_35[0])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 1) < 35f)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_598 + 3000)
			{
				if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_DRIVOFF", 7, 0, 0, 0))
				{
					iLocal_885 = 1;
				}
			}
		}
	}
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 1) > 150f || MISC::GET_GAME_TIMER() > iLocal_598 + 20000)
		{
			func_20();
		}
	}
}

void func_20()//Position - 0xB12
{
	func_21(93, 1);
	func_533();
}

void func_21(int iParam0, bool bParam1)//Position - 0xB25
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
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_49();
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




























void func_49()//Position - 0x1ECA
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
				if (GlobalFunc_11014(iVar1, 14, iVar2))
				{
					func_50(iVar1, 14, iVar2);
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

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x1F8B
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
	Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_11014(iParam0, iParam1, iParam2))
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
				func_50(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_50(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11139(iParam0, iVar0, &iVar46, 0))
	{
		func_53(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11138(iParam0, iVar0, &iVar46))
	{
		func_53(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x220B
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
		Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8541(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
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
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8541(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11250(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8541(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11250(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, GlobalFunc_11140(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11139(iParam0, iVar10, &iVar4, 1))
							{
								func_53(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_53(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10870(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_53(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_53(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_53(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_53(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_53(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8541(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11250(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8541(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11250(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11250(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11078(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11139(iParam0, iVar10, &iVar4, 0))
		{
			func_53(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11138(iParam0, iVar10, &iVar4))
		{
			func_53(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}



















































































































































































void func_232()//Position - 0x25A0C
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_867 = 0;
		iLocal_868 = 0;
		func_264();
		if (PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95.f_35[0], 10);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0) || MISC::GET_GAME_TIMER() > iLocal_614 + 30000)
			{
				if (!GlobalFunc_111())
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 12f, 0);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], 200f, 0f, 50f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], -200f, 0f, -50f), 400f, 0, 1, 1);
					func_237();
					iLocal_926 = 17;
				}
			}
			else if (iLocal_875 == 0)
			{
				if (GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_JJ8", "MIN2_JJ8_1", 8, 0, 0))
				{
					iLocal_875 = 1;
				}
			}
			else if (iLocal_915 == 0)
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_164("MIN2_47", 7500, 0);
					iLocal_604 = MISC::GET_GAME_TIMER();
					iLocal_915 = 1;
				}
			}
			else if (!GlobalFunc_663("MIN2_47", 0, 0))
			{
				if (iLocal_599 < 6)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_604 + 9000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_BYE", 7, 0, 0, 0))
							{
								iLocal_599++;
								iLocal_604 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (GlobalFunc_4924(Local_95.f_28[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1073741824, 1, 0);
				}
			}
		}
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1073741824, 1, 0);
				}
			}
		}
	}
	else
	{
		iLocal_867 = 1;
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_193))
			{
				iLocal_193 = GlobalFunc_5740(Local_95.f_35[0], 1, 5);
			}
		}
		else
		{
			if (iLocal_868 == 0)
			{
				GlobalFunc_164("MIN2_COPS", 7500, 0);
				iLocal_868 = 1;
			}
			GlobalFunc_146(&iLocal_193);
		}
	}
}





void func_237()//Position - 0x25D63
{
	int iVar0;
	var uVar1;
	
	GlobalFunc_146(&(uLocal_188[iLocal_573]));
	GlobalFunc_146(&iLocal_193);
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			GlobalFunc_173(&uLocal_407, 6, Local_95.f_28[1], "JOSEF", 0, 1);
			if (iLocal_875 == 0)
			{
				GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ8", 8, 0, 0, 0);
			}
			GlobalFunc_10829(2, 1, 500, 0, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_95.f_28[0], 1);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_95.f_28[1], 1);
		}
	}
	iLocal_598 = MISC::GET_GAME_TIMER();
	while (iLocal_580 < 2)
	{
		RECORDING::_0x208784099002BC30("SF_AAW", 0);
		if (GlobalFunc_4947(Local_95.f_35[0]))
		{
			if (GlobalFunc_4924(Local_95.f_28[0]))
			{
				if (iLocal_580 == 0)
				{
					if (MISC::GET_GAME_TIMER() > (iLocal_598 + iVar0))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
						iLocal_580 = 1;
					}
				}
				if (iLocal_580 == 1)
				{
					if (MISC::GET_GAME_TIMER() > (iLocal_598 + iVar0 + 500))
					{
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
							{
								GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_PUSH", 7, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_JJ8", "MIN2_JJ8_2", 7, 0, 0);
							}
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_95.f_35[0], 1);
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, Local_95.f_35[0]);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_95.f_35[0], 599.2107f, 2814.524f, 37.92305f, 592.2786f, 2918.858f, 67.9005f, 110f, 0, 1, 0))
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95.f_35[0], 657.2675f, 2820.99f, 40.319f, 16f, 0, joaat("pranger"), 786468, 10f, 200f);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95.f_35[0], 662.5688f, 2702.095f, 39.7719f, 20f, 0, joaat("pranger"), 786468, 10f, 200f);
								TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_95.f_35[0], 100f, 786468);
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_95.f_35[0], 535.598f, 2706.873f, 40.61375f, 529.4959f, 2810.597f, 50.72031f, 36f, 0, 1, 0))
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_95.f_35[0], 538.209f, 2696.493f, 41.2063f, 16f, 0, joaat("pranger"), 786468, 10f, 200f);
								TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_95.f_35[0], 100f, 786468);
							}
							else
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_95.f_35[0], 100f, 786468);
							}
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_95.f_28[0], uVar1);
							iLocal_580 = 2;
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_95.f_35[0], 2);
	}
}



























void func_264()//Position - 0x2707E
{
	struct<6> Var0;
	
	if (((GlobalFunc_115(Local_95.f_35[0]) && HUD::DOES_BLIP_EXIST(iLocal_193)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(Local_95.f_28[0], PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_95.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
		if (!PED::IS_PED_HEADTRACKING_PED(Local_95.f_28[1], PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_95.f_28[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_188[iLocal_573]))
	{
		if (!iLocal_884)
		{
			if (iLocal_592 != 0)
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_663("MIN2_06", 0, 0))
					{
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CAR3", 7, 0, 0, 0))
						{
							iLocal_884 = 1;
						}
					}
					else if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CAR3", 7, 1, 0, 0))
					{
						iLocal_884 = 1;
					}
				}
				else
				{
					iLocal_884 = 1;
				}
			}
		}
	}
	if (((GlobalFunc_115(Local_95.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
	{
		if (!GlobalFunc_111() && HUD::DOES_BLIP_EXIST(uLocal_188[iLocal_573]))
		{
			if (iLocal_579 >= 4)
			{
				if (iLocal_898 == 0)
				{
					Local_895 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					iLocal_898 = 1;
				}
				else if (iLocal_898 < 4)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 267.2497f, 2852.167f, 42.6129f, 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_895, 267.2497f, 2852.167f, 42.6129f, 1) + 200f))
					{
						if (!func_275())
						{
							if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_WRONG", 7, 0, 0, 0))
							{
								iLocal_898++;
								Local_895 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							}
						}
						else if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_WRONG", 7, 1, 0, 0))
						{
							iLocal_898++;
							Local_895 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_619 + 9000)
				{
					if (iLocal_618 < 3)
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_95.f_35[0]) < 0.1f)
						{
							if (!func_275())
							{
								if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_STOP", 7, 0, 0, 0))
								{
									iLocal_618++;
									iLocal_619 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								}
							}
							else if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_STOP", 7, 1, 0, 0))
							{
								iLocal_618++;
								iLocal_619 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_621 + 15000)
			{
				if (iLocal_620 < 6)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_95.f_35[0]))
					{
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
	{
		iLocal_619 = MISC::GET_GAME_TIMER() + 5000;
	}
	if (iLocal_926 == 5)
	{
		if (iLocal_825 == 1)
		{
			if (iLocal_851 == 0)
			{
				if (GlobalFunc_4924(uLocal_165[0]))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[0], 50f) && GlobalFunc_155(Local_95.f_28[0], uLocal_165[0], 20f))
					{
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CC1", 7, 0, 0, 0))
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
							iLocal_888 = 1;
							iLocal_851 = 1;
						}
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[0], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_165[0], joaat("weapon_stungun"), 0))
			{
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], 30f))
				{
					if (iLocal_611 < 5)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_612 + 7000)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
								{
									iLocal_611++;
									iLocal_612 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_165[0]);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uLocal_165[0]);
			}
		}
	}
	else
	{
		if (GlobalFunc_156(Local_95.f_35[0], PLAYER::PLAYER_PED_ID(), 1) < 30f)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_193) && !GlobalFunc_663("MIN2_19", 0, 0))
			{
				GlobalFunc_502();
				if (MISC::GET_GAME_TIMER() > iLocal_593 + 7000)
				{
					if (iLocal_592 == 0)
					{
						if (iLocal_579 >= 4)
						{
							if (!GlobalFunc_111())
							{
								if (iLocal_594 == 0)
								{
									if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && iLocal_926 < 8)
									{
										if (GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_CAR", "MIN2_CAR_2", 7, 0, 0))
										{
											iLocal_592 = 1;
											iLocal_593 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
										}
									}
								}
							}
						}
					}
					else if (iLocal_592 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
							{
								if (GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_CAR", "MIN2_CAR_3", 7, 0, 0))
								{
									iLocal_592 = 2;
									iLocal_593 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								}
							}
						}
					}
					else if (iLocal_592 < 5)
					{
						if (!GlobalFunc_111())
						{
							if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
							{
								if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CAR2", 7, 0, 0, 0))
								{
									iLocal_884 = 0;
									iLocal_592++;
									iLocal_593 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_926 == 8)
		{
			if (iLocal_837 == 1)
			{
				if (iLocal_853 == 0)
				{
					if (GlobalFunc_4924(iLocal_170))
					{
						if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 50f) && GlobalFunc_155(Local_95.f_28[1], iLocal_170, 20f))
						{
							GlobalFunc_173(&uLocal_407, 4, iLocal_170, "IMMIGRANTMALE", 0, 1);
							if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CC2", 7, 0, 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								iLocal_889 = 1;
								iLocal_853 = 1;
							}
						}
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_170, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_170, joaat("weapon_stungun"), 0))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], 30f))
					{
						if (iLocal_611 < 5)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_612 + 7000)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
									{
										iLocal_611++;
										iLocal_612 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_170);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_170);
				}
			}
			if (iLocal_825 == 1)
			{
				if (iLocal_852 == 0)
				{
					if (GlobalFunc_4924(uLocal_165[iLocal_573]))
					{
						if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 50f) && GlobalFunc_155(Local_95.f_28[0], uLocal_165[iLocal_573], 20f))
						{
							GlobalFunc_173(&uLocal_407, 5, uLocal_165[iLocal_573], "IMMIGRANTMALE2", 0, 1);
							if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CC3", 7, 0, 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								iLocal_888 = 1;
								iLocal_852 = 1;
							}
						}
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_165[iLocal_573], joaat("weapon_stungun"), 0))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], 30f))
					{
						if (iLocal_611 < 5)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_612 + 7000)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
									{
										iLocal_611++;
										iLocal_612 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_165[iLocal_573]);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uLocal_165[iLocal_573]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_165[1]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_170) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uLocal_165[1]))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (GlobalFunc_156(Local_95.f_35[0], PLAYER::PLAYER_PED_ID(), 1) < 30f)
							{
								if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
								{
									if (MISC::GET_GAME_TIMER() > iLocal_593 + 9000)
									{
										if (iLocal_592 == 0)
										{
											if (!GlobalFunc_111())
											{
												if (GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_CAR", "MIN2_CAR_1", 7, 0, 0))
												{
													iLocal_592 = 1;
													iLocal_593 = MISC::GET_GAME_TIMER();
												}
											}
										}
										else if (iLocal_592 == 1)
										{
											if (!GlobalFunc_111())
											{
												if (GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_CAR", "MIN2_CAR_2", 7, 0, 0))
												{
													iLocal_592 = 2;
													iLocal_593 = MISC::GET_GAME_TIMER();
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
		if (!GlobalFunc_663("MIN2_01", 0, 0))
		{
			if (iLocal_926 == 2 || iLocal_926 == 3)
			{
				iLocal_578 = MISC::GET_GAME_TIMER();
				if (iLocal_578 > iLocal_577 + 7000)
				{
					if (iLocal_579 < 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
							{
								if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ5b", 7, 0, 0, 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1);
									iLocal_579 = 1;
								}
							}
							else if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ5", 7, 0, 0, 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1);
								iLocal_579 = 1;
							}
						}
					}
				}
			}
			if (iLocal_926 == 3)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_849 == 0)
					{
						iLocal_849 = 1;
					}
					if (iLocal_579 < 2)
					{
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
							{
								if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ1", 5, 0, 0, 0))
								{
									iLocal_579 = 2;
								}
							}
						}
					}
					else if (!iLocal_881)
					{
						if ((((((GlobalFunc_4947(Local_95.f_35[0]) && GlobalFunc_4924(uLocal_165[0])) && !GlobalFunc_155(Local_95.f_35[0], uLocal_165[0], 50f)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && !GlobalFunc_663("MIN2_48", 0, 0))
						{
							if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ4", 5, 0, 0, 0))
							{
								iLocal_881 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_926 == 6)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_188[iLocal_573]))
			{
				iLocal_578 = MISC::GET_GAME_TIMER();
				if (iLocal_578 > iLocal_577 + 100)
				{
					if (iLocal_579 < 3)
					{
						if (iLocal_842 == 0)
						{
							if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ6", 5, 1, 0, 0))
							{
								iLocal_579 = 3;
							}
						}
					}
				}
			}
		}
		if (iLocal_926 == 6)
		{
			if (iLocal_579 == 3)
			{
				if (iLocal_832 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
							{
								if (iLocal_842 == 0)
								{
									if (GlobalFunc_4924(uLocal_165[0]))
									{
										if (GlobalFunc_4924(Local_95.f_28[0]))
										{
											TASK::TASK_LOOK_AT_ENTITY(uLocal_165[0], Local_95.f_28[0], -1, 0, 2);
										}
									}
									if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_IMM1", 5, 0, 0, 0))
									{
										iLocal_579 = 4;
									}
								}
							}
						}
					}
				}
			}
			else if (iLocal_579 == 4)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_400))
				{
					Var0 = { GlobalFunc_2209() };
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_IMM1_7") && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_400) < 0.54f)
					{
						GlobalFunc_5105();
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_400) >= 0.54f)
					{
						if (!iLocal_872)
						{
							GlobalFunc_10626(&uLocal_407, "MIN2AU", "MIN2_IMM1", "MIN2_IMM1_9", 7, 0, 0);
							iLocal_872 = 1;
						}
					}
				}
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.167f, 42.6129f, 1) < 70f)
				{
					GlobalFunc_5105();
				}
			}
			else if (iLocal_579 == 5)
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.167f, 42.6129f, 1) < 70f)
				{
					GlobalFunc_5105();
				}
			}
		}
		if (iLocal_926 == 11)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_188[iLocal_573]))
			{
				iLocal_578 = MISC::GET_GAME_TIMER();
				if (iLocal_578 > iLocal_577 + 7000)
				{
					if (iLocal_579 <= 5)
					{
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ7", 5, 0, 0, 0))
						{
							iLocal_579 = 5;
						}
					}
				}
			}
		}
		if (iLocal_926 == 12)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_575 + 7000)
			{
				if (iLocal_579 < 6)
				{
					if (iLocal_832 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ2", 5, 0, 0, 0))
							{
								iLocal_579 = 6;
							}
						}
					}
				}
			}
		}
		if (iLocal_926 == 15)
		{
			if (iLocal_831 == 1)
			{
				iLocal_578 = MISC::GET_GAME_TIMER();
				if (iLocal_578 > iLocal_577 + 7000)
				{
					if (iLocal_579 < 7)
					{
						iLocal_579 = 7;
					}
				}
			}
		}
	}
	if (iLocal_926 == 3)
	{
		if (PED::IS_PED_IN_VEHICLE(uLocal_165[0], uLocal_156[0], 0))
		{
			if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), uLocal_165[0]) < 30f)
			{
				if (iLocal_622 == 0)
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_165[0]))
					{
						GlobalFunc_5117(uLocal_165[0], "MIN2_ACAA_01", "MANUEL", 0);
					}
					else
					{
						iLocal_622 = 1;
						iLocal_623 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
					}
				}
				else if (iLocal_622 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_623 + 4000)
					{
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_165[0]))
						{
							GlobalFunc_5117(uLocal_165[0], "MIN2_ACAA_02", "MANUEL", 0);
						}
						else
						{
							iLocal_622 = 2;
							iLocal_623 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
						}
					}
				}
				else if (iLocal_622 == 2)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_623 + 4000)
					{
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_165[0]))
						{
							GlobalFunc_5117(uLocal_165[0], "MIN2_ACAA_03", "MANUEL", 0);
						}
						else
						{
							iLocal_622 = 3;
						}
					}
				}
			}
		}
	}
}











int func_275()//Position - 0x28231
{
	if ((((((((GlobalFunc_663("MIN2_COPS", 0, 0) || GlobalFunc_663("MIN2_47", 0, 0)) || GlobalFunc_663("MIN2_48", 0, 0)) || GlobalFunc_663("MIN2_31", 0, 0)) || GlobalFunc_663("MIN2_01", 0, 0)) || GlobalFunc_663("MIN2_49", 0, 0)) || GlobalFunc_663("MIN2_06", 0, 0)) || GlobalFunc_663("MIN2_08", 0, 0)) || GlobalFunc_663("MIN2_33", 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_276()//Position - 0x282CB
{
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (iLocal_862 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_588 + 5000)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_START_STA");
			iLocal_862 = 1;
		}
	}
	if (GlobalFunc_4924(Local_95.f_28[0]))
	{
		if (GlobalFunc_4924(Local_95.f_28[1]))
		{
			if (iLocal_836 == 1)
			{
				if (iLocal_837 == 0)
				{
					if (GlobalFunc_4947(Local_95.f_35[0]))
					{
						if ((!GlobalFunc_155(iLocal_170, Local_95.f_28[0], 10f) && !GlobalFunc_155(iLocal_170, Local_95.f_28[1], 10f)) && !GlobalFunc_155(iLocal_170, PLAYER::PLAYER_PED_ID(), 10f))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_170))
							{
								iLocal_610 = 0;
								if (!PED::IS_PED_RAGDOLL(iLocal_170))
								{
									iLocal_865 = 0;
									if (PED::CAN_PED_RAGDOLL(iLocal_170))
									{
										iLocal_866 = 1;
										PED::SET_PED_TO_RAGDOLL(iLocal_170, 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_866 == 1)
								{
									if (iLocal_865 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_170))
									{
										PED::CREATE_NM_MESSAGE(1, 787);
										PED::GIVE_PED_NM_MESSAGE(iLocal_170);
										iLocal_866 = 0;
										iLocal_865 = 1;
										if (GlobalFunc_155(iLocal_170, PLAYER::PLAYER_PED_ID(), 40f))
										{
											if (!GlobalFunc_111())
											{
												GlobalFunc_173(&uLocal_407, 4, iLocal_170, "IMMIGRANTMALE", 0, 1);
												GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_INJ2", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_610++;
								if (iLocal_610 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_170, 0);
								}
							}
						}
						if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_170))
							{
								iLocal_610 = 0;
								if (!PED::IS_PED_RAGDOLL(iLocal_170))
								{
									iLocal_865 = 0;
									if (PED::CAN_PED_RAGDOLL(iLocal_170))
									{
										iLocal_866 = 1;
										PED::SET_PED_TO_RAGDOLL(iLocal_170, 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_866 == 1)
								{
									if (iLocal_865 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_170))
									{
										PED::CREATE_NM_MESSAGE(1, 787);
										PED::GIVE_PED_NM_MESSAGE(iLocal_170);
										iLocal_866 = 0;
										iLocal_865 = 1;
										if (GlobalFunc_155(iLocal_170, PLAYER::PLAYER_PED_ID(), 40f))
										{
											if (!GlobalFunc_111())
											{
												GlobalFunc_173(&uLocal_407, 4, iLocal_170, "IMMIGRANTMALE2", 0, 1);
												GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_INJ2", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_610++;
								if (iLocal_610 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_170, 0);
								}
							}
						}
					}
				}
			}
			if (iLocal_824 == 1)
			{
				if (iLocal_825 == 0)
				{
					if (GlobalFunc_4947(Local_95.f_35[0]))
					{
						if ((!GlobalFunc_155(uLocal_165[iLocal_573], Local_95.f_28[0], 10f) && !GlobalFunc_155(uLocal_165[iLocal_573], Local_95.f_28[1], 10f)) && !GlobalFunc_155(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 10f))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(uLocal_165[iLocal_573]))
							{
								iLocal_609 = 0;
								if (!PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]))
								{
									iLocal_863 = 0;
									if (PED::CAN_PED_RAGDOLL(uLocal_165[iLocal_573]))
									{
										iLocal_864 = 1;
										PED::SET_PED_TO_RAGDOLL(uLocal_165[iLocal_573], 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_864 == 1)
								{
									if (iLocal_863 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_165[iLocal_573]))
									{
										PED::CREATE_NM_MESSAGE(1, 787);
										PED::GIVE_PED_NM_MESSAGE(uLocal_165[iLocal_573]);
										iLocal_864 = 0;
										iLocal_863 = 1;
										if (GlobalFunc_155(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 40f))
										{
											if (!GlobalFunc_111())
											{
												GlobalFunc_173(&uLocal_407, 5, uLocal_165[iLocal_573], "IMMIGRANTMALE2", 0, 1);
												GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_INJ3", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_609++;
								if (iLocal_609 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(uLocal_165[iLocal_573], 0);
								}
							}
						}
						if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(uLocal_165[iLocal_573]))
							{
								iLocal_609 = 0;
								if (!PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]))
								{
									iLocal_863 = 0;
									if (PED::CAN_PED_RAGDOLL(uLocal_165[iLocal_573]))
									{
										iLocal_864 = 1;
										PED::SET_PED_TO_RAGDOLL(uLocal_165[iLocal_573], 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_864 == 1)
								{
									if (iLocal_863 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_165[iLocal_573]))
									{
										PED::CREATE_NM_MESSAGE(1, 787);
										PED::GIVE_PED_NM_MESSAGE(uLocal_165[iLocal_573]);
										iLocal_864 = 0;
										iLocal_863 = 1;
										if (GlobalFunc_155(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 40f))
										{
											if (!GlobalFunc_111())
											{
												GlobalFunc_173(&uLocal_407, 5, uLocal_165[iLocal_573], "IMMIGRANTMALE2", 0, 1);
												GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_INJ3", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_609++;
								if (iLocal_609 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(uLocal_165[iLocal_573], 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_824 == 1 && iLocal_836 == 1)
	{
		if (iLocal_860 == 0)
		{
			RECORDING::_0x293220DA1B46CEBC(3f, 8f, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_STOP");
			GlobalFunc_571(1, 781);
			iLocal_860 = 1;
		}
	}
	if (GlobalFunc_199())
	{
		func_343();
	}
	if (iLocal_848 == 1)
	{
		if (iLocal_824 == 0 || iLocal_836 == 0)
		{
			if (!GlobalFunc_111())
			{
				if (MISC::GET_GAME_TIMER() > iLocal_591 + 1500)
				{
					if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_10", 6, 0, 0, 0))
					{
						iLocal_848 = 0;
					}
				}
			}
		}
	}
	if (iLocal_822 == 0)
	{
		if (((iLocal_824 == 1 && iLocal_836 == 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
		{
			func_342();
		}
	}
	else if (GlobalFunc_4924(Local_95.f_28[0]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
			{
				TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1f, 1, 0);
			}
		}
	}
	if (iLocal_834 == 0)
	{
		if (iLocal_824 == 1 && iLocal_836 == 1)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
			{
				func_340();
			}
		}
	}
	else if (GlobalFunc_4924(Local_95.f_28[1]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
			{
				TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1073741824, 1, 0);
			}
		}
	}
	if (iLocal_824 == 0 || iLocal_836 == 0)
	{
		func_315();
	}
	else if (iLocal_600 < 3)
	{
		GlobalFunc_4948(&uLocal_35, 0, 0);
		iLocal_600 = 3;
	}
	func_312();
	func_264();
	func_311();
	if (iLocal_825 == 1)
	{
		if (iLocal_822 == 0)
		{
			func_307();
		}
		else if (!iLocal_883)
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_663("MIN2_31", 0, 0))
				{
					if (((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0)) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 100f))
					{
						if (GlobalFunc_115(uLocal_165[0]))
						{
							GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
						}
						if (GlobalFunc_115(uLocal_165[1]))
						{
							GlobalFunc_173(&uLocal_407, 5, uLocal_165[1], "IMMIGRANTMALE2", 0, 1);
						}
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CHATB2", 7, 0, 0, 0))
						{
							iLocal_883 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_304();
	}
	if (iLocal_837 == 1)
	{
		if (iLocal_834 == 0)
		{
			func_301();
		}
		else if (!iLocal_883)
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_663("MIN2_31", 0, 0))
				{
					if (((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0)) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 100f))
					{
						if (GlobalFunc_115(iLocal_170))
						{
							GlobalFunc_173(&uLocal_407, 4, iLocal_170, "IMMIGRANTMALE2", 0, 1);
						}
						if (GlobalFunc_115(uLocal_165[0]))
						{
							GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
						}
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CHATB1", 7, 0, 0, 0))
						{
							iLocal_883 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_278();
	}
	if (GlobalFunc_4924(uLocal_165[1]))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[1], 0) && !PED::IS_PED_RAGDOLL(uLocal_165[1])) && ENTITY::GET_ENTITY_HEALTH(uLocal_165[1]) > 150)
		{
			ENTITY::SET_ENTITY_HEALTH(uLocal_165[1], 150);
		}
		if (iLocal_824 == 1)
		{
			if (iLocal_825 == 0)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1817882002) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -258271821) == 1) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -235832601) == 1)
				{
					TASK::CLEAR_PED_TASKS(uLocal_165[iLocal_573]);
				}
			}
		}
		if (GlobalFunc_4947(uLocal_156[iLocal_573]))
		{
			if (PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
				{
					GlobalFunc_4501(iLocal_183[iLocal_573], uLocal_165[iLocal_573], 300f, 0.8f, 0);
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if (GlobalFunc_4924(Local_95.f_28[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
									{
										if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 180f))
										{
											if (iLocal_606 < 3)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_605 + 7000)
												{
													if (!GlobalFunc_111())
													{
														if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CATCH2", 7, 0, 0, 0))
														{
															iLocal_606++;
															iLocal_605 = MISC::GET_GAME_TIMER();
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
			}
		}
	}
	if (GlobalFunc_4924(iLocal_170))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_170, 0) && !PED::IS_PED_RAGDOLL(iLocal_170)) && ENTITY::GET_ENTITY_HEALTH(iLocal_170) > 150)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_170, 150);
		}
		if (iLocal_836 == 1)
		{
			if (iLocal_837 == 0)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1817882002) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -258271821) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -235832601) == 1)
				{
					TASK::CLEAR_PED_TASKS(iLocal_170);
				}
			}
		}
		if (GlobalFunc_4947(iLocal_161))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_161, 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_196))
				{
					GlobalFunc_4501(iLocal_196, iLocal_170, 300f, 0.8f, 0);
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if (GlobalFunc_4924(Local_95.f_28[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
									{
										if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 180f))
										{
											if (iLocal_606 < 3)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_605 + 7000)
												{
													if (!GlobalFunc_111())
													{
														if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CATCH2", 7, 0, 0, 0))
														{
															iLocal_606++;
															iLocal_605 = MISC::GET_GAME_TIMER();
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
			}
		}
	}
	if (iLocal_617 != 5 && MISC::GET_GAME_TIMER() > iLocal_588 + 20000)
	{
		iLocal_617 = 5;
	}
	if (!GlobalFunc_111())
	{
		if (iLocal_617 == 0)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CHAT1", 7, 0, 0, 0))
				{
					iLocal_617 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
				}
			}
		}
		else if (iLocal_617 == 1)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 50f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 50f))
				{
					if (GlobalFunc_115(uLocal_165[0]))
					{
						GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
					}
					if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CHAT2", 7, 0, 0, 0))
					{
						iLocal_617 = 5;
					}
				}
			}
		}
		else if (iLocal_617 == 2)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 50f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 50f))
				{
					if (GlobalFunc_115(uLocal_165[0]))
					{
						GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
					}
					if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CHAT5", 7, 0, 0, 0))
					{
						iLocal_617 = 5;
					}
				}
			}
		}
		else if (iLocal_617 == 3)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 50f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 50f))
				{
					if (GlobalFunc_115(uLocal_165[0]))
					{
						GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
					}
					if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CHAT4", 7, 0, 0, 0))
					{
						iLocal_617 = 5;
					}
				}
			}
		}
		else if (iLocal_617 == 4)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 50f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 50f))
				{
					if (GlobalFunc_115(uLocal_165[0]))
					{
						GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
					}
					if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CHAT3", 7, 0, 0, 0))
					{
						iLocal_617 = 5;
					}
				}
			}
		}
	}
	if (GlobalFunc_4924(uLocal_165[1]))
	{
		if ((iLocal_888 && GlobalFunc_111()) && !PED::IS_PED_RAGDOLL(uLocal_165[1]))
		{
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
			iLocal_888 = 0;
		}
	}
	if (GlobalFunc_4924(iLocal_170))
	{
		if ((iLocal_889 && GlobalFunc_111()) && !PED::IS_PED_RAGDOLL(iLocal_170))
		{
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
			iLocal_889 = 0;
		}
	}
	if (iLocal_822 == 1 && iLocal_834 == 1)
	{
		AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
		iLocal_888 = 0;
		iLocal_889 = 0;
		iLocal_614 = MISC::GET_GAME_TIMER();
		iLocal_614 = iLocal_614;
		iLocal_926 = 15;
	}
}


void func_278()//Position - 0x293FE
{
	if (GlobalFunc_4924(iLocal_170))
	{
		fLocal_812 = GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1);
		if (iLocal_836 == 0)
		{
			if (fLocal_812 < 9f)
			{
				if (iLocal_827 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_95.f_28[1], iLocal_170, 0, 0f, 0f, 0f, 10f, 100, 0, -753768974);
					if (PED::IS_PED_ON_ANY_BIKE(iLocal_170))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_170, 2);
					}
					iLocal_827 = 1;
				}
			}
			else if (iLocal_827 == 1)
			{
				TASK::CLEAR_PED_TASKS(Local_95.f_28[1]);
				iLocal_827 = 0;
			}
		}
		else if (fLocal_812 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_95.f_28[1]);
		}
		if (iLocal_836 == 0)
		{
			if (fLocal_812 > 220f)
			{
				if (iLocal_833 == 0)
				{
					if (GlobalFunc_4947(Local_95.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (iLocal_573 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_603 + 12000)
								{
									if (iLocal_902 == 0)
									{
										iLocal_902 = 1;
									}
								}
							}
							else if (iLocal_824 == 0 && iLocal_836 == 0)
							{
								if (iLocal_914 == 0)
								{
									iLocal_914 = 1;
								}
							}
							else if (iLocal_902 == 0)
							{
								iLocal_902 = 1;
							}
						}
					}
					iLocal_833 = 1;
				}
				else if (fLocal_812 > 300f)
				{
					if (iLocal_573 == 0)
					{
						sLocal_922 = "MIN2_43";
					}
					else if (iLocal_824 == 0 && iLocal_836 == 0)
					{
						sLocal_922 = "MIN2_35";
					}
					else
					{
						sLocal_922 = "MIN2_23";
					}
					iLocal_926 = 16;
				}
			}
			else
			{
				iLocal_833 = 0;
			}
		}
		if (iLocal_836 == 0)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_170, joaat("weapon_stungun"), 0))
			{
				func_299();
			}
		}
		if (iLocal_836 == 0)
		{
			if (GlobalFunc_4924(iLocal_170))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_161, 0))
				{
					if (iLocal_844 == 0)
					{
						func_299();
					}
				}
			}
		}
		if (iLocal_836 == 1)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_170, joaat("weapon_stungun"), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_170, Local_95.f_28[1], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
					{
						iLocal_587++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_170, Local_95.f_28[0], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 0))
					{
						iLocal_587++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_170, PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_587++;
					}
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_170);
			}
			if (iLocal_837 == 0)
			{
				iLocal_584 = MISC::GET_GAME_TIMER();
				if (iLocal_584 > iLocal_585 + 4000)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_170, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_280(iLocal_170, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_587 == 0)
						{
							iLocal_587++;
						}
						func_279();
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_170, PLAYER::PLAYER_PED_ID(), 0))
					{
						fLocal_814 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_170, 1);
						if (fLocal_814 < 9f)
						{
							if (iLocal_587 > 0)
							{
								func_279();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
				{
					if (fLocal_812 < 7f)
					{
						if (iLocal_587 > 0)
						{
							func_279();
						}
					}
				}
			}
		}
	}
}

void func_279()//Position - 0x29703
{
	TASK::CLEAR_PED_TASKS(iLocal_170);
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, 242628503) != 1)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1794415470) != 0)
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_170, Local_95.f_35[0], 60000, 2, 1f, 1, 0);
		}
	}
	iLocal_837 = 1;
}

int func_280(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2975B
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_294(iParam0, bParam1, bParam5, bParam6, bParam7))
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
		else if (func_281(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0, float fParam1)//Position - 0x29816
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
				if (func_282(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_282(int iParam0, float fParam1)//Position - 0x2988C
{
	return func_283(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_283(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x298A4
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_291(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_48[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_286();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_48[iVar4 /*4*/].f_1 = iParam0;
		Local_48[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_6422(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_48[iVar4 /*4*/].f_3) < iParam4);
}



int func_286()//Position - 0x29B56
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if ((Local_48[iVar0 /*4*/] == 0 && Local_48[iVar0 /*4*/].f_1 == 0) && Local_48[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_291(int iParam0, int iParam1)//Position - 0x29CAC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if (Local_48[iVar0 /*4*/].f_1 == iParam0 && Local_48[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_294(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x29D5A
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (GlobalFunc_2996(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (GlobalFunc_8055(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (GlobalFunc_2996(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (GlobalFunc_8055(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}





void func_299()//Position - 0x2A0CC
{
	RECORDING::_0x293220DA1B46CEBC(3f, 0f, 0);
	if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_170, joaat("weapon_stungun"), 0))
	{
		iLocal_602++;
		if (iLocal_602 > 2)
		{
			GlobalFunc_553(782);
		}
	}
	TASK::CLEAR_PED_TASKS(iLocal_170);
	if (PED::IS_PED_ON_ANY_BIKE(iLocal_170))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_170, 2);
		PED::KNOCK_PED_OFF_VEHICLE(iLocal_170);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_196))
	{
		HUD::SET_BLIP_SCALE(iLocal_196, 0.7f);
	}
	ENTITY::SET_ENTITY_PROOFS(iLocal_170, 0, 0, 0, 1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 0, 0);
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_170, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_28[1], -20f, 0f, 0f), 97, &uLocal_639, 1, 1077936128, 0);
	iLocal_585 = MISC::GET_GAME_TIMER();
	if (GlobalFunc_115(iLocal_161))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161);
		}
	}
	GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_8", 6, 0, 0, 0);
	if (iLocal_824 == 0)
	{
		iLocal_591 = MISC::GET_GAME_TIMER();
		iLocal_848 = 1;
	}
	iLocal_836 = 1;
}


void func_301()//Position - 0x2A236
{
	if (GlobalFunc_4924(iLocal_170))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_170, Local_95.f_35[0]))
		{
			func_303();
			return;
		}
		if (iLocal_834 == 0)
		{
			fLocal_813 = GlobalFunc_156(Local_95.f_35[0], iLocal_170, 1);
			if (fLocal_813 < 40f || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 40f))
			{
				if (iLocal_607 == 0)
				{
					if ((PED::IS_PED_RAGDOLL(iLocal_170) || TASK::IS_PED_GETTING_UP(iLocal_170)) || PED::IS_PED_BEING_STUNNED(iLocal_170, 0))
					{
						iLocal_625 = MISC::GET_GAME_TIMER();
					}
					if (GlobalFunc_155(iLocal_170, Local_95.f_35[0], 4.5f) || MISC::GET_GAME_TIMER() > iLocal_625 + 2500)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_170, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "rcmminute2", "arrest_walk", 3))
						{
							TASK::STOP_ANIM_TASK(iLocal_170, "rcmminute2", "arrest_walk", -2f);
							TASK::TASK_PLAY_ANIM(iLocal_170, "rcmminute2", "handsup_exit", 2f, -4f, -1, 48, 0.3f, 0, 0, 0);
						}
						if (GlobalFunc_155(iLocal_170, Local_95.f_35[0], 3f) && PED::IS_PED_IN_VEHICLE(iLocal_170, Local_95.f_35[0], 1))
						{
							GlobalFunc_4935();
						}
						if (iLocal_838 == 0)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, 242628503) != 1)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1794415470) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_170, Local_95.f_35[0], 60000, 2, 1f, 1, 0);
								}
							}
							iLocal_838 = 1;
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, 242628503) != 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1794415470) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_170, Local_95.f_35[0], 60000, 2, 1f, 1, 0);
							}
						}
					}
					else if (TASK::IS_PED_GETTING_UP(iLocal_170))
					{
						if (iLocal_920 == 0)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "rcmminute2", "arrest_walk", 3))
							{
								TASK::STOP_ANIM_TASK(iLocal_170, "rcmminute2", "arrest_walk", -8f);
							}
							iLocal_921 = MISC::GET_GAME_TIMER();
							iLocal_920 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_921 + 3100)
						{
							if (!PED::IS_PED_RAGDOLL(iLocal_170))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "rcmminute2", "arrest_walk", 3))
								{
									if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_PLAY_ANIM(iLocal_170, "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_170) && !PED::IS_PED_BEING_STUNNED(iLocal_170, joaat("weapon_stungun")))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "rcmminute2", "arrest_walk", 3))
							{
								if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_PLAY_ANIM(iLocal_170, "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
								}
							}
						}
						iLocal_920 = 0;
					}
					if (PED::IS_PED_IN_VEHICLE(iLocal_170, Local_95.f_35[0], 0))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1.2f, 1, 0);
							}
						}
					}
				}
				else if (iLocal_607 == 1)
				{
					if (fLocal_813 < 20f || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_170, 20f))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "rcmminute2", "kneeling_arrest_get_up", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_170, "rcmminute2", "kneeling_arrest_get_up", 16f, -2f, -1, 0, 0f, 0, 0, 0);
							iLocal_607 = 2;
						}
					}
				}
				else if (iLocal_607 == 2)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "rcmminute2", "kneeling_arrest_get_up", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_170, "rcmminute2", "arrest_walk", 2f, -8f, -1, 65585, 0f, 0, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_170, Local_95.f_35[0], 60000, 2, 1.4f, 1, 0);
						iLocal_607 = 0;
					}
				}
			}
			else if (!PED::IS_PED_RAGDOLL(iLocal_170) && !PED::IS_PED_BEING_STUNNED(iLocal_170, joaat("weapon_stungun")))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "rcmminute2", "kneeling_arrest_idle", 3))
				{
					TASK::CLEAR_PED_TASKS(iLocal_170);
					TASK::TASK_PLAY_ANIM(iLocal_170, "rcmminute2", "kneeling_arrest_idle", 2f, -16f, -1, 1, 0f, 0, 0, 0);
					if (iLocal_607 != 1)
					{
						GlobalFunc_4935();
					}
					iLocal_607 = 1;
				}
			}
		}
	}
}


void func_303()//Position - 0x2A693
{
	if (GlobalFunc_4924(iLocal_170))
	{
		if (iLocal_822 == 0)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0]))
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_170);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_170, 0, 0);
				uLocal_399 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_399, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_r"));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uLocal_399, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_399, 2f);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_170);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_202);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_203);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_204);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
				iLocal_886 = 1;
			}
			iLocal_613 = 2;
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iLocal_170);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_202);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_203);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_204);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
		}
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_170, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_170, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_170, 1);
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
	{
		TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1073741824, 1, 0);
	}
	if (iLocal_573 == 1)
	{
		if (iLocal_824 == 1)
		{
			if (iLocal_822 == 0)
			{
				if (GlobalFunc_4924(uLocal_165[iLocal_573]))
				{
					if (GlobalFunc_4951(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID()) > 70f)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 1))
						{
							GlobalFunc_164("MIN2_31", 7500, 0);
						}
						else
						{
							if (iLocal_909 == 0)
							{
								GlobalFunc_164("MIN2_19", 7500, 0);
								iLocal_909 = 1;
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
							{
								GlobalFunc_146(&(iLocal_183[iLocal_573]));
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_196))
							{
								GlobalFunc_146(&iLocal_196);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_193))
							{
								iLocal_193 = GlobalFunc_5740(Local_95.f_35[0], 1, 5);
							}
							iLocal_855 = 1;
						}
					}
				}
			}
		}
	}
	iLocal_834 = 1;
	TASK::TASK_CLEAR_LOOK_AT(Local_95.f_28[1]);
	iLocal_593 = MISC::GET_GAME_TIMER();
}

void func_304()//Position - 0x2A8A1
{
	if (GlobalFunc_4924(uLocal_165[1]))
	{
		fLocal_811 = GlobalFunc_156(Local_95.f_28[0], uLocal_165[1], 1);
		if (iLocal_824 == 0)
		{
			if (fLocal_811 < 9f)
			{
				if (iLocal_826 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_95.f_28[0], uLocal_165[1], 0, 0f, 0f, 0f, 9f, 100, 0, -753768974);
					if (PED::IS_PED_ON_ANY_BIKE(uLocal_165[1]))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_165[1], 2);
					}
					iLocal_826 = 1;
				}
			}
			else if (iLocal_826 == 1)
			{
				TASK::CLEAR_PED_TASKS(Local_95.f_28[0]);
				iLocal_826 = 0;
			}
		}
		else if (fLocal_811 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_95.f_28[0]);
		}
		if (iLocal_824 == 0)
		{
			if (fLocal_811 > 220f)
			{
				if (iLocal_828 == 0)
				{
					if (GlobalFunc_4947(Local_95.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (iLocal_573 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_603 + 12000)
								{
									if (iLocal_902 == 0)
									{
										iLocal_902 = 1;
									}
								}
							}
							else if (iLocal_824 == 0 && iLocal_836 == 0)
							{
								if (iLocal_914 == 0)
								{
									iLocal_914 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_603 + 12000)
							{
								if (iLocal_902 == 0)
								{
									iLocal_902 = 1;
								}
							}
						}
					}
					iLocal_828 = 1;
				}
				else if (fLocal_811 > 300f)
				{
					if (iLocal_573 == 0)
					{
						sLocal_922 = "MIN2_43";
					}
					else if (iLocal_824 == 0 && iLocal_836 == 0)
					{
						sLocal_922 = "MIN2_35";
					}
					else
					{
						sLocal_922 = "MIN2_23";
					}
					iLocal_926 = 16;
				}
			}
			else
			{
				iLocal_828 = 0;
			}
		}
		if (iLocal_824 == 0)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_165[1], joaat("weapon_stungun"), 0))
			{
				func_306();
			}
		}
		if (iLocal_824 == 0)
		{
			if (GlobalFunc_4947(uLocal_156[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(uLocal_165[1], uLocal_156[1], 0))
				{
					if (iLocal_845 == 0)
					{
						func_306();
					}
				}
			}
		}
		if (iLocal_824 == 1)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_165[iLocal_573], joaat("weapon_stungun"), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], Local_95.f_28[1], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
					{
						iLocal_586++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], Local_95.f_28[0], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 0))
					{
						iLocal_586++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_586++;
					}
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(uLocal_165[iLocal_573]);
			}
			if (iLocal_825 == 0)
			{
				iLocal_582 = MISC::GET_GAME_TIMER();
				if (iLocal_582 > iLocal_583 + 4000)
				{
					ENTITY::SET_ENTITY_PROOFS(uLocal_165[1], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_280(uLocal_165[iLocal_573], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_586 == 0)
						{
							iLocal_586++;
						}
						func_305();
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 0))
					{
						fLocal_814 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_165[1], 1);
						if (fLocal_814 < 9f)
						{
							if (iLocal_586 > 0)
							{
								func_305();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 0))
				{
					if (fLocal_811 < 7f)
					{
						if (iLocal_586 > 0)
						{
							func_305();
						}
					}
				}
			}
		}
	}
}

void func_305()//Position - 0x2ABF7
{
	TASK::CLEAR_PED_TASKS(uLocal_165[iLocal_573]);
	if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], 242628503) != 1)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1794415470) != 0)
		{
			TASK::TASK_ENTER_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0], 60000, 2, 1f, 1, 0);
		}
	}
	iLocal_825 = 1;
}

void func_306()//Position - 0x2AC68
{
	RECORDING::_0x293220DA1B46CEBC(3f, 0f, 0);
	if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_165[iLocal_573], joaat("weapon_stungun"), 0))
	{
		iLocal_602++;
		if (iLocal_602 > 2)
		{
			GlobalFunc_553(782);
		}
	}
	TASK::CLEAR_PED_TASKS(uLocal_165[iLocal_573]);
	Local_629[iLocal_573 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_165[iLocal_573], 1) };
	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[iLocal_573], 0))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_165[iLocal_573], 2);
		PED::KNOCK_PED_OFF_VEHICLE(uLocal_165[iLocal_573]);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
	{
		HUD::SET_BLIP_SCALE(iLocal_183[iLocal_573], 0.7f);
	}
	ENTITY::SET_ENTITY_PROOFS(uLocal_165[iLocal_573], 0, 0, 0, 1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 0, 0);
	if (iLocal_573 == 0)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 0, 0);
	}
	PED::SET_PED_MOVEMENT_CLIPSET(uLocal_165[iLocal_573], "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_28[0], -20f, 0f, 0f), 129, &uLocal_639, 1, 1077936128, 0);
	iLocal_583 = MISC::GET_GAME_TIMER();
	if (GlobalFunc_115(uLocal_156[iLocal_573]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_156[iLocal_573]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_156[iLocal_573]);
		}
	}
	if (iLocal_573 == 0)
	{
		GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
		if (iLocal_602 != 0)
		{
			GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_7", 6, 0, 0, 0);
		}
		else
		{
			GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_RAM", 6, 0, 0, 0);
		}
		GlobalFunc_571(0, 780);
	}
	if (iLocal_573 == 1)
	{
		GlobalFunc_173(&uLocal_407, 4, iLocal_170, "IMMIGRANTMALE", 0, 1);
		GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_9", 6, 0, 0, 0);
		if (iLocal_836 == 0)
		{
			iLocal_591 = MISC::GET_GAME_TIMER();
			iLocal_848 = 1;
		}
	}
	iLocal_824 = 1;
}

void func_307()//Position - 0x2AE31
{
	if (GlobalFunc_4924(uLocal_165[iLocal_573]))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0]))
		{
			func_309();
			return;
		}
		if (iLocal_822 == 0)
		{
			fLocal_813 = GlobalFunc_156(Local_95.f_35[0], uLocal_165[iLocal_573], 1);
			if (fLocal_813 < 40f || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 40f))
			{
				if (iLocal_608 == 0)
				{
					if ((PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]) || TASK::IS_PED_GETTING_UP(uLocal_165[iLocal_573])) || PED::IS_PED_BEING_STUNNED(uLocal_165[iLocal_573], 0))
					{
						iLocal_624 = MISC::GET_GAME_TIMER();
					}
					if (GlobalFunc_155(uLocal_165[iLocal_573], Local_95.f_35[0], 4.5f) || MISC::GET_GAME_TIMER() > iLocal_624 + 2500)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(uLocal_165[iLocal_573], "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", 3))
						{
							TASK::STOP_ANIM_TASK(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", -2f);
							TASK::TASK_PLAY_ANIM(uLocal_165[iLocal_573], "rcmminute2", "handsup_exit", 2f, -4f, -1, 48, 0.3f, 0, 0, 0);
						}
						if (GlobalFunc_155(uLocal_165[iLocal_573], Local_95.f_35[0], 3f) && PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0], 1))
						{
							GlobalFunc_4935();
						}
						if (iLocal_830 == 0)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], 242628503) != 1)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1794415470) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0], 60000, 2, 1f, 1, 0);
								}
							}
							iLocal_830 = 1;
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], 242628503) != 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1794415470) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0], 60000, 2, 1f, 1, 0);
							}
						}
					}
					else
					{
						PED::SET_PED_MOVEMENT_CLIPSET(uLocal_165[iLocal_573], "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
						if (TASK::IS_PED_GETTING_UP(uLocal_165[iLocal_573]))
						{
							if (iLocal_918 == 0)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", 3))
								{
									TASK::STOP_ANIM_TASK(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", -8f);
								}
								iLocal_919 = MISC::GET_GAME_TIMER();
								iLocal_918 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_919 + 3100)
							{
								if (!PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", 3))
									{
										if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_PLAY_ANIM(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
										}
									}
								}
							}
						}
						else
						{
							if (!PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]) && !PED::IS_PED_BEING_STUNNED(uLocal_165[iLocal_573], joaat("weapon_stungun")))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", 3))
								{
									if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_PLAY_ANIM(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
									}
								}
							}
							iLocal_918 = 0;
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0]))
					{
						iLocal_404 = 1000;
					}
					if (PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0], 1))
					{
						iLocal_404++;
						if (iLocal_573 != 0 || iLocal_404 > 80)
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
								{
									if (iLocal_573 == 0)
									{
										if (GlobalFunc_155(Local_95.f_28[0], Local_95.f_35[0], 15f))
										{
											TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1f, 1, 0);
										}
										else
										{
											TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 2f, 1, 0);
										}
									}
									else
									{
										TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1f, 1, 0);
									}
								}
							}
						}
						if ((iLocal_404 > 20 && iLocal_573 == 0) && !PED::IS_PED_INJURED(Local_95.f_28[1]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 1))
							{
								if (func_308())
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
									{
										if (GlobalFunc_155(Local_95.f_28[1], Local_95.f_35[0], 10f))
										{
											TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1f, 1, 0);
										}
										else
										{
											TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 2f, 1, 0);
										}
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 0)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_95.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_95.f_35[0]) - 90f));
								}
							}
						}
					}
				}
				else if (iLocal_608 == 1)
				{
					if (fLocal_813 < 20f || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 20f))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_165[iLocal_573], "rcmminute2", "kneeling_arrest_get_up", 3))
						{
							TASK::TASK_PLAY_ANIM(uLocal_165[iLocal_573], "rcmminute2", "kneeling_arrest_get_up", 16f, -2f, -1, 0, 0f, 0, 0, 0);
							iLocal_608 = 2;
						}
					}
				}
				else if (iLocal_608 == 2)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_165[iLocal_573], "rcmminute2", "kneeling_arrest_get_up", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_165[iLocal_573], "rcmminute2", "arrest_walk", 2f, -8f, -1, 65585, 0f, 0, 0, 0);
						TASK::TASK_ENTER_VEHICLE(uLocal_165[iLocal_573], Local_95.f_35[0], 60000, 2, 1.2f, 1, 0);
						iLocal_608 = 0;
					}
				}
			}
			else if (!PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]) && !PED::IS_PED_BEING_STUNNED(uLocal_165[iLocal_573], joaat("weapon_stungun")))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_165[iLocal_573], "rcmminute2", "kneeling_arrest_idle", 3))
				{
					TASK::CLEAR_PED_TASKS(uLocal_165[iLocal_573]);
					TASK::TASK_PLAY_ANIM(uLocal_165[iLocal_573], "rcmminute2", "kneeling_arrest_idle", 2f, -16f, -1, 1, 0f, 0, 0, 0);
					if (iLocal_608 != 1)
					{
						GlobalFunc_4935();
					}
					iLocal_608 = 1;
				}
			}
		}
	}
}

int func_308()//Position - 0x2B520
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_397) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_397) > 0.35f)
	{
		iLocal_923 = 1;
	}
	if ((iLocal_926 >= 7 || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_401)) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_402))
	{
		iLocal_923 = 1;
	}
	return iLocal_923;
}

void func_309()//Position - 0x2B571
{
	if (iLocal_573 < 2)
	{
		if (GlobalFunc_4924(uLocal_165[iLocal_573]))
		{
			if (iLocal_834 == 0)
			{
				Local_629[iLocal_573 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_165[iLocal_573], 1) };
			}
			else
			{
				TASK::CLEAR_PED_TASKS(uLocal_165[iLocal_573]);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_198);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_199);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_200);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_201);
			}
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_165[iLocal_573], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_165[iLocal_573], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
		}
	}
	GlobalFunc_146(&iLocal_194);
	if (iLocal_573 == 0)
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[iLocal_573]);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_165[iLocal_573], 0, 0);
		uLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_397, 1);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_397, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_r"));
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[iLocal_573], uLocal_397, "missminuteman_2ig_1", "entertrunk_manuel", 4f, -4f, 4, 83, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_397, 2f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_165[iLocal_573], 1);
	}
	if (iLocal_573 == 1)
	{
		if (iLocal_834 == 0)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0]))
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[iLocal_573]);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_165[iLocal_573], 0, 0);
				uLocal_399 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_399, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_399, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_r"));
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[iLocal_573], uLocal_399, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_399, 2f);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(uLocal_165[iLocal_573]);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_198);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_199);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_200);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_201);
				iLocal_886 = 1;
			}
			iLocal_613 = 1;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_165[iLocal_573], 1);
	}
	if (iLocal_842 == 0)
	{
		if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
			{
				if (iLocal_573 == 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 2f, 1, 0);
				}
				else
				{
					TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1f, 1, 0);
				}
			}
		}
	}
	if (iLocal_926 == 3 || iLocal_926 == 5)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
		{
			if (func_308())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
				{
					if (GlobalFunc_155(Local_95.f_28[1], Local_95.f_35[0], 10f))
					{
						TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1f, 1, 0);
					}
					else
					{
						TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 2f, 1, 0);
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 0)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_95.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_95.f_35[0]) - 90f));
			}
		}
	}
	if (iLocal_573 == 0)
	{
		iLocal_826 = 0;
		iLocal_827 = 0;
		iLocal_824 = 0;
		iLocal_825 = 0;
		iLocal_819 = 0;
		iLocal_820 = 0;
		iLocal_823 = 0;
		iLocal_829 = 0;
		iLocal_830 = 0;
		iLocal_832 = 0;
		iLocal_586 = 0;
		iLocal_835 = 0;
	}
	if (iLocal_573 == 0)
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_95.f_28[1]);
		TASK::TASK_CLEAR_LOOK_AT(Local_95.f_28[0]);
		iLocal_821 = 1;
	}
	if (iLocal_573 == 1)
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_95.f_28[0]);
		iLocal_822 = 1;
		if (iLocal_836 == 1)
		{
			if (iLocal_834 == 0)
			{
				if (GlobalFunc_4924(iLocal_170))
				{
					if (GlobalFunc_4951(iLocal_170, PLAYER::PLAYER_PED_ID()) > 70f)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 1))
						{
							GlobalFunc_164("MIN2_31", 7500, 0);
						}
						else
						{
							if (iLocal_909 == 0)
							{
								GlobalFunc_164("MIN2_19", 7500, 0);
								iLocal_909 = 1;
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
							{
								GlobalFunc_146(&(iLocal_183[iLocal_573]));
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_196))
							{
								GlobalFunc_146(&iLocal_196);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_193))
							{
								iLocal_193 = GlobalFunc_5740(Local_95.f_35[0], 1, 5);
							}
							iLocal_855 = 1;
						}
						GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_12", 6, 1, 0, 0);
					}
				}
			}
		}
	}
	if (iLocal_573 == 2)
	{
		GlobalFunc_200(&uLocal_407, 5);
	}
	if (iLocal_573 == 0)
	{
		iLocal_573++;
	}
	iLocal_593 = MISC::GET_GAME_TIMER();
}


void func_311()//Position - 0x2BA5F
{
	if (GlobalFunc_4924(uLocal_171[0]))
	{
		if (GlobalFunc_4951(uLocal_171[0], PLAYER::PLAYER_PED_ID()) < 15f)
		{
			TASK::TASK_LOOK_AT_ENTITY(uLocal_171[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
	if (iLocal_589 == 0)
	{
		if (GlobalFunc_4924(uLocal_171[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_206);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2lean", "exit", 1f, -8f, -1, 0, 0f, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2", "intro_90_r", 8f, -8f, -1, 0, 0f, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2", "loop_90_r", 8f, -8f, -1, 0, 0f, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2", "outro_90_r", 8f, -8f, -1, 0, 0f, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_206);
			TASK::CLEAR_PED_TASKS(uLocal_171[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_171[0], uLocal_206);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CEM", 7, 0, 0, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(2f, 4f, 0);
				iLocal_589 = 1;
			}
		}
		else
		{
			iLocal_589 = 1;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_588 + 100)
	{
		if (iLocal_589 == 1)
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			iLocal_589 = 2;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_588 + 200)
	{
		if (iLocal_589 == 2)
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				if (GlobalFunc_4947(uLocal_156[iLocal_573]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_156[iLocal_573]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_156[iLocal_573], 101, "Min2DB1", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_156[iLocal_573], 1000f);
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 6f)
						{
							fLocal_817 = 0.82f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 6f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 8f)
						{
							fLocal_817 = 0.91f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 8f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f)
						{
							fLocal_817 = 1f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 10f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 12f)
						{
							fLocal_817 = 1.2f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 12f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 14f)
						{
							fLocal_817 = 1.3f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 14f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 16f)
						{
							fLocal_817 = 1.35f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 16f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 18f)
						{
							fLocal_817 = 1.4f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 18f)
						{
							fLocal_817 = 1.5f;
						}
						VEHICLE::SET_PLAYBACK_SPEED(uLocal_156[iLocal_573], fLocal_817);
					}
				}
				if (GlobalFunc_4947(iLocal_161))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_161, 102, "Min2DB2", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_161, 1100f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_161, fLocal_817);
					}
				}
			}
			iLocal_589 = 5;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_588 + 3400)
	{
		if (iLocal_589 == 5)
		{
			if (GlobalFunc_4924(iLocal_170))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, 242628503) != 1)
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_170, uLocal_202);
				}
			}
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], 242628503) != 1)
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_165[iLocal_573], uLocal_198);
				}
			}
			iLocal_589 = 6;
		}
	}
	if (GlobalFunc_4924(uLocal_165[iLocal_573]))
	{
		if (GlobalFunc_4924(iLocal_170))
		{
			if (iLocal_589 == 10)
			{
				iLocal_588 = (iLocal_588 - 10000);
				iLocal_589 = 11;
			}
		}
	}
}

void func_312()//Position - 0x2BE12
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(263.6694f, 2854.146f, 43.9398f, 15f, joaat("prop_facgate_03_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_l"), 263.6694f, 2854.146f, 43.9398f, 1, 0.85f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(268.127f, 2845.054f, 44.08966f, 15f, joaat("prop_facgate_03_ld_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_ld_l"), 268.127f, 2845.054f, 44.08966f, 1, -0.85f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(346.19f, 2859.69f, 43.63f, 15f, joaat("prop_fnclink_06gate3"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_06gate3"), 346.19f, 2859.69f, 43.63f, 1, 1.2f, 0);
	}
}



void func_315()//Position - 0x2BFD1
{
	float fVar0;
	
	if (iLocal_573 == 0)
	{
		if (iLocal_824 == 0)
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				GlobalFunc_10693(&uLocal_35, uLocal_165[iLocal_573], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			GlobalFunc_4948(&uLocal_35, 0, 0);
		}
	}
	else if (iLocal_573 == 1)
	{
		if (iLocal_600 == 0)
		{
			if (iLocal_836 == 0)
			{
				if (GlobalFunc_4924(iLocal_170))
				{
					GlobalFunc_10693(&uLocal_35, iLocal_170, 0, 0, 1, 1, 1);
				}
			}
			else
			{
				GlobalFunc_4948(&uLocal_35, 0, 0);
				iLocal_601 = MISC::GET_GAME_TIMER();
				iLocal_600 = 1;
			}
		}
		else if (iLocal_600 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_601 + 5)
			{
				if (iLocal_824 == 0)
				{
					if (GlobalFunc_4924(uLocal_165[iLocal_573]))
					{
						GlobalFunc_10693(&uLocal_35, uLocal_165[iLocal_573], 0, 0, 1, 1, 1);
					}
				}
				else
				{
					GlobalFunc_4948(&uLocal_35, 0, 0);
					iLocal_600 = 2;
				}
			}
		}
	}
	else if (iLocal_600 < 3)
	{
		GlobalFunc_4948(&uLocal_35, 0, 0);
		iLocal_600 = 3;
	}
	if (iLocal_573 == 0)
	{
		if (iLocal_835 == 1)
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				if (GlobalFunc_4947(uLocal_156[iLocal_573]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
						{
							HUD::SET_BLIP_SCALE(iLocal_183[iLocal_573], 1f);
						}
						if (MISC::GET_GAME_TIMER() > iLocal_603 + 15000)
						{
							if (GlobalFunc_156(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 1) > 100f)
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(uLocal_165[iLocal_573], 20f);
							}
							else
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(uLocal_165[iLocal_573], 25f);
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_573 == 1)
	{
		if (iLocal_835 == 1)
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				if (GlobalFunc_4947(uLocal_156[iLocal_573]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 0))
					{
						if (iLocal_859 == 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -258271821) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 24f, 786468);
							}
						}
						else if (iLocal_858 == 1)
						{
							if (GlobalFunc_4947(iLocal_161) && GlobalFunc_155(iLocal_170, uLocal_165[iLocal_573], 20f))
							{
								fVar0 = -1f;
							}
							else
							{
								fVar0 = 22f;
							}
							if (!iLocal_890)
							{
								if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_156[iLocal_573]) > 30)
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_165[iLocal_573], uLocal_156[iLocal_573], "Min2_Bike02", 786468, 32, 8, -1, fVar0, 0, 1073741824);
									iLocal_890 = 1;
								}
							}
							else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_156[iLocal_573]))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_165[iLocal_573], uLocal_156[iLocal_573], "Min2_Bike02", 786468, 32, 8, -1, fVar0, 0, 1073741824);
							}
							else
							{
								func_316(fVar0);
							}
						}
						if (iLocal_840 == 0)
						{
							PED::SET_PED_CAN_RAGDOLL(uLocal_165[iLocal_573], 1);
							if (HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
							{
								HUD::SET_BLIP_SCALE(iLocal_183[iLocal_573], 1f);
							}
							iLocal_840 = 1;
						}
					}
				}
			}
			if (GlobalFunc_4924(iLocal_170))
			{
				if (GlobalFunc_4947(iLocal_161))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_161, 0))
					{
						if (iLocal_859 == 1)
						{
							if (!PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 0) || !GlobalFunc_155(iLocal_170, uLocal_165[iLocal_573], 29f))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -258271821) != 1)
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_170, iLocal_161, 24f, 786468);
									iLocal_857 = 0;
								}
							}
						}
						else
						{
							if (iLocal_858 == 0)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_170, 350.9472f, 2857.253f, 39.28188f, 379.0718f, 2857.876f, 50.55812f, 21.25f, 0, 1, 0))
								{
									if (GlobalFunc_4924(uLocal_165[iLocal_573]))
									{
										if (GlobalFunc_4947(uLocal_156[iLocal_573]))
										{
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_165[iLocal_573], uLocal_156[iLocal_573], "Min2_Bike02", 262144, 28, 0, -1, -1f, 0, 1073741824);
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_170, iLocal_161, "Min2_Bike02", 262144, 27, 0, -1, -1f, 0, 1073741824);
										}
									}
									iLocal_858 = 1;
								}
							}
							if ((((GlobalFunc_4947(uLocal_156[iLocal_573]) && GlobalFunc_4924(uLocal_165[iLocal_573])) && PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 0)) && GlobalFunc_155(iLocal_170, uLocal_165[iLocal_573], 22f)) && TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_156[iLocal_573]) > 29)
							{
								if (iLocal_857 == 0)
								{
									TASK::TASK_VEHICLE_ESCORT(iLocal_170, iLocal_161, uLocal_156[iLocal_573], -1, 40f, 262144, fLocal_572, 20, 1101004800);
									iLocal_857 = 1;
								}
							}
							else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_170, iLocal_161, "Min2_Bike02", 262144, 0, 8, -1, -1f, 0, 1073741824);
								iLocal_857 = 0;
							}
						}
						if (iLocal_841 == 0)
						{
							PED::SET_PED_CAN_RAGDOLL(iLocal_170, 1);
							if (HUD::DOES_BLIP_EXIST(iLocal_196))
							{
								HUD::SET_BLIP_SCALE(iLocal_196, 1f);
							}
							iLocal_841 = 1;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_170, 1300.489f, 1099.818f, 101.6563f, 1307.388f, 1002.332f, 113.9629f, 21.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_165[iLocal_573], 1300.489f, 1099.818f, 101.6563f, 1307.388f, 1002.332f, 113.9629f, 21.25f, 0, 1, 0))
			{
				iLocal_859 = 1;
			}
		}
	}
	if (iLocal_573 == 0)
	{
		if (iLocal_824 == 0)
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_165[iLocal_573], 1);
			}
		}
	}
	else if (iLocal_573 == 1)
	{
		if (iLocal_824 == 0)
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_165[iLocal_573], 1);
			}
		}
		if (iLocal_836 == 0)
		{
			if (GlobalFunc_4924(iLocal_170))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_170, 1);
			}
		}
	}
}

void func_316(float fParam0)//Position - 0x2C583
{
	if (fParam0 == -1f)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uLocal_156[iLocal_573]);
	}
	else if (ENTITY::GET_ENTITY_SPEED(uLocal_156[iLocal_573]) > fParam0)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_156[iLocal_573], fParam0);
	}
	else
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uLocal_156[iLocal_573]);
	}
}
























void func_340()//Position - 0x2D411
{
	float fVar0;
	
	if (iLocal_926 == 8 || iLocal_926 == 10)
	{
		if (iLocal_836 == 1)
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0]))
			{
				if (iLocal_820 == 0)
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_95.f_35[0]) < 0.1f)
					{
						if (GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1) < 40f)
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 0) && !func_341())
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 2, 0);
								TASK::TASK_LOOK_AT_ENTITY(Local_95.f_28[1], iLocal_170, -1, 0, 2);
								TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], iLocal_170, 20000, 1056964608, 1073741824, 1073741824, 0);
								if (iLocal_627 != 1)
								{
									GlobalFunc_5105();
								}
								iLocal_627 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_820 = 1;
			}
			if (iLocal_820 == 1)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_627 == 1)
					{
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_3", 9, 0, 0, 0))
						{
							iLocal_627 = 2;
						}
					}
				}
				if (iLocal_837 == 0)
				{
					if (GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1) < 6f && func_283(Local_95.f_28[1], iLocal_170, 1126825984, 1, 250, 7))
					{
						if (!PED::IS_PED_BEING_STUNNED(iLocal_170, 0) || TASK::IS_PED_GETTING_UP(iLocal_170))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) != 0)
							{
								TASK::TASK_COMBAT_PED(Local_95.f_28[1], iLocal_170, 67108864, 16);
							}
						}
						else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_95.f_28[1]))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -828834893) != 0) && !func_341())
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_95.f_28[1], 0, 0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 0)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_95.f_28[1], iLocal_170, -1, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) == 1)
					{
						if (GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1) > 9f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 0)
							{
								TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], iLocal_170, 20000, 1056964608, 1073741824, 1073741824, 0);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 0)
					{
						TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], iLocal_170, 20000, 1056964608, 1073741824, 1073741824, 0);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1435919172) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1435919172) != 0)
					{
						TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], iLocal_170, 20000, 1056964608, 1073741824, 1073741824, 0);
					}
				}
				else
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) == 1)
					{
						TASK::CLEAR_PED_TASKS(Local_95.f_28[1]);
					}
					if (GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1) < 3f)
					{
						if (GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1) < 1.4f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1758697641) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1758697641) != 0)
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_95.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_28[1], 0f, -4.5f, 0f), iLocal_170, 2f, 0, 2.5f, 1082130432, 1, 0, 0, -957453492, 20000);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 0)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_95.f_28[1], iLocal_170, -1, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1207174364) != 0)
					{
						if (GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1) < 9f)
						{
							fVar0 = 1f;
						}
						else
						{
							fVar0 = 2f;
						}
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_95.f_28[1], iLocal_170, iLocal_170, fVar0, 0, 2f, 1082130432, 1, 0, -957453492);
					}
				}
			}
		}
	}
	else if (iLocal_824 == 1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0]))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_95.f_35[0]) < 0.1f)
			{
				if (GlobalFunc_156(Local_95.f_28[1], uLocal_165[iLocal_573], 1) < 40f)
				{
					if (iLocal_819 == 1)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_590 + 400)
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], -1, 0, 2);
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 0) && !func_341())
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 2, 0);
								TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], -1, 1056964608, 1073741824, 1073741824, 0);
								if (iLocal_626 != 1)
								{
									GlobalFunc_5105();
								}
								iLocal_626 = 1;
								iLocal_820 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_820 == 1)
		{
			if (iLocal_825 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_626 == 1)
					{
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_1", 9, 0, 0, 0))
						{
							iLocal_626 = 2;
						}
					}
				}
				if (GlobalFunc_156(Local_95.f_28[1], uLocal_165[iLocal_573], 1) < 9f && func_283(Local_95.f_28[1], uLocal_165[iLocal_573], 1126825984, 1, 250, 7))
				{
					if (!PED::IS_PED_BEING_STUNNED(uLocal_165[iLocal_573], 0) || TASK::IS_PED_GETTING_UP(uLocal_165[iLocal_573]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) != 0)
						{
							TASK::TASK_COMBAT_PED(Local_95.f_28[1], uLocal_165[iLocal_573], 67108864, 16);
						}
					}
					else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_95.f_28[1]))
					{
						if (((TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -828834893) != 0) && ENTITY::GET_ENTITY_SPEED(Local_95.f_35[0]) < 0.1f) && !func_341())
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_95.f_28[1], 1200, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 0)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], -1, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) == 1)
				{
					if (GlobalFunc_156(Local_95.f_28[1], uLocal_165[iLocal_573], 1) > 11f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 0)
						{
							TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], 60000, 1056964608, 1073741824, 1073741824, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], 60000, 1056964608, 1073741824, 1073741824, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1435919172) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1435919172) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], 20000, 1056964608, 1073741824, 1073741824, 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) == 1)
				{
					TASK::CLEAR_PED_TASKS(Local_95.f_28[1]);
				}
				if (GlobalFunc_156(Local_95.f_28[1], uLocal_165[iLocal_573], 1) < 3.5f || PED::IS_PED_IN_VEHICLE(uLocal_165[0], Local_95.f_35[0], 1))
				{
					if (GlobalFunc_156(Local_95.f_28[1], uLocal_165[iLocal_573], 1) < 1.4f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1758697641) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1758697641) != 0)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_95.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_28[1], 0f, -4.5f, 0f), uLocal_165[iLocal_573], 2f, 0, 2.5f, 1082130432, 1, 0, 0, -957453492, 20000);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 1630799643) != 0)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], -1, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1207174364) != 0)
				{
					if (GlobalFunc_156(Local_95.f_28[1], uLocal_165[iLocal_573], 1) < 9f)
					{
						fVar0 = 1f;
					}
					else
					{
						fVar0 = 2f;
					}
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_95.f_28[1], uLocal_165[iLocal_573], uLocal_165[iLocal_573], fVar0, 0, 2.7f, 1082130432, 1, 0, -957453492);
				}
			}
		}
	}
}

int func_341()//Position - 0x2DE4A
{
	if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0]) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_95.f_35[0], 14), 1.5f, 1.5f, 1.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_342()//Position - 0x2DE96
{
	float fVar0;
	float fVar1;
	
	if (iLocal_926 == 8 || iLocal_926 == 10)
	{
		fVar0 = 2.2f;
		fVar1 = 3.5f;
	}
	else
	{
		fVar0 = 4.5f;
		fVar1 = 6f;
	}
	if (iLocal_824 == 1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0]))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_95.f_35[0]) < 0.1f)
			{
				if (GlobalFunc_156(Local_95.f_28[0], uLocal_165[iLocal_573], 1) < 40f)
				{
					iLocal_590 = MISC::GET_GAME_TIMER();
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1227113341) != 0)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 2, 0);
						TASK::TASK_LOOK_AT_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], -1, 0, 2);
						TASK::TASK_GO_TO_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], 20000, 1056964608, 1073741824, 1073741824, 0);
						if (iLocal_573 != 0)
						{
							if (iLocal_628 != 1)
							{
								GlobalFunc_5105();
							}
							iLocal_628 = 1;
						}
						iLocal_819 = 1;
					}
				}
			}
		}
		if (iLocal_819 == 1)
		{
			if (!GlobalFunc_111())
			{
				if (iLocal_628 == 1)
				{
					if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_5", 9, 0, 0, 0))
					{
						iLocal_628 = 2;
					}
				}
			}
			if (iLocal_825 == 0)
			{
				if (GlobalFunc_156(Local_95.f_28[0], uLocal_165[iLocal_573], 1) < 6f && func_283(Local_95.f_28[0], uLocal_165[iLocal_573], 1126825984, 1, 250, 7))
				{
					if (!PED::IS_PED_BEING_STUNNED(uLocal_165[iLocal_573], 0) || TASK::IS_PED_GETTING_UP(uLocal_165[iLocal_573]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 780511057) != 0)
						{
							iLocal_590 = MISC::GET_GAME_TIMER();
							TASK::TASK_COMBAT_PED(Local_95.f_28[0], uLocal_165[iLocal_573], 67108864, 16);
						}
					}
					else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_95.f_28[0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -828834893) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_95.f_28[0], 0, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1630799643) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1630799643) != 0)
					{
						iLocal_590 = MISC::GET_GAME_TIMER();
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], -1, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 780511057) == 1)
				{
					if (GlobalFunc_156(Local_95.f_28[0], uLocal_165[iLocal_573], 1) > 9f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1227113341) != 0)
						{
							TASK::TASK_GO_TO_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], 20000, 1056964608, 1073741824, 1073741824, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], 20000, 1056964608, 1073741824, 1073741824, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1435919172) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1435919172) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], 20000, 1056964608, 1073741824, 1073741824, 0);
				}
			}
			else
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 780511057) == 1)
				{
					TASK::CLEAR_PED_TASKS(Local_95.f_28[0]);
				}
				if (GlobalFunc_156(Local_95.f_28[0], uLocal_165[iLocal_573], 1) < fVar1)
				{
					if (GlobalFunc_156(Local_95.f_28[0], uLocal_165[iLocal_573], 1) < 1.6f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1758697641) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1758697641) != 0)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_95.f_28[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_28[0], 0f, -4.5f, 0f), uLocal_165[iLocal_573], 2f, 0, 2.5f, 1082130432, 1, 0, 0, -957453492, 20000);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1630799643) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 1630799643) != 0)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], -1, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1207174364) != 0)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_95.f_28[0], uLocal_165[iLocal_573], uLocal_165[iLocal_573], 1f, 0, fVar0, 1082130432, 1, 0, -957453492);
				}
			}
		}
	}
}

void func_343()//Position - 0x2E3AE
{
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95.f_35[0]))
	{
		if ((((PAD::IS_CONTROL_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 278)) || PAD::IS_CONTROL_PRESSED(0, 279)) || MISC::GET_GAME_TIMER() > iLocal_595 + 3500)
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_95.f_35[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_95.f_35[0]);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
}


void func_345()//Position - 0x2E4CD
{
	if (iLocal_862 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_588 + 5000)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_START_STA");
			iLocal_862 = 1;
		}
	}
	GlobalFunc_146(&(uLocal_188[iLocal_573]));
	func_312();
	func_264();
	func_311();
	if (MISC::GET_GAME_TIMER() > iLocal_588 + 2000)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
			{
				iLocal_183[iLocal_573] = GlobalFunc_4955(uLocal_165[iLocal_573], 1, 0, 5);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[iLocal_573], 0))
				{
					HUD::SET_BLIP_SCALE(iLocal_183[iLocal_573], 0.7f);
				}
				else
				{
					HUD::SET_BLIP_SCALE(iLocal_183[iLocal_573], 1f);
				}
				if (iLocal_912 == 0)
				{
					iLocal_912 = 1;
					if (iLocal_573 == 0)
					{
						GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_JOSEF", "MIN2_JOSEF_4", 5, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(3f, 8f, 1);
					}
					else if (iLocal_573 == 1)
					{
						GlobalFunc_173(&uLocal_407, 4, iLocal_170, "IMMIGRANTMALE", 0, 1);
						GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_15", 6, 1, 0, 0);
					}
					else if (iLocal_573 == 2)
					{
					}
				}
				if (iLocal_855 == 1)
				{
					if (iLocal_856 == 0)
					{
						GlobalFunc_164("MIN2_31", 7000, 0);
						iLocal_856 = 1;
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_196))
			{
				iLocal_196 = GlobalFunc_4955(iLocal_170, 1, 0, 5);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_170, 0))
				{
					HUD::SET_BLIP_SCALE(iLocal_196, 0.7f);
				}
				else
				{
					HUD::SET_BLIP_SCALE(iLocal_196, 1f);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
		{
			if (iLocal_855 == 0)
			{
				if (iLocal_843 == 0)
				{
					if (iLocal_913 == 0)
					{
						GlobalFunc_164("MIN2_39", 7000, 0);
						iLocal_913 = 1;
					}
					iLocal_843 = 1;
				}
			}
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_588 + 5000)
	{
		func_408();
		func_407();
		func_347(2, "Dirt bike chase", 1, 0, 0, 1);
		GlobalFunc_574(781, 0);
		iLocal_926 = 8;
	}
}


void func_347(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2E6F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = GlobalFunc_5110(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_133(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		func_348(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}

void func_348(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2E86E
{
	func_349(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_349(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2E88A
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7626();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10687(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7904(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8507(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}


























































void func_407()//Position - 0x338B7
{
	if (iLocal_573 == 0)
	{
		if (GlobalFunc_4947(uLocal_156[iLocal_573]))
		{
			if (GlobalFunc_4924(uLocal_165[iLocal_573]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_197);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], 161.1383f, 4417.466f, 74.7775f, 10f, 0, joaat("blazer"), 786468, 30f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], 17.4915f, 4453.201f, 58.9788f, 20f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], -91.1074f, 4301.092f, 45.41f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], -223.0806f, 4012.289f, 36.0401f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], -194.4012f, 3733.113f, 42.2381f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], 89.5701f, 3582.797f, 38.791f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], 326.0252f, 3438.876f, 35.3116f, 25f, 0, joaat("blazer"), 786468, 25f, 2f);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, uLocal_156[iLocal_573], 22f, 786468);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_197);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_165[iLocal_573], uLocal_197);
			}
		}
	}
	if (iLocal_573 == 1)
	{
		if (GlobalFunc_4924(uLocal_165[iLocal_573]))
		{
			if (iLocal_845 == 0)
			{
				if (GlobalFunc_4947(uLocal_156[iLocal_573]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_156[iLocal_573]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_156[iLocal_573], 101, "Min2DB1", 1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_156[iLocal_573], "MINUTE_02_SCENE_SCRAMBLER_BIKE", 0);
					}
				}
			}
		}
		if (GlobalFunc_4924(iLocal_170))
		{
			if (iLocal_844 == 0)
			{
				if (GlobalFunc_4947(iLocal_161))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_161, 102, "Min2DB2", 1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_161, "MINUTE_02_SCENE_SCRAMBLER_BIKE", 0);
					}
				}
			}
		}
	}
	iLocal_575 = MISC::GET_GAME_TIMER();
	iLocal_835 = 1;
}

void func_408()//Position - 0x33B13
{
	if (iLocal_839 == 0)
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_198);
		if (GlobalFunc_4947(uLocal_156[iLocal_573]))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uLocal_156[iLocal_573], "Min2_Bike02", 786468, 28, 0, -1, -1f, 0, 1073741824);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], Local_645[44 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], Local_645[45 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_156[iLocal_573], Local_645[46 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, uLocal_156[iLocal_573], 24f, 786468);
		}
		TASK::CLOSE_SEQUENCE_TASK(uLocal_198);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_202);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		if (GlobalFunc_4947(iLocal_161))
		{
			if (GlobalFunc_4947(uLocal_156[iLocal_573]))
			{
				TASK::TASK_VEHICLE_ESCORT(0, iLocal_161, uLocal_156[iLocal_573], -1, 40f, 262144, fLocal_572, 20, 1101004800);
			}
		}
		TASK::CLOSE_SEQUENCE_TASK(uLocal_202);
		iLocal_839 = 1;
	}
}


void func_410()//Position - 0x33C9A
{
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.167f, 42.6129f, 1) < 200f)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()), 0);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.167f, 42.6129f, 250f))
		{
			if (iLocal_867 == 1)
			{
				func_417();
				func_416();
			}
			iLocal_867 = 0;
			iLocal_868 = 0;
			func_414();
			func_411();
			func_312();
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_188[iLocal_573]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.167f, 42.6129f, 6f, 6f, 2f, 1, 1, 0))
			{
			}
			if (iLocal_854 == 0)
			{
				func_10();
				func_347(1, "Driving to the cement factory", 0, 0, 0, 1);
				iLocal_854 = 1;
			}
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.167f, 42.6129f, 240f))
			{
				func_408();
			}
		}
		else if (iLocal_854 == 0)
		{
		}
		func_264();
		if (iLocal_823 == 1)
		{
			func_408();
			iLocal_588 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_START_FORA");
			iLocal_926 = 7;
		}
		if (GlobalFunc_4924(Local_95.f_28[1]))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 2, 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_400))
			{
				if (func_308())
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
					{
						if (GlobalFunc_155(Local_95.f_28[1], Local_95.f_35[0], 10f))
						{
							TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1f, 1, 0);
						}
						else
						{
							TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 2f, 1, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_95.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_95.f_35[0]) - 90f));
				}
			}
		}
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 2, 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1073741824, 1, 0);
				}
			}
		}
		if (!GlobalFunc_111())
		{
			if (!iLocal_881 && iLocal_872)
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.167f, 42.6129f, 200f))
				{
					if ((((GlobalFunc_4947(Local_95.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && !GlobalFunc_663("MIN2_48", 0, 0))
					{
						if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JJ4", 5, 0, 0, 0))
						{
							iLocal_881 = 1;
						}
					}
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_400))
			{
				if (!iLocal_892)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && GlobalFunc_155(Local_95.f_28[0], Local_95.f_35[0], 40f))
							{
								if ((((!GlobalFunc_663("MIN2_29", 0, 0) && !GlobalFunc_663("MIN2_32", 0, 0)) && !GlobalFunc_663("MIN2_33", 0, 0)) && !GlobalFunc_663("MIN2_49", 0, 0)) && !GlobalFunc_663("MIN2_06", 0, 0))
								{
									GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_NOJOE", 5, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_NOJOE", 5, 1, 0, 0);
								}
								iLocal_892 = 1;
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0) && GlobalFunc_155(Local_95.f_28[1], Local_95.f_35[0], 40f))
							{
								if ((((!GlobalFunc_663("MIN2_29", 0, 0) && !GlobalFunc_663("MIN2_32", 0, 0)) && !GlobalFunc_663("MIN2_33", 0, 0)) && !GlobalFunc_663("MIN2_49", 0, 0)) && !GlobalFunc_663("MIN2_06", 0, 0))
								{
									GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_NOJOSEF", 5, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_NOJOSEF", 5, 1, 0, 0);
								}
								iLocal_892 = 1;
							}
						}
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
				{
					if (iLocal_893 < 3 && MISC::GET_GAME_TIMER() > iLocal_894 + 6000)
					{
						if ((((!GlobalFunc_663("MIN2_29", 0, 0) && !GlobalFunc_663("MIN2_32", 0, 0)) && !GlobalFunc_663("MIN2_33", 0, 0)) && !GlobalFunc_663("MIN2_49", 0, 0)) && !GlobalFunc_663("MIN2_06", 0, 0))
						{
							if ((!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && !GlobalFunc_155(Local_95.f_28[0], Local_95.f_35[0], 50f))
							{
								GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_GOBACK2", 5, 0, 0, 0);
								iLocal_893++;
								iLocal_894 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
							}
							if ((!PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && !GlobalFunc_155(Local_95.f_28[1], Local_95.f_35[0], 50f))
							{
								GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_GOBACK1", 5, 0, 0, 0);
								iLocal_893++;
								iLocal_894 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
							}
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_867 = 1;
		GlobalFunc_69(&(uLocal_165[1]));
		GlobalFunc_69(&iLocal_170);
		GlobalFunc_69(&(uLocal_171[0]));
		GlobalFunc_6692(&(uLocal_156[1]));
		GlobalFunc_6692(&iLocal_161);
		GlobalFunc_6692(&iLocal_162);
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_193))
			{
				iLocal_193 = GlobalFunc_5740(Local_95.f_35[0], 1, 5);
			}
		}
		else
		{
			if (iLocal_868 == 0)
			{
				GlobalFunc_164("MIN2_COPS", 7500, 0);
				iLocal_868 = 1;
			}
			GlobalFunc_146(&iLocal_193);
		}
	}
}

void func_411()//Position - 0x343B4
{
	if (GlobalFunc_4947(uLocal_156[iLocal_573]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_165[iLocal_573]))
		{
			if (iLocal_573 == 0)
			{
				func_412(&(uLocal_165[iLocal_573]), 59, uLocal_156[iLocal_573], -1, 1);
				PED::SET_DRIVER_ABILITY(uLocal_165[iLocal_573], 1f);
				PED::SET_DRIVER_RACING_MODIFIER(uLocal_165[iLocal_573], 1f);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (iLocal_573 == 1)
			{
				uLocal_165[iLocal_573] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_156[iLocal_573], 26, joaat("s_m_m_migrant_01"), -1, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_165[iLocal_573], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_165[iLocal_573], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_165[iLocal_573], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_165[iLocal_573], 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_165[iLocal_573], 8, 1, 0, 0);
				if (GlobalFunc_4947(iLocal_161))
				{
					iLocal_170 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_161, 26, joaat("s_m_m_migrant_01"), -1, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 6, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 8, 1, 0, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_170, 1, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_170, 281, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_170, 32, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_170, 29, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_170, 116, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_170, 170, 1);
					PED::SET_PED_MAX_TIME_IN_WATER(iLocal_170, 2f);
					if (PED::IS_PED_ON_ANY_BIKE(iLocal_170))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_170, 0);
					}
					PED::SET_PED_DIES_WHEN_INJURED(iLocal_170, 0);
					TASK::TASK_SET_DECISION_MAKER(iLocal_170, -1143637011);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_170, 1);
					ENTITY::SET_ENTITY_HEALTH(iLocal_170, 300);
					PED::SET_PED_KEEP_TASK(iLocal_170, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_170, 118, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_170, 208, 1);
					if (PED::IS_PED_ON_ANY_BIKE(uLocal_165[iLocal_573]))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_165[iLocal_573], 0);
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_migrant_01"));
			}
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_165[iLocal_573], 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_165[iLocal_573], 20, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_165[iLocal_573], 281, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_165[iLocal_573], 32, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_165[iLocal_573], 29, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_165[iLocal_573], 116, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_165[iLocal_573], 170, 1);
			PED::SET_PED_MAX_TIME_IN_WATER(uLocal_165[iLocal_573], 2f);
			TASK::TASK_SET_DECISION_MAKER(uLocal_165[iLocal_573], -1143637011);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_165[iLocal_573], 1);
			ENTITY::SET_ENTITY_HEALTH(uLocal_165[iLocal_573], 300);
			PED::SET_PED_KEEP_TASK(uLocal_165[iLocal_573], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_165[iLocal_573], 118, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_165[iLocal_573], 208, 1);
		}
	}
	if (GlobalFunc_4924(uLocal_165[iLocal_573]))
	{
		if (iLocal_573 == 0)
		{
			if (GlobalFunc_4951(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID()) < 500f)
			{
				iLocal_823 = 1;
			}
		}
		else
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 313.4914f, 2974.187f, 17.27065f, 354.2191f, 2772.717f, 84.74885f, 122.25f, 0, 1, 0) || func_294(uLocal_165[iLocal_573], 1, 0, 0, 0)) || func_294(iLocal_170, 1, 0, 0, 0))
			{
				iLocal_823 = 1;
				iLocal_589 = 10;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 268.0726f, 2861.26f, 37.14352f, 274.735f, 2847.247f, 66.00835f, 15.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.032f, 2884.984f, 37.30743f, 304.8129f, 2837.81f, 73.93606f, 57.5f, 0, 1, 0))
			{
				iLocal_823 = 1;
			}
		}
	}
}

int func_412(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x34745
{
	int iVar0;
	
	if (!GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4946(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 0, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
				GlobalFunc_189(*iParam0, iParam1);
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


void func_414()//Position - 0x3480B
{
	if (iLocal_573 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_156[iLocal_573]))
		{
			uLocal_156[iLocal_573] = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 246.4836f, 4493.23f, 66.0521f, 90.3329f, 1, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_156[iLocal_573], 2);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_156[iLocal_573], 1);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(uLocal_156[iLocal_573], 14f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
		}
	}
	if (iLocal_573 == 1)
	{
		if (GlobalFunc_4947(uLocal_156[0]))
		{
			GlobalFunc_131(&(uLocal_156[0]));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_156[iLocal_573]))
		{
			if (GlobalFunc_199() && GlobalFunc_198() == 2)
			{
				uLocal_156[iLocal_573] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 303.0419f, 2892.954f, 42.5927f, 209.59f, 1, 1);
			}
			else
			{
				uLocal_156[iLocal_573] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 303.0419f, 2892.954f, 42.5927f, 209.59f, 1, 1);
			}
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_156[iLocal_573], 2);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_156[iLocal_573], 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_156[iLocal_573], 1, 1);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(uLocal_156[iLocal_573], 14f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161))
		{
			if (GlobalFunc_199() && GlobalFunc_198() == 2)
			{
				iLocal_161 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 297.1f, 2895.498f, 42.5893f, 214.25f, 1, 1);
			}
			else
			{
				iLocal_161 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 297.1f, 2895.498f, 42.5893f, 214.25f, 1, 1);
			}
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_156[iLocal_573], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_161, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_161, 1, 1);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_161, 14f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_162))
		{
			iLocal_162 = VEHICLE::CREATE_VEHICLE(joaat("speedo"), 290.8079f, 2859.289f, 42.6421f, 313.9074f, 1, 1);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_162, 2, 0, 0);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_162, 3, 0, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_162, 1);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_162, 15f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("speedo"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_171[0]))
		{
			uLocal_171[0] = PED::CREATE_PED(26, joaat("s_m_m_gaffer_01"), 289.681f, 2860.004f, 42.6421f, 66.4056f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_171[0], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_171[0], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_171[0], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_171[0], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_171[0], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_171[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_171[0], 4, 1, 0, 0);
			TASK::TASK_PLAY_ANIM(uLocal_171[0], "rcmminute2lean", "idle_c", 8f, -2f, -1, 1, 0f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_171[0], 17, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gaffer_01"));
		}
	}
}


void func_416()//Position - 0x34B1B
{
	while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("speedo")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gaffer_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_migrant_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(269, "Min2Rolling")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "Min2DB1")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "Min2DB2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Min2_Bike02"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_417()//Position - 0x34BAF
{
	TASK::REQUEST_WAYPOINT_RECORDING("Min2_Bike02");
	VEHICLE::REQUEST_VEHICLE_RECORDING(269, "Min2Rolling");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "Min2DB1");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "Min2DB2");
	STREAMING::REQUEST_MODEL(joaat("speedo"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_gaffer_01"));
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_migrant_01"));
}


void func_419()//Position - 0x34C23
{
	func_340();
	func_307();
	func_420();
	func_264();
	if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
	{
		func_342();
	}
	if (iLocal_821 == 1)
	{
		iLocal_867 = 1;
		RECORDING::_0x293220DA1B46CEBC(5f, 5f, 1);
		iLocal_926 = 6;
	}
}

void func_420()//Position - 0x34C81
{
	if (iLocal_573 == 0)
	{
		if (GlobalFunc_4924(uLocal_165[iLocal_573]))
		{
			if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573]) > 240f)
			{
				if (iLocal_902 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_603 + 12000)
					{
						iLocal_902 = 1;
					}
				}
				else if (fLocal_811 > 300f)
				{
					sLocal_922 = "MIN2_43";
					iLocal_926 = 16;
				}
			}
		}
	}
}

void func_421()//Position - 0x34CE9
{
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (GlobalFunc_4924(uLocal_165[0]))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[0], 0) && !PED::IS_PED_RAGDOLL(uLocal_165[0])) && ENTITY::GET_ENTITY_HEALTH(uLocal_165[0]) > 150)
		{
			ENTITY::SET_ENTITY_HEALTH(uLocal_165[0], 150);
		}
		if ((iLocal_888 && GlobalFunc_111()) && !PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]))
		{
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
			iLocal_888 = 0;
		}
		func_424();
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			if (GlobalFunc_4924(Local_95.f_28[1]))
			{
				if (iLocal_824 == 1)
				{
					if (iLocal_825 == 0)
					{
						if (GlobalFunc_115(uLocal_156[0]))
						{
							if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(uLocal_156[0]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_156[0], 0, 1);
							}
						}
						if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -1817882002) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -258271821) == 1) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], -235832601) == 1)
						{
							TASK::CLEAR_PED_TASKS(uLocal_165[iLocal_573]);
						}
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if ((!GlobalFunc_155(uLocal_165[iLocal_573], Local_95.f_28[0], 10f) && !GlobalFunc_155(uLocal_165[iLocal_573], Local_95.f_28[1], 10f)) && !GlobalFunc_155(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 10f))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_155(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 100f))
									{
										if (iLocal_917 == 0)
										{
											GlobalFunc_164("MIN2_48", 7500, 0);
											iLocal_917 = 1;
										}
									}
								}
								if (!ENTITY::IS_ENTITY_IN_WATER(uLocal_165[iLocal_573]))
								{
									iLocal_609 = 0;
									if (!PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]))
									{
										iLocal_863 = 0;
										if (PED::CAN_PED_RAGDOLL(uLocal_165[iLocal_573]))
										{
											iLocal_864 = 1;
											PED::SET_PED_TO_RAGDOLL(uLocal_165[iLocal_573], 1000, 2000, 1, 1, 1, 0);
										}
									}
									else if (iLocal_864 == 1)
									{
										if (iLocal_863 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_165[iLocal_573]))
										{
											PED::CREATE_NM_MESSAGE(1, 787);
											PED::GIVE_PED_NM_MESSAGE(uLocal_165[iLocal_573]);
											iLocal_864 = 0;
											iLocal_863 = 1;
											if (GlobalFunc_155(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 40f))
											{
												if (!GlobalFunc_111())
												{
													GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
													GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_INJ1", 7, 1, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									iLocal_609++;
									if (iLocal_609 > 20)
									{
										ENTITY::SET_ENTITY_HEALTH(uLocal_165[iLocal_573], 0);
									}
								}
							}
							if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
							{
								if (!ENTITY::IS_ENTITY_IN_WATER(uLocal_165[iLocal_573]))
								{
									iLocal_609 = 0;
									if (!PED::IS_PED_RAGDOLL(uLocal_165[iLocal_573]))
									{
										iLocal_863 = 0;
										if (PED::CAN_PED_RAGDOLL(uLocal_165[iLocal_573]))
										{
											iLocal_864 = 1;
											PED::SET_PED_TO_RAGDOLL(uLocal_165[iLocal_573], 1000, 2000, 1, 1, 1, 0);
										}
									}
									else if (iLocal_864 == 1)
									{
										if (iLocal_863 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_165[iLocal_573]))
										{
											PED::CREATE_NM_MESSAGE(1, 787);
											PED::GIVE_PED_NM_MESSAGE(uLocal_165[iLocal_573]);
											iLocal_864 = 0;
											iLocal_863 = 1;
											if (GlobalFunc_155(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 40f))
											{
												if (!GlobalFunc_111())
												{
													GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
													GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_INJ1", 7, 1, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									iLocal_609++;
									if (iLocal_609 > 20)
									{
										ENTITY::SET_ENTITY_HEALTH(uLocal_165[iLocal_573], 0);
									}
								}
							}
						}
					}
				}
			}
		}
		if (GlobalFunc_4947(uLocal_156[iLocal_573]))
		{
			if (PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
				{
					GlobalFunc_4501(iLocal_183[iLocal_573], uLocal_165[iLocal_573], 300f, 0.8f, 0);
				}
			}
			if (iLocal_824 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_603 + 9000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if (GlobalFunc_4924(Local_95.f_28[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
									{
										if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 180f))
										{
											if (iLocal_606 < 3)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_605 + 6000)
												{
													if (!GlobalFunc_111())
													{
														if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_CATCH1", 7, 0, 0, 0))
														{
															iLocal_606++;
															iLocal_605 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
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
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[iLocal_573], 242628503) != 1)
					{
						TASK::TASK_PERFORM_SEQUENCE(uLocal_165[iLocal_573], uLocal_197);
					}
				}
			}
			else if (!GlobalFunc_663("MIN2_48", 0, 0))
			{
				if (!iLocal_882)
				{
					if (!GlobalFunc_111())
					{
						if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 20f))
							{
								if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_GOBACK", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(3f, 7f, 1);
									iLocal_882 = 1;
								}
							}
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (iLocal_615 < 4)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_616 + 6000)
						{
							if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
							{
								if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 40f))
								{
									if (iLocal_615 < 4)
									{
										if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_REMIND", 7, 0, 0, 0))
										{
											iLocal_615++;
											iLocal_616 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
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
	func_342();
	func_340();
	func_315();
	func_422();
	func_264();
	func_420();
	if (MISC::GET_GAME_TIMER() > iLocal_603 + 20000)
	{
		if (GlobalFunc_4924(uLocal_165[0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uLocal_165[0]) || PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[0], 0))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			}
		}
	}
	else
	{
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (iLocal_825 == 1)
	{
		AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
		iLocal_888 = 0;
		iLocal_606 = 0;
		iLocal_926 = 5;
	}
}

void func_422()//Position - 0x353BB
{
	struct<6> Var0;
	
	if (GlobalFunc_4924(uLocal_165[iLocal_573]))
	{
		fLocal_811 = GlobalFunc_156(Local_95.f_28[0], uLocal_165[iLocal_573], 1);
		if (iLocal_926 == 8 || iLocal_926 == 10)
		{
			fLocal_812 = GlobalFunc_156(Local_95.f_28[1], iLocal_170, 1);
		}
		else
		{
			fLocal_812 = GlobalFunc_156(Local_95.f_28[1], uLocal_165[iLocal_573], 1);
		}
		if (iLocal_829 == 0)
		{
			if (iLocal_824 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_575 + 20000)
				{
					if (fLocal_811 < 50f)
					{
						if (iLocal_573 == 0)
						{
							Var0 = { GlobalFunc_560() };
							if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_JJ1") || MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_JJ4"))
							{
								GlobalFunc_5105();
							}
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JOSEF_2", 6, 0, 0, 0))
								{
									iLocal_829 = 1;
								}
							}
						}
						if (iLocal_573 == 1)
						{
							if (!GlobalFunc_111())
							{
								iLocal_829 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_824 == 0)
		{
			if (fLocal_811 > 200f)
			{
				if (iLocal_828 == 0)
				{
					if (GlobalFunc_4947(Local_95.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (iLocal_573 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_603 + 12000)
								{
									if (iLocal_902 == 0)
									{
										iLocal_902 = 1;
									}
								}
							}
							else if (iLocal_824 == 0 && iLocal_836 == 0)
							{
								if (iLocal_914 == 0)
								{
									iLocal_914 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_603 + 12000)
							{
								if (iLocal_902 == 0)
								{
									iLocal_902 = 1;
								}
							}
						}
					}
					iLocal_828 = 1;
				}
				else if (fLocal_811 > 300f)
				{
					if (iLocal_573 == 0)
					{
						sLocal_922 = "MIN2_43";
					}
					else if (iLocal_824 == 0 && iLocal_836 == 0)
					{
						sLocal_922 = "MIN2_35";
					}
					else
					{
						sLocal_922 = "MIN2_23";
					}
					iLocal_926 = 16;
				}
			}
			else
			{
				iLocal_828 = 0;
			}
		}
		if (iLocal_824 == 0)
		{
			if (fLocal_811 < 9f && PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[iLocal_573], 0))
			{
				if (iLocal_826 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_95.f_28[0], uLocal_165[iLocal_573], 0, 0f, 0f, 0f, 10f, 100, 0, -753768974);
					if (PED::IS_PED_ON_ANY_BIKE(uLocal_165[iLocal_573]))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_165[iLocal_573], 2);
					}
					iLocal_826 = 1;
				}
			}
			else if ((iLocal_826 == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], 780511057) == 1) || PED::IS_PED_IN_COMBAT(Local_95.f_28[0], uLocal_165[iLocal_573]))
			{
				TASK::CLEAR_PED_TASKS(Local_95.f_28[0]);
				iLocal_826 = 0;
			}
		}
		else if (fLocal_811 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_95.f_28[0]);
		}
		if (iLocal_926 == 8 || iLocal_926 == 10)
		{
		}
		else if (iLocal_824 == 0)
		{
			if (fLocal_812 < 9f && PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[iLocal_573], 0))
			{
				if (iLocal_827 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_95.f_28[1], uLocal_165[iLocal_573], 0, 0f, 0f, 0f, 10f, 100, 0, -753768974);
					iLocal_827 = 1;
				}
			}
			else if ((iLocal_827 == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 780511057) == 1) || PED::IS_PED_IN_COMBAT(Local_95.f_28[1], uLocal_165[iLocal_573]))
			{
				TASK::CLEAR_PED_TASKS(Local_95.f_28[1]);
				iLocal_827 = 0;
			}
		}
		else if (fLocal_812 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_95.f_28[1]);
		}
		if (iLocal_824 == 0)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_165[iLocal_573], joaat("weapon_stungun"), 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_156[iLocal_573], Local_95.f_35[0], 1))
			{
				func_306();
			}
		}
		if (iLocal_926 == 8 || iLocal_926 == 10)
		{
			if (iLocal_836 == 0)
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_170, joaat("weapon_stungun"), 0))
				{
					func_299();
				}
			}
		}
		if (iLocal_824 == 0)
		{
			if (GlobalFunc_4947(uLocal_156[iLocal_573]))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_603 + 15000)
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_165[iLocal_573], uLocal_156[iLocal_573], 0))
					{
						if (iLocal_845 == 0)
						{
							func_306();
						}
					}
				}
			}
		}
		if (iLocal_824 == 1)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_165[iLocal_573], joaat("weapon_stungun"), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], Local_95.f_28[1], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
					{
						iLocal_586++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], Local_95.f_28[0], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 0))
					{
						iLocal_586++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_586++;
					}
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(uLocal_165[iLocal_573]);
			}
			if (iLocal_825 == 0)
			{
				iLocal_582 = MISC::GET_GAME_TIMER();
				if (iLocal_582 > iLocal_583 + 4000)
				{
					ENTITY::SET_ENTITY_PROOFS(uLocal_165[iLocal_573], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_280(uLocal_165[iLocal_573], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_586 == 0)
						{
							iLocal_586++;
						}
						func_305();
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_165[iLocal_573], PLAYER::PLAYER_PED_ID(), 0))
					{
						fLocal_814 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_165[iLocal_573], 1);
						if (fLocal_814 < 9f)
						{
							if (iLocal_586 > 0)
							{
								func_305();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[0], 0))
				{
					if (fLocal_811 < 7f)
					{
						if (iLocal_586 > 0)
						{
							func_305();
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
				{
					if (fLocal_812 < 7f)
					{
						if (iLocal_586 > 0)
						{
							func_305();
						}
					}
				}
			}
		}
		if (iLocal_926 == 8 || iLocal_926 == 10)
		{
			if (iLocal_836 == 1)
			{
				if (iLocal_837 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_575 + 4000)
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_170, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_170, PLAYER::PLAYER_PED_ID(), 0))
						{
							fLocal_814 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_170, 1);
							if (fLocal_814 < 9f)
							{
								func_279();
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_95.f_28[1], 0))
					{
						if (fLocal_812 < 7f)
						{
							func_279();
						}
					}
				}
			}
		}
	}
}


void func_424()//Position - 0x35A31
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_02_SCENE"))
	{
		if (GlobalFunc_115(uLocal_156[0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_156[0], "MINUTE_02_SCENE_QUAD_BIKE", 0);
		}
		AUDIO::START_AUDIO_SCENE("MINUTE_02_SCENE");
	}
}

void func_425()//Position - 0x35A6B
{
	func_414();
	func_411();
	func_264();
	if (iLocal_823 == 1)
	{
		func_407();
		GlobalFunc_574(780, 0);
		RECORDING::_0x293220DA1B46CEBC(5f, 4f, 0);
		iLocal_926 = 3;
	}
}

void func_426()//Position - 0x35A9D
{
	func_430();
	func_428();
	func_427();
	if (iLocal_911 == 0)
	{
		GlobalFunc_164("MIN2_01", 7000, 0);
		iLocal_911 = 1;
	}
	iLocal_603 = MISC::GET_GAME_TIMER();
	iLocal_926 = 2;
}

void func_427()//Position - 0x35AD3
{
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_95.f_35[0], 0.5f, 1000, 0, 0, 0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_95.f_28[0]))
		{
			func_412(&(Local_95.f_28[0]), 56, Local_95.f_35[0], 0, 1);
		}
		else if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0);
			}
		}
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_95.f_28[0], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 2, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 13, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 25, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[0], 23, 1);
			PED::SET_PED_COMBAT_RANGE(Local_95.f_28[0], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_95.f_28[0], 0);
			WEAPON::GIVE_WEAPON_TO_PED(Local_95.f_28[0], joaat("weapon_stungun"), -1, 1, 1);
			PED::SET_PED_ACCURACY(Local_95.f_28[0], 100);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[0], 32, 0);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[0], 29, 0);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[0], 116, 0);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[0], 170, 1);
			TASK::TASK_SET_DECISION_MAKER(Local_95.f_28[0], -1143637011);
			PED::SET_PED_CAN_BE_TARGETTED(Local_95.f_28[0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_95.f_28[0], 1);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_95.f_28[0], 1);
			PED::SET_PED_LEG_IK_MODE(Local_95.f_28[0], 2);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_95.f_28[1]))
		{
			func_412(&(Local_95.f_28[1]), 57, Local_95.f_35[0], 2, 1);
		}
		else if (GlobalFunc_4924(Local_95.f_28[1]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 2);
			}
		}
		if (GlobalFunc_4924(Local_95.f_28[1]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_95.f_28[1], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			WEAPON::GIVE_WEAPON_TO_PED(Local_95.f_28[1], joaat("weapon_stungun"), -1, 1, 1);
			PED::SET_PED_ACCURACY(Local_95.f_28[1], 100);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 2, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 13, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 25, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_95.f_28[1], 23, 1);
			PED::SET_PED_COMBAT_RANGE(Local_95.f_28[1], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_95.f_28[1], 0);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[1], 32, 0);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[1], 29, 0);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[1], 116, 0);
			PED::SET_PED_CONFIG_FLAG(Local_95.f_28[1], 170, 1);
			TASK::TASK_SET_DECISION_MAKER(Local_95.f_28[1], -1143637011);
			PED::SET_PED_CAN_BE_TARGETTED(Local_95.f_28[1], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_95.f_28[1], 1);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_95.f_28[1], 1);
			TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_95.f_28[1], Local_95.f_35[0]);
			PED::SET_PED_LEG_IK_MODE(Local_95.f_28[1], 2);
		}
	}
	GlobalFunc_173(&uLocal_407, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	GlobalFunc_173(&uLocal_407, 6, Local_95.f_28[1], "JOSEF", 0, 1);
	GlobalFunc_173(&uLocal_407, 7, Local_95.f_28[0], "JOE", 0, 1);
}

void func_428()//Position - 0x35E3C
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_95.f_35[0]))
	{
		Local_95.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("pranger"), 20.8f, 4532.65f, 104.66f, 284.7f, 1, 1);
	}
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_743(Local_95.f_35[0], 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pranger"), 1);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_95.f_35[0], 5, 0);
			VEHICLE::ROLL_DOWN_WINDOWS(Local_95.f_35[0]);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_95.f_35[0], 14f);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_95.f_35[0], 1);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], -1);
			}
			VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Local_95.f_35[0]);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pranger"));
}


void func_430()//Position - 0x35F31
{
	while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("pranger")) || !STREAMING::HAS_MODEL_LOADED(joaat("blazer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_passport_01"))) || !GlobalFunc_7048(59)) || !STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) || !STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmminute2")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmminute2lean")) || !STREAMING::HAS_ANIM_DICT_LOADED("missminuteman_2ig_1")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}


void func_432()//Position - 0x36009
{
	int iVar0;
	
	if (GlobalFunc_199() == 1 && iLocal_847 == 0)
	{
		if (GlobalFunc_7189(&(Local_95.f_28[0]), 56, 38.2818f, 4537.57f, 95.4783f, 252.9034f, 1) && GlobalFunc_7189(&(Local_95.f_28[1]), 57, 33.843f, 4537.395f, 95.9413f, 309.8384f, 1))
		{
			PED::SET_PED_PROP_INDEX(Local_95.f_28[0], 1, 0, 0, false);
			PED::SET_PED_PROP_INDEX(Local_95.f_28[1], 0, 0, 0, false);
			PED::SET_PED_PROP_INDEX(Local_95.f_28[1], 1, 0, 0, false);
			iVar0 = GlobalFunc_198();
			if (Global_84544 == 1)
			{
				iVar0++;
			}
			if (iVar0 == 0)
			{
				func_496();
			}
			else if (iVar0 == 1)
			{
				func_495();
			}
			else if (iVar0 == 2)
			{
				func_492();
			}
			else if (iVar0 > 2)
			{
				func_484();
			}
		}
	}
	else
	{
		func_433();
	}
}

void func_433()//Position - 0x360E9
{
	int iVar0;
	
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Joe", 1, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 0, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 1, 0, 0, 0);
	}
	switch (iLocal_925)
	{
		case 0:
			if (MISC::IS_PC_VERSION() && !iLocal_891)
			{
				if (GlobalFunc_702(1, 0, 1))
				{
					iLocal_574 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_891 = 1;
				}
			}
			if (iLocal_574 < MISC::GET_GAME_TIMER())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_95.f_35[0]))
				{
					Local_95.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("pranger"), 20.8f, 4532.65f, 104.66f, 284.7f, 1, 1);
				}
				if (GlobalFunc_7189(&(Local_95.f_28[0]), 56, 38.2818f, 4537.57f, 95.4783f, 252.9034f, 1) && GlobalFunc_7189(&(Local_95.f_28[1]), 57, 33.843f, 4537.395f, 95.9413f, 309.8384f, 1))
				{
					PED::SET_PED_PROP_INDEX(Local_95.f_28[0], 1, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_95.f_28[1], 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_95.f_28[1], 1, 0, 0, false);
					iLocal_925 = 1;
				}
			}
			break;
		
		case 1:
			func_482("mmb_2_rcm", 0);
			if (func_477(1, 1093140480, 0))
			{
				if (GlobalFunc_4947(Local_95.f_35[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_35[0], "MMB_Parked_car", 0, joaat("pranger"), 0);
				}
				if (GlobalFunc_4924(Local_95.f_28[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[1], "Josef", 0, joaat("ig_josef"), 0);
				}
				if (GlobalFunc_4924(Local_95.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[0], "Joe", 0, joaat("ig_joeminuteman"), 0);
				}
				iLocal_876 = 0;
				iLocal_877 = 0;
				iLocal_878 = 0;
				iLocal_879 = 0;
				iLocal_880 = 0;
				RECORDING::_0x48621C9FCA3EBD28(1);
				GlobalFunc_9161();
				CUTSCENE::START_CUTSCENE(0);
				CUTSCENE::_0x7F96F23FA9B73327(joaat("pranger"));
				SYSTEM::WAIT(0);
				GlobalFunc_9807(14.70134f, 4530.018f, 102.5625f, 27.26711f, 4533.092f, 107.864f, 11.25f, -0.3602f, 4523.248f, 107.0955f, 256.1712f, 1, 1, 1, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
				}
				if (((!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
				{
					GlobalFunc_10697(0f, 0f, 0f, 0f, 1, 2);
				}
				MISC::CLEAR_AREA(18f, 4527f, 105f, 150f, 1, 0, 0, 0);
				func_441(18f, 4527f, 105f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_925 = 2;
			}
			break;
		
		case 2:
			if (((iLocal_876 && iLocal_877) && iLocal_878) && iLocal_880)
			{
				iLocal_925 = 3;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_880 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (GlobalFunc_4947(Local_95.f_35[0]))
				{
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], -1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						iLocal_876 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josef", joaat("ig_josef")))
			{
				if (GlobalFunc_4947(Local_95.f_35[0]))
				{
					if (GlobalFunc_4924(Local_95.f_28[1]))
					{
						PED::SET_PED_INTO_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 2);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_95.f_28[1], 0, 0);
						iLocal_877 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Joe", joaat("ig_joeminuteman")))
			{
				if (GlobalFunc_4947(Local_95.f_35[0]))
				{
					if (GlobalFunc_4924(Local_95.f_28[0]))
					{
						PED::SET_PED_INTO_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_95.f_28[0], 0, 0);
						iLocal_878 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MMB_Parked_car", joaat("pranger")))
			{
				iLocal_879 = 1;
			}
			iLocal_879 = iLocal_879;
			if (!ENTITY::DOES_ENTITY_EXIST(Local_95.f_35[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Parked_car", 0)))
				{
					Local_95.f_35[0] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Parked_car", 0));
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_95.f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_95.f_35[0], 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_95.f_35[0], 3, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_95.f_35[0], 1, 1);
			}
			if (iLocal_911 == 0)
			{
				GlobalFunc_164("MIN2_01", 7000, 0);
				iLocal_911 = 1;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_434(1, 1, 1, 1);
			GlobalFunc_4923(&Local_95, 0, 1);
			if (MISC::IS_PC_VERSION())
			{
				GlobalFunc_702(0, 0, 1);
			}
			iLocal_926 = 1;
			break;
	}
}

void func_434(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x365A5
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	GlobalFunc_8380(0, 1, 0, 0);
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
		if ((iLocal_47 != 0 && iLocal_47 != joaat("object")) && iLocal_47 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}







void func_441(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x3681E
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		func_444(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_47 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_47 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_444(bool bParam0)//Position - 0x36A23
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	GlobalFunc_8380(1, 1, 0, 0);
}

































int func_477(int iParam0, int iParam1, int iParam2)//Position - 0x399C0
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_2307(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_7188(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	GlobalFunc_112();
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!GlobalFunc_109())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}





void func_482(char* sParam0, bool bParam1)//Position - 0x39CBC
{
	func_444(bParam1);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}


void func_484()//Position - 0x39D03
{
	GlobalFunc_4972(349.8519f, 2662.769f, 43.6822f, 137.3727f, 1, 0);
	func_490(1, 1, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("MM2_STOP");
	iLocal_847 = 1;
	func_4();
	func_524();
	func_430();
	func_428();
	func_427();
	func_489();
	func_414();
	func_411();
	func_488();
	func_417();
	func_416();
	func_414();
	func_411();
	GlobalFunc_4967(0, -1, 1);
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			if (GlobalFunc_4924(Local_95.f_28[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0);
				}
				PED::SET_PED_INTO_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_165[1]))
		{
			uLocal_165[1] = PED::CREATE_PED(26, joaat("s_m_m_migrant_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], 0f, 0f, 10f), 0f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_165[1], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_165[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_165[1], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_165[1], 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_165[1], 8, 1, 0, 0);
		}
		if (GlobalFunc_4924(uLocal_165[1]))
		{
			uLocal_399 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_399, 1);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_399, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_r"));
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[1], uLocal_399, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_399, 0.99f);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_165[1], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_165[1], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			iLocal_613 = 1;
		}
		if (GlobalFunc_4924(iLocal_170))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_170, Local_95.f_35[0], 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_170, Local_95.f_35[0], 2);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_170, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_170, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			}
		}
	}
	GlobalFunc_146(&(uLocal_188[0]));
	GlobalFunc_146(&(uLocal_188[1]));
	ENTITY::SET_ENTITY_COORDS(Local_95.f_35[0], 696.1606f, 2704.901f, 39.4572f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Local_95.f_35[0], 92.8104f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GlobalFunc_4965(PLAYER::PLAYER_PED_ID(), 698.7277f, 2708f, 39.3397f, 91.2899f, 0, 1);
	func_237();
	iLocal_598 = (MISC::GET_GAME_TIMER() - 17000);
	iLocal_926 = 17;
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1, 1, 1);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GlobalFunc_79(800, 0);
}




void func_488()//Position - 0x3A107
{
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			if (GlobalFunc_4924(Local_95.f_28[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 1);
				}
			}
		}
	}
	func_309();
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_397))
	{
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_397, 0.9f);
	}
	iLocal_573 = 1;
	ENTITY::SET_ENTITY_COORDS(Local_95.f_35[0], 227.15f, 2950.612f, 41.8969f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Local_95.f_35[0], 186.9743f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	iLocal_926 = 6;
	func_417();
	func_416();
	iLocal_842 = 1;
}

void func_489()//Position - 0x3A21C
{
	GlobalFunc_146(&(uLocal_188[iLocal_573]));
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		if (GlobalFunc_4924(Local_95.f_28[0]))
		{
			if (GlobalFunc_4924(Local_95.f_28[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 1);
				}
			}
		}
	}
	ENTITY::SET_ENTITY_COORDS(Local_95.f_35[0], 132.1798f, 4453.142f, 79.8101f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Local_95.f_35[0], 227.5366f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}

void func_490(bool bParam0, int iParam1, int iParam2)//Position - 0x3A30E
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
			func_434(iParam1, iParam2, 1, 1);
		}
	}
}


void func_492()//Position - 0x3A402
{
	GlobalFunc_4972(277.413f, 2856.941f, 42.6421f, 300.9114f, 1, 0);
	GlobalFunc_2350(0, 0);
	func_524();
	func_430();
	func_428();
	func_427();
	func_489();
	func_414();
	func_411();
	func_488();
	func_417();
	func_416();
	func_414();
	func_411();
	iLocal_842 = 0;
	GlobalFunc_4967(Local_95.f_35[0], -1, 1);
	if (GlobalFunc_4947(uLocal_156[iLocal_573]))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_156[iLocal_573]))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_156[iLocal_573], 101, "Min2DB1", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_156[iLocal_573], 400f);
			VEHICLE::SET_PLAYBACK_SPEED(uLocal_156[iLocal_573], 1.1f);
		}
	}
	if (GlobalFunc_4947(iLocal_161))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_161, 102, "Min2DB2", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_161, 500f);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_161, 1.1f);
		}
	}
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_95.f_35[0], 277.413f, 2856.941f, 42.6421f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_95.f_35[0], 300.9114f);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_95.f_35[0], 269, "Min2Rolling", 1);
		VEHICLE::SET_PLAYBACK_SPEED(Local_95.f_35[0], 1f);
		iLocal_595 = MISC::GET_GAME_TIMER();
	}
	iLocal_926 = 6;
	GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1, 1, 1);
	}
	SYSTEM::WAIT(800);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			GlobalFunc_79(800, 0);
		}
	}
	AUDIO::TRIGGER_MUSIC_EVENT("MM2_RESTART1");
	iLocal_861 = 1;
	func_493(1, 1, 1);
}

void func_493(int iParam0, int iParam1, int iParam2)//Position - 0x3A5DA
{
	func_434(0, 0, iParam2, 1);
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


void func_495()//Position - 0x3A640
{
	GlobalFunc_4972(13.7719f, 3617.92f, 39.2074f, 242.9842f, 1, 0);
	GlobalFunc_2350(0, 0);
	func_524();
	func_430();
	func_428();
	func_427();
	func_489();
	func_414();
	func_411();
	func_488();
	func_417();
	func_416();
	GlobalFunc_4967(Local_95.f_35[0], -1, 1);
	iLocal_842 = 0;
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_95.f_35[0], 13.7719f, 3617.92f, 39.2074f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_95.f_35[0], 242.9842f);
	}
	iLocal_926 = 6;
	GlobalFunc_173(&uLocal_407, 3, uLocal_165[0], "MANUEL", 0, 1);
	iLocal_579 = 2;
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1, 1, 1);
	}
	SYSTEM::WAIT(500);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			GlobalFunc_79(800, 0);
		}
	}
	func_493(1, 1, 1);
}

void func_496()//Position - 0x3A758
{
	GlobalFunc_4972(20.8f, 4532.65f, 104.66f, 284.7f, 1, 0);
	GlobalFunc_2350(0, 0);
	func_524();
	func_430();
	func_428();
	func_427();
	iLocal_926 = 2;
	GlobalFunc_4967(Local_95.f_35[0], -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			GlobalFunc_79(800, 0);
		}
	}
	if (iLocal_911 == 0)
	{
		GlobalFunc_164("MIN2_01", 7000, 0);
		iLocal_911 = 1;
	}
	iLocal_603 = MISC::GET_GAME_TIMER();
	func_493(1, 1, 1);
}


void func_498()//Position - 0x3A884
{
	if (GlobalFunc_4924(uLocal_165[0]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[0], 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[0], -1794415470) == 1)
			{
				PED::SET_PED_RESET_FLAG(uLocal_165[0], 129, 1);
			}
		}
	}
	if (GlobalFunc_4924(uLocal_165[1]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[1], 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_165[1], -1794415470) == 1)
			{
				PED::SET_PED_RESET_FLAG(uLocal_165[1], 129, 1);
			}
		}
	}
	if (GlobalFunc_4924(iLocal_170))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_170, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_170, -1794415470) == 1)
			{
				PED::SET_PED_RESET_FLAG(iLocal_170, 129, 1);
			}
		}
	}
}

void func_499()//Position - 0x3A928
{
	int iVar0;
	
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!iLocal_873)
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
				if (iVar0 != joaat("weapon_stungun"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1);
				}
				iLocal_873 = 1;
			}
		}
		else
		{
			iLocal_873 = 0;
		}
	}
}

void func_500()//Position - 0x3A983
{
	struct<6> Var0;
	
	Var0 = { GlobalFunc_2209() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_IMM1_3") && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
	{
		VEHICLE::ROLL_DOWN_WINDOWS(Local_95.f_35[0]);
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_405))
		{
			iLocal_405 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_passport_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], 0f, 0f, 20f), 1, 1, 0);
		}
		iLocal_870 = iLocal_870;
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_400))
		{
			uLocal_400 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_400, 1);
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_405);
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_95.f_28[1]);
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[0]);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_400, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_l"));
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_405, uLocal_400, "passport_prop", "missminuteman_2ig_3", 1000f, -4f, 0, 1148846080);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_95.f_28[1], uLocal_400, "missminuteman_2ig_3", "passport_josef", 2f, -2f, 4, 83, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[0], uLocal_400, "missminuteman_2ig_3", "passport_manuel", 1f, -4f, 4, 83, 1148846080, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_95.f_28[1], 0, 0);
		}
		iLocal_869 = 1;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_398) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_398) == 1f)
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[0]);
		uLocal_402 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_95.f_35[0], ENTITY::GET_ENTITY_COORDS(uLocal_165[0], 1)), 0f, 0f, 270f, 2);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_402, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_402, 1);
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[0]);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_402, Local_95.f_35[0], -1);
		PED::SET_PED_KEEP_TASK(uLocal_165[0], 1);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[0], uLocal_402, "missminuteman_2ig_1", "trunk_manuel", 4f, -4f, 4, 83, 1148846080, 0);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_397))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_397) == 1f)
		{
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[0]);
			uLocal_401 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_95.f_35[0], ENTITY::GET_ENTITY_COORDS(uLocal_165[0], 1)), 0f, 0f, 270f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_401, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_401, 1);
			PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_401, 1.6f);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_401, Local_95.f_35[0], -1);
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[0], uLocal_401, "missminuteman_2ig_1", "trunk_manuel", 1000f, -4f, 4, 83, 1148846080, 0);
		}
	}
	else if (iLocal_869 == 1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_400))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_405))
			{
				if (iLocal_871 == 0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_400) >= 0.544f)
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PASSPORT", iLocal_405, "MINUTE_02_SOUNDSET", 0, 0);
						iLocal_871 = 1;
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_400) >= 0.562f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_405))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_405, 0.125f, 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_405);
				}
			}
		}
		if (!iLocal_874)
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_400) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_400) == 1f)
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[0]);
				uLocal_398 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_398, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_398, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_r"));
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[0], uLocal_398, "missminuteman_2ig_1", "entertrunk_manuel", 4f, -4f, 4, 83, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_398, 1f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_165[0], 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_95.f_28[1], 0, 0);
				PED::SET_PED_INTO_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 1);
				TASK::TASK_PLAY_ANIM(Local_95.f_28[1], "missminuteman_2ig_3", "passport_josef", 4f, -2f, -1, 0, 0.99f, 0, 0, 0);
				iLocal_874 = 1;
			}
		}
	}
	if (iLocal_886 && !iLocal_887)
	{
		if (iLocal_613 == 1)
		{
			if (GlobalFunc_115(Local_95.f_35[0]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0]))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[iLocal_573]);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_165[iLocal_573], 0, 0);
					uLocal_399 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_399, 1);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_399, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_r"));
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[iLocal_573], uLocal_399, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_399, 1.4f);
					iLocal_887 = 1;
				}
			}
		}
		if (iLocal_613 == 2)
		{
			if (GlobalFunc_115(Local_95.f_35[0]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0]))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_170);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_170, 0, 0);
					uLocal_399 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_399, Local_95.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_95.f_35[0], "seat_pside_r"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uLocal_399, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_399, 1.4f);
					iLocal_887 = 1;
				}
			}
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_399))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_399) == 1f)
		{
			if (iLocal_613 == 1)
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(uLocal_165[1]);
				uLocal_403 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_95.f_35[0], ENTITY::GET_ENTITY_COORDS(uLocal_165[1], 1)), 0f, 0f, 90f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_403, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_403, 1);
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_403, 1.6f);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_403, Local_95.f_35[0], -1);
				PED::SET_PED_KEEP_TASK(uLocal_165[1], 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_165[1], uLocal_403, "missminuteman_2ig_1", "trunk_josef", 1000f, -4f, 4, 83, 1148846080, 0);
			}
			else if (iLocal_613 == 2)
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_170);
				uLocal_403 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_95.f_35[0], ENTITY::GET_ENTITY_COORDS(iLocal_170, 1)), 0f, 0f, 90f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_403, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_403, 1);
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_403, 1.6f);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_403, Local_95.f_35[0], -1);
				PED::SET_PED_KEEP_TASK(iLocal_170, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uLocal_403, "missminuteman_2ig_1", "trunk_josef", 1000f, -4f, 4, 83, 1148846080, 0);
			}
		}
	}
}


void func_502()//Position - 0x3AFF8
{
	if ((iLocal_926 != 15 && iLocal_926 != 17) && iLocal_926 != 16)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
		{
			GlobalFunc_146(&iLocal_193);
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_193))
		{
			iLocal_193 = GlobalFunc_5740(Local_95.f_35[0], 1, 5);
		}
		if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
		{
			GlobalFunc_146(&iLocal_194);
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_194))
		{
			iLocal_194 = GlobalFunc_4955(Local_95.f_28[0], 1, 1, 5);
			HUD::SET_BLIP_SCALE(iLocal_194, 0.7f);
			HUD::SET_BLIP_PRIORITY(iLocal_194, 3);
		}
		if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
		{
			GlobalFunc_146(&iLocal_195);
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_195))
		{
			iLocal_195 = GlobalFunc_4955(Local_95.f_28[1], 1, 1, 5);
			HUD::SET_BLIP_SCALE(iLocal_195, 0.7f);
			HUD::SET_BLIP_PRIORITY(iLocal_195, 3);
		}
	}
	if (((iLocal_926 == 1 || iLocal_926 == 2) || iLocal_926 == 6) || iLocal_926 == 11)
	{
		iLocal_843 = 0;
		GlobalFunc_146(&(iLocal_183[0]));
		GlobalFunc_146(&(iLocal_183[1]));
		GlobalFunc_146(&(iLocal_183[2]));
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_165[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				iLocal_901 = 0;
				if (func_504())
				{
					iLocal_899 = 0;
					iLocal_900 = 0;
					if (iLocal_832 == 0)
					{
						iLocal_832 = 1;
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_188[iLocal_573]))
					{
						if (iLocal_573 == 0)
						{
							if (iLocal_903 == 0)
							{
								iLocal_903 = 1;
							}
						}
						if (iLocal_573 == 1)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (iLocal_904 == 0)
								{
									if (iLocal_861 == 0)
									{
										GlobalFunc_164("MIN2_06", 7000, 0);
										iLocal_904 = 1;
									}
								}
							}
						}
						if (iLocal_573 == 2)
						{
							if (iLocal_905 == 0)
							{
								GlobalFunc_164("MIN2_08", 7000, 0);
								iLocal_905 = 1;
							}
						}
						if (iLocal_573 == 0)
						{
						}
						else if (iLocal_573 == 1)
						{
							uLocal_188[iLocal_573] = GlobalFunc_2324(267.2497f, 2852.167f, 42.6129f, 5, 1);
						}
						else
						{
							Local_629[iLocal_573 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_165[iLocal_573], 1) };
							uLocal_188[iLocal_573] = GlobalFunc_2324(Local_629[iLocal_573 /*3*/], 5, 1);
						}
						iLocal_577 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					GlobalFunc_146(&(uLocal_188[iLocal_573]));
					if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
					{
						iLocal_900 = 0;
					}
					else if (!iLocal_900)
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1073741824, 1, 0);
							}
						}
						iLocal_900 = 1;
						if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
						{
							if (iLocal_906 == 0)
							{
								GlobalFunc_164("MIN2_33", 7000, 0);
								iLocal_906 = 1;
							}
						}
						else if (iLocal_907 == 0)
						{
							GlobalFunc_164("MIN2_29", 7000, 0);
							iLocal_907 = 1;
						}
					}
					if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
					{
						iLocal_899 = 0;
					}
					else if (!iLocal_899)
					{
						if (func_308())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
							{
								if (GlobalFunc_155(Local_95.f_28[1], Local_95.f_35[0], 10f))
								{
									TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1f, 1, 0);
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 2f, 1, 0);
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 0)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_95.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_95.f_35[0]) - 90f));
						}
						iLocal_899 = 1;
						if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
						{
							if (iLocal_908 == 0)
							{
								GlobalFunc_164("MIN2_32", 7000, 0);
								iLocal_908 = 1;
							}
						}
						else if (iLocal_907 == 0)
						{
							GlobalFunc_164("MIN2_29", 7000, 0);
							iLocal_907 = 1;
						}
					}
				}
			}
			else
			{
				iLocal_899 = 0;
				iLocal_900 = 0;
				GlobalFunc_146(&(uLocal_188[iLocal_573]));
				if (!iLocal_901)
				{
					if (iLocal_909 == 0)
					{
						GlobalFunc_164("MIN2_19", 7000, 0);
						iLocal_909 = 1;
					}
					iLocal_901 = 1;
					iLocal_593 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (iLocal_926 == 15)
	{
		iLocal_843 = 0;
		GlobalFunc_146(&(iLocal_183[2]));
		GlobalFunc_146(&(iLocal_183[1]));
		GlobalFunc_146(&iLocal_196);
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
		{
			GlobalFunc_146(&iLocal_193);
			iLocal_901 = 0;
			if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
			{
				GlobalFunc_146(&iLocal_194);
				GlobalFunc_146(&iLocal_195);
				iLocal_899 = 0;
				iLocal_900 = 0;
				if (!HUD::DOES_BLIP_EXIST(uLocal_188[iLocal_573]))
				{
					iLocal_831 = 1;
					iLocal_577 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				GlobalFunc_146(&(uLocal_188[iLocal_573]));
				if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
				{
					GlobalFunc_146(&iLocal_194);
					iLocal_900 = 0;
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_194) && !iLocal_900)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[0], -1794415470) != 0)
					{
						TASK::TASK_ENTER_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 60000, 0, 1073741824, 1, 0);
					}
					iLocal_194 = GlobalFunc_4955(Local_95.f_28[0], 1, 1, 5);
					HUD::SET_BLIP_SCALE(iLocal_194, 0.7f);
					iLocal_900 = 1;
					if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
					{
						if (iLocal_906 == 0)
						{
							GlobalFunc_164("MIN2_33", 7000, 0);
							iLocal_906 = 1;
						}
					}
					else if (iLocal_907 == 0)
					{
						GlobalFunc_164("MIN2_29", 7000, 0);
						iLocal_907 = 1;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
				{
					GlobalFunc_146(&iLocal_195);
					iLocal_899 = 0;
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_195) && !iLocal_899)
				{
					if (func_308())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], -1794415470) != 0)
						{
							if (GlobalFunc_155(Local_95.f_28[1], Local_95.f_35[0], 10f))
							{
								TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 1f, 1, 0);
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 60000, 1, 2f, 1, 0);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_95.f_28[1], 713668775) != 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_95.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_95.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_95.f_35[0]) - 90f));
					}
					iLocal_195 = GlobalFunc_4955(Local_95.f_28[1], 1, 1, 5);
					HUD::SET_BLIP_SCALE(iLocal_195, 0.7f);
					iLocal_899 = 1;
					if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
					{
						if (iLocal_908 == 0)
						{
							GlobalFunc_164("MIN2_32", 7000, 0);
							iLocal_908 = 1;
						}
					}
					else if (iLocal_907 == 0)
					{
						GlobalFunc_164("MIN2_29", 7000, 0);
						iLocal_907 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_899 = 0;
			iLocal_900 = 0;
			GlobalFunc_146(&iLocal_194);
			GlobalFunc_146(&iLocal_195);
			GlobalFunc_146(&(uLocal_188[iLocal_573]));
		}
	}
	if ((iLocal_926 == 3 || iLocal_926 == 8) || iLocal_926 == 12)
	{
		iLocal_899 = 0;
		iLocal_900 = 0;
		if (iLocal_573 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				iLocal_901 = 0;
			}
			else if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && iLocal_824 == 0)
			{
				GlobalFunc_146(&(iLocal_183[iLocal_573]));
				GlobalFunc_146(&iLocal_196);
				GlobalFunc_146(&(uLocal_188[iLocal_573]));
				if (!iLocal_901)
				{
					if (iLocal_909 == 0)
					{
						GlobalFunc_164("MIN2_19", 7000, 0);
						iLocal_909 = 1;
					}
					iLocal_901 = 1;
					iLocal_593 = MISC::GET_GAME_TIMER();
					iLocal_843 = 1;
				}
			}
			iLocal_576 = MISC::GET_GAME_TIMER();
			if (iLocal_576 > iLocal_575)
			{
				GlobalFunc_146(&(uLocal_188[iLocal_573]));
				if (GlobalFunc_4947(Local_95.f_35[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
						{
							iLocal_183[iLocal_573] = GlobalFunc_4955(uLocal_165[iLocal_573], 1, 0, 5);
							if (iLocal_911 == 0)
							{
								GlobalFunc_164("MIN2_01", 7000, 0);
								iLocal_911 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				iLocal_901 = 0;
			}
			else if (((PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && iLocal_824 == 0) && iLocal_836 == 0)
			{
				GlobalFunc_146(&(iLocal_183[iLocal_573]));
				GlobalFunc_146(&iLocal_196);
				GlobalFunc_146(&(uLocal_188[iLocal_573]));
				if (!iLocal_901)
				{
					if (iLocal_909 == 0)
					{
						GlobalFunc_164("MIN2_19", 7000, 0);
						iLocal_909 = 1;
					}
					iLocal_901 = 1;
					iLocal_593 = MISC::GET_GAME_TIMER();
					iLocal_843 = 1;
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
			{
				iLocal_901 = 0;
			}
			else if ((PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0)) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_95.f_28[1]) > 90f)
			{
				GlobalFunc_146(&(iLocal_183[iLocal_573]));
				GlobalFunc_146(&iLocal_196);
				if (!iLocal_901)
				{
					if (iLocal_910 == 0)
					{
						iLocal_910 = 1;
					}
					iLocal_901 = 1;
					iLocal_593 = MISC::GET_GAME_TIMER();
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_193, 1);
					iLocal_843 = 1;
				}
			}
			iLocal_576 = MISC::GET_GAME_TIMER();
			if (iLocal_576 > iLocal_575)
			{
				GlobalFunc_146(&(uLocal_188[iLocal_573]));
				if (iLocal_822 == 0)
				{
					if (GlobalFunc_4947(Local_95.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
							{
								iLocal_183[iLocal_573] = GlobalFunc_4955(uLocal_165[iLocal_573], 1, 0, 5);
								if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[iLocal_573], 0))
								{
									HUD::SET_BLIP_SCALE(iLocal_183[iLocal_573], 0.7f);
								}
								else
								{
									HUD::SET_BLIP_SCALE(iLocal_183[iLocal_573], 1f);
								}
								if (iLocal_912 == 0)
								{
									iLocal_912 = 1;
									if (iLocal_573 == 0)
									{
										GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_JOSEF_4", 6, 0, 0, 0);
									}
									else if (iLocal_573 == 1)
									{
										GlobalFunc_173(&uLocal_407, 4, iLocal_170, "IMMIGRANTMALE", 0, 1);
										GlobalFunc_10618(&uLocal_407, "MIN2AU", "MIN2_SURR_15", 6, 1, 0, 0);
									}
									else if (iLocal_573 == 2)
									{
									}
								}
								if (iLocal_855 == 1)
								{
									if (iLocal_856 == 0)
									{
										GlobalFunc_164("MIN2_31", 7000, 0);
										iLocal_856 = 1;
									}
								}
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(iLocal_183[iLocal_573]))
						{
							if (iLocal_855 == 0)
							{
								if (iLocal_843 == 0)
								{
									if (iLocal_913 == 0)
									{
										GlobalFunc_164("MIN2_39", 7000, 0);
										iLocal_913 = 1;
									}
									iLocal_843 = 1;
								}
							}
						}
					}
				}
				else
				{
					GlobalFunc_146(&(iLocal_183[iLocal_573]));
				}
				if (iLocal_573 == 1)
				{
					if (iLocal_834 == 0)
					{
						if (GlobalFunc_4947(Local_95.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_196))
								{
									iLocal_196 = GlobalFunc_4955(iLocal_170, 1, 0, 5);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_170, 0))
									{
										HUD::SET_BLIP_SCALE(iLocal_196, 0.7f);
									}
									else
									{
										HUD::SET_BLIP_SCALE(iLocal_196, 1f);
									}
									if (iLocal_855 == 1)
									{
										if (iLocal_856 == 0)
										{
											GlobalFunc_164("MIN2_31", 7000, 0);
											iLocal_856 = 1;
										}
									}
								}
							}
						}
					}
					else
					{
						GlobalFunc_146(&iLocal_196);
					}
				}
			}
		}
	}
}


int func_504()//Position - 0x3BCA2
{
	if (PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0) && PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0))
	{
		return 1;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_400))
	{
		return 1;
	}
	return 0;
}

int func_505()//Position - 0x3BCEB
{
	if (iLocal_926 == 3 || iLocal_926 == 5)
	{
		if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], 150f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_95.f_28[1], 150f))
		{
			if (iLocal_916 == 0)
			{
				GlobalFunc_164("MIN2_49", 7500, 0);
				iLocal_916 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_506()//Position - 0x3BD54
{
	if (!GlobalFunc_4924(Local_95.f_28[0]) && !GlobalFunc_4924(Local_95.f_28[1]))
	{
		sLocal_922 = "MIN2_45";
		iLocal_926 = 16;
		return;
	}
	if (!GlobalFunc_4924(Local_95.f_28[1]))
	{
		sLocal_922 = "MIN2_16";
		iLocal_926 = 16;
		return;
	}
	else
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(Local_95.f_28[1]);
	}
	if (!GlobalFunc_4924(Local_95.f_28[0]))
	{
		sLocal_922 = "MIN2_25";
		iLocal_926 = 16;
		return;
	}
	else
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(Local_95.f_28[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_165[0]))
	{
		if (!GlobalFunc_4924(uLocal_165[0]))
		{
			sLocal_922 = "MIN2_44";
			iLocal_926 = 16;
			return;
		}
		else
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(uLocal_165[0]);
			if (!ENTITY::IS_ENTITY_ATTACHED(uLocal_165[0]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[0], 0))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_165[1]))
	{
		if (!GlobalFunc_4924(uLocal_165[1]))
		{
			sLocal_922 = "MIN2_15";
			iLocal_926 = 16;
			return;
		}
		else
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(uLocal_165[1]);
			if (!ENTITY::IS_ENTITY_ATTACHED(uLocal_165[1]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_165[1], 0))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		if (!GlobalFunc_4924(iLocal_170))
		{
			sLocal_922 = "MIN2_15";
			iLocal_926 = 16;
			return;
		}
		else
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_170);
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_170) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_170, 0))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
		}
	}
	if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0]) > 200f)
	{
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_95.f_28[1]) > 200f)
		{
			sLocal_922 = "MIN2_36";
			iLocal_926 = 16;
			return;
		}
	}
	if ((iLocal_926 != 8 && iLocal_926 != 15) && iLocal_926 != 17)
	{
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_95.f_28[1]) > 210f)
		{
			sLocal_922 = "MIN2_40";
			iLocal_926 = 16;
			return;
		}
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0]) > 210f)
		{
			sLocal_922 = "MIN2_41";
			iLocal_926 = 16;
			return;
		}
	}
	if (iLocal_926 == 8)
	{
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_95.f_28[1]) > 250f && iLocal_607 == 0)
		{
			sLocal_922 = "MIN2_40";
			iLocal_926 = 16;
			return;
		}
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0]) > 250f && iLocal_608 == 0)
		{
			sLocal_922 = "MIN2_41";
			iLocal_926 = 16;
			return;
		}
	}
	if (!GlobalFunc_4947(Local_95.f_35[0]))
	{
		sLocal_922 = "MIN2_17";
		iLocal_926 = 16;
		return;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_95.f_35[0], 0, 12000))
		{
			sLocal_922 = "MIN2_17";
			iLocal_926 = 16;
			return;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
		{
			if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_95.f_35[0], 1, 20000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_95.f_35[0], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_95.f_35[0], 3, 30000))
			{
				sLocal_922 = "MIN2_17";
				iLocal_926 = 16;
				return;
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_95.f_35[0], 0))
		{
			sLocal_922 = "MIN2_17";
			iLocal_926 = 16;
			return;
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0))
		{
			if (iLocal_594 == 0)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_95.f_35[0], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_SHCAR", "MIN2_SHCAR_1", 9, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_95.f_35[0]);
							iLocal_594 = 1;
						}
					}
				}
			}
			else if (iLocal_594 == 1)
			{
				if (!GlobalFunc_111())
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_95.f_35[0]);
					iLocal_594 = 2;
				}
			}
			else if (iLocal_594 == 2)
			{
				if (!GlobalFunc_111())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_95.f_35[0], PLAYER::PLAYER_PED_ID(), 1))
					{
						if (GlobalFunc_10630(&uLocal_407, "MIN2AU", "MIN2_SHCAR", "MIN2_SHCAR_2", 9, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_95.f_35[0]);
							iLocal_594 = 3;
						}
					}
				}
			}
			else if (iLocal_594 == 3)
			{
				if (!GlobalFunc_111())
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_95.f_35[0]);
					iLocal_594 = 4;
				}
			}
			else if (iLocal_594 == 4)
			{
				if (!GlobalFunc_111())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_95.f_35[0], PLAYER::PLAYER_PED_ID(), 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_95.f_35[0]);
						iLocal_594 = 5;
					}
				}
			}
			else if (iLocal_594 == 5)
			{
			}
		}
		else
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_95.f_35[0]);
		}
		if (GlobalFunc_4924(Local_95.f_28[1]))
		{
			if (GlobalFunc_4924(Local_95.f_28[0]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_95.f_35[0], 0) || !PED::IS_PED_IN_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0)) || !PED::IS_PED_IN_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], 0))
				{
					VEHICLE::_0xBE5C1255A1830FF5(Local_95.f_35[0], 1);
					if (GlobalFunc_4947(uLocal_156[0]))
					{
						VEHICLE::_0xBE5C1255A1830FF5(uLocal_156[0], 1);
					}
					if (GlobalFunc_4947(uLocal_156[1]))
					{
						VEHICLE::_0xBE5C1255A1830FF5(uLocal_156[1], 1);
					}
					if (GlobalFunc_4947(iLocal_161))
					{
						VEHICLE::_0xBE5C1255A1830FF5(iLocal_161, 1);
					}
				}
			}
		}
	}
}


void func_508(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3C2C4
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
















void func_524()//Position - 0x3CCFF
{
	PATHFIND::SET_ROADS_IN_AREA(Vector(43.747f, 4214.055f, -199.286f) - Vector(10f, 10f, 10f), Vector(43.747f, 4214.055f, -199.286f) + Vector(10f, 10f, 10f), 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pranger"), 1);
	STREAMING::REQUEST_MODEL(joaat("pranger"));
	STREAMING::REQUEST_MODEL(joaat("prop_passport_01"));
	if (GlobalFunc_4947(Local_95.f_35[0]))
	{
		iLocal_581 = ENTITY::GET_ENTITY_HEALTH(Local_95.f_35[0]);
		fLocal_815 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_95.f_35[0]);
		fLocal_816 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_95.f_35[0]);
		ENTITY::SET_ENTITY_HEALTH(Local_95.f_35[0], iLocal_581 * 3);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_95.f_35[0], (fLocal_815 * 3f));
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_95.f_35[0], (fLocal_816 * 3f));
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_95.f_35[0], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_95.f_35[0], 0);
	}
	STREAMING::REQUEST_ANIM_DICT("rcmminute2");
	STREAMING::REQUEST_ANIM_DICT("rcmminute2lean");
	STREAMING::REQUEST_ANIM_DICT("missminuteman_2ig_1");
	STREAMING::REQUEST_ANIM_DICT("missminuteman_2ig_3");
	HUD::REQUEST_ADDITIONAL_TEXT("MIN2", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("MIN2AU", 6);
	GlobalFunc_7049(59);
	GlobalFunc_7049(57);
	GlobalFunc_7049(56);
	STREAMING::REQUEST_MODEL(joaat("blazer"));
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("pranger"), 3);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	uLocal_406 = PED::ADD_SCENARIO_BLOCKING_AREA(341.1107f, 2846.797f, 40.6462f, 350.961f, 2871.472f, 43.8518f, 0, 1, 1, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_SOLO", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_PASSENGERS", 0);
	Local_645[0 /*3*/] = { 327.3949f, 2850.544f, 42.436f };
	Local_645[1 /*3*/] = { 327.0572f, 2841.203f, 42.7507f };
	Local_645[2 /*3*/] = { 337.6567f, 2821.313f, 41.1778f };
	Local_645[3 /*3*/] = { 350.404f, 2797.253f, 47.3014f };
	Local_645[4 /*3*/] = { 373.3039f, 2757.923f, 42.0141f };
	Local_645[5 /*3*/] = { 393.3462f, 2725.506f, 41.9263f };
	Local_645[6 /*3*/] = { 416.6357f, 2697.79f, 42.4937f };
	Local_645[7 /*3*/] = { 444.9309f, 2689.155f, 42.5934f };
	Local_645[8 /*3*/] = { 474.5866f, 2679.499f, 42.2943f };
	Local_645[9 /*3*/] = { 636.1514f, 2696.975f, 39.9808f };
	Local_645[10 /*3*/] = { 831.222f, 2695.574f, 39.5328f };
	Local_645[11 /*3*/] = { 880.9315f, 2708.053f, 39.805f };
	Local_645[12 /*3*/] = { 915.5502f, 2715.868f, 39.6578f };
	Local_645[13 /*3*/] = { 949.9031f, 2732.258f, 39.3729f };
	Local_645[14 /*3*/] = { 979.2463f, 2748.764f, 37.0951f };
	Local_645[15 /*3*/] = { 1007.865f, 2761.744f, 35.0162f };
	Local_645[16 /*3*/] = { 1039.265f, 2779.234f, 33.8708f };
	Local_645[17 /*3*/] = { 1070.02f, 2810.376f, 35.6906f };
	Local_645[18 /*3*/] = { 1097.616f, 2838.89f, 37.2296f };
	Local_645[19 /*3*/] = { 1121.26f, 2844.513f, 37.2992f };
	Local_645[20 /*3*/] = { 1149.222f, 2836.694f, 37.1993f };
	Local_645[21 /*3*/] = { 1203.216f, 2801.934f, 36.86f };
	Local_645[22 /*3*/] = { 1253.402f, 2767.166f, 37.4919f };
	Local_645[23 /*3*/] = { 1283.368f, 2741.513f, 36.651f };
	Local_645[24 /*3*/] = { 1297.205f, 2715.333f, 36.7748f };
	Local_645[25 /*3*/] = { 1303.824f, 2693.499f, 36.6285f };
	Local_645[26 /*3*/] = { 1312.923f, 2659.902f, 36.6804f };
	Local_645[27 /*3*/] = { 1323.725f, 2622.272f, 36.6871f };
	Local_645[28 /*3*/] = { 1337.268f, 2595.036f, 36.618f };
	Local_645[29 /*3*/] = { 1359.421f, 2571.568f, 36.9024f };
	Local_645[30 /*3*/] = { 1478.068f, 2269.079f, 71.6347f };
	Local_645[31 /*3*/] = { 1506.971f, 1874.889f, 106.8773f };
	Local_645[32 /*3*/] = { 1501.885f, 1618.599f, 111.4967f };
	Local_645[33 /*3*/] = { 1474.662f, 1583.423f, 109.2177f };
	Local_645[34 /*3*/] = { 1447.224f, 1574.739f, 107.665f };
	Local_645[35 /*3*/] = { 1421.365f, 1570.722f, 107.0452f };
	Local_645[36 /*3*/] = { 1393.586f, 1566.862f, 106.198f };
	Local_645[37 /*3*/] = { 1363.652f, 1552.682f, 104.8892f };
	Local_645[38 /*3*/] = { 1344.757f, 1535.922f, 102.401f };
	Local_645[39 /*3*/] = { 1323.565f, 1507.205f, 98.09f };
	Local_645[40 /*3*/] = { 1305.183f, 1461.427f, 98.0123f };
	Local_645[41 /*3*/] = { 1294.047f, 1395.442f, 100.773f };
	Local_645[42 /*3*/] = { 1287.989f, 1316.504f, 105.952f };
	Local_645[43 /*3*/] = { 1238.227f, 705.9078f, 100.6087f };
	Local_645[44 /*3*/] = { 1652.565f, 3487.954f, 35.5959f };
	Local_645[45 /*3*/] = { 2518.179f, 4145.933f, 37.7126f };
	Local_645[46 /*3*/] = { 2731.314f, 4390.35f, 47.4449f };
	TASK::REQUEST_WAYPOINT_RECORDING("Min2_Traffic01");
	TASK::REQUEST_WAYPOINT_RECORDING("Min2_Traffic02");
}





int func_529(var uParam0)//Position - 0x3D66A
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = iLocal_94;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 1;
			uParam0->f_15 = 7f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_2_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			iLocal_90 = 1;
			return 0;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_90 = 2;
			return 0;
			break;
		
		case 2:
			GlobalFunc_8026(&(uParam0->f_35[0]), iVar0[0], 20.8f, 4532.65f, 104.66f, 284.7f);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 5, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 14f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
			}
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}




void func_533()//Position - 0x3D80E
{
	GlobalFunc_9161();
	GlobalFunc_7052(59);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	AUDIO::TRIGGER_MUSIC_EVENT("MM2_FAIL");
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pranger"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_migrant_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("speedo"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gaffer_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pranger"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer"), 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_406, 0);
	func_535();
	GlobalFunc_4935();
	if (GlobalFunc_9162())
	{
	}
	GlobalFunc_132(&(Local_95.f_28[1]), 1, 0, 1);
	GlobalFunc_132(&(Local_95.f_28[0]), 1, 0, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_SOLO", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_PASSENGERS", 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(43.747f, 4214.055f, -199.286f) - Vector(10f, 10f, 10f), Vector(43.747f, 4214.055f, -199.286f) + Vector(10f, 10f, 10f), 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_535()//Position - 0x3D9DE
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_02_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MINUTE_02_SCENE");
	}
}
























