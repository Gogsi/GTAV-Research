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
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
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
	struct<61> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	char* sLocal_143 = NULL;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	char[] cLocal_149[8] = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	struct<5> Local_158 = { 0, 0, 0, 0, 0 } ;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	struct<3> Local_172 = { 0, 0, 0 } ;
	struct<3> Local_175 = { 0, 0, 0 } ;
	int iLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	struct<3> Local_181 = { 0, 0, 0 } ;
	var uLocal_184[2] = { 0, 0 };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	struct<7> Local_190[8];
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 16;
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
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	var uLocal_425 = 0;
	bool bLocal_426 = 0;
	int iLocal_427 = 0;
	char* sLocal_428 = NULL;
	var uLocal_429 = 0;
	int iLocal_430 = 0;
	char* sLocal_431[4] = { NULL, NULL, NULL, NULL };
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	struct<7> Local_438[2];
	float fLocal_453[2] = { 0f, 0f };
	int iLocal_456 = 0;
	struct<3> Local_457[9];
	int iLocal_485 = 0;
	char* sLocal_486 = NULL;
	struct<3> Local_487 = { 0, 0, 0 } ;
	float fLocal_490 = 0f;
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
	uLocal_79 = GlobalFunc_4946(49);
	Local_172 = { -0.1f, -0.85f, 0.23f };
	Local_175 = { 8f, 0.5f, 0f };
	iLocal_178 = joaat("prop_weed_tub_01");
	iLocal_188 = joaat("towtruck");
	sLocal_428 = "rcm_barry3c";
	Local_80 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_80);
	GlobalFunc_9161();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		func_437(1);
		func_435();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_35[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_80.f_35[0]))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_80.f_35[0], 1, 0);
			GlobalFunc_2372(&(Local_158.f_4), &(Local_80.f_35[0]));
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_158.f_4, 1);
			GlobalFunc_743(Local_158.f_4, 0);
		}
	}
	GlobalFunc_128(&uLocal_171, &(Local_80.f_41[0]));
	func_423();
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_35[1]))
	{
		GlobalFunc_2372(&(Local_190[6 /*7*/].f_4), &(Local_80.f_35[1]));
	}
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
				func_420(1);
				func_411(1, 1, 1);
				break;
			
			case 1:
				func_410(1);
				func_411(1, 1, 1);
				break;
			
			case 2:
				func_409(1);
				func_411(1, 1, 1);
				break;
			
			case 3:
				func_392(1);
				func_411(1, 1, 1);
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_2(0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113.9f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		func_411(1, 1, 1);
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_GRTD", 0);
		func_373(Local_80.f_9, 0, 0, 0, 0, 0);
		if (iLocal_155 == 13)
		{
			func_354();
		}
		else if (!func_353())
		{
			GlobalFunc_587();
			GlobalFunc_10868(&uLocal_142, &uLocal_250, "BAR3CAU", &sLocal_143, &cLocal_149);
			switch (iLocal_155)
			{
				case 0:
					func_346();
					break;
				
				case 1:
					func_344();
					break;
				
				case 2:
					func_343();
					break;
				
				case 3:
					func_314();
					break;
				
				case 4:
					func_311();
					break;
				
				case 5:
					func_309();
					break;
				
				case 6:
					func_305();
					break;
				
				case 12:
					func_241();
					break;
				
				case 7:
					func_45();
					break;
				
				case 11:
					func_43();
					break;
				
				case 8:
					func_42();
					break;
				
				case 9:
					func_19();
					break;
				
				case 10:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2F9
{
	func_17();
	switch (iLocal_156)
	{
		case 0:
			if (func_16(3) && (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				func_12(3);
			}
			func_11(5, 0);
			iLocal_156 = 1;
			func_5(0);
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[0 /*7*/][0 /*3*/], Local_438[0 /*7*/][1 /*3*/], fLocal_453[0], 0, 1, 0))
			{
				iLocal_156 = 2;
			}
			else
			{
				if (func_16(3) && !GlobalFunc_111())
				{
					func_12(3);
				}
				if (func_4())
				{
					if (func_2())
					{
						iLocal_155 = 5;
					}
					else
					{
						iLocal_155 = 9;
					}
					iLocal_156 = 0;
				}
				else
				{
					func_5(0);
				}
			}
			break;
		
		case 2:
			iLocal_155 = 7;
			iLocal_156 = 0;
			break;
	}
}

int func_2()//Position - 0x3CA
{
	if (GlobalFunc_115(iLocal_187) && GlobalFunc_115(Local_158.f_4))
	{
		if (func_3())
		{
			if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iLocal_187) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iLocal_187, Local_158.f_4))
			{
				bLocal_179 = true;
				return 1;
			}
		}
		else if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_187, Local_158.f_4))
		{
			bLocal_179 = true;
			return 1;
		}
	}
	return 0;
}

int func_3()//Position - 0x426
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_187);
	if ((iVar0 == joaat("cargobob") || iVar0 == joaat("cargobob2")) || iVar0 == joaat("cargobob3"))
	{
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x462
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_187) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_187, 0))
	{
		return 1;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_115(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((((iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2")) || iVar1 == joaat("cargobob")) || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				bVar2 = false;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_187))
				{
					if (iLocal_167)
					{
						VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_187);
						iLocal_167 = 0;
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_187);
				}
				iLocal_249 = 0;
				while (iLocal_249 <= 7)
				{
					if (GlobalFunc_115(Local_190[iLocal_249 /*7*/].f_4) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_190[iLocal_249 /*7*/].f_4, 0))
					{
						bVar2 = true;
						Local_190[iLocal_249 /*7*/].f_6 = 1;
						GlobalFunc_2372(&iLocal_187, &(Local_190[iLocal_249 /*7*/].f_4));
					}
					iLocal_249++;
				}
				if (!bVar2)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
					iLocal_187 = iVar0;
				}
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_187);
				iLocal_167 = 1;
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_187, 0, 0);
				iLocal_437 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void func_5(bool bParam0)//Position - 0x593
{
	if (bParam0)
	{
		iLocal_249 = 0;
		while (iLocal_249 <= 7)
		{
			GlobalFunc_131(&(Local_190[iLocal_249 /*7*/].f_4));
			iLocal_249++;
		}
	}
	else
	{
		iLocal_249 = 0;
		while (iLocal_249 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_190[iLocal_249 /*7*/].f_4))
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_190[iLocal_249 /*7*/], 175f) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_190[iLocal_249 /*7*/].f_4, 1) > 175f)
				{
					GlobalFunc_7108(&(Local_190[iLocal_249 /*7*/].f_4));
				}
			}
			else if (!Local_190[iLocal_249 /*7*/].f_6 && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_190[iLocal_249 /*7*/], 100f))
			{
				Local_190[iLocal_249 /*7*/].f_4 = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), Local_190[iLocal_249 /*7*/], Local_190[iLocal_249 /*7*/].f_3, 1, 1);
				if (iLocal_249 == 6)
				{
					VEHICLE::SET_VEHICLE_COLOURS(Local_190[iLocal_249 /*7*/].f_4, 39, 43);
				}
				else
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_190[iLocal_249 /*7*/].f_4, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_190[iLocal_249 /*7*/].f_4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_190[iLocal_249 /*7*/].f_4, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_190[iLocal_249 /*7*/].f_4, 1);
			}
			iLocal_249++;
		}
	}
}






