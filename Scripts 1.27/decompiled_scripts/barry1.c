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
	bool bLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 10;
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
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	char* sLocal_158 = NULL;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	struct<3> Local_165 = { 0, 0, 0 } ;
	float fLocal_168 = 0f;
	struct<3> Local_169 = { 0, 0, 0 } ;
	float fLocal_172 = 0f;
	struct<3> Local_173 = { 0, 0, 0 } ;
	float fLocal_176 = 0f;
	float fLocal_177 = 0f;
	float fLocal_178 = 0f;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	bool bLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	struct<8> Local_191 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_199 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_207 = 0f;
	int iLocal_208 = 0;
	var uLocal_209 = 16;
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
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	char* sLocal_331 = NULL;
	char* sLocal_332 = NULL;
	char* sLocal_333 = NULL;
	char* sLocal_334 = NULL;
	char* sLocal_335 = NULL;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	char* sLocal_338 = NULL;
	char* sLocal_339 = NULL;
	char* sLocal_340 = NULL;
	char* sLocal_341 = NULL;
	char* sLocal_342 = NULL;
	char* sLocal_343 = NULL;
	char* sLocal_344 = NULL;
	char* sLocal_345 = NULL;
	char* sLocal_346 = NULL;
	char* sLocal_347 = NULL;
	char* sLocal_348 = NULL;
	char* sLocal_349 = NULL;
	char* sLocal_350 = NULL;
	char* sLocal_351 = NULL;
	char* sLocal_352 = NULL;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	bool bLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 3;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 1092616192;
	var uLocal_372 = 1101004800;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 3;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 16;
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
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	char* sLocal_554 = NULL;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	bool bLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	float fLocal_571 = 0f;
	float fLocal_572 = 0f;
	float fLocal_573 = 0f;
	bool bLocal_574 = 0;
	struct<3> Local_575 = { 0, 0, 0 } ;
	float fLocal_578 = 0f;
	float fLocal_579 = 0f;
	float fLocal_580 = 0f;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	struct<33> Local_585[8];
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	float fLocal_856 = 0f;
	float fLocal_857 = 0f;
	float fLocal_858 = 0f;
	float fLocal_859 = 0f;
	float fLocal_860 = 0f;
	float fLocal_861 = 0f;
	float fLocal_862 = 0f;
	struct<3> Local_863 = { 0, 0, 0 } ;
	struct<3> Local_866 = { 0, 0, 0 } ;
	float fLocal_869 = 0f;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	struct<3> Local_879 = { 0, 0, 0 } ;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	struct<3> Local_885 = { 0, 0, 0 } ;
	float fLocal_888 = 0f;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	float fLocal_892 = 0f;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	struct<3> Local_896[9];
	struct<3> Local_924 = { 0, 0, 0 } ;
	float fLocal_927 = 0f;
	int iLocal_928 = 0;
	var uLocal_929 = 0;
	struct<12> Local_930 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	struct<3> Local_966 = { 0, 0, 0 } ;
	struct<3> Local_969 = { 0, 0, 0 } ;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	uLocal_82 = GlobalFunc_4946(49);
	iLocal_86 = 1;
	iLocal_87 = 65;
	iLocal_88 = 49;
	iLocal_89 = 64;
	uLocal_93 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_94 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_158 = "";
	iLocal_159 = -1;
	Local_165 = { 174.6435f, -1012.361f, 28.3152f };
	fLocal_168 = 30.2623f;
	Local_169 = { 180.5319f, -970.6324f, 29.0923f };
	fLocal_172 = 100f;
	Local_173 = { 188.86f, -955.83f, 30.09f };
	fLocal_176 = 62.08f;
	fLocal_177 = 1f;
	fLocal_178 = 1f;
	fLocal_179 = 0.8f;
	iLocal_180 = 1;
	iLocal_187 = joaat("weapon_sniperrifle");
	iLocal_188 = joaat("weapon_combatpistol");
	iLocal_189 = joaat("weapon_grenadelauncher");
	iLocal_190 = joaat("weapon_minigun");
	fLocal_207 = 255f;
	iLocal_208 = joaat("weapon_minigun");
	sLocal_327 = "Barry";
	sLocal_328 = "Barrys_chair";
	sLocal_329 = "Barrys_protest_table";
	sLocal_330 = "Michaels_Weapon";
	sLocal_331 = "Barry_Pamphlet_1";
	sLocal_332 = "Lighter_Michael";
	sLocal_333 = "Cig_Michael";
	sLocal_334 = "DrugsMichaelAliensFightIn";
	sLocal_335 = "DrugsMichaelAliensFight";
	sLocal_336 = "DrugsMichaelAliensFightOut";
	sLocal_337 = "rcmbarry";
	sLocal_338 = "rcmbarryleadinout";
	sLocal_339 = "BARRY_01_DRUGS";
	sLocal_340 = "bar_1_attack_intro_aln";
	sLocal_341 = "bar_1_attack_intro_mic";
	sLocal_342 = "bar_1_attack_idle_aln";
	sLocal_343 = "bar_1_attack_idle_mic";
	sLocal_344 = "bar_1_attack_michael_wins_aln";
	sLocal_345 = "bar_1_attack_michael_wins_mic";
	sLocal_346 = "bar_1_attack_alien_wins_aln";
	sLocal_347 = "bar_1_attack_alien_wins_mic";
	sLocal_348 = "m_cower_01";
	sLocal_349 = "bar_1_teleport_aln";
	sLocal_350 = "bar_1_teleport_mic";
	sLocal_351 = "enter";
	sLocal_352 = "idle_d";
	iLocal_356 = joaat("s_m_m_movalien_01");
	iLocal_357 = joaat("prop_ld_test_01");
	iLocal_358 = joaat("prop_protest_sign_01");
	sLocal_554 = "AZ_BARRY_01_AMBIENCE";
	iLocal_556 = 1;
	iLocal_560 = -1;
	iLocal_561 = 3500;
	iLocal_563 = 15000;
	iLocal_564 = 1;
	iLocal_565 = 6000;
	iLocal_566 = 500;
	iLocal_567 = 1000;
	iLocal_568 = 2000;
	fLocal_569 = 5f;
	fLocal_570 = 0.375f;
	fLocal_571 = 0.8f;
	fLocal_572 = 2f;
	fLocal_573 = 1f;
	bLocal_574 = true;
	Local_575 = { 183.58f, -967.1f, 29.09f };
	fLocal_578 = 38.25f;
	fLocal_579 = 30f;
	fLocal_580 = 60f;
	iLocal_582 = 600;
	iLocal_583 = 1000;
	iLocal_584 = 200;
	iLocal_852 = 1;
	iLocal_853 = 100;
	iLocal_854 = 2000;
	iLocal_855 = 6000;
	fLocal_856 = 15f;
	fLocal_857 = 0.75f;
	fLocal_858 = 100f;
	fLocal_859 = 0.125f;
	fLocal_860 = -0.1f;
	fLocal_861 = 0.3f;
	fLocal_862 = 1.75f;
	Local_863 = { 0.3f, 0.3f, 0f };
	Local_866 = { 270f, 0f, 0f };
	fLocal_869 = 0.1f;
	iLocal_870 = 3;
	iLocal_877 = 31;
	Local_879 = { 188.86f, -955.83f, 29.09f };
	iLocal_884 = 5;
	Local_885 = { 216.7659f, -908.9621f, 29.69239f };
	fLocal_888 = 7f;
	Local_966 = { 184.8f, -961.5f, 200f };
	Local_969 = { -90f, 0f, -109.6f };
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	sLocal_158 = "";
	MISC::CLEAR_AREA_OF_PROJECTILES(190.2424f, -956.379f, 28.63f, 6f, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RC18A_STOP");
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			func_545(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
		}
		else
		{
			GlobalFunc_5738(0);
		}
		GlobalFunc_143("Force cleanup [TERMINATING]");
		if (MISC::ARE_STRINGS_EQUAL(sLocal_158, "B1_FAIL3"))
		{
			func_540("B1_FAIL3", 1);
		}
		else if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			func_540("B1_FAIL2", 1);
		}
		else
		{
			func_523(1);
		}
		func_518();
	}
	func_489();
	func_488(iLocal_190, 1);
	GlobalFunc_2357(181.3f, -969.1f, 30.3f, 200f, &Var0, &Var3);
	GlobalFunc_238(iLocal_875);
	if (GlobalFunc_2(0))
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_GRM", 0);
		func_469(Local_95.f_9, 0, 0, 0, 0, 0);
		fLocal_178 = 1f;
		iLocal_185 = 0;
		GlobalFunc_2356();
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
		GlobalFunc_7629();
		func_426();
		switch (iLocal_159)
		{
			case -1:
				func_421(&iLocal_161);
				break;
			
			case 0:
				func_399(&iLocal_161);
				break;
			
			case 1:
				func_369(&iLocal_161);
				break;
			
			case 2:
				func_358(&iLocal_161);
				break;
			
			case 3:
				func_330(&iLocal_161);
				break;
			
			case 4:
				func_329(&iLocal_161);
				break;
			
			case 5:
				func_74(&iLocal_161);
				break;
			
			case 7:
				func_63(&iLocal_161);
				break;
			
			case 6:
				func_10(&iLocal_161);
				break;
		}
		PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::GET_PLAYER_INDEX(), fLocal_178);
		PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::GET_PLAYER_INDEX(), fLocal_177);
		if (func_9())
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x525
{
	bool bVar0;
	
	bVar0 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_169, 1) < (fLocal_172 + 10f);
	if (iLocal_180)
	{
		if (bVar0 == 0 && bLocal_558 == 0)
		{
			GlobalFunc_164("B1_WARN", 7500, 1);
			GlobalFunc_846(&uLocal_182);
			uLocal_182 = GlobalFunc_2324(Local_169, 5, 1);
			iLocal_181 = MISC::GET_GAME_TIMER() + 10000;
			func_3(0);
			iLocal_180 = 0;
		}
	}
	else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_169, 1) > fLocal_172)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_181 && bLocal_558 == 0)
		{
			func_2("B1_FAIL");
		}
	}
	else
	{
		GlobalFunc_164("PRIME2", 7500, 1);
		GlobalFunc_846(&uLocal_182);
		iLocal_180 = 1;
	}
}

void func_2(char* sParam0)//Position - 0x5D4
{
	if (iLocal_159 != 6)
	{
		sLocal_158 = sParam0;
		iLocal_161 = 0;
		iLocal_159 = 6;
	}
}

void func_3(int iParam0)//Position - 0x5EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iLocal_556 = 1;
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		if (func_4(&(Local_585[iVar0 /*33*/])))
		{
			Local_585[iVar0 /*33*/].f_1 = 4;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam0 == 0 || iVar1 == 0)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER() + 2000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		func_426();
		SYSTEM::WAIT(0);
	}
}

bool func_4(var uParam0)//Position - 0x662
{
	if (!*uParam0)
	{
		return 0;
	}
	return ((uParam0->f_1 != 7 && uParam0->f_1 != 8) && GlobalFunc_115(uParam0->f_2));
}





bool func_9()//Position - 0x734
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 4;
	iVar2 = iLocal_159;
	return (iVar2 > iVar0 && iVar2 < iVar1);
}

void func_10(int iParam0)//Position - 0x755
{
	switch (*iParam0)
	{
		case 0:
		case 1:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_62();
			func_61();
			func_53(1);
			AUDIO::TRIGGER_MUSIC_EVENT("RC18A_STOP");
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_158))
			{
				func_523(1);
			}
			else
			{
				func_540(sLocal_158, 1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (GlobalFunc_145())
			{
				GlobalFunc_5129(165.4821f, -990.514f, 29.0923f, 166.7554f);
				GlobalFunc_5166(Local_924, fLocal_927);
				func_46(1, 0, 1, 1);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					func_545(PLAYER::PLAYER_PED_ID(), 1);
					GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
				}
				func_518();
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_158, "B1_FAIL"))
			{
				if (func_13(0) && GlobalFunc_2(0))
				{
					func_518();
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_158, "B1_FAIL2"))
			{
				func_11();
			}
			break;
	}
}

void func_11()//Position - 0x846
{
	if (MISC::GET_GAME_TIMER() > iLocal_157 && iLocal_157 != -1)
	{
		if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		func_46(1, 0, 1, 1);
		iLocal_157 = -1;
	}
}


