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
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<6> Local_164 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	char* sLocal_178 = NULL;
	char* sLocal_179 = NULL;
	int iLocal_180 = 0;
	char* sLocal_181 = NULL;
	int iLocal_182 = 0;
	struct<3> Local_183 = { 0, 0, 0 } ;
	struct<3> Local_186 = { 0, 0, 0 } ;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	struct<3> Local_194 = { 0, 0, 0 } ;
	var uLocal_197[3] = { 0, 0, 0 };
	struct<7> Local_201[3];
	struct<3> Local_223 = { 0, 0, 0 } ;
	float fLocal_226 = 0f;
	float fLocal_227 = 0f;
	var uLocal_228[2] = { 0, 0 };
	struct<3> Local_231[4];
	struct<3> Local_244[4];
	var uLocal_257[2] = { 0, 0 };
	struct<7> Local_260[2];
	var uLocal_275[2] = { 0, 0 };
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	bool bLocal_280 = 0;
	int iLocal_281 = 0;
	char* sLocal_282 = NULL;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	var uLocal_293 = 0;
	struct<3> Local_294 = { 0, 0, 0 } ;
	struct<8> Local_297 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_305 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_313 = 0;
	struct<8> Local_314[4];
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	var uLocal_349 = 16;
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
	int iLocal_514 = 0;
	var uLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	float fLocal_523 = 0f;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	bool bLocal_528 = 0;
	bool bLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	bool bLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	bool bLocal_537 = 0;
	bool bLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	struct<3> Local_542 = { 0, 0, 0 } ;
	int iLocal_545 = 0;
	bool bLocal_546 = 0;
	var uLocal_547[4] = { 0, 0, 0, 0 };
	int iLocal_552[2] = { 0, 0 };
	float fLocal_555 = 0f;
	struct<8> Local_556 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	struct<8> Local_568[3];
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	char* sLocal_595[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_602 = 0;
	var uLocal_603 = 0;
	char* sLocal_604 = NULL;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	char[] cLocal_610[8] = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	int iLocal_616 = 0;
	bool bLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	bool bLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	bool bLocal_626 = 0;
	float fLocal_627 = 0f;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	bool bLocal_631 = 0;
	var uLocal_632[2] = { 0, 0 };
	var uLocal_635[2] = { 0, 0 };
	var uLocal_638[2] = { 0, 0 };
	bool bLocal_641[2] = { 0, 0 };
	bool bLocal_644 = 0;
	bool bLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = -1;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 1000;
	var uLocal_658 = 1000;
	var uLocal_659 = 0;
	int iLocal_660 = 0;
	var uLocal_661 = 0;
	struct<8> Local_662[4];
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	char* sLocal_697 = NULL;
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
	uLocal_79 = GlobalFunc_4946(64);
	uLocal_80 = GlobalFunc_4946(63);
	iLocal_81 = joaat("u_m_m_aldinapoli");
	iLocal_82 = joaat("premier");
	iLocal_159 = 1;
	sLocal_178 = "rcmnigel3_idles";
	sLocal_179 = "base_nig";
	sLocal_181 = "base_mst";
	Local_183 = { 0.198f, 0.074f, 0.358f };
	Local_186 = { 12.24f, -173.52f, 130.32f };
	Local_194 = { -44.75f, -1288.675f, 28.2104f };
	Local_223 = { 0f, -2.2f, 0.5f };
	fLocal_226 = 8f;
	fLocal_227 = 9f;
	sLocal_282 = "rcmnigel3_trunk";
	iLocal_291 = joaat("p_banknote_s");
	Local_294 = { 2611.021f, 1655.5f, 26.6356f };
	bLocal_313 = true;
	iLocal_567 = 1;
	fLocal_627 = 300f;
	iLocal_629 = 500;
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		if (iLocal_156 == 9)
		{
			func_539(1, 1, 1, 0);
		}
		func_537();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_95.f_28[0]))
	{
		GlobalFunc_128(&iLocal_175, &(Local_95.f_28[0]));
	}
	GlobalFunc_69(&(Local_95.f_28[1]));
	func_523();
	if (GlobalFunc_199())
	{
		iVar0 = GlobalFunc_198();
		if (Global_84544)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_516(1);
				break;
			
			case 1:
				func_514(1);
				break;
			
			case 2:
				func_506(1);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_VSTLA", 0);
		func_490(Local_95.f_9, 0, 0, 0, 0, 0);
		if (iLocal_156 == 13)
		{
			func_485();
		}
		else if (!func_483())
		{
			func_458();
			GlobalFunc_587();
			switch (iLocal_156)
			{
				case 0:
					func_455();
					break;
				
				case 1:
					func_449();
					break;
				
				case 2:
					func_388();
					break;
				
				case 3:
					func_387();
					break;
				
				case 4:
					func_382();
					break;
				
				case 11:
					func_381();
					break;
				
				case 5:
					func_365();
					break;
				
				case 6:
					func_270();
					break;
				
				case 7:
					func_269();
					break;
				
				case 8:
					func_240();
					break;
				
				case 9:
					func_221();
					break;
				
				case 10:
					func_203();
					break;
				
				case 12:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2C3
{
	iLocal_531 = 0;
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 5))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_175) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_175))
		{
			GlobalFunc_69(&iLocal_175);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_176) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_176))
		{
			GlobalFunc_2346(&iLocal_177);
			GlobalFunc_69(&iLocal_176);
		}
	}
	func_2();
}

void func_2()//Position - 0x345
{
	if (!iLocal_531)
	{
		GlobalFunc_69(&iLocal_174);
		GlobalFunc_585(101, 1);
		STATS::STAT_SET_BOOL(joaat("sp_killed_al"), 1, 1);
	}
	if (!bLocal_313)
	{
		VEHICLE::SET_RANDOM_TRAINS(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_556))
	{
		GlobalFunc_132(&(Local_556.f_6), 1, 0, 1);
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&Local_556, 0);
	}
	func_3(101, 1);
	func_537();
}

void func_3(int iParam0, bool bParam1)//Position - 0x3A2
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
	GlobalFunc_2365(&uVar1, GlobalFunc_8310());
	func_31();
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




