void func_11(int iParam0, int iParam1)//Position - 0x833
{
	Local_457[iParam0 /*3*/].f_1 = iParam1;
}

void func_12(int iParam0)//Position - 0x846
{
	if (Local_457[iParam0 /*3*/].f_1 < Local_457[iParam0 /*3*/] || Local_457[iParam0 /*3*/] == -1)
	{
		GlobalFunc_2369(Local_457[iParam0 /*3*/].f_2, 7500, 1);
		GlobalFunc_2370(&uLocal_142);
		Local_457[iParam0 /*3*/].f_1++;
	}
}




int func_16(int iParam0)//Position - 0x901
{
	if (Local_457[iParam0 /*3*/].f_1 < Local_457[iParam0 /*3*/] || Local_457[iParam0 /*3*/] == -1)
	{
		return 1;
	}
	return 0;
}

void func_17()//Position - 0x934
{
	if (!iLocal_427)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 0))
		{
			iLocal_427 = 1;
			bLocal_426 = false;
			iLocal_423 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
			func_18();
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 1))
		{
			func_18();
		}
	}
	else
	{
		func_18();
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 0))
		{
			if (iLocal_427)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			iLocal_427 = 0;
			bLocal_426 = false;
		}
		else
		{
			if (!bLocal_426 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 75))
			{
				bLocal_426 = true;
			}
			switch (iLocal_423)
			{
				case 0:
					if (bLocal_426)
					{
						iLocal_423 = 7;
					}
					else
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_428);
						if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BARRY3C_IGNITION_FAIL", 0) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_428))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_158.f_4, -1) == PLAYER::PLAYER_PED_ID())
							{
								iLocal_423 = 1;
							}
						}
					}
					break;
				
				case 1:
					if (bLocal_426)
					{
						iLocal_423 = 7;
					}
					else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 71))
					{
						iLocal_423 = 2;
					}
					break;
				
				case 2:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_429);
					TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_loop", 8f, -8f, 1500, 9, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_429);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_429);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_429);
					iLocal_420 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_423 = 3;
					break;
				
				case 3:
					if (MISC::GET_GAME_TIMER() > iLocal_420)
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_425, "IGNITION_FAIL", Local_158.f_4, "BARRY_03_SOUNDSET", 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(uLocal_425, "HOLD TIME", 1.5f);
						iLocal_420 = MISC::GET_GAME_TIMER() + 2400;
						iLocal_423 = 4;
					}
					break;
				
				case 4:
					if (MISC::GET_GAME_TIMER() > iLocal_420)
					{
						if (bLocal_426)
						{
							iLocal_423 = 7;
						}
						else
						{
							iLocal_423 = 1;
						}
					}
					break;
				
				case 7:
					if (MISC::GET_GAME_TIMER() > iLocal_420 && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					}
					break;
				}
			}
	}
}

void func_18()//Position - 0xB86
{
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
}

void func_19()//Position - 0xB9E
{
	struct<3> Var0;
	
	func_17();
	switch (iLocal_156)
	{
		case 0:
			if (!iLocal_180)
			{
				iLocal_180 = 1;
			}
			GlobalFunc_146(&iLocal_157);
			if (GlobalFunc_115(iLocal_187))
			{
				iLocal_157 = GlobalFunc_5743(Local_158.f_4, 1, 5);
				HUD::SET_BLIP_ROUTE(iLocal_157, 1);
				if (bLocal_179)
				{
					func_12(7);
				}
				if ((!GlobalFunc_111() && iLocal_437) && !PAD::IS_CONTROL_PRESSED(0, 74))
				{
					iLocal_430 = 0;
				}
				iLocal_156 = 1;
			}
			else
			{
				iLocal_155 = 10;
			}
			break;
		
		case 1:
			func_20();
			if (iLocal_456 && !GlobalFunc_115(iLocal_187))
			{
				GlobalFunc_146(&iLocal_157);
				HUD::CLEAR_PRINTS();
				iLocal_155 = 10;
				iLocal_156 = 0;
			}
			else if (!func_4())
			{
				iLocal_156 = 2;
			}
			else if (func_2())
			{
				iLocal_156 = 2;
				iLocal_437 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[0 /*7*/][0 /*3*/], Local_438[0 /*7*/][1 /*3*/], fLocal_453[0], 0, 0, 0) && !ENTITY::IS_ENTITY_IN_AIR(Local_158.f_4))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_158.f_4, 1) };
				if (Var0.f_2 < 6.7f)
				{
					iLocal_155 = 12;
					iLocal_156 = 0;
				}
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_157);
			HUD::CLEAR_PRINTS();
			if (!func_4())
			{
				iLocal_155 = 8;
			}
			else
			{
				iLocal_155 = 5;
			}
			iLocal_156 = 0;
			break;
	}
}

void func_20()//Position - 0xCED
{
	switch (iLocal_430)
	{
		case 0:
			if (iLocal_436 == 3 && func_3())
			{
				iLocal_436 = 0;
			}
			if (func_38())
			{
				if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", sLocal_431[iLocal_436], 7, 1, 0, 0))
				{
					iLocal_430 = 1;
				}
			}
			else if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", sLocal_431[iLocal_436], 7, 0, 0, 0))
			{
				iLocal_430 = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				iLocal_436++;
				if (iLocal_436 >= 4)
				{
					iLocal_436 = 0;
				}
				iLocal_430 = 2;
			}
			break;
		
		case 2:
			break;
	}
}


















int func_38()//Position - 0x15A5
{
	iLocal_249 = 0;
	while (iLocal_249 <= 8)
	{
		if (GlobalFunc_165(Local_457[iLocal_249 /*3*/].f_2, 0, 0))
		{
			return 1;
		}
		iLocal_249++;
	}
	return 0;
}




