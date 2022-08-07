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
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	char* sLocal_82 = NULL;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<12> Local_88 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	var uLocal_112 = 16;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
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
	var uLocal_277 = 16;
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
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	struct<61> Local_442 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	var uLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514[2] = { 0, 0 };
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	struct<7> Local_533[5];
	struct<3> Local_569[5];
	struct<4> Local_585[5];
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
	uLocal_79 = GlobalFunc_4946(58);
	iLocal_80 = joaat("felon2");
	sLocal_82 = "josh_4_int_concat";
	iLocal_83 = joaat("s_m_y_cop_01");
	iLocal_84 = joaat("police3");
	iLocal_102 = 1;
	iLocal_103 = 1;
	Local_105 = { -1102.906f, 284.731f, 63.0602f };
	fLocal_108 = 9.4866f;
	iLocal_508 = joaat("felon2");
	GlobalFunc_2838("*** Now in Josh 4 loop ***");
	Local_442 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_442);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_MISSION_FAIL");
		GlobalFunc_10544(1);
		func_398();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_2838("*** Setting up initial scene for replay");
		GlobalFunc_4972(Local_105, fLocal_108, 1, 0);
		GlobalFunc_2838("*** Replay setup started");
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_385(&Local_442))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_2838("*** Josh 4 scene set up");
		GlobalFunc_4923(&Local_442, 0, 1);
		Global_68490 = 0;
	}
	if (GlobalFunc_115(Local_442.f_28[1]))
	{
		AUDIO::STOP_PED_SPEAKING(Local_442.f_28[1], 1);
	}
	if (GlobalFunc_115(Local_442.f_28[2]))
	{
		AUDIO::STOP_PED_SPEAKING(Local_442.f_28[2], 1);
	}
	iLocal_506 = Local_442.f_35[0];
	iLocal_507 = Local_442.f_35[1];
	GlobalFunc_2838("*** About to set up positions...");
	func_382();
	GlobalFunc_9621(58, 2, 0);
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_2838("*** Creating replay vehicle and jumping to post-cutscene");
		GlobalFunc_10698(&iLocal_85, -1100.04f, 280.6f, 63.53f, 267.48f, 0, 0, 1, 1, 0, joaat("asterope"), 0, 145);
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_RESTART1");
		func_313();
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_BOC", 0);
		SYSTEM::WAIT(0);
		func_297(Local_442.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_86)
		{
			case 0:
				func_289();
				break;
			
			case 1:
				func_254();
				break;
			
			case 2:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x22F
{
	int iVar0;
	
	func_253();
	switch (iLocal_87)
	{
		case 0:
			GlobalFunc_4923(&Local_442, 0, 1);
			if (GlobalFunc_115(iLocal_506))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_506, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (GlobalFunc_115(iLocal_507))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_507, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			GlobalFunc_164("JOSH4_LOSECOPS", 7500, 1);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
			PED::SET_PED_NON_CREATION_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f, 0, 0);
			MISC::CLEAR_AREA_OF_PEDS(-1114.788f, 319.3401f, 66.1226f, 20.5f, 0);
			if (GlobalFunc_115(Local_442.f_28[0]))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_442.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			iLocal_510 = MISC::GET_GAME_TIMER();
			iLocal_87 = 1;
			break;
		
		case 1:
			func_251();
			func_231();
			func_229();
			func_223();
			func_206();
			func_204();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) <= 0 && !GlobalFunc_111())
			{
				iVar0 = 1;
				while (iVar0 <= (Local_442.f_28 - 1))
				{
					if (GlobalFunc_115(Local_442.f_28[iVar0]))
					{
						GlobalFunc_132(&(Local_442.f_28[iVar0]), 0, 1, 1);
					}
					iVar0++;
				}
				if (GlobalFunc_4947(iLocal_506))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_506, 0))
					{
						GlobalFunc_553(777);
					}
				}
				iLocal_87 = 2;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x3D5
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_COPS_LOST_RADIO");
			GlobalFunc_2838("Starting 'JOSH4_COPS_LOST_RADIO'");
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_COPS_LOST");
			GlobalFunc_2838("Starting 'JOSH4_COPS_LOST'");
		}
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_COPS_LOST");
		GlobalFunc_2838("Player is somehow not alive when passing the mission - starting 'JOSH4_COPS_LOST'");
	}
	GlobalFunc_11328(91, 1);
	func_398();
}










































































































































































































void func_204()//Position - 0x2520E
{
	if (iLocal_532 == 0)
	{
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1116.62f, 299.12f, 64.96f, 1) > 50f)
		{
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JOSH_4_01", 0f);
			GlobalFunc_2838("*** Played special Josh 4 police report ***");
			iLocal_532 = 1;
		}
	}
}


void func_206()//Position - 0x2528D
{
	if (iLocal_527 == 0)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1208.581f, 309.8494f, 80.69189f, -1041.645f, 319.5811f, 60.40263f, 178.5f, 0, 1, 0))
		{
			while (GlobalFunc_111())
			{
				GlobalFunc_5105();
				SYSTEM::WAIT(0);
			}
			GlobalFunc_173(&uLocal_277, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&uLocal_277, 4, Local_442.f_28[0], "JOSH", 0, 1);
			iLocal_530 = MISC::GET_GAME_TIMER();
			iLocal_527++;
		}
	}
	else if (iLocal_527 == 1)
	{
		if (iLocal_101 != 0)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_530) > 6000)
			{
				if (iLocal_101 == 3)
				{
					GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4CAR2", 9, 0, 0, 0);
				}
				else if (iLocal_101 == 1)
				{
					if (GlobalFunc_115(Local_442.f_28[0]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_442.f_28[0], 1) < 75f)
						{
							GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4CAR3", 9, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4CAR1", 9, 0, 0, 0);
						}
					}
				}
				else if (iLocal_101 == 2)
				{
					GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4CAR1", 9, 0, 0, 0);
				}
				iLocal_527++;
			}
		}
	}
}

















