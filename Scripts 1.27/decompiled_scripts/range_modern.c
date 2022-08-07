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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	struct<3> Local_28 = { 0, 0, 0 } ;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	var uLocal_102 = 3;
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
	var uLocal_150 = 4;
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
	var uLocal_215 = 2;
	var uLocal_216 = 0;
	var uLocal_217 = 4;
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
	var uLocal_283 = 4;
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
	var uLocal_354 = 12;
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
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 3;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	float fLocal_539 = 0f;
	float fLocal_540 = 0f;
	bool bLocal_541 = 0;
	int iLocal_542 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<330> Var0;
	struct<35> Var330;
	struct<2> Var375;
	struct<88> Var405;
	struct<1652> Var566;
	struct<2> Var2469;
	var uVar2757;
	struct<1200> Var2794;
	var uVar3994;
	struct<6> Var3995;
	
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	Local_91 = { 500f, 500f, 500f };
	Local_96 = { 0.111f, 0f, 0f };
	Local_99 = { 0f, 90f, 0f };
	fLocal_539 = 0.008f;
	fLocal_540 = 0.013f;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = 10;
	Var0.f_39 = 44;
	Var0.f_39.f_133 = 50;
	Var0.f_323 = -1;
	Var0.f_328 = 1;
	Var0.f_329 = -1;
	Var330.f_11 = -1;
	Var330.f_34 = 1;
	Var375.f_1 = 4;
	Var405 = 20;
	Var405.f_87 = 7;
	Var566 = 50;
	Var566.f_1 = -1;
	Var566.f_1.f_1 = -1;
	Var566.f_1.f_17 = -1;
	Var566.f_1.f_18 = -1082130432;
	Var566.f_1.f_27 = -1082130432;
	Var566.f_1.f_33 = -1;
	Var566.f_1.f_33.f_1 = -1;
	Var566.f_1.f_33.f_17 = -1;
	Var566.f_1.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_17 = -1;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_18 = -1082130432;
	Var566.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_27 = -1082130432;
	Var566.f_1651 = 50;
	Var566.f_1651.f_1 = 12;
	Var566.f_1651.f_1.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var566.f_1651.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 12;
	Var2469 = 7;
	Var2469.f_1 = 4;
	Var2469.f_1.f_41 = 4;
	Var2469.f_1.f_41.f_41 = 4;
	Var2469.f_1.f_41.f_41.f_41 = 4;
	Var2469.f_1.f_41.f_41.f_41.f_41 = 4;
	Var2469.f_1.f_41.f_41.f_41.f_41.f_41 = 4;
	Var2469.f_1.f_41.f_41.f_41.f_41.f_41.f_41 = 4;
	Var2794.f_1 = 7;
	Var2794.f_11 = 4;
	Var2794.f_18 = 4;
	Var2794.f_18.f_5 = 4;
	Var2794.f_18.f_30 = 4;
	Var2794.f_18.f_36 = -1;
	Var2794.f_56.f_2 = 8;
	Var2794.f_56.f_2.f_1.f_3 = 4;
	Var2794.f_56.f_2.f_1.f_15.f_3 = 4;
	Var2794.f_56.f_2.f_1.f_15.f_15.f_3 = 4;
	Var2794.f_56.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var2794.f_56.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var2794.f_56.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var2794.f_56.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var2794.f_56.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var2794.f_199 = 35;
	Var2794.f_199.f_316 = 50;
	Var2794.f_199.f_420 = 40;
	Var2794.f_199.f_973.f_3 = 1;
	Var2794.f_199.f_973.f_5 = 1;
	Var2794.f_199.f_973.f_6 = 1;
	Var2794.f_199.f_973.f_10 = 1;
	Var2794.f_199.f_973.f_11 = 1;
	Var2794.f_1186 = 1;
	Var2794.f_1188 = 1133969408;
	Var2794.f_1189 = 1117650944;
	Var2794.f_1198 = 1053407838;
	Var2794.f_1199 = -1130113270;
	Var0.f_38 = uScriptParam_0;
	iLocal_95 = GlobalFunc_8315();
	func_836(&Var0);
	func_835(64);
	func_829(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_601(23, 1);
	GlobalFunc_601(4, 1);
	GRAPHICS::_0x0E4299C549F0D1F1(1);
	StringCopy(&Var3995, "NONE", 24);
	GlobalFunc_5771(11);
	func_821(&Var0, &uVar3994);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_800(&Var405, &Var566, &Var0, &Var2794, &uVar3994, 1);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	func_799(&uScriptParam_0, &uVar2757);
	MISC::SET_MISSION_FLAG(1);
	GlobalFunc_138();
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	while (true)
	{
		iLocal_94 = PLAYER::PLAYER_PED_ID();
		func_796(Var0.f_4);
		if (Var0.f_4 < 5)
		{
			func_777(Var3995, 0, 0, 0, 1, 0);
		}
		else
		{
			Global_68499 = 6;
		}
		if (!GlobalFunc_3067())
		{
			GlobalFunc_138();
		}
		func_775(28, 1);
		func_774();
		func_1(&Var0, &Var330, &uVar2757, &Var566, &Var2469, &Var405, &Var375, &Var2794, &uVar3994, &uScriptParam_0);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0xC38
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<20> Var5;
	struct<21> Var27;
	int iVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	int iVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	int iVar59;
	var uVar60;
	
	if (!GlobalFunc_701())
	{
		GlobalFunc_7632(1);
	}
	func_766(uParam0, uParam1, uParam2, uParam3, uParam7, uParam8, uParam5);
	PLAYER::SET_PLAYER_LOCKON_RANGE_OVERRIDE(PLAYER::PLAYER_ID(), 0.05f);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 43);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 26);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 28);
	func_761(28, 1);
	func_761(38, 1);
	switch (uParam0->f_4)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("S_RANGE", 3);
			func_758(uParam5, uParam1, uParam4, uParam6, uParam9, uParam2);
			iVar1 = GlobalFunc_8315();
			if (iVar1 == 0)
			{
				GlobalFunc_10608(0, 0, 27, 14, 1);
			}
			else if (iVar1 == 2)
			{
				GlobalFunc_10608(2, 0, 27, 14, 1);
			}
			else if (iVar1 == 1)
			{
				GlobalFunc_10608(1, 0, 27, 14, 1);
			}
			uParam0->f_4 = 1;
			break;
		
		case 1:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			func_735();
			if (func_734())
			{
				func_731(uParam0, uParam5);
				GlobalFunc_4963(&(uParam1->f_27), 0f);
				func_727(&(uParam0->f_6), uParam7);
				uParam0->f_4 = 2;
			}
			break;
		
		case 2:
			INTERIOR::_0xAF348AFCB575A441("V_7_ShootRm");
			if (GlobalFunc_5182(&(uParam1->f_27)) > 1f)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_94, 0);
				iVar2 = 1;
				if ((!ENTITY::DOES_ENTITY_EXIST(uParam2->f_6) || !ENTITY::DOES_ENTITY_EXIST(uParam2->f_7)) || !ENTITY::DOES_ENTITY_EXIST(uParam2->f_8))
				{
					iVar2 = 0;
				}
				if (!Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[0 /*271*/].f_268 && iVar2)
				{
					uParam2->f_1 = 0;
					func_725(joaat("weapon_pistol"), uParam1);
					TASK::TASK_SWAP_WEAPON(iLocal_94, 1);
					GlobalFunc_4963(&(uParam1->f_27), 0f);
					Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[0 /*271*/].f_268 = 1;
					uParam0->f_4 = 3;
				}
				else
				{
					uParam2->f_1 = 0;
					uParam0->f_4 = 4;
				}
			}
			break;
		
		case 4:
			if (func_723(uParam2, uParam1, uParam0, uParam5) && func_721(&(uParam0->f_6), uParam7))
			{
				GlobalFunc_585(82, 1);
				GlobalFunc_7917(486824538);
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_gc_door01"), uParam5->f_109, 1, 0f, 0);
				uParam0->f_4 = 5;
			}
			break;
		
		case 5:
			if (MISC::IS_PC_VERSION())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			func_710(uParam7, 1);
			if (!GlobalFunc_226(&(uParam7->f_1193)))
			{
				GlobalFunc_6877(&(uParam7->f_1193));
				return;
			}
			else if (GlobalFunc_5182(&(uParam7->f_1193)) < 0.5f)
			{
				return;
			}
			if (uParam7->f_1.f_9 == 6 && uParam0->f_17)
			{
				uParam7->f_18[3] = (func_707((uParam4[uParam7->f_1.f_9 /*41*/][3 /*10*/])->f_1, 0) || func_706(uParam0));
				uParam7->f_18.f_35 = 4;
			}
			else
			{
				uParam7->f_18[3] = 0;
				uParam7->f_18.f_35 = 3;
			}
			INTERIOR::_0xAF348AFCB575A441("V_7_ShootRm");
			if (!uParam7->f_55)
			{
				uParam7->f_55 = 1;
				func_705(uParam0, uParam7, uParam4);
			}
			iVar3 = func_529(uParam0, uParam1, uParam4, uParam7);
			if (iVar3 == 1)
			{
				func_503(uParam0, uParam1, uParam3, uParam5);
				if (uParam0->f_38 == 0)
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_AMMUNATION_GUN_RANGE", 0);
				}
				else
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_AMMUNATION_CYPRESS_FLATS_GUN_RANGE", 0);
				}
				GlobalFunc_235(&(uParam7->f_1193));
				func_710(uParam7, 0);
				uParam0->f_4 = 7;
			}
			else if (iVar3 == 2)
			{
				GlobalFunc_5210(&(uParam7->f_56), 0, 0, 1, 1);
				GlobalFunc_813(&(uParam7->f_56), "FE_HLP29", 2, 201, 1, 1, 0);
				GlobalFunc_813(&(uParam7->f_56), "FE_HLP31", 2, 202, 1, 1, 0);
				GlobalFunc_5275(&(uParam7->f_56), 1);
				GlobalFunc_235(&(uParam7->f_1193));
				uParam0->f_4 = 14;
			}
			break;
		
		case 14:
			func_497(1);
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_710(uParam7, 0);
				uParam0->f_4 = 15;
			}
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
			{
				if (*uParam7 != 0)
				{
					func_496(&(uParam7->f_56), 0, 1, 1);
					uParam0->f_4 = 5;
				}
				else
				{
					func_496(&(uParam7->f_56), 1, uParam7->f_1[uParam7->f_1.f_9], 1);
					uParam0->f_4 = 5;
				}
				GlobalFunc_5850(&(uParam7->f_56), 1);
			}
			break;
		
		case 15:
			if (!func_493(uParam1, 131072))
			{
				func_492(uParam1, 131072);
				func_710(uParam7, 0);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam5->f_123, 0);
					Var5.f_4 = 1065353216;
					Var5.f_5 = 1065353216;
					Var5.f_9 = 1065353216;
					Var5.f_10 = 1065353216;
					Var5.f_14 = 1065353216;
					Var5.f_15 = 1065353216;
					Var5.f_17 = 1040187392;
					Var5.f_18 = 1040187392;
					Var5.f_19 = -1;
					Var27.f_4 = 1065353216;
					Var27.f_5 = 1065353216;
					Var27.f_9 = 1065353216;
					Var27.f_10 = 1065353216;
					Var27.f_14 = 1065353216;
					Var27.f_15 = 1065353216;
					Var27.f_17 = 1040187392;
					Var27.f_18 = 1040187392;
					Var27.f_19 = -1;
					iVar49 = 0;
					Var27 = 1;
					Var27.f_2 = "takeoff_earsdefenders_idle";
					Var27.f_1 = "mini@ears_defenders";
					Var27.f_3 = 0f;
					Var27.f_4 = 1f;
					Var27.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
					iVar49 += 32;
					iVar49 += 8192;
					Var27.f_20 = iVar49;
					TASK::TASK_SCRIPTED_ANIMATION(0, &Var27, &Var5, &Var5, 0.25f, 0.25f);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_94, uVar4);
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
				}
			}
			break;
		
		case 3:
			if (func_478(uParam2, uParam0, uParam3, uParam1, uParam5, uParam6, uParam5) && func_721(&(uParam0->f_6), uParam7))
			{
				func_475(uParam5, uParam1, uParam3, &(uParam6->f_1), uParam4, uParam7, 1, 0);
				CAM::SET_WIDESCREEN_BORDERS(0, 0);
				HUD::CLEAR_FLOATING_HELP(1, 1);
				GlobalFunc_585(82, 1);
				GlobalFunc_7917(486824538);
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_gc_door01"), uParam5->f_109, 1, 0f, 0);
				uParam0->f_4 = 5;
				return;
			}
			break;
		
		case 7:
			if (!GlobalFunc_747(uParam1->f_10, 64))
			{
				GlobalFunc_5211(&(uParam1->f_10), 64);
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam5->f_117, uParam5->f_120, 4f, 0, 1))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam5->f_113, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam5->f_116);
				}
				func_471(uParam5);
			}
			if (GlobalFunc_5182(&(uParam1->f_27)) >= 0.35f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				func_470(uParam1, 128);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4963(&(uParam1->f_27), 0f);
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				}
				GlobalFunc_5770();
				func_458();
				uParam0->f_329 = -1;
				if (uParam1->f_14 == 0)
				{
					GlobalFunc_159("SH_MULT_HG", -1);
				}
				else if ((uParam1->f_14 == 1 || uParam1->f_14 == 2) || uParam1->f_14 == 4)
				{
					GlobalFunc_159("SH_MULT_AUTO", -1);
				}
				else if (uParam1->f_14 == 5)
				{
					GlobalFunc_159("SH_MULT_HEAVY", -1);
				}
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
				uParam0->f_4 = 8;
			}
			break;
		
		case 8:
			if (GlobalFunc_5182(&(uParam1->f_27)) > 2.25f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
			func_456();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (GlobalFunc_8004(&(uParam7->f_194), 1, 0, 1, 3, 0, 1))
			{
				func_451(&(uParam1->f_34));
				func_470(uParam1, 2);
				func_470(uParam1, 1);
				uParam1->f_9 = 0;
				uParam0->f_4 = 9;
			}
			break;
		
		case 9:
			func_427(uParam1, uParam4, uParam6, 0);
			if (GlobalFunc_747(uParam1->f_10, 64))
			{
				GlobalFunc_5312(&(uParam1->f_10), 64);
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam7->f_194, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (GlobalFunc_226(&(uParam1->f_24)))
			{
				if (GlobalFunc_5182(&(uParam1->f_24)) > 1f)
				{
					func_492(uParam1, 128);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(14);
				}
			}
			if (func_423(uParam1, uParam3))
			{
				HUD::CLEAR_HELP(1);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f);
				func_422(uParam3, uParam1->f_6);
				uParam0->f_8 = 1;
				GlobalFunc_4963(&(uParam1->f_27), 0f);
				func_421(uParam1);
				iVar50 = uParam1->f_40.f_1;
				iVar51 = func_420(uParam4[uParam1->f_14 /*41*/][uParam1->f_16 /*10*/], 1);
				if (!func_493(uParam1, 65536))
				{
					iVar50 = (iVar50 + uParam1->f_40);
				}
				bVar52 = iVar50 >= iVar51;
				func_417(uParam1, uParam7, bVar52);
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				if (!bVar52)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "HUD_AWARDS", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SHOOTING_RANGE_ROUND_OVER", "HUD_AWARDS", 1);
				}
				uParam0->f_4 = 10;
				return;
			}
			if (!func_493(uParam1, 131072))
			{
				if (((((!GlobalFunc_74("SHR_EXIT_HELP") && !GlobalFunc_74("SHR_DEST_LOWHIT")) && !GlobalFunc_74("SH_MULT_HG")) && !GlobalFunc_74("SH_MULT_AUTO")) && !GlobalFunc_74("SH_MULT_HEAVY")) && !GlobalFunc_74("SHR_H_LEAVE"))
				{
					GlobalFunc_Display_Help_Text("SHR_EXIT_HELP");
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 51))
				{
					func_414("QUIT", 1);
					uParam0->f_5 = 9;
					func_409(uParam0, uParam1, uParam7, 1);
				}
			}
			func_407(uParam1);
			func_406(uParam1, uParam3, uParam5);
			func_404(uParam1, uParam3, uParam5);
			func_403(uParam1);
			if (uParam1->f_14 != 6)
			{
				iVar53 = uParam1->f_43;
				bVar54 = false;
				iVar55 = MISC::GET_GAME_TIMER();
				if (iVar55 > uParam1->f_44)
				{
					uParam1->f_43 = 0;
					bVar54 = true;
				}
				iVar0 = 0;
				while (iVar0 < uParam1->f_6)
				{
					if (func_402(*(uParam3[iVar0 /*33*/]), 128) && !func_402(*(uParam3[iVar0 /*33*/]), 256))
					{
						if (func_380(uParam3[iVar0 /*33*/], uParam5, uParam1, uParam6, uParam5, 0))
						{
							iVar53++;
							uParam1->f_44 = iVar55 + 30;
							bVar54 = false;
						}
					}
					iVar0++;
				}
				if (!bVar54)
				{
					uParam1->f_43 = iVar53;
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_94);
				if (uParam1->f_40.f_2 == 1)
				{
					if (iVar53 != 0)
					{
						func_377(iVar53, 18, uParam6);
					}
				}
				else if (uParam1->f_40.f_2 == 2)
				{
					bVar57 = ((uParam1->f_13 == 15 || uParam1->f_13 == 16) || uParam1->f_13 == 17);
					if (!bVar57 && !bVar54)
					{
						return;
					}
					if (bVar57)
					{
						iVar56 = 100;
					}
					else
					{
						iVar56 = 1;
					}
					if (iVar53 == 1)
					{
						func_377((1 * iVar56), 3, uParam6);
						uParam1->f_40.f_1 = (uParam1->f_40.f_1 + (1 * iVar56));
						func_376(uParam1, 4);
					}
					else if (iVar53 == 2)
					{
						func_377((3 * iVar56), 18, uParam6);
						uParam1->f_40.f_1 = (uParam1->f_40.f_1 + (3 * iVar56));
						func_376(uParam1, 3);
					}
					else if (iVar53 == 3)
					{
						func_377((5 * iVar56), 9, uParam6);
						uParam1->f_40.f_1 = (uParam1->f_40.f_1 + (5 * iVar56));
						func_376(uParam1, 2);
					}
					else if (iVar53 == 4)
					{
						func_377((7 * iVar56), 6, uParam6);
						uParam1->f_40.f_1 = (uParam1->f_40.f_1 + (7 * iVar56));
						func_376(uParam1, 1);
					}
					else if (iVar53 == 5)
					{
						func_377((7 * iVar56), 12, uParam6);
						uParam1->f_40.f_1 = (uParam1->f_40.f_1 + (7 * iVar56));
						func_376(uParam1, 1);
					}
					else if (iVar53 == 6)
					{
						func_377((7 * iVar56), 1, uParam6);
						uParam1->f_40.f_1 = (uParam1->f_40.f_1 + (7 * iVar56));
						func_376(uParam1, 1);
					}
				}
				else if (uParam1->f_40.f_2 == 5)
				{
					if (uParam1->f_34.f_5)
					{
						func_375(&(uParam1->f_34));
						if (GlobalFunc_2422(&(uParam1->f_34)) > 0)
						{
							uParam1->f_34.f_5 = 0;
							*uParam1++;
						}
					}
					func_372(&(uParam1->f_34));
				}
				func_470(uParam1, 2);
				if (uParam1->f_14 == 3)
				{
					uParam1->f_34.f_5 = 0;
				}
				if (uParam1->f_34.f_5)
				{
					func_371(&(uParam1->f_34));
					uParam1->f_34.f_5 = 0;
					func_370(&(uParam1->f_34));
				}
				else if (func_493(uParam1, 1) && uParam1->f_40.f_2 != 5)
				{
					if (func_369(uParam1))
					{
						func_451(&(uParam1->f_34));
					}
				}
				else if (GlobalFunc_1086(&(uParam1->f_34)) <= 0 && uParam1->f_40.f_2 == 5)
				{
					func_451(&(uParam1->f_34));
				}
				if (func_493(uParam1, 1))
				{
					*uParam1++;
				}
				func_367(uParam1);
				func_470(uParam1, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < uParam1->f_6)
				{
					if (func_402(*(uParam3[iVar0 /*33*/]), 128) && !func_402(*(uParam3[iVar0 /*33*/]), 256))
					{
						if (func_380(uParam3[iVar0 /*33*/], uParam5, uParam1, uParam6, uParam5, 0))
						{
							uParam1->f_9++;
						}
					}
					iVar0++;
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_94);
				func_470(uParam1, 2);
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f) && !func_493(uParam1, 1))
				{
					*uParam1++;
					func_492(uParam1, 1);
				}
				else if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f) && func_493(uParam1, 1))
				{
					if (uParam1->f_9 == 1)
					{
						func_377(1, 3, uParam6);
						uParam1->f_40.f_1++;
						func_376(uParam1, 4);
					}
					else if (uParam1->f_9 == 2)
					{
						func_377(3, 18, uParam6);
						uParam1->f_40.f_1 += 3;
						func_376(uParam1, 3);
					}
					else if (uParam1->f_9 == 3)
					{
						func_377(5, 9, uParam6);
						uParam1->f_40.f_1 += 5;
						func_376(uParam1, 2);
					}
					else if (uParam1->f_9 == 4)
					{
						func_377(7, 6, uParam6);
						uParam1->f_40.f_1 += 7;
						func_376(uParam1, 1);
					}
					else if (uParam1->f_9 == 5)
					{
						func_377(7, 12, uParam6);
						uParam1->f_40.f_1 += 7;
						func_376(uParam1, 1);
					}
					else if (uParam1->f_9 == 6)
					{
						func_377(7, 1, uParam6);
						uParam1->f_40.f_1 += 7;
						func_376(uParam1, 1);
					}
					func_470(uParam1, 1);
					uParam1->f_9 = 0;
				}
				func_367(uParam1);
			}
			break;
		
		case 10:
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
			func_427(uParam1, uParam4, uParam6, 1);
			if (!PED::IS_PED_INJURED(iLocal_94))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_94, joaat("weapon_unarmed"), 0);
			}
			if (GlobalFunc_226(&(uParam7->f_181.f_2)))
			{
				if (GlobalFunc_5182(&(uParam7->f_181.f_2)) > 1f)
				{
					if (!func_366(uParam7, 4))
					{
						iVar58 = func_365((uParam1->f_40.f_1 + uParam1->f_40), uParam4[uParam1->f_14 /*41*/][uParam1->f_16 /*10*/]);
						uParam7->f_1192 = func_363(iVar58, uParam1);
						func_362(uParam7, 4);
					}
				}
			}
			if (func_360(uParam7))
			{
				if (uParam0->f_38 == 0)
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_AMMUNATION_GUN_RANGE", 1);
				}
				else
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_AMMUNATION_CYPRESS_FLATS_GUN_RANGE", 1);
				}
				if (uParam1->f_40.f_2 == 0)
				{
					func_359(uParam1);
				}
				iVar59 = GlobalFunc_8315();
				if (iVar59 == 2 || iVar59 == 0)
				{
					if (func_358(uParam1, uParam4[uParam1->f_14 /*41*/][uParam1->f_16 /*10*/]))
					{
						if (uParam1->f_40.f_1 > func_357(iLocal_95, uParam1->f_13))
						{
							PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::GET_PLAYER_INDEX(), 0.1f, 1);
						}
						else
						{
							PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::GET_PLAYER_INDEX(), 0.05f, 1);
						}
					}
				}
				func_356(uParam1->f_13, uParam1->f_40.f_1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uParam1->f_4);
				if (func_352(uParam4[uParam1->f_14 /*41*/][uParam1->f_16 /*10*/], uParam1))
				{
					uParam0->f_4 = 11;
				}
				else
				{
					uParam0->f_4 = 5;
				}
				func_349(&(uParam1->f_40), uParam1);
				func_347(uParam1, uParam4[uParam1->f_14 /*41*/][uParam1->f_16 /*10*/]);
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					func_337(&(uParam0->f_323), uParam1, uParam4[uParam1->f_14 /*41*/][uParam1->f_16 /*10*/]);
					uParam0->f_327 = 1;
					uParam0->f_328 = 1;
					uParam0->f_329 = uParam1->f_13;
				}
				else
				{
					uParam0->f_328 = 0;
					uParam0->f_327 = 0;
					uParam0->f_329 = uParam1->f_13;
				}
				func_336(uParam7, 4);
				if (uParam7->f_1192 != -1)
				{
					HUD::THEFEED_REMOVE_ITEM(uParam7->f_1192);
					uParam7->f_1192 = -1;
				}
				func_475(uParam5, uParam1, uParam3, &(uParam6->f_1), uParam4, uParam7, 0, 0);
				func_335(uParam0, uParam7);
				func_331(uParam0, uParam1->f_14, uParam7);
				func_330(uParam4, uParam0, uParam1->f_14, uParam7);
				func_291(&(uParam7->f_199));
				uParam0->f_8 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				GlobalFunc_4963(&(uParam1->f_27), 0f);
				func_281(&(uParam0->f_39));
				GlobalFunc_842(1, 0);
				GlobalFunc_4907();
				func_265();
			}
			break;
		
		case 11:
			uParam0->f_4 = 5;
			break;
		
		case 13:
			func_497(0);
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam5->f_113, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam5->f_116);
				MISC::SET_GAME_PAUSED(0);
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_94))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_94, joaat("weapon_unarmed"), 0);
				}
				func_281(&(uParam0->f_39));
				func_422(uParam3, uParam1->f_6);
				func_475(uParam5, uParam1, uParam3, &(uParam6->f_1), uParam4, uParam7, 0, 1);
				func_335(uParam0, uParam7);
				func_331(uParam0, uParam1->f_14, uParam7);
				func_330(uParam4, uParam0, uParam1->f_14, uParam7);
				func_291(&(uParam7->f_199));
				uParam0->f_8 = 1;
				if (uParam1->f_11 != -1)
				{
					AUDIO::STOP_SOUND(uParam1->f_11);
					AUDIO::RELEASE_SOUND_ID(uParam1->f_11);
					uParam1->f_11 = -1;
				}
				uParam0->f_328 = 1;
				uParam0->f_327 = 0;
				uParam0->f_329 = -1;
				uParam0->f_323 = -1;
				if (uParam0->f_38 == 0)
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_AMMUNATION_GUN_RANGE", 1);
				}
				else
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_AMMUNATION_CYPRESS_FLATS_GUN_RANGE", 1);
				}
				uParam0->f_4 = 5;
				return;
			}
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
			{
				func_409(uParam0, uParam1, uParam7, 0);
			}
			break;
		
		case 16:
			if (SYSTEM::TIMERA() > 1000)
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_94, uParam5->f_126, 0, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_94, uParam5->f_129);
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_gc_door01"), uParam5->f_109, 0, 0f, 0);
				if (!CAM::DOES_CAM_EXIST(uParam2->f_5))
				{
					uParam2->f_5 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				CAM::SET_CAM_COORD(uParam2->f_5, uParam5->f_136);
				CAM::SET_CAM_ROT(uParam2->f_5, uParam5->f_139, 2);
				CAM::SET_CAM_FOV(uParam2->f_5, 42.3427f);
				CAM::SET_CAM_ACTIVE(uParam2->f_5, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_PARAMS(uParam2->f_5, uParam5->f_142, uParam5->f_145, 42.3427f, 2500, 1, 1, 2);
				PED::CLEAR_PED_PROP(iLocal_94, 0);
				PED::CLEAR_PED_PROP(iLocal_94, 1);
				func_3(iLocal_94);
				if (uParam0->f_38 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar60);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 826.8521f, -2160.579f, 28.619f, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 826.077f, -2158.708f, 28.619f, 1f, 20000, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uVar60);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_94, uVar60);
					TASK::CLEAR_SEQUENCE_TASK(&uVar60);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_94, uParam5->f_130, 1f, 20000, 1048576000, 0, 1193033728);
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_94, 104, 1);
				PED::SET_PED_RESET_FLAG(iLocal_94, 60, 1);
				SYSTEM::SETTIMERA(0);
				uParam0->f_4 = 17;
			}
			break;
		
		case 17:
			PED::SET_PED_RESET_FLAG(iLocal_94, 60, 1);
			if (SYSTEM::TIMERA() > 2500)
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_gc_door01"), uParam5->f_109, 1, 0f, 0);
				CAM::SET_CAM_COORD(uParam2->f_5, uParam5->f_148);
				CAM::SET_CAM_ROT(uParam2->f_5, uParam5->f_151, 2);
				CAM::SET_CAM_ACTIVE(uParam2->f_5, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				uParam0->f_4 = 18;
			}
			break;
		
		case 18:
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_gc_door01"), uParam5->f_109, 0, 0f, 0);
			if (!GlobalFunc_268())
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 20f, 3, 0);
			}
			func_800(uParam5, uParam3, uParam0, uParam7, uParam8, 0);
			break;
	}
}


void func_3(int iParam0)//Position - 0x2021
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_106(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11154(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11154(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11154(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11154(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_106(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}







































































































void func_106(int iParam0, var uParam1, bool bParam2)//Position - 0x1C18A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11155(iParam0, iVar1, &iVar2, 0))
			{
				func_246(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11153(iParam0, iVar1, &iVar2))
			{
				func_246(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11292(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11292(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}












































































































































int func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x46C4C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11234(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11154(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11155(iParam0, iVar10, &iVar4, 1))
							{
								func_246(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_246(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_246(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_246(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_246(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_246(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_246(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11155(iParam0, iVar10, &iVar4, 0))
		{
			func_246(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11153(iParam0, iVar10, &iVar4))
		{
			func_246(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}



















void func_265()//Position - 0x49590
{
	func_272();
	if (!GlobalFunc_747(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270, 32))
	{
		if (func_270())
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			GlobalFunc_159("SHR_DISCO_G", -1);
			GlobalFunc_5211(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270), 32);
			GlobalFunc_5211(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270), 16);
			GlobalFunc_5211(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270), 8);
		}
		else if (!GlobalFunc_747(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270, 16))
		{
			if (func_268())
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				GlobalFunc_159("SHR_DISCO_S", -1);
				GlobalFunc_5211(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270), 16);
				GlobalFunc_5211(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270), 8);
			}
			else if (!GlobalFunc_747(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270, 8))
			{
				if (func_266())
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					GlobalFunc_159("SHR_DISCO_B", -1);
					GlobalFunc_5211(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270), 8);
				}
			}
		}
	}
}

bool func_266()//Position - 0x496C3
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = ((func_267(0) && func_267(1)) && func_267(2));
	uVar1 = ((func_267(3) && func_267(4)) && func_267(5));
	uVar2 = ((func_267(9) && func_267(10)) && func_267(11));
	uVar3 = ((func_267(6) && func_267(7)) && func_267(8));
	uVar4 = ((func_267(12) && func_267(13)) && func_267(14));
	uVar5 = ((func_267(15) && func_267(16)) && func_267(17));
	return (((((uVar0 && uVar1) && uVar2) && uVar3) && uVar4) && uVar5);
}

bool func_267(int iParam0)//Position - 0x4979C
{
	return ((Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3 == 3 || Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3 == 2) || Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3 == 1);
}

bool func_268()//Position - 0x497F2
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = ((func_269(0) && func_269(1)) && func_269(2));
	uVar1 = ((func_269(3) && func_269(4)) && func_269(5));
	uVar2 = ((func_269(9) && func_269(10)) && func_269(11));
	uVar3 = ((func_269(6) && func_269(7)) && func_269(8));
	uVar4 = ((func_269(12) && func_269(13)) && func_269(14));
	uVar5 = ((func_269(15) && func_269(16)) && func_269(17));
	return (((((uVar0 && uVar1) && uVar2) && uVar3) && uVar4) && uVar5);
}

bool func_269(int iParam0)//Position - 0x498CB
{
	return (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3 == 3 || Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3 == 2);
}

bool func_270()//Position - 0x49905
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = ((func_271(0) && func_271(1)) && func_271(2));
	uVar1 = ((func_271(3) && func_271(4)) && func_271(5));
	uVar2 = ((func_271(9) && func_271(10)) && func_271(11));
	uVar3 = ((func_271(6) && func_271(7)) && func_271(8));
	uVar4 = ((func_271(12) && func_271(13)) && func_271(14));
	uVar5 = ((func_271(15) && func_271(16)) && func_271(17));
	return (((((uVar0 && uVar1) && uVar2) && uVar3) && uVar4) && uVar5);
}

bool func_271(int iParam0)//Position - 0x499DE
{
	return Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3 == 3;
}

bool func_272()//Position - 0x499FC
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = ((func_277(0) && func_277(1)) && func_277(2));
	bVar1 = ((func_277(3) && func_277(4)) && func_277(5));
	bVar2 = ((func_277(9) && func_277(10)) && func_277(11));
	bVar3 = ((func_277(6) && func_277(7)) && func_277(8));
	bVar4 = ((func_277(12) && func_277(13)) && func_277(14));
	bVar5 = ((func_277(15) && func_277(16)) && func_277(17));
	if (bVar0)
	{
		GlobalFunc_7610(119, 0, 0);
	}
	if (bVar1)
	{
		GlobalFunc_7610(120, 0, 0);
	}
	if (bVar2)
	{
		GlobalFunc_7610(121, 0, 0);
	}
	if (bVar3)
	{
		GlobalFunc_7610(124, 0, 0);
	}
	if (bVar4)
	{
		GlobalFunc_7610(122, 0, 0);
	}
	if (bVar5)
	{
		GlobalFunc_7610(123, 0, 0);
	}
	return (((((bVar0 && bVar1) && bVar2) && bVar3) && bVar4) && bVar5);
}





bool func_277(int iParam0)//Position - 0x4A37C
{
	return Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_2;
}




void func_281(var uParam0)//Position - 0x4A426
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94))
	{
		func_290();
		GlobalFunc_6789(iLocal_94, uParam0, 1);
	}
}









void func_290()//Position - 0x4B7C4
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_94, 1);
}

void func_291(var uParam0)//Position - 0x4B7D3
{
	GlobalFunc_3491(uParam0);
	GlobalFunc_6537(&(uParam0->f_741));
	bLocal_541 = GRAPHICS::GET_IS_WIDESCREEN();
	func_292(uParam0);
}

void func_292(var uParam0)//Position - 0x4B7F7
{
	bool bVar0;
	float fVar1;
	int iVar2;
	
	bVar0 = GRAPHICS::GET_IS_WIDESCREEN();
	fVar1 = GlobalFunc_4633(0.0047f, 1280, 1);
	GlobalFunc_6536(&(uParam0->f_316[0 /*2*/]), 262f, 69f, 1);
	GlobalFunc_6536(&(uParam0->f_316[1 /*2*/]), 384f, (125f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[2 /*2*/]), 640f, (125f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[3 /*2*/]), 896f, (125f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[4 /*2*/]), (257f + fVar1), 296f, 1);
	GlobalFunc_6536(&(uParam0->f_316[5 /*2*/]), (257f + fVar1), 323f, 1);
	GlobalFunc_6536(&(uParam0->f_316[6 /*2*/]), (257f + fVar1), 350f, 1);
	GlobalFunc_6536(&(uParam0->f_316[7 /*2*/]), (257f + fVar1), 377f, 1);
	GlobalFunc_6536(&(uParam0->f_316[8 /*2*/]), (257f + fVar1), 404f, 1);
	GlobalFunc_6536(&(uParam0->f_316[9 /*2*/]), (257f + fVar1), 431f, 1);
	GlobalFunc_6536(&(uParam0->f_316[10 /*2*/]), (257f + fVar1), 458f, 1);
	GlobalFunc_6536(&(uParam0->f_316[11 /*2*/]), (257f + fVar1), 485f, 1);
	GlobalFunc_6536(&(uParam0->f_316[12 /*2*/]), (257f + fVar1), 512f, 1);
	GlobalFunc_6536(&(uParam0->f_316[13 /*2*/]), (257f + fVar1), 539f, 1);
	GlobalFunc_6536(&(uParam0->f_316[14 /*2*/]), (257f + fVar1), 566f, 1);
	GlobalFunc_6536(&(uParam0->f_316[15 /*2*/]), (513f + fVar1), 296f, 1);
	GlobalFunc_6536(&(uParam0->f_316[16 /*2*/]), (513f + fVar1), 377f, 1);
	GlobalFunc_6536(&(uParam0->f_316[17 /*2*/]), (513f + fVar1), 458f, 1);
	GlobalFunc_6536(&(uParam0->f_316[18 /*2*/]), (513f + fVar1), 539f, 1);
	GlobalFunc_6536(&(uParam0->f_316[19 /*2*/]), (513f + fVar1), 319f, 1);
	GlobalFunc_6536(&(uParam0->f_316[20 /*2*/]), (513f + fVar1), 400f, 1);
	GlobalFunc_6536(&(uParam0->f_316[21 /*2*/]), (513f + fVar1), 481f, 1);
	GlobalFunc_6536(&(uParam0->f_316[22 /*2*/]), (513f + fVar1), 562f, 1);
	GlobalFunc_6536(&(uParam0->f_316[23 /*2*/]), (769f + fVar1), (297f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[24 /*2*/]), (769f + fVar1), (324f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[25 /*2*/]), (769f + fVar1), (351f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[26 /*2*/]), (769f + fVar1), (378f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[27 /*2*/]), (769f + fVar1), (405f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[28 /*2*/]), (769f + fVar1), (432f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[29 /*2*/]), (769f + fVar1), (459f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[30 /*2*/]), (769f + fVar1), (486f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[31 /*2*/]), 1015f, (297f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[32 /*2*/]), 1015f, (324f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[33 /*2*/]), 1015f, (351f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[34 /*2*/]), 1015f, (378f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[35 /*2*/]), 1015f, (405f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[36 /*2*/]), 1015f, (432f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[37 /*2*/]), 1015f, (459f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[38 /*2*/]), 1015f, (486f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[39 /*2*/]), 982f, (487f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[40 /*2*/]), 896f, (487f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[41 /*2*/]), 810f, (487f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	uParam0->f_316[42 /*2*/] = 0.629f;
	uParam0->f_316[42 /*2*/].f_1 = 0.228f;
	uParam0->f_316[43 /*2*/] = 0.629f;
	uParam0->f_316[43 /*2*/].f_1 = 0.272f;
	uParam0->f_316[44 /*2*/] = 0.629f;
	uParam0->f_316[44 /*2*/].f_1 = 0.316f;
	uParam0->f_316[45 /*2*/] = 0.629f;
	uParam0->f_316[45 /*2*/].f_1 = 0.36f;
	uParam0->f_316[46 /*2*/] = 0.625f;
	uParam0->f_316[46 /*2*/].f_1 = 0.33f;
	uParam0->f_316[47 /*2*/] = 0.673f;
	uParam0->f_316[47 /*2*/].f_1 = 0.33f;
	uParam0->f_316[48 /*2*/] = 0.721f;
	uParam0->f_316[48 /*2*/].f_1 = 0.33f;
	uParam0->f_316[49 /*2*/] = 0.769f;
	uParam0->f_316[49 /*2*/].f_1 = 0.33f;
	func_301(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	GlobalFunc_4630(uParam0[0 /*9*/], 0, 0, 0, 102);
	func_301(uParam0[1 /*9*/], 384f, 224f, 256f, 256f, 0);
	GlobalFunc_4630(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[2 /*9*/], 640f, 224f, 256f, 256f, 0);
	GlobalFunc_4630(uParam0[2 /*9*/], 255, 255, 255, 255);
	(*uParam0)[3 /*9*/] = 0.742f;
	(uParam0[3 /*9*/])->f_1 = 0.308f;
	(uParam0[3 /*9*/])->f_2 = 0.1f;
	(uParam0[3 /*9*/])->f_3 = 0.178f;
	GlobalFunc_4630(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[4 /*9*/], 496f, 306f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[5 /*9*/], 496f, 333f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[6 /*9*/], 496f, 360f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[7 /*9*/], 496f, 387f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[8 /*9*/], 496f, 414f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[8 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[9 /*9*/], 496f, 441f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[10 /*9*/], 496f, 468f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[10 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[11 /*9*/], 496f, 495f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[12 /*9*/], 496f, 522f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[13 /*9*/], 496f, 549f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[14 /*9*/], 496f, 576f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[14 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[15 /*9*/], 752f, 306f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[15 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[16 /*9*/], 752f, 387f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[16 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[17 /*9*/], 752f, 468f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[17 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[18 /*9*/], 752f, 549f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[18 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[19 /*9*/], 1005f, 314f, 26f, 26f, 0);
	GlobalFunc_4630(uParam0[19 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[20 /*9*/], 941.5f, 401.5f, 80f, 80f, 1);
	GlobalFunc_4630(uParam0[20 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[21 /*9*/], 856f, 401.5f, 80f, 80f, 1);
	GlobalFunc_4630(uParam0[21 /*9*/], 255, 255, 255, 255);
	func_301(uParam0[22 /*9*/], 770.5f, 401.5f, 80f, 80f, 1);
	GlobalFunc_4630(uParam0[22 /*9*/], 255, 255, 255, 255);
	(*uParam0)[23 /*9*/] = 0.617f;
	(uParam0[23 /*9*/])->f_1 = 0.242f;
	(uParam0[23 /*9*/])->f_2 = 0.025f;
	(uParam0[23 /*9*/])->f_3 = 0.044f;
	GlobalFunc_4630(uParam0[23 /*9*/], 151, 124, 19, 255);
	(*uParam0)[24 /*9*/] = 0.617f;
	(uParam0[24 /*9*/])->f_1 = 0.286f;
	(uParam0[24 /*9*/])->f_2 = 0.025f;
	(uParam0[24 /*9*/])->f_3 = 0.044f;
	GlobalFunc_4630(uParam0[24 /*9*/], 112, 33, 35, 255);
	(*uParam0)[25 /*9*/] = 0.617f;
	(uParam0[25 /*9*/])->f_1 = 0.33f;
	(uParam0[25 /*9*/])->f_2 = 0.025f;
	(uParam0[25 /*9*/])->f_3 = 0.044f;
	GlobalFunc_4630(uParam0[25 /*9*/], 49, 113, 107, 255);
	(*uParam0)[26 /*9*/] = 0.617f;
	(uParam0[26 /*9*/])->f_1 = 0.374f;
	(uParam0[26 /*9*/])->f_2 = 0.025f;
	(uParam0[26 /*9*/])->f_3 = 0.044f;
	GlobalFunc_4630(uParam0[26 /*9*/], 48, 48, 48, 255);
	GlobalFunc_7543(&(uParam0->f_420[3 /*8*/]), 257f, 115f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[3 /*8*/]), 157, 46, 26, 255);
	GlobalFunc_7543(&(uParam0->f_420[4 /*8*/]), 513f, 115f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[4 /*8*/]), 157, 46, 26, 255);
	GlobalFunc_7543(&(uParam0->f_420[5 /*8*/]), 769f, 115f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[5 /*8*/]), 157, 46, 26, 255);
	GlobalFunc_7543(&(uParam0->f_420[0 /*8*/]), 257f, 120f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[0 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[1 /*8*/]), 513f, 120f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[1 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[2 /*8*/]), 769f, 120f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[2 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[6 /*8*/]), 257f, 159f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[6 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[7 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[8 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[9 /*8*/]), 257f, 294f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[9 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[10 /*8*/]), 257f, 321f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[10 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[11 /*8*/]), 257f, 348f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[11 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[12 /*8*/]), 257f, 375f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[12 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[13 /*8*/]), 257f, 402f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[13 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[14 /*8*/]), 257f, 429f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[14 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[15 /*8*/]), 257f, 456f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[15 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[16 /*8*/]), 257f, 483f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[16 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[17 /*8*/]), 257f, 510f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[17 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[18 /*8*/]), 257f, 537f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[18 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[19 /*8*/]), 257f, 564f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[19 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[24 /*8*/]), 513f, 294f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[24 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[25 /*8*/]), 513f, 375f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[25 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[26 /*8*/]), 513f, 456f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[26 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[27 /*8*/]), 513f, 537f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[27 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[28 /*8*/]), 513f, 319f, 254f, 54f, 1);
	GlobalFunc_3480(&(uParam0->f_420[28 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[29 /*8*/]), 513f, 400f, 254f, 54f, 1);
	GlobalFunc_3480(&(uParam0->f_420[29 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[30 /*8*/]), 513f, 481f, 254f, 54f, 1);
	GlobalFunc_3480(&(uParam0->f_420[30 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[31 /*8*/]), 513f, 562f, 254f, 54f, 1);
	GlobalFunc_3480(&(uParam0->f_420[31 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[20 /*8*/]), 769f, 294f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[20 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[21 /*8*/]), 769f, 321f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[21 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[22 /*8*/]), 769f, 348f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[22 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[23 /*8*/]), 769f, 375f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[23 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[32 /*8*/]), 940f, 402f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[32 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[33 /*8*/]), 854f, 402f, 84f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[33 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[34 /*8*/]), 769f, 402f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[34 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[35 /*8*/]), 940f, 483f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[35 /*8*/]), 107, 1);
	GlobalFunc_7543(&(uParam0->f_420[36 /*8*/]), 854f, 483f, 84f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[36 /*8*/]), 108, 1);
	GlobalFunc_7543(&(uParam0->f_420[37 /*8*/]), 769f, 483f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[37 /*8*/]), 109, 1);
	if (!bVar0)
	{
		iVar2 = 0;
		while (iVar2 < 27)
		{
			(*uParam0)[iVar2 /*9*/] = ((((*uParam0)[iVar2 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar2 /*9*/])->f_2 = ((uParam0[iVar2 /*9*/])->f_2 * 1.33f);
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < 50)
		{
			uParam0->f_316[iVar2 /*2*/] = (((uParam0->f_316[iVar2 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < 38)
		{
			uParam0->f_420[iVar2 /*8*/] = (((uParam0->f_420[iVar2 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_420[iVar2 /*8*/].f_2 = (uParam0->f_420[iVar2 /*8*/].f_2 * 1.33f);
			iVar2++;
		}
	}
	uParam0->f_986 = 1;
}









void func_301(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x4CD12
{
	GlobalFunc_6535(fParam0, fParam3, fParam4);
	GlobalFunc_6534(fParam0, fParam1, fParam2, bParam5);
}





























void func_330(var uParam0, var uParam1, int iParam2, var uParam3)//Position - 0x4D5B9
{
	struct<4> Var0;
	
	uParam3->f_18[0] = (uParam3->f_1[iParam2] || func_706(uParam1));
	uParam3->f_18[1] = (func_707((uParam0[iParam2 /*41*/][1 /*10*/])->f_1, 0) || func_706(uParam1));
	uParam3->f_18[2] = (func_707((uParam0[iParam2 /*41*/][2 /*10*/])->f_1, 0) || func_706(uParam1));
	if (uParam3->f_1.f_9 == 6 && uParam1->f_17)
	{
		uParam3->f_18[3] = (func_707((uParam0[iParam2 /*41*/][3 /*10*/])->f_1, 0) || func_706(uParam1));
		uParam3->f_18.f_35 = 4;
	}
	else
	{
		uParam3->f_18[3] = 0;
		uParam3->f_18.f_35 = 3;
	}
	StringCopy(&Var0, "SHR_", 16);
	switch (iParam2)
	{
		case 0:
			uParam3->f_18.f_30[0] = 0;
			uParam3->f_18.f_30[1] = 1;
			uParam3->f_18.f_30[2] = 2;
			StringConCat(&Var0, "PIS", 16);
			break;
		
		case 1:
			uParam3->f_18.f_30[0] = 3;
			uParam3->f_18.f_30[1] = 4;
			uParam3->f_18.f_30[2] = 5;
			StringConCat(&Var0, "SMG", 16);
			break;
		
		case 2:
			uParam3->f_18.f_30[0] = 9;
			uParam3->f_18.f_30[1] = 10;
			uParam3->f_18.f_30[2] = 11;
			StringConCat(&Var0, "AR", 16);
			break;
		
		case 3:
			uParam3->f_18.f_30[0] = 6;
			uParam3->f_18.f_30[1] = 7;
			uParam3->f_18.f_30[2] = 8;
			StringConCat(&Var0, "SHO", 16);
			break;
		
		case 4:
			uParam3->f_18.f_30[0] = 12;
			uParam3->f_18.f_30[1] = 13;
			uParam3->f_18.f_30[2] = 14;
			StringConCat(&Var0, "LMG", 16);
			break;
		
		case 5:
			uParam3->f_18.f_30[0] = 15;
			uParam3->f_18.f_30[1] = 16;
			uParam3->f_18.f_30[2] = 17;
			StringConCat(&Var0, "MG", 16);
			break;
		
		case 6:
			uParam3->f_18.f_30[0] = 18;
			uParam3->f_18.f_30[1] = 19;
			uParam3->f_18.f_30[2] = 20;
			uParam3->f_18.f_30[3] = 21;
			StringConCat(&Var0, "RG", 16);
			break;
	}
	MemCopy(&(uParam3->f_18.f_5[0 /*6*/]), {Var0}, 6);
	MemCopy(&(uParam3->f_18.f_5[1 /*6*/]), {Var0}, 6);
	MemCopy(&(uParam3->f_18.f_5[2 /*6*/]), {Var0}, 6);
	MemCopy(&(uParam3->f_18.f_5[3 /*6*/]), {Var0}, 6);
	StringConCat(&(uParam3->f_18.f_5[0 /*6*/]), "_C1_DESC", 24);
	StringConCat(&(uParam3->f_18.f_5[1 /*6*/]), "_C2_DESC", 24);
	StringConCat(&(uParam3->f_18.f_5[2 /*6*/]), "_C3_DESC", 24);
	StringConCat(&(uParam3->f_18.f_5[3 /*6*/]), "_C4_DESC", 24);
}

void func_331(var uParam0, int iParam1, var uParam2)//Position - 0x4D86A
{
	int iVar0;
	struct<7> Var1;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = -100;
	if (uParam2->f_11.f_6 != 0)
	{
		iVar0 = uParam2->f_11.f_6;
	}
	Var1 = 4;
	uParam2->f_11 = { Var1 };
	bVar8 = func_706(uParam0);
	if (iParam1 == 0)
	{
		func_334(uParam0, 1, 1, uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(0, 1)), uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(0, 2)), uParam2, 0);
		if (uParam0->f_12)
		{
			func_334(uParam0, 1, (bVar8 || func_332(0, 3)), uParam2, 0);
		}
	}
	else if (iParam1 == 1)
	{
		func_334(uParam0, 1, (bVar8 || func_332(1, 0)), uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(1, 1)), uParam2, 0);
		if (uParam0->f_13)
		{
			func_334(uParam0, 1, (bVar8 || func_332(1, 2)), uParam2, 0);
		}
	}
	else if (iParam1 == 2)
	{
		func_334(uParam0, 1, (bVar8 || func_332(2, 0)), uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(2, 1)), uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(2, 2)), uParam2, 0);
		if (uParam0->f_14)
		{
			func_334(uParam0, 1, (bVar8 || func_332(2, 3)), uParam2, 0);
		}
	}
	else if (iParam1 == 3)
	{
		func_334(uParam0, 1, (bVar8 || func_332(3, 0)), uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(3, 1)), uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(3, 2)), uParam2, 0);
		if (uParam0->f_15)
		{
			func_334(uParam0, 1, (bVar8 || func_332(3, 3)), uParam2, 0);
		}
	}
	else if (iParam1 == 4)
	{
		func_334(uParam0, 1, (bVar8 || func_332(4, 0)), uParam2, 0);
		func_334(uParam0, 1, (bVar8 || func_332(4, 1)), uParam2, 0);
		if (uParam0->f_16)
		{
			func_334(uParam0, 1, (bVar8 || func_332(4, 2)), uParam2, 0);
		}
	}
	else if (iParam1 == 5)
	{
		bVar9 = ((func_277(0) && func_277(1)) && func_277(2));
		bVar10 = ((func_277(3) && func_277(4)) && func_277(5));
		bVar11 = ((func_277(9) && func_277(10)) && func_277(11));
		bVar12 = ((func_277(6) && func_277(7)) && func_277(8));
		bVar13 = ((func_277(12) && func_277(13)) && func_277(14));
		func_334(uParam0, 1, (((((bVar9 && bVar10) && bVar11) && bVar12) && bVar13) || bVar8), uParam2, 0);
	}
	else if (iParam1 == 6)
	{
		if (uParam0->f_17)
		{
			iVar14 = 1;
			iVar15 = 1;
			iVar16 = 1;
			iVar17 = 1;
			iVar18 = 1;
			iVar19 = 1;
			func_334(uParam0, 1, ((((((iVar14 && iVar15) && iVar16) && iVar17) && iVar18) && iVar19) || bVar8), uParam2, 0);
		}
	}
	if (iVar0 != -100)
	{
		uParam2->f_11.f_6 = iVar0;
	}
}

int func_332(int iParam0, int iParam1)//Position - 0x4DBC2
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 1;
			}
			else if (iParam1 == 3)
			{
				return (WEAPON::IS_WEAPON_VALID(joaat("weapon_pistol50")) && GlobalFunc_5102(joaat("weapon_pistol50")));
			}
			else if (iParam1 == 1)
			{
				if (func_277(1))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_cmbtpistol_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_cmbtpistol_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_cmbtpistol_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(0, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if ((func_271(0) || func_271(1)) || func_271(2))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_appistol_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_appistol_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_appistol_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(0, iParam1), 0))
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (func_277(0))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_microsmg_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_microsmg_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_microsmg_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(0, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (func_277(4))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_smg_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_smg_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_smg_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), -1352759032) == joaat("weapon_smg"))
				{
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				return (WEAPON::IS_WEAPON_VALID(joaat("weapon_assaultsmg")) && GlobalFunc_5102(joaat("weapon_assaultsmg")));
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (func_277(3))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_asltrifle_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_asltrifle_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_asltrifle_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(2, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (func_277(10))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_crbnrifle_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_crbnrifle_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_crbnrifle_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(2, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 3)
			{
				return (WEAPON::IS_WEAPON_VALID(-947031628) && GlobalFunc_5102(-947031628));
			}
			else if (iParam1 == 2)
			{
				if ((func_271(9) || func_271(10)) || func_271(11))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_advrifle_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_advrifle_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_advrifle_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(2, iParam1), 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				if (func_277(9))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_pump_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_pump_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_pump_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(3, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (func_277(7))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_sawnoff_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_sawnoff_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_sawnoff_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(3, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 3)
			{
				return (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpupshotgun")) && GlobalFunc_5102(joaat("weapon_bullpupshotgun")));
			}
			else if (iParam1 == 2)
			{
				if ((func_271(6) || func_271(7)) || func_271(8))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_asltshtgn_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_asltshtgn_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_asltshtgn_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(3, iParam1), 0))
				{
					return 1;
				}
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				if (func_277(6))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_mg_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_mg_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_mg_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(4, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (func_277(13))
				{
					return 1;
				}
				STATS::STAT_GET_INT(joaat("sp0_cmbtmg_heldtime"), &iVar3, -1);
				STATS::STAT_GET_INT(joaat("sp1_cmbtmg_heldtime"), &iVar4, -1);
				STATS::STAT_GET_INT(joaat("sp2_cmbtmg_heldtime"), &iVar5, -1);
				bVar0 = iVar3 > 0;
				bVar1 = iVar4 > 0;
				bVar2 = iVar5 > 0;
				if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(4, iParam1), 0))
				{
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				return (WEAPON::IS_WEAPON_VALID(-572349828) && GlobalFunc_5102(-572349828));
			}
			break;
		
		case 5:
			if ((((((((((((((func_277(0) && func_277(1)) && func_277(2)) && func_277(3)) && func_277(4)) && func_277(5)) && func_277(9)) && func_277(10)) && func_277(11)) && func_277(6)) && func_277(7)) && func_277(8)) && func_277(12)) && func_277(13)) && func_277(14))
			{
				return 1;
			}
			STATS::STAT_GET_INT(joaat("sp0_miniguns_heldtime"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("sp1_miniguns_heldtime"), &iVar4, -1);
			STATS::STAT_GET_INT(joaat("sp2_miniguns_heldtime"), &iVar5, -1);
			bVar0 = iVar3 > 0;
			bVar1 = iVar4 > 0;
			bVar2 = iVar5 > 0;
			if (((bVar0 || bVar1) || bVar2) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_333(5, iParam1), 0))
			{
				return 1;
			}
			break;
		
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_333(int iParam0, int iParam1)//Position - 0x4E3F1
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return joaat("weapon_pistol");
			}
			else if (iParam1 == 3)
			{
				return joaat("weapon_pistol50");
			}
			else if (iParam1 == 1)
			{
				return joaat("weapon_combatpistol");
			}
			else if (iParam1 == 2)
			{
				return joaat("weapon_appistol");
			}
			else if (iParam1 == 4)
			{
				return joaat("weapon_snspistol");
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return joaat("weapon_microsmg");
			}
			else if (iParam1 == 1)
			{
				return joaat("weapon_smg");
			}
			else if (iParam1 == 2)
			{
				return joaat("weapon_assaultsmg");
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return joaat("weapon_assaultrifle");
			}
			else if (iParam1 == 1)
			{
				return joaat("weapon_carbinerifle");
			}
			else if (iParam1 == 4)
			{
				return joaat("weapon_specialcarbine");
			}
			else if (iParam1 == 3)
			{
				return -947031628;
			}
			else if (iParam1 == 2)
			{
				return joaat("weapon_advancedrifle");
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return joaat("weapon_pumpshotgun");
			}
			else if (iParam1 == 1)
			{
				return joaat("weapon_sawnoffshotgun");
			}
			else if (iParam1 == 3)
			{
				return joaat("weapon_bullpupshotgun");
			}
			else if (iParam1 == 2)
			{
				return joaat("weapon_assaultshotgun");
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return joaat("weapon_mg");
			}
			else if (iParam1 == 1)
			{
				return joaat("weapon_combatmg");
			}
			else if (iParam1 == 2)
			{
				return -572349828;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return joaat("weapon_minigun");
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return joaat("weapon_railgun");
			}
			break;
	}
	return 0;
}

void func_334(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4)//Position - 0x4E5A1
{
	if (iParam1 == 0)
	{
		uParam3->f_1[uParam3->f_1.f_8] = (bParam2 || func_706(uParam0));
		uParam3->f_1.f_8++;
	}
	else if (iParam1 == 1)
	{
		uParam3->f_11[uParam3->f_11.f_5] = (bParam2 || func_706(uParam0));
		uParam3->f_11.f_5++;
	}
	else if (iParam1 == 2)
	{
		uParam3->f_18[uParam3->f_18.f_35] = (bParam2 || func_706(uParam0));
		uParam3->f_18.f_35++;
	}
}

void func_335(var uParam0, var uParam1)//Position - 0x4E639
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_706(uParam0))
	{
		uParam1->f_1[0] = 1;
		uParam1->f_1[1] = 1;
		uParam1->f_1[2] = 1;
		uParam1->f_1[3] = 1;
		uParam1->f_1[4] = 1;
		uParam1->f_1[5] = 1;
		if (uParam0->f_17)
		{
			uParam1->f_1[6] = 1;
		}
		else
		{
			uParam1->f_1[6] = 0;
		}
	}
	else
	{
		uParam1->f_1[0] = 1;
		uParam1->f_1[1] = ((func_332(1, 0) || func_332(1, 1)) || func_332(1, 2));
		uParam1->f_1[2] = (((func_332(2, 0) || func_332(2, 1)) || func_332(2, 3)) || func_332(2, 2));
		uParam1->f_1[3] = (((func_332(3, 0) || func_332(3, 1)) || func_332(3, 3)) || func_332(3, 2));
		uParam1->f_1[4] = ((func_332(4, 0) || func_332(4, 1)) || func_332(4, 2));
		bVar0 = ((func_277(0) && func_277(1)) && func_277(2));
		bVar1 = ((func_277(3) && func_277(4)) && func_277(5));
		bVar2 = ((func_277(9) && func_277(10)) && func_277(11));
		bVar3 = ((func_277(6) && func_277(7)) && func_277(8));
		bVar4 = ((func_277(12) && func_277(13)) && func_277(14));
		uParam1->f_1[5] = ((((bVar0 && bVar1) && bVar2) && bVar3) && bVar4);
		if (uParam0->f_17)
		{
			iVar5 = 1;
			iVar6 = 1;
			iVar7 = 1;
			iVar8 = 1;
			iVar9 = 1;
			iVar10 = 1;
			uParam1->f_1[6] = (((((iVar5 && iVar6) && iVar7) && iVar8) && iVar9) && iVar10);
		}
		else
		{
			uParam1->f_1[6] = 0;
		}
	}
}

void func_336(var uParam0, int iParam1)//Position - 0x4E84E
{
	uParam0->f_1191 = (uParam0->f_1191 - (uParam0->f_1191 && iParam1));
}

void func_337(var uParam0, var uParam1, var uParam2)//Position - 0x4E869
{
	*uParam0 = uParam1->f_13;
	uParam0->f_1 = *uParam1;
	uParam0->f_2 = (((uParam1->f_1 + uParam1->f_2) + uParam1->f_3) + uParam1->f_4);
	uParam0->f_3 = func_346(uParam2, uParam1->f_40.f_1);
	func_338(uParam1->f_13);
}

void func_338(int iParam0)//Position - 0x4E8AE
{
	int iVar0;
	struct<4> Var1;
	
	GlobalFunc_2420();
	iVar0 = func_344(iParam0);
	StringCopy(&Var1, "RoundType", 32);
	StringIntConCat(&Var1, iParam0, 32);
	GlobalFunc_7120(&uLocal_102, iVar0, &Var1, "", -1, -1, 0, 1);
}






int func_344(int iParam0)//Position - 0x530E6
{
	switch (iParam0)
	{
		case 0:
			return 38;
		
		case 1:
			return 39;
		
		case 2:
			return 40;
		
		case 3:
			return 41;
		
		case 4:
			return 42;
		
		case 5:
			return 43;
		
		case 6:
			return 44;
		
		case 7:
			return 45;
		
		case 8:
			return 46;
		
		case 9:
			return 47;
		
		case 10:
			return 48;
		
		case 11:
			return 49;
		
		case 12:
			return 50;
		
		case 13:
			return 51;
		
		case 14:
			return 52;
		
		case 15:
			return 53;
		
		case 16:
			return 54;
		
		case 17:
			return 55;
		
		case 18:
			return 206;
		
		case 19:
			return 207;
		
		case 20:
			return 208;
		
		case 21:
			return 209;
		
		default:
	}
	return 38;
}


int func_346(var uParam0, int iParam1)//Position - 0x53254
{
	if (iParam1 >= uParam0->f_9)
	{
		return 3;
	}
	else if (iParam1 >= uParam0->f_8)
	{
		return 2;
	}
	else if (iParam1 >= uParam0->f_7)
	{
		return 1;
	}
	return 0;
}

void func_347(var uParam0, var uParam1)//Position - 0x5328A
{
	if (func_358(uParam0, uParam1))
	{
		func_348(uParam0->f_13, 1);
	}
}

void func_348(int iParam0, int iParam1)//Position - 0x532A6
{
	Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_2 = iParam1;
}

int func_349(var uParam0, var uParam1)//Position - 0x532C4
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[uParam1->f_13 /*12*/] = uParam0->f_1;
	iVar0 = func_357(iLocal_95, uParam1->f_13);
	iVar1 = (((uParam1->f_1 + uParam1->f_2) + uParam1->f_3) + uParam1->f_4);
	fVar2 = SYSTEM::TO_FLOAT(iVar1);
	fVar3 = SYSTEM::TO_FLOAT(*uParam1);
	fVar2 = ((fVar2 / fVar3) * 100f);
	if (fVar2 > 100f)
	{
		fVar2 = 100f;
	}
	Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[uParam1->f_13 /*12*/].f_7 = fVar2;
	if (uParam0->f_1 > iVar0)
	{
		func_350(iLocal_95, uParam1->f_13, uParam0->f_1);
		Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[uParam1->f_13 /*12*/].f_4 = uParam1->f_15;
		Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[uParam1->f_13 /*12*/].f_5 = *uParam1;
		Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[uParam1->f_13 /*12*/].f_6 = iVar1;
		return 1;
	}
	return 0;
}

void func_350(int iParam0, int iParam1, int iParam2)//Position - 0x533B4
{
	STATS::STAT_SET_INT(func_351(iParam0, iParam1), iParam2, 1);
}

int func_351(int iParam0, int iParam1)//Position - 0x533CC
{
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 0:
				return joaat("sp0_mg_range_pist1_hiscore");
			
			case 1:
				return joaat("sp0_mg_range_pist2_hiscore");
			
			case 2:
				return joaat("sp0_mg_range_pist3_hiscore");
			
			case 3:
				return joaat("sp0_mg_range_smg1_hiscore");
			
			case 4:
				return joaat("sp0_mg_range_smg2_hiscore");
			
			case 5:
				return joaat("sp0_mg_range_smg3_hiscore");
			
			case 9:
				return joaat("sp0_mg_range_ar1_hiscore");
			
			case 10:
				return joaat("sp0_mg_range_ar2_hiscore");
			
			case 11:
				return joaat("sp0_mg_range_ar3_hiscore");
			
			case 6:
				return joaat("sp0_mg_range_sg1_hiscore");
			
			case 7:
				return joaat("sp0_mg_range_sg2_hiscore");
			
			case 8:
				return joaat("sp0_mg_range_sg3_hiscore");
			
			case 12:
				return joaat("sp0_mg_range_lmg1_hiscore");
			
			case 13:
				return joaat("sp0_mg_range_lmg2_hiscore");
			
			case 14:
				return joaat("sp0_mg_range_lmg3_hiscore");
			
			case 15:
				return joaat("sp0_mg_range_hvy1_hiscore");
			
			case 16:
				return joaat("sp0_mg_range_hvy2_hiscore");
			
			case 17:
				return joaat("sp0_mg_range_hvy3_hiscore");
			
			case 18:
				return joaat("sp0_mg_range_rg1_hiscore");
			
			case 19:
				return joaat("sp0_mg_range_rg2_hiscore");
			
			case 20:
				return joaat("sp0_mg_range_rg3_hiscore");
			
			case 21:
				return joaat("sp0_mg_range_rg4_hiscore");
			
			default:
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 0:
				return joaat("sp1_mg_range_pist1_hiscore");
			
			case 1:
				return joaat("sp1_mg_range_pist2_hiscore");
			
			case 2:
				return joaat("sp1_mg_range_pist3_hiscore");
			
			case 3:
				return joaat("sp1_mg_range_smg1_hiscore");
			
			case 4:
				return joaat("sp1_mg_range_smg2_hiscore");
			
			case 5:
				return joaat("sp1_mg_range_smg3_hiscore");
			
			case 9:
				return joaat("sp1_mg_range_ar1_hiscore");
			
			case 10:
				return joaat("sp1_mg_range_ar2_hiscore");
			
			case 11:
				return joaat("sp1_mg_range_ar3_hiscore");
			
			case 6:
				return joaat("sp1_mg_range_sg1_hiscore");
			
			case 7:
				return joaat("sp1_mg_range_sg2_hiscore");
			
			case 8:
				return joaat("sp1_mg_range_sg3_hiscore");
			
			case 12:
				return joaat("sp1_mg_range_lmg1_hiscore");
			
			case 13:
				return joaat("sp1_mg_range_lmg2_hiscore");
			
			case 14:
				return joaat("sp1_mg_range_lmg3_hiscore");
			
			case 15:
				return joaat("sp1_mg_range_hvy1_hiscore");
			
			case 16:
				return joaat("sp1_mg_range_hvy2_hiscore");
			
			case 17:
				return joaat("sp1_mg_range_hvy3_hiscore");
			
			case 18:
				return joaat("sp1_mg_range_rg1_hiscore");
			
			case 19:
				return joaat("sp1_mg_range_rg2_hiscore");
			
			case 20:
				return joaat("sp1_mg_range_rg3_hiscore");
			
			case 21:
				return joaat("sp1_mg_range_rg4_hiscore");
			
			default:
		}
	}
	else if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 0:
				return joaat("sp2_mg_range_pist1_hiscore");
			
			case 1:
				return joaat("sp2_mg_range_pist2_hiscore");
			
			case 2:
				return joaat("sp2_mg_range_pist3_hiscore");
			
			case 3:
				return joaat("sp2_mg_range_smg1_hiscore");
			
			case 4:
				return joaat("sp2_mg_range_smg2_hiscore");
			
			case 5:
				return joaat("sp2_mg_range_smg3_hiscore");
			
			case 9:
				return joaat("sp2_mg_range_ar1_hiscore");
			
			case 10:
				return joaat("sp2_mg_range_ar2_hiscore");
			
			case 11:
				return joaat("sp2_mg_range_ar3_hiscore");
			
			case 6:
				return joaat("sp2_mg_range_sg1_hiscore");
			
			case 7:
				return joaat("sp2_mg_range_sg2_hiscore");
			
			case 8:
				return joaat("sp2_mg_range_sg3_hiscore");
			
			case 12:
				return joaat("sp2_mg_range_lmg1_hiscore");
			
			case 13:
				return joaat("sp2_mg_range_lmg2_hiscore");
			
			case 14:
				return joaat("sp2_mg_range_lmg3_hiscore");
			
			case 15:
				return joaat("sp2_mg_range_hvy1_hiscore");
			
			case 16:
				return joaat("sp2_mg_range_hvy2_hiscore");
			
			case 17:
				return joaat("sp2_mg_range_hvy3_hiscore");
			
			case 18:
				return joaat("sp2_mg_range_rg1_hiscore");
			
			case 19:
				return joaat("sp2_mg_range_rg2_hiscore");
			
			case 20:
				return joaat("sp2_mg_range_rg3_hiscore");
			
			case 21:
				return joaat("sp2_mg_range_rg4_hiscore");
			
			default:
		}
	}
	return joaat("sp0_mg_range_hvy3_hiscore");
}

int func_352(var uParam0, var uParam1)//Position - 0x537A5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_355(*uParam0);
	if (iVar0 == 3)
	{
	}
	else
	{
		iVar1 = func_365(uParam1->f_40.f_1, uParam0);
		if (iVar1 > iVar0)
		{
			func_353(*uParam0, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_353(int iParam0, int iParam1)//Position - 0x537E2
{
	Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3 = iParam1;
	func_354(iParam0, 1);
	func_348(iParam0, 1);
	func_414("MEDAL_UP", 0);
}

void func_354(int iParam0, int iParam1)//Position - 0x53818
{
	Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_1 = iParam1;
}

int func_355(int iParam0)//Position - 0x53836
{
	return Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_3;
}

void func_356(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x53852
{
	if (iParam1 > func_357(iLocal_95, iParam0))
	{
		Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_8 = uParam2;
		Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_9 = uParam3;
		Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_10 = uParam4;
		Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_11 = uParam5;
	}
}

int func_357(int iParam0, int iParam1)//Position - 0x538BF
{
	var uVar0;
	
	STATS::STAT_GET_INT(func_351(iParam0, iParam1), &uVar0, -1);
	return uVar0;
}

bool func_358(var uParam0, var uParam1)//Position - 0x538D9
{
	return uParam0->f_40.f_1 >= uParam1->f_7;
}

void func_359(var uParam0)//Position - 0x538EC
{
	if (func_493(uParam0, 8192))
	{
		return;
	}
	else if (!func_493(uParam0, 65536))
	{
		uParam0->f_40.f_1 = (uParam0->f_40.f_1 + uParam0->f_40);
	}
}

int func_360(var uParam0)//Position - 0x53925
{
	float fVar0;
	
	if (!uParam0->f_193)
	{
		switch (GlobalFunc_8315())
		{
			case 0:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 500, 0);
				break;
			
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 500, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 500, 0);
				break;
		}
		uParam0->f_193 = 1;
	}
	fVar0 = 0f;
	if (!GlobalFunc_226(&(uParam0->f_181.f_2)))
	{
		GlobalFunc_6877(&(uParam0->f_181.f_2));
	}
	else
	{
		fVar0 = GlobalFunc_5182(&(uParam0->f_181.f_2));
	}
	if (!uParam0->f_191)
	{
		if (fVar0 > 4.25f)
		{
			GlobalFunc_1026(&(uParam0->f_181), 1051260355);
			uParam0->f_191 = 1;
		}
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_181, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		GlobalFunc_235(&(uParam0->f_181.f_2));
		uParam0->f_192 = 0;
		uParam0->f_191 = 0;
		uParam0->f_193 = 0;
		return 1;
	}
	return 0;
}


void func_362(var uParam0, int iParam1)//Position - 0x53A2F
{
	uParam0->f_1191 = (uParam0->f_1191 || iParam1);
}

int func_363(int iParam0, var uParam1)//Position - 0x53A44
{
	char* sVar0;
	int iVar4;
	
	func_364(uParam1->f_14, uParam1->f_15, &sVar0);
	iVar4 = uParam1->f_16 + 1;
	if (iParam0 == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SHR_CHALL_NAME");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&sVar0);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_ShootingRange", 0, 107, "HUD_MED_UNLKED");
	}
	else if (iParam0 == 2)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SHR_CHALL_NAME");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&sVar0);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_ShootingRange", 0, 108, "HUD_MED_UNLKED");
	}
	else if (iParam0 == 3)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SHR_CHALL_NAME");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&sVar0);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_ShootingRange", 0, 109, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_364(int iParam0, int iParam1, char* sParam2)//Position - 0x53B2F
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WT_PIST", 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "WT_PIST_50", 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "WT_PIST_CBT", 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "WT_PIST_AP", 16);
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WT_SMG_MCR", 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "WT_SMG", 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "WT_SMG_ASL", 16);
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WT_RIFLE_ASL", 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "WT_RIFLE_CBN", 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "WT_RIFLE_HVY", 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "WT_RIFLE_ADV", 16);
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WT_SG_PMP", 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "WT_SG_SOF", 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "WT_SG_BLP", 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "WT_SG_ASL", 16);
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WT_MG", 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "WT_MG_CBT", 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "WT_MG_ASL", 16);
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WT_MINIGUN", 16);
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WT_RAILGUN", 16);
			}
			break;
	}
}

int func_365(int iParam0, var uParam1)//Position - 0x53CD0
{
	if (iParam0 >= uParam1->f_9)
	{
		return 3;
	}
	else if (iParam0 >= uParam1->f_8)
	{
		return 2;
	}
	else if (iParam0 >= uParam1->f_7)
	{
		return 1;
	}
	return 0;
}

bool func_366(var uParam0, int iParam1)//Position - 0x53D06
{
	return (uParam0->f_1191 && iParam1) != 0;
}

void func_367(var uParam0)//Position - 0x53D18
{
	int iVar0;
	
	iVar0 = (((uParam0->f_1 + uParam0->f_2) + uParam0->f_3) + uParam0->f_4);
	if (iVar0 > *uParam0)
	{
		*uParam0 = iVar0;
	}
}


int func_369(var uParam0)//Position - 0x53D4E
{
	if (uParam0->f_14 == 0 || uParam0->f_14 == 3)
	{
		return 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_30 = 1;
		GlobalFunc_6877(&(uParam0->f_30.f_1));
		return 0;
	}
	else if (GlobalFunc_5182(&(uParam0->f_30.f_1)) > 1f)
	{
		uParam0->f_30 = 1;
		GlobalFunc_6877(&(uParam0->f_30.f_1));
		return 0;
	}
	else
	{
		GlobalFunc_6877(&(uParam0->f_30.f_1));
		return 1;
	}
	return 1;
}

void func_370(var uParam0)//Position - 0x53DC1
{
	uParam0->f_4 = 266;
}

void func_371(var uParam0)//Position - 0x53DD0
{
	if (uParam0->f_2 < 4)
	{
		uParam0->f_2++;
	}
	else if (uParam0->f_2 >= 4)
	{
		if (*uParam0 < 3)
		{
			func_414("MULTIPLIER_INCREASE", 0);
			*uParam0++;
			uParam0->f_2 = 0;
		}
	}
	if (*uParam0 > uParam0->f_1)
	{
		uParam0->f_1 = *uParam0;
	}
}

void func_372(var uParam0)//Position - 0x53E24
{
	int iVar0;
	
	iVar0 = SYSTEM::ROUND((1000f * MISC::GET_FRAME_TIME()));
	uParam0->f_3 = (uParam0->f_3 - iVar0);
	uParam0->f_3 = GlobalFunc_254(uParam0->f_3, 0, 1000);
	uParam0->f_4 = (uParam0->f_4 - iVar0);
	uParam0->f_4 = GlobalFunc_254(uParam0->f_4, 0, 266);
}



void func_375(var uParam0)//Position - 0x53EA3
{
	uParam0->f_3 = 1000;
}

void func_376(var uParam0, int iParam1)//Position - 0x53EB2
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	if (iVar0 == 0)
	{
		iVar1 = joaat("sp0_hits_peds_vehicles");
	}
	else if (iVar0 == 1)
	{
		iVar1 = joaat("sp1_hits_peds_vehicles");
	}
	else if (iVar0 == 2)
	{
		iVar1 = joaat("sp2_hits_peds_vehicles");
	}
	switch (iParam1)
	{
		case 1:
			uParam0->f_1++;
			STATS::STAT_INCREMENT(iVar1, 1f);
			break;
		
		case 2:
			uParam0->f_2++;
			STATS::STAT_INCREMENT(iVar1, 1f);
			break;
		
		case 3:
			uParam0->f_3++;
			STATS::STAT_INCREMENT(iVar1, 1f);
			break;
		
		case 4:
			uParam0->f_4++;
			STATS::STAT_INCREMENT(iVar1, 1f);
			break;
		
		default:
			break;
	}
}

void func_377(int iParam0, int iParam1, var uParam2)//Position - 0x53F5F
{
	*uParam2 = func_379(&(uParam2->f_1));
	uParam2->f_1[*uParam2 /*7*/].f_1 = GlobalFunc_4631(300f, 0);
	uParam2->f_1[*uParam2 /*7*/].f_4 = 255;
	uParam2->f_1[*uParam2 /*7*/].f_5 = iParam0;
	uParam2->f_1[*uParam2 /*7*/].f_6 = 1;
	uParam2->f_1[*uParam2 /*7*/].f_2 = 0f;
	uParam2->f_1[*uParam2 /*7*/].f_3 = iParam1;
	func_378(&(uParam2->f_1));
}

void func_378(var uParam0)//Position - 0x53FCE
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	
	iVar0 = 1;
	while (iVar0 < 4)
	{
		Var2 = { *(uParam0[iVar0 /*7*/]) };
		iVar1 = iVar0;
		while (iVar1 > 0 && Var2.f_2 < (uParam0[(iVar1 - 1) /*7*/])->f_2)
		{
			*(uParam0[iVar1 /*7*/]) = { *(uParam0[(iVar1 - 1) /*7*/]) };
			iVar1 = (iVar1 - 1);
		}
		*(uParam0[iVar1 /*7*/]) = { Var2 };
		iVar0++;
	}
}

int func_379(var uParam0)//Position - 0x5403C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((uParam0[iVar0 /*7*/])->f_6)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	func_378(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!(uParam0[iVar0 /*7*/])->f_6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 3;
}

int func_380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x5409B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2.f_12))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_2.f_12, 700);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2.f_11))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_2.f_11, 700);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2.f_10))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_2.f_10, 700);
	}
	if (!func_402(*uParam0, 128) || func_402(*uParam0, 256))
	{
		return 0;
	}
	if (func_402(*uParam0, 16))
	{
		if (func_401(uParam0, uParam4, 1))
		{
			func_400(uParam0, 16);
			func_399(uParam0, 1024);
			uParam0->f_25 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 4f);
			uParam0->f_26 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.05f, 0.15f);
		}
	}
	else if (func_402(*uParam0, 32))
	{
		if (func_401(uParam0, uParam4, 0))
		{
			if (!((func_402(*uParam0, 1048576) || func_402(*uParam0, 4194304)) || func_402(*uParam0, 2097152)))
			{
				func_397(uParam0, uParam1);
				(uParam1[*uParam0 /*4*/])->f_3 = 0;
				if (!bParam5)
				{
					GlobalFunc_5385(1);
				}
				return 0;
			}
			else
			{
				func_400(uParam0, 16);
				func_400(uParam0, 1024);
				func_400(uParam0, 4);
				func_400(uParam0, 8);
				func_400(uParam0, 32);
				func_399(uParam0, 16);
				func_399(uParam0, 128);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2.f_11))
				{
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_11);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2.f_11);
				}
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_12);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2.f_12);
				func_394(uParam0);
				if (func_493(uParam2, 512))
				{
					OBJECT::_0xF9C1681347C8BD15(uParam0->f_2.f_12);
				}
				uParam0->f_18 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
				uParam0->f_19 = 100f;
				uParam0->f_21 = 0f;
				uParam0->f_23 = 0f;
				uParam0->f_25 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 4f);
				uParam0->f_26 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.05f, 0.15f);
				if (func_402(*uParam0, 2097152))
				{
					uParam0->f_27 = ((IntToFloat(MISC::GET_GAME_TIMER()) / 1000f) + 1f);
				}
				else if (func_402(*uParam0, 4194304))
				{
					uParam0->f_27 = ((IntToFloat(MISC::GET_GAME_TIMER()) / 1000f) + 3.5f);
				}
				else
				{
					uParam0->f_27 = ((IntToFloat(MISC::GET_GAME_TIMER()) / 1000f) + 1.75f);
				}
			}
		}
	}
	if (func_402(*uParam0, 1024))
	{
		if (func_393(uParam0))
		{
			func_400(uParam0, 1024);
		}
	}
	if (func_402(*uParam0, 2) && !func_402(*uParam0, 16))
	{
		if (func_392(uParam0, uParam1))
		{
			func_400(uParam0, 2);
		}
	}
	if (func_402(*uParam0, 8))
	{
		if (func_391(uParam0))
		{
			if (func_402(*uParam0, 4))
			{
				func_400(uParam0, 4);
			}
			else
			{
				func_399(uParam0, 4);
				func_394(uParam0);
			}
			func_400(uParam0, 8);
		}
	}
	func_389(uParam0);
	func_470(uParam2, 2);
	switch (uParam2->f_40.f_2)
	{
		case 4:
		case 1:
		case 2:
			if (func_493(uParam2, 512))
			{
				if (func_388(uParam0, uParam2))
				{
					func_492(uParam2, 2);
				}
			}
			else if (func_384(uParam0, uParam2, uParam1, uParam3))
			{
				func_492(uParam2, 2);
			}
			break;
		
		default:
			func_381(uParam0, uParam2, uParam3);
			break;
	}
	if (uParam0->f_19 <= 0f && !func_402(*uParam0, 32))
	{
		uParam2->f_5++;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", uParam0->f_2.f_10, 0, 0, 0);
		if (uParam0->f_17 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_17);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_17);
			uParam0->f_17 = -1;
		}
		func_399(uParam0, 32);
	}
	return func_493(uParam2, 2);
}

void func_381(var uParam0, var uParam1, var uParam2)//Position - 0x54469
{
	struct<3> Var0;
	int iVar3;
	
	if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &Var0))
	{
		if (func_493(uParam1, 2))
		{
			return;
		}
		func_492(uParam1, 1);
		if ((func_402(*uParam0, 4) && !func_402(*uParam0, 8)) || func_402(*uParam0, 32))
		{
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_12);
			return;
		}
		iVar3 = func_383(&(uParam0->f_2), Var0, 1);
		if (iVar3 > 0)
		{
			func_382(1, iVar3, uParam1, uParam2);
		}
		else if (iVar3 == 0)
		{
		}
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_12);
		if ((iVar3 <= 4 && iVar3 >= 1) && !func_493(uParam1, 2))
		{
			uParam0->f_19 = (uParam0->f_19 - uParam1->f_17);
			uParam1->f_34.f_5 = 1;
			func_492(uParam1, 2);
		}
	}
}

void func_382(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x54539
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0 || iParam1 == -1)
	{
		return;
	}
	if (uParam2->f_40.f_2 == 0)
	{
		iVar0 = 0;
		while (iVar0 < iParam0)
		{
			switch (iParam1)
			{
				case 1:
					iVar1 = (100 * uParam2->f_34);
					uParam2->f_40.f_1 = (uParam2->f_40.f_1 + iVar1);
					func_377(iVar1, 12, uParam3);
					func_376(uParam2, 1);
					break;
				
				case 2:
					iVar1 = (50 * uParam2->f_34);
					uParam2->f_40.f_1 = (uParam2->f_40.f_1 + iVar1);
					func_377(iVar1, 6, uParam3);
					func_376(uParam2, 2);
					break;
				
				case 3:
					iVar1 = (25 * uParam2->f_34);
					uParam2->f_40.f_1 = (uParam2->f_40.f_1 + iVar1);
					func_377(iVar1, 9, uParam3);
					func_376(uParam2, 3);
					break;
				
				case 4:
					iVar1 = (10 * uParam2->f_34);
					uParam2->f_40.f_1 = (uParam2->f_40.f_1 + iVar1);
					func_377(iVar1, 3, uParam3);
					func_376(uParam2, 4);
					break;
			}
			iVar0++;
		}
	}
	else if (uParam2->f_40.f_2 == 5)
	{
		iVar1 = (100 * uParam2->f_34);
		uParam2->f_40.f_1 = (uParam2->f_40.f_1 + iVar1);
		if (uParam2->f_34 == 1)
		{
			iVar2 = 3;
			func_376(uParam2, 3);
		}
		else if (uParam2->f_34 == 2)
		{
			iVar2 = 9;
			func_376(uParam2, 2);
		}
		else if (uParam2->f_34 == 3)
		{
			iVar2 = 12;
			func_376(uParam2, 1);
		}
		else
		{
			iVar2 = 3;
		}
		func_377(iVar1, iVar2, uParam3);
	}
}

int func_383(var uParam0, struct<3> Param1, int iParam4)//Position - 0x546B2
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		Var0.f_2 = (Var0.f_2 - 0.4f);
	}
	fVar3 = SYSTEM::VDIST2(Var0, Param1);
	if (fVar3 <= 0.005625f)
	{
		return 1;
	}
	else if (fVar3 <= 0.021025f)
	{
		return 2;
	}
	else if (fVar3 <= 0.046225f)
	{
		return 3;
	}
	else if (fVar3 <= 0.081225f)
	{
		return 4;
	}
	if (iParam4 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_11, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 0;
		}
	}
	return -1;
}

int func_384(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5475B
{
	var uVar0;
	bool bVar3;
	int iVar4;
	
	if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &uVar0))
	{
		func_492(uParam1, 1);
		if (func_402(*uParam0, 4) || func_402(*uParam0, 32))
		{
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_12);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2.f_11))
			{
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_11);
			}
			return 0;
		}
		bVar3 = func_387(&(uParam0->f_2), 1, 0);
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_12);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2.f_11))
		{
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_11);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2.f_11);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2.f_12);
		if (bVar3)
		{
			if (uParam1->f_40.f_2 == 1)
			{
				uParam1->f_40.f_1++;
			}
			else if (uParam1->f_40.f_2 == 4)
			{
				iVar4 = func_386(uParam0->f_2, uParam2);
				func_385(iVar4, uParam1, uParam3);
			}
			uParam0->f_19 = (uParam0->f_19 - uParam1->f_17);
			uParam1->f_34.f_5 = 1;
			func_492(uParam1, 2);
			return 1;
		}
	}
	return 0;
}

void func_385(int iParam0, var uParam1, var uParam2)//Position - 0x5485D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 3;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_376(uParam1, 1);
			iVar0 = 100;
			iVar1 = 12;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_376(uParam1, 2);
			iVar0 = 50;
			iVar1 = 6;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_376(uParam1, 3);
			iVar0 = 25;
			iVar1 = 9;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (!GlobalFunc_747(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270, 1))
			{
				GlobalFunc_5211(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_270), 1);
				GlobalFunc_159("SHR_DEST_LOWHIT", -1);
			}
			func_376(uParam1, 4);
			iVar0 = 10;
			iVar1 = 3;
			break;
	}
	if (iVar0 != 0)
	{
		uParam1->f_40.f_1 = (uParam1->f_40.f_1 + iVar0);
		func_377(iVar0, iVar1, uParam2);
	}
}

int func_386(struct<3> Param0, var uParam3)//Position - 0x54984
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Param0.f_2 = 0f;
	iVar3 = 0;
	while (iVar3 <= (20 - 1))
	{
		iVar4 = iVar3;
		Var0 = { *(uParam3[iVar4 /*4*/]) };
		Var0.f_2 = 0f;
		if (SYSTEM::VDIST2(Param0, Var0) <= 1.5f)
		{
			return iVar4;
		}
		iVar3++;
	}
	return -1;
}

int func_387(var uParam0, int iParam1, bool bParam2)//Position - 0x549D6
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_12, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (bParam2)
	{
		if (OBJECT::HAS_OBJECT_BEEN_BROKEN(uParam0->f_12))
		{
			return 1;
		}
	}
	if (iParam1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_11, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_388(var uParam0, var uParam1)//Position - 0x54A2D
{
	bool bVar0;
	
	if (func_402(*uParam0, 32) || func_402(*uParam0, 16))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_2.f_12, 1);
		return 0;
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_2.f_12, 0);
	}
	bVar0 = func_387(&(uParam0->f_2), 0, 1);
	WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_2.f_12);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2.f_12);
	if (bVar0)
	{
		uParam0->f_19 = (uParam0->f_19 - uParam1->f_17);
		uParam1->f_34.f_5 = 1;
		func_492(uParam1, 2);
		return 1;
	}
	return 0;
}

void func_389(var uParam0)//Position - 0x54AB6
{
	if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(uParam0->f_2.f_10, 1), uParam0->f_2, 0.01f))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2.f_10, uParam0->f_2, 1, 0, 0, 1);
		uParam0->f_2.f_3 = { uParam0->f_2 };
		uParam0->f_2.f_3.f_2 = (uParam0->f_2.f_3.f_2 - 1.155f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2.f_11))
	{
		if (ENTITY::GET_ENTITY_HEADING(uParam0->f_2.f_11) <= (uParam0->f_2.f_9 - 0.15f) || ENTITY::GET_ENTITY_HEADING(uParam0->f_2.f_11) >= (uParam0->f_2.f_9 + 0.15f))
		{
			if (func_402(*uParam0, 536870912))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_2.f_11, uParam0->f_2.f_10, 0, 0f, 0.007f, -0.45f, 0f, 0f, uParam0->f_2.f_9, 0, 0, 0, 0, 2, 1);
			}
			else if (func_402(*uParam0, 1073741824))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_2.f_11, uParam0->f_2.f_10, 0, 0f, 0.007f, -1.117f, 0f, 0f, uParam0->f_2.f_9, 0, 0, 0, 0, 2, 1);
			}
			else
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_2.f_11, uParam0->f_2.f_10, 0, 0f, 0.007f, -0.76f, 0f, 0f, uParam0->f_2.f_9, 0, 0, 0, 0, 2, 1);
			}
		}
	}
	else if (ENTITY::GET_ENTITY_HEADING(uParam0->f_2.f_12) <= (uParam0->f_2.f_9 - 0.15f) || ENTITY::GET_ENTITY_HEADING(uParam0->f_2.f_12) >= (uParam0->f_2.f_9 + 0.15f))
	{
		if (func_402(*uParam0, 536870912))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_2.f_12, uParam0->f_2.f_10, 0, 0f, 0.007f, -0.45f, 0f, 0f, uParam0->f_2.f_9, 0, 0, 1, 0, 2, 1);
		}
		else if (func_402(*uParam0, 1073741824))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_2.f_12, uParam0->f_2.f_10, 0, 0f, 0.007f, -1.117f, 0f, 0f, uParam0->f_2.f_9, 0, 0, 1, 0, 2, 1);
		}
		else
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_2.f_12, uParam0->f_2.f_10, 0, 0f, 0.007f, -0.76f, 0f, 0f, uParam0->f_2.f_9, 0, 0, 1, 0, 2, 1);
		}
	}
	if (!GlobalFunc_537(ENTITY::GET_ENTITY_ROTATION(uParam0->f_2.f_10, 2), uParam0->f_2.f_6, 0.01f))
	{
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_2.f_10, uParam0->f_2.f_6, 2, 1);
	}
}


int func_391(var uParam0)//Position - 0x54D5E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	uParam0->f_23 = (uParam0->f_23 + MISC::GET_FRAME_TIME());
	fVar2 = (uParam0->f_23 / 0.5f);
	if (fVar2 < 1f)
	{
		if (func_402(*uParam0, 4))
		{
			fVar0 = 0f;
			fVar1 = 180f;
		}
		else
		{
			fVar0 = 180f;
			fVar1 = 0f;
		}
		uParam0->f_2.f_9 = (fVar0 + ((fVar1 - fVar0) * fVar2));
		return 0;
	}
	else
	{
		uParam0->f_23 = 0f;
		if (func_402(*uParam0, 4))
		{
			uParam0->f_2.f_9 = 180f;
		}
		else
		{
			uParam0->f_2.f_9 = 0f;
		}
		return 1;
	}
	return 0;
}

int func_392(var uParam0, var uParam1)//Position - 0x54DEE
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	uParam0->f_24 = (uParam0->f_24 + MISC::GET_FRAME_TIME());
	fVar6 = (uParam0->f_24 / uParam0->f_20);
	if (fVar6 < 1f)
	{
		Var0 = { uParam0->f_29 };
		Var3 = { *(uParam1[uParam0->f_1 /*4*/]) };
		uParam0->f_2 = { Var0 + Var3 - Var0 * Vector(fVar6, fVar6, fVar6) };
		return 0;
	}
	else
	{
		uParam0->f_2 = { *(uParam1[uParam0->f_1 /*4*/]) };
		(uParam1[*uParam0 /*4*/])->f_3 = 0;
		*uParam0 = uParam0->f_1;
		(uParam1[*uParam0 /*4*/])->f_3 = 1;
		if (uParam0->f_17 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_17);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_17);
			uParam0->f_17 = -1;
		}
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_STOP_MASTER", uParam0->f_2.f_10, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_393(var uParam0)//Position - 0x54EAC
{
	if (!(func_402(*uParam0, 32) || func_402(*uParam0, 8)))
	{
		uParam0->f_22 = (uParam0->f_22 + MISC::GET_FRAME_TIME());
		uParam0->f_2.f_6 = (SYSTEM::SIN((uParam0->f_22 * 600f)) * uParam0->f_25);
		if (uParam0->f_25 > 0.5f)
		{
			uParam0->f_25 = (uParam0->f_25 - uParam0->f_26);
		}
		else
		{
			uParam0->f_22 = 0f;
			return 1;
		}
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_2.f_10, uParam0->f_2.f_6, 2, 1);
		return 0;
	}
	uParam0->f_22 = 0f;
	return 1;
}

void func_394(var uParam0)//Position - 0x54F41
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2.f_11))
	{
		Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_2.f_11) };
		GRAPHICS::REMOVE_DECALS_FROM_OBJECT_FACING(uParam0->f_2.f_11, Var0);
	}
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_2.f_12) };
	GRAPHICS::REMOVE_DECALS_FROM_OBJECT_FACING(uParam0->f_2.f_12, Var0);
}



int func_397(var uParam0, var uParam1)//Position - 0x55028
{
	func_398(&(uParam0->f_2));
	if (*uParam0 != -1)
	{
		(uParam1[*uParam0 /*4*/])->f_3 = 0;
	}
	uParam0->f_18 = -1f;
	uParam0->f_16 = 0;
	func_399(uParam0, 256);
	func_399(uParam0, 128);
	uParam0->f_19 = 100f;
	uParam0->f_27 = -1f;
	return 1;
}

void func_398(var uParam0)//Position - 0x55073
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_10));
		OBJECT::DELETE_OBJECT(&(uParam0->f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_11));
	}
}

void func_399(var uParam0, int iParam1)//Position - 0x550A9
{
	GlobalFunc_5211(&(uParam0->f_16), iParam1);
}

void func_400(var uParam0, int iParam1)//Position - 0x550BB
{
	GlobalFunc_5312(&(uParam0->f_16), iParam1);
}

int func_401(var uParam0, var uParam1, bool bParam2)//Position - 0x550CD
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((func_402(*uParam0, 1048576) || func_402(*uParam0, 4194304)) || func_402(*uParam0, 2097152))
	{
		if (uParam0->f_27 > 0f)
		{
			if (uParam0->f_27 > (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f))
			{
				return 0;
			}
		}
		uParam0->f_19 = 100f;
	}
	if (func_402(*uParam0, 16))
	{
		uParam0->f_21 = (uParam0->f_21 + (MISC::GET_FRAME_TIME() * uParam0->f_28));
		uParam0->f_28 = (uParam0->f_28 + 0.32f);
		fVar6 = (uParam0->f_21 / 0.6f);
	}
	else
	{
		uParam0->f_21 = (uParam0->f_21 + MISC::GET_FRAME_TIME());
		fVar6 = (uParam0->f_21 / 0.5f);
	}
	if (fVar6 < 1f)
	{
		if (bParam2)
		{
			Var0 = { -90f, 0f, uParam1->f_160 };
			Var3 = { 0f, 0f, uParam1->f_160 };
		}
		else
		{
			Var0 = { 0f, 0f, uParam1->f_160 };
			Var3 = { -90f, 0f, uParam1->f_160 };
		}
		uParam0->f_2.f_6 = { Var0 + Var3 - Var0 * Vector(fVar6, fVar6, fVar6) };
		return 0;
	}
	else
	{
		if (bParam2)
		{
			uParam0->f_2.f_6 = { 0f, 0f, uParam1->f_160 };
		}
		else
		{
			uParam0->f_2.f_6 = { -90f, 0f, uParam1->f_160 };
		}
		uParam0->f_21 = 0f;
		uParam0->f_28 = 0.5f;
		return 1;
	}
	return 0;
}

bool func_402(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, int iParam33)//Position - 0x55225
{
	return GlobalFunc_747(Param0.f_16, iParam33);
}

void func_403(var uParam0)//Position - 0x55237
{
	if (func_493(uParam0, 128))
	{
		if (func_493(uParam0, 1073741824))
		{
			func_470(uParam0, 1073741824);
		}
	}
}

void func_404(var uParam0, var uParam1, var uParam2)//Position - 0x55263
{
	int iVar0;
	float fVar1;
	struct<33> Var2;
	
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_17 = -1;
	Var2.f_18 = -1082130432;
	Var2.f_27 = -1082130432;
	if (func_493(uParam0, 8192))
	{
		return;
	}
	fVar1 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
	iVar0 = 0;
	while (iVar0 < uParam0->f_8)
	{
		if (!uParam1->f_1651[iVar0 /*5*/].f_2)
		{
			Var2 = { *(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/]) };
			switch (uParam1->f_1651[iVar0 /*5*/])
			{
				case 7:
					if (func_402(Var2, 128) && !func_402(Var2, 256))
					{
						if ((fVar1 - (Var2.f_18 + uParam0->f_22)) >= uParam1->f_1651[iVar0 /*5*/].f_1)
						{
							if (!func_402(Var2, 8))
							{
								func_399(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 8);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", Var2.f_2.f_10, 0, 0, 0);
								if (func_402(Var2, 4))
								{
									func_394(&Var2);
								}
								uParam1->f_1651[iVar0 /*5*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 0:
					if (func_402(Var2, 128) && !func_402(Var2, 256))
					{
						if (!func_402(Var2, 2))
						{
							func_399(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 2);
							(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_17 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY((uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_17, "TARGET_PRACTICE_SLIDE_MASTER", Var2.f_2.f_10, 0, 0, 0);
							(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_24 = 0f;
							(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_29 = { (uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_2 };
							(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_1 = uParam1->f_1651[iVar0 /*5*/].f_4;
							(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_20 = uParam1->f_1651[iVar0 /*5*/].f_1;
							uParam1->f_1651[iVar0 /*5*/].f_2 = 1;
						}
					}
					break;
				
				case 6:
				case 5:
				case 4:
				case 3:
				case 2:
				case 1:
					if (func_402(Var2, 128) && !func_402(Var2, 256))
					{
						if ((fVar1 - (Var2.f_18 + uParam0->f_22)) >= uParam1->f_1651[iVar0 /*5*/].f_1)
						{
							if (!func_402(Var2, 2))
							{
								func_399(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 2);
								if (!func_402(*(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/]), 4096))
								{
									(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_17 = AUDIO::GET_SOUND_ID();
									AUDIO::PLAY_SOUND_FROM_ENTITY((uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_17, "TARGET_PRACTICE_SLIDE_MASTER", Var2.f_2.f_10, 0, 0, 0);
								}
								(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_24 = 0f;
								(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_29 = { (uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_2 };
								(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_1 = uParam1->f_1651[iVar0 /*5*/].f_4;
								if (uParam1->f_1651[iVar0 /*5*/] == 5)
								{
									(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_20 = 2f;
								}
								else if (uParam1->f_1651[iVar0 /*5*/] == 4)
								{
									(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_20 = 3f;
								}
								else if (uParam1->f_1651[iVar0 /*5*/] == 6)
								{
									(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_20 = 1f;
								}
								else if (uParam1->f_1651[iVar0 /*5*/] == 2)
								{
									(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_20 = 5f;
								}
								else if (uParam1->f_1651[iVar0 /*5*/] == 1)
								{
									(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_20 = 6f;
								}
								else if (uParam1->f_1651[iVar0 /*5*/] == 3)
								{
									(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_20 = 4f;
								}
								uParam1->f_1651[iVar0 /*5*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (func_402(Var2, 128) && !func_402(Var2, 256))
					{
						if ((!func_402(Var2, 2) && !func_402(Var2, 8)) && !func_402(Var2, 32))
						{
							if (Var2 == uParam1->f_1651[iVar0 /*5*/].f_4)
							{
								uParam0->f_5++;
								func_399(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 32);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_2.f_10, 0, 0, 0);
								uParam1->f_1651[iVar0 /*5*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 9:
					if ((func_402(Var2, 128) && !func_402(Var2, 256)) && !func_402(Var2, 32))
					{
						if ((fVar1 - uParam0->f_20) >= uParam1->f_1651[iVar0 /*5*/].f_1)
						{
							uParam0->f_5++;
							func_399(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 32);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_2.f_10, 0, 0, 0);
							uParam1->f_1651[iVar0 /*5*/].f_2 = 1;
						}
					}
					break;
				
				case 10:
					if ((func_402(Var2, 128) && !func_402(Var2, 256)) && !func_402(Var2, 32))
					{
						if ((fVar1 - (Var2.f_18 + uParam0->f_22)) >= uParam1->f_1651[iVar0 /*5*/].f_1)
						{
							uParam0->f_5++;
							func_399(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 32);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/])->f_2.f_10, 0, 0, 0);
							uParam1->f_1651[iVar0 /*5*/].f_2 = 1;
						}
					}
					break;
				
				case 11:
					if (!func_402(Var2, 128))
					{
						if ((fVar1 - uParam0->f_20) >= uParam1->f_1651[iVar0 /*5*/].f_1)
						{
							if (func_405(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], uParam0, uParam2, (*uParam1)[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 1))
							{
								func_399(uParam1[uParam1->f_1651[iVar0 /*5*/].f_3 /*33*/], 128);
								uParam1->f_1651[iVar0 /*5*/].f_2 = 1;
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_405(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x558FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	if (iParam3 == -1)
	{
		return 0;
	}
	if ((uParam2[iParam3 /*4*/])->f_3)
	{
		return 0;
	}
	if (func_493(uParam1, 1024))
	{
		iVar1 = joaat("prop_target_backboard_b");
		iVar0 = joaat("prop_target_arm_b");
		iVar2 = joaat("prop_target_comp_metal");
	}
	else if (func_493(uParam1, 512))
	{
		iVar0 = joaat("prop_target_arm_b");
		iVar2 = MISC::GET_HASH_KEY("PROP_TARGET_FRAG_BOARD");
	}
	else
	{
		iVar1 = joaat("prop_target_backboard");
		iVar0 = joaat("prop_target_arm");
		iVar2 = joaat("prop_target_comp_wood");
	}
	if (GlobalFunc_747(uParam0->f_16, 134217728))
	{
		GlobalFunc_5312(&(uParam0->f_16), 134217728);
		GlobalFunc_5312(&(uParam0->f_16), 536870912);
		GlobalFunc_5312(&(uParam0->f_16), 1073741824);
		GlobalFunc_5312(&(uParam0->f_16), 268435456);
		iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		if (iVar16 == 0)
		{
			GlobalFunc_5211(&(uParam0->f_16), 268435456);
		}
		else if (iVar16 == 1)
		{
			GlobalFunc_5211(&(uParam0->f_16), 1073741824);
		}
		else
		{
			GlobalFunc_5211(&(uParam0->f_16), 536870912);
		}
	}
	if (GlobalFunc_747(uParam0->f_16, 1073741824))
	{
		iVar0 = joaat("prop_target_arm_long");
	}
	else if (GlobalFunc_747(uParam0->f_16, 536870912))
	{
		iVar0 = joaat("prop_target_arm_sm");
	}
	Var3 = { *(uParam2[iParam3 /*4*/]) };
	Var3.f_9 = 180f;
	Var3.f_3 = { Var3 };
	Var3.f_3.f_2 = (Var3.f_3.f_2 - 1.155f);
	if (!func_493(uParam1, 512))
	{
		Var3.f_11 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar1, Var3, 1, 1, 0);
		Var3.f_12 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar2, Var3, 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_12, Var3.f_11, 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		Var3.f_10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, Var3, 1, 1, 0);
		if (GlobalFunc_747(uParam0->f_16, 536870912))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_11, Var3.f_10, 0, 0f, 0.007f, -0.45f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
		}
		else if (GlobalFunc_747(uParam0->f_16, 1073741824))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_11, Var3.f_10, 0, 0f, 0.007f, -1.117f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_11, Var3.f_10, 0, 0f, 0.007f, -0.76f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
		}
	}
	else
	{
		Var3.f_12 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar2, Var3, 1, 1, 0);
		Var3.f_10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, Var3, 1, 1, 0);
		if (GlobalFunc_747(uParam0->f_16, 536870912))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_12, Var3.f_10, 0, 0f, 0.007f, -0.45f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
		}
		else if (GlobalFunc_747(uParam0->f_16, 1073741824))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_12, Var3.f_10, 0, 0f, 0.007f, -1.117f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
		}
		else
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_12, Var3.f_10, 0, 0f, 0.007f, -0.76f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
		}
	}
	if (bParam4)
	{
		ENTITY::SET_ENTITY_ROTATION(Var3.f_10, -90f, 0f, uParam2->f_160, 2, 1);
	}
	else
	{
		ENTITY::SET_ENTITY_ROTATION(Var3.f_10, 0f, 0f, uParam2->f_160, 2, 1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(Var3.f_10, 1);
	uParam0->f_19 = 100f;
	uParam0->f_2 = { Var3 };
	*uParam0 = iParam3;
	uParam0->f_18 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
	func_399(uParam0, 16);
	uParam0->f_28 = 0.5f;
	(uParam2[iParam3 /*4*/])->f_3 = 1;
	if (!GlobalFunc_747(uParam0->f_16, 2048))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", uParam0->f_2.f_10, 0, 0, 0);
	}
	return 1;
}

void func_406(var uParam0, var uParam1, var uParam2)//Position - 0x55CA7
{
	int iVar0;
	
	if (func_493(uParam0, 8192))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		if (!func_402(*(uParam1[iVar0 /*33*/]), 128) && (*uParam1)[iVar0 /*33*/] != -1)
		{
			if ((uParam1[iVar0 /*33*/])->f_15 == -1)
			{
				if (iVar0 == 0)
				{
					if (func_405(uParam1[iVar0 /*33*/], uParam0, uParam2, (*uParam1)[iVar0 /*33*/], 1))
					{
						func_399(uParam1[iVar0 /*33*/], 128);
					}
				}
				else if (iVar0 <= uParam0->f_5)
				{
					if (func_405(uParam1[iVar0 /*33*/], uParam0, uParam2, (*uParam1)[iVar0 /*33*/], 1))
					{
						func_399(uParam1[iVar0 /*33*/], 128);
					}
				}
			}
			else if ((uParam1[iVar0 /*33*/])->f_15 <= uParam0->f_5)
			{
				if (func_405(uParam1[iVar0 /*33*/], uParam0, uParam2, (*uParam1)[iVar0 /*33*/], 1))
				{
					func_399(uParam1[iVar0 /*33*/], 128);
				}
			}
		}
		iVar0++;
	}
}

void func_407(var uParam0)//Position - 0x55D8F
{
	float fVar0;
	float fVar1;
	
	if (!func_493(uParam0, 8192))
	{
		if (!GlobalFunc_226(&(uParam0->f_24)))
		{
			GlobalFunc_7260(&(uParam0->f_24), 0f);
			uParam0->f_20 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
		}
		if (!func_493(uParam0, 16384))
		{
			fVar0 = GlobalFunc_5182(&(uParam0->f_24));
			if (((((((((((((((uParam0->f_18 - fVar0) < 1f || (uParam0->f_18 - fVar0) < 1.5f) || (uParam0->f_18 - fVar0) < 2f) || (uParam0->f_18 - fVar0) < 2.5f) || (uParam0->f_18 - fVar0) < 3f) || (uParam0->f_18 - fVar0) < 3.5f) || (uParam0->f_18 - fVar0) < 4f) || (uParam0->f_18 - fVar0) < 4.5f) || (uParam0->f_18 - fVar0) < 5f) || (uParam0->f_18 - fVar0) < 6f) || (uParam0->f_18 - fVar0) < 7f) || (uParam0->f_18 - fVar0) < 8f) || (uParam0->f_18 - fVar0) < 9f) || (uParam0->f_18 - fVar0) < 10f) || (uParam0->f_18 - fVar0) < 11f)
			{
				func_414("10_SEC_WARNING", 0);
				func_492(uParam0, 16384);
				uParam0->f_12 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			fVar1 = GlobalFunc_5182(&(uParam0->f_24));
			if (((uParam0->f_18 - fVar1) < 5.5f && (MISC::GET_GAME_TIMER() - uParam0->f_12) > 500) || ((uParam0->f_18 - fVar1) < 11f && (MISC::GET_GAME_TIMER() - uParam0->f_12) > 1000))
			{
				func_470(uParam0, 16384);
			}
		}
		if ((GlobalFunc_5182(&(uParam0->f_24)) + 1f) >= uParam0->f_18)
		{
			GlobalFunc_235(&(uParam0->f_24));
			func_492(uParam0, 8192);
		}
	}
}


void func_409(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x55F92
{
	float fVar0;
	
	if (bParam3)
	{
		if (uParam0->f_5 == 9)
		{
			if (GlobalFunc_226(&(uParam1->f_24)))
			{
				GlobalFunc_5693(&(uParam1->f_24));
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			uParam1->f_23 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
		}
		HUD::CLEAR_HELP(1);
		GlobalFunc_5210(&(uParam2->f_56), 0, 0, 1, 1);
		GlobalFunc_813(&(uParam2->f_56), "FE_HLP29", 2, 201, 1, 1, 0);
		GlobalFunc_813(&(uParam2->f_56), "FE_HLP31", 2, 202, 1, 1, 0);
		GlobalFunc_5275(&(uParam2->f_56), 1);
		if (!AUDIO::HAS_SOUND_FINISHED(uParam1->f_11))
		{
			AUDIO::STOP_SOUND(uParam1->f_11);
		}
		uParam0->f_4 = 13;
		MISC::SET_GAME_PAUSED(1);
	}
	else
	{
		if (uParam0->f_5 == 9)
		{
			if (GlobalFunc_226(&(uParam1->f_24)))
			{
				GlobalFunc_6421(&(uParam1->f_24));
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			fVar0 = ((IntToFloat(MISC::GET_GAME_TIMER()) / 1000f) - uParam1->f_23);
			uParam1->f_20 = (uParam1->f_20 + fVar0);
			uParam1->f_22 = (uParam1->f_22 + fVar0);
			GlobalFunc_5210(&(uParam2->f_56), 0, 0, 1, 1);
			GlobalFunc_813(&(uParam2->f_56), "IB_QUIT", 2, 217, 1, 1, 0);
			GlobalFunc_5275(&(uParam2->f_56), 1);
		}
		else if (uParam0->f_5 == 7 || uParam0->f_5 == 8)
		{
			GlobalFunc_6421(&(uParam1->f_27));
			GlobalFunc_5210(&(uParam2->f_56), 0, 0, 1, 1);
			GlobalFunc_813(&(uParam2->f_56), "IB_QUIT", 2, 217, 1, 1, 0);
			GlobalFunc_5275(&(uParam2->f_56), 1);
		}
		uParam0->f_4 = uParam0->f_5;
		MISC::SET_GAME_PAUSED(0);
	}
}





void func_414(char* sParam0, bool bParam1)//Position - 0x561D2
{
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "HUD_MINI_GAME_SOUNDSET", 1);
	}
}



void func_417(var uParam0, var uParam1, bool bParam2)//Position - 0x56225
{
	char* sVar0;
	int iVar4;
	char[] cVar5[8];
	int iVar6;
	
	func_364(uParam0->f_14, uParam0->f_15, &sVar0);
	iVar4 = uParam0->f_16 + 1;
	cVar5 = GlobalFunc_1078(bParam2, "SC_PASS", "SC_FAIL");
	iVar6 = 12;
	if (!bParam2)
	{
		iVar6 = 6;
	}
	if (uParam0->f_5 >= uParam0->f_6 && !GlobalFunc_747(uParam0->f_10, 1048576))
	{
		func_418(&(uParam1->f_181), cVar5, &sVar0, iVar4, iVar6);
	}
	else if (func_493(uParam0, 8192))
	{
		func_418(&(uParam1->f_181), cVar5, &sVar0, iVar4, iVar6);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_94, func_333(uParam0->f_14, uParam0->f_15)) <= 0)
	{
		func_418(&(uParam1->f_181), "SC_COM_AMMO", &sVar0, iVar4, iVar6);
	}
}

void func_418(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x562DB
{
	char* sVar0;
	
	sVar0 = "SHOW_SHARD_CENTERED_MP_MESSAGE";
	uParam0->f_9 = 2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SHR_CHALL_NAME");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_1 = 5000;
}


int func_420(var uParam0, int iParam1)//Position - 0x5635E
{
	if (iParam1 == 3)
	{
		return uParam0->f_9;
	}
	else if (iParam1 == 2)
	{
		return uParam0->f_8;
	}
	return uParam0->f_7;
}

void func_421(var uParam0)//Position - 0x56387
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	uParam0->f_40 = 0;
	if (!func_493(uParam0, 8192) && !func_493(uParam0, 65536))
	{
		fVar0 = (uParam0->f_18 - GlobalFunc_5182(&(uParam0->f_24)));
		iVar1 = SYSTEM::ROUND((fVar0 * 1000f));
		iVar2 = ((iVar1 / 1000) / 60);
		iVar3 = ((iVar1 - iVar2 * 60 * 1000) / 1000);
		iVar4 = (iVar1 - (iVar3 + iVar2 * 60) * 1000);
		uParam0->f_40 = iVar3 * 10;
		uParam0->f_40 = (uParam0->f_40 + (iVar4 / 100));
	}
}

void func_422(var uParam0, int iParam1)//Position - 0x5640E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((uParam0[iVar0 /*33*/])->f_17 != -1)
		{
			AUDIO::STOP_SOUND((uParam0[iVar0 /*33*/])->f_17);
			AUDIO::RELEASE_SOUND_ID((uParam0[iVar0 /*33*/])->f_17);
			(uParam0[iVar0 /*33*/])->f_17 = -1;
		}
		iVar0++;
	}
}

int func_423(var uParam0, var uParam1)//Position - 0x56456
{
	int iVar0;
	
	if (func_493(uParam0, 8192))
	{
		AUDIO::STOP_SOUND(uParam0->f_11);
		func_414("TIMER_STOP", 0);
		return 1;
	}
	if (!GlobalFunc_747(uParam0->f_10, 1048576) && !GlobalFunc_747(uParam0->f_10, 2097152))
	{
		if (uParam0->f_5 >= uParam0->f_6)
		{
			GlobalFunc_5693(&(uParam0->f_24));
			if (!func_424(uParam0, uParam1))
			{
				AUDIO::STOP_SOUND(uParam0->f_11);
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	iVar0 = func_333(uParam0->f_14, uParam0->f_15);
	if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_94, iVar0) <= 0)
	{
		if (uParam0->f_21 <= 0f)
		{
			uParam0->f_21 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
			GlobalFunc_5693(&(uParam0->f_24));
		}
		else if (((IntToFloat(MISC::GET_GAME_TIMER()) / 1000f) - uParam0->f_21) >= 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_424(var uParam0, var uParam1)//Position - 0x5652B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		if (func_402(*(uParam1[iVar0 /*33*/]), 2))
		{
			return 1;
		}
		if (func_402(*(uParam1[iVar0 /*33*/]), 16))
		{
			return 1;
		}
		if (func_402(*(uParam1[iVar0 /*33*/]), 32))
		{
			return 1;
		}
		if (func_402(*(uParam1[iVar0 /*33*/]), 8))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}



void func_427(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x565C5
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<22> Var9;
	
	if (GlobalFunc_226(&(uParam0->f_24)))
	{
		uParam0->f_19 = (uParam0->f_18 - GlobalFunc_5182(&(uParam0->f_24)));
		if (uParam0->f_19 < 0f)
		{
			uParam0->f_19 = 0f;
		}
	}
	else
	{
		uParam0->f_19 = 0f;
	}
	iVar0 = SYSTEM::ROUND((uParam0->f_19 * 1000f));
	iVar4 = func_420(uParam1[uParam0->f_14 /*41*/][uParam0->f_16 /*10*/], 1);
	iVar5 = func_420(uParam1[uParam0->f_14 /*41*/][uParam0->f_16 /*10*/], 2);
	if (uParam0->f_40.f_1 < iVar4)
	{
		iVar1 = iVar4;
		sVar2 = "SHR_GOAL_T_BNZE";
		iVar3 = 107;
	}
	else if (uParam0->f_40.f_1 < iVar5)
	{
		iVar1 = iVar5;
		sVar2 = "SHR_GOAL_T_SILV";
		iVar3 = 108;
	}
	else
	{
		iVar1 = func_420(uParam1[uParam0->f_14 /*41*/][uParam0->f_16 /*10*/], 3);
		sVar2 = "SHR_GOAL_T_GOLD";
		iVar3 = 109;
	}
	iVar6 = -1;
	iVar7 = -1;
	if (!func_493(uParam0, 1024) && !func_493(uParam0, 1048576))
	{
		iVar6 = uParam0->f_5;
		iVar7 = uParam0->f_6;
	}
	if (uParam0->f_14 == 3 || uParam0->f_14 == 6)
	{
		uParam0->f_34 = -1;
	}
	iVar8 = 1;
	if (iVar0 <= 6000)
	{
		iVar8 = 6;
	}
	Var9.f_1 = -1;
	Var9.f_2 = 1;
	Var9.f_4 = -1;
	Var9.f_5 = 1;
	Var9.f_7 = -1;
	Var9.f_8 = -1;
	Var9.f_10 = -1;
	Var9.f_11 = 1;
	Var9.f_13 = -1;
	Var9.f_14 = 1;
	Var9.f_15 = -1;
	Var9.f_16 = -1;
	Var9.f_17 = -1;
	Var9.f_18 = 21;
	Var9.f_20 = -1;
	Var9.f_21 = 1;
	if ((iParam3 && uParam0->f_40 != 0) && !func_493(uParam0, 65536))
	{
		Var9.f_20 = uParam0->f_40;
		Var9.f_19 = "SHR_TIME_BONUS";
		Var9.f_21 = 18;
	}
	else
	{
		Var9.f_1 = iVar0;
		Var9.f_2 = iVar8;
	}
	Var9.f_10 = uParam0->f_40.f_1;
	Var9.f_12 = sVar2;
	Var9.f_13 = iVar1;
	Var9.f_14 = iVar3;
	Var9.f_7 = iVar6;
	Var9.f_8 = iVar7;
	Var9.f_15 = uParam0->f_34;
	Var9.f_16 = uParam0->f_34.f_2;
	Var9.f_17 = 4;
	Var9.f_4 = func_450(uParam0->f_13);
	func_441(&Var9, 0);
	func_428(&(uParam2->f_1));
}

void func_428(var uParam0)//Position - 0x567EE
{
	int iVar0;
	
	func_439(uParam0);
	HUD::SET_TEXT_OUTLINE();
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if ((uParam0[iVar0 /*7*/])->f_6)
		{
			HUD::SET_TEXT_OUTLINE();
			func_429("SHR_SPT_POINTS", ((*uParam0)[iVar0 /*7*/] - ((func_438("SHR_SPT_POINTS", (uParam0[iVar0 /*7*/])->f_5) * 0.73333f) / 2f)), ((uParam0[iVar0 /*7*/])->f_1 - ((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.73333f, 0) * 0.73333f) / 2f)), 0.73333f, 0.73333f, 1f, 1f, func_436((uParam0[iVar0 /*7*/])->f_3, (uParam0[iVar0 /*7*/])->f_4), (uParam0[iVar0 /*7*/])->f_5, 0, 0, 0, 2);
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_429(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x56891
{
	func_431(fParam3, fParam4, fParam5, fParam6, uParam7, iParam9, iParam10, iParam11);
	GlobalFunc_1321(fParam1, fParam2, sParam0, iParam8, iParam12);
}


void func_431(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x568D9
{
	HUD::SET_TEXT_FONT(iParam7);
	HUD::SET_TEXT_SCALE(fParam0, fParam1);
	HUD::SET_TEXT_WRAP(uParam2, uParam3);
	HUD::SET_TEXT_COLOUR(func_435(uParam4), func_434(uParam4), func_433(uParam4), func_432(uParam4));
	HUD::SET_TEXT_DROPSHADOW(uParam5, func_435(uParam6), func_434(uParam6), func_433(uParam6), func_432(uParam6));
}

var func_432(var uParam0)//Position - 0x56931
{
	return MISC::GET_BITS_IN_RANGE(uParam0, 0, 7);
}

var func_433(var uParam0)//Position - 0x56941
{
	return MISC::GET_BITS_IN_RANGE(uParam0, 8, 15);
}

var func_434(var uParam0)//Position - 0x56952
{
	return MISC::GET_BITS_IN_RANGE(uParam0, 16, 23);
}

var func_435(var uParam0)//Position - 0x56963
{
	return MISC::GET_BITS_IN_RANGE(uParam0, 24, 31);
}

int func_436(int iParam0, int iParam1)//Position - 0x56974
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	if (iParam1 == -1)
	{
		return func_437(iVar0, iVar1, iVar2, iVar3);
	}
	return func_437(iVar0, iVar1, iVar2, iParam1);
}

int func_437(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x569AE
{
	return ((((iParam0 * 16777216) + (iParam1 * 65536)) + iParam2 * 256) + iParam3);
}

float func_438(char* sParam0, int iParam1)//Position - 0x569CF
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_439(var uParam0)//Position - 0x569E8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((uParam0[iVar0 /*7*/])->f_6)
		{
			func_440(uParam0[iVar0 /*7*/]);
			iVar1++;
			if (!(uParam0[iVar0 /*7*/])->f_6)
			{
				bVar2 = true;
			}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		if (bVar2)
		{
			func_378(uParam0);
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (((uParam0[iVar0 /*7*/])->f_6 && (uParam0[iVar0 + 1 /*7*/])->f_6) && (uParam0[iVar0 + 1 /*7*/])->f_1 > ((uParam0[iVar0 /*7*/])->f_1 - 0.03472f))
			{
				(uParam0[iVar0 + 1 /*7*/])->f_1 = ((uParam0[iVar0 /*7*/])->f_1 - 0.03472f);
			}
			iVar0++;
		}
	}
	else
	{
		return;
	}
}

void func_440(var uParam0)//Position - 0x56AA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar3 = 0.5f;
	uParam0->f_2 = (uParam0->f_2 + MISC::GET_FRAME_TIME());
	fVar2 = (uParam0->f_2 / 0.75f);
	if (fVar2 < 1f)
	{
		fVar0 = GlobalFunc_4631(300f, 0);
		fVar1 = GlobalFunc_4631(260f, 0);
		uParam0->f_1 = (((-(fVar1 - fVar0) * (fVar2 / 0.75f)) * (fVar2 - 2f)) + fVar0);
		if (fVar2 < fVar3)
		{
			uParam0->f_4 = 255;
		}
		else
		{
			uParam0->f_4 = (255 - SYSTEM::ROUND((((fVar2 - fVar3) / fVar3) * 255f)));
		}
		uParam0->f_6 = 1;
	}
	else
	{
		uParam0->f_4 = 0;
		uParam0->f_6 = 0;
		uParam0->f_2 = -1f;
	}
}

void func_441(var uParam0, bool bParam1)//Position - 0x56B4B
{
	char* sVar0;
	
	if ((uParam0->f_15 > -1 && uParam0->f_16 > -1) && uParam0->f_17 > -1)
	{
		func_449(uParam0->f_16, uParam0->f_17, "MULTIPLIER", uParam0->f_18, uParam0->f_15, -1, 9, -1082130432, -1082130432, 0, 0, 0, uParam0->f_15, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (uParam0->f_7 > -1 && uParam0->f_8 > -1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
		{
			GlobalFunc_5852(uParam0->f_7, uParam0->f_8, "TIMER_TAR", -1, 1, 8, 0, 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5852(uParam0->f_7, uParam0->f_8, uParam0->f_6, -1, 1, 8, 0, 0, 0, 0, 0);
		}
	}
	if (uParam0->f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_9))
		{
			func_445(uParam0->f_4, "TIMER_BESTSCORE", -1, uParam0->f_5, 7, uParam0->f_22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_445(uParam0->f_4, uParam0->f_9, -1, uParam0->f_5, 7, uParam0->f_22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	if (uParam0->f_13 > -1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_12))
		{
			func_445(uParam0->f_13, "TIMER_GOAL", -1, uParam0->f_14, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_445(uParam0->f_13, uParam0->f_12, -1, uParam0->f_14, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	if (uParam0->f_10 != -1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_9))
		{
			func_445(uParam0->f_10, "TIMER_SCORE", -1, uParam0->f_11, 5, uParam0->f_22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		else if (bParam1)
		{
			func_445(uParam0->f_10, uParam0->f_9, -1, uParam0->f_11, 5, uParam0->f_22, 0, 0, 0, 0, 0, uParam0->f_11, 0, 0, 0, 0, 0);
		}
		else
		{
			func_445(uParam0->f_10, uParam0->f_9, -1, uParam0->f_11, 5, uParam0->f_22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	if (uParam0->f_20 != -1)
	{
		sVar0 = GlobalFunc_1078(uParam0->f_21 == 18, "SHR_PLUS_BONUS", "");
		if (bParam1)
		{
			func_445(uParam0->f_20, uParam0->f_19, -1, uParam0->f_21, 4, uParam0->f_22, sVar0, 0, 0, 0, 0, uParam0->f_21, 0, 0, 0, 0, 0);
		}
		else
		{
			func_445(uParam0->f_20, uParam0->f_19, -1, uParam0->f_21, 4, uParam0->f_22, sVar0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	if (uParam0->f_1 > -1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
		{
			func_442(uParam0->f_1, "TIM_TIMER", 0, 0, -1, 0, 3, 0, uParam0->f_2, 0, 0, 0, uParam0->f_2, 0);
		}
		else
		{
			func_442(uParam0->f_1, *uParam0, 0, 0, -1, 0, 3, 0, uParam0->f_2, 0, 0, 0, uParam0->f_2, 0);
		}
	}
}

void func_442(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13)//Position - 0x56DEB
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(7, iVar0);
		Global_1328872.f_3132[iVar0] = uParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = uParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = uParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}



void func_445(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x56F37
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(6, iVar0);
		Global_1328872.f_2704[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_2704.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_2704.f_147[iVar0] = uParam3;
		Global_1328872.f_2704.f_138[iVar0] = iParam2;
		Global_1328872.f_2704.f_210[iVar0] = iParam4;
		Global_1328872.f_2704.f_219[iVar0] = iParam5;
		StringCopy(&(Global_1328872.f_2704.f_228[iVar0 /*16*/]), sParam6, 64);
		Global_1328872.f_2704.f_357[iVar0] = iParam7;
		Global_1328872.f_2704.f_366[iVar0] = iParam8;
		Global_1328872.f_2704.f_401[iVar0] = iParam9;
		Global_1328872.f_2704.f_410[iVar0] = iParam10;
		Global_1328872.f_2704.f_165[iVar0] = iParam11;
		Global_1328872.f_2704.f_174[iVar0] = iParam12;
		Global_1328872.f_2704.f_183[iVar0] = iParam13;
		Global_1328872.f_2704.f_192[iVar0] = iParam14;
		Global_1328872.f_2704.f_201[iVar0] = iParam15;
		Global_1328872.f_2704.f_419[iVar0] = iParam16;
		if (iParam15 == 4 && GlobalFunc_899())
		{
			Global_1328872.f_764 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 1000)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1328872.f_768 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1328872.f_767 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1328872.f_764 = 1;
			}
			if (GlobalFunc_898())
			{
				Global_1328872.f_768 = 1;
			}
		}
	}
}




void func_449(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20)//Position - 0x57278
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(1, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(1, iVar0);
		Global_1328872.f_1066[iVar0] = uParam0;
		Global_1328872.f_1066.f_9[iVar0] = uParam1;
		StringCopy(&(Global_1328872.f_1066.f_18[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_1066.f_156[iVar0] = uParam3;
		Global_1328872.f_1066.f_217[iVar0] = uParam12;
		Global_1328872.f_1066.f_165[iVar0] = uParam4;
		Global_1328872.f_1066.f_147[iVar0] = iParam5;
		Global_1328872.f_1066.f_174[iVar0] = iParam6;
		Global_1328872.f_1066.f_183[iVar0 /*3*/] = iParam7;
		Global_1328872.f_1066.f_183[iVar0 /*3*/].f_1 = iParam8;
		Global_1328872.f_1066.f_208[iVar0] = iParam9;
		Global_2452830[iVar0] = iParam13;
		Global_2452839[iVar0] = iParam14;
		Global_2452848[iVar0] = iParam15;
		Global_2452857[iVar0] = iParam16;
		Global_2452866[iVar0] = iParam17;
		Global_2452875[iVar0] = iParam18;
		Global_2452884[iVar0] = iParam19;
		Global_2452893[iVar0] = iParam20;
		Global_1328872.f_1066.f_252[iVar0] = iParam10;
		Global_1328872.f_1066.f_261[iVar0] = iParam11;
		Global_1328872.f_764 = 1;
	}
}

int func_450(int iParam0)//Position - 0x573DC
{
	return func_357(iLocal_95, iParam0);
}

void func_451(var uParam0)//Position - 0x573EC
{
	*uParam0 = 1;
	uParam0->f_2 = 0;
}





void func_456()//Position - 0x576FB
{
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
}


void func_458()//Position - 0x5772A
{
	GlobalFunc_6915(&uLocal_102);
	GlobalFunc_2420();
}












void func_470(var uParam0, int iParam1)//Position - 0x57D3B
{
	GlobalFunc_5312(&(uParam0->f_10), iParam1);
}

void func_471(var uParam0)//Position - 0x57D4D
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_94);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((uParam0->f_116 - fVar0));
	}
}




void func_475(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, int iParam7)//Position - 0x57DA2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_333(uParam1->f_14, uParam1->f_15);
	if (!func_493(uParam1, 4096))
	{
		WEAPON::SET_AMMO_IN_CLIP(iLocal_94, iVar0, 0);
		WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_94, iVar0);
		WEAPON::SET_PED_AMMO(iLocal_94, iVar0, 0);
	}
	else
	{
		WEAPON::SET_AMMO_IN_CLIP(iLocal_94, iVar0, 0);
		WEAPON::SET_PED_AMMO(iLocal_94, iVar0, uParam1->f_7);
	}
	if (func_493(uParam1, 262144))
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_94, iVar0, joaat("component_at_pi_flsh"));
	}
	else if (func_493(uParam1, 524288))
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_94, iVar0, joaat("component_at_ar_flsh"));
	}
	func_470(uParam1, 524288);
	func_470(uParam1, 262144);
	func_470(uParam1, 4096);
	if (!bParam6)
	{
		func_496(&(uParam5->f_56), 0, 1, (!PLAYER::IS_PLAYER_ONLINE() || iParam7));
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		(uParam0[iVar1 /*4*/])->f_3 = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		uParam2->f_1651[iVar1 /*5*/].f_3 = -1;
		uParam2->f_1651[iVar1 /*5*/] = 12;
		uParam2->f_1651[iVar1 /*5*/].f_1 = 0f;
		uParam2->f_1651[iVar1 /*5*/].f_2 = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		(*uParam2)[iVar1 /*33*/] = -1;
		(uParam2[iVar1 /*33*/])->f_15 = -99;
		(uParam2[iVar1 /*33*/])->f_16 = 0;
		(uParam2[iVar1 /*33*/])->f_18 = -1f;
		(uParam2[iVar1 /*33*/])->f_27 = -1f;
		(uParam2[iVar1 /*33*/])->f_23 = 0f;
		(uParam2[iVar1 /*33*/])->f_21 = 0f;
		func_397(uParam2[iVar1 /*33*/], uParam0);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		(uParam3[iVar1 /*7*/])->f_6 = 0;
		(uParam3[iVar1 /*7*/])->f_2 = -1f;
		iVar1++;
	}
	uParam2->f_1902 = 0;
	uParam1->f_40.f_1 = 0;
	uParam1->f_40 = 0;
	uParam1->f_34.f_1 = 1;
	uParam1->f_34.f_5 = 0;
	func_451(&(uParam1->f_34));
	func_470(uParam1, 8192);
	func_470(uParam1, 1024);
	func_470(uParam1, 2048);
	func_470(uParam1, 512);
	uParam1->f_5 = 0;
	uParam1->f_7 = -1;
	GlobalFunc_235(&(uParam1->f_24));
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	uParam1->f_4 = 0;
	uParam1->f_19 = 0f;
	uParam1->f_20 = 0f;
	uParam1->f_21 = 0f;
	*uParam1 = 0;
	uParam1->f_22 = 0f;
	GlobalFunc_4963(&(uParam1->f_27), 0f);
	uParam1->f_30 = 0;
	GlobalFunc_235(&(uParam1->f_30.f_1));
	GlobalFunc_5385(1);
	func_476(uParam4);
}

void func_476(var uParam0)//Position - 0x57FF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if ((func_707((uParam0[iVar0 /*41*/][iVar1 /*10*/])->f_1, 0) || iVar1 == 0) || func_477((*uParam0[iVar0 /*41*/])[iVar1 /*10*/]))
			{
				func_354((*uParam0[iVar0 /*41*/])[iVar1 /*10*/], 1);
				iVar2++;
			}
			iVar1++;
		}
		if (iVar2 > 0)
		{
		}
		iVar0++;
	}
}

var func_477(int iParam0)//Position - 0x58079
{
	return Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/].f_1;
}

int func_478(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x58095
{
	var uVar0;
	char cVar1[64];
	
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	CAM::SET_WIDESCREEN_BORDERS(1, 100);
	INTERIOR::_0xAF348AFCB575A441("V_7_ShootRm");
	if (uParam0->f_1 > 0 && uParam0->f_1 != 99)
	{
		if (func_491())
		{
			uParam0->f_1 = 99;
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_490(uParam0);
			ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(uParam6->f_109, 3f, joaat("v_ilev_gc_door01"), -8f);
			func_489(uParam6->f_113, uParam6->f_116);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(uParam0->f_5, 0);
			return 1;
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			uParam0->f_4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_16, uParam0->f_19, 2);
			uParam0->f_5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_5, uParam0->f_4, "shoot_range_tutorial_cam", "mini@shoot_range");
			CAM::SET_CAM_ACTIVE(uParam0->f_5, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_94, uParam0->f_4, "mini@shoot_range", "shoot_range_tutorial_plyr", 1000f, -1.5f, 0, 0, 1148846080, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_94, 1);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_4, 0);
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uParam6->f_109, 3f, joaat("v_ilev_gc_door01"), 1, 0, 1);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar0, uParam0->f_4, "shoot_range_tutorial_door", "mini@shoot_range", 1000f, -1000f, 0, 1148846080);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_6, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_6, joaat("weapon_pistol"), -1, 1, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_6, uParam0->f_4, "mini@shoot_range", "shoot_range_tutorial_npc1", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_6, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_7, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_7, joaat("weapon_combatpistol"), -1, 1, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_7, uParam0->f_4, "mini@shoot_range", "shoot_range_tutorial_npc2", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_7, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_8, joaat("weapon_pistol"), -1, 1, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_8, uParam0->f_4, "mini@shoot_range", "shoot_range_tutorial_npc3", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_8, 1);
			}
			if (uParam1->f_38 == 0)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_AMMUNATION_GUN_RANGE", 1);
			}
			else
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_AMMUNATION_CYPRESS_FLATS_GUN_RANGE", 1);
			}
			func_488(uParam1);
			uParam0->f_3 = 1;
			break;
		
		case 1:
			func_481(PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_4), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
			StringCopy(&cVar1, "sceneTime = ", 64);
			StringIntConCat(&cVar1, SYSTEM::ROUND((PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_4) * 100f)), 64);
			GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar1, 0.5f, 0.8f, 0f, 0, 0, 255, 255);
			GRAPHICS::DRAW_DEBUG_TEXT("pedGuy1", ENTITY::GET_ENTITY_COORDS(uParam0->f_6, 0), 0, 0, 255, 255);
			GRAPHICS::DRAW_DEBUG_TEXT("pedGuy2", ENTITY::GET_ENTITY_COORDS(uParam0->f_7, 0), 0, 0, 255, 255);
			GRAPHICS::DRAW_DEBUG_TEXT("pedGuy3", ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 0), 0, 0, 255, 255);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_4))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_4) > 0.98f)
				{
					uParam0->f_3 = 2;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_4) > 0.88f)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_8))
					{
						if (!GlobalFunc_747(uParam0->f_2, 16))
						{
							GlobalFunc_812(&(uParam0->f_2), 16);
							WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_8, joaat("weapon_unarmed"), -1, 1, 1);
						}
					}
				}
			}
			else
			{
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			func_490(uParam0);
			ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(uParam6->f_109, 3f, joaat("v_ilev_gc_door01"), -8f);
			if (uParam1->f_38 == 0)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_AMMUNATION_GUN_RANGE", 0);
			}
			else
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_AMMUNATION_CYPRESS_FLATS_GUN_RANGE", 0);
			}
			return 1;
			break;
	}
	return 0;
}



void func_481(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x584C8
{
	func_380(uParam3[0 /*33*/], uParam5, uParam4, uParam6, uParam7, 1);
	func_380(uParam3[1 /*33*/], uParam5, uParam4, uParam6, uParam7, 1);
	func_380(uParam3[2 /*33*/], uParam5, uParam4, uParam6, uParam7, 1);
	func_380(uParam3[3 /*33*/], uParam5, uParam4, uParam6, uParam7, 1);
	func_380(uParam3[4 /*33*/], uParam5, uParam4, uParam6, uParam7, 1);
	switch (uParam1->f_1)
	{
		case 0:
			HUD::CLEAR_HELP(1);
			GlobalFunc_Display_Help_Text("SC_TUT_1");
			uParam1->f_1++;
			break;
		
		case 1:
			if (fParam0 >= 0.1121f)
			{
				GlobalFunc_Display_Help_Text("SC_TUT_2");
				uParam1->f_1++;
			}
			break;
		
		case 2:
			if (fParam0 >= 0.19431f)
			{
				func_487(uParam3[0 /*33*/], 11, -1, 268435456);
				func_405(uParam3[0 /*33*/], uParam4, uParam7, (*uParam3)[0 /*33*/], 1);
				func_399(uParam3[0 /*33*/], 128);
				func_487(uParam3[1 /*33*/], 7, -1, 268435456);
				func_405(uParam3[1 /*33*/], uParam4, uParam7, (*uParam3)[1 /*33*/], 1);
				func_399(uParam3[1 /*33*/], 128);
				uParam1->f_1++;
			}
			break;
		
		case 3:
			if (fParam0 >= 0.215f)
			{
				func_486(uParam1->f_8, (uParam3[0 /*33*/])->f_2.f_3, 1045220557);
				(uParam3[0 /*33*/])->f_16 |= 32;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam3[0 /*33*/])->f_2.f_10, 0, 0, 0);
				uParam1->f_1++;
			}
			break;
		
		case 4:
			if (fParam0 >= 0.2275f)
			{
				func_486(uParam1->f_8, (uParam3[1 /*33*/])->f_2.f_3, 1045220557);
				(uParam3[1 /*33*/])->f_16 |= 32;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam3[1 /*33*/])->f_2.f_10, 0, 0, 0);
				uParam1->f_1++;
			}
			break;
		
		case 5:
			if (fParam0 >= 0.26756f)
			{
				GlobalFunc_Display_Help_Text("SC_TUT_3");
				uParam1->f_1++;
			}
			break;
		
		case 6:
			if (fParam0 >= 0.3976f)
			{
				GlobalFunc_Display_Help_Text("SC_TUT_4");
				func_397(uParam3[0 /*33*/], uParam5);
				func_485(uParam3[0 /*33*/], uParam1, uParam2);
				func_399(uParam3[0 /*33*/], 128);
				uParam1->f_1++;
			}
			break;
		
		case 7:
			if (fParam0 >= 0.5f)
			{
				uParam1->f_1++;
				func_484(4);
			}
			break;
		
		case 8:
			if (fParam0 >= 0.542f)
			{
				uParam1->f_1++;
				func_484(3);
			}
			break;
		
		case 9:
			if (fParam0 >= 0.584f)
			{
				uParam1->f_1++;
				func_484(2);
			}
			break;
		
		case 10:
			if (fParam0 >= 0.6258f)
			{
				uParam1->f_1++;
				func_484(1);
			}
			break;
		
		case 11:
			if (fParam0 >= 0.66741f)
			{
				HUD::CLEAR_PRINTS();
				func_397(uParam3[0 /*33*/], uParam5);
				uParam4->f_6 = 10;
				uParam4->f_18 = 99f;
				uParam4->f_17 = 100f;
				func_487(uParam3[0 /*33*/], 6, -1, 268435456);
				func_405(uParam3[0 /*33*/], uParam4, uParam7, (*uParam3)[0 /*33*/], 1);
				func_399(uParam3[0 /*33*/], 128);
				func_487(uParam3[1 /*33*/], 7, -1, 268435456);
				func_405(uParam3[1 /*33*/], uParam4, uParam7, (*uParam3)[1 /*33*/], 1);
				func_399(uParam3[1 /*33*/], 128);
				func_487(uParam3[2 /*33*/], 8, -1, 268435456);
				func_405(uParam3[2 /*33*/], uParam4, uParam7, (*uParam3)[2 /*33*/], 1);
				func_399(uParam3[2 /*33*/], 128);
				func_487(uParam3[3 /*33*/], 9, -1, 268435456);
				func_405(uParam3[3 /*33*/], uParam4, uParam7, (*uParam3)[3 /*33*/], 1);
				func_399(uParam3[3 /*33*/], 128);
				GlobalFunc_Display_Help_Text("SC_TUT_5");
				uParam4->f_34.f_2 = 2;
				uParam1->f_1++;
			}
			break;
		
		case 12:
			func_482(uParam4);
			if (fParam0 >= 0.69731f)
			{
				func_486(uParam1->f_8, (uParam3[0 /*33*/])->f_2.f_3, 1045220557);
				(uParam3[0 /*33*/])->f_16 |= 32;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam3[0 /*33*/])->f_2.f_10, 0, 0, 0);
				func_371(&(uParam4->f_34));
				uParam1->f_1++;
			}
			break;
		
		case 13:
			func_482(uParam4);
			if (fParam0 >= 0.70702f)
			{
				func_486(uParam1->f_8, (uParam3[1 /*33*/])->f_2.f_3, 1045220557);
				(uParam3[1 /*33*/])->f_16 |= 32;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam3[1 /*33*/])->f_2.f_10, 0, 0, 0);
				func_371(&(uParam4->f_34));
				uParam1->f_1++;
			}
			break;
		
		case 14:
			func_482(uParam4);
			if (fParam0 >= 0.72f)
			{
				func_486(uParam1->f_8, (uParam3[3 /*33*/])->f_2.f_3, 1045220557);
				(uParam3[3 /*33*/])->f_16 |= 32;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam3[3 /*33*/])->f_2.f_10, 0, 0, 0);
				func_371(&(uParam4->f_34));
				uParam1->f_1++;
			}
			break;
		
		case 15:
			func_482(uParam4);
			if (fParam0 >= 0.7414f)
			{
				func_486(uParam1->f_8, (uParam3[2 /*33*/])->f_2.f_3, 1045220557);
				(uParam3[2 /*33*/])->f_16 |= 32;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam3[2 /*33*/])->f_2.f_10, 0, 0, 0);
				func_371(&(uParam4->f_34));
				uParam1->f_1++;
			}
			break;
		
		case 16:
			func_482(uParam4);
			if (fParam0 >= 0.83183f)
			{
				GlobalFunc_Display_Help_Text("SC_TUT_6");
				uParam1->f_1++;
			}
			break;
		
		case 17:
			if (fParam0 >= 0.96f)
			{
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_FLOATING_HELP(1, 1);
				PED::SET_PED_FIRING_PATTERN(iLocal_94, -957453492);
				func_470(uParam4, 1);
				uParam1->f_1++;
			}
			break;
	}
}

void func_482(var uParam0)//Position - 0x58AE1
{
	struct<22> Var0;
	
	Var0.f_1 = -1;
	Var0.f_2 = 1;
	Var0.f_4 = -1;
	Var0.f_5 = 1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = 1;
	Var0.f_13 = -1;
	Var0.f_14 = 1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = 21;
	Var0.f_20 = -1;
	Var0.f_21 = 1;
	Var0.f_15 = uParam0->f_34;
	Var0.f_16 = uParam0->f_34.f_2;
	Var0.f_17 = 4;
	func_483(&Var0);
}

void func_483(var uParam0)//Position - 0x58B6A
{
	func_449(uParam0->f_16, uParam0->f_17, "MULTIPLIER", uParam0->f_18, uParam0->f_15, -1, 8, -1082130432, -1082130432, 0, 0, 0, uParam0->f_15, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_484(int iParam0)//Position - 0x58BA7
{
	switch (iParam0)
	{
		case 1:
			GlobalFunc_159("SHR_TUT_Z1PTS", 7500);
			break;
		
		case 2:
			GlobalFunc_159("SHR_TUT_Z2PTS", 7500);
			break;
		
		case 3:
			GlobalFunc_159("SHR_TUT_Z3PTS", 7500);
			break;
		
		case 4:
			GlobalFunc_159("SHR_TUT_Z4PTS", 7500);
			break;
	}
}

void func_485(var uParam0, var uParam1, var uParam2)//Position - 0x58C0A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	iVar1 = joaat("prop_target_backboard");
	iVar0 = joaat("prop_target_arm");
	iVar2 = joaat("prop_target_comp_wood");
	GlobalFunc_5211(&(uParam0->f_16), 268435456);
	Var3 = { uParam1->f_22 };
	Var3.f_9 = 180f;
	Var3.f_3 = { Var3 };
	Var3.f_3.f_2 = (Var3.f_3.f_2 - 1.155f);
	Var3.f_11 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar1, Var3, 1, 1, 0);
	Var3.f_12 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar2, Var3, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_12, Var3.f_11, 0, 0f, -0.04f, -0.41f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Var3.f_10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, Var3, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Var3.f_11, Var3.f_10, 0, 0f, 0.007f, -0.76f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
	if (uParam2->f_38 == 0)
	{
		ENTITY::SET_ENTITY_ROTATION(Var3.f_10, -90f, 0f, 160f, 2, 1);
	}
	else
	{
		ENTITY::SET_ENTITY_ROTATION(Var3.f_10, -90f, 0f, 179f, 2, 1);
	}
	uParam0->f_16 = 0;
	GlobalFunc_5211(&(uParam0->f_16), 268435456);
	uParam0->f_19 = 100f;
	uParam0->f_2 = { Var3 };
	*uParam0 = 0;
	uParam0->f_18 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
	func_399(uParam0, 16);
	uParam0->f_28 = 0.5f;
	AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", uParam0->f_2.f_10, 0, 0, 0);
}

void func_486(int iParam0, struct<3> Param1, float fParam4)//Position - 0x58D6F
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1))
		{
			iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0);
			Var2 = { (Param1.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam4, fParam4)), (Param1.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam4, fParam4)), (Param1.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam4, fParam4)) };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, 1), Var2, 1, 1, uVar0, iParam0, 1, 1, -1082130432);
		}
	}
}

void func_487(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x58DE8
{
	if (*uParam0 != -1)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_15 = iParam2;
	uParam0->f_16 = 0;
	GlobalFunc_5211(&(uParam0->f_16), iParam3);
}

void func_488(var uParam0)//Position - 0x58E11
{
	func_829(iLocal_94, 1);
	uParam0->f_25 = PED::GET_PED_PROP_INDEX(iLocal_94, 0);
	uParam0->f_26 = PED::GET_PED_PROP_INDEX(iLocal_94, 1);
	PED::CLEAR_PED_PROP(iLocal_94, 0);
	PED::CLEAR_PED_PROP(iLocal_94, 1);
	uParam0->f_21 = OBJECT::CREATE_OBJECT(joaat("prop_ear_defenders_01"), ENTITY::GET_ENTITY_COORDS(iLocal_94, 1), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_21, iLocal_94, PED::GET_PED_BONE_INDEX(iLocal_94, 31086), Local_96, Local_99, 0, 0, 0, 0, 2, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_21, 0);
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			PED::SET_PED_PROP_INDEX(iLocal_94, 0, 3, 0, false);
			PED::SET_PED_PROP_INDEX(iLocal_94, 1, 10, 0, false);
			break;
		
		case 1:
			PED::SET_PED_PROP_INDEX(iLocal_94, 0, 1, 0, false);
			PED::SET_PED_PROP_INDEX(iLocal_94, 1, 11, 0, false);
			break;
		
		case 2:
			PED::SET_PED_PROP_INDEX(iLocal_94, 0, 3, 0, false);
			PED::SET_PED_PROP_INDEX(iLocal_94, 1, 11, 0, false);
			break;
	}
}

void func_489(struct<3> Param0, var uParam3)//Position - 0x58EF3
{
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
}

void func_490(var uParam0)//Position - 0x58F15
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		PED::DELETE_PED(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		PED::DELETE_PED(&(uParam0->f_7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		PED::DELETE_PED(&(uParam0->f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_10, 1, 1);
		OBJECT::DELETE_OBJECT(&(uParam0->f_10));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_11, 1, 1);
		OBJECT::DELETE_OBJECT(&(uParam0->f_11));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_12, 1, 1);
		OBJECT::DELETE_OBJECT(&(uParam0->f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_13, 1, 1);
		OBJECT::DELETE_OBJECT(&(uParam0->f_13));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_14, 1, 1);
		OBJECT::DELETE_OBJECT(&(uParam0->f_14));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_15, 1, 1);
		OBJECT::DELETE_OBJECT(&(uParam0->f_15));
	}
	MISC::CLEAR_AREA(uParam0->f_16, 35f, 1, 0, 0, 0);
}

int func_491()//Position - 0x59017
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(0, 18) || PAD::IS_CONTROL_JUST_RELEASED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_492(var uParam0, int iParam1)//Position - 0x59049
{
	uParam0->f_10 = (uParam0->f_10 || iParam1);
}

bool func_493(var uParam0, int iParam1)//Position - 0x5905C
{
	return (uParam0->f_10 && iParam1) != 0;
}



void func_496(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x590A6
{
	if (bParam2)
	{
		GlobalFunc_5210(uParam0, 0, 0, 1, 1);
		GlobalFunc_813(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		GlobalFunc_813(uParam0, GlobalFunc_1078(bParam1, "IB_QUIT", "FE_HLP3"), 2, 202, 1, 1, 0);
	}
	else
	{
		GlobalFunc_5210(uParam0, 0, 0, 1, 1);
		GlobalFunc_813(uParam0, GlobalFunc_1078(bParam1, "IB_QUIT", "FE_HLP3"), 2, 202, 1, 1, 0);
	}
	if (bParam3)
	{
		GlobalFunc_813(uParam0, "SCLB", 2, 211, 1, 1, 0);
	}
	GlobalFunc_5850(uParam0, 1);
	GlobalFunc_5275(uParam0, 1);
}

void func_497(bool bParam0)//Position - 0x5913B
{
	if (bParam0)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("SHR_QUIT_RANGE", "SHR_QUIT_DET", 36, 0, 0, -1, 0, 0, 1);
	}
	else
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("SHR_QUIT_RANGE", "SHR_QUIT_RNDDET", 36, 0, 0, -1, 0, 0, 1);
	}
	GlobalFunc_1100(1);
}






void func_503(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5930A
{
	func_470(uParam1, 1024);
	func_470(uParam1, 512);
	func_470(uParam1, 2048);
	func_470(uParam1, 8192);
	func_470(uParam1, 16384);
	func_470(uParam1, 32768);
	func_470(uParam1, 1048576);
	func_470(uParam1, 65536);
	func_470(uParam1, 1073741824);
	func_470(uParam1, 2097152);
	switch (uParam1->f_16)
	{
		case 0:
			switch (uParam1->f_14)
			{
				case 0:
					func_528(uParam1, uParam2);
					break;
				
				case 1:
					func_527(uParam1, uParam2);
					break;
				
				case 2:
					func_526(uParam1, uParam2);
					break;
				
				case 3:
					func_525(uParam1, uParam2);
					break;
				
				case 5:
					func_524(uParam1, uParam2);
					break;
				
				case 4:
					func_523(uParam1, uParam2);
					break;
				
				case 6:
					func_522(uParam1, uParam2);
					break;
			}
			break;
		
		case 1:
			switch (uParam1->f_14)
			{
				case 0:
					func_521(uParam1, uParam2);
					break;
				
				case 1:
					func_520(uParam1, uParam2);
					break;
				
				case 2:
					func_519(uParam1, uParam2);
					break;
				
				case 3:
					func_518(uParam1, uParam2);
					break;
				
				case 5:
					func_517(uParam1, uParam2);
					break;
				
				case 4:
					func_516(uParam1, uParam2);
					break;
				
				case 6:
					func_515(uParam1, uParam2);
					break;
			}
			break;
		
		case 2:
			switch (uParam1->f_14)
			{
				case 0:
					func_514(uParam1, uParam2);
					break;
				
				case 1:
					func_513(uParam1, uParam2);
					break;
				
				case 2:
					func_512(uParam1, uParam2);
					break;
				
				case 3:
					func_511(uParam1, uParam2);
					break;
				
				case 5:
					func_510(uParam1, uParam2);
					break;
				
				case 4:
					func_509(uParam1, uParam2);
					break;
				
				case 6:
					func_508(uParam1, uParam2);
					break;
			}
			break;
		
		case 3:
			switch (uParam1->f_14)
			{
				case 6:
					func_506(uParam1, uParam2);
					break;
			}
			break;
	}
	func_504(uParam0, uParam1, uParam3);
}

void func_504(var uParam0, var uParam1, var uParam2)//Position - 0x59543
{
	int iVar0;
	
	if (!*uParam0)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
	}
	iVar0 = func_333(uParam1->f_14, uParam1->f_15);
	func_725(iVar0, uParam1);
	func_505(uParam2, uParam1);
	GlobalFunc_6877(&(uParam1->f_27));
	GlobalFunc_5312(&(uParam1->f_10), 32);
	PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_94, 0);
	if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - uParam2->f_116)) > 20f)
	{
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam2->f_116);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
}

void func_505(var uParam0, var uParam1)//Position - 0x595CA
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
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	int iVar28;
	int iVar29;
	
	fVar0 = 0.2f;
	fVar1 = 0.4f;
	fVar2 = 0.6f;
	fVar3 = 0.8f;
	fVar4 = 0.05f;
	fVar5 = 0.275f;
	fVar6 = 0.5f;
	fVar7 = 0.725f;
	fVar8 = 0.95f;
	if (!func_493(uParam1, 2048))
	{
		iVar9 = 0;
		uParam0->f_81 = { uParam0->f_87[1 /*3*/] - uParam0->f_87[0 /*3*/] };
		uParam0->f_84 = { uParam0->f_87[2 /*3*/] - uParam0->f_87[0 /*3*/] };
	}
	else
	{
		iVar9 = 4;
		uParam0->f_81 = { uParam0->f_87[5 /*3*/] - uParam0->f_87[4 /*3*/] };
		uParam0->f_84 = { uParam0->f_87[6 /*3*/] - uParam0->f_87[4 /*3*/] };
	}
	Var13 = { uParam0->f_87[iVar9 /*3*/] + uParam0->f_84 * Vector(fVar4, fVar4, fVar4) };
	Var16 = { uParam0->f_87[iVar9 /*3*/] + uParam0->f_84 * Vector(fVar5, fVar5, fVar5) };
	Var19 = { uParam0->f_87[iVar9 /*3*/] + uParam0->f_84 * Vector(fVar6, fVar6, fVar6) };
	Var22 = { uParam0->f_87[iVar9 /*3*/] + uParam0->f_84 * Vector(fVar7, fVar7, fVar7) };
	Var25 = { uParam0->f_87[iVar9 /*3*/] + uParam0->f_84 * Vector(fVar8, fVar8, fVar8) };
	iVar28 = 0;
	while (iVar28 <= 19)
	{
		iVar29 = (iVar28 % 5);
		if (iVar28 < 5)
		{
			Var10 = { uParam0->f_81 * Vector(fVar0, fVar0, fVar0) };
		}
		else if (iVar28 < 10)
		{
			Var10 = { uParam0->f_81 * Vector(fVar1, fVar1, fVar1) };
		}
		else if (iVar28 < 15)
		{
			Var10 = { uParam0->f_81 * Vector(fVar2, fVar2, fVar2) };
		}
		else
		{
			Var10 = { uParam0->f_81 * Vector(fVar3, fVar3, fVar3) };
		}
		if (iVar29 == 0)
		{
			*(uParam0[iVar28 /*4*/]) = { Var13 + Var10 };
		}
		else if (iVar29 == 1)
		{
			*(uParam0[iVar28 /*4*/]) = { Var16 + Var10 };
		}
		else if (iVar29 == 2)
		{
			*(uParam0[iVar28 /*4*/]) = { Var19 + Var10 };
		}
		else if (iVar29 == 3)
		{
			*(uParam0[iVar28 /*4*/]) = { Var22 + Var10 };
		}
		else if (iVar29 == 4)
		{
			*(uParam0[iVar28 /*4*/]) = { Var25 + Var10 };
		}
		(uParam0[iVar28 /*4*/])->f_3 = 0;
		iVar28++;
	}
}

void func_506(var uParam0, var uParam1)//Position - 0x597FE
{
	uParam0->f_6 = 23;
	uParam0->f_18 = 60f;
	uParam0->f_17 = (100f + 200f);
	uParam0->f_13 = 21;
	func_492(uParam0, 512);
	func_492(uParam0, 65536);
	func_492(uParam0, 2048);
	uParam0->f_40.f_2 = 2;
	func_487(uParam1[0 /*33*/], 15, 0, 1073741824);
	func_507(uParam1, uParam0, 0, 1.1f, 3, 9);
	func_507(uParam1, uParam0, 0, 1f, 8, 9);
	func_487(uParam1[1 /*33*/], 18, 0, 1073741824);
	func_507(uParam1, uParam0, 1, 1.5f, 3, 3);
	func_507(uParam1, uParam0, 1, 0f, 8, 3);
	func_487(uParam1[2 /*33*/], 19, 0, 1073743872);
	func_507(uParam1, uParam0, 2, 1.3f, 3, 6);
	func_507(uParam1, uParam0, 2, 0f, 8, 6);
	func_487(uParam1[3 /*33*/], 2, 3, 268435456);
	func_507(uParam1, uParam0, 3, 1.9f, 3, 10);
	func_507(uParam1, uParam0, 3, 9f, 8, 10);
	func_487(uParam1[4 /*33*/], 5, 3, 1073743872);
	func_507(uParam1, uParam0, 4, 3.5f, 4, 14);
	func_507(uParam1, uParam0, 4, 9f, 8, 14);
	func_487(uParam1[5 /*33*/], 19, 3, 268435456);
	func_507(uParam1, uParam0, 5, 3.2f, 2, 9);
	func_507(uParam1, uParam0, 5, 9f, 10, 9);
	func_487(uParam1[6 /*33*/], 19, 6, 268435456);
	func_507(uParam1, uParam0, 6, 1.6f, 4, 8);
	func_507(uParam1, uParam0, 6, 9f, 10, -1);
	func_487(uParam1[7 /*33*/], 14, 6, 536870912);
	func_507(uParam1, uParam0, 7, 3f, 4, 3);
	func_507(uParam1, uParam0, 7, 9f, 10, -1);
	func_487(uParam1[8 /*33*/], 15, 8, 1073741824);
	func_507(uParam1, uParam0, 8, 1.6f, 3, 3);
	func_507(uParam1, uParam0, 8, 9f, 10, -1);
	func_487(uParam1[9 /*33*/], 10, 8, 268435456);
	func_507(uParam1, uParam0, 9, 1.6f, 3, 4);
	func_507(uParam1, uParam0, 9, 9f, 10, -1);
	func_487(uParam1[10 /*33*/], 1, 10, 536870912);
	func_507(uParam1, uParam0, 10, 3f, 4, 16);
	func_507(uParam1, uParam0, 10, 9f, 10, -1);
	func_487(uParam1[11 /*33*/], 2, 10, 268435456);
	func_507(uParam1, uParam0, 11, 2.3f, 4, 15);
	func_507(uParam1, uParam0, 11, 9f, 10, -1);
	func_487(uParam1[12 /*33*/], 0, 10, 1073743872);
	func_507(uParam1, uParam0, 12, 2.6f, 4, 17);
	func_507(uParam1, uParam0, 12, 9f, 10, -1);
	func_487(uParam1[13 /*33*/], 7, 13, 268435456);
	func_507(uParam1, uParam0, 13, 3f, 3, 17);
	func_507(uParam1, uParam0, 13, 10f, 10, -1);
	func_487(uParam1[14 /*33*/], 9, 13, 1073743872);
	func_507(uParam1, uParam0, 14, 2.4f, 3, 15);
	func_507(uParam1, uParam0, 14, 9f, 8, 15);
	func_487(uParam1[15 /*33*/], 5, 13, 536870912);
	func_507(uParam1, uParam0, 15, 2.7f, 3, 19);
	func_507(uParam1, uParam0, 15, 10f, 10, -1);
	func_487(uParam1[16 /*33*/], 4, 13, 268437504);
	func_507(uParam1, uParam0, 16, 1.9f, 2, 15);
	func_507(uParam1, uParam0, 16, 9f, 10, -1);
	func_487(uParam1[17 /*33*/], 1, 17, 268435456);
	func_507(uParam1, uParam0, 17, 3.5f, 3, 19);
	func_507(uParam1, uParam0, 17, 10f, 10, -1);
	func_487(uParam1[18 /*33*/], 3, 17, 1073741824);
	func_507(uParam1, uParam0, 18, 3.6f, 3, 15);
	func_507(uParam1, uParam0, 18, 10f, 10, -1);
	func_487(uParam1[19 /*33*/], 0, 19, 268435456);
	func_507(uParam1, uParam0, 19, 1.4f, 5, 16);
	func_507(uParam1, uParam0, 19, 3.4f, 5, 3);
	func_507(uParam1, uParam0, 19, 11f, 8, 3);
	func_487(uParam1[20 /*33*/], 4, 19, 1073741824);
	func_507(uParam1, uParam0, 20, 1.6f, 5, 18);
	func_507(uParam1, uParam0, 20, 3.6f, 5, 1);
	func_507(uParam1, uParam0, 20, 11f, 8, 1);
	func_487(uParam1[21 /*33*/], 0, 21, 536870912);
	func_507(uParam1, uParam0, 21, 1.7f, 4, 4);
	func_507(uParam1, uParam0, 21, 4.7f, 4, 15);
	func_507(uParam1, uParam0, 21, 11f, 8, 15);
	func_487(uParam1[22 /*33*/], 19, 21, 536870912);
	func_507(uParam1, uParam0, 22, 1.5f, 4, 15);
	func_507(uParam1, uParam0, 22, 4.5f, 4, 4);
	func_507(uParam1, uParam0, 22, 9f, 8, 4);
	uParam0->f_8 = 50;
}

void func_507(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5)//Position - 0x59D3A
{
	if (uParam0->f_1902 >= 50)
	{
		return;
	}
	if (fParam3 > uParam1->f_18)
	{
	}
	uParam0->f_1651[uParam0->f_1902 /*5*/].f_3 = iParam2;
	uParam0->f_1651[uParam0->f_1902 /*5*/] = iParam4;
	uParam0->f_1651[uParam0->f_1902 /*5*/].f_1 = fParam3;
	if (iParam5 != -1)
	{
		uParam0->f_1651[uParam0->f_1902 /*5*/].f_4 = iParam5;
	}
	uParam0->f_1902++;
}

void func_508(var uParam0, var uParam1)//Position - 0x59DA9
{
	uParam0->f_6 = 20;
	uParam0->f_18 = 45f;
	uParam0->f_17 = (100f + 200f);
	uParam0->f_13 = 20;
	func_492(uParam0, 512);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 2;
	func_487(uParam1[0 /*33*/], 12, 0, 1073741824);
	func_507(uParam1, uParam0, 0, 0.5f, 4, 14);
	func_507(uParam1, uParam0, 0, 9f, 10, -1);
	func_487(uParam1[1 /*33*/], 14, 0, 1073741824);
	func_507(uParam1, uParam0, 1, 1.5f, 3, 5);
	func_507(uParam1, uParam0, 1, 9f, 10, -1);
	func_487(uParam1[2 /*33*/], 7, 2, 268435456);
	func_507(uParam1, uParam0, 2, 1.7f, 3, 18);
	func_507(uParam1, uParam0, 2, 9f, 10, -1);
	func_487(uParam1[3 /*33*/], 5, 2, 1073741824);
	func_507(uParam1, uParam0, 3, 2f, 3, 19);
	func_507(uParam1, uParam0, 3, 9f, 10, -1);
	func_487(uParam1[4 /*33*/], 9, 2, 536872960);
	func_507(uParam1, uParam0, 4, 2.3f, 3, 16);
	func_507(uParam1, uParam0, 4, 9f, 10, -1);
	func_487(uParam1[5 /*33*/], 0, 5, 536870912);
	func_507(uParam1, uParam0, 5, 3.3f, 4, 15);
	func_507(uParam1, uParam0, 5, 9f, 10, -1);
	func_487(uParam1[6 /*33*/], 15, 5, 536870912);
	func_507(uParam1, uParam0, 6, 3.3f, 4, 6);
	func_507(uParam1, uParam0, 6, 9f, 10, -1);
	func_487(uParam1[7 /*33*/], 12, 7, 268435456);
	func_507(uParam1, uParam0, 7, 1.7f, 4, 17);
	func_507(uParam1, uParam0, 7, 9f, 10, -1);
	func_487(uParam1[8 /*33*/], 13, 7, 536870912);
	func_507(uParam1, uParam0, 8, 2f, 4, 16);
	func_507(uParam1, uParam0, 8, 9f, 10, -1);
	func_487(uParam1[9 /*33*/], 11, 7, 1073743872);
	func_507(uParam1, uParam0, 9, 2.3f, 4, 18);
	func_507(uParam1, uParam0, 9, 9f, 10, -1);
	func_487(uParam1[10 /*33*/], 7, 10, 268435456);
	func_507(uParam1, uParam0, 10, 2.7f, 3, 18);
	func_507(uParam1, uParam0, 10, 10f, 10, -1);
	func_487(uParam1[11 /*33*/], 9, 10, 1073743872);
	func_507(uParam1, uParam0, 11, 2.1f, 3, 16);
	func_507(uParam1, uParam0, 11, 10f, 10, -1);
	func_487(uParam1[12 /*33*/], 5, 10, 536870912);
	func_507(uParam1, uParam0, 12, 2.4f, 3, 19);
	func_507(uParam1, uParam0, 12, 10f, 10, -1);
	func_487(uParam1[13 /*33*/], 4, 10, 536872960);
	func_507(uParam1, uParam0, 13, 1.6f, 2, 15);
	func_507(uParam1, uParam0, 13, 10f, 10, -1);
	func_487(uParam1[14 /*33*/], 15, 14, 268435456);
	func_507(uParam1, uParam0, 14, 2.8f, 3, 4);
	func_507(uParam1, uParam0, 14, 9f, 10, -1);
	func_487(uParam1[15 /*33*/], 19, 14, 1073741824);
	func_507(uParam1, uParam0, 15, 2.9f, 3, 0);
	func_507(uParam1, uParam0, 15, 9f, 10, -1);
	func_487(uParam1[16 /*33*/], 11, 16, 268435456);
	func_507(uParam1, uParam0, 16, 2.7f, 4, 16);
	func_507(uParam1, uParam0, 16, 9f, 10, -1);
	func_487(uParam1[17 /*33*/], 10, 16, 1073743872);
	func_507(uParam1, uParam0, 17, 2.1f, 4, 17);
	func_507(uParam1, uParam0, 17, 9f, 8, 17);
	func_487(uParam1[18 /*33*/], 12, 16, 536870912);
	func_507(uParam1, uParam0, 18, 2.4f, 4, 15);
	func_507(uParam1, uParam0, 18, 9f, 10, -1);
	func_487(uParam1[19 /*33*/], 5, 16, 536872960);
	func_507(uParam1, uParam0, 19, 1.6f, 3, 17);
	func_507(uParam1, uParam0, 19, 9f, 10, -1);
	uParam0->f_8 = 40;
}

void func_509(var uParam0, var uParam1)//Position - 0x5A206
{
	uParam0->f_13 = 14;
	uParam0->f_17 = (100f / 7f);
	uParam0->f_6 = 15;
	uParam0->f_18 = 75f;
	uParam0->f_8 = 0;
	uParam0->f_40.f_2 = 0;
	func_492(uParam0, 2048);
	func_492(uParam0, 1048576);
	func_492(uParam0, 65536);
	func_487(uParam1[0 /*33*/], 5, 0, 272631808);
	func_487(uParam1[1 /*33*/], 7, 0, 1086324736);
	func_487(uParam1[2 /*33*/], 9, 0, 272631808);
	func_487(uParam1[3 /*33*/], 0, 3, 541065216);
	func_487(uParam1[4 /*33*/], 1, 3, 1077938176);
	func_487(uParam1[5 /*33*/], 3, 3, 1077936128);
	func_487(uParam1[6 /*33*/], 4, 3, 541067264);
	func_487(uParam1[7 /*33*/], 6, 7, 272629760);
	func_487(uParam1[8 /*33*/], 11, 7, 541067264);
	func_487(uParam1[9 /*33*/], 13, 7, 541065216);
	func_487(uParam1[10 /*33*/], 8, 7, 272631808);
	func_487(uParam1[11 /*33*/], 10, 11, 1077936128);
	func_487(uParam1[12 /*33*/], 14, 11, 1077936128);
	func_487(uParam1[13 /*33*/], 2, 11, 541067264);
	func_487(uParam1[14 /*33*/], 12, 11, 272631808);
}

void func_510(var uParam0, var uParam1)//Position - 0x5A356
{
	uParam0->f_6 = 20;
	uParam0->f_18 = 40f;
	uParam0->f_17 = (100f / 3f);
	uParam0->f_13 = 17;
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 5;
	func_492(uParam0, 1048576);
	func_492(uParam0, 1073741824);
	uParam0->f_8 = 0;
	func_487(uParam1[0 /*33*/], 0, 0, 537919488);
	func_487(uParam1[1 /*33*/], 1, 0, 537919488);
	func_487(uParam1[2 /*33*/], 2, 0, 537919488);
	func_487(uParam1[3 /*33*/], 3, 0, 537921536);
	func_487(uParam1[4 /*33*/], 4, 0, 537921536);
	func_487(uParam1[5 /*33*/], 5, 0, 269486080);
	func_487(uParam1[6 /*33*/], 6, 0, 269486080);
	func_487(uParam1[7 /*33*/], 7, 0, 269486080);
	func_487(uParam1[8 /*33*/], 8, 0, 269486080);
	func_487(uParam1[9 /*33*/], 9, 0, 269486080);
	func_487(uParam1[10 /*33*/], 10, 0, 1074792448);
	func_487(uParam1[11 /*33*/], 11, 0, 1074792448);
	func_487(uParam1[12 /*33*/], 12, 0, 1074792448);
	func_487(uParam1[13 /*33*/], 13, 0, 1074792448);
	func_487(uParam1[14 /*33*/], 14, 0, 1074792448);
	func_487(uParam1[15 /*33*/], 15, 0, 537921536);
	func_487(uParam1[16 /*33*/], 16, 0, 537921536);
	func_487(uParam1[17 /*33*/], 17, 0, 537921536);
	func_487(uParam1[18 /*33*/], 18, 0, 537921536);
	func_487(uParam1[19 /*33*/], 19, 0, 537921536);
}

void func_511(var uParam0, var uParam1)//Position - 0x5A501
{
	uParam0->f_6 = 20;
	uParam0->f_18 = 29.2f;
	uParam0->f_17 = 100f;
	uParam0->f_13 = 8;
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 2;
	uParam0->f_8 = 47;
	func_487(uParam1[0 /*33*/], 0, 0, 268435456);
	func_507(uParam1, uParam0, 0, 0.5f, 5, 4);
	func_507(uParam1, uParam0, 0, 3f, 10, -1);
	func_487(uParam1[1 /*33*/], 9, 0, 268435456);
	func_507(uParam1, uParam0, 1, 0.5f, 2, 5);
	func_507(uParam1, uParam0, 1, 6f, 10, -1);
	func_487(uParam1[2 /*33*/], 2, 0, 268437504);
	func_507(uParam1, uParam0, 2, 0.5f, 4, 17);
	func_507(uParam1, uParam0, 2, 4f, 10, -1);
	func_487(uParam1[3 /*33*/], 10, 3, 268435456);
	func_507(uParam1, uParam0, 3, 0.5f, 4, 14);
	func_507(uParam1, uParam0, 3, 4f, 10, 14);
	func_487(uParam1[4 /*33*/], 9, 3, 268435456);
	func_507(uParam1, uParam0, 4, 0.5f, 4, 5);
	func_507(uParam1, uParam0, 4, 4f, 10, 5);
	func_487(uParam1[5 /*33*/], 1, 3, 268437504);
	func_507(uParam1, uParam0, 5, 0.5f, 4, 16);
	func_507(uParam1, uParam0, 5, 4f, 10, 16);
	func_487(uParam1[6 /*33*/], 15, 6, 268435456);
	func_507(uParam1, uParam0, 6, 0.5f, 4, 19);
	func_507(uParam1, uParam0, 6, 4f, 10, -1);
	func_487(uParam1[7 /*33*/], 14, 6, 268435456);
	func_507(uParam1, uParam0, 7, 0.5f, 4, 10);
	func_507(uParam1, uParam0, 7, 4f, 10, -1);
	func_487(uParam1[8 /*33*/], 3, 6, 268437504);
	func_507(uParam1, uParam0, 8, 0.5f, 4, 18);
	func_507(uParam1, uParam0, 8, 4f, 10, -1);
	func_487(uParam1[9 /*33*/], 1, 9, 268435456);
	func_507(uParam1, uParam0, 9, 0.5f, 2, 16);
	func_507(uParam1, uParam0, 9, 6f, 10, -1);
	func_487(uParam1[10 /*33*/], 2, 9, 268435456);
	func_507(uParam1, uParam0, 10, 0.5f, 2, 17);
	func_507(uParam1, uParam0, 10, 6f, 10, -1);
	func_487(uParam1[11 /*33*/], 10, 9, 268437504);
	func_507(uParam1, uParam0, 11, 0.5f, 5, 14);
	func_507(uParam1, uParam0, 11, 3f, 10, -1);
	func_487(uParam1[12 /*33*/], 19, 9, 268437504);
	func_507(uParam1, uParam0, 12, 0.5f, 5, 15);
	func_507(uParam1, uParam0, 12, 3f, 10, -1);
	func_487(uParam1[13 /*33*/], 2, 13, 268435456);
	func_507(uParam1, uParam0, 13, 0.5f, 2, 17);
	func_507(uParam1, uParam0, 13, 5.5f, 2, 2);
	func_507(uParam1, uParam0, 13, 11f, 10, -1);
	func_487(uParam1[14 /*33*/], 3, 13, 268435456);
	func_507(uParam1, uParam0, 14, 0.5f, 2, 18);
	func_507(uParam1, uParam0, 14, 5.5f, 2, 3);
	func_507(uParam1, uParam0, 14, 11f, 10, -1);
	func_487(uParam1[15 /*33*/], 15, 13, 268437504);
	func_507(uParam1, uParam0, 15, 0.5f, 5, 19);
	func_507(uParam1, uParam0, 15, 5.5f, 5, 15);
	func_507(uParam1, uParam0, 15, 8f, 10, -1);
	func_487(uParam1[16 /*33*/], 14, 13, 268437504);
	func_507(uParam1, uParam0, 16, 0.5f, 5, 10);
	func_507(uParam1, uParam0, 16, 5.5f, 5, 14);
	func_507(uParam1, uParam0, 16, 8f, 10, -1);
	func_487(uParam1[17 /*33*/], 0, 17, 268435456);
	func_507(uParam1, uParam0, 17, 0.5f, 2, 18);
	func_507(uParam1, uParam0, 17, 5.5f, 2, 0);
	func_507(uParam1, uParam0, 17, 11f, 10, -1);
	func_487(uParam1[18 /*33*/], 4, 17, 268435456);
	func_507(uParam1, uParam0, 18, 0.5f, 3, 16);
	func_507(uParam1, uParam0, 18, 5.5f, 3, 4);
	func_507(uParam1, uParam0, 18, 10f, 10, -1);
	func_487(uParam1[19 /*33*/], 2, 17, 268437504);
	func_507(uParam1, uParam0, 19, 0.5f, 4, 17);
	func_507(uParam1, uParam0, 19, 5.5f, 4, 2);
	func_507(uParam1, uParam0, 19, 9f, 10, -1);
}

void func_512(var uParam0, var uParam1)//Position - 0x5A99C
{
	uParam0->f_6 = 10;
	uParam0->f_18 = 30f;
	uParam0->f_17 = (100f / 2.9f);
	uParam0->f_13 = 11;
	func_492(uParam0, 2048);
	uParam0->f_40.f_2 = 0;
	uParam0->f_8 = 35;
	func_487(uParam1[0 /*33*/], 4, 0, 276824064);
	func_507(uParam1, uParam0, 0, 0.75f, 2, 0);
	func_507(uParam1, uParam0, 0, -1f, 8, 0);
	func_487(uParam1[1 /*33*/], 5, 1, 536870912);
	func_507(uParam1, uParam0, 1, 0.75f, 2, 9);
	func_507(uParam1, uParam0, 1, -1f, 8, 9);
	func_487(uParam1[2 /*33*/], 14, 2, 1073741824);
	func_507(uParam1, uParam0, 2, 0.75f, 2, 10);
	func_507(uParam1, uParam0, 2, -1f, 8, 10);
	func_487(uParam1[3 /*33*/], 15, 3, 268435456);
	func_507(uParam1, uParam0, 3, 0.75f, 2, 19);
	func_507(uParam1, uParam0, 3, -1f, 8, 19);
	func_487(uParam1[4 /*33*/], 15, 4, 268435456);
	func_507(uParam1, uParam0, 4, 1f, 3, 0);
	func_507(uParam1, uParam0, 4, 5f, 3, 15);
	func_507(uParam1, uParam0, 4, 9f, 3, 0);
	func_507(uParam1, uParam0, 4, 13f, 3, 15);
	func_507(uParam1, uParam0, 4, 29f, 9, -1);
	func_487(uParam1[5 /*33*/], 17, 4, 536870912);
	func_507(uParam1, uParam0, 5, 1f, 3, 2);
	func_507(uParam1, uParam0, 5, 5f, 3, 17);
	func_507(uParam1, uParam0, 5, 9f, 3, 2);
	func_507(uParam1, uParam0, 5, 13f, 3, 17);
	func_507(uParam1, uParam0, 5, 29f, 9, -1);
	func_487(uParam1[6 /*33*/], 19, 4, 268435456);
	func_507(uParam1, uParam0, 6, 1f, 3, 4);
	func_507(uParam1, uParam0, 6, 5f, 3, 19);
	func_507(uParam1, uParam0, 6, 9f, 3, 4);
	func_507(uParam1, uParam0, 6, 13f, 3, 19);
	func_507(uParam1, uParam0, 6, 29f, 9, -1);
	func_487(uParam1[7 /*33*/], 1, 7, 536870912);
	func_507(uParam1, uParam0, 7, 1f, 3, 16);
	func_507(uParam1, uParam0, 7, 5f, 3, 1);
	func_507(uParam1, uParam0, 7, 9f, 3, 16);
	func_507(uParam1, uParam0, 7, 13f, 3, 1);
	func_507(uParam1, uParam0, 7, 30f, 9, -1);
	func_487(uParam1[8 /*33*/], 2, 7, 1073741824);
	func_507(uParam1, uParam0, 8, 1f, 3, 17);
	func_507(uParam1, uParam0, 8, 5f, 3, 2);
	func_507(uParam1, uParam0, 8, 9f, 3, 17);
	func_507(uParam1, uParam0, 8, 13f, 3, 2);
	func_507(uParam1, uParam0, 8, 30f, 9, -1);
	func_487(uParam1[9 /*33*/], 3, 7, 536872960);
	func_507(uParam1, uParam0, 9, 1f, 3, 18);
	func_507(uParam1, uParam0, 9, 5f, 3, 3);
	func_507(uParam1, uParam0, 9, 9f, 3, 18);
	func_507(uParam1, uParam0, 9, 13f, 3, 3);
	func_507(uParam1, uParam0, 9, 30f, 9, -1);
}

void func_513(var uParam0, var uParam1)//Position - 0x5ACC8
{
	uParam0->f_6 = 10;
	uParam0->f_8 = 30;
	uParam0->f_18 = 33f;
	uParam0->f_17 = 0f;
	uParam0->f_13 = 5;
	func_492(uParam0, 1024);
	func_492(uParam0, 65536);
	func_492(uParam0, 2097152);
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 7, 0, 276824064);
	func_507(uParam1, uParam0, 0, 2.5f, 9, -1);
	func_487(uParam1[1 /*33*/], 11, 999, 536870912);
	func_507(uParam1, uParam0, 1, 2.5f, 11, -1);
	func_507(uParam1, uParam0, 1, 5f, 9, -1);
	func_487(uParam1[2 /*33*/], 18, 999, 536870912);
	func_507(uParam1, uParam0, 2, 5f, 11, -1);
	func_507(uParam1, uParam0, 2, 7.5f, 9, -1);
	func_487(uParam1[3 /*33*/], 15, 999, 1073741824);
	func_507(uParam1, uParam0, 3, 13.5f, 11, -1);
	func_507(uParam1, uParam0, 3, 0.1f, 4, 19);
	func_507(uParam1, uParam0, 3, 17f, 9, -1);
	func_487(uParam1[4 /*33*/], 7, 999, 536870912);
	func_507(uParam1, uParam0, 4, 10.5f, 11, -1);
	func_507(uParam1, uParam0, 4, 13.5f, 9, -1);
	func_487(uParam1[5 /*33*/], 14, 999, 1073741824);
	func_507(uParam1, uParam0, 5, 7.5f, 11, -1);
	func_507(uParam1, uParam0, 5, 0.1f, 4, 10);
	func_507(uParam1, uParam0, 5, 11f, 9, -1);
	func_487(uParam1[6 /*33*/], 19, 6, 1073741824);
	func_487(uParam1[7 /*33*/], 18, 6, 268435456);
	func_487(uParam1[8 /*33*/], 17, 6, 268437504);
	func_487(uParam1[9 /*33*/], 16, 6, 1073743872);
	func_507(uParam1, uParam0, 6, 0f, 7, -1);
	func_507(uParam1, uParam0, 7, 0f, 7, -1);
	func_507(uParam1, uParam0, 8, 0f, 7, -1);
	func_507(uParam1, uParam0, 9, 0f, 7, -1);
	func_507(uParam1, uParam0, 10, 0f, 7, -1);
	func_507(uParam1, uParam0, 6, 0.1f, 7, -1);
	func_507(uParam1, uParam0, 6, 0.1f, 4, 4);
	func_507(uParam1, uParam0, 6, -1f, 8, 4);
	func_507(uParam1, uParam0, 7, 3f, 7, -1);
	func_507(uParam1, uParam0, 7, 3f, 4, 3);
	func_507(uParam1, uParam0, 7, -1f, 8, 3);
	func_507(uParam1, uParam0, 8, 8.5f, 7, -1);
	func_507(uParam1, uParam0, 8, 8.5f, 4, 2);
	func_507(uParam1, uParam0, 8, -1f, 8, 2);
	func_507(uParam1, uParam0, 9, 11.4f, 7, -1);
	func_507(uParam1, uParam0, 9, 11.4f, 4, 1);
	func_507(uParam1, uParam0, 9, -1f, 8, 1);
}

void func_514(var uParam0, var uParam1)//Position - 0x5AF8D
{
	uParam0->f_6 = 1;
	uParam0->f_18 = 33f;
	uParam0->f_17 = 0f;
	uParam0->f_13 = 2;
	func_492(uParam0, 1024);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 4, 0, 276824064);
	uParam0->f_8 = 16;
	func_507(uParam1, uParam0, 0, 1f, 4, 0);
	func_507(uParam1, uParam0, 0, 4.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 5.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 5.5f, 4, 4);
	func_507(uParam1, uParam0, 0, 8.6f, 7, -1);
	func_507(uParam1, uParam0, 0, 10.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 10.5f, 4, 0);
	func_507(uParam1, uParam0, 0, 13.6f, 7, -1);
	func_507(uParam1, uParam0, 0, 15.6f, 7, -1);
	func_507(uParam1, uParam0, 0, 16f, 4, 4);
	func_507(uParam1, uParam0, 0, 19.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 21.6f, 7, -1);
	func_507(uParam1, uParam0, 0, 22f, 4, 0);
	func_507(uParam1, uParam0, 0, 25.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 28.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 28.5f, 4, 4);
}

void func_515(var uParam0, var uParam1)//Position - 0x5B0D9
{
	uParam0->f_6 = 16;
	uParam0->f_18 = 45f;
	uParam0->f_17 = (100f + 300f);
	uParam0->f_13 = 19;
	func_492(uParam0, 2048);
	func_492(uParam0, 512);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 2;
	uParam0->f_8 = 32;
	func_487(uParam1[0 /*33*/], 3, 0, 268435456);
	func_507(uParam1, uParam0, 0, 1f, 2, 16);
	func_507(uParam1, uParam0, 0, 7.5f, 10, -1);
	func_487(uParam1[1 /*33*/], 1, 0, 268435456);
	func_507(uParam1, uParam0, 1, 1.25f, 2, 18);
	func_507(uParam1, uParam0, 1, 7.5f, 10, -1);
	func_487(uParam1[2 /*33*/], 3, 2, 268435456);
	func_507(uParam1, uParam0, 2, 2f, 3, 8);
	func_507(uParam1, uParam0, 2, 7.5f, 10, -1);
	func_487(uParam1[3 /*33*/], 4, 2, 268435456);
	func_507(uParam1, uParam0, 3, 3f, 3, 7);
	func_507(uParam1, uParam0, 3, 7.5f, 10, -1);
	func_487(uParam1[4 /*33*/], 7, 2, 268437504);
	func_507(uParam1, uParam0, 4, 2.4f, 3, 3);
	func_507(uParam1, uParam0, 4, 7.5f, 10, -1);
	func_487(uParam1[5 /*33*/], 10, 5, 268435456);
	func_507(uParam1, uParam0, 5, 2f, 3, 2);
	func_507(uParam1, uParam0, 5, 7.5f, 10, -1);
	func_487(uParam1[6 /*33*/], 8, 5, 268435456);
	func_507(uParam1, uParam0, 6, 2f, 3, 6);
	func_507(uParam1, uParam0, 6, 7.5f, 10, -1);
	func_487(uParam1[7 /*33*/], 11, 7, 268435456);
	func_507(uParam1, uParam0, 7, 2f, 3, 16);
	func_507(uParam1, uParam0, 7, 7.5f, 10, -1);
	func_487(uParam1[8 /*33*/], 10, 7, 268435456);
	func_507(uParam1, uParam0, 8, 3f, 3, 17);
	func_507(uParam1, uParam0, 8, 7.5f, 10, -1);
	func_487(uParam1[9 /*33*/], 17, 7, 268437504);
	func_507(uParam1, uParam0, 9, 2.4f, 3, 11);
	func_507(uParam1, uParam0, 9, 7.5f, 10, -1);
	func_487(uParam1[10 /*33*/], 4, 10, 268435456);
	func_507(uParam1, uParam0, 10, 2f, 2, 13);
	func_507(uParam1, uParam0, 10, 11f, 10, -1);
	func_487(uParam1[11 /*33*/], 3, 10, 268435456);
	func_507(uParam1, uParam0, 11, 2.25f, 2, 14);
	func_507(uParam1, uParam0, 11, 11f, 10, -1);
	func_487(uParam1[12 /*33*/], 18, 10, 268437504);
	func_507(uParam1, uParam0, 12, 2f, 1, 5);
	func_507(uParam1, uParam0, 12, 11f, 10, -1);
	func_487(uParam1[13 /*33*/], 15, 10, 268437504);
	func_507(uParam1, uParam0, 13, 2.25f, 1, 8);
	func_507(uParam1, uParam0, 13, 11f, 10, -1);
	func_487(uParam1[14 /*33*/], 11, 14, 268435456);
	func_507(uParam1, uParam0, 14, 2.5f, 3, 13);
	func_507(uParam1, uParam0, 14, 7.5f, 10, -1);
	func_487(uParam1[15 /*33*/], 13, 14, 268435456);
	func_507(uParam1, uParam0, 15, 2.75f, 3, 11);
	func_507(uParam1, uParam0, 15, 7.5f, 10, -1);
}

void func_516(var uParam0, var uParam1)//Position - 0x5B448
{
	uParam0->f_13 = 13;
	uParam0->f_17 = 0f;
	uParam0->f_6 = 5;
	uParam0->f_18 = 64.5f;
	uParam0->f_8 = 45;
	uParam0->f_40.f_2 = 0;
	func_492(uParam0, 2048);
	func_492(uParam0, 1048576);
	func_492(uParam0, 65536);
	func_492(uParam0, 1024);
	func_487(uParam1[0 /*33*/], 0, 0, 537919488);
	func_487(uParam1[1 /*33*/], 6, 0, 1074790400);
	func_487(uParam1[2 /*33*/], 12, 0, 546310144);
	func_487(uParam1[3 /*33*/], 8, 0, 269486080);
	func_487(uParam1[4 /*33*/], 4, 0, 1074792448);
	func_507(uParam1, uParam0, 0, 0f, 7, -1);
	func_507(uParam1, uParam0, 1, 0f, 7, -1);
	func_507(uParam1, uParam0, 2, 0f, 7, -1);
	func_507(uParam1, uParam0, 3, 0f, 7, -1);
	func_507(uParam1, uParam0, 4, 0f, 7, -1);
	func_507(uParam1, uParam0, 2, 1f, 7, -1);
	func_507(uParam1, uParam0, 2, 4f, 7, -1);
	func_507(uParam1, uParam0, 1, 7f, 7, -1);
	func_507(uParam1, uParam0, 1, 10f, 7, -1);
	func_507(uParam1, uParam0, 0, 13f, 7, -1);
	func_507(uParam1, uParam0, 0, 16f, 7, -1);
	func_507(uParam1, uParam0, 3, 19f, 7, -1);
	func_507(uParam1, uParam0, 3, 22f, 7, -1);
	func_507(uParam1, uParam0, 4, 25f, 7, -1);
	func_507(uParam1, uParam0, 4, 28f, 7, -1);
	func_507(uParam1, uParam0, 4, 31f, 7, -1);
	func_507(uParam1, uParam0, 3, 32f, 7, -1);
	func_507(uParam1, uParam0, 2, 33f, 7, -1);
	func_507(uParam1, uParam0, 1, 34f, 7, -1);
	func_507(uParam1, uParam0, 0, 35f, 7, -1);
	func_507(uParam1, uParam0, 4, 38f, 7, -1);
	func_507(uParam1, uParam0, 3, 39f, 7, -1);
	func_507(uParam1, uParam0, 2, 40f, 7, -1);
	func_507(uParam1, uParam0, 1, 41f, 7, -1);
	func_507(uParam1, uParam0, 0, 42f, 7, -1);
	func_507(uParam1, uParam0, 0, 45f, 7, -1);
	func_507(uParam1, uParam0, 1, 46f, 7, -1);
	func_507(uParam1, uParam0, 2, 47f, 7, -1);
	func_507(uParam1, uParam0, 3, 48f, 7, -1);
	func_507(uParam1, uParam0, 4, 49f, 7, -1);
	func_507(uParam1, uParam0, 0, 52f, 7, -1);
	func_507(uParam1, uParam0, 1, 53f, 7, -1);
	func_507(uParam1, uParam0, 2, 54f, 7, -1);
	func_507(uParam1, uParam0, 3, 55f, 7, -1);
	func_507(uParam1, uParam0, 4, 56f, 7, -1);
	func_507(uParam1, uParam0, 0, 59f, 7, -1);
	func_507(uParam1, uParam0, 1, 59f, 7, -1);
	func_507(uParam1, uParam0, 2, 59f, 7, -1);
	func_507(uParam1, uParam0, 3, 59f, 7, -1);
	func_507(uParam1, uParam0, 4, 59f, 7, -1);
	func_507(uParam1, uParam0, 0, 64f, 7, -1);
	func_507(uParam1, uParam0, 1, 64f, 7, -1);
	func_507(uParam1, uParam0, 2, 64f, 7, -1);
	func_507(uParam1, uParam0, 3, 64f, 7, -1);
	func_507(uParam1, uParam0, 4, 64f, 7, -1);
}

void func_517(var uParam0, var uParam1)//Position - 0x5B79E
{
	uParam0->f_6 = 47;
	uParam0->f_18 = 33.5f;
	uParam0->f_17 = (100f / 3f);
	uParam0->f_13 = 16;
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 5;
	uParam0->f_8 = 0;
	func_487(uParam1[0 /*33*/], 2, 0, 2048);
	func_487(uParam1[1 /*33*/], 7, 0, 268435456);
	func_487(uParam1[2 /*33*/], 12, 0, 268435456);
	func_487(uParam1[3 /*33*/], 17, 0, 2048);
	func_487(uParam1[4 /*33*/], 1, 4, 2048);
	func_487(uParam1[5 /*33*/], 6, 4, 268435456);
	func_487(uParam1[6 /*33*/], 11, 4, 268435456);
	func_487(uParam1[7 /*33*/], 16, 4, 2048);
	func_487(uParam1[8 /*33*/], 4, 8, 2048);
	func_487(uParam1[9 /*33*/], 9, 8, 268435456);
	func_487(uParam1[10 /*33*/], 14, 8, 268435456);
	func_487(uParam1[11 /*33*/], 19, 8, 2048);
	func_487(uParam1[12 /*33*/], 0, 12, 2048);
	func_487(uParam1[13 /*33*/], 5, 12, 268435456);
	func_487(uParam1[14 /*33*/], 10, 12, 268435456);
	func_487(uParam1[15 /*33*/], 15, 12, 2048);
	func_487(uParam1[16 /*33*/], 3, 16, 2048);
	func_487(uParam1[17 /*33*/], 8, 16, 268435456);
	func_487(uParam1[18 /*33*/], 13, 16, 268435456);
	func_487(uParam1[19 /*33*/], 18, 16, 2048);
	func_487(uParam1[20 /*33*/], 1, 20, 2048);
	func_487(uParam1[21 /*33*/], 6, 20, 268435456);
	func_487(uParam1[22 /*33*/], 11, 20, 2048);
	func_487(uParam1[23 /*33*/], 16, 20, 2048);
	func_487(uParam1[24 /*33*/], 2, 20, 2048);
	func_487(uParam1[25 /*33*/], 7, 20, 268435456);
	func_487(uParam1[26 /*33*/], 12, 20, 2048);
	func_487(uParam1[27 /*33*/], 17, 20, 2048);
	func_487(uParam1[28 /*33*/], 3, 20, 2048);
	func_487(uParam1[29 /*33*/], 8, 20, 268435456);
	func_487(uParam1[30 /*33*/], 13, 20, 2048);
	func_487(uParam1[31 /*33*/], 18, 20, 2048);
	func_487(uParam1[32 /*33*/], 0, 32, 2048);
	func_487(uParam1[33 /*33*/], 1, 32, 268435456);
	func_487(uParam1[34 /*33*/], 2, 32, 2048);
	func_487(uParam1[35 /*33*/], 3, 32, 268435456);
	func_487(uParam1[36 /*33*/], 4, 32, 2048);
	func_487(uParam1[37 /*33*/], 0, 37, 2048);
	func_487(uParam1[38 /*33*/], 1, 37, 268435456);
	func_487(uParam1[39 /*33*/], 2, 37, 2048);
	func_487(uParam1[40 /*33*/], 3, 37, 268435456);
	func_487(uParam1[41 /*33*/], 4, 37, 2048);
	func_487(uParam1[42 /*33*/], 0, 42, 2048);
	func_487(uParam1[43 /*33*/], 1, 42, 268435456);
	func_487(uParam1[44 /*33*/], 2, 42, 2048);
	func_487(uParam1[45 /*33*/], 3, 42, 268435456);
	func_487(uParam1[46 /*33*/], 4, 42, 2048);
}

void func_518(var uParam0, var uParam1)//Position - 0x5BAE6
{
	uParam0->f_6 = 12;
	uParam0->f_18 = 43.5f;
	uParam0->f_17 = (100f + 100f);
	uParam0->f_13 = 7;
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 4;
	uParam0->f_8 = 46;
	func_487(uParam1[0 /*33*/], 19, 0, 268435456);
	func_507(uParam1, uParam0, 0, 1f, 4, 4);
	func_507(uParam1, uParam0, 0, 3f, 4, 0);
	func_507(uParam1, uParam0, 0, 7f, 4, 15);
	func_507(uParam1, uParam0, 0, 11f, 9, -1);
	func_487(uParam1[1 /*33*/], 17, 1, 268435456);
	func_507(uParam1, uParam0, 1, 1f, 4, 2);
	func_507(uParam1, uParam0, 1, 4f, 4, 4);
	func_507(uParam1, uParam0, 1, 7f, 4, 19);
	func_507(uParam1, uParam0, 1, 22f, 9, -1);
	func_487(uParam1[2 /*33*/], 16, 2, 268435456);
	func_507(uParam1, uParam0, 2, 1f, 5, 1);
	func_507(uParam1, uParam0, 2, 3f, 5, 0);
	func_507(uParam1, uParam0, 2, 5f, 5, 15);
	func_507(uParam1, uParam0, 2, 30f, 9, -1);
	func_487(uParam1[3 /*33*/], 18, 2, 268439552);
	func_507(uParam1, uParam0, 3, 1f, 5, 3);
	func_507(uParam1, uParam0, 3, 3f, 5, 4);
	func_507(uParam1, uParam0, 3, 5f, 5, 19);
	func_507(uParam1, uParam0, 3, 30f, 9, -1);
	func_487(uParam1[4 /*33*/], 15, 4, 268435456);
	func_507(uParam1, uParam0, 4, 1f, 5, 0);
	func_507(uParam1, uParam0, 4, 3f, 5, 15);
	func_507(uParam1, uParam0, 4, 36f, 9, -1);
	func_487(uParam1[5 /*33*/], 16, 4, 268435456);
	func_507(uParam1, uParam0, 5, 1f, 5, 1);
	func_507(uParam1, uParam0, 5, 3f, 5, 16);
	func_507(uParam1, uParam0, 5, 36f, 9, -1);
	func_487(uParam1[6 /*33*/], 17, 4, 268439552);
	func_507(uParam1, uParam0, 6, 1f, 5, 2);
	func_507(uParam1, uParam0, 6, 3f, 5, 17);
	func_507(uParam1, uParam0, 6, 36f, 9, -1);
	func_487(uParam1[7 /*33*/], 18, 4, 268439552);
	func_507(uParam1, uParam0, 7, 1f, 5, 3);
	func_507(uParam1, uParam0, 7, 3f, 5, 18);
	func_507(uParam1, uParam0, 7, 36f, 9, -1);
	func_487(uParam1[8 /*33*/], 19, 4, 268439552);
	func_507(uParam1, uParam0, 8, 1f, 5, 4);
	func_507(uParam1, uParam0, 8, 3f, 5, 19);
	func_507(uParam1, uParam0, 8, 36f, 9, -1);
	func_487(uParam1[9 /*33*/], 1, 9, 268435456);
	func_507(uParam1, uParam0, 9, 1f, 5, 16);
	func_507(uParam1, uParam0, 9, 3f, 5, 0);
	func_507(uParam1, uParam0, 9, 5f, 5, 16);
	func_507(uParam1, uParam0, 9, 7f, 5, 0);
	func_507(uParam1, uParam0, 9, 9f, 5, 16);
	func_487(uParam1[10 /*33*/], 2, 9, 268439552);
	func_507(uParam1, uParam0, 10, 1f, 5, 17);
	func_507(uParam1, uParam0, 10, 3f, 5, 2);
	func_507(uParam1, uParam0, 10, 5f, 5, 17);
	func_507(uParam1, uParam0, 10, 7f, 5, 2);
	func_507(uParam1, uParam0, 10, 9f, 5, 17);
	func_487(uParam1[11 /*33*/], 3, 9, 268439552);
	func_507(uParam1, uParam0, 11, 1f, 5, 18);
	func_507(uParam1, uParam0, 11, 3f, 5, 4);
	func_507(uParam1, uParam0, 11, 5f, 5, 18);
	func_507(uParam1, uParam0, 11, 7f, 5, 4);
	func_507(uParam1, uParam0, 11, 9f, 5, 18);
}

void func_519(var uParam0, var uParam1)//Position - 0x5BE7D
{
	uParam0->f_6 = 4;
	uParam0->f_18 = 58f;
	uParam0->f_17 = 0f;
	uParam0->f_13 = 10;
	func_492(uParam0, 1024);
	func_492(uParam0, 2048);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 4, 0, 276824064);
	func_487(uParam1[1 /*33*/], 9, 0, 268435456);
	func_487(uParam1[2 /*33*/], 14, 0, 268437504);
	func_487(uParam1[3 /*33*/], 19, 0, 268437504);
	func_507(uParam1, uParam0, 0, 0f, 7, -1);
	func_507(uParam1, uParam0, 1, 0f, 7, -1);
	func_507(uParam1, uParam0, 2, 0f, 7, -1);
	func_507(uParam1, uParam0, 3, 0f, 7, -1);
	func_507(uParam1, uParam0, 0, 1f, 7, -1);
	func_507(uParam1, uParam0, 0, 2f, 2, 0);
	func_507(uParam1, uParam0, 0, 7.5f, 7, -1);
	func_507(uParam1, uParam0, 1, 8f, 7, -1);
	func_507(uParam1, uParam0, 1, 9f, 2, 5);
	func_507(uParam1, uParam0, 1, 14.5f, 7, -1);
	func_507(uParam1, uParam0, 2, 15f, 7, -1);
	func_507(uParam1, uParam0, 2, 16f, 2, 10);
	func_507(uParam1, uParam0, 2, 21.5f, 7, -1);
	func_507(uParam1, uParam0, 3, 22f, 7, -1);
	func_507(uParam1, uParam0, 3, 23f, 2, 15);
	func_507(uParam1, uParam0, 3, 28.5f, 7, -1);
	func_507(uParam1, uParam0, 0, 29f, 7, -1);
	func_507(uParam1, uParam0, 0, 30f, 2, 4);
	func_507(uParam1, uParam0, 0, 35.5f, 7, -1);
	func_507(uParam1, uParam0, 1, 36f, 7, -1);
	func_507(uParam1, uParam0, 1, 37f, 2, 8);
	func_507(uParam1, uParam0, 1, 42.5f, 7, -1);
	func_507(uParam1, uParam0, 2, 43f, 7, -1);
	func_507(uParam1, uParam0, 2, 44f, 2, 17);
	func_507(uParam1, uParam0, 2, 49.5f, 7, -1);
	func_507(uParam1, uParam0, 3, 50f, 7, -1);
	func_507(uParam1, uParam0, 3, 51f, 2, 16);
	func_507(uParam1, uParam0, 3, 56.5f, 7, -1);
	uParam0->f_8 = 28;
}

void func_520(var uParam0, var uParam1)//Position - 0x5C0B8
{
	uParam0->f_6 = 4;
	uParam0->f_18 = 26.5f;
	uParam0->f_17 = 0f;
	uParam0->f_13 = 4;
	func_492(uParam0, 1024);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 2, 0, 276824064);
	func_487(uParam1[1 /*33*/], 7, 0, 268435456);
	func_487(uParam1[2 /*33*/], 12, 0, 268437504);
	func_487(uParam1[3 /*33*/], 17, 0, 268437504);
	uParam0->f_8 = 40;
	func_507(uParam1, uParam0, 0, 0f, 7, -1);
	func_507(uParam1, uParam0, 1, 0f, 7, -1);
	func_507(uParam1, uParam0, 2, 0f, 7, -1);
	func_507(uParam1, uParam0, 3, 0f, 7, -1);
	func_507(uParam1, uParam0, 0, 0.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 0.1f, 4, 0);
	func_507(uParam1, uParam0, 0, 3.1f, 7, -1);
	func_507(uParam1, uParam0, 1, 1.1f, 7, -1);
	func_507(uParam1, uParam0, 1, 1.1f, 4, 5);
	func_507(uParam1, uParam0, 1, 4.1f, 7, -1);
	func_507(uParam1, uParam0, 2, 2.1f, 7, -1);
	func_507(uParam1, uParam0, 2, 2.1f, 4, 10);
	func_507(uParam1, uParam0, 2, 5.1f, 7, -1);
	func_507(uParam1, uParam0, 3, 3.1f, 7, -1);
	func_507(uParam1, uParam0, 3, 3.1f, 4, 15);
	func_507(uParam1, uParam0, 3, 6.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 9.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 9.1f, 3, 4);
	func_507(uParam1, uParam0, 0, 13.1f, 7, -1);
	func_507(uParam1, uParam0, 1, 10.1f, 7, -1);
	func_507(uParam1, uParam0, 1, 10.1f, 3, 9);
	func_507(uParam1, uParam0, 1, 14.1f, 7, -1);
	func_507(uParam1, uParam0, 2, 11.1f, 7, -1);
	func_507(uParam1, uParam0, 2, 11.1f, 3, 14);
	func_507(uParam1, uParam0, 2, 15.1f, 7, -1);
	func_507(uParam1, uParam0, 3, 12.1f, 7, -1);
	func_507(uParam1, uParam0, 3, 12.1f, 3, 19);
	func_507(uParam1, uParam0, 3, 16.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 19.1f, 7, -1);
	func_507(uParam1, uParam0, 0, 19.1f, 4, 2);
	func_507(uParam1, uParam0, 0, 22.1f, 7, -1);
	func_507(uParam1, uParam0, 1, 20.1f, 7, -1);
	func_507(uParam1, uParam0, 1, 20.1f, 4, 7);
	func_507(uParam1, uParam0, 1, 23.1f, 7, -1);
	func_507(uParam1, uParam0, 2, 21.1f, 7, -1);
	func_507(uParam1, uParam0, 2, 21.1f, 4, 12);
	func_507(uParam1, uParam0, 2, 24.1f, 7, -1);
	func_507(uParam1, uParam0, 3, 22.1f, 7, -1);
	func_507(uParam1, uParam0, 3, 22.1f, 4, 17);
	func_507(uParam1, uParam0, 3, 25.1f, 7, -1);
}

void func_521(var uParam0, var uParam1)//Position - 0x5C3B1
{
	uParam0->f_6 = 6;
	uParam0->f_18 = 24f;
	uParam0->f_17 = 0f;
	uParam0->f_13 = 1;
	func_492(uParam0, 1024);
	func_492(uParam0, 65536);
	func_492(uParam0, 2097152);
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 16, 0, 276824064);
	func_487(uParam1[1 /*33*/], 17, 999, 268435456);
	func_487(uParam1[2 /*33*/], 18, 999, 268435456);
	func_487(uParam1[3 /*33*/], 2, 999, 268435456);
	func_487(uParam1[4 /*33*/], 1, 999, 268435456);
	func_487(uParam1[5 /*33*/], 17, 999, 268435456);
	uParam0->f_8 = 17;
	func_507(uParam1, uParam0, 0, 4f, 0, 1);
	func_507(uParam1, uParam0, 0, -1f, 8, 1);
	func_507(uParam1, uParam0, 1, 3.75f, 11, -1);
	func_507(uParam1, uParam0, 1, 4f, 0, 2);
	func_507(uParam1, uParam0, 1, -1f, 8, 2);
	func_507(uParam1, uParam0, 2, 7.5f, 11, -1);
	func_507(uParam1, uParam0, 2, 4f, 0, 3);
	func_507(uParam1, uParam0, 2, -1f, 8, 3);
	func_507(uParam1, uParam0, 3, 10.25f, 11, -1);
	func_507(uParam1, uParam0, 3, 4f, 0, 17);
	func_507(uParam1, uParam0, 3, -1f, 8, 17);
	func_507(uParam1, uParam0, 4, 14f, 11, -1);
	func_507(uParam1, uParam0, 4, 4f, 0, 16);
	func_507(uParam1, uParam0, 4, -1f, 8, 16);
	func_507(uParam1, uParam0, 5, 17.75f, 11, -1);
	func_507(uParam1, uParam0, 5, 4f, 0, 2);
	func_507(uParam1, uParam0, 5, -1f, 8, 2);
}

void func_522(var uParam0, var uParam1)//Position - 0x5C556
{
	uParam0->f_6 = 18;
	uParam0->f_18 = 55f;
	uParam0->f_17 = (100f + 500f);
	uParam0->f_13 = 18;
	func_492(uParam0, 512);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 2;
	func_487(uParam1[0 /*33*/], 2, 0, 268435456);
	func_507(uParam1, uParam0, 0, 8f, 10, -1);
	func_487(uParam1[1 /*33*/], 17, 1, 268435456);
	func_507(uParam1, uParam0, 1, 8f, 10, -1);
	func_487(uParam1[2 /*33*/], 16, 2, 268435456);
	func_507(uParam1, uParam0, 2, 3f, 2, 13);
	func_507(uParam1, uParam0, 2, 10f, 10, -1);
	func_487(uParam1[3 /*33*/], 18, 3, 268435456);
	func_507(uParam1, uParam0, 3, 3f, 2, 11);
	func_507(uParam1, uParam0, 3, 10f, 10, -1);
	func_487(uParam1[4 /*33*/], 6, 4, 268435456);
	func_507(uParam1, uParam0, 4, 3f, 2, 16);
	func_507(uParam1, uParam0, 4, 12f, 10, -1);
	func_487(uParam1[5 /*33*/], 10, 4, 268435456);
	func_507(uParam1, uParam0, 5, 4.5f, 2, 12);
	func_507(uParam1, uParam0, 5, 12f, 10, -1);
	func_487(uParam1[6 /*33*/], 8, 6, 268435456);
	func_507(uParam1, uParam0, 6, 3f, 2, 18);
	func_507(uParam1, uParam0, 6, 11f, 10, -1);
	func_487(uParam1[7 /*33*/], 14, 6, 268435456);
	func_507(uParam1, uParam0, 7, 4.5f, 2, 12);
	func_507(uParam1, uParam0, 7, 11f, 10, -1);
	func_487(uParam1[8 /*33*/], 6, 8, 268435456);
	func_507(uParam1, uParam0, 8, 2.2f, 2, 2);
	func_507(uParam1, uParam0, 8, 11f, 10, -1);
	func_487(uParam1[9 /*33*/], 7, 8, 268435456);
	func_507(uParam1, uParam0, 9, 2f, 2, 3);
	func_507(uParam1, uParam0, 9, 11f, 10, -1);
	func_487(uParam1[10 /*33*/], 8, 8, 268435456);
	func_507(uParam1, uParam0, 10, 2.7f, 2, 1);
	func_507(uParam1, uParam0, 10, 11f, 10, -1);
	func_487(uParam1[11 /*33*/], 18, 11, 268435456);
	func_507(uParam1, uParam0, 11, 2.2f, 2, 12);
	func_507(uParam1, uParam0, 11, 10f, 10, -1);
	func_487(uParam1[12 /*33*/], 17, 11, 268435456);
	func_507(uParam1, uParam0, 12, 2f, 2, 11);
	func_507(uParam1, uParam0, 12, 10f, 10, -1);
	func_487(uParam1[13 /*33*/], 16, 11, 268435456);
	func_507(uParam1, uParam0, 13, 2.7f, 2, 13);
	func_507(uParam1, uParam0, 13, 10f, 10, -1);
	func_487(uParam1[14 /*33*/], 16, 14, 268435456);
	func_507(uParam1, uParam0, 14, 2f, 2, 13);
	func_507(uParam1, uParam0, 14, 9f, 2, 6);
	func_507(uParam1, uParam0, 14, 16f, 10, -1);
	func_487(uParam1[15 /*33*/], 18, 14, 268435456);
	func_507(uParam1, uParam0, 15, 2.5f, 2, 7);
	func_507(uParam1, uParam0, 15, 9f, 2, 16);
	func_507(uParam1, uParam0, 15, 16f, 10, -1);
	func_487(uParam1[16 /*33*/], 8, 14, 268435456);
	func_507(uParam1, uParam0, 16, 3f, 2, 11);
	func_507(uParam1, uParam0, 16, 9f, 2, 18);
	func_507(uParam1, uParam0, 16, 16f, 10, -1);
	func_487(uParam1[17 /*33*/], 6, 14, 268435456);
	func_507(uParam1, uParam0, 17, 3.5f, 2, 17);
	func_507(uParam1, uParam0, 17, 9f, 2, 8);
	func_507(uParam1, uParam0, 17, 16f, 10, -1);
	uParam0->f_8 = 38;
}

void func_523(var uParam0, var uParam1)//Position - 0x5C955
{
	uParam0->f_13 = 12;
	uParam0->f_17 = (100f / 5f);
	uParam0->f_6 = 16;
	uParam0->f_8 = 30;
	uParam0->f_18 = 33.5f;
	uParam0->f_40.f_2 = 0;
	func_492(uParam0, 1024);
	func_492(uParam0, 1048576);
	func_492(uParam0, 65536);
	func_487(uParam1[0 /*33*/], 1, 0, 276824064);
	func_507(uParam1, uParam0, 0, 4.5f, 10, -1);
	func_487(uParam1[1 /*33*/], 3, 0, 268437504);
	func_507(uParam1, uParam0, 1, 4.5f, 10, -1);
	func_487(uParam1[2 /*33*/], 7, 999, 536870912);
	func_507(uParam1, uParam0, 2, 6f, 11, -1);
	func_507(uParam1, uParam0, 2, 4.5f, 10, -1);
	func_487(uParam1[3 /*33*/], 12, 999, 1073743872);
	func_507(uParam1, uParam0, 3, 6f, 11, -1);
	func_507(uParam1, uParam0, 3, 4.5f, 10, -1);
	func_487(uParam1[4 /*33*/], 1, 999, 268435456);
	func_507(uParam1, uParam0, 4, 12f, 11, -1);
	func_507(uParam1, uParam0, 4, 4.5f, 10, -1);
	func_487(uParam1[5 /*33*/], 2, 999, 268437504);
	func_507(uParam1, uParam0, 5, 12f, 11, -1);
	func_507(uParam1, uParam0, 5, 4.5f, 10, -1);
	func_487(uParam1[6 /*33*/], 3, 999, 268435456);
	func_507(uParam1, uParam0, 6, 12f, 11, -1);
	func_507(uParam1, uParam0, 6, 4.5f, 10, -1);
	func_487(uParam1[7 /*33*/], 6, 999, 268435456);
	func_507(uParam1, uParam0, 7, 18f, 11, -1);
	func_507(uParam1, uParam0, 7, 6f, 10, -1);
	func_487(uParam1[8 /*33*/], 7, 999, 536872960);
	func_507(uParam1, uParam0, 8, 18f, 11, -1);
	func_507(uParam1, uParam0, 8, 6f, 10, -1);
	func_487(uParam1[9 /*33*/], 12, 999, 1073743872);
	func_507(uParam1, uParam0, 9, 18f, 11, -1);
	func_507(uParam1, uParam0, 9, 6f, 10, -1);
	func_487(uParam1[10 /*33*/], 8, 999, 268435456);
	func_507(uParam1, uParam0, 10, 18f, 11, -1);
	func_507(uParam1, uParam0, 10, 6f, 10, -1);
	func_487(uParam1[11 /*33*/], 1, 999, 1073741824);
	func_507(uParam1, uParam0, 11, 26f, 11, -1);
	func_507(uParam1, uParam0, 11, 6f, 10, -1);
	func_487(uParam1[12 /*33*/], 11, 999, 536872960);
	func_507(uParam1, uParam0, 12, 26f, 11, -1);
	func_507(uParam1, uParam0, 12, 6f, 10, -1);
	func_487(uParam1[13 /*33*/], 2, 999, 268435456);
	func_507(uParam1, uParam0, 13, 26f, 11, -1);
	func_507(uParam1, uParam0, 13, 6f, 10, -1);
	func_487(uParam1[14 /*33*/], 3, 999, 1073741824);
	func_507(uParam1, uParam0, 14, 26f, 11, -1);
	func_507(uParam1, uParam0, 14, 6f, 10, -1);
	func_487(uParam1[15 /*33*/], 13, 999, 536872960);
	func_507(uParam1, uParam0, 15, 26f, 11, -1);
	func_507(uParam1, uParam0, 15, 6f, 10, -1);
}

void func_524(var uParam0, var uParam1)//Position - 0x5CCB2
{
	uParam0->f_6 = 5;
	uParam0->f_18 = 35.1f;
	uParam0->f_17 = (100f / 5f);
	uParam0->f_13 = 15;
	func_492(uParam0, 1024);
	func_492(uParam0, 1048576);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 5;
	func_487(uParam1[0 /*33*/], 10, 0, 271583232);
	func_487(uParam1[1 /*33*/], 11, 0, 271581184);
	func_487(uParam1[2 /*33*/], 12, 0, 271583232);
	func_487(uParam1[3 /*33*/], 13, 0, 271581184);
	func_487(uParam1[4 /*33*/], 14, 0, 271583232);
	uParam0->f_8 = 0;
}

void func_525(var uParam0, var uParam1)//Position - 0x5CD57
{
	uParam0->f_6 = 32;
	uParam0->f_18 = 30f;
	uParam0->f_17 = (100f + 99f);
	uParam0->f_13 = 6;
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 2;
	func_487(uParam1[0 /*33*/], 0, 0, 268435456);
	func_487(uParam1[1 /*33*/], 1, 0, 268435456);
	func_487(uParam1[2 /*33*/], 2, 0, 268435456);
	func_487(uParam1[3 /*33*/], 3, 0, 268437504);
	func_487(uParam1[4 /*33*/], 5, 0, 268437504);
	func_487(uParam1[5 /*33*/], 6, 0, 268437504);
	func_487(uParam1[6 /*33*/], 7, 0, 268437504);
	func_487(uParam1[7 /*33*/], 8, 0, 268437504);
	func_487(uParam1[8 /*33*/], 10, 0, 268437504);
	func_487(uParam1[9 /*33*/], 11, 0, 268437504);
	func_487(uParam1[10 /*33*/], 12, 0, 268437504);
	func_487(uParam1[11 /*33*/], 13, 0, 268437504);
	func_487(uParam1[12 /*33*/], 15, 0, 268437504);
	func_487(uParam1[13 /*33*/], 16, 0, 268437504);
	func_487(uParam1[14 /*33*/], 17, 0, 268437504);
	func_487(uParam1[15 /*33*/], 18, 0, 268437504);
	func_487(uParam1[16 /*33*/], 0, 16, 268435456);
	func_487(uParam1[17 /*33*/], 1, 16, 268435456);
	func_487(uParam1[18 /*33*/], 2, 16, 268435456);
	func_487(uParam1[19 /*33*/], 3, 16, 268437504);
	func_487(uParam1[20 /*33*/], 5, 16, 268437504);
	func_487(uParam1[21 /*33*/], 6, 16, 268437504);
	func_487(uParam1[22 /*33*/], 7, 16, 268437504);
	func_487(uParam1[23 /*33*/], 8, 16, 268437504);
	func_487(uParam1[24 /*33*/], 10, 16, 268437504);
	func_487(uParam1[25 /*33*/], 11, 16, 268437504);
	func_487(uParam1[26 /*33*/], 12, 16, 268437504);
	func_487(uParam1[27 /*33*/], 13, 16, 268437504);
	func_487(uParam1[28 /*33*/], 15, 16, 268437504);
	func_487(uParam1[29 /*33*/], 16, 16, 268437504);
	func_487(uParam1[30 /*33*/], 17, 16, 268437504);
	func_487(uParam1[31 /*33*/], 18, 16, 268437504);
	uParam0->f_8 = 0;
}

void func_526(var uParam0, var uParam1)//Position - 0x5CFC9
{
	uParam0->f_6 = 17;
	uParam0->f_18 = 37f;
	uParam0->f_17 = (100f / 2.9f);
	uParam0->f_13 = 9;
	func_492(uParam0, 2048);
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 11, 0, 276824064);
	func_487(uParam1[1 /*33*/], 12, -1, 268435456);
	func_487(uParam1[2 /*33*/], 13, -1, 268435456);
	func_487(uParam1[3 /*33*/], 18, -1, 268435456);
	func_487(uParam1[4 /*33*/], 17, -1, 268435456);
	func_487(uParam1[5 /*33*/], 16, -1, 268435456);
	func_487(uParam1[6 /*33*/], 5, -1, 268435456);
	func_487(uParam1[7 /*33*/], 6, -1, 268435456);
	func_487(uParam1[8 /*33*/], 7, -1, 268435456);
	func_487(uParam1[9 /*33*/], 8, -1, 268435456);
	func_487(uParam1[10 /*33*/], 9, -1, 268435456);
	func_487(uParam1[11 /*33*/], 10, 11, 268435456);
	func_487(uParam1[12 /*33*/], 12, 11, 268435456);
	func_487(uParam1[13 /*33*/], 14, 11, 268437504);
	func_487(uParam1[14 /*33*/], 1, 14, 268435456);
	func_487(uParam1[15 /*33*/], 2, 14, 268435456);
	func_487(uParam1[16 /*33*/], 3, 14, 268437504);
	uParam0->f_8 = 0;
}

void func_527(var uParam0, var uParam1)//Position - 0x5D131
{
	uParam0->f_6 = 5;
	uParam0->f_18 = 29f;
	uParam0->f_17 = 0f;
	uParam0->f_13 = 3;
	func_492(uParam0, 1024);
	func_492(uParam0, 65536);
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 5, 0, 268435456);
	func_487(uParam1[1 /*33*/], 6, 0, 268435456);
	func_487(uParam1[2 /*33*/], 7, 0, 276826112);
	func_487(uParam1[3 /*33*/], 8, 0, 268437504);
	func_487(uParam1[4 /*33*/], 9, 0, 268437504);
	uParam0->f_8 = 24;
	func_507(uParam1, uParam0, 0, 0f, 7, -1);
	func_507(uParam1, uParam0, 1, 0f, 7, -1);
	func_507(uParam1, uParam0, 3, 0f, 7, -1);
	func_507(uParam1, uParam0, 4, 0f, 7, -1);
	func_507(uParam1, uParam0, 2, 2f, 7, -1);
	func_507(uParam1, uParam0, 1, 2f, 7, -1);
	func_507(uParam1, uParam0, 1, 4f, 7, -1);
	func_507(uParam1, uParam0, 0, 4f, 7, -1);
	func_507(uParam1, uParam0, 0, 6f, 7, -1);
	func_507(uParam1, uParam0, 1, 6f, 7, -1);
	func_507(uParam1, uParam0, 1, 8f, 7, -1);
	func_507(uParam1, uParam0, 2, 11f, 7, -1);
	func_507(uParam1, uParam0, 2, 13f, 7, -1);
	func_507(uParam1, uParam0, 3, 13f, 7, -1);
	func_507(uParam1, uParam0, 3, 15f, 7, -1);
	func_507(uParam1, uParam0, 4, 15f, 7, -1);
	func_507(uParam1, uParam0, 4, 17f, 7, -1);
	func_507(uParam1, uParam0, 3, 17f, 7, -1);
	func_507(uParam1, uParam0, 3, 19f, 7, -1);
	func_507(uParam1, uParam0, 3, 22f, 7, -1);
	func_507(uParam1, uParam0, 3, 24f, 7, -1);
	func_507(uParam1, uParam0, 2, 24f, 7, -1);
	func_507(uParam1, uParam0, 2, 26f, 7, -1);
	func_507(uParam1, uParam0, 1, 26f, 7, -1);
}

void func_528(var uParam0, var uParam1)//Position - 0x5D31B
{
	uParam0->f_6 = 15;
	uParam0->f_18 = 40f;
	uParam0->f_17 = 100f;
	uParam0->f_13 = 0;
	uParam0->f_40.f_2 = 0;
	func_487(uParam1[0 /*33*/], 2, -1, 268435456);
	func_487(uParam1[1 /*33*/], 1, -1, 268435456);
	func_487(uParam1[2 /*33*/], 3, -1, 268435456);
	func_487(uParam1[3 /*33*/], 12, -1, 268435456);
	func_487(uParam1[4 /*33*/], 11, -1, 268435456);
	func_487(uParam1[5 /*33*/], 10, -1, 268435456);
	func_487(uParam1[6 /*33*/], 16, 6, 268437504);
	func_487(uParam1[7 /*33*/], 17, 6, 268435456);
	func_487(uParam1[8 /*33*/], 18, 6, 268435456);
	func_487(uParam1[9 /*33*/], 8, -1, 268435456);
	func_487(uParam1[10 /*33*/], 7, -1, 268435456);
	func_487(uParam1[11 /*33*/], 6, -1, 268435456);
	func_487(uParam1[12 /*33*/], 12, -1, 268435456);
	func_487(uParam1[13 /*33*/], 7, -1, 268435456);
	func_487(uParam1[14 /*33*/], 2, -1, 268435456);
	uParam0->f_8 = 0;
}

int func_529(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5D44B
{
	int iVar0;
	int iVar1;
	
	if (!Global_68505)
	{
		GlobalFunc_778(1);
	}
	if (func_366(uParam3, 1))
	{
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			if (GlobalFunc_7112(&(uParam3->f_1196), 0))
			{
				func_336(uParam3, 1);
				func_362(uParam3, 8);
				func_336(uParam3, 16);
				func_496(&(uParam3->f_56), 1, uParam3->f_1[uParam3->f_1.f_9], 0);
			}
		}
		else
		{
			iVar0 = 0;
			if (*uParam3 == 2)
			{
				iVar0 = uParam3->f_18.f_36;
			}
			iVar1 = (*uParam2[uParam3->f_1.f_9 /*41*/])[iVar0 /*10*/];
			func_631(&(uParam3->f_180), iVar1, &(uParam0->f_323), uParam0->f_329 == iVar1);
			if (func_366(uParam3, 2))
			{
				func_336(uParam3, 2);
				GlobalFunc_5210(&(uParam3->f_56), 0, 0, 1, 1);
				GlobalFunc_813(&(uParam3->f_56), "FE_HLP3", 2, 202, 1, 1, 0);
				if (func_629())
				{
					func_362(uParam3, 16);
					GlobalFunc_813(&(uParam3->f_56), "SCLB_PROFILE", 2, 217, 1, 1, 0);
				}
			}
			if (func_629() && !func_366(uParam3, 16))
			{
				func_362(uParam3, 16);
				GlobalFunc_5210(&(uParam3->f_56), 0, 0, 1, 1);
				GlobalFunc_813(&(uParam3->f_56), "FE_HLP3", 2, 202, 1, 1, 0);
				GlobalFunc_813(&(uParam3->f_56), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			else if (!func_629() && func_366(uParam3, 16))
			{
				func_336(uParam3, 16);
				GlobalFunc_5210(&(uParam3->f_56), 0, 0, 1, 1);
				GlobalFunc_813(&(uParam3->f_56), "FE_HLP3", 2, 202, 1, 1, 0);
			}
		}
	}
	else
	{
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			if (!uParam0->f_328)
			{
				uParam0->f_328 = 1;
				uParam0->f_327 = 1;
				func_496(&(uParam3->f_56), 1, uParam3->f_1[uParam3->f_1.f_9], 0);
				func_337(&(uParam0->f_323), uParam1, uParam2[uParam1->f_14 /*41*/][uParam1->f_16 /*10*/]);
				return 0;
			}
			if (uParam0->f_327)
			{
				if (Global_1835013.f_1 && !Global_1835013.f_2)
				{
					func_625(&(uParam0->f_323));
				}
				if (GlobalFunc_9181(&uLocal_102))
				{
					func_496(&(uParam3->f_56), *uParam3 == 0, 1, 1);
					Global_1835388 = 1;
					uParam0->f_327 = 0;
				}
			}
		}
		else
		{
			uParam0->f_327 = 0;
		}
		func_544(uParam2, uParam3, uParam0);
	}
	if (uParam0->f_7)
	{
		func_335(uParam0, uParam3);
		uParam0->f_7 = 0;
		*uParam3 = 0;
	}
	return func_530(uParam1, uParam2, uParam0, uParam3);
}

int func_530(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5D69F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = -1;
	iVar7 = -1;
	if (MISC::IS_PC_VERSION() && PAD::_IS_USING_KEYBOARD_2(2))
	{
		if (!func_366(uParam3, 1))
		{
			iVar4 = GlobalFunc_6545(0.201f, 0.409f, 0.198f, 0.0375f, 0.034f, iLocal_542, 32, 0, 1);
			if (*uParam3 == 2)
			{
				iVar5 = GlobalFunc_6545(0.401f, 0.408f, 0.198f, 0.111f, 0.11f, uParam3->f_18.f_35, 32, 0, 1);
			}
			if ((PAD::IS_CONTROL_JUST_PRESSED(2, 237) && !HUD::_0x3D9ACB1EB139E702()) && !func_366(uParam3, 8))
			{
				if (*uParam3 == 0)
				{
					if (iVar4 > -1)
					{
						if (iVar4 != uParam3->f_1.f_9)
						{
							uParam3->f_1.f_9 = iVar4;
							func_330(uParam1, uParam2, uParam3->f_1.f_9, uParam3);
							func_414("NAV_UP_DOWN", 1);
							func_496(&(uParam3->f_56), 1, uParam3->f_1[uParam3->f_1.f_9], !uParam2->f_327);
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
				else if (*uParam3 == 1 || (*uParam3 == 2 && iVar5 == -1))
				{
					*uParam3 = 1;
					if (iVar4 > -1)
					{
						iVar6 = func_541(iVar4, uParam3->f_1.f_9, uParam3->f_11.f_5);
						if (iVar6 == -1)
						{
							iVar7 = func_540(iVar4, uParam3->f_1.f_9, uParam3->f_11.f_5);
							if (iVar7 == -2)
							{
								iVar3 = 1;
							}
							else if (iVar7 != -1)
							{
								func_496(&(uParam3->f_56), 0, uParam3->f_11[uParam3->f_11.f_6], !uParam2->f_327);
								if (uParam3->f_1[iVar7])
								{
									uParam3->f_1.f_9 = iVar7;
									uParam3->f_11.f_6 = 0;
									uParam0->f_15 = uParam3->f_11.f_6;
									uParam0->f_14 = uParam3->f_1.f_9;
									*uParam3++;
									func_330(uParam1, uParam2, uParam3->f_1.f_9, uParam3);
									func_331(uParam2, uParam3->f_1.f_9, uParam3);
									iVar1 = 1;
								}
								else
								{
									uParam3->f_1.f_9 = iVar7;
									iVar3 = 1;
								}
							}
						}
						else
						{
							uParam3->f_11.f_6 = iVar6;
							if (uParam3->f_11[iVar6])
							{
								iVar8 = (uParam3->f_1.f_9 * 4 + uParam3->f_11.f_6);
								if (iVar8 > -1 && iVar8 < 32)
								{
									if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1, iVar8))
									{
										MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1), iVar8);
									}
								}
								func_414("NAV_UP_DOWN", 1);
								uParam0->f_15 = uParam3->f_11.f_6;
								*uParam3++;
								if (uParam3->f_18.f_36 == -1)
								{
									uParam3->f_18.f_36 = 0;
								}
								func_330(uParam1, uParam2, uParam3->f_1.f_9, uParam3);
								func_496(&(uParam3->f_56), 0, uParam3->f_11[uParam3->f_11.f_6], !uParam2->f_327);
							}
							else
							{
								uParam0->f_15 = uParam3->f_11.f_6;
								func_330(uParam1, uParam2, uParam3->f_1.f_9, uParam3);
								func_496(&(uParam3->f_56), 0, uParam3->f_11[uParam3->f_11.f_6], !uParam2->f_327);
								func_414("NAV_UP_DOWN", 1);
							}
						}
					}
				}
				else if (*uParam3 == 2)
				{
					if (iVar5 > -1)
					{
						if (iVar5 != uParam3->f_18.f_36)
						{
							uParam3->f_18.f_36 = iVar5;
							if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/], (20 + uParam3->f_1.f_9)))
							{
								MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/]), (20 + uParam3->f_1.f_9));
							}
							func_414("NAV_UP_DOWN", 1);
							func_496(&(uParam3->f_56), 0, uParam3->f_18[uParam3->f_18.f_36], !uParam2->f_327);
						}
						else
						{
							iVar2 = 1;
						}
					}
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
			{
				iVar3 = 1;
			}
			HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		}
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 211) && !func_366(uParam3, 1))
	{
		if (func_539(&(uParam3->f_56), 2, 211))
		{
			func_414("LEADER_BOARD", 1);
			iVar9 = 0;
			if (*uParam3 == 2)
			{
				iVar9 = uParam3->f_18.f_36;
			}
			uVar10 = (*uParam1[uParam3->f_1.f_9 /*41*/])[iVar9 /*10*/];
			func_362(uParam3, 1);
			func_362(uParam3, 2);
		}
	}
	else if ((PAD::IS_CONTROL_JUST_RELEASED(2, 202) || iVar3 == 1) && func_366(uParam3, 1))
	{
		func_336(uParam3, 1);
		func_496(&(uParam3->f_56), *uParam3 == 0, 1, (!uParam2->f_327 || !PLAYER::IS_PLAYER_ONLINE()));
		return 0;
	}
	GlobalFunc_1100(1);
	func_535(&(uParam3->f_56), 1128792064, 1, 0, 1, 1065353216);
	if (func_366(uParam3, 1))
	{
		return 0;
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, 202) || iVar3 == 1) && *uParam3 == 0)
	{
		func_414("BACK", 1);
		GlobalFunc_778(0);
		return 2;
	}
	if (((((PAD::IS_CONTROL_JUST_RELEASED(2, 201) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || iVar0 == 1) || iVar1 == 1) || iVar2 == 1) && !func_366(uParam3, 8))
	{
		if (*uParam3 == 0)
		{
			bVar11 = iVar0;
			iVar0 = 0;
			if (uParam3->f_1[uParam3->f_1.f_9])
			{
				uParam0->f_14 = uParam3->f_1.f_9;
				*uParam3 = 1;
				func_331(uParam2, uParam0->f_14, uParam3);
				func_496(&(uParam3->f_56), 0, 1, 1);
				iVar12 = (uParam3->f_1.f_9 * 4 + uParam3->f_11.f_6);
				if (iVar12 > -1 && iVar12 < 32)
				{
					if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1, iVar12))
					{
						MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1), iVar12);
					}
				}
				func_414("SELECT", 1);
				if (bVar11)
				{
					*uParam3 = 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				func_414("BACK", 1);
			}
		}
		if (*uParam3 == 1)
		{
			iVar1 = 0;
			if (uParam3->f_11[uParam3->f_11.f_6])
			{
				uParam0->f_15 = uParam3->f_11.f_6;
				*uParam3++;
				func_330(uParam1, uParam2, uParam0->f_14, uParam3);
				func_496(&(uParam3->f_56), 0, 1, 1);
				if (uParam3->f_18[3] && func_277(func_534(uParam0->f_14, 2)))
				{
					uParam3->f_18.f_36 = 3;
				}
				else if (uParam3->f_18[2] && func_277(func_534(uParam0->f_14, 1)))
				{
					uParam3->f_18.f_36 = 2;
				}
				else if (uParam3->f_18[1] && func_277(func_534(uParam0->f_14, 0)))
				{
					uParam3->f_18.f_36 = 1;
				}
				else
				{
					uParam3->f_18.f_36 = 0;
				}
				func_414("SELECT", 1);
				return 0;
			}
			else
			{
				func_414("BACK", 1);
			}
		}
		else if (*uParam3 == 2 && iVar1 == 0)
		{
			iVar2 = 0;
			if (uParam3->f_18.f_36 == -1)
			{
				uParam3->f_18.f_36 = 0;
			}
			if (uParam3->f_18[uParam3->f_18.f_36])
			{
				func_414("SELECT", 1);
				iVar13 = (uParam3->f_1.f_9 * 4 + uParam3->f_11.f_6);
				if (iVar13 > -1 && iVar13 < 32)
				{
					if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_2, iVar13))
					{
						MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_2), iVar13);
					}
				}
				uParam0->f_16 = uParam3->f_18.f_36;
				GlobalFunc_778(0);
				return 1;
			}
			else
			{
				func_414("BACK", 1);
			}
		}
	}
	if (((PAD::IS_CONTROL_JUST_RELEASED(2, 202) || iVar3 == 1) && *uParam3 > 0) && !func_366(uParam3, 8))
	{
		iVar3 = 0;
		if (*uParam3 != 0)
		{
			func_414("BACK", 1);
			*uParam3 = (*uParam3 - 1);
			if (*uParam3 == 0)
			{
				uParam3->f_11.f_5 = 0;
				func_496(&(uParam3->f_56), 1, 1, 1);
			}
			else
			{
				func_496(&(uParam3->f_56), 0, 1, 1);
			}
			return 0;
		}
	}
	func_336(uParam3, 8);
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || GlobalFunc_4661(0, &(uParam3->f_1186))) || (PAD::IS_CONTROL_PRESSED(2, 188) && MISC::GET_GAME_TIMER() > func_532(uParam3)))
	{
		if (*uParam3 == 0)
		{
			uParam3->f_1.f_9 = (uParam3->f_1.f_9 - 1);
			if (uParam3->f_1.f_9 < 0)
			{
				uParam3->f_1.f_9 = (uParam3->f_1.f_8 - 1);
			}
			func_330(uParam1, uParam2, uParam3->f_1.f_9, uParam3);
			func_414("NAV_UP_DOWN", 1);
			func_496(&(uParam3->f_56), 1, uParam3->f_1[uParam3->f_1.f_9], !uParam2->f_327);
		}
		else if (*uParam3 == 1)
		{
			iVar14 = uParam3->f_11.f_6;
			uParam3->f_11.f_6 = (uParam3->f_11.f_6 - 1);
			if (uParam3->f_11.f_6 < 0)
			{
				uParam3->f_11.f_6 = (uParam3->f_11.f_5 - 1);
			}
			iVar15 = (uParam3->f_1.f_9 * 4 + uParam3->f_11.f_6);
			if (iVar15 > -1 && iVar15 < 32)
			{
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1, iVar15))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1), iVar15);
				}
			}
			if (iVar14 != uParam3->f_11.f_6)
			{
				func_414("NAV_UP_DOWN", 1);
			}
			func_496(&(uParam3->f_56), 0, uParam3->f_11[uParam3->f_11.f_6], !uParam2->f_327);
		}
		else if (*uParam3 == 2)
		{
			uParam3->f_18.f_36 = (uParam3->f_18.f_36 - 1);
			if (uParam3->f_18.f_36 < 0)
			{
				uParam3->f_18.f_36 = (uParam3->f_18.f_35 - 1);
			}
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/], (20 + uParam3->f_1.f_9)))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/]), (20 + uParam3->f_1.f_9));
			}
			func_414("NAV_UP_DOWN", 1);
			func_496(&(uParam3->f_56), 0, uParam3->f_18[uParam3->f_18.f_36], !uParam2->f_327);
		}
		func_531(uParam3, MISC::GET_GAME_TIMER() + 250);
		return 0;
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || GlobalFunc_4661(1, &(uParam3->f_1186))) || (PAD::IS_CONTROL_PRESSED(2, 187) && MISC::GET_GAME_TIMER() > func_532(uParam3)))
	{
		if (*uParam3 == 0)
		{
			uParam3->f_1.f_9++;
			if (uParam3->f_1.f_9 >= uParam3->f_1.f_8)
			{
				uParam3->f_1.f_9 = 0;
			}
			func_330(uParam1, uParam2, uParam3->f_1.f_9, uParam3);
			func_414("NAV_UP_DOWN", 1);
			func_496(&(uParam3->f_56), 1, uParam3->f_1[uParam3->f_1.f_9], !uParam2->f_327);
		}
		else if (*uParam3 == 1)
		{
			iVar16 = uParam3->f_11.f_6;
			uParam3->f_11.f_6++;
			if (uParam3->f_11.f_6 >= uParam3->f_11.f_5)
			{
				uParam3->f_11.f_6 = 0;
			}
			iVar17 = (uParam3->f_1.f_9 * 4 + uParam3->f_11.f_6);
			if (iVar17 > -1 && iVar17 < 32)
			{
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1, iVar17))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1), iVar17);
				}
			}
			if (iVar16 != uParam3->f_11.f_6)
			{
				func_414("NAV_UP_DOWN", 1);
			}
			func_496(&(uParam3->f_56), 0, uParam3->f_11[uParam3->f_11.f_6], !uParam2->f_327);
		}
		else if (*uParam3 == 2)
		{
			uParam3->f_18.f_36++;
			if (uParam3->f_18.f_36 >= uParam3->f_18.f_35)
			{
				uParam3->f_18.f_36 = 0;
			}
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/], (20 + uParam3->f_1.f_9)))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/]), (20 + uParam3->f_1.f_9));
			}
			func_414("NAV_UP_DOWN", 1);
			func_496(&(uParam3->f_56), 0, uParam3->f_18[uParam3->f_18.f_36], !uParam2->f_327);
		}
		func_531(uParam3, MISC::GET_GAME_TIMER() + 250);
		return 0;
	}
	return 0;
}

void func_531(var uParam0, var uParam1)//Position - 0x5E1FD
{
	uParam0->f_1190 = uParam1;
}

int func_532(var uParam0)//Position - 0x5E20C
{
	return uParam0->f_1190;
}


int func_534(int iParam0, int iParam1)//Position - 0x5E2DE
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				iVar0 = 0;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 1;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 2;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = 3;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 4;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 5;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				iVar0 = 9;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 10;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 11;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				iVar0 = 6;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 7;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 8;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				iVar0 = 12;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 13;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 14;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				iVar0 = 15;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 16;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 17;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				iVar0 = 18;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 19;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 20;
			}
			else if (iParam1 == 3)
			{
				iVar0 = 21;
			}
			break;
	}
	return iVar0;
}

void func_535(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x5E432
{
	var uVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!GlobalFunc_5209(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!GlobalFunc_747(uParam0->f_1, 256) || (GlobalFunc_747(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(GlobalFunc_747(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							GlobalFunc_960(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						GlobalFunc_726(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (GlobalFunc_747(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = GlobalFunc_512(bParam4, GlobalFunc_512(GlobalFunc_747(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GlobalFunc_812(&(uParam0->f_1), 256);
		GlobalFunc_811(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}




int func_539(var uParam0, int iParam1, int iParam2)//Position - 0x5E745
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = iParam2;
	iVar1 = 0;
	while (iVar1 < uParam0->f_123)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_2[iVar1 /*15*/].f_14)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_2[iVar1 /*15*/].f_12, iVar2))
			{
				if (uParam0->f_2[iVar1 /*15*/].f_3[iVar2 /*2*/] == iParam1 && uParam0->f_2[iVar1 /*15*/].f_3[iVar2 /*2*/].f_1 == iVar0)
				{
					return 1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	return 0;
}

int func_540(int iParam0, int iParam1, int iParam2)//Position - 0x5E7D1
{
	if (iParam0 > -1 && iParam0 < iParam1)
	{
		return iParam0;
	}
	if (iParam0 > (iParam1 + iParam2))
	{
		return (iParam0 - iParam2);
	}
	if (iParam0 == iParam1)
	{
		return -2;
	}
	return -1;
}

int func_541(int iParam0, int iParam1, int iParam2)//Position - 0x5E80F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam1 + 1;
	iVar1 = ((iVar0 + iParam2) - 1);
	if (iParam0 < iVar0 || iParam0 > iVar1)
	{
		return -1;
	}
	iVar2 = (iParam0 - iVar0);
	return iVar2;
}



void func_544(var uParam0, var uParam1, var uParam2)//Position - 0x5E9B1
{
	struct<2> Var0;
	struct<2> Var9;
	int iVar11;
	char cVar12[16];
	struct<2> Var16;
	int iVar20;
	int iVar21;
	char* sVar22;
	char cVar26[32];
	char cVar30[32];
	struct<2> Var34;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	float fVar46;
	float fVar47;
	float fVar48;
	char cVar49[64];
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	char cVar69[16];
	char cVar73[16];
	bool bVar77;
	char cVar78[16];
	int iVar82;
	int iVar83;
	
	func_595("Shared", "BGGradient_32x1024", &(uParam1->f_199[0 /*9*/]), 0, 0, 1, 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GlobalFunc_6063(&(uParam1->f_199.f_741.f_176));
	func_593(&(uParam1->f_199.f_316[0 /*2*/]), &(uParam1->f_199.f_741.f_165), "SHR_TITLE", 0);
	GlobalFunc_6062(&(uParam1->f_199.f_741.f_176));
	GlobalFunc_6062(&(uParam1->f_199.f_741.f_187));
	func_587(uParam1->f_199.f_420[0 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[3 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[6 /*8*/], 0, 0);
	func_585(&(uParam1->f_199.f_316[1 /*2*/]), &(uParam1->f_199.f_741.f_176), "SHR_CHOOSE_WEAP", 1, 0);
	func_584(&(uParam1->f_199[1 /*9*/]), 1);
	if (*uParam1 == 0)
	{
		uParam1->f_11.f_6 = 0;
		iVar11 = uParam1->f_1.f_9;
		StringCopy(&cVar12, "Weapcat_", 16);
		StringCopy(&Var16, "SRange_Gen", 16);
		switch (iVar11)
		{
			case 0:
				StringConCat(&cVar12, "HG", 16);
				if (uParam2->f_12)
				{
					StringConCat(&cVar12, "_2", 16);
				}
				break;
			
			case 1:
				StringConCat(&cVar12, "SMG", 16);
				if (uParam2->f_13)
				{
					StringConCat(&cVar12, "_2", 16);
				}
				break;
			
			case 2:
				StringConCat(&cVar12, "AR", 16);
				if (uParam2->f_14)
				{
					StringConCat(&cVar12, "_2", 16);
				}
				break;
			
			case 3:
				StringConCat(&cVar12, "SG", 16);
				if (uParam2->f_15)
				{
					StringConCat(&cVar12, "_2", 16);
				}
				break;
			
			case 4:
				StringConCat(&cVar12, "LMG", 16);
				if (uParam2->f_16)
				{
					StringConCat(&cVar12, "_2", 16);
				}
				break;
			
			case 5:
				StringConCat(&cVar12, "HVY", 16);
				break;
			
			case 6:
				StringCopy(&cVar12, "Weap_RG_1", 16);
				StringCopy(&Var16, "SRange_Weap", 16);
				break;
		}
		func_301(&(uParam1->f_199[1 /*9*/]), 384f, 224f, 256f, 256f, 0);
		if (!bLocal_541)
		{
			GlobalFunc_4657(&(uParam1->f_199[1 /*9*/]), 0);
		}
		func_595(&Var16, &cVar12, &(uParam1->f_199[1 /*9*/]), 1, 0, 4, 0);
		GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar12, uParam1->f_199[1 /*9*/], uParam1->f_199[1 /*9*/].f_1, 0f, 0, 0, 255, 255);
	}
	else if (*uParam1 == 1 || *uParam1 == 2)
	{
		iVar20 = uParam1->f_1.f_9;
		iVar21 = uParam1->f_11.f_6;
		cVar26 = { func_582(iVar20, iVar21, &sVar22) };
		if (*uParam1 > 0 && iVar20 == 0)
		{
			func_301(&(uParam1->f_199[1 /*9*/]), 384f, 224f, 230.4f, 230.4f, 0);
		}
		else
		{
			func_301(&(uParam1->f_199[1 /*9*/]), 384f, 224f, 256f, 256f, 0);
		}
		if (!bLocal_541)
		{
			GlobalFunc_4657(&(uParam1->f_199[1 /*9*/]), 0);
		}
		func_595(&sVar22, &cVar26, &(uParam1->f_199[1 /*9*/]), 1, 0, 4, 0);
		GRAPHICS::DRAW_DEBUG_TEXT_2D(&sVar22, uParam1->f_199[1 /*9*/], uParam1->f_199[1 /*9*/].f_1, 0f, 0, 0, 255, 255);
		GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar26, uParam1->f_199[1 /*9*/], (uParam1->f_199[1 /*9*/].f_1 + 0.0125f), 0f, 0, 0, 255, 255);
	}
	func_587(uParam1->f_199.f_420[1 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[4 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[7 /*8*/], 0, 0);
	func_585(&(uParam1->f_199.f_316[2 /*2*/]), &(uParam1->f_199.f_741.f_176), "SHR_CHALLENGES", 1, 0);
	StringCopy(&cVar30, "Chal_Blank", 16);
	StringCopy(&Var34, "SRange_Chal", 16);
	if (*uParam1 == 2)
	{
		cVar30 = { func_581(uParam1->f_1.f_9, uParam1->f_18.f_36, &Var34) };
	}
	func_595(&Var34, &cVar30, &(uParam1->f_199[2 /*9*/]), 1, 0, 4, 0);
	func_587(uParam1->f_199.f_420[2 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[5 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[8 /*8*/], 0, 0);
	func_585(&(uParam1->f_199.f_316[3 /*2*/]), &(uParam1->f_199.f_741.f_176), "SHR_RESULTS", 1, 0);
	iVar38 = func_580(*uParam1 == 2, uParam1->f_18.f_36, 0);
	iVar39 = (*uParam0[uParam1->f_1.f_9 /*41*/])[iVar38 /*10*/];
	if (*uParam1 != 2)
	{
		if ((uParam0[uParam1->f_1.f_9 /*41*/][0 /*10*/])->f_2 == 2)
		{
			func_579(uParam1, iVar39);
		}
		else if ((uParam0[uParam1->f_1.f_9 /*41*/][0 /*10*/])->f_2 == 5)
		{
			func_577(uParam1, iVar39);
		}
		else
		{
			func_574(uParam1, iVar39);
		}
	}
	else if ((uParam0[uParam1->f_1.f_9 /*41*/][uParam1->f_18.f_36 /*10*/])->f_2 == 2)
	{
		func_579(uParam1, iVar39);
	}
	else if ((uParam0[uParam1->f_1.f_9 /*41*/][uParam1->f_18.f_36 /*10*/])->f_2 == 5)
	{
		func_577(uParam1, iVar39);
	}
	else
	{
		func_574(uParam1, iVar39);
	}
	GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
	func_587(uParam1->f_199.f_420[32 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[33 /*8*/], 0, 0);
	func_587(uParam1->f_199.f_420[34 /*8*/], 0, 0);
	iVar40 = 0;
	fVar46 = 0.8f;
	fVar47 = 0.2125f;
	fVar48 = 0.0125f;
	StringCopy(&cVar49, "Debug Menu Output", 64);
	GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar49, fVar46, fVar47, 0f, 0, 0, 255, 255);
	fVar47 = (fVar47 + fVar48);
	iVar41 = 0;
	while (iVar41 < 7)
	{
		if (!(iVar41 == 6 && uParam2->f_17 == 0))
		{
			iVar43 = (9 + iVar40);
			iVar44 = (4 + iVar40);
			iVar45 = (4 + iVar40);
			if (*uParam1 == 0)
			{
				if (iVar41 == uParam1->f_1.f_9)
				{
					GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 1, 1);
					GlobalFunc_4655(&(uParam1->f_199[iVar44 /*9*/]));
					GlobalFunc_6062(&(uParam1->f_199.f_741.f_187));
				}
				else
				{
					GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
					func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
					GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
				}
			}
			else if (iVar41 == uParam1->f_1.f_9)
			{
				GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 1, 1);
				GlobalFunc_4655(&(uParam1->f_199[iVar44 /*9*/]));
				GlobalFunc_6062(&(uParam1->f_199.f_741.f_187));
			}
			else
			{
				GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
				func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
				GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
			}
			func_587(uParam1->f_199.f_420[iVar43 /*8*/], 0, 0);
			Var9 = { uParam1->f_199.f_316[iVar45 /*2*/] };
			if (!uParam1->f_1[iVar41])
			{
				func_595("Shared", "Locked_Icon_32", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
			}
			else
			{
				if (iVar41 == uParam1->f_1.f_9)
				{
					GlobalFunc_3461(&(uParam1->f_199[iVar44 /*9*/]), 2);
					func_595("Shared", GlobalFunc_1078(*uParam1 == 0, "MenuPlus_32", "MenuArrow_32"), &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
				}
				if (func_571(iVar41))
				{
					func_301(&Var0, 269f, 0f, 32f, 32f, 0);
					GlobalFunc_4630(&Var0, 255, 255, 255, 255);
					Var0.f_1 = (uParam1->f_199.f_316[iVar45 /*2*/].f_1 + fLocal_540);
					Var9 = (Var0 + fLocal_539);
					func_584(&Var0, 1);
					if (!bLocal_541)
					{
						GlobalFunc_4657(&Var0, 0);
					}
					func_595("CommonMenu", "shop_NEW_Star", &Var0, 1, 0, 4, 0);
					if (!bLocal_541)
					{
						GlobalFunc_4656(&Var9, &(uParam1->f_199.f_741.f_187));
					}
				}
			}
			func_593(&Var9, &(uParam1->f_199.f_741.f_187), func_569(iVar41, 0), 0);
			GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
			func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
			GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
			GlobalFunc_6063(&(uParam1->f_199.f_741.f_198));
			iVar40++;
			if (iVar41 == uParam1->f_1.f_9)
			{
				StringCopy(&cVar49, "iCurElement = ", 64);
				StringIntConCat(&cVar49, uParam1->f_1.f_9, 64);
				GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar49, fVar46, fVar47, 0f, 0, 0, 255, 255);
				fVar47 = (fVar47 + fVar48);
				StringCopy(&cVar49, "iNumElements = ", 64);
				StringIntConCat(&cVar49, uParam1->f_11.f_5, 64);
				GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar49, fVar46, fVar47, 0f, 0, 0, 255, 255);
				fVar47 = (fVar47 + fVar48);
				iVar42 = 0;
				while (iVar42 < uParam1->f_11.f_5)
				{
					StringCopy(&cVar49, "iWeaponIndex = ", 64);
					StringIntConCat(&cVar49, iVar42, 64);
					GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar49, fVar46, fVar47, 0f, 0, 0, 255, 255);
					fVar47 = (fVar47 + fVar48);
					StringCopy(&cVar49, "iCurrentMenuSlot = ", 64);
					StringIntConCat(&cVar49, iVar40, 64);
					GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar49, fVar46, fVar47, 0f, 0, 0, 255, 255);
					fVar47 = (fVar47 + fVar48);
					iVar43 = (9 + iVar40);
					iVar44 = (4 + iVar40);
					iVar45 = (4 + iVar40);
					if (*uParam1 == 1)
					{
						if (iVar42 == uParam1->f_11.f_6)
						{
							GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 1, 1);
							GlobalFunc_4655(&(uParam1->f_199[iVar44 /*9*/]));
							GlobalFunc_6062(&(uParam1->f_199.f_741.f_187));
						}
						else
						{
							GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
							func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
							GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
						}
					}
					else if (iVar42 == uParam1->f_11.f_6)
					{
						GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 1, 1);
						GlobalFunc_4655(&(uParam1->f_199[iVar44 /*9*/]));
						GlobalFunc_6062(&(uParam1->f_199.f_741.f_187));
					}
					else
					{
						GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
						func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
						GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
					}
					func_587(uParam1->f_199.f_420[iVar43 /*8*/], 0, 0);
					func_568(&(uParam1->f_199.f_316[iVar45 /*2*/]));
					iVar65 = (iVar41 * 4 + iVar42);
					Var9 = { uParam1->f_199.f_316[iVar45 /*2*/] };
					if (!uParam1->f_11[iVar42])
					{
						func_595("Shared", "Locked_Icon_32", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
					}
					else if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_2, iVar65))
					{
						if (iVar42 == uParam1->f_11.f_6)
						{
							GlobalFunc_4655(&(uParam1->f_199[iVar44 /*9*/]));
						}
						else
						{
							func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
						}
						func_595("CommonMenu", "Shop_Tick_Icon", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
					}
					else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1, iVar65))
					{
						func_301(&Var0, 285f, 0f, 32f, 32f, 0);
						Var0.f_1 = uParam1->f_199[iVar44 /*9*/].f_1;
						Var9 = (Var0 + fLocal_539);
						func_584(&Var0, 1);
						if (!bLocal_541)
						{
							GlobalFunc_4657(&Var0, 0);
						}
						func_595("CommonMenu", "shop_NEW_Star", &Var0, 1, 0, 4, 0);
						if (!bLocal_541)
						{
							GlobalFunc_4656(&Var9, &(uParam1->f_199.f_741.f_187));
						}
					}
					if (iVar41 == 6 && iVar42 == 0)
					{
						func_593(&Var9, &(uParam1->f_199.f_741.f_187), "WT_RAILGUN", 0);
					}
					else
					{
						func_593(&Var9, &(uParam1->f_199.f_741.f_187), GlobalFunc_5379(func_333(iVar41, iVar42), 0), 0);
					}
					func_566(&(uParam1->f_199.f_316[iVar45 /*2*/]));
					GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
					GlobalFunc_6063(&(uParam1->f_199.f_741.f_198));
					func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
					GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
					iVar40++;
					iVar42++;
				}
			}
		}
		iVar41++;
	}
	iLocal_542 = iVar40;
	iVar66 = 0;
	while (iVar66 < uParam1->f_18.f_35)
	{
		iVar43 = (24 + iVar66);
		iVar44 = (15 + iVar66);
		iVar45 = (15 + iVar66);
		iVar67 = (28 + iVar66);
		iVar68 = (19 + iVar66);
		StringCopy(&cVar69, "SHR_CHALL_", 16);
		StringIntConCat(&cVar69, iVar66 + 1, 16);
		if (iVar66 == uParam1->f_18.f_36 && *uParam1 == 2)
		{
			GlobalFunc_6062(&(uParam1->f_199.f_741.f_187));
		}
		else
		{
			GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
		}
		if (iVar66 == uParam1->f_18.f_36 && *uParam1 == 2)
		{
			GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 1, 1);
		}
		else
		{
			GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
		}
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_198), &(uParam1->f_199.f_420[iVar67 /*8*/]), 0.0047f, 0.0055f);
		bVar77 = false;
		if (*uParam1 == 0)
		{
			if (uParam1->f_1[uParam1->f_1.f_9])
			{
				bVar77 = true;
			}
		}
		else if (*uParam1 == 1)
		{
			if (uParam1->f_11[uParam1->f_11.f_6])
			{
				bVar77 = true;
			}
		}
		else
		{
			bVar77 = true;
		}
		if (bVar77 || iVar66 == 0)
		{
			func_587(uParam1->f_199.f_420[iVar43 /*8*/], 0, 0);
			GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
			func_587(uParam1->f_199.f_420[iVar67 /*8*/], 0, 0);
		}
		StringCopy(&cVar73, "", 16);
		StringCopy(&cVar78, "", 16);
		if (bVar77)
		{
			if (uParam1->f_18[iVar66])
			{
				MemCopy(&cVar73, {uParam1->f_18.f_5[iVar66 /*6*/]}, 4);
				if (func_277((*uParam0[uParam1->f_1.f_9 /*41*/])[iVar66 /*10*/]))
				{
					switch (func_355((*uParam0[uParam1->f_1.f_9 /*41*/])[iVar66 /*10*/]))
					{
						case 1:
							GlobalFunc_3461(&(uParam1->f_199[iVar44 /*9*/]), 107);
							func_595("CommonMenu", "Common_Medal", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
							break;
						
						case 2:
							GlobalFunc_3461(&(uParam1->f_199[iVar44 /*9*/]), 108);
							func_595("CommonMenu", "Common_Medal", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
							break;
						
						case 3:
							GlobalFunc_3461(&(uParam1->f_199[iVar44 /*9*/]), 109);
							func_595("CommonMenu", "Common_Medal", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
							break;
						}
				}
			}
			else
			{
				if (iVar66 == uParam1->f_18.f_36 && *uParam1 == 2)
				{
					GlobalFunc_4655(&(uParam1->f_199[iVar44 /*9*/]));
				}
				else
				{
					func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
				}
				func_595("Shared", "Locked_Icon_32", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
				StringCopy(&cVar73, "SHR_C", 16);
				StringIntConCat(&cVar73, iVar66 + 1, 16);
				StringConCat(&cVar73, "_REQ", 16);
			}
		}
		else if (iVar66 == 0)
		{
			func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
			func_595("Shared", "Locked_Icon_32", &(uParam1->f_199[iVar44 /*9*/]), 1, 0, 4, 0);
			StringCopy(&cVar69, "SHR_CHALL_1", 16);
			if (*uParam1 == 0)
			{
				StringCopy(&cVar73, func_564(uParam1->f_1.f_9, 0, uParam2->f_17), 16);
				StringCopy(&cVar78, func_569(uParam1->f_1.f_9, 1), 16);
			}
			else if (*uParam1 == 1)
			{
				StringCopy(&cVar73, func_564(uParam1->f_1.f_9, uParam1->f_11.f_6, uParam2->f_17), 16);
				StringCopy(&cVar78, func_562(func_333(uParam1->f_1.f_9, uParam1->f_11.f_6)), 16);
			}
		}
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar73) != 0)
		{
			GlobalFunc_6063(&(uParam1->f_199.f_741.f_198));
			func_593(&(uParam1->f_199.f_316[iVar45 /*2*/]), &(uParam1->f_199.f_741.f_187), &cVar69, 0);
			HUD::SET_TEXT_LEADING(0);
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar78) != 0)
			{
				func_560(&(uParam1->f_199.f_316[iVar68 /*2*/]), &(uParam1->f_199.f_741.f_198), &cVar73, &cVar78, 1);
			}
			else
			{
				func_593(&(uParam1->f_199.f_316[iVar68 /*2*/]), &(uParam1->f_199.f_741.f_198), &cVar73, 0);
			}
		}
		GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 117, 1);
		GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
		GlobalFunc_6063(&(uParam1->f_199.f_741.f_198));
		func_584(&(uParam1->f_199[iVar44 /*9*/]), 1);
		GlobalFunc_4658(&(uParam1->f_199.f_741.f_198));
		iVar66++;
	}
	GlobalFunc_3458(&(uParam1->f_199.f_741.f_187), 1);
	func_587(uParam1->f_199.f_420[20 /*8*/], 0, 0);
	func_593(&(uParam1->f_199.f_316[23 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_M_BEST", 0);
	func_587(uParam1->f_199.f_420[21 /*8*/], 0, 0);
	func_593(&(uParam1->f_199.f_316[24 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_SCORE_REC", 0);
	func_587(uParam1->f_199.f_420[22 /*8*/], 0, 0);
	func_593(&(uParam1->f_199.f_316[25 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ACC_REC", 0);
	func_587(uParam1->f_199.f_420[23 /*8*/], 0, 0);
	func_593(&(uParam1->f_199.f_316[26 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_HI_SCORE", 0);
	iVar82 = 0;
	if (*uParam1 == 2)
	{
		iVar39 = (*uParam0[uParam1->f_1.f_9 /*41*/])[uParam1->f_18.f_36 /*10*/];
		iVar82 = func_450(iVar39);
	}
	if (iVar82 == 0)
	{
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[20 /*8*/]), 0.0047f, 0.0055f);
		func_585(&(uParam1->f_199.f_316[31 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 0, 1);
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[21 /*8*/]), 0.0047f, 0.0055f);
		func_585(&(uParam1->f_199.f_316[32 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 0, 1);
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[22 /*8*/]), 0.0047f, 0.0055f);
		func_585(&(uParam1->f_199.f_316[33 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 0, 1);
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[23 /*8*/]), 0.0047f, 0.0055f);
		func_585(&(uParam1->f_199.f_316[34 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 0, 1);
		uParam1->f_199[20 /*9*/].f_7 = 76;
		func_595("SRange_Gen", "Shooting_Bronze_128", &(uParam1->f_199[20 /*9*/]), 0, 0, 4, 0);
		uParam1->f_199[21 /*9*/].f_7 = 76;
		func_595("SRange_Gen", "Shooting_Silver_128", &(uParam1->f_199[21 /*9*/]), 0, 0, 4, 0);
		uParam1->f_199[22 /*9*/].f_7 = 76;
		func_595("SRange_Gen", "Shooting_Gold_128", &(uParam1->f_199[22 /*9*/]), 0, 0, 4, 0);
	}
	else
	{
		iVar83 = func_355((*uParam0[uParam1->f_1.f_9 /*41*/])[uParam1->f_18.f_36 /*10*/]);
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[20 /*8*/]), 0.0047f, 0.0055f);
		if (iVar83 == 3)
		{
			GlobalFunc_6544(&(uParam1->f_199.f_741.f_187));
			func_585(&(uParam1->f_199.f_316[31 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_M_GOLD", 0, 1);
		}
		else if (iVar83 == 2)
		{
			GlobalFunc_6543(&(uParam1->f_199.f_741.f_187));
			func_585(&(uParam1->f_199.f_316[31 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_M_SILVER", 0, 1);
		}
		else if (iVar83 == 1)
		{
			GlobalFunc_6542(&(uParam1->f_199.f_741.f_187));
			func_585(&(uParam1->f_199.f_316[31 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_M_BRONZE", 0, 1);
		}
		else
		{
			GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
			func_585(&(uParam1->f_199.f_316[31 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 0, 1);
		}
		GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[21 /*8*/]), 0.0047f, 0.0055f);
		func_553(&(uParam1->f_199.f_316[32 /*2*/]), &(uParam1->f_199.f_741.f_187), "NUMBER", func_554(iVar39), 2);
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[22 /*8*/]), 0.0047f, 0.0055f);
		func_545(&(uParam1->f_199.f_316[33 /*2*/]), &(uParam1->f_199.f_741.f_187), "HUD_PERCENT", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iVar39 /*12*/].f_7, 1, 2);
		GlobalFunc_4659(&(uParam1->f_199.f_741.f_187), &(uParam1->f_199.f_420[23 /*8*/]), 0.0047f, 0.0055f);
		func_553(&(uParam1->f_199.f_316[34 /*2*/]), &(uParam1->f_199.f_741.f_187), "NUMBER", func_450(iVar39), 2);
		if (iVar83 >= 1)
		{
			uParam1->f_199[20 /*9*/].f_7 = 255;
		}
		else
		{
			uParam1->f_199[20 /*9*/].f_7 = 76;
		}
		func_595("SRange_Gen", "Shooting_Bronze_128", &(uParam1->f_199[20 /*9*/]), 0, 0, 4, 0);
		if (iVar83 >= 2)
		{
			uParam1->f_199[21 /*9*/].f_7 = 255;
		}
		else
		{
			uParam1->f_199[21 /*9*/].f_7 = 76;
		}
		func_595("SRange_Gen", "Shooting_Silver_128", &(uParam1->f_199[21 /*9*/]), 0, 0, 4, 0);
		if (iVar83 >= 3)
		{
			uParam1->f_199[22 /*9*/].f_7 = 255;
		}
		else
		{
			uParam1->f_199[22 /*9*/].f_7 = 76;
		}
		func_595("SRange_Gen", "Shooting_Gold_128", &(uParam1->f_199[22 /*9*/]), 0, 0, 4, 0);
	}
	GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 107, 1);
	func_587(uParam1->f_199.f_420[35 /*8*/], 0, 0);
	GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 108, 1);
	func_587(uParam1->f_199.f_420[36 /*8*/], 0, 0);
	GlobalFunc_3480(&(uParam1->f_199.f_420[iVar43 /*8*/]), 109, 1);
	func_587(uParam1->f_199.f_420[37 /*8*/], 0, 0);
	GlobalFunc_6062(&(uParam1->f_199.f_741.f_187));
	if (*uParam1 == 2 && uParam1->f_18[uParam1->f_18.f_36])
	{
		func_553(&(uParam1->f_199.f_316[39 /*2*/]), &(uParam1->f_199.f_741.f_187), "NUMBER", func_420(uParam0[uParam1->f_1.f_9 /*41*/][uParam1->f_18.f_36 /*10*/], 1), 0);
		func_553(&(uParam1->f_199.f_316[40 /*2*/]), &(uParam1->f_199.f_741.f_187), "NUMBER", func_420(uParam0[uParam1->f_1.f_9 /*41*/][uParam1->f_18.f_36 /*10*/], 2), 0);
		func_553(&(uParam1->f_199.f_316[41 /*2*/]), &(uParam1->f_199.f_741.f_187), "NUMBER", func_420(uParam0[uParam1->f_1.f_9 /*41*/][uParam1->f_18.f_36 /*10*/], 3), 0);
	}
	else
	{
		func_585(&(uParam1->f_199.f_316[39 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 1, 0);
		func_585(&(uParam1->f_199.f_316[40 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 1, 0);
		func_585(&(uParam1->f_199.f_316[41 /*2*/]), &(uParam1->f_199.f_741.f_187), "SHR_ENDASH", 1, 0);
	}
	GlobalFunc_6063(&(uParam1->f_199.f_741.f_187));
}

void func_545(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5)//Position - 0x5FFC5
{
	if (!GlobalFunc_1561(sParam2))
	{
		if (GlobalFunc_5263())
		{
			GlobalFunc_981(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			GlobalFunc_2375(func_548(*uParam0), func_547(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}


float func_547(float fParam0)//Position - 0x60026
{
	return (fParam0 + fLocal_13);
}

float func_548(float fParam0)//Position - 0x60033
{
	return (fParam0 + fLocal_12);
}





void func_553(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6015F
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!GlobalFunc_1561(sVar0))
	{
		if (GlobalFunc_5263())
		{
			GlobalFunc_981(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			GlobalFunc_1321(func_548(*uParam0), func_547(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

int func_554(int iParam0)//Position - 0x601A1
{
	return Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam0 /*12*/];
}






void func_560(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x60225
{
	if (!GlobalFunc_1561(sParam2))
	{
		if (GlobalFunc_5263())
		{
			GlobalFunc_981(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			func_561(func_548(*uParam0), func_547(uParam0->f_1), sParam2, sParam3);
		}
	}
}

void func_561(float fParam0, float fParam1, char* sParam2, char* sParam3)//Position - 0x60262
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

char* func_562(int iParam0)//Position - 0x6027F
{
	struct<24> Var0;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return "WTT_PIST";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTT_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTT_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTT_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTT_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTT_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTT_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTT_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTT_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTT_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTT_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTT_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTT_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTT_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTT_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTT_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTT_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTT_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTT_MINIGUN";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTT_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTT_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTT_PIST_50";
			break;
		
		case joaat("weapon_bottle"):
			return "WTT_BOTTLE";
			break;
		
		case joaat("weapon_gusenberg"):
			return "WTT_GUSENBERG";
			break;
		
		case joaat("weapon_snspistol"):
			return "WTT_SNSPISTOL";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTT_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTT_DAGGER";
			break;
		
		case joaat("weapon_flaregun"):
			return "WTT_FLAREGUN";
			break;
		
		case joaat("weapon_musket"):
			return "WTT_MUSKET";
			break;
		
		case joaat("weapon_firework"):
			return "WTT_FWRKLNCHR";
			break;
		
		case joaat("weapon_marksmanrifle"):
			return "WTT_HMKRIFLE";
			break;
		
		case joaat("weapon_heavyshotgun"):
			return "WTT_HVYSHOT";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTT_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTT_HOMLNCH";
			break;
		
		case joaat("weapon_combatpdw"):
			return "WTT_COMBATPDW";
			break;
		
		case joaat("weapon_knuckle"):
			return "WTT_KNUCKLE";
			break;
		
		case joaat("weapon_marksmanpistol"):
			return "WTT_MKPISTOL";
			break;
		
		default:
			if (GlobalFunc_221(iParam0, &Var0) != -1)
			{
				return GlobalFunc_217(&(Var0.f_23));
			}
			break;
	}
	return "WT_INVALID";
}


char* func_564(int iParam0, int iParam1, bool bParam2)//Position - 0x6052C
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return "";
			}
			else if (iParam1 == 3)
			{
				return "SHR_WEPLK_P50";
			}
			else if (iParam1 == 1)
			{
				return "SHR_WEPLK_PCB";
			}
			else if (iParam1 == 2)
			{
				return "SHR_WEPLK_PAP";
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return "SHR_WEPLK_SMGM";
			}
			else if (iParam1 == 1)
			{
				return "SHR_WEPLK_SMGS";
			}
			else if (iParam1 == 2)
			{
				return "SHR_WEPLK_SMGA";
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return "SHR_WEPLK_AR";
			}
			else if (iParam1 == 1)
			{
				return "SHR_WEPLK_ARCR";
			}
			else if (iParam1 == 3)
			{
				return "SHR_WEPLK_ARHR";
			}
			else if (iParam1 == 2)
			{
				return "SHR_WEPLK_ARAR";
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return "SHR_WEPLK_SGPM";
			}
			else if (iParam1 == 1)
			{
				return "SHR_WEPLK_SGSW";
			}
			else if (iParam1 == 3)
			{
				return "SHR_WEPLK_SGBP";
			}
			else if (iParam1 == 2)
			{
				return "SHR_WEPLK_SGAS";
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return "SHR_WEPLK_MG";
			}
			else if (iParam1 == 1)
			{
				return "SHR_WEPLK_MGC";
			}
			else if (iParam1 == 2)
			{
				return "SHR_WEPLK_MGA";
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				if (bParam2)
				{
					return "SHR_WEPLK_MINI2";
				}
				else
				{
					return "SHR_WEPLK_MINI";
				}
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return "SHR_WEPLK_RAIL";
			}
			break;
	}
	return "";
}


void func_566(var uParam0)//Position - 0x60706
{
	*uParam0 = (*uParam0 - 0.01f);
}


void func_568(var uParam0)//Position - 0x60FFE
{
	*uParam0 = (*uParam0 + 0.01f);
}

char* func_569(int iParam0, bool bParam1)//Position - 0x61012
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTT_PIST";
			}
			else
			{
				return "SHR_CAT_HG";
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return "WTT_SMG_MCR";
			}
			else
			{
				return "SHR_CAT_SMG";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "WTT_RIFLE_ASL";
			}
			else
			{
				return "SHR_CAT_AR";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "WTT_SG_PMP";
			}
			else
			{
				return "SHR_CAT_SG";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "WTT_MG";
			}
			else
			{
				return "SHR_CAT_LMG";
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return "WTT_MINIGUN";
			}
			else
			{
				return "SHR_CAT_HVY";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "WTT_RAILGUN";
			}
			else
			{
				return "SHR_CAT_RAILGUN";
			}
			break;
	}
	return "";
}


int func_571(int iParam0)//Position - 0x61160
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 4;
			break;
		
		case 1:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 3:
			iVar0 = 4;
			break;
		
		case 4:
			iVar0 = 3;
			break;
		
		case 5:
			iVar0 = 1;
			break;
		
		case 6:
			iVar0 = 1;
			break;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = (iParam0 * 4 + iVar1);
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_1, iVar2))
		{
			if (func_332(iParam0, iVar1))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}



void func_574(var uParam0, int iParam1)//Position - 0x6124C
{
	struct<9> Var0;
	
	uParam0->f_199[3 /*9*/] = 0.742f;
	uParam0->f_199[3 /*9*/].f_1 = 0.308f;
	uParam0->f_199[3 /*9*/].f_2 = 0.1f;
	uParam0->f_199[3 /*9*/].f_3 = 0.178f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[3 /*9*/]), 0);
	}
	func_595("SRange_Gen", "Hits_Target", &(uParam0->f_199[3 /*9*/]), 1, 0, 4, 0);
	GlobalFunc_6063(&(uParam0->f_199.f_741.f_187));
	if (*uParam0 == 2)
	{
		GlobalFunc_3458(&(uParam0->f_199.f_741.f_187), 1);
		uParam0->f_199.f_316[42 /*2*/] = 0.629f;
		uParam0->f_199.f_316[42 /*2*/].f_1 = 0.228f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_8, 100, 1, 0);
		uParam0->f_199.f_316[43 /*2*/] = 0.629f;
		uParam0->f_199.f_316[43 /*2*/].f_1 = 0.272f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_9, 50, 1, 0);
		uParam0->f_199.f_316[44 /*2*/] = 0.629f;
		uParam0->f_199.f_316[44 /*2*/].f_1 = 0.316f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_10, 25, 1, 0);
		uParam0->f_199.f_316[45 /*2*/] = 0.629f;
		uParam0->f_199.f_316[45 /*2*/].f_1 = 0.36f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[45 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[45 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_11, 10, 1, 0);
		Var0.f_2 = 0.01f;
		Var0.f_3 = 0.018f;
		HUD::GET_HUD_COLOUR(1, &(Var0.f_4), &(Var0.f_5), &(Var0.f_6), &(Var0.f_7));
		Var0.f_8 = 0f;
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_8 >= 1)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.343f + uParam0->f_1198);
			Var0.f_1 = (0.325f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_8 >= 2)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.351f + uParam0->f_1198);
			Var0.f_1 = (0.319f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_8 >= 3)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.349f + uParam0->f_1198);
			Var0.f_1 = (0.338f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_8 >= 4)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.354f + uParam0->f_1198);
			Var0.f_1 = (0.332f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_9 >= 1)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.334f + uParam0->f_1198);
			Var0.f_1 = (0.348f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_9 >= 2)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.348f + uParam0->f_1198);
			Var0.f_1 = (0.306f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_9 >= 3)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.366f + uParam0->f_1198);
			Var0.f_1 = (0.321f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_9 >= 4)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.35f + uParam0->f_1198);
			Var0.f_1 = (0.354f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_10 >= 1)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.327f + uParam0->f_1198);
			Var0.f_1 = (0.298f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_10 >= 2)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.338f + uParam0->f_1198);
			Var0.f_1 = (0.281f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_10 >= 3)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.375f + uParam0->f_1198);
			Var0.f_1 = (0.346f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_10 >= 4)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.344f + uParam0->f_1198);
			Var0.f_1 = (0.37f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_11 >= 1)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.373f + uParam0->f_1198);
			Var0.f_1 = (0.273f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_11 >= 2)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.31f + uParam0->f_1198);
			Var0.f_1 = (0.337f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_11 >= 3)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.328f + uParam0->f_1198);
			Var0.f_1 = (0.386f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_11 >= 4)
		{
			Var0.f_2 = 0.01f;
			Var0.f_3 = 0.018f;
			Var0 = (0.377f + uParam0->f_1198);
			Var0.f_1 = (0.37f + uParam0->f_1199);
			if (!bLocal_541)
			{
				GlobalFunc_4657(&Var0, 0);
			}
			func_595("SRange_Gen", "Hit_Cross", &Var0, 1, 0, 4, 0);
		}
	}
	else
	{
		GlobalFunc_3458(&(uParam0->f_199.f_741.f_187), 1);
		uParam0->f_199.f_316[42 /*2*/] = 0.629f;
		uParam0->f_199.f_316[42 /*2*/].f_1 = 0.228f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", 0, 100, 1, 0);
		uParam0->f_199.f_316[43 /*2*/] = 0.629f;
		uParam0->f_199.f_316[43 /*2*/].f_1 = 0.272f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", 0, 50, 1, 0);
		uParam0->f_199.f_316[44 /*2*/] = 0.629f;
		uParam0->f_199.f_316[44 /*2*/].f_1 = 0.316f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", 0, 25, 1, 0);
		uParam0->f_199.f_316[45 /*2*/] = 0.629f;
		uParam0->f_199.f_316[45 /*2*/].f_1 = 0.36f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[45 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_575(&(uParam0->f_199.f_316[45 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_X_HITS", 0, 10, 1, 0);
	}
	GlobalFunc_4630(&(uParam0->f_199[23 /*9*/]), 151, 124, 19, 255);
	uParam0->f_199[23 /*9*/] = 0.617f;
	uParam0->f_199[23 /*9*/].f_1 = 0.242f;
	uParam0->f_199[23 /*9*/].f_2 = 0.025f;
	uParam0->f_199[23 /*9*/].f_3 = 0.0444f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[23 /*9*/]), 0);
	}
	func_595("CommonMenu", "Common_Medal", &(uParam0->f_199[23 /*9*/]), 1, 0, 4, 0);
	GlobalFunc_4630(&(uParam0->f_199[24 /*9*/]), 112, 33, 35, 255);
	uParam0->f_199[24 /*9*/] = 0.617f;
	uParam0->f_199[24 /*9*/].f_1 = 0.286f;
	uParam0->f_199[24 /*9*/].f_2 = 0.025f;
	uParam0->f_199[24 /*9*/].f_3 = 0.0444f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[24 /*9*/]), 0);
	}
	func_595("CommonMenu", "Common_Medal", &(uParam0->f_199[24 /*9*/]), 1, 0, 4, 0);
	GlobalFunc_4630(&(uParam0->f_199[25 /*9*/]), 49, 113, 107, 255);
	uParam0->f_199[25 /*9*/] = 0.617f;
	uParam0->f_199[25 /*9*/].f_1 = 0.33f;
	uParam0->f_199[25 /*9*/].f_2 = 0.025f;
	uParam0->f_199[25 /*9*/].f_3 = 0.0444f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[25 /*9*/]), 0);
	}
	func_595("CommonMenu", "Common_Medal", &(uParam0->f_199[25 /*9*/]), 1, 0, 4, 0);
	GlobalFunc_4630(&(uParam0->f_199[26 /*9*/]), 48, 48, 48, 255);
	uParam0->f_199[26 /*9*/] = 0.617f;
	uParam0->f_199[26 /*9*/].f_1 = 0.374f;
	uParam0->f_199[26 /*9*/].f_2 = 0.025f;
	uParam0->f_199[26 /*9*/].f_3 = 0.0444f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[26 /*9*/]), 0);
	}
	func_595("CommonMenu", "Common_Medal", &(uParam0->f_199[26 /*9*/]), 1, 0, 4, 0);
}

void func_575(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x61EE1
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!GlobalFunc_1561(sVar0))
	{
		if (GlobalFunc_5263())
		{
			GlobalFunc_981(uParam1, 0);
			HUD::SET_TEXT_CENTRE(iParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			GlobalFunc_1660(func_548(*uParam0), func_547(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}


void func_577(var uParam0, int iParam1)//Position - 0x61F4D
{
	func_578(&(uParam0->f_199[23 /*9*/]), 345f);
	func_578(&(uParam0->f_199[24 /*9*/]), 345f);
	func_578(&(uParam0->f_199[25 /*9*/]), 345f);
	uParam0->f_199[23 /*9*/].f_2 = 0.025f;
	uParam0->f_199[23 /*9*/].f_3 = 0.044f;
	uParam0->f_199[24 /*9*/].f_2 = uParam0->f_199[23 /*9*/].f_2;
	uParam0->f_199[24 /*9*/].f_3 = uParam0->f_199[23 /*9*/].f_3;
	uParam0->f_199[25 /*9*/].f_2 = uParam0->f_199[23 /*9*/].f_2;
	uParam0->f_199[25 /*9*/].f_3 = uParam0->f_199[23 /*9*/].f_3;
	func_584(&(uParam0->f_199[23 /*9*/]), 1);
	uParam0->f_199[23 /*9*/].f_2 = 0.025f;
	uParam0->f_199[23 /*9*/].f_3 = 0.044f;
	uParam0->f_199[23 /*9*/] = 0.6415f;
	uParam0->f_199[23 /*9*/].f_1 = 0.254f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[23 /*9*/]), 0);
	}
	func_595("SRange_Gen", "Icon_Target_32", &(uParam0->f_199[23 /*9*/]), 1, 0, 4, 0);
	func_584(&(uParam0->f_199[24 /*9*/]), 1);
	uParam0->f_199[24 /*9*/].f_2 = 0.025f;
	uParam0->f_199[24 /*9*/].f_3 = 0.044f;
	uParam0->f_199[24 /*9*/] = 0.7025f;
	uParam0->f_199[24 /*9*/].f_1 = 0.254f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[24 /*9*/]), 0);
	}
	func_595("SRange_Gen", "Icon_Target_32", &(uParam0->f_199[24 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[24 /*9*/].f_2 = 0.025f;
	uParam0->f_199[24 /*9*/].f_3 = 0.044f;
	uParam0->f_199[24 /*9*/] = 0.6975f;
	uParam0->f_199[24 /*9*/].f_1 = 0.254f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[24 /*9*/]), 0);
	}
	func_595("SRange_Gen", "Icon_Target_32", &(uParam0->f_199[24 /*9*/]), 1, 0, 4, 0);
	func_584(&(uParam0->f_199[25 /*9*/]), 1);
	uParam0->f_199[25 /*9*/].f_2 = 0.025f;
	uParam0->f_199[25 /*9*/].f_3 = 0.044f;
	uParam0->f_199[25 /*9*/] = 0.7635f;
	uParam0->f_199[25 /*9*/].f_1 = 0.254f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[25 /*9*/]), 0);
	}
	func_595("SRange_Gen", "Icon_Target_32", &(uParam0->f_199[25 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[25 /*9*/].f_2 = 0.025f;
	uParam0->f_199[25 /*9*/].f_3 = 0.044f;
	uParam0->f_199[25 /*9*/] = 0.7585f;
	uParam0->f_199[25 /*9*/].f_1 = 0.254f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[25 /*9*/]), 0);
	}
	func_595("SRange_Gen", "Icon_Target_32", &(uParam0->f_199[25 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[25 /*9*/].f_2 = 0.025f;
	uParam0->f_199[25 /*9*/].f_3 = 0.044f;
	uParam0->f_199[25 /*9*/] = 0.7535f;
	uParam0->f_199[25 /*9*/].f_1 = 0.254f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[25 /*9*/]), 0);
	}
	func_595("SRange_Gen", "Icon_Target_32", &(uParam0->f_199[25 /*9*/]), 1, 0, 4, 0);
	GlobalFunc_3458(&(uParam0->f_199.f_741.f_187), 1);
	uParam0->f_199.f_316[42 /*2*/] = 0.642f;
	uParam0->f_199.f_316[42 /*2*/].f_1 = 0.28f;
	if (!bLocal_541)
	{
		GlobalFunc_4656(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187));
	}
	func_553(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187), "HUD_MULTSMAL", 100, 0);
	uParam0->f_199.f_316[43 /*2*/] = 0.701f;
	uParam0->f_199.f_316[43 /*2*/].f_1 = 0.28f;
	if (!bLocal_541)
	{
		GlobalFunc_4656(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187));
	}
	func_553(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187), "HUD_MULTSMAL", 200, 0);
	uParam0->f_199.f_316[44 /*2*/] = 0.76f;
	uParam0->f_199.f_316[44 /*2*/].f_1 = 0.28f;
	if (!bLocal_541)
	{
		GlobalFunc_4656(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187));
	}
	func_553(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187), "HUD_MULTSMAL", 300, 0);
	if (*uParam0 == 2)
	{
		GlobalFunc_3458(&(uParam0->f_199.f_741.f_165), 1);
		uParam0->f_199.f_316[46 /*2*/] = 0.642f;
		uParam0->f_199.f_316[46 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_165), "NUMBER", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_10, 0);
		uParam0->f_199.f_316[47 /*2*/] = 0.701f;
		uParam0->f_199.f_316[47 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_165), "NUMBER", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_9, 0);
		uParam0->f_199.f_316[48 /*2*/] = 0.76f;
		uParam0->f_199.f_316[48 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_165), "NUMBER", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_8, 0);
	}
	else
	{
		GlobalFunc_3458(&(uParam0->f_199.f_741.f_165), 1);
		uParam0->f_199.f_316[46 /*2*/] = 0.642f;
		uParam0->f_199.f_316[46 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_165), "NUMBER", 0, 0);
		uParam0->f_199.f_316[47 /*2*/] = 0.701f;
		uParam0->f_199.f_316[47 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_165), "NUMBER", 0, 0);
		uParam0->f_199.f_316[48 /*2*/] = 0.76f;
		uParam0->f_199.f_316[48 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_165), "NUMBER", 0, 0);
	}
}

void func_578(var uParam0, float fParam1)//Position - 0x6265E
{
	uParam0->f_8 = fParam1;
}

void func_579(var uParam0, int iParam1)//Position - 0x6266C
{
	struct<4> Var0;
	
	func_578(&(uParam0->f_199[23 /*9*/]), 0f);
	func_578(&(uParam0->f_199[24 /*9*/]), 0f);
	func_578(&(uParam0->f_199[25 /*9*/]), 0f);
	func_578(&(uParam0->f_199[26 /*9*/]), 0f);
	uParam0->f_199[23 /*9*/].f_2 = 0.025f;
	uParam0->f_199[23 /*9*/].f_3 = 0.044f;
	uParam0->f_199[23 /*9*/] = 0.6158f;
	uParam0->f_199[23 /*9*/].f_1 = 0.2477f;
	func_584(&(uParam0->f_199[23 /*9*/]), 1);
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[23 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[23 /*9*/]), 1, 0, 4, 0);
	func_584(&(uParam0->f_199[24 /*9*/]), 1);
	uParam0->f_199[24 /*9*/].f_2 = 0.025f;
	uParam0->f_199[24 /*9*/].f_3 = 0.044f;
	uParam0->f_199[24 /*9*/] = 0.6158f;
	uParam0->f_199[24 /*9*/].f_1 = 0.2905f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[24 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[24 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[24 /*9*/].f_2 = 0.025f;
	uParam0->f_199[24 /*9*/].f_3 = 0.044f;
	uParam0->f_199[24 /*9*/] = 0.6228f;
	uParam0->f_199[24 /*9*/].f_1 = 0.2905f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[24 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[24 /*9*/]), 1, 0, 4, 0);
	func_584(&(uParam0->f_199[25 /*9*/]), 1);
	uParam0->f_199[25 /*9*/].f_2 = 0.025f;
	uParam0->f_199[25 /*9*/].f_3 = 0.044f;
	uParam0->f_199[25 /*9*/] = 0.6158f;
	uParam0->f_199[25 /*9*/].f_1 = 0.3323f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[25 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[25 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[25 /*9*/].f_2 = 0.025f;
	uParam0->f_199[25 /*9*/].f_3 = 0.044f;
	uParam0->f_199[25 /*9*/] = 0.6228f;
	uParam0->f_199[25 /*9*/].f_1 = 0.3323f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[25 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[25 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[25 /*9*/].f_2 = 0.025f;
	uParam0->f_199[25 /*9*/].f_3 = 0.044f;
	uParam0->f_199[25 /*9*/] = 0.6298f;
	uParam0->f_199[25 /*9*/].f_1 = 0.3323f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[25 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[25 /*9*/]), 1, 0, 4, 0);
	func_584(&(uParam0->f_199[26 /*9*/]), 1);
	uParam0->f_199[26 /*9*/].f_2 = 0.025f;
	uParam0->f_199[26 /*9*/].f_3 = 0.044f;
	uParam0->f_199[26 /*9*/] = 0.6158f;
	uParam0->f_199[26 /*9*/].f_1 = 0.3764f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[26 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[26 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[26 /*9*/].f_2 = 0.025f;
	uParam0->f_199[26 /*9*/].f_3 = 0.044f;
	uParam0->f_199[26 /*9*/] = 0.6228f;
	uParam0->f_199[26 /*9*/].f_1 = 0.3764f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[26 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[26 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[26 /*9*/].f_2 = 0.025f;
	uParam0->f_199[26 /*9*/].f_3 = 0.044f;
	uParam0->f_199[26 /*9*/] = 0.6298f;
	uParam0->f_199[26 /*9*/].f_1 = 0.3764f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[26 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[26 /*9*/]), 1, 0, 4, 0);
	uParam0->f_199[26 /*9*/].f_2 = 0.025f;
	uParam0->f_199[26 /*9*/].f_3 = 0.044f;
	uParam0->f_199[26 /*9*/] = 0.6368f;
	uParam0->f_199[26 /*9*/].f_1 = 0.3764f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&(uParam0->f_199[26 /*9*/]), 0);
	}
	func_595("SRange_Chal", "Chal_Mini_Target_64", &(uParam0->f_199[26 /*9*/]), 1, 0, 4, 0);
	GlobalFunc_3458(&(uParam0->f_199.f_741.f_187), 1);
	uParam0->f_199.f_316[42 /*2*/] = 0.627f;
	uParam0->f_199.f_316[42 /*2*/].f_1 = 0.2367f;
	if (!bLocal_541)
	{
		GlobalFunc_4656(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187));
	}
	func_593(&(uParam0->f_199.f_316[42 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_1PT", 0);
	uParam0->f_199.f_316[43 /*2*/] = 0.634f;
	uParam0->f_199.f_316[43 /*2*/].f_1 = 0.2795f;
	if (!bLocal_541)
	{
		GlobalFunc_4656(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187));
	}
	func_593(&(uParam0->f_199.f_316[43 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_3PT", 0);
	uParam0->f_199.f_316[44 /*2*/] = 0.641f;
	uParam0->f_199.f_316[44 /*2*/].f_1 = 0.3213f;
	if (!bLocal_541)
	{
		GlobalFunc_4656(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187));
	}
	func_593(&(uParam0->f_199.f_316[44 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_5PT", 0);
	uParam0->f_199.f_316[45 /*2*/] = 0.648f;
	uParam0->f_199.f_316[45 /*2*/].f_1 = 0.3654f;
	if (!bLocal_541)
	{
		GlobalFunc_4656(&(uParam0->f_199.f_316[45 /*2*/]), &(uParam0->f_199.f_741.f_187));
	}
	func_593(&(uParam0->f_199.f_316[45 /*2*/]), &(uParam0->f_199.f_741.f_187), "SHR_7PT", 0);
	Var0 = 0.649f;
	Var0.f_1 = 0.366f;
	Var0.f_2 = 0.025f;
	Var0.f_3 = 0.044f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&Var0, 0);
	}
	GlobalFunc_4655(&Var0);
	func_595("Shared", "MenuPlus_32", &Var0, 1, 0, 4, 0);
	Var0 = 0.648f;
	Var0.f_1 = 0.3645f;
	Var0.f_2 = 0.025f;
	Var0.f_3 = 0.044f;
	if (!bLocal_541)
	{
		GlobalFunc_4657(&Var0, 0);
	}
	func_584(&Var0, 1);
	func_595("Shared", "MenuPlus_32", &Var0, 1, 0, 4, 0);
	GlobalFunc_4659(&(uParam0->f_199.f_741.f_165), &(uParam0->f_199.f_420[8 /*8*/]), 0.0047f, 0.0055f);
	if (*uParam0 == 2)
	{
		GlobalFunc_3458(&(uParam0->f_199.f_741.f_165), 1);
		uParam0->f_199.f_316[46 /*2*/] = 0.8f;
		uParam0->f_199.f_316[46 /*2*/].f_1 = 0.227f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_11, 2);
		uParam0->f_199.f_316[47 /*2*/] = 0.8f;
		uParam0->f_199.f_316[47 /*2*/].f_1 = 0.2698f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_10, 2);
		uParam0->f_199.f_316[48 /*2*/] = 0.8f;
		uParam0->f_199.f_316[48 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_9, 2);
		uParam0->f_199.f_316[49 /*2*/] = 0.8f;
		uParam0->f_199.f_316[49 /*2*/].f_1 = 0.3557f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[49 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[49 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[iParam1 /*12*/].f_8, 2);
	}
	else
	{
		GlobalFunc_3458(&(uParam0->f_199.f_741.f_165), 1);
		uParam0->f_199.f_316[46 /*2*/] = 0.8f;
		uParam0->f_199.f_316[46 /*2*/].f_1 = 0.227f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[46 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", 0, 2);
		uParam0->f_199.f_316[47 /*2*/] = 0.8f;
		uParam0->f_199.f_316[47 /*2*/].f_1 = 0.2698f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[47 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", 0, 2);
		uParam0->f_199.f_316[48 /*2*/] = 0.8f;
		uParam0->f_199.f_316[48 /*2*/].f_1 = 0.3116f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[48 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", 0, 2);
		uParam0->f_199.f_316[49 /*2*/] = 0.8f;
		uParam0->f_199.f_316[49 /*2*/].f_1 = 0.3557f;
		if (!bLocal_541)
		{
			GlobalFunc_4656(&(uParam0->f_199.f_316[49 /*2*/]), &(uParam0->f_199.f_741.f_187));
		}
		func_553(&(uParam0->f_199.f_316[49 /*2*/]), &(uParam0->f_199.f_741.f_165), "RNG_XSCORE", 0, 2);
	}
}

int func_580(bool bParam0, var uParam1, int iParam2)//Position - 0x6309F
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

struct<4> func_581(int iParam0, int iParam1, char* sParam2)//Position - 0x630B6
{
	struct<4> Var0;
	
	StringCopy(&Var0, "Chal_Blank", 16);
	if (iParam1 != -1)
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(sParam2, "SRange_Chal", 16);
				StringCopy(&Var0, "Chal_HG", 16);
				break;
			
			case 1:
				StringCopy(sParam2, "SRange_Chal2", 16);
				StringCopy(&Var0, "Chal_SMG", 16);
				break;
			
			case 3:
				StringCopy(sParam2, "SRange_Chal2", 16);
				StringCopy(&Var0, "Chal_SG", 16);
				break;
			
			case 2:
				StringCopy(sParam2, "SRange_Chal", 16);
				StringCopy(&Var0, "Chal_AR", 16);
				break;
			
			case 4:
				StringCopy(sParam2, "SRange_Chal2", 16);
				StringCopy(&Var0, "Chal_LMG", 16);
				break;
			
			case 5:
				StringCopy(sParam2, "SRange_Chal", 16);
				StringCopy(&Var0, "Chal_HVY", 16);
				break;
			
			case 6:
				StringCopy(sParam2, "SRange_Chal2", 16);
				StringCopy(&Var0, "Chal_RG", 16);
				break;
		}
		StringIntConCat(&Var0, iParam1 + 1, 16);
	}
	return Var0;
}

struct<4> func_582(int iParam0, int iParam1, char* sParam2)//Position - 0x6319D
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam2, "SRange_Weap", 16);
			StringCopy(&Var0, "Weap_HG_", 16);
			break;
		
		case 1:
			StringCopy(sParam2, "SRange_Weap2", 16);
			StringCopy(&Var0, "Weap_SMG_", 16);
			break;
		
		case 2:
			StringCopy(sParam2, "SRange_Weap", 16);
			StringCopy(&Var0, "Weap_AR_", 16);
			break;
		
		case 3:
			StringCopy(sParam2, "SRange_Weap2", 16);
			StringCopy(&Var0, "Weap_SG_", 16);
			break;
		
		case 4:
			StringCopy(sParam2, "SRange_Weap2", 16);
			StringCopy(&Var0, "Weap_LMG_", 16);
			break;
		
		case 5:
			StringCopy(sParam2, "SRange_Weap", 16);
			StringCopy(&Var0, "Weap_HVY_1", 16);
			return Var0;
			break;
		
		case 6:
			StringCopy(sParam2, "SRange_Weap", 16);
			StringCopy(&Var0, "Weap_RG_1", 16);
			return Var0;
			break;
	}
	StringIntConCat(&Var0, iParam1 + 1, 16);
	return Var0;
}


void func_584(float fParam0, int iParam1)//Position - 0x632B7
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_585(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x632DD
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!GlobalFunc_1561(sVar0))
	{
		if (GlobalFunc_5263())
		{
			GlobalFunc_981(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			GlobalFunc_2008(func_548(*uParam0), func_547(uParam0->f_1), sVar0, 0);
		}
	}
}


void func_587(struct<8> Param0, int iParam8, int iParam9)//Position - 0x6333B
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			GlobalFunc_2693(&Var0);
			break;
		
		case 1:
			GlobalFunc_1450(&Var0);
			break;
		
		case 3:
			GlobalFunc_2692(&Var0);
			break;
		
		case 4:
			GlobalFunc_2691(&Var0);
			break;
	}
	if (GlobalFunc_5263())
	{
		if (iParam9 == 1)
		{
			GRAPHICS::DRAW_RECT(func_548(Var0), func_547(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_548(Var0), func_547(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}






void func_593(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x6349A
{
	if (bParam3)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	func_585(fParam0, uParam1, sParam2, 0, 0);
}


void func_595(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x634C7
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			GlobalFunc_1451(&Var0);
			break;
		
		case 1:
			GlobalFunc_1450(&Var0);
			break;
		
		case 5:
			GlobalFunc_1449(&Var0);
			break;
		
		case 6:
			GlobalFunc_1448(&Var0);
			break;
		
		case 7:
			GlobalFunc_1447(&Var0);
			break;
		
		case 8:
			GlobalFunc_1446(&Var0);
			break;
		
		case 9:
			GlobalFunc_1445(&Var0);
			break;
	}
	if (GlobalFunc_5263())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_548(Var0), func_547(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_548(Var0), func_547(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}






























void func_625(var uParam0)//Position - 0x641A4
{
	struct<8> Var0[1];
	struct<6> Var9[1];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	StringCopy(&(Var0[0 /*8*/]), "Type", 32);
	StringCopy(&(Var9[0 /*6*/]), "RoundType", 24);
	StringIntConCat(&(Var9[0 /*6*/]), *uParam0, 24);
	if (GlobalFunc_5284(203, &Var9, &Var0, 1, -1, 1, 0))
	{
		if (*uParam0 > 17)
		{
			iVar16 = 600;
		}
		else if (*uParam0 > 14)
		{
			iVar16 = 500;
		}
		else if (*uParam0 > 11)
		{
			iVar16 = 400;
		}
		else if (*uParam0 > 8)
		{
			iVar16 = 300;
		}
		else if (*uParam0 > 5)
		{
			iVar16 = 200;
		}
		else if (*uParam0 > 2)
		{
			iVar16 = 100;
		}
		iVar17 = (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iLocal_95 /*271*/].f_3[*uParam0 /*12*/].f_4 + iVar16);
		iVar18 = func_357(iLocal_95, *uParam0);
		iVar19 = func_627(*uParam0, 3);
		if (iVar18 > iVar19 * 10)
		{
		}
		GlobalFunc_5768(203, 131, iVar18, 0f, 0);
		GlobalFunc_5768(203, 152, uParam0->f_1, 0f, 0);
		GlobalFunc_5768(203, 153, uParam0->f_2, 0f, 0);
		GlobalFunc_5768(203, 154, uParam0->f_1, 0f, 0);
		GlobalFunc_5768(203, 155, uParam0->f_2, 0f, 0);
		GlobalFunc_5768(203, 150, iVar17, 0f, 0);
		GlobalFunc_5768(203, 96, uParam0->f_3, 0f, 0);
		Global_1835013.f_2 = 1;
	}
}


int func_627(int iParam0, int iParam1)//Position - 0x643F3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1400;
				
				case 2:
					return 2000;
				
				case 3:
					return 2800;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					return 2000;
				
				case 2:
					return 10000;
				
				case 3:
					return 20000;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					return 650;
				
				case 2:
					return 3000;
				
				case 3:
					return 15000;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return 4000;
				
				case 2:
					return 6000;
				
				case 3:
					return 12000;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 1250;
				
				case 2:
					return 2500;
				
				case 3:
					return 7500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 1:
					return 3000;
				
				case 2:
					return 5000;
				
				case 3:
					return 10000;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
					return 22;
				
				case 2:
					return 32;
				
				case 3:
					return 46;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 1:
					return 290;
				
				case 2:
					return 590;
				
				case 3:
					return 700;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 14;
				
				case 2:
					return 18;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 1:
					return 2500;
				
				case 2:
					return 3550;
				
				case 3:
					return 7550;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 4750;
				
				case 2:
					return 7500;
				
				case 3:
					return 17500;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return 1000;
				
				case 2:
					return 3000;
				
				case 3:
					return 5000;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 1:
					return 4500;
				
				case 2:
					return 5500;
				
				case 3:
					return 7500;
				
				default:
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 1:
					return 5500;
				
				case 2:
					return 12000;
				
				case 3:
					return 40000;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 1:
					return 7500;
				
				case 2:
					return 19000;
				
				case 3:
					return 32000;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 1:
					return 10000;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 1:
					return 15000;
				
				case 2:
					return 30000;
				
				case 3:
					return 45000;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 1:
					return 20000;
				
				case 2:
					return 40000;
				
				case 3:
					return 70000;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 1:
					return 20;
				
				case 2:
					return 22;
				
				case 3:
					return 24;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
					return 16;
				
				case 2:
					return 20;
				
				case 3:
					return 24;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					return 20;
				
				case 2:
					return 26;
				
				case 3:
					return 32;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					return 26;
				
				case 2:
					return 31;
				
				case 3:
					return 35;
				
				default:
			}
			break;
	}
	return -1;
}


bool func_629()//Position - 0x649A2
{
	return GlobalFunc_2385(&uLocal_102);
}


void func_631(var uParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x649E7
{
	if (iParam1 != *uParam2 || *uParam2 == -1)
	{
		func_458();
		func_338(iParam1);
		*uParam2 = iParam1;
		return;
	}
	Global_1835388 = bParam3;
	func_632(uParam0, &uLocal_102);
}

void func_632(var uParam0, var uParam1)//Position - 0x64A23
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	struct<3> Var51;
	struct<3> Var57;
	bool bVar63;
	
	GlobalFunc_481(&(Global_1840922.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	GlobalFunc_1394();
	GlobalFunc_7629();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	GlobalFunc_5473();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	GlobalFunc_732(1);
	GlobalFunc_1100(1);
	if (!GlobalFunc_6971())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = GlobalFunc_2407();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var32 = { GlobalFunc_318(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_1835390.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1835390.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
			{
				if (Global_1835390.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_1835390.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!MISC::IS_BIT_SET(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_684(*uParam0, Global_1835390.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
				{
					if (!GlobalFunc_2405(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					GlobalFunc_2403(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 4);
				GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 5);
				GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 6);
				GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				GlobalFunc_2402(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(1);
			}
			else
			{
				GlobalFunc_2402(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!GlobalFunc_10149(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!MISC::IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_684(*uParam0, Global_1835390.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
					{
						if (!GlobalFunc_2405(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						GlobalFunc_2403(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 4);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 5);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 6);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 7);
						GlobalFunc_2394(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					GlobalFunc_434(&(Global_1835390.f_2823));
				}
				else if (GlobalFunc_5071(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 4);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 5);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 6);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 7);
						GlobalFunc_2394(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					GlobalFunc_434(&(Global_1835390.f_2823));
				}
				GlobalFunc_2402(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!MISC::IS_BIT_SET(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_684(*uParam0, Global_1835390.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
					{
						if (!GlobalFunc_2405(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2404(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						GlobalFunc_2403(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_42, 6))
					{
						GlobalFunc_5387(&Global_1839721);
						GlobalFunc_7973(uParam1, &Global_1839721);
						GlobalFunc_2392(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && GlobalFunc_2405(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 4);
									GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && GlobalFunc_2405(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar63 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && GlobalFunc_2405(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (GlobalFunc_319(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (GlobalFunc_2405(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (GlobalFunc_5753(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											MISC::SET_BIT(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar31, 3);
											}
										}
									}
									if (GlobalFunc_2405(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1839721[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										GlobalFunc_2391(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										GlobalFunc_2391(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (MISC::IS_BIT_SET(Global_1835390.f_2770, iVar1))
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												GlobalFunc_7114(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												GlobalFunc_7114(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												GlobalFunc_5752(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												GlobalFunc_5752(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									GlobalFunc_2387();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar31, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											GlobalFunc_2386(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 4);
						GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 5);
						GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 6);
						GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					GlobalFunc_2402(*uParam0);
					HUD::CLEAR_HELP(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							GlobalFunc_2386(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					GlobalFunc_2402(*uParam0);
					GlobalFunc_7972(uParam0, uParam1);
				}
			}
		}
	}
}




















































void func_684(var uParam0, int iParam1)//Position - 0x6AB94
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}





















void func_705(var uParam0, var uParam1, var uParam2)//Position - 0x6B419
{
	int iVar0;
	
	iVar0 = *uParam1;
	func_291(&(uParam1->f_199));
	func_334(uParam0, 0, 1, uParam1, 0);
	func_334(uParam0, 0, 1, uParam1, "SHR_GEN_REQ");
	func_334(uParam0, 0, 1, uParam1, "SHR_GEN_REQ");
	func_334(uParam0, 0, 1, uParam1, "SHR_GEN_REQ");
	func_334(uParam0, 0, 1, uParam1, "SHR_GEN_REQ");
	func_334(uParam0, 0, 1, uParam1, "SHR_HVYMG_REQ");
	if (uParam0->f_17)
	{
		func_334(uParam0, 0, 1, uParam1, "SHR_HVYMG_REQ");
	}
	uParam1->f_1.f_9 = 0;
	func_330(uParam2, uParam0, uParam1->f_1.f_9, uParam1);
	uParam1->f_18.f_36 = -1;
	func_335(uParam0, uParam1);
	func_496(&(uParam1->f_56), iVar0 == 0, 1, 1);
}

int func_706(var uParam0)//Position - 0x6B4CE
{
	uParam0->f_18 = uParam0->f_18;
	return 0;
}

int func_707(int iParam0, bool bParam1)//Position - 0x6B4DF
{
	if (iParam0 == -1 && !bParam1)
	{
		return 1;
	}
	else if (func_277(iParam0))
	{
		return 1;
	}
	return 0;
}



void func_710(var uParam0, bool bParam1)//Position - 0x6B52A
{
	int iVar0;
	char cVar1[32];
	char cVar9[32];
	
	if (bParam1 && uParam0->f_1197)
	{
		return;
	}
	else if (!bParam1 && !uParam0->f_1197)
	{
		return;
	}
	iVar0 = GlobalFunc_8315();
	StringCopy(&cVar1, "MenuMG", 32);
	if (iVar0 == 2)
	{
		StringConCat(&cVar1, "Trevor", 32);
	}
	else if (iVar0 == 0)
	{
		StringConCat(&cVar1, "Michael", 32);
	}
	else if (iVar0 == 1)
	{
		StringConCat(&cVar1, "Franklin", 32);
	}
	if (bParam1)
	{
		StringConCat(&cVar1, "In", 32);
		GRAPHICS::ANIMPOSTFX_PLAY(&cVar1, 0, 1);
	}
	else
	{
		cVar9 = { cVar1 };
		StringConCat(&cVar9, "In", 32);
		StringConCat(&cVar1, "Out", 32);
		GRAPHICS::ANIMPOSTFX_STOP(&cVar9);
		GRAPHICS::ANIMPOSTFX_PLAY(&cVar1, 0, 1);
	}
	uParam0->f_1197 = bParam1;
}











int func_721(var uParam0, var uParam1)//Position - 0x6BC90
{
	if ((((((((!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_arm")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_target_arm_b"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_target_arm_long"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_target_arm_sm"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_target_backboard"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_target_backboard_b"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_target_comp_wood"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_target_comp_metal"))) || !STREAMING::HAS_MODEL_LOADED(MISC::GET_HASH_KEY("PROP_TARGET_FRAG_BOARD")))
	{
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_181))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_180))
	{
		return 0;
	}
	if (!GlobalFunc_1088(&(uParam1->f_194)))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SRange_Gen"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SRange_Chal"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SRange_Chal2"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SRange_Weap"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SRange_Weap2"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TARGET_PRACTICE", 0) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", 0))
	{
		*uParam0++;
		if (*uParam0 > 150)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}


int func_723(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x6BE37
{
	char cVar0[64];
	
	StringCopy(&cVar0, "nonTutState = ", 64);
	StringIntConCat(&cVar0, uParam0->f_1, 64);
	GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar0, 0.9f, 0.3f, 0f, 0, 0, 255, 255);
	switch (uParam0->f_1)
	{
		case 0:
			func_488(uParam2);
			func_489(uParam3->f_113, uParam3->f_116);
			uParam0->f_5 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::SET_CAM_COORD(uParam0->f_5, uParam0->f_25);
			CAM::SET_CAM_ROT(uParam0->f_5, uParam0->f_28, 2);
			CAM::SET_CAM_FOV(uParam0->f_5, 50f);
			CAM::SET_CAM_ACTIVE(uParam0->f_5, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_PARAMS(uParam0->f_5, uParam0->f_31, uParam0->f_34, 50f, 4000, 1, 1, 2);
			uParam0->f_4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_16, uParam0->f_19, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_4, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_94, uParam0->f_4, "mini@shoot_range", "shoot_range_tutorial_plyr", 1000f, -1.5f, 0, 0, 1148846080, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_94, 1);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_4, 0.92f);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_6, 1, 1);
				PED::CLEAR_PED_PROP(uParam0->f_6, 0);
				PED::DELETE_PED(&(uParam0->f_6));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_7, 1, 1);
				PED::CLEAR_PED_PROP(uParam0->f_7, 0);
				PED::DELETE_PED(&(uParam0->f_7));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, 1, 1);
				PED::CLEAR_PED_PROP(uParam0->f_8, 0);
				PED::DELETE_PED(&(uParam0->f_8));
			}
			MISC::CLEAR_AREA(uParam3->f_113, 10f, 1, 0, 0, 0);
			GlobalFunc_4963(&(uParam1->f_27), 0f);
			uParam0->f_1++;
			break;
		
		case 1:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_4) > 0.99f)
			{
				uParam0->f_1++;
			}
			break;
		
		case 2:
			if (GlobalFunc_1720())
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
				*uParam0 = MISC::GET_GAME_TIMER() + 3000;
				uParam0->f_1++;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() > *uParam0)
			{
				return 1;
			}
			break;
	}
	return 0;
}


void func_725(int iParam0, var uParam1)//Position - 0x6C0A0
{
	if (iParam0 != joaat("weapon_unarmed") && iParam0 != 0)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_94, iParam0, 0))
		{
			func_492(uParam1, 4096);
			WEAPON::GET_AMMO_IN_CLIP(iLocal_94, iParam0, &(uParam1->f_7));
			uParam1->f_7 = (uParam1->f_7 + WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_94, iParam0));
		}
		else
		{
			func_470(uParam1, 4096);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_94, iParam0, 0, 0, 1);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iLocal_94, iParam0, joaat("component_at_pi_flsh")))
		{
			func_492(uParam1, 262144);
			WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iLocal_94, iParam0, joaat("component_at_pi_flsh"));
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iLocal_94, iParam0, joaat("component_at_ar_flsh")))
		{
			func_492(uParam1, 524288);
			WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iLocal_94, iParam0, joaat("component_at_ar_flsh"));
		}
		if (iParam0 == joaat("weapon_minigun"))
		{
			WEAPON::SET_PED_AMMO(iLocal_94, iParam0, 15000);
			WEAPON::SET_AMMO_IN_CLIP(iLocal_94, iParam0, 15000);
		}
		else
		{
			WEAPON::SET_PED_AMMO(iLocal_94, iParam0, 600);
			WEAPON::SET_AMMO_IN_CLIP(iLocal_94, iParam0, WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_94, iParam0, 1));
		}
		WEAPON::REFILL_AMMO_INSTANTLY(PLAYER::PLAYER_PED_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_94, iParam0, 0);
	}
}


void func_727(var uParam0, var uParam1)//Position - 0x6C1E9
{
	STREAMING::REQUEST_MODEL(joaat("prop_target_arm_b"));
	STREAMING::REQUEST_MODEL(joaat("prop_target_arm_long"));
	STREAMING::REQUEST_MODEL(joaat("prop_target_arm_sm"));
	STREAMING::REQUEST_MODEL(joaat("prop_target_backboard_b"));
	STREAMING::REQUEST_MODEL(joaat("prop_target_comp_metal"));
	STREAMING::REQUEST_MODEL(MISC::GET_HASH_KEY("PROP_TARGET_FRAG_BOARD"));
	STREAMING::REQUEST_ANIM_DICT("mini@ears_defenders");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TARGET_PRACTICE", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", 0);
	uParam1->f_180 = GlobalFunc_2407();
	GlobalFunc_1092(&(uParam1->f_194));
	uParam1->f_181 = GlobalFunc_816();
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SRange_Gen", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SRange_Chal", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SRange_Chal2", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SRange_Weap", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SRange_Weap2", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	*uParam0 = 0;
}




void func_731(var uParam0, var uParam1)//Position - 0x6C312
{
	INTERIOR::_0xAF348AFCB575A441("V_7_ShootRm");
	MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_113, 20f, 0, 0, 0, 0, 0);
	func_732(&(uParam0->f_39));
	PED::SET_PED_STEALTH_MOVEMENT(iLocal_94, 0, 0);
	if (uParam0->f_20 == 0)
	{
		uParam0->f_20 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam1->f_113);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_20);
	}
}

void func_732(var uParam0)//Position - 0x6C363
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94))
	{
		GlobalFunc_6796(iLocal_94, uParam0);
	}
}


int func_734()//Position - 0x6C5E1
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@shoot_range"))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_ear_defenders_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_safety_glasses")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_backboard")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_arm")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_target_comp_wood")))
	{
		return 0;
	}
	return 1;
}

void func_735()//Position - 0x6C650
{
	STREAMING::REQUEST_ANIM_DICT("mini@shoot_range");
	STREAMING::REQUEST_MODEL(joaat("prop_ear_defenders_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_safety_glasses"));
	STREAMING::REQUEST_MODEL(joaat("prop_target_backboard"));
	STREAMING::REQUEST_MODEL(joaat("prop_target_arm"));
	STREAMING::REQUEST_MODEL(joaat("prop_target_comp_wood"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", 0);
}























void func_758(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x6D4E9
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	}
	GlobalFunc_7632(1);
	HUD::DISPLAY_RADAR(0);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0f);
	func_760(uParam2);
	func_476(uParam2);
	func_759(&(uParam3->f_1));
	uParam0->f_112 = *uParam4;
	if (uParam0->f_112 == 0)
	{
		uParam0->f_109 = { 6.8179f, -1098.209f, 29.9469f };
		uParam0->f_87[0 /*3*/] = { 12.617f, -1092.35f, 31.58f };
		uParam0->f_87[1 /*3*/] = { 16.475f, -1081.513f, 31.58f };
		uParam0->f_87[3 /*3*/] = { 20.1332f, -1081.788f, 31.58f };
		uParam0->f_87[2 /*3*/] = { 17.325f, -1094.09f, 31.58f };
		uParam0->f_87[4 /*3*/] = { 16.995f, -1080.04f, 31.58f };
		uParam0->f_87[5 /*3*/] = { 19.475f, -1073.203f, 31.58f };
		uParam0->f_87[6 /*3*/] = { 21.945f, -1081.93f, 31.58f };
		uParam0->f_113 = { 13.4784f, -1097.475f, 28.8347f };
		uParam0->f_116 = 345.171f;
		uParam0->f_117 = { 11.1371f, -1097.824f, 23.8347f };
		uParam0->f_120 = { 14.8423f, -1099.452f, 33.8348f };
		uParam0->f_126 = { 7.6658f, -1097.226f, 28.797f };
		uParam0->f_129 = 166.8465f;
		uParam0->f_130 = { 7.445f, -1100.097f, 28.797f };
		uParam0->f_136 = { 8.7466f, -1103.685f, 30.1295f };
		uParam0->f_139 = { -0.8304f, 0f, 19.3158f };
		uParam0->f_142 = { 8.6633f, -1103.447f, 30.1259f };
		uParam0->f_145 = { -0.8304f, 0f, 19.3158f };
		uParam0->f_148 = { 6.4526f, -1098.576f, 30.4486f };
		uParam0->f_151 = { -7.9441f, 0f, -150.3985f };
		uParam0->f_154 = { 14.6062f, -1096.601f, 30.3995f };
		uParam0->f_157 = { -6.4007f, 0f, 128.1684f };
		uParam0->f_123 = { 12.65248f, -1100.083f, 29.74706f };
		uParam0->f_133 = { 7.7033f, -1097.86f, 28.797f };
		uParam5->f_16 = { 6.818f, -1098.21f, 29.946f };
		uParam5->f_19 = { 0f, 0f, 160f };
		uParam5->f_22 = { 14.499f, -1093.435f, 31.32f };
		uParam5->f_25 = { 13.9958f, -1097.882f, 30.3701f };
		uParam5->f_28 = { -6.0067f, 0f, -19.5923f };
		uParam5->f_31 = { 13.4248f, -1099.619f, 30.4893f };
		uParam5->f_34 = { -6.1681f, 0f, -12.1775f };
		uParam0->f_160 = 160f;
	}
	else
	{
		uParam0->f_109 = { 827.5342f, -2160.493f, 29.7688f };
		uParam0->f_87[0 /*3*/] = { 824.1354f, -2167.815f, 31.4334f };
		uParam0->f_87[1 /*3*/] = { 824.0692f, -2179.004f, 31.3222f };
		uParam0->f_87[3 /*3*/] = { 820.6007f, -2180.356f, 31.3625f };
		uParam0->f_87[2 /*3*/] = { 819.0558f, -2167.521f, 31.4334f };
		uParam0->f_87[4 /*3*/] = { 823.9216f, -2180.932f, 31.2504f };
		uParam0->f_87[5 /*3*/] = { 823.936f, -2188.249f, 31.1813f };
		uParam0->f_87[6 /*3*/] = { 818.8218f, -2180.862f, 31.3736f };
		uParam0->f_113 = { 821.5508f, -2163.707f, 28.6567f };
		uParam0->f_116 = 184.3922f;
		uParam0->f_117 = { 823.5616f, -2162.239f, 24.4409f };
		uParam0->f_120 = { 819.3583f, -2163.497f, 34.5824f };
		uParam0->f_126 = { 826.8076f, -2162.185f, 28.619f };
		uParam0->f_129 = 346.2118f;
		uParam0->f_130 = { 824.832f, -2158.36f, 28.619f };
		uParam0->f_136 = { 823.9988f, -2156.333f, 29.8591f };
		uParam0->f_139 = { -1.9082f, 0f, -142.342f };
		uParam0->f_142 = { 824.2747f, -2156.69f, 29.8441f };
		uParam0->f_145 = { -1.9082f, 0f, -142.342f };
		uParam0->f_148 = { 827.7817f, -2160.126f, 30.2877f };
		uParam0->f_151 = { -8.0026f, 0f, 55.1241f };
		uParam0->f_154 = { 820.79f, -2164.832f, 30.1899f };
		uParam0->f_157 = { -2.2613f, 0f, -30.6783f };
		uParam0->f_123 = { 821.557f, -2160.855f, 30.3338f };
		uParam0->f_133 = { 826.6258f, -2161.705f, 28.619f };
		uParam5->f_16 = { 827.5342f, -2160.493f, 29.7688f };
		uParam5->f_19 = { 0f, 0f, 0f };
		uParam5->f_22 = { 821.9563f, -2167.086f, 31f };
		uParam5->f_25 = { 820.9255f, -2163.025f, 30.1917f };
		uParam5->f_28 = { -4.2298f, 0f, -179.571f };
		uParam5->f_31 = { 820.8491f, -2161.166f, 30.3292f };
		uParam5->f_34 = { -4.2298f, 0f, -173.1768f };
		uParam0->f_160 = 359f;
	}
	func_505(uParam0, uParam1);
	uParam1->f_8 = 0;
	uParam1->f_18 = 45f;
	uParam5->f_3 = 0;
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), 1);
	GlobalFunc_5770();
	func_458();
}

void func_759(var uParam0)//Position - 0x6DA89
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0)[iVar0 /*7*/] = (0.5f + 0.00234f);
		(uParam0[iVar0 /*7*/])->f_1 = GlobalFunc_4631(300f, 0);
		(uParam0[iVar0 /*7*/])->f_4 = 255;
		(uParam0[iVar0 /*7*/])->f_5 = 50;
		(uParam0[iVar0 /*7*/])->f_2 = -1f;
		iVar0++;
	}
}

void func_760(var uParam0)//Position - 0x6DAE3
{
	(*uParam0[0 /*41*/])[0 /*10*/] = 0;
	(uParam0[0 /*41*/][0 /*10*/])->f_1 = -1;
	(uParam0[0 /*41*/][0 /*10*/])->f_7 = func_627(0, 1);
	(uParam0[0 /*41*/][0 /*10*/])->f_8 = func_627(0, 2);
	(uParam0[0 /*41*/][0 /*10*/])->f_9 = func_627(0, 3);
	(uParam0[0 /*41*/][0 /*10*/])->f_2 = 0;
	(*uParam0[0 /*41*/])[1 /*10*/] = 1;
	(uParam0[0 /*41*/][1 /*10*/])->f_1 = 0;
	(uParam0[0 /*41*/][1 /*10*/])->f_7 = func_627(1, 1);
	(uParam0[0 /*41*/][1 /*10*/])->f_8 = func_627(1, 2);
	(uParam0[0 /*41*/][1 /*10*/])->f_9 = func_627(1, 3);
	(uParam0[0 /*41*/][1 /*10*/])->f_2 = 0;
	(*uParam0[0 /*41*/])[2 /*10*/] = 2;
	(uParam0[0 /*41*/][2 /*10*/])->f_1 = 1;
	(uParam0[0 /*41*/][2 /*10*/])->f_7 = func_627(2, 1);
	(uParam0[0 /*41*/][2 /*10*/])->f_8 = func_627(2, 2);
	(uParam0[0 /*41*/][2 /*10*/])->f_9 = func_627(2, 3);
	(uParam0[0 /*41*/][2 /*10*/])->f_2 = 0;
	(*uParam0[1 /*41*/])[0 /*10*/] = 3;
	(uParam0[1 /*41*/][0 /*10*/])->f_1 = 0;
	(uParam0[1 /*41*/][0 /*10*/])->f_7 = func_627(3, 1);
	(uParam0[1 /*41*/][0 /*10*/])->f_8 = func_627(3, 2);
	(uParam0[1 /*41*/][0 /*10*/])->f_9 = func_627(3, 3);
	(uParam0[1 /*41*/][0 /*10*/])->f_2 = 0;
	(*uParam0[1 /*41*/])[1 /*10*/] = 4;
	(uParam0[1 /*41*/][1 /*10*/])->f_1 = 3;
	(uParam0[1 /*41*/][1 /*10*/])->f_7 = func_627(4, 1);
	(uParam0[1 /*41*/][1 /*10*/])->f_8 = func_627(4, 2);
	(uParam0[1 /*41*/][1 /*10*/])->f_9 = func_627(4, 3);
	(uParam0[1 /*41*/][1 /*10*/])->f_2 = 0;
	(*uParam0[1 /*41*/])[2 /*10*/] = 5;
	(uParam0[1 /*41*/][2 /*10*/])->f_1 = 4;
	(uParam0[1 /*41*/][2 /*10*/])->f_7 = func_627(5, 1);
	(uParam0[1 /*41*/][2 /*10*/])->f_8 = func_627(5, 2);
	(uParam0[1 /*41*/][2 /*10*/])->f_9 = func_627(5, 3);
	(uParam0[1 /*41*/][2 /*10*/])->f_2 = 0;
	(*uParam0[2 /*41*/])[0 /*10*/] = 9;
	(uParam0[2 /*41*/][0 /*10*/])->f_1 = 3;
	(uParam0[2 /*41*/][0 /*10*/])->f_7 = func_627(9, 1);
	(uParam0[2 /*41*/][0 /*10*/])->f_8 = func_627(9, 2);
	(uParam0[2 /*41*/][0 /*10*/])->f_9 = func_627(9, 3);
	(uParam0[2 /*41*/][0 /*10*/])->f_2 = 0;
	(*uParam0[2 /*41*/])[1 /*10*/] = 10;
	(uParam0[2 /*41*/][1 /*10*/])->f_1 = 9;
	(uParam0[2 /*41*/][1 /*10*/])->f_7 = func_627(10, 1);
	(uParam0[2 /*41*/][1 /*10*/])->f_8 = func_627(10, 2);
	(uParam0[2 /*41*/][1 /*10*/])->f_9 = func_627(10, 3);
	(uParam0[2 /*41*/][0 /*10*/])->f_2 = 0;
	(*uParam0[2 /*41*/])[2 /*10*/] = 11;
	(uParam0[2 /*41*/][2 /*10*/])->f_1 = 10;
	(uParam0[2 /*41*/][2 /*10*/])->f_7 = func_627(11, 1);
	(uParam0[2 /*41*/][2 /*10*/])->f_8 = func_627(11, 2);
	(uParam0[2 /*41*/][2 /*10*/])->f_9 = func_627(11, 3);
	(uParam0[2 /*41*/][2 /*10*/])->f_2 = 0;
	(*uParam0[3 /*41*/])[0 /*10*/] = 6;
	(uParam0[3 /*41*/][0 /*10*/])->f_1 = 9;
	(uParam0[3 /*41*/][0 /*10*/])->f_7 = func_627(6, 1);
	(uParam0[3 /*41*/][0 /*10*/])->f_8 = func_627(6, 2);
	(uParam0[3 /*41*/][0 /*10*/])->f_9 = func_627(6, 3);
	(uParam0[3 /*41*/][0 /*10*/])->f_2 = 2;
	(*uParam0[3 /*41*/])[1 /*10*/] = 7;
	(uParam0[3 /*41*/][1 /*10*/])->f_1 = 6;
	(uParam0[3 /*41*/][1 /*10*/])->f_7 = func_627(7, 1);
	(uParam0[3 /*41*/][1 /*10*/])->f_8 = func_627(7, 2);
	(uParam0[3 /*41*/][1 /*10*/])->f_9 = func_627(7, 3);
	(uParam0[3 /*41*/][1 /*10*/])->f_2 = 4;
	(*uParam0[3 /*41*/])[2 /*10*/] = 8;
	(uParam0[3 /*41*/][2 /*10*/])->f_1 = 7;
	(uParam0[3 /*41*/][2 /*10*/])->f_7 = func_627(8, 1);
	(uParam0[3 /*41*/][2 /*10*/])->f_8 = func_627(8, 2);
	(uParam0[3 /*41*/][2 /*10*/])->f_9 = func_627(8, 3);
	(uParam0[3 /*41*/][2 /*10*/])->f_2 = 2;
	(*uParam0[5 /*41*/])[0 /*10*/] = 15;
	(uParam0[5 /*41*/][0 /*10*/])->f_1 = 6;
	(uParam0[5 /*41*/][0 /*10*/])->f_7 = func_627(15, 1);
	(uParam0[5 /*41*/][0 /*10*/])->f_8 = func_627(15, 2);
	(uParam0[5 /*41*/][0 /*10*/])->f_9 = func_627(15, 3);
	(uParam0[5 /*41*/][0 /*10*/])->f_2 = 5;
	(*uParam0[5 /*41*/])[1 /*10*/] = 16;
	(uParam0[5 /*41*/][1 /*10*/])->f_1 = 15;
	(uParam0[5 /*41*/][1 /*10*/])->f_7 = func_627(16, 1);
	(uParam0[5 /*41*/][1 /*10*/])->f_8 = func_627(16, 2);
	(uParam0[5 /*41*/][1 /*10*/])->f_9 = func_627(16, 3);
	(uParam0[5 /*41*/][1 /*10*/])->f_2 = 5;
	(*uParam0[5 /*41*/])[2 /*10*/] = 17;
	(uParam0[5 /*41*/][2 /*10*/])->f_1 = 16;
	(uParam0[5 /*41*/][2 /*10*/])->f_7 = func_627(17, 1);
	(uParam0[5 /*41*/][2 /*10*/])->f_8 = func_627(17, 2);
	(uParam0[5 /*41*/][2 /*10*/])->f_9 = func_627(17, 3);
	(uParam0[5 /*41*/][2 /*10*/])->f_2 = 5;
	(*uParam0[4 /*41*/])[0 /*10*/] = 12;
	(uParam0[4 /*41*/][0 /*10*/])->f_1 = 6;
	(uParam0[4 /*41*/][0 /*10*/])->f_7 = func_627(12, 1);
	(uParam0[4 /*41*/][0 /*10*/])->f_8 = func_627(12, 2);
	(uParam0[4 /*41*/][0 /*10*/])->f_9 = func_627(12, 3);
	(uParam0[4 /*41*/][0 /*10*/])->f_2 = 0;
	(*uParam0[4 /*41*/])[1 /*10*/] = 13;
	(uParam0[4 /*41*/][1 /*10*/])->f_1 = 12;
	(uParam0[4 /*41*/][1 /*10*/])->f_7 = func_627(13, 1);
	(uParam0[4 /*41*/][1 /*10*/])->f_8 = func_627(13, 2);
	(uParam0[4 /*41*/][1 /*10*/])->f_9 = func_627(13, 3);
	(uParam0[4 /*41*/][1 /*10*/])->f_2 = 0;
	(*uParam0[4 /*41*/])[2 /*10*/] = 14;
	(uParam0[4 /*41*/][2 /*10*/])->f_1 = 13;
	(uParam0[4 /*41*/][2 /*10*/])->f_7 = func_627(14, 1);
	(uParam0[4 /*41*/][2 /*10*/])->f_8 = func_627(14, 2);
	(uParam0[4 /*41*/][2 /*10*/])->f_9 = func_627(14, 3);
	(uParam0[4 /*41*/][2 /*10*/])->f_2 = 0;
	(*uParam0[6 /*41*/])[0 /*10*/] = 18;
	(uParam0[6 /*41*/][0 /*10*/])->f_1 = 6;
	(uParam0[6 /*41*/][0 /*10*/])->f_7 = func_627(18, 1);
	(uParam0[6 /*41*/][0 /*10*/])->f_8 = func_627(18, 2);
	(uParam0[6 /*41*/][0 /*10*/])->f_9 = func_627(18, 3);
	(uParam0[6 /*41*/][0 /*10*/])->f_2 = 2;
	(*uParam0[6 /*41*/])[1 /*10*/] = 19;
	(uParam0[6 /*41*/][1 /*10*/])->f_1 = 18;
	(uParam0[6 /*41*/][1 /*10*/])->f_7 = func_627(19, 1);
	(uParam0[6 /*41*/][1 /*10*/])->f_8 = func_627(19, 2);
	(uParam0[6 /*41*/][1 /*10*/])->f_9 = func_627(19, 3);
	(uParam0[6 /*41*/][1 /*10*/])->f_2 = 2;
	(*uParam0[6 /*41*/])[2 /*10*/] = 20;
	(uParam0[6 /*41*/][2 /*10*/])->f_1 = 19;
	(uParam0[6 /*41*/][2 /*10*/])->f_7 = func_627(20, 1);
	(uParam0[6 /*41*/][2 /*10*/])->f_8 = func_627(20, 2);
	(uParam0[6 /*41*/][2 /*10*/])->f_9 = func_627(20, 3);
	(uParam0[6 /*41*/][2 /*10*/])->f_2 = 2;
	(*uParam0[6 /*41*/])[3 /*10*/] = 21;
	(uParam0[6 /*41*/][3 /*10*/])->f_1 = 20;
	(uParam0[6 /*41*/][3 /*10*/])->f_7 = func_627(21, 1);
	(uParam0[6 /*41*/][3 /*10*/])->f_8 = func_627(21, 2);
	(uParam0[6 /*41*/][3 /*10*/])->f_9 = func_627(21, 3);
	(uParam0[6 /*41*/][3 /*10*/])->f_2 = 2;
}

void func_761(int iParam0, bool bParam1)//Position - 0x6E1F7
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 18, 1))
		{
			GlobalFunc_7969(iParam0, 18, 1);
		}
	}
	else if (GlobalFunc_7702(iParam0, 18, 1))
	{
		GlobalFunc_7982(iParam0, 18, 1);
	}
}





void func_766(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6E60B
{
	var uVar0;
	struct<20> Var1;
	struct<21> Var23;
	int iVar45;
	
	if (!uParam0->f_3)
	{
		if (func_493(uParam1, 131072))
		{
			uVar0 = func_770(uParam0, uParam2, uParam6);
			if (!func_424(uParam1, uParam3) && uVar0)
			{
				func_470(uParam1, 131072);
				if ((uParam0->f_25 != -1 || uParam0->f_26 != -1) && !uParam0->f_1)
				{
					SYSTEM::SETTIMERA(0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_94, uParam6->f_133, 1f, 20000, 1048576000, 0, 1193033728);
					uParam0->f_4 = 16;
					uParam0->f_3 = 1;
				}
				else
				{
					func_800(uParam6, uParam3, uParam0, uParam4, uParam5, 0);
				}
			}
		}
		else if (func_768(uParam0, uParam6))
		{
			uParam0->f_1 = 1;
			func_767(uParam3);
			func_492(uParam1, 131072);
			uParam0->f_10 = 1;
			func_281(&(uParam0->f_39));
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				return;
			}
			SYSTEM::WAIT(1000);
			Var1.f_4 = 1065353216;
			Var1.f_5 = 1065353216;
			Var1.f_9 = 1065353216;
			Var1.f_10 = 1065353216;
			Var1.f_14 = 1065353216;
			Var1.f_15 = 1065353216;
			Var1.f_17 = 1040187392;
			Var1.f_18 = 1040187392;
			Var1.f_19 = -1;
			Var23.f_4 = 1065353216;
			Var23.f_5 = 1065353216;
			Var23.f_9 = 1065353216;
			Var23.f_10 = 1065353216;
			Var23.f_14 = 1065353216;
			Var23.f_15 = 1065353216;
			Var23.f_17 = 1040187392;
			Var23.f_18 = 1040187392;
			Var23.f_19 = -1;
			iVar45 = 0;
			Var23 = 1;
			Var23.f_2 = "takeoff_earsdefenders_idle";
			Var23.f_1 = "mini@ears_defenders";
			Var23.f_3 = 0f;
			Var23.f_4 = 1f;
			Var23.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar45 += 32;
			iVar45 += 8192;
			Var23.f_20 = iVar45;
			TASK::TASK_SCRIPTED_ANIMATION(iLocal_94, &Var23, &Var1, &Var1, 0.25f, 0.25f);
		}
	}
}

void func_767(var uParam0)//Position - 0x6E7F4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_400(uParam0[iVar0 /*33*/], 1048576);
		func_400(uParam0[iVar0 /*33*/], 2097152);
		func_400(uParam0[iVar0 /*33*/], 4194304);
		if (func_402(*(uParam0[iVar0 /*33*/]), 128) && !func_402(*(uParam0[iVar0 /*33*/]), 256))
		{
			func_399(uParam0[iVar0 /*33*/], 32);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARGET_PRACTICE_FLIP_MASTER", (uParam0[iVar0 /*33*/])->f_2.f_10, 0, 0, 0);
			if ((uParam0[iVar0 /*33*/])->f_17 != -1)
			{
				AUDIO::STOP_SOUND((uParam0[iVar0 /*33*/])->f_17);
				AUDIO::RELEASE_SOUND_ID((uParam0[iVar0 /*33*/])->f_17);
				(uParam0[iVar0 /*33*/])->f_17 = -1;
			}
		}
		iVar0++;
	}
}

int func_768(var uParam0, var uParam1)//Position - 0x6E8B4
{
	bool bVar0;
	
	if (uParam0->f_4 >= 5)
	{
		if (uParam0->f_4 <= 10 && uParam0->f_4 > 5)
		{
			if (uParam0->f_38 == 0)
			{
				bVar0 = ((((MISC::IS_BULLET_IN_ANGLED_AREA(6.488925f, -1097.953f, 32.7731f, 7.870516f, -1094.14f, 28.79702f, 0.75f, 1) || MISC::IS_BULLET_IN_ANGLED_AREA(18.3308f, -1102.255f, 32.78695f, 19.69246f, -1098.622f, 28.79702f, 0.5f, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(6.47323f, -1097.686f, 32.78207f, 18.60892f, -1102.112f, 28.79702f, 0.5f, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(7.100925f, -1095.961f, 32.77991f, 19.1766f, -1100.58f, 32.11956f, 4.25f, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(6.86985f, -1096.625f, 28.79702f, 18.98512f, -1101.054f, 29.09252f, 2.75f, 1));
			}
			else
			{
				bVar0 = ((((MISC::IS_BULLET_IN_ANGLED_AREA(829.218f, -2160.619f, 24.657f, 814.218f, -2160.619f, 34.657f, 0.75f, 1) || MISC::IS_BULLET_IN_ANGLED_AREA(828.275f, -2160.619f, 24.657f, 827.525f, -2160.619f, 34.657f, 5f, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(815.575f, -2160.619f, 24.657f, 814.825f, -2160.619f, 34.657f, 5f, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(829.375f, -2161.619f, 32.5f, 813.625f, -2161.619f, 33.7f, 3f, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(829.375f, -2161.619f, 27.5f, 813.625f, -2161.619f, 29.1f, 3f, 1));
			}
			if (bVar0)
			{
				uParam0->f_11 = 1;
				HUD::CLEAR_HELP(1);
				GlobalFunc_159("SHR_H_MISFIRE", -1);
				PLAYER::SET_MAX_WANTED_LEVEL(6);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				GlobalFunc_925(uParam0, 1);
				return 1;
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_94))
		{
			return 1;
		}
	}
	return 0;
}


int func_770(var uParam0, var uParam1, var uParam2)//Position - 0x6EAF0
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		PED::CLEAR_PED_PROP(iLocal_94, 1);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_21));
		}
		PED::CLEAR_PED_PROP(iLocal_94, 0);
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, 242628503) != 1)
	{
		if (uParam0->f_22 == 0)
		{
			if (!uParam0->f_1)
			{
				if (!CAM::DOES_CAM_EXIST(uParam1->f_5))
				{
					uParam1->f_5 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				CAM::SET_CAM_COORD(uParam1->f_5, uParam2->f_154);
				CAM::SET_CAM_ROT(uParam1->f_5, uParam2->f_157, 2);
				CAM::SET_CAM_FOV(uParam1->f_5, 50f);
				CAM::SET_CAM_ACTIVE(uParam1->f_5, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			uParam0->f_24 = MISC::GET_GAME_TIMER();
			uParam0->f_22 = (315 + MISC::GET_GAME_TIMER());
			uParam0->f_23 = (920 + MISC::GET_GAME_TIMER());
		}
	}
	if (uParam0->f_22 != 0)
	{
		if (MISC::GET_GAME_TIMER() >= uParam0->f_22)
		{
			PED::CLEAR_PED_PROP(iLocal_94, 1);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_21))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_21, 1);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		if (MISC::GET_GAME_TIMER() >= uParam0->f_22 && MISC::GET_GAME_TIMER() < uParam0->f_23)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_21, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		else if (MISC::GET_GAME_TIMER() >= uParam0->f_23)
		{
			ENTITY::DETACH_ENTITY(uParam0->f_21, 1, 1);
			return 1;
		}
	}
	return 0;
}




void func_774()//Position - 0x6ED1B
{
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
}

void func_775(int iParam0, bool bParam1)//Position - 0x6ED69
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 3, 1))
		{
			GlobalFunc_7969(iParam0, 3, 1);
		}
	}
	else if (GlobalFunc_7702(iParam0, 3, 1))
	{
		GlobalFunc_7982(iParam0, 3, 1);
	}
}


void func_777(char[24] cParam0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x6EDB8
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
			if (GlobalFunc_7630(1, cParam0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_27 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_28 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_27 = 0f;
				}
				else
				{
					fLocal_27 = (fLocal_27 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_27 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, cParam0))
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
					fLocal_32 = 0.14f;
				}
				else
				{
					fLocal_32 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_32)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_28.x, (Local_28.f_1 + fLocal_31));
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
					fLocal_27 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_27 = 0f;
			}
		}
	}
}



















void func_796(int iParam0)//Position - 0x6FCF3
{
	if (iParam0 != 9)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	}
	GlobalFunc_1020();
}



void func_799(var uParam0, var uParam1)//Position - 0x6FD3D
{
	uParam1->f_6 = uParam0->f_1;
	uParam1->f_7 = uParam0->f_2;
	uParam1->f_8 = uParam0->f_3;
	uParam1->f_10 = uParam0->f_4;
	uParam1->f_11 = uParam0->f_5;
	uParam1->f_12 = uParam0->f_6;
	uParam1->f_13 = uParam0->f_7;
	uParam1->f_14 = uParam0->f_8;
	uParam1->f_15 = uParam0->f_9;
}

void func_800(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x6FD8D
{
	int iVar0;
	
	OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_gc_door01"), uParam0->f_109, 0, 0f, 0);
	if (uParam2->f_327 && !Global_1835013.f_2)
	{
		func_625(&(uParam2->f_323));
	}
	GlobalFunc_5770();
	func_458();
	GlobalFunc_53();
	GRAPHICS::_0x0E4299C549F0D1F1(0);
	GlobalFunc_5869(uParam4);
	if (GlobalFunc_1157(64))
	{
		GlobalFunc_1153(64);
	}
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
	if (Global_68505)
	{
		GlobalFunc_778(0);
	}
	GlobalFunc_139();
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	MISC::SET_GAME_PAUSED(0);
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_398(&((uParam1[iVar0 /*33*/])->f_2));
		iVar0++;
	}
	if (!uParam2->f_10)
	{
		func_281(&(uParam2->f_39));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_21))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam2->f_21));
	}
	STREAMING::REMOVE_ANIM_DICT("mini@ears_defenders");
	if ((!GlobalFunc_268() && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4) && !GlobalFunc_926(uParam2))
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_94, 1);
	HUD::DISPLAY_RADAR(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (uParam2->f_20 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(uParam2->f_20);
		uParam2->f_20 = 0;
	}
	HUD::CLEAR_FLOATING_HELP(1, 1);
	GlobalFunc_5385(1);
	func_775(28, 0);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), 0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	HUD::CLEAR_ADDITIONAL_TEXT(3, 0);
	GlobalFunc_7632(0);
	if (GlobalFunc_5384(joaat("weapon_railgun")))
	{
		if (!GlobalFunc_230(14) || !func_805(GlobalFunc_6674(PLAYER::PLAYER_PED_ID()), joaat("weapon_railgun")))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_railgun"));
		}
	}
	GlobalFunc_810(&(uParam3->f_56));
	func_802(uParam3);
	GlobalFunc_1246(&(uParam3->f_194));
	if (uParam2->f_11)
	{
		SYSTEM::WAIT(10000);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	GlobalFunc_842(0, 0);
	GlobalFunc_601(23, 0);
	GlobalFunc_601(4, 0);
	if (bParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_21))
		{
			OBJECT::DELETE_OBJECT(&(uParam2->f_21));
		}
		PED::CLEAR_PED_PROP(iLocal_94, 0);
		PED::CLEAR_PED_PROP(iLocal_94, 1);
	}
	func_761(28, 0);
	func_761(38, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_802(var uParam0)//Position - 0x6FFBD
{
	GlobalFunc_2435(uParam0->f_180);
}



int func_805(int iParam0, int iParam1)//Position - 0x6FFFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = func_808(iParam0, iParam1);
		iVar1 = GlobalFunc_4977(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(iVar0, iVar2);
	}
	return 0;
}



var func_808(int iParam0, int iParam1)//Position - 0x703DB
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = GlobalFunc_4977(iParam1);
	iVar2 = GlobalFunc_300(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_purch_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_purch_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_purch_2"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}













void func_821(var uParam0, var uParam1)//Position - 0x711FD
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		bVar4 = func_826(*uParam1);
	}
	if (uParam0->f_38 == 0)
	{
		Var0 = { 15.4041f, -1125.915f, 27.7096f };
		fVar3 = 90.5811f;
	}
	else if (uParam0->f_38 == 1)
	{
		Var0 = { GlobalFunc_1087(bVar4, 810.0622f, -2137.992f, 28.298f, 782.8192f, -2120.501f, 28.3352f) };
		fVar3 = GlobalFunc_512(bVar4, 0.0589f, 355.0583f);
	}
	if (func_822(uParam1, Var0, 1, fVar3))
	{
	}
}

int func_822(var uParam0, struct<3> Param1, bool bParam4, float fParam5)//Position - 0x71295
{
	if (func_824(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
		if (!GlobalFunc_105(Param1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam4)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		}
		return 1;
	}
	return 0;
}


int func_824(var uParam0)//Position - 0x7130D
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!GlobalFunc_1442(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_91, 0, 1, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}


int func_826(int iParam0)//Position - 0x71399
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("blimp"):
			return 1;
		
		case joaat("blimp2"):
			return 1;
		
		case joaat("cargobob"):
			return 1;
		
		case joaat("cargobob2"):
			return 1;
		
		case joaat("cargobob3"):
			return 1;
		
		case joaat("buzzard"):
			return 1;
		
		case joaat("buzzard2"):
			return 1;
		
		case joaat("maverick"):
			return 1;
		
		case joaat("polmav"):
			return 1;
		
		case joaat("swift"):
			return 1;
		
		case joaat("valkyrie"):
			return 1;
		
		case joaat("annihilator"):
			return 1;
		
		case joaat("frogger"):
			return 1;
		
		case joaat("frogger2"):
			return 1;
		
		case joaat("dodo"):
			return 1;
		
		default:
	}
	return 0;
}



void func_829(int iParam0, int iParam1)//Position - 0x71485
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11154(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_106(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}






void func_835(int iParam0)//Position - 0x725D7
{
	Global_96438 = (Global_96438 || iParam0);
}

void func_836(var uParam0)//Position - 0x725EA
{
	uParam0->f_12 = (WEAPON::IS_WEAPON_VALID(joaat("weapon_pistol50")) && GlobalFunc_5102(joaat("weapon_pistol50")));
	uParam0->f_13 = (WEAPON::IS_WEAPON_VALID(joaat("weapon_assaultsmg")) && GlobalFunc_5102(joaat("weapon_assaultsmg")));
	uParam0->f_14 = (WEAPON::IS_WEAPON_VALID(-947031628) && GlobalFunc_5102(-947031628));
	uParam0->f_15 = (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpupshotgun")) && GlobalFunc_5102(joaat("weapon_bullpupshotgun")));
	uParam0->f_16 = (WEAPON::IS_WEAPON_VALID(-572349828) && GlobalFunc_5102(-572349828));
	uParam0->f_17 = GlobalFunc_84();
}



