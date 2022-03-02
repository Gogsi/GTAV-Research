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
	int iLocal_47 = 0;
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	struct<61> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_155 = 16;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
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
	var uLocal_240 = 0;
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
	var uLocal_322 = -1;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 1000;
	var uLocal_330 = 1000;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	float fLocal_374 = 0f;
	float fLocal_375 = 0f;
	float fLocal_376 = 0f;
	float fLocal_377 = 0f;
	float fLocal_378 = 0f;
	float fLocal_379 = 0f;
	struct<3> Local_380 = { 0, 0, 0 } ;
	struct<3> Local_383 = { 0, 0, 0 } ;
	struct<3> Local_386 = { 0, 0, 0 } ;
	struct<3> Local_389 = { 0, 0, 0 } ;
	struct<3> Local_392 = { 0, 0, 0 } ;
	int iLocal_395 = 0;
	bool bLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	bool bLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	bool bLocal_423 = 0;
	bool bLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	bool bLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	char* sLocal_443 = NULL;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	struct<5> Local_448 = { 0, 0, 0, 0, 0 } ;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 21;
	var uLocal_456 = 6;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_494[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_91 = GlobalFunc_4946(58);
	iLocal_92 = joaat("felon2");
	Local_94 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_94);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_552();
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_90 = 0;
		while (!func_547(&Local_94))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_94, 0, 1);
		Global_68490 = 0;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_93))
	{
		PED::_DISPOSE_SYNCHRONIZED_SCENE(uLocal_93);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_CTD", 0);
		func_530(Local_94.f_9, 0, 0, 0, 0, 0);
		if (iLocal_446 != 0 && iLocal_446 != 2)
		{
			func_529();
			if (iLocal_446 != 11)
			{
				func_528();
			}
			func_527();
			func_509();
		}
		switch (iLocal_446)
		{
			case 0:
				func_457();
				break;
			
			case 1:
				func_396();
				break;
			
			case 2:
				func_383();
				break;
			
			case 3:
				func_373();
				break;
			
			case 4:
				func_349();
				break;
			
			case 5:
				func_247();
				break;
			
			case 6:
				func_244();
				break;
			
			case 7:
				func_41();
				break;
			
			case 11:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1BE
{
	switch (iLocal_447)
	{
		case 0:
			func_40();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_443))
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sLocal_443, 1);
			}
			iLocal_447 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_9807(568.7569f, -1770.072f, 27.89345f, 566.2491f, -1768.924f, 30.14358f, 2.5f, 573.5463f, -1759.438f, 28.1695f, 354.0835f, 1, 1, 1, 0, 0);
			}
			if (GlobalFunc_145())
			{
				func_21();
				func_552();
			}
			else if (iLocal_350 == 1)
			{
				if (GlobalFunc_4924(Local_94.f_28[0]))
				{
					GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_SCARE", "JOSH2_SCARE_1", 8, 0, 0);
					iLocal_350 = 2;
				}
			}
			break;
	}
}




















void func_21()//Position - 0xAEE
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	iLocal_445 = 0;
	iLocal_335 = 0;
	iLocal_337 = 0;
	iLocal_338 = 0;
	iLocal_334 = 0;
	iLocal_349 = 0;
	iLocal_395 = 0;
	bLocal_396 = false;
	iLocal_397 = 0;
	iLocal_398 = 0;
	iLocal_399 = 0;
	iLocal_401 = 0;
	iLocal_343 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	iLocal_354 = 0;
	iLocal_344 = 0;
	iLocal_345 = 0;
	iLocal_356 = 0;
	iLocal_406 = 0;
	iLocal_409 = 0;
	iLocal_410 = 0;
	iLocal_411 = 0;
	iLocal_412 = 0;
	iLocal_407 = 0;
	bLocal_408 = false;
	iLocal_413 = 0;
	iLocal_414 = 0;
	iLocal_415 = 0;
	iLocal_416 = 0;
	iLocal_417 = 0;
	iLocal_418 = 0;
	iLocal_419 = 0;
	iLocal_420 = 0;
	iLocal_431 = 0;
	iLocal_432 = 0;
	iLocal_421 = 0;
	iLocal_422 = 0;
	bLocal_434 = false;
	iLocal_369 = 0;
	bLocal_423 = false;
	iLocal_370 = 0;
	iLocal_371 = 0;
	bLocal_424 = false;
	iLocal_425 = 0;
	iLocal_444 = 0;
	GlobalFunc_7517(&iLocal_462);
	GlobalFunc_7517(&iLocal_463);
	GlobalFunc_7517(&iLocal_465);
	GlobalFunc_7517(&iLocal_464);
	GlobalFunc_7517(&iLocal_466);
	GlobalFunc_7517(&iLocal_467);
	GlobalFunc_190(&(Local_94.f_35[0]));
	if (iLocal_403 == 1)
	{
		iLocal_403 = 0;
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_389, Local_392, 100f, 0, 1, 1);
	GlobalFunc_69(&iLocal_470);
	GlobalFunc_69(&iLocal_472);
	GlobalFunc_69(&iLocal_510);
	GlobalFunc_69(&iLocal_511);
	GlobalFunc_69(&(Local_94.f_28[0]));
	GlobalFunc_69(&iLocal_471);
	GlobalFunc_146(&iLocal_473);
	GlobalFunc_146(&iLocal_474);
	GlobalFunc_146(&iLocal_475);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_476);
}



















void func_40()//Position - 0x180B
{
	GlobalFunc_146(&iLocal_473);
	GlobalFunc_146(&iLocal_474);
	GlobalFunc_146(&iLocal_475);
}

void func_41()//Position - 0x1828
{
	struct<3> Var0;
	struct<6> Var3;
	
	if (GlobalFunc_4924(iLocal_470))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_470, 1) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 10f, 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) != 1)
			{
				Var3 = { GlobalFunc_2209() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&Var3, "JOSH2_OUTRO_1") && !MISC::ARE_STRINGS_EQUAL(&Var3, "JOSH2_OUTRO_5"))
					{
						GlobalFunc_4956();
					}
					else
					{
						GlobalFunc_5105();
					}
				}
				PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_470, PLAYER::PLAYER_PED_ID());
				iLocal_368 = MISC::GET_GAME_TIMER();
				bLocal_423 = true;
			}
		}
	}
	if (bLocal_423)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_368 + 5000)
		{
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_470, 17, 1);
			PED::SET_PED_KEEP_TASK(iLocal_470, 1);
			RECORDING::_0x293220DA1B46CEBC(8f, 2f, 0);
			func_46();
		}
		if (!GlobalFunc_111())
		{
			if (iLocal_369 < 3)
			{
				if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_SHOCKH", 7, 0, 0, 0))
				{
					iLocal_369++;
				}
			}
		}
	}
	else
	{
		if (MISC::GET_GAME_TIMER() > iLocal_353 + 2000)
		{
			if (!GlobalFunc_111())
			{
				if (bLocal_424)
				{
					iLocal_435 = 5;
				}
				if (iLocal_435 == 0)
				{
					if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_1", 9, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						iLocal_435++;
					}
				}
				else if (iLocal_435 == 1)
				{
					if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_3", 9, 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						iLocal_435++;
					}
				}
				else if (iLocal_435 == 2)
				{
					if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_5", 9, 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						iLocal_435++;
					}
				}
				else if (iLocal_435 == 3)
				{
					if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_7", 9, 0, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						iLocal_435++;
					}
				}
				else if (iLocal_435 == 4)
				{
					iLocal_435++;
				}
			}
		}
		if (GlobalFunc_4924(iLocal_470))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) == 0)
			{
				TASK::CLEAR_PED_TASKS(iLocal_470);
			}
			if (!PED::IS_PED_RAGDOLL(iLocal_470))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_470, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -875674219) != 1)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_470, PLAYER::PLAYER_PED_ID(), 45f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1);
					}
				}
			}
			func_43(iLocal_470, 1106247680, 60000);
			if (GlobalFunc_155(iLocal_470, PLAYER::PLAYER_PED_ID(), 50f))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			GlobalFunc_146(&iLocal_474);
			PED::SET_PED_RESET_FLAG(iLocal_470, 187, 1);
			if (MISC::GET_GAME_TIMER() < iLocal_353 + 9000 || GlobalFunc_111())
			{
				if (MISC::GET_GAME_TIMER() < iLocal_353 + 9000)
				{
					if (MISC::GET_GAME_TIMER() < iLocal_353 + 4500)
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_470) && !bLocal_424)
						{
							PED::_0x1216E0BFA72CC703(iLocal_470, 10);
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_470);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_470, -1, 0, 2);
							PED::SET_PED_KEEP_TASK(iLocal_470, 1);
							PED::SET_PED_TO_RAGDOLL(iLocal_470, 2500, 3000, 1, 1, 1, 0);
							PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_470, 0);
							PED::CREATE_NM_MESSAGE(1, 787);
							PED::GIVE_PED_NM_MESSAGE(iLocal_470);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_470);
						}
					}
					else if (TASK::IS_PED_GETTING_UP(iLocal_470))
					{
						if (iLocal_406 == 0)
						{
							iLocal_346 = MISC::GET_GAME_TIMER();
							iLocal_406 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_346 + 2200)
						{
						}
					}
					else if (iLocal_406 == 1)
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_470))
						{
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_470, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -875674219) != 1)
							{
								if (!PED::IS_PED_FACING_PED(iLocal_470, PLAYER::PLAYER_PED_ID(), 90f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1);
								}
							}
						}
					}
				}
			}
			else
			{
				PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_470, 17, 1);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_470, 1f);
				PED::SET_PED_KEEP_TASK(iLocal_470, 1);
				if (GlobalFunc_115(iLocal_462))
				{
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(iLocal_462, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 1805844857) != 0)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_470, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
				else if (iLocal_435 >= 5 && !GlobalFunc_111())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_470, 0);
					func_46();
				}
			}
		}
	}
}


void func_43(int iParam0, float fParam1, int iParam2)//Position - 0x1CFB
{
	if (GlobalFunc_4924(iParam0))
	{
		if (ENTITY::GET_ENTITY_SPEED(iParam0) < 0.1f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_478[iLocal_351]))
			{
				uLocal_478[iLocal_351] = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam1, 0, 4);
				if (GlobalFunc_4947(uLocal_478[iLocal_351]))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_478[iLocal_351], 0))
					{
						iLocal_494[iLocal_351] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_478[iLocal_351], -1);
						if (GlobalFunc_4924(iLocal_494[iLocal_351]))
						{
							if (PED::IS_PED_FACING_PED(iLocal_494[iLocal_351], iParam0, 180f))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_494[iLocal_351], -2118855366) != 1)
								{
									TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_494[iLocal_351], uLocal_478[iLocal_351], 24, iParam2);
								}
							}
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_494[iLocal_351]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_494[iLocal_351]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_478[iLocal_351]))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_478[iLocal_351]));
							}
						}
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_494[iLocal_351]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_494[iLocal_351]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_478[iLocal_351]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_478[iLocal_351]));
						}
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_494[iLocal_351]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_494[iLocal_351]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_478[iLocal_351]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_478[iLocal_351]));
					}
				}
			}
		}
	}
	iLocal_351++;
	if (iLocal_351 > 14)
	{
		iLocal_351 = 0;
	}
}



