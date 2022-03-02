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
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
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
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 1;
	var uLocal_99 = 0;
	var uLocal_100 = 1;
	var uLocal_101 = 0;
	var uLocal_102 = 1;
	var uLocal_103 = 0;
	var uLocal_104 = 1;
	var uLocal_105 = 0;
	var uLocal_106 = 1;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 1;
	var uLocal_113 = 0;
	var uLocal_114 = 1;
	var uLocal_115 = 0;
	var uLocal_116 = 1;
	var uLocal_117 = 0;
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	var uLocal_120 = 1;
	var uLocal_121 = 0;
	var uLocal_122 = 1;
	var uLocal_123 = 0;
	var uLocal_124 = 1;
	var uLocal_125 = 0;
	var uLocal_126 = 1;
	var uLocal_127 = 0;
	var uLocal_128 = 1;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	var uLocal_131 = 0;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	var uLocal_134 = 0;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	var uLocal_139 = 0;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	var uLocal_153 = 1;
	var uLocal_154 = 0;
	var uLocal_155 = 1;
	var uLocal_156 = 0;
	var uLocal_157 = 1;
	var uLocal_158 = 0;
	var uLocal_159 = 1;
	var uLocal_160 = 0;
	var uLocal_161 = 1;
	var uLocal_162 = 0;
	var uLocal_163 = 1;
	var uLocal_164 = 0;
	var uLocal_165 = 1;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 1;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 1;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 1;
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
	var uLocal_240 = 1;
	var uLocal_241 = 0;
	var uLocal_242 = 1;
	var uLocal_243 = 0;
	var uLocal_244 = 1;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 1;
	var uLocal_250 = 0;
	var uLocal_251 = 1;
	var uLocal_252 = 0;
	var uLocal_253 = 1;
	var uLocal_254 = 0;
	var uLocal_255 = 1;
	var uLocal_256 = 0;
	var uLocal_257 = 1;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1;
	var uLocal_263 = 0;
	float fLocal_264 = 0f;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
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
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = -1;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 1000;
	var uLocal_443 = 1000;
	var uLocal_444 = 0;
	int iLocal_445 = 0;
	var uLocal_446[4] = { 0, 0, 0, 0 };
	int iLocal_451[4] = { 0, 0, 0, 0 };
	int iLocal_456 = 0;
	var uLocal_457[4] = { 0, 0, 0, 0 };
	int iLocal_462[4] = { 0, 0, 0, 0 };
	struct<3> Local_467[4];
	float fLocal_480[4] = { 0f, 0f, 0f, 0f };
	int iLocal_485 = 0;
	var uLocal_486 = 0;
	struct<3> Local_487 = { 0, 0, 0 } ;
	float fLocal_490 = 0f;
	struct<2> Local_491 = { 0, 0 } ;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	int iLocal_495[4] = { 0, 0, 0, 0 };
	float fLocal_500 = 0f;
	float fLocal_501 = 0f;
	struct<2> Local_502 = { 0, 0 } ;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	char cLocal_506[16] = "";
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	struct<4> Local_513 = { 0, 0, 0, 0 } ;
	struct<2> Local_517 = { 0, 0 } ;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	int iLocal_524[4] = { 0, 0, 0, 0 };
	float fLocal_529[4] = { 0f, 0f, 0f, 0f };
	float fLocal_534 = 0f;
	int iLocal_535 = 0;
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
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	iLocal_67 = 1;
	iLocal_74 = 1;
	iLocal_96 = 1;
	fLocal_132 = 120f;
	fLocal_133 = 0f;
	fLocal_135 = 1f;
	fLocal_136 = 0f;
	fLocal_137 = 1f;
	fLocal_138 = 30f;
	fLocal_140 = 1f;
	fLocal_141 = 5f;
	fLocal_142 = 1f;
	fLocal_143 = 1f;
	fLocal_144 = 100f;
	fLocal_145 = 100f;
	fLocal_146 = 0f;
	fLocal_147 = 7000f;
	fLocal_148 = 0f;
	fLocal_149 = 0f;
	fLocal_150 = 0.3f;
	fLocal_151 = 0.5f;
	fLocal_152 = 50f;
	iLocal_170 = -1;
	iLocal_178 = -1;
	iLocal_179 = -1;
	fLocal_264 = 15f;
	iLocal_265 = 786599;
	iLocal_267 = 318;
	iLocal_445 = 1;
	iLocal_456 = 4;
	StringCopy(&Local_491, "null", 16);
	StringCopy(&Local_502, "null", 16);
	StringCopy(&cLocal_506, "null", 16);
	iLocal_510 = -1;
	iLocal_511 = 5;
	StringCopy(&Local_513, "null", 16);
	StringCopy(&Local_517, "null", 16);
	fLocal_534 = -1f;
	iLocal_535 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_83();
	}
	SYSTEM::WAIT(0);
	func_74();
	func_73();
	GlobalFunc_576();
	while (iLocal_445 && GlobalFunc_9548(4, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_266)
		{
			case 0:
				if (func_67())
				{
					iLocal_266 = 1;
				}
				break;
			
			case 1:
				if (func_66())
				{
					iLocal_266 = 2;
				}
				break;
			
			case 2:
				if (func_2())
				{
					iLocal_266 = 3;
				}
				break;
			
			case 3:
				func_1();
				break;
		}
	}
	func_83();
}

