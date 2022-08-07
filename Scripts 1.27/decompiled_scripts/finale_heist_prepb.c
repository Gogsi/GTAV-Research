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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_42[2] = { 0, 0 };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
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
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95[2] = { 0, 0 };
	int iLocal_98[2] = { 0, 0 };
	int iLocal_101[2] = { 0, 0 };
	int iLocal_104[2] = { 0, 0 };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124[2];
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_134 = 0f;
	char* sLocal_135 = NULL;
	var uLocal_136 = 16;
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
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_329[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_337 = 0;
	int iLocal_338[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_346[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_354[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_362[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_370[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_378[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403[2] = { 0, 0 };
	int iLocal_406[2] = { 0, 0 };
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
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432[2] = { 0, 0 };
	int iLocal_435[2] = { 0, 0 };
	int iLocal_438[2] = { 0, 0 };
	int iLocal_441[2] = { 0, 0 };
	int iLocal_444[2] = { 0, 0 };
	int iLocal_447[2] = { 0, 0 };
	int iLocal_450[2] = { 0, 0 };
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458[2] = { 0, 0 };
	int iLocal_461[2] = { 0, 0 };
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
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483[2] = { 0, 0 };
	int iLocal_486 = 0;
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
	Local_115 = { 27.7189f, -608.7927f, 30.6293f };
	Local_131 = { 903.1f, -1548.8f, 29.8f };
	fLocal_134 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		GlobalFunc_10632();
		func_186();
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_301);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_302);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_302, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_302, iLocal_301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_301, iLocal_302);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_302, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_302);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_301, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_301);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_FINPRB", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, 0);
		}
		func_183();
		if (iLocal_316 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				GlobalFunc_585(27, 1);
				iLocal_316 = 1;
			}
		}
		if (iLocal_395 == 1)
		{
			func_178();
		}
		func_175();
		func_168();
		func_160();
		func_155();
		func_152();
		switch (iLocal_27)
		{
			case 0:
				func_151();
				break;
			
			case 1:
				func_148();
				break;
			
			case 2:
				func_124();
				break;
			
			case 3:
				func_122();
				break;
			
			case 4:
				func_99();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1E9
{
	switch (iLocal_61)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
			switch (iLocal_29)
			{
				case 0:
					break;
				
				case 4:
					sLocal_135 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_135 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_135 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_135 = "FPB_FAIL10";
					break;
				
				case 5:
					if (GlobalFunc_8315() == 0)
					{
						sLocal_135 = "FPB_FAIL7";
					}
					if (GlobalFunc_8315() == 2)
					{
						sLocal_135 = "FPB_FAIL8";
					}
					if (GlobalFunc_8315() == 1)
					{
						sLocal_135 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_135 = "FPB_FAIL11";
					break;
			}
			if (iLocal_29 == 0)
			{
				GlobalFunc_10616(0);
			}
			else
			{
				GlobalFunc_10835(sLocal_135);
			}
			iLocal_61 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (GlobalFunc_764())
				{
				}
				func_186();
			}
			break;
	}
}



