void func_42()//Position - 0x164A
{
	func_17();
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_146(&iLocal_157);
			if (GlobalFunc_115(iLocal_187))
			{
				iLocal_157 = GlobalFunc_5743(iLocal_187, 1, 5);
				HUD::SET_BLIP_ROUTE(iLocal_157, 1);
				if (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111())
				{
					if (func_3())
					{
						func_12(8);
						iLocal_485 = 0;
					}
					else
					{
						func_12(6);
						iLocal_485 = 0;
					}
				}
				else
				{
					iLocal_485 = 1;
				}
				iLocal_156 = 1;
			}
			else
			{
				iLocal_155 = 10;
			}
			break;
		
		case 1:
			func_20();
			if (func_4())
			{
				iLocal_156 = 2;
			}
			else if (iLocal_456 && !GlobalFunc_115(iLocal_187))
			{
				GlobalFunc_146(&iLocal_157);
				HUD::CLEAR_PRINTS();
				iLocal_155 = 10;
				iLocal_156 = 0;
			}
			else if (iLocal_485)
			{
				if (!GlobalFunc_111())
				{
					if (func_3())
					{
						func_12(8);
						iLocal_485 = 0;
					}
					else
					{
						func_12(6);
						iLocal_485 = 0;
					}
				}
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_157);
			HUD::CLEAR_PRINTS();
			if (func_4())
			{
				if (func_2())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						iLocal_155 = 11;
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[0 /*7*/][0 /*3*/], Local_438[0 /*7*/][1 /*3*/], fLocal_453[0], 0, 1, 0))
					{
						iLocal_155 = 6;
					}
					else
					{
						iLocal_155 = 5;
					}
				}
				else
				{
					iLocal_155 = 9;
				}
			}
			iLocal_156 = 0;
			break;
	}
}

void func_43()//Position - 0x17A6
{
	func_17();
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_146(&iLocal_157);
			func_12(2);
			iLocal_156 = 1;
			break;
		
		case 1:
			func_20();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				func_44(2);
				iLocal_156 = 2;
			}
			else if (!func_4())
			{
				iLocal_156 = 2;
			}
			else if (!func_2())
			{
				iLocal_156 = 2;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_187, 0))
			{
				iLocal_155 = 8;
			}
			else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_187, Local_158.f_4))
			{
				iLocal_155 = 9;
			}
			else
			{
				iLocal_155 = 5;
			}
			iLocal_156 = 0;
			break;
	}
}

void func_44(int iParam0)//Position - 0x184B
{
	HUD::CLEAR_THIS_PRINT(Local_457[iParam0 /*3*/].f_2);
}

void func_45()//Position - 0x1860
{
	func_17();
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_146(&iLocal_157);
			if (func_16(5) && (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				func_12(5);
			}
			iLocal_156 = 1;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[1 /*7*/][0 /*3*/], Local_438[1 /*7*/][1 /*3*/], fLocal_453[1], 0, 1, 0))
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 150f) && !GlobalFunc_111())
				{
					iLocal_156 = 2;
				}
				else if (func_16(5) && !GlobalFunc_111())
				{
					func_12(5);
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				func_239(0);
				if (func_4())
				{
					if (func_2())
					{
						iLocal_155 = 5;
					}
					else
					{
						iLocal_155 = 9;
					}
				}
				else if (GlobalFunc_115(iLocal_187))
				{
					iLocal_155 = 8;
				}
				else
				{
					func_11(3, 0);
					iLocal_155 = 10;
				}
				iLocal_156 = 0;
			}
			break;
		
		case 2:
			GlobalFunc_130(&uLocal_171);
			GlobalFunc_7108(&(Local_158.f_4));
			func_46();
			break;
	}
}

void func_46()//Position - 0x1978
{
	func_47(71, 0);
	func_435();
}

void func_47(int iParam0, bool bParam1)//Position - 0x198B
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
	GlobalFunc_9164(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	GlobalFunc_11302();
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
































































































































































































void func_239(bool bParam0)//Position - 0x25E08
{
	if (bParam0)
	{
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_158.f_4, 0, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_158.f_4, 1);
	}
	else
	{
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_158.f_4, 1, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_158.f_4, 0);
	}
}


void func_241()//Position - 0x25E60
{
	if (MISC::GET_GAME_TIMER() > iLocal_421)
	{
		if (GlobalFunc_10638(&uLocal_250, 49, "BAR3CAU", "BAR3C_P1", 9, 1, 0, 0, 0))
		{
			GlobalFunc_11077(2, "Delivered vehicle", 1, 0, 0, 1);
			iLocal_456 = 1;
			iLocal_155 = 7;
			iLocal_156 = 0;
		}
	}
}
































































void func_305()//Position - 0x2B353
{
	func_17();
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_146(&iLocal_157);
			if (!iLocal_419)
			{
				iLocal_422 = MISC::GET_GAME_TIMER();
			}
			iLocal_156 = 1;
			break;
		
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_156 = 2;
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_187, 0))
			{
				iLocal_156 = 2;
			}
			else if (func_2())
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[0 /*7*/][0 /*3*/], Local_438[0 /*7*/][1 /*3*/], fLocal_453[0], 0, 1, 0))
				{
					GlobalFunc_146(&iLocal_157);
					if (!iLocal_419)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_422) > 1000)
						{
							GlobalFunc_159("B3CTTHA", 15000);
							iLocal_419 = 1;
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[1 /*7*/][0 /*3*/], Local_438[1 /*7*/][1 /*3*/], fLocal_453[1], 0, 1, 0))
				{
					iLocal_155 = 10;
					iLocal_156 = 0;
				}
			}
			else
			{
				iLocal_156 = 2;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_155 = 11;
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_187, 0))
			{
				iLocal_155 = 8;
			}
			else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_187, Local_158.f_4))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[1 /*7*/][0 /*3*/], Local_438[1 /*7*/][1 /*3*/], fLocal_453[1], 0, 1, 0))
				{
					GlobalFunc_571(0, -1);
					if (!iLocal_180)
					{
						GlobalFunc_553(747);
					}
					func_239(1);
					iLocal_247 = 1;
					if (iLocal_456)
					{
						iLocal_155 = 7;
					}
					else
					{
						iLocal_421 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_155 = 12;
					}
				}
				else
				{
					iLocal_155 = 9;
				}
			}
			iLocal_156 = 0;
			break;
	}
}




void func_309()//Position - 0x2B620
{
	struct<3> Var0;
	
	func_17();
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_146(&iLocal_157);
			iLocal_157 = GlobalFunc_2324(Local_181, 5, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (func_2())
			{
				iLocal_437 = 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					func_12(1);
					iLocal_485 = 0;
				}
				else
				{
					iLocal_485 = 1;
				}
			}
			iLocal_156 = 1;
			break;
		
		case 1:
			func_20();
			if (!func_4())
			{
				iLocal_156 = 2;
			}
			else if (!func_2())
			{
				if (func_3())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[1 /*7*/][0 /*3*/], Local_438[1 /*7*/][1 /*3*/], fLocal_453[1], 0, 0, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(Local_158.f_4))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(Local_158.f_4, 1) };
							if (Var0.f_2 < 6.7f)
							{
								GlobalFunc_146(&iLocal_157);
								iLocal_155 = 12;
								iLocal_156 = 0;
							}
						}
					}
					else
					{
						iLocal_156 = 2;
					}
				}
				else
				{
					iLocal_156 = 2;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_156 = 2;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[0 /*7*/][0 /*3*/], Local_438[0 /*7*/][1 /*3*/], fLocal_453[0], 1, 1, 0))
			{
				iLocal_156 = 2;
			}
			else if (iLocal_485)
			{
				if (!GlobalFunc_111())
				{
					iLocal_485 = 0;
					func_12(1);
				}
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_157);
			HUD::CLEAR_PRINTS();
			iLocal_156 = 0;
			if (!func_4())
			{
				iLocal_155 = 8;
			}
			else if (!func_2())
			{
				if (func_3() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[0 /*7*/][0 /*3*/], Local_438[0 /*7*/][1 /*3*/], fLocal_453[0], 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(Local_158.f_4))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(Local_158.f_4, 1) };
						if (Var0.f_2 < 6.7f)
						{
							iLocal_155 = 12;
						}
					}
					else
					{
						iLocal_156 = 2;
					}
				}
				else
				{
					iLocal_155 = 9;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_158.f_4, Local_438[0 /*7*/][0 /*3*/], Local_438[0 /*7*/][1 /*3*/], fLocal_453[0], 0, 1, 0))
			{
				iLocal_155 = 6;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_155 = 11;
			}
			break;
	}
}