int func_13(int iParam0)//Position - 0x89D
{
	struct<3> Var0;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	bVar3 = false;
	func_426();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		}
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_327, 1, 0, 0, 0);
	}
	switch (iLocal_160)
	{
		case 0:
			if (iParam0 == 1)
			{
				func_36("bar_2_rcm", 0);
				SCRIPT::REQUEST_SCRIPT("postRC_Barry1and2");
			}
			AUDIO::PREPARE_MUSIC_EVENT("RC18A_END_OS");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_160 = 1;
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f);
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				if (GlobalFunc_234(iLocal_162))
				{
					ENTITY::DETACH_ENTITY(iLocal_162, 1, 0);
				}
				TASK::OPEN_SEQUENCE_TASK(&uVar4);
				TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_351, 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_352, 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar4);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar4);
				TASK::CLEAR_SEQUENCE_TASK(&uVar4);
			}
			uVar5 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", CAM::GET_GAMEPLAY_CAM_COORD(), CAM::GET_GAMEPLAY_CAM_ROT(2), CAM::GET_GAMEPLAY_CAM_FOV(), 1, 2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - CAM::GET_GAMEPLAY_CAM_COORD() };
			CAM::ATTACH_CAM_TO_ENTITY(uVar5, PLAYER::PLAYER_PED_ID(), -Var0, 1);
			if (CAM::DOES_CAM_EXIST(uVar5))
			{
				CAM::SET_CAM_ACTIVE(uVar5, 1);
			}
			iLocal_157 = MISC::GET_GAME_TIMER() + 6000;
			GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_160 = 2;
			break;
		
		case 2:
			bVar3 = false;
			if (iParam0 == 1)
			{
				if (GlobalFunc_10618(&uLocal_389, "BARY1AU", "BARY1_PREOUT", 8, 0, 0, 0) || MISC::GET_GAME_TIMER() > iLocal_157)
				{
					if (MISC::GET_GAME_TIMER() < iLocal_157)
					{
					}
					iLocal_157 = MISC::GET_GAME_TIMER() + 4500;
					bVar3 = true;
				}
			}
			else if (GlobalFunc_10630(&uLocal_389, "BARY1AU", "BARY1_PREOUT", "BARY1_PREOUT_2", 8, 0, 0) || MISC::GET_GAME_TIMER() > iLocal_157)
			{
				iLocal_157 = MISC::GET_GAME_TIMER() + 2000;
				if (MISC::GET_GAME_TIMER() < iLocal_157)
				{
				}
				bVar3 = true;
			}
			if (bVar3 == 1)
			{
				iLocal_160 = 4;
			}
			break;
		
		case 4:
			bVar3 = false;
			if (iParam0 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_157)
				{
					func_16();
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_336, 0, 0);
					iLocal_157 = MISC::GET_GAME_TIMER() + 3500;
					bVar3 = true;
				}
			}
			else
			{
				bVar3 = true;
			}
			if (bVar3 == 1)
			{
				iLocal_160 = 3;
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				bVar3 = MISC::GET_GAME_TIMER() > iLocal_157;
			}
			else
			{
				if (MISC::GET_GAME_TIMER() < iLocal_157)
				{
				}
				MISC::SET_TIME_SCALE(0.6f);
				iLocal_162 = func_15(iLocal_208, 0);
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 7000, 7500, 0, 0, 0, 0);
					if (GlobalFunc_234(iLocal_162) && ENTITY::IS_ENTITY_ATTACHED(iLocal_162))
					{
						ENTITY::DETACH_ENTITY(iLocal_162, 1, 0);
					}
				}
				bVar3 = true;
			}
			if (bVar3 == 1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RC18A_END_OS");
				iLocal_157 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_160 = 5;
			}
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() > iLocal_157)
			{
				if (iParam0 == 1)
				{
					GlobalFunc_2346(&iLocal_162);
					if (CAM::DOES_CAM_EXIST(uVar5))
					{
						CAM::SET_CAM_ACTIVE(uVar5, 0);
						CAM::DESTROY_CAM(uVar5, 0);
					}
					CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 0f);
					MISC::SET_TIME_SCALE(1f);
					AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("BARRY_01_SLOWMO");
					AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
					AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_173, 200f, 0, 0, 0, 0, 0);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_173, 500f);
					AUDIO::CLEAR_AMBIENT_ZONE_STATE(sLocal_554, 1);
					if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
					{
						PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
						PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					}
				}
				return 1;
			}
			break;
	}
	return 0;
}


int func_15(int iParam0, int iParam1)//Position - 0xC54
{
	int iVar0;
	int iVar1;
	
	iVar1 = 28422;
	if (!GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (iParam0 == 0 || iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		iVar1 = 60309;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(iParam0), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f), 1, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iVar1), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	return iVar0;
}

void func_16()//Position - 0xCEB
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_334))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_334);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_335))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_335);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_336))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_336);
	}
}




















void func_36(char* sParam0, bool bParam1)//Position - 0x162A
{
	func_37(bParam1);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_37(bool bParam0)//Position - 0x1640
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(uVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	GlobalFunc_8316(1, 1, 0, 0);
}









void func_46(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x188B
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, bParam3, 0);
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
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}







void func_53(int iParam0)//Position - 0x1A02
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		func_54(&(Local_585[iVar0 /*33*/]), iParam0);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1)//Position - 0x1A2E
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_56(uParam0);
	GlobalFunc_132(&(uParam0->f_2), iParam1, 0, 1);
	*uParam0 = 0;
}


void func_56(var uParam0)//Position - 0x1AA5
{
	if (func_60(uParam0))
	{
		iLocal_557 = 0;
		bLocal_558 = false;
	}
	GlobalFunc_846(&(uParam0->f_3));
	GlobalFunc_2346(&(uParam0->f_6));
	GlobalFunc_2346(&(uParam0->f_4));
	GlobalFunc_2346(&(uParam0->f_5));
	GlobalFunc_2348(&(uParam0->f_17));
	func_57(uParam0);
	uParam0->f_18 = 0;
	uParam0->f_26 = 0;
}

void func_57(var uParam0)//Position - 0x1AF6
{
	GlobalFunc_2347(&(uParam0->f_21));
	GlobalFunc_2347(&(uParam0->f_22));
	GlobalFunc_2347(&(uParam0->f_23));
	GlobalFunc_2347(&(uParam0->f_24));
	GlobalFunc_2347(&(uParam0->f_25));
}



bool func_60(var uParam0)//Position - 0x1B77
{
	return (uParam0->f_1 == 10 || uParam0->f_1 == 11);
}

void func_61()//Position - 0x1B93
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
	}
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		if (func_4(&(Local_585[iVar0 /*33*/])))
		{
			func_57(&(Local_585[iVar0 /*33*/]));
			Local_585[iVar0 /*33*/].f_1 = 0;
			TASK::TASK_SMART_FLEE_COORD(Local_585[iVar0 /*33*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 400f, -1, 0, 0);
		}
		iVar0++;
	}
}

void func_62()//Position - 0x1BFE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		func_56(&(Local_585[iVar0 /*33*/]));
		iVar0++;
	}
}

void func_63(int iParam0)//Position - 0x1C28
{
	var uVar0;
	
	switch (*iParam0)
	{
		case 0:
		case 1:
			iLocal_964 = 0;
			iLocal_162 = func_15(iLocal_208, 0);
			if (GlobalFunc_234(iLocal_162) && ENTITY::IS_ENTITY_ATTACHED(iLocal_162))
			{
				ENTITY::DETACH_ENTITY(iLocal_162, 1, 1);
			}
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_347, 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_350, 8f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			*iParam0 = 2;
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7)
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_alien_teleport", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), fLocal_572, 0, 0, 0);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SPAWN", PLAYER::PLAYER_PED_ID(), "BARRY_01_SOUNDSET", 0, 0);
				fLocal_207 = 255f;
				*iParam0 = 4;
			}
			break;
		
		case 4:
			fLocal_207 = (fLocal_207 - (MISC::GET_FRAME_TIME() * 512f));
			if (fLocal_207 <= 0f)
			{
				fLocal_207 = 0f;
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				*iParam0 = 3;
				return;
			}
			func_73(PLAYER::PLAYER_PED_ID(), SYSTEM::FLOOR(fLocal_207), &iLocal_185);
			break;
		
		case 3:
			if (func_64())
			{
				func_2("B1_FAIL3");
				iLocal_157 = MISC::GET_GAME_TIMER() + 50;
			}
			break;
	}
}

int func_64()//Position - 0x1D9B
{
	struct<3> Var0;
	
	switch (iLocal_964)
	{
		case 0:
			uLocal_929 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_966, Local_969, 50f, 0, 2);
			Local_930.f_11 = uLocal_929;
			iLocal_965 = MISC::GET_GAME_TIMER() + 400;
			iLocal_964++;
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > iLocal_965)
			{
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			if (!func_68(&Local_930, 0.8f))
			{
				iLocal_964++;
			}
			break;
		
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_965 = MISC::GET_GAME_TIMER() + 500;
				iLocal_964++;
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() > iLocal_965)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_966, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					if (CAM::DOES_CAM_EXIST(uLocal_929))
					{
						CAM::SET_CAM_ROT(uLocal_929, Local_969, 2);
						CAM::SET_CAM_ACTIVE(uLocal_929, 1);
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_929, PLAYER::PLAYER_PED_ID(), 0f, 0f, 4f, 0);
					}
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				func_65();
				iLocal_964++;
			}
			break;
		
		case 4:
			CAM::DO_SCREEN_FADE_IN(800);
			sLocal_158 = "B1_FAIL3";
			iLocal_964++;
			break;
		
		case 5:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var0.f_2 < 32f)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
				iLocal_964++;
			}
			break;
		
		case 6:
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (CAM::DOES_CAM_EXIST(uLocal_929))
				{
					CAM::SET_CAM_ACTIVE(uLocal_929, 0);
					CAM::DESTROY_CAM(uLocal_929, 0);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_65()//Position - 0x1F65
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		func_66(&(Local_585[iVar0 /*33*/]));
		iVar0++;
	}
}

void func_66(var uParam0)//Position - 0x1F8F
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_56(uParam0);
	GlobalFunc_881(&(uParam0->f_2));
	*uParam0 = 0;
}


int func_68(var uParam0, float fParam1)//Position - 0x1FF2
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var6;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar15;
	
	if (!uParam0->f_15)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_11))
		{
			uParam0->f_27 = 0;
			if (GlobalFunc_70() == 0)
			{
				iVar11 = PLAYER::PLAYER_PED_ID();
			}
			else
			{
				iVar11 = GlobalFunc_248();
			}
			if (CAM::DOES_CAM_EXIST(uParam0->f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_9, 0);
			}
			uParam0->f_9 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar0], 0);
				}
				iVar0++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar11))
			{
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar11, 1), CAM::GET_CAM_COORD(uParam0->f_11), 1);
			}
			else
			{
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar11, 0), CAM::GET_CAM_COORD(uParam0->f_11), 1);
			}
			fVar2 = GlobalFunc_253(fVar2, 50f, 4000f);
			iVar1 = SYSTEM::ROUND((((fVar2 / ((4000f - 50f) / (2000f - 1000f))) + 400f) * fParam1));
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar11, 0))
			{
				iVar10 = PED::GET_VEHICLE_PED_IS_USING(iVar11);
				bVar9 = true;
			}
			Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			uParam0->f_24 = 0;
			CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			if (bVar9)
			{
				Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar10, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar10, Var6, 1);
			}
			else
			{
				Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar11, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar11, Var6, 1);
			}
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var3, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
			uParam0->f_24++;
			uParam0->f_27 = uParam0->f_27;
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			if (bVar9)
			{
				Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar10, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar10, Var6 + Vector(15f, 0f, 0f), 1);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar11, 0f, 0f, 5f, 0);
			}
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var3.f_2, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
			uParam0->f_24++;
			uParam0->f_27 += 400;
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			if (bVar9)
			{
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar10, 0f, 0f, 75f, 0);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar11, 0f, 0f, 75f, 0);
			}
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var3.f_2, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
			uParam0->f_24++;
			uParam0->f_27 += 400;
			Var12 = { CAM::GET_CAM_ROT(uParam0->f_11, 2) };
			Var12.x = 21f;
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_9, CAM::GET_CAM_COORD(uParam0->f_11), Var12, iVar1, 3, 2);
			uParam0->f_27 = (uParam0->f_27 + iVar1);
			uParam0->f_15 = 1;
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_15 && !uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			if (uParam0->f_24 > 0)
			{
				iVar0 = 0;
				while (iVar0 <= (uParam0->f_24 - 1))
				{
					CAM::SET_CAM_ACTIVE((*uParam0)[iVar0], 1);
					iVar0++;
				}
			}
			CAM::SET_CAM_ACTIVE(uParam0->f_9, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!Global_17098.f_111)
			{
				AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
				if (Global_17098.f_109 == -1)
				{
					Global_17098.f_109 = AUDIO::GET_SOUND_ID();
					Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
				}
				AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
				AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
				{
				}
			}
			uParam0->f_28 = GlobalFunc_2349(uParam0->f_9);
			uParam0->f_16 = 1;
			GlobalFunc_748(1);
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			bVar15 = true;
			if (uParam0->f_24 > 0)
			{
				iVar0 = 0;
				while (iVar0 <= (uParam0->f_24 - 1))
				{
					if (!CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
					{
						bVar15 = false;
					}
					iVar0++;
				}
			}
			if (bVar15)
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_9))
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9) > 0.5f && CAM::IS_CAM_RENDERING(uParam0->f_9))
					{
						uParam0->f_18 = 1;
					}
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_11))
			{
				Global_1312467.f_1 = { CAM::GET_CAM_COORD(uParam0->f_9) };
				Global_1312467.f_4 = { CAM::GET_CAM_ROT(uParam0->f_9, 2) };
				Global_1312467.f_7 = CAM::GET_CAM_FOV(uParam0->f_9);
				CAM::SET_CAM_COORD(uParam0->f_11, Global_1312467.f_1);
				CAM::SET_CAM_ROT(uParam0->f_11, Global_1312467.f_4, 2);
				CAM::SET_CAM_FOV(uParam0->f_11, Global_1312467.f_7);
			}
			CAM::DESTROY_CAM(uParam0->f_9, 0);
		}
		if (uParam0->f_24 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_24 - 1))
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar0], 0);
				}
				iVar0++;
			}
		}
		uParam0->f_15 = 0;
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_11))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_11, 1);
		}
		GlobalFunc_748(0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}