void func_31()//Position - 0x1747
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
				if (func_147(iVar1, 14, iVar2))
				{
					func_32(iVar1, 14, iVar2);
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

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x1808
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
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_147(iParam0, iParam1, iParam2))
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
				func_32(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_32(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (func_73(iParam0, iVar0, &iVar46, 0))
	{
		func_35(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_33(iParam0, iVar0, &iVar46))
	{
		func_35(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x19C1
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_147(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1A88
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
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
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
				iVar5 = GlobalFunc_6694(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6694(iParam0, 9);
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
			iVar7 = GlobalFunc_7634(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7634(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7634(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_43(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = func_43(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, func_41(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_73(iParam0, iVar10, &iVar4, 1))
							{
								func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_35(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_35(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_35(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_35(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_35(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_35(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_43(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_43(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_43(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_73(iParam0, iVar10, &iVar4, 0))
		{
			func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_33(iParam0, iVar10, &iVar4))
		{
			func_35(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x2A9B
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
				if (func_147(iParam0, iParam1, iVar0))
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
				if (func_147(iParam0, iParam1, iVar1))
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
				return GlobalFunc_7634(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6694(iParam0, iParam1);
		}
	}
	return -99;
}


int func_43(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2E43
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
				iVar1 = GlobalFunc_6694(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_6694(uParam0, 2);
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
									if (!GlobalFunc_7633(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7633(uParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 135, 150);
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
									if (!GlobalFunc_7633(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7633(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7633(uParam0, 3, 176, 191) && !GlobalFunc_7633(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 176, 191);
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
								iVar4 = GlobalFunc_6694(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_6694(uParam0, 11);
								iVar5 = GlobalFunc_11158(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_6694(uParam0, 8);
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
								iVar7 = GlobalFunc_6694(uParam0, 8);
								iVar8 = GlobalFunc_6694(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 1);
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
								iVar9 = GlobalFunc_6694(uParam0, 11);
								iVar0 = GlobalFunc_11158(iParam1, -99, iVar9, 0);
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






























int func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x713C
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_147(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}










































































int func_147(int iParam0, int iParam1, int iParam2)//Position - 0x1D641
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
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
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
				if (!func_147(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_147(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_147(iParam0, 14, iVar4))
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
						iVar1 = GlobalFunc_6694(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, iVar2, iVar1) };
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
			if (!func_147(iParam0, 14, uVar32[iVar31]))
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
























































void func_203()//Position - 0x24C06
{
	if (!iLocal_695)
	{
		GlobalFunc_173(&uLocal_349, 4, 0, "NIGEL", 0, 1);
		iLocal_695 = 1;
	}
	switch (iLocal_157)
	{
		case 0:
			if (((!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_10638(&uLocal_349, 64, "NIGE3AU", "NIGEL3_ZA", 7, 1, 0, 0, 0))
				{
					iLocal_696 = -1;
					iLocal_157 = 1;
				}
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
			}
			break;
		
		case 1:
			if (GlobalFunc_111())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > iLocal_696)
				{
					iLocal_696 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				}
			}
			else if (GlobalFunc_1993())
			{
				if (GlobalFunc_890())
				{
					if (iLocal_696 >= 0)
					{
						iLocal_157 = 2;
					}
					else
					{
						iLocal_157 = 0;
					}
				}
				else
				{
					iLocal_157 = 2;
				}
			}
			break;
		
		case 2:
			if (((!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_190(&Local_164);
				iLocal_531 = 0;
				func_2();
			}
			break;
	}
}


















void func_221()//Position - 0x254F3
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	struct<3> Var7;
	float fVar10;
	
	switch (iLocal_157)
	{
		case 0:
			GlobalFunc_846(&uLocal_293);
			func_228(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (GlobalFunc_115(Local_556))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, 0f, 8f, -4f) };
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, 0f, 60f, 10f) };
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 3f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
				}
				uLocal_547[0] = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_FOV(uLocal_547[0], 25.3209f);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_547[0], Local_556, -3.4384f, 42.1476f, 0.1772f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_547[0], Local_556, -2.9318f, 39.1938f, 0.3114f, 1);
				CAM::SHAKE_CAM(uLocal_547[0], "HAND_SHAKE", 0.166f);
				uLocal_547[1] = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_FOV(uLocal_547[1], 25.3209f);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_547[1], Local_556, -3.6622f, 13.9852f, -0.5222f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_547[1], Local_556, -2.2737f, 11.3714f, -0.0324f, 1);
				CAM::SHAKE_CAM(uLocal_547[1], "HAND_SHAKE", 0.166f);
			}
			iLocal_552[0] = 4000;
			iLocal_552[1] = 3000;
			fLocal_555 = 0f;
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			if (GlobalFunc_115(Local_164))
			{
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_164) > -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_164, -100f);
					Local_542 = { ENTITY::GET_ENTITY_COORDS(Local_164, 1) };
				}
			}
			if (GlobalFunc_115(Local_556.f_6))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_556.f_6, 1);
			}
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_547[1], uLocal_547[0], iLocal_552[0], 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(1);
			bLocal_537 = true;
			bLocal_538 = false;
			iLocal_539 = 0;
			iLocal_540 = 0;
			if (GlobalFunc_1720())
			{
				iLocal_541 = 1;
			}
			else
			{
				iLocal_541 = 0;
			}
			iLocal_157 = 1;
			break;
		
		case 1:
			func_225();
			if (fLocal_555 >= 7f)
			{
				bLocal_537 = false;
			}
			else if (!iLocal_539 && fLocal_555 >= 4f)
			{
				if (GlobalFunc_115(Local_556))
				{
					uLocal_547[2] = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_FOV(uLocal_547[2], 38.4841f);
					CAM::SET_CAM_COORD(uLocal_547[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, -0.1473f, -9.8601f, 5.1181f));
					CAM::POINT_CAM_AT_COORD(uLocal_547[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, -0.1893f, -6.9636f, 4.3379f));
					uLocal_547[3] = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_FOV(uLocal_547[3], 38.4841f);
					CAM::SET_CAM_COORD(uLocal_547[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, -0.1892f, -9.8601f, 6.0113f));
					CAM::POINT_CAM_AT_COORD(uLocal_547[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, -0.2225f, -7.1434f, 5.779f));
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_547[3], uLocal_547[2], iLocal_552[1], 3, 3);
					iLocal_539 = 1;
					if (GlobalFunc_115(Local_556) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
						{
							Var7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							Var7.f_2 = (Var7.f_2 + 1f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var7, &uVar6))
							{
								Var7.f_2 = uVar6;
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var7, 1, 0, 0, 1);
								GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_556, 1));
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
						else
						{
							GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_556, 1));
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
				}
			}
			else if (!iLocal_540 && fLocal_555 >= 0.25f)
			{
				if (GlobalFunc_115(Local_164))
				{
					CAM::SHAKE_CAM(uLocal_547[0], "MEDIUM_EXPLOSION_SHAKE", 0.1666f);
					VEHICLE::EXPLODE_VEHICLE_IN_CUTSCENE(Local_164, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_646, "CRASH", Local_164, "NIGEL_03_SOUNDSET", 0, 0);
					iLocal_540 = 1;
				}
			}
			if ((bLocal_537 && iLocal_541) && fLocal_555 >= 6.7f)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_541 = 0;
			}
			if (GlobalFunc_4926(1000) && bLocal_537)
			{
				bLocal_537 = false;
				bLocal_538 = true;
			}
			if (!bLocal_537)
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_157 = 2;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			if (bLocal_538)
			{
				if (GlobalFunc_115(Local_164))
				{
					VEHICLE::EXPLODE_VEHICLE_IN_CUTSCENE(Local_164, 1);
				}
			}
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			func_539(1, 1, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_163 = 0;
			while (iLocal_163 <= 3)
			{
				CAM::DESTROY_CAM(uLocal_547[iLocal_163], 0);
				iLocal_163++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_164))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_164, 0), Local_542, 1) > 25f)
				{
					FIRE::STOP_FIRE_IN_RANGE(Local_542, 20f);
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
			{
				AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
			}
			fVar10 = (SYSTEM::TO_FLOAT((iLocal_552[0] + iLocal_552[1])) / 1000f);
			if (bLocal_631)
			{
				RECORDING::_0x293220DA1B46CEBC((fVar10 + 2.5f), 2f, 0);
			}
			else
			{
				RECORDING::_0x293220DA1B46CEBC(fVar10, 2f, 0);
			}
			iLocal_157 = 0;
			iLocal_156 = 10;
			break;
	}
}




void func_225()//Position - 0x25B34
{
	float fVar0;
	
	fVar0 = 1f;
	if (fLocal_555 < 0.225f)
	{
		fVar0 = 1f;
	}
	else if (fLocal_555 < 0.75f)
	{
		fVar0 = (1f - (0.8f * ((fLocal_555 - 0.225f) / (0.75f - 0.225f))));
	}
	else if (fLocal_555 < 3f)
	{
		fVar0 = 0.2f;
	}
	else if (fLocal_555 < 4f)
	{
		fVar0 = (0.2f + (0.8f * ((fLocal_555 - 3f) / (4f - 3f))));
	}
	fLocal_555 = (fLocal_555 + ((1f / fVar0) * SYSTEM::TIMESTEP()));
	MISC::SET_TIME_SCALE(fVar0);
}



void func_228(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x25BFF
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
					if (func_147(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_147(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_147(PLAYER::PLAYER_PED_ID(), 8, 1) || func_147(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_147(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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












void func_240()//Position - 0x26063
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	
	switch (iLocal_157)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_282);
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_228[0], &(uLocal_257[0]), &(Local_260[0 /*7*/][0 /*3*/]), &(Local_260[0 /*7*/][1 /*3*/]), &(uLocal_275[0])) != 1 && SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_228[1], &(uLocal_257[1]), &(Local_260[1 /*7*/][0 /*3*/]), &(Local_260[1 /*7*/][1 /*3*/]), &(uLocal_275[0])) != 1)
			{
				if (uLocal_257[0] == 1 || uLocal_257[1] == 1)
				{
					bLocal_546 = true;
				}
				else
				{
					bLocal_546 = false;
				}
			}
			else
			{
				bLocal_546 = true;
			}
			if ((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_282) && STREAMING::HAS_MODEL_LOADED(iLocal_291)) && GlobalFunc_115(Local_164))
			{
				func_228(ENTITY::GET_ENTITY_COORDS(Local_164, 1), 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_545 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_174))
				{
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					GlobalFunc_4956();
					VEHICLE::_0xBE5C1255A1830FF5(Local_164, 1);
					ENTITY::DETACH_ENTITY(iLocal_174, 0, 1);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_174, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_164, 1);
					Local_283 = { ENTITY::GET_ENTITY_COORDS(Local_164, 1) };
					Local_286 = { ENTITY::GET_ENTITY_ROTATION(Local_164, 2) };
					uLocal_289 = PED::CREATE_SYNCHRONIZED_SCENE(Local_283, Local_286, 2);
					uLocal_290 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
					if (bLocal_546)
					{
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_290, uLocal_289, "out_trunk_cam_alt", sLocal_282);
					}
					else
					{
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_290, uLocal_289, "out_trunk_cam", sLocal_282);
					}
					CAM::SET_CAM_ACTIVE(uLocal_290, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					iLocal_292 = OBJECT::CREATE_OBJECT(iLocal_291, Local_283, 1, 1, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_289, sLocal_282, "out_trunk_trevor", 1000f, -2f, 2, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_174, uLocal_289, sLocal_282, "out_trunk_al", 1000f, -2f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_164, uLocal_289, "out_trunk_car", sLocal_282, 1000f, 1090519040, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_292, uLocal_289, "out_trunk_cash", sLocal_282, 1000f, 1090519040, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_289, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, 0f, -3f, -0.47f), 10f, 1, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(Local_164, 1), 10f, 1, 0, 0, 0, 0);
					if (bLocal_313)
					{
						VEHICLE::SET_RANDOM_TRAINS(0);
						VEHICLE::DELETE_ALL_TRAINS();
						bLocal_313 = false;
					}
					RECORDING::_0x48621C9FCA3EBD28(1);
					bLocal_280 = false;
					iLocal_281 = 0;
					iLocal_157 = 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_115(Local_164))
			{
				VEHICLE::_0xBE5C1255A1830FF5(Local_164, 1);
			}
			if (GlobalFunc_4926(1000))
			{
				bLocal_280 = true;
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
			}
			if ((!iLocal_279 && (MISC::GET_GAME_TIMER() - iLocal_545) > 500) && !bLocal_280)
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_164))
				{
					if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_R1", 7, 0, 0, 0))
					{
						iLocal_279 = 1;
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_289) >= 0.852f && !iLocal_281)
			{
				bVar0 = true;
				Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_282, "out_trunk_trevor", Local_283, Local_286, 0.852f, 2) };
				Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_282, "out_trunk_trevor", Local_283, Local_286, 1f, 2) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar7) && MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &fVar8))
				{
					if ((fVar7 - fVar8) > 0.25f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						bLocal_280 = false;
						iLocal_157 = 2;
						bVar0 = false;
					}
					Var1.f_2 = fVar7;
				}
				iLocal_281 = 1;
				if (bVar0)
				{
					Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_282, "out_trunk_trevor", Local_283, Local_286, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_289), 2) };
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -1000f, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var4.f_2);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, 0, 0, 0, 1);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_282, "out_trunk_trevor", 1000f, -2f, -1, 0, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_289), 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				GlobalFunc_2346(&iLocal_292);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_289) > 0.99f || bLocal_280)
			{
				iLocal_157 = 2;
			}
			break;
		
		case 2:
			if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_174)) && GlobalFunc_115(Local_164))
			{
				if (bLocal_280)
				{
					GlobalFunc_4956();
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_289) < 0.99f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_289, 0.99f);
					}
				}
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_164, -1000f, 1);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_164, 5, 1);
				TASK::CLEAR_PED_TASKS(iLocal_174);
				TASK::TASK_SMART_FLEE_PED(iLocal_174, PLAYER::PLAYER_PED_ID(), 3000f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_174, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_174, 1);
				if (CAM::DOES_CAM_EXIST(uLocal_290))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_CAM_ACTIVE(uLocal_290, 0);
					CAM::DESTROY_CAM(uLocal_290, 0);
				}
				if (bLocal_280)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				GlobalFunc_2346(&iLocal_292);
				if (bLocal_546)
				{
					GlobalFunc_69(&iLocal_174);
				}
				func_539(1, 1, 1, 1);
				if (iLocal_348 == 0)
				{
					iLocal_348 = 1;
				}
				GlobalFunc_10829(GlobalFunc_8315(), 1, Local_314[(iLocal_348 - 1) /*8*/].f_7, 0, 0);
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_531 = 1;
				func_2();
			}
			break;
	}
}





