void func_46()//Position - 0x1EFC
{
	if (GlobalFunc_4924(iLocal_470))
	{
		if (!bLocal_423)
		{
			GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_END", 7, 0, 0, 0);
		}
	}
	func_47(89, 0);
	func_552();
}

void func_47(int iParam0, bool bParam1)//Position - 0x1F32
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
	GlobalFunc_11307();
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





































































































































































































void func_244()//Position - 0x26818
{
	if (GlobalFunc_4924(iLocal_470))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) == 0)
		{
			TASK::CLEAR_PED_TASKS(iLocal_470);
		}
		func_43(iLocal_470, 1106247680, 60000);
		if (GlobalFunc_155(iLocal_470, PLAYER::PLAYER_PED_ID(), 50f))
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		PED::SET_PED_RESET_FLAG(iLocal_470, 187, 1);
		if (!PED::IS_PED_RAGDOLL(iLocal_470))
		{
			if (iLocal_400 == 1)
			{
			}
		}
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_470) < 8f)
		{
			iLocal_353 = MISC::GET_GAME_TIMER();
			iLocal_446 = 7;
		}
	}
}



void func_247()//Position - 0x26926
{
	struct<6> Var0;
	struct<3> Var6;
	struct<6> Var9;
	struct<6> Var15;
	struct<6> Var21;
	struct<6> Var27;
	struct<6> Var33;
	struct<6> Var39;
	struct<6> Var45;
	struct<6> Var51;
	
	func_348();
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (iLocal_395 == 0)
	{
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
	}
	if (iLocal_407 == 0)
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_380, 2000f))
		{
			GlobalFunc_69(&(Local_94.f_28[0]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_josh"));
			iLocal_407 = 1;
		}
	}
	if (iLocal_410 == 1)
	{
		func_43(iLocal_470, 1106247680, 60000);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_510))
	{
		GlobalFunc_2297(&iLocal_510, 1, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_fitness_02"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511))
	{
		GlobalFunc_2297(&iLocal_511, 1, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_retriever"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_472))
	{
		GlobalFunc_2297(&iLocal_472, 1, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_01"));
	}
	GlobalFunc_190(&iLocal_468);
	GlobalFunc_190(&iLocal_464);
	GlobalFunc_190(&iLocal_465);
	if (GlobalFunc_199())
	{
		func_345();
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_4947(iLocal_462))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
			{
				GlobalFunc_10365(&uLocal_320, iLocal_462, 0, 0, 1, 1, 1);
			}
			else
			{
				GlobalFunc_4948(&uLocal_320, 0, 0);
			}
		}
		else
		{
			GlobalFunc_4948(&uLocal_320, 0, 0);
		}
	}
	else
	{
		GlobalFunc_4948(&uLocal_320, 0, 0);
	}
	if (!iLocal_432)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_432 = 1;
		}
	}
	if (GlobalFunc_4947(iLocal_462))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_470, iLocal_462) || PED::IS_PED_BEING_JACKED(iLocal_470))
		{
			iLocal_395 = 1;
		}
	}
	if (GlobalFunc_4924(iLocal_470))
	{
		if (iLocal_418 == 0 && FIRE::IS_ENTITY_ON_FIRE(iLocal_470))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_470) > 160)
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_470, 160);
				iLocal_418 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_474))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_470, 1) < 100f)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_470, -1, 0, 2);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_470, 0);
					iLocal_352 = MISC::GET_GAME_TIMER();
					GlobalFunc_146(&iLocal_473);
					GlobalFunc_164("JOSH2_04", 7500, 0);
					func_261(2, "Chase Avery", 1, 0, 0, 1);
					iLocal_474 = GlobalFunc_4955(iLocal_470, 1, 0, 5);
					GlobalFunc_574(773, 0);
					HUD::SET_BLIP_SCALE(iLocal_474, 1f);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iLocal_470, "JOSH2_BCAA", "AVERY", "SPEECH_PARAMS_STANDARD", 0);
				}
			}
		}
		else
		{
			GlobalFunc_4501(iLocal_474, iLocal_470, 280f, 0.7f, 0);
		}
	}
	if (iLocal_338 == 0)
	{
		if (GlobalFunc_4924(iLocal_471))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_352 + 300)
			{
				if (iLocal_414 == 0)
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_471, uLocal_477);
				}
				GlobalFunc_173(&uLocal_155, 7, iLocal_471, "Josh2Viewer", 0, 1);
				iLocal_339 = MISC::GET_GAME_TIMER();
				iLocal_338 = 1;
			}
		}
	}
	else if (iLocal_338 == 1)
	{
		if (GlobalFunc_4947(iLocal_462))
		{
			if (GlobalFunc_4924(iLocal_471))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_471, "rcmjosh2", "house_viewer_yelling", 3))
				{
					if (iLocal_416 == 0)
					{
						if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_VIEW", 7, 1, 0, 0))
						{
							iLocal_416 = 1;
						}
					}
				}
				else if (bLocal_396)
				{
					if (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_471), 255f, 40f))
					{
						TASK::CLEAR_PED_TASKS(iLocal_471);
						TASK::TASK_PLAY_ANIM(iLocal_471, "rcmjosh2", "house_viewer_yelling", 2f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
				if (iLocal_417 == 0)
				{
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_352 + 8000)
			{
				GlobalFunc_2297(&iLocal_471, 1, 0, 1);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_339 + 10000)
			{
				iLocal_338 = 2;
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_474))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_470, 0))
		{
			HUD::SET_BLIP_SCALE(iLocal_474, 1f);
		}
		else
		{
			HUD::SET_BLIP_SCALE(iLocal_474, 0.7f);
		}
	}
	if (bLocal_423)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_368 + 5000)
		{
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_470, 17, 1);
			PED::SET_PED_KEEP_TASK(iLocal_470, 1);
			func_46();
		}
		if (!GlobalFunc_111())
		{
			if (iLocal_369 < 3)
			{
				if (iLocal_345 != 5)
				{
					if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_SHGUN", 7, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
				else if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_SHGUN", 7, 0, 0, 0))
				{
					iLocal_369++;
				}
			}
		}
	}
	if (iLocal_414 == 0)
	{
		if (iLocal_401 == 0)
		{
			if (GlobalFunc_4924(iLocal_470))
			{
				if (bLocal_396 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_352 + 5000)
					{
						iLocal_401 = 1;
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.8775f, 34.38772f, -989.136f, 60.98683f, 58.36674f, 31.5f, 0, 1, 1);
					}
					else if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 5f, 3);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_462, 102, "Josh2_A2", 1);
						}
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_352 + 5000)
				{
					iLocal_401 = 1;
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.8775f, 34.38772f, -989.136f, 60.98683f, 58.36674f, 31.5f, 0, 1, 1);
				}
				else if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 5f, 3);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_462, 101, "Josh2_A1", 1);
					}
				}
			}
		}
		if (iLocal_401 == 1)
		{
			if (iLocal_395 == 0)
			{
				if (GlobalFunc_4924(iLocal_470))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_352 + 10000)
					{
						func_255();
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_462);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_470, -1716.822f, 493.296f, 125.7398f, -1866.035f, 483.7052f, 139.2478f, 18f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_470, -1842.731f, 472.3509f, 108.0403f, -1904.856f, 451.8423f, 138.2812f, 43.5f, 0, 1, 0))
					{
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Josh2_Corner"))
						{
							if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_470, iLocal_462, "Josh2_Corner", 786469, 0, 8, -1, -1f, 0, 1073741824);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_470, iLocal_462, PLAYER::PLAYER_PED_ID(), 8, 34f, 786469, 20f, 20f, 1);
					}
				}
			}
		}
	}
	else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_462);
		if (GlobalFunc_4947(iLocal_462))
		{
			GlobalFunc_5705(iLocal_462, -1083.188f, 266.0258f, 63.0025f, 111.2559f, 0, 1);
		}
		GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -1081.524f, 254.3746f, 62.9404f, 356.8038f, 0, 1);
	}
	if (ENTITY::GET_ENTITY_SPEED(iLocal_462) < 1.5f)
	{
		iLocal_334++;
		if (iLocal_334 > 250)
		{
			iLocal_395 = 1;
			GlobalFunc_571(0, -1);
			iLocal_412 = 1;
			iLocal_413 = 1;
			bLocal_434 = true;
		}
	}
	else if (ENTITY::GET_ENTITY_SPEED(iLocal_462) > 12f)
	{
		iLocal_334 = 0;
	}
	if (((((ENTITY::GET_ENTITY_HEALTH(iLocal_462) < (iLocal_333 - 300) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_462) < (fLocal_374 - 300f)) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_462) < (fLocal_375 - 300f)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_462, 0)) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_462)) || func_252())
	{
		iLocal_412 = 1;
		GlobalFunc_571(0, -1);
		iLocal_395 = 1;
		if (iLocal_413 == 0)
		{
			iLocal_413 = 1;
		}
	}
	if (iLocal_412 == 1)
	{
		if (!bLocal_434)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_462, 101f);
		}
		if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_462))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_462, 0, 1);
		}
	}
	if (iLocal_395 == 1)
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_462) < 14f)
		{
			if (iLocal_411 == 0)
			{
				if (GlobalFunc_155(iLocal_470, PLAYER::PLAYER_PED_ID(), 40f))
				{
					if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_CRASH", 7, 1, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 10f, 1);
						GlobalFunc_164("JOSH2_15", 7500, 0);
						iLocal_411 = 1;
					}
				}
			}
		}
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_470);
		if (GlobalFunc_155(iLocal_470, PLAYER::PLAYER_PED_ID(), 50f))
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		if (iLocal_410 == 0)
		{
			Local_389 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_462, 0f, -70f, 0f) };
			Local_392 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_462, 0f, 70f, 0f) };
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_389, Local_392, 100f, 0, 0, 1);
			iLocal_410 = 1;
		}
		if (GlobalFunc_4924(iLocal_470))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_470, 0))
			{
				Var0 = { GlobalFunc_560() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_CRASH"))
					{
						GlobalFunc_4935();
					}
				}
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_470, 1);
				PED::SET_PED_RESET_FLAG(iLocal_470, 187, 1);
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_470, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -875674219) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1519143300) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) != 1) && !bLocal_423)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1);
				}
				Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_470, 1) };
				if (MISC::IS_BULLET_IN_AREA(Var6, 10f, 1))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) != 1)
					{
						Var9 = { GlobalFunc_2209() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var9))
						{
							if (!MISC::ARE_STRINGS_EQUAL(&Var9, "JOSH2_OUTRO_5"))
							{
								GlobalFunc_4956();
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_470, PLAYER::PLAYER_PED_ID());
						iLocal_368 = MISC::GET_GAME_TIMER();
						bLocal_423 = true;
					}
				}
				if (!PED::IS_PED_RAGDOLL(iLocal_470))
				{
					if (!TASK::IS_PED_GETTING_UP(iLocal_470))
					{
						if (PED::IS_PED_FACING_PED(iLocal_470, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (iLocal_349 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_155(iLocal_470, PLAYER::PLAYER_PED_ID(), 8f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_THREAT", 7, 0, 0, 0))
										{
											if (iLocal_335 == 0)
											{
											}
											iLocal_349 = 1;
										}
									}
								}
							}
							else if (iLocal_349 == 1)
							{
								if (!GlobalFunc_111())
								{
									iLocal_349 = 2;
								}
							}
							else if (iLocal_349 == 2)
							{
								if (!GlobalFunc_111())
								{
									iLocal_349 = 3;
								}
							}
							else if (iLocal_349 == 3)
							{
								if (!GlobalFunc_111())
								{
									iLocal_349 = 4;
								}
							}
						}
					}
				}
				if ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_470) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_470)) || iLocal_425)
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_470))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_470) < 0.1f)
						{
							if ((((((((WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_PISTOL") || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_MG")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SMG")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_RIFLE")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_STUNGUN")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SHOTGUN")) || WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_HEAVY")) || iLocal_425)
							{
								iLocal_425 = 1;
								Var15 = { GlobalFunc_560() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var15))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var15, "JOSH2_THREAT"))
									{
										GlobalFunc_4935();
									}
								}
								if (!bLocal_424)
								{
									if (GlobalFunc_10626(&uLocal_155, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_5", 7, 0, 0))
									{
										iLocal_345 = 4;
										bLocal_424 = true;
									}
								}
								iLocal_371++;
								uLocal_355 = uLocal_355;
								if (iLocal_345 == 0)
								{
									if (iLocal_349 != 0)
									{
										GlobalFunc_5105();
										iLocal_345 = 1;
									}
								}
								else if (iLocal_345 == 1)
								{
									if (iLocal_371 >= 10)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1519143300) != 1)
										{
											PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
											TASK::TASK_HANDS_UP(iLocal_470, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
										}
										iLocal_345 = 3;
									}
								}
								else if (iLocal_345 == 3)
								{
									if (!GlobalFunc_111())
									{
										if (!bLocal_424)
										{
											if (GlobalFunc_10626(&uLocal_155, "JOSH2AU", "JOSH2_OUTRO", "JOSH2_OUTRO_5", 7, 0, 0))
											{
												iLocal_345 = 4;
												bLocal_424 = true;
											}
										}
									}
								}
								else if (iLocal_345 == 4)
								{
									if (!GlobalFunc_111())
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 2112745624) != 1)
										{
											PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
											TASK::TASK_REACT_AND_FLEE_PED(iLocal_470, PLAYER::PLAYER_PED_ID());
											iLocal_368 = MISC::GET_GAME_TIMER();
											bLocal_423 = true;
										}
										iLocal_345 = 5;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GlobalFunc_155(iLocal_470, PLAYER::PLAYER_PED_ID(), 8f))
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_470, 1, 0);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_470);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_470);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -828834893) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_470, 0, 256);
						}
						Var21 = { GlobalFunc_560() };
						Var27 = { GlobalFunc_560() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var21) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var27))
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var21, "JOSH2_CRASH") && MISC::ARE_STRINGS_EQUAL(&Var27, "JOSH2_CRASH_3"))
							{
								GlobalFunc_4935();
							}
						}
					}
				}
				if (iLocal_411 == 1)
				{
					if (!GlobalFunc_111())
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_470, 1, 0);
						WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_470);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_470);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -828834893) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_470, 0, 256);
						}
						Var33 = { GlobalFunc_560() };
						Var39 = { GlobalFunc_560() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var33) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var39))
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var33, "JOSH2_CRASH") && MISC::ARE_STRINGS_EQUAL(&Var39, "JOSH2_CRASH_3"))
							{
								GlobalFunc_4935();
							}
						}
					}
				}
				iLocal_395 = 1;
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_470, 0))
	{
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_470) < 15f)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (WEAPON::GET_WEAPONTYPE_GROUP(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_MELEE"))
				{
					iLocal_335++;
					if (iLocal_335 > iLocal_336 && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_470, joaat("weapon_unarmed"), 0))
					{
						GlobalFunc_553(772);
					}
				}
				else
				{
					iLocal_335 = 5;
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_470);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_470);
			}
		}
	}
	if (PED::IS_PED_FLEEING(iLocal_470))
	{
		iLocal_370++;
	}
	if (iLocal_370 <= 4)
	{
		if ((iLocal_335 > iLocal_336 && !PED::IS_PED_INJURED(iLocal_470)) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_470))
		{
			iLocal_353 = MISC::GET_GAME_TIMER();
			if (HUD::DOES_BLIP_EXIST(iLocal_474))
			{
				HUD::SET_BLIP_SCALE(iLocal_474, 0.7f);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_400 = 1;
			}
			Var45 = { GlobalFunc_560() };
			Var51 = { GlobalFunc_560() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var45) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var51))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var45, "JOSH2_THREAT"))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var51, "JOSH2_THREAT_3"))
					{
						GlobalFunc_5105();
					}
					else
					{
						GlobalFunc_4956();
					}
				}
				if (MISC::ARE_STRINGS_EQUAL(&Var45, "JOSH2_CRASH"))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var51, "JOSH2_CRASH_2") || MISC::ARE_STRINGS_EQUAL(&Var51, "JOSH2_CRASH_4"))
					{
						GlobalFunc_5105();
					}
					else
					{
						GlobalFunc_4956();
					}
				}
				if (MISC::ARE_STRINGS_EQUAL(&Var45, "JOSH2_GUN"))
				{
					GlobalFunc_4956();
				}
			}
			TASK::CLEAR_PED_TASKS(iLocal_470);
			iLocal_446 = 6;
		}
	}
	func_248();
}

