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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59[2] = { 0, 0 };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66[2];
	float fLocal_73[2] = { 0f, 0f };
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_79 = 0f;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117[2] = { 0, 0 };
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122[2] = { 0, 0 };
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	char[] cLocal_138[8] = 0;
	struct<10> Local_139[16];
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 1000;
	var uLocal_314 = 1000;
	var uLocal_315 = 0;
	var uLocal_316 = 8;
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
	var uLocal_463 = 1;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	float fLocal_468 = 0f;
	struct<3> Local_469 = { 0, 0, 0 } ;
	struct<3> Local_472 = { 0, 0, 0 } ;
	int iLocal_475 = 0;
	struct<3> Local_476 = { 0, 0, 0 } ;
	float fLocal_479 = 0f;
	int iLocal_480[2] = { 0, 0 };
	int iLocal_483 = 0;
	struct<3> Local_484 = { 0, 0, 0 } ;
	struct<3> Local_487 = { 0, 0, 0 } ;
	struct<3> Local_490 = { 0, 0, 0 } ;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	bool bLocal_495 = 0;
	int iLocal_496 = 0;
	float fLocal_497 = 0f;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	struct<3> Local_500 = { 0, 0, 0 } ;
	int iLocal_503[2] = { 0, 0 };
	int iLocal_506 = 0;
	float fLocal_507 = 0f;
	float fLocal_508 = 0f;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511[2] = { 0, 0 };
	int iLocal_514[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_80 = { 0.0203f, -3.1441f, 0.5027f };
	Local_83 = { 90f, 0f, 0f };
	Local_89 = { 0f, 0f, 0f };
	Local_92 = { 0f, 0f, 0f };
	iLocal_128 = 1;
	iLocal_129 = 1;
	cLocal_138 = "RESECAU";
	iLocal_464 = -1;
	fLocal_468 = -3.55f;
	Local_469 = { 0.014f, -0.9111f, 1.2317f };
	Local_472 = { 0f, -3.4368f, 1.2317f };
	iLocal_493 = -1;
	iLocal_494 = -1;
	iLocal_506 = -1;
	Local_86 = { Local_86 };
	Local_86 = { ScriptParam_0.f_1[0 /*3*/] };
	if (SYSTEM::VDIST(Local_86, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_46 = 1;
	}
	else if (SYSTEM::VDIST(Local_86, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_46 = 2;
	}
	else if (SYSTEM::VDIST(Local_86, -389f, 6061f, 31f) < 5f)
	{
		iLocal_46 = 3;
	}
	else if (SYSTEM::VDIST(Local_86, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_46 = 4;
	}
	else if (SYSTEM::VDIST(Local_86, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_46 = 5;
	}
	else if (SYSTEM::VDIST(Local_86, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_46 = 6;
	}
	else if (SYSTEM::VDIST(Local_86, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_46 = 7;
	}
	else if (SYSTEM::VDIST(Local_86, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_46 = 8;
	}
	else if (SYSTEM::VDIST(Local_86, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_46 = 9;
	}
	else if (SYSTEM::VDIST(Local_86, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_46 = 10;
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_3)
	{
		if (iLocal_46 != 2)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_50[iVar0], iLocal_53, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_50[iVar0], iLocal_53, -1, func_234(iLocal_53), 1073741824, 1, 0);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_50[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_217();
		}
		if (!func_177(Local_86, 9, iLocal_46, 1, 0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else
		{
			GlobalFunc_6828(-1);
		}
	}
	func_173();
	uLocal_64 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_76 + Vector(30f, 30f, 30f), Local_76 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_170(&uLocal_316);
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_10586())
			{
				func_217();
			}
			RECORDING::_0x208784099002BC30("RE_SV", 0);
			switch (iLocal_509)
			{
				case 0:
					if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_156())
					{
						if (func_147())
						{
							if ((iLocal_45 == 3 && !(CAM::IS_SPHERE_VISIBLE(Local_76, 3f) && GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), Local_76, 1) < 150f)) || iLocal_45 != 3)
							{
								if (iLocal_45 == 3)
								{
									if (!CAM::IS_SPHERE_VISIBLE(Local_76, 8f))
									{
										MISC::CLEAR_AREA(Local_76, 4f, 1, 0, 0, 0);
									}
									iLocal_47 = 4;
									bLocal_108 = true;
								}
								else
								{
									iLocal_47 = 1;
								}
								func_145();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && iLocal_45 == 3)
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_53, 5f);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_509++;
							}
						}
					}
					else
					{
						func_217();
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
					{
						if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) < 10000f || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_53)) || (!PED::IS_PED_INJURED(iLocal_50[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_50[0]))) || (!PED::IS_PED_INJURED(iLocal_50[1]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_50[1])))
						{
							iLocal_509++;
						}
					}
					if (func_144())
					{
						iLocal_509++;
					}
					if (iLocal_509 != 1)
					{
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 2:
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iLocal_45 != 3)
						{
							func_139();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_45 == 3)
						{
							func_134();
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_53) && (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 100f || func_144()))
							{
								GlobalFunc_9559(1);
							}
						}
						else if (((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_53) && iLocal_47 == 4) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_95, Local_98, fLocal_101, 0, 1, 0)) || func_144())
						{
							GlobalFunc_9559(1);
						}
						if ((iLocal_47 == 4 && ENTITY::IS_ENTITY_OCCLUDED(iLocal_53)) && iLocal_45 != 3)
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) > 100f)
							{
								func_217();
							}
							else
							{
								GlobalFunc_9559(1);
							}
						}
					}
					break;
			}
			if (iLocal_509 > 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_53))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) > 62500f)
					{
						func_217();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) > 10000f && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
					{
						func_217();
					}
				}
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (!HUD::DOES_BLIP_EXIST(uLocal_62))
			{
				if (!func_124(2) && !bLocal_113)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("SV_VANHELP1", 15000);
						func_122(2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
				{
					if (iLocal_510 != 0)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_510 = 0;
							GlobalFunc_4948(&uLocal_304, 0, 0);
						}
					}
				}
				else if (((bLocal_108 && !OBJECT::DOES_PICKUP_EXIST(uLocal_136)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0)) && !bLocal_120)
				{
					if (iLocal_510 != 1)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_510 = 1;
							GlobalFunc_4948(&uLocal_304, 0, 0);
						}
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
				{
					if (iLocal_510 != 2)
					{
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(uLocal_136), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_510 = 2;
							GlobalFunc_4948(&uLocal_304, 0, 0);
						}
					}
				}
				if (iLocal_510 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
					{
						func_114(&uLocal_304, iLocal_55, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_510 = -1;
							GlobalFunc_4948(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 1))
					{
						func_114(&uLocal_304, iLocal_53, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_510 = -1;
							GlobalFunc_4948(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 2)
				{
					if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
					{
						GlobalFunc_9268(&uLocal_304, OBJECT::GET_PICKUP_COORDS(uLocal_136), 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(uLocal_136), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_510 = -1;
							GlobalFunc_4948(&uLocal_304, 0, 0);
						}
					}
				}
				if (((!ENTITY::IS_ENTITY_DEAD(iLocal_53) && bLocal_108) && !bLocal_110) && (!func_124(0) || (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0) && !func_124(1))))
				{
					switch (iLocal_133)
					{
						case 0:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 225f)
							{
								GlobalFunc_159("SV_DOORHELP1", 15000);
								func_122(0);
								iLocal_133++;
							}
							break;
						
						case 1:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_134 = MISC::GET_GAME_TIMER();
								iLocal_133++;
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_134) > 2000 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
							{
								GlobalFunc_159("SV_DOORHELP2", 15000);
								func_122(1);
								iLocal_133++;
							}
							break;
						}
				}
				if (bLocal_110 || bLocal_120)
				{
					if (GlobalFunc_74("SV_DOORHELP1") || GlobalFunc_74("SV_DOORHELP2"))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
			switch (iLocal_47)
			{
				case 1:
					func_139();
					break;
				
				case 2:
					func_88();
					break;
				
				case 3:
					func_86();
					break;
				
				case 4:
					func_134();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_50[0]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_50[0]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_50[0], 3);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_50[1]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_50[1]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_50[1], 3);
						}
					}
					if (((!PED::IS_PED_INJURED(iLocal_50[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[0])) && !PED::IS_PED_INJURED(iLocal_50[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
					{
						iLocal_128 = 1;
						func_73(iLocal_50[1]);
						func_71(0, 1);
					}
					else if (iLocal_128 == 1)
					{
						if (PED::IS_PED_INJURED(iLocal_50[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
						{
							iLocal_49 = 0;
							iLocal_128 = 0;
						}
						else
						{
							func_73(iLocal_50[1]);
						}
					}
					else if (iLocal_128 == 0)
					{
						if (PED::IS_PED_INJURED(iLocal_50[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
						{
							iLocal_128 = -1;
						}
						else
						{
							func_73(iLocal_50[0]);
						}
					}
					break;
				
				case 8:
					func_65();
					break;
				
				case 9:
					func_217();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_53, -1) == PLAYER::PLAYER_PED_ID()) && !bLocal_112) && iLocal_47 != 8)
			{
				if (bLocal_108)
				{
					func_62(8);
				}
				else
				{
					func_62(5);
				}
			}
			if (bLocal_109)
			{
				if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_65, 1862763509) != 5)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_65, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_65);
				}
			}
			if (bLocal_110)
			{
				if ((OBJECT::DOES_PICKUP_EXIST(uLocal_136) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_136)) > 250f)
				{
					func_62(9);
				}
			}
			if (!bLocal_120)
			{
				if (func_61())
				{
					bLocal_120 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar2]))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar2]) && !PED::IS_PED_INJURED(iLocal_50[iVar2])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50[0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 0))
						{
							iVar3 = 1;
						}
					}
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_53)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_37();
				}
			}
			func_33();
			func_28();
			func_23();
		}
		if (!bLocal_106)
		{
			if (func_22())
			{
				iLocal_126 = MISC::GET_GAME_TIMER();
				bLocal_106 = true;
			}
		}
		if (bLocal_106)
		{
			if (!bLocal_107)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_126) > 5000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					if (func_21() < 30f)
					{
						if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_107 = true;
						}
					}
					else
					{
						bLocal_107 = true;
					}
				}
			}
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_126) > 10000 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && !iLocal_125)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar4 == 0)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_125 = 1;
		}
		if (bLocal_107)
		{
			if ((!PED::IS_PED_INJURED(iLocal_50[0]) || !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(func_3(), 1)) < SYSTEM::POW(50f, 2f))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
					PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && func_2())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
		if (GlobalFunc_236())
		{
			func_62(9);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 0) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 1) > 0f)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_53) == 3)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_53, 1);
				}
			}
			if (!bLocal_111)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 0))
				{
					bLocal_111 = true;
				}
			}
			if (!bLocal_111)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 0) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 1) == 0f)
				{
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_53) == 1)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_53, 3);
					}
				}
			}
		}
		if (iLocal_130 != 0)
		{
			if ((iLocal_47 == 8 || iLocal_47 == 6) || iLocal_47 == 4)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_130);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_50)
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar5]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[iVar5]))
					{
						if (iLocal_47 == 1)
						{
							if (!iLocal_511[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_511[iVar5] = 1;
							}
						}
						if (iLocal_47 == 7)
						{
							if (!iLocal_514[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_514[iVar5] = 1;
							}
						}
						if (WEAPON::IS_PED_ARMED(iLocal_50[iVar5], 4) && !iLocal_114)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_50[iVar5], 1);
							iLocal_114 = 1;
						}
					}
					else
					{
						if (iLocal_511[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 0, -1056964608);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 1, -1056964608);
							iLocal_511[iVar5] = 0;
						}
						if (iLocal_514[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 0, -1056964608);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 1, -1056964608);
							iLocal_514[iVar5] = 0;
						}
						if (iLocal_511[iVar5] || iLocal_514[iVar5])
						{
							iLocal_511[iVar5] = 0;
							iLocal_514[iVar5] = 0;
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 0, -1056964608);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 1, -1056964608);
						}
						if (WEAPON::IS_PED_ARMED(iLocal_50[iVar5], 4) && iLocal_114)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_50[iVar5], 1);
							iLocal_114 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_50)
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar5]))
				{
					if (iLocal_511[iVar5] || iLocal_514[iVar5])
					{
						iLocal_511[iVar5] = 0;
						iLocal_514[iVar5] = 0;
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 0, -1056964608);
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_50[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_108 && !bLocal_495)
		{
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED(iLocal_55)) && !PED::IS_PED_INJURED(iLocal_50[iLocal_129])) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_panic", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_calm", 3))
			{
				TASK::TASK_PLAY_ANIM(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_115)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_115 = 1;
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
			}
		}
	}
}