void func_311()//Position - 0x2B88A
{
	func_17();
	switch (iLocal_156)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (iLocal_247)
			{
				if (!func_4())
				{
					func_12(6);
					GlobalFunc_146(&iLocal_157);
					iLocal_157 = GlobalFunc_5743(iLocal_187, 1, 5);
				}
				else if (func_2())
				{
					func_313(4);
					iLocal_485 = 0;
					GlobalFunc_574(748, 0);
					GlobalFunc_11077(1, "Start of towing stage", 0, 0, 0, 1);
					GlobalFunc_146(&iLocal_157);
					iLocal_155 = 5;
					iLocal_156 = 0;
				}
				else
				{
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111())
					{
						func_12(4);
						iLocal_485 = 0;
					}
					else
					{
						iLocal_485 = 1;
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_157))
					{
						iLocal_157 = GlobalFunc_5743(Local_158.f_4, 1, 5);
					}
					iLocal_156 = 1;
				}
			}
			else if (func_4())
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_157))
				{
					iLocal_157 = GlobalFunc_5743(Local_158.f_4, 1, 5);
				}
				iLocal_247 = 1;
			}
			break;
		
		case 1:
			if (((!iLocal_418 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -458.11f, -1725.3f, 17.67f, -456.71f, -1701.81f, 22f, 17.5f, 0, 1, 0)) && !func_2()) && !func_3())
			{
				GlobalFunc_159("B3CTTHB", -1);
				iLocal_418 = 1;
			}
			if (func_2())
			{
				GlobalFunc_574(748, 0);
				GlobalFunc_11077(1, "Start of towing stage", 0, 0, 0, 1);
				iLocal_156 = 2;
				iLocal_437 = 1;
			}
			else if (!func_4())
			{
				iLocal_437 = 0;
				iLocal_156 = 2;
			}
			else if (iLocal_485)
			{
				if (!GlobalFunc_111())
				{
					func_12(4);
					iLocal_485 = 0;
				}
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_157);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			iLocal_156 = 0;
			if (func_4())
			{
				iLocal_155 = 5;
			}
			else
			{
				iLocal_155 = 8;
			}
			break;
	}
}


void func_313(int iParam0)//Position - 0x2BA8F
{
	if (Local_457[iParam0 /*3*/] == -1)
	{
	}
	else
	{
		Local_457[iParam0 /*3*/].f_1 = Local_457[iParam0 /*3*/];
	}
}

void func_314()//Position - 0x2BAB5
{
	switch (iLocal_156)
	{
		case 0:
			func_5(0);
			if (func_4())
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
				func_317();
				if (func_2())
				{
					func_313(4);
					GlobalFunc_146(&iLocal_157);
					iLocal_247 = 1;
					iLocal_416 = 1;
					iLocal_155 = 5;
					iLocal_156 = 0;
				}
				else
				{
					func_12(4);
					GlobalFunc_146(&iLocal_157);
					iLocal_157 = GlobalFunc_5743(Local_158.f_4, 1, 5);
					iLocal_247 = 1;
					iLocal_416 = 1;
					iLocal_156 = 1;
				}
			}
			else
			{
				func_17();
				if (!iLocal_415 && (MISC::GET_GAME_TIMER() - iLocal_421) > 8000)
				{
					if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", "BAR3C_MUTT", 7, 0, 0, 0))
					{
						iLocal_415 = 1;
					}
				}
				else if (!iLocal_416 && (MISC::GET_GAME_TIMER() - iLocal_421) > 120000)
				{
					if (!func_316())
					{
						if (GlobalFunc_10664(&uLocal_250, 49, "BAR3CAU", "BAR3C_HC", 7, 0, 0, 1))
						{
							iLocal_416 = 1;
						}
					}
				}
				else if (!iLocal_417 && (MISC::GET_GAME_TIMER() - iLocal_421) > 160000)
				{
					if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", "BAR3C_TOW", 7, 0, 0, 0))
					{
						iLocal_417 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_247)
			{
				if (!func_4())
				{
					func_12(6);
					GlobalFunc_146(&iLocal_157);
					iLocal_157 = GlobalFunc_5743(iLocal_187, 1, 5);
					iLocal_247 = 0;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -417.58f, -1723.81f, 15.42f, -473.6f, -1705.96f, 26.95f, 49f, 0, 1, 0))
				{
					iLocal_156 = 2;
				}
				else if (func_2())
				{
					iLocal_156 = 2;
				}
			}
			else if (func_4())
			{
				func_44(6);
				GlobalFunc_146(&iLocal_157);
				iLocal_157 = GlobalFunc_5743(Local_158.f_4, 1, 5);
				iLocal_247 = 1;
			}
			func_17();
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			iLocal_156 = 0;
			if (func_4())
			{
				if (func_2())
				{
					GlobalFunc_574(748, 0);
					GlobalFunc_11077(1, "Start of towing stage", 0, 0, 0, 1);
					iLocal_155 = 5;
				}
				else
				{
					iLocal_155 = 4;
				}
				iLocal_247 = 1;
			}
			func_17();
			break;
	}
}


int func_316()//Position - 0x2BD02
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
		{
			return 1;
		}
	}
	iLocal_249 = 0;
	while (iLocal_249 <= 7)
	{
		if (!Local_190[iLocal_249 /*7*/].f_6 && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_190[iLocal_249 /*7*/], 8f))
		{
			return 1;
		}
		iLocal_249++;
	}
	return 0;
}

void func_317()//Position - 0x2BD83
{
	if (!iLocal_248)
	{
		GlobalFunc_10606(0f, 0f, 0f, 0f, 0, 145);
		iLocal_248 = 1;
	}
}


























