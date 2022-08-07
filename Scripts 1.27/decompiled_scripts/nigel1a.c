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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1000;
	var uLocal_29 = 1000;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	float fLocal_32 = 0f;
	struct<3> Local_33 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<61> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = 0;
	int iLocal_195 = 0;
	bool bLocal_196 = 0;
	bool bLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	bool bLocal_203 = 0;
	int iLocal_204 = 0;
	bool bLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_227[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246[5] = { 0, 0, 0, 0, 0 };
	int iLocal_252[5] = { 0, 0, 0, 0, 0 };
	int iLocal_258 = 0;
	float fLocal_259 = 0f;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	var uLocal_268 = 16;
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
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	struct<19> Local_433[5];
	struct<19> Local_529 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_548 = { 0, 0, 0, 0, 0, 0, 738282662, 0 } ;
	struct<6> Local_556 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_562 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_568 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_574[48] = "";
	char cLocal_580[32] = "";
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	char cLocal_588[32] = "";
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	char cLocal_596[32] = "";
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	struct<3> Local_604 = { 0, 0, 0 } ;
	struct<3> Local_607 = { 0, 0, 0 } ;
	struct<3> Local_610 = { 0, 0, 0 } ;
	struct<3> Local_613 = { 0, 0, 0 } ;
	struct<3> Local_616 = { 0, 0, 0 } ;
	struct<3> Local_619 = { 0, 0, 0 } ;
	struct<3> Local_622 = { 0, 0, 0 } ;
	struct<3> Local_625 = { 0, 0, 0 } ;
	struct<3> Local_628 = { 0, 0, 0 } ;
	int iLocal_631 = 0;
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
	sLocal_31 = "NULL";
	fLocal_32 = 0f;
	fLocal_36 = -0.0375f;
	fLocal_37 = 0.17f;
	fLocal_41 = 80f;
	fLocal_42 = 140f;
	fLocal_43 = 180f;
	iLocal_46 = 3;
	uLocal_91 = GlobalFunc_4946(64);
	uLocal_92 = GlobalFunc_4946(63);
	iLocal_93 = joaat("u_m_m_aldinapoli");
	iLocal_94 = joaat("premier");
	bLocal_194 = true;
	sLocal_266 = "NULL";
	sLocal_267 = "NIG1AAU";
	StringCopy(&Local_562, "", 24);
	StringCopy(&Local_568, "", 24);
	StringCopy(&cLocal_574, "", 24);
	StringCopy(&cLocal_580, "rcmnigel1a_band_groupies", 32);
	StringCopy(&cLocal_588, "rcmnigel1aig_1", 32);
	StringCopy(&cLocal_596, "rcmnigel1aig_3", 32);
	Local_113 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_113);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113.f_59))
	{
		PED::_DISPOSE_SYNCHRONIZED_SCENE(Local_113.f_59);
	}
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_577();
	}
	func_559();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_628, fLocal_259, 1, 0);
				GlobalFunc_10627(&iLocal_631, -590.5827f, 250.188f, 81.2377f, 266.6357f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				func_471(0, 0);
				break;
			
			case 1:
				GlobalFunc_4972(-554.1479f, 287.9976f, 81.1763f, 152.338f, 1, 0);
				GlobalFunc_10627(&iLocal_631, -590.5827f, 250.188f, 81.2377f, 266.6357f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				iLocal_179 = 1;
				iLocal_177 = 1;
				func_471(4, 0);
				break;
			
			case 2:
				GlobalFunc_4972(-462.2627f, -156.776f, 37.0557f, 112.4431f, 1, 0);
				func_471(6, 0);
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			func_467(PLAYER::PLAYER_PED_ID(), Local_628, fLocal_259, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_VSW", 0);
		func_451(Local_113.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_449();
			func_445();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
			switch (iLocal_110)
			{
				case 0:
					func_443();
					break;
				
				case 1:
					func_439();
					break;
				
				case 2:
					func_413();
					break;
				
				case 3:
					func_407();
					break;
				
				case 4:
					func_345();
					break;
				
				case 7:
					func_341();
					break;
				
				case 5:
					func_256();
					break;
				
				case 6:
					func_61();
					break;
				
				case 8:
					func_44();
					break;
				
				case 9:
					break;
				}
		}
		if (bLocal_194 == 0)
		{
			func_1(iLocal_111);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2F9
{
	if (iLocal_110 == iParam0)
	{
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 0);
		}
		if (iLocal_110 == 4)
		{
			SYSTEM::WAIT(500);
			func_38();
			iLocal_243 = (MISC::GET_GAME_TIMER() - 4000);
		}
		func_28(1, 1, 1);
		bLocal_194 = true;
		iLocal_195 = 0;
		if (iLocal_110 == 6)
		{
			GlobalFunc_79(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x353
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_4935();
		if (GlobalFunc_111())
		{
			GlobalFunc_4956();
		}
		HUD::CLEAR_PRINTS();
		switch (iLocal_110)
		{
			case 0:
				if (iLocal_112 == 1)
				{
					if (!GlobalFunc_188())
					{
						func_467(PLAYER::PLAYER_PED_ID(), -563.073f, 292.5788f, 86.5763f, 79.2186f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_195 == 0)
						{
							if (iLocal_111 == 1)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 13, 5000, 0, 0);
									iLocal_195 = 1;
								}
							}
						}
					}
					iLocal_112 = 2;
				}
				break;
			
			case 1:
				if (iLocal_112 == 1)
				{
					if (!GlobalFunc_188())
					{
						func_467(PLAYER::PLAYER_PED_ID(), -556.3416f, 283.2208f, 81.1763f, 328.4892f, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_195 == 0)
						{
							if (iLocal_111 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 13, 5000, 0, 0);
									iLocal_195 = 1;
								}
							}
						}
					}
					func_38();
					iLocal_112 = 2;
				}
				break;
			
			case 2:
				if (iLocal_112 == 1)
				{
					if (!GlobalFunc_188())
					{
						if (Local_529.f_10 < 12)
						{
							func_467(PLAYER::PLAYER_PED_ID(), -554.1479f, 287.9976f, 81.1763f, 152.338f, 0, 1);
						}
						if (iLocal_195 == 0)
						{
							if (iLocal_111 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_195 = 1;
								}
							}
						}
					}
					iLocal_214 = 1;
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[4 /*19*/].f_9))
					{
						if (GlobalFunc_6964(Local_433[4 /*19*/].f_9, 1785177548))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_433[4 /*19*/].f_9, -1000f, 1);
						}
						ENTITY::FREEZE_ENTITY_POSITION(Local_433[4 /*19*/].f_9, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_433[4 /*19*/].f_9);
						func_14(Local_433[4 /*19*/].f_9, PLAYER::PLAYER_PED_ID());
						Local_433[4 /*19*/].f_10 = 20;
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_529.f_9, 0);
						if (GlobalFunc_6964(Local_529.f_9, 1785177548))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_529.f_9, -1000f, 1);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_529.f_9);
						func_467(Local_529.f_9, -554.01f, 286.01f, 81.1762f, 27.18f, 0, 0);
						func_14(Local_529.f_9, PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CAN_RAGDOLL(Local_529.f_9, 1);
						if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_529.f_9)) >= 137.5f)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_529.f_9, 135);
						}
					}
					if (!GlobalFunc_188())
					{
						func_14(PLAYER::PLAYER_PED_ID(), Local_529.f_9);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					iLocal_181 = 1;
					Local_529.f_10 = 13;
					iLocal_260 = 4;
					func_38();
					iLocal_112 = 2;
				}
				break;
			
			case 3:
				if (iLocal_112 == 1)
				{
					if (!GlobalFunc_188())
					{
						if (OBJECT::DOES_PICKUP_EXIST(Local_548))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(Local_548))
							{
								Var0 = { OBJECT::GET_PICKUP_COORDS(Local_548) };
								Var0.f_2 = (Var0.f_2 + 1.5f);
								if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2)))
								{
									Var0.f_2 = (Var0.f_2 + 0.25f);
									fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									func_467(PLAYER::PLAYER_PED_ID(), Var0, fVar3, 0, 0);
									func_14(PLAYER::PLAYER_PED_ID(), Local_529.f_9);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
									SYSTEM::WAIT(0);
								}
							}
						}
					}
					GlobalFunc_841(&Local_548);
					if (!GlobalFunc_188())
					{
						if (iLocal_195 == 0)
						{
							if (iLocal_111 == 4)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_195 = 1;
								}
							}
						}
					}
					iVar4 = 0;
					while (iVar4 <= 4)
					{
						func_10(&(Local_433[iVar4 /*19*/].f_9), 1);
						iVar4++;
					}
					if (Local_529.f_10 != 21)
					{
						func_9();
						Local_529.f_10 = 21;
					}
					iLocal_260 = 5;
					func_38();
					iLocal_112 = 2;
				}
				break;
			
			case 4:
				if (iLocal_112 == 1)
				{
					if (!GlobalFunc_188())
					{
						func_467(PLAYER::PLAYER_PED_ID(), -462.2575f, -156.7884f, 37.0458f, 112.5754f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_195 == 0)
						{
							if (iLocal_111 == 5)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_195 = 1;
								}
							}
						}
					}
					func_38();
					SYSTEM::WAIT(0);
					iLocal_112 = 2;
				}
				break;
			
			case 5:
				if (GlobalFunc_116(0))
				{
					GlobalFunc_6685(0);
				}
				if (!iLocal_198)
				{
					iLocal_112 = 2;
				}
				else
				{
					while (GlobalFunc_111())
					{
						GlobalFunc_5744();
						GlobalFunc_4935();
						SYSTEM::WAIT(0);
					}
				}
				break;
			
			case 7:
				if (iLocal_112 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				break;
			
			default:
				break;
			}
	}
}







void func_9()//Position - 0x9CE
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
	{
		TASK::CLEAR_PED_TASKS(Local_529.f_9);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_529.f_9, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_529.f_9, 5, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 64, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 128, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 2, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 8, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 1, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 32, 0);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_529.f_9, 2f);
		if (GlobalFunc_6964(Local_529.f_9, 1785177548))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_529.f_9, -16f, 1);
		}
		TASK::OPEN_SEQUENCE_TASK(&uLocal_265);
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_529.f_9, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 1, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_265);
		TASK::TASK_PERFORM_SEQUENCE(Local_529.f_9, uLocal_265);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_265);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
	}
}

void func_10(var uParam0, bool bParam1)//Position - 0xAC2
{
	if (bParam1)
	{
		GlobalFunc_881(uParam0);
	}
	else
	{
		GlobalFunc_132(uParam0, 1, 0, 1);
	}
}




void func_14(int iParam0, int iParam1)//Position - 0xB88
{
	if (GlobalFunc_115(iParam0) && GlobalFunc_115(iParam1))
	{
		func_15(iParam0, iParam1);
	}
}

void func_15(int iParam0, int iParam1)//Position - 0xBAC
{
	var uVar0;
	
	uVar0 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
	ENTITY::SET_ENTITY_HEADING(iParam0, uVar0);
}













void func_28(int iParam0, int iParam1, int iParam2)//Position - 0xE24
{
	func_29(0, 0, iParam2, 1);
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

void func_29(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xE58
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_38()//Position - 0x110E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_433[iVar0 /*19*/].f_16 = 0;
		Local_433[iVar0 /*19*/].f_17 = 0;
		Local_433[iVar0 /*19*/].f_18 = 0;
		func_39(PLAYER::PLAYER_PED_ID(), Local_433[iVar0 /*19*/].f_9);
		iVar0++;
	}
	Local_529.f_16 = 0;
	Local_529.f_17 = 0;
	Local_529.f_18 = 0;
	func_39(PLAYER::PLAYER_PED_ID(), Local_529.f_9);
}

int func_39(int iParam0, int iParam1)//Position - 0x1178
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if (Local_48[iVar0 /*4*/].f_1 == iParam0 && Local_48[iVar0 /*4*/].f_2 == iParam1)
		{
			GlobalFunc_169(&(Local_48[iVar0 /*4*/]));
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}





void func_44()//Position - 0x12DF
{
	char* sVar0;
	
	sVar0 = 0;
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	switch (iLocal_112)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			func_57();
			switch (iLocal_215)
			{
				case 1:
					sVar0 = "NIG1A_F_01";
					break;
				
				case 0:
					break;
			}
			if (iLocal_215 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sVar0, 1);
			}
			iLocal_112 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (iLocal_261 != 12 && iLocal_261 != 13)
				{
					GlobalFunc_5129(-571.1343f, 271.7024f, 81.9336f, 132.6751f);
					GlobalFunc_5166(-575.523f, 269.2646f, 81.6734f, 83.1558f);
				}
				func_45(1);
				MISC::CLEAR_AREA(Local_610, 45f, 1, 0, 0, 0);
				func_577();
			}
			break;
	}
}

void func_45(bool bParam0)//Position - 0x13D8
{
	int iVar0;
	
	GlobalFunc_841(&Local_548);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
	{
		PED::SET_PED_KEEP_TASK(Local_529.f_9, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_529.f_9, 0);
		AUDIO::STOP_PED_SPEAKING(Local_529.f_9, 0);
	}
	func_10(&(Local_529.f_9), bParam0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[iVar0 /*19*/].f_9))
		{
			PED::SET_PED_KEEP_TASK(Local_433[iVar0 /*19*/].f_9, 1);
		}
		func_10(&(Local_433[iVar0 /*19*/].f_9), bParam0);
		iVar0++;
	}
	if (GlobalFunc_4947(Local_556))
	{
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_556, 1);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_556, 1);
	}
	GlobalFunc_7957(&Local_556, bParam0);
	GlobalFunc_7957(&iLocal_631, bParam0);
}












void func_57()//Position - 0x16A3
{
	GlobalFunc_846(&uLocal_174);
	GlobalFunc_846(&(Local_529.f_8));
	GlobalFunc_846(&(Local_548.f_2));
}