void func_1()//Position - 0x1C5
{
	iLocal_445 = 0;
}

int func_2()//Position - 0x1D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_56(iVar0, &iVar1);
		iVar0++;
	}
	if (iVar1 < 0)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_446[iVar2]))
				{
					if (!PED::IS_PED_INJURED(uLocal_446[iVar2]))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							GlobalFunc_4948(&uLocal_433, 0, 0);
							iLocal_535 = iVar1;
						}
						return 0;
					}
				}
				iVar2++;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				GlobalFunc_4948(&uLocal_433, 0, 0);
				iLocal_535 = iVar1;
			}
			return 1;
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			GlobalFunc_4948(&uLocal_433, 0, 0);
			iLocal_535 = iVar1;
		}
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_502))
	{
		if (iLocal_535 != iVar1 || iVar1 < -1)
		{
			GlobalFunc_4948(&uLocal_433, 0, 0);
			iLocal_535 = iVar1;
			return 0;
		}
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_446[iVar1], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
		if (fVar3 < (150f * 150f) || CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			func_31(&uLocal_433, uLocal_446[iVar1], &Local_502, 0, 1, 1, 1);
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				iLocal_535 = iVar1;
			}
		}
	}
	func_3(&cLocal_506, &uLocal_521, &iVar1);
	return 0;
}

int func_3(char[4] cParam0, var uParam1, int iParam2)//Position - 0x314
{
	struct<2> Var0;
	float fVar4;
	float fVar5;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam0))
	{
		return 0;
	}
	Var0 = { *cParam0 };
	if (GlobalFunc_2927())
	{
		return 0;
	}
	if (!GlobalFunc_226(uParam1))
	{
		GlobalFunc_7731(uParam1);
		return 0;
	}
	if (iLocal_512 >= iLocal_511)
	{
		return 0;
	}
	fVar4 = (10f + ((SYSTEM::TO_FLOAT(iLocal_512) / SYSTEM::TO_FLOAT(iLocal_511)) * 10f));
	if (!GlobalFunc_7072(uParam1, fVar4))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_446[*iParam2]))
	{
		*iParam2 = -1;
		return 0;
	}
	fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_446[*iParam2], 0));
	if (fVar5 > (30f * 30f))
	{
		if (fVar5 > (150f * 150f))
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				GlobalFunc_4948(&uLocal_433, 0, 0);
			}
			*iParam2 = -1;
		}
		return 0;
	}
	if (iLocal_510 > 0)
	{
		StringIntConCat(&Var0, iLocal_510, 16);
	}
	GlobalFunc_878(&uLocal_268, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (GlobalFunc_10643(&uLocal_268, "PRSAUD", &Var0, 3, 0, 0, 0))
	{
		if (iLocal_510 > 0)
		{
			iLocal_510++;
		}
		GlobalFunc_6715(uParam1);
		iLocal_512++;
		return 1;
	}
	return 0;
}




























