#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 16;
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
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
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
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
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
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_239 = { 0, 0, 0 } ;
	struct<3> Local_242 = { 0, 0, 0 } ;
	struct<3> Local_245 = { 0, 0, 0 } ;
	struct<3> Local_248 = { 0, 0, 0 } ;
	struct<3> Local_251 = { 0, 0, 0 } ;
	struct<3> Local_254 = { 0, 0, 0 } ;
	struct<3> Local_257 = { 0, 0, 0 } ;
	struct<3> Local_260 = { 0, 0, 0 } ;
	struct<3> Local_263 = { 0, 0, 0 } ;
	struct<3> Local_266 = { 0, 0, 0 } ;
	struct<3> Local_269 = { 0, 0, 0 } ;
	struct<3> Local_272 = { 0, 0, 0 } ;
	bool bLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	var uLocal_284[2] = { 0, 0 };
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289[2] = { 0, 0 };
	int iLocal_292[5] = { 0, 0, 0, 0, 0 };
	var uLocal_298[3] = { 0, 0, 0 };
	var uLocal_302[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	var uLocal_313 = 8;
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
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 1;
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
	struct<9> Var1;
	int iVar10;
	var uVar11;
	bool bVar12;
	var uVar13;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_51 = -1f;
	iLocal_219 = 1;
	iLocal_228 = -1;
	iLocal_229 = -1;
	Local_245 = { 370.2576f, -1597.488f, 35.94954f };
	Local_248 = { 824.992f, -1289.267f, 27.24564f };
	Local_251 = { 450.1889f, -981.6754f, 42.69174f };
	Local_254 = { -1088.37f, -842.2911f, 30.27554f };
	Local_257 = { 608.9076f, 0.806411f, 100.2497f };
	Local_260 = { -562.0159f, -130.8113f, 37.4369f };
	Local_263 = { 1855.237f, 3683.236f, 33.29165f };
	Local_266 = { -443.5063f, 6016.231f, 30.71787f };
	Local_269 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0;
	iVar10 = 0;
	Local_233 = { ScriptParam_0.f_1[0 /*3*/] };
	Var1 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_289[0]))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_289[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_289[0]);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_289[1]))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_289[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_289[1]);
			}
		}
		func_226(Var1, &iLocal_289, bVar12);
	}
	GlobalFunc_4607(&uLocal_313, 3);
	if (func_194(Local_233, -1, 0, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (iVar0 != 7)
	{
		iVar18 = 0;
		GlobalFunc_8269(&uLocal_313);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !GlobalFunc_6827())
		{
			iVar18 = 0;
			iVar0 = 7;
			func_226(Var1, &iLocal_289, bVar12);
		}
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_10587() || GlobalFunc_8372(7))
			{
				iVar18 = 0;
				iVar0 = 7;
				func_226(Var1, &iLocal_289, bVar12);
			}
		}
		RECORDING::_0x208784099002BC30("RE_GD", 0);
		if (GlobalFunc_6568())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_289[0]))
			{
				PED::DELETE_PED(&(iLocal_289[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_289[1]))
			{
				PED::DELETE_PED(&(iLocal_289[1]));
			}
			while (!GlobalFunc_82())
			{
				SYSTEM::WAIT(0);
			}
			func_173(-1, 0);
			GlobalFunc_7068();
			iVar18 = 0;
			iVar0 = 7;
			func_226(Var1, &iLocal_289, bVar12);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(GlobalFunc_80(PLAYER::PLAYER_ID()) - Vector(10f, 20f, 20f), GlobalFunc_80(PLAYER::PLAYER_ID()) + Vector(10f, 20f, 20f)) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(GlobalFunc_80(PLAYER::PLAYER_ID()) - Vector(10f, 20f, 20f), GlobalFunc_80(PLAYER::PLAYER_ID()) + Vector(10f, 20f, 20f)))
			{
				if ((((!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_289[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_289[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.2f)
					{
						if (iLocal_229 == -1)
						{
							iLocal_229 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_229 = -1;
					}
					if (iLocal_229 != -1 && MISC::GET_GAME_TIMER() > iLocal_229 + 1000)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_229 != -1 && MISC::GET_GAME_TIMER() > iLocal_229 + 10000)
						{
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!PED::IS_PED_INJURED(iLocal_289[0]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_308);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_308);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_289[0], iLocal_308);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
								PED::SET_PED_KEEP_TASK(iLocal_289[0], 1);
							}
							if (!PED::IS_PED_INJURED(iLocal_289[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_289[1], iLocal_308);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
								PED::SET_PED_KEEP_TASK(iLocal_289[1], 1);
							}
							iVar18 = 0;
							iVar0 = 7;
							func_226(Var1, &iLocal_289, bVar12);
						}
					}
				}
			}
		}
		if (iVar10 > 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_309, -1033021910);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_309, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1033021910, iLocal_309);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, iLocal_309);
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_309, -1033021910);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_309, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, iLocal_309);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, iLocal_309);
			}
		}
		if ((iVar10 > 1 && iVar10 < 7) && !iLocal_282)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_288))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_288, PLAYER::PLAYER_PED_ID(), 1))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_289[0]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_289[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_289[1]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_289[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
		}
		if ((iVar10 > 7 && iVar10 < 18) && !iLocal_282)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_289[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_289[1]))
			{
				if (PED::IS_PED_INJURED(iLocal_289[1]) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_289[0], PLAYER::PLAYER_PED_ID(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_289[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_289[0], iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
						PED::SET_PED_KEEP_TASK(iLocal_289[0], 1);
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
				if (PED::IS_PED_INJURED(iLocal_289[0]) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_289[1], PLAYER::PLAYER_PED_ID(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_289[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_289[1], iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
						PED::SET_PED_KEEP_TASK(iLocal_289[1], 1);
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
		}
		if (func_156(&iLocal_289, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 180f))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_282 = 1;
			}
			if (iLocal_282)
			{
				if (!bLocal_277)
				{
					func_155();
				}
				if (!bLocal_278)
				{
					if (!PED::IS_PED_INJURED(iLocal_288))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_288, "random@getawaydriver", "idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 3f, 1073741824, 0);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_288, iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
						PED::SET_PED_KEEP_TASK(iLocal_288, 1);
						bLocal_278 = true;
					}
				}
			}
			else
			{
				iVar18 = 0;
				iVar0 = 7;
				func_226(Var1, &iLocal_289, bVar12);
			}
			if (bLocal_277)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
				if (!PED::IS_PED_INJURED(uLocal_298[0]))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_298[0], PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!GlobalFunc_111())
							{
								TASK::TASK_LOOK_AT_ENTITY(uLocal_298[0], PLAYER::PLAYER_PED_ID(), 1000, 2052, 4);
								GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
							}
							else
							{
								if (!PED::IS_PED_INJURED(uLocal_298[0]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[0], 0);
								}
								if (!PED::IS_PED_INJURED(uLocal_298[1]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[1], 0);
								}
								if (SYSTEM::TIMERB() > 3000)
								{
									while (!GlobalFunc_82())
									{
										SYSTEM::WAIT(0);
									}
									GlobalFunc_4702(5);
									func_173(-1, 0);
									GlobalFunc_7068();
									iVar18 = 0;
									iVar0 = 7;
									func_226(Var1, &iLocal_289, bVar12);
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_AT_ENTITY(uLocal_298[0], PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar18 = 0;
							iVar0 = 7;
							func_226(Var1, &iLocal_289, bVar12);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(uLocal_298[0]);
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						iVar18 = 0;
						iVar0 = 7;
						func_226(Var1, &iLocal_289, bVar12);
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_288))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
			if (bLocal_278)
			{
				if (!PED::IS_PED_INJURED(iLocal_288))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_288, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!GlobalFunc_111())
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_288, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_288))
							{
								PED::SET_PED_CAN_BE_TARGETTED(iLocal_288, 1);
							}
							while (GlobalFunc_111())
							{
								SYSTEM::WAIT(0);
							}
							while (!GlobalFunc_82())
							{
								SYSTEM::WAIT(0);
							}
							EVENT::REMOVE_ALL_SHOCKING_EVENTS(1);
							GlobalFunc_4702(5);
							func_173(-1, 0);
							GlobalFunc_7068();
							iVar18 = 0;
							iVar0 = 7;
							func_226(Var1, &iLocal_289, bVar12);
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_288, PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar18 = 0;
						iVar0 = 7;
						func_226(Var1, &iLocal_289, bVar12);
					}
				}
				else if (PED::IS_PED_INJURED(uLocal_298[0]))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_142())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
				if (func_130(1, Var1))
				{
					iVar18 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_118(3))
				{
					iLocal_312 = 1;
					GlobalFunc_728(1);
					iVar17 = MISC::GET_GAME_TIMER();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar18 = 0;
				break;
			
			case 4:
				iVar18 = 0;
				MISC::SET_BIT(&uVar11, 4);
				MISC::SET_BIT(&uVar11, 1);
				MISC::SET_BIT(&uVar11, 5);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (func_116())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								if ((VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 2)) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &uVar13, &uVar16, 1, 1077936128, 0);
				if (GlobalFunc_2521(iVar17, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar10 > 1)
				{
					if (!GlobalFunc_6827())
					{
						if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							iVar18 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_281)
						{
							if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar19 = 0;
								while (iVar19 < iLocal_292)
								{
									if (!PED::IS_PED_INJURED(iLocal_292[iVar19]))
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_292[iVar19], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										PED::SET_PED_KEEP_TASK(iLocal_292[iVar19], 1);
									}
									iVar19++;
								}
								if (!PED::IS_PED_INJURED(iLocal_288))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_288, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_288, 1);
								}
								iLocal_281 = 1;
							}
						}
					}
				}
				else if (func_142())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_226(Var1, &iLocal_289, bVar12);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar10, Var1, &iLocal_289, &iVar18, &bVar12))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar18 = 0;
				iVar0 = 7;
				func_226(Var1, &iLocal_289, bVar12);
				break;
				break;
			
			case 7:
				iVar18 = 0;
				break;
		}
		if (iVar0 != 7)
		{
			SYSTEM::WAIT(iVar18);
		}
	}
	func_226(Var1, &iLocal_289, bVar12);
}

