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
	var uLocal_82[2] = { 0, 0 };
	var uLocal_85[2] = { 0, 0 };
	int iLocal_88[2] = { 0, 0 };
	struct<3> Local_91[2];
	float fLocal_98[2] = { 0f, 0f };
	var uLocal_101[1] = { 0 };
	var uLocal_103[2] = { 0, 0 };
	var uLocal_106[2] = { 0, 0 };
	int iLocal_109[2] = { 0, 0 };
	int iLocal_112[2] = { 0, 0 };
	struct<3> Local_115[2];
	struct<3> Local_122[2];
	struct<3> Local_129 = { 0, 0, 0 } ;
	float fLocal_132 = 0f;
	struct<3> Local_133[2];
	var uLocal_140[2] = { 0, 0 };
	var uLocal_143[2] = { 0, 0 };
	int iLocal_146[2] = { 0, 0 };
	struct<16> Local_149[2];
	struct<16> Local_182[2];
	struct<16> Local_215[2];
	var uLocal_248 = 5;
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
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284[2] = { 0, 0 };
	var uLocal_287 = 16;
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
	int iLocal_453[2] = { 0, 0 };
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_579();
	}
	SYSTEM::WAIT(0);
	func_577(ScriptParam_0);
	func_576();
	while (GlobalFunc_10372(2, Local_129, 1.5f))
	{
		SYSTEM::WAIT(0);
		func_31();
		GlobalFunc_10373(4, &uLocal_77, Local_129, 11.5f, 10f, 7.5f, &uLocal_101);
	}
	func_579();
}