void func_269()//Position - 0x27604
{
	switch (iLocal_157)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
			{
				AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
			}
			if (bLocal_644)
			{
				if (!GlobalFunc_115(Local_164))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					iLocal_157 = 0;
					iLocal_156 = 10;
				}
				else if (bLocal_645)
				{
					if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_X1", 7, 0, 0, 0))
					{
						iLocal_157 = 1;
					}
				}
				else if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_X2", 7, 0, 0, 0))
				{
					iLocal_157 = 1;
				}
			}
			else if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_X3", 7, 0, 0, 0))
			{
				iLocal_157 = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				iLocal_157 = 2;
			}
			break;
		
		case 2:
			sLocal_697 = "N3FMISST";
			iLocal_156 = 13;
			iLocal_157 = 0;
			break;
	}
}

void func_270()//Position - 0x276D6
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	switch (iLocal_157)
	{
		case 0:
			if (!bLocal_617)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
				bLocal_617 = true;
				iLocal_616 = 0;
				iLocal_618 = 0;
				iLocal_621 = 0;
				GlobalFunc_11076(1, "Train section", 1, 0, 0, 1);
			}
			if (iLocal_616)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_846(&uLocal_293);
					iLocal_616 = 0;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_846(&uLocal_293);
				uLocal_293 = GlobalFunc_5743(Local_164, 1, 5);
				if (!iLocal_161)
				{
					GlobalFunc_164("N3RTCAR", 7500, 1);
					iLocal_161 = 1;
				}
				iLocal_616 = 1;
			}
			if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_CX", 7, 1, 0, 0))
			{
				GlobalFunc_846(&uLocal_293);
				iLocal_618 = 1;
				iLocal_619 = 0;
			}
			if (!iLocal_621 && func_299())
			{
				iLocal_621 = 1;
			}
			if (iLocal_618 && iLocal_621)
			{
				if (iLocal_616 == 0)
				{
					GlobalFunc_164("N3RAM", 7500, 1);
					iLocal_625 = 1;
					GlobalFunc_846(&uLocal_293);
					iLocal_157 = 1;
				}
				RECORDING::_0x293220DA1B46CEBC(10f, 6f, 1);
				bLocal_644 = false;
				iLocal_630 = 0;
				iLocal_660 = 0;
				iLocal_157 = 1;
			}
			break;
		
		case 1:
			if (iLocal_616)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 1))
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_846(&uLocal_293);
					if (!iLocal_625)
					{
						GlobalFunc_164("N3RAM", 7500, 1);
						iLocal_625 = 1;
					}
					iLocal_616 = 0;
				}
				else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_164, 200f))
				{
					iLocal_156 = 13;
					iLocal_157 = 0;
					sLocal_697 = "N3FLEFT";
					break;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				if (GlobalFunc_663("N3RAM", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_616 = 1;
			}
			if (GlobalFunc_115(Local_556))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
				{
					AUDIO::STOP_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_556, "NIGEL_03_MIX_GROUP", 0);
					AUDIO::START_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
					VEHICLE::START_VEHICLE_HORN(Local_556, 30000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_647, "TRAIN_COMING", Local_556, "NIGEL_03_SOUNDSET", 0, 0);
				}
				func_283(0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_164, Local_297[0 /*3*/], Local_297[1 /*3*/], Local_297.f_7, 0, 1, 0))
			{
				if ((GlobalFunc_156(Local_164, Local_556, 1) < 120f && !bLocal_626) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_164) > 0.25f)
					{
						GlobalFunc_164("N3BAIL", 7500, 1);
					}
					else
					{
						GlobalFunc_164("N3EXIT", 7500, 1);
					}
					bLocal_626 = true;
				}
			}
			else if (bLocal_626)
			{
				HUD::CLEAR_THIS_PRINT("N3BAIL");
				HUD::CLEAR_THIS_PRINT("N3EXIT");
			}
			if (bLocal_626 && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				HUD::CLEAR_THIS_PRINT("N3BAIL");
				HUD::CLEAR_THIS_PRINT("N3EXIT");
			}
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_556, 0) };
			Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_164, 0) };
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_164, Local_556))
			{
				if ((uLocal_632[0] + uLocal_635[0]) > 14f)
				{
					if (uLocal_638[1])
					{
						if (func_280())
						{
							if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								GlobalFunc_553(797);
								if (iLocal_630)
								{
									iLocal_628 = (MISC::GET_GAME_TIMER() - iLocal_628);
									if (iLocal_628 < iLocal_629)
									{
										bLocal_631 = true;
										GlobalFunc_553(796);
									}
								}
							}
							HUD::CLEAR_PRINTS();
							GlobalFunc_846(&uLocal_293);
							func_283(1);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_164, 1);
							iLocal_157 = 0;
							iLocal_156 = 9;
							break;
						}
						else
						{
							GlobalFunc_69(&iLocal_174);
							if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
							{
								PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
							}
							VEHICLE::EXPLODE_VEHICLE(Local_164, 1, 0);
							PED::EXPLODE_PED_HEAD(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
						}
					}
					else
					{
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						func_283(1);
						GlobalFunc_846(&uLocal_293);
						iLocal_156 = 7;
						iLocal_157 = 0;
						bLocal_644 = true;
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 1))
						{
							bLocal_645 = true;
						}
						else
						{
							bLocal_645 = false;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_556))
						{
							VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&Local_556, 0);
						}
					}
				}
			}
			else
			{
				func_278();
			}
			func_276(-Var0.f_1, Var3.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_556))
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_164, 1) };
				Var9 = { ENTITY::GET_ENTITY_COORDS(Local_556, 0) };
				if (Var6.f_1 > Var9.f_1)
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_846(&uLocal_293);
					iLocal_156 = 7;
					iLocal_157 = 0;
				}
				else
				{
					func_275();
				}
			}
			func_271();
			break;
		
		case 2:
			break;
	}
}

void func_271()//Position - 0x27B3D
{
	func_273();
	switch (iLocal_619)
	{
		case 0:
			if (iLocal_618 && !GlobalFunc_111())
			{
				iLocal_620 = MISC::GET_GAME_TIMER();
				iLocal_619 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_174) && MISC::GET_GAME_TIMER() > iLocal_620)
			{
				if (GlobalFunc_663("N3BAIL", 0, 0))
				{
					if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_PNC", 7, 1, 0, 0))
					{
						func_272();
						iLocal_619 = 2;
					}
				}
				else if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_PNC", 7, 0, 0, 0))
				{
					func_272();
					iLocal_619 = 2;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_620 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2500));
				iLocal_619 = 1;
			}
			break;
	}
}

void func_272()//Position - 0x27C07
{
	if (GlobalFunc_115(iLocal_174))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_515, "TRUNK_THUMPS", iLocal_174, 0, 0, 0);
		iLocal_517 = 0;
	}
}

void func_273()//Position - 0x27C2F
{
	if (GlobalFunc_115(Local_164))
	{
		switch (iLocal_517)
		{
			case 0:
				if (ENTITY::GET_ENTITY_SPEED(Local_164) < 0.5f)
				{
					func_274();
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_164, 1, 0f, 0f, IntToFloat(iLocal_522), fLocal_523, -1.5f, 0f, 0, 1, 1, 0, 1, 1);
				}
				iLocal_518 = MISC::GET_RANDOM_INT_IN_RANGE(3, 7);
				iLocal_519 = 1;
				iLocal_520 = MISC::GET_GAME_TIMER();
				iLocal_521 = MISC::GET_RANDOM_INT_IN_RANGE(100, 250);
				iLocal_517 = 1;
				break;
			
			case 1:
				if (iLocal_519 < iLocal_518)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_520) > iLocal_521)
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_164) < 0.5f)
						{
							func_274();
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_164, 1, 0f, 0f, IntToFloat(iLocal_522), fLocal_523, -1.5f, 0f, 0, 1, 1, 0, 1, 1);
						}
						iLocal_520 = MISC::GET_GAME_TIMER();
						iLocal_521 = MISC::GET_RANDOM_INT_IN_RANGE(100, 250);
						iLocal_519++;
					}
				}
				else
				{
					iLocal_517 = 2;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_274()//Position - 0x27D20
{
	iLocal_522 = MISC::GET_RANDOM_INT_IN_RANGE(-220, -120);
	fLocal_523 = (0.5f * SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-2, 3)));
}

void func_275()//Position - 0x27D4A
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	if (bLocal_617)
	{
		if (GlobalFunc_115(Local_556))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_556, 1) };
			if (!bLocal_623)
			{
				if (Var0.f_1 < 1824.36f)
				{
					iLocal_624 = MISC::GET_GAME_TIMER();
					bLocal_623 = true;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_556.f_6) && ENTITY::IS_ENTITY_DEAD(Local_556.f_6))
				{
					iLocal_624 = MISC::GET_GAME_TIMER();
					bLocal_623 = true;
				}
			}
			if (bLocal_623)
			{
				fVar3 = (75f - 25f);
				iVar5 = (MISC::GET_GAME_TIMER() - iLocal_624);
				if (iVar5 < 11000)
				{
					fVar4 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(11000));
				}
				else
				{
					fVar4 = 1f;
				}
				VEHICLE::SET_TRAIN_SPEED(Local_556, (25f + (fVar3 * fVar4)));
			}
			else
			{
				VEHICLE::SET_TRAIN_SPEED(Local_556, 25f);
			}
		}
	}
}

void func_276(float fParam0, var uParam1)//Position - 0x27E11
{
	uLocal_632[0] = uLocal_632[1];
	uLocal_632[1] = fParam0;
	uLocal_635[0] = uLocal_635[1];
	uLocal_635[1] = uParam1;
	uLocal_638[0] = uLocal_638[1];
	uLocal_638[1] = func_277();
	bLocal_641[0] = bLocal_641[1];
	bLocal_641[1] = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_164);
}

int func_277()//Position - 0x27E73
{
	struct<3> Var0[2];
	float fVar7;
	float fVar8;
	struct<3> Var9[4];
	
	if (GlobalFunc_115(Local_164) && GlobalFunc_115(Local_556))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_164, Local_305[0 /*3*/], Local_305[1 /*3*/], Local_305.f_7, 0, 1, 0))
		{
			return 1;
		}
		Var0[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, 0f, 8f, -4f) };
		Var0[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_556, 0f, 16f, 8f) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_164, Var0[0 /*3*/], Var0[1 /*3*/], Local_305.f_7, 0, 1, 0))
		{
			return 1;
		}
		fVar7 = 1.6f;
		fVar8 = 4.2f;
		Var9[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, (-fVar7 / 2f), (fVar8 / 2f), 0f) };
		Var9[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, (fVar7 / 2f), (fVar8 / 2f), 0f) };
		Var9[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, (-fVar7 / 2f), (-fVar8 / 2f), 0f) };
		Var9[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, (fVar7 / 2f), (-fVar8 / 2f), 0f) };
		iLocal_163 = 0;
		while (iLocal_163 <= 3)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var9[iLocal_163 /*3*/], Var0[0 /*3*/], Var0[1 /*3*/], Local_305.f_7, 0, 1))
			{
				return 1;
			}
			iLocal_163++;
		}
	}
	return 0;
}