void func_223()//Position - 0x25B9C
{
	switch (iLocal_101)
	{
		case 0:
			if (iLocal_100 == 3)
			{
				if (GlobalFunc_115(Local_442.f_28[0]))
				{
					TASK::CLEAR_PED_TASKS(Local_442.f_28[0]);
					if (GlobalFunc_4947(iLocal_507))
					{
						if (MISC::IS_POSITION_OCCUPIED(-1138.421f, 298.0307f, 65.90032f, 4f, 0, 1, 0, 0, 0, iLocal_507, 0))
						{
							GlobalFunc_2838("Back gate blocked");
							Local_109 = { -1130.35f, 307.92f, 65.19f };
							TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_109, 2f, 20000, 1f, 1, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1126.56f, 319.85f, 65.98f, 2f, 20000, 1f, 1, 1193033728);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
							PED::SET_PED_KEEP_TASK(Local_442.f_28[0], 1);
							TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[0], uLocal_505);
						}
						else
						{
							GlobalFunc_2838("Back gate clear");
							TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
							if (GlobalFunc_4947(iLocal_507))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_507, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 500f, 0.1f, 1);
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							}
							TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
							PED::SET_PED_KEEP_TASK(Local_442.f_28[0], 1);
							TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[0], uLocal_505);
						}
					}
					else
					{
						GlobalFunc_2838("Josh car not ok - do Josh flee anyway");
						TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_109, 2f, 20000, 1f, 1, 1193033728);
						if (GlobalFunc_4947(iLocal_507))
						{
							TASK::TASK_ENTER_VEHICLE(0, iLocal_507, 20000, -1, 1073741824, 1, 0);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_507, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 500f, 0.1f, 1);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
						PED::SET_PED_KEEP_TASK(Local_442.f_28[0], 1);
						TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[0], uLocal_505);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(Local_442.f_28[0], 2, 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_505);
				}
				iLocal_531 = MISC::GET_GAME_TIMER();
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_442.f_28[0], 1);
				PED::SET_PED_CONFIG_FLAG(Local_442.f_28[0], 177, 1);
				iLocal_101 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_115(Local_442.f_28[0]))
			{
				if (!iLocal_524)
				{
					if (iLocal_514[0] || iLocal_514[1])
					{
						if (GlobalFunc_156(Local_442.f_28[0], PLAYER::PLAYER_PED_ID(), 0) < 20f)
						{
							GlobalFunc_173(&uLocal_277, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							GlobalFunc_173(&uLocal_277, 4, Local_442.f_28[0], "JOSH", 0, 1);
							if (GlobalFunc_111())
							{
								GlobalFunc_4935();
								GlobalFunc_5157(&uLocal_277, "JOSH4AU", "JOSH4COP3", 9, 0, 0);
							}
							else
							{
								GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4COP3", 9, 0, 0, 0);
							}
							GlobalFunc_2838("Doing Josh comment");
						}
						else
						{
							GlobalFunc_2838("Too far away to do Josh comment");
						}
						iLocal_524 = 1;
					}
				}
				if (GlobalFunc_4947(iLocal_507))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_442.f_28[0], iLocal_507, 1))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_507) < 20f)
						{
							TASK::CLEAR_PED_TASKS(Local_442.f_28[0]);
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_442.f_28[0], 0, 4416);
							TASK::TASK_SMART_FLEE_PED(Local_442.f_28[0], PLAYER::PLAYER_PED_ID(), 510f, -1, 0, 0);
							GlobalFunc_190(&iLocal_507);
						}
					}
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_507, 1))
						{
							TASK::CLEAR_PED_TASKS(Local_442.f_28[0]);
							TASK::TASK_SMART_FLEE_PED(Local_442.f_28[0], PLAYER::PLAYER_PED_ID(), 510f, -1, 0, 0);
							GlobalFunc_190(&iLocal_507);
						}
					}
					if (PED::IS_PED_BEING_JACKED(Local_442.f_28[0]))
					{
						if (iLocal_525 == 0)
						{
							if (GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4BEGS", 9, 0, 0, 0))
							{
								iLocal_525 = 1;
							}
						}
						TASK::CLEAR_PED_TASKS(Local_442.f_28[0]);
						GlobalFunc_190(&iLocal_507);
						TASK::TASK_SMART_FLEE_PED(Local_442.f_28[0], PLAYER::PLAYER_PED_ID(), 510f, -1, 0, 0);
					}
				}
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_442.f_28[0], 1) > 350f)
				{
					GlobalFunc_2838("Deleting Josh, setting as lost");
					GlobalFunc_881(&(Local_442.f_28[0]));
					GlobalFunc_6692(&iLocal_507);
					iLocal_101 = 2;
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_442.f_28[0]))
				{
					if (iLocal_528 < 3)
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_442.f_28[0], 1) < 10f)
						{
							if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_531) > 8000)
							{
								if (GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4CHASE", 9, 0, 0, 0))
								{
									iLocal_528++;
									iLocal_531 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			else
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_442.f_28[0], PLAYER::PLAYER_PED_ID(), 1))
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 2f, 0);
					GlobalFunc_2838("Player killed Josh!");
					GlobalFunc_553(776);
				}
				GlobalFunc_2838("Josh - DEAD!");
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
				if (GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4KILL", 9, 0, 0, 0))
				{
					iLocal_101 = 3;
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}






void func_229()//Position - 0x2621D
{
	switch (Local_88.f_11)
	{
		case 0:
			iLocal_509 = 0;
			while (iLocal_509 <= 4)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_533[iLocal_509 /*7*/], Local_533[iLocal_509 /*7*/].f_3, Local_533[iLocal_509 /*7*/].f_6, 0, 1, 2))
				{
					GlobalFunc_2837("Player detected inside flee direction trigger: ", iLocal_509);
					STREAMING::REQUEST_MODEL(iLocal_84);
					STREAMING::REQUEST_MODEL(iLocal_83);
					Local_88 = { Local_569[iLocal_509 /*3*/] };
					Local_88.f_3 = Local_585[iLocal_509 /*4*/];
					Local_88.f_4 = Local_585[iLocal_509 /*4*/].f_1;
					Local_88.f_5 = Local_585[iLocal_509 /*4*/].f_2;
					Local_88.f_6 = Local_585[iLocal_509 /*4*/].f_3;
					switch (iLocal_509)
					{
						case 0:
							Local_88.f_9 = 0;
							break;
						
						case 1:
							Local_88.f_9 = 1;
							break;
						
						case 2:
							Local_88.f_9 = 2;
							break;
						
						case 3:
							Local_88.f_9 = 3;
							break;
						
						case 4:
							Local_88.f_9 = 4;
							break;
					}
					GlobalFunc_2837("iFlee value is: ", iLocal_509);
					GlobalFunc_2838("Requesting flee recording: ");
					GlobalFunc_2837(Local_88.f_10, Local_88.f_9);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_88.f_9, Local_88.f_10);
					while ((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_88.f_9, Local_88.f_10) || !STREAMING::HAS_MODEL_LOADED(iLocal_84)) || !STREAMING::HAS_MODEL_LOADED(iLocal_83))
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_2838("Flee car has loaded!");
					Local_88.f_11 = 1;
				}
				iLocal_509++;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_88.f_7))
			{
				Local_88.f_7 = VEHICLE::CREATE_VEHICLE(iLocal_84, Local_88, 0f, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_88.f_7);
				ENTITY::SET_ENTITY_QUATERNION(Local_88.f_7, Local_88.f_3, Local_88.f_4, Local_88.f_5, Local_88.f_6);
				Local_88.f_8 = PED::CREATE_PED_INSIDE_VEHICLE(Local_88.f_7, 6, iLocal_83, -1, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_88.f_8, joaat("weapon_pistol"), -1, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_88.f_8, 1);
				TASK::CLEAR_PED_TASKS(Local_88.f_8);
				GlobalFunc_2838("Flee car created!");
				Local_88.f_11 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_4947(Local_88.f_7))
			{
				if (GlobalFunc_115(Local_88.f_8))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_88.f_8, 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_88.f_7, Local_88.f_9, Local_88.f_10, 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_88.f_7, 1);
						GlobalFunc_2837("*** m_AI_FleeCar.iRecNum: ", Local_88.f_9);
						switch (Local_88.f_9)
						{
							case 0:
								VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.5f);
								break;
							
							case 1:
								VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1f);
								break;
							
							case 2:
								VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.4f);
								break;
							
							case 3:
								VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.5f);
								break;
							
							case 4:
								VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.5f);
								break;
						}
						GlobalFunc_2838("Flee car playing!");
						Local_88.f_11 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_88.f_7))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_88.f_7))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_88.f_9, Local_88.f_10))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_88.f_9, Local_88.f_10);
						GlobalFunc_2838("Flee car recording finished!");
						Local_88.f_11 = 4;
					}
				}
				else
				{
					switch (Local_88.f_9)
					{
						case 0:
							VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.5f);
							break;
						
						case 1:
							VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1f);
							break;
						
						case 2:
							VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.4f);
							break;
						
						case 3:
							VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.5f);
							break;
						
						case 4:
							VEHICLE::SET_PLAYBACK_SPEED(Local_88.f_7, 1.5f);
							break;
						}
					}
			}
			break;
		
		case 4:
			if (GlobalFunc_4947(Local_88.f_7))
			{
				if (GlobalFunc_115(Local_88.f_8))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_88.f_8, 0);
					GlobalFunc_132(&(Local_88.f_8), 1, 0, 1);
				}
				Local_88.f_11 = 5;
				GlobalFunc_190(&(Local_88.f_7));
			}
			GlobalFunc_2838("Flee car & ped released!");
			break;
	}
}