void func_73(int iParam0, int iParam1, int iParam2)//Position - 0x268E
{
	if (*iParam2 >= 8)
	{
		return;
	}
	ENTITY::SET_ENTITY_ALPHA(iParam0, iParam1, 0);
	*iParam2++;
}

void func_74(int iParam0)//Position - 0x26B2
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		}
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_327, 1, 0, 0, 0);
	}
	switch (*iParam0)
	{
		case 0:
			func_36("bar_2_rcm", 0);
			GlobalFunc_8326(Local_173, 1112014848, 12, 5000, 0, 0);
			if (!SCRIPT::HAS_SCRIPT_LOADED("postRC_Barry1and2"))
			{
				SCRIPT::REQUEST_SCRIPT("postRC_Barry1and2");
			}
			*iParam0 = 1;
			break;
		
		case 1:
			if (GlobalFunc_7961(1, 1093140480, 0) && SCRIPT::HAS_SCRIPT_LOADED("postRC_Barry1and2"))
			{
				iLocal_355 = 0;
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				}
				func_319();
				MISC::CLEAR_AREA_OF_VEHICLES(Local_173, 250f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_173, 50f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_173, 30f, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_173, 500f);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				func_274();
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_327, 2, GlobalFunc_4946(49), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_329, 2, joaat("prop_protest_table_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_328, 2, joaat("prop_chair_08"), 0);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, joaat("player_zero"), 0);
				}
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				GlobalFunc_79(1000, 0);
				func_271(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("RC18A_STOP");
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_46(1, 1, 1, 1);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				RECORDING::_0x81CBAE94390F9F89();
				*iParam0 = 4;
			}
			else
			{
				if (!iLocal_355)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (!GlobalFunc_115(Local_95.f_41[5]))
				{
					func_269(&(Local_95.f_41[5]), iLocal_358);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					iLocal_355 = 1;
				}
				if (!GlobalFunc_115(Local_95.f_28[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_327, 0)))
					{
						Local_95.f_28[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_327, 0));
						PED::SET_PED_PROP_INDEX(Local_95.f_28[0], 1, 0, 0, false);
					}
				}
				if (!GlobalFunc_115(Local_95.f_41[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_329, 0)))
					{
						Local_95.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_329, 0));
					}
				}
				if (!GlobalFunc_115(Local_95.f_41[1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_328, 0)))
					{
						Local_95.f_41[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_328, 0));
					}
				}
				if (CUTSCENE::CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(sLocal_329, 0))
				{
					if (GlobalFunc_115(Local_95.f_41[0]) && GlobalFunc_115(Local_95.f_41[2]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_95.f_41[2], Local_95.f_41[0], 0, 0f, -0.25f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			break;
		
		case 3:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			GlobalFunc_2350(250, 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_267(1, 1, 1);
			}
			func_46(1, 1, 1, 1);
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_173);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_176);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			SYSTEM::WAIT(250);
			GlobalFunc_79(250, 0);
			func_75();
			break;
		
		case 4:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			func_75();
			break;
	}
}

void func_75()//Position - 0x2A7B
{
	if (iLocal_208 == iLocal_190 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_208, 0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, iLocal_208);
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		func_545(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
	}
	SYSTEM::START_NEW_SCRIPT("postRC_Barry1and2", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("postRC_Barry1and2");
	func_76(69, 1);
	func_518();
}

void func_76(int iParam0, bool bParam1)//Position - 0x2AE2
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8314();
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
	GlobalFunc_8949(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_102();
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


























void func_102()//Position - 0x3E4D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10910(iVar1, 14, iVar2))
				{
					func_103(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_103(int iParam0, int iParam1, int iParam2)//Position - 0x3F0E
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10910(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_103(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_103(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11030(iParam0, iVar0, &iVar46, 0))
	{
		GlobalFunc_11263(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11026(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11263(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}




































































































































































void func_267(bool bParam0, int iParam1, int iParam2)//Position - 0x27151
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
			func_46(iParam1, iParam2, 1, 1);
		}
	}
}


void func_269(var uParam0, int iParam1)//Position - 0x271E2
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 192.4462f, -953.5946f, 29.0919f };
	fVar3 = 23.45f;
	GlobalFunc_5725(uParam0, iParam1, Var0, fVar3);
}


void func_271(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x27239
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		func_37(0);
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
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_38 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_274()//Position - 0x2743E
{
	if (iLocal_928)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_2251()) && !GlobalFunc_100(Local_924, Local_165))
	{
		MISC::CLEAR_AREA(Local_924, 3f, 1, 0, 0, 0);
		if (GlobalFunc_115(GlobalFunc_2251()))
		{
			ENTITY::SET_ENTITY_COORDS(GlobalFunc_2251(), Local_924, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(GlobalFunc_2251(), fLocal_927);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(GlobalFunc_2251());
		}
		if (GlobalFunc_7091(GlobalFunc_625(), 1))
		{
			GlobalFunc_9754(GlobalFunc_2251(), Local_924, fLocal_927, 24, 0);
		}
	}
	iLocal_928 = 1;
}













































void func_319()//Position - 0x2A5C0
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_339))
	{
		AUDIO::STOP_AUDIO_SCENE(sLocal_339);
	}
	AUDIO::CLEAR_AMBIENT_ZONE_STATE(sLocal_554, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_95.f_28[0]))
	{
		PED::DELETE_PED(&(Local_95.f_28[0]));
	}
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::GET_PLAYER_INDEX(), 1f);
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
	PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(0));
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	func_65();
	GRAPHICS::ENABLE_ALIEN_BLOOD_VFX(0);
}










void func_329(int iParam0)//Position - 0x2A9DD
{
	switch (*iParam0)
	{
		case 0:
		case 1:
			GlobalFunc_79(500, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (func_13(1))
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_159 = 5;
			break;
	}
}

void func_330(int iParam0)//Position - 0x2AA36
{
	switch (*iParam0)
	{
		case 0:
		case 1:
			iLocal_555 = 1;
			*iParam0 = 2;
			break;
		
		case 2:
			if (iLocal_873 != 0 && MISC::GET_GAME_TIMER() > iLocal_873)
			{
				iLocal_873 = 0;
				iLocal_872 = 0;
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_339))
			{
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sLocal_339, "DrugsEffect", ((SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f)) * 0.25f) + 0.25f));
			}
			if (func_357(iLocal_208))
			{
				func_354(&iLocal_208);
				if (iLocal_208 == iLocal_190 && iLocal_876 >= iLocal_877)
				{
					iLocal_877 = (iLocal_877 + iLocal_884);
				}
			}
			func_337();
			func_331();
			if (iLocal_208 == iLocal_190)
			{
				if (iLocal_876 > iLocal_877)
				{
					iLocal_555 = 0;
					if (iLocal_878 == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_159 = 4;
			break;
	}
}

void func_331()//Position - 0x2AB26
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_362)
	{
		return;
	}
	if (!bLocal_359)
	{
		return;
	}
	if (func_332())
	{
		return;
	}
	GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (GlobalFunc_10618(&uLocal_389, "BARY1AU", "BARY1_FREAK", 6, 0, 0, 0))
	{
		iLocal_362 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 40000));
		if ((iLocal_361 - MISC::GET_GAME_TIMER()) < 2500)
		{
			iLocal_361 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
		}
	}
}

int func_332()//Position - 0x2ABB4
{
	if (GlobalFunc_663("PRIME2", 0, 0))
	{
		return 1;
	}
	if (GlobalFunc_663("B1_WARN", 0, 0))
	{
		return 1;
	}
	if (GlobalFunc_5172(&uLocal_364, 1))
	{
		return 1;
	}
	return 0;
}





void func_337()//Position - 0x2AC9E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	if (iLocal_870 > 3)
	{
		iVar0 = (iLocal_870 - 3);
		iLocal_584 = (200 * iVar0);
		iLocal_582 = (600 + iLocal_584);
		iLocal_583 = (1000 + iLocal_584);
	}
	if (!iLocal_555)
	{
		iLocal_581 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_582, iLocal_583));
		return;
	}
	if (bLocal_558)
	{
		iLocal_581 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_582 * 3, iLocal_583 * 2));
		return;
	}
	if (iLocal_878 >= iLocal_870)
	{
		iLocal_581 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_582, iLocal_583));
		return;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_581)
	{
		if (func_353(&iVar1))
		{
			if (func_349(&Var2, 0.4f))
			{
				func_345(&(Local_585[iVar1 /*33*/]), Var2, 0, 0);
				Local_585[iVar1 /*33*/].f_32 = 1;
				Local_585[iVar1 /*33*/].f_14 = 150f;
				iLocal_581 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_582, iLocal_583));
				func_344(&(Local_585[iVar1 /*33*/]));
			}
			else if (func_338(&Var2))
			{
				func_345(&(Local_585[iVar1 /*33*/]), Var2, 0, 0);
				iLocal_581 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_582, iLocal_583));
			}
		}
	}
}

int func_338(var uParam0)//Position - 0x2ADC4
{
	if (iLocal_180 == 0)
	{
		return 0;
	}
	if (bLocal_574)
	{
		*uParam0 = { GlobalFunc_5726(Local_575, fLocal_578, 6f) };
	}
	else
	{
		*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_579, fLocal_580), 6f) };
	}
	return func_339(uParam0, 0);
}

int func_339(var uParam0, bool bParam1)//Position - 0x2AE1E
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = 15f;
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(*uParam0, 0, &Var0, 14))
	{
		return 0;
	}
	if (bParam1)
	{
		fVar3 = 2.5f;
	}
	else if (iLocal_876 > 27)
	{
		fVar3 = 10f;
	}
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Var0, fVar3))
	{
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_169, 1) > fLocal_172)
	{
		return 0;
	}
	if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Local_199[0 /*3*/], Local_199[1 /*3*/], Local_199.f_7, 0, 1))
	{
		return 0;
	}
	if (bLocal_184)
	{
		if (GlobalFunc_2351(Var0, 2f, 0, 1))
		{
			return 0;
		}
	}
	else if (PED::IS_ANY_PED_NEAR_POINT(Var0, 2f))
	{
		return 0;
	}
	*uParam0 = { Var0 };
	return 1;
}





void func_344(var uParam0)//Position - 0x2AF9A
{
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_2, (iLocal_566 / 4));
		PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_2, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_2, 1);
	}
}

