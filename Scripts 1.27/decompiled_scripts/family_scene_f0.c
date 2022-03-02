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
	var uLocal_43 = 8;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 2;
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
	var uLocal_64 = 8;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83[3] = { 0, 0, 0 };
	var uLocal_87[3] = { 0, 0, 0 };
	int iLocal_91[1] = { 0 };
	var uLocal_93[3] = { 0, 0, 0 };
	var uLocal_97[3] = { 0, 0, 0 };
	int iLocal_101[3] = { 0, 0, 0 };
	int iLocal_105[3] = { 0, 0, 0 };
	struct<3> Local_109[3];
	struct<3> Local_119[3];
	int iLocal_129 = 0;
	int iLocal_130[2] = { 0, 0 };
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	struct<3> Local_144 = { 0, 0, 0 } ;
	float fLocal_147 = 0f;
	struct<3> Local_148[3];
	var uLocal_158[3] = { 0, 0, 0 };
	var uLocal_162 = 3;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166[3] = { 0, 0, 0 };
	var uLocal_170 = 3;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
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
	struct<16> Local_219[3];
	struct<16> Local_268[3];
	var uLocal_317 = 5;
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
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344[3] = { 0, 0, 0 };
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354[3] = { 0, 0, 0 };
	var uLocal_358 = 16;
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
	int iLocal_523[3] = { 0, 0, 0 };
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_82 = 1;
	iLocal_143 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_576();
	}
	SYSTEM::WAIT(0);
	func_574(ScriptParam_0);
	func_573();
	while (iLocal_82)
	{
		SYSTEM::WAIT(0);
		iLocal_82 = 0;
		if (((GlobalFunc_10372(1, Local_144, 1.5f) || (((Global_85373[6] == 140 && Global_85373[7] == 140) && Global_68509 == 43) && GlobalFunc_2982(60f))) || (Global_85373[6] == 137 || Global_85373[7] == 137)) || (Global_85373[6] == 99 || Global_85373[7] == 99))
		{
			func_411();
			func_393(2, &uLocal_77, Local_144, 15f, 15f, 7.5f, &iLocal_91);
			iLocal_82 = 1;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_11(iVar0);
				iVar0++;
			}
		}
		if (func_1())
		{
			iLocal_82 = 1;
		}
	}
	func_576();
}

int func_1()//Position - 0x17C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	int iVar7;
	struct<3> Var8;
	float fVar11;
	bool bVar12;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_144 + Local_133);
	fVar1 = (100f * 1f);
	fVar2 = (fVar1 * 1.25f);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_129))
	{
		if (fVar0 > (fVar1 * fVar1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130[0]);
			return 0;
		}
		STREAMING::REQUEST_MODEL(iLocal_130[0]);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_130[0]))
		{
			return 0;
		}
		iLocal_129 = OBJECT::CREATE_OBJECT(iLocal_130[0], Local_144 + Local_133, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_129, Vector(fLocal_147, 0f, 0f) + Local_136, 2, 1);
		GlobalFunc_235(&uLocal_139);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_129, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130[0]);
	}
	if (fVar0 > (fVar2 * fVar2))
	{
		OBJECT::DELETE_OBJECT(&iLocal_129);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130[0]);
		return 0;
	}
	fVar3 = 6.5f;
	Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_129, 0f, -(fVar3 - 0.5f), 0f) };
	iVar7 = 0;
	if (PED::GET_CLOSEST_PED(Var4, fVar3, 1, 1, &iVar7, 1, 1, -1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar7))
		{
			Var8 = { ENTITY::GET_ENTITY_VELOCITY(iVar7) };
			fVar11 = SYSTEM::VMAG2(Var8);
			bVar12 = false;
			if (iVar7 == PLAYER::PLAYER_PED_ID())
			{
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_342) && INTERIOR::IS_INTERIOR_READY(iLocal_342))
				{
				}
				else
				{
					bVar12 = true;
				}
			}
			else
			{
				bVar12 = true;
			}
			if (bVar12)
			{
				if (fVar11 >= (1f * 1f))
				{
					GlobalFunc_6715(&uLocal_139);
				}
			}
		}
	}
	if (GlobalFunc_226(&uLocal_139))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_129) != iLocal_130[0])
		{
			STREAMING::REQUEST_MODEL(iLocal_130[0]);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_130[0]))
			{
				OBJECT::DELETE_OBJECT(&iLocal_129);
				iLocal_129 = OBJECT::CREATE_OBJECT(iLocal_130[0], Local_144 + Local_133, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_129, Vector(fLocal_147, 0f, 0f) + Local_136, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_129, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130[0]);
			}
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_129) != iLocal_130[1])
	{
		STREAMING::REQUEST_MODEL(iLocal_130[1]);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_130[1]))
		{
			OBJECT::DELETE_OBJECT(&iLocal_129);
			iLocal_129 = OBJECT::CREATE_OBJECT(iLocal_130[1], Local_144 + Local_133, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_129, Vector(fLocal_147, 0f, 0f) + Local_136, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_129, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130[1]);
		}
	}
	if (ENTITY::GET_ENTITY_MODEL(iLocal_129) == iLocal_130[0])
	{
		if (iLocal_142)
		{
			iLocal_143 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_143, "FRANKLINS_HOUSE_SECURITY_LIGHT_ON", iLocal_129, 0, 0, 0);
			iLocal_142 = 0;
		}
		ENTITY::SET_ENTITY_LIGHTS(iLocal_129, 0);
		if (GlobalFunc_7944(&uLocal_139, 5f))
		{
			ENTITY::SET_ENTITY_LIGHTS(iLocal_129, 1);
			iLocal_143 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_143, "FRANKLINS_HOUSE_SECURITY_LIGHT_OFF", iLocal_129, 0, 0, 0);
			iLocal_142 = 1;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_129) == iLocal_130[1])
	{
		ENTITY::SET_ENTITY_LIGHTS(iLocal_129, 1);
	}
	else
	{
		ENTITY::SET_ENTITY_LIGHTS(iLocal_129, 1);
	}
	return 1;
}










int func_11(int iParam0)//Position - 0x55D
{
	int iVar0;
	
	iVar0 = func_392(iParam0);
	if (func_31(&(uLocal_83[iParam0]), iVar0, Local_144 + Local_148[iParam0 /*3*/], GlobalFunc_739((fLocal_147 + uLocal_158[iParam0]), 0f, 360f), &iLocal_342, &(iLocal_344[iParam0]), &uLocal_358, iParam0 + 1, Global_85371))
	{
		func_16(iParam0);
		func_12(iParam0);
		if (Global_85373[iVar0] == 141 || Global_85373[iVar0] == 140)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_97[iParam0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(uLocal_97[iParam0]))
				{
					ENTITY::DETACH_ENTITY(uLocal_97[iParam0], 1, 1);
				}
				OBJECT::DELETE_OBJECT(&(uLocal_97[iParam0]));
			}
			PED::DELETE_PED(&(uLocal_83[iParam0]));
			return 0;
		}
		if (!PED::IS_PED_INJURED(uLocal_83[iParam0]))
		{
			return 1;
		}
	}
	else
	{
		iLocal_338 = 1;
	}
	return 0;
}

void func_12(int iParam0)//Position - 0x634
{
	int iVar0;
	
	iVar0 = func_392(iParam0);
	GlobalFunc_7227(&(uLocal_97[iParam0]), uLocal_83[iParam0], iVar0, Global_85373[iVar0], Local_144, fLocal_147, iLocal_101[iParam0], iLocal_105[iParam0], &(Local_109[iParam0 /*3*/]), &(Local_119[iParam0 /*3*/]));
}




void func_16(int iParam0)//Position - 0x2785
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_392(iParam0);
	iVar1 = func_30(iParam0);
	if (iVar1 < 1)
	{
		func_17(&(iLocal_91[iVar1]), iVar0, Local_144, fLocal_147, 0);
	}
}

void func_17(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x27B6
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	struct<58> Var8;
	int iVar82;
	int iVar83;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = Global_85373[iParam1];
		if (GlobalFunc_7228(iParam1, iVar0, &Var1, &fVar4, &iVar5, &iVar6, bParam6))
		{
			if (!Global_3)
			{
				fVar7 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param2 + Var1);
				if (fVar7 < (15f * 15f) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return;
				}
				Var8.f_11 = 12;
				Var8.f_31 = 25;
				Var8.f_57 = 2;
				if (iVar5 != 3)
				{
					GlobalFunc_549(iVar5, &Var8, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar82 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_MODEL(iVar82) == Var8)
					{
						*uParam0 = iVar82;
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
						return;
					}
				}
				if (fVar7 < (35f * 35f))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 10f))
					{
						if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Var8, Param2 + Var1, 0))
						{
							if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
							{
								return;
							}
						}
					}
				}
				else if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 4f))
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Var8, Param2 + Var1, 0))
					{
						if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
						{
							return;
						}
					}
				}
				if (GlobalFunc_2945(Param2 + Var1, 6f))
				{
					return;
				}
				if (MISC::IS_AREA_OCCUPIED(Param2 + Var1 - Vector(4f, 4f, 4f), Param2 + Var1 + Vector(4f, 4f, 4f), 0, 1, 0, 0, 0, 0, 0))
				{
					return;
				}
			}
			if (iVar5 != 145)
			{
				if (!GlobalFunc_5941(uParam0, iVar5, Param2 + Var1, iVar6))
				{
					if (func_18(uParam0, iVar5, Param2 + Var1, GlobalFunc_739((fParam5 + fVar4), 0f, 360f), 1, iVar6))
					{
						VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam0), 15);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
						if (iParam1 == 2)
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						if (Global_3)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
						}
					}
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam0), 15);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
					if (iParam1 == 2)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
					}
					if (Global_3)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
					}
				}
			}
			else
			{
				iVar83 = 0;
				if (iVar83 != 0)
				{
					STREAMING::REQUEST_MODEL(iVar83);
					if (STREAMING::HAS_MODEL_LOADED(iVar83))
					{
						if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 2.5f))
						{
							return;
						}
						if (GlobalFunc_2945(Param2 + Var1, 6f))
						{
							return;
						}
						if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
						{
							VEHICLE::DELETE_VEHICLE(uParam0);
						}
						*uParam0 = VEHICLE::CREATE_VEHICLE(iVar83, Param2 + Var1, GlobalFunc_739((fParam5 + fVar4), 0f, 360f), 0, 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
						VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam0), 15);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
						if (iVar83 == joaat("police"))
						{
							VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*uParam0, 0);
							VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(*uParam0, 1);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(*uParam0, 1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar83);
					}
				}
			}
		}
	}
}