int func_31()//Position - 0x11B7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iLocal_269 = 1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_230(iVar1))
		{
			func_87(iVar1);
			if (!bVar0)
			{
				if (!GlobalFunc_7235(uLocal_82[iVar1], Local_182[iVar1 /*16*/], Local_215[iVar1 /*16*/], iLocal_453[iVar1], &uLocal_278))
				{
					iVar2 = func_85(iVar1);
					if (func_46(uLocal_82[iVar1], Global_85373[iVar2], &uLocal_287, "FMTAUD", &uLocal_248, &uLocal_278, &(uLocal_284[iVar1]), 1084227584, 0, 0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	GlobalFunc_8635(&uLocal_82, &uLocal_281);
	GlobalFunc_8047(&iLocal_269, &uLocal_270, &uLocal_273, &uLocal_274, Local_129, "V_Trevors");
	return 1;
}















int func_46(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, var uParam6, float fParam7, char[4] cParam8, int iParam9)//Position - 0x173D
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
	if (func_77(iParam0, iParam1, uParam2, sParam3, uParam4, uParam5, iVar0))
	{
		return 1;
	}
	GlobalFunc_81();
	sVar10 = GlobalFunc_7223(iParam1, &iVar7, &uVar8, &uVar9);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam8))
	{
		sVar10 = cParam8;
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
			if (func_55(sParam3, &Var13, uParam2, iVar0, uParam4, iParam9))
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
				if (!func_52(uParam2, sParam3, sVar10))
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
			if (func_55(sParam3, sVar10, uParam2, iVar0, uParam4, iParam9))
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
		if (func_47(sParam3, &Var25, uParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var25))
			{
				if (GlobalFunc_747(uVar8, 32))
				{
					if (!func_52(uParam2, sParam3, &Var25))
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
				if (func_55(sParam3, &Var25, uParam2, iVar0, uParam4, iParam9))
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

int func_47(char* sParam0, char[4] cParam1, var uParam2)//Position - 0x1C64
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
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return 0;
	}
	if (GlobalFunc_5946(sParam0, 7))
	{
		cVar0 = { *cParam1 };
		StringCopy(&cVar4, "", 16);
		iVar8 = -1;
		cVar0 = { *cParam1 };
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
			cVar0 = { *cParam1 };
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
		cVar0 = { *cParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			iVar8++;
			Var9[iVar8 /*4*/] = { *cParam1 };
			StringConCat(&(Var9[iVar8 /*4*/]), "a", 16);
			bVar70 = false;
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "b", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "c", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "d", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "e", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "f", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "g", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "h", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "i", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "j", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "k", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "JJJ", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "m", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "n", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *cParam1 };
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *cParam1 };
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
		*cParam1 = { Var9[iVar75 /*4*/] };
		if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}





int func_52(var uParam0, char* sParam1, char* sParam2)//Position - 0x23DC
{
	char cVar0[16];
	var uVar4;
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
			uVar4 = HUD::_GET_LABEL_TEXT(&cVar0);
			if (MISC::IS_STRING_NULL(uVar4))
			{
				return 0;
			}
			else
			{
				iVar5 = 0;
				iVar6 = 1;
				StringCopy(&cVar7, HUD::_GET_TEXT_SUBSTRING(uVar4, iVar5, iVar6), 16);
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



int func_55(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, int iParam5)//Position - 0x24C5
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
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
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






















int func_77(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6)//Position - 0x3F6E
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
	if (iVar18 || func_47(sParam3, &Var8, uParam4))
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
		if (func_55(sParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			GlobalFunc_6715(uParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}








int func_85(int iParam0)//Position - 0x443C
{
	switch (iParam0)
	{
		case 0:
			return 13;
			break;
		
		case 1:
			return 14;
			break;
		
		case 2:
			return 15;
			break;
	}
	return 16;
}


int func_87(int iParam0)//Position - 0x45D2
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	func_88(iParam0, Global_85373[iVar0]);
	return 0;
}

void func_88(int iParam0, int iParam1)//Position - 0x45F1
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = func_85(iParam0);
	switch (iParam1)
	{
		case 126:
			if (GlobalFunc_7244(uLocal_82[iParam0], iVar0, iParam1, Local_129 + Vector(1f, 0f, 0f), fLocal_132, &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), &(iLocal_453[iParam0]), uLocal_106[iParam0], 0, uLocal_452))
			{
				GlobalFunc_8636(uLocal_82[iParam0], iVar0, iParam1, &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), Local_129, fLocal_132, &(iLocal_453[iParam0]), 1, 0);
				if (GlobalFunc_5961(iParam1, &(uLocal_143[iParam0]), &(iLocal_146[iParam0]), "FLOYD_CLEANING", "", 0, &(Local_149[iParam0 /*16*/]), 0))
				{
				}
				if (iLocal_109[iParam0] != joaat("prop_scourer_01"))
				{
					func_222(iParam0);
				}
			}
			break;
		
		case 127:
			GlobalFunc_8636(uLocal_82[iParam0], iVar0, iParam1, &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), Local_129, fLocal_132, &(iLocal_453[iParam0]), 1, 1);
			break;
		
		case 128:
			GlobalFunc_8049(uLocal_82[iParam0], iVar0, iParam1, Local_129, fLocal_132, &(iLocal_453[iParam0]), 1, 0, &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), 1090519040, -1056964608);
			func_218(uLocal_82[iParam0], "CRYING", &uLocal_278, 1077936128);
			break;
		
		case 129:
			if (GlobalFunc_2539(136) != 1)
			{
				iVar1 = 126;
			}
			else
			{
				iVar1 = 138;
			}
			func_213(uLocal_82[iParam0], iVar0, iParam1, Local_129, fLocal_132, &(uLocal_103[iParam0]), &(iLocal_453[iParam0]), &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), iVar1, "FMTAUD", "", "", &uLocal_248, &uLocal_287, &uLocal_278, 0, 4);
			break;
		
		case 130:
			if (!func_209(uLocal_82[iParam0], iVar0, iParam1, &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), Local_129, fLocal_132))
			{
				func_208(uLocal_82[iParam0], iVar0, iParam1);
			}
			func_207(uLocal_82[iParam0], iVar0, 131, "FMTAUD", "FL_IG_3b", &uLocal_248, &uLocal_287, &uLocal_278, &iParam1, 4);
			break;
		
		case 131:
			func_205(uLocal_82[iParam0], iVar0, iParam1, Local_129, fLocal_132, &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), &(uLocal_103[iParam0]), &(uLocal_106[iParam0]), &(iLocal_109[iParam0]), 1);
			break;
		
		case 132:
		case 133:
		case 134:
			func_213(uLocal_82[iParam0], iVar0, iParam1, Local_129, fLocal_132, &(uLocal_103[iParam0]), &(iLocal_453[iParam0]), &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), 138, "FMTAUD", "", "FL_IG_4", &uLocal_248, &uLocal_287, &uLocal_278, 0, 4);
			if (iParam1 == 134)
			{
				if (Global_85373[iVar0] != iParam1)
				{
					TASK::TASK_FLUSH_ROUTE();
					TASK::TASK_EXTEND_ROUTE(-1146.142f, -1512.53f, 10.6327f);
					TASK::TASK_EXTEND_ROUTE(-1151.267f, -1515.913f, 10.63272f);
					TASK::TASK_EXTEND_ROUTE(-1152.917f, -1517.334f, 10.6327f);
					TASK::TASK_FOLLOW_POINT_ROUTE(uLocal_82[iParam0], 1f, 0);
					SYSTEM::SETTIMERA(0);
					while (!PED::IS_PED_INJURED(uLocal_82[iParam0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_82[iParam0], -1305324945) == 7)
						{
							return;
						}
						if (SYSTEM::TIMERA() > 5000)
						{
							return;
						}
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uLocal_82[iParam0], 1), -1152.917f, -1517.334f, 10.6327f) < 1f)
						{
							return;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
			break;
		
		case 135:
			GlobalFunc_8636(uLocal_82[iParam0], iVar0, iParam1, &(Local_182[iParam0 /*16*/]), &(Local_215[iParam0 /*16*/]), Local_129, fLocal_132, &(iLocal_453[iParam0]), 1, 0);
			break;
		
		case 136:
			func_199(uLocal_82[iParam0], iVar0, iParam1, Local_129, fLocal_132, 1090519040, -1056964608);
			func_182(136, &uVar2);
			if (iParam0 == 0)
			{
				if (GlobalFunc_5961(iParam1, &(uLocal_143[iParam0]), &(iLocal_146[iParam0]), "PORT_OF_LS_FLOYD_WADE_SHOWER", "FLOYD_WADE_SHOWER_MASTER", uLocal_82[iParam0], &(Local_149[iParam0 /*16*/]), 0))
				{
				}
			}
			break;
		
		case 137:
			func_99(uLocal_82[iParam0], iVar0, Local_129, 1082130432, 1);
			break;
		
		case 138:
			iVar3 = 0;
			func_96(uLocal_82[iParam0], iVar0, &(uLocal_103[iParam0]), &(uLocal_106[iParam0]), &(iLocal_109[iParam0]), &(uLocal_106[iParam0]), &(iLocal_109[iParam0]), &iVar3, &(iLocal_453[iParam0]));
			break;
		
		case 140:
		case 141:
			break;
		
		default:
			break;
	}
	if (Global_85373[iVar0] != iParam1)
	{
		func_222(iParam0);
		GlobalFunc_7229(uLocal_82[iParam0], iVar0, Global_85372, 1);
		GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_133[iParam0 /*3*/]), &(uLocal_140[iParam0]));
		func_222(iParam0);
		iLocal_146[iParam0] = -1;
	}
}