void func_248()//Position - 0x27876
{
	fLocal_376 = (150f - GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_462, 1));
	fLocal_376 = (fLocal_376 / 5f);
	if (fLocal_376 < 25f)
	{
		fLocal_376 = 25f;
	}
	if (fLocal_376 > 40f)
	{
		fLocal_376 = 40f;
	}
}




int func_252()//Position - 0x279AC
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_115(iLocal_462))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_462, 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_462, 1, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_462, 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_462, 5, 0))
		{
			iVar0++;
		}
	}
	if (iVar0 > 1)
	{
		return 1;
	}
	return 0;
}



void func_255()//Position - 0x27B08
{
	if (!GlobalFunc_111() && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_470, 80f))
	{
		if (iLocal_366 < 7)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_367 + (20000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 10000))))
			{
				if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_CHASE", 6, 0, 0, 0))
				{
					iLocal_367 = MISC::GET_GAME_TIMER();
					iLocal_366++;
					return;
				}
			}
		}
	}
}






void func_261(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x27E77
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
		GlobalFunc_10926(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}




















































































void func_345()//Position - 0x2E0AC
{
	if (GlobalFunc_4947(iLocal_469))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_469))
		{
			if ((((PAD::IS_CONTROL_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 278)) || PAD::IS_CONTROL_PRESSED(0, 279)) || MISC::GET_GAME_TIMER() > iLocal_347 + 2500)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_469))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_469);
				}
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_469, 0);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_469, 1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
}



void func_348()//Position - 0x2E1AB
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JOSH_02_SCENE"))
	{
		if (GlobalFunc_115(iLocal_462))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_462, "JOSH_02_SCENE_LENNY_VEHICLE", 0);
		}
		AUDIO::START_AUDIO_SCENE("JOSH_02_SCENE");
	}
}

void func_349()//Position - 0x2E1DE
{
	func_353();
	if (!HUD::DOES_BLIP_EXIST(iLocal_474))
	{
		if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -853.6745f, -52.27691f, 31.25732f, -918.1265f, 47.04292f, 121.3313f, 75f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -879.9109f, 56.84485f, 38.78366f, -958.2355f, 59.31521f, 124.6119f, 25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -859.3307f, 40.05341f, 29.86543f, -937.5096f, 8.682496f, 123.8059f, 68.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -841.4558f, -15.82028f, 54.40123f, -859.7773f, 16.35736f, 39.16192f, 24.5f, 0, 1, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_473))
			{
				iLocal_473 = GlobalFunc_2324(-903.6451f, 25.6888f, 45.4577f, 5, 1);
				GlobalFunc_4502(&iLocal_473, -821.0944f, -2.6563f, 39.9561f, 31.8236f);
			}
			iLocal_446 = 3;
		}
	}
	if (GlobalFunc_4947(iLocal_462))
	{
		if (GlobalFunc_4924(iLocal_471))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -895.7417f, 19.69889f, 67.24831f, -905.2816f, 26.62793f, 41.10735f, 9f, 0, 1, 0) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_462)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_462))
			{
				if (CAM::GET_FOCUS_PED_ON_SCREEN(50f, 31086, 0.8f, 0.8f, 0.5f, 1090519040, 1051361018, 31086, 24818) == iLocal_470 || CAM::GET_FOCUS_PED_ON_SCREEN(50f, 31086, 0.8f, 0.8f, 0.5f, 1090519040, 1051361018, 31086, 24818) == iLocal_471)
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1794415470) != 0)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_470, iLocal_462, 20000, -1, 1073741824, 1, 0);
						}
					}
					iLocal_354++;
					if (iLocal_354 > 30 && PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 1))
					{
						iLocal_397 = 1;
					}
				}
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -950.7422f, 23.49108f, 33.74755f, -925.2653f, -17.06113f, 87.12195f, 16f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -931.3618f, -25.90824f, 34.82578f, -946.2923f, -5.137248f, 55.44762f, 28.5f, 0, 1, 0))
			{
				bLocal_396 = true;
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_470, iLocal_462, 20000, -1, 1073741824, 1, 0);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 1))
			{
				iLocal_397 = 1;
			}
		}
		if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -914.3418f, 14.09854f, 51.177f, -907.5228f, 23.19679f, 41.12431f, 25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -928.8252f, -8.227508f, 56.12098f, -922.3065f, -3.359912f, 39.81489f, 11.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -928.0486f, -38.29866f, 33.43792f, -959.601f, 5.279084f, 62.93104f, 36.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -912.8772f, 1.544632f, 67.43806f, -927.4288f, 20.62116f, 42.38565f, 20.5f, 0, 1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_462, PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -950.7422f, 23.49108f, 33.74755f, -925.2653f, -17.06113f, 87.12195f, 16f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -931.3618f, -25.90824f, 34.82578f, -946.2923f, -5.137248f, 55.44762f, 28.5f, 0, 1, 0))
			{
				bLocal_396 = true;
				iLocal_397 = 1;
			}
			else
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, -1794415470) != 0)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_470, iLocal_462, 20000, -1, 1073741824, 1, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 1))
				{
					iLocal_397 = 1;
				}
			}
		}
		if (iLocal_397 == 1)
		{
			func_350();
		}
	}
	else
	{
		RECORDING::_0x293220DA1B46CEBC(4f, 10f, 1);
		iLocal_446 = 5;
	}
}