void func_59(int iParam0)//Position - 0x16E3
{
	if (iParam0 == 12 || iParam0 == 13)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1A_SCENE");
		}
	}
	else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("NIGEL_1A_SCENE");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1A_SCENE");
	}
}

int func_60(int iParam0, bool bParam1)//Position - 0x1746
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 12;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (INTERIOR::GET_INTERIOR_AT_COORDS(Var0) == iLocal_258)
	{
		iVar3 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		iVar5 = 0;
		while (iVar5 <= (13 - 1))
		{
			iVar4 = iVar5;
			if (iVar4 != 12)
			{
				if (iVar3 == iLocal_227[iVar4])
				{
					return iVar4;
				}
			}
			iVar5++;
		}
	}
	return 12;
}

void func_61()//Position - 0x17B5
{
	GlobalFunc_79(500, 1);
	func_62(96, 1);
	func_577();
}

void func_62(int iParam0, bool bParam1)//Position - 0x17D0
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


































































































































































































void func_256()//Position - 0x25EFC
{
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	func_322();
	func_272();
	switch (iLocal_112)
	{
		case 0:
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
				GlobalFunc_5744();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&uLocal_268, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			GlobalFunc_173(&uLocal_268, 3, 0, "NIGEL", 0, 1);
			iLocal_241 = MISC::GET_GAME_TIMER();
			iLocal_112 = 1;
			break;
		
		case 1:
			if (!iLocal_198)
			{
				if (GlobalFunc_2311(iLocal_241, 2500))
				{
					if (GlobalFunc_10638(&uLocal_268, 64, sLocal_267, "NIG1A_CP2", 11, 1, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 4f, 1);
						iLocal_198 = 1;
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_259(7);
				}
			}
			else if (!GlobalFunc_111())
			{
				if (GlobalFunc_1993())
				{
					if (GlobalFunc_890())
					{
						iLocal_198 = 0;
					}
					else
					{
						iLocal_112 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
				GlobalFunc_5744();
			}
			GlobalFunc_4935();
			func_259(6);
			break;
	}
}



void func_259(int iParam0)//Position - 0x26044
{
	iLocal_110 = iParam0;
	iLocal_112 = 0;
}













void func_272()//Position - 0x2672C
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_315(Local_433[iVar0 /*19*/].f_9, &(Local_433[iVar0 /*19*/].f_18), 1126825984);
		iVar0++;
	}
	if (Local_433[4 /*19*/].f_10 < 20)
	{
		if ((iLocal_260 != 0 || func_311(Local_433[4 /*19*/].f_9, Local_433[4 /*19*/].f_18, 1, 1101004800, 1090519040, 1097859072)) || (iLocal_261 == 0 && PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)))
		{
			Local_433[4 /*19*/].f_10 = 20;
			GlobalFunc_7090(Local_433[4 /*19*/].f_9, 1);
		}
		else if (bLocal_180)
		{
		}
	}
	if (!bLocal_197)
	{
		if (iLocal_261 == 9)
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (iVar0 != 4)
				{
					if (GlobalFunc_5710("NIG1A_B1", 1))
					{
						if (Local_433[iVar0 /*19*/].f_10 == 1)
						{
							Local_433[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
							Local_433[iVar0 /*19*/].f_10 = 5;
						}
						Local_433[3 /*19*/].f_16 = MISC::GET_GAME_TIMER();
					}
					else if (Local_433[iVar0 /*19*/].f_10 == 5 || Local_433[iVar0 /*19*/].f_10 == 6)
					{
						Local_433[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						Local_433[iVar0 /*19*/].f_10 = 1;
					}
				}
				iVar0++;
			}
			if (!GlobalFunc_5710("NIG1A_B1", 1))
			{
				func_303(&(Local_433[3 /*19*/].f_16));
			}
			else
			{
				func_301(0);
			}
		}
		else if (iLocal_261 == 8)
		{
			func_303(&(Local_433[3 /*19*/].f_16));
		}
		else
		{
			func_299(1);
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 != 4)
			{
				if (Local_433[iVar0 /*19*/].f_10 != 20 && Local_433[iVar0 /*19*/].f_10 != 21)
				{
					if (iLocal_260 != 0)
					{
						bLocal_197 = true;
						func_296(0);
						Local_433[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						Local_433[iVar0 /*19*/].f_10 = 20;
						GlobalFunc_7090(Local_433[iVar0 /*19*/].f_9, 1);
						AUDIO::_0x062D5EAD4DA2FA6A();
					}
					else if (func_311(Local_433[iVar0 /*19*/].f_9, Local_433[iVar0 /*19*/].f_18, 0, 1101004800, 1090519040, 1097859072))
					{
						bLocal_197 = true;
						func_296(0);
						Local_433[iVar0 /*19*/].f_17 = 0;
						Local_433[iVar0 /*19*/].f_10 = 20;
						GlobalFunc_7090(Local_433[iVar0 /*19*/].f_9, 1);
						AUDIO::_0x062D5EAD4DA2FA6A();
					}
					else if (iLocal_261 != 12 && GlobalFunc_8619(Local_433[iVar0 /*19*/].f_9, 1090519040, 1097859072))
					{
						func_296(0);
						bLocal_197 = true;
						Local_433[iVar0 /*19*/].f_17 = 0;
						Local_433[iVar0 /*19*/].f_10 = 20;
						GlobalFunc_7090(Local_433[iVar0 /*19*/].f_9, 1);
						AUDIO::_0x062D5EAD4DA2FA6A();
					}
					else if ((iLocal_261 == 9 && PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_289(Local_529.f_9, 9, 1))
					{
						func_296(0);
						bLocal_197 = true;
						Local_433[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						Local_433[iVar0 /*19*/].f_10 = 20;
						GlobalFunc_7090(Local_433[iVar0 /*19*/].f_9, 1);
						AUDIO::_0x062D5EAD4DA2FA6A();
					}
					if (func_287(iVar0))
					{
						func_296(0);
						func_286(iVar0);
						func_285(iVar0);
						bLocal_197 = true;
						Local_433[iVar0 /*19*/].f_17 = 0;
						Local_433[iVar0 /*19*/].f_10 = 20;
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 != 4)
			{
				if (Local_433[iVar0 /*19*/].f_10 != 20 && Local_433[iVar0 /*19*/].f_10 != 21)
				{
					Local_433[iVar0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
					Local_433[iVar0 /*19*/].f_10 = 20;
				}
			}
			iVar0++;
		}
		if (!iLocal_189)
		{
			func_296(0);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[3 /*19*/].f_9))
			{
				if (GlobalFunc_775(Local_433[3 /*19*/].f_9, Local_613, 20f))
				{
					if (func_283(1, 0, 1) && (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID())))
					{
						StringCopy(&Var1, "NIG1A_B2", 24);
					}
					else
					{
						StringCopy(&Var1, "NIG1A_B3", 24);
					}
					if (iLocal_261 == 9)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_280(&uLocal_268, sLocal_267, &Var1, 7, GlobalFunc_4570(), 0, 0))
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
							iLocal_189 = 1;
						}
					}
					else if (iLocal_261 == 8)
					{
						if (!GlobalFunc_111())
						{
							if (func_280(&uLocal_268, sLocal_267, &Var1, 7, GlobalFunc_4570(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								iLocal_189 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_189 = 1;
			}
		}
	}
	func_273(iLocal_216);
	if (iLocal_216 >= 4)
	{
		iLocal_216 = 0;
	}
	else
	{
		iLocal_216++;
	}
}

void func_273(int iParam0)//Position - 0x26BB6
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[iParam0 /*19*/].f_9))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_433[iParam0 /*19*/].f_10)
			{
				case 0:
					break;
				
				case 1:
					if (GlobalFunc_2311(Local_433[iParam0 /*19*/].f_17, MISC::GET_RANDOM_INT_IN_RANGE(0, 2500)))
					{
						if (!GlobalFunc_2786(Local_433[iParam0 /*19*/].f_9, Local_433[iParam0 /*19*/].f_15, 30f))
						{
							if (!GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, 1920390111))
							{
								TASK::TASK_ACHIEVE_HEADING(Local_433[iParam0 /*19*/].f_9, Local_433[iParam0 /*19*/].f_15, 0);
							}
						}
						else
						{
							switch (iParam0)
							{
								case 1:
									if (!PED::IS_PED_USING_SCENARIO(Local_433[iParam0 /*19*/].f_9, "WORLD_HUMAN_STAND_IMPATIENT"))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_433[iParam0 /*19*/].f_9, "WORLD_HUMAN_STAND_IMPATIENT", -1, 0);
									}
									break;
								
								case 4:
								case 2:
								case 0:
									if (!PED::IS_PED_USING_SCENARIO(Local_433[iParam0 /*19*/].f_9, "WORLD_HUMAN_HANG_OUT_STREET"))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_433[iParam0 /*19*/].f_9, "WORLD_HUMAN_HANG_OUT_STREET", -1, 0);
									}
									break;
								}
							}
					}
					if (GlobalFunc_775(Local_433[iParam0 /*19*/].f_9, Local_613, 7f) || func_60(Local_433[iParam0 /*19*/].f_9, 0) == iLocal_261)
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_PED(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_433[iParam0 /*19*/].f_9);
					}
					break;
				
				case 2:
					break;
				
				case 5:
					if (GlobalFunc_2311(Local_433[iParam0 /*19*/].f_17, MISC::GET_RANDOM_INT_IN_RANGE(0, 2000)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_433[iParam0 /*19*/].f_9))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_433[iParam0 /*19*/].f_9);
						}
						switch (iParam0)
						{
							case 3:
							case 1:
								TASK::TASK_LOOK_AT_ENTITY(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								break;
							
							default:
								TASK::TASK_LOOK_AT_ENTITY(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), -1);
								break;
						}
						Local_433[iParam0 /*19*/].f_10 = 6;
					}
					break;
				
				case 6:
					switch (iParam0)
					{
						case 3:
						case 1:
							if (!GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, 150319005))
							{
								Local_433[iParam0 /*19*/].f_17 = (MISC::GET_GAME_TIMER() - 5000);
								Local_433[iParam0 /*19*/].f_10 = 5;
							}
							break;
						
						default:
							if (!GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, -875674219))
							{
								Local_433[iParam0 /*19*/].f_17 = (MISC::GET_GAME_TIMER() - 5000);
								Local_433[iParam0 /*19*/].f_10 = 5;
							}
							break;
					}
					break;
				
				case 20:
					iVar0 = 0;
					iVar1 = 1200;
					if (iParam0 == 4)
					{
						if (!func_277(0))
						{
							iVar0 = 50000;
							iVar1 = 90000;
							Local_433[iParam0 /*19*/].f_17 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iVar1 = 0;
						}
					}
					if (GlobalFunc_2311(Local_433[iParam0 /*19*/].f_17, MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1)))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 64, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 128, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 2, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 8, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 1, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 32, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 4, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 5, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_433[iParam0 /*19*/].f_9, 17, 1);
						if (iParam0 != 3)
						{
							AUDIO::STOP_PED_SPEAKING(Local_433[iParam0 /*19*/].f_9, 0);
						}
						if (func_274(iParam0))
						{
							if (PED::IS_PED_USING_ANY_SCENARIO(Local_433[iParam0 /*19*/].f_9))
							{
								PED::SET_PED_PANIC_EXIT_SCENARIO(Local_433[iParam0 /*19*/].f_9, Local_613);
							}
							switch (iParam0)
							{
								case 3:
									break;
								
								case 0:
								case 1:
									break;
								
								default:
									break;
							}
							TASK::TASK_SMART_FLEE_PED(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_433[iParam0 /*19*/].f_9, 1);
							Local_433[iParam0 /*19*/].f_10 = 21;
						}
					}
					break;
				
				case 21:
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_433[iParam0 /*19*/].f_9) || (((!GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, 1805844857) && !GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, 474215631)) && !GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, -1519143300)) && !PED::IS_PED_FLEEING(Local_433[iParam0 /*19*/].f_9)))
					{
						Local_433[iParam0 /*19*/].f_17 = (MISC::GET_GAME_TIMER() - 5000);
						Local_433[iParam0 /*19*/].f_10 = 20;
					}
					break;
				}
			}
	}
}

int func_274(int iParam0)//Position - 0x27081
{
	struct<6> Var0;
	char* sVar6;
	struct<6> Var7;
	char* sVar13;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[iParam0 /*19*/].f_9))
	{
		if (iParam0 == 4)
		{
			return 1;
		}
		Var0 = { func_276(iParam0, 4) };
		sVar6 = GlobalFunc_217(&Var0);
		if (GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, 1785177548))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_433[iParam0 /*19*/].f_9, -8f, 0);
			TASK::TASK_PLAY_ANIM(Local_433[iParam0 /*19*/].f_9, &cLocal_580, sVar6, 8f, -4f, -1, 0, 0, 0, 0, 0);
			if (bLocal_194)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_433[iParam0 /*19*/].f_9, 0, 0);
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_433[iParam0 /*19*/].f_9, &cLocal_580, sVar6, 3))
		{
			if (iParam0 == 3 || iParam0 == 1)
			{
				Var7 = { func_276(iParam0, 4) };
				sVar13 = GlobalFunc_217(&Var7);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_433[iParam0 /*19*/].f_9, &cLocal_580, sVar13, 3))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}


struct<6> func_276(int iParam0, int iParam1)//Position - 0x2717C
{
	struct<6> Var0;
	char cVar6[24];
	