int func_18(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x2AB5
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
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
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
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5121(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				GlobalFunc_7211(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
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












int func_30(int iParam0)//Position - 0x3DEB
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return 0;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 2;
}

int func_31(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10)//Position - 0x3E1B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((((GlobalFunc_6687(0) || GlobalFunc_6687(0)) || GlobalFunc_6687(2)) || (MISC::GET_RANDOM_EVENT_FLAG() && Global_97343)) || GlobalFunc_487())
	{
		if (Global_85373[iParam1] != 141)
		{
			GlobalFunc_2957(iParam1);
			Global_85373[iParam1] = 141;
		}
	}
	iVar0 = 0;
	iVar1 = GlobalFunc_2956(iParam1, &iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (Global_85373[iParam1] == 141 || Global_85373[iParam1] == 140)
		{
			if (GlobalFunc_7233(iParam0, iParam1, uParam8, iParam9, iParam10))
			{
				return 0;
			}
			return 0;
		}
		bVar2 = false;
		if (Global_85373[iParam1] != 123)
		{
			if (!GlobalFunc_8046(iParam1, Param2, *uParam6, uParam7))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
		}
		if (Global_68509 == 0 && (iVar1 == 44 && Global_85373[5] == 96))
		{
		}
		else if (GlobalFunc_2945(Param2, 4f))
		{
			SYSTEM::WAIT(0);
			return 0;
		}
		if (GlobalFunc_2955(Global_85373[iParam1], &sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar3))
			{
				bVar2 = true;
			}
		}
		if (iVar1 != 145)
		{
			bVar19 = false;
			if (GlobalFunc_42(iVar1))
			{
				GlobalFunc_7215(iVar1);
				if (!GlobalFunc_7214(iVar1))
				{
					bVar19 = true;
				}
			}
			else
			{
				GlobalFunc_7049(iVar1);
				if (!GlobalFunc_7048(iVar1))
				{
					bVar19 = true;
				}
			}
			if ((!bVar2 && !bVar19) && !GlobalFunc_236())
			{
				if (GlobalFunc_42(iVar1))
				{
					if (GlobalFunc_11338(iParam0, iVar1, Param2, uParam5, 1, 0, 0))
					{
						GlobalFunc_2954(iParam0, iParam10);
						GlobalFunc_11296(*iParam0, iParam1, Global_85373[iParam1]);
						GlobalFunc_7229(*iParam0, iParam1, iParam10, 0);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
						GlobalFunc_173(uParam8, iParam9, *iParam0, GlobalFunc_2923(iParam1), 0, 1);
						iVar20 = GlobalFunc_237(iVar1);
						Global_87845[iVar20] = *iParam0;
						GlobalFunc_9136(*iParam0, 0);
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar1] = ENTITY::GET_ENTITY_HEADING(*iParam0);
						*uParam7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
					}
				}
				else if (GlobalFunc_7102(iParam0, iVar1, Param2, uParam5, 1))
				{
					GlobalFunc_2954(iParam0, iParam10);
					GlobalFunc_11296(*iParam0, iParam1, Global_85373[iParam1]);
					GlobalFunc_7229(*iParam0, iParam1, iParam10, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
					GlobalFunc_173(uParam8, iParam9, *iParam0, GlobalFunc_2923(iParam1), 0, 1);
					*uParam7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
				}
			}
		}
		else if (iVar0 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar0);
			if (STREAMING::HAS_MODEL_LOADED(iVar0) && !bVar2)
			{
				*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				GlobalFunc_2954(iParam0, iParam10);
				GlobalFunc_11296(*iParam0, iParam1, Global_85373[iParam1]);
				GlobalFunc_7229(*iParam0, iParam1, iParam10, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
				GlobalFunc_173(uParam8, iParam9, *iParam0, GlobalFunc_2923(iParam1), 0, 1);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			fVar21 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 5f);
			switch (Global_85373[iParam1])
			{
				case 6:
				case 8:
				case 38:
				case 39:
				case 40:
				case 30:
				case 1:
				case 136:
				case 125:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(*iParam0, 1)) < (fVar21 * fVar21))
					{
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					}
					break;
				
				default:
					break;
				}
		}
		if (iParam1 == 12)
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
			{
				ENTITY::SET_ENTITY_VISIBLE(*iParam0, 0);
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(*iParam0))
			{
				return 0;
			}
		}
		else if (Global_85373[iParam1] != 141)
		{
			iVar22 = -1;
			switch (iParam1)
			{
				case 0:
					iVar22 = 24;
					break;
				
				case 1:
					iVar22 = 25;
					break;
				
				case 2:
					iVar22 = 26;
					break;
				
				case 5:
					iVar22 = 29;
					break;
				
				case 10:
					iVar22 = 30;
					break;
				
				case 11:
					iVar22 = 31;
					break;
				
				case 13:
					iVar22 = 32;
					break;
			}
			if ((iVar1 != 145 && iVar22 != -1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar23 = GlobalFunc_5942(*iParam0);
				if (iVar23 != 0)
				{
					if (!GlobalFunc_2948(-1789721694))
					{
						GlobalFunc_2947(75, ENTITY::GET_ENTITY_COORDS(*iParam0, 0), 250f, -1);
						if (GlobalFunc_7121(-1789721694, iVar22, -1, 6, GlobalFunc_8310(), iVar1, 60000, 10000, 75, iVar23, -1, 262208, 1))
						{
							GlobalFunc_2957(iParam1);
							Global_85373[iParam1] = 141;
							return 0;
						}
					}
				}
			}
			else
			{
				GlobalFunc_2957(iParam1);
				Global_85373[iParam1] = 141;
				return 0;
			}
		}
		if (iVar1 != 145)
		{
			Global_35465[iVar1] = MISC::GET_GAME_TIMER() + 20000;
		}
		fVar24 = (100f * 1.25f);
		fVar25 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(*iParam0, 0));
		if (fVar25 > (fVar24 * fVar24))
		{
			if (Global_85373[iParam1] != 141)
			{
				GlobalFunc_2957(iParam1);
				Global_85373[iParam1] = 141;
			}
		}
		if (fVar25 < 100f && !GlobalFunc_1976(*iParam0, PLAYER::PLAYER_PED_ID()))
		{
			if (Global_85373[iParam1] != 138)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 1))
				{
					GlobalFunc_2957(iParam1);
					Global_85373[iParam1] = 138;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 124, 1);
			PED::SET_PED_RESET_FLAG(*iParam0, 62, 1);
			if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) != 0 || TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) != 1)
			{
				if (GlobalFunc_2946(iParam1, &uVar26))
				{
					PED::SET_PED_CAPSULE(*iParam0, uVar26);
				}
			}
			*uParam7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
			if (Global_89748 == *iParam0)
			{
				if (Global_85373[iParam1] != 140)
				{
					if (!GlobalFunc_488())
					{
						Global_89748 = 0;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}









































































































































































































































































































































































int func_392(int iParam0)//Position - 0x5393A
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
			return 7;
			break;
		
		case 3:
			return 15;
			break;
	}
	return 16;
}