void func_231()//Position - 0x265FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_100)
	{
		case 0:
			if (!iLocal_512)
			{
				if (GlobalFunc_115(Local_442.f_28[1]))
				{
					iLocal_512 = 1;
				}
			}
			if (!iLocal_513)
			{
				if (GlobalFunc_115(Local_442.f_28[2]))
				{
					iLocal_513 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_510) > 4000)
			{
				GlobalFunc_2838("************************************** TIMEOUT - AIM next frame");
				iLocal_100 = 1;
				iLocal_510 = MISC::GET_GAME_TIMER();
			}
			iVar0 = 1;
			while (iVar0 <= (Local_442.f_28 - 1))
			{
				if (GlobalFunc_115(Local_442.f_28[iVar0]))
				{
					if (GlobalFunc_156(Local_442.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) > 10f)
					{
						GlobalFunc_2838("************************************** TOO FAR - AIM next frame");
						iLocal_100 = 1;
						iLocal_510 = MISC::GET_GAME_TIMER();
					}
				}
				iVar0++;
			}
			break;
		
		case 1:
			iLocal_100 = 2;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_510) > 20000)
			{
				GlobalFunc_2838("************************************** TIMEOUT - ARREST next frame");
				if (GlobalFunc_115(Local_442.f_28[1]))
				{
					TASK::CLEAR_PED_TASKS(Local_442.f_28[1]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_442.f_28[1], 0);
					TASK::TASK_ARREST_PED(Local_442.f_28[1], PLAYER::PLAYER_PED_ID());
				}
				iLocal_100 = 4;
				iLocal_510 = MISC::GET_GAME_TIMER();
			}
			iVar0 = 1;
			while (iVar0 <= (Local_442.f_28 - 1))
			{
				if (GlobalFunc_115(Local_442.f_28[iVar0]))
				{
					if (GlobalFunc_156(Local_442.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) > 12f)
					{
						GlobalFunc_2838("************************************** TOO FAR - ATTACK next frame");
						iLocal_100 = 3;
						iLocal_510 = MISC::GET_GAME_TIMER();
					}
				}
				iVar0++;
			}
			break;
		
		case 4:
			iVar0 = 1;
			while (iVar0 <= (Local_442.f_28 - 1))
			{
				if (GlobalFunc_115(Local_442.f_28[iVar0]))
				{
					if (GlobalFunc_156(Local_442.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) > 12f)
					{
						GlobalFunc_2838("************************************** TOO FAR - ATTACK next frame");
						iLocal_100 = 3;
						iLocal_510 = MISC::GET_GAME_TIMER();
					}
					else if (func_232(Local_442.f_28[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						GlobalFunc_2838("************************************** THREAT DURING ARREST - ATTACK next frame");
						iLocal_100 = 3;
						iLocal_510 = MISC::GET_GAME_TIMER();
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			iLocal_102 = 3;
			if (!iLocal_517)
			{
				MISC::ENABLE_DISPATCH_SERVICE(1, 1);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				MISC::ENABLE_DISPATCH_SERVICE(6, 1);
				iVar0 = 1;
				while (iVar0 <= (Local_442.f_28 - 1))
				{
					if (GlobalFunc_115(Local_442.f_28[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(Local_442.f_28[iVar0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_442.f_28[iVar0], 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, -687903391);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
						TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[iVar0], uLocal_505);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_505);
					}
					iVar0++;
				}
				GlobalFunc_173(&uLocal_112, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				GlobalFunc_173(&uLocal_112, 3, Local_442.f_28[1], "JOSHCOP", 0, 1);
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
					GlobalFunc_5157(&uLocal_112, "JOSH4AU", "JOSH4COP2", 7, 0, 0);
				}
				else
				{
					GlobalFunc_10618(&uLocal_112, "JOSH4AU", "JOSH4COP2", 7, 0, 0, 0);
				}
				GlobalFunc_2838("Doing cop fire warning");
				iLocal_517 = 1;
				iLocal_529 = MISC::GET_GAME_TIMER();
			}
			else
			{
				iVar1 = 1;
				while (iVar1 <= (Local_442.f_28 - 1))
				{
					if (GlobalFunc_115(Local_442.f_28[iVar1]))
					{
						if (GlobalFunc_156(Local_442.f_28[iVar1], PLAYER::PLAYER_PED_ID(), 1) > 20f)
						{
							PED::SET_PED_ACCURACY(Local_442.f_28[iVar1], 75);
						}
						else
						{
							PED::SET_PED_ACCURACY(Local_442.f_28[iVar1], 1);
						}
					}
					iVar1++;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_529) > 15000)
				{
					iVar1 = 1;
					while (iVar1 <= (Local_442.f_28 - 1))
					{
						if (GlobalFunc_115(Local_442.f_28[iVar1]))
						{
							if (GlobalFunc_156(Local_442.f_28[iVar1], PLAYER::PLAYER_PED_ID(), 1) >= 50f)
							{
								GlobalFunc_132(&(Local_442.f_28[iVar1]), 0, 1, 1);
							}
						}
						iVar1++;
					}
				}
				else
				{
					iVar1 = 1;
					while (iVar1 <= (Local_442.f_28 - 1))
					{
						if (!GlobalFunc_115(Local_442.f_28[iVar1]))
						{
							if (iVar1 == 1)
							{
								iLocal_514[0] = 1;
							}
							else if (iVar1 == 2)
							{
								iLocal_514[1] = 1;
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	if (iLocal_100 != 3)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_2838("************************************** VEHICLE - ATTACK now");
				iLocal_100 = 3;
			}
		}
		iVar0 = 1;
		while (iVar0 <= (Local_442.f_28 - 1))
		{
			if (GlobalFunc_115(Local_442.f_28[iVar0]))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_442.f_28[iVar0]))
				{
					iVar2 = joaat("weapon_unarmed");
					if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1))
					{
						GlobalFunc_2838("************************************** AIMED WEAPON - ATTACK now");
						iLocal_100 = 3;
					}
				}
				if (func_232(Local_442.f_28[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					GlobalFunc_2838("************************************** ATTACKED/THREATENED - ATTACK now");
					iLocal_100 = 3;
				}
				if (iLocal_100 != 4)
				{
					if (GlobalFunc_156(Local_442.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) < 2.3f)
					{
						GlobalFunc_2838("************************************** TOO CLOSE - ATTACK now");
						iLocal_100 = 3;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_232(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x26B03
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
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
		else if (func_233(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0, float fParam1)//Position - 0x26BBE
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
				if (func_234(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_234(int iParam0, float fParam1)//Position - 0x26C34
{
	return func_235(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_235(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26C4C
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_243(iParam0, iParam1);
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
		iVar4 = func_238();
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



int func_238()//Position - 0x26EFE
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





int func_243(int iParam0, int iParam1)//Position - 0x27054
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








void func_251()//Position - 0x27474
{
	if (!iLocal_511)
	{
		GlobalFunc_173(&uLocal_112, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		GlobalFunc_173(&uLocal_112, 3, Local_442.f_28[1], "JOSHCOP", 0, 1);
		GlobalFunc_10618(&uLocal_112, "JOSH4AU", "JOSH4GIVEUP", 8, 1, 0, 0);
		iLocal_511 = 1;
	}
	else
	{
		switch (iLocal_102)
		{
			case 0:
				if ((MISC::GET_GAME_TIMER() - iLocal_104) > 1000)
				{
					iLocal_102 = 1;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (iLocal_103)
					{
						GlobalFunc_173(&uLocal_112, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&uLocal_112, 3, Local_442.f_28[1], "JOSHCOP", 0, 1);
						if (GlobalFunc_10618(&uLocal_112, "JOSH4AU", "JOSH4COP1", 8, 0, 0, 0))
						{
							iLocal_102 = 2;
							iLocal_103 = 0;
						}
					}
					else
					{
						GlobalFunc_173(&uLocal_277, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&uLocal_277, 4, Local_442.f_28[0], "JOSH", 0, 1);
						if (GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH4JOSH", 6, 0, 0, 0))
						{
							iLocal_102 = 2;
							iLocal_103 = 1;
						}
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_102 = 0;
				}
				break;
			
			case 3:
				break;
			}
	}
}


void func_253()//Position - 0x275C9
{
	if (iLocal_86 == 1)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > 14000 && !iLocal_521)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_START");
				GlobalFunc_2838("Starting 'JOSH4_START'");
				iLocal_521 = 1;
			}
		}
	}
	else if (!iLocal_522)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_ACTION");
		GlobalFunc_2838("Starting 'JOSH4_ACTION'");
		iLocal_522 = 1;
	}
	else if (!iLocal_523)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_VEHICLE");
				GlobalFunc_2838("Starting 'JOSH4_VEHICLE'");
				iLocal_523 = 1;
			}
		}
	}
}

void func_254()//Position - 0x2765C
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	func_253();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(Local_442.f_28[1]))
		{
			GlobalFunc_2838("Trying to set Cop 1 component variation (intro loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_standing_idle", Local_442.f_28[1], 0);
		}
		if (GlobalFunc_115(Local_442.f_28[2]))
		{
			GlobalFunc_2838("Trying to set Cop 2 component variation (intro loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_with_notepad", Local_442.f_28[2], 0);
		}
	}
	switch (iLocal_87)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL(sLocal_82, ""))
			{
				if (iLocal_518 == 0)
				{
					GlobalFunc_10538(sLocal_82, 0);
				}
				iLocal_526 = 0;
				iLocal_87 = 1;
			}
			else
			{
				func_287(0);
				func_286(2);
			}
			break;
		
		case 1:
			switch (iLocal_526)
			{
				case 0:
					if (GlobalFunc_7638(1, 1093140480, 0))
					{
						func_280();
						GlobalFunc_8954();
						RECORDING::_0x48621C9FCA3EBD28(1);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (GlobalFunc_4947(iVar0))
						{
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
							{
								Var1 = { -1089.27f, 283.76f, 64.22f };
								fVar4 = 132.53f;
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1115.984f, 285.5924f, 61.94241f, -1097.599f, 285.1346f, 66.34669f, 33f, 0, 1, 0))
							{
								Var1 = { -1101.694f, 280.5019f, 63.38352f };
								fVar4 = 85.45f;
							}
							else
							{
								Var1 = { -1095.231f, 279.3389f, 62.7919f };
								fVar4 = 84.67f;
							}
						}
						else
						{
							Var1 = { -1095.231f, 279.3389f, 62.7919f };
							fVar4 = 84.67f;
						}
						if (GlobalFunc_4947(iVar0))
						{
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
							{
								GlobalFunc_9805(-1115.984f, 285.5924f, 61.94241f, -1097.599f, 285.1346f, 66.34669f, 33f, Var1, fVar4, 50f, 50f, 50f, 1, 1, 1, 0, 0);
							}
							else
							{
								GlobalFunc_9805(-1115.984f, 285.5924f, 61.94241f, -1097.599f, 285.1346f, 66.34669f, 33f, Var1, fVar4, GlobalFunc_625(), 1, 1, 1, 0, 0);
							}
						}
						else
						{
							GlobalFunc_9805(-1115.984f, 285.5924f, 61.94241f, -1097.599f, 285.1346f, 66.34669f, 33f, Var1, fVar4, GlobalFunc_625(), 1, 1, 1, 0, 0);
						}
						func_266(-1104.93f, 291.25f, 64.3f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						if (GlobalFunc_4947(iLocal_506))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_506, -1107.5f, 280.33f, 64.01f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_506, 97.97f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_506);
						}
						iLocal_526++;
					}
					break;
				
				case 1:
					STREAMING::REQUEST_ANIM_DICT("rcmjosh4");
					STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@halt");
					STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@glances");
					STREAMING::REQUEST_MODEL(iLocal_508);
					iLocal_526++;
					break;
				
				case 2:
					if (((STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4") && STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@halt")) && STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@glances")) && STREAMING::HAS_MODEL_LOADED(iLocal_508))
					{
						iLocal_526++;
					}
					break;
				
				case 3:
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (func_265())
					{
						RECORDING::_0x81CBAE94390F9F89();
						RECORDING::_0x293220DA1B46CEBC(0f, 5f, 0);
						iLocal_526 = 4;
					}
					func_264();
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						iLocal_520 = 1;
						iLocal_526 = 4;
						if (!iLocal_521)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_START");
							GlobalFunc_2838("Starting 'JOSH4_START' via cutscene skip");
							iLocal_521 = 1;
						}
					}
					break;
				
				case 4:
					func_264();
					func_265();
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						iLocal_520 = 1;
						if (!iLocal_521)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_START");
							GlobalFunc_2838("Starting 'JOSH4_START' via cutscene skip");
							iLocal_521 = 1;
						}
					}
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_287(iLocal_520);
						func_255(1, 1, 1, 1);
						MISC::ENABLE_DISPATCH_SERVICE(1, 0);
						MISC::ENABLE_DISPATCH_SERVICE(2, 0);
						MISC::ENABLE_DISPATCH_SERVICE(6, 0);
						iLocal_87 = 2;
					}
					break;
				
				default:
					iLocal_526 = 0;
					break;
			}
			break;
		
		case 2:
			func_286(2);
			break;
	}
}