int func_96(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8)//Position - 0x6F93
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
		if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*iParam7, iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam7, 1, 1);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*iParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 1, 1);
				}
				*iParam7 = 0;
			}
		}
		return 1;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_99(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
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
			if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*iParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam7, 1, 1);
					*iParam7 = 0;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 40000f);
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
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 0), 1f, -1, 0.25f, 0, 40000f);
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
			if (func_99(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
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
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var25, 1f, -1, 0.25f, 0, 40000f);
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
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 40000f);
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
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var34, 1f, -1, 0.25f, 0, 40000f);
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
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var37, 1f, -1, 0.25f, 0, 40000f);
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
				if (func_99(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
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



int func_99(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x8B66
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
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Param2, 1f, iVar0, fVar1, 0, 40000f);
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



















































































int func_182(int iParam0, var uParam1)//Position - 0xD43D
{
	switch (iParam0)
	{
		case 5:
			func_183(0, 5, uParam1, -1f);
			return 1;
			break;
		
		case 21:
			return func_182(5, uParam1);
			break;
		
		case 10:
			func_183(0, 4, uParam1, 0);
			return 1;
			break;
		
		case 8:
			func_183(0, 4, uParam1, 0);
			return 1;
			break;
		
		case 1:
			func_183(1, 4, uParam1, 0);
			return 1;
			break;
		
		case 38:
			func_183(2, 5, uParam1, -0.75f);
			return 1;
			break;
		
		case 39:
			func_183(2, 4, uParam1, 0);
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1700375831))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1700375831, 4, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1700375831, 0f, 1, 1);
			}
			return 1;
			break;
		
		case 40:
			func_183(1, 4, uParam1, 0);
			return 1;
			break;
		
		case 30:
			func_183(1, 4, uParam1, 0);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
			switch (*uParam1)
			{
				case 7:
					func_183(6, 4, uParam1, 0);
					break;
				
				case 6:
					func_183(7, 4, uParam1, 0);
					break;
				
				default:
					if (GlobalFunc_745())
					{
						func_183(6, 4, uParam1, 0);
					}
					else
					{
						func_183(7, 4, uParam1, 0);
					}
					break;
			}
			return 1;
			break;
		
		case 136:
			func_183(10, 4, uParam1, 0);
			return 1;
			break;
	}
	*uParam1 = 12;
	return 0;
}