int func_393(int iParam0, var uParam1, struct<3> Param2, struct<3> Param5, int iParam8)//Position - 0x53980
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_85391 != -1)
	{
		return 0;
	}
	if (GlobalFunc_747(iParam0, GlobalFunc_8310()))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_584(iVar0);
		if (!GlobalFunc_8633(iVar1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar0]))
			{
				if (GlobalFunc_747(iParam0, GlobalFunc_2962(iVar1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar3 = 145;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (GlobalFunc_747(iParam0, GlobalFunc_2962(iVar2)))
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (!GlobalFunc_42(iVar3))
	{
		return 0;
	}
	if (!GlobalFunc_5141(iVar3))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			if (Global_2544857)
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		default:
			return 0;
			break;
	}
	if (!GlobalFunc_5588(iVar3, GlobalFunc_8315()))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			iVar4 = 0;
			break;
		
		case 1:
			iVar4 = 1;
			break;
		
		case 2:
			iVar4 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar3 /*29*/].f_12[iVar4] == 1)
	{
		return 0;
	}
	if (GlobalFunc_100(Param5, 0f, 0f, 0f))
	{
		Param5 = { 50f, 50f, 50f };
	}
	Var5 = { Param2 - Param5 };
	Var8 = { Param2 + Param5 };
	GlobalFunc_2961(Var5, Var8);
	GlobalFunc_2960(Var5, Var8, &(uParam1->f_1));
	GlobalFunc_9263(iParam0, iParam8);
	GlobalFunc_2959(Var5, Var8);
	GlobalFunc_2958(Var5, Var8, &(uParam1->f_4));
	if (Global_85390 != 8)
	{
		if (Global_85391 == -1)
		{
			iVar11 = -1;
			if (GlobalFunc_747(iParam0, GlobalFunc_8310()))
			{
			}
			iVar12 = 5000;
			if (GlobalFunc_745())
			{
				switch (iVar3)
				{
					case 0:
						iVar11 = -181320640;
						break;
					
					case 1:
						iVar11 = 1418815087;
						break;
					
					case 2:
						iVar11 = 2087297077;
						break;
					
					default:
						return 0;
						break;
				}
				iVar13 = -1;
				switch (Global_85390)
				{
					case 0:
						iVar14 = 11;
						iVar13 = 3;
						break;
					
					case 1:
						iVar14 = 12;
						iVar13 = 3;
						break;
					
					case 4:
						iVar14 = 13;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 6:
						iVar14 = 14;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 7:
						iVar14 = 15;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 2:
						iVar14 = 16;
						iVar13 = 3;
						break;
					
					case 3:
						iVar14 = 17;
						iVar13 = 3;
						break;
					
					case 5:
						iVar14 = 18;
						iVar13 = 3;
						break;
					
					default:
						return 0;
						break;
				}
				if ((iVar14 == 14 || iVar14 == 15) && !iVar11 == -181320640)
				{
					iVar14 = 13;
				}
				iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar13);
				switch (iVar16)
				{
					case 0:
						iVar15 = 19;
						break;
					
					case 1:
						iVar15 = 20;
						break;
					
					case 2:
						iVar15 = 21;
						break;
					
					case 3:
						iVar15 = 22;
						break;
					
					case 4:
						iVar15 = 23;
						break;
					
					default:
						return 0;
						break;
				}
				if (GlobalFunc_7121(iVar11, iVar14, iVar15, 6, GlobalFunc_8310(), iVar3, iVar12, 10000, -1, 0, -1, 0, 1))
				{
					Global_85391 = MISC::GET_GAME_TIMER();
					return 1;
				}
			}
			else
			{
				switch (Global_85390)
				{
					case 0:
						switch (iVar3)
						{
							case 0:
								iVar11 = 2038672434;
								break;
							
							case 1:
								iVar11 = 975196153;
								break;
							
							case 2:
								iVar11 = 1127548000;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 4:
						switch (iVar3)
						{
							case 0:
								iVar11 = 1666308520;
								break;
							
							case 1:
								iVar11 = -710274964;
								break;
							
							case 2:
								iVar11 = -1291788156;
								break;
							
							default:
								return 0;
								break;
						}
						iVar12 = 10000;
						break;
					
					case 6:
						switch (iVar3)
						{
							case 1:
								iVar11 = 1289879258;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 3:
						switch (iVar3)
						{
							case 0:
								iVar11 = 1894462438;
								break;
							
							case 1:
								iVar11 = 1621076324;
								break;
							
							case 2:
								iVar11 = 1993031175;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 1:
					case 2:
					case 5:
					case 7:
						return 0;
						break;
					
					default:
						return 0;
						break;
				}
				if (GlobalFunc_6831(iVar11, 6, GlobalFunc_8310(), iVar3, iVar3, iVar12, 10000, -1, -1, 0, -1, 0))
				{
					Global_85391 = MISC::GET_GAME_TIMER();
					return 1;
				}
			}
		}
	}
	return 0;
}


















int func_411()//Position - 0x545D7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iLocal_338 = 0;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (func_11(iVar1))
		{
			func_454(iVar1);
			if (!bVar0)
			{
				iVar2 = func_392(iVar1);
				if (!GlobalFunc_7235(uLocal_83[iVar1], Local_219[iVar1 /*16*/], Local_268[iVar1 /*16*/], iLocal_523[iVar1], &uLocal_348))
				{
					if (func_417(uLocal_83[iVar1], Global_85373[iVar2], &uLocal_358, "FMFAUD", &uLocal_317, &uLocal_348, &(uLocal_354[iVar1]), 1084227584, 0, 0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	GlobalFunc_8635(&uLocal_83, &uLocal_351);
	GlobalFunc_8047(&iLocal_338, &uLocal_339, &iLocal_342, &uLocal_343, Local_144, "v_franklins");
	return 1;
}






int func_417(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, var uParam6, float fParam7, char* sParam8, char* sParam9)//Position - 0x54A2C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	var uVar9;
	char* sVar10;
	float fVar11;
	int iVar12;
	struct<2> Var13;
	struct<2> Var17;
	int iVar21;
	struct<3> Var22;
	struct<2> Var25;
	
	iVar0 = 3;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return 0;
	}
	if (GlobalFunc_5948(iParam0))
	{
		if (GlobalFunc_226(uParam5))
		{
			if (!GlobalFunc_225(uParam5))
			{
				GlobalFunc_4985(uParam5);
			}
		}
		return 0;
	}
	if ((GlobalFunc_268() || GlobalFunc_153(8, -1)) || Global_68505)
	{
		if (GlobalFunc_226(uParam5))
		{
			if (!GlobalFunc_225(uParam5))
			{
				GlobalFunc_4985(uParam5);
			}
		}
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || GlobalFunc_488())
	{
		if (GlobalFunc_226(uParam5))
		{
			if (!GlobalFunc_225(uParam5))
			{
				GlobalFunc_4985(uParam5);
			}
		}
		return 0;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (func_446(iParam0, iParam1, uParam2, sParam3, uParam4, uParam5, iVar0))
	{
		return 1;
	}
	GlobalFunc_81();
	sVar10 = GlobalFunc_7223(iParam1, &iVar7, &uVar8, &uVar9);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		sVar10 = sParam8;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
	{
		return 0;
	}
	if (GlobalFunc_747(uVar8, 2))
	{
		if (!GlobalFunc_2965(iParam0, iParam1))
		{
			return 0;
		}
	}
	else
	{
		if (GlobalFunc_747(uVar8, 1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var4, 0) > fParam7)
			{
				return 0;
			}
		}
		if (GlobalFunc_747(uVar8, 4))
		{
			if (MISC::ABSF((Var1.f_2 - Var4.f_2)) > 2f)
			{
				return 0;
			}
		}
		if (GlobalFunc_747(uVar8, 8))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 0;
			}
		}
	}
	if (GlobalFunc_747(uVar8, 16))
	{
		fVar11 = 10f;
		if (*uParam6 >= iVar7)
		{
			return 0;
		}
		fVar11 = (fVar11 + ((SYSTEM::TO_FLOAT(*uParam6) / SYSTEM::TO_FLOAT((iVar7 - 1))) * 10f));
		if (iParam1 == 29 || iParam1 == 30)
		{
			fVar11 = (fVar11 * 1.5f);
		}
		if (GlobalFunc_226(uParam5))
		{
			if (GlobalFunc_225(uParam5))
			{
				GlobalFunc_5947(uParam5);
			}
			if (!GlobalFunc_7072(uParam5, fVar11))
			{
				return 0;
			}
		}
	}
	if (!GlobalFunc_747(uVar9, GlobalFunc_8310()))
	{
		iVar12 = GlobalFunc_8315();
		StringCopy(&Var13, "", 16);
		switch (GlobalFunc_7234(iParam0))
		{
			case 0:
				StringCopy(&Var13, "FMM_0", 16);
				break;
			
			case 1:
				StringCopy(&Var13, "FMM_1", 16);
				break;
			
			case 2:
				StringCopy(&Var13, "FMM_2", 16);
				break;
			
			case 3:
				StringCopy(&Var13, "FMM_3_FT", 16);
				break;
			
			case 5:
				StringCopy(&Var13, "FMF_0", 16);
				if (iVar12 == 0 || iVar12 == 2)
				{
					StringCopy(&Var13, "", 16);
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&Var13, "FMM_3_FT"))
			{
				switch (iVar12)
				{
					case 0:
						StringConCat(&Var13, "_MIC", 16);
						break;
					
					case 1:
						StringConCat(&Var13, "_FRA", 16);
						if (MISC::ARE_STRINGS_EQUAL(&Var13, "FMM_2_FRA"))
						{
							if (!GlobalFunc_230(17))
							{
								StringConCat(&Var13, "1", 16);
							}
							else
							{
								StringConCat(&Var13, "2", 16);
							}
						}
						break;
					
					case 2:
						StringConCat(&Var13, "_TRV", 16);
						break;
					}
			}
			if (func_425(sParam3, &Var13, uParam2, iVar0, uParam4, sParam9))
			{
				GlobalFunc_6715(uParam5);
				*uParam6 = 99;
				return 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
	}
	StringCopy(&Var17, "", 16);
	switch (GlobalFunc_8315())
	{
		case 0:
			StringCopy(&Var17, "MICHAEL", 16);
			break;
		
		case 1:
			StringCopy(&Var17, "FRANKLIN", 16);
			break;
		
		case 2:
			StringCopy(&Var17, "TREVOR", 16);
			break;
	}
	iVar21 = -1;
	Var22 = { 0f, 0f, 0f };
	if (GlobalFunc_747(uVar8, 128))
	{
		iVar21 = 1;
		Var22 = { -14.3293f, -1443.635f, 29.9f };
	}
	if (MISC::ARE_STRINGS_EQUAL("TRA_IG_MD", sVar10))
	{
		if (GlobalFunc_747(uVar8, 64))
		{
		}
		else
		{
			GlobalFunc_5211(&uVar8, 64);
		}
	}
	if (MISC::ARE_STRINGS_EQUAL("FMT_COUNTRY", sVar10))
	{
		if (GlobalFunc_747(uVar8, 64))
		{
		}
		else
		{
			GlobalFunc_5211(&uVar8, 64);
		}
	}
	if (GlobalFunc_747(uVar8, 64))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
		{
			if (GlobalFunc_747(uVar8, 32))
			{
				if (!func_422(uParam2, sParam3, sVar10))
				{
					return 0;
				}
			}
			GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), &Var17, 0, 1);
			if (GlobalFunc_747(uVar8, 128))
			{
				GlobalFunc_173(uParam2, iVar21, 0, "DENISE", 0, 1);
				GlobalFunc_2964(uParam2, iVar21, Var22);
			}
			if (func_425(sParam3, sVar10, uParam2, iVar0, uParam4, sParam9))
			{
				GlobalFunc_6715(uParam5);
				*uParam6++;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		StringCopy(&Var25, sVar10, 16);
		if (func_418(sParam3, &Var25, uParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var25))
			{
				if (GlobalFunc_747(uVar8, 32))
				{
					if (!func_422(uParam2, sParam3, &Var25))
					{
						return 0;
					}
				}
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), &Var17, 0, 1);
				if (GlobalFunc_747(uVar8, 128))
				{
					GlobalFunc_173(uParam2, iVar21, 0, "DENISE", 0, 1);
					GlobalFunc_2964(uParam2, iVar21, Var22);
				}
				if (func_425(sParam3, &Var25, uParam2, iVar0, uParam4, sParam9))
				{
					GlobalFunc_6715(uParam5);
					*uParam6++;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_418(char* sParam0, char* sParam1, var uParam2)//Position - 0x54F74
{
	char cVar0[16];
	char cVar4[16];
	int iVar8;
	struct<4> Var9[15];
	bool bVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GlobalFunc_5946(sParam0, 7))
	{
		cVar0 = { *sParam1 };
		StringCopy(&cVar4, "", 16);
		iVar8 = -1;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			StringCopy(&cVar4, "", 16);
		}
		else
		{
			StringCopy(&cVar4, "0", 16);
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "a", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
			}
			else
			{
				return 0;
			}
		}
		bVar70 = true;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			iVar8++;
			Var9[iVar8 /*4*/] = { *sParam1 };
			StringConCat(&(Var9[iVar8 /*4*/]), "a", 16);
			bVar70 = false;
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "b", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "c", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "d", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "e", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "f", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "g", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "h", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "i", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "j", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "k", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "JJJ", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "m", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "n", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "o", 16);
				bVar70 = false;
			}
		}
		iVar71 = iVar8;
		iVar72 = 0;
		while (iVar72 < *uParam2)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2[iVar72 /*4*/]))
			{
				iVar73 = 0;
				while (iVar73 < Var9)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var9[iVar73 /*4*/])))
					{
						if (MISC::ARE_STRINGS_EQUAL(uParam2[iVar72 /*4*/], &(Var9[iVar73 /*4*/])))
						{
							iVar74 = iVar73;
							while (iVar74 <= (Var9 - 1))
							{
								if (iVar74 + 1 < Var9)
								{
									Var9[iVar74 /*4*/] = { Var9[iVar74 + 1 /*4*/] };
								}
								else
								{
									StringCopy(&(Var9[iVar74 /*4*/]), "", 16);
								}
								iVar74++;
							}
							iVar71 = (iVar71 - 1);
						}
					}
					iVar73++;
				}
			}
			iVar72++;
		}
		iVar75 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar71 + 1);
		*sParam1 = { Var9[iVar75 /*4*/] };
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}