int func_2()//Position - 0x11CA
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && bLocal_113) && OBJECT::DOES_PICKUP_EXIST(uLocal_136)) || (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && OBJECT::DOES_PICKUP_EXIST(uLocal_136)))) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) < 20f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_136)) < 20f)
	{
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
		{
			return 1;
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()//Position - 0x132A
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_50[0]))
		{
			fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[0], 1));
			iVar1 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_50[1]))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[1], 1)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_50[iVar1];
}


















float func_21()//Position - 0x1BD6
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_50[0]))
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[0], 1));
		}
		if (!PED::IS_PED_INJURED(iLocal_50[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[1], 1)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[1], 1));
			}
		}
	}
	return SYSTEM::SQRT(fVar0);
}

int func_22()//Position - 0x1C60
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_50)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar1]))
			{
				if (((!PED::IS_PED_INJURED(iLocal_50[iVar1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[iVar1], PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_INJURED(iLocal_50[iVar1])) || ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1])) && iLocal_115)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_23()//Position - 0x1D04
{
	if (!bLocal_120)
	{
		if (!bLocal_108)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
				{
					OBJECT::DELETE_OBJECT(&iLocal_55);
					if (!OBJECT::DOES_PICKUP_EXIST(uLocal_136) && !bLocal_110)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_135) > 3000)
				{
					if (PED::IS_PED_INJURED(iLocal_50[iLocal_129]) || PED::IS_PED_RAGDOLL(iLocal_50[iLocal_129]))
					{
						ENTITY::DETACH_ENTITY(iLocal_55, 1, 1);
						iLocal_135 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (!OBJECT::DOES_PICKUP_EXIST(uLocal_136))
			{
				if (PED::IS_PED_INJURED(iLocal_50[iLocal_129]) || ((!PED::IS_PED_INJURED(iLocal_50[iLocal_129]) && PED::IS_PED_RAGDOLL(iLocal_50[iLocal_129])) && !bLocal_110))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			OBJECT::DELETE_OBJECT(&iLocal_55);
		}
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
		{
			OBJECT::REMOVE_PICKUP(uLocal_136);
		}
	}
}

void func_24(struct<3> Param0, bool bParam3)//Position - 0x1DF1
{
	if (!bLocal_120 && !bLocal_110)
	{
		if (!bParam3)
		{
			if (bLocal_108)
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_50[iLocal_129], 0), 1067030938, 1069547520) };
			}
		}
		MISC::SET_BIT(&uLocal_137, 3);
		MISC::SET_BIT(&uLocal_137, 4);
		MISC::SET_BIT(&uLocal_137, 1);
		if (bParam3)
		{
			uLocal_136 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_security_case"), Param0, ENTITY::GET_ENTITY_ROTATION(iLocal_55, 2), 0, uLocal_127, 2, 1, 0);
		}
		else
		{
			uLocal_136 = OBJECT::CREATE_PICKUP(joaat("pickup_money_security_case"), Param0, uLocal_137, uLocal_127, 1, 0);
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_63))
		{
			uLocal_63 = func_25(uLocal_136);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			OBJECT::DELETE_OBJECT(&iLocal_55);
		}
		bLocal_110 = true;
	}
}