	StringCopy(&Var0, "", 24);
	switch (iParam1)
	{
		case 0:
			StringCopy(&Var0, "BASE_", 24);
			break;
		
		case 3:
			if (iParam0 != 3 && iParam0 != 1)
			{
				return Var0;
			}
			else
			{
				StringCopy(&Var0, "BUMP_", 24);
			}
			break;
		
		case 1:
			StringCopy(&Var0, "IDLE_A_", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "IDLE_B_", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "OUTRO_", 24);
			break;
		
		default:
			break;
	}
	StringCopy(&cVar6, "", 24);
	switch (iParam0)
	{
		case 3:
			StringCopy(&cVar6, "M1", 24);
			break;
		
		case 2:
			StringCopy(&cVar6, "M2", 24);
			break;
		
		case 0:
			StringCopy(&cVar6, "F2", 24);
			break;
		
		case 1:
			StringCopy(&cVar6, "F1", 24);
			break;
		
		default:
			break;
	}
	StringConCat(&Var0, &cVar6, 24);
	return Var0;
}

int func_277(bool bParam0)//Position - 0x27263
{
	int iVar0;
	
	if (!iLocal_214)
	{
		func_278(4);
		iLocal_214 = 1;
	}
	else
	{
		iVar0 = Local_433[4 /*19*/].f_9;
		if (bParam0)
		{
			iVar0 = Local_529.f_9;
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(iVar0))
		{
			if (!GlobalFunc_6964(iVar0, 1785177548))
			{
				return 1;
			}
			else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252[4]))
			{
				return 1;
			}
			else
			{
				if (bParam0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252[4]) > 0.85f)
					{
						return 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_RATE(iLocal_252[4]) < 1.25f)
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_252[4], 1.25f);
				}
			}
		}
	}
	return 0;
}

void func_278(int iParam0)//Position - 0x27301
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	char cVar6[24];
	char cVar12[24];
	
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	fVar5 = 8f;
	switch (iParam0)
	{
		case 0:
			iVar1 = 1;
			iVar2 = 0;
			bVar3 = false;
			StringCopy(&cVar6, "BASE_Willie", 24);
			StringCopy(&cVar12, "BASE_GIRL", 24);
			break;
		
		case 1:
			iVar1 = 1;
			iVar2 = 0;
			bVar3 = false;
			StringCopy(&cVar6, "BASE_02_Willie", 24);
			StringCopy(&cVar12, "BASE_02_GIRL", 24);
			break;
		
		case 2:
			iVar1 = 0;
			iVar2 = 1;
			bVar3 = true;
			fVar5 = 4f;
			StringCopy(&cVar6, "THIS_IS_AWKWARD_Willie", 24);
			StringCopy(&cVar12, "THIS_IS_AWKWARD_GIRL", 24);
			break;
		
		case 3:
			iVar1 = 0;
			iVar2 = 1;
			bVar3 = true;
			fVar5 = 4f;
			StringCopy(&cVar6, "YOU_KNOW_Willie", 24);
			StringCopy(&cVar12, "YOU_KNOW_GIRL", 24);
			break;
		
		case 4:
			iVar1 = 0;
			iVar2 = 0;
			bVar3 = true;
			bVar4 = true;
			fVar5 = 4f;
			StringCopy(&cVar6, "EXIT_Willie", 24);
			StringCopy(&cVar12, "EXIT_GIRL", 24);
			break;
		
		default:
			break;
	}
	if (!bVar3)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252[0]) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252[1]))
		{
			return;
		}
	}
	if (!bVar4)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != 0 && iVar0 != 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252[iVar0]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252[iVar0]) < 0.95f)
					{
						return;
					}
				}
			}
			iVar0++;
		}
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252[iParam0]))
	{
		iLocal_252[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_622, Local_625, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_252[iParam0], iVar1);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_252[iParam0], iVar2);
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_529.f_9, &cLocal_588, &cVar6, 3))
			{
			}
			else
			{
				if (GlobalFunc_6964(Local_529.f_9, 1785177548))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_529.f_9, -8f, 0);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(Local_529.f_9, iLocal_252[iParam0], &cLocal_588, &cVar6, fVar5, -8f, 17, 0, 1148846080, 0);
				if (bLocal_194)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_529.f_9, 0, 0);
				}
			}
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[4 /*19*/].f_9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_433[4 /*19*/].f_9, &cLocal_588, &cVar12, 3))
			{
			}
			else
			{
				if (GlobalFunc_6964(Local_433[4 /*19*/].f_9, 1785177548))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_433[4 /*19*/].f_9, -8f, 0);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(Local_433[4 /*19*/].f_9, iLocal_252[iParam0], &cLocal_588, &cVar12, fVar5, -8f, 17, 0, 1148846080, 0);
				if (bLocal_194)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_433[4 /*19*/].f_9, 0, 0);
				}
			}
		}
	}
}


int func_280(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2762A
{
	if (iParam4 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (GlobalFunc_10618(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
		{
			return 1;
		}
	}
	return 0;
}



int func_283(bool bParam0, bool bParam1, bool bParam2)//Position - 0x276D0
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	switch (iVar0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_rpg"):
		case joaat("weapon_minigun"):
			return 1;
		
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("weapon_grenade"):
			case joaat("weapon_stickybomb"):
			case joaat("weapon_molotov"):
				return 1;
			}
		
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("weapon_knife"):
			case joaat("weapon_hammer"):
			case joaat("weapon_crowbar"):
			case joaat("weapon_bottle"):
			case default:
			}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("weapon_stungun"))
		{
			return 1;
		}
	}
	return 0;
}


void func_285(int iParam0)//Position - 0x277E4
{
	struct<6> Var0;
	char* sVar6;
	
	if (iParam0 == 3 || iParam0 == 1)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[iParam0 /*19*/].f_9))
		{
			Var0 = { func_276(iParam0, 3) };
			sVar6 = GlobalFunc_217(&Var0);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_433[iParam0 /*19*/].f_9, &cLocal_580, sVar6, 3))
			{
				if (GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, 1785177548))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_433[iParam0 /*19*/].f_9, -8f, 0);
				}
				TASK::TASK_PLAY_ANIM(Local_433[iParam0 /*19*/].f_9, &cLocal_580, sVar6, 8f, -8f, -1, 0, 0, 0, 0, 0);
				if (bLocal_194)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_433[iParam0 /*19*/].f_9, 0, 0);
				}
			}
		}
	}
}

int func_286(int iParam0)//Position - 0x27896
{
	char* sVar0;
	
	if (!GlobalFunc_111())
	{
		sVar0 = "NULL";
		switch (iParam0)
		{
			case 3:
				sVar0 = "NIG1A_BUMPM";
				break;
			
			case 2:
				sVar0 = "NIG1A_BUMPR";
				break;
			
			case 0:
				sVar0 = "NIG1A_BUMPG1";
				break;
			
			case 1:
				sVar0 = "NIG1A_BUMPG2";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (func_280(&uLocal_268, sLocal_267, sVar0, 7, GlobalFunc_4570(), 0, 0))
			{
			}
		}
	}
	return 0;
}

int func_287(int iParam0)//Position - 0x2790E
{
	if (iParam0 == 3 || iParam0 == 1)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[iParam0 /*19*/].f_9))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_433[iParam0 /*19*/].f_9, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else if (func_288(Local_433[iParam0 /*19*/].f_9))
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)//Position - 0x27967
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iParam0, 50))
		{
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0, int iParam1, bool bParam2)//Position - 0x279A2
{
	struct<3> Var0;
	int iVar3;
	
	if (bParam2)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (INTERIOR::GET_INTERIOR_AT_COORDS(Var0) == iLocal_258)
	{
		iVar3 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		if (iVar3 == iLocal_227[iParam1])
		{
			return 1;
		}
	}
	if (iParam1 == 12)
	{
		return 1;
	}
	return 0;
}







int func_296(bool bParam0)//Position - 0x27CC0
{
	if (GlobalFunc_111())
	{
		if (((GlobalFunc_5710("NIG1A_BAN1", 0) || GlobalFunc_5710("NIG1A_BAN2", 0)) || GlobalFunc_5710("NIG1A_BAN3", 0)) || GlobalFunc_5710("NIG1A_IDLE1", 0))
		{
			if (bParam0)
			{
				GlobalFunc_5105();
			}
			else
			{
				GlobalFunc_4956();
			}
			return 1;
		}
	}
	return 0;
}



int func_299(bool bParam0)//Position - 0x27D51
{
	struct<6> Var0;
	
	if (!iLocal_201)
	{
		if ((GlobalFunc_5710("NIG1A_BAN1", 0) || GlobalFunc_5710("NIG1A_BAN2", 0)) || GlobalFunc_5710("NIG1A_BAN3", 0))
		{
			Var0 = { GlobalFunc_514() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				iLocal_201 = 1;
				if (iLocal_244 > 0)
				{
					iLocal_244 = (iLocal_244 - 1);
				}
				Local_568 = { Var0 };
				if (bParam0)
				{
					GlobalFunc_5105();
				}
				else
				{
					GlobalFunc_4956();
				}
				return 1;
			}
		}
	}
	return 0;
}


void func_301(int iParam0)//Position - 0x27E74
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	fVar5 = 8f;
	switch (iParam0)
	{
		case 0:
			iVar1 = 1;
			iVar2 = 0;
			bVar3 = false;
			break;
		
		case 3:
			iVar1 = 0;
			iVar2 = 0;
			bVar3 = true;
			break;
		
		case 1:
			iVar1 = 0;
			iVar2 = 0;
			bVar3 = true;
			break;
		
		case 2:
			iVar1 = 0;
			iVar2 = 0;
			bVar3 = true;
			bVar4 = true;
			fVar5 = 4f;
			break;
		
		case 4:
			iVar1 = 0;
			iVar2 = 0;
			bVar3 = true;
			bVar4 = true;
			fVar5 = 4f;
			break;
		
		default:
			break;
	}
	if (!bVar3)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_246[0]))
		{
			return;
		}
	}
	if (!bVar4)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_246[iVar0]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_246[iVar0]) < 0.95f)
					{
						return;
					}
				}
			}
			iVar0++;
		}
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252[iParam0]))
	{
		iLocal_246[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_616, Local_619, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_246[iParam0], iVar1);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_246[iParam0], iVar2);
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 != 4)
			{
				func_302(iVar0, iLocal_246[iParam0], iParam0, fVar5);
			}
			iVar0++;
		}
	}
}

void func_302(int iParam0, var uParam1, int iParam2, float fParam3)//Position - 0x27FBA
{
	struct<6> Var0;
	char* sVar6;
	
	if (iParam0 != 4)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[iParam0 /*19*/].f_9))
		{
			Var0 = { func_276(iParam0, iParam2) };
			sVar6 = GlobalFunc_217(&Var0);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_433[iParam0 /*19*/].f_9, &cLocal_580, sVar6, 3))
			{
			}
			else
			{
				if (GlobalFunc_6964(Local_433[iParam0 /*19*/].f_9, 1785177548))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_433[iParam0 /*19*/].f_9, -8f, 0);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(Local_433[iParam0 /*19*/].f_9, uParam1, &cLocal_580, sVar6, fParam3, -8f, 17, 0, 1148846080, 0);
				if (bLocal_194)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_433[iParam0 /*19*/].f_9, 0, 0);
				}
			}
		}
	}
}

int func_303(var uParam0)//Position - 0x28067
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar8;
	
	iVar0 = 0;
	if (GlobalFunc_111())
	{
		if (!iLocal_201)
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iVar1 = 4;
		StringCopy(&Var2, "", 24);
		if (iLocal_244 < iVar1)
		{
			iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000);
			if (iLocal_244 == 0 || iLocal_201)
			{
				iVar8 = 100;
			}
			if (GlobalFunc_2311(*uParam0, iVar8))
			{
				switch (iLocal_244)
				{
					case 0:
						StringCopy(&Var2, "NIG1A_BAN1", 24);
						iVar0 = 1;
						break;
					
					case 1:
						StringCopy(&Var2, "NIG1A_BAN2", 24);
						iVar0 = 1;
						break;
					
					case 2:
						StringCopy(&Var2, "NIG1A_BAN3", 24);
						iVar0 = 1;
						break;
					
					case 3:
						StringCopy(&Var2, "NIG1A_IDLE1", 24);
						iVar0 = 2;
						break;
				}
				if (iLocal_201)
				{
					if (func_304(&uLocal_268, sLocal_267, &Var2, &Local_568, 7, 0, 0))
					{
						iLocal_201 = 0;
						*uParam0 = MISC::GET_GAME_TIMER();
						iLocal_244++;
						func_301(iVar0);
						return 1;
					}
				}
				else if (func_280(&uLocal_268, sLocal_267, &Var2, 7, 0, 0, 0))
				{
					iLocal_201 = 0;
					*uParam0 = MISC::GET_GAME_TIMER();
					iLocal_244++;
					func_301(iVar0);
					return 1;
				}
			}
		}
	}
	func_301(0);
	return 0;
}