void func_350()//Position - 0x2E6D5
{
	if (GlobalFunc_4924(iLocal_470))
	{
		if (GlobalFunc_4924(iLocal_471))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_477);
			if (bLocal_396 == 1)
			{
				TASK::TASK_ACHIEVE_HEADING(0, 255f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "rcmjosh2", "house_viewer_yelling", 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_477);
		}
		if (GlobalFunc_4924(iLocal_470) && GlobalFunc_4947(iLocal_462))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_470, 1);
			if (!HUD::DOES_BLIP_EXIST(iLocal_474))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_470, 1) < 100f)
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_470, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_470, -1, 0, 2);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_470, 0);
						iLocal_352 = MISC::GET_GAME_TIMER();
						GlobalFunc_146(&iLocal_473);
						GlobalFunc_164("JOSH2_04", 7500, 0);
						func_261(2, "Chase Avery", 1, 0, 0, 1);
						iLocal_474 = GlobalFunc_4955(iLocal_470, 1, 0, 5);
						GlobalFunc_574(773, 0);
						HUD::SET_BLIP_SCALE(iLocal_474, 1f);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iLocal_470, "JOSH2_BCAA", "AVERY", "SPEECH_PARAMS_STANDARD", 0);
					}
				}
			}
			if (iLocal_332 == 1)
			{
			}
			else if (iLocal_332 == 2)
			{
				if (bLocal_396 == 1)
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_462, 102, "Josh2_A2", 1);
						}
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_462, 101, "Josh2_A1", 1);
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(iLocal_470, iLocal_462, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462))
				{
					iLocal_446 = 5;
				}
			}
		}
	}
}



void func_353()//Position - 0x2E8DA
{
	struct<6> Var0;
	struct<6> Var6;
	var uVar12;
	
	Var0 = { GlobalFunc_560() };
	Var6 = { GlobalFunc_2209() };
	if (iLocal_419 == 1 && iLocal_420 == 1)
	{
		if (GlobalFunc_4924(iLocal_510))
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_510);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -891.9106f, 17.15756f, 43.93274f, -923.387f, 42.69214f, 50.96858f, 12.25f, 0, 1, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG1") || MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
					{
						GlobalFunc_5105();
					}
				}
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_510, 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_510, 713668775) != 0) && !GlobalFunc_775(iLocal_510, -824.8292f, -24.5877f, 38.1216f, 4f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_510, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 0.25f, 0, 1193033728);
					iLocal_444 = 5;
				}
			}
			if (iLocal_444 != 6)
			{
				if ((((func_355(iLocal_510, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_355(iLocal_511, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_510, PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_511, PLAYER::PLAYER_PED_ID(), 1)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_510, 1), 20f, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG1") || MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
						{
							GlobalFunc_4956();
						}
					}
					AUDIO::STOP_PED_SPEAKING(iLocal_510, 0);
					GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_ATTACK", 8, 0, 0, 0);
					if (GlobalFunc_4924(iLocal_511))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_511, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_511, 1);
					}
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_510, 0, -1056964608);
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_510, 1, -1056964608);
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_510, 2, -1056964608);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_510, PLAYER::PLAYER_PED_ID());
					GlobalFunc_2297(&iLocal_510, 1, 0, 1);
					GlobalFunc_2297(&iLocal_511, 1, 0, 1);
					iLocal_444 = 6;
				}
			}
		}
		else if (iLocal_444 != 6)
		{
			if (GlobalFunc_4924(iLocal_511))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_511, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_511, 1);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG1") || MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
				{
					GlobalFunc_4956();
				}
			}
			AUDIO::STOP_PED_SPEAKING(iLocal_510, 0);
			GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_ATTACK", 8, 0, 0, 0);
			GlobalFunc_2297(&iLocal_510, 1, 0, 1);
			GlobalFunc_2297(&iLocal_511, 1, 0, 1);
			iLocal_444 = 6;
		}
	}
	switch (iLocal_444)
	{
		case 0:
			iLocal_436 = 0;
			STREAMING::REQUEST_MODEL(joaat("a_f_y_fitness_02"));
			STREAMING::REQUEST_MODEL(joaat("a_c_retriever"));
			STREAMING::REQUEST_ANIM_DICT("move_f@jogger");
			iLocal_444 = 1;
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_510))
			{
				if ((STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_fitness_02")) && STREAMING::HAS_MODEL_LOADED(joaat("a_c_retriever"))) && STREAMING::HAS_ANIM_DICT_LOADED("move_f@jogger"))
				{
					iLocal_510 = PED::CREATE_PED(26, joaat("a_f_y_fitness_02"), -885.9105f, 9.2858f, 43.7928f, 239.941f, 1, 1);
					iLocal_511 = PED::CREATE_PED(26, joaat("a_c_retriever"), -888.4332f, 10.515f, 43.9829f, 241.9898f, 1, 1);
					GlobalFunc_173(&uLocal_155, 4, iLocal_510, "JOSH2JOGGER", 0, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_510, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_510, 2, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_510, 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_510, 4, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_510, 8, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_510, 10, 1, 0, 0);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_511);
					PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_510, 0, "move_f@jogger", "idle", 2f, 1);
					PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_510, 1, "move_f@jogger", "jogging", 2f, 1);
					PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_510, 2, "move_f@jogger", "run", 2f, 1);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_511, iLocal_510, -1, 0, 2);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_511, iLocal_510, 0f, -2f, 0f, 1.5f, -1, 0.5f, 1);
					AUDIO::STOP_PED_SPEAKING(iLocal_510, 1);
					iLocal_419 = 1;
					iLocal_420 = 1;
				}
			}
			else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_510, 75f))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar12);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -874.8856f, 3.164f, 42.9592f, 1.2f, -1, 1f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -864.1951f, -0.3664f, 42.314f, 1.2f, -1, 1f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -847.0853f, -0.1079f, 41.7293f, 1.2f, -1, 1f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -835.9113f, -5.3215f, 40.8279f, 1.2f, -1, 1f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 1f, 1, 1193033728);
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar12);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_510, uVar12);
				TASK::CLEAR_SEQUENCE_TASK(&uVar12);
				iLocal_444 = 2;
			}
			break;
		
		case 2:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if ((GlobalFunc_4924(iLocal_510) && GlobalFunc_155(iLocal_510, PLAYER::PLAYER_PED_ID(), 15f)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 12f)
			{
				if (GlobalFunc_663("JOSH2_07", 0, 0))
				{
					if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOG1", 7, 1, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_510, -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_510, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_511, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_510, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 1.2f, -1, 1f, 1);
						iLocal_444 = 3;
					}
				}
				else if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOG1", 7, 0, 0, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_510, -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_510, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_510, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 1.2f, -1, 1f, 1);
					iLocal_444 = 3;
				}
			}
			break;
		
		case 3:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (GlobalFunc_4924(iLocal_510) && GlobalFunc_155(iLocal_510, PLAYER::PLAYER_PED_ID(), 4.7f))
			{
				if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOG2", 7, 0, 0, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_510, 1056466932) == 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_510);
					}
					iLocal_444 = 4;
				}
			}
			func_43(iLocal_510, 30f, 10000);
			break;
		
		case 4:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (GlobalFunc_4924(iLocal_510))
			{
				if (GlobalFunc_4924(iLocal_511))
				{
					if (GlobalFunc_155(iLocal_510, iLocal_511, 2.5f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_511, 993674639) != 1)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_511, "WORLD_DOG_SITTING_RETRIEVER", 0, 1);
						}
					}
				}
				if (!GlobalFunc_155(iLocal_510, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
						{
							GlobalFunc_4935();
						}
					}
				}
				else if (!PED::IS_PED_FACING_PED(iLocal_510, PLAYER::PLAYER_PED_ID(), 90f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_510, PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			if (!GlobalFunc_111())
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_511, iLocal_510, 0f, -2f, 0f, 1.5f, -1, 0.5f, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_510, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 0.25f, 0, 1193033728);
				iLocal_444 = 5;
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH2_JOG2"))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var6, "JOSH2_JOG2_11"))
				{
					if (iLocal_436 == 0)
					{
						iLocal_437 = MISC::GET_GAME_TIMER();
						iLocal_436 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_437 + 1200)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_511, iLocal_510, 0f, -2f, 0f, 1.5f, -1, 0.5f, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_510, -824.8292f, -24.5877f, 38.1216f, 1.2f, -1, 0.25f, 0, 1193033728);
						iLocal_444 = 5;
					}
				}
			}
			func_43(iLocal_510, 30f, 10000);
			break;
		
		case 5:
			if (GlobalFunc_4924(iLocal_510))
			{
				if (GlobalFunc_775(iLocal_510, -824.8292f, -24.5877f, 38.1216f, 15f))
				{
					iLocal_419 = 0;
					iLocal_420 = 0;
					TASK::TASK_WANDER_STANDARD(iLocal_510, 1193033728, 0);
					PED::SET_PED_KEEP_TASK(iLocal_510, 1);
					GlobalFunc_2297(&iLocal_510, 1, 0, 1);
					iLocal_444 = 7;
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}


int func_355(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2F177
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8640(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return GlobalFunc_2995(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_356(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_356(int iParam0, float fParam1)//Position - 0x2F232
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_2994(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
				if (func_357(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_357(int iParam0, float fParam1)//Position - 0x2F2A8
{
	return func_358(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_358(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2F2C0
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_365(iParam0, iParam1);
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
		iVar4 = func_361();
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



int func_361()//Position - 0x2F572
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




int func_365(int iParam0, int iParam1)//Position - 0x2F689
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








void func_373()//Position - 0x2FAA9
{
	if (!iLocal_421)
	{
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 0);
		GlobalFunc_164("JOSH2_01", 7500, 0);
		iLocal_421 = 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 1)
	{
		if (((((((PAD::IS_CONTROL_PRESSED(0, 30) || PAD::IS_CONTROL_PRESSED(0, 31)) || PAD::IS_CONTROL_PRESSED(0, 23)) || PAD::IS_CONTROL_PRESSED(0, 21)) || PAD::IS_CONTROL_PRESSED(0, 22)) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 1))) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 2))) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 32)))
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_441))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_441) > 0f)
		{
			if (iLocal_431 == 0)
			{
				if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_INT_LO", 7, 1, 0, 0))
				{
					iLocal_431 = 1;
				}
			}
		}
	}
	if (GlobalFunc_4924(Local_94.f_28[0]))
	{
		PED::SET_PED_RESET_FLAG(Local_94.f_28[0], 129, 1);
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_442))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_441) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_441) > 0.99f)
			{
				uLocal_442 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_442, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_94.f_28[0], uLocal_442, "rcmjosh2", "josh_sitting_loop", 4f, -1f, 1, 0, 1148846080, 0);
			}
		}
	}
	if (iLocal_407 == 0)
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_380, 2000f))
		{
			GlobalFunc_69(&(Local_94.f_28[0]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_josh"));
			GlobalFunc_200(&uLocal_155, 5);
			GlobalFunc_173(&uLocal_155, 5, 0, "JOSH", 0, 1);
			iLocal_407 = 1;
		}
	}
	else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_380, 300f))
	{
		if (bLocal_408 == 0)
		{
			func_380();
			func_379();
			func_376();
		}
		func_353();
	}
	if (iLocal_397 == 1)
	{
		func_350();
	}
	if (bLocal_408)
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -853.6745f, -52.27691f, 31.25732f, -918.1265f, 47.04292f, 121.3313f, 75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -879.9109f, 56.84485f, 38.78366f, -958.2355f, 59.31521f, 124.6119f, 25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -859.3307f, 40.05341f, 29.86543f, -937.5096f, 8.682496f, 123.8059f, 68.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -841.4558f, -15.82028f, 54.40123f, -859.7773f, 16.35736f, 39.16192f, 24.5f, 0, 1, 0))
		{
			GlobalFunc_146(&iLocal_473);
			if (iLocal_398 == 0)
			{
				GlobalFunc_164("JOSH2_07", 7500, 0);
				iLocal_398 = 1;
			}
			iLocal_446 = 4;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -928.0486f, -38.29866f, 33.43792f, -959.601f, 5.279084f, 62.93104f, 36.25f, 0, 1, 0))
		{
			iLocal_398 = 1;
			bLocal_396 = true;
			if (func_374(iLocal_470))
			{
				iLocal_356++;
				if (iLocal_356 > 12)
				{
					iLocal_397 = 1;
					func_350();
				}
			}
		}
	}
}