int func_25(var uParam0)//Position - 0x1EC3
{
	return GlobalFunc_5666(uParam0);
}



void func_28()//Position - 0x1F20
{
	if (func_30())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_53, 2, 0, 0);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_53, 3, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				OBJECT::DELETE_OBJECT(&iLocal_56);
			}
		}
	}
	switch (iLocal_48)
	{
		case 0:
			if (bLocal_108)
			{
				iLocal_48 = 1;
			}
			break;
		
		case 1:
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 2) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 3) == 0f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
					{
						ENTITY::DETACH_ENTITY(iLocal_55, 1, 1);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, iLocal_53, 0, Local_80, Local_83, 0, 0, 0, 0, 2, 1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_110 && !bLocal_120)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 2) > 0.25f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 3) > 0.25f) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(AUDIO::GET_SOUND_ID(), "DOORS_BLOWN", ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_53, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								ENTITY::DETACH_ENTITY(iLocal_55, 1, 0);
								ENTITY::SET_ENTITY_COLLISION(iLocal_55, 1, 0);
								PHYSICS::ACTIVATE_PHYSICS(iLocal_55);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_55, 1);
								Local_476 = { ENTITY::GET_ENTITY_COORDS(iLocal_55, 1) - ENTITY::GET_ENTITY_COORDS(iLocal_53, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (SYSTEM::VMAG(Local_476) > 10f)
								{
									Local_476 = { GlobalFunc_107(Local_476) };
									Local_476 = { Local_476 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_132 < 100)
								{
									iLocal_116 = 1;
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_55, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_475 = MISC::GET_GAME_TIMER();
							}
							else if (MISC::_0x7F8F6405F4777AF6(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, Local_469), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, Local_472), 0) >= 1f)
							{
								iLocal_48 = 3;
								iLocal_122[0] = 0;
								iLocal_122[1] = 0;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_475) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_53, 2, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_53, 3, 0, 0);
					func_24(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_47 != 8)
			{
				func_62(8);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && !OBJECT::DOES_PICKUP_EXIST(uLocal_136))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_55) == 0f && (MISC::GET_GAME_TIMER() - iLocal_475) > 1000)
				{
					func_24(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), 1);
					OBJECT::DELETE_OBJECT(&iLocal_55);
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_475) > 5000)
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}