int func_304(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x28186
{
	if (iParam5 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (GlobalFunc_10626(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
		{
			return 1;
		}
	}
	return 0;
}







int func_311(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, float fParam5)//Position - 0x284FC
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (MISC::IS_BULLET_IN_AREA(Var0, iParam4, 1))
		{
			return 1;
		}
		if (GlobalFunc_775(iParam0, Local_613, fParam3))
		{
			if (!GlobalFunc_2319(iParam1, 10))
			{
				if (func_283(1, 0, 1))
				{
					if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					return 1;
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			return 1;
		}
		if (bParam2)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
		Var3 = { Var0 };
		Var6 = { Var3 };
		Var3.x = (Var3.x - fParam5);
		Var3.f_1 = (Var3.f_1 - fParam5);
		Var3.f_2 = (Var3.f_2 - fParam5);
		Var6.x = (Var6.x + fParam5);
		Var6.f_1 = (Var6.f_1 + fParam5);
		Var6.f_2 = (Var6.f_2 + fParam5);
		if (MISC::IS_PROJECTILE_IN_AREA(Var3, Var6, 1))
		{
			if (func_313(iParam0, 1))
			{
				if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_grenade"), &Var9, 0))
				{
				}
				else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_smokegrenade"), &Var9, 0))
				{
				}
				else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_stickybomb"), &Var9, 0))
				{
				}
				else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_molotov"), &Var9, 0))
				{
					if (func_312(Var9))
					{
						return 1;
					}
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_312(struct<3> Param0)//Position - 0x286D2
{
	int iVar0;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar0 == iLocal_258)
		{
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0, bool bParam1)//Position - 0x286FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	if (bParam1)
	{
		if (GlobalFunc_115(iParam0))
		{
			iVar2 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
			iVar1 = 0;
			while (iVar1 <= (13 - 1))
			{
				iVar0 = iVar1;
				if (iVar0 != 12)
				{
					if (iVar2 == iLocal_227[iVar0])
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var3) == iLocal_258)
		{
			return 1;
		}
	}
	return 0;
}


void func_315(int iParam0, var uParam1, float fParam2)//Position - 0x2877D
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_316(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, 7))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

bool func_316(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x287A8
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_321(iParam0, iParam1);
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
		iVar4 = func_319();
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



int func_319()//Position - 0x28A5A
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


int func_321(int iParam0, int iParam1)//Position - 0x28B35
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

void func_322()//Position - 0x28B74
{
	struct<6> Var0;
	int iVar6;
	struct<3> Var7;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
	{
		func_315(Local_529.f_9, &(Local_529.f_18), 1126825984);
		switch (iLocal_260)
		{
			case 0:
				if (!bLocal_180)
				{
					func_340(&(Local_529.f_16));
					if (iLocal_261 == 0)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9) && SYSTEM::VDIST(Local_613, ENTITY::GET_ENTITY_COORDS(Local_529.f_9, 1)) <= 5.5f)
						{
							func_339(0);
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (iLocal_200)
							{
								if (func_283(1, 0, 1) && !MISC::ARE_STRINGS_EQUAL(sLocal_266, "NIG1A_MSP3"))
								{
									iLocal_200 = 0;
								}
								else if (func_304(&uLocal_268, sLocal_267, sLocal_266, &Local_562, 7, 0, 0))
								{
									iLocal_200 = 0;
									bLocal_180 = true;
								}
							}
							else if (func_283(1, 0, 1))
							{
								if (func_280(&uLocal_268, sLocal_267, "NIG1A_MSP3", 7, 0, 0, 0))
								{
									sLocal_266 = "NIG1A_MSP3";
									bLocal_180 = true;
								}
							}
							else if (func_280(&uLocal_268, sLocal_267, "NIG1A_MSP1", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(2f, 4.5f, 0);
								sLocal_266 = "NIG1A_MSP1";
								bLocal_180 = true;
							}
						}
					}
				}
				else if (GlobalFunc_5710(sLocal_266, 1))
				{
					if (iLocal_261 != 0)
					{
						Var0 = { GlobalFunc_514() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
						{
							iLocal_200 = 1;
							bLocal_180 = false;
							Local_562 = { Var0 };
							GlobalFunc_5105();
						}
					}
				}
				iLocal_199 = func_332(Local_433[4 /*19*/].f_9);
				if ((iLocal_199 || func_331(Local_529.f_9, Local_529.f_18, 1, 1092616192)) || (iLocal_261 == 0 && PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)))
				{
					Local_529.f_17 = MISC::GET_GAME_TIMER();
					Local_529.f_10 = 9;
					Local_529.f_16 = MISC::GET_GAME_TIMER();
					if (!bLocal_196)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), 1))
						{
							bLocal_196 = true;
							iLocal_181 = 1;
							Local_529.f_17 = (MISC::GET_GAME_TIMER() - 1000);
							Local_529.f_16 = (MISC::GET_GAME_TIMER() - 1000);
						}
					}
					func_330(0);
					if (GlobalFunc_5710(sLocal_266, 1))
					{
						GlobalFunc_4956();
					}
					GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
					iLocal_260 = 1;
				}
				if (func_328(Local_529.f_9, Local_529.f_18, 1, 10f, 1090519040, 1097859072) || (iLocal_261 != 12 && GlobalFunc_8619(Local_529.f_9, 1090519040, 1097859072)))
				{
					Local_529.f_10 = 26;
					Local_529.f_17 = MISC::GET_GAME_TIMER();
					Local_529.f_16 = MISC::GET_GAME_TIMER();
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_529.f_9);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(Local_529.f_9);
						PED::CLEAR_PED_LAST_DAMAGE_BONE(Local_529.f_9);
					}
					func_330(0);
					if (GlobalFunc_5710(sLocal_266, 1))
					{
						GlobalFunc_4956();
					}
					iLocal_260 = 2;
				}
				break;
			
			case 1:
				if (!bLocal_196)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), 1))
					{
						bLocal_196 = true;
						iLocal_181 = 1;
					}
				}
				if (!iLocal_181)
				{
					func_330(0);
					if (!GlobalFunc_5710("NIG1A_SD3", 1) && !GlobalFunc_5710("NIG1A_SD5", 1))
					{
						if (GlobalFunc_2311(Local_529.f_16, 500) && Local_529.f_10 == 10)
						{
							if (!GlobalFunc_2319(Local_529.f_18, 10))
							{
								if (func_280(&uLocal_268, sLocal_267, "NIG1A_MSP4", 7, GlobalFunc_4570(), 0, 0))
								{
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
									iLocal_181 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (!iLocal_188)
					{
						if (bLocal_196)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							func_330(0);
							if (func_280(&uLocal_268, sLocal_267, "NIG1A_M1", 7, GlobalFunc_4570(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								iLocal_188 = 1;
							}
						}
					}
					if (GlobalFunc_111())
					{
						Local_529.f_16 = MISC::GET_GAME_TIMER();
					}
					else if (GlobalFunc_2311(Local_529.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1000))))
					{
						if (Local_529.f_10 == 9 || Local_529.f_10 == 10)
						{
							if (GlobalFunc_775(Local_529.f_9, Local_613, 8f))
							{
								if (!iLocal_184)
								{
									if (iLocal_219 < 3)
									{
										if (func_280(&uLocal_268, sLocal_267, "NIG1A_MP3", 7, GlobalFunc_4570(), 0, 0))
										{
											iLocal_219++;
											Local_529.f_16 = MISC::GET_GAME_TIMER();
											iLocal_184 = 1;
										}
									}
									else
									{
										iLocal_184 = 1;
									}
								}
								else if (GlobalFunc_2311(Local_529.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(15000, 5000))))
								{
									if (func_280(&uLocal_268, sLocal_267, "NIG1A_BRAWL", 7, GlobalFunc_4570(), 0, 0))
									{
										Local_529.f_16 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if ((Local_529.f_10 == 16 || Local_529.f_10 == 17) || (iLocal_261 == 12 && !GlobalFunc_775(Local_529.f_9, Local_613, 12f)))
						{
							if (iLocal_217 < 3)
							{
								if (GlobalFunc_775(Local_529.f_9, Local_613, 50f))
								{
									if (func_280(&uLocal_268, sLocal_267, "NIG1A_MP1", 7, GlobalFunc_4570(), 0, 0))
									{
										iLocal_217++;
										Local_529.f_16 = MISC::GET_GAME_TIMER();
										iLocal_184 = 0;
									}
								}
							}
							else
							{
								iLocal_184 = 0;
							}
						}
						else if (Local_529.f_10 == 18 || Local_529.f_10 == 19)
						{
							if (iLocal_218 < 3)
							{
								if (func_280(&uLocal_268, sLocal_267, "NIG1A_MP2", 7, GlobalFunc_4570(), 0, 0))
								{
									iLocal_218++;
									Local_529.f_16 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (func_327(Local_529.f_9, 1, 180))
					{
						Local_529.f_10 = 11;
						if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_529.f_9)) < 180f)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_529.f_9, 180);
						}
						iLocal_242 = MISC::GET_GAME_TIMER();
						Local_529.f_16 = MISC::GET_GAME_TIMER();
						GlobalFunc_504(0, -1);
						iLocal_260 = 3;
					}
				}
				if (func_328(Local_529.f_9, Local_529.f_18, 1, 1112014848, 1090519040, 1097859072) || (iLocal_261 != 12 && GlobalFunc_8619(Local_529.f_9, 1090519040, 1097859072)))
				{
					Local_529.f_10 = 26;
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_529.f_9);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(Local_529.f_9);
						PED::CLEAR_PED_LAST_DAMAGE_BONE(Local_529.f_9);
					}
					GlobalFunc_504(0, -1);
					iLocal_260 = 2;
				}
				break;
			
			case 2:
				if (!iLocal_182)
				{
					if (GlobalFunc_775(Local_529.f_9, Local_613, 15f))
					{
						if (!GlobalFunc_5710("NIG1A_SD7", 1) && !GlobalFunc_5710("NIG1A_MSP3", 1))
						{
							if (!GlobalFunc_2319(Local_529.f_18, 10))
							{
								if (func_280(&uLocal_268, sLocal_267, "NIG1A_MSU2", 7, GlobalFunc_4570(), 0, 0))
								{
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
									Local_529.f_16 = MISC::GET_GAME_TIMER();
									iLocal_182 = 1;
								}
							}
						}
					}
				}
				else if (Local_529.f_10 == 26 || Local_529.f_10 == 27)
				{
					if (GlobalFunc_5710("NIG1A_MSU2", 1))
					{
						Local_529.f_16 = MISC::GET_GAME_TIMER();
					}
					else if (GlobalFunc_2311(Local_529.f_16, 3500))
					{
						if (Local_529.f_10 == 27)
						{
							Local_529.f_10 = 20;
						}
					}
				}
				else if (Local_529.f_10 == 20 || Local_529.f_10 == 21)
				{
					if (GlobalFunc_111())
					{
						Local_529.f_16 = MISC::GET_GAME_TIMER();
					}
					else if (GlobalFunc_2311(Local_529.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2500))))
					{
						if (GlobalFunc_775(Local_529.f_9, Local_613, 25f))
						{
							if ((!func_313(Local_529.f_9, 1) && iLocal_261 == 12) || func_289(Local_529.f_9, iLocal_261, 1))
							{
								if (func_280(&uLocal_268, sLocal_267, "NIG1A_FLEE", 7, 0, 0, 0))
								{
									Local_529.f_16 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				if (bLocal_203)
				{
					if (!iLocal_183)
					{
						if (!GlobalFunc_111())
						{
							if (func_280(&uLocal_268, sLocal_267, "NIG1A_MCSG", 7, GlobalFunc_4570(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								iLocal_183 = 1;
							}
						}
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_529.f_9, 0, 2))
					{
						if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_529.f_9, joaat("weapon_unarmed"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_529.f_9, 0, 1)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_529.f_9, joaat("weapon_stungun"), 0))
						{
							Local_529.f_10 = 11;
							iLocal_242 = MISC::GET_GAME_TIMER();
							iLocal_260 = 3;
						}
						else
						{
							if (!PED::IS_PED_BEING_STUNNED(Local_529.f_9, 0))
							{
								if (func_283(1, 0, 0))
								{
									if (PED::GET_PED_LAST_DAMAGE_BONE(Local_529.f_9, &iVar6))
									{
										switch (iVar6)
										{
											case 11816:
											case 23553:
											case 24816:
											case 24817:
											case 24818:
											case 39317:
											case 31086:
												ENTITY::SET_ENTITY_HEALTH(Local_529.f_9, 0);
												break;
											
											default:
												break;
											}
										}
									}
							}
							bLocal_203 = true;
							Local_529.f_10 = 11;
							iLocal_242 = MISC::GET_GAME_TIMER();
							iLocal_260 = 3;
						}
					}
				}
				if (func_326(Local_529.f_9, Local_613))
				{
					Local_529.f_10 = 11;
					iLocal_242 = MISC::GET_GAME_TIMER();
					iLocal_260 = 3;
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_529.f_9);
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(Local_529.f_9);
				if (!bLocal_205)
				{
					if (iLocal_261 != 12)
					{
						if (iLocal_243 == 0)
						{
							iLocal_243 = MISC::GET_GAME_TIMER();
						}
						bLocal_205 = true;
					}
				}
				break;
			
			case 3:
				if (!iLocal_178)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					func_330(0);
					if (bLocal_203)
					{
						if (func_280(&uLocal_268, sLocal_267, "NIG1A_MCSG", 7, GlobalFunc_4570(), 0, 0))
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
							iLocal_178 = 1;
						}
					}
					else if (func_280(&uLocal_268, sLocal_267, "NIG1A_MKD", 7, GlobalFunc_4570(), 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						iLocal_178 = 1;
					}
				}
				if (!PED::IS_PED_RAGDOLL(Local_529.f_9) || GlobalFunc_2311(iLocal_242, 2000))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_529.f_9, 0);
					iLocal_260 = 4;
				}
				break;
			
			case 4:
				break;
			
			case 5:
				if (GlobalFunc_111())
				{
					Local_529.f_16 = MISC::GET_GAME_TIMER();
				}
				else if (GlobalFunc_2311(Local_529.f_16, (2500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2500))))
				{
					if (GlobalFunc_775(Local_529.f_9, Local_613, 25f))
					{
						if ((!func_313(Local_529.f_9, 1) && iLocal_261 == 12) || func_289(Local_529.f_9, iLocal_261, 1))
						{
							if (func_280(&uLocal_268, sLocal_267, "NIG1A_FLEE", 7, GlobalFunc_4570(), 0, 0))
							{
								Local_529.f_16 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				break;
		}
		func_323();
	}
	else
	{
		if (iLocal_260 != 6)
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 2))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 2);
			}
			iLocal_260 = 6;
		}
		if (!iLocal_186)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_529.f_9))
			{
				Var7 = { ENTITY::GET_ENTITY_COORDS(Local_529.f_9, 0) };
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Var7, 15f))
					{
						if (func_280(&uLocal_268, sLocal_267, "NIG1A_TC3", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_186 = 1;
						}
					}
				}
			}
		}
	}
}