void func_343()//Position - 0x2E496
{
	switch (iLocal_156)
	{
		case 0:
			iLocal_427 = 0;
			bLocal_426 = false;
			if (GlobalFunc_10638(&uLocal_250, 49, "BAR3CAU", "BAR3C_NG", 9, 1, 0, 0, 0))
			{
				iLocal_156 = 1;
			}
			break;
		
		case 1:
			func_5(0);
			func_17();
			if (func_4())
			{
				func_317();
				if (func_2())
				{
					func_313(3);
					func_313(4);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
					{
						iLocal_155 = 5;
						iLocal_156 = 0;
					}
					else
					{
						iLocal_155 = 11;
						iLocal_156 = 0;
					}
				}
				else
				{
					iLocal_155 = 4;
					iLocal_156 = 0;
					func_313(3);
				}
			}
			else if (!GlobalFunc_111())
			{
				iLocal_156 = 2;
			}
			break;
		
		case 2:
			if (!func_4())
			{
				func_17();
				func_12(3);
				GlobalFunc_146(&iLocal_157);
				iLocal_157 = GlobalFunc_5743(Local_158.f_4, 1, 5);
				iLocal_416 = 0;
				iLocal_421 = MISC::GET_GAME_TIMER();
				iLocal_156 = 0;
				iLocal_155 = 3;
			}
			else
			{
				iLocal_155 = 4;
				iLocal_156 = 0;
				func_313(3);
			}
			break;
	}
}

void func_344()//Position - 0x2E581
{
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_79(500, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
			if (func_4())
			{
				GlobalFunc_574(748, 0);
				func_313(3);
				func_313(4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_158.f_4, 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_158.f_4, 0);
				if (func_2())
				{
					iLocal_156 = 0;
					iLocal_155 = 5;
				}
				else
				{
					iLocal_156 = 0;
					iLocal_155 = 4;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_158.f_4, 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_158.f_4, 0);
				bLocal_426 = false;
				iLocal_423 = 0;
				iLocal_156 = 1;
			}
			break;
		
		case 1:
			if (((!bLocal_426 && iLocal_423 != 0) && (iLocal_424 > 0 && iLocal_424 < 4)) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 75))
			{
				bLocal_426 = true;
			}
			switch (iLocal_423)
			{
				case 0:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BARRY3C_IGNITION_FAIL", 0) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_428))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_158.f_4, -1) == PLAYER::PLAYER_PED_ID())
						{
							if (!iLocal_168)
							{
								VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_158.f_4);
								iLocal_168 = 1;
							}
							iLocal_424 = 0;
							uLocal_425 = AUDIO::GET_SOUND_ID();
							iLocal_423 = 2;
						}
					}
					break;
				
				case 2:
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_158.f_4, -1) == PLAYER::PLAYER_PED_ID() && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4))
					{
						if (iLocal_424 == 3)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_429);
							TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_loop", 8f, -8f, 8000, 9, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_429);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_429);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_429);
							iLocal_420 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_423 = 3;
						}
						else if (iLocal_424 == 2)
						{
							if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", "BAR3C_C1", 7, 0, 0, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_429);
								TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_loop", 8f, -8f, (1200 + iLocal_424 * 250), 9, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_429);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_429);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_429);
								iLocal_420 = MISC::GET_GAME_TIMER() + 2000;
								iLocal_423 = 3;
							}
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_429);
							TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_loop", 8f, -8f, (1200 + iLocal_424 * 250), 9, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_428, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_429);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_429);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_429);
							iLocal_420 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_423 = 3;
						}
					}
					break;
				
				case 3:
					if (MISC::GET_GAME_TIMER() > iLocal_420)
					{
						if (iLocal_424 == 4)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_425, "IGNITION_FAIL", Local_158.f_4, "BARRY_03_SOUNDSET", 0, 0);
							AUDIO::SET_VARIABLE_ON_SOUND(uLocal_425, "HOLD TIME", 3f);
							iLocal_420 = MISC::GET_GAME_TIMER() + 9100;
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_425, "IGNITION_FAIL", Local_158.f_4, "BARRY_03_SOUNDSET", 0, 0);
							AUDIO::SET_VARIABLE_ON_SOUND(uLocal_425, "HOLD TIME", (SYSTEM::TO_FLOAT((1200 + iLocal_424 * 250)) / 1000f));
							iLocal_420 = (MISC::GET_GAME_TIMER() + iLocal_424 * 250) + 1200 + 766;
						}
						iLocal_423 = 4;
					}
					break;
				
				case 4:
					if (MISC::GET_GAME_TIMER() > iLocal_420)
					{
						if (bLocal_426)
						{
							iLocal_423 = 6;
						}
						else
						{
							iLocal_424++;
							if (iLocal_424 == 4)
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_428, "franklinfailingtostartcar_slamwheel", 1000f, -8f, 3300, 0, 0, 0, 0, 0);
								iLocal_420 = MISC::GET_GAME_TIMER() + 330;
								iLocal_423 = 5;
							}
							else
							{
								iLocal_423 = 2;
							}
						}
					}
					break;
				
				case 5:
					if (MISC::GET_GAME_TIMER() > iLocal_420)
					{
						VEHICLE::START_VEHICLE_HORN(Local_158.f_4, 500, MISC::GET_HASH_KEY("NORMAL"), 0);
						iLocal_420 = MISC::GET_GAME_TIMER() + 2000;
						iLocal_423 = 8;
					}
					break;
				
				case 6:
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", "BAR3C_C2", 7, 0, 0, 0))
							{
								iLocal_420 = MISC::GET_GAME_TIMER();
								iLocal_423 = 7;
							}
						}
						else
						{
							iLocal_420 = MISC::GET_GAME_TIMER();
							iLocal_423 = 7;
						}
					}
					break;
				
				case 7:
					if (MISC::GET_GAME_TIMER() > iLocal_420)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						iLocal_423 = 8;
					}
					break;
				
				case 8:
					iLocal_420 = MISC::GET_GAME_TIMER();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_156 = 2;
					break;
			}
			break;
		
		case 2:
			if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_420) > 2500)
			{
				iLocal_156 = 0;
				iLocal_155 = 2;
			}
			break;
	}
}


void func_346()//Position - 0x2EAC7
{
	switch (iLocal_156)
	{
		case 0:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (func_4())
				{
					func_317();
					if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", "BAR3C_C2", 7, 0, 0, 0))
					{
						if (func_2())
						{
							GlobalFunc_574(748, 0);
							func_313(3);
							func_313(4);
							iLocal_155 = 5;
							iLocal_156 = 0;
						}
						else
						{
							func_313(3);
							iLocal_155 = 4;
							iLocal_156 = 0;
						}
					}
				}
				else
				{
					iLocal_157 = GlobalFunc_5743(Local_158.f_4, 1, 5);
					func_12(0);
					iLocal_156 = 1;
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BARRY3C_IGNITION_FAIL", 0);
				}
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 0))
			{
				iLocal_156 = 2;
			}
			else if (func_4())
			{
				func_317();
				if (GlobalFunc_10618(&uLocal_250, "BAR3CAU", "BAR3C_C2", 7, 0, 0, 0))
				{
					if (func_2())
					{
						GlobalFunc_574(748, 0);
						func_313(3);
						func_313(4);
						iLocal_155 = 5;
						iLocal_156 = 0;
					}
					else
					{
						func_313(3);
						iLocal_155 = 4;
						iLocal_156 = 0;
					}
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_146(&iLocal_157);
			iLocal_155 = 1;
			iLocal_156 = 0;
			break;
	}
}