int func_183(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0xD5BF
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	struct<16> Var6;
	bool bVar22;
	struct<16> Var23;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar4 = 225;
	iVar5 = 825812850;
	bVar22 = false;
	GlobalFunc_2984(iParam0, &iVar0, &Var1, &iVar4, &iVar5, &Var6, &bVar22);
	StringCopy(&Var23, "", 64);
	if (!bVar22)
	{
		Var23 = { Var6 };
	}
	func_184(iVar0, Var1, iVar4, iVar5, iParam1, fParam3, Var23);
	*uParam2 = iParam0;
	return 1;
}

int func_184(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)//Position - 0xD626
{
	int iVar0;
	float fVar1;
	
	if (iParam4 != 225)
	{
		GlobalFunc_10686(iParam4, iParam6);
	}
	else if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam5))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iParam5, iParam0, Param1, 1, 1, 0);
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam8))
		{
			if (MISC::GET_HASH_KEY(&uParam8) == Global_90014.f_289)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam5, 0, 1, 0);
				return 0;
			}
		}
		iVar0 = 0;
		if (iParam6 == 4)
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam5) != 4)
			{
				if (fParam7 < 0.5f)
				{
					iVar0 = 1;
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1) > (3f * 3f) || iVar0)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam5, iParam6, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam5, fParam7, 1, 1);
			if (iParam6 == 4)
			{
				fVar1 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 5f);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1) < (fVar1 * fVar1))
				{
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				}
			}
		}
	}
	fParam7 = fParam7;
	return 0;
}















int func_199(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, int iParam7, int iParam8)//Position - 0x11938
{
	char* sVar0;
	char[] cVar16[8];
	int iVar32;
	var uVar33;
	struct<3> Var34;
	float fVar37;
	int iVar38;
	
	if (GlobalFunc_7240(iParam1, iParam2, &sVar0, &cVar16, &iVar32, &uVar33) && GlobalFunc_5940(iParam1, iParam2, &Var34, &fVar37))
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
				GlobalFunc_2977(iParam1, iParam2, &iVar38);
				if (GlobalFunc_2951(iVar32, 262144))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				}
				TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, &sVar0, &cVar16, Param3 + Var34, 0f, 0f, (fParam6 + fVar37), iParam7, iParam8, -1, iVar32, 0f, 2, iVar38);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}






int func_205(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, char* sParam7, char* sParam8, var uParam9, var uParam10, var uParam11, bool bParam12)//Position - 0x1380D
{
	struct<16> Var0;
	struct<16> Var16;
	int iVar32;
	int iVar33;
	float fVar34;
	char* sVar35;
	float fVar36;
	var uVar37;
	
	switch (*uParam9)
	{
		case 0:
			StringCopy(sParam7, "", 64);
			StringCopy(sParam7, "", 64);
			if (GlobalFunc_7240(iParam1, iParam2, &Var0, &Var16, &iVar32, &iVar33))
			{
			}
			if (iVar33 != 2)
			{
				STREAMING::REQUEST_ANIM_DICT(&Var0);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var0))
				{
					return 0;
				}
				if (GlobalFunc_2951(iVar32, 1))
				{
					GlobalFunc_2988(&iVar32, 1);
				}
				TASK::TASK_PLAY_ANIM(iParam0, &Var0, &Var16, 8f, -1.5f, -1, iVar32, 0f, 0, 0, 0);
				*sParam7 = { Var0 };
				*sParam8 = { Var16 };
				*uParam9 = 1;
			}
			else if (func_209(iParam0, iParam1, iParam2, sParam7, sParam8, Param3, fParam6))
			{
				*uParam9 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam7, sParam8, 3))
			{
				fVar34 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam7, sParam8);
				if (fVar34 >= 1f)
				{
					TASK::CLEAR_PED_TASKS(iParam0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
				{
					sVar35 = "hangup";
					if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam7, sParam8, sVar35, &fVar36, &uVar37))
					{
					}
					else
					{
						fVar36 = -1f;
						if (MISC::ARE_STRINGS_EQUAL(sParam7, "TIMETABLE@MAID@IG_8@"))
						{
							if (MISC::ARE_STRINGS_EQUAL(sParam8, "IG_8_IDLE_A"))
							{
								fVar36 = 0.85f;
							}
						}
						if (fVar36 < 0f)
						{
							fVar36 = 0.5f;
						}
					}
					if (fVar34 < fVar36)
					{
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(*uParam10))
						{
							ENTITY::DETACH_ENTITY(*uParam10, 1, 1);
						}
						if (bParam12)
						{
							*uParam11 = 0;
							OBJECT::DELETE_OBJECT(uParam10);
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(*uParam10))
					{
						ENTITY::DETACH_ENTITY(*uParam10, 1, 1);
					}
					if (bParam12)
					{
						*uParam11 = 0;
						OBJECT::DELETE_OBJECT(uParam10);
					}
				}
				StringCopy(sParam7, "", 64);
				StringCopy(sParam8, "", 64);
				*uParam9 = 2;
			}
			break;
		
		case 2:
			if (bParam12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
				{
				}
			}
			GlobalFunc_7241(iParam1, 138);
			*uParam9 = 0;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}