bool func_374(int iParam0)//Position - 0x2FE0F
{
	return func_375(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), PLAYER::PLAYER_PED_ID(), 250, 7);
}

bool func_375(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2FE29
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_365(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar0 != -1)
		{
			GlobalFunc_169(&(Local_48[iVar0 /*4*/]));
		}
		return 0;
	}
	if (iVar0 == -1)
	{
		iVar0 = func_361();
		if (iVar0 == -1)
		{
			return 0;
		}
		Local_48[iVar0 /*4*/].f_1 = iParam0;
		Local_48[iVar0 /*4*/].f_2 = iParam1;
	}
	uVar1 = GlobalFunc_6422(&(Local_48[iVar0 /*4*/]), ENTITY::GET_ENTITY_COORDS(iParam0, 1), iParam1, &(Local_48[iVar0 /*4*/].f_3), iParam0, iParam3);
	return (uVar1 || (MISC::GET_GAME_TIMER() - Local_48[iVar0 /*4*/].f_3) < iParam2);
}

void func_376()//Position - 0x2FEC9
{
	uLocal_513 = PED::ADD_SCENARIO_BLOCKING_AREA(-928.9488f, -9.733973f, 41.00143f, -917.7125f, 26.53436f, 54.60239f, 0, 1, 1, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.8775f, 34.38772f, -989.136f, 60.98683f, 58.36674f, 31.5f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-928.9488f, -9.733973f, 41.00143f, -917.7125f, 26.53436f, 54.60239f, 30f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-847.7967f, -7.619044f, 37.65366f, -961.2172f, 70.09298f, 56.28784f, 28.75f, 0, 0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_462))
	{
		iLocal_462 = VEHICLE::CREATE_VEHICLE(joaat("comet2"), Local_380, fLocal_377, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_462);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_462, 139, 139);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_462, 90, 90);
		iLocal_333 = ENTITY::GET_ENTITY_HEALTH(iLocal_462);
		fLocal_374 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_462);
		fLocal_375 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_462);
		VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_462, 0);
		VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_462, 2);
		VEHICLE::SET_VEHICLE_MOD(iLocal_462, 12, 1, false);
		VEHICLE::ROLL_DOWN_WINDOWS(iLocal_462);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_462, 20, true);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_462, 22, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_470))
	{
		iLocal_470 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_462, 26, joaat("a_m_y_business_03"), -1, 1, 1);
		AUDIO::STOP_PED_SPEAKING(iLocal_470, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_470, 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_470, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_470, 4, 1, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_470, 1);
		ENTITY::SET_ENTITY_HEALTH(iLocal_470, 280);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_470, 1, 0);
		PED::SET_PED_LEG_IK_MODE(iLocal_470, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_470, 17, 1);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_470, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_470, 281, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_470, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_470, 242, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_470, 243, 1);
		PED::SET_DRIVER_ABILITY(iLocal_470, 1f);
		PED::SET_DRIVER_RACING_MODIFIER(iLocal_470, 1f);
		GlobalFunc_9621(58, 2, 0);
		GlobalFunc_173(&uLocal_155, 3, iLocal_470, "AVERY", 0, 1);
		GlobalFunc_173(&uLocal_155, 5, 0, "JOSH", 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_463))
	{
		iLocal_463 = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -887.6388f, -16.376f, 42.0828f, 123.9787f, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_463);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_463, 2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_468))
	{
		iLocal_468 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -921.9576f, 19.3388f, 46.7128f, 94.1395f, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_468);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_468, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_466))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_35[0]))
		{
			iLocal_466 = VEHICLE::CREATE_VEHICLE(joaat("felon2"), 558.0939f, -1765.383f, 28.86225f, -24.6765f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_466);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_466, 2);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_465))
	{
		iLocal_465 = VEHICLE::CREATE_VEHICLE(joaat("comet2"), -877.5642f, 43.1467f, 47.759f, 81.1951f, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_465);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_465, 3);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_464))
	{
		if (iLocal_332 == 1)
		{
			iLocal_464 = VEHICLE::CREATE_VEHICLE(joaat("superd"), Local_386, fLocal_379, 1, 1);
		}
		else if (iLocal_332 == 2)
		{
			iLocal_464 = VEHICLE::CREATE_VEHICLE(joaat("superd"), Local_383, fLocal_378, 1, 1);
		}
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_464, 2);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_464);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_471))
	{
		iLocal_471 = PED::CREATE_PED(26, joaat("a_m_m_bevhills_01"), -923.43f, 9.76f, 47.71f, 150f, 1, 1);
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_471, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_471);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_471, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_471, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_471, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_471, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_471, 10, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_471, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_471, 17, 1);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_471, iLocal_470, -1, 0, 2);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_470, iLocal_471, -1, 2048, 2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_467))
	{
		iLocal_467 = VEHICLE::CREATE_VEHICLE(joaat("bati"), -888.3505f, -8.9959f, 42.346f, 208.0802f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_467, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_472))
	{
		iLocal_472 = PED::CREATE_PED(26, joaat("a_m_m_bevhills_01"), -890.0759f, -9.350061f, 43.3299f, -62.37922f, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_472, 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_472, 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_472, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_472, 8, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_472, 10, 1, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_472, 17, 1);
		AUDIO::STOP_PED_SPEAKING(iLocal_472, 1);
		GlobalFunc_173(&uLocal_155, 6, iLocal_472, "Josh2PoshBiker", 0, 1);
	}
	if (GlobalFunc_4924(iLocal_472))
	{
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_472, "WORLD_HUMAN_SMOKING", 0, 0);
	}
	bLocal_408 = true;
}