void func_31(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xE71
{
	func_32(uParam0, uParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_32(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xE8B
{
	func_33(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_33(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0xEA8
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_34(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_34(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0xEE0
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (GlobalFunc_74(iVar0))
	{
		GlobalFunc_163();
	}
	if (func_52(uParam1) && ENTITY::IS_ENTITY_VISIBLE(uParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(uParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(uParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (GlobalFunc_7635(uParam0, bParam7, bParam9, 0))
			{
				func_43(uParam0, uParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (GlobalFunc_6696(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!GlobalFunc_74(iVar0))
							{
								GlobalFunc_159(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									GlobalFunc_158(1);
								}
							}
						}
					}
				}
			}
			else if (GlobalFunc_6696(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!GlobalFunc_74(iVar0))
						{
							GlobalFunc_159(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								GlobalFunc_158(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (GlobalFunc_74(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					GlobalFunc_4948(uParam0, iVar0, 1);
				}
			}
			if (!GlobalFunc_7635(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !GlobalFunc_157(uParam0))
				{
					func_35(uParam0);
				}
			}
		}
	}
	else
	{
		GlobalFunc_4948(uParam0, iVar0, 0);
	}
}

void func_35(var uParam0)//Position - 0x1249
{
	if (func_52(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}








void func_43(var uParam0, var uParam1, struct<3> Param2, int iParam5)//Position - 0x161C
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	if (GlobalFunc_100(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(uParam1))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(uVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(uVar0))
				{
					if (!GlobalFunc_5113())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(uVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(uParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}









int func_52(var uParam0)//Position - 0x1C2F
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(uParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0))
		{
			return 1;
		}
	}
	return 0;
}




int func_56(int iParam0, int iParam1)//Position - 0x1D83
{
	var uVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	switch (iLocal_524[iParam0])
	{
		case 0:
			if (!func_65(uLocal_446[iParam0], uLocal_457[iParam0], &(iLocal_524[iParam0]), -1, -2))
			{
				return 0;
			}
			func_64(iParam0, iParam1);
			if (fLocal_501 >= 0f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_457[iParam0], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_457[iParam0]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0], iLocal_495[iParam0], &Local_491, 1);
					}
					else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0], (fLocal_501 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(uLocal_457[iParam0])));
							iLocal_524[iParam0] = 1;
						}
					}
					else
					{
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0], (fLocal_501 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(uLocal_457[iParam0])));
						iLocal_524[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!func_65(uLocal_446[iParam0], uLocal_457[iParam0], &(iLocal_524[iParam0]), -1, -2))
			{
				return 0;
			}
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_446[iParam0], uLocal_457[iParam0]))
			{
				iLocal_524[iParam0] = 4;
				return 0;
			}
			func_64(iParam0, iParam1);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_457[iParam0]))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (!ENTITY::IS_ENTITY_DEAD(uVar0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uVar0))
				{
					fLocal_529[iParam0] = 1f;
				}
				else
				{
					bVar1 = false;
					if (!PED::GET_PED_TYPE(uLocal_446[iParam0]) == 6)
					{
						func_57(uLocal_457[iParam0], PLAYER::PLAYER_PED_ID(), &(fLocal_529[iParam0]), 17.5f, 7.5f, 30f, 0.7f, 1.2f, 1f, bVar1);
					}
					else
					{
						fLocal_529[iParam0] = 1f;
						fVar2 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
						fVar3 = ENTITY::GET_ENTITY_SPEED(uLocal_457[iParam0]);
						fLocal_529[iParam0] = 1f;
						if (fVar3 > fVar2)
						{
							fLocal_529[iParam0] = (fVar2 / fVar3);
						}
					}
				}
				if (fLocal_529[iParam0] <= 0.05f)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0]);
					return 0;
				}
				VEHICLE::SET_PLAYBACK_SPEED(uLocal_457[iParam0], fLocal_529[iParam0]);
				fVar4 = (VEHICLE::GET_TIME_POSITION_IN_RECORDING(uLocal_457[iParam0]) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_495[iParam0], &Local_491));
				if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(uLocal_457[iParam0]))
				{
					if (!PED::GET_PED_TYPE(uLocal_446[iParam0]) == 6)
					{
						if (MISC::IS_AREA_OCCUPIED(ENTITY::GET_ENTITY_COORDS(uLocal_457[iParam0], 1) - Vector(1f, 1f, 1f), ENTITY::GET_ENTITY_COORDS(uLocal_457[iParam0], 1) + Vector(1f, 1f, 1f), 0, 1, 0, 0, 0, 0, 0))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(uLocal_457[iParam0], iLocal_265);
						}
					}
					else
					{
						PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
					}
				}
				if (fVar4 >= fLocal_534)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0]);
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_446[iParam0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_457[iParam0], PLAYER::PLAYER_PED_ID(), 1))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0]);
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uLocal_457[iParam0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0]);
					return 0;
				}
				if (PED::GET_PED_TYPE(uLocal_446[iParam0]) == 6)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iParam0]);
							return 0;
						}
					}
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(uLocal_446[iParam0]);
				if (!PED::GET_PED_TYPE(uLocal_446[iParam0]) == 6)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_446[iParam0], uLocal_457[iParam0], fLocal_264, iLocal_265);
					PED::SET_PED_KEEP_TASK(uLocal_446[iParam0], 1);
					if (iLocal_267 == 281)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uLocal_457[iParam0], 0f);
					}
					iLocal_524[iParam0] = 2;
				}
				else
				{
					TASK::TASK_COMBAT_PED(uLocal_446[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_446[iParam0], 1, 1);
					PED::SET_PED_KEEP_TASK(uLocal_446[iParam0], 1);
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
					iLocal_524[iParam0] = 3;
				}
				return 0;
			}
			break;
		
		case 2:
			if (!func_65(uLocal_446[iParam0], uLocal_457[iParam0], &(iLocal_524[iParam0]), -1, -2))
			{
				return 0;
			}
			func_64(iParam0, iParam1);
			if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_446[iParam0], uLocal_457[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_446[iParam0], -258271821) != 1)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_446[iParam0], uLocal_457[iParam0], fLocal_264, iLocal_265);
				}
				else
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(uLocal_446[iParam0], fLocal_264);
				}
			}
			else
			{
				iLocal_524[iParam0] = 4;
				return 0;
			}
			break;
		
		case 3:
			if (!func_65(uLocal_446[iParam0], uLocal_457[iParam0], &(iLocal_524[iParam0]), -1, -2))
			{
				return 0;
			}
			func_64(iParam0, iParam1);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					TASK::CLEAR_PED_TASKS(uLocal_446[iParam0]);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_446[iParam0]));
					return 0;
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_INJURED(uLocal_446[iParam0]))
			{
				iLocal_524[iParam0] = -1;
				return 0;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_457[iParam0], 0))
			{
				iLocal_524[iParam0] = -2;
				return 0;
			}
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_446[iParam0], uLocal_457[iParam0]))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_446[iParam0]))
				{
					TASK::TASK_ENTER_VEHICLE(uLocal_446[iParam0], uLocal_457[iParam0], 20000, -1, 1073741824, 1, 0);
				}
			}
			else
			{
				iLocal_524[iParam0] = 1;
				return 0;
			}
			break;
		
		case -1:
			break;
		
		case -2:
			if (!PED::IS_PED_INJURED(uLocal_446[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_446[iParam0], 1805844857) != 1)
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_446[iParam0], 29, 1);
					TASK::TASK_SMART_FLEE_PED(uLocal_446[iParam0], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				}
			}
			else
			{
				iLocal_524[iParam0] = -1;
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_57(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9)//Position - 0x23B8
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!fParam4 < fParam3)
	{
		fParam4 = (fParam3 - 0.1f);
	}
	if (fParam6 > fParam8)
	{
		fParam8 = fParam6;
	}
	fVar0 = (fParam7 / fParam8);
	fVar1 = (fParam6 / fParam8);
	fVar2 = (((fParam5 - fParam3) * (1f / 0.4f)) + fParam3);
	func_58(uParam0, uParam1, uParam2, fParam8, fParam4, fParam3, fVar2, fVar0, 1f, fVar1, bParam9);
}