int func_422(var uParam0, char* sParam1, char* sParam2)//Position - 0x556C9
{
	char cVar0[16];
	char* sVar4;
	int iVar5;
	int iVar6;
	char cVar7[16];
	int iVar11;
	int iVar12;
	char cVar13[16];
	int iVar17;
	int iVar18;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam2, 16);
	StringConCat(&cVar0, "SL", 16);
	if (GlobalFunc_5946(sParam1, 7))
	{
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			sVar4 = HUD::_GET_LABEL_TEXT(&cVar0);
			if (MISC::IS_STRING_NULL(sVar4))
			{
				return 0;
			}
			else
			{
				iVar5 = 0;
				iVar6 = 1;
				StringCopy(&cVar7, HUD::_GET_TEXT_SUBSTRING(sVar4, iVar5, iVar6), 16);
				iVar11 = 1;
				iVar12 = 2;
				StringCopy(&cVar13, HUD::_GET_TEXT_SUBSTRING(sVar4, iVar11, iVar12), 16);
				if (MISC::STRING_TO_INT(&cVar7, &iVar17))
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar17 /*10*/]))
					{
					}
					else
					{
						return 0;
					}
				}
				if (MISC::STRING_TO_INT(&cVar13, &iVar18))
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar18 /*10*/]))
					{
					}
					else
					{
						return 0;
					}
				}
			}
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
	return 1;
}



int func_425(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, char* sParam5)//Position - 0x557B4
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GlobalFunc_5946(sParam0, 7))
	{
		sVar0 = "";
		switch (GlobalFunc_8315())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			
			case 1:
				sVar0 = "FRANKLIN";
				break;
			
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (GlobalFunc_10607(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = { *(uParam4[(iVar1 - 1) /*4*/]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
		else
		{
			GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (GlobalFunc_10607(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				GlobalFunc_619(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = { *(uParam4[(iVar2 - 1) /*4*/]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
	}
	return 0;
}





















int func_446(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6)//Position - 0x572C6
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	bool bVar12;
	int iVar13;
	char cVar14[16];
	int iVar18;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar6 = GlobalFunc_8315();
	iVar7 = GlobalFunc_7234(iParam0);
	StringCopy(&Var8, "", 16);
	switch (iVar7)
	{
		case 0:
			if (Global_85373[0] == 18)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_0", 16);
			break;
		
		case 1:
			if (Global_85373[1] == 42)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_1", 16);
			break;
		
		case 2:
			if (Global_85373[2] == 65 || Global_85373[2] == 66)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_2", 16);
			break;
		
		case 3:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_3", 16);
			break;
		
		case 4:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_4", 16);
			break;
		
		case 5:
			if (iVar6 == 0 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_0", 16);
			break;
		
		case 6:
			if (iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_1", 16);
			break;
		
		case 10:
			if (iVar6 == 1)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_0", 16);
			break;
		
		case 11:
			if (iVar6 == 1 || iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_3", 16);
			break;
		
		default:
			return 0;
			break;
	}
	switch (iVar6)
	{
		case 0:
			if (((iVar7 == 0 || iVar7 == 1) || iVar7 == 3) || iVar7 == 4)
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else if (!GlobalFunc_485(131))
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else
			{
				StringConCat(&Var8, "_M1", 16);
			}
			break;
		
		case 1:
			StringConCat(&Var8, "_F", 16);
			break;
		
		case 2:
			if (iVar7 == 11)
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else if (!GlobalFunc_485(130))
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else
			{
				StringConCat(&Var8, "_T1", 16);
			}
			break;
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 100f)
	{
		return 0;
	}
	if (iParam1 == 6 || iParam1 == 31)
	{
		if (MISC::ABSF((Var3.f_2 - Var0.f_2)) > 2f)
		{
			return 0;
		}
	}
	else if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) || !ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return 0;
	}
	bVar12 = false;
	switch (iParam1)
	{
		case 10:
		case 8:
		case 1:
		case 39:
		case 40:
		case 30:
		case 136:
			bVar12 = true;
			break;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(0, 46) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 46))
	{
		return 0;
	}
	if (!bVar12)
	{
		iVar13 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_90014.f_289 != iVar13)
		{
			return 0;
		}
	}
	cVar14 = { Var8 };
	StringConCat(&cVar14, "_01", 16);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar14))
	{
		iVar18 = 1;
	}
	else
	{
		iVar18 = 0;
	}
	if (iVar18 || func_418(sParam3, &Var8, uParam4))
	{
		if (iVar7 == 5)
		{
			if (iVar6 == 0)
			{
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (iVar6 == 1)
			{
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (iVar6 == 2)
			{
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
		}
		if (func_425(sParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			GlobalFunc_6715(uParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}








int func_454(int iParam0)//Position - 0x578F2
{
	int iVar0;
	
	iVar0 = func_392(iParam0);
	func_455(iParam0, Global_85373[iVar0]);
	return 0;
}

void func_455(int iParam0, int iParam1)//Position - 0x57911
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	int iVar9;
	
	iVar0 = func_392(iParam0);
	switch (iParam1)
	{
		case 94:
			func_567(uLocal_83[iParam0], iVar0, iParam1, &(Local_219[iParam0 /*16*/]), &(Local_268[iParam0 /*16*/]), Local_144 + Vector(1f, 0f, 0f), fLocal_147);
			GlobalFunc_2981(uLocal_83[iParam0], iVar0, iParam1);
			func_565(uLocal_83[iParam0], "EXERCISING", &uLocal_348, 1077936128);
			if (Global_24489 == 1)
			{
				GlobalFunc_5130(uLocal_83[iParam0], "GENERIC_INSULT_MED", 24);
				GlobalFunc_7241(iVar0, 140);
			}
			break;
		
		case 95:
			if (!func_558(uLocal_83[iParam0], iVar0, iParam1, &(Local_219[iParam0 /*16*/]), &(Local_268[iParam0 /*16*/]), Local_144, fLocal_147))
			{
				func_557(uLocal_83[iParam0], iVar0, iParam1, Local_144 + Vector(1f, 0f, 0f), fLocal_147, 1090519040, -1056964608);
			}
			GlobalFunc_2981(uLocal_83[iParam0], iVar0, iParam1);
			if (Global_24489 == 1)
			{
				GlobalFunc_5130(uLocal_83[iParam0], "GENERIC_INSULT_MED", 24);
				GlobalFunc_7241(iVar0, 140);
			}
			break;
		
		case 96:
			func_567(uLocal_83[iParam0], iVar0, iParam1, &(Local_219[iParam0 /*16*/]), &(Local_268[iParam0 /*16*/]), Local_144 + Vector(1f, 0f, 0f), fLocal_147);
			func_547(&(uLocal_83[iParam0]), iVar0, iParam1, Local_144, fLocal_147, &(uLocal_87[iParam0]), 137);
			if (Global_85392 == 2)
			{
				Global_85392 = 3;
			}
			break;
		
		case 98:
			func_567(uLocal_83[iParam0], iVar0, iParam1, &(Local_219[iParam0 /*16*/]), &(Local_268[iParam0 /*16*/]), Local_144 + Vector(1f, 0f, 0f), fLocal_147);
			break;
		
		case 97:
			GlobalFunc_8636(uLocal_83[iParam0], iVar0, iParam1, &(Local_219[iParam0 /*16*/]), &(Local_268[iParam0 /*16*/]), Local_144, fLocal_147, &(iLocal_523[iParam0]), 1, 1);
			func_543(&(uLocal_97[iParam0]), &(Local_219[iParam0 /*16*/]), &(Local_268[iParam0 /*16*/]), "", "_Head_Phones", &(iLocal_523[iParam0]), 12);
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_93[iParam0]))
			{
				Var1 = { -9.7881f, -1431.972f, 30.9968f };
				iVar4 = joaat("v_res_fa_chair02");
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_344[iParam0]))
				{
					if (INTERIOR::IS_INTERIOR_READY(iLocal_344[iParam0]))
					{
						uLocal_93[iParam0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 10f, iVar4, 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_93[iParam0]))
						{
							INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_93[iParam0], iLocal_344[iParam0], INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uLocal_83[iParam0]));
							ENTITY::SET_ENTITY_COLLISION(uLocal_93[iParam0], 0, 0);
						}
					}
				}
			}
			else
			{
				func_543(&(uLocal_93[iParam0]), &(Local_219[iParam0 /*16*/]), &(Local_268[iParam0 /*16*/]), "", "_Chair", &(iLocal_523[iParam0]), 12);
			}
			if (Global_24489 == 1)
			{
				GlobalFunc_5130(uLocal_83[iParam0], "GENERIC_INSULT_MED", 24);
				GlobalFunc_7241(iVar0, 140);
			}
			break;
		
		case 99:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
			{
				iVar5 = joaat("jackal");
				Var6 = { -38.2037f, -1459.511f, 30.3994f };
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_83[iParam0], 1))
				{
					iVar9 = PED::GET_VEHICLE_PED_IS_IN(uLocal_83[iParam0], 1);
					if (ENTITY::GET_ENTITY_MODEL(iVar9) == iVar5)
					{
						iLocal_91[0] = iVar9;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91[0], 1, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
				{
					STREAMING::REQUEST_MODEL(iVar5);
					func_542(uLocal_83[iParam0], iVar0, iParam1, Local_144, fLocal_147);
					iLocal_91[0] = VEHICLE::GET_CLOSEST_VEHICLE(Var6, 5f, iVar5, 2);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_83[1]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_83[1]))
						{
							iLocal_91[0] = PED::GET_VEHICLE_PED_IS_IN(uLocal_83[iParam0], 0);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91[0], 1, 1);
						}
						if (!PED::IS_PED_INJURED(uLocal_83[2]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_83[2]))
						{
							iLocal_91[0] = PED::GET_VEHICLE_PED_IS_IN(uLocal_83[iParam0], 0);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91[0], 1, 1);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar5))
					{
						if (!MISC::IS_AREA_OCCUPIED(Var6 - Vector(3f, 3f, 3f), Var6 + Vector(3f, 3f, 3f), 0, 1, 0, 0, 0, 0, 0))
						{
							iLocal_91[0] = VEHICLE::CREATE_VEHICLE(iVar5, Var6, 93.9805f, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
						}
					}
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91[0], 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_91[0]))
			{
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_83[iParam0], iLocal_91[0]))
			{
				switch (iVar0)
				{
					case 6:
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_83[iParam0]))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_83[iParam0], iLocal_91[0], -1);
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_83[iParam0], -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_83[iParam0], iLocal_91[0], 20000, -1, 1073741824, 1, 0);
						}
						break;
					
					case 7:
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_83[iParam0]))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_83[iParam0], iLocal_91[0], 0);
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_83[iParam0], -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_83[iParam0], iLocal_91[0], 20000, 0, 1073741824, 1, 0);
						}
						break;
				}
			}
			else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_91[0], -1) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_91[0], 0))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_91[0], 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_83[iParam0], -2118855366) != 1)
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(uLocal_83[iParam0], iLocal_91[0], 24, 500);
					}
				}
			}
			else
			{
				switch (iVar0)
				{
					case 6:
						func_527(uLocal_83[iParam0], iVar0, &(iLocal_91[0]), 6, iParam1, &(uLocal_87[iParam0]), Local_144, fLocal_147, &(iLocal_523[iParam0]), 27, "FMFAUD", "", "", &uLocal_317, -1f, &uLocal_358, &uLocal_348, "", &iLocal_342, uLocal_83[2]);
						break;
					
					case 7:
						break;
				}
				if (Global_85393 == 2)
				{
					Global_85393 = 3;
				}
			}
			break;
		
		case 137:
			func_459(uLocal_83[iParam0], iVar0, Local_144, 40f, 1);
			break;
		
		case 138:
			if (iVar0 == 5)
			{
			}
			else
			{
				func_457(uLocal_83[iParam0], iVar0, &(uLocal_87[iParam0]), &(uLocal_97[iParam0]), &(iLocal_101[iParam0]), &(uLocal_97[iParam0]), &(iLocal_101[iParam0]), &(uLocal_93[iParam0]), &(iLocal_523[iParam0]));
				if (Global_68509 == 43)
				{
					if (!GlobalFunc_2982(60f))
					{
						GlobalFunc_2642(iVar0, 99);
					}
				}
			}
			break;
		
		case 140:
		case 141:
			break;
		
		default:
			break;
	}
	if (Global_85373[iVar0] != iParam1)
	{
		GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_148[iParam0 /*3*/]), &(uLocal_158[iParam0]));
		GlobalFunc_7229(uLocal_83[iParam0], iVar0, Global_85371, 1);
		func_456(iParam0);
		iLocal_166[iParam0] = -1;
	}
}