void func_278()//Position - 0x27FB9
{
	float fVar0;
	
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_164) > 2f && func_277())
		{
			fVar0 = GlobalFunc_156(Local_164, Local_556, 1);
			if (fVar0 < fLocal_627)
			{
				fLocal_627 = fVar0;
			}
		}
	}
	else if (!iLocal_630)
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_164) > 2f && func_277())
		{
			iLocal_628 = MISC::GET_GAME_TIMER();
			iLocal_630 = 1;
		}
	}
}


int func_280()//Position - 0x2809A
{
	if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_281())
	{
		return 0;
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 1) && !(iLocal_616 && bLocal_641[1]))
	{
		return 1;
	}
	return 0;
}

int func_281()//Position - 0x280E4
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(Local_164, 1) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var0, 1);
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_164, PLAYER::PLAYER_PED_ID()) && (Var0.f_2 - Var3.f_2) > 0.5f)
	{
		return 1;
	}
	if (fVar6 < 3f && (Var0.f_2 - Var3.f_2) > 0.5f)
	{
		return 1;
	}
	return 0;
}


void func_283(bool bParam0)//Position - 0x281BA
{
	if (bParam0)
	{
		func_296();
		HUD::CLEAR_HELP(1);
	}
	else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
	{
		if (iLocal_660 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		func_296();
	}
	else if (GlobalFunc_155(Local_164, Local_556, 350f))
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_164, Local_662[0 /*8*/][0 /*3*/], Local_662[0 /*8*/][1 /*3*/], Local_662[0 /*8*/].f_7, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_164, Local_662[1 /*8*/][0 /*3*/], Local_662[1 /*8*/][1 /*3*/], Local_662[1 /*8*/].f_7, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_164, Local_662[2 /*8*/][0 /*3*/], Local_662[2 /*8*/][1 /*3*/], Local_662[2 /*8*/].f_7, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_164, Local_662[3 /*8*/][0 /*3*/], Local_662[3 /*8*/][1 /*3*/], Local_662[3 /*8*/].f_7, 0, 1, 0))
		{
			if (!iLocal_660)
			{
				GlobalFunc_159("N3TRAINCAM", -1);
				iLocal_660 = 1;
			}
			if (GlobalFunc_7635(&uLocal_648, 1, 1, 0))
			{
				func_284();
				if (CAM::DOES_CAM_EXIST(uLocal_661))
				{
					CAM::POINT_CAM_AT_ENTITY(uLocal_661, Local_164, 0f, 0f, 2f, 1);
				}
			}
			else
			{
				func_296();
			}
		}
	}
	else
	{
		func_296();
	}
}

void func_284()//Position - 0x28309
{
	if (!CAM::DOES_CAM_EXIST(uLocal_661))
	{
		uLocal_661 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		CAM::SET_CAM_FOV(uLocal_661, 40.68f);
		CAM::SHAKE_CAM(uLocal_661, "HAND_SHAKE", 1f);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_661, Local_556, 3.32f, -6.08f, 4.28f, 1);
		CAM::SET_CAM_ACTIVE(uLocal_661, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	}
}












void func_296()//Position - 0x28A67
{
	if (CAM::DOES_CAM_EXIST(uLocal_661))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_661))
		{
			CAM::SET_CAM_ACTIVE(uLocal_661, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		CAM::DESTROY_CAM(uLocal_661, 0);
	}
}



int func_299()//Position - 0x28ADD
{
	if (!iLocal_622)
	{
		STREAMING::REQUEST_MODEL(Local_556.f_1);
		STREAMING::REQUEST_MODEL(joaat("freight"));
		STREAMING::REQUEST_MODEL(joaat("freightcar"));
		STREAMING::REQUEST_MODEL(joaat("freightcont1"));
		STREAMING::REQUEST_MODEL(joaat("freightcont2"));
		STREAMING::REQUEST_MODEL(Local_556.f_7);
		iLocal_622 = 1;
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_556))
	{
		if ((((STREAMING::HAS_MODEL_LOADED(Local_556.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("freight"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2")))
		{
			Local_556 = VEHICLE::CREATE_MISSION_TRAIN(10, Local_556.f_2, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_556, 1);
			VEHICLE::SET_TRAIN_SPEED(Local_556, 25f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_556.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_556.f_6))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_556.f_7) && GlobalFunc_115(Local_556))
		{
			Local_556.f_6 = PED::CREATE_PED_INSIDE_VEHICLE(Local_556, 26, Local_556.f_7, -1, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_556.f_6, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_556.f_6, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_556.f_6, 10, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_556.f_6, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_trucker_01"));
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}


































































void func_365()//Position - 0x2DF0E
{
	switch (iLocal_157)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_282);
			STREAMING::REQUEST_MODEL(iLocal_291);
			if (ENTITY::GET_ENTITY_SPEED(Local_164) >= 0.025f)
			{
				iLocal_278 = 4;
				iLocal_157 = 1;
			}
			else
			{
				if (bLocal_529)
				{
					if (!iLocal_161)
					{
						iLocal_162 = MISC::GET_GAME_TIMER();
					}
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_293))
				{
					uLocal_293 = GlobalFunc_5743(Local_164, 1, 5);
				}
				if (!bLocal_528)
				{
					iLocal_278 = 0;
					iLocal_157 = 1;
				}
				else if (bLocal_617)
				{
					iLocal_278 = 6;
					iLocal_157 = 1;
				}
				else if (func_380())
				{
					GlobalFunc_159("N3NRCOP", -1);
					iLocal_278 = 1;
					iLocal_157 = 1;
				}
				else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_228[0], &(uLocal_257[0]), &(Local_260[0 /*7*/][0 /*3*/]), &(Local_260[0 /*7*/][1 /*3*/]), &(uLocal_275[0])) != 1 && SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_228[1], &(uLocal_257[1]), &(Local_260[1 /*7*/][0 /*3*/]), &(Local_260[1 /*7*/][1 /*3*/]), &(uLocal_275[0])) != 1)
				{
					if (uLocal_257[0] == 1 || uLocal_257[1] == 1)
					{
						GlobalFunc_159("N3TRUNK", -1);
						iLocal_278 = 2;
						iLocal_157 = 1;
					}
					else if (func_378())
					{
						GlobalFunc_159("N3WONKY", -1);
						iLocal_278 = 3;
						iLocal_157 = 1;
					}
					else
					{
						if (!iLocal_530)
						{
							GlobalFunc_159("N3FTRUNK", -1);
							iLocal_530 = 1;
						}
						iLocal_278 = 5;
						iLocal_157 = 1;
					}
				}
			}
			func_273();
			iLocal_524 = 0;
			break;
		
		case 1:
			func_377();
			if (iLocal_159 == 4)
			{
				func_370();
			}
			func_369();
			func_273();
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				iLocal_157 = 2;
				iLocal_158 = 0;
			}
			else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_164, 250f))
			{
				iLocal_157 = 2;
				iLocal_158 = 2;
			}
			else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_164, 50f) && !iLocal_527)
			{
				GlobalFunc_164("N3LEAVECAR", 7500, 1);
				iLocal_527 = 1;
			}
			else
			{
				switch (iLocal_278)
				{
					case 0:
						if (!iLocal_161)
						{
							GlobalFunc_164("N3RTCAR", 7500, 1);
							iLocal_161 = 1;
						}
						if (bLocal_528)
						{
							func_368();
							iLocal_157 = 0;
						}
						break;
					
					case 1:
					case 2:
					case 3:
					case 6:
						break;
					
					case 5:
						if (!iLocal_161 && (MISC::GET_GAME_TIMER() - iLocal_162) > 5000)
						{
							GlobalFunc_164("N3RTCAR", 7500, 1);
							GlobalFunc_2370(&uLocal_603);
							iLocal_161 = 1;
						}
						if ((GlobalFunc_775(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, Local_223), 0.8f) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && !((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())))
						{
							iLocal_157 = 2;
							iLocal_158 = 1;
							iLocal_517 = 2;
						}
						VEHICLE::_0xBE5C1255A1830FF5(Local_164, 1);
						break;
					
					case 4:
						if (ENTITY::GET_ENTITY_SPEED(Local_164) < 0.025f)
						{
							func_368();
							iLocal_157 = 0;
						}
						break;
					}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_846(&uLocal_293);
			switch (iLocal_158)
			{
				case 0:
					if (bLocal_617)
					{
						iLocal_156 = 6;
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						iLocal_156 = 11;
					}
					else
					{
						iLocal_156 = 4;
					}
					break;
				
				case 1:
					uLocal_228[0] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, Local_231[2 /*3*/]), Local_244[2 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_164, 2), 2, 19, 0, 4);
					uLocal_228[1] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, Local_231[3 /*3*/]), Local_244[3 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_164, 2), 2, 19, 0, 4);
					iLocal_156 = 8;
					break;
				
				case 2:
					sLocal_697 = "N3FLEFT";
					iLocal_156 = 13;
					break;
			}
			iLocal_157 = 0;
			break;
	}
}



void func_368()//Position - 0x2E303
{
	if (GlobalFunc_115(Local_164))
	{
		uLocal_228[0] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, Local_231[0 /*3*/]), Local_244[0 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_164, 2), 2, 19, 0, 4);
		uLocal_228[1] = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, Local_231[1 /*3*/]), Local_244[1 /*3*/], ENTITY::GET_ENTITY_ROTATION(Local_164, 2), 2, 19, 0, 4);
	}
}

void func_369()//Position - 0x2E366
{
	if (GlobalFunc_115(iLocal_174))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
		{
			switch (iLocal_524)
			{
				case 0:
					iLocal_525 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 12000));
					iLocal_524 = 1;
					break;
				
				case 1:
					if (MISC::GET_GAME_TIMER() > iLocal_525 && !GlobalFunc_111())
					{
						func_272();
						iLocal_524 = 2;
					}
					break;
				
				case 2:
					if (iLocal_517 == 2)
					{
						iLocal_524 = 0;
					}
					break;
				}
			}
	}
}