void func_255(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x27A87
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









void func_264()//Position - 0x27D51
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josh", 0))
	{
		if (GlobalFunc_115(Local_442.f_28[0]))
		{
			GlobalFunc_2838("Playing Josh's leadout");
			TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "rcmjosh4", "josh_leadout_loop", 4f, -4f, -1, 262153, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
			TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[0], uLocal_505);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_505);
			PED::FORCE_PED_MOTION_STATE(Local_442.f_28[0], 247561816, 0, 1, 0);
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Security_guard_pistol", 0))
	{
		if (GlobalFunc_115(iLocal_503) && GlobalFunc_115(Local_442.f_28[1]))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_503, Local_442.f_28[1]);
			GlobalFunc_2838("*** Gave idle cop gun");
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FBI_Agent_1_Gun", 0))
	{
		if (GlobalFunc_115(iLocal_504) && GlobalFunc_115(Local_442.f_28[2]))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_504, Local_442.f_28[2]);
			GlobalFunc_2838("*** Gave notepad cop gun");
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cop_standing_idle", 0))
	{
		if (GlobalFunc_115(Local_442.f_28[1]))
		{
			PED::FORCE_PED_MOTION_STATE(Local_442.f_28[1], 1063765679, 0, 1, 0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1026, 2);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1);
			TASK::TASK_PLAY_ANIM(0, "combat@gestures@pistol@glances", "90", 8f, -1000f, -1, 262184, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
			TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[1], uLocal_505);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_505);
			GlobalFunc_2838("*** Idle cop anim");
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cop_with_notepad", 0))
	{
		if (GlobalFunc_115(Local_442.f_28[2]))
		{
			PED::FORCE_PED_MOTION_STATE(Local_442.f_28[2], 1063765679, 0, 1, 0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1026, 2);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1103.72f, 289.46f, 63.23f, PLAYER::PLAYER_PED_ID(), 1f, 0, 0.1f, 1082130432, 1, 0, 1, -957453492, 20000);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1106.08f, 288.55f, 63.31f, PLAYER::PLAYER_PED_ID(), 1f, 0, 0.1f, 1082130432, 1, 0, 1, -957453492, 20000);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
			TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[2], uLocal_505);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_505);
			GlobalFunc_2838("*** Notepad cop anim");
		}
	}
}