void func_379()//Position - 0x305EE
{
	while (((((((((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "Josh2_A1") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "Josh2_A2")) || !STREAMING::HAS_MODEL_LOADED(joaat("comet2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_03"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bullet"))) || !STREAMING::HAS_MODEL_LOADED(joaat("superd"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bati"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01"))) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2ig_1")) || !STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Josh2Roll"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_380()//Position - 0x306B8
{
	STREAMING::REQUEST_MODEL(joaat("comet2"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_business_03"));
	STREAMING::REQUEST_MODEL(joaat("bullet"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_MODEL(joaat("bati"));
	STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_01"));
	STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
	STREAMING::REQUEST_ANIM_DICT("rcmjosh2ig_1");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	TASK::REQUEST_WAYPOINT_RECORDING("Josh2Roll");
	TASK::REQUEST_WAYPOINT_RECORDING("Josh2_Corner");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "Josh2_A1");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "Josh2_A2");
}



void func_383()//Position - 0x30767
{
	func_384();
	func_261(1, "Go To Rockford", 0, 0, 0, 1);
	iLocal_446 = 3;
}

void func_384()//Position - 0x30784
{
	GlobalFunc_9621(58, 2, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_28[0]))
	{
		while (!func_393(&(Local_94.f_28[0]), 58, 566.5068f, -1772.19f, 28.3575f, 337.1148f, "JOSH", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_4924(Local_94.f_28[0]))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_94.f_28[0], 17, 1);
		GlobalFunc_173(&uLocal_155, 5, Local_94.f_28[0], "JOSH", 0, 1);
	}
	func_385(1, 1, 1, 1);
	GlobalFunc_173(&uLocal_155, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_332 = 2;
	Local_383 = { -872.0014f, -51.035f, 37.337f };
	Local_386 = { -924.3982f, 8.4185f, 46.7128f };
	fLocal_378 = 270.2333f;
	fLocal_379 = 219.1117f;
	if (iLocal_332 == 1)
	{
		Local_380 = { Local_383 };
		fLocal_377 = fLocal_378;
	}
	else if (iLocal_332 == 2)
	{
		Local_380 = { Local_386 };
		fLocal_377 = fLocal_379;
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_473))
	{
		iLocal_473 = GlobalFunc_2324(-903.6451f, 25.6888f, 45.4577f, 5, 1);
		GlobalFunc_4502(&iLocal_473, -821.0944f, -2.6563f, 39.9561f, 31.8236f);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("comet2"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_business_03"), 1);
	iLocal_341 = MISC::GET_GAME_TIMER();
}

void func_385(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x308ED
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








int func_393(var uParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)//Position - 0x30B97
{
	if (GlobalFunc_7189(uParam0, iParam1, Param2, fParam5, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
				PED::SET_PED_MONEY(*uParam0, 0);
				if (iParam7 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
				}
			}
			PED::SET_PED_NAME_DEBUG(*uParam0, sParam6);
		}
		return 1;
	}
	return 0;
}



void func_396()//Position - 0x30CC6
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (iLocal_445 < 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 565.1842f, -1777.227f, 30.70416f, 549.9508f, -1770.103f, 35.94777f, 7f, 0, 1, 0))
		{
			if (!iLocal_422)
			{
				uLocal_514 = STREAMING::STREAMVOL_CREATE_FRUSTUM(556.0839f, -1724.962f, 33.0732f, 18.6933f, 0.1321f, -157.4946f, 200f, 13, 127);
				iLocal_422 = 1;
			}
		}
		else if (iLocal_422)
		{
			STREAMING::STREAMVOL_DELETE(uLocal_514);
			iLocal_422 = 0;
		}
	}
	switch (iLocal_445)
	{
		case 0:
			iLocal_427 = 0;
			iLocal_428 = 0;
			iLocal_429 = 0;
			iLocal_430 = 0;
			CUTSCENE::REQUEST_CUTSCENE("josh_2_intp1_t4", 8);
			STREAMING::REQUEST_ANIM_DICT("rcmjosh");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
			if (GlobalFunc_4924(Local_94.f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2"))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_94.f_28[0], 0);
					GlobalFunc_173(&uLocal_155, 5, Local_94.f_28[0], "JOSH", 0, 1);
					GlobalFunc_173(&uLocal_155, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					uLocal_438 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
					if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_INT_LI", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(1f, 6f, 3);
						if (iLocal_426 == 0)
						{
							GlobalFunc_563(1);
							iLocal_426 = 1;
						}
						GlobalFunc_4923(&Local_94, 0, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_94.f_28[0], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_94.f_28[0], uLocal_438, "rcmjosh2", "josh_leadin", 1000f, -4f, 5, 0, 1148846080, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94.f_28[0], -1, 0, 2);
							GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 567.5291f, -1769.423f, 28.1428f, 159.2917f, 0, 1);
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_94.f_28[0], uLocal_438, "rcmjosh2", "josh_leadin", 1f, -4f, 5, 0, 1148846080, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94.f_28[0], -1, 0, 2);
						}
						func_431(0f, 0f, 0f, 0f, 0, 145);
						iLocal_445 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_433)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_438))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_438) >= 0.025f)
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							GlobalFunc_79(800, 0);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_438) >= 0.371f)
					{
						iLocal_430 = 1;
						if (!HUD::DOES_BLIP_EXIST(iLocal_475))
						{
							iLocal_475 = GlobalFunc_2324(550.2f, -1772.53f, 32.45f, 5, 1);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_438) < 0.371f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 565.1842f, -1777.227f, 30.70416f, 549.9508f, -1770.103f, 35.94777f, 7f, 0, 1, 0))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_94.f_28[0], 1);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_94.f_28[0], -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 0);
							iLocal_433 = 1;
							return;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_439))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_438) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_438) > 0.99f)
					{
						uLocal_439 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_439, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_94.f_28[0], uLocal_439, "rcmjosh2", "josh_wait_loop_exit", 4f, -4f, 5, 0, 1148846080, 0);
					}
				}
				else
				{
					func_429();
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_438) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_438) >= 0.371f)
				{
					iLocal_430 = 1;
					if (!HUD::DOES_BLIP_EXIST(iLocal_475))
					{
						iLocal_475 = GlobalFunc_2324(550.2f, -1772.53f, 32.45f, 5, 1);
					}
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_79(800, 0);
				}
				iLocal_430 = 1;
				if (!HUD::DOES_BLIP_EXIST(iLocal_475))
				{
					iLocal_475 = GlobalFunc_2324(550.2f, -1772.53f, 32.45f, 5, 1);
				}
				if (!PED::IS_PED_FACING_PED(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 45f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 0);
				}
				func_429();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 550.2f, -1772.53f, 33.45f, 3f, 3f, 1f, 0, 1, 0))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					HUD::DISPLAY_HUD(0);
					HUD::DISPLAY_RADAR(0);
					iLocal_430 = 0;
					GlobalFunc_146(&iLocal_475);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_94.f_28[0], 0.125f, 0);
					uLocal_440 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
					uLocal_512 = CAM::CREATE_CAMERA(964613260, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_440, "rcmjosh", "trevor_enter_room_trevor", 4f, -4f, 0, 0, 1148846080, 0);
					CAM::SET_CAM_ACTIVE(uLocal_512, 1);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_512, uLocal_440, "trevor_enter_room_camera", "rcmjosh");
					ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(549.33f, -1773.09f, 33.77f, 5f, joaat("prop_motel_door_09"), uLocal_440, "trevor_enter_room_door", "rcmjosh", 0.125f, -1056964608, 0, 1148846080);
					GlobalFunc_4923(&Local_94, 1, 1);
					GlobalFunc_7632(1);
					MISC::CLEAR_AREA_OF_PEDS(549.33f, -1773.09f, 33.77f, 50f, 0);
					iLocal_445 = 2;
				}
			}
			if (iLocal_430 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 550.2f, -1772.53f, 32.45f, 4f, 4f, 2f, 1, 1, 0))
				{
				}
			}
			break;
		
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (!iLocal_422)
			{
				uLocal_514 = STREAMING::STREAMVOL_CREATE_FRUSTUM(556.0839f, -1724.962f, 33.0732f, 18.6933f, 0.1321f, -157.4946f, 150f, 13, 127);
				iLocal_422 = 1;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_440))
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_440) > 0.98f || GlobalFunc_4926(1000))
				{
					iLocal_445 = 3;
				}
			}
			break;
		
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
			{
				CAM::DESTROY_CAM(uLocal_512, 0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				Local_448.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(Local_448.f_4, 556.0839f, -1724.962f, 33.0732f, 18.6933f, 0.1321f, -157.4946f, 7000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_448.f_4, 556.0934f, -1724.986f, 35.9731f, 12.1284f, 0.1325f, -157.7881f, 7000, 3, 2);
				CAM::SET_CAM_FOV(Local_448.f_4, 37.1751f);
				CAM::SET_CAM_ACTIVE(Local_448.f_4, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, 1);
				GlobalFunc_9140(&Local_448, 1, 0, 2000, 1, 1, 0, 1);
				Local_448 = GlobalFunc_7719();
				uLocal_460 = GlobalFunc_7719();
				GlobalFunc_8385(&uLocal_460, 0, 0, 2, 0, 0, 0);
				iLocal_461 = GlobalFunc_208(uLocal_460);
				GlobalFunc_4956();
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				iLocal_445 = 4;
			}
			break;
		
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_440))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_440, 0.99f);
			}
			if (GlobalFunc_9141(iLocal_461, 0, "EXTRASUNNY", "cirrocumulus", &Local_448, -1082130432, 0, 1, 1065353216) || GlobalFunc_4926(1000))
			{
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
				AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				iLocal_445 = 5;
			}
			break;
		
		case 5:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (GlobalFunc_109())
			{
				if (GlobalFunc_4924(Local_94.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_94.f_28[0], "Josh", 0, 0, 0);
				}
				GlobalFunc_9161();
				RECORDING::_0x293220DA1B46CEBC(15f, 0f, 0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				GlobalFunc_9140(&Local_448, 0, 0, 2000, 1, 0, 0, 1);
				GlobalFunc_9807(569.7302f, -1774.379f, 27.89742f, 560.649f, -1770.265f, 31.60686f, 14.75f, 573.5463f, -1759.438f, 28.1695f, 354.0835f, 1, 1, 1, 0, 0);
				CAM::DESTROY_CAM(uLocal_512, 0);
				STREAMING::STREAMVOL_DELETE(uLocal_514);
				iLocal_422 = 0;
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				iLocal_445 = 6;
			}
			break;
		
		case 6:
			if (CAM::DOES_CAM_EXIST(uLocal_512))
			{
				CAM::DESTROY_CAM(uLocal_512, 0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			}
			CAM::_0x59424BD75174C9B1();
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josh", 0))
			{
				if (GlobalFunc_4924(Local_94.f_28[0]))
				{
					uLocal_441 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_94.f_28[0], 0, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_94.f_28[0], uLocal_441, "rcmjosh2", "josh_leadout", 4f, -4f, 5, 0, 1148846080, 0);
					iLocal_428 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 0f), 1f, -1, 1f, 1, 1193033728);
				iLocal_427 = 1;
			}
			if (iLocal_427 == 0)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_429 = 1;
			}
			if ((iLocal_427 == 1 && iLocal_428 == 1) && iLocal_429 == 1)
			{
				iLocal_445 = 7;
			}
			break;
		
		case 7:
			iLocal_445 = 9;
			break;
		
		case 9:
			GlobalFunc_4923(&Local_94, 0, 1);
			if (iLocal_426 == 1)
			{
				GlobalFunc_563(0);
				iLocal_426 = 0;
			}
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_94.f_28[0], 0);
			GlobalFunc_7632(0);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			GlobalFunc_146(&iLocal_475);
			iLocal_446 = 2;
			break;
	}
}

































void func_429()//Position - 0x3254E
{
	if (!GlobalFunc_111() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 565.1842f, -1777.227f, 30.70416f, 549.9508f, -1770.103f, 35.94777f, 7f, 0, 1, 0))
	{
		if (GlobalFunc_115(Local_94.f_28[0]) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_94.f_28[0], 30f))
		{
			if (iLocal_364 < 5)
			{
				if (MISC::GET_GAME_TIMER() > (iLocal_365 + (8000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))))
				{
					if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_MOTEL", 6, 0, 0, 0))
					{
						iLocal_365 = MISC::GET_GAME_TIMER();
						iLocal_364++;
						return;
					}
				}
			}
		}
	}
}


void func_431(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x32635
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (GlobalFunc_104(24) != PLAYER::GET_PLAYERS_LAST_VEHICLE())
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				GlobalFunc_10367(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Param0, fParam3, 24, 0);
			}
		}
	}
}


























void func_457()//Position - 0x34D4E
{
	int iVar0;
	
	if (GlobalFunc_199() == 1 && iLocal_402 == 0)
	{
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_507();
		}
		else if (iVar0 == 1)
		{
			func_506();
		}
		else if (iVar0 == 2)
		{
			func_503();
		}
		else if (iVar0 == 3)
		{
			func_459();
		}
	}
	else
	{
		func_458();
		iLocal_446 = 1;
	}
}

void func_458()//Position - 0x34DBC
{
	STREAMING::REQUEST_ANIM_DICT("rcmjosh");
	STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
	HUD::REQUEST_ADDITIONAL_TEXT("JOSH2", 0);
	STREAMING::REQUEST_MODEL(joaat("felon2"));
	while (((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !STREAMING::HAS_MODEL_LOADED(joaat("felon2"))) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_459()//Position - 0x34E25
{
	GlobalFunc_4972(-1066.056f, 387.088f, 67.8674f, 284.5628f, 1, 0);
	func_21();
	func_458();
	func_384();
	func_380();
	func_379();
	func_376();
	func_501();
	func_462();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (GlobalFunc_4947(iLocal_462))
	{
		GlobalFunc_5705(iLocal_462, -1059.892f, 387.9023f, 67.9261f, 307.9631f, 0, 1);
		if (GlobalFunc_4924(iLocal_470))
		{
			iLocal_414 = 1;
			iLocal_412 = 1;
			iLocal_395 = 1;
			if (iLocal_413 == 0)
			{
				iLocal_413 = 1;
			}
		}
	}
	ENTITY::SET_ENTITY_COORDS(iLocal_470, -1060.8f, 389.5708f, 67.8701f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(iLocal_470, 105.1316f);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_462);
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_470, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_470, 17, 1);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_462, 101f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_462, 0, 1);
	GlobalFunc_4967(0, -1, 1);
	SYSTEM::WAIT(1000);
	if (GlobalFunc_4924(iLocal_470))
	{
		PED::SET_PED_KEEP_TASK(iLocal_470, 1);
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_470, 713668775) != 1)
		{
			TASK::TASK_WANDER_STANDARD(iLocal_470, 1193033728, 0);
		}
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GlobalFunc_79(800, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	func_46();
}



void func_462()//Position - 0x35060
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_469))
	{
		GlobalFunc_10627(&iLocal_469, -904.9491f, 17.5415f, 45.5212f, 109.7778f, 1, 1, 0, 1, 1, joaat("felon2"), 2, 145);
	}
	GlobalFunc_146(&iLocal_473);
	PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -913.5941f, 12.8344f, 46.5934f);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 127.8599f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	iLocal_446 = 4;
}







