void func_323()//Position - 0x29633
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
	{
		PED::SET_PED_RESET_FLAG(Local_529.f_9, 187, 1);
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_529.f_10)
			{
				case 0:
					Local_529.f_10 = 1;
					break;
				
				case 1:
					if (GlobalFunc_775(Local_529.f_9, Local_613, 8f))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_529.f_9, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_PED(Local_529.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_529.f_9);
					}
					break;
				
				case 2:
					break;
				
				case 9:
					if (func_277(1))
					{
						if (GlobalFunc_6964(Local_529.f_9, 1785177548))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_529.f_9, -16f, 1);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_529.f_9, 5, 1);
						TASK::TASK_COMBAT_PED(Local_529.f_9, PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
						Local_529.f_10 = 10;
					}
					break;
				
				case 10:
					if (!GlobalFunc_6964(Local_529.f_9, 780511057))
					{
						Local_529.f_10 = 9;
					}
					break;
				
				case 11:
					if (PED::IS_PED_FLEEING(Local_529.f_9) || GlobalFunc_6964(Local_529.f_9, 1805844857))
					{
						TASK::CLEAR_PED_TASKS(Local_529.f_9);
					}
					STREAMING::REQUEST_ANIM_DICT(&cLocal_596);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_529.f_9, 5, 0);
					PED::SET_PED_CAN_RAGDOLL(Local_529.f_9, 1);
					if (!PED::IS_PED_RAGDOLL(Local_529.f_9))
					{
						PED::SET_PED_TO_RAGDOLL(Local_529.f_9, 1000, 1000, 0, 1, 1, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
					Local_529.f_10 = 12;
					break;
				
				case 12:
					if (!PED::IS_PED_RAGDOLL(Local_529.f_9))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
						Local_529.f_10 = 13;
					}
					break;
				
				case 13:
					STREAMING::REQUEST_ANIM_DICT(&cLocal_596);
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_596))
					{
						if ((!TASK::IS_PED_GETTING_UP(Local_529.f_9) && !PED::IS_PED_RAGDOLL(Local_529.f_9)) && !PED::IS_PED_BEING_STUNNED(Local_529.f_9, 0))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_529.f_9, 1);
							TASK::TASK_CLEAR_LOOK_AT(Local_529.f_9);
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_529.f_9, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_265);
							TASK::TASK_PLAY_ANIM(0, &cLocal_596, "enter_willie", 4f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, &cLocal_596, "base_willie", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, &cLocal_596, "exit_willie", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_265);
							TASK::TASK_PERFORM_SEQUENCE(Local_529.f_9, uLocal_265);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_265);
							STREAMING::REMOVE_ANIM_DICT(&cLocal_596);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
							Local_529.f_16 = MISC::GET_GAME_TIMER();
							Local_529.f_17 = MISC::GET_GAME_TIMER();
							Local_529.f_10 = 14;
						}
					}
					break;
				
				case 14:
					if (!GlobalFunc_6964(Local_529.f_9, 242628503))
					{
						Local_529.f_10 = 15;
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_529.f_9, &cLocal_596, "enter_willie", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Local_529.f_9, &cLocal_596, "enter_willie", 1.4f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_529.f_9, &cLocal_596, "exit_willie", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Local_529.f_9, &cLocal_596, "exit_willie", 1.2f);
					}
					break;
				
				case 15:
					if (!PED::IS_PED_HEADTRACKING_PED(Local_529.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_529.f_9, 1);
					}
					if (!PED::IS_PED_FACING_PED(Local_529.f_9, PLAYER::PLAYER_PED_ID(), 90f))
					{
						if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), -1);
						}
					}
					break;
				
				case 16:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_265);
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_529.f_9, 1), Local_610) >= 10f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_610, 1f, 20000, 2f, 0, 1193033728);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_265);
					TASK::TASK_PERFORM_SEQUENCE(Local_529.f_9, uLocal_265);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_265);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
					Local_529.f_17 = MISC::GET_GAME_TIMER();
					Local_529.f_10 = 17;
					break;
				
				case 17:
					if (iLocal_261 == 0)
					{
						if (func_289(Local_529.f_9, 0, 0))
						{
							if (Local_529.f_18 == MISC::GET_FRAME_COUNT())
							{
								Local_529.f_10 = 9;
								return;
							}
						}
					}
					if (!GlobalFunc_6964(Local_529.f_9, 242628503))
					{
						Local_529.f_10 = 16;
					}
					else if (TASK::GET_SEQUENCE_PROGRESS(Local_529.f_9) >= 4)
					{
						if (GlobalFunc_2311(Local_529.f_17, MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
						{
							Local_529.f_10 = 16;
						}
					}
					else
					{
						Local_529.f_17 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 18:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_265);
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					switch (iVar0)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1a", "threaten", 8f, -8f, -1, 16, 0, 0, 0, 0);
							break;
						
						case 1:
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1a", "anger_a", 8f, -8f, -1, 16, 0, 0, 0, 0);
							break;
						
						case 2:
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1a", "screw_you", 8f, -8f, -1, 16, 0, 0, 0, 0);
							break;
					}
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_265);
					TASK::TASK_PERFORM_SEQUENCE(Local_529.f_9, uLocal_265);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_265);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
					Local_529.f_17 = MISC::GET_GAME_TIMER();
					Local_529.f_10 = 19;
					break;
				
				case 19:
					if (!func_325(ENTITY::GET_ENTITY_COORDS(Local_529.f_9, 1), Local_613, 0.25f))
					{
						Local_529.f_10 = 9;
					}
					else if (!GlobalFunc_6964(Local_529.f_9, 242628503))
					{
						Local_529.f_10 = 18;
					}
					else if (TASK::GET_SEQUENCE_PROGRESS(Local_529.f_9) >= 3)
					{
						if (GlobalFunc_2311(Local_529.f_17, MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
						{
							Local_529.f_10 = 18;
						}
					}
					else
					{
						Local_529.f_17 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 20:
					if (func_277(1))
					{
						func_9();
						Local_529.f_10 = 21;
					}
					break;
				
				case 21:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_529.f_9, 2f);
					if (!GlobalFunc_6964(Local_529.f_9, 242628503))
					{
						Local_529.f_10 = 20;
					}
					break;
				
				case 22:
					PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 64, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 128, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_529.f_9, 5, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 2, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 8, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_529.f_9, 32, 0);
					if (GlobalFunc_4947(Local_556))
					{
						if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_556, 0) && GlobalFunc_775(Local_556, Local_556.f_2, 3f)) && GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_556), Local_556.f_5, 20f))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_529.f_9, Local_556, 0) && !PED::IS_PED_BEING_JACKED(Local_529.f_9))
							{
								Local_529.f_10 = 23;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(Local_529.f_9);
								TASK::TASK_ENTER_VEHICLE(Local_529.f_9, Local_556, 25000, -1, 2f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
								Local_529.f_10 = 23;
							}
						}
						else
						{
							Local_529.f_10 = 20;
						}
					}
					else
					{
						Local_529.f_10 = 20;
					}
					break;
				
				case 23:
					if (!GlobalFunc_4947(Local_556))
					{
						Local_529.f_10 = 20;
					}
					else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_556, 0) || PED::IS_PED_BEING_JACKED(Local_529.f_9)) || !GlobalFunc_775(Local_556, Local_556.f_2, 3f)) || !GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_556), Local_556.f_5, 20f))
					{
						Local_529.f_10 = 20;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_529.f_9, Local_556))
					{
						Local_529.f_10 = 24;
					}
					else if (!GlobalFunc_6964(Local_529.f_9, -1794415470))
					{
						Local_529.f_10 = 22;
					}
					break;
				
				case 24:
					if (GlobalFunc_4947(Local_556) && PED::IS_PED_SITTING_IN_VEHICLE(Local_529.f_9, Local_556))
					{
						TASK::CLEAR_PED_TASKS(Local_529.f_9);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_265);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_556, -533.7831f, 317.3689f, 82.0616f, 60f, 0, Local_556.f_1, 786468, 8f, -1f);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_556, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_265);
						TASK::TASK_PERFORM_SEQUENCE(Local_529.f_9, uLocal_265);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_265);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
						Local_529.f_10 = 25;
					}
					else
					{
						Local_529.f_10 = 20;
					}
					break;
				
				case 25:
					if (!GlobalFunc_6964(Local_529.f_9, 242628503))
					{
						Local_529.f_10 = 24;
					}
					break;
				
				case 26:
					if (func_277(1))
					{
						if ((!PED::IS_PED_RAGDOLL(Local_529.f_9) && !TASK::IS_PED_GETTING_UP(Local_529.f_9)) && !PED::IS_PED_BEING_STUNNED(Local_529.f_9, 0))
						{
							if (GlobalFunc_6964(Local_529.f_9, 1785177548))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_529.f_9, -16f, 1);
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_529.f_9, 5, 0);
							TASK::TASK_LOOK_AT_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_HANDS_UP(Local_529.f_9, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
							if (PED::IS_PED_IN_COMBAT(Local_529.f_9, 0))
							{
							}
							Local_529.f_10 = 27;
						}
					}
					break;
				
				case 27:
					if (!GlobalFunc_6964(Local_529.f_9, -1519143300))
					{
						Local_529.f_10 = 26;
					}
					if (PED::IS_PED_IN_COMBAT(Local_529.f_9, 0))
					{
					}
					break;
				
				case 28:
					TASK::CLEAR_PED_TASKS(Local_529.f_9);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_529.f_9, 5, 0);
					TASK::TASK_COWER(Local_529.f_9, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
					Local_529.f_10 = 29;
					break;
				
				case 29:
					if (!PED::IS_PED_RAGDOLL(Local_529.f_9))
					{
						if (!GlobalFunc_6964(Local_529.f_9, 474215631))
						{
							Local_529.f_10 = 28;
						}
					}
					break;
				
				default:
					break;
				}
			}
	}
}


int func_325(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2A0B9
{
	float fVar0;
	
	fVar0 = Param0.f_2;
	fVar0 = (fVar0 - Param3.f_2);
	fVar0 = MISC::ABSF(fVar0);
	if (fVar0 > fParam6)
	{
		return 1;
	}
	return 0;
}

int func_326(int iParam0, struct<3> Param1)//Position - 0x2A0E5
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				if (GlobalFunc_775(iParam0, Param1, 3.5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_327(int iParam0, bool bParam1, int iParam2)//Position - 0x2A14C
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iParam0) <= iParam2)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_529.f_9, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (bParam1)
				{
					if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_529.f_9, 0, 1) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_529.f_9, joaat("weapon_unarmed"), 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iParam0);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iParam0);
	return 0;
}

int func_328(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, float fParam5)//Position - 0x2A1C5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (func_283(1, 0, 1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			if (MISC::IS_BULLET_IN_AREA(Var0, iParam4, 1))
			{
				return 1;
			}
			if (GlobalFunc_775(iParam0, Local_613, fParam3))
			{
				if (!GlobalFunc_2319(iParam1, 10))
				{
					if (bParam2)
					{
						if (iLocal_261 != 12 && iLocal_261 != 13)
						{
							if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
							{
								return 1;
							}
						}
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						return 1;
					}
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						return 1;
					}
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
					return 1;
				}
			}
			Var3 = { Var0 };
			Var6 = { Var3 };
			Var3.x = (Var3.x - fParam5);
			Var3.f_1 = (Var3.f_1 - fParam5);
			Var3.f_2 = (Var3.f_2 - fParam5);
			Var6.x = (Var6.x + fParam5);
			Var6.f_1 = (Var6.f_1 + fParam5);
			Var6.f_2 = (Var6.f_2 + fParam5);
			if (MISC::IS_PROJECTILE_IN_AREA(Var3, Var6, 1))
			{
				if (func_313(iParam0, 1))
				{
					if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_grenade"), &Var9, 0))
					{
					}
					else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_smokegrenade"), &Var9, 0))
					{
					}
					else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_stickybomb"), &Var9, 0))
					{
					}
					else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var3, Var6, joaat("weapon_molotov"), &Var9, 0))
					{
						if (func_312(Var9))
						{
							return 1;
						}
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_330(bool bParam0)//Position - 0x2A400
{
	if (GlobalFunc_111())
	{
		if (((GlobalFunc_5710("NIG1A_WILL1", 0) || GlobalFunc_5710("NIG1A_WILL2", 0)) || GlobalFunc_5710("NIG1A_WILL3", 0)) || GlobalFunc_5710("NIG1A_IDLE2", 0))
		{
			if (bParam0)
			{
				GlobalFunc_5105();
			}
			else
			{
				GlobalFunc_4956();
			}
			return 1;
		}
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x2A45D
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || (iParam2 && PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())))
		{
			if (GlobalFunc_775(iParam0, Local_613, fParam3))
			{
				if (!GlobalFunc_2319(iParam1, 10))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0)//Position - 0x2A4D4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
	{
		iVar0 = 0;
		if (GlobalFunc_2506())
		{
			bVar2 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < GlobalFunc_760())
			{
				if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_759(iVar0)))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_759(iVar0));
					if (iVar1 == iParam0)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (iLocal_261 == 0 || Local_529.f_18 == MISC::GET_FRAME_COUNT())
							{
								bVar2 = true;
							}
						}
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				return 1;
			}
		}
		if (GlobalFunc_4453())
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < GlobalFunc_4452())
			{
				if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_4451(iVar0)))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_4451(iVar0));
					if (iVar1 == iParam0)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (iLocal_261 == 0 || Local_529.f_18 == MISC::GET_FRAME_COUNT())
							{
								bVar3 = true;
							}
						}
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				return 1;
			}
		}
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	}
	return 0;
}