int func_1(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12)//Position - 0xDF1
{
	int iVar0;
	struct<3> Var1[2];
	float fVar8[2];
	struct<3> Var11;
	float fVar14;
	struct<3> Var15[5];
	float fVar31;
	struct<3> Var32[5];
	int iVar48;
	struct<3> Var49;
	int iVar52[3];
	struct<3> Var56;
	struct<3> Var59;
	var uVar62;
	var uVar63;
	int iVar64;
	int iVar65;
	
	Var15[0 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	Var15[1 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	Var15[2 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	Var15[3 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	Var15[4 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	Var32[0 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	Var32[1 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	Var32[2 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	Var32[3 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	Var32[4 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_114(Local_233, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam11 = 0;
			GlobalFunc_8536(39, 1);
			GlobalFunc_8536(40, 1);
			GlobalFunc_8536(41, 1);
			GlobalFunc_8536(42, 1);
			GlobalFunc_8536(43, 1);
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_173(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (GlobalFunc_8315() == 1)
			{
				GlobalFunc_173(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_173(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			if (SYSTEM::VDIST(Local_233, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				Var1[0 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar8[0] = 58.2967f;
				Var1[1 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar8[1] = 92.7793f;
				Var11 = { 939.2422f, 3649.755f, 31.3536f };
				fVar14 = 260.4475f;
			}
			else if (SYSTEM::VDIST(Local_233, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				Var1[0 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar8[0] = 198.4093f;
				Var1[1 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar8[1] = 254.133f;
				Var11 = { 68.4259f, -1569.067f, 28.6027f };
				fVar14 = 64.1114f;
			}
			uLocal_232 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_233 - Vector(50f, 50f, 50f), Local_233 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 0);
			PATHFIND::SET_ROADS_IN_AREA(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0, 1);
			STREAMING::REQUEST_MODEL(joaat("picador"));
			STREAMING::REQUEST_MODEL(joaat("stanier"));
			STREAMING::REQUEST_MODEL(joaat("patriot"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("picador")) || !STREAMING::HAS_MODEL_LOADED(joaat("stanier"))) || !STREAMING::HAS_MODEL_LOADED(joaat("patriot")))
			{
				SYSTEM::WAIT(0);
			}
			iVar52[0] = VEHICLE::CREATE_VEHICLE(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, 1, 1);
			iVar52[1] = VEHICLE::CREATE_VEHICLE(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, 1, 1);
			iVar52[2] = VEHICLE::CREATE_VEHICLE(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar52[0]);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar52[1]);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar52[2]);
			if (iLocal_230 == 0)
			{
			}
			PED::ADD_RELATIONSHIP_GROUP("reCriminals", &iLocal_309);
			PED::ADD_RELATIONSHIP_GROUP("reShopKeep", &iLocal_310);
			PED::ADD_RELATIONSHIP_GROUP("reCops", &iLocal_311);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_309, joaat("COP"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_311, iLocal_309);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_309);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_311);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_311, joaat("COP"));
			(*uParam10)[0] = PED::CREATE_PED(22, Param1, Var1[0 /*3*/], fVar8[0], 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam10)[0], 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam10)[0], iLocal_309);
			WEAPON::GIVE_WEAPON_TO_PED((*uParam10)[0], joaat("weapon_appistol"), -1, 1, 1);
			PED::SET_PED_MONEY((*uParam10)[0], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
			PED::SET_PED_CONFIG_FLAG((*uParam10)[0], 206, 1);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[0], 2, 0);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[0], 1024, 1);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[0], 65536, 1);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[0], 9, 1, 0, 0);
			GlobalFunc_173(&uLocal_54, 2, (*uParam10)[0], "REGETRobber2", 0, 1);
			(*uParam10)[1] = PED::CREATE_PED(22, Param1.f_1, Var1[1 /*3*/], fVar8[1], 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam10)[1], 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam10)[1], iLocal_309);
			WEAPON::GIVE_WEAPON_TO_PED((*uParam10)[1], joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_MONEY((*uParam10)[1], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
			PED::SET_PED_CONFIG_FLAG((*uParam10)[1], 206, 1);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[1], 2, 0);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[1], 1024, 1);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[1], 65536, 1);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 0, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 3, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 4, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 10, 1, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME((*uParam10)[1], "PACKIE_AI_Norm_Part1_Booth");
			GlobalFunc_173(&uLocal_54, 1, (*uParam10)[1], "PACKIE", 0, 1);
			iLocal_288 = PED::CREATE_PED(4, Param1.f_2, Var11, fVar14, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_2);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_288, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_288, iLocal_310);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_288, "A_M_Y_Business_01_CHINESE_MINI_01");
			GlobalFunc_173(&uLocal_54, 3, iLocal_288, "StoreOwner", 0, 1);
			iLocal_292[0] = PED::CREATE_PED(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_292[0], 17, 1);
			TASK::TASK_COWER(iLocal_292[0], -1);
			iLocal_292[2] = PED::CREATE_PED(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_292[2], 17, 1);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_292[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_292[3] = PED::CREATE_PED(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_4);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_292[3], 17, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_288) && !ENTITY::IS_ENTITY_DEAD(iLocal_292[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_292[2])) && !ENTITY::IS_ENTITY_DEAD(iLocal_292[3])) && !ENTITY::IS_ENTITY_DEAD((*uParam10)[0])) && !ENTITY::IS_ENTITY_DEAD((*uParam10)[1]))
			{
				if (((((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_288) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_292[0])) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_292[2])) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_292[3])) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam10)[0])) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam10)[1]))
				{
					STREAMING::REQUEST_ANIM_DICT("random@getawaydriver@thugs");
					STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@halt");
					STREAMING::REQUEST_ANIM_DICT("misslamar1ig_20");
					STREAMING::REQUEST_ANIM_DICT("random@getawaydriver");
					while (((!STREAMING::HAS_ANIM_DICT_LOADED("random@getawaydriver@thugs") || !STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@halt")) || !STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_20")) || !STREAMING::HAS_ANIM_DICT_LOADED("random@getawaydriver"))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_288))
					{
						TASK::TASK_HANDS_UP(iLocal_288, -1, 0, -1, 0);
						if (!PED::IS_PED_INJURED((*uParam10)[0]))
						{
							TASK::TASK_PLAY_ANIM((*uParam10)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY((*uParam10)[0], PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
						}
						if (!PED::IS_PED_INJURED((*uParam10)[1]))
						{
							TASK::TASK_PLAY_ANIM((*uParam10)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY((*uParam10)[1], PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
						}
					}
					SYSTEM::SETTIMERA(0);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_292[0]))
				{
					GlobalFunc_5122(iLocal_292[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!PED::IS_PED_INJURED(iLocal_292[2]))
				{
					GlobalFunc_5122(iLocal_292[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 2000)
			{
				if (!PED::IS_PED_INJURED(iLocal_292[3]))
				{
					GlobalFunc_5122(iLocal_292[3], "GENERIC_FRIGHTENED_HIGH", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, 1, 0))
			{
				if (!iLocal_281)
				{
					if (!PED::IS_PED_INJURED(iLocal_292[0]))
					{
						TASK::TASK_SMART_FLEE_COORD(iLocal_292[0], Local_233, 200f, -1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_292[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_PAUSE(0, 250);
						TASK::TASK_SMART_FLEE_COORD(0, Local_233, 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_292[2], iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
					}
					if (!PED::IS_PED_INJURED(iLocal_292[3]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_PAUSE(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, Local_233, 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_292[3], iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
					}
					iLocal_281 = 1;
				}
			}
			if (func_65(uParam10, PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				*iParam0 = 4;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			if (PED::IS_COP_PED_IN_AREA_3D(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				if ((!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1])) && !PED::IS_PED_INJURED(iLocal_288))
				{
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_288))
				{
					if (!PED::IS_PED_INJURED(iLocal_288))
					{
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_288, iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
					}
					*iParam0 = 5;
				}
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_COP_PED_IN_AREA_3D(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (PED::IS_PED_INJURED(iLocal_288))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam10)[0], PLAYER::PLAYER_PED_ID(), -1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam10)[1], PLAYER::PLAYER_PED_ID(), -1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_288, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_288, 242628503) != 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
				TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_288, iLocal_308);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
			}
			if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.1f)
						{
							if (func_116() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()), 3);
								if (!PED::IS_PED_INJURED(iLocal_288))
								{
									Local_272 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) };
									Var56 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1.5f, -1.5f, 0f) };
									Var59 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1.5f, 0f, 0f) };
									TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_288, 1500, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Var56, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_289[0], iLocal_308);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_288, 2500, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Var59, iLocal_288, 3f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_289[1], iLocal_308);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
								}
								else
								{
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[0], GlobalFunc_468());
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[1], GlobalFunc_468());
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[1], 0);
									if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
										{
											uVar62 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1);
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar62))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar62, 1, 0);
												PED::DELETE_PED(&uVar62);
											}
										}
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
										{
											uVar62 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0);
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar62))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar62, 1, 0);
												PED::DELETE_PED(&uVar62);
											}
										}
									}
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[0], 1);
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_279)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_289[1], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
									iLocal_279 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_279)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_289[1], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
							iLocal_279 = 1;
						}
					}
				}
			}
			if (iLocal_279 || iLocal_280)
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 0.2f)
				{
					if (iLocal_229 == -1)
					{
						iLocal_229 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_229 = -1;
				}
				if (iLocal_229 != -1 && MISC::GET_GAME_TIMER() > iLocal_229 + 10000)
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_289[0]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_289[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_289[0], 1);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_289[0]));
					}
					if (!PED::IS_PED_INJURED(iLocal_289[1]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_289[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_289[1], 1);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_289[1]));
					}
					*iParam11 = 0;
					*iParam0 = 20;
				}
			}
			func_62(uParam10, 120f);
			if (func_64())
			{
				*iParam0 = 18;
			}
			if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_COP_PED_IN_AREA_3D(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f))) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Local_233 - Vector(40f, 40f, 40f), Local_233 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam11 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!func_61(uParam10, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 120f) || !bLocal_275)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_272, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
							{
								if (func_116() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()), 3);
									while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
									{
										SYSTEM::WAIT(0);
									}
									if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
									{
										if (!PED::IS_PED_IN_GROUP(iLocal_289[0]) && !PED::IS_PED_IN_GROUP(iLocal_289[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_289[0]);
											TASK::CLEAR_PED_TASKS(iLocal_289[1]);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_289[1], PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[0], GlobalFunc_468());
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[1], GlobalFunc_468());
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[0], 1);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[1], 0);
											if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
											{
												if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
												{
													uVar63 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1);
													if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar63))
													{
														ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar63, 1, 0);
														PED::DELETE_PED(&uVar63);
													}
												}
												if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
												{
													uVar63 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0);
													if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar63))
													{
														ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar63, 1, 0);
														PED::DELETE_PED(&uVar63);
													}
												}
											}
											PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[0], 1);
											PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[1], 1);
										}
									}
								}
								else if (!iLocal_279)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_279 = 1;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_279)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_279 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_289[0]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_289[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_288))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[0], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[0], 242628503) != 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[0], 242628503) == 7)
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[0], GlobalFunc_468());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[0], 1);
							}
						}
					}
					else
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[0], GlobalFunc_468());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[0], 1);
					}
				}
				else
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_289[0]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_289[0], ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_289[0], 2f);
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[0], -875674219) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[0], -875674219) == 0)
					{
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_289[1]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_289[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_288))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[1], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[1], 242628503) != 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[1], 242628503) == 7)
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[1], GlobalFunc_468());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[1], 1);
							}
						}
					}
					else
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[1], GlobalFunc_468());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[1], 1);
					}
				}
				else
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_289[1]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_272, 2f, 2f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_289[1], ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1), 2.5f, 2.5f, 2.5f, 0, 1, 0))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_289[1], 2f);
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[1], -875674219) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_275)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_INJURED(iLocal_289[0])) && !PED::IS_PED_INJURED(iLocal_289[1]))
					{
						if ((PED::IS_PED_IN_VEHICLE(iLocal_289[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_289[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_289[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
						if ((PED::IS_PED_IN_VEHICLE(iLocal_289[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_289[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_289[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_275 = true;
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (func_61(uParam10, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 120f) || bLocal_275)
				{
					if (!PED::IS_PED_INJURED(iLocal_288))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_288, iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
						PED::SET_PED_KEEP_TASK(iLocal_288, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_288);
					}
					func_60();
					if (!CAM::IS_SPHERE_VISIBLE(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_306 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, 1, 1);
						uLocal_302[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_302[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_306 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, 1, 1);
						uLocal_302[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_302[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_306 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, 1, 1);
						uLocal_302[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						uLocal_302[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_302[0], joaat("weapon_pistol"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_302[1], joaat("weapon_pistol"), -1, 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_302[0], 0);
					}
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					VEHICLE::SET_VEHICLE_IS_WANTED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_309);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_309, joaat("COP"));
					SYSTEM::WAIT(1000);
					if (!bLocal_275)
					{
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam10)[iVar48]);
					}
					iLocal_223 = MISC::GET_GAME_TIMER();
					*iParam0 = 8;
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_62(uParam10, 120f);
			func_59();
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			GlobalFunc_4720(uLocal_52);
			if (GlobalFunc_2521(iLocal_223, 3000))
			{
				*iParam0 = 9;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_57(uParam10);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_309);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_309, joaat("COP"));
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					VEHICLE::SET_VEHICLE_IS_WANTED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_306);
				}
				if (!PED::IS_PED_INJURED(uLocal_302[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_302[0]));
				}
				if (!PED::IS_PED_INJURED(uLocal_302[1]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_302[1]));
				}
				GlobalFunc_4720(uLocal_52);
				*iParam0 = 10;
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !PED::IS_PED_INJURED((*uParam10)[iVar48]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE((*uParam10)[iVar48], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_284[iVar48]))
						{
							uLocal_284[iVar48] = GlobalFunc_6797((*uParam10)[iVar48], 0, 145);
							GlobalFunc_4720(uLocal_52);
						}
					}
				}
				iVar48++;
			}
			func_62(uParam10, 120f);
			func_59();
			if (func_53())
			{
				*iParam0 = 12;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_309);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_309, joaat("COP"));
				GlobalFunc_4720(uLocal_52);
				*iParam0 = 8;
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_309);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_309, joaat("COP"));
				Var49 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar31 = 9999f;
				iVar64 = 0;
				while (iVar64 < Var15.x)
				{
					if (SYSTEM::VDIST(Var49, Var15[iVar64 /*3*/]) < fVar31)
					{
						fVar31 = SYSTEM::VDIST(Var49, Var15[iVar64 /*3*/]);
						iLocal_222 = iVar64;
					}
					iVar64++;
				}
				if (GlobalFunc_100(Var15[iLocal_222 /*3*/], 0f, 0f, 0f))
				{
					iLocal_222 = 0;
				}
				uLocal_52 = GlobalFunc_5104(Var15[iLocal_222 /*3*/], 1);
				if (GlobalFunc_8315() == 2 && !GlobalFunc_832())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_287))
					{
						uLocal_287 = GlobalFunc_5104(Local_269, 0);
						HUD::SET_BLIP_SPRITE(uLocal_287, 269);
						func_47();
					}
				}
				iLocal_223 = MISC::GET_GAME_TIMER();
				if (!iLocal_221)
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_221 = 1;
				}
				*iParam0 = 11;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam11 = 0;
			func_46(uParam10);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				GlobalFunc_4720(uLocal_52);
				*iParam0 = 8;
			}
			else
			{
				if (func_45(Var15[iLocal_222 /*3*/]))
				{
					GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_43())
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (GlobalFunc_745())
					{
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var15[iLocal_222 /*3*/], Global_18, 1, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_289[0], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_289[1], Var15[iLocal_222 /*3*/], 20f, 20f, 20f, 0, 1, 0))
					{
						GlobalFunc_4720(uLocal_52);
						iVar48 = 0;
						while (iVar48 <= (*uParam10 - 1))
						{
							if (iLocal_219)
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
								SYSTEM::WAIT(1000);
								iLocal_219 = 0;
							}
							if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam10)[iVar48]);
								PED::REMOVE_PED_FROM_GROUP((*uParam10)[iVar48]);
								PED::REMOVE_GROUP(uLocal_232);
							}
							iVar48++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !PED::IS_PED_INJURED((*uParam10)[iVar48]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE((*uParam10)[iVar48], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_284[iVar48]))
						{
							uLocal_284[iVar48] = GlobalFunc_6797((*uParam10)[iVar48], 0, 145);
						}
					}
				}
				iVar48++;
			}
			func_62(uParam10, 120f);
			func_59();
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 0.2f)
			{
				if (iLocal_229 == -1)
				{
					iLocal_229 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_229 = -1;
			}
			if (iLocal_229 != -1 && MISC::GET_GAME_TIMER() > (iLocal_229 + 60000))
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_289[0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_289[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_289[0], 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_289[1]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_289[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_289[1], 1);
				}
				*iParam11 = 0;
				*iParam0 = 20;
			}
			if (func_53())
			{
				*iParam0 = 12;
			}
			if (func_64())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_155();
			if (bLocal_277)
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_289[0]);
				PED::REMOVE_PED_FROM_GROUP(iLocal_289[1]);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED((*uParam10)[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
					TASK::TASK_PERFORM_SEQUENCE((*uParam10)[0], iLocal_308);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
					PED::SET_PED_KEEP_TASK((*uParam10)[0], 1);
				}
				if (!PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 4194304);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
					TASK::TASK_PERFORM_SEQUENCE((*uParam10)[1], iLocal_308);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
					PED::SET_PED_KEEP_TASK((*uParam10)[1], 1);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 5f)
			{
				iVar48 = 0;
				while (iVar48 <= (*uParam10 - 1))
				{
					if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS((*uParam10)[iVar48], 242628503) != 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam10)[iVar48], 242628503) != 0)
						{
							if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
							{
								iVar0 = 0;
								iLocal_227 = iVar48;
							}
						}
					}
					iVar48++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam10)[iVar48], 4000, 2048, 2);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194816);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*uParam10)[0], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					if (!PED::IS_PED_INJURED((*uParam10)[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 2000, 4194816);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var32[iLocal_222 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE((*uParam10)[1], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					iVar0 = 0;
					PED::SET_PED_KEEP_TASK((*uParam10)[iVar48], 1);
					TASK::TASK_LOOK_AT_ENTITY((*uParam10)[iVar48], PLAYER::PLAYER_PED_ID(), 4000, 2052, 2);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (iLocal_227 > 0)
					{
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar48++;
			}
			break;
		
		case 15:
			if (!*bParam12)
			{
				if (!PED::IS_PED_INJURED((*uParam10)[1]))
				{
					if (!iLocal_219)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						iLocal_219 = 1;
					}
					GlobalFunc_10829(GlobalFunc_8315(), 1, 1000, 0, 1);
					*bParam12 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam10)[0], 0) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam10)[1], 0))
				{
					HUD::CLEAR_PRINTS();
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					while (!GlobalFunc_82())
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_9533(10, 0);
					GlobalFunc_4702(6);
					func_173(-1, 0);
					GlobalFunc_7068();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*bParam12 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_282 = 1;
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_309, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_309, iLocal_309);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (!PED::IS_PED_INJURED(iLocal_289[iVar65]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_284[iVar65]))
					{
						HUD::REMOVE_BLIP(&(uLocal_284[iVar65]));
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_289[iVar65], 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_289[iVar65], 0, 0);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_52))
						{
							HUD::REMOVE_BLIP(&uLocal_52);
						}
						PED::REMOVE_PED_FROM_GROUP(iLocal_289[iVar65]);
						TASK::TASK_COMBAT_PED(iLocal_289[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_289[1]))
			{
				GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_289[0]))
			{
				GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_278)
			{
				if (!PED::IS_PED_INJURED(iLocal_288))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_288, 0);
					TASK::TASK_PLAY_ANIM(iLocal_288, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar65 = 0;
			while (iVar65 < iLocal_292)
			{
				if (!PED::IS_PED_INJURED(iLocal_292[iVar65]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_292[iVar65], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_292[iVar65], 1);
				}
				iVar65++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_309, 1862763509);
			iVar65 = 0;
			while (iVar65 < iLocal_289)
			{
				if (PED::IS_PED_INJURED(iLocal_289[iVar65]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_284[iVar65]))
					{
						HUD::REMOVE_BLIP(&(uLocal_284[iVar65]));
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_289[iVar65]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_284[iVar65]))
					{
						uLocal_284[iVar65] = GlobalFunc_6797(iLocal_289[iVar65], 1, 145);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_289[iVar65]))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_289[iVar65]);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_289[iVar65], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_289[iVar65], 0, 0);
						TASK::TASK_COMBAT_PED(iLocal_289[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_289[iVar65], 1);
					}
					else
					{
						TASK::TASK_COMBAT_PED(iLocal_289[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_289[iVar65], 1);
					}
				}
				iVar65++;
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_52))
			{
				HUD::REMOVE_BLIP(&uLocal_52);
			}
			break;
		
		case 20:
			if (!GlobalFunc_111())
			{
				return 1;
			}
			break;
	}
	return 0;
}










