int func_345(var uParam0, struct<3> Param1, int iParam4, bool bParam5)//Position - 0x2AFCD
{
	if (bParam5)
	{
		if (!func_339(&Param1, 0))
		{
			return 0;
		}
	}
	uParam0->f_2 = PED::CREATE_PED(26, iLocal_356, Param1, 0, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		return 0;
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_2);
	GlobalFunc_5724(uParam0->f_2, Param1);
	func_347(uParam0->f_2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2, -2065892691);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_2, 122, 1);
	AUDIO::STOP_PED_SPEAKING(uParam0->f_2, 1);
	AUDIO::DISABLE_PED_PAIN_AUDIO(uParam0->f_2, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_2, "ALIENS");
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_2);
	PED::SET_PED_AS_ENEMY(uParam0->f_2, 1);
	PED::SET_PED_MONEY(uParam0->f_2, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_2, 1);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_2, 0, 0);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_2, 0);
	ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(uParam0->f_2, 0);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_2, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_2, 1, 0);
	ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_2, iLocal_566);
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_2, iLocal_566);
	uParam0->f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_357, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_2, 0f, -5f, 0f), 1, 1, 0);
	if (GlobalFunc_234(uParam0->f_4))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_4, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_4, 1);
	}
	uParam0->f_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_357, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_2, 0f, -5f, 0f), 1, 1, 0);
	if (GlobalFunc_234(uParam0->f_5))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_5, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_5, 1);
	}
	uParam0->f_6 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_357, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_2, 0f, 5f, 0f), 1, 1, 0);
	if (GlobalFunc_234(uParam0->f_6))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_6, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_6, 1);
	}
	uParam0->f_1 = 1;
	*uParam0 = 1;
	uParam0->f_32 = 0;
	uParam0->f_7 = (MISC::GET_GAME_TIMER() + iParam4 * 500);
	uParam0->f_16 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_567, iLocal_568));
	uParam0->f_10 = GlobalFunc_156(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 1);
	uParam0->f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f);
	uParam0->f_14 = (fLocal_856 + (MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_860, fLocal_861) * fLocal_856));
	uParam0->f_15 = 0f;
	if (iLocal_183 == 1)
	{
	}
	TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, sLocal_349, 1000f, -8f, -1, 1, 0, 0, 0, 0);
	iLocal_875++;
	return 1;
}


void func_347(int iParam0)//Position - 0x2B292
{
	var uVar0;
	
	uVar0 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	ENTITY::SET_ENTITY_HEADING(iParam0, uVar0);
}


int func_349(var uParam0, float fParam1)//Position - 0x2B31E
{
	float fVar0;
	struct<3> Var1;
	
	if (!iLocal_180)
	{
		return 0;
	}
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 > fParam1)
	{
		return 0;
	}
	if (func_350(&Var1))
	{
		*uParam0 = { Var1 };
		return 1;
	}
	return 0;
}

int func_350(var uParam0)//Position - 0x2B35E
{
	int iVar0;
	int iVar1;
	struct<3> Var2[9];
	int iVar30;
	
	iVar1 = 0;
	func_352(&Var2);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (iVar1 < Var2.x)
		{
			if (!PED::IS_ANY_PED_NEAR_POINT(Local_896[iVar0 /*3*/], 1.5f))
			{
				func_351(&Var2, iVar1, Local_896[iVar0 /*3*/]);
				iVar1++;
			}
		}
		else
		{
			iVar0 = 9;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
	}
	else
	{
		iVar30 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		*uParam0 = { Var2[iVar30 /*3*/] };
		if (GlobalFunc_100(Var2[iVar30 /*3*/], 0f, 0f, 0f))
		{
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_351(int iParam0, int iParam1, struct<3> Param2)//Position - 0x2B3FB
{
	*(iParam0[iParam1 /*3*/]) = { Param2 };
}

void func_352(var uParam0)//Position - 0x2B40F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_351(uParam0, iVar0, 0f, 0f, 0f);
		iVar0++;
	}
}

int func_353(int iParam0)//Position - 0x2B436
{
	int iVar0;
	
	iVar0 = 0;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		if (Local_585[iVar0 /*33*/] == 0)
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_354(int iParam0)//Position - 0x2B46E
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), *iParam0);
	}
	*iParam0 = func_356(*iParam0);
	iVar0 = func_355(*iParam0);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), *iParam0, iVar0, 1, 1);
	if (*iParam0 == iLocal_190)
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 1, *iParam0);
	}
	else
	{
		WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), *iParam0, 0);
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), *iParam0, 0);
		WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), *iParam0, iVar0);
	}
}

int func_355(int iParam0)//Position - 0x2B4FE
{
	int iVar0;
	
	if (iParam0 == iLocal_187)
	{
		iVar0 = 10;
	}
	else if (iParam0 == iLocal_188)
	{
		iVar0 = 30;
	}
	else if (iParam0 == iLocal_189)
	{
		iVar0 = 10;
	}
	else if (iParam0 == iLocal_190)
	{
		iVar0 = -1;
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

int func_356(int iParam0)//Position - 0x2B542
{
	int iVar0;
	
	if (iParam0 == iLocal_187)
	{
		iVar0 = iLocal_188;
	}
	else if (iParam0 == iLocal_188)
	{
		iVar0 = iLocal_189;
	}
	else if (iParam0 == iLocal_189)
	{
		iVar0 = iLocal_190;
	}
	else
	{
		iVar0 = iLocal_190;
	}
	return iVar0;
}

int func_357(int iParam0)//Position - 0x2B57A
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

void func_358(int iParam0)//Position - 0x2B5B7
{
	switch (*iParam0)
	{
		case 0:
			GlobalFunc_7777(&uLocal_893);
			*iParam0 = 1;
			break;
		
		case 1:
			if (GlobalFunc_7950(&uLocal_893, 5f))
			{
				iLocal_555 = 1;
				iLocal_559 = 1;
				iLocal_870 = 3;
				iLocal_581 = 0;
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_873 != 0 && MISC::GET_GAME_TIMER() > iLocal_873)
			{
				iLocal_873 = 0;
				iLocal_872 = 0;
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_339))
			{
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sLocal_339, "DrugsEffect", ((SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f)) * 0.25f) + 0.25f));
			}
			if (func_357(iLocal_208))
			{
				func_354(&iLocal_208);
			}
			func_337();
			func_331();
			if (iLocal_876 >= (iLocal_877 - 5))
			{
				iLocal_555 = 0;
				*iParam0 = 4;
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_159 = 3;
			break;
	}
}











void func_369(int iParam0)//Position - 0x2B7F4
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			MISC::SET_TIME_SCALE(fLocal_179);
			AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("BARRY_01_SLOWMO");
			AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("BARRY_01_SLOWMO");
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
			AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 1);
			if (!GlobalFunc_5731(&uLocal_209))
			{
				func_389();
			}
			*iParam0 = 1;
			func_388();
			GlobalFunc_4923(&Local_95, 0, 0);
			func_376(&Local_95, 1, 1, 0);
			func_375();
			func_374(iLocal_208);
			AUDIO::SET_AMBIENT_ZONE_STATE(sLocal_554, 1, 0);
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			AUDIO::START_AUDIO_SCENE(sLocal_339);
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			iLocal_875 = 0;
			iLocal_876 = 0;
			iLocal_562 = 0;
			iLocal_557 = 0;
			bLocal_558 = false;
			iLocal_559 = 0;
			iLocal_560 = -1;
			iLocal_870 = 3;
			fLocal_579 = 40f;
			fLocal_580 = 60f;
			if (func_353(&iVar0))
			{
				func_345(&(Local_585[iVar0 /*33*/]), 212.9178f, -920.5014f, 30.6922f, 0, 0);
				Local_585[iVar0 /*33*/].f_14 = 15f;
				func_344(&(Local_585[iVar0 /*33*/]));
			}
			if (func_353(&iVar0))
			{
				func_345(&(Local_585[iVar0 /*33*/]), 213.2008f, -917.9012f, 30.6923f, 2, 0);
				Local_585[iVar0 /*33*/].f_14 = 15f;
				func_344(&(Local_585[iVar0 /*33*/]));
			}
			if (func_353(&iVar0))
			{
				func_345(&(Local_585[iVar0 /*33*/]), 217.8108f, -916.817f, 30.6923f, 4, 0);
				Local_585[iVar0 /*33*/].f_14 = 15f;
				func_344(&(Local_585[iVar0 /*33*/]));
			}
			if (func_353(&iVar0))
			{
				func_345(&(Local_585[iVar0 /*33*/]), 211.0789f, -912.207f, 30.6923f, 8, 0);
				Local_585[iVar0 /*33*/].f_14 = 15f;
				func_344(&(Local_585[iVar0 /*33*/]));
			}
			GlobalFunc_79(500, 0);
			GlobalFunc_164("PRIME2", 7500, 1);
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
			GlobalFunc_7777(&uLocal_889);
			fLocal_892 = 5f;
			*iParam0 = 2;
			break;
		
		case 2:
			func_372();
			func_370(Local_885, fLocal_888, 5, 1);
			if (iLocal_873 != 0 && MISC::GET_GAME_TIMER() > iLocal_873)
			{
				iLocal_873 = 0;
				iLocal_872 = 0;
			}
			if (iLocal_876 >= 10)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_159 = 2;
			break;
	}
}

void func_370(struct<3> Param0, float fParam3, int iParam4, bool bParam5)//Position - 0x2BA39
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_878 < iParam4)
	{
		if (GlobalFunc_7950(&uLocal_889, fLocal_892))
		{
			if (func_353(&iVar0))
			{
				if (func_371(Param0, fParam3, &Var1))
				{
					if (func_345(&(Local_585[iVar0 /*33*/]), Var1, 0, 0))
					{
						if (bParam5)
						{
							func_344(&(Local_585[iVar0 /*33*/]));
						}
					}
					GlobalFunc_7777(&uLocal_889);
					fLocal_892 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
				}
				else
				{
					GlobalFunc_7777(&uLocal_889);
					fLocal_892 = 1f;
				}
			}
		}
	}
}

int func_371(struct<3> Param0, float fParam3, var uParam4)//Position - 0x2BABB
{
	if (iLocal_180 == 0)
	{
		return 0;
	}
	*uParam4 = { GlobalFunc_5726(Param0, fParam3, 6f) };
	return func_339(uParam4, 1);
}

void func_372()//Position - 0x2BAE3
{
	struct<2> Var0;
	
	if (MISC::GET_GAME_TIMER() < iLocal_360)
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (bLocal_359)
	{
		return;
	}
	StringCopy(&Var0, "BARY1_1SHOT_", 16);
	StringIntConCat(&Var0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3) + 1, 16);
	GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (GlobalFunc_10630(&uLocal_389, "BARY1AU", "BARY1_1SHOT", &Var0, 7, 1, 0))
	{
		bLocal_359 = true;
	}
}


void func_374(int iParam0)//Position - 0x2BBB7
{
	int iVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, 10, 1, 1);
		}
		else if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1) || iVar0 != iParam0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 1);
		}
		WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, 10000);
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 1, iParam0);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::REFILL_AMMO_INSTANTLY(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	}
}

void func_375()//Position - 0x2BC53
{
	iLocal_35 = MISC::GET_GAME_TIMER();
}