int func_265()//Position - 0x27FC5
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_266(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x27FEA
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














void func_280()//Position - 0x28BFD
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
		GlobalFunc_2838("*** Registered Trevor");
	}
	if (GlobalFunc_115(Local_442.f_28[0]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_442.f_28[0], "Josh", 0, 0, 0);
		GlobalFunc_2838("*** Registered Josh");
	}
	if (GlobalFunc_115(Local_442.f_28[1]))
	{
		iLocal_503 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_pistol"), -1, ENTITY::GET_ENTITY_COORDS(Local_442.f_28[1], 1), 1, 1065353216, 0);
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_442.f_28[1], "Cop_standing_idle", 0, 0, 0);
		GlobalFunc_2838("*** Registered Cop standing");
	}
	if (GlobalFunc_115(Local_442.f_28[2]))
	{
		iLocal_504 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_pistol"), -1, ENTITY::GET_ENTITY_COORDS(Local_442.f_28[2], 1), 1, 1065353216, 0);
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_442.f_28[2], "Cop_with_notepad", 0, 0, 0);
		GlobalFunc_2838("*** Registered Cop with notepad");
	}
	if (GlobalFunc_115(iLocal_503))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_503, "Security_guard_pistol", 0, 0, 0);
		GlobalFunc_2838("*** Registered idle cop gun");
	}
	if (GlobalFunc_115(iLocal_504))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_504, "FBI_Agent_1_Gun", 0, 0, 0);
		GlobalFunc_2838("*** Registered notepad cop gun");
	}
	iLocal_521 = 0;
	iLocal_522 = 0;
	iLocal_523 = 0;
}