int func_339(bool bParam0)//Position - 0x2A645
{
	struct<6> Var0;
	
	if (!iLocal_202)
	{
		if ((GlobalFunc_5710("NIG1A_WILL1", 0) || GlobalFunc_5710("NIG1A_WILL2", 0)) || GlobalFunc_5710("NIG1A_WILL3", 0))
		{
			Var0 = { GlobalFunc_514() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				iLocal_202 = 1;
				if (iLocal_245 > 0)
				{
					iLocal_245 = (iLocal_245 - 1);
				}
				cLocal_574 = { Var0 };
				if (bParam0)
				{
					GlobalFunc_5105();
				}
				else
				{
					GlobalFunc_4956();
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_340(var uParam0)//Position - 0x2A6BC
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar8;
	
	if (bLocal_194)
	{
		iVar0 = 1;
		if (iLocal_245 == 3)
		{
			iVar0 = 0;
		}
		if (GlobalFunc_111())
		{
			if (!iLocal_202)
			{
				*uParam0 = MISC::GET_GAME_TIMER();
				if (iLocal_261 != 0 && ENTITY::IS_ENTITY_OCCLUDED(Local_529.f_9))
				{
					if (func_339(1))
					{
					}
				}
			}
		}
		else if (iLocal_261 == 0)
		{
			iVar1 = 4;
			StringCopy(&Var2, "", 24);
			if (iLocal_245 < iVar1)
			{
				iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000);
				if (iLocal_245 == 3)
				{
					iVar8 = 2500;
				}
				if (iLocal_202)
				{
					iVar8 = 100;
				}
				if (GlobalFunc_2311(*uParam0, iVar8))
				{
					switch (iLocal_245)
					{
						case 0:
							StringCopy(&Var2, "NIG1A_WILL1", 24);
							break;
						
						case 1:
							StringCopy(&Var2, "NIG1A_WILL2", 24);
							break;
						
						case 2:
							StringCopy(&Var2, "NIG1A_WILL3", 24);
							iVar0 = 3;
							break;
						
						case 3:
							StringCopy(&Var2, "NIG1A_IDLE2", 24);
							iVar0 = 2;
							break;
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[4 /*19*/].f_9))
					{
						if (iLocal_202)
						{
							if (func_304(&uLocal_268, sLocal_267, &Var2, &cLocal_574, 7, 0, 0))
							{
								iLocal_202 = 0;
								*uParam0 = MISC::GET_GAME_TIMER();
								iLocal_245++;
								func_278(iVar0);
								return 1;
							}
						}
						else if (func_280(&uLocal_268, sLocal_267, &Var2, 7, 0, 0, 0))
						{
							iLocal_202 = 0;
							*uParam0 = MISC::GET_GAME_TIMER();
							func_278(iVar0);
							iLocal_245++;
							return 1;
						}
					}
				}
			}
		}
		func_278(iVar0);
	}
	return 0;
}

void func_341()//Position - 0x2A819
{
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	func_322();
	func_272();
	switch (iLocal_112)
	{
		case 0:
			func_344();
			iLocal_175 = 0;
			iLocal_112 = 1;
			break;
		
		case 1:
			func_344();
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (GlobalFunc_663("NIG1A_OBJ_05", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_05");
				}
				if (!GlobalFunc_111())
				{
					iLocal_112 = 2;
				}
			}
			else if (!iLocal_175)
			{
				if (!GlobalFunc_663("NIG1A_OBJ_05", 0, 0))
				{
					GlobalFunc_164("NIG1A_OBJ_05", 7500, 0);
					iLocal_175 = 1;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_663("NIG1A_OBJ_05", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_05");
			}
			func_259(5);
			break;
	}
}



void func_344()//Position - 0x2A91E
{
	int iVar0;
	
	if (bLocal_205 || iLocal_206)
	{
		if (!iLocal_204)
		{
			iVar0 = 0;
			if (iLocal_206)
			{
				iVar0 = 5000;
			}
			else if (bLocal_205)
			{
				iVar0 = 10000;
			}
			if (iVar0 != 0)
			{
				if (GlobalFunc_2311(iLocal_243, iVar0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					if (iLocal_206)
					{
						if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_610, 60f))
						{
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_NIGEL_1A_01", 0f);
						}
					}
					iLocal_204 = 1;
				}
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (iLocal_261 != 12 && iLocal_261 != 13)
			{
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			}
			else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_610, 60f))
			{
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_345()//Position - 0x2A9F1
{
	int iVar0;
	
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	func_344();
	func_322();
	func_272();
	iVar0 = 0;
	switch (iLocal_112)
	{
		case 0:
			GlobalFunc_Checkpoint8(1, "Leave the area.", 1, 0, 0, 1);
			iLocal_112 = 1;
			break;
		
		case 1:
			if (!iLocal_179)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (func_280(&uLocal_268, sLocal_267, "NIG1A_MCS", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_179 = 1;
					}
				}
				else
				{
					iLocal_179 = 1;
				}
			}
			else if (!iLocal_177)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
				{
					if (Local_529.f_10 == 15)
					{
						if (!GlobalFunc_5710("NIG1A_MCS", 1))
						{
							if (func_280(&uLocal_268, sLocal_267, "NIG1A_ML", 7, GlobalFunc_4570(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								if (iLocal_260 == 4)
								{
									Local_529.f_10 = 20;
									iLocal_260 = 5;
								}
								iLocal_177 = 1;
							}
						}
					}
				}
				else
				{
					iLocal_177 = 1;
				}
			}
			else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_610, 60f))
			{
				if (!iLocal_192)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_164("NIG1A_OBJ_04", 10000, 0);
						iLocal_192 = 1;
					}
					else if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!GlobalFunc_5710("NIG1A_ML", 1))
						{
							GlobalFunc_164("NIG1A_OBJ_04", 10000, 0);
							iLocal_192 = 1;
						}
					}
				}
				else if (!iLocal_187)
				{
					if (!GlobalFunc_111())
					{
						if (!func_313(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_280(&uLocal_268, sLocal_267, "NIG1A_TLA", 7, GlobalFunc_4570(), 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(2f, 3f, 0);
								iLocal_187 = 1;
							}
						}
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				iLocal_112 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_663("NIG1A_OBJ_04", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_04");
			}
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				func_10(&(Local_433[iVar0 /*19*/].f_9), 0);
				iVar0++;
			}
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_259(7);
			}
			else
			{
				func_259(5);
			}
			break;
	}
}






























































void func_407()//Position - 0x30042
{
	struct<3> Var0;
	
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	func_344();
	func_322();
	func_272();
	switch (iLocal_112)
	{
		case 0:
			if (func_412())
			{
				if (!OBJECT::DOES_PICKUP_EXIST(Local_548))
				{
					if (func_410(&(Local_548.f_3), 1065353216))
					{
						Local_548 = OBJECT::CREATE_PICKUP(Local_548.f_6, Local_548.f_3, Local_548.f_7, -1, 1, Local_548.f_1);
						if (OBJECT::DOES_PICKUP_EXIST(Local_548))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(Local_548))
							{
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1A_TOOTH", 0))
								{
									Var0 = { OBJECT::GET_PICKUP_COORDS(Local_548) };
									Var0.f_2 = (Var0.f_2 + 0.35f);
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "TOOTH_PING", Var0, "NIGEL_1A_SOUNDSET", 0, 0, 0);
								}
								if (!HUD::DOES_BLIP_EXIST(Local_548.f_2))
								{
									Local_548.f_2 = func_408(Local_548);
								}
								if (HUD::DOES_BLIP_EXIST(Local_548.f_2))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_548.f_2, "NIG1A_TP_BLIP");
								}
							}
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_548.f_1);
						if (!iLocal_206)
						{
							if (iLocal_243 == 0)
							{
								iLocal_243 = MISC::GET_GAME_TIMER();
							}
							iLocal_206 = 1;
						}
						RECORDING::_0x293220DA1B46CEBC(4f, 0f, 0);
						iLocal_112 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_179)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (func_280(&uLocal_268, sLocal_267, "NIG1A_MCS", 7, GlobalFunc_4570(), 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						iLocal_179 = 1;
					}
				}
				else
				{
					iLocal_179 = 1;
				}
			}
			else if (!iLocal_191)
			{
				if (!GlobalFunc_5710("NIG1A_MCS", 1))
				{
					GlobalFunc_164("NIG1A_OBJ_03", 7500, 1);
					iLocal_191 = 1;
				}
			}
			else if (!iLocal_177)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
				{
					if (Local_529.f_10 == 15)
					{
						if (!GlobalFunc_5710("NIG1A_MCS", 1))
						{
							if (func_280(&uLocal_268, sLocal_267, "NIG1A_ML", 7, GlobalFunc_4570(), 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								if (iLocal_260 == 4)
								{
									Local_529.f_10 = 20;
									iLocal_260 = 5;
								}
								iLocal_177 = 1;
							}
						}
					}
				}
				else
				{
					iLocal_177 = 1;
				}
			}
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_548))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 8f, 1);
				iLocal_112 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_663("NIG1A_OBJ_03", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_03");
			}
			iLocal_191 = 1;
			GlobalFunc_846(&(Local_548.f_2));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_548.f_1);
			GlobalFunc_841(&Local_548);
			func_259(4);
			break;
	}
}

int func_408(var uParam0)//Position - 0x302B4
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}


int func_410(var uParam0, float fParam1)//Position - 0x30303
{
	*uParam0 = { 0f, 0f, 0f };
	if (ENTITY::DOES_ENTITY_EXIST(Local_529.f_9))
	{
		*uParam0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(Local_529.f_9, 0), 1.5f, 4f) };
		if (!GlobalFunc_100(*uParam0, 0f, 0f, 0f))
		{
			if (func_411(uParam0, fParam1))
			{
				if (SYSTEM::VDIST(Local_613, *uParam0) > (0.75f + fParam1))
				{
					return 1;
				}
			}
		}
	}
	*uParam0 = { 0f, 0f, 0f };
	return 0;
}

int func_411(var uParam0, float fParam1)//Position - 0x30375
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	bVar5 = false;
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, -552.3391f, 288.7169f, 79.17638f, -549.2252f, 288.5534f, 86.37862f, 5.5f, 0, 1))
	{
		bVar5 = true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, -552.9021f, 281.6948f, 79.97662f, -549.6599f, 281.1817f, 89.67716f, 4f, 0, 1))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		iVar3 = 0;
		iVar4 = 12;
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			switch (iVar3)
			{
				case 0:
					Var0 = { -552.7071f, 290.0112f, 81.2f };
					break;
				
				case 1:
					Var0 = { -552.8163f, 287.682f, 81.2f };
					break;
				
				case 2:
					Var0 = { -553.0605f, 285.4438f, 81.2f };
					break;
				
				case 3:
					Var0 = { -553.4389f, 282.5777f, 81.2f };
					break;
				
				case 4:
					Var0 = { -553.9162f, 279.9202f, 81.2f };
					break;
				
				case 5:
					Var0 = { -555.1916f, 290.489f, 81.2f };
					break;
				
				case 6:
					Var0 = { -555.4751f, 287.1991f, 81.2f };
					break;
				
				case 7:
					Var0 = { -555.2084f, 284.9002f, 81.2f };
					break;
				
				case 8:
					Var0 = { -555.4406f, 282.6853f, 81.2f };
					break;
				
				case 9:
					Var0 = { -555.8541f, 280.3338f, 81.2f };
					break;
				
				case 10:
					Var0 = { -557.7944f, 289.9554f, 81.2f };
					break;
				
				case 11:
					Var0 = { -558.2978f, 284.7914f, 81.2f };
					break;
			}
			if (SYSTEM::VDIST(Local_613, *uParam0) > (0.75f + fParam1))
			{
				*uParam0 = { Var0 };
				return 1;
			}
			iVar3++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_412()//Position - 0x30588
{
	STREAMING::REQUEST_MODEL(Local_548.f_1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1A_TOOTH", 0);
	if (STREAMING::HAS_MODEL_LOADED(Local_548.f_1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1A_TOOTH", 0))
	{
		return 1;
	}
	return 0;
}

void func_413()//Position - 0x305C4
{
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	func_344();
	func_322();
	func_272();
	switch (iLocal_112)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_529.f_8))
				{
					Local_529.f_8 = GlobalFunc_4955(Local_529.f_9, 1, 0, 5);
				}
			}
			func_412();
			iLocal_242 = MISC::GET_GAME_TIMER();
			iLocal_112 = 1;
			break;
		
		case 1:
			if (iLocal_260 == 4)
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 8f, 1);
				iLocal_112 = 2;
			}
			else
			{
				if (!iLocal_190)
				{
					if ((bLocal_180 && !GlobalFunc_5710(sLocal_266, 1)) || iLocal_260 != 0)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_164("NIG1A_OBJ_02", 7500, 1);
							iLocal_190 = 1;
						}
						else if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!GlobalFunc_5710("NIG1A_MSP4", 1) && !GlobalFunc_5710("NIG1A_MSU2", 1))
							{
								GlobalFunc_164("NIG1A_OBJ_02", 7500, 1);
								iLocal_190 = 1;
							}
						}
					}
				}
				func_437();
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
				{
					GlobalFunc_10693(&uLocal_19, Local_529.f_9, 0, 0, 1, 1, 1);
				}
			}
			break;
		
		case 2:
			GlobalFunc_846(&(Local_529.f_8));
			GlobalFunc_4948(&uLocal_19, 0, 0);
			if (GlobalFunc_663("NIG1A_OBJ_02", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_02");
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
			{
				if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_529.f_9)) >= 137.5f)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_529.f_9, 135);
				}
			}
			func_259(3);
			break;
	}
}
