void func_370()//Position - 0x2E3E7
{
	func_273();
	switch (iLocal_159)
	{
		case 0:
			if (GlobalFunc_115(Local_164))
			{
				if (!GlobalFunc_775(Local_164, Local_194, Local_314[iLocal_348 /*8*/].f_2) && !bLocal_533)
				{
					iLocal_159 = 3;
					if (iLocal_348 < 3)
					{
						func_272();
						iLocal_514 = 0;
					}
					else
					{
						iLocal_514 = 1;
					}
				}
				else
				{
					func_376();
				}
			}
			break;
		
		case 3:
			if (iLocal_514 == 0)
			{
				iLocal_514 = AUDIO::HAS_SOUND_FINISHED(uLocal_515);
			}
			if (iLocal_348 < 4 && iLocal_514)
			{
				if (!bLocal_533)
				{
					if (iLocal_348 == 3)
					{
						if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_294, 150f))
						{
							if (GlobalFunc_10618(&uLocal_349, Local_314[iLocal_348 /*8*/], Local_314[iLocal_348 /*8*/].f_1, 7, 0, 0, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
								{
									AUDIO::ADD_PED_TO_CONVERSATION(5, iLocal_174, "DINAPOLI");
								}
								if (iLocal_348 == 0)
								{
									RECORDING::_0x293220DA1B46CEBC(2f, 5f, 0);
								}
								iLocal_159 = 4;
							}
						}
					}
					else if (GlobalFunc_10618(&uLocal_349, Local_314[iLocal_348 /*8*/], Local_314[iLocal_348 /*8*/].f_1, 7, 0, 0, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
						{
							AUDIO::ADD_PED_TO_CONVERSATION(5, iLocal_174, "DINAPOLI");
						}
						func_272();
						iLocal_159 = 4;
					}
				}
				else
				{
					func_376();
				}
			}
			else if (iLocal_348 >= 4)
			{
				iLocal_159 = 6;
			}
			break;
		
		case 4:
			if (GlobalFunc_115(Local_164))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
				{
					if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_164, 15f))
					{
						GlobalFunc_4956();
					}
				}
				if (!GlobalFunc_111())
				{
					bLocal_528 = true;
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
					{
						iLocal_516 = MISC::GET_GAME_TIMER();
						iLocal_159 = 5;
						iLocal_348++;
					}
				}
			}
			GlobalFunc_10868(&uLocal_603, &uLocal_349, "NIGE3AU", &sLocal_604, &cLocal_610);
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_516) < 7500)
			{
				if (!bLocal_529)
				{
					GlobalFunc_159("N3REL1", -1);
					bLocal_529 = true;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_516) > 10000)
			{
				if (iLocal_348 < 4)
				{
					iLocal_159 = 0;
				}
				else
				{
					iLocal_159 = 6;
				}
			}
			else
			{
				func_376();
			}
			break;
		
		case 6:
			func_376();
			break;
	}
}






void func_376()//Position - 0x2E84F
{
	if (GlobalFunc_115(Local_164))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
		{
			switch (iLocal_532)
			{
				case 0:
					if ((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_164) && !GlobalFunc_663("N3NORTH", 0, 0)) && !GlobalFunc_663("N3RAM", 0, 0))
					{
						iLocal_532 = 1;
					}
					break;
				
				case 1:
					if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_FRND", 7, 0, 0, 0))
					{
						func_272();
						bLocal_533 = true;
						iLocal_532 = 2;
					}
					break;
				
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						bLocal_533 = false;
						iLocal_534 = MISC::GET_GAME_TIMER();
						iLocal_532 = 3;
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_534) > 8000)
					{
						iLocal_532 = 0;
					}
					break;
				}
			}
	}
}

void func_377()//Position - 0x2E912
{
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
	{
		switch (iLocal_535)
		{
			case 0:
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_164, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (GlobalFunc_155(Local_164, PLAYER::PLAYER_PED_ID(), 20f))
					{
						iLocal_535 = 1;
						iLocal_524 = 0;
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_164);
				}
				break;
			
			case 1:
				if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_SCRND", 7, 0, 0, 0))
				{
					iLocal_524 = 0;
					func_272();
					iLocal_535 = 2;
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					iLocal_536 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_524 = 0;
					iLocal_535 = 3;
				}
				break;
			
			case 3:
				if (MISC::GET_GAME_TIMER() > iLocal_536)
				{
					iLocal_535 = 0;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_164);
				}
				break;
			}
	}
}

int func_378()//Position - 0x2E9D3
{
	float fVar0;
	float fVar1;
	
	if (GlobalFunc_115(Local_164))
	{
		fVar0 = GlobalFunc_739(ENTITY::GET_ENTITY_ROLL(Local_164), 0f, 360f);
		fVar1 = GlobalFunc_739(ENTITY::GET_ENTITY_PITCH(Local_164), 0f, 360f);
		if ((fVar0 > fLocal_226 && fVar0 < (360f - fLocal_226)) || (fVar1 > fLocal_227 && fVar1 < (360f - fLocal_227)))
		{
			return 1;
		}
	}
	return 0;
}


int func_380()//Position - 0x2EA82
{
	if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(40f, 40f, 40f)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 1;
	}
	return 0;
}

void func_381()//Position - 0x2EAD8
{
	switch (iLocal_157)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				GlobalFunc_164("N3LOSEWANT", 7500, 1);
				GlobalFunc_2370(&uLocal_603);
				iLocal_157 = 1;
			}
			else
			{
				iLocal_157 = 2;
			}
			break;
		
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				iLocal_157 = 2;
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				iLocal_157 = 2;
			}
			func_376();
			if (iLocal_159 == 4)
			{
				func_370();
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_846(&uLocal_293);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				iLocal_156 = 4;
			}
			else
			{
				func_368();
				iLocal_156 = 5;
			}
			iLocal_157 = 0;
			break;
	}
}

void func_382()//Position - 0x2EB85
{
	switch (iLocal_157)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				func_386();
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				GlobalFunc_846(&uLocal_293);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					uLocal_293 = GlobalFunc_2324(Local_294, 5, 1);
				}
				iLocal_157 = 1;
			}
			break;
		
		case 1:
			if (iLocal_160 < 1)
			{
				GlobalFunc_164("N3DRIVE", 7500, 1);
				GlobalFunc_2370(&uLocal_603);
				iLocal_160++;
			}
			func_370();
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_157 = 2;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(Local_164, Local_294, 6f, 6f, 2f, 1, 1, 0))
				{
					iLocal_157 = 2;
				}
				else if (bLocal_313)
				{
					if (GlobalFunc_775(Local_164, Local_294, 300f))
					{
						VEHICLE::SET_RANDOM_TRAINS(0);
						bLocal_313 = false;
					}
				}
			}
			else
			{
				iLocal_157 = 2;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_846(&uLocal_293);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				iLocal_156 = 5;
				func_383();
				func_368();
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_164, PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_164);
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_156 = 11;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Local_164, Local_294, 6f, 6f, 2f, 0, 1, 0))
			{
				iLocal_156 = 6;
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freightcont1"));
				STREAMING::REQUEST_MODEL(joaat("freightcont2"));
				STREAMING::REQUEST_MODEL(joaat("s_m_m_trucker_01"));
				ENTITY::SET_ENTITY_VISIBLE(iLocal_174, 0);
			}
			iLocal_157 = 0;
			break;
	}
}

void func_383()//Position - 0x2ED0B
{
	switch (iLocal_159)
	{
		case 0:
			break;
		
		case 3:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && iLocal_347)
			{
				GlobalFunc_2887(&uLocal_603);
				GlobalFunc_5105();
			}
			break;
		
		case 4:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && iLocal_347)
			{
				GlobalFunc_2887(&uLocal_603);
				GlobalFunc_5105();
			}
			break;
		
		case 5:
			break;
		
		case 6:
			break;
	}
}



void func_386()//Position - 0x2EDBC
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_aldinapoli")))
	{
		if (GlobalFunc_115(Local_164))
		{
			iLocal_174 = PED::CREATE_PED(26, joaat("u_m_m_aldinapoli"), -59.7094f, -1330.129f, 32.1963f, 0, 1, 1);
			PED::SET_PED_NAME_DEBUG(iLocal_174, "NIGEL3_CELEB");
			PED::SET_PED_COMPONENT_VARIATION(iLocal_174, 4, 1, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_174, 1);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_164, -0.2f, -1.8f, -1f) };
			fVar6 = (-90f + ENTITY::GET_ENTITY_HEADING(Local_164));
			Var3 = { 0f, 0f, fVar6 };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_174, Var0, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_174, Var3, 2, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_174, Local_164, 0, 0.2f, -1.8f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_174, 0);
			GlobalFunc_173(&uLocal_349, 5, iLocal_174, "DINAPOLI", 0, 1);
			iLocal_517 = 2;
		}
	}
}

void func_387()//Position - 0x2EE93
{
	switch (iLocal_157)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				func_386();
			}
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (!iLocal_526)
				{
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 1);
					GlobalFunc_164("N3GETCAR", 7500, 1);
					iLocal_526 = 1;
				}
				GlobalFunc_846(&uLocal_293);
				if (GlobalFunc_115(Local_164))
				{
					uLocal_293 = GlobalFunc_5743(Local_164, 1, 5);
				}
				iLocal_524 = 0;
				iLocal_157 = 1;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				func_386();
			}
			else
			{
				func_369();
				func_273();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				iLocal_157 = 2;
			}
			else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_164, 200f))
			{
				iLocal_157 = 2;
			}
			else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_164, 50f))
			{
				if (!iLocal_527)
				{
					GlobalFunc_164("N3LEAVECAR", 7500, 1);
					iLocal_527 = 1;
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_846(&uLocal_293);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				func_386();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_164, 0))
			{
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_156 = 11;
				}
				else
				{
					iLocal_156 = 4;
				}
			}
			else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_164, 200f))
			{
				iLocal_156 = 13;
				sLocal_697 = "N3FLEFT";
			}
			iLocal_157 = 0;
			break;
	}
}