int func_30()//Position - 0x220E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56) && ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
	{
		if (!iLocal_465)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), joaat("weapon_stickybomb"), 0.25f, 0) || OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), 0.3f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stickybomb")), 0))
			{
				iLocal_465 = 1;
			}
		}
		iVar0 = 0;
		GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), 1f, 1) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), 0.3f) && iLocal_465))
		{
			iLocal_116 = 1;
			iVar0 = 1;
		}
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_56) < iLocal_131 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_132 = (iLocal_132 + (iLocal_131 - ENTITY::GET_ENTITY_HEALTH(iLocal_56)));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_56);
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_466) > 200 && ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (MISC::IS_BULLET_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, 0f, (1.2195f - 0.27f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, fLocal_468, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_466 = MISC::GET_GAME_TIMER();
				iLocal_467++;
			}
		}
		if (iLocal_467 > 5)
		{
			return 1;
		}
		if (iLocal_132 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_131 = ENTITY::GET_ENTITY_HEALTH(iLocal_56);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)//Position - 0x2377
{
	int iVar0;
	
	iVar0 = 0;
	if (!GlobalFunc_105(Param0 + Param3))
	{
		if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_AREA(5, Param3, Param0) || (FIRE::IS_EXPLOSION_IN_AREA(2, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(20, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(4, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(28, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(32, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(25, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(9, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(3, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(6, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(0, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(1, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(23, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(34, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(14, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(30, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(12, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(7, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(21, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(18, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(15, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(10, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(5, Param6, iParam9) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, Param6, iParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(20, Param6, iParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Param6, iParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(28, Param6, iParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(32, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(9, Param6, iParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(3, Param6, iParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(6, Param6, iParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(23, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(34, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Param6, iParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(30, Param6, iParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(12, Param6, iParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Param6, iParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(21, Param6, iParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(18, Param6, iParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, Param6, iParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, Param6, iParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}


void func_33()//Position - 0x27AC
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!HUD::DOES_BLIP_EXIST(uLocal_62))
	{
		if (!bLocal_109)
		{
			if ((!PED::IS_PED_INJURED(iLocal_50[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0)) && !bLocal_120)
			{
				if (!bLocal_108)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_59[1]))
					{
						uLocal_59[1] = GlobalFunc_6797(iLocal_50[1], 0, 145);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_59[1]))
					{
						HUD::REMOVE_BLIP(&(uLocal_59[1]));
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						uLocal_58 = GlobalFunc_6783(iLocal_53, 0, 0);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_59[1]))
				{
					HUD::REMOVE_BLIP(&(uLocal_59[1]));
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					HUD::REMOVE_BLIP(&uLocal_58);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_59[0]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_59[0]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_59[0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_59[1]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_59[1]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_59[1]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_58) && HUD::GET_BLIP_HUD_COLOUR(uLocal_58) != 119)
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_50[iVar0], iLocal_53, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					uLocal_58 = GlobalFunc_6783(iLocal_53, 1, 0);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && HUD::DOES_BLIP_EXIST(uLocal_58)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 0))
				{
					if (HUD::GET_BLIP_ALPHA(uLocal_58) != 0)
					{
						HUD::SET_BLIP_ALPHA(uLocal_58, 0);
					}
				}
				else if (HUD::GET_BLIP_ALPHA(uLocal_58) != 255)
				{
					HUD::SET_BLIP_ALPHA(uLocal_58, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!OBJECT::DOES_PICKUP_EXIST(uLocal_136) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_50[iVar0], 0))
					{
						if (!PED::IS_PED_FLEEING(iLocal_50[iVar0]) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_47 == 8 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_50[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_47 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_59[iVar0]))
					{
						uLocal_59[iVar0] = GlobalFunc_6797(iLocal_50[iVar0], 1, 145);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_59[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_59[iVar0]));
				}
				iVar0++;
			}
			if (OBJECT::DOES_PICKUP_EXIST(uLocal_136) && !bLocal_120)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_63))
				{
					uLocal_63 = GlobalFunc_5666(uLocal_136);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_63))
			{
				HUD::REMOVE_BLIP(&uLocal_63);
			}
		}
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_50[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_50[1]))
	{
		if ((((((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_53) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 100f, 100f, 30f, 0, 1, 0)) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_50[0]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 100f, 100f, 30f, 0, 1, 0))) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_50[1]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 100f, 100f, 30f, 0, 1, 0))) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 50f, 50f, 20f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 50f, 50f, 20f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 50f, 50f, 20f, 0, 1, 0))
		{
			HUD::REMOVE_BLIP(&uLocal_62);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_59[0]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_59[0], iLocal_121);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_59[1]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_59[1], iLocal_121);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_58))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58, iLocal_121);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_63))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_63, iLocal_121);
	}
	if (!iLocal_121)
	{
		if (bLocal_109 || iLocal_48 == 3)
		{
			iLocal_121 = 0;
		}
	}
}




void func_37()//Position - 0x2D55
{
	func_39(9, iLocal_46);
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_217();
}


void func_39(int iParam0, int iParam1)//Position - 0x2D82
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}






















int func_61()//Position - 0x41CF
{
	if (bLocal_110)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_136))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0)//Position - 0x41EA
{
	iLocal_47 = iParam0;
	iLocal_49 = 0;
}

int func_63()//Position - 0x41F9
{
	if (!OBJECT::DOES_PICKUP_EXIST(uLocal_136))
	{
		if (bLocal_108)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
			{
				if (!func_64(iLocal_53))
				{
					if (iLocal_464 == -1)
					{
						iLocal_464 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_464 != -1)
				{
					iLocal_464 = -1;
				}
			}
		}
		if (!bLocal_108)
		{
			if (iLocal_129 != -1)
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iLocal_129]))
				{
					if (!func_64(iLocal_53))
					{
						if (iLocal_464 == -1)
						{
							iLocal_464 = MISC::GET_GAME_TIMER();
						}
					}
					else if (iLocal_464 != -1)
					{
						iLocal_464 = -1;
					}
				}
			}
		}
		if (iLocal_464 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_464) > 3000)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[1]));
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, -1000f, 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_53, 1, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_53);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_464 != -1)
		{
			iLocal_464 = -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(OBJECT::GET_PICKUP_COORDS(uLocal_136), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x4303
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_65()//Position - 0x4374
{
	int iVar0;
	int iVar1;
	
	if (iLocal_506 == -1)
	{
		iLocal_506 = MISC::GET_GAME_TIMER();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_49)
		{
			case 0:
				bLocal_109 = true;
				if (!PED::IS_PED_INJURED(iLocal_50[0]) || !PED::IS_PED_INJURED(iLocal_50[1]))
				{
					if (func_21() < 30f && !PED::IS_PED_INJURED(Local_139[3 /*10*/]))
					{
						GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!PED::IS_PED_INJURED(iLocal_50[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_55))
					{
						if ((iVar0 != iLocal_129 || bLocal_108) || !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[iVar0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_50[iVar0]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_57);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_50[iVar0], 0))
							{
								if (iLocal_116)
								{
									if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic"))
									{
										PED::SET_PED_MOVEMENT_CLIPSET(iLocal_50[iVar0], "move_injured_generic", 1048576000);
										iLocal_117[iVar0] = 1;
									}
								}
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
							}
							TASK::TASK_CLEAR_LOOK_AT(0);
							if (iLocal_117[iVar0])
							{
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
							}
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_57);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], uLocal_57);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_57);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 6, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 1, 0);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_50[iVar0], 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_50[iVar0], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], 1);
					}
					iVar0++;
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED(iLocal_55)) && !PED::IS_PED_INJURED(iLocal_50[iLocal_129]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_50[iLocal_129]);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_49++;
				break;
			
			case 1:
				if (func_70(iLocal_129))
				{
					if (!PED::IS_PED_INJURED(iLocal_50[iLocal_129]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_50[iLocal_129]);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_57);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_50[iLocal_129], 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						}
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_57);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iLocal_129], uLocal_57);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_57);
					}
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_50[0]) || !PED::IS_PED_INJURED(iLocal_50[1]))
				{
					if (PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1]))
					{
						if (Local_139[3 /*10*/] != iLocal_50[1])
						{
							GlobalFunc_200(&Local_139, 3);
							GlobalFunc_200(&Local_139, 4);
							GlobalFunc_1286(&Local_139, 3, iLocal_50[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_50)
					{
						if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
						{
							if ((iLocal_48 == 2 && !iLocal_122[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_53))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_50[iVar0], iLocal_53, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, -4f, 0f), 5f, 0);
								iLocal_122[iVar0] = 1;
							}
							if (((OBJECT::DOES_PICKUP_EXIST(uLocal_136) && !iLocal_122[iVar0]) && iLocal_48 == 3) && !bLocal_120)
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_50[iVar0], iLocal_53, OBJECT::GET_PICKUP_COORDS(uLocal_136), 5f, 0);
								iLocal_122[iVar0] = 1;
							}
							if (bLocal_120)
							{
								if (iLocal_122[iVar0])
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_50[iVar0], 0);
									iLocal_122[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_499)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(10000f, 15000f))
					{
						if (!GlobalFunc_111() && func_21() < 30f)
						{
							if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
							{
								if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_499 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
					{
						if (!bLocal_108)
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 0) && (MISC::GET_GAME_TIMER() - iLocal_506) > 5000)
							{
								if (func_21() > (30f + (30f / 10f)))
								{
									func_62(7);
								}
								if (func_21() > (30f / 2f) && !func_66())
								{
									if (!bLocal_108)
									{
										func_62(7);
									}
									else
									{
										func_62(6);
									}
								}
								if (iLocal_47 != 8)
								{
									iLocal_122[0] = 0;
									iLocal_122[1] = 0;
									iLocal_506 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (SYSTEM::TIMERA() > iVar1 && iLocal_117[iVar0])
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_50[iVar0], 1048576000);
					iLocal_117[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_66()//Position - 0x4843
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_483) > 250)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_50[iVar0], PLAYER::PLAYER_PED_ID(), 19) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_50[iVar0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_480[iVar0] = 1;
					}
					else
					{
						iLocal_480[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_480[0] || iLocal_480[1]);
}




bool func_70(int iParam0)//Position - 0x49AA
{
	bool bVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
	{
		if (!PED::IS_PED_INJURED(iLocal_50[iParam0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[iParam0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_50[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						ENTITY::DETACH_ENTITY(iLocal_55, 1, 1);
						OBJECT::DELETE_OBJECT(&iLocal_55);
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iParam0], 1);
					TASK::TASK_PLAY_ANIM(iLocal_50[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!ENTITY::DOES_ENTITY_EXIST(iLocal_55) || (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[iParam0])));
	if (bVar0)
	{
		if (!PED::IS_PED_INJURED(iLocal_50[iParam0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iParam0], 0);
		}
	}
	return bVar0;
}

void func_71(int iParam0, bool bParam1)//Position - 0x4A8E
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	struct<3> Var5[2];
	int iVar12;
	bool bVar13;
	var uVar14;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { GlobalFunc_107(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_53, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))) };
		fVar3 = ((ENTITY::GET_ENTITY_HEADING(iLocal_53) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1)) + 45f);
		fVar4 = ((ENTITY::GET_ENTITY_HEADING(iLocal_53) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_500) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_50[iVar12]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_50)
			{
				if ((((((!PED::IS_PED_INJURED(iLocal_50[iVar12]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (MISC::GET_GAME_TIMER() - iLocal_503[iVar12]) > 1000) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_50[iVar12], 0)) && !iLocal_480[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_500 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar14);
						if (func_66() || GlobalFunc_105(Local_500))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Var5[iVar12 /*3*/], PLAYER::PLAYER_PED_ID(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var5[iVar12 /*3*/], Local_500, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
							TASK::TASK_AIM_GUN_AT_COORD(0, Local_500, -1, 1, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uVar14);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar12], uVar14);
						TASK::CLEAR_SEQUENCE_TASK(&uVar14);
					}
					iLocal_503[iVar12] = MISC::GET_GAME_TIMER();
				}
				iVar12++;
			}
		}
	}
}