void func_58(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x2418
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	
	if (iLocal_80 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_80 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_143;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_63(uParam0, uParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		if (func_61(uParam1, uParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_60(uParam0, uParam1) < fParam5)
			{
				fVar1 = func_59(uParam0, uParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_81 = 1;
		}
		else if (iLocal_81)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_81 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_150 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_151 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(uParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam1, 0))
			{
				uVar9 = PED::GET_VEHICLE_PED_IS_IN(uParam1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(uVar9))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(uVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_141 - fLocal_142));
							fVar1 = (fVar1 + fLocal_142);
							fLocal_140 = fVar1;
							if (fLocal_140 < fLocal_142)
							{
								fLocal_140 = fLocal_142;
							}
							if (fLocal_140 > fLocal_141)
							{
								fLocal_140 = fLocal_141;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_140);
						}
					}
				}
			}
		}
	}
}

var func_59(var uParam0, var uParam1)//Position - 0x26BD
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	var uVar13;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = ENTITY::GET_ENTITY_FORWARD_X(uParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(uParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam1, 0))
		{
			uVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam1, 0);
			Var9.x = ENTITY::GET_ENTITY_FORWARD_X(uVar13);
			Var9.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(uVar13);
		}
		else
		{
			Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1, 0f, 5f, 0f) };
			Var9 = { Var6 - Var3 };
		}
	}
	uVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0, Var0.f_1, Var9.x, Var9.f_1);
	return uVar12;
}