void func_286(int iParam0)//Position - 0x29036
{
	iLocal_86 = iParam0;
	iLocal_87 = 0;
}

void func_287(int iParam0)//Position - 0x29045
{
	STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@halt");
	STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@glances");
	STREAMING::REQUEST_MODEL(iLocal_508);
	while ((!STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@halt") || !STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@glances")) || !STREAMING::HAS_MODEL_LOADED(iLocal_508))
	{
		SYSTEM::WAIT(0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1138.32f, 299.69f, 65.94f, 5f, joaat("prop_lrggate_01c_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.32f, 299.69f, 65.94f, 0, 0f, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1137.52f, 297.02f, 65.81f, 5f, joaat("prop_lrggate_01c_r"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.054f, 295.5856f, 67.18046f, 0, 0f, 0);
	}
	if (GlobalFunc_115(Local_442.f_28[0]))
	{
		if (iParam0 == 1)
		{
			ENTITY::SET_ENTITY_COORDS(Local_442.f_28[0], -1103.962f, 291.3401f, 63.367f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_442.f_28[0], 193.1737f);
			TASK::TASK_PLAY_ANIM(Local_442.f_28[0], "rcmjosh4", "josh_leadout_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
		}
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_442.f_28[0], 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_442.f_28[0], 1);
	}
	if (iParam0 == 1)
	{
		if (GlobalFunc_115(Local_442.f_28[2]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_442.f_28[2], joaat("weapon_pistol"), -1, 1, 1);
			ENTITY::SET_ENTITY_COORDS(Local_442.f_28[2], -1106.08f, 288.55f, 63.31f, 1, 0, 0, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
			TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[2], uLocal_505);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_505);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_442.f_28[2], 1);
		}
	}
	if (iParam0 == 1)
	{
		if (GlobalFunc_115(Local_442.f_28[1]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_442.f_28[1], joaat("weapon_pistol"), -1, 1, 1);
			ENTITY::SET_ENTITY_COORDS(Local_442.f_28[1], -1102.41f, 289.73f, 63.18f, 1, 0, 0, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_505);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_505);
			TASK::TASK_PERFORM_SEQUENCE(Local_442.f_28[1], uLocal_505);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_505);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_442.f_28[1], 1);
		}
	}
	if (GlobalFunc_115(Local_442.f_28[1]))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_442.f_28[1], 23, 1);
	}
	if (GlobalFunc_115(Local_442.f_28[2]))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_442.f_28[2], 23, 1);
	}
	if (GlobalFunc_4947(Local_442.f_35[1]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_442.f_35[1], 1);
	}
	GlobalFunc_173(&uLocal_277, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_511 = 0;
	iLocal_512 = 0;
	iLocal_513 = 0;
	iLocal_524 = 0;
	iLocal_514[0] = 0;
	iLocal_514[1] = 0;
	if (iLocal_514[0])
	{
	}
	iLocal_517 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	GlobalFunc_2838("*** End of intro set up");
}