int func_207(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9)//Position - 0x139F8
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	
	if (Global_85373[iParam1] != iParam2)
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (7f * 7f))
		{
			return 0;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			return 0;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			GlobalFunc_7223(iParam2, &uVar0, &uVar1, &uVar2);
			if (!GlobalFunc_747(uVar2, GlobalFunc_8310()))
			{
				return 0;
			}
			if (GlobalFunc_747(uVar1, 64))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					if (func_55(sParam3, sParam4, uParam6, iParam9, uParam5, 0))
					{
						GlobalFunc_6715(uParam7);
						Global_85373[iParam1] = iParam2;
						return 1;
					}
				}
			}
			else
			{
				StringCopy(&Var3, sParam4, 16);
				if (func_47(sParam3, &Var3, uParam5))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
					{
						if (func_55(sParam3, &Var3, uParam6, iParam9, uParam5, 0))
						{
							GlobalFunc_6715(uParam7);
							Global_85373[iParam1] = iParam2;
							return 1;
						}
					}
				}
			}
			return 0;
		}
		Global_85373[iParam1] = iParam2;
		*iParam8 = Global_85373[iParam1];
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0, int iParam1, int iParam2)//Position - 0x13B1C
{
	char* sVar0;
	char[] cVar16[8];
	int iVar32;
	var uVar33;
	
	if (GlobalFunc_7240(iParam1, iParam2, &sVar0, &cVar16, &iVar32, &uVar33))
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
				TASK::TASK_PLAY_ANIM(iParam0, &sVar0, &cVar16, 8f, -8f, -1, iVar32, 0f, 0, 0, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam8)//Position - 0x13B8E
{
	float fVar0;
	struct<16> Var1;
	struct<16> Var17;
	char* sVar33;
	char[] cVar49[8];
	int iVar65;
	var uVar66;
	int iVar67;
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
					if (GlobalFunc_7240(iParam1, iParam2, &sVar33, &cVar49, &iVar65, &uVar66))
					{
						if (GlobalFunc_2951(iVar65, 1))
						{
							GlobalFunc_2988(&iVar65, 1);
						}
						if (GlobalFunc_2951(iVar65, 262144))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
							PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
						}
						GlobalFunc_2977(iParam1, iParam2, &iVar67);
						fVar68 = -8f;
						if (iParam2 == 60 || iParam2 == 83)
						{
							fVar68 = -1.5f;
						}
						if (iParam2 == 60)
						{
							if (GlobalFunc_2951(iVar65, 33554432))
							{
							}
							else
							{
								GlobalFunc_2953(&iVar65, 33554432);
							}
							fVar68 = -4f;
						}
						TASK::TASK_PLAY_ANIM(iParam0, &Var1, &Var17, 8f, fVar68, -1, iVar65, 0f, 0, iVar67, 0);
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




int func_213(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7, var uParam8, char* sParam9, char* sParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, var uParam15, var uParam16, var uParam17, float fParam18, int iParam19)//Position - 0x14844
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	struct<2> Var4;
	char cVar8[16];
	var uVar12;
	int iVar13;
	int iVar14;
	char* sVar15;
	var uVar31;
	var uVar32;
	struct<3> Var33;
	float fVar36;
	char* sVar37;
	float fVar38;
	float fVar39;
	int iVar40;
	int iVar41;
	char* sVar42;
	char cVar58[64];
	var uVar74;
	var uVar75;
	float fVar76;
	float fVar77;
	
	switch (*uParam7)
	{
		case 0:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
			{
				if (GlobalFunc_5960(iParam0, iParam2, Param3, fParam6))
				{
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
					{
						GlobalFunc_8049(iParam0, iParam1, iParam2, Param3, fParam6, uParam8, 1, 0, sParam9, sParam10, 1090519040, -1056964608);
						return 0;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam12) && MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
					{
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
						*uParam7 = 1;
						return 0;
					}
					GlobalFunc_7223(iParam2, &uVar0, &uVar1, &uVar2);
					if (!GlobalFunc_747(uVar2, GlobalFunc_8310()))
					{
					}
					else if (GlobalFunc_747(uVar1, 64))
					{
						bVar3 = false;
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
						{
							if (func_55(sParam12, sParam14, uParam16, iParam19, uParam15, 0))
							{
								GlobalFunc_6715(uParam17);
								bVar3 = true;
							}
						}
						else if (iParam2 == 129)
						{
							bVar3 = true;
						}
						if (fParam18 != 0f)
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
							*uParam7 = 1;
							return 0;
						}
					}
					else
					{
						StringCopy(&Var4, sParam14, 16);
						if (func_47(sParam12, &Var4, uParam15))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
							{
								if (func_55(sParam12, &Var4, uParam16, iParam19, uParam15, 0))
								{
									GlobalFunc_6715(uParam17);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
									*uParam7 = 1;
									return 0;
								}
							}
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(*uParam8))
				{
					*uParam7 = 1;
					return 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					if (!GlobalFunc_226(uParam17))
					{
						GlobalFunc_7731(uParam17);
					}
					StringCopy(&cVar8, sParam13, 16);
					if (func_47(sParam12, &cVar8, uParam15))
					{
						func_46(iParam0, iParam2, uParam16, sParam12, uParam15, uParam17, &uVar12, 10f, &cVar8, 0);
					}
				}
			}
			iVar13 = 8f;
			iVar14 = -8f;
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				iVar13 = 8f;
				iVar14 = -4f;
			}
			if (!GlobalFunc_8049(iParam0, iParam1, iParam2, Param3, fParam6, uParam8, 1, 0, sParam9, sParam10, iVar13, iVar14))
			{
				return 0;
			}
			break;
		
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
			{
				GlobalFunc_7240(iParam1, iParam2, sParam9, &sVar15, &uVar31, &uVar32);
				STREAMING::REQUEST_ANIM_DICT(sParam9);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam9))
				{
					return 0;
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
			{
				Var33 = { 0f, 0f, 0f };
				fVar36 = 0f;
				if (GlobalFunc_5940(iParam1, iParam2, &Var33, &fVar36))
				{
					*uParam8 = PED::CREATE_SYNCHRONIZED_SCENE(Param3 + Var33, 0f, 0f, (fParam6 + fVar36), 2);
				}
			}
			sVar37 = GlobalFunc_7243(iParam0, iParam1, iParam2);
			fVar38 = 8f;
			fVar39 = -1.5f;
			iVar40 = 1;
			iVar41 = 16;
			if (iParam2 == 47)
			{
				fVar38 = 1000f;
			}
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				fVar38 = 4f;
			}
			if (iParam11 == 141)
			{
				iVar40 |= 2;
			}
			else if (((((iParam2 == 132 || iParam2 == 133) || iParam2 == 134) || iParam2 == 73) || iParam2 == 120) || iParam2 == 129)
			{
				fVar39 = -1.5f;
			}
			else
			{
				fVar39 = -1000f;
			}
			if (iParam2 == 56)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1.5f;
				}
			}
			else if (iParam2 == 57)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1.5f;
				}
			}
			else if (iParam2 == 58)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1.5f;
				}
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam8, sParam9, sVar37, fVar38, fVar39, iVar40, iVar41, 1000f, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam8, 0f);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
			if (iParam2 == 73)
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 0);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
			}
			StringCopy(sParam10, sVar37, 64);
			PED::SET_PED_CONFIG_FLAG(iParam0, 185, 1);
			*uParam7 = 2;
			return 0;
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) == 1)
			{
				*uParam7 = 3;
				if (fParam18 != 0f)
				{
					*uParam7 = 33;
				}
			}
			break;
		
		case 3:
		case 33:
			if (GlobalFunc_7240(iParam1, iParam2, &sVar42, &cVar58, &uVar74, &uVar75))
			{
				StringCopy(&cVar58, GlobalFunc_7243(iParam0, iParam1, iParam2), 64);
			}
			if (fParam18 != 0f && *uParam7 != 3)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam8) >= fParam18)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
					{
						if (func_55(sParam12, sParam14, uParam16, iParam19, uParam15, 0))
						{
							GlobalFunc_6715(uParam17);
							*uParam7 = 3;
						}
					}
				}
			}
			if (ENTITY::FIND_ANIM_EVENT_PHASE(&sVar42, &cVar58, "WalkInterruptible", &fVar76, &fVar77))
			{
			}
			else
			{
				fVar76 = 0.95f;
				fVar77 = 1f;
				if (iParam2 == 21)
				{
					fVar76 = 0.44f;
					fVar77 = 1f;
				}
				if (iParam2 == 56)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0.78f;
						fVar77 = 1f;
					}
				}
				else if (iParam2 == 57)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0.73f;
						fVar77 = 1f;
					}
				}
				else if (iParam2 == 58)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0.8f;
						fVar77 = 1f;
					}
				}
				if (iParam2 == 120)
				{
					fVar76 = 0.8f;
					fVar77 = 1f;
				}
				if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
				{
					fVar76 = 0.75f;
					fVar77 = 1f;
				}
				if (iParam2 == 73)
				{
					fVar76 = 5f;
					fVar77 = 1f;
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam8) >= fVar76))
			{
				GlobalFunc_6715(uParam17);
				if (iParam11 == 141)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 1.5f, 0f), 1f, 20000, 1193033728, 1056964608);
					PED::FORCE_PED_MOTION_STATE(iParam0, -668482597, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
					*uParam7 = 4;
				}
				else
				{
					if (iParam11 == 137 || iParam11 == 138)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(*uParam8);
						}
						*uParam8 = -1;
					}
					GlobalFunc_6715(uParam17);
					*uParam7 = 0;
					GlobalFunc_7241(iParam1, iParam11);
					return 0;
				}
			}
			break;
		
		case 4:
			*uParam7 = 0;
			GlobalFunc_7241(iParam1, 138);
			break;
		
		case 5:
			if (iParam11 == 137 || iParam11 == 138)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(*uParam8);
				}
				*uParam8 = -1;
			}
			GlobalFunc_6715(uParam17);
			*uParam7 = 0;
			GlobalFunc_7241(iParam1, iParam11);
			return 0;
			break;
		
		default:
			break;
	}
	return 0;
}