void func_501()//Position - 0x39931
{
	func_380();
	func_379();
	func_376();
	PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -851.0237f, 4.1346f, 41.9042f);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 86.4924f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	iLocal_446 = 3;
}


void func_503()//Position - 0x39A11
{
	float fVar0;
	var uVar1;
	
	GlobalFunc_4972(-923.8829f, 5.9621f, 46.5911f, 0f, 1, 0);
	GlobalFunc_2350(0, 0);
	func_21();
	func_458();
	func_384();
	func_380();
	func_379();
	func_376();
	func_501();
	GlobalFunc_146(&iLocal_473);
	iLocal_446 = 4;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.8775f, 34.38772f, -989.136f, 60.98683f, 58.36674f, 31.5f, 0, 0, 1);
	MISC::CLEAR_AREA(-923.8829f, 5.9621f, 46.5911f, 50f, 1, 0, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_469))
	{
		GlobalFunc_10627(&iLocal_469, -897.5433f, 20.4735f, 44.9163f, 110.3058f, 1, 1, 0, 1, 1, joaat("felon2"), 2, 145);
	}
	if (GlobalFunc_4947(iLocal_469))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_469, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_469, 0);
		GlobalFunc_5705(iLocal_469, -903.2674f, 18.7336f, 45.224f, 113.1507f, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_469);
		iLocal_347 = MISC::GET_GAME_TIMER();
	}
	GlobalFunc_4967(iLocal_469, -1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	while (fVar0 < 1f && MISC::GET_GAME_TIMER() < iLocal_347 + 2000)
	{
		SYSTEM::WAIT(0);
		OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_03a"), -905.6967f, 14.6597f, 45.67593f, &uVar1, &fVar0);
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[3]))
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_357[3], 1f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_357[3], 5, 1, 0);
		}
		func_529();
	}
	if (GlobalFunc_4947(iLocal_469))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_469, 2f);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_469, "Josh2Roll", 262144, 0, 8, -1, -1082130432, 0, 1073741824);
		iLocal_347 = MISC::GET_GAME_TIMER();
	}
	while (MISC::GET_GAME_TIMER() < iLocal_347 + 1200)
	{
		SYSTEM::WAIT(0);
		func_529();
	}
	iLocal_347 = MISC::GET_GAME_TIMER();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GlobalFunc_79(800, 0);
	func_504(1, 1, 1);
}

void func_504(int iParam0, int iParam1, int iParam2)//Position - 0x39C0E
{
	func_385(0, 0, iParam2, 1);
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


void func_506()//Position - 0x39C74
{
	GlobalFunc_4972(570.0771f, -1763.565f, 28.1695f, 347.4368f, 1, 0);
	GlobalFunc_2350(0, 0);
	func_458();
	func_384();
	iLocal_446 = 3;
	GlobalFunc_4967(0, -1, 1);
	SYSTEM::WAIT(100);
	GlobalFunc_164("JOSH2_01", 7500, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_261(1, "Go To Rockford", 0, 0, 0, 1);
	GlobalFunc_79(800, 0);
	func_504(1, 1, 1);
}

void func_507()//Position - 0x39CF6
{
	CUTSCENE::STOP_CUTSCENE(0);
	if (CAM::DOES_CAM_EXIST(uLocal_512))
	{
		CAM::DESTROY_CAM(uLocal_512, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	}
	GlobalFunc_4972(567.5291f, -1769.423f, 28.1428f, 159.2917f, 1, 0);
	func_458();
	iLocal_402 = 1;
	iLocal_403 = 1;
	func_21();
	while (!GlobalFunc_7189(&(Local_94.f_28[0]), 58, 565.3901f, -1772.838f, 29.80087f, 62.50156f, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_35[0]))
	{
		Local_94.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("felon2"), 558.09f, -1765.39f, 28.86f, 335.3252f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_94.f_35[0], 4);
	}
	else if (GlobalFunc_115(Local_94.f_35[0]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_94.f_35[0], 558.09f, -1765.39f, 28.86f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_94.f_35[0], 335.3252f);
	}
	iLocal_446 = 1;
	GlobalFunc_4967(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GlobalFunc_79(800, 0);
	func_504(1, 1, 1);
}


void func_509()//Position - 0x39E4C
{
	if (!GlobalFunc_111())
	{
		if (iLocal_446 == 3)
		{
			if (GlobalFunc_4924(Local_94.f_28[0]))
			{
				if (!GlobalFunc_663("JOSH2_01", 0, 0))
				{
					if (GlobalFunc_155(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 30f))
					{
						if (GlobalFunc_4947(Local_94.f_35[0]))
						{
							if (GlobalFunc_645(PLAYER::PLAYER_PED_ID(), Local_94.f_35[0]))
							{
								if (iLocal_415 == 0)
								{
									if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_FELON", 7, 0, 0, 0))
									{
										iLocal_415 = 1;
									}
								}
							}
							if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94.f_35[0], PLAYER::PLAYER_PED_ID(), 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_94.f_28[0])) && iLocal_373 < 3) && MISC::GET_GAME_TIMER() > iLocal_372 + 8000) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_94.f_35[0], 0))
							{
								GlobalFunc_5122(Local_94.f_28[0], "WHATS_YOUR_PROBLEM", 3);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_94.f_35[0]);
								iLocal_415 = 1;
								iLocal_372 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 4000));
								iLocal_373++;
							}
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_341 + 15000)
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_94.f_28[0]) < 30f)
					{
						if (!GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (iLocal_343 == 0)
								{
									if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
									{
										iLocal_343 = 1;
										iLocal_342 = MISC::GET_GAME_TIMER();
									}
								}
								else if (iLocal_343 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_342 + 10000)
									{
										if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_343 = 2;
										}
									}
								}
								else if (iLocal_343 == 2)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_342 + 19000)
									{
										if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_343 = 3;
										}
									}
								}
								else if (iLocal_343 == 3)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_342 + 27000)
									{
										if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_343 = 4;
										}
									}
								}
								else if (iLocal_343 == 4)
								{
									if (MISC::GET_GAME_TIMER() > (iLocal_342 + 35000))
									{
										if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_JOSH", 6, 0, 0, 0))
										{
											iLocal_343 = 5;
										}
									}
								}
							}
						}
					}
				}
			}
			if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -853.6745f, -52.27691f, 31.25732f, -918.1265f, 47.04292f, 121.3313f, 75f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -879.9109f, 56.84485f, 38.78366f, -958.2355f, 59.31521f, 124.6119f, 25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -859.3307f, 40.05341f, 29.86543f, -937.5096f, 8.682496f, 123.8059f, 68.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -841.4558f, -15.82028f, 54.40123f, -859.7773f, 16.35736f, 39.16192f, 24.5f, 0, 1, 0))
			{
				if (iLocal_337 == 0)
				{
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_380, 2200f))
					{
						if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_TREV2", 7, 0, 0, 0))
						{
							iLocal_337 = 1;
						}
					}
				}
				else if (iLocal_337 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_380, 1170f))
						{
							if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_380, 400f))
							{
								if (GlobalFunc_10664(&uLocal_155, 58, "JOSH2AU", "JOSH2_CALL", 9, 0, 0, 1))
								{
									iLocal_337 = 2;
								}
							}
							else
							{
								iLocal_348 = (MISC::GET_GAME_TIMER() - 8000);
								iLocal_337 = 3;
							}
						}
					}
				}
				if (iLocal_337 == 2)
				{
					if (GlobalFunc_781())
					{
						iLocal_348 = MISC::GET_GAME_TIMER();
						iLocal_337 = 3;
					}
				}
				if (iLocal_337 == 3)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_348 + 9000)
					{
						if (func_510(58, "JOSH2_TXT", 1, 0, 0, 0, 0, 1, 0, 1))
						{
							iLocal_337 = 4;
						}
					}
				}
			}
			if (iLocal_337 != 2)
			{
				if (iLocal_397 == 1)
				{
					iLocal_337 = 2;
				}
			}
		}
		else if (iLocal_446 == 4)
		{
			if (iLocal_337 != 2)
			{
				if (iLocal_397 == 1)
				{
					iLocal_337 = 2;
				}
			}
			if (iLocal_404 == 0)
			{
				if (GlobalFunc_4947(iLocal_465))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_465, 1) < 14f)
					{
						if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_COMET", "JOSH2_COMET_1", 7, 0, 0))
						{
							iLocal_404 = 1;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -893.6439f, -0.506663f, 37.98975f, -884.3965f, -14.70914f, 47.41858f, 9.5f, 0, 1, 0))
			{
				if (iLocal_405 == 0)
				{
					if (iLocal_344 == 0)
					{
						iLocal_344 = 1;
					}
					else if (iLocal_344 == 1)
					{
						iLocal_344 = 2;
					}
				}
			}
		}
		else if (iLocal_446 == 5)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_352 + 7000)
			{
				if ((PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_470) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !iLocal_395)
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_470) < 16f)
					{
						if (iLocal_337 == 5)
						{
							if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_7", 7, 0, 0))
							{
								iLocal_337 = 6;
							}
						}
						if (iLocal_337 == 4)
						{
							if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_5", 7, 0, 0))
							{
								iLocal_337 = 5;
							}
						}
						if (iLocal_337 == 3)
						{
							if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_3", 7, 0, 0))
							{
								iLocal_337 = 4;
							}
						}
						if (iLocal_337 <= 2)
						{
							if (GlobalFunc_10630(&uLocal_155, "JOSH2AU", "JOSH2_CHASE2", "JOSH2_CHASE2_1", 7, 0, 0))
							{
								iLocal_337 = 3;
							}
						}
					}
				}
			}
		}
		else if (iLocal_446 == 7)
		{
		}
	}
}