void func_388()//Position - 0x2EFED
{
	switch (iLocal_157)
	{
		case 0:
			GlobalFunc_9623("NMT_3_RCM", 0);
			if (func_442(1, 1093140480, 0))
			{
				GlobalFunc_2874(1);
				if (GlobalFunc_2(0))
				{
					func_440(1, 1, 1);
				}
				if (GlobalFunc_115(iLocal_175))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_175, "Nigel", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_175, "Nigel", 2, joaat("ig_nigel"), 0);
				}
				if (GlobalFunc_115(iLocal_176))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_176, "MRS_Thornhill", 0, joaat("ig_mrs_thornhill"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_176, "MRS_Thornhill", 2, joaat("ig_mrs_thornhill"), 0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_193))
				{
					iLocal_193 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-45.93f, -1290.67f, 29.67f, 10f, joaat("v_ilev_gc_door01"), 1, 0, 1);
				}
				GlobalFunc_9161();
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				func_406();
				func_228(-44.75f, -1288.67f, 28.21f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(20.6534f, -1302.867f, 28.0513f, 15f, 0, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_95.f_35[0]))
				{
					GlobalFunc_7108(&(Local_95.f_35[0]));
					FIRE::STOP_FIRE_IN_RANGE(Local_164.f_2, 10f);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_164))
				{
					func_400(Local_164.f_2, Local_164.f_5, 1);
				}
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_164, 0);
				if (GlobalFunc_115(iLocal_193))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_193, 0);
				}
				func_393(&Local_95, 0, 0, 0);
				iLocal_157 = 1;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MRS_Thornhill", 0)))
				{
					iLocal_176 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MRS_Thornhill", 0));
				}
			}
			else if (iLocal_182 && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_178))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MRS_Thornhill", joaat("ig_mrs_thornhill")))
				{
					func_392();
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Nigel", 0)))
				{
					iLocal_175 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Nigel", 0));
				}
			}
			else if (iLocal_180 && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_178))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Nigel", joaat("ig_nigel")))
				{
					func_391();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", joaat("player_two")))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -43.6328f, -1289.294f, 28.0752f, 0, 0, 0, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (GlobalFunc_115(iLocal_193))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_193, 1);
					GlobalFunc_2295(&iLocal_193, 0);
				}
				func_539(1, 1, 1, 1);
				GlobalFunc_4923(&Local_95, 0, 1);
				iLocal_157 = 2;
			}
			else if (GlobalFunc_115(iLocal_193) && CUTSCENE::GET_CUTSCENE_TIME() > 45000)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_193, 1);
				GlobalFunc_2295(&iLocal_193, 0);
			}
			break;
		
		case 2:
			if (GlobalFunc_115(Local_164))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_164, 1);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_164);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_nigel"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_mrs_thornhill"));
			iLocal_159 = 0;
			iLocal_157 = 0;
			iLocal_156 = 3;
			GlobalFunc_2874(0);
			break;
	}
}



void func_391()//Position - 0x2F42A
{
	if (GlobalFunc_115(iLocal_175))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_175, -44.83f, -1289.11f, 29.17f, 0, 0, 1);
		TASK::TASK_PLAY_ANIM(iLocal_175, sLocal_178, sLocal_179, 1000f, -16f, -1, 1, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_175, 1, 0);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_175, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_KEEP_TASK(iLocal_175, 1);
		iLocal_180 = 0;
	}
}

void func_392()//Position - 0x2F48C
{
	if (GlobalFunc_115(iLocal_176))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_176, -45f, -1289.83f, 29.177f, 0, 0, 1);
		TASK::TASK_PLAY_ANIM(iLocal_176, sLocal_178, sLocal_181, 1000f, -16f, -1, 1, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_176, 1, 0);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_176, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_KEEP_TASK(iLocal_176, 1);
		iLocal_177 = OBJECT::CREATE_OBJECT(joaat("prop_ld_handbag_s"), -45f, -1289.83f, 49.177f, 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_177, iLocal_176, PED::GET_PED_BONE_INDEX(iLocal_176, 64729), Local_183, Local_186, 0, 0, 0, 0, 2, 1);
		iLocal_182 = 0;
	}
}

void func_393(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2F52B
{
	GlobalFunc_6690(uParam0, iParam1);
	GlobalFunc_8623(uParam0, bParam2);
	GlobalFunc_7209(uParam0, bParam3);
}







void func_400(struct<3> Param0, float fParam3, int iParam4)//Position - 0x2F63D
{
	if (STREAMING::HAS_MODEL_LOADED(Local_164.f_1))
	{
		func_402(&Local_164, Param0, fParam3, iParam4, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_164);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_164.f_1, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_164, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_164, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_164, 1);
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_164, 0);
		GlobalFunc_743(Local_164, 0);
	}
}


int func_402(var uParam0, struct<3> Param1, var uParam4, int iParam5, int iParam6)//Position - 0x2F6A7
{
	STREAMING::REQUEST_MODEL(iLocal_82);
	if (iParam6 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_82))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iLocal_82))
	{
		return 0;
	}
	func_403(uParam0, iLocal_82, Param1, uParam4);
	if (GlobalFunc_115(*uParam0))
	{
		VEHICLE::SET_VEHICLE_COLOURS(*uParam0, 65, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*uParam0, 5, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, "28BNT310");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, 0);
		if (iParam5 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 10);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
	return 1;
}

void func_403(var uParam0, int iParam1, struct<3> Param2, var uParam5)//Position - 0x2F732
{
	GlobalFunc_7108(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}



void func_406()//Position - 0x2F833
{
	GlobalFunc_9805(-40.74942f, -1294.584f, 27.25115f, -40.96418f, -1284.257f, 35.23348f, 9.5f, -49.09f, -1260.03f, 29.26f, -87.89f, 5f, 14f, 5f, 1, 1, 1, 0, 0);
	GlobalFunc_9805(-40.74942f, -1294.584f, 27.25115f, -40.68179f, -1302.86f, 35.00979f, 9.5f, -42.69f, -1314.36f, 28.06f, 0.9f, 5f, 14f, 5f, 1, 1, 1, 0, 0);
	func_407(0f, 0f, 0f, 0f, 1, 2);
	MISC::CLEAR_AREA_OF_PEDS(-39.5317f, -1257.184f, 28.2361f, 8f, 0);
}

void func_407(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x2F8EC
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_91351.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_91351.f_4, 0))
		{
			if (GlobalFunc_104(24) != Global_91351.f_4)
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(Global_91351.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_408(Global_91351.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_408(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x2F967
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		GlobalFunc_8627(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		GlobalFunc_4932(iParam0, &Var0);
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		GlobalFunc_8896(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_409(iParam5, iParam0, 0);
	}
}

void func_409(int iParam0, int iParam1, int iParam2)//Position - 0x2FA92
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!GlobalFunc_7217(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7732();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = GlobalFunc_104(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						GlobalFunc_8626(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}































void func_440(int iParam0, int iParam1, int iParam2)//Position - 0x329AD
{
	func_539(0, 0, iParam2, 1);
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


int func_442(int iParam0, float fParam1, int iParam2)//Position - 0x329EF
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), -828834893))
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







void func_449()//Position - 0x32D21
{
	float fVar0;
	
	GlobalFunc_8535();
	if (GlobalFunc_115(iLocal_175))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_175, "rcmnigel3", "base", 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_175, "rcmnigel3", "base");
			if (fVar0 > 0.97f || fVar0 < 0.03f)
			{
				iLocal_156 = 2;
				iLocal_157 = 0;
			}
			else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_175, 2.5f))
			{
				iLocal_156 = 2;
				iLocal_157 = 0;
			}
		}
		else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_175, 5f))
		{
			iLocal_156 = 2;
			iLocal_157 = 0;
		}
	}
}






void func_455()//Position - 0x32F20
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
	}
	func_456();
	CUTSCENE::REQUEST_CUTSCENE("NMT_3_RCM", 8);
	GlobalFunc_8535();
	iLocal_156 = 1;
	iLocal_157 = 0;
}

void func_456()//Position - 0x32F68
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_178);
	iLocal_182 = 1;
	iLocal_180 = 1;
}


void func_458()//Position - 0x32F84
{
	if (iLocal_567 && iLocal_156 != 14)
	{
		switch (iLocal_565)
		{
			case 0:
				if (iLocal_156 != 0 && iLocal_156 != 2)
				{
					if (GlobalFunc_115(iLocal_175) && GlobalFunc_115(iLocal_176))
					{
						GlobalFunc_173(&uLocal_349, 4, iLocal_175, "NIGEL", 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_175, 185, 1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_175, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_175, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_PED_KEEP_TASK(iLocal_175, 1);
						GlobalFunc_173(&uLocal_349, 3, iLocal_176, "MRSTHORNHILL", 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_176, 185, 1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_176, 0);
						iLocal_594 = MISC::GET_GAME_TIMER();
						PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_191);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_191, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_191);
						if (PED::IS_PED_IN_GROUP(iLocal_175))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_175);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_175, iLocal_191);
						if (PED::IS_PED_IN_GROUP(iLocal_176))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_176);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_176, iLocal_191);
						iLocal_192 = 1;
						iLocal_593 = 0;
						iLocal_602 = 0;
						iLocal_565 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_482())
				{
					iLocal_565 = 2;
				}
				else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_175, 100f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_176, 100f))
				{
					iLocal_566 = 0;
					iLocal_565 = 2;
				}
				else if (!iLocal_189)
				{
					if (func_464(iLocal_175, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_464(iLocal_176, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_175);
						TASK::TASK_SMART_FLEE_PED(iLocal_175, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_175, 1);
						TASK::TASK_PLAY_ANIM(iLocal_176, sLocal_178, "Cower_Enter_MsT", 16f, -16f, -1, 0, 0, 0, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_176, 1);
						if (iLocal_564 == 2 && GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						iLocal_566 = 1;
						iLocal_565 = 2;
						iLocal_189 = 1;
						break;
					}
					else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_175, Local_164))
					{
						if (GlobalFunc_111())
						{
							if (GlobalFunc_6402() == 3 || GlobalFunc_6402() == 4)
							{
								GlobalFunc_4956();
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						PED::SET_PED_TO_RAGDOLL(iLocal_175, 750, 2000, 1, 1, 1, 0);
						TASK::TASK_SMART_FLEE_PED(iLocal_175, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						TASK::TASK_SMART_FLEE_PED(iLocal_176, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						iLocal_566 = 1;
						iLocal_565 = 2;
					}
					else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_176, Local_164))
					{
						if (GlobalFunc_111())
						{
							if (GlobalFunc_6402() == 3 || GlobalFunc_6402() == 4)
							{
								GlobalFunc_4956();
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						PED::SET_PED_TO_RAGDOLL(iLocal_176, 750, 2000, 1, 1, 1, 0);
						TASK::TASK_SMART_FLEE_PED(iLocal_175, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						TASK::TASK_SMART_FLEE_PED(iLocal_176, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						iLocal_566 = 1;
						iLocal_565 = 2;
					}
					else
					{
						switch (iLocal_564)
						{
							case 0:
								if (GlobalFunc_115(iLocal_176))
								{
									if (GlobalFunc_10618(&uLocal_349, "NIGE3AU", "NIGEL3_N0", 7, 1, 0, 0))
									{
										iLocal_564 = 1;
									}
								}
								break;
							
							case 1:
								if (iLocal_593 < 3)
								{
									if (!GlobalFunc_111() && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_594) > 20000 && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_194, 30f))
										{
											if (GlobalFunc_663("N3DRIVE", 0, 0) || GlobalFunc_663("N3RTCAR", 0, 0))
											{
												if (GlobalFunc_10618(&uLocal_349, Local_568[iLocal_593 /*8*/], Local_568[iLocal_593 /*8*/].f_1, 7, 1, 0, 0))
												{
													iLocal_564 = 2;
												}
											}
											else if (GlobalFunc_10618(&uLocal_349, Local_568[iLocal_593 /*8*/], Local_568[iLocal_593 /*8*/].f_1, 7, 0, 0, 0))
											{
												iLocal_564 = 2;
											}
										}
									}
								}
								else if (iLocal_602 < 6)
								{
									if (!GlobalFunc_111() && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
									{
										if (((MISC::GET_GAME_TIMER() - iLocal_594) > 20000 && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_194, 30f)) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_663("N3DRIVE", 0, 0)))
										{
											if (GlobalFunc_10630(&uLocal_349, "NIGE3AU", "NIGEL3_DAWD", sLocal_595[iLocal_602], 7, 0, 0))
											{
												iLocal_602++;
												iLocal_564 = 2;
											}
										}
									}
								}
								else
								{
									iLocal_564 = 5;
								}
								break;
							
							case 2:
								if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_194, 35f))
								{
									GlobalFunc_2887(&uLocal_603);
									GlobalFunc_5105();
									iLocal_564 = 4;
								}
								else
								{
									GlobalFunc_10868(&uLocal_603, &uLocal_349, "NIGE3AU", &sLocal_604, &cLocal_610);
								}
								if (!GlobalFunc_111())
								{
									iLocal_564 = 4;
								}
								break;
							
							case 4:
								iLocal_594 = MISC::GET_GAME_TIMER();
								iLocal_593++;
								iLocal_564 = 1;
								break;
							
							case 5:
								break;
							}
						}
				}
				break;
			
			case 2:
				func_460();
				switch (iLocal_566)
				{
					case 5:
						sLocal_697 = "N3MRSTDEAD";
						iLocal_156 = 13;
						iLocal_157 = 0;
						break;
					
					case 4:
						sLocal_697 = "N3MRSTHURT";
						iLocal_156 = 13;
						iLocal_157 = 0;
						break;
					
					case 3:
						sLocal_697 = "N3NIGEDEAD";
						iLocal_156 = 13;
						iLocal_157 = 0;
						break;
					
					case 2:
						sLocal_697 = "N3NIGEHURT";
						iLocal_156 = 13;
						iLocal_157 = 0;
						break;
					
					case 1:
						sLocal_697 = "N3SCARED";
						iLocal_156 = 13;
						iLocal_157 = 0;
						break;
					
					case 0:
						if (!GlobalFunc_111() && iLocal_567)
						{
							iLocal_567 = 0;
							GlobalFunc_200(&uLocal_349, 4);
							GlobalFunc_200(&uLocal_349, 3);
							if (iLocal_192)
							{
								PED::REMOVE_RELATIONSHIP_GROUP(iLocal_191);
								iLocal_192 = 0;
							}
							GlobalFunc_69(&iLocal_175);
							GlobalFunc_2346(&iLocal_177);
							GlobalFunc_69(&iLocal_176);
						}
						break;
				}
				break;
			}
	}
}