int func_353()//Position - 0x2EE24
{
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_158.f_4))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_158.f_4))
		{
			sLocal_486 = "B3CVHDEST";
			iLocal_156 = 0;
			iLocal_155 = 13;
			return 1;
		}
		else if (iLocal_168)
		{
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_158.f_4))
			{
				if (iLocal_165)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_169) > 7000)
					{
						sLocal_486 = "B3CVHSTUCK";
						iLocal_156 = 0;
						iLocal_155 = 13;
						return 1;
					}
				}
				else
				{
					iLocal_165 = 1;
					iLocal_169 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_165 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_187))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_187) && iLocal_456 == 0)
		{
			if (func_3())
			{
				sLocal_486 = "B3CCBDEST";
			}
			else
			{
				sLocal_486 = "B3CTWDEST";
			}
			iLocal_156 = 0;
			iLocal_155 = 13;
			return 1;
		}
		else if (iLocal_167 && iLocal_456 == 0)
		{
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_187))
			{
				if (iLocal_166)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_170) > 7000)
					{
						if (func_3())
						{
							sLocal_486 = "B3CCBSTUCK";
						}
						else
						{
							sLocal_486 = "B3CTWSTUCK";
						}
						iLocal_156 = 0;
						iLocal_155 = 13;
						return 1;
					}
				}
				else
				{
					iLocal_166 = 1;
					iLocal_170 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_166 = 0;
			}
		}
	}
	return 0;
}

void func_354()//Position - 0x2EF4F
{
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_146(&iLocal_157);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_486))
			{
				sLocal_486 = "DEFAULT";
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_486, "DEFAULT"))
			{
				func_437(1);
			}
			else
			{
				func_371(sLocal_486, 1);
			}
			iLocal_156 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if ((GlobalFunc_115(Local_158.f_4) && GlobalFunc_115(iLocal_187)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_158.f_4, iLocal_187))
				{
					VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_158.f_4);
				}
				func_355();
				func_435();
			}
			break;
	}
}

void func_355()//Position - 0x2EFE5
{
	if (GlobalFunc_115(Local_158.f_4))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_158.f_4, 0);
	}
	GlobalFunc_131(&iLocal_187);
	GlobalFunc_131(&(Local_158.f_4));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	GlobalFunc_9166(0);
	func_356(&Local_80, 1, 0, 0);
}

void func_356(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2F027
{
	GlobalFunc_7101(uParam0, iParam1);
	func_360(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}




void func_360(var uParam0, bool bParam1)//Position - 0x2F0D2
{
	func_361(&(uParam0->f_35), bParam1);
}

void func_361(var uParam0, bool bParam1)//Position - 0x2F0E4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			GlobalFunc_7108(uParam0[iVar0]);
		}
		else
		{
			GlobalFunc_131(uParam0[iVar0]);
		}
		iVar0++;
	}
}










void func_371(char* sParam0, bool bParam1)//Position - 0x2F366
{
	GlobalFunc_509(sParam0);
	func_437(bParam1);
}


void func_373(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2F3B9
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



















void func_392(bool bParam0)//Position - 0x2FE79
{
	if (bParam0)
	{
		if (GlobalFunc_7698())
		{
			iLocal_188 = GlobalFunc_622();
			if (((iLocal_188 != joaat("towtruck2") && iLocal_188 != joaat("cargobob")) && iLocal_188 != joaat("cargobob2")) && iLocal_188 != joaat("cargobob3"))
			{
				iLocal_188 = joaat("towtruck");
			}
		}
		else
		{
			iLocal_188 = joaat("towtruck");
		}
		if (iLocal_188 == joaat("towtruck") || iLocal_188 == joaat("towtruck2"))
		{
			GlobalFunc_5116(-1237.962f, -1035.194f, 7.2466f, 110f, 1, 0);
		}
		else
		{
			GlobalFunc_5116(-1074.134f, -1250.292f, 4.5293f, 199.5f, 1, 0);
		}
	}
	func_400();
	func_399();
	GlobalFunc_146(&iLocal_157);
	iLocal_155 = 7;
	iLocal_156 = 0;
	func_313(0);
	func_313(1);
	func_313(2);
	func_313(3);
	func_313(4);
	func_313(5);
	func_313(6);
	func_313(8);
	func_313(7);
	func_313(7);
	func_398(-1151.36f, -1243.57f, 6.52f, 25.18f);
	if (bParam0)
	{
		if (iLocal_188 == joaat("towtruck") || iLocal_188 == joaat("towtruck2"))
		{
			func_395(-1237.962f, -1035.194f, 7.2466f, 110f, 0);
		}
		else
		{
			func_395(-1074.134f, -1250.292f, 4.5293f, 199.5f, 0);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(iLocal_187, -1, 0);
	}
	else if (iLocal_188 == joaat("towtruck") || iLocal_188 == joaat("towtruck2"))
	{
		func_395(-1237.962f, -1035.194f, 7.2466f, 110f, 1);
	}
	else
	{
		func_395(-1074.134f, -1250.292f, 4.5293f, 199.5f, 1);
	}
	GlobalFunc_79(500, 1);
}



void func_395(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x30124
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam4)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_187))
	{
		if (iLocal_167)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_187);
			iLocal_167 = 0;
		}
		GlobalFunc_7108(&iLocal_187);
	}
	STREAMING::REQUEST_MODEL(iLocal_188);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_188))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_187 = VEHICLE::CREATE_VEHICLE(iLocal_188, Param0, fParam3, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_188);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_187, iLocal_189);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_187);
	if (bParam4)
	{
		func_396(PLAYER::PLAYER_PED_ID(), iLocal_187, -1);
	}
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_187, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_187, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_187, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_187))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_187);
		iLocal_167 = 1;
	}
}

void func_396(int iParam0, int iParam1, int iParam2)//Position - 0x301DE
{
	if (GlobalFunc_4950(uParam0))
	{
		if (GlobalFunc_115(iParam1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(uParam0), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0, 0);
			}
			PED::SET_PED_INTO_VEHICLE(uParam0, iParam1, iParam2);
		}
	}
}