int func_218(int iParam0, char* sParam1, var uParam2, float fParam3)//Position - 0x15646
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
	func_219(iParam0, sParam1, 24);
	return 1;
}

void func_219(int iParam0, var uParam1, int iParam2)//Position - 0x156A4
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1, GlobalFunc_566(iParam2), 1);
}



void func_222(int iParam0)//Position - 0x15A46
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	switch (Global_85373[iVar0])
	{
		case 130:
			iLocal_109[iParam0] = joaat("prop_phone_ing_03");
			iLocal_112[iParam0] = 28422;
			Local_115[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_122[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 126:
			iLocal_109[iParam0] = joaat("prop_scourer_01");
			iLocal_112[iParam0] = 28422;
			Local_115[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_122[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		default:
			iLocal_88[iParam0] = 0;
			Local_91[iParam0 /*3*/] = { 0f, 0f, 0f };
			fLocal_98[iParam0] = 0f;
			iLocal_109[iParam0] = 0;
			iLocal_112[iParam0] = -1;
			Local_115[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_122[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
	}
}








int func_230(int iParam0)//Position - 0x1864C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_85(iParam0);
	if (func_249(&(uLocal_82[iParam0]), iVar0, Local_129 + Local_133[iParam0 /*3*/], GlobalFunc_739((fLocal_132 + uLocal_140[iParam0]), 0f, 360f), &uLocal_273, &(iLocal_275[iParam0]), &uLocal_287, iParam0 + 1, Global_85372))
	{
		func_235(iParam0, &iVar1);
		func_233(iParam0);
		func_231(iParam0);
		if (Global_85373[iVar0] == 141 || Global_85373[iVar0] == 140)
		{
			if (iVar1 < 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_101[iVar1]))
				{
					VEHICLE::DELETE_VEHICLE(&(uLocal_101[iVar1]));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_106[iParam0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_85[iParam0]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(uLocal_106[iParam0]))
					{
						ENTITY::DETACH_ENTITY(uLocal_106[iParam0], 1, 1);
					}
				}
				OBJECT::DELETE_OBJECT(&(uLocal_106[iParam0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_85[iParam0]))
			{
				PED::DELETE_PED(&(uLocal_85[iParam0]));
			}
			PED::DELETE_PED(&(uLocal_82[iParam0]));
			return 0;
		}
		if (!PED::IS_PED_INJURED(uLocal_82[iParam0]))
		{
			return 1;
		}
	}
	else
	{
		iLocal_269 = 1;
	}
	return 0;
}

void func_231(int iParam0)//Position - 0x1876D
{
	func_232(&(uLocal_85[iParam0]), uLocal_82[iParam0], iLocal_88[iParam0], &(Local_91[iParam0 /*3*/]), &(fLocal_98[iParam0]));
}

void func_232(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x18797
{
	struct<3> Var0;
	
	if (iParam2 != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
				STREAMING::REQUEST_MODEL(iParam2);
				if (STREAMING::HAS_MODEL_LOADED(iParam2))
				{
					*iParam0 = PED::CREATE_PED(4, iParam2, Var0 + *uParam3, (ENTITY::GET_ENTITY_HEADING(iParam1) + *uParam4), 1, 1);
					GlobalFunc_2954(iParam0, -86095805);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam1, 1);
					if (iParam2 == joaat("s_m_y_cop_01"))
					{
						PED::SET_PED_HIGHLY_PERCEPTIVE(*iParam0, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_233(int iParam0)//Position - 0x1884E
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	GlobalFunc_7227(&(uLocal_106[iParam0]), uLocal_82[iParam0], iVar0, Global_85373[iVar0], Local_129, fLocal_132, iLocal_109[iParam0], iLocal_112[iParam0], &(Local_115[iParam0 /*3*/]), &(Local_122[iParam0 /*3*/]));
}


void func_235(int iParam0, var uParam1)//Position - 0x18A32
{
	int iVar0;
	
	*uParam1 = func_248(iParam0);
	if (*uParam1 < 1)
	{
		iVar0 = func_85(iParam0);
		func_236(&(uLocal_101[*uParam1]), iVar0, Local_129, fLocal_132, 0);
	}
}

void func_236(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x18A66
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
					if (GlobalFunc_8052(uParam0, iVar5, Param2 + Var1, GlobalFunc_739((fParam5 + fVar4), 0f, 360f), 1, iVar6))
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












int func_248(int iParam0)//Position - 0x1A098
{
	switch (iParam0)
	{
		case 2:
			return 1;
			break;
	}
	return 2;
}

int func_249(int iParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1A0B5
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
					if (GlobalFunc_11339(iParam0, iVar1, Param2, uParam5, 1, 0, 0))
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
				else if (GlobalFunc_6705(iParam0, iVar1, Param2, uParam5, 1))
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







































































































































































































































































































































void func_576()//Position - 0x68271
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iLocal_275[iVar0] = -1;
		iVar0++;
	}
	GlobalFunc_173(&uLocal_287, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
}

void func_577(struct<4> Param0)//Position - 0x682A4
{
	int iVar0;
	
	Local_129 = { Param0 };
	fLocal_132 = Param0.f_3;
	GlobalFunc_11273(13);
	GlobalFunc_5940(13, Global_85373[13], &(Local_133[0 /*3*/]), &(uLocal_140[0]));
	GlobalFunc_5940(14, Global_85373[14], &(Local_133[1 /*3*/]), &(uLocal_140[1]));
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_222(iVar0);
		iLocal_146[iVar0] = -1;
		iLocal_453[iVar0] = -1;
		iVar0++;
	}
}


void func_579()//Position - 0x68360
{
	int iVar0;
	int iVar1;
	
	GlobalFunc_8638(&iLocal_453, &uLocal_101, &uLocal_82, &uLocal_106, &iLocal_109, &uLocal_85, &iLocal_88, &uLocal_143, &iLocal_146, &Local_149);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_85(iVar0);
		if (Global_85373[iVar1] != 141)
		{
			GlobalFunc_2957(iVar1);
			Global_85373[iVar1] = 141;
		}
		GlobalFunc_7242(iVar1);
		iVar0++;
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}