void func_376(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2BC61
{
	GlobalFunc_7101(uParam0, iParam1);
	GlobalFunc_8534(uParam0, bParam2);
	GlobalFunc_7100(uParam0, bParam3);
}












void func_388()//Position - 0x2BF9F
{
	GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	iLocal_360 = MISC::GET_GAME_TIMER() + 1500;
	iLocal_362 = (iLocal_360 + MISC::GET_RANDOM_INT_IN_RANGE(20000, 40000));
	iLocal_361 = (iLocal_360 + MISC::GET_RANDOM_INT_IN_RANGE(12000, 18000));
	iLocal_363 = MISC::GET_GAME_TIMER();
	bLocal_359 = false;
}

void func_389()//Position - 0x2BFF1
{
	func_395(&uLocal_209, 0, iLocal_190);
	GlobalFunc_5397(&uLocal_209, 1, 4, "SCRIPT\BARRY_01_ALIEN_A", 0);
	GlobalFunc_5397(&uLocal_209, 2, 4, "SCRIPT\BARRY_01_ALIEN_B", 0);
	GlobalFunc_5397(&uLocal_209, 3, 4, "SCRIPT\BARRY_01_ALIEN_C", 0);
	GlobalFunc_5730(&uLocal_209, 4, iLocal_356);
	GlobalFunc_5730(&uLocal_209, 5, iLocal_357);
	func_392(&uLocal_209, 6, "BARY1", 0);
	GlobalFunc_5729(&uLocal_209, 7);
	GlobalFunc_5397(&uLocal_209, 8, 2, sLocal_337, 0);
	GlobalFunc_5730(&uLocal_209, 9, iLocal_358);
}



int func_392(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x2C0DF
{
	if (MISC::IS_BIT_SET(uParam0->f_113, iParam1) || MISC::IS_BIT_SET(uParam0->f_114, iParam1))
	{
		return 1;
	}
	GlobalFunc_1481(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 8;
	(uParam0[iParam1 /*7*/])->f_3 = sParam2;
	(uParam0[iParam1 /*7*/])->f_5 = iParam3;
	return 1;
}



int func_395(var uParam0, int iParam1, int iParam2)//Position - 0x2C255
{
	if (MISC::IS_BIT_SET(uParam0->f_113, iParam1) || MISC::IS_BIT_SET(uParam0->f_114, iParam1))
	{
		return 1;
	}
	GlobalFunc_1481(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 12;
	(uParam0[iParam1 /*7*/])->f_2 = iParam2;
	return 1;
}




void func_399(int iParam0)//Position - 0x2C6B0
{
	int iVar0;
	char* sVar1;
	
	switch (*iParam0)
	{
		case 0:
			func_36("bar_1_rcm_p2", 0);
			iLocal_161 = 1;
			func_375();
			iLocal_355 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7963(PLAYER::PLAYER_PED_ID());
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_327, 1, 0, 0, 0);
			}
			if (GlobalFunc_7961(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_95.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[0], sLocal_327, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[0], sLocal_327, 2, GlobalFunc_4946(49), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[0], sLocal_329, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[0], sLocal_329, 2, joaat("prop_protest_table_01"), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[1], sLocal_328, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[1], sLocal_328, 2, joaat("prop_chair_08"), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[2], sLocal_331, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[2], sLocal_331, 2, joaat("p_a4_sheets_s"), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[3]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[3], sLocal_332, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[3], sLocal_332, 2, joaat("p_cs_lighter_01"), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[4]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[4], sLocal_333, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[4], sLocal_333, 2, joaat("p_cs_joint_01"), 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_208, -1, 0, 0);
				iLocal_883 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), iLocal_208, 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_883, sLocal_330, 0, 0, 0);
				GlobalFunc_8954();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
				iLocal_355 = 0;
				SYSTEM::WAIT(0);
				if (GlobalFunc_115(Local_95.f_41[4]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_95.f_41[4]))
					{
						ENTITY::DETACH_ENTITY(Local_95.f_41[4], 1, 1);
					}
				}
				GlobalFunc_5733(0, 0, 1, 0);
				func_404();
				func_271(Local_173, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1);
				GlobalFunc_5732(&uLocal_164, 0);
				func_16();
				iLocal_882 = 0;
				func_269(&(Local_95.f_41[5]), iLocal_358);
				GlobalFunc_79(500, 0);
				func_389();
				iLocal_161 = 2;
			}
			break;
		
		case 2:
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_46(1, 0, 1, 1);
				func_374(iLocal_208);
				iLocal_161 = 4;
			}
			else
			{
				iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
				if (bLocal_36)
				{
					HUD::SET_TEXT_SCALE(0.5f, 0.5f);
					GlobalFunc_2354(0.1f, 0.1f, "NUMBER", CUTSCENE::GET_CUTSCENE_TIME(), 0);
				}
				if (GlobalFunc_5731(&uLocal_209))
				{
					if (!iLocal_882)
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(1);
						iLocal_882 = 1;
					}
					if (iVar0 < 68000)
					{
						if (GlobalFunc_4926(1000))
						{
							iLocal_161 = 3;
							return;
						}
					}
				}
				if (!iLocal_355)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					iLocal_355 = 1;
				}
				if (GlobalFunc_115(iLocal_883))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(iLocal_883);
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_330, 0))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_883, PLAYER::PLAYER_PED_ID());
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_331, 0))
				{
					if (GlobalFunc_115(Local_95.f_41[2]))
					{
						OBJECT::DELETE_OBJECT(&(Local_95.f_41[2]));
					}
				}
				if (iLocal_353 == 0)
				{
					if (iVar0 >= 58500)
					{
						iLocal_353 = 1;
						sVar1 = sLocal_334;
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							sVar1 = sLocal_335;
						}
						GRAPHICS::ANIMPOSTFX_PLAY(sVar1, 0, 1);
						AUDIO::TRIGGER_MUSIC_EVENT("RC18A_START");
					}
				}
				if (iLocal_354 == 0)
				{
					if (iVar0 >= 70500)
					{
						iLocal_354 = 1;
						AUDIO::TRIGGER_MUSIC_EVENT("RC18A_INCREASE");
					}
				}
			}
			break;
		
		case 3:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			GlobalFunc_2350(250, 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_267(1, 1, 1);
			}
			func_46(1, 0, 1, 1);
			if (iLocal_353 == 0)
			{
				iLocal_353 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("RC18A_CS_SKIP_BEFORE");
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_335))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_335, 0, 1);
				}
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RC18A_CS_SKIP_AFTER");
				iLocal_354 = 1;
			}
			if (GlobalFunc_115(iLocal_883))
			{
				GlobalFunc_2346(&iLocal_883);
			}
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_173);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 327.2303f);
			func_374(iLocal_208);
			SYSTEM::WAIT(500);
			iLocal_161 = 4;
			break;
		
		case 4:
			iLocal_161 = 0;
			iLocal_159 = 1;
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (iLocal_353 == 0)
				{
					iLocal_353 = 1;
					AUDIO::TRIGGER_MUSIC_EVENT("RC18A_CS_SKIP_BEFORE");
				}
				else if (iLocal_354 == 0)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RC18A_CS_SKIP_AFTER");
					iLocal_354 = 1;
				}
			}
			break;
	}
}





void func_404()//Position - 0x2CD04
{
	if (GlobalFunc_7091(GlobalFunc_625(), 1))
	{
		if (GlobalFunc_115(GlobalFunc_2251()))
		{
			Local_924 = { ENTITY::GET_ENTITY_COORDS(GlobalFunc_2251(), 1) };
			fLocal_927 = ENTITY::GET_ENTITY_HEADING(GlobalFunc_2251());
		}
	}
	if (!GlobalFunc_7091(GlobalFunc_625(), 1) || GlobalFunc_713(GlobalFunc_2251(), Local_173, 1) < 10f)
	{
		Local_924 = { Local_165 };
		fLocal_927 = fLocal_168;
	}
	GlobalFunc_10063(Local_191[0 /*3*/], Local_191[1 /*3*/], Local_191.f_7, Local_165, fLocal_168, GlobalFunc_625(), 1, 1, 1, 0, 0);
	if (GlobalFunc_7091(GlobalFunc_625(), 1))
	{
		GlobalFunc_9754(GlobalFunc_2251(), Local_924, fLocal_927, 24, 0);
	}
}

















void func_421(int iParam0)//Position - 0x2E6B5
{
	var uVar0;
	
	GlobalFunc_8535();
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_423();
	switch (*iParam0)
	{
		case 0:
			func_389();
			GlobalFunc_2355(sLocal_338, 0);
			*iParam0 = 1;
			if (GlobalFunc_115(Local_95.f_28[0]))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_95.f_28[0], 0f, 0f, 0.8f, 1, -1, 3000, 2000, 0);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0f);
				}
				else
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_95.f_28[0], 0.5f, 0f, 0.8f, 1, -1, 3000, 2000, 0);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.04f);
				}
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.43f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.02f);
				CAM::SET_GAMEPLAY_HINT_FOV(30f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			}
			break;
		
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_338) && !GlobalFunc_111())
			{
				uVar0 = 16;
				GlobalFunc_173(&uVar0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				GlobalFunc_173(&uVar0, 5, Local_95.f_28[0], "BARRY", 0, 1);
				if (GlobalFunc_10618(&uVar0, "BARY1AU", "BARY1_LEADIN", 7, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(Local_95.f_28[0], sLocal_338, "leadin", 8f, -4f, -1, 2, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_95.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
					*iParam0 = 2;
					iLocal_156 = MISC::GET_GAME_TIMER() + 30000;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_115(Local_95.f_28[0]))
			{
				if (!GlobalFunc_111() || MISC::GET_GAME_TIMER() > iLocal_156)
				{
					*iParam0 = 4;
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			iLocal_159 = 0;
			*iParam0 = 0;
			break;
	}
}


void func_423()//Position - 0x2E8CB
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 189.1399f, -955.8049f, 29.09192f, 187.5274f, -955.0106f, 31.09192f, 2.5f, 0, 1, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				if (GlobalFunc_115(Local_95.f_28[0]))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], 0);
				}
			}
		}
	}
}



void func_426()//Position - 0x2E9AF
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_878 = 0;
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		if (Local_585[iVar0 /*33*/])
		{
			func_428(&(Local_585[iVar0 /*33*/]));
			iLocal_878++;
		}
		iVar0++;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_562)
	{
		iLocal_560 = -1;
	}
	else if (iLocal_560 == -1)
	{
		func_427();
	}
}

void func_427()//Position - 0x2EA0B
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	fVar1 = -1f;
	if (iLocal_559 == 0)
	{
		iLocal_560 = -1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		if (func_4(&(Local_585[iVar0 /*33*/])) && Local_585[iVar0 /*33*/].f_1 == 9)
		{
			if (fVar1 == -1f || (Local_585[iVar0 /*33*/].f_10 < fVar1 && Local_585[iVar0 /*33*/].f_10 != -1f))
			{
				iLocal_560 = iVar0;
				Local_585[iVar0 /*33*/].f_10 = fVar1;
			}
		}
		iVar0++;
	}
}