void func_398(struct<3> Param0, float fParam3)//Position - 0x30240
{
	STREAMING::REQUEST_MODEL(Local_158.f_5);
	if (ENTITY::DOES_ENTITY_EXIST(Local_158.f_4))
	{
		if (iLocal_168)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_158.f_4);
			iLocal_168 = 0;
		}
	}
	while (!STREAMING::HAS_MODEL_LOADED(Local_158.f_5))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_130(&uLocal_171);
	GlobalFunc_7108(&(Local_158.f_4));
	Local_158.f_4 = VEHICLE::CREATE_VEHICLE(Local_158.f_5, Param0, fParam3, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_158.f_5);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_158.f_4);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_158.f_4, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_158.f_4, 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_158.f_4, 1);
	VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_158.f_4, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_158.f_4, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_158.f_4, 1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_158.f_4))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_158.f_4);
		iLocal_168 = 1;
	}
	uLocal_171 = OBJECT::CREATE_OBJECT(iLocal_178, Param0 + Local_172, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_171, Local_158.f_4, 0, Local_172, Local_175, 0, 0, 0, 0, 2, 1);
}

void func_399()//Position - 0x3032C
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
	}
}

void func_400()//Position - 0x3035E
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (GlobalFunc_111())
	{
		GlobalFunc_4956();
	}
	GlobalFunc_6685(0);
}









void func_409(bool bParam0)//Position - 0x30578
{
	if (bParam0)
	{
		if (GlobalFunc_7698())
		{
			iLocal_188 = GlobalFunc_622();
			if (((iLocal_188 != joaat("towtruck2") && iLocal_188 != joaat("cargobob")) && iLocal_188 != joaat("cargobob2")) && iLocal_188 != joaat("cargobob3"))
			{
				iLocal_188 = joaat("towtruck");
			}
		}
		else
		{
			iLocal_188 = joaat("towtruck");
		}
		if (iLocal_188 == joaat("towtruck") || iLocal_188 == joaat("towtruck2"))
		{
			GlobalFunc_5116(-1154.224f, -1234.31f, 5.7174f, 12.45f, 1, 0);
		}
		else
		{
			GlobalFunc_5116(-1148.183f, -1227.005f, 8.4468f, 19.2f, 1, 0);
		}
	}
	func_400();
	func_399();
	GlobalFunc_146(&iLocal_157);
	if (bParam0 && !Global_84544)
	{
		iLocal_456 = 1;
		iLocal_155 = 7;
	}
	else
	{
		iLocal_456 = 0;
		iLocal_421 = MISC::GET_GAME_TIMER() + 3000;
		iLocal_155 = 12;
	}
	iLocal_156 = 0;
	iLocal_249 = 0;
	while (iLocal_249 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_190[iLocal_249 /*7*/].f_4))
		{
			GlobalFunc_7108(&(Local_190[iLocal_249 /*7*/].f_4));
		}
		iLocal_249++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
	iLocal_415 = 1;
	iLocal_416 = 1;
	iLocal_417 = 1;
	func_313(0);
	func_313(1);
	func_11(2, 0);
	func_313(3);
	func_313(4);
	func_11(5, 0);
	func_11(6, 0);
	func_11(8, 0);
	func_11(7, 0);
	func_11(7, 0);
	func_398(-1151.36f, -1243.57f, 6.52f, 25.18f);
	if (bParam0)
	{
		if (iLocal_188 == joaat("towtruck") || iLocal_188 == joaat("towtruck2"))
		{
			func_395(-1154.224f, -1234.31f, 5.7174f, 12.45f, 0);
		}
		else
		{
			func_395(-1148.183f, -1227.005f, 8.4468f, 19.2f, 0);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(iLocal_187, -1, 0);
	}
	else if (iLocal_188 == joaat("towtruck") || iLocal_188 == joaat("towtruck2"))
	{
		func_395(-1154.224f, -1234.31f, 5.7174f, 12.45f, 1);
	}
	else
	{
		func_395(-1148.183f, -1227.005f, 8.4468f, 19.2f, 1);
	}
	GlobalFunc_11077(2, "Delivered vehicle", 1, 0, 0, 1);
}

void func_410(bool bParam0)//Position - 0x307BF
{
	if (bParam0)
	{
		if (GlobalFunc_7698())
		{
			iLocal_188 = GlobalFunc_622();
			if (((iLocal_188 != joaat("towtruck2") && iLocal_188 != joaat("cargobob")) && iLocal_188 != joaat("cargobob2")) && iLocal_188 != joaat("cargobob3"))
			{
				iLocal_188 = joaat("towtruck");
			}
		}
		else
		{
			iLocal_188 = joaat("towtruck");
		}
		GlobalFunc_5116(Local_158, Local_158.f_3, 1, 0);
	}
	if (iLocal_188 == joaat("towtruck"))
	{
		Local_487 = { -462.0807f, -1711.68f, 17.6454f };
		fLocal_490 = 277.92f;
	}
	else if (iLocal_188 == joaat("towtruck2"))
	{
		Local_487 = { -463.5672f, -1712.284f, 17.6392f };
		fLocal_490 = 272.29f;
	}
	else if ((iLocal_188 == joaat("cargobob") || iLocal_188 == joaat("cargobob2")) || iLocal_188 == joaat("cargobob3"))
	{
		Local_487 = { -455.4628f, -1712.282f, 17.642f };
		fLocal_490 = 0.7f;
	}
	if (bParam0)
	{
		GlobalFunc_5116(Local_487, fLocal_490, 1, 0);
	}
	else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_158, 1, 0, 0, 1);
	}
	func_400();
	func_399();
	GlobalFunc_146(&iLocal_157);
	iLocal_155 = 5;
	iLocal_156 = 0;
	iLocal_249 = 0;
	while (iLocal_249 <= 7)
	{
		GlobalFunc_7108(&(Local_190[iLocal_249 /*7*/].f_4));
		iLocal_249++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
	iLocal_430 = 2;
	iLocal_436 = 0;
	iLocal_415 = 1;
	iLocal_416 = 1;
	iLocal_417 = 1;
	iLocal_456 = 0;
	func_313(0);
	func_11(1, 0);
	func_11(2, 0);
	func_313(3);
	func_313(4);
	func_11(5, 0);
	func_11(6, 0);
	func_11(8, 0);
	func_11(7, 0);
	func_11(7, 0);
	func_398(Local_158, Local_158.f_3);
	if (bParam0)
	{
		func_395(Local_487, fLocal_490, 0);
		if (GlobalFunc_115(iLocal_187) && iLocal_188 == joaat("towtruck"))
		{
			VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_187, 0f);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(iLocal_187, -1, 0);
	}
	else
	{
		func_395(Local_487, fLocal_490, 1);
		if (GlobalFunc_115(iLocal_187) && iLocal_188 == joaat("towtruck"))
		{
			VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_187, 0f);
		}
	}
	if (iLocal_188 == joaat("towtruck") || iLocal_188 == joaat("towtruck2"))
	{
		while (!func_2())
		{
			SYSTEM::WAIT(0);
		}
	}
	GlobalFunc_11077(1, "Start of towing stage", 0, 0, 0, 1);
}