void func_289()//Position - 0x2934A
{
	GlobalFunc_8320();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(Local_442.f_28[1]))
		{
			GlobalFunc_2838("Trying to set Cop 1 component variation (leadin loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_standing_idle", Local_442.f_28[1], 0);
		}
		if (GlobalFunc_115(Local_442.f_28[2]))
		{
			GlobalFunc_2838("Trying to set Cop 2 component variation (leadin loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_with_notepad", Local_442.f_28[2], 0);
		}
	}
	switch (iLocal_87)
	{
		case 0:
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1107.353f, 281.626f, 61.46451f, -1099.521f, 282.5073f, 65.99223f, 16f, 0, 1, 0))
			{
				GlobalFunc_2838("Doing setup for leadin");
				GlobalFunc_173(&uLocal_277, 4, Local_442.f_28[0], "JOSH", 0, 1);
				GlobalFunc_173(&uLocal_277, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				STREAMING::REQUEST_ANIM_DICT("rcmjosh4");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
				{
					iLocal_87 = 1;
				}
			}
			else
			{
				GlobalFunc_2838("Skipping setup for leadin (repeat play/wrong area)");
				func_286(1);
			}
			break;
		
		case 1:
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1107.353f, 281.626f, 61.46451f, -1099.521f, 282.5073f, 65.99223f, 16f, 0, 1, 0))
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4950(Local_442.f_28[0]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1105.571f, 290.008f, 62.87176f, -1100.577f, 290.4298f, 66.45212f, 4.5f, 0, 1, 0))
					{
						if (!GlobalFunc_1720())
						{
							if (!GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), -875674219))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_442.f_28[0], 0);
							}
						}
						else
						{
							GlobalFunc_112();
							PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (!iLocal_518)
				{
					if (GlobalFunc_4950(Local_442.f_28[0]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_442.f_28[0], "rcmjosh4", "beckon_a_josh", 3) && !GlobalFunc_111())
						{
							TASK::TASK_PLAY_ANIM(Local_442.f_28[0], "rcmjosh4", "josh_4_leadin_josh", 2f, -8f, -1, 2, 0, 0, 0, 0);
							GlobalFunc_2838("Done Josh leadin anim");
							if (GlobalFunc_4950(Local_442.f_28[2]))
							{
								TASK::TASK_PLAY_ANIM(Local_442.f_28[2], "rcmjosh4", "josh_4_leadin_cop_a", 8f, -8f, -1, 2, 0, 0, 0, 0);
								GlobalFunc_2838("Done Notepad cop leadin anim");
							}
							if (GlobalFunc_4950(Local_442.f_28[1]))
							{
								TASK::TASK_PLAY_ANIM(Local_442.f_28[1], "rcmjosh4", "josh_4_leadin_cop_b", 8f, -8f, -1, 2, 0, 0, 0, 0);
								GlobalFunc_2838("Done Speaker cop leadin anim");
							}
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_4_INT_CONCAT", 2, 8);
							iLocal_518 = 1;
						}
					}
				}
				else
				{
					if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4950(Local_442.f_28[0])) && !GlobalFunc_1720())
					{
						if (!GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_442.f_28[0], 0);
						}
					}
					if (GlobalFunc_4950(Local_442.f_28[0]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_442.f_28[0], "rcmjosh4", "josh_4_leadin_josh", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_442.f_28[0], "rcmjosh4", "josh_4_leadin_josh") > 0.276f)
							{
								if (iLocal_519 == 0)
								{
									if (GlobalFunc_10618(&uLocal_277, "JOSH4AU", "JOSH_4_INTLI", 9, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(2f, 3f, 1);
										iLocal_519 = 1;
									}
								}
							}
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_442.f_28[0], "rcmjosh4", "josh_4_leadin_josh") > 0.98f)
							{
								func_286(1);
							}
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_442.f_28[0], 1) <= 2f)
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_5105();
								}
								GlobalFunc_2838("Player too close to Josh, starting cutscene early");
								func_286(1);
							}
						}
						else
						{
							func_286(1);
						}
					}
				}
			}
			else
			{
				func_286(1);
			}
			break;
	}
}








void func_297(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x29926
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
















void func_313()//Position - 0x2A368
{
	if (GlobalFunc_115(Local_442.f_28[1]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_442.f_28[1], -1102.48f, 290.2f, 64.22f, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_442.f_28[1], 177.74f);
	}
	else
	{
		Local_442.f_28[1] = PED::CREATE_PED(6, iLocal_83, -1102.92f, 290.12f, -200f, 40.46f, 0, 0);
	}
	if (GlobalFunc_115(Local_442.f_28[2]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_442.f_28[2], -1103.94f, 290.21f, 64.28f, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_442.f_28[2], -167.67f);
	}
	else
	{
		Local_442.f_28[2] = PED::CREATE_PED(6, iLocal_83, -1102.73f, 290.91f, -200f, 92.06f, 0, 0);
	}
	if (!GlobalFunc_188())
	{
		GlobalFunc_4965(PLAYER::PLAYER_PED_ID(), Local_105, fLocal_108, 1, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	func_287(1);
	STREAMING::REQUEST_MODEL(iLocal_508);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_508))
	{
		SYSTEM::WAIT(0);
	}
	func_286(2);
	if (!GlobalFunc_188())
	{
		func_255(1, 1, 1, 1);
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	}
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(6, 0);
	iLocal_511 = 0;
	iLocal_513 = 0;
	iLocal_100 = 0;
	iLocal_528 = 0;
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (!func_317(0, 1))
		{
		}
		if (!func_316(1, 1))
		{
		}
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 1);
		}
		func_314(1, 1, 1);
	}
}