void func_456(int iParam0)//Position - 0x57FE9
{
	int iVar0;
	
	iVar0 = func_392(iParam0);
	switch (Global_85373[iVar0])
	{
		case 97:
			iLocal_101[iParam0] = joaat("s_prop_hdphones");
			iLocal_105[iParam0] = 31086;
			Local_109[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_119[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		default:
			iLocal_101[iParam0] = 0;
			iLocal_105[iParam0] = -1;
			Local_109[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_119[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
	}
}

int func_457(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x58062
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	char* sVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	var uVar23;
	var uVar24;
	struct<3> Var25;
	int iVar28;
	var uVar29;
	var uVar30;
	int iVar31;
	var uVar32;
	var uVar33;
	struct<3> Var34;
	struct<3> Var37;
	int iVar40;
	float fVar41;
	int iVar42;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(*uParam8);
	}
	if (*uParam8 != -1)
	{
		*uParam8 = -1;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857) != 1)
		{
			iVar11 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar12]) && !PED::IS_PED_INJURED(uVar0[iVar12]))
				{
					if (PED::GET_PED_TYPE(uVar0[iVar12]) == 6)
					{
						TASK::TASK_SMART_FLEE_PED(iParam0, uVar0[iVar12], 75f, -1, 1, 0);
						*uParam2 = 0;
						return 0;
					}
				}
				iVar12++;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -251125078) != 1)
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 75f, -1, 1, 0);
				*uParam2 = 0;
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam3, 1, 1);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 1, 1);
				}
				*uParam4 = 0;
				*uParam3 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam5))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam5, 1, 1);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 1, 1);
				}
				*uParam6 = 0;
				*uParam5 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam7, 1, 1);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 1, 1);
				}
				*uParam7 = 0;
			}
		}
		return 1;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_459(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam3, 1, 1);
					*uParam3 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam5))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam5, 1, 1);
					*uParam3 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam7, 1, 1);
					*uParam7 = 0;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 1193033728);
					return 0;
				}
			}
			else
			{
				SYSTEM::WAIT(5);
				if (PED::IS_PED_INJURED(iParam0))
				{
					return 0;
				}
				iVar13 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar14, &uVar15);
				if (iVar13 != 2)
				{
					*uParam2 = 1;
					return 0;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 0), 1f, -1, 0.25f, 0, 1193033728);
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iParam0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) == 1)
					{
						iVar13 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar14, &uVar15);
						if (iVar13 != 2)
						{
							*uParam2 = 1;
							return 0;
						}
					}
				}
			}
			sVar16 = "PROP_HUMAN_SEAT_CHAIR";
			bVar17 = true;
			if (GlobalFunc_2952(69, &iVar18, &iVar19, &iVar20, &iVar21))
			{
				if (iParam1 == iVar18)
				{
					if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) == iVar20 && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) == iVar21)
					{
						if (TASK::IS_SCENARIO_TYPE_ENABLED(sVar16))
						{
							TASK::SET_SCENARIO_TYPE_ENABLED(sVar16, 0);
							bVar17 = false;
						}
					}
				}
			}
			if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(iParam0, 0)))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 8192);
					TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
					*uParam2 = 1;
					return 0;
				}
			}
			break;
		
		case 1:
			if (func_459(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 1))
			{
			}
			else if (TASK::IS_SCENARIO_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 1))
			{
			}
			else
			{
				if (bVar17)
				{
				}
				if (Global_24489 == 3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar16) && TASK::IS_SCENARIO_TYPE_ENABLED(sVar16))
					{
						TASK::SET_SCENARIO_TYPE_ENABLED(sVar16, 0);
						return 0;
					}
				}
				if (!TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1647992574) != 1)
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 0);
				}
				else
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					*uParam2 = 2;
					return 0;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) == 1)
			{
				iVar22 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar23, &uVar24);
				if (iVar22 == 2)
				{
					Var25 = { GlobalFunc_5949(iParam0, iParam1, 0) };
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var25, 1f, -1, 0.25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
				return 0;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) == 1)
			{
				iVar28 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar29, &uVar30);
				if (iVar28 == 2)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
			}
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 0;
			}
			if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) == 1)
			{
			}
			else
			{
				*uParam2 = 0;
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1647992574) != 1)
			{
				if (!Global_24489 == 3)
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 0);
						iVar31 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar32, &uVar33);
						if (iVar31 == 2 || iVar31 == 0)
						{
							Var34 = { GlobalFunc_5949(iParam0, iParam1, 1) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var34, 1f, -1, 0.25f, 0, 1193033728);
							*uParam2 = 0;
							return 0;
						}
					}
					else
					{
						*uParam2 = 1;
						return 0;
					}
				}
				else
				{
					Var37 = { GlobalFunc_5949(iParam0, iParam1, 1) };
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var37, 1f, -1, 0.25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(iParam0))
			{
			}
			else
			{
				iVar40 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &fVar41, &iVar42);
				if (func_459(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
				{
					return 1;
				}
				if (iVar42 > 0)
				{
					if (TASK::IS_SCENARIO_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iParam0, 1), (fVar41 + 0.5f), 1))
					{
						iVar40 = iVar40;
						TASK::CLEAR_PED_TASKS(iParam0);
						*uParam2 = 1;
						return 0;
					}
				}
			}
			break;
		
		default:
			break;
	}
	iParam1 = iParam1;
	return 0;
}