void func_437()//Position - 0x3160D
{
	if (iLocal_260 == 0)
	{
		if (GlobalFunc_115(Local_529.f_9))
		{
			if (iLocal_261 == 0)
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_529.f_9))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_529.f_9, -1, 0, 2);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_529.f_9))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}


void func_439()//Position - 0x316BD
{
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	func_344();
	func_322();
	func_272();
	switch (iLocal_112)
	{
		case 0:
			iLocal_112 = 1;
			break;
		
		case 1:
			if (iLocal_261 != 12 && iLocal_261 != 13)
			{
				GlobalFunc_846(&uLocal_174);
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_174))
			{
				uLocal_174 = GlobalFunc_2324(Local_610, 5, 1);
			}
			func_437();
			if (!iLocal_176)
			{
				if (!bLocal_197)
				{
					if (iLocal_261 == 9)
					{
						if (GlobalFunc_111())
						{
							func_299(0);
						}
						if (func_280(&uLocal_268, sLocal_267, "NIG1A_B1", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 8f, 1);
							func_301(2);
							iLocal_176 = 1;
						}
					}
				}
			}
			else if (bLocal_197)
			{
				if (GlobalFunc_5710("NIG1A_B1", 1))
				{
					GlobalFunc_4956();
				}
			}
			else if (!GlobalFunc_5710("NIG1A_B1", 1))
			{
				GlobalFunc_553(786);
				iLocal_112 = 2;
			}
			if (bLocal_180)
			{
				if (!GlobalFunc_5710(sLocal_266, 1))
				{
					iLocal_112 = 2;
				}
			}
			if (!iLocal_185)
			{
				if (iLocal_261 == 11)
				{
					if (!GlobalFunc_111())
					{
						if (func_440(PLAYER::PLAYER_PED_ID(), 1) != 1)
						{
							if (func_280(&uLocal_268, sLocal_267, "NIG1A_TBE1", 7, 0, 0, 0))
							{
								iLocal_185 = 1;
							}
						}
						else
						{
							iLocal_185 = 1;
						}
					}
				}
				else
				{
					iLocal_185 = 1;
				}
			}
			if (iLocal_260 != 0)
			{
				iLocal_112 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_663("NIG1A_OBJ_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_01");
			}
			iLocal_185 = 1;
			GlobalFunc_846(&uLocal_174);
			func_259(2);
			break;
	}
}

int func_440(int iParam0, bool bParam1)//Position - 0x31855
{
	int iVar0;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			iVar0 = 6;
			return iVar0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = 5;
	}
	else if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		iVar0 = 1;
	}
	else if (PED::IS_PED_IN_COVER(iParam0, 0))
	{
		iVar0 = 0;
	}
	else if (TASK::IS_PED_WALKING(iParam0))
	{
		iVar0 = 4;
	}
	else if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 2;
	}
	else if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 6;
	}
	return iVar0;
}



void func_443()//Position - 0x3197A
{
	Local_613 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_261 = func_60(PLAYER::PLAYER_PED_ID(), 0);
	func_59(iLocal_261);
	switch (iLocal_112)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[0 /*19*/].f_9))
			{
				GlobalFunc_173(&uLocal_268, 4, Local_433[0 /*19*/].f_9, "Nigel1AGroupie01", 0, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[3 /*19*/].f_9))
			{
				GlobalFunc_173(&uLocal_268, 5, Local_433[3 /*19*/].f_9, "Nigel1AManager", 0, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
			{
				GlobalFunc_173(&uLocal_268, 8, Local_529.f_9, "Willy", 0, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[1 /*19*/].f_9))
			{
				GlobalFunc_173(&uLocal_268, GlobalFunc_2020("A"), Local_433[1 /*19*/].f_9, "Nigel1AGroupie02", 0, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[2 /*19*/].f_9))
			{
				GlobalFunc_173(&uLocal_268, GlobalFunc_2020("B"), Local_433[2 /*19*/].f_9, "Nigel1ARoadie", 0, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[4 /*19*/].f_9))
			{
				GlobalFunc_173(&uLocal_268, GlobalFunc_2020("C"), Local_433[4 /*19*/].f_9, "Nigel1AGroupie03", 0, 1);
			}
			if (bLocal_194)
			{
				GlobalFunc_79(800, 0);
			}
			iLocal_112 = 1;
			break;
		
		case 1:
			func_322();
			func_272();
			if (iLocal_261 != 12 && iLocal_261 != 13)
			{
				iLocal_112 = 2;
			}
			else if (!iLocal_193)
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 8f, 1);
				GlobalFunc_164("NIG1A_OBJ_01", 7500, 0);
				if (!HUD::DOES_BLIP_EXIST(uLocal_174))
				{
					uLocal_174 = GlobalFunc_2324(Local_610, 5, 1);
				}
				iLocal_193 = 1;
			}
			break;
		
		case 2:
			func_322();
			func_272();
			GlobalFunc_846(&uLocal_174);
			if (GlobalFunc_663("NIG1A_OBJ_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1A_OBJ_01");
			}
			func_259(1);
			break;
	}
}


void func_445()//Position - 0x31E0E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (iLocal_207[iVar0] == 0)
		{
			if (func_448(iVar0))
			{
				switch (iVar0)
				{
					case 0:
						func_447(0, 1f, 1, 0);
						func_446(0, 5, 1);
						break;
					
					case 1:
						func_447(1, 1f, 1, 0);
						func_446(1, 5, 1);
						break;
					
					case 2:
						func_447(2, 0f, 0, 0);
						func_446(2, 6, 1);
						func_446(2, 5, 1);
						break;
					
					case 3:
						func_447(3, 0f, 0, 0);
						func_446(3, 6, 1);
						func_446(3, 5, 1);
						break;
					
					case 4:
						func_447(4, 0f, 0, 0);
						func_446(4, 6, 1);
						func_446(4, 5, 1);
						break;
					
					case 5:
						func_447(5, 0f, 0, 0);
						func_446(5, 6, 1);
						func_446(5, 5, 1);
						break;
					
					default:
						break;
				}
				iLocal_207[iVar0] = 1;
			}
		}
		iVar0++;
	}
}

int func_446(int iParam0, int iParam1, int iParam2)//Position - 0x31F0A
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_220[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_220[iParam0], iParam1, 0, iParam2);
		return 1;
	}
	return 0;
}

int func_447(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0x31F33
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_220[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(iLocal_220[iParam0], iParam2);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_220[iParam0], fParam1, 0, iParam3);
		return 1;
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x31F68
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_220[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_449()//Position - 0x31F82
{
	if (bLocal_194)
	{
		if (iLocal_110 != 8 && iLocal_110 != 6)
		{
			func_450();
			if (iLocal_215 != 0)
			{
				func_259(8);
			}
		}
	}
}

void func_450()//Position - 0x31FB0
{
	if (iLocal_110 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_529.f_9))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_529.f_9) || PED::IS_PED_INJURED(Local_529.f_9))
			{
				iLocal_215 = 1;
				return;
			}
		}
	}
}

void func_451(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x31FEB
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
				if (fLocal_32 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_33 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_32 = 0f;
				}
				else
				{
					fLocal_32 = (fLocal_32 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_32 = 0f;
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
					fLocal_37 = 0.14f;
				}
				else
				{
					fLocal_37 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_37)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_33.x, (Local_33.f_1 + fLocal_36));
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
					fLocal_32 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_32 = 0f;
			}
		}
	}
}
















void func_467(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)//Position - 0x32A23
{
	GlobalFunc_5823(iParam0, Param1, fParam4, bParam5, 1);
	if (bParam6)
	{
		if (GlobalFunc_115(iParam0))
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
		}
	}
}




void func_471(int iParam0, bool bParam1)//Position - 0x32AF6
{
	func_499(bParam1, 1);
	if (bParam1)
	{
		func_472();
	}
	iLocal_111 = iParam0;
	bLocal_194 = false;
	if (GlobalFunc_188())
	{
		iLocal_195 = 1;
	}
	else
	{
		iLocal_195 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_111 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				func_467(PLAYER::PLAYER_PED_ID(), Local_628, fLocal_259, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_195 = 1;
			}
		}
	}
	func_1(iLocal_111);
}

void func_472()//Position - 0x32B81
{
	func_473(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		if (!GlobalFunc_188())
		{
			func_467(PLAYER::PLAYER_PED_ID(), Local_628, fLocal_259, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	func_559();
	func_259(0);
}

void func_473(bool bParam0, bool bParam1)//Position - 0x32BE8
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	GlobalFunc_4935();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_7632(0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	MISC::SET_TIME_SCALE(1f);
	GlobalFunc_4937(0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_264, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_607, Local_604, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_556.f_1, 0);
	GlobalFunc_200(&uLocal_268, 2);
	GlobalFunc_200(&uLocal_268, 3);
	GlobalFunc_200(&uLocal_268, 4);
	GlobalFunc_200(&uLocal_268, 5);
	GlobalFunc_4948(&uLocal_19, 0, 0);
	func_495(1, 1, 1);
	func_489(-564.671f, 275.4847f, 82.01414f, -564.3256f, 278.7403f, 84.25044f, 2.1f, -564.6144f, 274.183f, 82.01967f, 86f, 1, 1, 1, 0, 0);
	func_489(-561.8617f, 294.4707f, 86.49855f, -562.1533f, 291.7016f, 88.57632f, 1.5f, -554.927f, 294.0723f, 84.36716f, -95f, 1, 1, 1, 0, 0);
	GlobalFunc_10617(140, 1);
	GlobalFunc_10617(139, 1);
	GlobalFunc_5661(4, 1);
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_220[iVar0]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_220[iVar0]);
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_262);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_263);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1A_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1A_SCENE");
	}
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	func_475();
	func_57();
	func_45(bParam0);
	func_474(bParam1);
}

void func_474(bool bParam0)//Position - 0x32DDD
{
	int iVar0;
	
	STREAMING::REMOVE_ANIM_DICT("rcmnigel1a");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_580);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_588);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_596);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_556.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_548.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_529.f_11);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_433[iVar0 /*19*/].f_11);
		iVar0++;
	}
	if (INTERIOR::IS_INTERIOR_READY(iLocal_258))
	{
		STREAMING::SET_INTERIOR_ACTIVE(iLocal_258, 0);
		INTERIOR::UNPIN_INTERIOR(iLocal_258);
	}
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
}

void func_475()//Position - 0x32E68
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		GlobalFunc_169(&(Local_48[iVar0 /*4*/]));
		iVar0++;
	}
}














void func_489(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x36E42
{
	GlobalFunc_8953(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}






void func_495(bool bParam0, int iParam1, int iParam2)//Position - 0x3768A
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
			func_29(iParam1, iParam2, 1, 1);
		}
	}
}