void func_428(var uParam0)//Position - 0x2EA93
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		func_54(uParam0, 1);
		return;
	}
	if (func_459(uParam0))
	{
		if (iLocal_560 == uParam0->f_30)
		{
			if (iLocal_183 == 1)
			{
			}
			iLocal_560 = -1;
		}
	}
	func_458(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_2, 31086, Local_863) };
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_4, Var0, 0, 0, 1);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_4, 0, 0);
	}
	if (func_457(uParam0) && bLocal_558 == 1)
	{
		if (iLocal_183 == 1)
		{
		}
		TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, sLocal_348, 8f, -8f, -1, 1, 0, 0, 0, 0);
		func_57(uParam0);
		GlobalFunc_2348(&(uParam0->f_17));
		uParam0->f_1 = 13;
		uParam0->f_26 = 0;
	}
	if (!iLocal_180)
	{
		if (uParam0->f_3 != 0)
		{
			GlobalFunc_846(&(uParam0->f_3));
		}
	}
	else if (func_456(uParam0) && uParam0->f_3 == 0)
	{
		uParam0->f_3 = GlobalFunc_4955(uParam0->f_2, 1, 0, 5);
	}
	switch (uParam0->f_1)
	{
		case 1:
			if (MISC::GET_GAME_TIMER() > uParam0->f_7)
			{
				uParam0->f_31 = 0;
				uParam0->f_26 = 0;
				uParam0->f_1 = 2;
				uParam0->f_15 = 0f;
				ENTITY::SET_ENTITY_ALPHA(uParam0->f_2, SYSTEM::FLOOR(uParam0->f_15), 0);
			}
			break;
		
		case 2:
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_2, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, 1);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_2, 0);
			func_347(uParam0->f_2);
			TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, sLocal_349, 8f, -8f, -1, 1, 0, 0, 0, 0);
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_alien_teleport", uParam0->f_2, 0f, 0f, 0f, 0f, 0f, 0f, fLocal_572, 0, 0, 0);
			uParam0->f_7 = MISC::GET_GAME_TIMER() + 450;
			uParam0->f_1 = 3;
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "TELEPORT ST");
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SPAWN", uParam0->f_2, "BARRY_01_SOUNDSET", 0, 0);
			GlobalFunc_846(&(uParam0->f_3));
			break;
		
		case 3:
			uParam0->f_15 = (uParam0->f_15 + (MISC::GET_FRAME_TIME() * 512f));
			if (uParam0->f_15 >= 255f)
			{
				uParam0->f_15 = 255f;
			}
			if (MISC::GET_GAME_TIMER() > uParam0->f_7)
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_2, 0);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_2, 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_2, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_2, 1);
				uParam0->f_15 = 255f;
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2, -2065892691);
				PED::SET_PED_NAME_DEBUG(uParam0->f_2, "ACTIVE");
				uParam0->f_1 = 9;
			}
			if (uParam0->f_15 < 255f)
			{
				func_73(uParam0->f_2, SYSTEM::FLOOR(uParam0->f_15), &iLocal_185);
			}
			else
			{
				ENTITY::RESET_ENTITY_ALPHA(uParam0->f_2);
			}
			break;
		
		case 4:
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_2, 1);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_2, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_2, 0);
			TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, sLocal_349, 8f, -8f, -1, 1, 0, 0, 0, 0);
			func_57(uParam0);
			GlobalFunc_846(&(uParam0->f_3));
			GlobalFunc_2348(&(uParam0->f_17));
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_alien_teleport", ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1), ENTITY::GET_ENTITY_ROTATION(uParam0->f_2, 2), fLocal_572, 0, 0, 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SPAWN", uParam0->f_2, "BARRY_01_SOUNDSET", 0, 0);
			uParam0->f_7 = MISC::GET_GAME_TIMER() + 450;
			uParam0->f_1 = 5;
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "TPORT OUT");
			break;
		
		case 5:
			uParam0->f_15 = (IntToFloat((uParam0->f_7 - MISC::GET_GAME_TIMER()) * 255) / SYSTEM::TO_FLOAT(450));
			if (uParam0->f_15 < 0f)
			{
				uParam0->f_15 = 0f;
			}
			func_73(uParam0->f_2, SYSTEM::FLOOR(uParam0->f_15), &iLocal_185);
			if (MISC::GET_GAME_TIMER() > uParam0->f_7 || uParam0->f_15 == 0f)
			{
				PED::SET_PED_NAME_DEBUG(uParam0->f_2, "RELOCATE");
				uParam0->f_1 = 6;
			}
			break;
		
		case 6:
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_2, 0);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_2, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_2, 0);
			if (iLocal_556 == 1)
			{
				func_66(uParam0);
				*uParam0 = 0;
				return;
			}
			if (func_338(&Var0))
			{
				GlobalFunc_5724(uParam0->f_2, Var0);
				uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1250, 2000));
				uParam0->f_14 = (fLocal_856 + (MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_860, fLocal_861) * fLocal_856));
				if (iLocal_183 == 1)
				{
				}
				uParam0->f_1 = 1;
			}
			break;
		
		case 9:
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "ACTIVE");
			if (!uParam0->f_32)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, 1227113341) != 1)
				{
					TASK::TASK_GO_TO_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1073741824, 1073741824, 0);
				}
			}
			if (!func_9())
			{
				return;
			}
			if (func_454(uParam0))
			{
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_2, 3f);
				if (uParam0->f_10 < (fLocal_569 + 8f))
				{
					uParam0->f_1 = 10;
					if (iLocal_183 == 1)
					{
					}
					iLocal_557 = 1;
				}
			}
			else if (uParam0->f_10 < (uParam0->f_14 + 12f))
			{
				if (iLocal_183 == 1)
				{
				}
				uParam0->f_1 = 15;
			}
			break;
		
		case 10:
			func_450(uParam0);
			break;
		
		case 11:
			func_446(uParam0);
			break;
		
		case 12:
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "SUMMON FAIL");
			if (iLocal_560 == uParam0->f_30)
			{
				iLocal_560 = -1;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_345, 3))
			{
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_7)
			{
				if (iLocal_183 == 1)
				{
				}
				if (!PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_208, 0))
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_208) > 0)
					{
						if (WEAPON::GET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iLocal_208, &iVar4))
						{
							if (iVar4 == 0)
							{
								WEAPON::REFILL_AMMO_INSTANTLY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
				}
				bLocal_558 = false;
				uParam0->f_1 = 4;
				return;
			}
			break;
		
		case 13:
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "WATCH");
			if (bLocal_558 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, -2017877118) != 1)
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, sLocal_348, 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
				return;
			}
			uParam0->f_1 = 14;
			uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE((iLocal_561 - 1500), (iLocal_561 - 500)));
			break;
		
		case 14:
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "WATCH END");
			if (MISC::GET_GAME_TIMER() > uParam0->f_7 && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_345, 3))
			{
				uParam0->f_1 = 9;
			}
			break;
		
		case 15:
			func_57(uParam0);
			PED::SET_PED_RESET_FLAG(uParam0->f_2, 63, 1);
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "C-RUSH");
			if (!uParam0->f_32)
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_2, 1.15f);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_2, 3f);
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, 1227113341) != 1)
				{
					TASK::TASK_GO_TO_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1073741824, 1073741824, 0);
				}
			}
			if (uParam0->f_10 < uParam0->f_14 && func_9())
			{
				GlobalFunc_5117(uParam0->f_2, "ALIEN_HOSTILE", "ALIENS", 10);
				uParam0->f_1 = 16;
				uParam0->f_26 = 0;
			}
			else if (bLocal_558)
			{
				uParam0->f_1 = 13;
			}
			break;
		
		case 17:
			ENTITY::SET_ENTITY_COORDS(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 1, 0, 0, 1);
			PED::SET_PED_NAME_DEBUG(uParam0->f_2, "CHARGE");
			if (MISC::GET_GAME_TIMER() > uParam0->f_7)
			{
				if (func_9())
				{
					GlobalFunc_2347(&(uParam0->f_21));
					GlobalFunc_2347(&(uParam0->f_22));
					GlobalFunc_2347(&(uParam0->f_23));
					GlobalFunc_2347(&(uParam0->f_24));
					if (iLocal_183 == 1)
					{
					}
					uParam0->f_1 = 18;
				}
			}
			break;
		
		case 16:
			func_443(uParam0);
			break;
		
		case 18:
			if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_2))
			{
				PED::SET_PED_NAME_DEBUG(uParam0->f_2, "BEAM ST");
				func_347(uParam0->f_2);
				Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
				func_440(uParam0->f_4, Var0);
				uParam0->f_7 = (MISC::GET_GAME_TIMER() + iLocal_855);
				GlobalFunc_2347(&(uParam0->f_21));
				GlobalFunc_2347(&(uParam0->f_22));
				GlobalFunc_2347(&(uParam0->f_23));
				GlobalFunc_2347(&(uParam0->f_24));
				uParam0->f_12 = 0f;
				uParam0->f_22 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_alien_impact", uParam0->f_4, 0f, 0f, 0f, 0f, 0f, 0f, (fLocal_570 / 3f), 0, 0, 0);
				uParam0->f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_alien_beam", uParam0->f_4, 0f, 0f, 0f, Local_866, fLocal_857, 0, 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(uParam0->f_23, uParam0->f_12);
				TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, "MIND_CONTROL_B_Loop", 4f, -8f, -1, 1, 0, 0, 0, 0);
				uParam0->f_1 = 19;
			}
			break;
		
		case 19:
			func_431(uParam0);
			break;
		
		case 20:
			uParam0->f_12 = 0f;
			if (GlobalFunc_115(uParam0->f_2))
			{
				if (((PED::IS_PED_FALLING(uParam0->f_2) || TASK::IS_PED_GETTING_UP(uParam0->f_2)) || PED::IS_PED_RAGDOLL(uParam0->f_2)) || PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_2))
				{
					return;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, -2017877118) != 1)
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, "MIND_CONTROL_B_LOOP", 2f, -8f, -1, 1, 0, 0, 0, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, -2017877118) == 1)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_4, ENTITY::GET_ENTITY_HEADING(uParam0->f_2));
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_22))
				{
					uParam0->f_22 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_alien_charging", uParam0->f_4, 0f, 0f, 0f, 0f, 0f, 0f, fLocal_571, 0, 0, 0);
				}
				if (iLocal_183 == 1)
				{
				}
				uParam0->f_1 = 19;
			}
			break;
		
		case 7:
			if (func_429(uParam0) || MISC::GET_GAME_TIMER() > uParam0->f_7)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
				{
					Var0.f_2 = uVar3;
				}
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_alien_disintegrate", uParam0->f_2, 0f, 0f, 0f, 0f, 0f, 0f, fLocal_573, 0, 0, 0);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "DESPAWN", Var0, "BARRY_01_SOUNDSET", 0, 0, 0);
				if (iLocal_183 == 1)
				{
				}
				uParam0->f_1 = 8;
				PED::SET_PED_NAME_DEBUG(uParam0->f_2, "DEAD");
				uParam0->f_7 = MISC::GET_GAME_TIMER() + 1000;
			}
			break;
		
		case 8:
			uParam0->f_15 = (IntToFloat((uParam0->f_7 - MISC::GET_GAME_TIMER()) * 255) / SYSTEM::TO_FLOAT(1000));
			if (uParam0->f_15 < 0f)
			{
				uParam0->f_15 = 0f;
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_2))
			{
				func_73(uParam0->f_2, SYSTEM::FLOOR(uParam0->f_15), &iLocal_185);
			}
			else
			{
				ENTITY::RESET_ENTITY_ALPHA(uParam0->f_2);
			}
			if (MISC::GET_GAME_TIMER() > uParam0->f_7 || uParam0->f_15 <= 0f)
			{
				if (iLocal_183 == 1)
				{
				}
				ENTITY::RESET_ENTITY_ALPHA(uParam0->f_2);
				func_66(uParam0);
				*uParam0 = 0;
				return;
			}
			break;
	}
}

int func_429(var uParam0)//Position - 0x2F4F3
{
	if (uParam0->f_1 != 7)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2))
	{
		return 0;
	}
	if (!GlobalFunc_537(ENTITY::GET_ENTITY_VELOCITY(uParam0->f_2), 0f, 0f, 0f, 0.125f))
	{
		if (iLocal_183 == 1)
		{
		}
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(uParam0->f_2) || PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}


void func_431(var uParam0)//Position - 0x2F5A3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	var uVar14;
	var uVar17;
	
	PED::SET_PED_NAME_DEBUG(uParam0->f_2, "BEAM");
	if (MISC::GET_GAME_TIMER() >= uParam0->f_7)
	{
		GlobalFunc_2348(&(uParam0->f_17));
		func_57(uParam0);
		if (iLocal_183 == 1)
		{
		}
		uParam0->f_1 = 4;
		return;
	}
	if (bLocal_558 == 1)
	{
		GlobalFunc_2348(&(uParam0->f_17));
		func_57(uParam0);
		uParam0->f_1 = 13;
		return;
	}
	if (MISC::GET_FRAME_COUNT() >= uParam0->f_9 + 8)
	{
		uParam0->f_12 = (uParam0->f_12 + fLocal_859);
		if (uParam0->f_12 > fLocal_858)
		{
			uParam0->f_12 = fLocal_858;
		}
	}
	if (GlobalFunc_115(uParam0->f_2))
	{
		if (((PED::IS_PED_FALLING(uParam0->f_2) || TASK::IS_PED_GETTING_UP(uParam0->f_2)) || PED::IS_PED_RAGDOLL(uParam0->f_2)) || PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_2))
		{
			func_57(uParam0);
			GlobalFunc_2348(&(uParam0->f_17));
			uParam0->f_12 = 0f;
			uParam0->f_1 = 20;
		}
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, -2017877118) != 1)
	{
		uParam0->f_12 = 0f;
		if (iLocal_183 == 1)
		{
		}
		uParam0->f_26 = 0;
		uParam0->f_1 = 20;
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 <= 0f)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_23))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(uParam0->f_23, uParam0->f_12);
		}
		GlobalFunc_2348(&(uParam0->f_17));
		GlobalFunc_2347(&(uParam0->f_24));
		uParam0->f_26 = 0;
		return;
	}
	else
	{
		func_435(uParam0);
	}
	Var5 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1) };
	Var8 = { Var5 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_4) * FtoV((uParam0->f_12 + 3f)) };
	if (uParam0->f_26 == 0)
	{
		uParam0->f_26 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var5, Var8, 511, uParam0->f_2, 7);
	}
	else
	{
		iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_26, &iVar0, &Var11, &uVar14, &uVar17);
		if (iVar1 == 0)
		{
			uParam0->f_26 = 0;
		}
		else if (iVar1 == 2)
		{
			if (iVar0 > 0)
			{
				uParam0->f_9 = MISC::GET_FRAME_COUNT();
				ENTITY::SET_ENTITY_RENDER_SCORCHED(PLAYER::PLAYER_PED_ID(), 1);
				uParam0->f_27 = { MISC::_0x21C235BC64831E5A(Var11, Var5, Var8, 0) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_5, uParam0->f_27, 1, 0, 0, 1);
				uParam0->f_12 = GlobalFunc_156(uParam0->f_5, uParam0->f_4, 1);
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_27, Var2, 1) <= 0.7f)
				{
					fLocal_178 = 0f;
					if (MISC::ABSF((uParam0->f_27.f_2 - Var2.f_2)) < 1f)
					{
						if ((MISC::GET_FRAME_COUNT() % 20) == 0)
						{
							MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var5, Var8, 0, 1, joaat("weapon_pistol"), 0, 0, 1, -1082130432);
						}
						if (iLocal_850 == 1)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Vector(fLocal_862, fLocal_862, fLocal_862) * ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_4), 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
						}
						if (iLocal_851 == 0)
						{
							if (PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) > 0)
							{
								GlobalFunc_159("BAR1_MIND_HLP", -1);
								iLocal_851 = 1;
							}
						}
						if (MISC::GET_GAME_TIMER() > uParam0->f_8)
						{
							func_433();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), iVar0, 0.657f, 0.566f, 126.36f, 0.07f, 1, 0f, "cs_trev1_blood");
									break;
								
								case 1:
									PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), iVar0, 0.582f, 0.383f, 111.36f, 0.05f, 3, 0f, "cs_trev1_blood");
									break;
								
								case 2:
									PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), iVar0, 0.709f, 0.396f, 126.36f, 0f, 3, 0f, "cs_trev1_blood");
									break;
								
								default:
									PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), iVar0, 0.582f, 0.383f, 200.36f, 0.1f, 2, 0f, "cs_trev1_blood");
									break;
							}
							if ((ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - iLocal_852) <= 100)
							{
								func_61();
								func_53(1);
								func_432(Var5, Var8, 1);
								return;
							}
							else
							{
								PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_852, 0);
							}
							uParam0->f_8 = (MISC::GET_GAME_TIMER() + SYSTEM::ROUND((IntToFloat(iLocal_853) * 1.25f)));
							PAD::SET_PAD_SHAKE(0, (iLocal_853 / 2), 255);
							PAD::SET_PAD_SHAKE(0, (iLocal_853 / 2), 255);
						}
					}
				}
			}
			uParam0->f_26 = 0;
		}
	}
	if (GlobalFunc_115(uParam0->f_5))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1) + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_4) * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1, 0, 0, 1);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_23))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(uParam0->f_23, uParam0->f_12);
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_24))
	{
		uParam0->f_24 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_alien_impact", uParam0->f_5, 0f, 0f, 0f, 0f, 0f, 0f, fLocal_570, 0, 0, 0);
	}
}