void func_72(float fParam0)//Position - 0x4CF3
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_73(int iParam0)//Position - 0x4D2E
{
	float fVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
	{
		switch (iLocal_49)
		{
			case 0:
				if (!bLocal_108)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
					TASK::CLEAR_PED_TASKS(iParam0);
					Local_484 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_53, 0) };
					Local_487 = { ENTITY::GET_ENTITY_ROTATION(iLocal_53, 2) };
					Local_490 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_panic", Local_484, Local_487, 0, 2) };
					if (((!PED::IS_PED_INJURED(iLocal_50[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[1])) && !PED::IS_PED_INJURED(iLocal_50[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
					{
						if (func_21() < 20f)
						{
							if (bLocal_109)
							{
								GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
						{
							if (bLocal_109)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(uLocal_136), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(uLocal_136), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_49++;
						}
						else
						{
							func_79(iParam0);
							iLocal_49 = 2;
						}
					}
					else if (!PED::IS_PED_INJURED(iParam0))
					{
						if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(uLocal_136), 2f, -1, 0.25f, 0, 1193033728);
							iLocal_49++;
						}
						else
						{
							func_79(iParam0);
							iLocal_49 = 2;
						}
					}
				}
				else
				{
					iLocal_49 = 4;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(iParam0) && OBJECT::DOES_PICKUP_EXIST(uLocal_136))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), OBJECT::GET_PICKUP_COORDS(uLocal_136), 1) < 2f && !PED::IS_PED_RAGDOLL(iParam0)) && (MISC::GET_GAME_TIMER() - iLocal_135) > 3000)
					{
						if (WEAPON::IS_PED_ARMED(iParam0, 4))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), 1);
						}
						OBJECT::REMOVE_PICKUP(uLocal_136);
						func_79(iParam0);
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_110 = false;
						iLocal_129 = iLocal_128;
						iLocal_49++;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
					{
						if (bLocal_109)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_490, 2f, -1, 0.1f, 512, Local_487.f_2);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
						}
						iLocal_49++;
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
					{
						iLocal_49 = 0;
					}
					else
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_487.f_2 > 180f)
						{
							Local_487.f_2 = (Local_487.f_2 - 360f);
						}
						if (Local_487.f_2 <= -180f)
						{
							Local_487.f_2 = (Local_487.f_2 + 360f);
						}
						if (SYSTEM::VDIST(Local_490, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) < 0.3f)
						{
							if (MISC::ABSF((fVar0 - Local_487.f_2)) < 15f)
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iParam0, -1056964608);
								TASK::CLEAR_PED_TASKS(iParam0);
								bLocal_495 = true;
								iLocal_493 = PED::CREATE_SYNCHRONIZED_SCENE(Local_484, Local_487, 2);
								if (bLocal_109)
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, iLocal_493, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
								iLocal_49++;
							}
						}
						else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0) && !CAM::IS_SPHERE_VISIBLE(Local_484, 2f))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0, Local_484, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
				{
					if (bLocal_109)
					{
						fLocal_507 = 0.42f;
					}
					else
					{
						fLocal_507 = 0.3893f;
					}
					if (bLocal_109)
					{
						fLocal_508 = 0.52f;
					}
					else
					{
						fLocal_508 = 0.546243f;
					}
					if (!bLocal_108)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iParam0)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > fLocal_507)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_53))
							{
								ENTITY::DETACH_ENTITY(iLocal_55, 1, 1);
								ENTITY::SET_ENTITY_COLLISION(iLocal_55, 0, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, iLocal_53, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_55, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_108 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > fLocal_508)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, -4f, 1);
						TASK::CLEAR_PED_TASKS(iParam0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
						{
							iLocal_105 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 2, 1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 3, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 5:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > fLocal_508) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
				{
					if (!bLocal_109)
					{
						if (!PED::IS_PED_INJURED(iLocal_50[0]))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_49++;
				}
				break;
			
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
				{
					if (bLocal_109)
					{
						func_62(6);
					}
					else
					{
						func_62(4);
					}
				}
				else
				{
					func_62(8);
				}
				break;
			}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_50[0]) || !PED::IS_PED_INJURED(iLocal_50[1]))
		{
			func_62(8);
		}
	}
	if ((!PED::IS_PED_INJURED(iLocal_50[0]) || !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_108)
		{
			if ((((((func_21() < 10f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && func_66()) || ((func_21() < 20f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))) || (func_21() < 5f && bLocal_109)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_74(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))) || ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && func_74(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_47 != 7)
	{
		if (bLocal_108)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, -8f, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
		}
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && iLocal_47 != 7) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, -8f, 1);
	}
}