int func_43()//Position - 0x4D5D
{
	if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_831())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_24683 = 1;
					if (!Global_24682)
					{
						Global_24682 = 1;
						return 1;
					}
				}
			}
			else if (Global_24683)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_24683 = 0;
			}
		}
	}
	return 0;
}


int func_45(struct<3> Param0)//Position - 0x4DE3
{
	if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_831() && !Global_24681)
		{
			if (fLocal_51 == -1f)
			{
				fLocal_51 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_51 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_46(var uParam0)//Position - 0x4E70
{
	if (!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_226)
			{
				case 0:
					iLocal_225 = MISC::GET_GAME_TIMER();
					iLocal_226++;
					break;
				
				case 1:
					if (GlobalFunc_2521(iLocal_225, 2000))
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_226++;
						}
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8315() == 0)
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (GlobalFunc_8315() == 1)
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (GlobalFunc_8315() == 2)
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_226++;
					}
					break;
				}
			}
	}
}

void func_47()//Position - 0x4F91
{
	if (GlobalFunc_8315() == 2)
	{
		if (!Global_24680)
		{
			GlobalFunc_159("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}






int func_53()//Position - 0x5054
{
	if (func_54())
	{
		if (((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_245, 50f, 50f, 50f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_248, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_251, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_254, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_257, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_260, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_263, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_266, 50f, 50f, 50f, 0, 1, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_54()//Position - 0x519F
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_289[0], iVar0, 0) && PED::IS_PED_IN_VEHICLE(iLocal_289[1], iVar0, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}



void func_57(var uParam0)//Position - 0x5303
{
	if (!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_224)
			{
				case 0:
					iLocal_225 = MISC::GET_GAME_TIMER();
					iLocal_224++;
					break;
				
				case 1:
					if (GlobalFunc_2521(iLocal_225, 2000))
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_224++;
						}
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8315() == 0)
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (GlobalFunc_8315() == 1)
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (GlobalFunc_8315() == 2)
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_224++;
					}
					break;
				}
			}
	}
}


void func_59()//Position - 0x543B
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		if (!PED::IS_PED_INJURED(iLocal_289[iVar0]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!func_116())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_289[iVar0], 1);
					if (PED::IS_PED_IN_GROUP(iLocal_289[iVar0]))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_289[iVar0]);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[iVar0], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[iVar0], 1227113341) != 0)
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_289[iVar0], PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_289[iVar0], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_289[iVar0], 0, 0);
					}
					if (!iLocal_280)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_280 = 1;
						}
					}
				}
				else
				{
					iLocal_280 = 0;
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_289[iVar0], 0);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[iVar0], 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_289[iVar0], 1227113341) == 0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_289[iVar0]);
					}
					if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
					{
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[0], 1);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[1], 0);
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
							{
								uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar1))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar1, 1, 0);
									PED::DELETE_PED(&uVar1);
								}
							}
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
							{
								uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar2))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2, 1, 0);
									PED::DELETE_PED(&uVar2);
								}
							}
						}
					}
				}
			}
			else if (!PED::IS_PED_IN_GROUP(iLocal_289[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_289[iVar0]);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_289[iVar0], GlobalFunc_468());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_289[iVar0], 1);
				if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
				{
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[0], 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_289[1], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_60()//Position - 0x5696
{
	if (!GlobalFunc_832())
	{
		if (GlobalFunc_8315() == 2)
		{
			Global_24678 = 1;
		}
	}
}

int func_61(var uParam0, int iParam1, float fParam2)//Position - 0x56B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), fParam2, fParam2, fParam2, 0, 1, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_62(var uParam0, float fParam1)//Position - 0x571C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_284[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_284[iVar0]));
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_284[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_284[iVar0]));
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(uLocal_284[iVar0]))
					{
						uLocal_284[iVar0] = GlobalFunc_6797((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_284[iVar0]))
			{
				uLocal_284[iVar0] = GlobalFunc_6797((*uParam0)[iVar0], 0, 145);
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_284[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_284[iVar0]));
				}
			}
		}
		iVar0++;
	}
}