int func_459(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x58BE4
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (fParam5 * fParam5))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
		{
			iVar0 = -1;
			fVar1 = 0.25f;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Param2, 1f, iVar0, fVar1, 0, 1193033728);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
		if (GlobalFunc_11240(iParam1, &iVar2, 1))
		{
			if (GlobalFunc_9264(iParam1, iVar2))
			{
				GlobalFunc_7241(iParam1, iVar2);
				return 1;
			}
		}
	}
	if (bParam6)
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
		GlobalFunc_7241(iParam1, 138);
	}
	return 0;
}




































































int func_527(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, struct<3> Param6, float fParam9, var uParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, var uParam15, float fParam16, var uParam17, var uParam18, char* sParam19, var uParam20, int iParam21)//Position - 0x5CC8F
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	char cVar21[64];
	char cVar37[64];
	var uVar53;
	var uVar54;
	char* sVar55;
	char[] cVar71[8];
	struct<3> Var87;
	float fVar90;
	float fVar91;
	float fVar92;
	char* sVar93;
	char* sVar94;
	float fVar95;
	int iVar96;
	struct<3> Var97;
	struct<3> Var100;
	char* sVar103;
	int iVar111;
	float fVar112;
	float fVar113;
	int iVar114;
	bool bVar115;
	char* sVar116;
	
	iVar0 = 4;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		*uParam5 = 0;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam0, *uParam2))
			{
				iVar1 = -1;
				fVar2 = 1f;
				iVar3 = 1;
				iVar4 = -1;
				StringCopy(&Var5, "", 64);
				StringCopy(&cVar21, "", 64);
				StringCopy(&cVar37, "", 64);
				switch (*uParam5)
				{
					case 0:
						if (!func_540(iParam0, iParam1, iParam4, *uParam2, iParam11, Param6, fParam9, iVar1))
						{
							if (iParam4 == 51)
							{
								if (GlobalFunc_8049(iParam0, iParam1, iParam4, Param6, fParam9, uParam10, 1, 0, &sVar55, &cVar71, 1090519040, -1056964608))
								{
								}
							}
							else if (func_537(iParam0))
							{
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							GlobalFunc_2447(iParam11, 1);
							MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
							if (iParam4 == 51)
							{
								*uParam5 = 2;
							}
							else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
							{
								if (func_425(sParam12, sParam13, uParam17, iVar0, uParam15, 0))
								{
									VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
									*uParam5 = 3;
								}
							}
							else
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
								*uParam5 = 3;
							}
						}
						break;
					
					case 2:
						if (GlobalFunc_7240(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							STREAMING::REQUEST_ANIM_DICT(&Var5);
							if (STREAMING::HAS_ANIM_DICT_LOADED(&Var5))
							{
								if (func_425(sParam12, sParam13, uParam17, iVar0, uParam15, 0))
								{
									if (iParam4 != 51)
									{
										StringCopy(&cVar37, "exit", 64);
									}
									else
									{
										StringCopy(&cVar37, "exit_demo", 64);
									}
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
									{
										Var87 = { 0f, 0f, 0f };
										fVar90 = 0f;
										if (GlobalFunc_5940(iParam1, iParam4, &Var87, &fVar90))
										{
											*uParam10 = PED::CREATE_SYNCHRONIZED_SCENE(Param6 + Var87, 0f, 0f, (fParam9 + fVar90), 2);
										}
									}
									PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam10, 0f);
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam10, &Var5, &cVar37, 8f, -4f, 3, 0, 1000f, 0);
									PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
									GlobalFunc_6715(uParam18);
									*uParam5 = 4;
								}
							}
						}
						break;
					
					case 4:
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
						{
							*uParam5 = 5;
							return 1;
						}
						if (fParam16 <= 0f)
						{
							*uParam5 = 5;
							return 1;
						}
						if (GlobalFunc_7240(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							if (iParam4 != 51)
							{
								StringCopy(&cVar37, "exit", 64);
							}
							else
							{
								StringCopy(&cVar37, "exit_demo", 64);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 3))
							{
								if (func_425(sParam12, sParam14, uParam17, iVar0, uParam15, "face"))
								{
									*uParam5 = 6;
								}
							}
						}
						break;
					
					case 6:
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
						{
							*uParam5 = 5;
							return 1;
						}
						if (fParam16 <= 0f)
						{
							*uParam5 = 5;
							return 1;
						}
						if (GlobalFunc_7240(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							if (iParam4 != 51)
							{
								StringCopy(&cVar37, "exit", 64);
							}
							else
							{
								StringCopy(&cVar37, "exit_demo", 64);
							}
							fVar91 = -1f;
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 1))
							{
								fVar91 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 2))
							{
								fVar91 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam10);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 3))
							{
								fVar91 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							if (fVar91 >= 0f)
							{
								if (fVar91 >= fParam16)
								{
									GlobalFunc_619(0);
									GlobalFunc_6715(uParam18);
									*uParam5 = 5;
								}
							}
						}
						break;
					
					case 5:
						if (GlobalFunc_7240(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							if (iParam4 != 51)
							{
								StringCopy(&cVar37, "exit", 64);
							}
							else
							{
								StringCopy(&cVar37, "exit_demo", 64);
							}
							fVar92 = -1f;
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 1))
							{
								fVar92 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 2))
							{
								fVar92 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam10);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 3))
							{
								fVar92 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							if (fVar92 >= 0f)
							{
								if (fVar92 >= 0.88f)
								{
									PED::FORCE_PED_MOTION_STATE(iParam0, -668482597, 0, 1, 0);
									TASK::CLEAR_PED_TASKS(iParam0);
									TASK::TASK_ENTER_VEHICLE(iParam0, *uParam2, iVar4, iVar1, fVar2, iVar3, 0);
									GlobalFunc_2447(iParam11, 1);
									MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
									VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
									*uParam5 = 3;
									return 1;
								}
							}
							else
							{
								PED::FORCE_PED_MOTION_STATE(iParam0, -668482597, 0, 1, 0);
								TASK::CLEAR_PED_TASKS(iParam0);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam2, iVar1))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0, *uParam2, iVar4, iVar1, fVar2, iVar3, 0);
								}
								GlobalFunc_2447(iParam11, 1);
								MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
								*uParam5 = 3;
								return 1;
							}
						}
						break;
					
					case 3:
					case 33:
						if (!func_540(iParam0, iParam1, iParam4, *uParam2, iParam11, Param6, fParam9, iVar1))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam2, iVar1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) != 1)
								{
									TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
								}
								if (*uParam5 == 3)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
									{
										if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 5f && !(((AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)) || GlobalFunc_111()) || GlobalFunc_617()))
										{
											switch (iParam1)
											{
												case 2:
													sVar93 = "AMANDA_NORMAL";
													break;
												
												case 0:
													sVar93 = "JIMMY_NORMAL";
													break;
												
												case 1:
													sVar93 = "TRACY_NORMAL";
													break;
											}
											GlobalFunc_5653(iParam0, sParam19, sVar93, 24);
											*uParam5 = 33;
										}
									}
								}
								return 0;
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam2, iVar1))
							{
								if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam2, iVar1) != iParam0)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) != 1)
									{
										TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
									}
								}
								if (*uParam5 == 3)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
									{
										if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 5f && !(((AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)) || GlobalFunc_111()) || GlobalFunc_617()))
										{
											switch (iParam1)
											{
												case 2:
													sVar94 = "AMANDA_NORMAL";
													break;
												
												case 0:
													sVar94 = "JIMMY_NORMAL";
													break;
												
												case 1:
													sVar94 = "TRACY_NORMAL";
													break;
											}
											GlobalFunc_5653(iParam0, sParam19, sVar94, 24);
											*uParam5 = 33;
										}
									}
								}
								return 0;
							}
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam2, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 2500f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(*uParam2, 1), 1f, -1, 1048576000, 0, 1193033728);
								}
								return 0;
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
							{
								if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(*uParam2)))
								{
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(iParam0, *uParam2, iVar4, iVar1, fVar2, iVar3, 0);
								}
							}
							else if (PED::GET_PED_CONFIG_FLAG(iParam0, 104, 1))
							{
								PED::SET_PED_RESET_FLAG(iParam0, 60, 1);
							}
							if (!PED::IS_PED_INJURED(iParam21))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam21, *uParam2))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iParam21, -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(iParam21, *uParam2, iVar4, -2, fVar2, iVar3, 0);
									}
								}
							}
						}
						break;
					
					default:
						break;
				}
			}
			else
			{
				*uParam5 = 0;
				fVar95 = 20f;
				iVar96 = 786603;
				Var97 = { -825.7757f, 177.2016f, 71.9871f };
				Var100 = { -844.4757f, 156.9072f, 67.0048f };
				if (!func_530(iParam0, iParam3, Var97, Var100, &sVar103))
				{
					if (INTERIOR::IS_VALID_INTERIOR(*uParam20) && INTERIOR::IS_INTERIOR_READY(*uParam20))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam2))
						{
							ENTITY::SET_ENTITY_COORDS(*uParam2, Var97, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(*uParam2, MISC::GET_HEADING_FROM_VECTOR_2D((Var100.x - Var97.x), (Var100.f_1 - Var97.f_1)));
						}
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar103))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1817882002) != 1)
						{
							iVar111 = 0;
							fVar112 = 3f;
							fVar113 = -1f;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, *uParam2, Var100, (fVar95 * 0.5f), iVar111, 0, 786599, fVar112, fVar113);
							if (iParam11 != 27)
							{
								if (!GlobalFunc_580(iParam11, iParam0))
								{
									GlobalFunc_5125(iParam11, iParam0);
								}
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -235832601) != 1)
					{
						TASK::REQUEST_WAYPOINT_RECORDING(&sVar103);
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&sVar103))
						{
							if (iParam11 != 27)
							{
								GlobalFunc_2447(iParam11, 1);
								MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
								if (!GlobalFunc_580(iParam11, iParam0))
								{
									GlobalFunc_5125(iParam11, iParam0);
								}
								if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Global_34036[iParam11 /*31*/]) > -1f)
								{
									return 1;
								}
							}
							iVar114 = 0;
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -827.1387f, 176.3679f, 69.9464f) > 2.5f)
							{
								iVar114 = 8;
							}
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0, *uParam2, &sVar103, iVar96, iVar114, 16, -1, -1082130432, 0, 1073741824);
						}
					}
				}
				else
				{
					bVar115 = false;
					if (!PED::IS_PED_INJURED(iParam21))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam21, *uParam2))
						{
							bVar115 = true;
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam21, -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(iParam21, *uParam2, -1, -2, 1f, 1, 0);
							}
						}
					}
					if (PED::IS_PED_IN_VEHICLE(iParam0, *uParam2, 0))
					{
						if (bVar115)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2118855366) != 1)
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(iParam0, *uParam2, 24, 500);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -258271821) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(iParam0, *uParam2, fVar95, iVar96);
							if (iParam11 != 27)
							{
								if (!GlobalFunc_580(iParam11, iParam0))
								{
									GlobalFunc_5125(iParam11, iParam0);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
			{
				switch (iParam1)
				{
					case 2:
						sVar116 = "AMANDA_NORMAL";
						break;
					
					case 0:
						sVar116 = "JIMMY_NORMAL";
						break;
					
					case 1:
						sVar116 = "TRACY_NORMAL";
						break;
				}
				GlobalFunc_5653(iParam0, sParam19, sVar116, 24);
			}
			*uParam5 = 0;
			GlobalFunc_7241(iParam1, 138);
			return 0;
		}
		return 1;
	}
	return 0;
}