void func_432(struct<3> Param0, struct<3> Param3, int iParam6)//Position - 0x2F9FC
{
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 0f);
	if (!GlobalFunc_105(Param0) && !GlobalFunc_105(Param3))
	{
	}
	iLocal_162 = func_15(iLocal_208, 0);
	GlobalFunc_129(&iLocal_162, 0);
	if (iParam6 == 1)
	{
		PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 100000, 1);
		PED::EXPLODE_PED_HEAD(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
	}
}

void func_433()//Position - 0x2FA57
{
	if (MISC::GET_GAME_TIMER() < iLocal_363)
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (GlobalFunc_10618(&uLocal_389, "BARY1AU", "BARY1_DAMAGE", 8, 1, 1, 0))
	{
		iLocal_363 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
	}
}


void func_435(var uParam0)//Position - 0x2FAC8
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	Var3 = { GlobalFunc_590(CAM::GET_FINAL_RENDERED_CAM_ROT(2)) };
	Var6 = { Var0 + Var3 * FtoV(CAM::GET_FINAL_RENDERED_CAM_NEAR_CLIP()) };
	fVar13 = (fLocal_570 * 1.25f);
	if (func_438(&Var9, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1), Var3, Var6))
	{
		if (CAM::IS_SPHERE_VISIBLE(Var9, 0.5f))
		{
			iVar14 = GlobalFunc_5735(Var3, Var0, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1));
			iVar15 = GlobalFunc_5735(Var3, Var0, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1));
			if (iVar14 > 0 && iVar15 < 0)
			{
				Var9 = { Var9 - ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_4) * Vector(fLocal_869, fLocal_869, fLocal_869) };
			}
			else if (iVar14 < 0 && iVar15 > 0)
			{
				Var9 = { Var9 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_4) * FtoV((fLocal_869 * 4.5f)) };
			}
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_25))
			{
				uParam0->f_25 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_alien_impact", Var9, 0f, 0f, 0f, fVar13, 0, 0, 0, 0);
			}
			fVar12 = GlobalFunc_713(uParam0->f_4, Var9, 1);
			if ((uParam0->f_12 >= fVar12 && iVar14 > 0) && iVar15 < 0)
			{
				uParam0->f_12 = fVar12;
			}
		}
		else
		{
			GlobalFunc_2347(&(uParam0->f_25));
		}
	}
	else
	{
		GlobalFunc_2347(&(uParam0->f_25));
	}
}



int func_438(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10)//Position - 0x2FC7B
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { Param4 - Param1 };
	Var3 = { Param1 - Param10 };
	fVar6 = GlobalFunc_168(Param7, Var0);
	fVar7 = -func_437(Param7, Var3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return 0;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { Param1 + Vector(fVar8, fVar8, fVar8) * Var0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return 0;
	}
	return 1;
}


void func_440(int iParam0, struct<3> Param1)//Position - 0x2FD28
{
	float fVar0;
	float fVar1;
	
	GlobalFunc_5395(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, &fVar0, &fVar1, 1);
	ENTITY::SET_ENTITY_ROTATION(iParam0, fVar0, 0f, fVar1, 2, 1);
}



void func_443(var uParam0)//Position - 0x2FE19
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	
	Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1) };
	if (!uParam0->f_32)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, 1227113341) != 1)
		{
			TASK::TASK_GO_TO_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1073741824, 1073741824, 0);
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, -982327190) != 1)
	{
		TASK::TASK_STAND_STILL(uParam0->f_2, -1);
		uParam0->f_7 = (MISC::GET_GAME_TIMER() + iLocal_854 * 2);
	}
	if (!func_9())
	{
		return;
	}
	if (uParam0->f_26 == 0)
	{
		Var6 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
		uParam0->f_26 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var3, Var6, 511, PLAYER::PLAYER_PED_ID(), 7);
		if (MISC::GET_GAME_TIMER() > uParam0->f_7 && uParam0->f_32)
		{
			GlobalFunc_2348(&(uParam0->f_17));
			uParam0->f_17 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_17, "MIND_CONTROL", uParam0->f_2, "BARRY_01_SOUNDSET", 0, 0);
			uParam0->f_1 = 17;
		}
	}
	else
	{
		iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_26, &iVar0, &Var6, &uVar9, &uVar12);
		if (iVar1 == 2)
		{
			if (iVar0 == 0 && func_9())
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_337, "MIND_CONTROL_B_Enter", 8f, -8f, -1, 2, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_2, uVar2);
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_22))
				{
					uParam0->f_22 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_alien_charging", uParam0->f_4, 0f, 0f, 0f, 0f, 0f, 0f, fLocal_571, 0, 0, 0);
				}
				ENTITY::SET_ENTITY_COORDS(uParam0->f_5, Var3, 1, 0, 0, 1);
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_24))
				{
					uParam0->f_24 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_alien_impact", uParam0->f_5, 0f, 0f, 0f, 0f, 0f, 0f, fLocal_570, 0, 0, 0);
				}
				uParam0->f_1 = 17;
				if (iLocal_183 == 1)
				{
				}
				uParam0->f_7 = (MISC::GET_GAME_TIMER() + iLocal_854);
				GlobalFunc_2348(&(uParam0->f_17));
				uParam0->f_17 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_17, "MIND_CONTROL", uParam0->f_2, "BARRY_01_SOUNDSET", 0, 0);
			}
			uParam0->f_26 = 0;
		}
		else if (iVar1 == 0)
		{
			uParam0->f_26 = 0;
		}
	}
}



void func_446(var uParam0)//Position - 0x3024F
{
	int iVar0;
	float fVar1;
	
	iLocal_562 = (MISC::GET_GAME_TIMER() + iLocal_563);
	bLocal_558 = true;
	CAM::_0xCCD078C2665D2973(1);
	PED::SET_PED_NAME_DEBUG(uParam0->f_2, "SUMMON");
	GlobalFunc_8535();
	iVar0 = func_449(PAD::GET_DISABLED_CONTROL_NORMAL(0, 30));
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 30) || iVar0 != uParam0->f_20)
	{
		uParam0->f_20 = iVar0;
		uParam0->f_18++;
	}
	if (MISC::GET_GAME_TIMER() > uParam0->f_19)
	{
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_alien_teleport", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, fLocal_572, 0, 0, 0);
		uParam0->f_19 = MISC::GET_GAME_TIMER() + 2000;
	}
	if (uParam0->f_18 > iLocal_564 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, 242628503) > 1)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_2, sLocal_337, sLocal_342, 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_2, sLocal_337, sLocal_340, 3))
		{
			TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, sLocal_344, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_343, 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_345, 8f, -4f, -1, 0, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_341, 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_345, 8f, -4f, -1, 0, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_345, 8f, -4f, -1, 0, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		GlobalFunc_2348(&(uParam0->f_17));
		if (iLocal_183 == 1)
		{
		}
		GlobalFunc_2347(&(uParam0->f_21));
		iLocal_557 = 0;
		uParam0->f_18 = 0;
		uParam0->f_1 = 12;
		uParam0->f_7 = MISC::GET_GAME_TIMER() + 2000;
		if (GlobalFunc_74("BAR1_GRAB_HLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (iLocal_186 == 0)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iLocal_565 + 2000) / 1000f);
			RECORDING::_0x293220DA1B46CEBC(fVar1, 2f, 1);
		}
		iLocal_186++;
		return;
	}
	if (MISC::GET_GAME_TIMER() > uParam0->f_7)
	{
		TASK::TASK_PLAY_ANIM(uParam0->f_2, sLocal_337, sLocal_346, 8f, -8f, -1, 0, 0, 0, 0, 0);
		GlobalFunc_2348(&(uParam0->f_17));
		func_447();
	}
}

void func_447()//Position - 0x304B3
{
	if (iLocal_159 != 7 && iLocal_159 != 6)
	{
		iLocal_161 = 0;
		iLocal_159 = 7;
	}
}


int func_449(float fParam0)//Position - 0x304E4
{
	if (fParam0 < 0f)
	{
		return -1;
	}
	return 1;
}

void func_450(var uParam0)//Position - 0x304FB
{
	var uVar0;
	
	func_57(uParam0);
	PED::SET_PED_RESET_FLAG(uParam0->f_2, 63, 1);
	PED::SET_PED_NAME_DEBUG(uParam0->f_2, "S-RUSH");
	PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_2, 1.15f);
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_2, 3f);
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_2, 1227113341) != 1)
	{
		TASK::TASK_GO_TO_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1073741824, 1073741824, 0);
	}
	if (iLocal_557)
	{
	}
	if (uParam0->f_10 > fLocal_569)
	{
		return;
	}
	if (!func_9())
	{
		return;
	}
	if (((PED::IS_PED_FALLING(uParam0->f_2) || TASK::IS_PED_GETTING_UP(uParam0->f_2)) || PED::IS_PED_RAGDOLL(uParam0->f_2)) || PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_2))
	{
		return;
	}
	if (!GlobalFunc_4958(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 1126825984, 0))
	{
		return;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uParam0->f_2, PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	func_347(uParam0->f_2);
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_340, 8f, -8f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_342, 8f, -8f, -1, 1, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(uParam0->f_2, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_2, 0, 0);
	func_452(PLAYER::PLAYER_PED_ID(), uParam0->f_2);
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_341, 8f, -8f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, sLocal_337, sLocal_343, 8f, -8f, -1, 1, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	if (iLocal_183 == 1)
	{
	}
	uParam0->f_1 = 11;
	func_451();
	if (iLocal_874 == 0)
	{
		if (!PAD::_IS_USING_KEYBOARD(2))
		{
			GlobalFunc_159("BAR1_GRAB_HLP", -1);
		}
		else
		{
			GlobalFunc_159("BAR1_GRAB_HPC", -1);
		}
		uParam0->f_7 = (MISC::GET_GAME_TIMER() + iLocal_565) + 2000;
		CAM::SET_GAMEPLAY_PED_HINT(uParam0->f_2, 0f, 0f, 0f, 1, iLocal_565 + 2000, 2000, 2000);
	}
	else
	{
		uParam0->f_7 = (MISC::GET_GAME_TIMER() + iLocal_565);
		CAM::SET_GAMEPLAY_PED_HINT(uParam0->f_2, 0f, 0f, 0f, 1, iLocal_565, 2000, 2000);
	}
	iLocal_874++;
	uParam0->f_18 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	fLocal_178 = 0f;
	GlobalFunc_2348(&(uParam0->f_17));
	uParam0->f_17 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_17, "PLAYER_BEAMED_UP", uParam0->f_2, "BARRY_01_SOUNDSET", 0, 0);
	GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_alien_teleport", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, fLocal_572, 0, 0, 0);
	uParam0->f_19 = MISC::GET_GAME_TIMER() + 2000;
}

void func_451()//Position - 0x3079D
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (!bLocal_359)
	{
		return;
	}
	if (func_332())
	{
		return;
	}
	GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (GlobalFunc_10618(&uLocal_389, "BARY1AU", "BARY1_ABDUCT", 6, 0, 0, 0))
	{
	}
}

void func_452(int iParam0, int iParam1)//Position - 0x307EC
{
	var uVar0;
	
	uVar0 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
	ENTITY::SET_ENTITY_HEADING(iParam0, uVar0);
}


bool func_454(var uParam0)//Position - 0x308A2
{
	if (uParam0->f_32)
	{
		return 0;
	}
	if (iLocal_560 == -1)
	{
		return 0;
	}
	return ((iLocal_559 == 1 && MISC::GET_GAME_TIMER() > iLocal_562) && uParam0->f_30 == iLocal_560);
}


bool func_456(var uParam0)//Position - 0x30934
{
	int iVar0;
	
	iVar0 = uParam0->f_1;
	return iVar0 >= 9;
}

bool func_457(var uParam0)//Position - 0x30947
{
	return ((((uParam0->f_1 == 20 || uParam0->f_1 == 19) || uParam0->f_1 == 18) || uParam0->f_1 == 17) || uParam0->f_1 == 15);
}