int func_64()//Position - 0x5857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_289[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_289[iVar0]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_289[iVar0]))
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_289[iVar0], PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(iLocal_289[0]) && !PED::IS_PED_INJURED(iLocal_289[1]))
							{
								if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_289[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_289[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_289[1])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_289[1]))
								{
									if (iLocal_228 == -1)
									{
										iLocal_228 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									iLocal_228 = -1;
								}
							}
						}
					}
					if (!iLocal_283)
					{
						if (iLocal_228 != -1 && MISC::GET_GAME_TIMER() > iLocal_228 + 1000)
						{
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_283 = 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289[iVar0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
						{
							return 1;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289[iVar0], PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_289[iVar0]) < 190) || (iLocal_228 != -1 && MISC::GET_GAME_TIMER() > iLocal_228 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289[iVar0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						return 1;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(var uParam0, int iParam1)//Position - 0x5A1A
{
	int iVar0;
	
	if (!iLocal_220)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED((*uParam0)[iVar0])) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_284[iVar0]))
					{
						if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
						{
							if (!GlobalFunc_6827())
							{
								GlobalFunc_9559(1);
								GlobalFunc_563(1);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_307))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_307, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_307, 50f, 50f, 50f, 0, 1, 0))
									{
										GlobalFunc_9554(iLocal_307, 0, 145);
									}
								}
							}
							uLocal_284[iVar0] = GlobalFunc_6797((*uParam0)[iVar0], 0, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_284[iVar0], 0);
							GlobalFunc_4720(uLocal_53);
						}
					}
					if (!GlobalFunc_111())
					{
						if (iLocal_231 < MISC::GET_GAME_TIMER())
						{
							GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_231 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 4000));
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, 1, 0))
					{
						GlobalFunc_4935();
						if (!ENTITY::IS_ENTITY_DEAD(iParam1))
						{
							if (!GlobalFunc_111())
							{
								if (func_116() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								else
								{
									GlobalFunc_10607(&uLocal_54, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_220 = 1;
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_284[0]))
								{
									HUD::SHOW_HEIGHT_ON_BLIP(uLocal_284[0], 1);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_284[1]))
								{
									HUD::SHOW_HEIGHT_ON_BLIP(uLocal_284[1], 1);
								}
								if (!PED::IS_PED_INJURED((*uParam0)[1]) && !PED::IS_PED_INJURED(iLocal_288))
								{
									PED::SET_PED_RESET_FLAG((*uParam0)[1], 156, 1);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
									TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_288, -1, 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
									TASK::TASK_PERFORM_SEQUENCE((*uParam0)[1], iLocal_308);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
								}
								TASK::TASK_LOOK_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

















































int func_114(struct<3> Param0, float fParam3, int iParam4)//Position - 0x7A46
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, fParam3, fParam3, fParam3, 0, 1, 0))
	{
		if (iParam4 == 0)
		{
			if (CAM::IS_SPHERE_VISIBLE(Param0, 5f))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


int func_116()//Position - 0x7AA5
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}


int func_118(int iParam0)//Position - 0x7BEA
{
	if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)//Position - 0x7C07
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (GlobalFunc_39(6) || GlobalFunc_39(7))
			{
				return 1;
			}
			else
			{
				return func_119(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (GlobalFunc_4938(5))
			{
				if (GlobalFunc_9039(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}











int func_130(int iParam0, struct<7> Param1, var uParam8, var uParam9)//Position - 0x8495
{
	if (iParam0 == 1)
	{
		GlobalFunc_6492(&uLocal_313, Param1);
		GlobalFunc_6492(&uLocal_313, Param1.f_1);
		GlobalFunc_6492(&uLocal_313, Param1.f_2);
		GlobalFunc_6492(&uLocal_313, Param1.f_3);
		GlobalFunc_6492(&uLocal_313, Param1.f_4);
		GlobalFunc_6492(&uLocal_313, Param1.f_5);
		GlobalFunc_6492(&uLocal_313, Param1.f_6);
		if (func_137(&uLocal_313))
		{
			return 1;
		}
	}
	else
	{
		func_131(&uLocal_313, 0);
	}
	return 0;
}

void func_131(var uParam0, bool bParam1)//Position - 0x8508
{
	int iVar0;
	
	if (!bParam1)
	{
		func_133(uParam0);
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


void func_133(var uParam0)//Position - 0x855C
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




int func_137(var uParam0)//Position - 0x8698
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
			if (!func_138(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_138(var uParam0)//Position - 0x86FA
{
	return func_139(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_139(int iParam0, char* sParam1, int iParam2)//Position - 0x8711
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (GlobalFunc_2270(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
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



int func_142()//Position - 0x8900
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_48) < (75f * 75f))
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
	if (GlobalFunc_9556(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}













void func_155()//Position - 0xA586
{
	if (!bLocal_277)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(GlobalFunc_80(PLAYER::PLAYER_ID()) - Vector(0f, 10f, 0f), MISC::GET_RANDOM_INT_IN_RANGE(5, 15), &Local_242, 1, 1077936128, 0);
		if (!CAM::IS_SPHERE_VISIBLE(Local_242, 10f))
		{
			Local_236 = { Local_242 };
			bLocal_276 = true;
		}
		else
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(GlobalFunc_80(PLAYER::PLAYER_ID()) + Vector(0f, 10f, 0f), MISC::GET_RANDOM_INT_IN_RANGE(5, 15), &Local_242, 1, 1077936128, 0);
			if (!CAM::IS_SPHERE_VISIBLE(Local_242, 10f))
			{
				Local_236 = { Local_242 };
				bLocal_276 = true;
			}
			if (bLocal_276)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_298[0]))
				{
					uLocal_298[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), Local_236 + Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_53())
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_298[0], joaat("weapon_pistol"), -1, 1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_298[0], iLocal_311);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[0], 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_298[0], 50f, 0);
						PED::SET_PED_KEEP_TASK(uLocal_298[0], 1);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[0], 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 6f, 3f, 1073741824, 0);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 3000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_298[0], iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
						PED::SET_PED_KEEP_TASK(uLocal_298[0], 1);
						GlobalFunc_173(&uLocal_54, 4, uLocal_298[0], "REGETCop", 0, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_298[1]))
				{
					uLocal_298[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), Local_236 - Vector(0f, 5f, 0f), 0f, 1, 1);
					if (func_53())
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_298[1], iLocal_311);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[1], 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_298[1], 50f, 0);
						PED::SET_PED_KEEP_TASK(uLocal_298[1], 1);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[1], 1);
						TASK::TASK_GO_TO_COORD_ANY_MEANS(uLocal_298[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432);
						PED::SET_PED_KEEP_TASK(uLocal_298[1], 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_305))
				{
					iLocal_305 = VEHICLE::CREATE_VEHICLE(joaat("police3"), Local_236, 0, 1, 1);
					Local_239 = { GlobalFunc_80(PLAYER::PLAYER_ID()) - ENTITY::GET_ENTITY_COORDS(iLocal_305, 1) };
					ENTITY::SET_ENTITY_HEADING(iLocal_305, MISC::GET_HEADING_FROM_VECTOR_2D(Local_239.x, Local_239.f_1));
					VEHICLE::SET_VEHICLE_SIREN(iLocal_305, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_298[2]))
				{
					uLocal_298[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_305, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					if (func_53())
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_298[2], joaat("weapon_pistol"), -1, 1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_298[2], iLocal_311);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_298[2], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_298[2], 3, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[2], 1);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_298[2], iLocal_305, iLocal_289[1], 6, 15f, 2, -1f, -1f, 1);
						PED::SET_PED_KEEP_TASK(uLocal_298[2], 1);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[2], 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_305, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						TASK::TASK_STAND_STILL(0, 5000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_298[2], iLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
						PED::SET_PED_KEEP_TASK(uLocal_298[2], 1);
					}
				}
				bLocal_277 = true;
			}
		}
	}
}