void func_460()//Position - 0x3353B
{
	STREAMING::REMOVE_ANIM_DICT(sLocal_178);
}




int func_464(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x338B1
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
		else if (func_465(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_465(int iParam0, float fParam1)//Position - 0x3396C
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
				if (func_466(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_466(int iParam0, float fParam1)//Position - 0x339E2
{
	return func_467(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_467(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x339FA
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_474(iParam0, iParam1);
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
		iVar4 = func_470();
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



int func_470()//Position - 0x33CAC
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




int func_474(int iParam0, int iParam1)//Position - 0x33DC3
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








int func_482()//Position - 0x341E8
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_175))
		{
			iLocal_566 = 3;
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_175, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_566 = 2;
			return 0;
		}
	}
	else
	{
		iLocal_566 = 2;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_176))
		{
			iLocal_566 = 5;
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_176, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_566 = 4;
			return 0;
		}
	}
	else
	{
		iLocal_566 = 4;
		return 0;
	}
	return 1;
}

int func_483()//Position - 0x3426D
{
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_697 = "DEFAULT";
		iLocal_156 = 13;
		iLocal_157 = 0;
		return 1;
	}
	if ((((((iLocal_156 != 0 && iLocal_156 != 1) && iLocal_156 != 2) && iLocal_156 != 9) && iLocal_156 != 7) && iLocal_156 != 10) && iLocal_156 != 14)
	{
		if (!GlobalFunc_115(Local_164))
		{
			iLocal_156 = 12;
			iLocal_157 = 0;
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_174) && !GlobalFunc_115(iLocal_174))
		{
			iLocal_156 = 12;
			iLocal_157 = 0;
			return 0;
		}
		else if (func_484())
		{
			sLocal_697 = "N3STUCK";
			iLocal_156 = 13;
			iLocal_157 = 0;
			return 1;
		}
	}
	return 0;
}

int func_484()//Position - 0x34328
{
	int iVar0;
	
	iVar0 = 0;
	if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_164))
	{
		if (iLocal_172)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_173) > 7000)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iLocal_172 = 1;
			iLocal_173 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		if (iLocal_172)
		{
		}
		iLocal_172 = 0;
	}
	return iVar0;
}

void func_485()//Position - 0x3436A
{
	switch (iLocal_157)
	{
		case 0:
			GlobalFunc_846(&uLocal_293);
			HUD::CLEAR_PRINTS();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_697))
			{
				sLocal_697 = "DEFAULT";
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_697, "DEFAULT"))
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sLocal_697, 1);
			}
			iLocal_157 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (bLocal_617)
				{
					GlobalFunc_5129(2555.932f, 1645.358f, 27.9926f, 89f);
				}
				GlobalFunc_4956();
				GlobalFunc_69(&iLocal_174);
				GlobalFunc_69(&iLocal_175);
				GlobalFunc_2346(&iLocal_177);
				GlobalFunc_69(&iLocal_176);
				if (ENTITY::DOES_ENTITY_EXIST(Local_164))
				{
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_164);
				}
				GlobalFunc_7108(&Local_164);
				if (ENTITY::DOES_ENTITY_EXIST(Local_556))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&Local_556);
				}
				func_537();
			}
			break;
	}
}





void func_490(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x344DE
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
















void func_506(bool bParam0)//Position - 0x34EF9
{
	func_512(1, 1);
	if (bParam0)
	{
		GlobalFunc_4972(2605.444f, 1890.189f, 26.1751f, 196.5f, 1, 0);
	}
	else if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2605.444f, 1890.189f, 26.1751f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 196.5f);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_nigel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_mrs_thornhill"));
	STREAMING::REQUEST_MODEL(Local_164.f_1);
	while (!ENTITY::DOES_ENTITY_EXIST(Local_164))
	{
		func_400(2621.299f, 1868.021f, 26.4687f, 60.4f, 0);
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_115(Local_164))
	{
		VEHICLE::EXPLODE_VEHICLE_IN_CUTSCENE(Local_164, 1);
	}
	VEHICLE::SET_RANDOM_TRAINS(0);
	GlobalFunc_69(&(Local_556.f_6));
	VEHICLE::DELETE_ALL_TRAINS();
	bLocal_313 = false;
	iLocal_695 = 0;
	iLocal_156 = 10;
	iLocal_157 = 0;
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		GlobalFunc_8326(2605.444f, 1890.189f, 26.1751f, 1112014848, 12, 5000, 0, 0);
	}
	SYSTEM::WAIT(1000);
	func_440(1, 1, 1);
}






void func_512(bool bParam0, bool bParam1)//Position - 0x35231
{
	if (bParam0)
	{
		func_513(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_228(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_513(bool bParam0, int iParam1, int iParam2)//Position - 0x35264
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
			func_539(iParam1, iParam2, 1, 1);
		}
	}
}

void func_514(bool bParam0)//Position - 0x352C3
{
	func_512(1, 1);
	GlobalFunc_69(&(Local_556.f_6));
	if (ENTITY::DOES_ENTITY_EXIST(Local_556))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&Local_556);
	}
	VEHICLE::SET_RANDOM_TRAINS(0);
	VEHICLE::DELETE_ALL_TRAINS();
	bLocal_313 = false;
	if (bParam0)
	{
		GlobalFunc_4972(Local_294, 0f, 1, 0);
	}
	else if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_294, 1, 0, 0, 1);
	}
	if (iLocal_192)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_191);
	}
	GlobalFunc_6690(&Local_95, 1);
	GlobalFunc_69(&iLocal_175);
	GlobalFunc_2346(&iLocal_177);
	GlobalFunc_69(&iLocal_176);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_nigel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_mrs_thornhill"));
	iLocal_567 = 0;
	GlobalFunc_69(&iLocal_174);
	GlobalFunc_8623(&Local_95, 1);
	GlobalFunc_7108(&Local_164);
	STREAMING::REQUEST_MODEL(Local_164.f_1);
	while (!ENTITY::DOES_ENTITY_EXIST(Local_164))
	{
		func_400(Local_294, 0f, 0);
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_115(Local_164))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_164);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_164, 1, 1);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		func_386();
		SYSTEM::WAIT(0);
	}
	iLocal_622 = 0;
	iLocal_348 = 2;
	iLocal_159 = 6;
	iLocal_526 = 1;
	bLocal_617 = false;
	bLocal_623 = false;
	iLocal_625 = 0;
	bLocal_626 = false;
	iLocal_695 = 0;
	iLocal_156 = 6;
	iLocal_157 = 0;
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4967(Local_164, -1, 0);
	}
	else
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_164))
		{
			func_515(PLAYER::PLAYER_PED_ID(), Local_164, -1);
		}
		GlobalFunc_8326(Local_294, 1112014848, 12, 5000, 0, 0);
	}
	if (GlobalFunc_115(Local_164))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_164, 10f);
	}
	func_440(1, 1, 1);
}