float func_60(var uParam0, var uParam1)//Position - 0x274C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	Var6 = { Var3 - Var0 };
	Var6.f_2 = 0f;
	fVar9 = SYSTEM::VMAG(Var6);
	return fVar9;
}

int func_61(var uParam0, var uParam1)//Position - 0x279C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0, uParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1, 0f, 5f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = GlobalFunc_168(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}


float func_63(var uParam0, var uParam1)//Position - 0x285E
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		Var0 = ENTITY::GET_ENTITY_FORWARD_X(uParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(uParam0);
		Var6 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var9 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	Var3 = { Var9 - Var6 };
	fVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.x, Var3.f_1, Var0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	Var3.f_2 = 0f;
	return (SYSTEM::VMAG(Var3) * SYSTEM::SIN(fVar12));
}

int func_64(int iParam0, var uParam1)//Position - 0x28EC
{
	if (*uParam1 < 0)
	{
		*uParam1 = iParam0;
		return 1;
	}
	return 0;
}

int func_65(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x2905
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		*uParam2 = iParam3;
		return 0;
	}
	if (PED::IS_PED_INJURED(uParam0))
	{
		if (!GlobalFunc_10643(&uLocal_268, "PRSAUD", &Local_517, 3, 0, 0, 0))
		{
			return 0;
		}
		else
		{
			*uParam2 = iParam3;
			GlobalFunc_6715(&uLocal_521);
			return 0;
		}
		Local_513 = { Local_513 };
		*uParam2 = iParam3;
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1, 0))
	{
		TASK::CLEAR_PED_TASKS(uParam0);
		*uParam2 = iParam4;
		return 0;
	}
	return 1;
}

int func_66()//Position - 0x2983
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_56(iVar0, &iVar1);
		iVar0++;
	}
	if (!GlobalFunc_2927())
	{
		return 1;
	}
	return 0;
}

int func_67()//Position - 0x29B6
{
	var uVar0;
	int iVar1;
	
	uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uVar0))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_457[iVar1], 0) && !PED::IS_PED_INJURED(uLocal_446[iVar1]))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_491) && iLocal_495[iVar1] > 0)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iVar1], iLocal_495[iVar1], &Local_491, 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_457[iVar1], uLocal_500);
						TASK::TASK_VEHICLE_MISSION(uLocal_446[iVar1], uLocal_457[iVar1], 0, 15, 20f, iLocal_265, 0.5f, 2f, 1);
						if (PED::GET_PED_TYPE(uLocal_446[iVar1]) == 6)
						{
							VEHICLE::SET_VEHICLE_SIREN(uLocal_457[iVar1], 1);
						}
					}
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}