void func_20()//Position - 0x12F1
{
	func_152();
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_317 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		if (GlobalFunc_9813(iLocal_45, 0))
		{
			if (!GlobalFunc_9814(iLocal_45))
			{
				while (!GlobalFunc_9812(iLocal_45, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (GlobalFunc_9813(iLocal_47, 0))
		{
			if (!GlobalFunc_9814(iLocal_47))
			{
				while (!GlobalFunc_9812(iLocal_47, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (GlobalFunc_9813(iLocal_46, 0))
		{
			if (!GlobalFunc_9814(iLocal_46))
			{
				while (!GlobalFunc_9812(iLocal_46, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_32, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_9813(iLocal_47, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_47);
							PED::REMOVE_PED_FROM_GROUP(iLocal_47);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_47, iLocal_32, 0);
						}
					}
					if (GlobalFunc_9813(iLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_46);
							PED::REMOVE_PED_FROM_GROUP(iLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_46, iLocal_32, 0);
						}
					}
				}
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_9813(iLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_45);
							PED::REMOVE_PED_FROM_GROUP(iLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_45, iLocal_32, 0);
						}
					}
					if (GlobalFunc_9813(iLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_46);
							PED::REMOVE_PED_FROM_GROUP(iLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_46, iLocal_32, 0);
						}
					}
				}
				if (GlobalFunc_8315() == 1)
				{
					if (GlobalFunc_9813(iLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_45);
							PED::REMOVE_PED_FROM_GROUP(iLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_45, iLocal_32, 0);
						}
					}
					if (GlobalFunc_9813(iLocal_47, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_47);
							PED::REMOVE_PED_FROM_GROUP(iLocal_47);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_47, iLocal_32, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
		iLocal_61 = 2;
	}
	if (iLocal_61 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (iLocal_319 == 0)
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_9813(iLocal_47, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
							{
								if (GlobalFunc_9814(iLocal_47))
								{
									if (GlobalFunc_9811(iLocal_47))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (GlobalFunc_9813(iLocal_46, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
							{
								if (GlobalFunc_9814(iLocal_46))
								{
									if (GlobalFunc_9811(iLocal_46))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_9813(iLocal_45, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
							{
								if (GlobalFunc_9814(iLocal_45))
								{
									if (GlobalFunc_9811(iLocal_45))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (GlobalFunc_9813(iLocal_46, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
							{
								if (GlobalFunc_9814(iLocal_46))
								{
									if (GlobalFunc_9811(iLocal_46))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_9813(iLocal_45, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
							{
								if (GlobalFunc_9814(iLocal_45))
								{
									if (GlobalFunc_9811(iLocal_45))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (GlobalFunc_9813(iLocal_47, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
							{
								if (GlobalFunc_9814(iLocal_47))
								{
									if (GlobalFunc_9811(iLocal_47))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (iLocal_317 == 1 && iLocal_318 == 1)
					{
						iLocal_319 = 1;
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_61 = 3;
				}
			}
		}
	}
	if (iLocal_61 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_32, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, 1);
			}
		}
		iLocal_61 = 4;
	}
	if (iLocal_61 == 4)
	{
		func_21();
	}
}

void func_21()//Position - 0x177E
{
	GlobalFunc_5103(0, 0);
	func_186();
}













void func_34()//Position - 0x1BB8
{
	iLocal_395 = 0;
	iLocal_455 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	func_96();
	func_95();
	func_36();
	if (!GlobalFunc_188())
	{
		func_35();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_35()//Position - 0x1C0D
{
	switch (iLocal_27)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, -1);
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, -1);
					}
				}
			}
			break;
	}
}

void func_36()//Position - 0x1CEA
{
	switch (iLocal_27)
	{
		case 3:
			iLocal_417 = 0;
			iLocal_418 = 0;
			iLocal_419 = 0;
			func_91();
			if (GlobalFunc_7984() && GlobalFunc_7091(7f, 7f, 7f, 1))
			{
				GlobalFunc_8574();
				while (!GlobalFunc_8573())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_33 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
		
		case 4:
			iLocal_417 = 0;
			iLocal_418 = 0;
			iLocal_419 = 0;
			func_91();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_32, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_32, 161.1163f);
				}
			}
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_417 = 1;
			iLocal_418 = 1;
			iLocal_419 = 1;
			func_91();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_32, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_32, 70.7778f);
				}
			}
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48))
			{
				iLocal_48 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
				PED::SET_PED_CONFIG_FLAG(iLocal_48, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)//Position - 0x1E93
{
	return GlobalFunc_9228(&(Global_91351.f_2167), Param0, fParam3, 0);
}






















































void func_91()//Position - 0x5ABE
{
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("packer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("bison2"));
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2")) || !STREAMING::HAS_MODEL_LOADED(joaat("packer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison2")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
			iLocal_31 = Global_86864[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_31);
		}
		else
		{
			iLocal_31 = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_31);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
			iLocal_32 = Global_86864[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_32, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 7);
			GlobalFunc_504(iLocal_32, -1);
			GlobalFunc_503(iLocal_32, -1);
		}
		else
		{
			iLocal_32 = VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_32, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 7);
			GlobalFunc_504(iLocal_32, -1);
			GlobalFunc_503(iLocal_32, -1);
		}
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_32, iLocal_31, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
			iLocal_34[0] = Global_86864.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_301);
			GlobalFunc_3040(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
		}
		else
		{
			iLocal_34[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
			GlobalFunc_3040(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
			iLocal_34[1] = Global_86864.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_301);
			GlobalFunc_3040(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
		}
		else
		{
			iLocal_34[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			GlobalFunc_3040(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[2], 1, 1);
			iLocal_34[2] = Global_86864.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[2], iLocal_301);
			GlobalFunc_3040(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
		}
		else
		{
			iLocal_34[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[2], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			GlobalFunc_3040(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[3], 1, 1);
			iLocal_34[3] = Global_86864.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[3], iLocal_301);
			GlobalFunc_3040(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
		}
		else
		{
			iLocal_34[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[3], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			GlobalFunc_3040(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[4], 1, 1);
			iLocal_34[4] = Global_86864.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[4], iLocal_301);
			GlobalFunc_3040(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
		}
		else
		{
			iLocal_34[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[4], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			GlobalFunc_3040(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[5], 1, 1);
			iLocal_34[5] = Global_86864.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[5], iLocal_301);
			GlobalFunc_3040(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
		}
		else
		{
			iLocal_34[5] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[5], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			GlobalFunc_3040(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[8], 1, 1);
			iLocal_34[6] = Global_86864.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[6], iLocal_301);
			GlobalFunc_3040(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
		}
		else
		{
			iLocal_34[6] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[6], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			GlobalFunc_3040(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[6], 1, 1);
			iLocal_42[0] = Global_86864.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[0], iLocal_302);
			GlobalFunc_3040(iLocal_42[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[0], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[0], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_42[0] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[0], iLocal_302);
			GlobalFunc_3040(iLocal_42[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[0], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[0], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[7], 1, 1);
			iLocal_42[1] = Global_86864.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[1], iLocal_302);
			GlobalFunc_3040(iLocal_42[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[1], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_42[1] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[1], iLocal_302);
			GlobalFunc_3040(iLocal_42[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[1], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}




void func_95()//Position - 0x6663
{
	iLocal_62 = 0;
	while (iLocal_62 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_62]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_34[iLocal_62], 1))
		{
			PED::DELETE_PED(&(iLocal_34[iLocal_62]));
		}
		iLocal_62++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_42[0], 1))
	{
		PED::DELETE_PED(&(iLocal_42[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_42[1], 1))
	{
		PED::DELETE_PED(&(iLocal_42[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_45, 1))
	{
		PED::DELETE_PED(&iLocal_45);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_46, 1))
	{
		PED::DELETE_PED(&iLocal_46);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_47, 1))
	{
		PED::DELETE_PED(&iLocal_47);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_48, 1))
	{
		PED::DELETE_PED(&iLocal_48);
	}
	if (!GlobalFunc_188())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_31, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[3], 1, 0);
		VEHICLE::DELETE_VEHICLE(&(Global_86864[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_32, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_32);
	}
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_96()//Position - 0x683B
{
	if (HUD::DOES_BLIP_EXIST(uLocal_57))
	{
		HUD::REMOVE_BLIP(&uLocal_57);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_58))
	{
		HUD::REMOVE_BLIP(&uLocal_58);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_59))
	{
		HUD::REMOVE_BLIP(&uLocal_59);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_60))
	{
		HUD::REMOVE_BLIP(&uLocal_60);
	}
}



void func_99()//Position - 0x68E6
{
	func_116();
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_304 = 0;
		iLocal_313 = 0;
		iLocal_468 = 0;
		iLocal_108 = 0;
		iLocal_109 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		GlobalFunc_173(&uLocal_136, 3, 0, "LESTER", 0, 1);
		if (GlobalFunc_8315() == 0)
		{
			GlobalFunc_173(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (GlobalFunc_8315() == 1)
		{
			GlobalFunc_173(&uLocal_136, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (GlobalFunc_8315() == 2)
		{
			GlobalFunc_173(&uLocal_136, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_61 = 2;
	}
	if (iLocal_61 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (GlobalFunc_8315() == 0)
			{
				if (GlobalFunc_10638(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_61 = 3;
				}
			}
			if (GlobalFunc_8315() == 1)
			{
				if (GlobalFunc_10638(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_61 = 3;
				}
			}
			if (GlobalFunc_8315() == 2)
			{
				if (GlobalFunc_10638(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_61 = 3;
				}
			}
		}
	}
	if (iLocal_61 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_58))
		{
			if (!GlobalFunc_1993())
			{
				if (SYSTEM::TIMERA() > 10500)
				{
					uLocal_58 = GlobalFunc_5104(Local_115, 1);
				}
			}
		}
		if (GlobalFunc_1993())
		{
			iLocal_61 = 4;
		}
	}
	if (iLocal_61 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_115, 4f, 4f, 2f, 1, 1, 2))
						{
							if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 3, 0.5f, 0, 1))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
								if (HUD::DOES_BLIP_EXIST(uLocal_58))
								{
									HUD::REMOVE_BLIP(&uLocal_58);
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								GlobalFunc_571(0, -1);
								iLocal_61 = 0;
								iLocal_27 = 5;
							}
						}
					}
				}
			}
		}
	}
}

















void func_116()//Position - 0x746E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
			{
				if (GlobalFunc_74("HELP_1"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					HUD::REMOVE_BLIP(&uLocal_57);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_60))
				{
					if (iLocal_394 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_108 + 7500)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					HUD::REMOVE_BLIP(&uLocal_60);
				}
				if (iLocal_27 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_468 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_468 = 1;
						}
						if (iLocal_313 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_109 + 7500)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_313 = 0;
						}
						if (iLocal_61 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_58))
							{
								uLocal_58 = GlobalFunc_5104(Local_115, 1);
							}
							if (iLocal_304 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									GlobalFunc_164("GOD_2", 7500, 1);
									iLocal_304 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_58))
						{
							HUD::REMOVE_BLIP(&uLocal_58);
						}
						if (iLocal_313 == 0)
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_164("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_109 = MISC::GET_GAME_TIMER();
							iLocal_313 = 1;
							iLocal_468 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					HUD::REMOVE_BLIP(&uLocal_57);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					HUD::REMOVE_BLIP(&uLocal_58);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_60))
					{
						uLocal_60 = GlobalFunc_6783(iLocal_31, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_60, 1);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_PRINTS();
						}
						if (iLocal_394 == 0)
						{
							GlobalFunc_164("GOD_6", 7500, -1);
							iLocal_108 = MISC::GET_GAME_TIMER();
							iLocal_394 = 1;
						}
						if (!GlobalFunc_74("HELP_1"))
						{
							GlobalFunc_Display_Help_Text("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_60))
			{
				HUD::REMOVE_BLIP(&uLocal_60);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					uLocal_57 = GlobalFunc_6783(iLocal_32, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, 1);
				}
			}
			if (iLocal_314 == 0)
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_164("GOD_5", 7500, -1);
				iLocal_314 = 1;
			}
		}
	}
}






void func_122()//Position - 0x777C
{
	if (iLocal_61 > 1)
	{
		func_116();
	}
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_396 = 0;
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403[0] = 0;
		iLocal_403[1] = 0;
		iLocal_406[0] = 0;
		iLocal_406[1] = 0;
		iLocal_409 = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_422 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432[0] = 0;
		iLocal_432[1] = 0;
		iLocal_435[0] = 0;
		iLocal_435[1] = 0;
		iLocal_438[0] = 0;
		iLocal_438[1] = 0;
		iLocal_441[0] = 0;
		iLocal_441[1] = 0;
		iLocal_444[0] = 0;
		iLocal_444[1] = 0;
		iLocal_447[0] = 0;
		iLocal_447[1] = 0;
		iLocal_450[0] = 0;
		iLocal_450[1] = 0;
		iLocal_454 = 0;
		iLocal_457 = 0;
		iLocal_458[0] = 0;
		iLocal_461[0] = 0;
		iLocal_458[1] = 0;
		iLocal_461[1] = 0;
		iLocal_465 = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_481 = 0;
		iLocal_314 = 0;
		iLocal_315 = 0;
		iLocal_320 = 0;
		iLocal_386 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_416 = 0;
		iLocal_464 = 0;
		iLocal_482 = 0;
		iLocal_486 = 0;
		iLocal_453 = 0;
		iLocal_108 = 0;
		iLocal_109 = 0;
		iLocal_62 = 0;
		while (iLocal_62 <= 6)
		{
			iLocal_305[iLocal_62] = 0;
			iLocal_354[iLocal_62] = 0;
			iLocal_370[iLocal_62] = 0;
			iLocal_378[iLocal_62] = 0;
			iLocal_362[iLocal_62] = 0;
			iLocal_62++;
		}
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				uLocal_57 = GlobalFunc_6783(iLocal_32, 0, 0);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, true);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				GlobalFunc_5108(iLocal_33, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_33);
			}
			else
			{
				GlobalFunc_5108(0, -1, 1);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		if (iLocal_464 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
				GlobalFunc_164("GOD_1", 7500, 1);
				iLocal_464 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					HUD::REMOVE_BLIP(&uLocal_57);
				}
				GlobalFunc_574(656, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_61 = 2;
			}
		}
	}
	if (iLocal_61 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
				{
					if (GlobalFunc_74("HELP_1"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_60))
					{
						HUD::REMOVE_BLIP(&uLocal_60);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_118, Local_131, 1) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_315 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_109 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_315 = 0;
								}
							}
							if (iLocal_416 == 0)
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
								GlobalFunc_164("GOD_7", 7500, -1);
								iLocal_416 = 1;
							}
						}
						else if (iLocal_315 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_109 = MISC::GET_GAME_TIMER();
							GlobalFunc_164("GOD_4", 7500, -1);
							iLocal_315 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_61 = 0;
						iLocal_27 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_60))
						{
							uLocal_60 = GlobalFunc_6783(iLocal_31, 0, 0);
							HUD::SET_BLIP_AS_FRIENDLY(uLocal_60, true);
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_394 == 0)
							{
								GlobalFunc_164("GOD_6", 7500, -1);
								iLocal_394 = 1;
							}
							if (!GlobalFunc_74("HELP_1"))
							{
								GlobalFunc_Display_Help_Text("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_60))
				{
					HUD::REMOVE_BLIP(&uLocal_60);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						uLocal_57 = GlobalFunc_6783(iLocal_32, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, true);
					}
				}
				if (iLocal_314 == 0)
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_164("GOD_5", 7500, -1);
					iLocal_314 = 1;
				}
			}
		}
	}
}