void func_515(int iParam0, int iParam1, int iParam2)//Position - 0x35462
{
	if (GlobalFunc_4950(iParam0))
	{
		if (GlobalFunc_115(iParam1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
			}
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
	}
}

void func_516(bool bParam0)//Position - 0x354A4
{
	func_512(1, 1);
	if (bParam0)
	{
		GlobalFunc_4972(-43.6338f, -1289.323f, 28.0753f, 87.6522f, 1, 0);
	}
	else if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -43.6338f, -1289.323f, 28.0753f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 87.6522f);
	}
	STREAMING::REQUEST_MODEL(Local_164.f_1);
	func_456();
	iLocal_156 = 3;
	iLocal_157 = 0;
	iLocal_159 = 0;
	iLocal_160 = 0;
	iLocal_161 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_MIX_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_03_MIX_SETTINGS");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_03_JOURNEY_MIX"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_03_JOURNEY_MIX");
	}
	if (iLocal_192)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_191);
	}
	GlobalFunc_6690(&Local_95, 1);
	if (!GlobalFunc_115(iLocal_175))
	{
		while (!GlobalFunc_7967(&iLocal_175, 64, -44.76f, -1289.19f, 29.22f, -109.3f, "RC_NIGEL", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_175, -44.76f, -1289.19f, 29.22f, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(iLocal_175, -109.3f);
	if (!GlobalFunc_115(iLocal_176))
	{
		while (!GlobalFunc_7967(&iLocal_176, 63, -45.11f, -1289.77f, 29.24f, -96.8f, "RC_MRS_THORNHILL", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_176, -45.11f, -1289.77f, 29.24f, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(iLocal_176, -96.8f);
	iLocal_189 = 0;
	while (!func_517())
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_115(iLocal_175) && GlobalFunc_115(iLocal_176))
	{
		func_391();
		func_392();
	}
	GlobalFunc_8623(&Local_95, 1);
	GlobalFunc_69(&iLocal_174);
	GlobalFunc_7108(&Local_164);
	while (!STREAMING::HAS_MODEL_LOADED(Local_164.f_1))
	{
		SYSTEM::WAIT(0);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Local_164))
	{
		func_400(Local_164.f_2, Local_164.f_5, 0);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (GlobalFunc_115(Local_164))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_164);
	}
	bLocal_313 = true;
	iLocal_347 = 0;
	iLocal_348 = 0;
	iLocal_526 = 0;
	iLocal_527 = 0;
	bLocal_528 = false;
	bLocal_529 = false;
	iLocal_531 = 0;
	iLocal_279 = 0;
	bLocal_533 = false;
	iLocal_564 = 0;
	iLocal_565 = 0;
	iLocal_566 = 0;
	iLocal_567 = 1;
	bLocal_617 = false;
	bLocal_623 = false;
	iLocal_625 = 0;
	bLocal_626 = false;
	iLocal_695 = 0;
	SYSTEM::WAIT(0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4967(0, -1, 1);
	}
	func_440(1, 1, 1);
}

int func_517()//Position - 0x35715
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_178))
	{
		return 0;
	}
	return 1;
}






void func_523()//Position - 0x358AC
{
	func_533(&Local_164, func_534(), -39.9698f, -1285.97f, 28.8324f, -178.98f);
	func_533(&Local_556, joaat("freight"), 2574.291f, 2173.551f, 31.4003f, 210.2f);
	Local_556.f_7 = joaat("s_m_m_lsmetro_01");
	STREAMING::REQUEST_MODEL(joaat("ig_nigel"));
	STREAMING::REQUEST_MODEL(joaat("ig_mrs_thornhill"));
	STREAMING::REQUEST_MODEL(Local_164.f_1);
	STREAMING::REQUEST_MODEL(joaat("u_m_m_aldinapoli"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_handbag_s"));
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_nigel"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_mrs_thornhill"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_m_aldinapoli"), 1);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL3", 0);
	GlobalFunc_9621(64, 2, 0);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 5);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_349, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_530();
	func_529();
	iLocal_348 = 0;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_TRUNK_THUMPS", 0);
	uLocal_515 = AUDIO::GET_SOUND_ID();
	uLocal_646 = AUDIO::GET_SOUND_ID();
	uLocal_647 = AUDIO::GET_SOUND_ID();
	Local_201[0 /*7*/][0 /*3*/] = { -92f, -1271f, 25f };
	Local_201[0 /*7*/][1 /*3*/] = { -27f, -1247f, 30f };
	Local_201[1 /*7*/][0 /*3*/] = { 2649.08f, 1643.26f, 20f };
	Local_201[1 /*7*/][1 /*3*/] = { 2688.73f, 1675.07f, 30f };
	Local_201[2 /*7*/][0 /*3*/] = { 2649.08f, 1608.6f, 20f };
	Local_201[2 /*7*/][1 /*3*/] = { 2692.73f, 1640.4f, 30f };
	Local_297[0 /*3*/] = { 2611.25f, 1800.09f, 25.4f };
	Local_297[1 /*3*/] = { 2611.25f, 1950.31f, 29.68f };
	Local_297.f_7 = 3f;
	Local_305[0 /*3*/] = { 2611f, 1630f, 24.61f };
	Local_305[1 /*3*/] = { 2611.28f, 1856.65f, 30.73f };
	Local_305.f_7 = 1.75f;
	Local_662[0 /*8*/][0 /*3*/] = { 2611f, 1601.95f, 31.48f };
	Local_662[0 /*8*/][1 /*3*/] = { 2611f, 2050f, 24.36f };
	Local_662[0 /*8*/].f_7 = 6.5f;
	Local_662[1 /*8*/][0 /*3*/] = { 2611f, 1786.85f, 34.44f };
	Local_662[1 /*8*/][1 /*3*/] = { 2611f, 2050f, 22.22f };
	Local_662[1 /*8*/].f_7 = 30f;
	Local_662[2 /*8*/][0 /*3*/] = { 2625.47f, 1707.78f, 29.52f };
	Local_662[2 /*8*/][1 /*3*/] = { 2611.65f, 1749.99f, 23.39f };
	Local_662[2 /*8*/].f_7 = 8f;
	Local_662[3 /*8*/][0 /*3*/] = { 2617.39f, 1709.61f, 29.56f };
	Local_662[3 /*8*/][1 /*3*/] = { 2611.65f, 1749.99f, 23.39f };
	Local_662[3 /*8*/].f_7 = 8f;
	Local_231[0 /*3*/] = { 0f, -3.45f, 1.15f };
	Local_231[1 /*3*/] = { 0f, -3.45f, 0.15f };
	Local_244[0 /*3*/] = { 2f, 2f, 1.3f };
	Local_244[1 /*3*/] = { 1.6f, 2f, 0.7f };
	Local_231[2 /*3*/] = { 0f, -5.45f, 1.15f };
	Local_231[3 /*3*/] = { 0f, -5.45f, 0.15f };
	Local_244[2 /*3*/] = { 1.5f, 6f, 1.3f };
	Local_244[3 /*3*/] = { 1.2f, 6f, 0.7f };
	iLocal_190 = 0;
	GlobalFunc_9166(1);
	func_524(1);
	sLocal_697 = "DEFAULT";
	iLocal_622 = 0;
}

void func_524(bool bParam0)//Position - 0x35C58
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (bParam0)
		{
			uLocal_197[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_201[iVar0 /*7*/][0 /*3*/], Local_201[iVar0 /*7*/][1 /*3*/], 0, 1, 1, 1);
		}
		else
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_197[iVar0], 0);
		}
		iVar0++;
	}
}





void func_529()//Position - 0x35DE0
{
	Local_314[0 /*8*/] = "NIGE3AU";
	Local_314[0 /*8*/].f_1 = "NIGEL3_C1";
	Local_314[0 /*8*/].f_2 = 200f;
	Local_314[0 /*8*/].f_7 = 3000;
	Local_314[1 /*8*/] = "NIGE3AU";
	Local_314[1 /*8*/].f_1 = "NIGEL3_C2";
	Local_314[1 /*8*/].f_2 = 1000f;
	Local_314[1 /*8*/].f_7 = 5000;
	Local_314[2 /*8*/] = "NIGE3AU";
	Local_314[2 /*8*/].f_1 = "NIGEL3_C3";
	Local_314[2 /*8*/].f_2 = 1800f;
	Local_314[2 /*8*/].f_7 = 10000;
	Local_314[3 /*8*/] = "NIGE3AU";
	Local_314[3 /*8*/].f_1 = "NIGEL3_C4";
	Local_314[3 /*8*/].f_2 = 2250f;
	Local_314[3 /*8*/].f_7 = 10000;
	Local_314[0 /*8*/].f_3 = { 165.8198f, -1241.902f, 37.1128f };
	Local_314[0 /*8*/].f_6 = 287.4437f;
	Local_314[1 /*8*/].f_3 = { 997.1073f, -1193.715f, 53.655f };
	Local_314[1 /*8*/].f_6 = 273.9958f;
	Local_314[2 /*8*/].f_3 = { 1880.136f, -780.5549f, 80.6259f };
	Local_314[2 /*8*/].f_6 = 304.6608f;
	Local_314[3 /*8*/].f_3 = { 2483.936f, 946.1223f, 85.4867f };
	Local_314[3 /*8*/].f_6 = 38.84f;
}

void func_530()//Position - 0x35F38
{
	Local_568[0 /*8*/] = "NIGE3AU";
	Local_568[0 /*8*/].f_1 = "NIGEL3_N1";
	Local_568[1 /*8*/] = "NIGE3AU";
	Local_568[1 /*8*/].f_1 = "NIGEL3_N2";
	Local_568[2 /*8*/] = "NIGE3AU";
	Local_568[2 /*8*/].f_1 = "NIGEL3_N3";
	sLocal_595[0] = "NIGEL3_DAWD_1";
	sLocal_595[1] = "NIGEL3_DAWD_3";
	sLocal_595[2] = "NIGEL3_DAWD_5";
	sLocal_595[3] = "NIGEL3_DAWD_7";
	sLocal_595[4] = "NIGEL3_DAWD_9";
	sLocal_595[5] = "NIGEL3_DAWD_11";
}



void func_533(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x361E7
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = { Param2 };
	uParam0->f_5 = fParam5;
}

int func_534()//Position - 0x36205
{
	return iLocal_82;
}



void func_537()//Position - 0x36260
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
	}
	func_393(&Local_95, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_164))
	{
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_164);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_164);
	}
	if (GlobalFunc_111())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
	}
	VEHICLE::SET_RANDOM_TRAINS(1);
	func_524(0);
	GlobalFunc_846(&uLocal_293);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174) && !iLocal_531)
	{
		GlobalFunc_69(&iLocal_174);
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_nigel"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_mrs_thornhill"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_m_aldinapoli"), 0);
	if (iLocal_190)
	{
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@idle_a");
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@male@no_sign@idle_a");
	}
	GlobalFunc_2295(&iLocal_193, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	if (iLocal_192)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_191);
	}
	GlobalFunc_9166(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_539(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x363C6
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
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
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}





