void func_73()//Position - 0x2C1C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iLocal_451[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_451[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_451[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_451[iVar0]);
					bVar2 = false;
				}
			}
			if (iLocal_462[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_462[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_462[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_462[iVar0]);
					bVar2 = false;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_491) && iLocal_495[iVar0] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_495[iVar0], &Local_491);
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_495[iVar0], &Local_491))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_495[iVar0], &Local_491);
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	PED::ADD_RELATIONSHIP_GROUP("chasecar", &uLocal_486);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, uLocal_486, 1862763509);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_462[iVar0] != 0)
		{
			MISC::CLEAR_AREA(Local_487 + Local_467[iVar0 /*3*/], 20f, 1, 0, 0, 0);
			uLocal_457[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_462[iVar0], Local_487 + Local_467[iVar0 /*3*/], (fLocal_490 + fLocal_480[iVar0]), 1, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_457[iVar0], iLocal_485);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462[iVar0]);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uLocal_457[iVar0], 1);
		}
		if (iLocal_451[iVar0] != 0)
		{
			uLocal_446[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_457[iVar0], iLocal_456, iLocal_451[iVar0], -1, 1, 1);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(uLocal_446[iVar0], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_451[iVar0]);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_446[iVar0], uLocal_486);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_446[iVar0], 1);
			if (iLocal_451[iVar0] == joaat("a_m_y_roadcyc_01"))
			{
				PED::SET_PED_HELMET(uLocal_446[iVar0], 1);
			}
			if (iLocal_456 != 6)
			{
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_446[iVar0], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_446[iVar0], 17, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_446[iVar0], 1, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_446[iVar0], 2, 1);
			}
		}
		iVar0++;
	}
}