void func_124()//Position - 0x7C62
{
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		GlobalFunc_3041();
		func_91();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[3], 0))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_86864[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[3], 1, 1);
					GlobalFunc_10718(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_86864[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_86864[3]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_86864[3]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_86864[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[3], 1, 1);
					GlobalFunc_10718(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		GlobalFunc_562(79);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		iLocal_61 = 0;
		iLocal_27 = 3;
	}
}
























void func_148()//Position - 0x86EE
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	uLocal_52 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_53 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_54 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_55 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_50 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_51 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (Global_84544 == 1)
		{
			GlobalFunc_5116(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_482 = 1;
			iLocal_303 = 1;
			iLocal_61 = 0;
			iLocal_27 = 5;
		}
		else if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
		{
			if (GlobalFunc_7984() && GlobalFunc_7091(7f, 7f, 7f, 1))
			{
				GlobalFunc_5116(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				GlobalFunc_5116(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_303 = 1;
			iLocal_482 = 1;
			iLocal_61 = 0;
			iLocal_27 = 3;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		iLocal_303 = 1;
		iLocal_482 = 1;
		iLocal_61 = 0;
		iLocal_27 = 3;
	}
	else
	{
		iLocal_61 = 0;
		iLocal_27 = 2;
	}
}



void func_151()//Position - 0x8974
{
	if (!GlobalFunc_Is_Mission_Retry())
	{
		iLocal_27 = 1;
	}
	else
	{
		iLocal_27 = 1;
	}
}

void func_152()//Position - 0x898D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				iLocal_48 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_48, 324, 1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		if (!PED::IS_PED_INJURED(iLocal_48))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_455 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_48))
					{
						TASK::CLEAR_PED_TASKS(iLocal_48);
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_48);
					}
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_48, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_48, 1);
					iLocal_112 = MISC::GET_GAME_TIMER();
					iLocal_455 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_112 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_48))
					{
						iLocal_455 = 0;
					}
				}
			}
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_48, 1) < 20f)
			{
				if (iLocal_420 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_420 = 1;
				}
			}
			else if (iLocal_420 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_420 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_456 == 0)
		{
			iLocal_113 = 498972213;
			iLocal_114 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_113, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_456 = 1;
		}
		if (iLocal_456 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (Local_118.x > 35f)
				{
					if (fLocal_134 < 1f)
					{
						fLocal_134 = (fLocal_134 + 0.02f);
					}
					else
					{
						fLocal_134 = 1f;
					}
					if (fLocal_134 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_114, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_114, 4, 0, 1);
						iLocal_421 = 0;
					}
				}
				if (Local_118.x < 35f)
				{
					if (fLocal_134 > 0f)
					{
						fLocal_134 = (fLocal_134 - 0.02f);
					}
					else
					{
						fLocal_134 = 0f;
					}
					if (fLocal_134 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_114, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_114, 4, 0, 1);
						iLocal_421 = 0;
					}
				}
			}
			else if (iLocal_421 == 0)
			{
				if (Local_118.x < 35f)
				{
					if (fLocal_134 > 0f)
					{
						fLocal_134 = (fLocal_134 - 0.02f);
					}
					else
					{
						fLocal_134 = 0f;
					}
					if (fLocal_134 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_114, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_114, 4, 0, 1);
						iLocal_421 = 1;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
			{
				if (!PED::IS_PED_INJURED(iLocal_48))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_418 == 0)
						{
							if (iLocal_417 == 0)
							{
								GlobalFunc_173(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
								if (GlobalFunc_10618(&uLocal_136, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_417 = 1;
								}
							}
						}
						else if (iLocal_419 == 0)
						{
							GlobalFunc_173(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
							if (GlobalFunc_10618(&uLocal_136, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_419 = 1;
							}
						}
					}
					else if (iLocal_418 == 0)
					{
						GlobalFunc_173(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
						if (GlobalFunc_10618(&uLocal_136, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_418 = 1;
						}
					}
				}
			}
		}
	}
}



void func_155()//Position - 0x8E0B
{
	int iVar0;
	
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_27 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iLocal_30 == 0)
				{
					if (GlobalFunc_8315() == 0)
					{
						if (iLocal_28 == 1)
						{
							if (iLocal_391 == 0)
							{
								if (func_157() && func_156())
								{
									if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_111 = MISC::GET_GAME_TIMER();
										iLocal_391 = 1;
									}
								}
							}
						}
						if (iLocal_28 == 1)
						{
							if (iLocal_391 == 1 && MISC::GET_GAME_TIMER() > iLocal_111 + 7000)
							{
								if (func_157() && func_156())
								{
									if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_111 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_28 == 2)
					{
						if (iLocal_429 == 0)
						{
							if (func_157())
							{
								if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_94 = MISC::GET_GAME_TIMER();
									iLocal_429 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_30 == 2 && iLocal_28 == 1)
				{
					if (iLocal_454 == 0)
					{
						if (func_157() && func_156())
						{
							if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_107 = MISC::GET_GAME_TIMER();
								iLocal_454 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_107 + 8000)
					{
						if (func_157() && func_156())
						{
							if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_107 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_390 == 0)
					{
						GlobalFunc_4935();
						if (func_157())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_76 = MISC::GET_GAME_TIMER();
									iLocal_386 = 1;
									iLocal_390 = 1;
								}
							}
							else
							{
								iLocal_76 = MISC::GET_GAME_TIMER();
								iLocal_386 = 1;
								iLocal_390 = 1;
							}
						}
					}
					if (iLocal_390 == 1)
					{
						if (iLocal_386 == 0)
						{
							iLocal_76 = MISC::GET_GAME_TIMER();
							iLocal_386 = 1;
						}
						if (iLocal_386 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_76 + 9000)
							{
								if (func_157())
								{
									if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_386 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (iLocal_426 == 1)
					{
						if (iLocal_388 == 0)
						{
							if (iLocal_389 == 1)
							{
								if (func_157())
								{
									if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_388 = 1;
									}
								}
							}
						}
					}
					if (iLocal_387 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_77 = MISC::GET_GAME_TIMER();
											iLocal_388 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_77 + 10000)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_77 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_427 == 1)
					{
						if (iLocal_428 == 0)
						{
							if (func_157())
							{
								if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_428 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_156()//Position - 0x9149
{
	if (GlobalFunc_8315() == 0)
	{
		GlobalFunc_173(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}
	if (GlobalFunc_8315() == 1)
	{
		GlobalFunc_173(&uLocal_136, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_173(&uLocal_136, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_157()//Position - 0x91A9
{
	int iVar0;
	
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_65]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_65]))
			{
				iVar0 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), iLocal_301, 0, 0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_34[iLocal_65] && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f)
				{
					GlobalFunc_173(&uLocal_136, 5, iLocal_34[iLocal_65], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_65++;
	}
	return 0;
}



void func_160()//Position - 0x9364
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	func_167();
	if (iLocal_403[0])
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_432[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_432[0] = 1;
			}
			if (iLocal_432[0] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[0], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[0], 150319005) != 1)
				{
					iLocal_432[0] = 0;
				}
			}
		}
		else if (iLocal_432[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_432[0] = 0;
		}
	}
	if (iLocal_403[1])
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_432[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_432[1] = 1;
			}
			if (iLocal_432[1] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[1], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[1], 150319005) != 1)
				{
					iLocal_432[1] = 0;
				}
			}
		}
		else if (iLocal_432[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_432[1] = 0;
		}
	}
	if (iLocal_403[0] && iLocal_403[1])
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1))
		{
			iLocal_398 = 1;
			iLocal_399 = 0;
		}
		else
		{
			iLocal_398 = 0;
			iLocal_399 = 1;
		}
	}
	else
	{
		if (iLocal_403[0] && !iLocal_403[1])
		{
			iLocal_398 = 1;
			iLocal_399 = 0;
		}
		if (iLocal_403[1] && !iLocal_403[0])
		{
			iLocal_398 = 0;
			iLocal_399 = 1;
		}
	}
	switch (iLocal_30)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 1);
				}
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_42[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_104[0] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_42[0]))
									{
										if (iLocal_461[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_42[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_458[0] = 0;
											iLocal_461[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_104[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_42[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_458[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_461[0] = 0;
											iLocal_458[0] = 1;
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_42[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_104[1] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_42[1]))
									{
										if (iLocal_461[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_42[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_458[1] = 0;
											iLocal_461[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_104[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_42[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_458[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_461[1] = 0;
											iLocal_458[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[0]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
					{
						if ((GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || GlobalFunc_116(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 100f) || PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_450[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_42[0]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_101[0] = MISC::GET_GAME_TIMER();
											func_164(iLocal_42[0]);
											iLocal_450[0] = 1;
										}
									}
									if (iLocal_450[0] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_101[0] + 5000)
										{
											iLocal_450[0] = 0;
										}
									}
									if (iLocal_406[0] == 0 && iLocal_406[1] == 0)
									{
										if (iLocal_402 == 0)
										{
											GlobalFunc_5117(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_81 = MISC::GET_GAME_TIMER();
											iLocal_402 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_81 + 15000)
										{
											GlobalFunc_5117(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_81 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_406[0] == 1)
										{
											if (iLocal_409 == 0)
											{
												GlobalFunc_5117(iLocal_42[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												GlobalFunc_5117(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_406[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												GlobalFunc_5117(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												GlobalFunc_5117(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[1]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
					{
						if ((GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || GlobalFunc_116(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_450[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_42[1]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_101[1] = MISC::GET_GAME_TIMER();
											func_164(iLocal_42[1]);
											iLocal_450[1] = 1;
										}
									}
									if (iLocal_450[1] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_101[1] + 5000)
										{
											iLocal_450[1] = 0;
										}
									}
									if (iLocal_406[0] == 0 && iLocal_406[1] == 0)
									{
										if (iLocal_402 == 0)
										{
											GlobalFunc_5117(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_81 = MISC::GET_GAME_TIMER();
											iLocal_402 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_81 + 15000)
										{
											GlobalFunc_5117(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_81 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_406[1] == 1)
										{
											if (iLocal_409 == 0)
											{
												GlobalFunc_5117(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												GlobalFunc_5117(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_406[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												GlobalFunc_5117(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = MISC::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												GlobalFunc_5117(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (func_161() || iLocal_397 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_42[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_98[0] = MISC::GET_GAME_TIMER();
							iLocal_444[0] = 1;
							if (iLocal_441[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_42[0], 50, 1);
								TASK::TASK_COMBAT_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_164(iLocal_42[0]);
								iLocal_441[0] = 1;
							}
						}
						else if (iLocal_447[0] == 0)
						{
							if (iLocal_444[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_42[0]);
								iLocal_447[0] = 1;
							}
							if (iLocal_444[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_98[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_42[0]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_42[0]);
									iLocal_447[0] = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_42[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_98[1] = MISC::GET_GAME_TIMER();
							iLocal_444[1] = 1;
							if (iLocal_441[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_42[1], 50, 1);
								TASK::TASK_COMBAT_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_164(iLocal_42[1]);
								iLocal_441[1] = 1;
							}
						}
						else if (iLocal_447[1] == 0)
						{
							if (iLocal_444[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_42[1]);
								iLocal_447[1] = 1;
							}
							if (iLocal_444[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_98[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_42[1]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_42[1]);
									iLocal_447[1] = 1;
								}
							}
						}
					}
				}
				if (func_161())
				{
					if (iLocal_411 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_411 = 1;
						}
					}
					if (iLocal_398 == 1)
					{
						if (iLocal_400 == 0)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
								{
									GlobalFunc_5117(iLocal_42[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_86 = MISC::GET_GAME_TIMER();
									iLocal_400 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_86 + 7000)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
								{
									GlobalFunc_5117(iLocal_42[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_86 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_400 == 0)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
								{
									GlobalFunc_5117(iLocal_42[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_86 = MISC::GET_GAME_TIMER();
									iLocal_400 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_86 + 7000)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
								{
									GlobalFunc_5117(iLocal_42[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_86 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_457 == 0)
					{
						iLocal_49 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
						if (iLocal_49 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
							{
								if (!PED::IS_PED_INJURED(iLocal_49))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_49, 1) < 35f)
									{
										iLocal_457 = 1;
									}
								}
							}
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_457 == 0)
					{
						if (iLocal_398 == 1)
						{
							if (iLocal_401 == 0)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
									{
										GlobalFunc_5117(iLocal_42[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
										iLocal_401 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
									{
										GlobalFunc_5117(iLocal_42[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_399 == 1)
						{
							if (iLocal_401 == 0)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
									{
										GlobalFunc_5117(iLocal_42[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
										iLocal_401 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
									{
										GlobalFunc_5117(iLocal_42[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_161())
			{
				if (iLocal_413 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_42[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_80 = MISC::GET_GAME_TIMER();
									iLocal_413 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_42[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_80 = MISC::GET_GAME_TIMER();
									iLocal_413 = 1;
								}
							}
						}
					}
				}
				if (iLocal_397 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[0]))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_435[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_42[0]);
										iLocal_435[0] = 1;
									}
									iLocal_95[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_95[0] + 500)
								{
									if (iLocal_438[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_42[0]);
										iLocal_438[0] = 1;
									}
								}
							}
							else if (iLocal_483[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(uLocal_56, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_42[0], uLocal_56);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
								func_164(iLocal_42[0]);
								iLocal_483[0] = 1;
							}
							if (iLocal_453 == 0)
							{
								if (iLocal_430 == 0 || iLocal_402 == 1)
								{
									if (iLocal_396 == 0)
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
											{
												GlobalFunc_5117(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_82 = MISC::GET_GAME_TIMER();
												iLocal_83 = MISC::GET_GAME_TIMER();
												iLocal_80 = MISC::GET_GAME_TIMER();
												iLocal_413 = 1;
												iLocal_396 = 1;
												iLocal_406[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_82 + 7000)
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
											{
												GlobalFunc_5117(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_82 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_402 == 0)
								{
									if (iLocal_431 == 0)
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
											{
												GlobalFunc_5117(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_396 = 1;
												iLocal_431 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_83 + 7000)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
									{
										GlobalFunc_5117(iLocal_42[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_83 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[1]))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_435[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_42[1]);
										iLocal_435[1] = 1;
									}
									iLocal_95[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_95[1] + 500)
								{
									if (iLocal_438[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_42[1]);
										iLocal_438[1] = 1;
									}
								}
							}
							else if (iLocal_483[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(uLocal_56, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_42[1], uLocal_56);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
								func_164(iLocal_42[1]);
								iLocal_483[1] = 1;
							}
							if (iLocal_453 == 0)
							{
								if (iLocal_430 == 0 || iLocal_402 == 1)
								{
									if (iLocal_396 == 0)
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
											{
												GlobalFunc_5117(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_82 = MISC::GET_GAME_TIMER();
												iLocal_84 = MISC::GET_GAME_TIMER();
												iLocal_80 = MISC::GET_GAME_TIMER();
												iLocal_413 = 1;
												iLocal_396 = 1;
												iLocal_406[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_82 + 7000)
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
											{
												GlobalFunc_5117(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_82 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_402 == 0)
								{
									if (iLocal_431 == 0)
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
											{
												GlobalFunc_5117(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_396 = 1;
												iLocal_431 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
									{
										GlobalFunc_5117(iLocal_42[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_84 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_413 == 1)
					{
						if (iLocal_453 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_80 + 22000)
							{
								iLocal_453 = 1;
							}
						}
					}
					if (iLocal_413 == 1)
					{
						if (iLocal_397 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_80 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
								iLocal_397 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_397 = 1;
								}
							}
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_397 = 1;
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[0]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_397 = 1;
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[1]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_397 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_161()//Position - 0xAA2C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_79 = 0;
		while (iLocal_79 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_79]))
			{
				if (!PED::IS_PED_INJURED(iLocal_34[iLocal_79]))
				{
					if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !GlobalFunc_116(0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_79], PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_79++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_42[0]))
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !GlobalFunc_116(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_42[1]))
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !GlobalFunc_116(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}



void func_164(int iParam0)//Position - 0xAD40
{
	if (iParam0 == iLocal_42[0])
	{
		iLocal_432[0] = 0;
		iLocal_458[0] = 0;
		iLocal_461[0] = 0;
		iLocal_450[0] = 0;
		iLocal_441[0] = 0;
		iLocal_447[0] = 0;
		iLocal_435[0] = 0;
		iLocal_438[0] = 0;
		iLocal_483[0] = 0;
	}
	if (iParam0 == iLocal_42[1])
	{
		iLocal_432[1] = 0;
		iLocal_458[1] = 0;
		iLocal_461[1] = 0;
		iLocal_450[1] = 0;
		iLocal_441[1] = 0;
		iLocal_447[1] = 0;
		iLocal_435[1] = 0;
		iLocal_438[1] = 0;
		iLocal_483[1] = 0;
	}
}



void func_167()//Position - 0xAE48
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_118 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[0]))
		{
			Local_124[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_42[0], 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[1]))
		{
			Local_124[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_42[1], 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[0]))
		{
			iLocal_403[0] = 1;
		}
		else
		{
			iLocal_403[0] = 0;
		}
	}
	else
	{
		iLocal_403[0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[1]))
		{
			iLocal_403[1] = 1;
		}
		else
		{
			iLocal_403[1] = 0;
		}
	}
	else
	{
		iLocal_403[1] = 0;
	}
	if (iLocal_30 != 0)
	{
		if (iLocal_30 == 1)
		{
			if (iLocal_403[0] == 1)
			{
				if (iLocal_403[1] == 1)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
						{
							if (((Local_118.x < Local_124[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = MISC::GET_GAME_TIMER();
								iLocal_104[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (Local_118.x < Local_124[0 /*3*/])
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
					{
						if ((Local_118.x > Local_124[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_118.x > Local_124[1 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = MISC::GET_GAME_TIMER();
						iLocal_104[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 15f)
					{
						if ((Local_118.x < Local_124[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_118.x < Local_124[0 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = MISC::GET_GAME_TIMER();
						iLocal_104[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_403[1] == 1)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
				{
					if ((Local_118.x > Local_124[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = MISC::GET_GAME_TIMER();
						iLocal_104[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (Local_118.x > Local_124[1 /*3*/])
				{
					iLocal_30 = 0;
					iLocal_458[0] = 0;
					iLocal_461[0] = 0;
					iLocal_458[1] = 0;
					iLocal_461[1] = 0;
					iLocal_104[0] = MISC::GET_GAME_TIMER();
					iLocal_104[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_30 == 2)
		{
			if (iLocal_397 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_118.x > 942f)
				{
					if (!PED::IS_PED_INJURED(iLocal_42[1]))
					{
						if (Local_118.x > Local_124[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = MISC::GET_GAME_TIMER();
								iLocal_104[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_118.x > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_118.x < 860f)
				{
					if (!PED::IS_PED_INJURED(iLocal_42[0]))
					{
						if (Local_118.x < Local_124[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = MISC::GET_GAME_TIMER();
								iLocal_104[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_118.x < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 1)
	{
		if (iLocal_30 != 2)
		{
			if (iLocal_403[0] == 1)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
				{
					if ((GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || GlobalFunc_116(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_118.x > Local_124[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f))
							{
								iLocal_30 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_30 = 1;
						}
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
				{
					if ((GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || GlobalFunc_116(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_118.x < Local_124[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f))
							{
								iLocal_30 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_30 = 2;
			iLocal_397 = 1;
		}
		if (iLocal_481 == 1)
		{
			iLocal_30 = 2;
			iLocal_397 = 1;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
						iLocal_397 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
						iLocal_397 = 1;
					}
				}
			}
		}
		if (iLocal_430 == 0)
		{
			if (iLocal_429 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_94 + 4000)
				{
					iLocal_93 = 0;
					while (iLocal_93 <= 6)
					{
						if (GlobalFunc_111())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_93]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[iLocal_93]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_34[iLocal_93]))
									{
										iLocal_30 = 2;
										iLocal_430 = 1;
									}
								}
							}
						}
						iLocal_93++;
					}
				}
			}
		}
		if ((iLocal_28 == 4 || iLocal_28 == 3) || iLocal_429 == 1)
		{
			iLocal_30 = 2;
			iLocal_426 = 1;
			iLocal_397 = 1;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_403[0] == 1)
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !GlobalFunc_116(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !GlobalFunc_116(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_118, Local_131, 1) < 36f)
		{
			if (iLocal_403[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
				{
					iLocal_30 = 2;
				}
				if (GlobalFunc_156(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (Local_118.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
					if (GlobalFunc_156(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[1]))
						{
							iLocal_30 = 2;
						}
					}
				}
			}
		}
		if (iLocal_403[0] == 1)
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
			{
				if (Local_118.x > Local_124[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (iLocal_403[1] == 1)
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
			{
				if (Local_118.x < Local_124[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[1]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
	}
}

void func_168()//Position - 0xBA3D
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_63]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_63]))
			{
				if (iLocal_329[iLocal_63] == 0)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_63], 1) > 20f)
					{
						iLocal_329[iLocal_63] = 1;
					}
				}
				if (iLocal_329[iLocal_63] == 1)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_63], 1) < 20f)
					{
						iLocal_329[iLocal_63] = 0;
					}
				}
			}
			else if (iLocal_329[iLocal_63] == 0)
			{
				iLocal_329[iLocal_63] = 1;
			}
		}
		else if (iLocal_329[iLocal_63] == 0)
		{
			iLocal_329[iLocal_63] = 1;
		}
		iLocal_63++;
	}
	if (((((iLocal_329[0] == 1 && iLocal_329[1] == 1) && iLocal_329[2] == 1) && iLocal_329[3] == 1) && iLocal_329[4] == 1) && iLocal_329[5] == 1)
	{
		iLocal_337 = 1;
	}
	else
	{
		iLocal_337 = 0;
	}
	iLocal_62 = 0;
	while (iLocal_62 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_62]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_62]))
			{
				func_173(iLocal_34[iLocal_62]);
				if (iLocal_27 == 3 || iLocal_27 == 4)
				{
					if (iLocal_30 == 2 && iLocal_28 == 0)
					{
						func_172(1);
						if (iLocal_415 == 1)
						{
							GlobalFunc_4935();
						}
					}
					if (PED::HAS_PED_RECEIVED_EVENT(iLocal_34[iLocal_62], 18))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								GlobalFunc_4956();
							}
							iLocal_481 = 1;
						}
					}
					if (iLocal_28 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								GlobalFunc_4956();
							}
						}
					}
					if ((((((((func_169(iLocal_34[iLocal_62], iLocal_34[0]) || func_169(iLocal_34[iLocal_62], iLocal_34[1])) || func_169(iLocal_34[iLocal_62], iLocal_34[2])) || func_169(iLocal_34[iLocal_62], iLocal_34[3])) || func_169(iLocal_34[iLocal_62], iLocal_34[4])) || func_169(iLocal_34[iLocal_62], iLocal_34[5])) || func_169(iLocal_34[iLocal_62], iLocal_34[6])) || func_169(iLocal_34[iLocal_62], iLocal_42[0])) || func_169(iLocal_34[iLocal_62], iLocal_42[1]))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								GlobalFunc_4956();
							}
							iLocal_481 = 1;
						}
					}
					if ((GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || GlobalFunc_116(0))
					{
						if (iLocal_397 == 0)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) > 20f)
							{
								if (iLocal_321[iLocal_62] == 1)
								{
									iLocal_321[iLocal_62] = 0;
								}
								if (((((iLocal_337 == 1 && iLocal_28 != 0) && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4) && iLocal_30 != 2)
								{
									func_172(0);
								}
							}
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
							{
								if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
								{
									if (iLocal_430 == 0 && iLocal_397 == 0)
									{
										func_172(1);
										if (iLocal_415 == 1)
										{
											GlobalFunc_4935();
										}
									}
									else
									{
										func_172(3);
										if (iLocal_415 == 1)
										{
											GlobalFunc_4956();
										}
									}
								}
							}
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_321[iLocal_62] == 0)
								{
									iLocal_68[iLocal_62] = MISC::GET_GAME_TIMER();
									iLocal_321[iLocal_62] = 1;
								}
								if (iLocal_321[iLocal_62] == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_68[iLocal_62] + 24000)
									{
										if ((iLocal_28 != 2 && iLocal_28 != 3) && iLocal_28 != 4)
										{
											func_172(2);
											if (iLocal_415 == 1)
											{
												GlobalFunc_4956();
											}
										}
									}
								}
							}
						}
						if (iLocal_397 == 1)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_28 != 3 && iLocal_28 != 4)
								{
									func_172(3);
									if (iLocal_415 == 1)
									{
										GlobalFunc_4956();
									}
								}
							}
						}
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_412 == 0)
							{
								iLocal_89 = MISC::GET_GAME_TIMER();
								iLocal_412 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_89 + 3000)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_28 != 3 && iLocal_28 != 4)
									{
										func_172(3);
										if (iLocal_415 == 1)
										{
											GlobalFunc_4956();
										}
									}
								}
							}
						}
						else if (iLocal_412 == 1)
						{
							iLocal_412 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_389 = 1;
											func_172(3);
											if (iLocal_415 == 1)
											{
												GlobalFunc_4956();
											}
										}
									}
								}
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_389 = 1;
											func_172(3);
											if (iLocal_415 == 1)
											{
												GlobalFunc_4956();
											}
										}
									}
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
										{
											if (!PED::IS_PED_INJURED(iLocal_34[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_28 != 3 && iLocal_28 != 4)
													{
														iLocal_389 = 1;
														func_172(3);
														if (iLocal_415 == 1)
														{
															GlobalFunc_4956();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[6]))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[6], 1) < 20f)
								{
									if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[6], PLAYER::PLAYER_PED_ID()))
										{
											if (Local_118.f_2 > 31f)
											{
												if (iLocal_28 != 3 && iLocal_28 != 4)
												{
													iLocal_427 = 1;
													func_172(3);
													if (iLocal_415 == 1)
													{
														GlobalFunc_4956();
													}
												}
											}
											else if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
											{
												func_172(1);
												if (iLocal_415 == 1)
												{
													GlobalFunc_4935();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_320 == 0)
						{
							iLocal_67 = MISC::GET_GAME_TIMER();
							iLocal_320 = 1;
						}
						if (iLocal_320 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_67 + 4000 || iLocal_28 == 3)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 4)
										{
											func_172(4);
											if (iLocal_415 == 1)
											{
												GlobalFunc_4956();
											}
										}
									}
								}
							}
						}
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_34[iLocal_62]))
								{
									if (iLocal_28 != 4)
									{
										func_172(4);
										if (iLocal_415 == 1)
										{
											GlobalFunc_4956();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_62++;
	}
}

int func_169(int iParam0, int iParam1)//Position - 0xC2A1
{
	if (((GlobalFunc_156(iParam0, iParam1, 1) < 20f && PED::IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1))
	{
		return 1;
	}
	return 0;
}



void func_172(int iParam0)//Position - 0xC31A
{
	iLocal_28 = iParam0;
	iLocal_66 = 0;
}

void func_173(int iParam0)//Position - 0xC329
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (iParam0 == iLocal_34[iLocal_64])
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_338[iLocal_64] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_338[iLocal_64] = 1;
				}
			}
			else if (iLocal_338[iLocal_64] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
				iLocal_338[iLocal_64] = 0;
			}
		}
		iLocal_64++;
	}
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_66 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				if (iParam0 == iLocal_34[0])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[1])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[2])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[3])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[4])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[5])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[4]))
				{
					if (!PED::IS_PED_INJURED(iLocal_34[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[5]))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[4], 1) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_118.f_1 > -1573f)
									{
										if (iLocal_415 == 0)
										{
											GlobalFunc_173(&uLocal_136, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
											GlobalFunc_173(&uLocal_136, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_34[4], iLocal_34[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_34[5], iLocal_34[4], -1, 0, 2);
											if (!GlobalFunc_111())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_415 = 1;
													}
												}
											}
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_422 == 0)
									{
										iLocal_91 = MISC::GET_GAME_TIMER();
										iLocal_422 = 1;
									}
									if (iLocal_422 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_91 + 4000)
										{
											if (iLocal_415 == 0)
											{
												GlobalFunc_173(&uLocal_136, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
												GlobalFunc_173(&uLocal_136, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_34[4], iLocal_34[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_34[5], iLocal_34[4], -1, 0, 2);
												if (!GlobalFunc_111())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (GlobalFunc_10618(&uLocal_136, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_415 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_415 == 1 && !GlobalFunc_111())
								{
									if (iLocal_414 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_34[4]);
											TASK::TASK_CLEAR_LOOK_AT(iLocal_34[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_34[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_414 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (iLocal_423 == 0)
					{
						if (iLocal_424 == 0)
						{
							iLocal_92 = MISC::GET_GAME_TIMER();
							iLocal_424 = 1;
						}
						if (MISC::GET_GAME_TIMER() > iLocal_92 + 30000)
						{
							if (iLocal_423 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_34[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_423 = 1;
									iLocal_424 = 0;
								}
							}
						}
					}
					if (iLocal_423 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[6], 1) < 15f && Local_118.f_2 < 40f)
							{
								if (iLocal_425 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, 0))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_425 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_66 == 0)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_30 == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
							{
								if (iLocal_346[iLocal_64] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
										TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_56);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
										iLocal_338[iLocal_64] = 0;
										iLocal_346[iLocal_64] = 1;
									}
								}
								if (iLocal_346[iLocal_64] == 1)
								{
									if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
										iLocal_346[iLocal_64] = 0;
									}
								}
							}
							else
							{
								if (iLocal_346[iLocal_64] == 1)
								{
									iLocal_346[iLocal_64] = 0;
								}
								if (iParam0 == iLocal_34[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_34[iLocal_64])
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
						{
							if (iLocal_346[iLocal_64] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_56);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_338[iLocal_64] = 0;
									iLocal_346[iLocal_64] = 1;
								}
							}
							if (iLocal_346[iLocal_64] == 1)
							{
								if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
									iLocal_346[iLocal_64] = 0;
								}
							}
						}
						else
						{
							if (iLocal_346[iLocal_64] == 1)
							{
								iLocal_346[iLocal_64] = 0;
							}
							if (iParam0 == iLocal_34[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 2:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_66 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iParam0 == iLocal_34[iLocal_64])
					{
						if (GlobalFunc_156(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f)
						{
							if (GlobalFunc_156(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 1073741824, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_56);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
									iLocal_338[iLocal_64] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_34[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 3:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_392 == 0)
			{
				if (iLocal_393 == 0)
				{
					iLocal_78 = MISC::GET_GAME_TIMER();
					iLocal_393 = 1;
				}
				if (iLocal_393 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_78 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_392 = 1;
					}
				}
			}
			if (iLocal_66 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				if (iLocal_27 == 3)
				{
					iLocal_64 = 0;
					while (iLocal_64 <= 6)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (GlobalFunc_156(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								if (iLocal_354[iLocal_64] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_354[iLocal_64] = 1;
								}
								if (iLocal_362[iLocal_64] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									iLocal_338[iLocal_64] = 0;
									iLocal_362[iLocal_64] = 1;
								}
							}
						}
						iLocal_64++;
					}
					if (iLocal_467 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) && ENTITY::IS_ENTITY_AT_COORD(iLocal_32, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_34[0]);
											}
											TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_34[0], uLocal_56);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
											iLocal_467 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_467 == 1 && iLocal_486 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									GlobalFunc_173(&uLocal_136, 3, iLocal_34[0], "FHPrepBWorker", 0, 1);
									GlobalFunc_5117(iLocal_34[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_486 = 1;
								}
							}
						}
					}
					if (iLocal_466 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_78 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[5]))
								{
									TASK::TASK_PLAY_ANIM(iLocal_34[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_110 = MISC::GET_GAME_TIMER();
									iLocal_466 = 1;
								}
							}
						}
					}
					else if (iLocal_465 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_110 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[5]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_34[5]);
									TASK::TASK_COMBAT_PED(iLocal_34[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_465 = 1;
								}
							}
						}
					}
				}
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_305[iLocal_64] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
									{
										if (GlobalFunc_156(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS(iParam0);
											}
											TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
											iLocal_305[iLocal_64] = 1;
										}
									}
									else if (GlobalFunc_156(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										iLocal_305[iLocal_64] = 1;
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			if (iLocal_27 == 4)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_305[iLocal_64] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iParam0, 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
									iLocal_305[iLocal_64] = 1;
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 4:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_392 == 0)
			{
				if (iLocal_393 == 0)
				{
					iLocal_78 = MISC::GET_GAME_TIMER();
					iLocal_393 = 1;
				}
				if (iLocal_393 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_78 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_392 = 1;
					}
				}
			}
			if (iLocal_66 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_64]))
					{
						if (!PED::IS_PED_INJURED(iLocal_34[iLocal_64]))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_64], 1) < 15f)
							{
								if (func_174(iLocal_34[iLocal_64], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_64], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_378[iLocal_64] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_64]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_64]);
											}
											TASK::TASK_HANDS_UP(iLocal_34[iLocal_64], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											iLocal_378[iLocal_64] = 1;
											iLocal_370[iLocal_64] = 0;
											iLocal_338[iLocal_64] = 0;
											iLocal_90 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_90 + 300)
									{
										iLocal_370[iLocal_64] = 0;
									}
								}
								else if (iLocal_370[iLocal_64] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_64]);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_64]);
									}
									TASK::TASK_SMART_FLEE_PED(iLocal_34[iLocal_64], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
									iLocal_370[iLocal_64] = 1;
									iLocal_378[iLocal_64] = 0;
								}
							}
							else if (iLocal_370[iLocal_64] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_64]);
								}
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_64]);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_34[iLocal_64], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
								iLocal_370[iLocal_64] = 1;
								iLocal_378[iLocal_64] = 0;
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
	}
}

int func_174(int iParam0, int iParam1)//Position - 0xDD19
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_175()//Position - 0xDD65
{
	iLocal_45 = GlobalFunc_9028(0);
	iLocal_46 = GlobalFunc_9028(1);
	iLocal_47 = GlobalFunc_9028(2);
	if (GlobalFunc_9813(iLocal_45, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_45))
		{
			if (!GlobalFunc_9814(iLocal_45))
			{
				if (!GlobalFunc_579())
				{
					if (func_176(iLocal_45))
					{
						if (GlobalFunc_9812(iLocal_45, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_45, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, 1);
							TASK::CLEAR_PED_TASKS(iLocal_45);
							iLocal_472 = 0;
							iLocal_475 = 0;
							iLocal_478 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_472 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_472 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_45, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_472 = 1;
						}
					}
				}
				if (iLocal_472 == 0)
				{
					if (GlobalFunc_579())
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_469 == 1)
				{
					if ((func_176(iLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_45, 1)) && iLocal_472 == 0)
					{
						Local_121 = { ENTITY::GET_ENTITY_COORDS(iLocal_45, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_475 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_478 = 0;
									iLocal_475 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_478 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_475 = 0;
								iLocal_478 = 1;
							}
						}
						else if (iLocal_475 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_478 = 0;
								iLocal_475 = 1;
							}
						}
					}
					else
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if (GlobalFunc_9811(iLocal_45))
					{
						iLocal_472 = 0;
					}
				}
			}
		}
	}
	if (GlobalFunc_9813(iLocal_47, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_47))
		{
			if (!GlobalFunc_9814(iLocal_47))
			{
				if (!GlobalFunc_579())
				{
					if (func_176(iLocal_47))
					{
						if (GlobalFunc_9812(iLocal_47, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_47, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 1);
							TASK::CLEAR_PED_TASKS(iLocal_47);
							iLocal_474 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_474 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_47, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (GlobalFunc_579())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_176(iLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_121 = { ENTITY::GET_ENTITY_COORDS(iLocal_47, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(iLocal_47, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(iLocal_47, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(iLocal_47, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_474 == 1)
				{
					if (GlobalFunc_9811(iLocal_47))
					{
						iLocal_474 = 0;
					}
				}
			}
		}
	}
	if (GlobalFunc_9813(iLocal_46, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_46))
		{
			if (!GlobalFunc_9814(iLocal_46))
			{
				if (!GlobalFunc_579())
				{
					if (func_176(iLocal_46))
					{
						if (GlobalFunc_9812(iLocal_46, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_46, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, 1);
							TASK::CLEAR_PED_TASKS(iLocal_46);
							iLocal_473 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_473 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_46, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (GlobalFunc_579())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_176(iLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_121 = { ENTITY::GET_ENTITY_COORDS(iLocal_46, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1)
				{
					if (GlobalFunc_9811(iLocal_46))
					{
						iLocal_473 = 0;
					}
				}
			}
		}
	}
}

int func_176(int iParam0)//Position - 0xE38E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == iParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
					{
						if ((PED::IS_PED_IN_VEHICLE(iParam0, iLocal_32, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_32, -1) == iParam0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_32, Local_115, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_45)
							{
								iLocal_469 = 1;
							}
							if (iParam0 == iLocal_47)
							{
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_46)
							{
								iLocal_471 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_45)
	{
		iLocal_469 = 0;
	}
	if (iParam0 == iLocal_47)
	{
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_471 = 0;
	}
	return 0;
}


void func_178()//Position - 0xE479
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			func_181(3);
			return;
		}
		else
		{
			if (GlobalFunc_2250(&iLocal_32))
			{
				func_181(2);
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					func_181(1);
					return;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
					{
						if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_31) || GlobalFunc_1442(iLocal_31)) || GlobalFunc_2250(&iLocal_31))
						{
							func_181(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_27 == 3 || iLocal_27 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
			{
				if (GlobalFunc_156(iLocal_31, PLAYER::PLAYER_PED_ID(), 1) > 600f)
				{
					func_181(5);
					return;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		if (PED::IS_PED_INJURED(iLocal_48))
		{
			func_181(6);
			return;
		}
	}
}



void func_181(int iParam0)//Position - 0xE600
{
	iLocal_29 = iParam0;
	if (iLocal_27 != 6)
	{
		iLocal_27 = 6;
		iLocal_61 = 0;
	}
}


void func_183()//Position - 0xE65D
{
	if (iLocal_27 == 5)
	{
		if (iLocal_482 == 0)
		{
			GlobalFunc_553(657);
		}
	}
}



void func_186()//Position - 0xE715
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), 0);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_50, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_51, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_52, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_53, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_54, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_55, 0);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 0);
		}
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_113);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_114))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_114);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}