void func_499(bool bParam0, bool bParam1)//Position - 0x37792
{
	if (bParam0)
	{
		func_495(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_500(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_500(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x377C5
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9154(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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



























































void func_559()//Position - 0x3E457
{
	func_575();
	GlobalFunc_9161();
	func_568();
	while (!func_565())
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	GlobalFunc_9621(64, 2, 0);
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_268, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
	}
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 2);
	func_560();
}

void func_560()//Position - 0x3E4C1
{
	int iVar0;
	char* sVar1;
	struct<6> Var2;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_35[0]))
	{
		Local_556 = Local_113.f_35[0];
	}
	else
	{
		func_561(&Local_556, Local_556.f_1, Local_556.f_2, Local_556.f_5, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_556.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_28[0]))
	{
		Local_529.f_9 = Local_113.f_28[0];
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_529.f_9))
	{
		Local_529.f_9 = PED::CREATE_PED(26, Local_529.f_11, Local_529.f_12, Local_529.f_15, 1, 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_529.f_9))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_529.f_9, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_529.f_9, 1);
		PED::SET_PED_DIES_WHEN_INJURED(Local_529.f_9, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_529.f_9, 1);
		PED::SET_PED_CONFIG_FLAG(Local_529.f_9, 42, 1);
		PED::SET_PED_CONFIG_FLAG(Local_529.f_9, 259, 1);
		AUDIO::STOP_PED_SPEAKING(Local_529.f_9, 1);
		PED::SET_PED_LOD_MULTIPLIER(Local_529.f_9, 4f);
		if (PED::IS_PED_IN_GROUP(Local_529.f_9))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_529.f_9);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_529.f_9, iLocal_262);
		PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_529.f_9, 10f, 5);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_529.f_9);
		ENTITY::SET_ENTITY_HEALTH(Local_529.f_9, 250);
		PED::SET_PED_COMBAT_MOVEMENT(Local_529.f_9, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_529.f_9, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
		STREAMING::REQUEST_ANIM_DICT(&cLocal_588);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_588))
		{
			PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_529.f_9, 0, &cLocal_588, "base", 1090519040, 1);
			PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_529.f_9, 1, &cLocal_588, "walk", 1090519040, 1);
			PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_529.f_9, 2, &cLocal_588, "run", 1090519040, 1);
		}
		Local_529.f_10 = 2;
		Local_529.f_16 = 0;
		Local_529.f_17 = 0;
		Local_529.f_18 = 0;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_529.f_9, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_529.f_11);
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_28[1]))
	{
		Local_433[4 /*19*/].f_9 = Local_113.f_28[1];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_28[2]))
	{
		Local_433[0 /*19*/].f_9 = Local_113.f_28[2];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_28[3]))
	{
		Local_433[1 /*19*/].f_9 = Local_113.f_28[3];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_28[4]))
	{
		Local_433[3 /*19*/].f_9 = Local_113.f_28[4];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_28[5]))
	{
		Local_433[2 /*19*/].f_9 = Local_113.f_28[5];
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_433[iVar0 /*19*/].f_9))
		{
			Local_433[iVar0 /*19*/].f_9 = PED::CREATE_PED(26, Local_433[iVar0 /*19*/].f_11, Local_433[iVar0 /*19*/].f_12, Local_433[iVar0 /*19*/].f_15, 1, 1);
		}
		iVar0++;
	}
	iLocal_246[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_616, Local_619, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_246[0], 1);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_246[0], 0);
	sVar1 = "";
	StringCopy(&Var2, "", 24);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_433[iVar0 /*19*/].f_9))
		{
			PED::SET_PED_DIES_WHEN_INJURED(Local_433[iVar0 /*19*/].f_9, 1);
			PED::SET_PED_CONFIG_FLAG(Local_433[iVar0 /*19*/].f_9, 42, 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_433[iVar0 /*19*/].f_9, 1);
			if (PED::IS_PED_IN_GROUP(Local_433[iVar0 /*19*/].f_9))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_433[iVar0 /*19*/].f_9);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_433[iVar0 /*19*/].f_9, iLocal_263);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_433[iVar0 /*19*/].f_9, 10f, 5);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 64, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 128, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 2, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 1, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 32, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 4, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 5, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_433[iVar0 /*19*/].f_9, 17, 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_433[iVar0 /*19*/].f_9, 1);
			switch (iVar0)
			{
				case 3:
					PED::SET_PED_CAN_BE_TARGETTED(Local_433[iVar0 /*19*/].f_9, 1);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 2, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 8, 0, 0, 0);
					Var2 = { func_276(iVar0, 0) };
					sVar1 = GlobalFunc_217(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_433[iVar0 /*19*/].f_9, iLocal_246[0], &cLocal_580, sVar1, 1000f, -8f, 17, 0, 1148846080, 0);
					Local_433[iVar0 /*19*/].f_10 = 2;
					break;
				
				case 2:
					PED::SET_PED_CAN_BE_TARGETTED(Local_433[iVar0 /*19*/].f_9, 1);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 2, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 3, 0, 3, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 8, 0, 2, 0);
					Var2 = { func_276(iVar0, 0) };
					sVar1 = GlobalFunc_217(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_433[iVar0 /*19*/].f_9, iLocal_246[0], &cLocal_580, sVar1, 1000f, -8f, 17, 16, 1148846080, 0);
					Local_433[iVar0 /*19*/].f_10 = 2;
					break;
				
				case 4:
					PED::SET_PED_CAN_BE_TARGETTED(Local_433[iVar0 /*19*/].f_9, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 2, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 7, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 8, 1, 0, 0);
					Local_433[iVar0 /*19*/].f_10 = 2;
					func_278(1);
					break;
				
				case 0:
					PED::SET_PED_CAN_BE_TARGETTED(Local_433[iVar0 /*19*/].f_9, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 2, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 7, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 8, 1, 0, 0);
					Var2 = { func_276(iVar0, 0) };
					sVar1 = GlobalFunc_217(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_433[iVar0 /*19*/].f_9, iLocal_246[0], &cLocal_580, sVar1, 1000f, -8f, 17, 16, 1148846080, 0);
					Local_433[iVar0 /*19*/].f_10 = 2;
					break;
				
				case 1:
					PED::SET_PED_CAN_BE_TARGETTED(Local_433[iVar0 /*19*/].f_9, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 2, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 4, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 7, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_433[iVar0 /*19*/].f_9, 8, 1, 0, 0);
					Var2 = { func_276(iVar0, 0) };
					sVar1 = GlobalFunc_217(&Var2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_433[iVar0 /*19*/].f_9, iLocal_246[0], &cLocal_580, sVar1, 1000f, -8f, 17, 16, 1148846080, 0);
					Local_433[iVar0 /*19*/].f_10 = 2;
					break;
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_433[iVar0 /*19*/].f_9, 1);
			Local_433[iVar0 /*19*/].f_16 = 0;
			Local_433[iVar0 /*19*/].f_17 = 0;
			Local_433[iVar0 /*19*/].f_18 = 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_433[iVar0 /*19*/].f_11);
		iVar0++;
	}
}

int func_561(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6)//Position - 0x3EC83
{
	STREAMING::REQUEST_MODEL(uParam1);
	if (iParam6 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return 0;
	}
	func_562(uParam0, iParam1, Param2, uParam5);
	if (GlobalFunc_115(*uParam0))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 1);
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(*uParam0, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
	return 1;
}

void func_562(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x3ECF1
{
	GlobalFunc_7089(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, uParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}



int func_565()//Position - 0x3EF57
{
	STREAMING::REQUEST_MODEL(Local_548.f_1);
	STREAMING::REQUEST_MODEL(Local_529.f_11);
	STREAMING::REQUEST_MODEL(Local_556.f_1);
	STREAMING::REQUEST_ANIM_DICT("rcmnigel1a");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_580);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_588);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1A", 0);
	if (((((((STREAMING::HAS_MODEL_LOADED(Local_529.f_11) && STREAMING::HAS_MODEL_LOADED(Local_556.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1a")) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_580)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_588)) && func_567()) && func_566(1)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

int func_566(bool bParam0)//Position - 0x3EFFB
{
	if (!INTERIOR::IS_INTERIOR_READY(iLocal_258))
	{
		if (bParam0)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_258);
		}
		return 0;
	}
	STREAMING::SET_INTERIOR_ACTIVE(iLocal_258, 1);
	return 1;
}

int func_567()//Position - 0x3F02A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		STREAMING::REQUEST_MODEL(Local_433[iVar0 /*19*/].f_11);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_433[iVar0 /*19*/].f_11))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_568()//Position - 0x3F079
{
	int iVar0;
	
	if (GlobalFunc_Is_Mission_Retry() || !bLocal_194)
	{
		GlobalFunc_7934(4, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PED::SET_PED_NON_CREATION_AREA(Local_607, Local_604);
	uLocal_264 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_607, Local_604, 0, 1, 1, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_607, Local_604, 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_556.f_1, 1);
	if (((GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)) || GlobalFunc_188()) || !bLocal_194)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_607, Local_604);
		MISC::CLEAR_AREA(Local_610, 15f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-573.394f, 289.3696f, 79.06918f, 15f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-554.17f, 307.68f, 82.84f, 2f, 1, 0, 0, 0);
	}
	GlobalFunc_10617(140, 0);
	GlobalFunc_10617(139, 0);
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iLocal_207[iVar0] = 1;
		iVar0++;
	}
	func_447(0, 1f, 1, 0);
	func_447(1, 1f, 1, 0);
	func_447(2, 0f, 0, 0);
	func_447(3, 0f, 0, 0);
	func_447(4, 0f, 0, 0);
	func_447(5, 0f, 0, 0);
	func_446(2, 6, 1);
	func_446(3, 6, 1);
	func_446(4, 6, 1);
	func_446(5, 6, 1);
	SYSTEM::WAIT(0);
	func_446(0, 5, 1);
	func_446(1, 5, 1);
	func_446(2, 5, 1);
	func_446(3, 5, 1);
	func_446(4, 5, 1);
	func_446(5, 5, 1);
}







void func_575()//Position - 0x400ED
{
	int iVar0;
	
	iLocal_175 = 0;
	iLocal_176 = 0;
	iLocal_177 = 0;
	iLocal_178 = 0;
	iLocal_179 = 0;
	bLocal_180 = false;
	iLocal_181 = 0;
	iLocal_182 = 0;
	iLocal_183 = 0;
	iLocal_184 = 1;
	iLocal_185 = 0;
	iLocal_186 = 0;
	iLocal_187 = 0;
	iLocal_188 = 0;
	iLocal_189 = 0;
	iLocal_190 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
	bLocal_196 = false;
	bLocal_197 = false;
	iLocal_198 = 0;
	iLocal_199 = 0;
	iLocal_200 = 0;
	iLocal_201 = 0;
	iLocal_202 = 0;
	bLocal_203 = false;
	iLocal_204 = 0;
	bLocal_205 = false;
	iLocal_206 = 0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iLocal_207[iVar0] = 0;
		iVar0++;
	}
	iLocal_214 = 0;
	iLocal_216 = 0;
	iLocal_217 = 0;
	iLocal_218 = 0;
	iLocal_219 = 0;
	iLocal_242 = 0;
	iLocal_241 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_245 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iLocal_246[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iLocal_252[iVar0] = -1;
		iVar0++;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113.f_59))
	{
		iLocal_252[1] = Local_113.f_59;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iLocal_220[iVar0] = 0;
		iVar0++;
	}
	iLocal_227[0] = MISC::GET_HASH_KEY("V_64_Dance");
	iLocal_227[1] = MISC::GET_HASH_KEY("V_64_Entry_Trans");
	iLocal_227[2] = MISC::GET_HASH_KEY("V_64_Entry");
	iLocal_227[3] = MISC::GET_HASH_KEY("V_64_Back");
	iLocal_227[4] = MISC::GET_HASH_KEY("V_64_Back_Lower");
	iLocal_227[5] = MISC::GET_HASH_KEY("V_64_Base2");
	iLocal_227[6] = MISC::GET_HASH_KEY("V_64_Cloak");
	iLocal_227[7] = MISC::GET_HASH_KEY("V_64_Side");
	iLocal_227[8] = MISC::GET_HASH_KEY("V_64_Side_Upper");
	iLocal_227[9] = MISC::GET_HASH_KEY("V_64_Upper");
	iLocal_227[10] = MISC::GET_HASH_KEY("V_64_Rear");
	iLocal_227[11] = MISC::GET_HASH_KEY("V_64_Rear_Trans");
	iLocal_217 = 0;
	iLocal_219 = 0;
	iLocal_218 = 0;
	fLocal_259 = 341.468f;
	iLocal_215 = 0;
	StringCopy(&Local_562, "", 24);
	Local_610 = { -558.2858f, 284.4073f, 81.1764f };
	Local_607 = { -577.274f, 270.6505f, 77f };
	Local_604 = { -543.1793f, 315.2973f, 94f };
	Local_616 = { -559.9f, 289.366f, 84.376f };
	Local_619 = { 0f, 0f, -6f };
	Local_622 = { -552.18f, 285.476f, 81.976f };
	Local_625 = { 0f, 0f, 79.5f };
	Local_628 = { -573.0122f, 244.784f, 81.9076f };
	Local_529.f_11 = joaat("u_m_m_willyfist");
	Local_529.f_12 = { -552.66f, 287.75f, 82.18f };
	Local_529.f_15 = 123.75f;
	Local_433[4 /*19*/].f_11 = joaat("a_f_y_bevhills_03");
	Local_433[4 /*19*/].f_12 = { -553.46f, 287.34f, 82.18f };
	Local_433[4 /*19*/].f_15 = -65.86f;
	Local_433[0 /*19*/].f_11 = joaat("a_f_y_bevhills_03");
	Local_433[0 /*19*/].f_12 = { -559.94f, 285.99f, 85.38f };
	Local_433[0 /*19*/].f_15 = -59.06f;
	Local_433[1 /*19*/].f_11 = joaat("a_f_y_bevhills_03");
	Local_433[1 /*19*/].f_12 = { -558.87f, 289.79f, 85.38f };
	Local_433[1 /*19*/].f_15 = 162.44f;
	Local_433[3 /*19*/].f_11 = joaat("a_m_y_vinewood_04");
	Local_433[3 /*19*/].f_12 = { -559f, 286.09f, 85.38f };
	Local_433[3 /*19*/].f_15 = 65.92f;
	Local_433[2 /*19*/].f_11 = joaat("a_m_y_gay_01");
	Local_433[2 /*19*/].f_12 = { -558.84f, 288.97f, 85.38f };
	Local_433[2 /*19*/].f_15 = -7.72f;
	func_38();
	func_475();
	Local_556.f_1 = joaat("gauntlet");
	Local_556.f_2 = { -553.55f, 308.61f, 82.81f };
	Local_556.f_5 = 202.78f;
	Local_548.f_1 = joaat("prop_ld_gold_tooth");
	Local_548.f_6 = joaat("pickup_custom_script");
	Local_548.f_3 = { -554.23f, 300.55f, 82.19f };
	Local_548.f_7 = 0;
	MISC::SET_BIT(&(Local_548.f_7), 3);
	MISC::SET_BIT(&(Local_548.f_7), 4);
	MISC::SET_BIT(&(Local_548.f_7), 1);
	iLocal_260 = 0;
	iLocal_261 = 12;
	PED::ADD_RELATIONSHIP_GROUP("N1A_PLAYER_HATE_GROUP", &iLocal_262);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_262);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_262);
	PED::ADD_RELATIONSHIP_GROUP("N1A_UNAGRESSIVE", &iLocal_263);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_263, iLocal_262);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, iLocal_263);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_263, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_263);
	iLocal_258 = INTERIOR::GET_INTERIOR_AT_COORDS(-555.5934f, 285.7738f, 81.1763f);
	func_576(0, joaat("v_ilev_roc_door1_l"), -561.35f, 278.58f, 83.13f);
	func_576(1, joaat("v_ilev_roc_door1_r"), -559.55f, 278.42f, 83.13f);
	func_576(2, joaat("v_ilev_roc_door3"), -568.88f, 281.11f, 83.13f);
	func_576(3, joaat("v_ilev_ss_door5_r"), -567.94f, 291.93f, 85.52f);
	func_576(4, joaat("v_ilev_roc_door2"), -560.24f, 293.01f, 82.33f);
	func_576(5, joaat("v_ilev_roc_door2"), -569.8f, 293.77f, 79.33f);
}

void func_576(int iParam0, int iParam1, struct<3> Param2)//Position - 0x40621
{
	char cVar0[24];
	
	StringCopy(&cVar0, "N1A_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	iLocal_220[iParam0] = MISC::GET_HASH_KEY(&cVar0);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_220[iParam0]))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_220[iParam0], iParam1, Param2, 0, 1, 0);
	}
}

void func_577()//Position - 0x40665
{
	if (GlobalFunc_9162())
	{
		func_473(0, 1);
	}
	GlobalFunc_9252(&Local_113, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}





