int func_74(int iParam0)//Position - 0x5412
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7[4];
	struct<3> Var20[4];
	struct<3> Var33[4];
	struct<3> Var46[4];
	var uVar59;
	float fVar72;
	float fVar73;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		uVar59 = 4;
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, fVar73, 1.5f, 0f) };
		if (!bLocal_108)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_53, 1))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[1]) && !PED::IS_PED_IN_VEHICLE(iLocal_50[1], iLocal_53, 1))
		{
			if (func_75(&Var46, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_75(var uParam0, var uParam1, var uParam2)//Position - 0x565E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (GlobalFunc_5118(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}




void func_79(int iParam0)//Position - 0x584E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			iLocal_55 = OBJECT::CREATE_OBJECT(iLocal_104, Local_76, 1, 1, 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_55, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 28422), Local_89, Local_92, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_80()//Position - 0x58A8
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (iLocal_49)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_109 = true;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_83()))
				{
					if (!PED::IS_PED_INJURED(func_83()))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_53, -1) != func_83() && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_53, -1))
						{
							TASK::TASK_ENTER_VEHICLE(func_83(), iLocal_53, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50[1]) && func_83() != iLocal_50[1])
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_53, 0) != iLocal_50[1] && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_53, 0))
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_50[1], iLocal_53, -1, 0, 1073741824, 1, 0);
					}
				}
				iLocal_49++;
			}
			else
			{
				func_62(8);
			}
			break;
		
		case 1:
			if (func_82())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_83()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(func_83(), iLocal_53, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_49++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_83()))
				{
					TASK::TASK_VEHICLE_MISSION(func_83(), iLocal_53, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_49++;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_53) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_53, -1))) && (ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_53, -1)) || PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_53, -1))))
	{
		iVar1 = 0;
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_53, -1) == iLocal_50[0])
		{
			iVar1 = 1;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 100f)
		{
			if (!PED::IS_PED_INJURED(iLocal_50[iVar1]) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[iVar1], 242628503) != 1)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_50[iVar1], 2, 1);
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_53);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_53, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar1], uVar2);
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) || OBJECT::DOES_PICKUP_EXIST(uLocal_136)) || iLocal_48 == 3) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_53, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_53, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_53, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_53, 1, 40000)) || (iLocal_49 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()//Position - 0x5BB2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
		{
			if (((((ENTITY::GET_ENTITY_HEALTH(iLocal_53) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_53) < 200f) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 1, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 5, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 4, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 1, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_53, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()//Position - 0x5C5D
{
	int iVar0;
	
	iVar0 = 1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_50[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_53, 0))
			{
				iVar0 = 0;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_50[1], iLocal_53, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_83()//Position - 0x5CD8
{
	if (!PED::IS_PED_INJURED(iLocal_50[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
	{
		return iLocal_50[0];
	}
	if (!PED::IS_PED_INJURED(iLocal_50[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
	{
		return iLocal_50[1];
	}
	return 0;
}

void func_84()//Position - 0x5D2F
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_108)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
				{
					ENTITY::DETACH_ENTITY(iLocal_55, 1, 1);
				}
			}
			if ((!PED::IS_PED_INJURED(iLocal_50[0]) || !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_21() < 20f)
				{
					GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 17, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_50[iVar0], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_50[iVar0], 16, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 1, 0);
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_50[iVar0], 1))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_50[iVar0], 0, 256);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_112 = true;
			iLocal_49++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
			{
				if (GlobalFunc_367(iLocal_53, 1, 0, 0))
				{
					iLocal_49++;
				}
			}
			break;
	}
}


void func_86()//Position - 0x5F31
{
	if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1]))
	{
		switch (iLocal_49)
		{
			case 0:
				if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[0]))
						{
							func_87(0);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_50[0]);
						}
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[1]))
						{
							func_87(1);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_50[1]);
						}
						iLocal_49++;
					}
					else
					{
						func_87(0);
						func_87(1);
						iLocal_49 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_129))
				{
					if (!PED::IS_PED_INJURED(iLocal_50[iLocal_129]))
					{
						func_87(iLocal_129);
					}
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_CAR2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_49++;
					}
				}
				break;
			
			case 3:
				if ((SYSTEM::TIMERA() > 12000 && !GlobalFunc_111()) && GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_CAR3", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_49++;
				}
				break;
			
			case 4:
				if ((SYSTEM::TIMERA() > 7000 && !GlobalFunc_111()) && GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_CAR4", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_62(8);
				}
				break;
			}
	}
	if (iLocal_49 > 0)
	{
		func_71(-1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_54) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_54, 0)) || (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_54, 1119092736) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_54, 1)))
		{
			if (!func_74(iLocal_54))
			{
				func_62(7);
			}
			else
			{
				func_62(8);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 1))
		{
			func_62(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 1))
		{
			func_62(8);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_115)
		{
			func_62(8);
		}
	}
	if (bLocal_120)
	{
		func_62(8);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_66()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
	{
		func_62(2);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
	{
		func_62(5);
	}
}

void func_87(int iParam0)//Position - 0x6224
{
	if (!PED::IS_PED_INJURED(iLocal_50[iParam0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(iLocal_50[iParam0]);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_57);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_50[iParam0], 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		}
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_57);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iParam0], uLocal_57);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_57);
		if (iLocal_130 == 0)
		{
			iLocal_130 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(116, ENTITY::GET_ENTITY_COORDS(iLocal_50[iParam0], 1), -1082130432);
		}
	}
}

void func_88()//Position - 0x62C1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_49)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_50[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[0], 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_50[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[1], 1);
			}
			if (func_95())
			{
				if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_ATT1", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_62(8);
				}
			}
			else if ((!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_94() || func_93())
				{
					GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0);
				}
				SYSTEM::SETTIMERA(0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[0]))
					{
						func_87(0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_50[0]);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[1]))
					{
						func_87(1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_50[1]);
					}
					iLocal_49++;
				}
				else
				{
					func_87(0);
					func_87(1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_129))
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iLocal_129]))
				{
					func_87(iLocal_129);
				}
				iLocal_49++;
			}
			break;
		
		case 2:
			if (!func_92())
			{
				if (!func_91(iLocal_53, 1000) && SYSTEM::TIMERA() > 10000)
				{
					bVar0 = true;
				}
				else if (SYSTEM::TIMERA() > 7000)
				{
					SYSTEM::SETTIMERA(7000);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (func_94())
					{
						bVar0 = true;
					}
				}
				if (SYSTEM::TIMERA() > 10000)
				{
					if (func_93())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_50)
				{
					if (!func_91(iLocal_50[iVar1], 1000) && (func_21() < 2f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
					{
						bVar0 = true;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar1]))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[iVar1]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_499)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5000f, 7500f))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_499 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (bVar0)
				{
					GlobalFunc_4956();
					func_62(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_50)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar2]))
		{
			if ((PED::IS_PED_INJURED(iLocal_50[iVar2]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar2])) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[iVar2], PLAYER::PLAYER_PED_ID(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((PED::IS_PED_INJURED(iLocal_50[0]) || PED::IS_PED_INJURED(iLocal_50[1])) || bLocal_120)
	{
		func_62(8);
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_66())
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_62(8);
		}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
	{
		func_62(5);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_480[0] && !iLocal_480[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}



int func_91(int iParam0, int iParam1)//Position - 0x66E8
{
	int iVar0;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if ((ENTITY::IS_ENTITY_A_PED(iParam0) && !PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0)))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > fLocal_497)
				{
					iVar0 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_498) > iParam1)
				{
					fLocal_497 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1));
					iLocal_498 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	return iVar0;
}

int func_92()//Position - 0x6788
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 20f, 20f, 5f, 0, 1, 0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()//Position - 0x67D8
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, 1.7532f, 0.5984f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(iLocal_50[iVar0], iLocal_53, 0) && PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_94()//Position - 0x689A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_53)
		{
			if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()//Position - 0x68D7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((!PED::IS_PED_INJURED(iLocal_50[0]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, 0, 1, 0)) || (!PED::IS_PED_INJURED(iLocal_50[1]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}



















void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x760E
{
	GlobalFunc_9524(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}








void func_122(int iParam0)//Position - 0x7C08
{
	MISC::SET_BIT(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_SECVANHELP), iParam0);
}


bool func_124(int iParam0)//Position - 0x7C36
{
	return MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_SECVANHELP, iParam0);
}










void func_134()//Position - 0x81E6
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_49)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[0], 6, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[1], 6, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[0], 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[1], 1);
					if (PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_53, 0) && PED::IS_PED_IN_VEHICLE(iLocal_50[1], iLocal_53, 0))
					{
						if (iLocal_46 == 2)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_53, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_53, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							iLocal_49++;
						}
						else if (iLocal_46 == 4)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_53, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_53, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							iLocal_49++;
						}
						else if (iLocal_46 == 7)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar2);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_53, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_53, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(uVar2);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], uVar2);
							TASK::CLEAR_SEQUENCE_TASK(&uVar2);
							iLocal_49++;
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_50[0], iLocal_53, 10f, 786603);
							iLocal_49++;
						}
					}
					else
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_53, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[0], -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_50[0], iLocal_53, -1, -1, 1f, 8388608, 0);
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_50[1], iLocal_53, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_50[1], iLocal_53, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_138() || func_137()) || func_94()) || func_93()) || func_136()) || func_135())
			{
				if (func_21() < 20f)
				{
					GlobalFunc_4956();
					GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_50)
				{
					if (!PED::IS_PED_INJURED(iLocal_50[iVar3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar3]))
					{
						if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_50[iVar3]))
						{
							func_62(8);
						}
					}
					else
					{
						func_62(6);
					}
					iVar3++;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_47 == 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("PLAYER HAS PROJECTILE WEAPON", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 0, 255, 255);
				if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) < 225f)
				{
					func_62(6);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1)) < 225f)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_50[0], 1), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_50[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_47 != 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_50[0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[0], 6, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[0], 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_50[1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[1], 6, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[1], 0);
			}
		}
	}
}