void func_314(int iParam0, int iParam1, int iParam2)//Position - 0x2A508
{
	func_255(0, 0, iParam2, 1);
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


int func_316(bool bParam0, bool bParam1)//Position - 0x2A600
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1502457334, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1502457334, 3, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1994188940, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1994188940, 3, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_317(bool bParam0, bool bParam1)//Position - 0x2A66E
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		ENTITY::CREATE_FORCED_OBJECT(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 1f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		ENTITY::CREATE_FORCED_OBJECT(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-795418380, -0.9f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-795418380, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

































































void func_382()//Position - 0x31ADC
{
	Local_105 = { -1102.906f, 284.731f, 63.0602f };
	fLocal_108 = 9.4866f;
	Local_109 = { -1140.98f, 297.59f, 65.89f };
	Local_88.f_10 = "Josh4CopRush";
	Local_88.f_11 = 0;
	Local_533[0 /*7*/] = { -1152.526f, 278.2318f, 65.69334f };
	Local_533[0 /*7*/].f_3 = { -1136.277f, 239.0551f, 69.44059f };
	Local_533[0 /*7*/].f_6 = 3.25f;
	Local_533[1 /*7*/] = { -1151.918f, 287.2276f, 66.04018f };
	Local_533[1 /*7*/].f_3 = { -1137.051f, 290.5453f, 70.0429f };
	Local_533[1 /*7*/].f_6 = 3.25f;
	Local_533[2 /*7*/] = { -1093.003f, 295.5289f, 63.11537f };
	Local_533[2 /*7*/].f_3 = { -1069.194f, 293.5286f, 67.53568f };
	Local_533[2 /*7*/].f_6 = 3.25f;
	Local_533[3 /*7*/] = { -1050.776f, 284.3935f, 63.15669f };
	Local_533[3 /*7*/].f_3 = { -1050.369f, 244.0945f, 67.86394f };
	Local_533[3 /*7*/].f_6 = 3.25f;
	Local_533[4 /*7*/] = { -1065.411f, 229.6216f, 61.88657f };
	Local_533[4 /*7*/].f_3 = { -1104.021f, 232.1321f, 68.14975f };
	Local_533[4 /*7*/].f_6 = 3.25f;
	Local_569[0 /*3*/] = { -1357.57f, 200.1279f, 58.075f };
	Local_585[0 /*4*/] = 0.0072f;
	Local_585[0 /*4*/].f_1 = 0.0163f;
	Local_585[0 /*4*/].f_2 = -0.5901f;
	Local_585[0 /*4*/].f_3 = 0.8071f;
	Local_569[1 /*3*/] = { -1219.035f, 401.5473f, 74.713f };
	Local_585[1 /*4*/] = -0.0145f;
	Local_585[1 /*4*/].f_1 = 0.0329f;
	Local_585[1 /*4*/].f_2 = -0.6893f;
	Local_585[1 /*4*/].f_3 = 0.7235f;
	Local_569[2 /*3*/] = { -1113.06f, 397.6948f, 69.1133f };
	Local_585[2 /*4*/] = -0.0155f;
	Local_585[2 /*4*/].f_1 = -0.04f;
	Local_585[2 /*4*/].f_2 = 0.7661f;
	Local_585[2 /*4*/].f_3 = -0.6413f;
	Local_569[3 /*3*/] = { -885.071f, 240.0283f, 71.7539f };
	Local_585[3 /*4*/] = -0.0576f;
	Local_585[3 /*4*/].f_1 = 0f;
	Local_585[3 /*4*/].f_2 = 0.5936f;
	Local_585[3 /*4*/].f_3 = 0.8027f;
	Local_569[4 /*3*/] = { -1020.495f, 121.0783f, 53.0567f };
	Local_585[4 /*4*/] = 0.0234f;
	Local_585[4 /*4*/].f_1 = 0.0126f;
	Local_585[4 /*4*/].f_2 = 0.2792f;
	Local_585[4 /*4*/].f_3 = 0.9599f;
	HUD::REQUEST_ADDITIONAL_TEXT("JOSH4", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		if (func_317(0, 1))
		{
			GlobalFunc_2838("*** Opened Josh gate for replay");
		}
	}
	GlobalFunc_2838("*** Set up coords");
}



int func_385(var uParam0)//Position - 0x31F0A
{
	int iVar0[4];
	int iVar5;
	float fVar6;
	bool bVar7;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = iLocal_80;
	iVar0[2] = joaat("s_m_y_cop_01");
	iVar0[3] = joaat("police3");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "JOSH_4_INT_CONCAT", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar5]);
				iVar5++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmjosh4", "beckon_a_josh", 0);
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			if (!func_317(0, 1))
			{
			}
			if (!func_316(1, 1))
			{
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 58, -1103.6f, 290.81f, 64.31f, -99.24f, "JOSH LAUNCHER RC", 1))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[0], 17, 1);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[2], -1102.92f, 290.12f, 64.28f, 40.46f, 6);
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_pistol"), -1, 0, 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmjosh4", "BECKON_A_COP_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[2]))
			{
				GlobalFunc_6479(&(uParam0->f_28[2]), iVar0[2], -1102.73f, 290.91f, 64.28f, 92.06f, 6);
				if (GlobalFunc_115(uParam0->f_28[2]))
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 10, 0, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[2], 1);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[2], joaat("weapon_pistol"), -1, 0, 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[2]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[2], "rcmjosh4", "BECKON_A_COP_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_387(&(uParam0->f_35[0]), iVar0[3], -1107.5f, 280.33f, 64.01f, 97.97f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				func_386(&(uParam0->f_35[1]), 0);
				if (GlobalFunc_4947(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_35[1], 900f);
					fVar6 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_35[1]);
					fVar6 = (fVar6 / 2f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_35[1], fVar6);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[1]);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (bVar7)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1138.32f, 299.69f, 65.94f, 5f, joaat("prop_lrggate_01c_l"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.32f, 299.69f, 65.94f, 1, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1137.52f, 297.02f, 65.81f, 5f, joaat("prop_lrggate_01c_r"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.054f, 295.5856f, 67.18046f, 1, 0f, 0);
			}
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar5]);
				iVar5++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_386(var uParam0, bool bParam1)//Position - 0x322FF
{
	struct<3> Var0;
	float fVar3;
	
	if (bParam1)
	{
		Var0 = { -1129.18f, 300.55f, 65.92f };
		fVar3 = 86.97f;
	}
	else
	{
		Var0 = { -1139.759f, 291.483f, 66.327f };
		fVar3 = 6.077003f;
	}
	func_387(uParam0, iLocal_80, Var0, fVar3);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, 0, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*uParam0, 1);
}

void func_387(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x32373
{
	GlobalFunc_6692(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}











void func_398()//Position - 0x32673
{
	int iVar0;
	
	GlobalFunc_8954();
	HUD::CLEAR_PRINTS();
	if (GlobalFunc_9159())
	{
		GlobalFunc_2838("...Random Character Script was triggered so additional cleanup required");
	}
	iVar0 = 1;
	while (iVar0 <= (Local_442.f_28 - 1))
	{
		if (GlobalFunc_115(Local_442.f_28[iVar0]))
		{
			GlobalFunc_132(&(Local_442.f_28[iVar0]), 1, 0, 1);
		}
		iVar0++;
	}
	GlobalFunc_132(&(Local_442.f_28[0]), 1, 0, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_442.f_35 - 1))
	{
		GlobalFunc_190(&(Local_442.f_35[iVar0]));
		iVar0++;
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f, 0);
	func_399(&Local_442, 1, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_84);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_399(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x32745
{
	GlobalFunc_7101(uParam0, iParam1);
	GlobalFunc_8327(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}


