void func_74()//Position - 0x2E69
{
	char[] cVar0[8];
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	float fVar12;
	
	iLocal_267 = Global_89502;
	GlobalFunc_8273(iLocal_267, &Local_487, &fLocal_490, &cVar0);
	GlobalFunc_2939(iLocal_267, &Local_491, &uVar8, &fLocal_500, &fLocal_501, &uVar9, &uVar10, &uVar11);
	switch (iLocal_267)
	{
		case 281:
			Local_467[0 /*3*/] = { 5.5437f, 30.4559f, 0f };
			fLocal_480[0] = -4.6273f;
			iLocal_485 = 7;
			iLocal_451[0] = joaat("a_m_y_genstreet_01");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[3] = 0;
			iLocal_456 = 4;
			iLocal_462[0] = joaat("penumbra");
			iLocal_462[1] = 0;
			iLocal_462[2] = 0;
			iLocal_462[3] = 0;
			iLocal_265 = 794660;
			iLocal_495[0] = 2;
			iLocal_495[1] = -1;
			iLocal_495[2] = -1;
			iLocal_495[3] = -1;
			StringCopy(&Local_502, "CMN_HINT", 16);
			StringCopy(&cLocal_506, "PST_CHSCRaR", 16);
			StringCopy(&Local_513, "PST_CHSCRaG", 16);
			StringCopy(&Local_517, "PST_CHSCRaK", 16);
			iLocal_511 = 4;
			iLocal_510 = 1;
			fLocal_534 = 1f;
			break;
		
		case 282:
			Local_467[0 /*3*/] = { -21.211f, 7.393f, 0f };
			fLocal_480[0] = 0.7266f;
			iLocal_485 = 0;
			iLocal_451[0] = joaat("a_m_y_genstreet_01");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[2] = 0;
			iLocal_456 = 4;
			iLocal_462[0] = joaat("penumbra");
			iLocal_462[1] = 0;
			iLocal_462[2] = 0;
			iLocal_462[2] = 0;
			iLocal_265 = 786468;
			iLocal_495[0] = 2;
			iLocal_495[1] = -1;
			iLocal_495[2] = -1;
			iLocal_495[3] = -1;
			StringCopy(&Local_502, "CMN_HINT", 16);
			StringCopy(&cLocal_506, "PST_CHSCRbR", 16);
			StringCopy(&Local_513, "PST_CHSCRbG", 16);
			StringCopy(&Local_517, "PST_CHSCRbK", 16);
			iLocal_511 = 3;
			iLocal_510 = 1;
			fLocal_534 = 1f;
			break;
		
		case 283:
			Local_467[0 /*3*/] = { -7.9514f, -28.1131f, 1.094f };
			Local_467[1 /*3*/] = { -10.876f, -26.4702f, 1.1106f };
			Local_467[2 /*3*/] = { -13.8006f, -24.8273f, 1.1272f };
			fLocal_480[0] = 10.9603f;
			fLocal_480[1] = -0.8648f;
			fLocal_480[2] = -12.6899f;
			iLocal_485 = 0;
			iLocal_451[0] = joaat("a_m_y_roadcyc_01");
			iLocal_451[1] = joaat("a_m_y_roadcyc_01");
			iLocal_451[2] = joaat("a_m_y_roadcyc_01");
			iLocal_451[3] = 0;
			iLocal_456 = 4;
			iLocal_462[0] = joaat("tribike");
			iLocal_462[1] = joaat("tribike");
			iLocal_462[2] = joaat("tribike");
			iLocal_462[3] = 0;
			iLocal_495[0] = 2;
			iLocal_495[1] = 3;
			iLocal_495[2] = 4;
			iLocal_495[3] = -1;
			StringCopy(&Local_502, "CMN_HINT", 16);
			StringCopy(&cLocal_506, "PST_CHSCRcR", 16);
			StringCopy(&Local_513, "", 16);
			StringCopy(&Local_517, "PST_CHSCRcK", 16);
			iLocal_511 = 3;
			iLocal_510 = 1;
			fLocal_534 = 1f;
			break;
		
		case 284:
			Local_467[0 /*3*/] = { 12.7813f, 6.7387f, 0f };
			fLocal_480[0] = -2.6961f;
			iLocal_485 = 0;
			iLocal_451[0] = joaat("a_m_y_genstreet_01");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[3] = 0;
			iLocal_456 = 4;
			iLocal_462[0] = joaat("faggio2");
			iLocal_462[1] = 0;
			iLocal_462[2] = 0;
			iLocal_462[3] = 0;
			iLocal_495[0] = 2;
			iLocal_495[1] = -1;
			iLocal_495[2] = -1;
			iLocal_495[3] = -1;
			StringCopy(&Local_502, "CMN_HINT", 16);
			StringCopy(&cLocal_506, "PST_CHSCRdR", 16);
			StringCopy(&Local_513, "PST_CHSCRdG", 16);
			StringCopy(&Local_517, "PST_CHSCRdK", 16);
			iLocal_511 = 8;
			iLocal_510 = -1;
			fLocal_534 = 0.95f;
			fLocal_264 = 10f;
			break;
		
		case 275:
			Local_467[0 /*3*/] = { -9.151f, -1.3167f, 0.9699f };
			Local_467[1 /*3*/] = { -10.4908f, 3.3092f, 0f };
			Local_467[2 /*3*/] = { -23.4117f, -0.3117f, 0f };
			Local_467[3 /*3*/] = { -20.2394f, -5.2394f, 0f };
			fLocal_480[0] = -0.3188f;
			fLocal_480[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_480[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_480[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_451[0] = joaat("s_m_y_cop_01");
			iLocal_451[1] = joaat("s_m_y_cop_01");
			iLocal_451[2] = joaat("s_m_y_cop_01");
			iLocal_451[3] = joaat("s_m_y_cop_01");
			iLocal_456 = 6;
			iLocal_462[0] = joaat("police3");
			iLocal_462[1] = joaat("police3");
			iLocal_462[2] = joaat("police3");
			iLocal_462[3] = joaat("police3");
			iLocal_495[0] = 2;
			iLocal_495[1] = 3;
			iLocal_495[2] = 4;
			iLocal_495[3] = 5;
			StringCopy(&Local_502, "", 16);
			StringCopy(&cLocal_506, "PST_POLaR", 16);
			StringCopy(&Local_513, "", 16);
			StringCopy(&Local_517, "", 16);
			iLocal_511 = 3;
			iLocal_510 = 1;
			fLocal_534 = 1f;
			break;
		
		case 276:
			Local_467[0 /*3*/] = { 1.5168f, -20.0085f, 0.1667f };
			Local_467[1 /*3*/] = { -4.9822f, -20.365f, 0.1911f };
			Local_467[2 /*3*/] = { -7.8196f, -18.8446f, 0f };
			Local_467[3 /*3*/] = { -4.3313f, -28.5564f, 0f };
			fLocal_480[0] = -3.4484f;
			fLocal_480[1] = -12.2569f;
			fLocal_480[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_480[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_451[0] = joaat("s_m_y_ranger_01");
			iLocal_451[1] = joaat("s_m_y_ranger_01");
			iLocal_451[2] = joaat("s_m_y_ranger_01");
			iLocal_451[3] = joaat("s_m_y_ranger_01");
			iLocal_456 = 6;
			iLocal_462[0] = joaat("sheriff");
			iLocal_462[1] = joaat("sheriff");
			iLocal_462[2] = joaat("pranger");
			iLocal_462[3] = joaat("pranger");
			iLocal_495[0] = 2;
			iLocal_495[1] = 3;
			iLocal_495[2] = 4;
			iLocal_495[3] = 5;
			StringCopy(&Local_502, "", 16);
			StringCopy(&cLocal_506, "PST_POLbR", 16);
			StringCopy(&Local_513, "", 16);
			StringCopy(&Local_517, "", 16);
			iLocal_511 = 5;
			iLocal_510 = 1;
			fLocal_534 = 1f;
			break;
		
		case 277:
			Local_467[0 /*3*/] = { -14.3569f, 0.1057f, 0f };
			Local_467[1 /*3*/] = { -14.8079f, 6.2547f, 0f };
			Local_467[2 /*3*/] = { -25.6028f, 6.8598f, 0f };
			Local_467[3 /*3*/] = { -27.9848f, 0.2778f, 0f };
			fLocal_480[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_480[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_480[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_480[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_451[0] = joaat("s_m_y_ranger_01");
			iLocal_451[1] = joaat("s_m_y_ranger_01");
			iLocal_451[2] = joaat("s_m_y_ranger_01");
			iLocal_451[3] = joaat("s_m_y_ranger_01");
			iLocal_456 = 6;
			iLocal_462[0] = joaat("sheriff");
			iLocal_462[1] = joaat("sheriff");
			iLocal_462[2] = joaat("pranger");
			iLocal_462[3] = joaat("pranger");
			iLocal_495[0] = 2;
			iLocal_495[1] = 3;
			iLocal_495[2] = 4;
			iLocal_495[3] = 5;
			StringCopy(&Local_502, "", 16);
			StringCopy(&cLocal_506, "PST_POLcR", 16);
			StringCopy(&Local_513, "", 16);
			StringCopy(&Local_517, "", 16);
			iLocal_511 = 5;
			iLocal_510 = 1;
			fLocal_534 = 1f;
			break;
		
		default:
			fVar12 = ((fLocal_490 + 90f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			Local_467[0 /*3*/] = { Vector(0f, SYSTEM::COS(fVar12), SYSTEM::SIN(fVar12)) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)) };
			fLocal_480[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_485 = 0;
			iLocal_451[0] = joaat("a_m_y_genstreet_01");
			iLocal_451[1] = 0;
			iLocal_451[2] = 0;
			iLocal_451[3] = 0;
			iLocal_462[0] = joaat("penumbra");
			iLocal_462[1] = 0;
			iLocal_462[2] = 0;
			iLocal_462[3] = 0;
			iLocal_456 = 4;
			StringCopy(&Local_491, "null", 16);
			iLocal_495[0] = -1;
			iLocal_495[1] = -1;
			iLocal_495[2] = -1;
			iLocal_495[3] = -1;
			StringCopy(&Local_502, "null", 16);
			StringCopy(&cLocal_506, "null", 16);
			StringCopy(&Local_513, "null", 16);
			StringCopy(&Local_517, "null", 16);
			iLocal_511 = -1;
			iLocal_510 = -1;
			fLocal_534 = -1f;
			break;
	}
}









void func_83()//Position - 0x8E71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_446[iVar0]));
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_457[iVar0]));
		if (iLocal_451[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_451[iVar0]);
		}
		if (iLocal_462[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462[iVar0]);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_491) && iLocal_495[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_495[iVar0], &Local_491);
		}
		iVar0++;
	}
	GlobalFunc_4948(&uLocal_433, 0, 0);
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