int func_135()//Position - 0x872D
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iLocal_53, 1) };
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_53) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_53, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
		if (((Var6.f_1 > 1f && (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[1]))) && MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.x, Var3.f_1, Var0.x, Var0.f_1)) < 60f) && MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_136()//Position - 0x881D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, -2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137()//Position - 0x88DE
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			return ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_53)) && ENTITY::GET_ENTITY_SPEED(iVar0) > 10f);
		}
	}
	return 0;
}

int func_138()//Position - 0x8977
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_115)
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_50[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_139()//Position - 0x89F7
{
	float fVar0;
	
	if ((!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
	{
		switch (iLocal_49)
		{
			case 0:
				Local_484 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_53, 0) };
				Local_487 = { ENTITY::GET_ENTITY_ROTATION(iLocal_53, 2) };
				Local_490 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0, 2) };
				bLocal_495 = false;
				iLocal_496 = 0;
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_53);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_57);
				TASK::TASK_STAND_STILL(0, 5000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
				TASK::TASK_ACHIEVE_HEADING(0, Local_487.f_2, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_57);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], uLocal_57);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_57);
				iLocal_49++;
				break;
			
			case 1:
				Local_484 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_53, 0) };
				Local_487 = { ENTITY::GET_ENTITY_ROTATION(iLocal_53, 2) };
				Local_490 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0, 2) };
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_494))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_76) < 22500f && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_53))
					{
						iLocal_494 = PED::CREATE_SYNCHRONIZED_SCENE(Local_484, Local_487, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_494, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_494, 1);
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], 242628503) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_57);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_487.f_2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_57);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], uLocal_57);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_57);
				}
				fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_50[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_487.f_2 > 180f)
				{
					Local_487.f_2 = (Local_487.f_2 - 360f);
				}
				if (Local_487.f_2 <= -180f)
				{
					Local_487.f_2 = (Local_487.f_2 + 360f);
				}
				if (MISC::ABSF((fVar0 - Local_487.f_2)) < 15f && SYSTEM::VDIST(Local_490, ENTITY::GET_ENTITY_COORDS(iLocal_50[1], 1)) < 0.2f)
				{
					PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iLocal_50[1], -1056964608);
					TASK::CLEAR_PED_TASKS(iLocal_50[1]);
					bLocal_495 = true;
					iLocal_493 = PED::CREATE_SYNCHRONIZED_SCENE(Local_484, Local_487, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[1], iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!iLocal_105)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > 0.09f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) < 0.11f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_105 = 1;
							}
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
				{
					if (!bLocal_108)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_50[1])) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > 0.3793f)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, iLocal_53))
							{
								ENTITY::DETACH_ENTITY(iLocal_55, 1, 1);
								ENTITY::SET_ENTITY_COLLISION(iLocal_55, 0, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, iLocal_53, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_55, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_108 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > 0.546243f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, -4f, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
						{
							iLocal_105 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 2, 1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 3, 1);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_105)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > 0.56f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (GlobalFunc_10641(&Local_139, cLocal_138, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_105 = 1;
						}
					}
				}
				if (!iLocal_496)
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) > 0.6f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_494))
						{
							TASK::CLEAR_PED_TASKS(iLocal_50[0]);
							iLocal_494 = PED::CREATE_SYNCHRONIZED_SCENE(Local_484, Local_487, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_494, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_496 = 1;
					}
				}
				else if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_494) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_494) >= 0.92f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_494))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_53, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[0], -1794415470) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_50[0]);
						TASK::TASK_ENTER_VEHICLE(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_50[1], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
				{
					TASK::CLEAR_PED_TASKS(iLocal_50[1]);
					TASK::TASK_ENTER_VEHICLE(iLocal_50[1], iLocal_53, -1, 0, 1f, 1, 0);
					SYSTEM::SETTIMERA(0);
				}
				if ((func_82() && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 0) == 0f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_53, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 15000)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 0, 1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 1, 1);
				}
				break;
		}
		if (((!PED::IS_PED_INJURED(func_3()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(func_3(), 1)) < 30f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			func_62(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50[1]))
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
		{
			func_62(7);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_143())
		{
			if (func_82())
			{
				func_62(6);
			}
			else
			{
				func_62(8);
			}
		}
		else if (func_141())
		{
			func_62(2);
		}
		else if (func_140())
		{
			func_62(3);
		}
	}
	if (iLocal_47 != 1)
	{
		if (iLocal_47 != 4)
		{
			GlobalFunc_4956();
			if (!PED::IS_PED_INJURED(iLocal_50[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_46 != 2)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_50[0], "random@security_van", "driver_exit_panic", Local_484, Local_487, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_50[0]);
						TASK::TASK_PLAY_ANIM(iLocal_50[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493)) && !PED::IS_PED_INJURED(iLocal_50[1]))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_53, -1000f, 1);
				TASK::CLEAR_PED_TASKS(iLocal_50[1]);
			}
		}
		if (bLocal_108 && !OBJECT::DOES_PICKUP_EXIST(uLocal_136))
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 2, 1);
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_53, 3, 1);
		}
	}
}