int func_530(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5, char* sParam8)//Position - 0x5D77E
{
	float fVar0;
	float fVar1;
	
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -258271821) == 1)
	{
		return 1;
	}
	switch (iParam1)
	{
		case 2:
			fVar0 = SYSTEM::VMAG(Param5 - Param2);
			fVar1 = (fVar0 - 2f);
			if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (fVar1 * fVar1))
			{
				return 1;
			}
			StringCopy(sParam8, "family_m_wife_drive", 32);
			return 0;
			break;
		
		case 1:
			fVar0 = SYSTEM::VMAG(Param5 - Param2);
			fVar1 = (fVar0 - 2f);
			if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (fVar1 * fVar1))
			{
				return 1;
			}
			StringCopy(sParam8, "family_m_daughter_drive", 32);
			return 0;
			break;
	}
	return 1;
}







int func_537(int iParam0)//Position - 0x5F7B4
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 936589729) != 1)
	{
		TASK::TASK_USE_MOBILE_PHONE(iParam0, 1, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
		PED::SET_PED_CONFIG_FLAG(iParam0, 185, 1);
		PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		return 1;
	}
	return 1;
}



int func_540(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9)//Position - 0x5FB6C
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	float fVar18;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	float fVar36;
	
	if (!MISC::IS_BIT_SET(Global_34036[iParam4 /*31*/].f_1, 6))
	{
		GlobalFunc_2447(iParam4, 1);
		MISC::CLEAR_BIT(&(Global_34036[iParam4 /*31*/].f_1), 4);
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) == 1)
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam3, iParam9))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam3, iParam9) != iParam0)
		{
			return 0;
		}
	}
	if (iParam1 == 2)
	{
		if (GlobalFunc_5940(iParam1, iParam2, &Var0, &fVar3))
		{
			Var4 = { Param5 + Var0 };
			Var7 = { 0f, 0f, 0f };
			Var10 = { 12f, 12f, 2f };
			fVar13 = (fParam8 + fVar3);
			fVar14 = 9f;
			if (iParam2 == 51)
			{
				Var7 = { -0.4f, -2.7f, 0.5f };
				Var10 = { Vector(2f, 5f, 3f) + Vector(0f, 0.5f, 0.5f) };
				fVar14 = 80f;
			}
			if (!GlobalFunc_2978(PLAYER::PLAYER_PED_ID(), Var4 + Var7, Var10, (fVar13 + fVar14), 0, 1, 0))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam1 == 6 || iParam1 == 7)
	{
		return 1;
	}
	if (iParam2 == 23)
	{
		if (GlobalFunc_5940(iParam1, iParam2, &Var15, &fVar18))
		{
			Var19 = { Param5 + Var15 };
			Var22 = { 30f, 25f, 6.9f };
			Var25 = { 5f, 0f, 0f };
			Var28 = { 24f, 30f, 10f };
			Var31 = { 45f, 36f, 0f };
			fVar34 = (fParam8 + fVar18);
			fVar35 = 6f;
			if (GlobalFunc_2978(PLAYER::PLAYER_PED_ID(), Var19 + Var22, Var28, (fVar34 + fVar35), 0, 1, 0) || GlobalFunc_2978(PLAYER::PLAYER_PED_ID(), Var19 + Var25, Var31, (fVar34 + fVar35), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	fVar36 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1));
	if (fVar36 > (15f * 15f))
	{
		return 0;
	}
	return 1;
}


int func_542(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6)//Position - 0x5FDFE
{
	struct<3> Var0;
	var uVar3;
	
	if (GlobalFunc_5940(iParam1, iParam2, &Var0, &uVar3))
	{
		if (!TASK::GET_SCRIPT_TASK_STATUS(uParam0, 923520851) == 1)
		{
			TASK::TASK_WANDER_IN_AREA(iParam0, Param3 + Var0, 25f, 1077936128, 1086324736);
		}
		fParam6 = fParam6;
		return 1;
	}
	return 0;
}

int func_543(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x5FE4D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	char cVar19[64];
	float fVar35;
	float fVar36;
	int iVar37;
	float fVar38;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			iVar0 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
			}
			iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam3);
			iVar2 = (iVar0 - iVar1);
			StringCopy(&Var3, "", 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				StringCopy(&Var3, HUD::_GET_TEXT_SUBSTRING(sParam2, 0, iVar2), 64);
			}
			cVar19 = { Var3 };
			StringConCat(&cVar19, sParam4, 64);
			if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(*uParam0))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam1))
				{
					STREAMING::REQUEST_ANIM_DICT(sParam1);
					return 0;
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sParam1, &cVar19, 3))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam5))
					{
						return 0;
					}
					if (iParam6 < 11)
					{
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
					{
						ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
					}
					fVar35 = 8f;
					fVar36 = -8f;
					iVar37 = 5;
					fVar38 = 1000f;
					if (((ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("s_prop_hdphones") || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("v_res_fa_chair02")) || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("p_novel_01_s")) || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("p_whiskey_bottle_s"))
					{
						fVar35 = 1000f;
						fVar36 = -1000f;
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*uParam0, *uParam5, &cVar19, sParam1, fVar35, fVar36, iVar37, fVar38);
					if (fVar35 == 1000f)
					{
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*uParam0);
					}
					return 1;
				}
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
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		return 0;
	}
	return 0;
}




int func_547(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7, int iParam8)//Position - 0x62841
{
	int iVar0;
	struct<4> Var1;
	float fVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	struct<3> Var13;
	float fVar16;
	char* sVar17;
	char* sVar18;
	
	if (Global_24489 == 0)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			return 0;
		}
		iVar0 = GlobalFunc_5187();
		if (iVar0 != 318)
		{
			StringCopy(&Var1, "", 32);
			fVar9 = 0f;
			if (GlobalFunc_2980(iVar0, &Var1, &fVar9, &uVar10, &uVar11, &uVar12))
			{
				return 0;
			}
		}
		func_548(iParam1, iParam2);
		return 1;
	}
	if (GlobalFunc_5940(iParam1, iParam2, &Var13, &fVar16))
	{
		Var13 = { Var13 + Param3 };
		fVar16 = (fVar16 + fParam6);
		sVar17 = "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT";
		sVar18 = "EXIT_FORWARD";
		switch (iParam2)
		{
			case 4:
				*uParam7 = 3;
				break;
			
			case 19:
			case 25:
				*uParam7 = 3;
				break;
			
			case 48:
			case 68:
				sVar17 = "";
				sVar18 = "";
				*uParam7 = 3;
				break;
			
			case 32:
			case 33:
				sVar17 = "";
				sVar18 = "";
				*uParam7 = 3;
				break;
			
			case 34:
				*uParam7 = 3;
				break;
			
			case 35:
				*uParam7 = 3;
				break;
			
			case 96:
			case 98:
				*uParam7 = 3;
				break;
			
			default:
				return 0;
				break;
		}
		switch (*uParam7)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT(sVar17);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sVar17))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, sVar17, sVar18, Var13, 0f, 0f, fVar16, 1000f, -8f, -1, 8, 0f, 2, 0);
					*uParam7 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sVar17, sVar18, 3))
				{
					*uParam7 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
				{
					STREAMING::REMOVE_ANIM_DICT(sVar17);
				}
				GlobalFunc_5130(*uParam0, "GENERIC_INSULT_MED", 24);
				TASK::CLEAR_PED_TASKS(*uParam0);
				GlobalFunc_7241(iParam1, iParam8);
				*uParam7 = 0;
				return 0;
				break;
			
			case 3:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
				{
					STREAMING::REMOVE_ANIM_DICT(sVar17);
				}
				if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
				{
					PED::DELETE_PED(uParam0);
				}
				GlobalFunc_7241(iParam1, 140);
				*uParam7 = 0;
				return 0;
				break;
			
			default:
				return 0;
				break;
			}
	}
	return 0;
}