void func_458(var uParam0)//Position - 0x3098A
{
	if (uParam0->f_1 != 9 || uParam0->f_32)
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() > uParam0->f_16)
	{
		if (uParam0->f_10 < 20f)
		{
			uParam0->f_16 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_567, iLocal_568));
			return;
		}
		GlobalFunc_5117(uParam0->f_2, "ALIEN_CLICKS", "ALIENS", 10);
		uParam0->f_16 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_567, iLocal_568));
	}
}

int func_459(var uParam0)//Position - 0x309FD
{
	if (!func_463(uParam0))
	{
		uParam0->f_10 = GlobalFunc_156(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2) || PED::IS_PED_INJURED(uParam0->f_2))
		{
			if (func_60(uParam0))
			{
				iLocal_557 = 0;
				bLocal_558 = false;
			}
			if (uParam0->f_1 == 11)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 1)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			GlobalFunc_5179("ALIEN_DEATH", "ALIENS", ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1), 10);
			func_57(uParam0);
			GlobalFunc_2348(&(uParam0->f_17));
			GlobalFunc_2346(&(uParam0->f_4));
			GlobalFunc_2346(&(uParam0->f_5));
			GlobalFunc_2346(&(uParam0->f_6));
			func_461();
			GlobalFunc_846(&(uParam0->f_3));
			uParam0->f_7 = MISC::GET_GAME_TIMER() + 2500;
			if (iLocal_183 == 1)
			{
			}
			iLocal_876++;
			if (iLocal_872 == 0)
			{
				iLocal_873 = MISC::GET_GAME_TIMER() + 10000;
			}
			iLocal_872++;
			if (iLocal_872 > iLocal_871)
			{
				iLocal_871 = iLocal_872;
			}
			if (iLocal_872 >= 5)
			{
				GlobalFunc_553(742);
			}
			if ((iLocal_876 % 5) == 0)
			{
				if (iLocal_183 == 1)
				{
				}
				iLocal_870++;
				if (uParam0->f_1 != 11)
				{
					if (iLocal_559 == 0)
					{
						iLocal_559 = 1;
					}
				}
				else if (iLocal_183 == 1)
				{
				}
				fLocal_579 = (fLocal_579 - 4f);
				if (fLocal_579 < 10f)
				{
					fLocal_579 = 10f;
				}
				if (iLocal_870 >= Local_585)
				{
					iLocal_870 = Local_585;
				}
			}
			uParam0->f_1 = 7;
			return 1;
		}
	}
	else
	{
		uParam0->f_10 = -1f;
	}
	return 0;
}


void func_461()//Position - 0x30BFD
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_361)
	{
		return;
	}
	if (!bLocal_359)
	{
		return;
	}
	if (func_332())
	{
		return;
	}
	GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (GlobalFunc_10618(&uLocal_389, "BARY1AU", "BARY1_FIGHT", 6, 0, 0, 0))
	{
		iLocal_361 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
		if ((iLocal_362 - MISC::GET_GAME_TIMER()) < 2500)
		{
			iLocal_362 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
		}
	}
}


bool func_463(var uParam0)//Position - 0x30CA5
{
	return (uParam0->f_1 == 7 || uParam0->f_1 == 8);
}






void func_469(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x30E48
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



















int func_488(int iParam0, int iParam1)//Position - 0x318E1
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	WEAPON::REQUEST_WEAPON_ASSET(iParam0, 31, 0);
	if (WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_489()//Position - 0x3193F
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	GlobalFunc_9158(1);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	GlobalFunc_2362(0);
	GlobalFunc_7632(1);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 10f);
	GlobalFunc_2361(&Local_199, 126.5859f, -903.2452f, 87.53514f, 266.4236f, -956.5806f, 27.45261f, 230f);
	GlobalFunc_2361(&Local_191, 168.85f, -1001.024f, 23.09129f, 225.9042f, -862.5969f, 34.09233f, 55f);
	func_507();
	func_506();
	func_505();
	PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(0));
	PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
	GlobalFunc_601(4, 1);
	GlobalFunc_563(1);
	if (GlobalFunc_199() == 1)
	{
		Global_68490 = 1;
		iLocal_81 = 0;
		while (!func_493(&Local_95))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
		GlobalFunc_5733(0, 0, 1, 1);
		GlobalFunc_5732(&uLocal_164, 0);
		AUDIO::SET_AMBIENT_ZONE_STATE(sLocal_554, 1, 0);
		func_389();
		while (!GlobalFunc_5731(&uLocal_209))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4972(Local_879, 327.2303f, 0, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("RC18A_RESTART");
		iLocal_159 = 1;
		iLocal_161 = 0;
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_343, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_343, -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_341, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_341, -1056964608);
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_7963(PLAYER::PLAYER_PED_ID());
			WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
		}
		GlobalFunc_4967(0, -1, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_335))
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sLocal_335, 0, 1);
		}
		MISC::SET_TIME_SCALE(fLocal_179);
		AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("BARRY_01_SLOWMO");
		AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
		AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 1);
	}
	GRAPHICS::ENABLE_ALIEN_BLOOD_VFX(1);
}




int func_493(var uParam0)//Position - 0x31CA6
{
	int iVar0[7];
	struct<3> Var8;
	var uVar11;
	int iVar12;
	bool bVar13;
	
	Var8 = { 190.2424f, -956.379f, 28.63f };
	uVar11 = GlobalFunc_569(1.12f);
	iVar0[0] = uLocal_82;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("p_cs_lighter_01");
	iVar0[5] = joaat("p_cs_joint_01");
	iVar0[6] = joaat("prop_protest_sign_01");
	switch (iLocal_81)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_1_RCM_P2", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_17[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_24 = 23f;
			iVar12 = 0;
			while (iVar12 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar12]);
				iVar12++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "RCMBarryLeadInOut", "idle", "fidget");
			iLocal_81 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_81 = 2;
			break;
		
		case 2:
			bVar13 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7964(&(uParam0->f_28[0]), 49, Var8, uVar11, "RC LAUNCHER: BARRY 1", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar13 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 5f, 0);
				GlobalFunc_5725(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, GlobalFunc_569(-2.01f));
				if (GlobalFunc_115(uParam0->f_41[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
					GlobalFunc_5725(&(uParam0->f_41[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, GlobalFunc_569(-2.01f));
					if (GlobalFunc_115(uParam0->f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
					}
				}
				else
				{
					bVar13 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5725(&(uParam0->f_41[1]), iVar0[2], 190.2574f, -956.3513f, 29.09179f, GlobalFunc_569(-1.68f));
				if (GlobalFunc_115(uParam0->f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 0, 0);
				}
				else
				{
					bVar13 = false;
				}
			}
			if (bVar13)
			{
				iLocal_81 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], 1862763509);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_28[0], Var8, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], uVar11);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (GlobalFunc_115(uParam0->f_41[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
			}
			if (GlobalFunc_115(uParam0->f_41[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 1, 0);
			}
			GlobalFunc_5725(&(uParam0->f_41[4]), iVar0[5], 189.895f, -955.945f, 29.818f, 0f);
			if (GlobalFunc_115(uParam0->f_41[4]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[4], -90f, 0f, -30.8f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
			}
			GlobalFunc_5725(&(uParam0->f_41[3]), iVar0[4], 189.783f, -956.015f, 29.79f, 0f);
			if (GlobalFunc_115(uParam0->f_41[3]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[3], -90f, 0f, 75f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
			}
			func_269(&(uParam0->f_41[5]), iVar0[6]);
			iVar12 = 0;
			while (iVar12 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar12]);
				iVar12++;
			}
			return 1;
			break;
	}
	return 0;
}












void func_505()//Position - 0x32376
{
	func_351(&Local_896, 0, 175.5842f, -964.2895f, 35.0957f);
	func_351(&Local_896, 1, 183.1626f, -970.6071f, 35.0957f);
	func_351(&Local_896, 2, 179.9724f, -943.0597f, 34.0921f);
	func_351(&Local_896, 3, 185.2821f, -935.3659f, 34.0922f);
	func_351(&Local_896, 4, 199.9392f, -951.7982f, 35.0511f);
	func_351(&Local_896, 5, 190.3101f, -976.7255f, 35.0916f);
	func_351(&Local_896, 6, 205.6451f, -974.7205f, 35.0476f);
	func_351(&Local_896, 7, 212.8866f, -936.2545f, 33.7047f);
	func_351(&Local_896, 8, 194.1555f, -957.8777f, 33.3463f);
}

void func_506()//Position - 0x3244E
{
	iLocal_208 = joaat("weapon_minigun");
	fLocal_569 = 7.5f;
	iLocal_564 = 10;
	iLocal_565 = 6000;
	fLocal_856 = 15f;
	iLocal_854 = 1500;
	iLocal_855 = 4500;
	fLocal_570 = 0.375f;
	fLocal_571 = 0.8f;
	fLocal_572 = 2f;
	fLocal_857 = 0.75f;
	fLocal_858 = 100f;
	fLocal_859 = 2f;
	fLocal_860 = -0.1f;
	fLocal_861 = 0.3f;
	fLocal_579 = 30f;
	fLocal_580 = 40f;
	fLocal_862 = 1.75f;
	iLocal_850 = 0;
	iLocal_852 = 1;
	iLocal_853 = 75;
	iLocal_561 = 3500;
	iLocal_582 = 600;
	iLocal_583 = 1000;
	iLocal_584 = 200;
	fLocal_179 = 0.8f;
	iLocal_928 = 0;
}

void func_507()//Position - 0x32503
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_585)
	{
		Local_585[iVar0 /*33*/].f_30 = iVar0;
		iVar0++;
	}
}











void func_518()//Position - 0x32A6A
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::GET_PLAYER_INDEX(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::GET_PLAYER_INDEX(), 1f);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_343, 3))
		{
			TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_343, -1056964608);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_341, 3))
		{
			TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), sLocal_337, sLocal_341, -1056964608);
		}
	}
	if (iLocal_208 == iLocal_190 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_208, 0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, iLocal_208);
	}
	Global_85622 = 1;
	GlobalFunc_601(4, 0);
	func_16();
	func_62();
	func_319();
	GlobalFunc_6925(&uLocal_209);
	GlobalFunc_9158(0);
	PAD::SET_PAD_SHAKE(0, 0, 0);
	GlobalFunc_563(0);
	CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 0f);
	GlobalFunc_846(&uLocal_182);
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_173, 500f);
	MISC::SET_TIME_SCALE(1f);
	AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("BARRY_01_SLOWMO");
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
	AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 0);
	GlobalFunc_2362(1);
	OBJECT::_0xA2C1F5E92AFE49ED();
	GlobalFunc_7632(0);
	GlobalFunc_5733(1, 1, 0, 0);
	GlobalFunc_2363(uLocal_164);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_274();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	AUDIO::CLEAR_AMBIENT_ZONE_STATE(sLocal_554, 1);
	func_376(&Local_95, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_523(bool bParam0)//Position - 0x32EE0
{
	int iVar0;
	
	GlobalFunc_8958();
	if (!GlobalFunc_142())
	{
		iVar0 = GlobalFunc_8314();
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
			func_524(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
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
			GlobalFunc_8949(iVar0, 1, 1, 0);
		}
		Global_96440[iVar0 /*10*/].f_6 = 1;
	}
}

void func_524(char* sParam0, int iParam1)//Position - 0x32FB0
{
	if (Global_89962 != 12)
	{
		if (func_525(sParam0, 6, iParam1))
		{
			Global_89962.f_1 = iParam1;
		}
	}
}

int func_525(char* sParam0, int iParam1, int iParam2)//Position - 0x32FD8
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	GlobalFunc_4909();
	GlobalFunc_141();
	Global_89962 = 0;
	StringCopy(&(Global_89962.f_3), sParam0, 32);
	Global_89962.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	GlobalFunc_6685(1);
	GlobalFunc_7632(1);
	GlobalFunc_4944(0);
	GlobalFunc_137(1);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 9);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 6);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 20);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 21);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(uVar0))
				{
					MISC::SET_BIT(&(Global_89962.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_136(0);
	GlobalFunc_12(1);
	Global_89962.f_2 = Global_89999;
	if (GlobalFunc_5737())
	{
		if (GlobalFunc_135())
		{
			if (Global_89999 >= GlobalFunc_6691())
			{
				if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 16))
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam2 /*6*/].f_1 >= 2)
					{
						Global_84543 = 1;
					}
				}
			}
		}
		else if (Global_89962.f_11 == 6)
		{
			GlobalFunc_6675(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam2 /*6*/].f_4 >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
		else
		{
			iVar33 = GlobalFunc_547(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar33] >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
	}
	return 1;
}















void func_540(char* sParam0, bool bParam1)//Position - 0x334EF
{
	GlobalFunc_509(sParam0);
	func_523(bParam1);
}





void func_545(int iParam0, bool bParam1)//Position - 0x3367E
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		GlobalFunc_7103(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1185), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0]);
			iVar1++;
		}
	}
}