int func_156(var uParam0, int iParam1, float fParam2)//Position - 0xA929
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				{
					if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
					{
						if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), fParam2, fParam2, fParam2, 0, 1, 0))
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
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

















void func_173(int iParam0, int iParam1)//Position - 0xB09D
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
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8310(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_48.x, Local_48.f_1);
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





















int func_194(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xC2DA
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
	Local_48 = { Param0 };
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
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_4709())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_9556(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_48.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_6509(GlobalFunc_8315()) == 4 || GlobalFunc_6509(GlobalFunc_8315()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (!GlobalFunc_9557(iParam3, iParam4, 145))
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
		if (GlobalFunc_10548())
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
		if (!GlobalFunc_9039(4))
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
		if (GlobalFunc_42(GlobalFunc_8315()))
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
								if (GlobalFunc_8315() != iVar4)
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
































void func_226(struct<9> Param0, int iParam9, bool bParam10)//Position - 0xD087
{
	int iVar0;
	
	if (iLocal_312)
	{
		GlobalFunc_9158(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		GlobalFunc_825();
		GlobalFunc_563(0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_233 - Vector(20f, 20f, 20f), Local_233 + Vector(20f, 20f, 20f), 1);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_307))
		{
			GlobalFunc_9554(iLocal_307, 0, 145);
		}
		if (!PED::IS_PED_INJURED(iLocal_288))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_288, "random@getawaydriver", "idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_288, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
				TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED((*iParam9)[0]))
				{
					TASK::TASK_SMART_FLEE_PED(0, (*iParam9)[0], 150f, -1, 0, 0);
				}
				else if (!PED::IS_PED_INJURED((*iParam9)[1]))
				{
					TASK::TASK_SMART_FLEE_PED(0, (*iParam9)[1], 150f, -1, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_288, iLocal_308);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
				PED::SET_PED_KEEP_TASK(iLocal_288, 1);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_288);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_288, 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_288, 0);
		}
		if (!PED::IS_PED_INJURED((*iParam9)[0]))
		{
			PED::SET_PED_CONFIG_FLAG((*iParam9)[0], 317, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam9)[0], 17, 1);
			PED::REMOVE_PED_FROM_GROUP((*iParam9)[0]);
			PED::SET_PED_CAN_BE_TARGETTED((*iParam9)[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam9)[0], 0);
		}
		if (!PED::IS_PED_INJURED((*iParam9)[1]))
		{
			PED::SET_PED_CONFIG_FLAG((*iParam9)[1], 317, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam9)[1], 17, 1);
			PED::REMOVE_PED_FROM_GROUP((*iParam9)[1]);
			PED::SET_PED_CAN_BE_TARGETTED((*iParam9)[1], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam9)[1], 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_292)
		{
			if (!PED::IS_PED_INJURED(iLocal_292[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_292[iVar0], 0);
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(uLocal_298[0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_298[0], joaat("weapon_pistol"), -1, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[0], 0);
		}
		if (!PED::IS_PED_INJURED(uLocal_298[1]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_298[1], joaat("weapon_pistol"), -1, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[1], 0);
		}
		if (!PED::IS_PED_INJURED(uLocal_298[2]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_298[2], joaat("weapon_pistol"), -1, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_298[2], 0);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED((*iParam9)[0]))
			{
				TASK::TASK_SMART_FLEE_COORD((*iParam9)[0], GlobalFunc_80(PLAYER::PLAYER_ID()), 200f, -1, 0, 0);
			}
			if (!PED::IS_PED_INJURED((*iParam9)[1]))
			{
				TASK::TASK_SMART_FLEE_COORD((*iParam9)[1], GlobalFunc_80(PLAYER::PLAYER_ID()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_219)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_219 = 1;
		}
		GlobalFunc_4720(uLocal_52);
		if (HUD::DOES_BLIP_EXIST(uLocal_287))
		{
			HUD::REMOVE_BLIP(&uLocal_287);
		}
		GlobalFunc_4720(uLocal_53);
		GlobalFunc_728(0);
		func_130(0, Param0);
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}