int func_510(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x3A3E1
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_511(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_511(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x3A479
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8951();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5406() == 0)
	{
		GlobalFunc_5405();
		return 0;
	}
	GlobalFunc_1500(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		GlobalFunc_1494(0);
		GlobalFunc_1494(2);
		GlobalFunc_1494(1);
	}
	else
	{
		GlobalFunc_8951();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					GlobalFunc_1494(0);
					Global_2969 = 0;
					break;
				
				case 1:
					GlobalFunc_1494(1);
					Global_2969 = 1;
					break;
				
				case 2:
					GlobalFunc_1494(2);
					Global_2969 = 2;
					break;
				
				case 3:
					GlobalFunc_1494(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		GlobalFunc_8951();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_6945(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}
















void func_527()//Position - 0x3B59B
{
	if (GlobalFunc_4924(iLocal_472))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_472, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_472, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
		if (iLocal_405 != 2)
		{
			if (iLocal_405 != 1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_472, PLAYER::PLAYER_PED_ID(), 1))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_472);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_472, 17, 1);
					GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_ATTB", 7, 0, 0, 0);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_472, PLAYER::PLAYER_PED_ID());
					iLocal_405 = 2;
				}
			}
			if (func_355(iLocal_472, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_472);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_472, 17, 1);
					GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_ATTB", 7, 0, 0, 0);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_472, PLAYER::PLAYER_PED_ID());
					iLocal_405 = 2;
				}
			}
		}
		if (iLocal_405 == 0)
		{
			if (GlobalFunc_4947(iLocal_467))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_467, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_472, 17, 0);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_472);
					TASK::TASK_COMBAT_PED(iLocal_472, PLAYER::PLAYER_PED_ID(), 0, 16);
					if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_STEALB", 7, 0, 0, 0))
					{
						iLocal_405 = 1;
					}
				}
			}
			if (GlobalFunc_4947(iLocal_463))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_463, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_472, 17, 0);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_472);
					TASK::TASK_COMBAT_PED(iLocal_472, PLAYER::PLAYER_PED_ID(), 0, 16);
					if (GlobalFunc_10618(&uLocal_155, "JOSH2AU", "JOSH2_STEALC", 7, 0, 0, 0))
					{
						iLocal_405 = 1;
					}
				}
			}
		}
	}
}

void func_528()//Position - 0x3B71B
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_470))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_470))
		{
			sLocal_443 = "JOSH2_F2";
			iLocal_446 = 11;
			return;
		}
		else if (PED::IS_PED_INJURED(iLocal_470))
		{
			sLocal_443 = "JOSH2_F2";
			iLocal_446 = 11;
			return;
		}
		else
		{
			if ((iLocal_446 == 5 || iLocal_446 == 6) || iLocal_446 == 7)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_474))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_470, 0))
					{
						if (!GlobalFunc_155(iLocal_470, PLAYER::PLAYER_PED_ID(), 280f))
						{
							sLocal_443 = "JOSH2_F1";
							iLocal_446 = 11;
						}
					}
				}
			}
			if (iLocal_397 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_352 + 5000)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_340 + 10000)
					{
						if (iLocal_399 == 1)
						{
							if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_470) > 280f)
							{
								sLocal_443 = "JOSH2_F1";
								iLocal_446 = 11;
								return;
							}
						}
					}
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_470) > 200f)
					{
						if (iLocal_399 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_474))
							{
							}
							iLocal_340 = MISC::GET_GAME_TIMER();
							iLocal_399 = 1;
						}
					}
					else
					{
						iLocal_399 = 0;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_28[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_94.f_28[0]) || PED::IS_PED_INJURED(Local_94.f_28[0]))
		{
			sLocal_443 = "JOSH2_14";
			iLocal_446 = 11;
		}
		else
		{
			if (iLocal_446 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_94.f_28[0], 1) };
				if (MISC::IS_BULLET_IN_AREA(Var0, 20f, 0) || GlobalFunc_4966(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 566.6193f, -1771.675f, 28.35787f, 565.9557f, -1773.148f, 29.80552f, 1.29f))
				{
					GlobalFunc_4956();
					TASK::TASK_SMART_FLEE_PED(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(Local_94.f_28[0], 1);
					sLocal_443 = "JOSH2_11";
					iLocal_446 = 11;
				}
				if (GlobalFunc_155(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 30f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(30f, 30f, 30f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(30f, 30f, 30f)) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(30f, 30f, 30f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(30f, 30f, 30f)))
					{
						GlobalFunc_4956();
						TASK::TASK_SMART_FLEE_PED(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(Local_94.f_28[0], 1);
						sLocal_443 = "JOSH2_11";
						iLocal_446 = 11;
					}
				}
			}
			if (PED::IS_PED_RAGDOLL(Local_94.f_28[0]))
			{
				iLocal_409 = 1;
				sLocal_443 = "JOSH2_13";
				iLocal_446 = 11;
			}
			if (iLocal_409 == 1)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_94.f_28[0]))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(Local_94.f_28[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94.f_28[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_94.f_28[0], 1805844857) != 1)
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Local_94.f_28[0]))
					{
						PED::SET_PED_PANIC_EXIT_SCENARIO(Local_94.f_28[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
					}
					PED::SET_PED_KEEP_TASK(Local_94.f_28[0], 1);
				}
				sLocal_443 = "JOSH2_13";
				iLocal_446 = 11;
			}
		}
	}
}

void func_529()//Position - 0x3BA84
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-824.44f, -33.59f, 38.71f, 15f, joaat("prop_lrggate_01_r"), 0))
	{
		iLocal_357[0] = MISC::GET_HASH_KEY("Josh2_door_0");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_357[0], joaat("prop_lrggate_01_r"), -824.44f, -33.59f, 38.71f, 1, 1, 0);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_r"), -824.44f, -33.59f, 38.71f, 1, 1.1f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-827.3f, -29.11f, 38.87f, 15f, joaat("prop_lrggate_01_l"), 0))
	{
		iLocal_357[1] = MISC::GET_HASH_KEY("Josh2_door_1");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[1]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_357[1], joaat("prop_lrggate_01_l"), -827.3f, -29.11f, 38.87f, 1, 1, 0);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_l"), -827.3f, -29.11f, 38.87f, 1, -1.1f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-924.9753f, -9.033067f, 43.28151f, 10f, joaat("prop_lrggate_03a"), 0))
	{
		iLocal_357[2] = MISC::GET_HASH_KEY("Josh2_door_2");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[2]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_357[2], joaat("prop_lrggate_03a"), -924.9753f, -9.033067f, 43.28151f, 1, 1, 0);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_03a"), -924.9753f, -9.033067f, 43.28151f, 1, 1f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-905.6967f, 14.6597f, 45.67593f, 10f, joaat("prop_lrggate_03a"), 0))
	{
		iLocal_357[3] = MISC::GET_HASH_KEY("Josh2_door_3");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[3]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_357[3], joaat("prop_lrggate_03a"), -905.6967f, 14.6597f, 45.67593f, 1, 1, 0);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_03a"), -905.6967f, 14.6597f, 45.67593f, 1, 1f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-881.16f, -12.75f, 42.39f, 10f, joaat("prop_lrggate_02_ld"), 0))
	{
		iLocal_357[4] = MISC::GET_HASH_KEY("Josh2_door_4");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[4]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_357[4], joaat("prop_lrggate_02_ld"), -881.16f, -12.75f, 42.39f, 1, 1, 0);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_02_ld"), -881.16f, -12.75f, 42.39f, 1, 1f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-889.88f, 6.78f, 43.99f, 10f, joaat("prop_lrggate_02_ld"), 0))
	{
		iLocal_357[5] = MISC::GET_HASH_KEY("Josh2_door_5");
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[5]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_357[5], joaat("prop_lrggate_02_ld"), -889.88f, 6.78f, 43.99f, 1, 1, 0);
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_02_ld"), -889.88f, 6.78f, 43.99f, 1, 1f, 0);
	}
}

void func_530(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3BD70
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

















int func_547(var uParam0)//Position - 0x3C89D
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 574.0521f, -1770.594f, 27.66929f };
			uParam0->f_17[1 /*3*/] = { 559.1631f, -1768.663f, 31.41929f };
			uParam0->f_24 = 17.25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "josh_2_intp1_t4", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!func_393(&(uParam0->f_28[0]), 58, 565.3901f, -1772.838f, 29.80087f, 62.50156f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_548(&(uParam0->f_35[0]));
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 1);
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				uLocal_93 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_93, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_93, "rcmjosh2", "josh_wait_loop", 2f, -4f, 0, 0, 1148846080, 0);
			}
			STREAMING::REMOVE_ANIM_DICT("rcmjosh2");
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

void func_548(var uParam0)//Position - 0x3CAC1
{
	func_549(uParam0, iLocal_92, 558.09f, -1765.39f, 28.86f, 335.3252f);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 2);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, 0, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*uParam0, 1);
}

void func_549(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x3CB07
{
	GlobalFunc_7517(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}



void func_552()//Position - 0x3CB97
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_562();
	STREAMING::STREAMVOL_DELETE(uLocal_514);
	iLocal_422 = 0;
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_513, 0);
	GlobalFunc_4948(&uLocal_320, 0, 0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[0]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_357[0]);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[1]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_357[1]);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[2]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_357[2]);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[3]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_357[3]);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[4]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_357[4]);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_357[5]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_357[5]);
	}
	if (iLocal_426 == 1)
	{
		GlobalFunc_563(0);
		iLocal_426 = 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("comet2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gauntlet"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_business_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bullet"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("superd"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("felon2"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("comet2"), 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-887.371f, -101.8775f, 34.38772f, -989.136f, 60.98683f, 58.36674f, 31.5f, 0, 1, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_389, Local_392, 100f, 0, 1, 1);
	GlobalFunc_190(&(uLocal_478[1]));
	GlobalFunc_190(&(uLocal_478[2]));
	GlobalFunc_190(&(uLocal_478[3]));
	GlobalFunc_190(&(uLocal_478[4]));
	GlobalFunc_190(&(uLocal_478[5]));
	GlobalFunc_190(&(uLocal_478[6]));
	GlobalFunc_190(&(uLocal_478[7]));
	GlobalFunc_190(&(uLocal_478[8]));
	GlobalFunc_190(&(uLocal_478[9]));
	GlobalFunc_190(&(uLocal_478[10]));
	GlobalFunc_190(&(uLocal_478[11]));
	GlobalFunc_190(&(uLocal_478[12]));
	GlobalFunc_190(&(uLocal_478[13]));
	GlobalFunc_190(&(uLocal_478[14]));
	GlobalFunc_2297(&(iLocal_494[1]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[2]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[3]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[4]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[5]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[6]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[7]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[8]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[9]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[10]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[11]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[12]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[13]), 1, 0, 1);
	GlobalFunc_2297(&(iLocal_494[14]), 1, 0, 1);
	func_553(&Local_94, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_553(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3CE68
{
	GlobalFunc_7198(uParam0, iParam1);
	func_558(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}





void func_558(var uParam0, bool bParam1)//Position - 0x3CF3E
{
	func_559(&(uParam0->f_35), bParam1);
}

void func_559(var uParam0, bool bParam1)//Position - 0x3CF50
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			GlobalFunc_7517(uParam0[iVar0]);
		}
		else
		{
			GlobalFunc_190(uParam0[iVar0]);
		}
		iVar0++;
	}
}



void func_562()//Position - 0x3CFE0
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JOSH_02_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("JOSH_02_SCENE");
	}
}




