void func_411(int iParam0, int iParam1, int iParam2)//Position - 0x30A3A
{
	func_412(0, 0, iParam2, 1);
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

void func_412(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30A6E
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
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_420(bool bParam0)//Position - 0x30D18
{
	if (bParam0)
	{
		GlobalFunc_5116(Local_158, Local_158.f_3, 1, 0);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	func_400();
	func_399();
	GlobalFunc_146(&iLocal_157);
	iLocal_155 = 1;
	iLocal_156 = 0;
	bLocal_179 = false;
	iLocal_430 = 2;
	iLocal_436 = 0;
	iLocal_415 = 0;
	iLocal_416 = 0;
	iLocal_417 = 0;
	iLocal_456 = 0;
	func_313(0);
	func_11(1, 0);
	func_11(2, 0);
	func_11(3, 0);
	func_11(4, 0);
	func_11(5, 0);
	func_11(6, 0);
	func_11(7, 0);
	func_11(7, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_187))
	{
		GlobalFunc_7108(&iLocal_187);
	}
	iLocal_249 = 0;
	while (iLocal_249 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_190[iLocal_249 /*7*/].f_4))
		{
			GlobalFunc_7108(&(Local_190[iLocal_249 /*7*/].f_4));
		}
		Local_190[iLocal_249 /*7*/].f_6 = 0;
		iLocal_249++;
	}
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_158.f_4))
		{
			func_398(Local_158, Local_158.f_3);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(Local_158.f_4, -1, 0);
	}
	else
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_158, 1, 0, 0, 1);
		}
		func_398(Local_158, Local_158.f_3);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_158.f_4, -1);
	}
}



void func_423()//Position - 0x30EA3
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	PATHFIND::SET_GPS_DISABLED_ZONE(-1188.409f, -1233.006f, 0f, -1165.782f, -1214.378f, 15f);
	HUD::REQUEST_ADDITIONAL_TEXT("BARR3C", 0);
	Local_181 = { -1152.43f, -1238.824f, 5.9752f };
	uLocal_141 = func_431();
	uLocal_184[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1156.9f, -1274f, 0f, -1141.5f, -1239.6f, 8f, 0, 1, 1, 1);
	uLocal_184[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1177f, -1292f, 0f, -1160f, -1273.3f, 8f, 0, 1, 1, 1);
	Local_158.f_5 = joaat("emperor2");
	Local_158 = { -468.9f, -1713.06f, 18.21f };
	Local_158.f_3 = -76.2f;
	Local_190[0 /*7*/] = { func_430(-552.67f, -1698.84f, 18.16f, 205.7f) };
	Local_190[1 /*7*/] = { func_430(-317.14f, -1540.72f, 26.67f, 336.5f) };
	Local_190[2 /*7*/] = { func_430(-104.41f, -1984.91f, 17.02f, 171.6f) };
	Local_190[3 /*7*/] = { func_430(-586.69f, -1774.59f, 21.67f, 145.8f) };
	Local_190[4 /*7*/] = { func_430(-1207.9f, -1334.87f, 3.77f, 204.1f) };
	Local_190[5 /*7*/] = { func_430(-1253.67f, -1210.3f, 6.03f, 10.7f) };
	Local_190[6 /*7*/] = { func_430(-426.56f, -1717.89f, 18.2f, 43.5f) };
	Local_190[7 /*7*/] = { func_430(401.64f, -1633.3f, 28.29f, 231.5f) };
	if (GlobalFunc_115(Local_158.f_4))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_158.f_4, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_158.f_4, 0);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_158.f_4, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_158.f_4, 1);
	}
	STREAMING::REQUEST_MODEL(joaat("towtruck"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_428);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_250, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	GlobalFunc_173(&uLocal_250, 3, 0, "BARRY", 0, 1);
	iLocal_418 = 0;
	func_427();
	sLocal_486 = "DEFAULT";
	iLocal_436 = 0;
	func_426();
	iLocal_430 = 2;
	Local_438[0 /*7*/][0 /*3*/] = { -1161.11f, -1217.32f, 5.65f };
	Local_438[0 /*7*/][1 /*3*/] = { -1147.86f, -1251.6f, 10.01f };
	fLocal_453[0] = 10.5f;
	Local_438[1 /*7*/][0 /*3*/] = { -1147.14f, -1253.07f, 5.65f };
	Local_438[1 /*7*/][1 /*3*/] = { -1161.97f, -1216.69f, 10.98f };
	fLocal_453[1] = 12f;
	GlobalFunc_9621(49, 1, 0);
	iLocal_456 = 0;
	PATHFIND::SET_GPS_DISABLED_ZONE(-1132.88f, -1262.01f, 0f, -1102.43f, -1196.58f, 15f);
	GlobalFunc_9166(1);
}



void func_426()//Position - 0x313B9
{
	sLocal_431[0] = "BAR3C_Z1";
	sLocal_431[1] = "BAR3C_Z2";
	sLocal_431[2] = "BAR3C_Z3";
	sLocal_431[3] = "BAR3C_Z4";
}

void func_427()//Position - 0x313E9
{
	Local_457[0 /*3*/] = { GlobalFunc_2371("B3CENTV", 1) };
	Local_457[1 /*3*/] = { GlobalFunc_2371("B3CDELV", 1) };
	Local_457[2 /*3*/] = { GlobalFunc_2371("B3CWAN1", -1) };
	Local_457[3 /*3*/] = { GlobalFunc_2371("B3CNOGO", 1) };
	Local_457[4 /*3*/] = { GlobalFunc_2371("B3CREVRS", 1) };
	Local_457[5 /*3*/] = { GlobalFunc_2371("B3CLEAVE", 1) };
	Local_457[6 /*3*/] = { GlobalFunc_2371("B3CRTTT", 1) };
	Local_457[7 /*3*/] = { GlobalFunc_2371("B3CGBTB", 1) };
	Local_457[8 /*3*/] = { GlobalFunc_2371("B3CRTCB", 1) };
}



struct<7> func_430(struct<3> Param0, float fParam3)//Position - 0x31541
{
	struct<7> Var0;
	
	Var0 = { Param0 };
	Var0.f_3 = fParam3;
	Var0.f_5 = joaat("towtruck");
	Var0.f_6 = 0;
	return Var0;
}

var func_431()//Position - 0x31569
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-564f, -1758.1f, 16.5f, -419.31f, -1649f, 23f, 0, 1, 1, 1);
}




void func_435()//Position - 0x315CF
{
	if (GlobalFunc_9162())
	{
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_356(&Local_80, 1, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_141, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_184[0], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_184[1], 0);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	func_355();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_437(bool bParam0)//Position - 0x316BF
{
	int iVar0;
	
	GlobalFunc_8958();
	if (!GlobalFunc_142())
	{
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
		if (Global_84542 == Global_89999)
		{
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_4++;
		}
		Global_84542 = Global_89999;
		if (bParam0)
		{
			GlobalFunc_7620(iVar0, 1, 0);
			GlobalFunc_9163(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_96440[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
			}
			GlobalFunc_9164(iVar0, 1, 1, 0);
		}
		Global_96440[iVar0 /*10*/].f_6 = 1;
	}
}





