int func_140()//Position - 0x918E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (func_74(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iLocal_54 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					return 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (func_74(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				fLocal_479 = (fLocal_479 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_479 > 0f)
			{
				fLocal_479 = (fLocal_479 - (MISC::GET_FRAME_TIME() * 10f));
			}
			else if (fLocal_479 < 0f)
			{
				fLocal_479 = 0f;
			}
			if (fLocal_479 > 3f)
			{
				iLocal_54 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_141()//Position - 0x9242
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_50[iVar0]) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[iVar0]) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar0], 1)) < 9f) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7)) && func_66())
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_50[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_93())
	{
		return 1;
	}
	if ((func_142() || func_94()) && func_66())
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_53, 0) || !PED::IS_PED_IN_VEHICLE(iLocal_50[1], iLocal_53, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_142()//Position - 0x9344
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (iVar0 == joaat("weapon_petrolcan") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(iLocal_50[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50[1]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_143()//Position - 0x93F5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_50[iVar0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[iVar0], PLAYER::PLAYER_PED_ID(), 1)) || (!PED::IS_PED_INJURED(iLocal_50[iVar0]) && PED::IS_PED_IN_COMBAT(iLocal_50[iVar0], PLAYER::PLAYER_PED_ID()))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[iVar0], PLAYER::PLAYER_PED_ID(), 1)) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1) && func_66())) || PED::IS_PED_INJURED(iLocal_50[iVar0])) || ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_136() || func_95())
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
			{
				if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_50[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_50[0], 1), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_50[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_144()//Position - 0x95E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar0]))
		{
			if ((!PED::IS_PED_INJURED(iLocal_50[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar0])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar0], 1), 5f, 1) || func_31(ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar0], 1) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					bLocal_109 = true;
					return 1;
				}
			}
			else
			{
				bLocal_109 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_145()//Position - 0x96AB
{
	int iVar0;
	
	iLocal_53 = VEHICLE::CREATE_VEHICLE(iLocal_103, Local_76, fLocal_79, 1, 1);
	iLocal_56 = OBJECT::CREATE_OBJECT(joaat("prop_security_case_01"), Local_76, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_56, iLocal_53, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_56, 0);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_56, iLocal_53, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_53);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_53, 3);
	ENTITY::SET_ENTITY_PROOFS(iLocal_56, 0, 1, 1, 1, 1, 1, 0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, 1, 0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_53, 700);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_53, 0, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, 1);
	VEHICLE::SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(iLocal_53, 0);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_53, 1);
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Local_76.x - 200f), (Local_76.f_1 - 200f), (Local_76.x + 200f), (Local_76.f_1 + 200f));
	if (iLocal_45 == 3)
	{
		iLocal_50[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_53, 26, iLocal_102, -1, 1, 1);
		iLocal_50[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_53, 26, iLocal_102, 0, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_53, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, 1);
	}
	else
	{
		iLocal_50[1] = PED::CREATE_PED(26, iLocal_102, Local_66[1 /*3*/], fLocal_73[1], 1, 1);
		iLocal_50[0] = PED::CREATE_PED(26, iLocal_102, Local_66[0 /*3*/], fLocal_73[0], 1, 1);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_50[1], iLocal_50[0], -1, 0, 2);
	}
	func_79(iLocal_50[1]);
	PED::ADD_RELATIONSHIP_GROUP("Security_guards", &iLocal_65);
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		PED::SET_PED_MONEY(iLocal_50[iVar0], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 6, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 8, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar0], 10, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_50[iVar0], 512, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_50[iVar0], 118, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_50[iVar0], 128, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_50[iVar0], 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_50[iVar0], 1, 0);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_50[iVar0], 1);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iLocal_50[iVar0], 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_50[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50[iVar0], iLocal_65);
		PED::SET_PED_KEEP_TASK(iLocal_50[iVar0], 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_50[iVar0], 250);
		iVar0++;
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_50[1], 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_65);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_65, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_65, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_65);
	if (iLocal_45 == 1)
	{
		PED::SET_PED_PROP_INDEX(iLocal_50[0], 0, 1, 0, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_50[0], 0);
		PED::SET_PED_PROP_INDEX(iLocal_50[1], 0, 1, 0, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_50[1], 0);
	}
	if (GlobalFunc_8329() == 0 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_1286(&Local_139, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (GlobalFunc_8329() == 1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_1286(&Local_139, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (GlobalFunc_8329() == 2 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_1286(&Local_139, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	GlobalFunc_1286(&Local_139, 3, iLocal_50[0], "SECVANGUY1", 0, 1);
	GlobalFunc_1286(&Local_139, 4, iLocal_50[1], "SECVANGUY2", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_103, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_102, 1);
	if (iLocal_45 != 3)
	{
	}
}


bool func_147()//Position - 0x9A4B
{
	GlobalFunc_6492(&uLocal_316, iLocal_102);
	GlobalFunc_6492(&uLocal_316, iLocal_103);
	GlobalFunc_6492(&uLocal_316, iLocal_104);
	GlobalFunc_6491(&uLocal_316, "random@security_van");
	GlobalFunc_6491(&uLocal_316, "weapons@holster_1h");
	GlobalFunc_6491(&uLocal_316, "move_injured_generic");
	GlobalFunc_4607(&uLocal_316, 3);
	return func_148(&uLocal_316);
}

int func_148(var uParam0)//Position - 0x9A9D
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_149(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_149(var uParam0)//Position - 0x9AFF
{
	return func_150(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_150(var uParam0, char* sParam1, var uParam2)//Position - 0x9B16
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (GlobalFunc_2270(uParam0))
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
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(uParam0, 27));
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






int func_156()//Position - 0x9D5B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}














void func_170(var uParam0)//Position - 0xBA60
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || MISC::IS_BIT_SET(Global_89962.f_20, 2)) || MISC::IS_BIT_SET(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_171(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_171(var uParam0)//Position - 0xBAEA
{
	func_172(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_172(var uParam0, char* sParam1, var uParam2)//Position - 0xBB00
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

void func_173()//Position - 0xBBD9
{
	iLocal_104 = joaat("prop_security_case_01");
	iLocal_103 = joaat("stockade");
	iLocal_102 = joaat("s_m_m_armoured_01");
	uLocal_127 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000);
	switch (iLocal_46)
	{
		case 1:
			Local_95 = { -315.889f, -1550.554f, 7.233013f };
			Local_98 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_101 = 180f;
			Local_76 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_79 = -64.3539f;
			Local_66[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_73[0] = 158.3857f;
			Local_66[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_73[1] = 290.3041f;
			iLocal_45 = 1;
			break;
		
		case 2:
			Local_95 = { -538.2149f, -868.7426f, 17.96054f };
			Local_98 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_101 = 121.5f;
			Local_76 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_79 = -89.02679f;
			Local_66[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_73[0] = 12.5464f;
			Local_66[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_73[1] = 352.4951f;
			iLocal_45 = 1;
			break;
		
		case 3:
			Local_95 = { -468.6309f, 6101.907f, 14.8912f };
			Local_98 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_101 = 152.25f;
			Local_76 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_79 = 188.9862f;
			Local_66[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_73[0] = 251.7138f;
			Local_66[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_73[1] = 154.0836f;
			iLocal_45 = 2;
			break;
		
		case 4:
			Local_95 = { -631.3408f, -1105.581f, 7.220509f };
			Local_98 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_101 = 177.25f;
			Local_76 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_79 = 263.4662f;
			Local_66[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_73[0] = 338.8304f;
			Local_66[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_73[1] = 151.297f;
			iLocal_45 = 1;
			break;
		
		case 5:
			Local_76 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_79 = 26.9919f;
			iLocal_45 = 3;
			break;
		
		case 6:
			Local_76 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_79 = 271.1543f;
			iLocal_45 = 3;
			break;
		
		case 7:
			Local_76 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_79 = 335.9052f;
			iLocal_45 = 3;
			break;
		
		case 8:
			Local_76 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_79 = 119.1519f;
			iLocal_45 = 3;
			break;
		
		case 9:
			Local_76 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_79 = 83.1204f;
			iLocal_45 = 3;
			break;
		
		case 10:
			Local_76 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_79 = 248.8625f;
			iLocal_45 = 3;
			break;
		
		default:
			break;
	}
}




int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xBFBD
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_2(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10550())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_8988(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8329() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}








































void func_217()//Position - 0xD59A
{
	if (GlobalFunc_6827())
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_136))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_63))
			{
				HUD::REMOVE_BLIP(&uLocal_63);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			OBJECT::DELETE_OBJECT(&iLocal_56);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_55))
			{
				OBJECT::DELETE_OBJECT(&iLocal_55);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_55);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_104);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_102, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_103, 0);
	}
	if (iLocal_130 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_130);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_64, 0);
	GlobalFunc_4948(&uLocal_304, 0, 0);
	GlobalFunc_10823(-1);
	func_218(&uLocal_316, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_218(var uParam0, bool bParam1)//Position - 0xD648
{
	int iVar0;
	
	if (!bParam1)
	{
		func_220(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_2281(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}


void func_220(var uParam0)//Position - 0xD69C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			GlobalFunc_7553(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}














int func_234(int iParam0)//Position - 0xDF83
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
		{
			return -1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
		{
			return 0;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
		{
			return 2;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 3))
		{
			return 3;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 4))
		{
			return 4;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 5))
		{
			return 5;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 6))
		{
			return 6;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 7))
		{
			return 7;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 8))
		{
			return 8;
		}
	}
	return -2;
}