void func_548(var uParam0, int iParam1)//Position - 0x62A4F
{
	switch (iParam1)
	{
		case 33:
		case 32:
			if (GlobalFunc_2920(4))
			{
				if (!GlobalFunc_2799(4))
				{
					GlobalFunc_5649(4, 2, 7, 0, 0);
					GlobalFunc_2979(4, 1);
				}
				else if (!GlobalFunc_2202(5))
				{
					if (!GRAPHICS::_IS_TV_PLAYLIST_ITEM_PLAYING(-646850510))
					{
						GRAPHICS::SET_TV_CHANNEL_PLAYLIST(2, "PL_SP_WORKOUT", 0);
						GRAPHICS::SET_TV_CHANNEL(2);
					}
				}
			}
			else
			{
				return;
			}
			break;
		
		case 34:
		case 35:
		case 19:
		case 25:
		case 4:
		case 48:
		case 68:
			if (GlobalFunc_2920(4))
			{
				if (!GlobalFunc_2799(4))
				{
					GlobalFunc_5649(4, 0, 1, 0, 0);
					GlobalFunc_2979(4, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 5:
		case 21:
			if (GlobalFunc_2920(5))
			{
				if (!GlobalFunc_2799(5))
				{
					GlobalFunc_5649(5, 2, 5, 0, 0);
					GlobalFunc_2979(5, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 96:
		case 98:
			if (GlobalFunc_2920(0))
			{
				if (!GlobalFunc_2799(0))
				{
					GlobalFunc_5649(0, 0, 1, 0, 0);
					GlobalFunc_2979(0, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		default:
			uParam0 = uParam0;
			break;
	}
}









int func_557(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, int iParam7, int iParam8)//Position - 0x62EAF
{
	char* sVar0;
	char[] cVar16[8];
	var uVar32;
	var uVar33;
	struct<3> Var34;
	float fVar37;
	var uVar38;
	
	if (GlobalFunc_7240(iParam1, iParam2, &sVar0, &cVar16, &uVar32, &uVar33) && GlobalFunc_5940(iParam1, iParam2, &Var34, &fVar37))
	{
		STREAMING::REQUEST_ANIM_DICT(&sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			return 0;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sVar0, &cVar16, 3))
			{
				GlobalFunc_2977(iParam1, iParam2, &uVar38);
				if (GlobalFunc_2951(uVar32, 262144))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				}
				TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, &sVar0, &cVar16, Param3 + Var34, 0f, 0f, (fParam6 + fVar37), iParam7, iParam8, -1, uVar32, 0f, 2, uVar38);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_558(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam8)//Position - 0x62F6B
{
	float fVar0;
	struct<16> Var1;
	struct<16> Var17;
	char* sVar33;
	char[] cVar49[8];
	var uVar65;
	var uVar66;
	var uVar67;
	float fVar68;
	
	Param5 = { Param5 };
	fParam8 = fParam8;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam3, sParam4);
			if (fVar0 <= 0.99f)
			{
				return 1;
			}
		}
		StringCopy(sParam3, "", 64);
		StringCopy(sParam4, "", 64);
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
	{
		if (GlobalFunc_8637(iParam1, iParam2, &Var1, &Var17, -1))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var1);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&Var1))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var1, &Var17, 3))
				{
					if (GlobalFunc_7240(iParam1, iParam2, &sVar33, &cVar49, &uVar65, &uVar66))
					{
						if (GlobalFunc_2951(uVar65, 1))
						{
							GlobalFunc_811(&uVar65, 1);
						}
						if (GlobalFunc_2951(uVar65, 262144))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
							PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
						}
						GlobalFunc_2977(iParam1, iParam2, &uVar67);
						fVar68 = -8f;
						if (iParam2 == 60 || iParam2 == 83)
						{
							fVar68 = -1.5f;
						}
						if (iParam2 == 60)
						{
							if (GlobalFunc_2951(uVar65, 33554432))
							{
							}
							else
							{
								GlobalFunc_2953(&uVar65, 33554432);
							}
							fVar68 = -4f;
						}
						TASK::TASK_PLAY_ANIM(iParam0, &Var1, &Var17, 8f, fVar68, -1, uVar65, 0f, 0, uVar67, 0);
						*sParam3 = { Var1 };
						*sParam4 = { Var17 };
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		return 0;
	}
	return 0;
}







int func_565(int iParam0, char* sParam1, var uParam2, float fParam3)//Position - 0x64176
{
	float fVar0;
	float fVar1;
	
	if (GlobalFunc_5948(iParam0))
	{
		return 0;
	}
	if (!GlobalFunc_226(uParam2))
	{
		return 0;
	}
	fVar0 = GlobalFunc_4981(uParam2);
	if (!GlobalFunc_7072(uParam2, 1f))
	{
		return 0;
	}
	fVar1 = ((fVar0 % fParam3) / fParam3);
	if (fVar1 < 0.9f)
	{
		return 0;
	}
	GlobalFunc_5130(iParam0, sParam1, 24);
	return 1;
}


int func_567(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam8)//Position - 0x644D6
{
	var uVar0;
	var uVar97;
	int iVar194;
	var uVar195;
	var uVar196;
	var uVar197;
	struct<3> Var198;
	float fVar201;
	var uVar202;
	bool bVar203;
	float fVar204;
	
	uVar0 = 6;
	uVar97 = 6;
	if (GlobalFunc_8050(iParam1, iParam2, &uVar0, &uVar97, &iVar194, &uVar195, &uVar196, &uVar197))
	{
		if (GlobalFunc_5940(iParam1, iParam2, &Var198, &fVar201))
		{
			GlobalFunc_2977(iParam1, iParam2, &uVar202);
			bVar203 = false;
			if (!bVar203)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 1))
					{
						fVar204 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam3, sParam4);
						if (fVar204 >= 0.99f)
						{
							func_568(iParam0, &uVar0, &uVar97, iVar194, Param5 + Var198, 0f, 0f, (fParam8 + fVar201), sParam3, sParam4, uVar195, uVar196, -1, uVar197, 0, 2, uVar202);
						}
						bVar203 = true;
					}
				}
			}
			if (!bVar203)
			{
				func_568(iParam0, &uVar0, &uVar97, iVar194, Param5 + Var198, 0f, 0f, (fParam8 + fVar201), sParam3, sParam4, uVar195, uVar196, -1, uVar197, 0, 2, uVar202);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 3);
		}
		return 0;
	}
	StringCopy(sParam3, "", 64);
	StringCopy(sParam4, "", 64);
	return 0;
}

void func_568(int iParam0, var uParam1, var uParam2, int iParam3, struct<3> Param4, struct<3> Param7, char* sParam10, char* sParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0x645DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	struct<16> Var20;
	
	iVar0 = iParam3;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		iVar1 = 0;
		while (iVar1 < iParam3 + 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam10, uParam1[iVar1 /*16*/]) && MISC::ARE_STRINGS_EQUAL(sParam11, uParam2[iVar1 /*16*/]))
			{
				if (iVar1 != 0)
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam1 - 1))
					{
						if (iVar2 + 1 < *uParam1)
						{
							*(uParam1[iVar2 /*16*/]) = { *(uParam1[iVar2 + 1 /*16*/]) };
							*(uParam2[iVar2 /*16*/]) = { *(uParam2[iVar2 + 1 /*16*/]) };
						}
						else
						{
							StringCopy(uParam1[iVar2 /*16*/], "", 64);
							StringCopy(uParam2[iVar2 /*16*/], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
			}
			iVar1++;
		}
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
	Var4 = { *(uParam1[iVar3 /*16*/]) };
	Var20 = { *(uParam2[iVar3 /*16*/]) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
	{
		STREAMING::REQUEST_ANIM_DICT(&Var4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var4))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var4);
		}
		else
		{
			if (GlobalFunc_2951(uParam15, 1))
			{
				GlobalFunc_811(&uParam15, 1);
			}
			if (GlobalFunc_2951(uParam15, 2))
			{
			}
			else
			{
				GlobalFunc_2953(&uParam15, 2);
			}
			if (GlobalFunc_2951(uParam15, 262144))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
				PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			}
			TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, &Var4, &Var20, Param4, Param7, uParam12, uParam13, iParam14, uParam15, iParam16, iParam17, uParam18);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			*sParam10 = { Var4 };
			*sParam11 = { Var20 };
		}
	}
}





void func_573()//Position - 0x648C7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_344[iVar0] = 0;
		iVar0++;
	}
	GlobalFunc_173(&uLocal_358, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
}

void func_574(struct<4> Param0)//Position - 0x648FC
{
	int iVar0;
	
	Local_144 = { Param0 };
	fLocal_147 = Param0.f_3;
	GlobalFunc_11273(5);
	GlobalFunc_11273(6);
	GlobalFunc_11273(7);
	GlobalFunc_5940(5, Global_85373[5], &(Local_148[0 /*3*/]), &(uLocal_158[0]));
	GlobalFunc_5940(6, Global_85373[6], &(Local_148[1 /*3*/]), &(uLocal_158[1]));
	GlobalFunc_5940(7, Global_85373[7], &(Local_148[2 /*3*/]), &(uLocal_158[2]));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_456(iVar0);
		iLocal_166[iVar0] = -1;
		iLocal_523[iVar0] = -1;
		iVar0++;
	}
	iLocal_130[0] = joaat("prop_walllight_ld_01");
	iLocal_130[1] = joaat("prop_walllight_ld_01b");
	Local_133 = { Vector(32.64677f, -1431.179f, -22.94551f) - Local_144 };
	Local_136 = { 15f, 0f, ((2.57f - fLocal_147) + 360f) };
}


void func_576()//Position - 0x64A1C
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	
	uVar0 = 3;
	uVar4 = 3;
	GlobalFunc_8638(&iLocal_523, &iLocal_91, &uLocal_83, &uLocal_97, &iLocal_101, &uVar0, &uVar4, &uLocal_162, &iLocal_166, &uLocal_170);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_129);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_130[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police"));
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar9 = func_392(iVar8);
		if (Global_85373[iVar9] != 141)
		{
			GlobalFunc_2957(iVar9);
			Global_85373[iVar9] = 141;
		}
		GlobalFunc_7242(iVar9);
		iVar8++;
	}
	Global_85392 = 3;
	Global_85393 = 3;
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}




















