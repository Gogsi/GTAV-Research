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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	var uLocal_75 = 3;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 3;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 2;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 3;
	var uLocal_87 = 15;
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
	var uLocal_103 = 15;
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
	var uLocal_119 = 15;
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
	var uLocal_135 = 3;
	var uLocal_136 = 7;
	var uLocal_137 = 2;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 2;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 2;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 2;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 2;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 2;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 2;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 7;
	var uLocal_159 = 2;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 2;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 2;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 2;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 2;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 2;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 2;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 7;
	var uLocal_181 = 2;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 2;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 2;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 2;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 2;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 2;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 2;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 3;
	var uLocal_203 = 7;
	var uLocal_204 = 2;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 2;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 2;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 2;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 2;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 2;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 2;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 7;
	var uLocal_226 = 2;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 2;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 2;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 2;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 2;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 2;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 2;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 7;
	var uLocal_248 = 2;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 2;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 2;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 2;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 2;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 2;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 2;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 2;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 2;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 2;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 8;
	var uLocal_287 = 2;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 2;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 2;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 2;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 2;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 2;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 2;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 2;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 8;
	var uLocal_344 = 2;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 2;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 2;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 2;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 2;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 2;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 2;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 2;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 8;
	var uLocal_401 = 2;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 2;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 2;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 2;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 2;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 2;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 2;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 2;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 8;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 8;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 8;
	var uLocal_444 = 3;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 3;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 3;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 3;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 3;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 3;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 3;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 3;
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
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	bool bLocal_494 = 0;
	float fLocal_495 = 0f;
	float fLocal_496 = 0f;
	struct<3> Local_497 = { 0, 0, 0 } ;
	struct<3> Local_500 = { 0, 0, 0 } ;
	struct<3> Local_503 = { 0, 0, 0 } ;
	struct<3> Local_506 = { 0, 0, 0 } ;
	struct<3> Local_509 = { 0, 0, 0 } ;
	struct<3> Local_512 = { 0, 0, 0 } ;
	struct<3> Local_515 = { 0, 0, 0 } ;
	struct<3> Local_518 = { 0, 0, 0 } ;
	struct<3> Local_521 = { 0, 0, 0 } ;
	struct<3> Local_524 = { 0, 0, 0 } ;
	struct<3> Local_527 = { 0, 0, 0 } ;
	struct<3> Local_530 = { 0, 0, 0 } ;
	struct<3> Local_533 = { 0, 0, 0 } ;
	struct<3> Local_536 = { 0, 0, 0 } ;
	struct<3> Local_539 = { 0, 0, 0 } ;
	struct<3> Local_542 = { 0, 0, 0 } ;
	int iLocal_545 = 0;
	var uLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	struct<11> Local_550 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_561 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_572 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_583 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_594 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_605 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_616 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	struct<7> Local_627 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_634 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_641 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	struct<6> Local_652 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	struct<6> Local_663 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	struct<6> Local_674 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	struct<6> Local_685 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	struct<6> Local_696 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	struct<6> Local_707 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	struct<3> Local_718 = { 0, 0, 0 } ;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	struct<3> Local_729 = { 0, 0, 0 } ;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	struct<22> Local_740 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	struct<3> Local_765 = { 0, 0, 0 } ;
	var uLocal_768 = 0;
	struct<12> Local_769 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0, 0 } ;
	var uLocal_781 = 16;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	var uLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	bool bLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	bool bLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	bool bLocal_969 = 0;
	int iLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	var uLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	float fLocal_981 = 0f;
	float fLocal_982 = 0f;
	bool bLocal_983 = 0;
	bool bLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	struct<6> Local_1011 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_1017[48] = "";
	var uLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	struct<2> Local_1030 = { 0, 0 } ;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1067 = 0;
	int iLocal_1068[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1083 = 10;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 8;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
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
	Local_62 = { 0f, 0f, 0f };
	Local_65 = { 0f, 0f, 0f };
	iLocal_68 = -1;
	fLocal_70 = 0.5f;
	fLocal_71 = 0.88f;
	fLocal_72 = 0.609375f;
	fLocal_73 = 0.266666f;
	fLocal_74 = 1.2f;
	fLocal_495 = 0.6f;
	fLocal_496 = 0.795f;
	Local_497 = { -824.89f, 180.72f, 70.57f };
	Local_500 = { -632.3f, 255.25f, 80.46f };
	Local_503 = { 299.31f, 174.02f, 102.98f };
	Local_506 = { 320.84f, 177.82f, 102.56f };
	Local_509 = { -1899.75f, -561.64f, 10.78f };
	Local_512 = { -1903.6f, -573.2f, 19.1f };
	Local_515 = { -626.917f, 244.277f, 80.9f };
	Local_518 = { 0f, 0f, -6.53f };
	Local_521 = { 320.57f, 181.39f, 103.79f };
	Local_524 = { 0f, 0f, -111.08f };
	Local_527 = { 322.2f, 180.99f, 102.6f };
	Local_530 = { 0f, 0f, 80f };
	Local_533 = { 323.225f, 179.725f, 103.6f };
	Local_536 = { 0f, 0f, 113.4f };
	Local_539 = { 321.525f, 182.075f, 103.57f };
	Local_542 = { 0f, 0f, -162.72f };
	iLocal_975 = -1;
	iLocal_976 = -1;
	iLocal_977 = -1;
	iLocal_978 = -1;
	StringCopy(&Local_1030, "FAM6_SHRINK", 16);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_886();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		func_883(&iLocal_545, GlobalFunc_Get_Mission_Fail_Checkpoint());
		iLocal_953 = 1;
		if (Global_84544 == 1)
		{
			iLocal_545 = func_882(iLocal_545);
		}
	}
	else
	{
		func_860(0, "STAGE 0: DRIVE TO BEAN", 0, 0, 0, 1);
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (!GlobalFunc_Is_Mission_Retry())
		{
			iLocal_545 = 1;
			iLocal_953 = 1;
		}
	}
	iLocal_972 = 0;
	while (true)
	{
		if (iLocal_954 == 1)
		{
			func_858(&iLocal_545, &uLocal_546);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_503(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
					GlobalFunc_504(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
				}
				else
				{
					GlobalFunc_503(0, -1);
					GlobalFunc_504(0, -1);
				}
			}
		}
		RECORDING::_0x208784099002BC30("M_ReuniteFamily", 0);
		switch (iLocal_545)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_803(&iLocal_947))
					{
						func_802();
						iLocal_545 = 1;
					}
				}
				break;
			
			case 1:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_782(&iLocal_947))
					{
						func_802();
						iLocal_545 = 2;
					}
				}
				break;
			
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_779(&iLocal_947))
					{
						func_802();
						iLocal_545 = 3;
					}
				}
				break;
			
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_777(&iLocal_947))
					{
						func_802();
						iLocal_545 = 4;
					}
				}
				break;
			
			case 4:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_500, 1) < 150f)
				{
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				}
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_744(&iLocal_947))
					{
						func_802();
						iLocal_545 = 5;
					}
				}
				break;
			
			case 5:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_742(&iLocal_947))
					{
						func_802();
						iLocal_545 = 6;
					}
				}
				break;
			
			case 6:
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_732(&iLocal_947))
					{
						func_802();
						iLocal_545 = 7;
					}
				}
				break;
			
			case 7:
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_731(&iLocal_947))
					{
						func_802();
						iLocal_545 = 8;
					}
				}
				break;
			
			case 8:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_728(&iLocal_947))
					{
						func_802();
						iLocal_545 = 9;
					}
				}
				break;
			
			case 9:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_727(&iLocal_947))
					{
						func_802();
						iLocal_545 = 10;
					}
				}
				break;
			
			case 10:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_712(&iLocal_947))
					{
						func_802();
						iLocal_545 = 11;
					}
				}
				break;
			
			case 11:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_710(&iLocal_947))
					{
						func_802();
						iLocal_545 = 12;
					}
				}
				break;
			
			case 12:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_707(&iLocal_947))
					{
						func_802();
						iLocal_545 = 13;
					}
				}
				break;
			
			case 13:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_705(&iLocal_947))
					{
						func_802();
						iLocal_545 = 14;
					}
				}
				break;
			
			case 14:
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_689(&iLocal_947))
					{
						func_802();
						iLocal_545 = 15;
					}
				}
				break;
			
			case 15:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_651(&iLocal_947))
					{
						func_802();
						iLocal_545 = 16;
					}
				}
				break;
			
			case 16:
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_565(&iLocal_947))
					{
						func_802();
						iLocal_545 = 17;
					}
				}
				break;
			
			case 17:
				if (func_804(iLocal_545, &iLocal_946, &iLocal_954, &uLocal_952, &iLocal_953))
				{
					if (func_543(&iLocal_947))
					{
						func_802();
						iLocal_545 = 18;
					}
				}
				break;
			
			case 18:
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				GlobalFunc_5103(0, 0);
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					func_42(280, 1);
					func_19(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 0, 34);
				}
				func_886();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			
			case 19:
				func_2(&uLocal_546);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				while (!GlobalFunc_145())
				{
					SYSTEM::WAIT(0);
				}
				func_886();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}


void func_2(var uParam0)//Position - 0x7A7
{
	switch (*uParam0)
	{
		case 3:
			GlobalFunc_10835("CMN_JDIED");
			break;
		
		case 4:
			GlobalFunc_10835("CMN_TCDIED");
			break;
		
		case 1:
			GlobalFunc_10835("CMN_ADIED");
			break;
		
		case 2:
			GlobalFunc_10835("FAM6_FAILFD");
			break;
		
		case 5:
			GlobalFunc_10835("FAM6_FAILLAZ");
			break;
		
		case 7:
			GlobalFunc_10835("FAM6_FAILBMA");
			break;
		
		case 6:
			GlobalFunc_10835("FAM6_FAILACD");
			break;
		
		case 11:
			GlobalFunc_10835("FAM6_FFAMILY");
			break;
		
		case 9:
			GlobalFunc_10835("CMN_JLEFT");
			break;
		
		case 10:
			GlobalFunc_10835("CMN_TCLEFT");
			break;
		
		case 8:
			GlobalFunc_10835("CMN_ALEFT");
			break;
		
		case 12:
			GlobalFunc_10835("FAM6_FBMSMASH");
			break;
		
		case 0:
		case 13:
			GlobalFunc_10835("FAM6_FAILDB");
			break;
	}
}

















int func_19(var uParam0, int iParam1, int iParam2)//Position - 0x1873
{
	int iVar0;
	struct<74> Var1;
	var uVar75;
	var uVar78;
	var uVar79;
	var uVar82;
	
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[0], 9))
	{
		iVar0 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam1] = iParam2;
	uParam0->f_1524[iParam1] = GlobalFunc_7719();
	if (!GlobalFunc_506(iParam2, &(uParam0->f_1528[iParam1 /*3*/]), &(uParam0->f_1538[iParam1])))
	{
		return 0;
	}
	if (!GlobalFunc_100(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f))
	{
		if (!GlobalFunc_100(Global_88538[iParam2 /*3*/], 0f, 0f, 0f))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 25;
			Var1.f_57 = 2;
			if (GlobalFunc_8040(iParam1, iParam2, &Var1, &uVar75, &uVar78, &uVar79, &uVar82))
			{
				Global_89503[iParam1 /*74*/] = { Var1 };
			}
		}
	}
	uParam0->f_1542[iParam1] = 0;
	uParam0->f_1546[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1556[iParam1] = 0;
	return 1;
}























void func_42(int iParam0, int iParam1)//Position - 0x5B4A
{
	struct<97> Var0;
	int iVar109;
	int iVar110;
	
	Var0.f_1 = -1;
	Var0.f_17 = 4;
	Var0.f_17.f_8 = 4;
	Var0.f_17.f_13 = 4;
	Var0.f_17.f_18 = 4;
	Var0.f_17.f_24 = 4;
	Var0.f_17.f_29 = 4;
	Var0.f_17.f_34 = 4;
	Var0.f_62 = 8;
	Var0.f_96.f_7 = 21;
	Var0.f_96.f_8 = 6;
	Var0.f_17.f_5 = 0;
	Var0.f_17.f_6 = 0;
	Var0 = 0;
	Var0.f_2 = iParam0;
	Var0.f_62.f_15 = 0;
	GlobalFunc_5939(Var0.f_2, &(Var0.f_3));
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (GlobalFunc_747(iParam1, 64))
		{
			func_536(Global_88538[iParam0 /*3*/], -1082130432, 350, 1114636288, 0);
			if (!GlobalFunc_8633(Var0.f_3))
			{
				iVar109 = GlobalFunc_237(Var0.f_3);
				while (!func_530(iVar109, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	iVar110 = 1;
	while (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && iVar110)
	{
		if (!func_43(&Var0, iParam1))
		{
		}
		else
		{
			iVar110 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_43(var uParam0, var uParam1)//Position - 0x5C52
{
	return func_44(uParam0, 463622/*func_529*/, 463451/*func_528*/, uParam1);
}

int func_44(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x5C6A
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var121;
	int iVar124;
	struct<3> Var125;
	var uVar128;
	struct<3> Var129;
	struct<3> Var132;
	float fVar135;
	char* sVar136;
	char[] cVar152[8];
	char* sVar168;
	var uVar172;
	var uVar173;
	var uVar174;
	var uVar175;
	var uVar176;
	var uVar177;
	char* sVar178;
	char* sVar184;
	int iVar192;
	float fVar193;
	float fVar194;
	int iVar195;
	struct<65> Var196;
	bool bVar261;
	int iVar262;
	bool bVar263;
	bool bVar264;
	int iVar265;
	float fVar266;
	float fVar267;
	bool bVar268;
	bool bVar269;
	struct<6> Var270;
	bool bVar276;
	char cVar277[64];
	char* sVar293;
	char cVar309[64];
	int iVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	char* sVar329;
	bool bVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	
	if (!uParam0->f_62.f_19)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_Next_Notification_Time - 1000))
	{
		GlobalFunc_49(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var121 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar124 = GlobalFunc_7733(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar124 == 1)
		{
			STATS::STAT_INCREMENT(joaat("sp_ambient_switch_count"), 1f);
			*uParam0 = 1;
		}
		if (!*uParam0 == 1)
		{
			if (!Global_68507 == -1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_81155[Global_68507 /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					*uParam0 = 1;
				}
			}
			else if (GlobalFunc_8537() == 36)
			{
				*uParam0 = 1;
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_96.f_2 = 0;
		uParam0->f_96.f_3 = 0;
		Global_89750 = 0;
		uParam0->f_61 = GlobalFunc_237(uParam0->f_3);
		if (GlobalFunc_8044(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			GlobalFunc_7632(1);
			if (func_503(uParam0, &Var125, &uVar128))
			{
				uParam0->f_4 = { Var125 };
				uParam0->f_7 = uVar128;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { Var125 };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = uVar128;
				if (Global_89726[uParam0->f_3] == 2)
				{
					Global_89734[uParam0->f_3 /*3*/] = { Var125 };
					Global_89744[uParam0->f_3] = uVar128;
				}
			}
			Global_88209 = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam0->f_4))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_16 = 0;
			}
			if (uParam0->f_16 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				GlobalFunc_7934(21, 0);
			}
			GlobalFunc_7225(uParam0->f_2);
			if (GlobalFunc_8632(uParam0->f_2, &Var129, &Var132, &fVar135))
			{
				if ((GlobalFunc_2940(uParam0->f_2, &sVar136, &cVar152) || GlobalFunc_2939(uParam0->f_2, &sVar168, &uVar172, &uVar173, &uVar174, &uVar175, &uVar176, &uVar177)) || GlobalFunc_2938(uParam0->f_2, &sVar178))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var129);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var132, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, fVar135);
					PED::SET_PED_NON_CREATION_AREA(Var129 - Var121, Var129 + Var121);
					uParam0->f_108 = PED::ADD_SCENARIO_BLOCKING_AREA(Var129 - Var121, Var129 + Var121, 0, 1, 1, 1);
					MISC::CLEAR_AREA(Var129, SYSTEM::VMAG(Var121), 1, 0, 0, 0);
				}
			}
			Global_89750++;
			if (GlobalFunc_2937(uParam0->f_2, &sVar184))
			{
				Global_89750++;
			}
			Global_89502 = uParam0->f_2;
			iVar192 = GlobalFunc_8315();
			if (iVar192 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar192]))
				{
					fVar193 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192]);
					fVar194 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192]);
					if (fVar193 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
					if (fVar194 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
				}
				GlobalFunc_8631(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar192 /*74*/]), &(Global_89734[iVar192 /*3*/]), &(Global_89744[iVar192]), &(Global_89726[iVar192]), &(Global_2544853[iVar192]));
				func_482(PLAYER::PLAYER_PED_ID(), 0);
				func_475(PLAYER::PLAYER_PED_ID());
			}
			GlobalFunc_9262(uParam0->f_3, uParam0->f_2);
			iLocal_69 = 0;
			Global_24491 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
			*uParam0 = 3;
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		*uParam0 = 3;
		iLocal_69++;
		STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				*uParam0 = 2;
				if (iLocal_69 > 150)
				{
					iLocal_69 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					*uParam0 = 3;
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar195 = GlobalFunc_584(uParam0->f_61);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar195]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_17[iVar195], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_17[iVar195]));
				}
			}
			uParam0->f_17[uParam0->f_61] = 0;
			uParam0->f_2 = 1;
		}
		if (func_466(uParam0))
		{
			Var196 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] };
			bVar261 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar261 = true;
			}
			if (func_203(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar261))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) != 3)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] = { Var196 };
					}
				}
				GlobalFunc_5169(uParam0->f_17[uParam0->f_61]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_17[uParam0->f_61], 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_17[uParam0->f_61], 1);
				GlobalFunc_2932(uParam0);
				uParam0->f_17.f_39 = 1;
				uParam0->f_17.f_7 = uParam0->f_61;
				uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
				Global_89751 = -1;
				GlobalFunc_5935(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) == 3)
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
					{
						iVar262 = MISC::GET_GAME_TIMER();
						while (iVar262 + 500 < MISC::GET_GAME_TIMER() && iVar262 > 0)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
							{
								iVar262 = -1;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar262 == -1)
						{
						}
					}
				}
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				*uParam0 = 4;
			}
		}
		else
		{
			uParam0->f_17.f_39 = 1;
			uParam0->f_17.f_7 = uParam0->f_61;
			uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
			if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_62.f_12, 1, 1);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!GlobalFunc_537(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1), 5f) && !GlobalFunc_537(uParam0->f_4, 0f, 0f, 0f, 5f))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_89751 = -1;
			GlobalFunc_5935(uParam0->f_2);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			*uParam0 = 4;
		}
	}
	if (*uParam0 == 4)
	{
		bVar263 = false;
		bVar264 = false;
		iVar265 = 0;
		fVar266 = 0f;
		fVar267 = 0f;
		bVar268 = false;
		bVar269 = false;
		GlobalFunc_9260(uParam0, &bVar263, &bVar264, &iVar265, &fVar266, &fVar267, &bVar268, &bVar269, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (GlobalFunc_2938(uParam0->f_2, &Var270))
			{
				MemCopy(&(uParam0->f_8), {Var270}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar268)
			{
				bVar268 = true;
			}
		}
		bVar276 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (func_193(&(uParam0->f_62), iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &(uParam0->f_8), 0, 0))
			{
				bVar276 = true;
			}
		}
		else
		{
			MemCopy(&cVar277, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar277))
			{
				GlobalFunc_2940(uParam0->f_2, &sVar293, &cVar309);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar309))
				{
					StringConCat(&cVar277, &cVar309, 64);
				}
			}
			if (func_178(&(uParam0->f_62), uParam0->f_62.f_10, iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &cVar277, 2))
			{
				bVar276 = true;
			}
		}
		if (bVar276)
		{
			iVar326 = 3;
			iVar327 = 8;
			if (Global_3)
			{
				iVar326 = 7;
				iVar327 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar325 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar325 == 8 || iVar325 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar325 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
					{
						if (Global_89750 > 0)
						{
							if (Global_89751 < 0)
							{
								Global_89751 = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar328 = 12500;
								if (iVar325 == 11)
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (GlobalFunc_2937(uParam0->f_2, &sVar329))
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_89751 + iVar328))
								{
									Global_89750 = (Global_89750 - 1);
									STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
									Global_89751 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar325 = iVar326;
				iVar327 = iVar326;
			}
			func_153(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar325 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (iVar325 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar325 >= iVar326)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_62.f_19)
					{
						if (uParam0->f_62.f_18 && iVar325 >= iVar327)
						{
							bVar337 = false;
							if (GlobalFunc_10991(&(uParam0->f_17), bVar263, bVar264, 0))
							{
								bVar337 = true;
							}
							if (bVar337)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 1);
								}
								GlobalFunc_2928(&(uParam0->f_17));
								func_153(uParam0);
								GlobalFunc_9259();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								Global_87845 = { uParam0->f_17 };
								uParam0->f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar325 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(0);
			}
			if (Global_87678)
			{
				if (uParam0->f_62.f_19)
				{
					if (GlobalFunc_5934(uParam0))
					{
						Global_87678 = 0;
					}
				}
			}
		}
		else
		{
			*uParam0 = 5;
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_62.f_10))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_62.f_10))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
					CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
				CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_108, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_62.f_9, 0);
			}
			if (uParam0->f_62.f_24 > 0)
			{
				iVar338 = 0;
				while (iVar338 <= (uParam0->f_62.f_24 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_62[iVar338]))
					{
						CAM::DESTROY_CAM(uParam0->f_62[iVar338], 0);
					}
					iVar338++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				GlobalFunc_7632(uParam0->f_62.f_21);
			}
			uParam0->f_62.f_15 = 0;
			uParam0->f_62.f_16 = 0;
			uParam0->f_62.f_17 = 0;
			uParam0->f_62.f_18 = 0;
			uParam0->f_62.f_19 = 0;
			uParam0->f_62.f_20 = 0;
			uParam0->f_62.f_24 = 0;
			if (!Global_35923)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				CAM::_0x487A82C650EB7799(0f);
				CAM::_0x0225778816FDC28C(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(false, 1, 1000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
			}
			GlobalFunc_749(0);
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_13))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_13, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_62.f_12, 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
				if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 0);
				}
			}
			*uParam0 = 6;
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_16 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_16);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(uParam0->f_3));
		iVar339 = GlobalFunc_8315();
		if (iVar339 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar339]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_89730[iVar339], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_89730[iVar339]));
				}
			}
			iVar340 = Global_89503[iVar339 /*74*/];
			if (iVar340 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar340);
			}
		}
		func_74(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_3] = uParam0->f_2;
			GlobalFunc_5933(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
		}
		GlobalFunc_5932(uParam0->f_3);
		GlobalFunc_8629(uParam0, &Var1);
		GlobalFunc_8628(uParam0);
		GlobalFunc_7222(uParam0->f_2);
		GlobalFunc_17(&Global_1312465);
		GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_96.f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[uParam0->f_3] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_87678 = 0;
		Global_89751 = -1;
		GlobalFunc_54(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			GlobalFunc_7632(0);
		}
		return 1;
	}
	return 0;
}






























int func_74(int iParam0)//Position - 0xF94F
{
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 32)
	{
		func_19(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 0, 34);
		return 1;
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 74)
	{
		func_19(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 0, 72);
		func_19(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 1, 73);
		return 1;
	}
	return 0;
}















































































int func_153(var uParam0)//Position - 0x174EB
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_177(uParam0, &fVar1))
				{
					return GlobalFunc_9141(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_177(uParam0, &fVar1))
				{
					return GlobalFunc_9141(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_177(uParam0, &fVar1))
				{
					return GlobalFunc_9141(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_177(uParam0, &fVar1))
				{
					return GlobalFunc_9141(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_177(uParam0, &fVar1))
				{
					return GlobalFunc_9141(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_177(uParam0, &fVar1))
				{
					return GlobalFunc_9141(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_177(uParam0, &fVar1))
			{
				GlobalFunc_741(20, &uVar3, &iVar2);
				return GlobalFunc_9141(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_177(uParam0, &fVar1))
			{
				GlobalFunc_741(15, &uVar5, &iVar4);
				return GlobalFunc_9141(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (GlobalFunc_6710(Global_1312465))
	{
		iVar6 = GlobalFunc_208(Global_1312465);
		iVar7 = GlobalFunc_207(Global_1312465);
		sVar8 = "";
		sVar9 = "";
		if (!GlobalFunc_2929())
		{
			sVar8 = "SMOG";
		}
		if (func_154(&fVar1, 5f))
		{
			return GlobalFunc_9141(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!GlobalFunc_2929())
	{
	}
	return 0;
}

int func_154(float fParam0, float fParam1)//Position - 0x1771A
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_68 == -1)
	{
		iLocal_68 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_68);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}























int func_177(var uParam0, float fParam1)//Position - 0x1829A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	
	Var0 = { Local_62 };
	Var3 = { Local_65 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13))
	{
		Local_62 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 1) };
		Var0 = { Local_62 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12))
	{
		Local_65 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1) };
		Var3 = { Local_65 };
	}
	Var6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 0);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 0);
	*fParam1 = (fVar10 / fVar9);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_178(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char[4] cParam8, int iParam9)//Position - 0x18343
{
	return GlobalFunc_9227(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, cParam8, iParam9, 0, 0, 0);
	return 1;
}















int func_193(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, int iParam9)//Position - 0x18BD2
{
	return GlobalFunc_9227(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, uParam7, 2, 0, bParam8, iParam9);
	return 1;
}










int func_203(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x193C9
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8386(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11317(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11332(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}







































































































































































































































































int func_466(var uParam0)//Position - 0x624AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var14;
	float fVar17;
	struct<3> Var18;
	
	iVar0 = GlobalFunc_584(uParam0->f_61);
	if (PED::IS_PED_INJURED(uParam0->f_17[uParam0->f_61]))
	{
		if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[uParam0->f_61]))
			{
			}
			else
			{
				iVar1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[uParam0->f_61];
				if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_4, 3f))
				{
				}
				else if (GlobalFunc_6710(iVar1))
				{
					GlobalFunc_9261(iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
					fVar8 = -1f;
					if (GlobalFunc_10369(iVar1, 3))
					{
						fVar8 = 1f;
					}
					else
					{
						fVar8 = (SYSTEM::TO_FLOAT(((iVar2 + iVar3 * 60) + iVar4 * 60 * 60)) / 3600f);
						if (fVar8 < 0f)
						{
							fVar8 = 0f;
						}
						if (fVar8 > 1f)
						{
							fVar8 = 1f;
						}
					}
					fVar9 = (((100f - 10f) * fVar8) + 10f);
					iVar10 = 0;
					while (iVar10 < 5)
					{
						GRAPHICS::DRAW_DEBUG_SPHERE(uParam0->f_4, fVar9, 255, 0, 0, 64);
						Var11 = { GlobalFunc_5726(uParam0->f_4, fVar9, 0f) };
						Var14 = { Var11 };
						if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var11, 0, &Var14, 16))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Var14, 3f))
							{
								fVar17 = 0f;
								if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var14, &fVar17))
								{
									GRAPHICS::DRAW_DEBUG_SPHERE(Var14, 0.5f, 255, 0, 255, 255);
									Var14.f_2 = fVar17;
									Var18 = { uParam0->f_4 - Var14 };
									uParam0->f_4 = { Var14 };
									uParam0->f_7 = MISC::GET_HEADING_FROM_VECTOR_2D(Var18.x, Var18.f_1);
									iVar10 = 99;
								}
							}
							else
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(Var14, 0.5f, 255, 0, 255, 255);
							}
						}
						else
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(Var11, 0.5f, 0, 255, 255, 255);
						}
						iVar10++;
					}
				}
			}
		}
		return 1;
	}
	GlobalFunc_8631(uParam0->f_17[uParam0->f_61], &(Global_89503[iVar0 /*74*/]), &(Global_89734[iVar0 /*3*/]), &(Global_89744[iVar0]), &(Global_89726[iVar0]), &(Global_2544853[iVar0]));
	return 0;
}









void func_475(int iParam0)//Position - 0x62AB4
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		GlobalFunc_2936(iParam0, iVar0);
		func_476(iParam0, iVar0);
	}
}

void func_476(int iParam0, int iParam1)//Position - 0x62AE9
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	Global_87757[iParam1 /*29*/].f_15 = 0;
	if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (GlobalFunc_2935(iVar1))
		{
			if ((GlobalFunc_2934(iParam0, &(Global_87757[iParam1 /*29*/]), &(Global_87757[iParam1 /*29*/].f_9)) && GlobalFunc_2934(iParam0, &(Global_87757[iParam1 /*29*/].f_3), &(Global_87757[iParam1 /*29*/].f_10))) && GlobalFunc_2934(iParam0, &(Global_87757[iParam1 /*29*/].f_6), &(Global_87757[iParam1 /*29*/].f_11)))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iParam0))
				{
					if (fVar0 < 40f)
					{
						fVar0 = 40f;
					}
				}
				else if (fVar0 > 20f)
				{
					fVar0 = 20f;
				}
				else if (fVar0 < 10f)
				{
					fVar0 = 10f;
				}
				Global_87757[iParam1 /*29*/].f_12 = fVar0;
				Global_87757[iParam1 /*29*/].f_13 = fVar0;
				Global_87757[iParam1 /*29*/].f_14 = fVar0;
				if (!GlobalFunc_537(Global_87757[iParam1 /*29*/].f_17, 0f, 0f, 0f, 1.5f))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { Global_87757[iParam1 /*29*/] };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = Global_87757[iParam1 /*29*/].f_9;
				}
				return;
			}
			Global_87757[iParam1 /*29*/] = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_3 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_6 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_12 = 0f;
			Global_87757[iParam1 /*29*/].f_13 = 0f;
			Global_87757[iParam1 /*29*/].f_14 = 0f;
			return;
		}
		else
		{
			Global_87757[iParam1 /*29*/] = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_3 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_6 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_12 = 0f;
			Global_87757[iParam1 /*29*/].f_13 = 0f;
			Global_87757[iParam1 /*29*/].f_14 = 0f;
			return;
		}
	}
	if (PED::IS_PED_IN_ANY_BOAT(iParam0) || PED::IS_PED_IN_ANY_SUB(iParam0))
	{
		Global_87757[iParam1 /*29*/] = { 0f, 0f, 0f };
		Global_87757[iParam1 /*29*/].f_3 = { 0f, 0f, 0f };
		Global_87757[iParam1 /*29*/].f_6 = { 0f, 0f, 0f };
		Global_87757[iParam1 /*29*/].f_12 = 0f;
		Global_87757[iParam1 /*29*/].f_13 = 0f;
		Global_87757[iParam1 /*29*/].f_14 = 0f;
		return;
	}
	if (fVar0 > 20f)
	{
		fVar0 = 20f;
	}
	else if (fVar0 < 10f)
	{
		fVar0 = 10f;
	}
	if (func_477(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), 50f, 12, &(Global_87757[iParam1 /*29*/]), &(Global_87757[iParam1 /*29*/].f_9)))
	{
		Global_87757[iParam1 /*29*/].f_12 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_12 = 0f;
	}
	if (func_477(Global_87757[iParam1 /*29*/], Global_87757[iParam1 /*29*/].f_9, (150f - 50f), 12, &(Global_87757[iParam1 /*29*/].f_3), &(Global_87757[iParam1 /*29*/].f_10)))
	{
		Global_87757[iParam1 /*29*/].f_13 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_13 = 0f;
	}
	if (func_477(Global_87757[iParam1 /*29*/].f_3, Global_87757[iParam1 /*29*/].f_10, (500f - 150f), 12, &(Global_87757[iParam1 /*29*/].f_6), &(Global_87757[iParam1 /*29*/].f_11)))
	{
		Global_87757[iParam1 /*29*/].f_14 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_14 = 0f;
	}
	Global_87757[iParam1 /*29*/].f_15 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar2) > 0f && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2))
		{
			Global_87757[iParam1 /*29*/].f_15 = 1;
		}
	}
	iVar3 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (((((((iVar3 == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 361.761f, -593.973f, 27.415f, 301.502f, -570.014f, 73.12f, 26.5f, 0, 1, 0)) || (iVar3 == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 331.066f, -601.842f, 56.725f, 285.118f, -584.95f, 41.253f, 26.5f, 0, 1, 0))) || iVar3 == -1020543821) || iVar3 == -1328015348) || iVar3 == -1019167519) || iVar3 == -1324541830) || iVar3 == -1791307508)
	{
		Global_87757[iParam1 /*29*/].f_15 = 1;
	}
}

int func_477(struct<3> Param0, float fParam3, float fParam4, int iParam5, var uParam6, var uParam7)//Position - 0x62F6A
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	float fVar5;
	struct<3> Var6;
	
	if (GlobalFunc_537(Param0, 0f, 0f, 0f, 1.5f))
	{
		*uParam6 = { 0f, 0f, 0f };
		*uParam7 = 0f;
		return 0;
	}
	fVar5 = (MISC::GET_RANDOM_FLOAT_IN_RANGE((-fParam4 / 2f), (fParam4 / 2f)) * 0.5f);
	Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, fVar5, fParam4, 0f) };
	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var6, 1, &Var1, &uVar4, &iVar0, iParam5, 1077936128, 0))
	{
		*uParam6 = { Var1 };
		*uParam7 = uVar4;
		*uParam6 = { GlobalFunc_2933(*uParam6, *uParam7, iVar0) };
		return 1;
	}
	*uParam6 = { Param0 };
	*uParam7 = fParam3;
	return 0;
}





void func_482(int iParam0, int iParam1)//Position - 0x6346A
{
	int iVar0;
	struct<3> Var1;
	
	GlobalFunc_9023(iParam0, 0);
	GlobalFunc_11316(iParam0, 0);
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/], iParam1, &Var1, 16))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { Var1 };
			}
		}
	}
}





















int func_503(var uParam0, var uParam1, var uParam2)//Position - 0x6A2D4
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	var uVar8;
	var uVar9;
	var uVar10;
	
	if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
	{
		iVar0 = GlobalFunc_584(uParam0->f_61);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[uParam0->f_61]))
		{
		}
		else
		{
			Var1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] };
			iVar4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar0];
			if (GlobalFunc_2941(Var1, &Var5, &uVar8, &uVar9))
			{
				*uParam1 = { Var5 };
				*uParam2 = uVar8;
				return 1;
			}
			if (GlobalFunc_6710(iVar4))
			{
				switch (func_504(iVar0, iVar4, &uVar10))
				{
					case 0:
						return 0;
						break;
					
					case 1:
						if (Global_89726[iVar0] == 0 || Global_89726[iVar0] == 1)
						{
							if (!GlobalFunc_537(Global_87757[iVar0 /*29*/].f_17, 0f, 0f, 0f, 1.5f))
							{
								*uParam1 = { Global_87757[iVar0 /*29*/].f_17 };
								*uParam2 = Global_87757[iVar0 /*29*/].f_26;
								return 1;
							}
						}
						else if (!GlobalFunc_537(Global_87757[iVar0 /*29*/], 0f, 0f, 0f, 1.5f))
						{
							*uParam1 = { Global_87757[iVar0 /*29*/] };
							*uParam2 = Global_87757[iVar0 /*29*/].f_9;
							return 1;
						}
						break;
					
					case 2:
						if (Global_89726[iVar0] == 0 || Global_89726[iVar0] == 1)
						{
							if (!GlobalFunc_537(Global_87757[iVar0 /*29*/].f_20, 0f, 0f, 0f, 1.5f))
							{
								*uParam1 = { Global_87757[iVar0 /*29*/].f_20 };
								*uParam2 = Global_87757[iVar0 /*29*/].f_27;
								return 1;
							}
						}
						else if (!GlobalFunc_537(Global_87757[iVar0 /*29*/].f_3, 0f, 0f, 0f, 1.5f))
						{
							*uParam1 = { Global_87757[iVar0 /*29*/].f_3 };
							*uParam2 = Global_87757[iVar0 /*29*/].f_10;
							return 1;
						}
						break;
					
					case 3:
						if (Global_89726[iVar0] == 0 || Global_89726[iVar0] == 1)
						{
							if (!GlobalFunc_537(Global_87757[iVar0 /*29*/].f_23, 0f, 0f, 0f, 1.5f))
							{
								*uParam1 = { Global_87757[iVar0 /*29*/].f_23 };
								*uParam2 = Global_87757[iVar0 /*29*/].f_28;
								return 1;
							}
						}
						else if (!GlobalFunc_537(Global_87757[iVar0 /*29*/].f_6, 0f, 0f, 0f, 1.5f))
						{
							*uParam1 = { Global_87757[iVar0 /*29*/].f_6 };
							*uParam2 = Global_87757[iVar0 /*29*/].f_11;
							return 1;
						}
						break;
					
					default:
						break;
				}
				return 0;
			}
		}
	}
	return 0;
}

int func_504(int iParam0, int iParam1, var uParam2)//Position - 0x6A579
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	GlobalFunc_9261(iParam1, &iVar0, &iVar1, &iVar2, &uVar3, &uVar4, &uVar5);
	*uParam2 = (SYSTEM::TO_FLOAT(((iVar0 + iVar1 * 60) + iVar2 * 60 * 60)) / 3600f);
	if (*uParam2 < 0f)
	{
		*uParam2 = 0f;
	}
	if (*uParam2 > 1f)
	{
		*uParam2 = 1f;
	}
	if (*uParam2 < 0.25f && !Global_87757[iParam0 /*29*/].f_15)
	{
		return 0;
	}
	if (*uParam2 < 0.5f)
	{
		return 1;
	}
	if (*uParam2 < 0.75f)
	{
		return 2;
	}
	return 3;
}


























int func_530(int iParam0, bool bParam1)//Position - 0x7133A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_533(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_203(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10991(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_533(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x714F2
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8386(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11317(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11332(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}



void func_536(struct<3> Param0, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x715FB
{
	int iVar0;
	
	if (bParam6)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
			if (fParam3 != -1f)
			{
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			AUDIO::RESET_PED_AUDIO_FLAGS(PLAYER::PLAYER_PED_ID());
		}
	}
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam5, 0);
	iVar0 = 0;
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && iVar0 < iParam4)
	{
		iVar0++;
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	MISC::SET_GAME_PAUSED(0);
	if (bParam6)
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}







int func_543(int iParam0)//Position - 0x72034
{
	int iVar0;
	
	if (CAM::DOES_CAM_EXIST(uLocal_1024))
	{
		CAM::SET_USE_HI_DOF();
	}
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_mcs_6_p4_b", 1))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550, "Jimmy", 1, Local_550.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_583))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_583, "Tracy", 1, Local_583.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_561))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_561, "Amanda", 1, Local_561.f_6, 0);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				RECORDING::_0x293220DA1B46CEBC(10f, 0f, 3);
				RECORDING::_0x48621C9FCA3EBD28(4);
				AUDIO::STOP_AUDIO_SCENES();
				CUTSCENE::START_CUTSCENE(64);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
				func_551();
				func_550();
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -822.8641f, 175.1352f, 69.30317f, -815.2511f, 178.1297f, 76.15309f, 8f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
							}
							GlobalFunc_2882(iVar0);
							ENTITY::SET_ENTITY_COORDS(iVar0, Local_634.f_2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, Local_634.f_5);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_497, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 15f)
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
							}
							GlobalFunc_2882(iVar0);
							ENTITY::SET_ENTITY_COORDS(iVar0, Local_634.f_2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, GlobalFunc_512(bLocal_969, 136.4846f, Local_634.f_5));
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar0, 2f);
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iVar0);
							if (GlobalFunc_4966(iVar0, -828.602f, 176.9161f, 67.95274f, -822.8405f, 183.0314f, 74.8781f, 4f))
							{
								ENTITY::SET_ENTITY_COORDS(iVar0, -867.9103f, 158.2215f, 63.9014f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 174.2918f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							}
						}
					}
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_765, 100f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_765, 100f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_765, 100f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_765, 100f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_765, 100f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_634) && !ENTITY::IS_ENTITY_DEAD(Local_634))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_634, 1);
				VEHICLE::_0xBE5C1255A1830FF5(Local_634, 1);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(iLocal_1024, -844.6762f, 180.9989f, 73.01741f, 5.071437f, -5.6E-05f, -101.5714f, 33f, 0, 1, 1, 2);
				CAM::SET_CAM_DOF_PLANES(iLocal_1024, 4.3662f, 8.608f, 1000.913f, 10069.13f);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::_0x81CBAE94390F9F89();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				GlobalFunc_8316(0, 1, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_1024))
				{
					GlobalFunc_45(1, 1);
					*iParam0++;
				}
			}
			break;
		
		case 4:
			if (CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_1024))
				{
					if (Global_68505 == 1)
					{
						*iParam0++;
					}
				}
			}
			break;
		
		case 5:
			if (CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_1024))
				{
					if (Global_68505 == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						*iParam0++;
					}
				}
			}
			break;
		
		case 6:
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				return 1;
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}







void func_550()//Position - 0x72984
{
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 0, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 1, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 5, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 5, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 5, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 7, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 8, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
}

void func_551()//Position - 0x72A03
{
	CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 0, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 0, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 2, 3, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 3, 4, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 4, 4, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 5, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 6, 2, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 7, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 8, 3, 0, 0);
}

void func_552()//Position - 0x72A81
{
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 0, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 2, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 3, 4, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 4, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 5, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 6, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 7, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 8, 3, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 9, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 10, 2, 0, 0);
}













int func_565(int iParam0)//Position - 0x730CE
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	MISC::SET_BIT(&(Local_740.f_13), 20);
	func_631();
	func_630(Local_512, 30f);
	if (GlobalFunc_331() || GlobalFunc_2233())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_6_p4_b") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_497, 1) < 100f)
	{
		CUTSCENE::REQUEST_CUTSCENE("fam_6_mcs_6_p4_b", 8);
		if (iLocal_970 == 0)
		{
			STREAMING::_0xF8155A7F03DDFC8E(2);
			iLocal_970 = 1;
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			func_552();
			func_551();
			func_550();
			iLocal_965 = 1;
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_6_p4_b") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
		iLocal_965 = 0;
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_550) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_634, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_550, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(Local_550, Local_634, 60000, 1, 1f, 1, 0);
					PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 0, 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_583) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_634, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_583, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(Local_583, Local_634, 60000, 2, 1f, 1, 0);
					PED::FORCE_PED_MOTION_STATE(Local_583, -668482597, 0, 0, 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_561) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_634, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_561, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(Local_561, Local_634, 60000, 0, 1f, 1, 0);
					PED::FORCE_PED_MOTION_STATE(Local_561, -668482597, 0, 0, 1);
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				SYSTEM::WAIT(2);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (func_626("FAM6_HOME"))
			{
				GlobalFunc_690(&Local_740, Local_634);
				AUDIO::START_AUDIO_SCENE("FAMILY_6_DRIVE_HOME");
				bLocal_969 = false;
				*iParam0++;
			}
			break;
		
		case 1:
			if (iLocal_986 == 0)
			{
				if (iLocal_985 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
					{
						PATHFIND::SET_GPS_DISABLED_ZONE((-1908.517f - 24f), (-518.2936f - 24f), (17.81688f - 8f), (-1908.517f + 24f), (-518.2936f + 24f), (17.81688f + 8f));
						iLocal_985 = 1;
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(Local_740.f_5))
					{
						PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
						iLocal_985 = 0;
					}
					if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1908.517f, -518.2936f, 17.81688f, 24f, 24f, 8f, 0, 1, 0) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1901.539f, -537.0786f, 17.76761f, 36f, 32f, 8f, 0, 1, 0))
						{
							PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
							iLocal_986 = 1;
						}
					}
				}
			}
			GlobalFunc_9202(&Local_740, Local_497, GlobalFunc_716(), 1, Local_561, Local_550, Local_583, "FAM6_DHOUSE", "CMN_ALEAVE", "CMN_JLEAVE", "CMN_TCLEAVE", "FAM6_FAM", 0, 1, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if ((GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_550) && GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_561)) && GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_583))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -826.595f, 177.7078f, 68.15234f, -823.2954f, 183.1324f, 75.85941f, 5.54f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							*iParam0++;
						}
					}
				}
				else if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -825.973f, 179.8889f, 72.44145f, 10f, 10f, 4f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_550, -825.973f, 179.8889f, 72.44145f, 10f, 10f, 4f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(Local_561, -825.973f, 179.8889f, 72.44145f, 10f, 10f, 4f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(Local_583, -825.973f, 179.8889f, 72.44145f, 10f, 10f, 4f, 0, 1, 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							*iParam0++;
						}
					}
					else
					{
						GlobalFunc_7139(&Local_740, 0);
						GlobalFunc_4935();
						GlobalFunc_5105();
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (bLocal_969 == 0)
				{
					if (func_571(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
					{
						bLocal_969 = true;
					}
				}
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 5f, 1, 1056964608, 0, 1))
				{
					if (!GlobalFunc_111())
					{
						*iParam0++;
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				*iParam0++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_550))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, func_566(Local_550, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -817.9304f, 177.7482f, 71.2278f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -808.3328f, 171.454f, 75.7457f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_550, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			if (!PED::IS_PED_INJURED(Local_583))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_583, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, func_566(Local_583, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -817.9304f, 177.7482f, 71.2278f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -803.5399f, 177.6053f, 75.7483f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_583, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
			}
			if (!PED::IS_PED_INJURED(Local_561))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_561, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, func_566(Local_561, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -817.9304f, 177.7483f, 71.22781f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -798.3951f, 183.6217f, 71.60547f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -775.5386f, 183.1969f, 71.83523f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(Local_561, uVar2);
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, func_566(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar3);
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
			}
			*iParam0++;
			break;
		
		case 4:
			if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_583, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_561, 0))
			{
				if (iLocal_965 == 1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_566(int iParam0, int iParam1)//Position - 0x738C2
{
	if (GlobalFunc_2522(iParam0, iParam1))
	{
		switch (GlobalFunc_2234(iParam0, iParam1))
		{
			case -1:
				return 1250;
				break;
			
			case 0:
				return 1500;
				break;
			
			case 1:
				return 250;
				break;
			
			case 2:
				return 50;
				break;
			
			default:
				return 0;
				break;
			}
	}
	return 0;
}





int func_571(int iParam0)//Position - 0x73B76
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 1) };
			if (Var0.f_1 < -1f)
			{
				return 1;
			}
		}
	}
	return 0;
}























































int func_626(char* sParam0)//Position - 0x76801
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_627(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_627(int iParam0)//Position - 0x76820
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1067)
	{
		if (iLocal_1036[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



void func_630(struct<3> Param0, float fParam3)//Position - 0x7686E
{
	if (!GlobalFunc_100(Param0, 0f, 0f, 0f))
	{
		if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > fParam3)
			{
				INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0));
			}
		}
	}
}

void func_631()//Position - 0x768B8
{
	if (!func_626("FAM6_HOME"))
	{
		if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			if (!GlobalFunc_5172(&Local_740, 1))
			{
				if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_HOME", 7, 0, 0, 0))
				{
					func_648("FAM6_HOME", 1);
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				}
			}
		}
	}
	else
	{
		if (!func_626("FAM6_CHAT1") && !func_626("FAM6_CHAT2"))
		{
			if (!GlobalFunc_5172(&Local_740, 1))
			{
				if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(Local_583, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::IS_PED_IN_VEHICLE(Local_561, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", GlobalFunc_1078(bLocal_955, "FAM6_CHAT2", "FAM6_CHAT1"), 7, 0, 0, 0))
							{
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
								func_648(GlobalFunc_1078(bLocal_955, "FAM6_CHAT2", "FAM6_CHAT1"), 1);
								iLocal_1007 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_1008 == 1)
		{
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if ((func_626("FAM6_BAD") || func_626("FAM6_HITPED")) || func_626("FAM6_WANTED"))
				{
					if ((func_626("FAM6_CHAT1") || func_626("FAM6_CHAT2")) || func_626("FAM6_WEIRD"))
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (!func_626("FAM6_LOSE_3"))
							{
								if (func_626("FAM6_WANTED"))
								{
									if (!func_626("FAM6_LOSE"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_LOSE", 7, 0, 0, 0))
										{
											iLocal_1006++;
											func_648("FAM6_LOSE", 1);
											if (iLocal_1006 >= 3)
											{
												func_648("FAM6_LOSE_3", 1);
											}
										}
									}
								}
							}
						}
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1017))
							{
								if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT1") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT2")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_WEIRD"))
								{
									if (iLocal_1003 >= 3 && !func_626("FAM6_WEIRD"))
									{
									}
									else if (GlobalFunc_10626(&uLocal_781, "FAM6AUD", &Local_1011, &cLocal_1017, 7, 0, 0))
									{
										iLocal_1008 = 0;
										func_648("FAM6_BAD", 0);
										func_648("FAM6_LOSE", 0);
										func_648("FAM6_HITPED", 0);
										func_648("FAM6_WANTED", 0);
									}
								}
							}
						}
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
		{
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (iLocal_1008 == 0)
			{
				if ((func_626("FAM6_CHAT1") || func_626("FAM6_CHAT2")) || func_626("FAM6_WEIRD"))
				{
					if (GlobalFunc_111())
					{
						Local_1011 = { GlobalFunc_560() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
						{
							if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT1") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT2")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_WEIRD"))
							{
								iLocal_1008 = 1;
								Local_1011 = { GlobalFunc_560() };
								cLocal_1017 = { GlobalFunc_514() };
								GlobalFunc_4956();
							}
						}
					}
				}
			}
			if (iLocal_1008 == 1)
			{
				if (!func_626("FAM6_WANTED"))
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_WANTED", 8, 0, 0, 0))
						{
							iLocal_1003++;
							func_648("FAM6_WANTED", 1);
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
						}
					}
				}
			}
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1002) > 5000)
			{
				if (!func_626("FAM6_HITPED_5"))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							iLocal_997 = 1;
						}
					}
					if (iLocal_997 == 1)
					{
						if ((func_626("FAM6_CHAT1") || func_626("FAM6_CHAT2")) || func_626("FAM6_WEIRD"))
						{
							if (GlobalFunc_111())
							{
								Local_1011 = { GlobalFunc_560() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
								{
									if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT1") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT2")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_WEIRD"))
									{
										Local_1011 = { GlobalFunc_560() };
										cLocal_1017 = { GlobalFunc_514() };
										iLocal_1008 = 1;
										GlobalFunc_4956();
									}
								}
							}
						}
						if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_HITPED", 7, 0, 0, 0))
						{
							iLocal_1003++;
							iLocal_1005++;
							iLocal_997 = 0;
							iLocal_1002 = MISC::GET_GAME_TIMER();
							func_648("FAM6_HITPED", 1);
							if (iLocal_1005 >= 5)
							{
								func_648("FAM6_HITPED_5", 1);
							}
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
						}
					}
				}
				if (!func_626("FAM6_BAD_3"))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_998 = 1;
					}
					if (iLocal_998 == 1)
					{
						if ((func_626("FAM6_CHAT1") || func_626("FAM6_CHAT2")) || func_626("FAM6_WEIRD"))
						{
							if (GlobalFunc_111())
							{
								Local_1011 = { GlobalFunc_560() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
								{
									if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT1") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_CHAT2")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_WEIRD"))
									{
										Local_1011 = { GlobalFunc_560() };
										cLocal_1017 = { GlobalFunc_514() };
										iLocal_1008 = 1;
										GlobalFunc_4956();
									}
								}
							}
						}
						if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_BAD", 7, 0, 0, 0))
						{
							iLocal_1003++;
							iLocal_1004++;
							iLocal_998 = 0;
							iLocal_1002 = MISC::GET_GAME_TIMER();
							func_648("FAM6_BAD", 1);
							if (iLocal_1004 >= 3)
							{
								func_648("FAM6_BAD_3", 1);
							}
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
						}
					}
				}
			}
			else
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
			}
		}
		if (!func_626("FAM6_WEIRD"))
		{
			if (iLocal_1003 >= 3)
			{
				if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(Local_583, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::IS_PED_IN_VEHICLE(Local_561, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_WEIRD", 7, 0, 0, 0))
								{
									iLocal_1008 = 0;
									func_648("FAM6_WEIRD", 1);
								}
							}
						}
					}
				}
			}
		}
		if (!func_626("FAM6_HOUSE"))
		{
			if (iLocal_999 == 0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_497, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 50f)
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_HOUSE", 7, 0, 0, 0))
							{
								func_648("FAM6_HOUSE", 1);
							}
						}
					}
				}
			}
		}
		if (iLocal_1007 == 1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if ((PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(Local_583, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::IS_PED_IN_VEHICLE(Local_561, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (GlobalFunc_111())
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
			}
			else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_583, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_561, 0))
			{
				if ((GlobalFunc_156(Local_550, PLAYER::PLAYER_PED_ID(), 1) < 10f && GlobalFunc_156(Local_583, PLAYER::PLAYER_PED_ID(), 1) < 10f) && GlobalFunc_156(Local_561, PLAYER::PLAYER_PED_ID(), 1) < 10f)
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (GlobalFunc_111())
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
		}
	}
}

















void func_648(char* sParam0, bool bParam1)//Position - 0x778D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_626(sParam0))
		{
			iVar1 = iLocal_1036;
			if (iLocal_1067 < iVar1)
			{
				iLocal_1036[iLocal_1067] = iVar0;
				iLocal_1067++;
			}
		}
	}
	else
	{
		iVar2 = func_627(iVar0);
		if (iVar2 != -1)
		{
			iLocal_1036[iVar2] = 0;
			func_649();
			iLocal_1067 = (iLocal_1067 - 1);
		}
	}
}

void func_649()//Position - 0x77938
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1036;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_1036[iVar1] == 0)
		{
			if (iLocal_1036[iVar1 + 1] != 0)
			{
				iLocal_1036[iVar1] = iLocal_1036[iVar1 + 1];
				iLocal_1036[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}


int func_651(int iParam0)//Position - 0x779DD
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_mcs_6", 1))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					if (PED::IS_PED_GROUP_MEMBER(Local_550, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_550);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550, "Jimmy", 0, Local_550.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_583))
				{
					if (PED::IS_PED_GROUP_MEMBER(Local_583, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_583);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_583, "Tracy", 0, Local_583.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_561))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_561, "Amanda", 0, Local_561.f_6, 0);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				AUDIO::STOP_AUDIO_SCENES();
				CUTSCENE::START_CUTSCENE(16);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
				func_551();
				func_550();
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (func_688(PLAYER::PLAYER_PED_ID(), &iVar0, 1, 0))
						{
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_634);
									Local_634 = iVar0;
								}
								GlobalFunc_2882(iVar0);
								ENTITY::SET_ENTITY_COORDS(iVar0, Local_634.f_2, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, Local_634.f_5);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
								VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar0, 2f);
								VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iVar0);
								GlobalFunc_9138(iVar0);
							}
						}
					}
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_765, 100f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_765, 100f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_765, 100f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_765, 100f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_765, 100f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_634) && !ENTITY::IS_ENTITY_DEAD(Local_634))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_634, 1);
				VEHICLE::_0xBE5C1255A1830FF5(Local_634, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_561))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_634, 0))
					{
						PED::FORCE_PED_MOTION_STATE(Local_561, -668482597, 0, 1, 0);
						TASK::TASK_ENTER_VEHICLE(Local_561, Local_634, 20000, 0, 1f, 1, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_583))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_634, 0))
					{
						PED::FORCE_PED_MOTION_STATE(Local_583, -668482597, 0, 1, 0);
						TASK::TASK_ENTER_VEHICLE(Local_583, Local_634, 20000, 2, 1f, 1, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_550, 1, 0, 0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_634, 0))
					{
						PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 1, 0);
						TASK::TASK_ENTER_VEHICLE(Local_550, Local_634, 20000, 1, 1f, 1, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (iLocal_962 == 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_765, Local_765.f_3, 0, 0, 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				GlobalFunc_8316(0, 1, 1, 0);
				GlobalFunc_10834(0, 24, 4000);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				return 1;
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
	}
	return 0;
}





































int func_688(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x79404
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*iParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*iParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*iParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, -1) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (GlobalFunc_4929(*iParam1, GlobalFunc_8315(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*iParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*iParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*iParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_689(int iParam0)//Position - 0x79534
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	MISC::SET_BIT(&(Local_740.f_13), 20);
	func_703(&Local_1030);
	func_702();
	func_694(&iLocal_948);
	func_630(Local_521, 100f);
	func_692(&iLocal_949);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_740.f_21) && !ENTITY::IS_ENTITY_DEAD(Local_740.f_21)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_740.f_21, 1))
	{
		if (!PED::IS_PED_IN_VEHICLE(Local_550, Local_740.f_21, 1) || !PED::IS_PED_IN_VEHICLE(Local_583, Local_740.f_21, 1))
		{
			func_691(&Local_740, 1);
		}
	}
	else
	{
		func_691(&Local_740, 0);
	}
	if (GlobalFunc_331() || GlobalFunc_2233())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_6") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_509, 1) < 100f)
	{
		CUTSCENE::REQUEST_CUTSCENE("fam_6_mcs_6", 8);
		if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_512)))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_512));
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			func_552();
			func_551();
			func_550();
			iLocal_965 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_509, 1) > (120f * 2f))
	{
		if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_512)))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_512));
		}
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_6") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
			iLocal_965 = 0;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 1);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_550))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_550, 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_550, 306.6965f, 171.195f, 102.9773f, 1f, 60000, 0.25f, 5, 1193033728);
					PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 0, 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_583))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_583, 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_583, 306.2086f, 174.418f, 103.0066f, 1f, 60000, 0.25f, 5, 1193033728);
					PED::FORCE_PED_MOTION_STATE(Local_583, -668482597, 0, 0, 1);
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				SYSTEM::WAIT(2);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (func_626("FAM6_DRF0"))
			{
				RECORDING::_0x293220DA1B46CEBC(0f, 15f, 4);
				GlobalFunc_690(&Local_740, Local_634);
				AUDIO::START_AUDIO_SCENE("FAMILY_6_DRIVE_TO_THERAPIST");
				*iParam0++;
			}
			break;
		
		case 1:
			GlobalFunc_9202(&Local_740, Local_509, GlobalFunc_716(), 1, Local_583, Local_550, 0, &Local_1030, "CMN_TCLEAVE", "CMN_JLEAVE", "", "FAM6_FAM", 0, 1, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_550) && GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_583))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 8f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							iLocal_967 = 1;
							*iParam0++;
						}
					}
				}
				else if (PED::IS_PED_GROUP_MEMBER(Local_550, GlobalFunc_468()) && PED::IS_PED_GROUP_MEMBER(Local_583, GlobalFunc_468()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 8f, 0, 1, 0))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
							{
								GlobalFunc_7139(&Local_740, 0);
								GlobalFunc_4935();
								GlobalFunc_5105();
								iLocal_967 = 1;
								*iParam0++;
							}
						}
						else if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_583, 0))
						{
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 16f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_550, -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 16f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_583, -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 16f, 0, 1, 0))
							{
								GlobalFunc_7139(&Local_740, 0);
								GlobalFunc_4935();
								GlobalFunc_5105();
								iLocal_967 = 1;
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2.5f, 1, 1056964608, 0, 1))
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						*iParam0++;
					}
				}
			}
			else if (!GlobalFunc_5172(&Local_740, 1))
			{
				*iParam0++;
			}
			break;
		
		case 3:
			iLocal_968 = 1;
			if (!PED::IS_PED_INJURED(Local_550))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, func_566(Local_550, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1913.512f, -568.2308f, 10.82617f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_550, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			if (!PED::IS_PED_INJURED(Local_583))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_583, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, func_566(Local_583, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1913.512f, -568.2308f, 10.82617f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_583, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, func_566(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1913.512f, -568.2308f, 10.82617f, 1f, 60000, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar2);
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
			}
			*iParam0++;
			break;
		
		case 4:
			if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_583, 0))
			{
				if (!PED::IS_PED_INJURED(Local_561))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_561, 128);
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_561, 8192);
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_561, 16);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_561, -1913.512f, -568.2308f, 10.82617f, 1f, 60000, 0.25f, 0, 1193033728);
				}
				CAM::DESTROY_ALL_CAMS(0);
				iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(iLocal_1024, -1887.256f, -532.6524f, 21.8295f, -8.7969f, 1.731f, 154.349f, 36.7f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_1024, -1887.397f, -532.799f, 23.3122f, -9.4823f, 1.731f, 154.349f, 36.7f, 15000, 0, 0, 2);
				CAM::SHAKE_CAM(iLocal_1024, "HAND_SHAKE", 0.1f);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				RECORDING::_0x293220DA1B46CEBC(16f, 0f, 4);
				RECORDING::_0x48621C9FCA3EBD28(4);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				Local_561.f_9 = MISC::GET_GAME_TIMER();
				*iParam0++;
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - Local_561.f_9) > 3000)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_965 == 1)
					{
						func_690(&Local_594, 1, 1, 1);
						func_690(&Local_605, 1, 1, 1);
						STREAMING::REMOVE_ANIM_DICT("missfam6leadinoutfam_6_mcs_5");
						STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@idle_a");
						if (!PED::IS_PED_INJURED(Local_561))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_561);
						}
						RECORDING::_0x81CBAE94390F9F89();
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

void func_690(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x79D9C
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(*iParam0);
					}
					PED::SET_PED_KEEP_TASK(*iParam0, iParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(*iParam0);
				}
			}
			PED::DELETE_PED(iParam0);
			if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
			{
				HUD::REMOVE_BLIP(&(iParam0->f_1));
			}
		}
		iParam0->f_9 = 0;
		iParam0->f_7 = 0;
		iParam0->f_10 = 0;
	}
}

void func_691(var uParam0, int iParam1)//Position - 0x79E83
{
	uParam0->f_15 = iParam1;
}

void func_692(int iParam0)//Position - 0x79E91
{
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfam6leadinoutfam_6_mcs_5");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfam6leadinoutfam_6_mcs_5"))
			{
				if (!PED::IS_PED_INJURED(Local_594))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_594, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_lazlow", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_594, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_lazlow", Local_533, Local_536, 1000f, -8f, -1, 4105, 0, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
					}
				}
				if (!PED::IS_PED_INJURED(Local_605))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_605, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_tattoo_guy", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_605, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_tattoo_guy", Local_539, Local_542, 1000f, -8f, -1, 4105, 0, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_605, 0, 0);
					}
				}
				iLocal_995 = 0;
				iLocal_994 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
				*iParam0++;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_594))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_594))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_594, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_lazlow", 3))
					{
						if (!func_626("FAM6_AWAY_3"))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_994) > 0)
							{
								if (!GlobalFunc_5172(&Local_740, 1))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 320.4468f, 178.034f, 104.4593f, 1.5f, 1.5f, 2f, 0, 1, 0))
									{
										GlobalFunc_173(&uLocal_781, 3, Local_594, "LAZLOW", 0, 1);
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_AWAY", 7, 0, 0, 0))
										{
											TASK::TASK_LOOK_AT_ENTITY(Local_594, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
											iLocal_995++;
											iLocal_994 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
											if (iLocal_995 >= 3)
											{
												func_648("FAM6_AWAY_3", 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_533, 1) > 150f)
			{
				func_690(&Local_594, 1, 1, 1);
				func_690(&Local_605, 1, 1, 1);
				STREAMING::REMOVE_ANIM_DICT("missfam6leadinoutfam_6_mcs_5");
				*iParam0++;
			}
			break;
	}
}


void func_694(int iParam0)//Position - 0x7A14C
{
	switch (*iParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_509, 1) < (100f * 2f))
			{
				*iParam0++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(Local_561.f_6);
			STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@idle_a");
			if (STREAMING::HAS_MODEL_LOADED(Local_561.f_6) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_impatient@female@no_sign@idle_a"))
			{
				MISC::CLEAR_AREA(Local_561.f_2, 3f, 1, 0, 0, 0);
				if (func_696(&Local_561, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1))
				{
					GlobalFunc_173(&uLocal_781, 4, Local_561, "AMANDA", 0, 1);
					func_695(&(Local_561.f_10));
					TASK::TASK_LOOK_AT_ENTITY(Local_561, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(Local_561, "amb@world_human_stand_impatient@female@no_sign@idle_a", "idle_c", 8f, -8f, -1, 786441, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_561, 1);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_561, 128);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_561, 8192);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_561, 16);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_561.f_6);
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_561))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_561, "amb@world_human_stand_impatient@female@no_sign@idle_a", "idle_c", 3))
				{
					PED::SET_PED_CAPSULE(Local_561, 0.25f);
					PED::SET_PED_RESET_FLAG(Local_561, 129, 1);
				}
			}
			break;
	}
}

void func_695(var uParam0)//Position - 0x7A2AB
{
	if (*uParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_561))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_561))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 2, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 3, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 4, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_561, 10, 1, 0, 0);
				*uParam0 = 1;
			}
		}
	}
}

int func_696(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x7A338
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			STREAMING::REQUEST_MODEL(uParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*uParam0 = PED::CREATE_PED(26, uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
					}
					else if (GlobalFunc_6705(uParam0, iParam4, uParam0->f_2, uParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*uParam0))
					{
						func_700(*uParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							uParam0->f_1 = GlobalFunc_6783(*uParam0, 0, 0);
						}
					}
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, uParam0->f_6, iParam9, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
						}
						else if (GlobalFunc_7140(uParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*uParam0))
						{
							func_700(*uParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
							if (iParam3 == 1)
							{
								uParam0->f_1 = GlobalFunc_6783(*uParam0, 0, 0);
							}
						}
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (iParam8 == 0)
			{
				if (func_203(uParam0, iParam4, uParam0->f_2, uParam0->f_5, 1, 0, 0))
				{
					func_700(*uParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
					if (iParam3 == 1)
					{
						uParam0->f_1 = GlobalFunc_6783(*uParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
				{
					if (func_533(uParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_700(*uParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							uParam0->f_1 = GlobalFunc_6783(*uParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}




void func_700(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7A608
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 104, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam3);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, iParam4);
			PED::SET_PED_AS_ENEMY(iParam0, iParam5);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam0, 1);
			PED::SET_PED_LOD_MULTIPLIER(iParam0, 5f);
			if (iParam1 != -86095805)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			}
		}
	}
}


void func_702()//Position - 0x7A70E
{
	struct<6> Var0;
	
	if (!func_626("FAM6_DRF0"))
	{
		if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_DRF0", 7, 0, 0, 0))
				{
					func_648("FAM6_DRF0", 1);
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				}
			}
		}
	}
	else
	{
		if (GlobalFunc_111())
		{
			Var0 = { GlobalFunc_560() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "FAM6_DRF0"))
				{
					if (GlobalFunc_156(Local_550, PLAYER::PLAYER_PED_ID(), 1) > 10f && GlobalFunc_156(Local_583, PLAYER::PLAYER_PED_ID(), 1) > 10f)
					{
						GlobalFunc_5105();
					}
				}
			}
		}
		if (!func_626("FAM6_DRF1") && !func_626("FAM6_DRF2"))
		{
			if (func_626(&Local_1030) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_1030))
			{
				if (!GlobalFunc_5172(&Local_740, 1))
				{
					if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(Local_583, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", GlobalFunc_1078(bLocal_955, "FAM6_DRF1", "FAM6_DRF2"), 7, 0, 0, 0))
								{
									PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
									func_648(GlobalFunc_1078(bLocal_955, "FAM6_DRF1", "FAM6_DRF2"), 1);
									iLocal_1007 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_1008 == 1)
		{
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if ((func_626("FAM6_JBAD") || func_626("FAM6_JWARN")) || func_626("FAM6_JWANT"))
				{
					if ((func_626("FAM6_DRF1") || func_626("FAM6_DRF2")) || func_626("FAM6_JTALK2"))
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (!func_626("FAM6_JLOST_3"))
							{
								if (func_626("FAM6_JWANT"))
								{
									if (!func_626("FAM6_JLOST"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JLOST", 7, 0, 0, 0))
										{
											iLocal_1006++;
											func_648("FAM6_JLOST", 1);
											if (iLocal_1006 >= 3)
											{
												func_648("FAM6_JLOST_3", 1);
											}
										}
									}
								}
							}
						}
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1017))
							{
								if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_DRF1") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_DRF2")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_JTALK2"))
								{
									if (iLocal_1003 >= 3 && !func_626("FAM6_JTALK2"))
									{
									}
									else if (GlobalFunc_10626(&uLocal_781, "FAM6AUD", &Local_1011, &cLocal_1017, 7, 0, 0))
									{
										iLocal_1008 = 0;
										func_648("FAM6_JBAD", 0);
										func_648("FAM6_JLOST", 0);
										func_648("FAM6_JWANT", 0);
									}
								}
							}
						}
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
		{
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (iLocal_1008 == 0)
			{
				if ((func_626("FAM6_DRF1") || func_626("FAM6_DRF2")) || func_626("FAM6_JTALK2"))
				{
					if (GlobalFunc_111())
					{
						Local_1011 = { GlobalFunc_560() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
						{
							if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_DRF1") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_DRF2")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_JTALK2"))
							{
								iLocal_1008 = 1;
								Local_1011 = { GlobalFunc_560() };
								cLocal_1017 = { GlobalFunc_514() };
								GlobalFunc_4956();
							}
						}
					}
				}
			}
			if (iLocal_1008 == 1)
			{
				if (!func_626("FAM6_JWANT"))
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JWANT", 8, 0, 0, 0))
						{
							iLocal_1003++;
							iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 12500));
							func_648("FAM6_JWANT", 1);
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
						}
					}
				}
			}
			if (!func_626("FAM6_JLOSE_5"))
			{
				if (func_626("FAM6_JWANT"))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_1001) > 0)
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JLOSE", 7, 0, 0, 0))
							{
								iLocal_1000++;
								iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12500, 15000));
								if (iLocal_1000 >= 5)
								{
									func_648("FAM6_JLOSE_5", 1);
								}
							}
						}
					}
				}
			}
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1002) > 5000)
			{
				if (!func_626("FAM6_JBAD_5") && !func_626("FAM6_JWARN_6"))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							iLocal_997 = 1;
						}
					}
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_998 = 1;
					}
					if (iLocal_997 == 1 || iLocal_998 == 1)
					{
						if ((func_626("FAM6_DRF1") || func_626("FAM6_DRF2")) || func_626("FAM6_JTALK2"))
						{
							if (GlobalFunc_111())
							{
								Local_1011 = { GlobalFunc_560() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
								{
									if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_DRF1") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_DRF2")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_JTALK2"))
									{
										Local_1011 = { GlobalFunc_560() };
										cLocal_1017 = { GlobalFunc_514() };
										iLocal_1008 = 1;
										GlobalFunc_4956();
									}
								}
							}
						}
						if (!func_626("FAM6_JTALK2"))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JBAD", 7, 0, 0, 0))
							{
								iLocal_1003++;
								iLocal_1004++;
								iLocal_997 = 0;
								iLocal_998 = 0;
								iLocal_1002 = MISC::GET_GAME_TIMER();
								func_648("FAM6_JBAD", 1);
								if (iLocal_1004 >= 5)
								{
									func_648("FAM6_JBAD_5", 1);
								}
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							}
						}
						else if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JWARN", 7, 0, 0, 0))
						{
							iLocal_1003++;
							iLocal_1004++;
							iLocal_997 = 0;
							iLocal_998 = 0;
							iLocal_1002 = MISC::GET_GAME_TIMER();
							func_648("FAM6_JWARN", 1);
							if (iLocal_1004 >= 6)
							{
								func_648("FAM6_JWARN_6", 1);
							}
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
						}
					}
				}
			}
			else
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
			}
		}
		if (!func_626("FAM6_JTALK2"))
		{
			if (iLocal_1003 >= 3)
			{
				if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(Local_583, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JTALK2", 7, 0, 0, 0))
								{
									iLocal_1008 = 0;
									func_648("FAM6_JTALK2", 1);
								}
							}
						}
					}
				}
			}
		}
		if (!func_626("FAM6_GREET"))
		{
			if (iLocal_967 == 1)
			{
				iLocal_1007 = 0;
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
				if (!GlobalFunc_5172(&Local_740, 1))
				{
					if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_GREET", 7, 0, 0, 0))
					{
						func_648("FAM6_GREET", 1);
						if (!PED::IS_PED_INJURED(Local_561))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_561, PLAYER::PLAYER_PED_ID(), -1, 3074, 4);
						}
					}
				}
			}
		}
	}
	if (iLocal_1007 == 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(Local_583, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (GlobalFunc_111())
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
		}
		else if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_583, 0))
		{
			if (GlobalFunc_156(Local_550, PLAYER::PLAYER_PED_ID(), 1) < 10f && GlobalFunc_156(Local_583, PLAYER::PLAYER_PED_ID(), 1) < 10f)
			{
				if (GlobalFunc_111())
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
		}
		else if (GlobalFunc_111())
		{
			if (!GlobalFunc_620())
			{
				GlobalFunc_619(1);
			}
		}
	}
}

void func_703(char* sParam0)//Position - 0x7AFB1
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_626(sParam0))
		{
			if (GlobalFunc_663(sParam0, 0, 0))
			{
				func_648(sParam0, 1);
			}
		}
		else if (!GlobalFunc_663(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}


int func_705(int iParam0)//Position - 0x7B013
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_mcs_5", 1))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550, "Jimmy", 0, Local_550.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_583))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_583, "Tracy", 0, Local_583.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_594))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_594, "Lazlow", 0, Local_594.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_605))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_605, "Tattooist", 2, Local_605.f_6, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_674))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_674))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_674, "Tattoo_Scissors", 1, Local_674.f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_685))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_685))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_685))
						{
							ENTITY::DETACH_ENTITY(Local_685, 0, 1);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_685, "Lazlow_Pony", 1, Local_685.f_1, 0);
					}
				}
				GlobalFunc_8316(1, 1, 1, 0);
				AUDIO::STOP_AUDIO_SCENES();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				func_552();
				func_551();
				func_706(1, 1, 1, 1, bLocal_961);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1024))
				{
					CAM::DESTROY_CAM(iLocal_1024, 0);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_1025))
				{
					CAM::DESTROY_CAM(iLocal_1025, 0);
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1023))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1023, 0);
				}
				STREAMING::REMOVE_PTFX_ASSET();
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				STREAMING::REMOVE_ANIM_DICT("missfam6ig_1_pierce");
				STREAMING::REMOVE_ANIM_DICT("missfam6ig_7_tattoo");
				STREAMING::REMOVE_ANIM_DICT("missfam6ig_8_ponytail");
				GlobalFunc_8316(0, 1, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam6leadinoutfam_6_mcs_5");
			if (!ENTITY::DOES_ENTITY_EXIST(Local_605))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Tattooist", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tattooist", 0)))
					{
						Local_605 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tattooist", 0));
						func_700(Local_605, 1862763509, 0, 1, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), 315.4439f, 175.392f, 102.8468f, 106.3951f, 0, 0, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 1);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_550, 1, 0, 0, 0);
					GlobalFunc_2519(Local_550, 313.6881f, 174.4399f, 102.8722f, 101.026f, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_550, 306.6965f, 171.195f, 102.9773f, 1f, 60000, 0.25f, 5, 1193033728);
					PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 1, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_583))
				{
					GlobalFunc_2519(Local_583, 313.3786f, 176.4375f, 102.8908f, 95.2572f, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_583, 306.2086f, 174.418f, 103.0066f, 1f, 60000, 0.25f, 5, 1193033728);
					PED::FORCE_PED_MOTION_STATE(Local_583, -668482597, 0, 1, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lazlow", 0))
			{
				if (!PED::IS_PED_INJURED(Local_594))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam6leadinoutfam_6_mcs_5"))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_594, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_lazlow", 3))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_594, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_lazlow", Local_533, Local_536, 1000f, -8f, -1, 4105, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_594, 1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tattooist", 0))
			{
				if (!PED::IS_PED_INJURED(Local_605))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam6leadinoutfam_6_mcs_5"))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_605, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_tattoo_guy", 3))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_605, "missfam6leadinoutfam_6_mcs_5", "_leadout_loop_tattoo_guy", Local_539, Local_542, 1000f, -8f, -1, 4105, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_605, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_605, 1);
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				return 1;
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
	}
	return 0;
}

void func_706(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7B4CD
{
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 0, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 4, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 5, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 6, 1, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 7, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 8, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 10, 0, 0, 0);
	if (iParam2 == 0)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 2, 0, 0, 0);
	}
	else
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 2, 1, 0, 0);
	}
	if (iParam0 == 0)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 3, 2, 0, 0);
	}
	else
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 3, 1, 0, 0);
	}
	if (iParam1 == 0)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 9, 0, 0, 0);
	}
	else
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 9, 0, 7, 0);
	}
	if (bParam3)
	{
		if (bParam4)
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 10, 0, 5, 0);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 10, 1, 5, 0);
		}
	}
	else
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lazlow", 10, 0, 0, 0);
	}
}

int func_707(int iParam0)//Position - 0x7B5D7
{
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978))
			{
				STREAMING::REQUEST_PTFX_ASSET();
				STREAMING::REQUEST_MODEL(Local_674.f_1);
				STREAMING::REQUEST_MODEL(Local_685.f_1);
				STREAMING::REQUEST_ANIM_DICT("missfam6ig_8_ponytail");
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PONYTAIL", 0);
				if ((((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_MODEL_LOADED(Local_674.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_685.f_1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PONYTAIL", 0)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_8_ponytail"))
				{
					iLocal_978 = PED::CREATE_SYNCHRONIZED_SCENE(Local_527, Local_530, 2);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_978, "missfam6ig_8_ponytail", "ig_7_loop_michael", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_594))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_978, "missfam6ig_8_ponytail", "ig_7_loop_lazlow", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
					}
					if (func_709(&Local_674, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_674) && !ENTITY::IS_ENTITY_DEAD(Local_674))
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_674, iLocal_978, "ig_7_loop_scissors", "missfam6ig_8_ponytail", 1000f, -4f, 0, 1148846080);
						}
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_1025))
					{
						iLocal_1025 = CAM::CREATE_CAMERA(964613260, 1);
						CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_7_Loop_cam", "missfam6ig_8_ponytail", Local_527, Local_530, 1, 2);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_674.f_1);
				}
			}
			else
			{
				iLocal_1009 = 0;
				iLocal_1010 = 0;
				iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				AUDIO::START_AUDIO_SCENE("FAMILY_6_HAIRCUT_LAZLOW_MG");
				RECORDING::_0x48621C9FCA3EBD28(3);
				iLocal_1035 = 1;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (!func_626("FAM6_SCIS"))
				{
					GlobalFunc_Display_Help_Text("FAM6_SCIS");
					func_648("FAM6_SCIS", 1);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978))
			{
				if (!func_626("FAM6_IDLES_4"))
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1009) > 0)
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_IDLES", 7, 0, 0, 0))
							{
								iLocal_1010++;
								iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000));
								if (iLocal_1010 >= 4)
								{
									func_648("FAM6_IDLES_4", 1);
								}
							}
						}
					}
				}
				if (iLocal_996 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_996) > 0)
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_STRUG", 7, 1, 0, 0))
							{
								iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 6000));
							}
						}
					}
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_978) >= 1f))
			{
				iLocal_978 = PED::CREATE_SYNCHRONIZED_SCENE(Local_527, Local_530, 2);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_978, "missfam6ig_8_ponytail", "ig_7_loop_michael", 4f, -4f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_594))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_978, "missfam6ig_8_ponytail", "ig_7_loop_lazlow", 4f, -4f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_674) && !ENTITY::IS_ENTITY_DEAD(Local_674))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_674, iLocal_978, "ig_7_loop_scissors", "missfam6ig_8_ponytail", 4f, -4f, 0, 1148846080);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978) && PAD::IS_CONTROL_JUST_PRESSED(2, 223))
			{
				iLocal_978 = PED::CREATE_SYNCHRONIZED_SCENE(Local_527, Local_530, 2);
				if (func_709(&Local_685, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_685) && !ENTITY::IS_ENTITY_DEAD(Local_685))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_685, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
				CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_7_Outro_Cam", "missfam6ig_8_ponytail", Local_527, Local_530, 0, 2);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_978, "missfam6ig_8_ponytail", "ig_7_outro_michael", 4f, -4f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_594))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_978, "missfam6ig_8_ponytail", "ig_7_outro_lazlow", 4f, -4f, 0, 0, 1148846080, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_674) && !ENTITY::IS_ENTITY_DEAD(Local_674))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_674, iLocal_978, "ig_7_outro_scissors", "missfam6ig_8_ponytail", 4f, -4f, 0, 1148846080);
				}
				HUD::CLEAR_HELP(1);
				*iParam0++;
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_978) >= 0.05f)
			{
				PAD::SET_PAD_SHAKE(0, 150, 120);
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_594);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Snip_Ponytail", Local_674, "FAMILY_6_SOUNDS", 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 2, 1, 0, 0);
				uLocal_1023 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("cs_fam6_hair_snip", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 60309, 1065353216, 0, 0, 0);
				RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
				*iParam0++;
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_978) >= 0.85f || (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_978) >= 0.45f && !GlobalFunc_111()))
				{
					if (iLocal_965 == 1)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (iLocal_1035 == 1)
						{
							if (iLocal_1034 == 0)
							{
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_1034 = 1;
							}
						}
						return 1;
					}
				}
			}
			break;
	}
	CUTSCENE::REQUEST_CUTSCENE("fam_6_mcs_5", 8);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
		func_552();
		func_551();
		func_706(1, 1, 1, 1, bLocal_961);
		iLocal_965 = 1;
	}
	return 0;
}


int func_709(var uParam0, int iParam1)//Position - 0x7BC12
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, uParam0->f_2, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, uParam0->f_2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_5, 2, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, iParam1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_710(int iParam0)//Position - 0x7BC93
{
	var uVar0;
	
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfam6ig_7_tattoo");
			switch (iLocal_548)
			{
				case 0:
				case 2:
					bLocal_961 = false;
					if (GlobalFunc_5927("fam_6_mcs_4", 19) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo"))
					{
						if (!PED::IS_PED_INJURED(Local_594))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_594, "Lazlow", 0, Local_594.f_6, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_707))
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_988))
							{
								AUDIO::STOP_SOUND(iLocal_988);
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_707))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_707))
								{
									ENTITY::DETACH_ENTITY(Local_707, 0, 1);
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_707, "Tattoo_Gun", 1, Local_707.f_1, 0);
							}
						}
						GlobalFunc_8316(1, 1, 1, 0);
						AUDIO::STOP_AUDIO_SCENES();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						*iParam0++;
					}
					else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
						func_552();
						func_551();
						func_706(1, 1, 0, 1, bLocal_961);
					}
					break;
				
				case 1:
					bLocal_961 = true;
					if (GlobalFunc_5927("fam_6_mcs_4", 28) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo"))
					{
						if (!PED::IS_PED_INJURED(Local_594))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_594, "Lazlow", 0, Local_594.f_6, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_707))
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_988))
							{
								AUDIO::STOP_SOUND(iLocal_988);
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_707))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_707))
								{
									ENTITY::DETACH_ENTITY(Local_707, 0, 1);
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_707, "Tattoo_Gun", 1, Local_707.f_1, 0);
							}
						}
						GlobalFunc_8316(1, 1, 1, 0);
						AUDIO::STOP_AUDIO_SCENES();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						*iParam0++;
					}
					else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
						func_552();
						func_551();
						func_706(1, 1, 0, 1, bLocal_961);
					}
					break;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_2943(&Local_652, 1);
				GlobalFunc_2943(&Local_696, 1);
				if (CAM::DOES_CAM_EXIST(iLocal_1024))
				{
					CAM::DESTROY_CAM(iLocal_1024, 0);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_1025))
				{
					CAM::DESTROY_CAM(iLocal_1025, 0);
				}
				if (!PED::IS_PED_INJURED(Local_583))
				{
					GlobalFunc_2519(Local_583, 321.5814f, 181.3482f, 102.5865f, -125.61f, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_01_tracey", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_583, Local_594, -1, 2048, 2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_550))
				{
					GlobalFunc_2519(Local_550, 321.6517f, 182.5264f, 102.5865f, -115.96f, 0, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_594, 0);
					TASK::TASK_PLAY_ANIM(0, "missfam6ig_7_tattoo", "ig_7_idle_02_jimmy", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_550, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::TASK_LOOK_AT_COORD(Local_550, 324.5798f, 178.6013f, 102.5925f, -1, 2096, 2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_550, 0, 0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(Local_674.f_1);
			STREAMING::REQUEST_MODEL(Local_685.f_1);
			STREAMING::REQUEST_ANIM_DICT("missfam6ig_8_ponytail");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PONYTAIL", 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(iLocal_1024, 323.9763f, 177.9908f, 102.7844f, 23.5296f, 13.843f, -15.5478f, 45f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lazlow", 0))
			{
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() || CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_MODEL_LOADED(Local_674.f_1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PONYTAIL", 0)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_8_ponytail"))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_978))
					{
						iLocal_978 = PED::CREATE_SYNCHRONIZED_SCENE(Local_527, Local_530, 2);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_978, "missfam6ig_8_ponytail", "ig_7_loop_michael", 1000f, -4f, 0, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_594))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_978, "missfam6ig_8_ponytail", "ig_7_loop_lazlow", 1000f, -4f, 0, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
						}
						if (func_709(&Local_674, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_674) && !ENTITY::IS_ENTITY_DEAD(Local_674))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_674, iLocal_978, "ig_7_loop_scissors", "missfam6ig_8_ponytail", 1000f, -4f, 0, 1148846080);
							}
						}
						if (!CAM::DOES_CAM_EXIST(iLocal_1025))
						{
							iLocal_1025 = CAM::CREATE_CAMERA(964613260, 1);
							CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_7_Loop_cam", "missfam6ig_8_ponytail", Local_527, Local_530, 1, 2);
						}
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_674.f_1);
						GlobalFunc_8316(0, 1, 1, 0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						return 1;
					}
				}
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
	}
	return 0;
}


int func_712(int iParam0)//Position - 0x7C254
{
	var uVar0;
	
	func_726();
	switch (*iParam0)
	{
		case 0:
			bLocal_961 = false;
			iLocal_548 = 0;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
			{
				if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					STREAMING::REQUEST_MODEL(Local_707.f_1);
					STREAMING::REQUEST_ANIM_DICT("missfam6ig_7_tattoo");
					uLocal_1028 = unk_0x67D02A194A2FC2BD("tattoo_buttons");
					if (MISC::IS_PC_VERSION())
					{
						uLocal_1029 = unk_0x67D02A194A2FC2BD("tattoo_keys");
					}
					if ((func_725() && STREAMING::HAS_MODEL_LOADED(Local_707.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo"))
					{
						if (func_709(&Local_707, 0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_707, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(PLAYER::PLAYER_PED_ID(), "minigame_tattoo_michael_parts", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Local_594, "minigame_tattoo_lazlow_parts", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
						if (!CAM::DOES_CAM_EXIST(iLocal_1024))
						{
							iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
							CAM::SET_CAM_PARAMS(iLocal_1024, 326.1551f, 179.2442f, 104.5627f, -36.8795f, 13.434f, 33.84f, 52f, 0, 1, 1, 2);
							CAM::SHAKE_CAM(iLocal_1024, "HAND_SHAKE", 0.5f);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						}
						if (!CAM::DOES_CAM_EXIST(iLocal_1025))
						{
							iLocal_1025 = CAM::CREATE_CAMERA(964613260, 0);
						}
						if (!PED::IS_PED_INJURED(Local_550))
						{
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_594, 0);
							TASK::TASK_PLAY_ANIM(0, "missfam6ig_7_tattoo", "ig_7_idle_02_jimmy", 1.5f, -1.5f, -1, 9, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_550, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_550, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_550, 1);
						}
						if (!PED::IS_PED_INJURED(Local_583))
						{
							TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_01_tracey", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_583, 1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_707.f_1);
					}
				}
				else
				{
					iLocal_1010 = 0;
					iLocal_993 = 0;
					iLocal_990 = 0;
					iLocal_991 = 0;
					iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
					iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(250, 1000));
					iLocal_979 = 0;
					iLocal_980 = 0;
					iLocal_989 = 0;
					fLocal_982 = 0f;
					bLocal_961 = false;
					bLocal_983 = false;
					iLocal_548 = 0;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					AUDIO::START_AUDIO_SCENE("FAMILY_6_TATTOO_LAZLOW_MG");
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_1035 = 1;
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					func_724();
					iLocal_492 = 0;
					iLocal_493 = 0;
					*iParam0++;
				}
			}
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (!func_626("FAM6_TATCH"))
				{
					GlobalFunc_Display_Help_Text("FAM6_TATCH");
					func_648("FAM6_TATCH", 1);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 225))
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "back");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "back");
							CAM::SET_CAM_ACTIVE(iLocal_1025, 1);
							CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_7_back_intro_cam", "missfam6ig_7_tattoo", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 0, 2);
							bLocal_961 = false;
							iLocal_548 = 2;
							Global_Mission_Fail_State.f_12[0] = 2;
							GlobalFunc_553(255);
							GlobalFunc_574(254, 0);
							*iParam0++;
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 224))
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "front");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "front");
							CAM::SET_CAM_ACTIVE(iLocal_1025, 1);
							CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_7_front_intro_cam", "missfam6ig_7_tattoo", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 0, 2);
							bLocal_961 = true;
							iLocal_548 = 1;
							Global_Mission_Fail_State.f_12[0] = 1;
							GlobalFunc_574(254, 0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 1500));
						*iParam0++;
					}
				}
			}
			break;
		
		case 3:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (!func_626("FAM6_TAT"))
				{
					GlobalFunc_Display_Help_Text("FAM6_TAT");
					func_648("FAM6_TAT", 1);
				}
			}
			func_715();
			func_726();
			if (fLocal_982 >= 1f)
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				*iParam0++;
			}
			break;
		
		case 4:
			if (func_626("FAM6_TATFIN"))
			{
				if (!GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
					{
						if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
						{
							if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
							{
								if (fLocal_982 >= 1f)
								{
									TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "success");
									TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "success");
									GlobalFunc_571(0, -1);
									*iParam0++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (iLocal_1035 == 1)
						{
							if (iLocal_1034 == 0)
							{
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_1034 = 1;
							}
						}
						func_713();
						return 1;
					}
				}
			}
			break;
	}
	switch (iLocal_548)
	{
		case 2:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fam_6_mcs_4", 19, 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
				func_551();
				func_706(1, 1, 0, 1, bLocal_961);
				iLocal_965 = 1;
			}
			break;
		
		case 1:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fam_6_mcs_4", 28, 8);
			GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
			func_552();
			func_551();
			func_706(1, 1, 0, 1, bLocal_961);
			iLocal_965 = 1;
			break;
	}
	return 0;
}

void func_713()//Position - 0x7C924
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_972)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_972 = 0;
		}
	}
}


void func_715()//Position - 0x7C9DB
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uVar0 = uLocal_1029;
	}
	else
	{
		uVar0 = uLocal_1028;
	}
	if (bLocal_984)
	{
		iVar3 = func_720(1);
		iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
		iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			if (iVar1 == 0 && iVar2 == 0)
			{
				iVar1 = iLocal_492;
				iVar2 = iLocal_493;
			}
			iLocal_492 = iVar1;
			iLocal_493 = iVar2;
		}
		if (func_725())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			HUD::SET_WIDESCREEN_FORMAT(1);
			if (((GRAPHICS::GET_IS_WIDESCREEN() == 0 || MISC::GET_PROFILE_SETTING(206) == 8) || MISC::GET_PROFILE_SETTING(206) == 9) || MISC::GET_PROFILE_SETTING(206) == 10)
			{
				fLocal_496 = 0.745f;
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE(uVar0, fLocal_495, fLocal_496, (0.39f * 1.2f), (0.10425f * 1.2f), 100, 100, 100, 255, 0);
			}
			if (iLocal_548 == 1)
			{
				fLocal_981 = 0.005f;
				func_719(&uLocal_1028, &iLocal_979);
				if (MISC::IS_PC_VERSION())
				{
					func_719(&uLocal_1029, &iLocal_980);
				}
			}
			else if (iLocal_548 == 2)
			{
				fLocal_981 = 0.005f;
				func_718(&uLocal_1028, &iLocal_979);
				if (MISC::IS_PC_VERSION())
				{
					func_718(&uLocal_1029, &iLocal_980);
				}
			}
			if (bLocal_983)
			{
				if (!func_716(1))
				{
					switch (iLocal_549)
					{
						case 8:
							if (iVar1 >= -40 && iVar1 <= 40)
							{
								fVar5 = -127f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT(iVar2), fVar5, 0f);
							}
							break;
						
						case 9:
							if (iVar1 >= 45 && iVar2 <= -45)
							{
								fVar5 = 192f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT((iVar1 + -iVar2)), 0f, fVar5);
							}
							break;
						
						case 10:
							if (iVar2 >= -40 && iVar2 <= 40)
							{
								fVar5 = 127f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT(iVar1), 0f, fVar5);
							}
							break;
						
						case 11:
							if (iVar1 >= 45 && iVar2 >= 45)
							{
								fVar5 = 192f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT((iVar1 + iVar2)), 0f, fVar5);
							}
							break;
						
						case 12:
							if (iVar1 >= -40 && iVar1 <= 40)
							{
								fVar5 = 127f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT(iVar2), 0f, fVar5);
							}
							break;
						
						case 13:
							if (iVar1 <= -45 && iVar2 >= 45)
							{
								fVar5 = 192f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT((-iVar1 + iVar2)), 0f, fVar5);
							}
							break;
						
						case 14:
							if (iVar2 >= -40 && iVar2 <= 40)
							{
								fVar5 = -127f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT(iVar1), fVar5, 0f);
							}
							break;
						
						case 15:
							if (iVar1 <= -45 && iVar2 <= -45)
							{
								fVar5 = 192f;
								fVar4 = GlobalFunc_253(SYSTEM::TO_FLOAT((-iVar1 + -iVar2)), 0f, fVar5);
							}
							break;
						}
				}
				if (!func_716(1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uVar0, "SET_STICK_POINTER_ANGLE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					if (MISC::ABSF(fVar4) > 0f)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(129);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uVar0, "SET_STICK_POINTER_ANGLE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				fVar6 = (fVar4 / fVar5);
				fVar7 = (fVar6 * fLocal_981);
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_988))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_988, "DoTattoo", fVar6);
				}
				if (fVar6 <= 0f)
				{
					PAD::SET_PAD_SHAKE(0, 100, 50);
				}
				else
				{
					PAD::SET_PAD_SHAKE(0, 250, SYSTEM::ROUND((256f * fVar6)));
				}
				fLocal_982 = GlobalFunc_253((fLocal_982 + fVar7), 0f, 1f);
			}
			else
			{
				PAD::SET_PAD_SHAKE(0, 100, 50);
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_988))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_988, "DoTattoo", 0f);
				}
			}
		}
	}
}

int func_716(int iParam0)//Position - 0x7CDB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	var uVar5;
	var uVar6;
	
	GlobalFunc_612(&iVar0, &iVar1, &iVar2, &iVar3, 0);
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (bLocal_494)
		{
			uVar5 = iVar2;
			uVar6 = iVar3;
			iVar2 = iVar0;
			iVar3 = iVar1;
			iVar0 = uVar5;
			iVar1 = uVar6;
		}
	}
	switch (iParam0)
	{
		case 0:
			if (((PAD::_IS_USING_KEYBOARD(2) && iLocal_492 != 0) && iLocal_493 != 0) && bLocal_494 == 1)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar0), IntToFloat(iVar1), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (((PAD::_IS_USING_KEYBOARD(2) && iLocal_492 != 0) && iLocal_493 != 0) && bLocal_494 == 0)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar2), IntToFloat(iVar3), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
	}
	return 0;
}


void func_718(var uParam0, int iParam1)//Position - 0x7CF6A
{
	switch (*iParam1)
	{
		case 0:
			bLocal_983 = false;
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*iParam1++;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(13);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(12);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*iParam1++;
			break;
		
		case 2:
			*iParam1++;
			break;
		
		case 3:
			iLocal_549 = 13;
			bLocal_983 = true;
			*iParam1++;
			break;
		
		case 4:
			if (fLocal_982 >= 0.066f)
			{
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "BackPartOne");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "BackPartOne");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iLocal_549 = 12;
							fLocal_981 = 0.005f;
							fLocal_982 = 0.066f;
							bLocal_983 = true;
							*iParam1++;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 5:
			if (fLocal_982 >= 0.133f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 11;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.133f;
					bLocal_983 = true;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 6:
			if (fLocal_982 >= 0.2f)
			{
				bLocal_983 = false;
				fLocal_982 = 0.2f;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "BackPartTwo");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "BackPartTwo");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 1, 1, 0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iLocal_549 = 8;
							fLocal_981 = 0.005f;
							fLocal_982 = 0.2f;
							bLocal_983 = true;
							*iParam1++;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 7:
			if (fLocal_982 >= 0.4f)
			{
				bLocal_983 = false;
				fLocal_982 = 0.4f;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "BackPartThree");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "BackPartThree");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							fLocal_981 = 0.005f;
							fLocal_982 = 0.4f;
							*iParam1++;
							iLocal_549 = 9;
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 1, 2, 0);
							bLocal_983 = true;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 8:
			if (fLocal_982 >= 0.466f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(12);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					fLocal_981 = 0.005f;
					fLocal_982 = 0.466f;
					iLocal_549 = 10;
					bLocal_983 = true;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 9:
			if (fLocal_982 >= 0.533f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 11;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.533f;
					bLocal_983 = true;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 10:
			if (fLocal_982 >= 0.6f)
			{
				fLocal_982 = 0.6f;
				bLocal_983 = false;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "BackPartFour");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "BackPartFour");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 1, 3, 0);
							iLocal_549 = 12;
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(12);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							fLocal_981 = 0.005f;
							fLocal_982 = 0.6f;
							bLocal_983 = true;
							*iParam1++;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 11:
			if (fLocal_982 >= 0.8f)
			{
				fLocal_982 = 0.8f;
				bLocal_983 = false;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "BackPartFive");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "BackPartFive");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(13);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 1, 4, 0);
							iLocal_549 = 11;
							fLocal_981 = 0.005f;
							fLocal_982 = 0.8f;
							*iParam1++;
							bLocal_983 = true;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 12:
			if (fLocal_982 >= 0.866f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 12;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.866f;
					*iParam1++;
					bLocal_983 = true;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 13:
			if (fLocal_982 >= 0.933f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 13;
					bLocal_983 = true;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.933f;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 14:
			if (fLocal_982 >= 0.99f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					fLocal_981 = 0.005f;
					fLocal_982 = 1f;
					*iParam1 = 0;
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 1, 5, 0);
					iLocal_549 = 13;
				}
			}
			break;
	}
}

void func_719(var uParam0, int iParam1)//Position - 0x7D5A1
{
	switch (*iParam1)
	{
		case 0:
			bLocal_983 = false;
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*iParam1++;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(13);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(12);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*iParam1++;
			break;
		
		case 2:
			*iParam1++;
			break;
		
		case 3:
			iLocal_549 = 13;
			bLocal_983 = true;
			*iParam1++;
			break;
		
		case 4:
			if (fLocal_982 >= 0.066f)
			{
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "PartOne");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "PartOne");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iLocal_549 = 12;
							fLocal_981 = 0.005f;
							fLocal_982 = 0.066f;
							bLocal_983 = true;
							*iParam1++;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 5:
			if (fLocal_982 >= 0.133f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 11;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.133f;
					bLocal_983 = true;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 6:
			if (fLocal_982 >= 0.2f)
			{
				bLocal_983 = false;
				fLocal_982 = 0.2f;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "PartTwo");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "PartTwo");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 1, 0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iLocal_549 = 8;
							fLocal_981 = 0.005f;
							fLocal_982 = 0.2f;
							bLocal_983 = true;
							*iParam1++;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 7:
			if (fLocal_982 >= 0.4f)
			{
				bLocal_983 = false;
				fLocal_982 = 0.4f;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "PartThree");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "PartThree");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							fLocal_981 = 0.005f;
							fLocal_982 = 0.4f;
							*iParam1++;
							iLocal_549 = 9;
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 2, 0);
							bLocal_983 = true;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 8:
			if (fLocal_982 >= 0.466f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(12);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					fLocal_981 = 0.005f;
					fLocal_982 = 0.466f;
					iLocal_549 = 10;
					bLocal_983 = true;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 9:
			if (fLocal_982 >= 0.533f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 11;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.533f;
					bLocal_983 = true;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 10:
			if (fLocal_982 >= 0.6f)
			{
				fLocal_982 = 0.6f;
				bLocal_983 = false;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "PartFour");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "PartFour");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 3, 0);
							iLocal_549 = 12;
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(12);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							fLocal_981 = 0.005f;
							fLocal_982 = 0.6f;
							bLocal_983 = true;
							*iParam1++;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 11:
			if (fLocal_982 >= 0.8f)
			{
				fLocal_982 = 0.8f;
				bLocal_983 = false;
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Local_594))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "PartFive");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Local_594, "PartFive");
						if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(13);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 4, 0);
							iLocal_549 = 11;
							fLocal_981 = 0.005f;
							fLocal_982 = 0.8f;
							*iParam1++;
							bLocal_983 = true;
						}
						else
						{
							bLocal_983 = false;
						}
					}
				}
			}
			break;
		
		case 12:
			if (fLocal_982 >= 0.866f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 12;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.866f;
					*iParam1++;
					bLocal_983 = true;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 13:
			if (fLocal_982 >= 0.933f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_549 = 13;
					bLocal_983 = true;
					fLocal_981 = 0.005f;
					fLocal_982 = 0.933f;
					*iParam1++;
				}
				else
				{
					bLocal_983 = false;
				}
			}
			break;
		
		case 14:
			if (fLocal_982 >= 0.99f)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BUTTON"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					fLocal_981 = 0.005f;
					fLocal_982 = 1f;
					*iParam1 = 0;
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 5, 0);
					iLocal_549 = 13;
				}
			}
			break;
	}
}

int func_720(int iParam0)//Position - 0x7DBD8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	
	GlobalFunc_255(&iVar2, &iVar3, &iVar4, &iVar5, 0, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bLocal_494)
		{
			uVar6 = iVar4;
			uVar7 = iVar5;
			iVar4 = iVar2;
			iVar5 = iVar3;
			iVar2 = uVar6;
			iVar3 = uVar7;
			iVar2 = (iVar2 / 4);
			iVar3 = (iVar3 / 4);
			if (iVar2 == 0 || iVar3 == 0)
			{
				iVar2 = iLocal_492;
				iVar3 = iLocal_493;
			}
			iLocal_492 = iVar2;
			iLocal_493 = iVar3;
		}
		else
		{
			iVar4 = (iVar4 / 4);
			iVar5 = (iVar5 / 4);
			if (iVar4 == 0 || iVar5 == 0)
			{
				iVar4 = iLocal_492;
				iVar5 = iLocal_493;
			}
			iLocal_492 = iVar4;
			iLocal_493 = iVar5;
		}
	}
	iVar0 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3)));
	iVar1 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar4), SYSTEM::TO_FLOAT(iVar5)));
	if (iVar2 < 0)
	{
		iVar0 = (180 + (180 - iVar0));
	}
	if (iVar4 < 0)
	{
		iVar1 = (180 + (180 - iVar1));
	}
	switch (iParam0)
	{
		case 0:
			return iVar0;
			break;
		
		case 1:
			return iVar1;
			break;
	}
	return 0;
}




void func_724()//Position - 0x7DEB2
{
	if (MISC::IS_PC_VERSION())
	{
		if (!iLocal_972)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("FAMILY6");
			iLocal_972 = 1;
		}
	}
}

int func_725()//Position - 0x7DED6
{
	if (MISC::IS_PC_VERSION())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1028) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1029))
		{
			return 1;
		}
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1028))
	{
		return 1;
	}
	return 0;
}

void func_726()//Position - 0x7DF11
{
	if (AUDIO::HAS_SOUND_FINISHED(iLocal_988))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_988, "Tattoo", Local_707, "FAMILY_6_SOUNDS", 0, 0);
	}
	switch (iLocal_548)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				if (iLocal_1009 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_1009) > 0)
					{
						if (!func_626("FAM6_IDLET_3"))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_IDLET", 7, 0, 0, 0))
							{
								iLocal_1010++;
								iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000));
								if (iLocal_1010 >= 3)
								{
									func_648("FAM6_IDLET_3", 1);
								}
							}
						}
					}
				}
				if (iLocal_996 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_996) > 0)
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_STRUG", 7, 1, 0, 0))
							{
								iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 6000));
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (fLocal_982 < 0.95f)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_1009 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1009) > 0)
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
							{
								case 0:
									if (!func_626("FAM6_TATC_3"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATC", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_993++;
											if (iLocal_993 >= 3)
											{
												func_648("FAM6_TATC_3", 1);
											}
										}
									}
									break;
								
								case 1:
									if (!func_626("FAM6_TATA_14"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATA", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_990++;
											if (iLocal_990 >= 14)
											{
												func_648("FAM6_TATA_14", 1);
											}
										}
									}
									break;
								
								case 2:
									if (!func_626("FAM6_TATM_8"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATM", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_991++;
											if (iLocal_991 >= 8)
											{
												func_648("FAM6_TATM_8", 1);
											}
										}
									}
									break;
								
								case 3:
									if (!func_626("FAM6_REACT_3"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_REACT", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_992++;
											if (iLocal_992 >= 3)
											{
												func_648("FAM6_REACT_3", 1);
											}
										}
									}
									break;
								}
							}
					}
					if (iLocal_996 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_996) > 0)
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_STRUG", 7, 1, 0, 0))
								{
									iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 6000));
								}
							}
						}
					}
				}
			}
			switch (iLocal_989)
			{
				case 0:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
						{
							bLocal_984 = true;
							CAM::PLAY_CAM_ANIM(iLocal_1025, "front_cam", "missfam6ig_7_tattoo", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 1, 2);
							iLocal_989++;
						}
					}
					break;
				
				case 1:
					if (fLocal_982 > 0.96f)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATFIN", 7, 0, 0, 0))
							{
								func_648("FAM6_TATFIN", 1);
								iLocal_989++;
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if (fLocal_982 < 0.95f)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_1009 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1009) > 0)
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									if (!func_626("FAM6_TATB_4"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATB", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_993++;
											if (iLocal_993 >= 4)
											{
												func_648("FAM6_TATB_4", 1);
											}
										}
									}
									break;
								
								case 1:
									if (!func_626("FAM6_TATA_14"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATA", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_990++;
											if (iLocal_990 >= 14)
											{
												func_648("FAM6_TATA_14", 1);
											}
										}
									}
									break;
								
								case 2:
									if (!func_626("FAM6_TATM_8"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATM", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_991++;
											if (iLocal_991 >= 8)
											{
												func_648("FAM6_TATM_8", 1);
											}
										}
									}
									break;
								
								case 3:
									if (!func_626("FAM6_REACT_3"))
									{
										if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_REACT", 7, 0, 0, 0))
										{
											iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
											iLocal_992++;
											if (iLocal_992 >= 3)
											{
												func_648("FAM6_REACT_3", 1);
											}
										}
									}
									break;
								}
							}
					}
					if (iLocal_996 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_996) > 0)
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_STRUG", 7, 1, 0, 0))
								{
									iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 6000));
								}
							}
						}
					}
				}
			}
			switch (iLocal_989)
			{
				case 0:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
						{
							bLocal_984 = true;
							CAM::PLAY_CAM_ANIM(iLocal_1025, "back_cam", "missfam6ig_7_tattoo", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 1, 2);
							iLocal_989++;
						}
					}
					break;
				
				case 1:
					if (fLocal_982 > 0.96f)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TATFIN", 7, 0, 0, 0))
							{
								func_648("FAM6_TATFIN", 1);
								iLocal_989++;
							}
						}
					}
					break;
			}
			break;
	}
}

int func_727(int iParam0)//Position - 0x7E51C
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	var uVar13;
	
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_mcs_3", 1))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					if (PED::IS_PED_GROUP_MEMBER(Local_550, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_550);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550, "Jimmy", 0, Local_550.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_583))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_583, "Tracy", 0, Local_583.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_594))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_594, "Lazlow", 0, Local_594.f_6, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_652, "Lazlow_Shirt", 2, Local_652.f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_707, "Tattoo_Gun", 2, Local_707.f_1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_696))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_696))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_696))
						{
							ENTITY::DETACH_ENTITY(Local_696, 0, 1);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_696, "Piercing_Gun", 0, Local_696.f_1, 0);
					}
				}
				GlobalFunc_8316(1, 1, 1, 0);
				AUDIO::STOP_AUDIO_SCENES();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
				func_551();
				func_706(0, 1, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::REMOVE_ANIM_DICT("missfam6ig_1_pierce");
				if (CAM::DOES_CAM_EXIST(iLocal_1024))
				{
					CAM::DESTROY_CAM(iLocal_1024, 0);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_1025))
				{
					CAM::DESTROY_CAM(iLocal_1025, 0);
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_707.f_1);
			STREAMING::REQUEST_ANIM_DICT("missfam6ig_7_tattoo");
			uLocal_1028 = unk_0x67D02A194A2FC2BD("tattoo_buttons");
			if (MISC::IS_PC_VERSION())
			{
				uLocal_1029 = unk_0x67D02A194A2FC2BD("tattoo_keys");
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(iLocal_1024, 326.1551f, 179.2442f, 104.5627f, -36.8795f, 13.434f, 33.84f, 52f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_1024, "HAND_SHAKE", 0.5f);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1025))
			{
				iLocal_1025 = CAM::CREATE_CAMERA(964613260, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_652))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Lazlow_Shirt", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Shirt", 0)))
					{
						Local_652 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Shirt", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_707))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Tattoo_Gun", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tattoo_Gun", 0)))
					{
						Local_707 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tattoo_Gun", 0));
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				RECORDING::_0x81CBAE94390F9F89();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lazlow_Shirt", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_652))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_652))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_652, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_652, 1);
						ENTITY::SET_ENTITY_COLLISION(Local_652, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Piercing_Gun", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_696))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_696))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_696, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_696, 1);
						ENTITY::SET_ENTITY_COLLISION(Local_696, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tattoo_Gun", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_707))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_707))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_707))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_707, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_550, 1, 0, 0, 0);
					if (iLocal_962 == 0)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_594, 0);
						TASK::TASK_PLAY_ANIM(0, "missfam6ig_7_tattoo", "ig_7_idle_02_jimmy", 1.5f, -1.5f, -1, 9, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_550, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_550, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_550, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_583))
				{
					if (iLocal_962 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_01_tracey", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_583, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam6ig_7_tattoo", "ig_7_loop_michael", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 0, 2) };
					Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfam6ig_7_tattoo", "ig_7_loop_michael", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 0, 2) };
					ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), Var4, 2, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Var1, 0, 0, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lazlow", 0))
			{
				if (!PED::IS_PED_INJURED(Local_594))
				{
					Var7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam6ig_7_tattoo", "ig_7_loop_lazlow", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 0, 2) };
					Var10 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfam6ig_7_tattoo", "ig_7_loop_lazlow", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 0, 2) };
					ENTITY::SET_ENTITY_ROTATION(Local_594, Var10, 2, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_594, Var7, 0, 0, 1);
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 3, 1, 0, 0);
				}
				if (iLocal_962 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
					{
						if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
						{
							if ((func_725() && STREAMING::HAS_MODEL_LOADED(Local_707.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo"))
							{
								if (func_709(&Local_707, 0))
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_707))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_707, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(PLAYER::PLAYER_PED_ID(), "minigame_tattoo_michael_parts", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_594))
								{
									TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Local_594, "minigame_tattoo_lazlow_parts", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 1);
								}
							}
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (iLocal_962 == 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
					{
						if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
						{
							if ((func_725() && STREAMING::HAS_MODEL_LOADED(Local_707.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo"))
							{
								if (func_709(&Local_707, 0))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_707, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(PLAYER::PLAYER_PED_ID(), "minigame_tattoo_michael_parts", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_594))
								{
									TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Local_594, "minigame_tattoo_lazlow_parts", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_550))
								{
									TASK::CLEAR_SEQUENCE_TASK(&uVar13);
									TASK::OPEN_SEQUENCE_TASK(&uVar13);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_594, 0);
									TASK::TASK_PLAY_ANIM(0, "missfam6ig_7_tattoo", "ig_7_idle_02_jimmy", 1.5f, -1.5f, -1, 9, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar13);
									TASK::TASK_PERFORM_SEQUENCE(Local_550, uVar13);
									TASK::CLEAR_SEQUENCE_TASK(&uVar13);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_550, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_550, 1);
								}
								if (!PED::IS_PED_INJURED(Local_583))
								{
									TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_01_tracey", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_583, 1);
								}
								*iParam0++;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_594))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_594))
					{
						*iParam0++;
					}
				}
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
		
		case 3:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_707.f_1);
			GlobalFunc_8316(0, 1, 1, 0);
			return 1;
			break;
	}
	return 0;
}

int func_728(int iParam0)//Position - 0x7EE01
{
	func_730();
	func_729();
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
			{
				STREAMING::REQUEST_MODEL(Local_696.f_1);
				STREAMING::REQUEST_ANIM_DICT("missfam6ig_1_pierce");
				STREAMING::REQUEST_ANIM_DICT("missfam6ig_7_tattoo");
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PIERCING_GUN", 0);
				if (((STREAMING::HAS_MODEL_LOADED(Local_696.f_1) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_1_pierce")) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PIERCING_GUN", 0))
				{
					iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
					if (func_709(&Local_696, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_696) && !ENTITY::IS_ENTITY_DEAD(Local_696))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_696, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_michael", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_594))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_lazlow", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_1024))
					{
						iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_PARAMS(iLocal_1024, 323.4799f, 178.8823f, 104.7932f, -23.9135f, 13.3903f, -17.3261f, 25f, 0, 1, 1, 2);
						CAM::SHAKE_CAM(iLocal_1024, "HAND_SHAKE", 0.5f);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_1025))
					{
						iLocal_1025 = CAM::CREATE_CAMERA(964613260, 0);
					}
					if (!PED::IS_PED_INJURED(Local_550))
					{
						GlobalFunc_2519(Local_550, Local_550.f_2, Local_550.f_5, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(Local_550, "missfam6ig_7_tattoo", "ig_7_idle_01_jimmy", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_550, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_550, 1);
					}
					if (!PED::IS_PED_INJURED(Local_583))
					{
						GlobalFunc_2519(Local_583, Local_583.f_2, Local_583.f_5, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_02_tracey", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_583, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_696.f_1);
				}
			}
			else
			{
				iLocal_958 = 0;
				iLocal_959 = 0;
				iLocal_960 = 0;
				iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
				iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(250, 1000));
				iLocal_1010 = 0;
				iLocal_990 = 0;
				iLocal_991 = 0;
				iLocal_993 = 0;
				iLocal_547 = 0;
				GlobalFunc_574(253, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				AUDIO::START_AUDIO_SCENE("FAMILY_6_PIERCE_LAZLOW_MG");
				RECORDING::_0x48621C9FCA3EBD28(3);
				iLocal_1035 = 1;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				func_724();
				*iParam0++;
			}
			break;
		
		case 101:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) >= 1f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_1025, 0);
				CAM::SET_CAM_ACTIVE(iLocal_1024, 1);
				iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_michael", 4f, -4f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_594))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_lazlow", 4f, -4f, 0, 0, 1148846080, 0);
				}
				*iParam0 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) >= 1f)
			{
				iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_michael", 4f, -4f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_594))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_lazlow", 4f, -4f, 0, 0, 1148846080, 0);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 223) && !iLocal_958)
				{
					iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
					CAM::SET_CAM_ACTIVE(iLocal_1025, 1);
					CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_1_ear_cam", "missfam6ig_1_pierce", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 1, 2);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_ear_michael", 4f, -4f, 0, 0, 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(Local_594))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_ear_lazlow", 4f, -4f, 0, 0, 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(Local_550))
					{
						TASK::TASK_PLAY_ANIM(Local_550, "missfam6ig_7_tattoo", "ig_7_idle_01_jimmy", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_583))
					{
						TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_03_tracey", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
					}
					iLocal_958 = 1;
					iLocal_547 = 2;
					if (iLocal_959 && iLocal_960)
					{
						*iParam0++;
					}
					else
					{
						*iParam0 = 101;
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 225) && !iLocal_959)
				{
					iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
					CAM::SET_CAM_ACTIVE(iLocal_1025, 1);
					CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_1_nose_cam", "missfam6ig_1_pierce", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 1, 2);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_nose_michael", 4f, -4f, 0, 0, 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(Local_594))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_nose_lazlow", 4f, -4f, 0, 0, 1148846080, 0);
					}
					iLocal_959 = 1;
					iLocal_547 = 3;
					if (iLocal_958 && iLocal_960)
					{
						*iParam0++;
					}
					else
					{
						*iParam0 = 101;
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 224) && !iLocal_960)
				{
					iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
					CAM::SET_CAM_ACTIVE(iLocal_1025, 1);
					CAM::PLAY_CAM_ANIM(iLocal_1025, "ig_1_brow_cam", "missfam6ig_1_pierce", 324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 1, 2);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_brow_michael", 4f, -4f, 0, 0, 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(Local_594))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_brow_lazlow", 4f, -4f, 0, 0, 1148846080, 0);
					}
					iLocal_960 = 1;
					iLocal_547 = 1;
					if (iLocal_958 && iLocal_959)
					{
						*iParam0++;
					}
					else
					{
						*iParam0 = 101;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("last_piercing")))
				{
					if (iLocal_965 == 1)
					{
						GlobalFunc_571(0, -1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (iLocal_1035 == 1)
						{
							if (iLocal_1034 == 0)
							{
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_1034 = 1;
							}
						}
						func_713();
						return 1;
					}
				}
			}
			break;
	}
	if (iLocal_1010 >= 2)
	{
		CUTSCENE::REQUEST_CUTSCENE("fam_6_mcs_3", 8);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
			func_552();
			func_551();
			func_706(0, 1, 0, 0, 0);
			iLocal_965 = 1;
		}
	}
	return 0;
}

void func_729()//Position - 0x7F614
{
	if (CAM::DOES_CAM_EXIST(iLocal_1024) && CAM::DOES_CAM_EXIST(iLocal_1025))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_1024) && !CAM::IS_CAM_ACTIVE(iLocal_1025))
		{
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if ((!iLocal_960 && !iLocal_959) && !iLocal_958)
				{
					if (!func_626("FAM6_PIERC0"))
					{
						GlobalFunc_Display_Help_Text("FAM6_PIERC0");
						func_648("FAM6_PIERC0", 1);
					}
				}
				else if ((!iLocal_960 && !iLocal_959) && iLocal_958)
				{
					if (!func_626("FAM6_PIERC1"))
					{
						GlobalFunc_Display_Help_Text("FAM6_PIERC1");
						func_648("FAM6_PIERC1", 1);
					}
				}
				else if ((!iLocal_960 && iLocal_959) && !iLocal_958)
				{
					if (!func_626("FAM6_PIERC2"))
					{
						GlobalFunc_Display_Help_Text("FAM6_PIERC2");
						func_648("FAM6_PIERC2", 1);
					}
				}
				else if ((iLocal_960 && !iLocal_959) && !iLocal_958)
				{
					if (!func_626("FAM6_PIERC3"))
					{
						GlobalFunc_Display_Help_Text("FAM6_PIERC3");
						func_648("FAM6_PIERC3", 1);
					}
				}
				else if ((!iLocal_960 && iLocal_959) && iLocal_958)
				{
					if (!func_626("FAM6_PIERC4"))
					{
						GlobalFunc_Display_Help_Text("FAM6_PIERC4");
						func_648("FAM6_PIERC4", 1);
					}
				}
				else if ((iLocal_960 && !iLocal_959) && iLocal_958)
				{
					if (!func_626("FAM6_PIERC5"))
					{
						GlobalFunc_Display_Help_Text("FAM6_PIERC5");
						func_648("FAM6_PIERC5", 1);
					}
				}
				else if ((iLocal_960 && iLocal_959) && !iLocal_958)
				{
					if (!func_626("FAM6_PIERC6"))
					{
						GlobalFunc_Display_Help_Text("FAM6_PIERC6");
						func_648("FAM6_PIERC6", 1);
					}
				}
			}
		}
		else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_730()//Position - 0x7F801
{
	switch (iLocal_547)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
				{
					if (iLocal_1009 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1009) > 0)
						{
							if ((!iLocal_960 && !iLocal_959) && !iLocal_958)
							{
								if (!func_626("FAM6_IDLEP_5"))
								{
									if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_IDLEP", 7, 0, 0, 0))
									{
										iLocal_993++;
										iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 12500));
										if (iLocal_993 >= 5)
										{
											func_648("FAM6_IDLEP_5", 1);
										}
									}
								}
							}
							else
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
								{
									case 0:
										if (!func_626("FAM6_IDLEP_5"))
										{
											if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_IDLEP", 7, 0, 0, 0))
											{
												iLocal_993++;
												iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 12500));
												if (iLocal_993 >= 5)
												{
													func_648("FAM6_IDLEP_5", 1);
												}
											}
										}
										break;
									
									case 1:
										if (!func_626("FAM6_P1_3"))
										{
											if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_P1", 7, 0, 0, 0))
											{
												iLocal_990++;
												iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 12500));
												if (iLocal_990 >= 3)
												{
													func_648("FAM6_P1_3", 1);
												}
											}
										}
										break;
									
									case 2:
										if (!func_626("FAM6_P2_2"))
										{
											if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_P2", 7, 0, 0, 0))
											{
												iLocal_991++;
												iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 12500));
												if (iLocal_991 >= 2)
												{
													func_648("FAM6_P2_2", 1);
												}
											}
										}
										break;
									}
								}
							}
					}
					if (iLocal_996 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_996) > 0)
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_STRUG", 7, 1, 0, 0))
								{
									iLocal_996 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 6000));
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) >= 0.068f)
			{
				PAD::SET_PAD_SHAKE(0, 200, 256);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Pierce", Local_696, "FAMILY_6_SOUNDS", 0, 0);
				if (iLocal_1010 < 2)
				{
					if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_BROW", 7, 0, 0, 0))
					{
						iLocal_1010++;
					}
				}
				if (!iLocal_958 && !iLocal_959)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 2, 0);
				}
				else if (iLocal_958 && !iLocal_959)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 5, 0);
				}
				else if (!iLocal_958 && iLocal_959)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 6, 0);
				}
				else if (iLocal_958 && iLocal_959)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 7, 0);
				}
				iLocal_547 = 0;
				iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
			}
			else if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) >= 0.075f)
			{
				PAD::SET_PAD_SHAKE(0, 200, 256);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Pierce", Local_696, "FAMILY_6_SOUNDS", 0, 0);
				if (iLocal_1010 < 2)
				{
					if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_NOSE", 7, 0, 0, 0))
					{
						iLocal_1010++;
					}
				}
				if (!iLocal_958 && !iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 3, 0);
				}
				else if (iLocal_958 && !iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 4, 0);
				}
				else if (!iLocal_958 && iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 6, 0);
				}
				else if (iLocal_958 && iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 7, 0);
				}
				iLocal_547 = 0;
				iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
			}
			else if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) >= 0.07f)
			{
				PAD::SET_PAD_SHAKE(0, 200, 256);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Pierce", Local_696, "FAMILY_6_SOUNDS", 0, 0);
				if (iLocal_1010 < 2)
				{
					if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_EAR", 7, 0, 0, 0))
					{
						iLocal_1010++;
					}
				}
				if (!iLocal_959 && !iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 1, 0);
				}
				else if (iLocal_959 && !iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 4, 0);
				}
				else if (!iLocal_959 && iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 5, 0);
				}
				else if (iLocal_959 && iLocal_960)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 7, 0);
				}
				iLocal_547 = 0;
				iLocal_1009 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
			}
			else if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			break;
	}
}

int func_731(int iParam0)//Position - 0x7FD13
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_mcs_2_concat", 1))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					if (PED::IS_PED_GROUP_MEMBER(Local_550, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_550);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550, "Jimmy", 0, Local_550.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_583))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_583, "Tracy", 0, Local_583.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_594))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_594, "Lazlow", 0, Local_594.f_6, 0);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				AUDIO::STOP_AUDIO_SCENES();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
				func_551();
				func_706(0, 0, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (func_688(PLAYER::PLAYER_PED_ID(), &iVar0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_634);
								Local_634 = iVar0;
							}
							GlobalFunc_2882(iVar0);
							ENTITY::SET_ENTITY_COORDS(iVar0, Local_634.f_2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, Local_634.f_5);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							GlobalFunc_9138(iVar0);
						}
					}
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT("missfam6leadinoutfam_6_mcs_2");
				MISC::CLEAR_AREA_OF_COPS(Local_765, 100f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_765, 100f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_765, 100f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_765, 100f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_765, 100f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_765, 100f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_696.f_1);
			STREAMING::REQUEST_ANIM_DICT("missfam6ig_1_pierce");
			STREAMING::REQUEST_ANIM_DICT("missfam6ig_7_tattoo");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PIERCING_GUN", 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(iLocal_1024, 323.4799f, 178.8823f, 104.7932f, -23.9135f, 13.3903f, -17.3261f, 25f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_1024, "HAND_SHAKE", 0.5f);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1025))
			{
				iLocal_1025 = CAM::CREATE_CAMERA(964613260, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_550, 1, 0, 0, 0);
					if (iLocal_962 == 0)
					{
						GlobalFunc_2519(Local_550, Local_550.f_2, Local_550.f_5, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(Local_550, "missfam6ig_7_tattoo", "ig_7_idle_01_jimmy", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_550, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_550, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_583))
				{
					if (iLocal_962 == 0)
					{
						GlobalFunc_2519(Local_583, Local_583.f_2, Local_583.f_5, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_02_tracey", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_583, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lazlow", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (iLocal_962 == 0)
				{
					if (((STREAMING::HAS_MODEL_LOADED(Local_696.f_1) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_1_pierce")) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PIERCING_GUN", 0))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
						{
							iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
							if (func_709(&Local_696, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_696) && !ENTITY::IS_ENTITY_DEAD(Local_696))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_696, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_michael", 1000f, -4f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_594))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_lazlow", 1000f, -4f, 4, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
							}
							*iParam0++;
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (iLocal_962 == 1)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
					{
						if (((STREAMING::HAS_MODEL_LOADED(Local_696.f_1) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_1_pierce")) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6ig_7_tattoo")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM6_PIERCING_GUN", 0))
						{
							iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(324.13f, 181.29f, 102.6f, 0f, 0f, -22.32f, 2);
							if (func_709(&Local_696, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_696) && !ENTITY::IS_ENTITY_DEAD(Local_696))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_696, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_michael", 1000f, -4f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_594))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_977, "missfam6ig_1_pierce", "ig_1_loop_lazlow", 1000f, -4f, 4, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_550))
							{
								GlobalFunc_2519(Local_550, Local_550.f_2, Local_550.f_5, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(Local_550, "missfam6ig_7_tattoo", "ig_7_idle_01_jimmy", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_550, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_550, 1);
							}
							if (!PED::IS_PED_INJURED(Local_583))
							{
								GlobalFunc_2519(Local_583, Local_583.f_2, Local_583.f_5, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(Local_583, "missfam6ig_7_tattoo", "ig_7_idle_02_tracey", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_583, 1);
							}
							*iParam0++;
						}
					}
				}
				else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
				{
					*iParam0++;
				}
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
		
		case 3:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_696.f_1);
			GlobalFunc_8316(0, 1, 1, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			return 1;
			break;
	}
	return 0;
}

int func_732(int iParam0)//Position - 0x80435
{
	MISC::SET_BIT(&(Local_740.f_13), 20);
	func_741();
	func_740();
	func_737(&iLocal_951);
	if (GlobalFunc_331() || GlobalFunc_2233())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_2_concat") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_503, 1) < (100f / 2f))
	{
		CUTSCENE::REQUEST_CUTSCENE("fam_6_mcs_2_concat", 8);
		if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_521)))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_521));
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			func_552();
			func_551();
			func_706(0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_521)))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_521));
		}
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_2_concat") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 1);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_550))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_550, -1794415470) != 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_634) && !ENTITY::IS_ENTITY_DEAD(Local_634))
					{
						TASK::TASK_ENTER_VEHICLE(Local_550, Local_634, 60000, 0, 1f, 1, 0);
						PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 0, 1);
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				SYSTEM::WAIT(2);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (func_626("FAM6_JIM"))
			{
				RECORDING::_0x293220DA1B46CEBC(0f, 6f, 4);
				GlobalFunc_690(&Local_740, Local_634);
				AUDIO::START_AUDIO_SCENE("FAMILY_6_DRIVE_TO_TATTOO");
				*iParam0++;
			}
			break;
		
		case 1:
			func_736(&Local_740, Local_503, GlobalFunc_716(), 1, Local_550, "FAM6_TATTOO", "CMN_JLEAVE", 0, 1, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_550))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 302.371f, 172.6486f, 102.8209f, 294.8139f, 175.4433f, 106.0717f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_550, 302.371f, 172.6486f, 102.8209f, 294.8139f, 175.4433f, 106.0717f, 5f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							iLocal_967 = 1;
							*iParam0++;
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 320.5625f, 178.7233f, 102.3891f, 317.6227f, 170.7848f, 106.2767f, 12.5f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_550, 320.5625f, 178.7233f, 102.3891f, 317.6227f, 170.7848f, 106.2767f, 12.5f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							iLocal_967 = 1;
							*iParam0++;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 314.1171f, 180.8601f, 102.4184f, 309.4342f, 168.0808f, 106.2922f, 28f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_550, 314.1171f, 180.8601f, 102.4184f, 309.4342f, 168.0808f, 106.2922f, 28f, 0, 1, 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							iLocal_967 = 1;
							*iParam0++;
						}
					}
					else
					{
						GlobalFunc_7139(&Local_740, 0);
						GlobalFunc_4935();
						GlobalFunc_5105();
						iLocal_967 = 1;
						*iParam0++;
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 314.1171f, 180.8601f, 102.4184f, 309.4342f, 168.0808f, 106.2922f, 28f, 0, 1, 0))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(Local_550) && PED::IS_PED_IN_GROUP(Local_550))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							iLocal_967 = 1;
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 10.5f, 1, 1056964608, 0, 1))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111())
					{
						*iParam0++;
					}
				}
			}
			else if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111())
			{
				*iParam0++;
			}
			break;
		
		case 3:
			func_736(&Local_740, Local_506, GlobalFunc_716(), 1, Local_550, "", "", 0, 1, 1, -1);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 309.8618f, 176.9012f, 101.9572f, 324.603f, 171.5135f, 106.6539f, 15f, 0, 1, 0))
			{
				GlobalFunc_7629();
				GlobalFunc_2536(1, 0);
				GlobalFunc_688();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 321.0376f, 178.4961f, 102.442f, 319.1346f, 173.43f, 106.2666f, 6f, 0, 1, 0))
			{
				GlobalFunc_7139(&Local_740, 0);
				*iParam0++;
			}
			break;
		
		case 4:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 3f, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
					*iParam0++;
				}
			}
			else
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
				*iParam0++;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_690(&Local_561, 1, 1, 1);
				func_690(&Local_572, 1, 1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_627))
				{
					VEHICLE::DELETE_VEHICLE(&Local_627);
				}
				return 1;
			}
			break;
	}
	return 0;
}




int func_736(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x80B54
{
	return GlobalFunc_9202(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14);
}

void func_737(int iParam0)//Position - 0x80B82
{
	switch (*iParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_521, 1) < 150f)
			{
				*iParam0++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(Local_583.f_6);
			STREAMING::REQUEST_MODEL(Local_594.f_6);
			STREAMING::REQUEST_ANIM_DICT("missfam6leadinoutfam_6_mcs_2");
			if ((STREAMING::HAS_MODEL_LOADED(Local_583.f_6) && STREAMING::HAS_MODEL_LOADED(Local_594.f_6)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6leadinoutfam_6_mcs_2"))
			{
				if (func_696(&Local_583, 0, 1862763509, 0, 15, 0, 0, 0, 0, -1, 1) && func_696(&Local_594, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1))
				{
					func_739(&(Local_583.f_10));
					func_738(&(Local_594.f_10), 0, 0, 0, 0, 0);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_976))
					{
						iLocal_976 = PED::CREATE_SYNCHRONIZED_SCENE(Local_521, Local_524, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_976, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_583, iLocal_976, "missfam6leadinoutfam_6_mcs_2", "_leadin_loop_tracy", 1000f, -8f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_583, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_583, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_594, iLocal_976, "missfam6leadinoutfam_6_mcs_2", "_leadin_loop_lazlow", 1000f, -8f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_594, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_594, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_583.f_6);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_594.f_6);
						*iParam0++;
					}
				}
			}
			break;
	}
}

void func_738(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x80D03
{
	if (*uParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_594))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_594))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 0, 0);
				if (iParam3 == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 2, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 2, 1, 0, 0);
				}
				if (iParam1 == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 3, 2, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 3, 1, 0, 0);
				}
				if (iParam2 == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 9, 0, 7, 0);
				}
				if (bParam4)
				{
					if (bParam5)
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 5, 0);
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 1, 5, 0);
					}
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_594, 10, 0, 0, 0);
				}
				*uParam0 = 1;
			}
		}
	}
}

void func_739(var uParam0)//Position - 0x80E0D
{
	if (*uParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_583))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_583))
			{
				PED::SET_PED_PROP_INDEX(Local_583, 0, 0, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 2, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 3, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 4, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 6, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_583, 8, 3, 0, 0);
				*uParam0 = 1;
			}
		}
	}
}

void func_740()//Position - 0x80E99
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_572) && ENTITY::DOES_ENTITY_EXIST(Local_561)) && ENTITY::DOES_ENTITY_EXIST(Local_627))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_572) && !ENTITY::IS_ENTITY_DEAD(Local_561)) && !ENTITY::IS_ENTITY_DEAD(Local_627))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_627, 1), 1) > 125f)
			{
				PED::SET_PED_KEEP_TASK(Local_561, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_561);
				PED::SET_PED_KEEP_TASK(Local_572, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_572);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_627);
			}
		}
	}
}

void func_741()//Position - 0x80F2C
{
	if (!PED::IS_PED_INJURED(Local_550) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_626("FAM6_JIM"))
		{
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (!GlobalFunc_5172(&Local_740, 1))
				{
					if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JIM", 7, 0, 0, 0))
					{
						func_648("FAM6_JIM", 1);
						PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
						PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
					}
				}
			}
		}
		else
		{
			if (!func_626("FAM6_TATT2") && !func_626("FAM6_TATTOO"))
			{
				if (!GlobalFunc_5172(&Local_740, 1))
				{
					if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_550))
					{
						if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", GlobalFunc_1078(bLocal_955, "FAM6_TATT2", "FAM6_TATTOO"), 7, 0, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
							func_648(GlobalFunc_1078(bLocal_955, "FAM6_TATT2", "FAM6_TATTOO"), 1);
							iLocal_1007 = 1;
						}
					}
				}
			}
			if (iLocal_1008 == 1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
				{
					if ((func_626("FAM6_JBAD") || func_626("FAM6_JWARN")) || func_626("FAM6_JWANT"))
					{
						if ((func_626("FAM6_TATT2") || func_626("FAM6_TATTOO")) || func_626("FAM6_JTALK"))
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (!func_626("FAM6_JLOST_3"))
								{
									if (func_626("FAM6_JWANT"))
									{
										if (!func_626("FAM6_JLOST"))
										{
											if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JLOST", 7, 0, 0, 0))
											{
												iLocal_1006++;
												func_648("FAM6_JLOST", 1);
												if (iLocal_1006 >= 3)
												{
													func_648("FAM6_JLOST_3", 1);
												}
											}
										}
									}
								}
							}
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1017))
								{
									if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_TATT2") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_TATTOO")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_JTALK"))
									{
										if (iLocal_1003 >= 3 && !func_626("FAM6_JTALK"))
										{
										}
										else if (GlobalFunc_10626(&uLocal_781, "FAM6AUD", &Local_1011, &cLocal_1017, 7, 0, 0))
										{
											iLocal_1008 = 0;
											func_648("FAM6_JBAD", 0);
											func_648("FAM6_JLOST", 0);
											func_648("FAM6_JWANT", 0);
										}
									}
								}
							}
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
			}
			else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (iLocal_1008 == 0)
				{
					if ((func_626("FAM6_TATT2") || func_626("FAM6_TATTOO")) || func_626("FAM6_JTALK"))
					{
						if (GlobalFunc_111())
						{
							Local_1011 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
							{
								if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_TATT2") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_TATTOO")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_JTALK"))
								{
									iLocal_1008 = 1;
									Local_1011 = { GlobalFunc_560() };
									cLocal_1017 = { GlobalFunc_514() };
									GlobalFunc_4956();
								}
							}
						}
					}
				}
				if (iLocal_1008 == 1)
				{
					if (!func_626("FAM6_JWANT"))
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JWANT", 8, 0, 0, 0))
							{
								iLocal_1003++;
								iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 12500));
								func_648("FAM6_JWANT", 1);
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							}
						}
					}
				}
				if (!func_626("FAM6_JLOSE_5"))
				{
					if (func_626("FAM6_JWANT"))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1001) > 0)
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JLOSE", 7, 0, 0, 0))
								{
									iLocal_1000++;
									iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12500, 15000));
									if (iLocal_1000 >= 5)
									{
										func_648("FAM6_JLOSE_5", 1);
									}
								}
							}
						}
					}
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
			}
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1002) > 5000)
				{
					if (!func_626("FAM6_JBAD_5") && !func_626("FAM6_JWARN_6"))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
							{
								iLocal_997 = 1;
							}
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_998 = 1;
						}
						if (iLocal_997 == 1 || iLocal_998 == 1)
						{
							if ((func_626("FAM6_TATT2") || func_626("FAM6_TATTOO")) || func_626("FAM6_JTALK"))
							{
								if (GlobalFunc_111())
								{
									Local_1011 = { GlobalFunc_560() };
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
									{
										if ((MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_TATT2") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_TATTOO")) || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_JTALK"))
										{
											Local_1011 = { GlobalFunc_560() };
											cLocal_1017 = { GlobalFunc_514() };
											iLocal_1008 = 1;
											GlobalFunc_4956();
										}
									}
								}
							}
							if (!func_626("FAM6_JTALK"))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JBAD", 7, 0, 0, 0))
								{
									iLocal_1003++;
									iLocal_1004++;
									iLocal_997 = 0;
									iLocal_998 = 0;
									iLocal_1002 = MISC::GET_GAME_TIMER();
									func_648("FAM6_JBAD", 1);
									if (iLocal_1004 >= 5)
									{
										func_648("FAM6_JBAD_5", 1);
									}
									PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
									PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
								}
							}
							else if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JWARN", 7, 0, 0, 0))
							{
								iLocal_1003++;
								iLocal_1004++;
								iLocal_997 = 0;
								iLocal_998 = 0;
								iLocal_1002 = MISC::GET_GAME_TIMER();
								func_648("FAM6_JWARN", 1);
								if (iLocal_1004 >= 6)
								{
									func_648("FAM6_JWARN_6", 1);
								}
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							}
						}
					}
				}
				else
				{
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				}
			}
			if (!func_626("FAM6_JTALK"))
			{
				if (iLocal_1003 >= 3)
				{
					if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								if (!GlobalFunc_5172(&Local_740, 1))
								{
									if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JTALK", 7, 0, 0, 0))
									{
										iLocal_1008 = 0;
										func_648("FAM6_JTALK", 1);
									}
								}
							}
						}
					}
				}
			}
			if (!func_626("FAM6_ARRIVE"))
			{
				if (iLocal_967 == 1)
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_ARRIVE", 7, 0, 0, 0))
						{
							func_648("FAM6_ARRIVE", 1);
						}
					}
				}
			}
		}
		if (iLocal_1007 == 1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (GlobalFunc_111())
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0))
			{
				if (GlobalFunc_156(Local_550, PLAYER::PLAYER_PED_ID(), 1) < 10f)
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (GlobalFunc_111())
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
		}
	}
}

int func_742(int iParam0)//Position - 0x816CE
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_mcs_1", 1))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550, "Jimmy", 0, Local_550.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_561))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_561, "Amanda", 0, Local_561.f_6, 0);
				}
				if (!PED::IS_PED_INJURED(Local_572))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_572, "Fabien", 0, Local_572.f_6, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_627, 0))
				{
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_627, 2f);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_627, "Amandas_Car", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_616))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_616, "Laptop_Girl", 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_663))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_663))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_663))
						{
							ENTITY::DETACH_ENTITY(Local_663, 0, 1);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_663, "Fam_Laptop", 1, 0, 0);
					}
				}
				GlobalFunc_8316(1, 1, 1, 0);
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				AUDIO::STOP_AUDIO_SCENES();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
				func_550();
				func_743();
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (func_688(PLAYER::PLAYER_PED_ID(), &iVar0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_634);
								Local_634 = iVar0;
							}
							GlobalFunc_2882(iVar0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							ENTITY::SET_ENTITY_COORDS(iVar0, Local_634.f_2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, Local_634.f_5);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
							VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar0, 2f);
							GlobalFunc_9138(iVar0);
						}
					}
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				GlobalFunc_2943(&Local_641, 1);
				STREAMING::REMOVE_ANIM_DICT("missfam6leadinoutfam_6_mcs_1");
				MISC::CLEAR_AREA_OF_PEDS(Local_765, 10f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_765, 10f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_765, 10f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_765, 10f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_765, 10f);
				uLocal_974 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-643.08f, 249.9f, 80.27f, 15f, 5f, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_627) && !ENTITY::IS_ENTITY_DEAD(Local_627))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_627, 1);
				VEHICLE::_0xBE5C1255A1830FF5(Local_627, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_634) && !ENTITY::IS_ENTITY_DEAD(Local_634))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_634, 1);
				VEHICLE::_0xBE5C1255A1830FF5(Local_634, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (iLocal_962 == 1)
					{
						GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_765, Local_765.f_3, 0, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_550, 1, 0, 0, 0);
					if (iLocal_962 == 1)
					{
						GlobalFunc_2519(Local_550, Local_550.f_2, Local_550.f_5, 0, 0, 0);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_550, -629.5168f, 248.8266f, 80.57744f, 1f, -1, 0.25f, 8192, 1193033728);
					PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_561) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_627, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_627, 1);
					PED::SET_PED_INTO_VEHICLE(Local_561, Local_627, -1);
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_561, Local_627, 30f, 786469);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fabien", 0))
			{
				if (!PED::IS_PED_INJURED(Local_572) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_627, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_572, Local_627, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amandas_car", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_627, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_627, 1);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_627);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_627);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_627, 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_627, 5f);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Amanda_Pulls_Away", Local_627, "FAMILY_6_SOUNDS", 0, 0);
					AUDIO::START_AUDIO_SCENE("FAMILY_6_AMANDA_PULLS_AWAY");
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_627, "FAMILY_6_AMANDA_PULLS_AWAY_GROUP", 0);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(Local_627, 3);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (iLocal_962 == 1)
				{
					func_690(&Local_561, 1, 1, 1);
					func_690(&Local_572, 1, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_627))
					{
						VEHICLE::DELETE_VEHICLE(&Local_627);
					}
				}
				GlobalFunc_8316(0, 1, 1, 0);
				VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_974);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				return 1;
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
	}
	return 0;
}

void func_743()//Position - 0x81BFD
{
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 2, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 1, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 1, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 5, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 7, 0, 0, 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 8, 1, 0, 0);
}

int func_744(int iParam0)//Position - 0x81C61
{
	var uVar0;
	
	MISC::SET_BIT(&(Local_740.f_13), 20);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_775();
	func_745(&iLocal_950);
	if (!PED::IS_PED_INJURED(Local_550))
	{
		PED::SET_PED_RESET_FLAG(Local_550, 60, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_740.f_21) && !ENTITY::IS_ENTITY_DEAD(Local_740.f_21)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_740.f_21, 1))
	{
		if (!PED::IS_PED_IN_VEHICLE(Local_550, Local_740.f_21, 1))
		{
			func_691(&Local_740, 1);
		}
	}
	else
	{
		func_691(&Local_740, 0);
	}
	if (GlobalFunc_331() || GlobalFunc_2233())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_500, 1) < 100f)
	{
		CUTSCENE::REQUEST_CUTSCENE("fam_6_mcs_1", 8);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			func_552();
			func_550();
			func_743();
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_6_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 1)
	{
		if (iLocal_987 == 0)
		{
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (((PAD::IS_CONTROL_PRESSED(0, 22) || PAD::IS_CONTROL_PRESSED(0, 21)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f)) > 20)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f)) > 20))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iLocal_987 = 1;
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_550))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_550, -1794415470) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_550, -819.9571f, 177.43f, 70.60026f, 1f, 60000, 0.25f, 5, 1193033728);
					PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 0, 1);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -809.27f, 179.55f, 71.15f, 1f, 60000, 0.25f, 5, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.32f, 180.11f, 71.15f, 1f, 60000, 0.25f, 5, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.17f, 179.48f, 71.16f, 1f, 60000, 0.25f, 5, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.92f, 179.22f, 71.16f, 1f, 60000, 0.25f, 8192, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 1);
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				SYSTEM::WAIT(2);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (func_626("FAM6_TOGO"))
			{
				RECORDING::_0x293220DA1B46CEBC(0f, 5f, 4);
				GlobalFunc_690(&Local_740, Local_634);
				AUDIO::START_AUDIO_SCENE("FAMILY_6_DRIVE_TO_AMANDA");
				*iParam0++;
			}
			break;
		
		case 1:
			func_736(&Local_740, Local_500, GlobalFunc_716(), 1, Local_550, "FAM6_YOGA", "CMN_JLEAVE", 0, 1, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_550))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -630.9736f, 255.3125f, 82.29509f, 6f, 4f, 2f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_550, -630.9736f, 255.3125f, 82.29509f, 6f, 4f, 2f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							iLocal_967 = 1;
							RECORDING::_0x293220DA1B46CEBC(6f, 4f, 4);
							*iParam0++;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -641.8773f, 247.5781f, 80.30839f, -607.4605f, 244.6178f, 87.00999f, 22f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_550, -641.8773f, 247.5781f, 80.30839f, -607.4605f, 244.6178f, 87.00999f, 22f, 0, 1, 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_7139(&Local_740, 0);
							GlobalFunc_4935();
							GlobalFunc_5105();
							iLocal_967 = 1;
							*iParam0++;
						}
					}
					else
					{
						GlobalFunc_7139(&Local_740, 0);
						GlobalFunc_4935();
						GlobalFunc_5105();
						iLocal_967 = 1;
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 5f, 1, 1056964608, 0, 1))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111())
					{
						*iParam0++;
					}
				}
			}
			else if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111())
			{
				*iParam0++;
			}
			break;
		
		case 3:
			func_736(&Local_740, -628.0492f, 242.8535f, 80.89529f, GlobalFunc_716(), 1, Local_550, "", "", 0, 1, 1, -1);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -641.8773f, 247.5781f, 80.30839f, -607.4605f, 244.6178f, 87.00999f, 22f, 0, 1, 0))
			{
				GlobalFunc_2536(1, 0);
				GlobalFunc_688();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				if (iLocal_971 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_561))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_561, -1, 2048, 2);
						iLocal_971 = 1;
					}
				}
			}
			else if (iLocal_971 == 1)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				iLocal_971 = 0;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_GROUP_MEMBER(Local_550, GlobalFunc_468()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -641.8773f, 247.5781f, 80.30839f, -607.4605f, 244.6178f, 87.00999f, 22f, 0, 1, 0))
				{
					iLocal_968 = 1;
				}
			}
			if (iLocal_968 == 1)
			{
				if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -629.1265f, 242.9497f, 80.89502f, -621.0181f, 242.7812f, 83f, 3.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_550, -629.1265f, 242.9497f, 80.89502f, -621.0181f, 242.7812f, 83f, 3.5f, 0, 1, 0)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_561, "missfam6leadinoutfam_6_mcs_1", "leadin_action_amanda", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_561, "missfam6leadinoutfam_6_mcs_1", "leadin_action_amanda") >= 0.99f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_572, "missfam6leadinoutfam_6_mcs_1", "leadin_action_fabien", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_572, "missfam6leadinoutfam_6_mcs_1", "leadin_action_fabien") >= 0.99f))
				{
					GlobalFunc_4935();
					GlobalFunc_5105();
					GlobalFunc_7139(&Local_740, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_745(int iParam0)//Position - 0x823AE
{
	switch (*iParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_515, 1) < 225f)
			{
				*iParam0++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(Local_663.f_1);
			STREAMING::REQUEST_MODEL(Local_561.f_6);
			STREAMING::REQUEST_MODEL(Local_572.f_6);
			STREAMING::REQUEST_MODEL(Local_616.f_6);
			STREAMING::REQUEST_MODEL(Local_627.f_6);
			STREAMING::REQUEST_ANIM_DICT("missfam6leadinoutfam_6_mcs_1");
			if (((((STREAMING::HAS_MODEL_LOADED(Local_663.f_1) && STREAMING::HAS_MODEL_LOADED(Local_561.f_6)) && STREAMING::HAS_MODEL_LOADED(Local_572.f_6)) && STREAMING::HAS_MODEL_LOADED(Local_616.f_6)) && STREAMING::HAS_MODEL_LOADED(Local_627.f_6)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam6leadinoutfam_6_mcs_1"))
			{
				if (((((func_748(&Local_627, 0, 0, 17, 1, -1, -1, -1) && func_696(&Local_561, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1)) && func_696(&Local_572, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1)) && func_696(&Local_616, 0, -86095805, 0, 145, 0, 0, 0, 0, -1, 1)) && func_709(&Local_663, 0)) && func_709(&Local_641, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_627, 0))
					{
						func_747(&Local_627, 1);
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_627, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_627, 0);
					}
					func_746(&(Local_572.f_10));
					GlobalFunc_173(&uLocal_781, 4, Local_572, "FABIAN", 0, 1);
					func_695(&(Local_561.f_10));
					GlobalFunc_173(&uLocal_781, 5, Local_561, "AMANDA", 0, 1);
					if (!PED::IS_PED_INJURED(Local_561))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_561, "missfam6leadinoutfam_6_mcs_1", "leadin_loop_a_amanda", Local_515, Local_518, 1000f, -8f, -1, 4105, 0, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_561, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_561, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_561, 1);
					}
					if (!PED::IS_PED_INJURED(Local_572))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_572, "missfam6leadinoutfam_6_mcs_1", "leadin_loop_b_fabien", Local_515, Local_518, 1000f, -8f, -1, 4105, 0, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_572, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_572, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_572, 1);
					}
					if (!PED::IS_PED_INJURED(Local_616))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_616, "missfam6leadinoutfam_6_mcs_1", "leadin_loop_c_laptop_girl", Local_515, Local_518, 1000f, -8f, -1, 4105, 0, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_616, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_616, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_616, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_663))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_663))
						{
							if (!PED::IS_PED_INJURED(Local_616))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_663, Local_616, PED::GET_PED_BONE_INDEX(Local_616, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_641))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_641))
						{
							if (!PED::IS_PED_INJURED(Local_572))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_641, Local_572, PED::GET_PED_BONE_INDEX(Local_572, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
						}
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_663.f_1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_561.f_6);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_572.f_6);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_616.f_6);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_627.f_6);
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (iLocal_968 == 1)
			{
				if (!PED::IS_PED_INJURED(Local_561))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_561, "missfam6leadinoutfam_6_mcs_1", "leadin_action_amanda", Local_515, Local_518, 8f, -8f, -1, 4106, 0, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_561, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_561, 1);
				}
				if (!PED::IS_PED_INJURED(Local_572))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_572, "missfam6leadinoutfam_6_mcs_1", "leadin_action_fabien", Local_515, Local_518, 8f, -8f, -1, 4106, 0, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_572, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_572, 1);
				}
				if (!PED::IS_PED_INJURED(Local_616))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_616, "missfam6leadinoutfam_6_mcs_1", "leadin_action_laptop_girl", Local_515, Local_518, 8f, -8f, -1, 4106, 0, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_616, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_616, 1);
				}
				*iParam0++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_561))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_561, "missfam6leadinoutfam_6_mcs_1", "leadin_action_amanda", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_561, "missfam6leadinoutfam_6_mcs_1", "leadin_action_amanda", 0.9f);
				}
			}
			if (!PED::IS_PED_INJURED(Local_572))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_572, "missfam6leadinoutfam_6_mcs_1", "leadin_action_fabien", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_572, "missfam6leadinoutfam_6_mcs_1", "leadin_action_fabien", 0.9f);
				}
			}
			if (!PED::IS_PED_INJURED(Local_616))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_616, "missfam6leadinoutfam_6_mcs_1", "leadin_action_laptop_girl", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_616, "missfam6leadinoutfam_6_mcs_1", "leadin_action_laptop_girl", 0.9f);
				}
			}
			break;
	}
}

void func_746(var uParam0)//Position - 0x82891
{
	if (*uParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_572))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_572))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_572, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_572, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_572, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_572, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_572, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_572, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_572, 8, 1, 0, 0);
				*uParam0 = 1;
			}
		}
	}
}

void func_747(int iParam0, bool bParam1)//Position - 0x82907
{
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam1, 0);
	if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
	{
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam1);
	}
}

int func_748(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)//Position - 0x82959
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = func_774(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_770(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			GlobalFunc_6791(iParam3, 0);
			if (func_749(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
				}
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

int func_749(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x82B0D
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_766(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_766(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				func_766(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

















int func_766(int iParam0, var uParam1, var uParam2)//Position - 0x866C0
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (GlobalFunc_533(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}




int func_770(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x869B2
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		GlobalFunc_549(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				func_766(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				func_771(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_771(var uParam0, struct<74> Param1)//Position - 0x86F7B
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, Param1.f_4);
	}
	else
	{
		VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Param1.f_7, Param1.f_8);
	}
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Param1.f_2);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, Param1.f_3);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
		{
			VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
		}
	}
	if (GlobalFunc_197(&uVar2, &uVar1) && Param1.f_73)
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &uVar2);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, uVar1);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param1.f_27)))
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Param1.f_26);
		}
	}
	VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Param1.f_60, Param1.f_61, Param1.f_62);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Param1.f_64);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Param1.f_63);
	VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Param1.f_69, Param1.f_70, Param1.f_71);
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Param1.f_68, 28));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Param1.f_68, 29));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Param1.f_68, 30));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Param1.f_68, 31));
	if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Param1.f_65 >= 0)
	{
		VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Param1.f_65);
	}
	if (Param1.f_66 > -1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
			{
				if (Param1.f_66 == 6)
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Param1.f_66);
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Param1.f_66);
			}
		}
	}
	func_766(uParam0, &(Param1.f_31), &(Param1.f_57));
	VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Param1.f_72);
}



int func_774(int iParam0, struct<3> Param1, float fParam4)//Position - 0x875B4
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}

void func_775()//Position - 0x8773D
{
	if (!PED::IS_PED_INJURED(Local_550) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_626("FAM6_TOGO"))
		{
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_TOGO", 7, 0, 0, 0))
					{
						func_648("FAM6_TOGO", 1);
						PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
						PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
					}
				}
			}
		}
		else
		{
			if (!func_626("FAM6_BEAN") && !func_626("FAM6_BEAN2"))
			{
				if (!GlobalFunc_5172(&Local_740, 1))
				{
					if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_550))
					{
						if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", GlobalFunc_1078(bLocal_955, "FAM6_BEAN2", "FAM6_BEAN"), 7, 0, 0, 0))
						{
							func_648(GlobalFunc_1078(bLocal_955, "FAM6_BEAN2", "FAM6_BEAN"), 1);
							iLocal_1007 = 1;
						}
					}
				}
			}
			if (iLocal_1008 == 1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
				{
					if ((func_626("FAM6_JBAD") || func_626("FAM6_JWARN")) || func_626("FAM6_JWANT"))
					{
						if (func_626("FAM6_BEAN") || func_626("FAM6_BEAN2"))
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (!func_626("FAM6_JLOST_3"))
								{
									if (func_626("FAM6_JWANT"))
									{
										if (!func_626("FAM6_JLOST"))
										{
											if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JLOST", 7, 0, 0, 0))
											{
												iLocal_1006++;
												func_648("FAM6_JLOST", 1);
												if (iLocal_1006 >= 3)
												{
													func_648("FAM6_JLOST_3", 1);
												}
											}
										}
									}
								}
							}
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1017))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_BEAN") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_BEAN2"))
									{
										if (GlobalFunc_10626(&uLocal_781, "FAM6AUD", &Local_1011, &cLocal_1017, 7, 0, 0))
										{
											iLocal_1008 = 0;
											func_648("FAM6_JBAD", 0);
											func_648("FAM6_JLOST", 0);
											func_648("FAM6_JWANT", 0);
										}
									}
								}
							}
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
			}
			else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (iLocal_1008 == 0)
				{
					if (func_626("FAM6_BEAN") || func_626("FAM6_BEAN2"))
					{
						if (GlobalFunc_111())
						{
							Local_1011 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_BEAN") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_BEAN2"))
								{
									iLocal_1008 = 1;
									Local_1011 = { GlobalFunc_560() };
									cLocal_1017 = { GlobalFunc_514() };
									GlobalFunc_4956();
								}
							}
						}
					}
				}
				if (iLocal_1008 == 1)
				{
					if (!func_626("FAM6_JWANT"))
					{
						if (!GlobalFunc_5172(&Local_740, 1))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JWANT", 8, 0, 0, 0))
							{
								iLocal_1003++;
								iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 12500));
								func_648("FAM6_JWANT", 1);
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							}
						}
					}
				}
				if (!func_626("FAM6_JLOSE_5"))
				{
					if (func_626("FAM6_JWANT"))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1001) > 0)
						{
							if (!GlobalFunc_5172(&Local_740, 1))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JLOSE", 7, 0, 0, 0))
								{
									iLocal_1000++;
									iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12500, 15000));
									if (iLocal_1000 >= 5)
									{
										func_648("FAM6_JLOSE_5", 1);
									}
								}
							}
						}
					}
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
			}
			if (HUD::DOES_BLIP_EXIST(Local_740.f_5))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1002) > 5000)
				{
					if (!func_626("FAM6_JBAD_5") && !func_626("FAM6_JWARN_6"))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
							{
								iLocal_997 = 1;
							}
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_998 = 1;
						}
						if (iLocal_997 == 1 || iLocal_998 == 1)
						{
							if (func_626("FAM6_BEAN") || func_626("FAM6_BEAN2"))
							{
								if (GlobalFunc_111())
								{
									Local_1011 = { GlobalFunc_560() };
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1011))
									{
										if (MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_BEAN") || MISC::ARE_STRINGS_EQUAL(&Local_1011, "FAM6_BEAN2"))
										{
											Local_1011 = { GlobalFunc_560() };
											cLocal_1017 = { GlobalFunc_514() };
											iLocal_1008 = 1;
											GlobalFunc_4956();
										}
									}
								}
							}
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_JBAD", 7, 0, 0, 0))
							{
								iLocal_1003++;
								iLocal_1004++;
								iLocal_997 = 0;
								iLocal_998 = 0;
								iLocal_1002 = MISC::GET_GAME_TIMER();
								func_648("FAM6_JBAD", 1);
								if (iLocal_1004 >= 5)
								{
									func_648("FAM6_JBAD_5", 1);
								}
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							}
						}
					}
				}
				else
				{
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				}
			}
			if (!func_626("FAM6_STEAL"))
			{
				if (!GlobalFunc_5172(&Local_740, 1))
				{
					if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_550, PLAYER::PLAYER_PED_ID(), 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_550, PLAYER::PLAYER_PED_ID()))
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_STEAL", 7, 0, 0, 0))
							{
							}
						}
					}
				}
			}
			if (!func_626("FAM6_MCS1LI"))
			{
				if (!PED::IS_PED_INJURED(Local_561) && !PED::IS_PED_INJURED(Local_572))
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if (iLocal_968 == 1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_561, "missfam6leadinoutfam_6_mcs_1", "leadin_action_amanda", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_572, "missfam6leadinoutfam_6_mcs_1", "leadin_action_fabien", 3))
							{
								if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_MCS1LI", 7, 0, 0, 0))
								{
									func_648("FAM6_MCS1LI", 1);
								}
							}
						}
					}
				}
			}
			if (!func_626("FAM6_MOM"))
			{
				if (iLocal_967 == 1 && iLocal_968 == 0)
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_550) < 10f)
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_MOM", 7, 0, 0, 0))
							{
								func_648("FAM6_MOM", 1);
							}
						}
					}
				}
			}
			else if (!func_626("FAM6_COME"))
			{
				if (iLocal_967 == 1 && iLocal_968 == 0)
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_550) < 10f)
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_COME", 7, 0, 0, 0))
							{
								func_648("FAM6_COME", 1);
							}
						}
					}
				}
			}
			else if (!func_626("FAM6_MOM2"))
			{
				if (iLocal_967 == 1 && iLocal_968 == 0)
				{
					if (!GlobalFunc_5172(&Local_740, 1))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_550) < 10f)
						{
							if (GlobalFunc_10618(&uLocal_781, "FAM6AUD", "FAM6_MOM2", 7, 0, 0, 0))
							{
								func_648("FAM6_MOM2", 1);
							}
						}
					}
				}
			}
		}
		if (iLocal_1007 == 1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_550, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (GlobalFunc_111())
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_550, 0))
			{
				if (GlobalFunc_156(Local_550, PLAYER::PLAYER_PED_ID(), 1) < 10f)
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (GlobalFunc_111())
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
		}
	}
}


int func_777(int iParam0)//Position - 0x87F41
{
	var uVar0;
	var uVar1;
	
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_int_p3_t7", 1))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550, "Jimmy", 2, Local_550.f_6, 0);
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_963 == 1)
				{
					GlobalFunc_9140(&Local_769, 0, 0, 2000, 1, 1, 0, 1);
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
				}
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				if (!AUDIO::HAS_SOUND_FINISHED(Local_769.f_10))
				{
					AUDIO::STOP_SOUND(Local_769.f_10);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				}
				if (CAM::DOES_CAM_EXIST(iLocal_1024))
				{
					CAM::DESTROY_CAM(iLocal_1024, 0);
				}
				CAM::DESTROY_ALL_CAMS(0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_718.x))
				{
					OBJECT::DELETE_OBJECT(&Local_718);
					ENTITY::REMOVE_MODEL_HIDE(Local_718.f_2, 1f, Local_718.f_1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_729.x))
				{
					OBJECT::DELETE_OBJECT(&Local_729);
					ENTITY::REMOVE_MODEL_HIDE(Local_729.f_2, 1f, Local_729.f_1, 0);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
				}
				STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
				STREAMING::REQUEST_MODEL(Local_663.f_1);
				STREAMING::REQUEST_MODEL(Local_561.f_6);
				STREAMING::REQUEST_MODEL(Local_572.f_6);
				STREAMING::REQUEST_MODEL(Local_616.f_6);
				STREAMING::REQUEST_MODEL(Local_627.f_6);
				STREAMING::REQUEST_ANIM_DICT("missfam6leadinoutfam_6_mcs_1");
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Jimmy", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy", 0)))
					{
						Local_550 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy", 0));
						func_700(Local_550, 1862763509, 0, 1, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((17.2773f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (iLocal_962 == 0)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -809.27f, 179.55f, 71.15f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.32f, 180.11f, 71.15f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.17f, 179.48f, 71.16f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.92f, 179.22f, 71.16f, 1f, 20000, 0.25f, 8192, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(Local_550))
				{
					if (iLocal_962 == 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_550, -819.9571f, 177.43f, 70.60026f, 1f, 20000, 0.25f, 0, 1193033728);
						PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 1, 0);
					}
					PED::SET_PED_COMPONENT_VARIATION(Local_550, 1, 0, 0, 0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (iLocal_962 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_550))
					{
						GlobalFunc_2519(Local_550, Local_550.f_2, Local_550.f_5, 0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_550, -819.9571f, 177.43f, 70.60026f, 1f, 20000, 0.25f, 0, 1193033728);
						PED::FORCE_PED_MOTION_STATE(Local_550, -668482597, 0, 1, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_765, Local_765.f_3, 0, 1, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -809.27f, 179.55f, 71.15f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.32f, 180.11f, 71.15f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.17f, 179.48f, 71.16f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.92f, 179.22f, 71.16f, 1f, 20000, 0.25f, 8192, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					SYSTEM::WAIT(250);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_8316(0, 1, 1, 0);
				return 1;
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
	}
	return 0;
}


int func_779(int iParam0)//Position - 0x885C1
{
	struct<12> Var0;
	int iVar12;
	var uVar13;
	int iVar14;
	
	switch (*iParam0)
	{
		case 0:
			if (iLocal_964 == 0)
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					Var0.f_7 = 21;
					Var0.f_8 = 6;
					Local_769 = { Var0 };
					Local_769.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(Local_769.f_4, -776.5807f, 181.1033f, 72.2059f, 11.8135f, 0f, 95.7275f, 5500, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(Local_769.f_4, -776.8288f, 181.0926f, 72.2551f, 11.8134f, 0f, 95.7284f, 5500, 3, 2);
					CAM::SET_CAM_FOV(Local_769.f_4, 46.7255f);
					CAM::SET_CAM_ACTIVE(Local_769.f_4, 1);
					GlobalFunc_9140(&Local_769, 1, 0, 2000, 1, 1, 0, 1);
					*iParam0++;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				*iParam0++;
			}
			break;
		
		case 1:
			iVar12 = CLOCK::GET_CLOCK_HOURS();
			iLocal_973 = 0;
			GlobalFunc_741(22, &uVar13, &iVar14);
			if (iVar12 < iVar14 && iVar12 >= (iVar14 - 2))
			{
				iLocal_973 = 24;
			}
			else
			{
				iLocal_973 = 0;
			}
			GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_765, Local_765.f_3, 0, 0, 0);
			iLocal_963 = 1;
			*iParam0++;
			break;
		
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("fam_6_int_p3_t7", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				func_552();
				iLocal_965 = 1;
			}
			if (iLocal_964 == 0)
			{
				if (CAM::DOES_CAM_EXIST(Local_769.f_4))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_1024))
					{
						CAM::DESTROY_CAM(iLocal_1024, 0);
					}
				}
				if (GlobalFunc_9141(7, 0, "EXTRASUNNY", "cirrocumulus", &Local_769, -1082130432, iLocal_973, 1, 1065353216))
				{
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (iLocal_965 == 1)
					{
						*iParam0++;
					}
				}
				if (GlobalFunc_4926(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					iLocal_964 = 1;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!AUDIO::HAS_SOUND_FINISHED(Local_769.f_10))
				{
					AUDIO::STOP_SOUND(Local_769.f_10);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				}
				if (iLocal_965 == 1)
				{
					*iParam0++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}



int func_782(int iParam0)//Position - 0x8887C
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_6_int", 1))
			{
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1024))
				{
					CAM::DESTROY_CAM(iLocal_1024, 0);
				}
				CAM::DESTROY_ALL_CAMS(0);
				if ((GlobalFunc_5599(0) && ENTITY::DOES_ENTITY_EXIST(GlobalFunc_104(0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(GlobalFunc_104(0), 1))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(GlobalFunc_104(0), 1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(GlobalFunc_104(0), 1, 1);
						Local_634 = GlobalFunc_104(0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_634, 1), 2.5f);
						ENTITY::SET_ENTITY_HEALTH(Local_634, ENTITY::GET_ENTITY_HEALTH(Local_634) + 500);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_634, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_634) + 500f));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_634, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_634) + 500f));
						func_747(&Local_634, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_634, 0, 1);
						ENTITY::SET_ENTITY_COORDS(Local_634, Local_634.f_2, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_634, Local_634.f_5);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
					}
				}
				if (GlobalFunc_7984())
				{
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1)) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
							}
							Local_634 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							func_747(&Local_634, 1);
							ENTITY::SET_ENTITY_HEALTH(Local_634, ENTITY::GET_ENTITY_HEALTH(Local_634) + 500);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_634, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_634) + 500f));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_634, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_634) + 500f));
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_634, 1), 2.5f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_634, 0, 1);
							ENTITY::SET_ENTITY_COORDS(Local_634, Local_634.f_2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_634, Local_634.f_5);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
						}
						else
						{
							GlobalFunc_7695(24);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
							GlobalFunc_10236(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -825.8718f, 157.3143f, 69.4619f, 90f, 24, 0);
							GlobalFunc_76(24);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_634))
				{
					GlobalFunc_9138(Local_634);
				}
				GlobalFunc_2224(1);
				MISC::CLEAR_AREA(Local_765, 500f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_765, 500f, 0);
				MISC::CLEAR_AREA_OF_COPS(Local_765, 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_765, 500f, 0, 0, 0, 0, 0);
				GlobalFunc_8316(0, 1, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (!CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				iLocal_1024 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(iLocal_1024, -776.5807f, 181.1033f, 72.2059f, 11.8135f, 0f, 95.72749f, 46.7255f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				return 1;
			}
			else if (iLocal_962 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_962 = 1;
				}
			}
			break;
	}
	return 0;
}




















void func_802()//Position - 0x8AAEB
{
	iLocal_946 = 1;
	iLocal_947 = 0;
	iLocal_948 = 0;
	iLocal_949 = 0;
	iLocal_950 = 0;
	iLocal_951 = 0;
	bLocal_955 = false;
	iLocal_967 = 0;
	iLocal_968 = 0;
	iLocal_962 = 0;
	iLocal_964 = 0;
	iLocal_965 = 0;
	bLocal_984 = false;
	iLocal_971 = 0;
	iLocal_985 = 0;
	iLocal_986 = 0;
	iLocal_987 = 0;
	iLocal_997 = 0;
	iLocal_998 = 0;
	iLocal_999 = 0;
	iLocal_1000 = 0;
	iLocal_1001 = 0;
	iLocal_1002 = 0;
	iLocal_1003 = 0;
	iLocal_1004 = 0;
	iLocal_1005 = 0;
	iLocal_1006 = 0;
	iLocal_1009 = 0;
	iLocal_1010 = 0;
	StringCopy(&Local_1011, "", 24);
	StringCopy(&cLocal_1017, "", 24);
	iLocal_1007 = 0;
	iLocal_1008 = 0;
	iLocal_993 = 0;
	iLocal_990 = 0;
	iLocal_991 = 0;
	iLocal_992 = 0;
	iLocal_996 = 0;
	iLocal_994 = 0;
	iLocal_995 = 0;
	StringCopy(&Local_1030, "FAM6_SHRINK", 16);
	iLocal_970 = 0;
	iLocal_1034 = 0;
	iLocal_1035 = 0;
}

int func_803(var uParam0)//Position - 0x8ABAE
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 451360105) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 1)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						*uParam0++;
					}
				}
				else
				{
					*uParam0++;
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missfam2mcs_intp1");
			STREAMING::REQUEST_MODEL(Local_718.f_1);
			STREAMING::REQUEST_MODEL(Local_729.f_1);
			if ((STREAMING::HAS_ANIM_DICT_LOADED("missfam2mcs_intp1") && STREAMING::HAS_MODEL_LOADED(Local_718.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_729.f_1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_975))
			{
				FIRE::STOP_FIRE_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				MISC::CLEAR_AREA_OF_PROJECTILES(-817.305f, 179.33f, 71.241f, 20f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				iLocal_975 = PED::CREATE_SYNCHRONIZED_SCENE(-817.305f, 179.33f, 71.225f, 0f, 0f, -113f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_975, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_975, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 1, 0, 1);
				}
				ENTITY::CREATE_MODEL_HIDE(Local_718.f_2, 1f, Local_718.f_1, 0);
				ENTITY::CREATE_MODEL_HIDE(Local_729.f_2, 1f, Local_729.f_1, 0);
				Local_718.x = OBJECT::CREATE_OBJECT(Local_718.f_1, -816.72f, 179.1f, 72.83f, 1, 1, 0);
				Local_729.x = OBJECT::CREATE_OBJECT(Local_729.f_1, -816.11f, 177.51f, 72.83f, 1, 1, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_718.x, iLocal_975, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_729.x, iLocal_975, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_718.x);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_729.x);
				CAM::DESTROY_ALL_CAMS(0);
				iLocal_1024 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1024, iLocal_975, "fam5_intro_cam", "missfam2mcs_intp1");
				HUD::CLEAR_HELP(1);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_718.f_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_729.f_1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*uParam0++;
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				if (GlobalFunc_7984())
				{
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1)) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
						}
						GlobalFunc_7695(24);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -825.8718f, 157.3143f, 69.4619f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 90f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
					}
				}
				MISC::CLEAR_AREA(-817.305f, 179.33f, 71.241f, 500f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(-817.305f, 179.33f, 71.241f, 500f, 0);
				MISC::CLEAR_AREA_OF_COPS(-817.305f, 179.33f, 71.241f, 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-817.305f, 179.33f, 71.241f, 500f, 0, 0, 0, 0, 0);
				*uParam0++;
			}
			break;
		
		case 4:
			CUTSCENE::REQUEST_CUTSCENE("fam_6_int", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				iLocal_965 = 1;
			}
			if (CAM::DOES_CAM_EXIST(iLocal_1024))
			{
				if (iLocal_966 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_975))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_975) >= 0.99f)
						{
							if (iLocal_965 == 1)
							{
								*uParam0++;
							}
						}
						if (GlobalFunc_4926(1000))
						{
							CAM::DO_SCREEN_FADE_OUT(800);
							iLocal_966 = 1;
						}
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (iLocal_965 == 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
						}
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_718.x, 0f, 0);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_729.x, 0f, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_718.x))
						{
							OBJECT::DELETE_OBJECT(&Local_718);
							ENTITY::REMOVE_MODEL_HIDE(Local_718.f_2, 1f, Local_718.f_1, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_729.x))
						{
							OBJECT::DELETE_OBJECT(&Local_729);
							ENTITY::REMOVE_MODEL_HIDE(Local_729.f_2, 1f, Local_729.f_1, 0);
						}
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
						}
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
						}
						STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						CAM::DESTROY_CAM(iLocal_1024, 0);
						CAM::DESTROY_ALL_CAMS(0);
						*uParam0++;
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_966 == 0)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1024))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
					}
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_804(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x8B1A5
{
	int iVar0;
	
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::REQUEST_ADDITIONAL_TEXT("FAM6", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_5112(17, 0), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_2224(1);
			GlobalFunc_7695(0);
			GlobalFunc_6791(0, 0);
		}
		GlobalFunc_10875(22, 1, 0);
		func_852(22, 1);
		GlobalFunc_8634(22, 1);
		func_849(22, 0);
		GlobalFunc_8625(22, 1);
		GlobalFunc_8523(22, 1);
		func_842(22);
		GlobalFunc_7678(1, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((-614.28f - 10f), (252.81f - 4f), (81.66f - 2f), (-614.28f + 10f), (252.81f + 4f), (81.66f + 2f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA((-614.28f - 10f), (252.81f - 4f), (81.66f - 2f), (-614.28f + 10f), (252.81f + 4f), (81.66f + 2f));
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((295.26f - 8f), (175.57f - 4f), (104.06f - 2f), (295.26f + 8f), (175.57f + 4f), (104.06f + 2f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA((295.26f - 8f), (175.57f - 4f), (104.06f - 2f), (295.26f + 8f), (175.57f + 4f), (104.06f + 2f));
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((-1894.98f - 4f), (-565.3f - 4f), (12.68f - 2f), (-1894.98f + 4f), (-565.3f + 4f), (12.68f + 2f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA((-1894.98f - 4f), (-565.3f - 4f), (12.68f - 2f), (-1894.98f + 4f), (-565.3f + 4f), (12.68f + 2f));
		uLocal_1026 = GlobalFunc_2533(-627.05f, 243.58f, 82.89f, 16f, 12f, 4f);
		uLocal_1027 = GlobalFunc_2533(295.59f, 174.36f, 104.05f, 6f, 3f, 2f);
		iLocal_988 = AUDIO::GET_SOUND_ID();
		if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
		{
			PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 3.5f, -1082130432, -1082130432);
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		}
		if (!GlobalFunc_Is_Mission_Retry())
		{
			Global_Mission_Fail_State.f_12[0] = 0;
		}
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_837(iParam0);
		GlobalFunc_2535(&uLocal_1083, &uLocal_956);
		GlobalFunc_2534(&uLocal_1094, &uLocal_957);
		func_834();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_765, Local_765.f_3, 0, 1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			bLocal_969 = false;
		}
		if (*iParam4 == 1)
		{
			GlobalFunc_5196(Local_765, Local_765.f_3, 1, 0);
		}
		func_829(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (GlobalFunc_2531(&uLocal_1083, &uLocal_956))
		{
			if (GlobalFunc_2530(&uLocal_1094, &uLocal_957))
			{
				*iParam1++;
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_826(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
					{
						GlobalFunc_9138(Local_634);
						*iParam1++;
					}
				}
				else
				{
					*iParam1++;
				}
				break;
			
			case 4:
				iLocal_1068[3] = 1;
				iLocal_1068[9] = 1;
				iLocal_1068[1] = 1;
				iLocal_1068[2] = 1;
				iLocal_1068[7] = 1;
				iLocal_1068[12] = 1;
				if (func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						if (GlobalFunc_7698())
						{
							GlobalFunc_8368();
							if (GlobalFunc_8367())
							{
								Local_634 = func_813(Local_634.f_2, Local_634.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							}
						}
						else if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
						{
							*iParam1++;
						}
					}
					else
					{
						*iParam1++;
					}
				}
				break;
			
			case 5:
				if (((func_748(&Local_627, 0, 0, 17, 1, -1, -1, -1) && func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1)) && func_696(&Local_561, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1)) && func_696(&Local_572, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_627, 0))
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_627, 1);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						if (GlobalFunc_7698())
						{
							GlobalFunc_8368();
							if (GlobalFunc_8367())
							{
								Local_634 = func_813(Local_634.f_2, Local_634.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							}
						}
						else if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
						{
							*iParam1++;
						}
					}
					else
					{
						*iParam1++;
					}
				}
				break;
			
			case 6:
				iLocal_1068[3] = 1;
				iLocal_1068[9] = 1;
				iLocal_1068[1] = 1;
				iLocal_1068[2] = 1;
				iLocal_1068[4] = 1;
				iLocal_1068[5] = 1;
				if (func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						if (GlobalFunc_7698())
						{
							GlobalFunc_8368();
							if (GlobalFunc_8367())
							{
								Local_634 = func_813(Local_634.f_2, Local_634.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							}
						}
						else if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
						{
							*iParam1++;
						}
					}
					else
					{
						*iParam1++;
					}
				}
				break;
			
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				iLocal_1068[3] = 1;
				iLocal_1068[4] = 1;
				iLocal_1068[5] = 1;
				if ((func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1) && func_696(&Local_583, 0, 1862763509, 0, 15, 0, 0, 0, 0, -1, 1)) && func_696(&Local_594, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						if (GlobalFunc_7698())
						{
							GlobalFunc_8368();
							if (GlobalFunc_8367())
							{
								Local_634 = func_813(Local_634.f_2, Local_634.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							}
						}
						else if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
						{
							*iParam1++;
						}
					}
					else
					{
						*iParam1++;
					}
				}
				break;
			
			case 14:
				iLocal_1068[3] = 1;
				iLocal_1068[9] = 1;
				iLocal_1068[4] = 1;
				iLocal_1068[10] = 1;
				iLocal_1068[11] = 1;
				iLocal_1068[5] = 1;
				iLocal_1068[1] = 1;
				iLocal_1068[7] = 1;
				if (((func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1) && func_696(&Local_583, 0, 1862763509, 0, 15, 0, 0, 0, 0, -1, 1)) && func_696(&Local_594, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1)) && func_696(&Local_605, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						if (GlobalFunc_7698())
						{
							GlobalFunc_8368();
							if (GlobalFunc_8367())
							{
								Local_634 = func_813(Local_634.f_2, Local_634.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							}
						}
						else if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
						{
							*iParam1++;
						}
					}
					else
					{
						*iParam1++;
					}
				}
				break;
			
			case 15:
				if ((func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1) && func_696(&Local_583, 0, 1862763509, 0, 15, 0, 0, 0, 0, -1, 1)) && func_696(&Local_561, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						if (GlobalFunc_7698())
						{
							GlobalFunc_8368();
							if (GlobalFunc_8367())
							{
								Local_634 = func_813(Local_634.f_2, Local_634.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							}
						}
						else if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
						{
							*iParam1++;
						}
					}
					else
					{
						*iParam1++;
					}
				}
				break;
			
			case 16:
				iLocal_1068[3] = 1;
				iLocal_1068[9] = 1;
				iLocal_1068[4] = 1;
				iLocal_1068[10] = 1;
				iLocal_1068[1] = 1;
				iLocal_1068[8] = 1;
				iLocal_1068[11] = 1;
				if ((func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1) && func_696(&Local_583, 0, 1862763509, 0, 15, 0, 0, 0, 0, -1, 1)) && func_696(&Local_561, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
					{
						if (GlobalFunc_7698())
						{
							GlobalFunc_8368();
							if (GlobalFunc_8367())
							{
								Local_634 = func_813(Local_634.f_2, Local_634.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_634, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_634);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							}
						}
						else if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
						{
							*iParam1++;
						}
					}
					else
					{
						*iParam1++;
					}
				}
				break;
			
			case 17:
				if ((func_696(&Local_550, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1) && func_696(&Local_583, 0, 1862763509, 0, 15, 0, 0, 0, 0, -1, 1)) && func_696(&Local_561, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1))
				{
					if (func_748(&Local_634, 1, 0, 0, 1, -1, -1, -1))
					{
						*iParam1++;
					}
				}
				break;
			
			default:
				*iParam1++;
				break;
		}
		func_811(&(Local_550.f_10));
		func_739(&(Local_583.f_10));
		func_695(&(Local_561.f_10));
		func_746(&(Local_572.f_10));
		func_810(&(Local_605.f_10));
		switch (iLocal_545)
		{
			case 7:
			case 8:
				func_738(&(Local_594.f_10), 0, 0, 0, 0, 0);
				break;
			
			case 9:
			case 10:
				func_738(&(Local_594.f_10), 1, 1, 0, 0, 0);
				break;
			
			case 11:
			case 12:
				func_738(&(Local_594.f_10), 1, 1, 0, 1, bLocal_961);
				break;
			
			case 13:
				break;
			
			case 14:
				if (*iParam4 == 1)
				{
					if (Global_Mission_Fail_State.f_12[0] == 1)
					{
						bLocal_961 = true;
					}
					else if (Global_Mission_Fail_State.f_12[0] == 2)
					{
						bLocal_961 = false;
					}
				}
				func_738(&(Local_594.f_10), 1, 1, 1, 1, bLocal_961);
				break;
			}
	}
	if (*iParam1 == 5)
	{
		GlobalFunc_7632(0);
		GlobalFunc_200(&uLocal_781, 0);
		GlobalFunc_200(&uLocal_781, 1);
		GlobalFunc_200(&uLocal_781, 2);
		GlobalFunc_200(&uLocal_781, 4);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&uLocal_781, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		switch (iParam0)
		{
			case 4:
			case 6:
			case 14:
			case 16:
				if (!PED::IS_PED_INJURED(Local_550))
				{
					GlobalFunc_173(&uLocal_781, 1, Local_550, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_583))
				{
					GlobalFunc_173(&uLocal_781, 2, Local_583, "TRACEY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_561))
				{
					GlobalFunc_173(&uLocal_781, 4, Local_561, "AMANDA", 0, 1);
				}
				break;
			
			case 8:
			case 10:
			case 12:
				GlobalFunc_7632(1);
				if (!PED::IS_PED_INJURED(Local_594))
				{
					GlobalFunc_173(&uLocal_781, 2, Local_594, "LAZLOW", 0, 1);
				}
				break;
			
			default:
				break;
		}
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 15:
			case 17:
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				break;
			
			default:
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				break;
		}
		switch (iParam0)
		{
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				break;
			
			default:
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				PED::SET_CREATE_RANDOM_COPS(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				break;
		}
		GlobalFunc_563(0);
		switch (iParam0)
		{
			case 16:
				GlobalFunc_563(1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 6)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				GlobalFunc_4967(0, -1, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
				iVar0 = MISC::GET_GAME_TIMER() + 15000;
				while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			switch (iParam0)
			{
				case 0:
				case 1:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 17:
				case 16:
					break;
				
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		switch (iParam0)
		{
			case 4:
				func_860(0, "STAGE 0: DRIVE TO BEAN", 0, 0, 0, 1);
				break;
			
			case 5:
				func_860(1, "STAGE 1: BEAN CUTSCENE", 0, 0, 0, 1);
				break;
			
			case 6:
				func_860(2, "STAGE 2: DRIVE TO TRACEY", 0, 0, 0, 1);
				break;
			
			case 8:
				func_860(3, "STAGE 3: DADDY ISSUES", 0, 0, 0, 1);
				break;
			
			case 14:
				func_860(4, "STAGE 4: DRIVE TO SHRINK", 0, 0, 0, 1);
				break;
			
			case 16:
				func_860(5, "STAGE 5: SHRINK CUTSCENE", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 8)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		return 1;
	}
	return 0;
}






void func_810(var uParam0)//Position - 0x8C2C6
{
	if (*uParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_605))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_605))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_605, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_605, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_605, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_605, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_605, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_605, 10, 0, 0, 0);
			}
		}
	}
}

void func_811(var uParam0)//Position - 0x8C32D
{
	if (*uParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_550))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_550))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 3, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 8, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_550, 10, 2, 0, 0);
				*uParam0 = 1;
			}
		}
	}
}


int func_813(struct<3> Param0, float fParam3)//Position - 0x8C3E4
{
	return func_814(&(Global_93588.f_2167), Param0, fParam3, 0);
}

int func_814(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x8C3FE
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (GlobalFunc_6794(uParam0))
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (GlobalFunc_7696(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			GlobalFunc_8365(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_818(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_42))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					GlobalFunc_531(iVar0, uParam0->f_11);
				}
				else if ((!GlobalFunc_8366(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = GlobalFunc_536(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						GlobalFunc_7695(iVar8);
					}
				}
				if (((Global_Mission_Fail_State != 13 && Global_Mission_Fail_State != 10) && Global_Mission_Fail_State != 11) && Global_Mission_Fail_State != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_Mission_Fail_State.Failed_Script_Name)) == Global_68102)
					{
						if (uParam0->f_12.f_42 == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[21 /*54*/].f_42)
						{
							GlobalFunc_4927(24, 0);
							GlobalFunc_7695(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8317(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}




void func_818(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x8C9D2
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || GlobalFunc_539(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && GlobalFunc_321())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_41);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_53, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_46);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_53, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_53, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_53, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_53, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_53, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_766(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, GlobalFunc_101(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_53, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}








void func_826(int iParam0)//Position - 0x8CEEB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_1068 - 1))
	{
		iLocal_1068[iVar0] = iParam0;
		iVar0++;
	}
}



void func_829(int iParam0)//Position - 0x8CF9F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			break;
		
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				GlobalFunc_2532(Local_550.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				GlobalFunc_2532(Local_550.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_561))
			{
				GlobalFunc_2532(Local_561.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_572))
			{
				GlobalFunc_2532(Local_572.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				GlobalFunc_2532(Local_627.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			break;
		
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				GlobalFunc_2532(Local_550.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			break;
		
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				GlobalFunc_2532(Local_550.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_583))
			{
				GlobalFunc_2532(Local_583.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_594))
			{
				GlobalFunc_2532(Local_594.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			break;
		
		case 14:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				GlobalFunc_2532(Local_550.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_583))
			{
				GlobalFunc_2532(Local_583.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_594))
			{
				GlobalFunc_2532(Local_594.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_605))
			{
				GlobalFunc_2532(Local_605.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			GlobalFunc_5928("missfam6leadinoutfam_6_mcs_5", &uLocal_1094, 8, &uLocal_957);
			break;
		
		case 15:
		case 16:
		case 17:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				GlobalFunc_2532(Local_550.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_583))
			{
				GlobalFunc_2532(Local_583.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_561))
			{
				GlobalFunc_2532(Local_561.f_6, &uLocal_1083, 10, &uLocal_956);
			}
			break;
		
		default:
			break;
	}
}





void func_834()//Position - 0x8D36A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1036;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_1036[iVar1] = 0;
		iVar1++;
	}
	iLocal_1067 = 0;
}



void func_837(int iParam0)//Position - 0x8D421
{
	Local_718.f_2 = { -816.716f, 179.098f, 72.8274f };
	Local_718.f_1 = joaat("v_ilev_mm_doorm_l");
	Local_729.f_2 = { -816.1068f, 177.5108f, 72.8274f };
	Local_729.f_1 = joaat("v_ilev_mm_doorm_r");
	switch (iParam0)
	{
		case 0:
			Local_765 = { -822.7947f, 176.4619f, 70.221f };
			Local_765.f_3 = 292.6546f;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			Local_765 = { -807.5781f, 176.1437f, 71.8347f };
			Local_765.f_3 = 17.2773f;
			Local_550.f_2 = { -808.7352f, 178.4024f, 71.1531f };
			Local_550.f_5 = 44.4325f;
			Local_550.f_6 = GlobalFunc_4946(14);
			Local_634.f_2 = { -824.3593f, 179.5045f, 70.4652f };
			Local_634.f_5 = 137.1847f;
			Local_634.f_6 = GlobalFunc_4931(0, 0);
			Local_627.f_2 = { -622.3307f, 253.6852f, 80.5665f };
			Local_627.f_5 = 263.3081f;
			Local_627.f_6 = GlobalFunc_5112(17, 0);
			Local_561.f_2 = { -626.1675f, 244.5767f, 80.8952f };
			Local_561.f_5 = 265.6175f;
			Local_561.f_6 = GlobalFunc_4946(17);
			Local_572.f_2 = { -623.6904f, 244.6078f, 80.8952f };
			Local_572.f_5 = 85.733f;
			Local_572.f_6 = joaat("ig_fabien");
			Local_616.f_2 = { -622.4567f, 243.7266f, 80.8952f };
			Local_616.f_5 = 274.1241f;
			Local_616.f_6 = joaat("csb_screen_writer");
			Local_663.f_2 = { -621.6703f, 244.9076f, 81.69887f };
			Local_663.f_5 = { 0f, 0f, 0f };
			Local_663.f_1 = joaat("p_laptop_02_s");
			Local_641.f_2 = { -625.02f, 245.39f, 81.69f };
			Local_641.f_5 = { 0f, 0f, 0f };
			Local_641.f_1 = joaat("prop_mug_04");
			break;
		
		case 5:
			Local_765 = { -628.1871f, 246.2558f, 80.6955f };
			Local_765.f_3 = 358.2773f;
			Local_550.f_2 = { -629.4871f, 248.0318f, 80.5708f };
			Local_550.f_5 = 1.8819f;
			Local_550.f_6 = GlobalFunc_4946(14);
			Local_634.f_2 = { -630.565f, 255.282f, 80.502f };
			Local_634.f_5 = 265.1243f;
			Local_634.f_6 = GlobalFunc_4931(0, 0);
			Local_627.f_2 = { -622.3307f, 253.6852f, 80.5665f };
			Local_627.f_5 = 263.3081f;
			Local_627.f_6 = GlobalFunc_5112(17, 0);
			Local_561.f_2 = { -626.1675f, 244.5767f, 80.8952f };
			Local_561.f_5 = 265.6175f;
			Local_561.f_6 = GlobalFunc_4946(17);
			Local_572.f_2 = { -623.6904f, 244.6078f, 80.8952f };
			Local_572.f_5 = 85.733f;
			Local_572.f_6 = joaat("ig_fabien");
			break;
		
		case 6:
			Local_765 = { -628.1871f, 246.2558f, 80.6955f };
			Local_765.f_3 = 358.291f;
			Local_550.f_2 = { -629.4871f, 248.0318f, 80.5708f };
			Local_550.f_5 = 1.8819f;
			Local_550.f_6 = GlobalFunc_4946(14);
			Local_634.f_2 = { -630.565f, 255.282f, 80.502f };
			Local_634.f_5 = 265.1243f;
			Local_634.f_6 = GlobalFunc_4931(0, 0);
			Local_583.f_2 = { 321.6396f, 181.2119f, 102.5865f };
			Local_583.f_5 = 196.2891f;
			Local_583.f_6 = GlobalFunc_4946(15);
			Local_594.f_2 = { 321.0728f, 180.1358f, 102.5865f };
			Local_594.f_5 = 349.9787f;
			Local_594.f_6 = joaat("cs_lazlow");
			break;
		
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			Local_765 = { 323.822f, 179.8134f, 102.5865f };
			Local_765.f_3 = 62.0417f;
			Local_634.f_2 = { 300.655f, 173.2841f, 102.9553f };
			Local_634.f_5 = 69.9177f;
			Local_634.f_6 = GlobalFunc_4931(0, 0);
			Local_550.f_2 = { 321.6517f, 182.5264f, 102.5865f };
			Local_550.f_5 = -115.96f;
			Local_550.f_6 = GlobalFunc_4946(14);
			Local_583.f_2 = { 321.5879f, 181.5782f, 102.5865f };
			Local_583.f_5 = -100.54f;
			Local_583.f_6 = GlobalFunc_4946(15);
			Local_594.f_2 = { 321.89f, 182.1672f, 102.5865f };
			Local_594.f_5 = 214.4331f;
			Local_594.f_6 = joaat("cs_lazlow");
			Local_605.f_2 = { 322.075f, 182.25f, 102.5865f };
			Local_605.f_5 = -153.83f;
			Local_605.f_6 = joaat("u_m_y_tattoo_01");
			Local_652.f_2 = { 0f, 0f, 0f };
			Local_652.f_5 = { 0f, 0f, 0f };
			Local_652.f_1 = joaat("p_lazlow_shirt_s");
			Local_685.f_2 = { 322.68f, 179.47f, 102.59f };
			Local_685.f_5 = { 0f, 0f, 0f };
			Local_685.f_1 = joaat("p_cs_laz_ptail_s");
			Local_696.f_2 = { 322.28f, 183.48f, 102.59f };
			Local_696.f_5 = { 0f, 0f, 0f };
			Local_696.f_1 = joaat("prop_piercing_gun");
			Local_707.f_2 = { 322.28f, 183.48f, 102.59f };
			Local_707.f_5 = { 0f, 0f, 0f };
			Local_707.f_1 = joaat("v_ilev_ta_tatgun");
			Local_674.f_2 = { 322.28f, 183.48f, 102.59f };
			Local_674.f_5 = { 0f, 0f, 0f };
			Local_674.f_1 = joaat("prop_cs_scissors");
			break;
		
		case 14:
			Local_765 = { 315.4439f, 175.392f, 102.8468f };
			Local_765.f_3 = 106.3951f;
			Local_634.f_2 = { 300.655f, 173.2841f, 102.9553f };
			Local_634.f_5 = 69.9177f;
			Local_634.f_6 = GlobalFunc_4931(0, 0);
			Local_550.f_2 = { 313.6881f, 174.4399f, 102.8722f };
			Local_550.f_5 = 101.026f;
			Local_550.f_6 = GlobalFunc_4946(14);
			Local_583.f_2 = { 313.3786f, 176.4375f, 102.8908f };
			Local_583.f_5 = 95.2572f;
			Local_583.f_6 = GlobalFunc_4946(15);
			Local_594.f_2 = { 321.89f, 182.1672f, 102.5865f };
			Local_594.f_5 = 214.4331f;
			Local_594.f_6 = joaat("cs_lazlow");
			Local_605.f_2 = { 322.075f, 182.25f, 102.5865f };
			Local_605.f_5 = -153.83f;
			Local_605.f_6 = joaat("u_m_y_tattoo_01");
			Local_561.f_2 = { -1906.765f, -559.8595f, 10.79799f };
			Local_561.f_5 = -88.88f;
			Local_561.f_6 = GlobalFunc_4946(17);
			break;
		
		case 15:
		case 16:
			Local_765 = { -1902.865f, -558.0767f, 10.7794f };
			Local_765.f_3 = 225.8389f;
			Local_634.f_2 = { -1898.968f, -561.0737f, 10.7827f };
			Local_634.f_5 = 321.4044f;
			Local_634.f_6 = GlobalFunc_4931(0, 0);
			Local_550.f_2 = { -1904.721f, -560.4189f, 10.798f };
			Local_550.f_5 = 238.9373f;
			Local_550.f_6 = GlobalFunc_4946(14);
			Local_583.f_2 = { -1903.301f, -560.9316f, 10.798f };
			Local_583.f_5 = 224.1973f;
			Local_583.f_6 = GlobalFunc_4946(15);
			Local_561.f_2 = { -1899.469f, -557.8484f, 10.7553f };
			Local_561.f_5 = 227.6959f;
			Local_561.f_6 = GlobalFunc_4946(17);
			break;
		
		case 17:
			Local_765 = { -823.1286f, 176.7446f, 70.2141f };
			Local_765.f_3 = 292.7178f;
			Local_634.f_2 = { -825.6646f, 180.1217f, 70.4785f };
			Local_634.f_5 = 316.5125f;
			Local_634.f_6 = GlobalFunc_4931(0, 0);
			Local_550.f_2 = { -822.4412f, 175.9556f, 70.3352f };
			Local_550.f_5 = 293.9573f;
			Local_550.f_6 = GlobalFunc_4946(14);
			Local_583.f_2 = { -821.4911f, 175.1127f, 70.5573f };
			Local_583.f_5 = 284.8115f;
			Local_583.f_6 = GlobalFunc_4946(15);
			Local_561.f_2 = { -820.217f, 175.4369f, 70.624f };
			Local_561.f_5 = 284.8128f;
			Local_561.f_6 = GlobalFunc_4946(17);
			break;
	}
}





void func_842(int iParam0)//Position - 0x8DDD9
{
	GlobalFunc_7930(iParam0, 9, 1);
}







void func_849(int iParam0, bool bParam1)//Position - 0x8E231
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 0, 1))
		{
			GlobalFunc_7930(iParam0, 0, 1);
			GlobalFunc_1293(iParam0);
		}
	}
	else if (GlobalFunc_7702(iParam0, 0, 1))
	{
		GlobalFunc_7929(iParam0, 0, 1);
		GlobalFunc_1293(iParam0);
	}
}



void func_852(int iParam0, bool bParam1)//Position - 0x8E2C9
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 8, 1))
		{
			GlobalFunc_7930(iParam0, 8, 1);
		}
	}
	else if (GlobalFunc_7702(iParam0, 8, 1))
	{
		GlobalFunc_7929(iParam0, 8, 1);
	}
}






void func_858(int iParam0, var uParam1)//Position - 0x8E894
{
	if (*iParam0 != 18 && *iParam0 != 19)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_550))
			{
				if (iLocal_1068[3] == 1)
				{
					if (PED::IS_PED_INJURED(Local_550) || ENTITY::IS_ENTITY_DEAD(Local_550))
					{
						*uParam1 = 3;
						*iParam0 = 19;
					}
				}
				if (iLocal_1068[9] == 1 || iLocal_1068[11] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_550))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_550) > 100f)
						{
							if (iLocal_1068[10] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_583))
								{
									if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_583) > (100f / 2f))
									{
										*uParam1 = 11;
										*iParam0 = 19;
									}
								}
							}
							if (iLocal_1068[8] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_561))
								{
									if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_561) > (100f / 2f))
									{
										*uParam1 = 11;
										*iParam0 = 19;
									}
								}
							}
							if (*uParam1 == 0)
							{
								*uParam1 = 9;
								*iParam0 = 19;
							}
						}
						if (*iParam0 == 4)
						{
							if (HUD::DOES_BLIP_EXIST(Local_740.f_1[0]) || !PED::IS_PED_IN_GROUP(Local_550))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -641.8773f, 247.5781f, 80.30839f, -607.4605f, 244.6178f, 87.00999f, 22f, 0, 1, 0))
								{
									*uParam1 = 9;
									*iParam0 = 19;
								}
							}
						}
						if (*iParam0 == 14)
						{
							if (HUD::DOES_BLIP_EXIST(Local_740.f_1[1]) || !PED::IS_PED_IN_GROUP(Local_550))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 16f, 0, 1, 0))
								{
									if (!PED::IS_PED_INJURED(Local_583))
									{
										if (HUD::DOES_BLIP_EXIST(Local_740.f_1[0]) || !PED::IS_PED_IN_GROUP(Local_583))
										{
											*uParam1 = 11;
											*iParam0 = 19;
										}
									}
									if (*uParam1 == 0)
									{
										*uParam1 = 9;
										*iParam0 = 19;
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_583))
			{
				if (iLocal_1068[4] == 1)
				{
					if (PED::IS_PED_INJURED(Local_583) || ENTITY::IS_ENTITY_DEAD(Local_583))
					{
						*uParam1 = 4;
						*iParam0 = 19;
					}
				}
				if (iLocal_1068[10] == 1 || iLocal_1068[11] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_583))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_583) > 100f)
						{
							if (iLocal_1068[9] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_550))
								{
									if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_550) > (100f / 2f))
									{
										*uParam1 = 11;
										*iParam0 = 19;
									}
								}
							}
							if (iLocal_1068[8] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_561))
								{
									if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_561) > (100f / 2f))
									{
										*uParam1 = 11;
										*iParam0 = 19;
									}
								}
							}
							if (*uParam1 == 0)
							{
								*uParam1 = 10;
								*iParam0 = 19;
							}
						}
						if (*iParam0 == 14)
						{
							if (HUD::DOES_BLIP_EXIST(Local_740.f_1[0]) || !PED::IS_PED_IN_GROUP(Local_583))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 16f, 0, 1, 0))
								{
									if (!PED::IS_PED_INJURED(Local_550))
									{
										if (HUD::DOES_BLIP_EXIST(Local_740.f_1[1]) || !PED::IS_PED_IN_GROUP(Local_550))
										{
											*uParam1 = 11;
											*iParam0 = 19;
										}
									}
									if (*uParam1 == 0)
									{
										*uParam1 = 10;
										*iParam0 = 19;
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_561))
			{
				if (iLocal_1068[1] == 1)
				{
					if (PED::IS_PED_INJURED(Local_561) || ENTITY::IS_ENTITY_DEAD(Local_561))
					{
						*uParam1 = 1;
						*iParam0 = 19;
					}
				}
				if (iLocal_1068[8] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_561))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_561) > 100f)
						{
							if (iLocal_1068[9] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_550))
								{
									if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_550) > (100f / 2f))
									{
										*uParam1 = 11;
										*iParam0 = 19;
									}
								}
							}
							if (iLocal_1068[10] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_583))
								{
									if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_583) > (100f / 2f))
									{
										*uParam1 = 11;
										*iParam0 = 19;
									}
								}
							}
							if (*uParam1 == 0)
							{
								*uParam1 = 8;
								*iParam0 = 19;
							}
						}
					}
				}
				if (iLocal_1068[7] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_561))
					{
						if (((((PED::HAS_PED_RECEIVED_EVENT(Local_561, 22) || PED::HAS_PED_RECEIVED_EVENT(Local_561, 86)) || PED::HAS_PED_RECEIVED_EVENT(Local_561, 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_561, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_561, 123)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_561, PLAYER::PLAYER_PED_ID(), 1))
						{
							*uParam1 = 7;
							*iParam0 = 19;
						}
						if (*iParam0 == 4)
						{
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -641.8773f, 247.5781f, 80.30839f, -607.4605f, 244.6178f, 87.00999f, 22f, 0, 1, 0))
									{
										*uParam1 = 7;
										*iParam0 = 19;
									}
								}
							}
						}
						if (*iParam0 == 14)
						{
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1894.676f, -567.7178f, 10.61473f, -1906.34f, -557.9231f, 13.81239f, 16f, 0, 1, 0))
								{
									*uParam1 = 7;
									*iParam0 = 19;
								}
							}
						}
					}
				}
				if (iLocal_1068[12] == 1)
				{
					if (*iParam0 == 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -615.176f, 241.8139f, 80.01198f, -638.1591f, 239.557f, 85.01198f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -615.1597f, 243.767f, 80.01198f, -638.5164f, 246.0403f, 84.99519f, 4f, 0, 1, 0))
							{
								if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									*uParam1 = 12;
									*iParam0 = 19;
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_572))
			{
				if (iLocal_1068[2] == 1)
				{
					if (PED::IS_PED_INJURED(Local_572) || ENTITY::IS_ENTITY_DEAD(Local_572))
					{
						*uParam1 = 2;
						*iParam0 = 19;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_594))
			{
				if (iLocal_1068[5] == 1)
				{
					if (PED::IS_PED_INJURED(Local_594) || ENTITY::IS_ENTITY_DEAD(Local_594))
					{
						*uParam1 = 5;
						*iParam0 = 19;
					}
				}
			}
		}
	}
}


void func_860(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8EF4D
{
	int iVar0;
	int iVar1;
	var uVar2;
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
		if (iParam0 != Global_Current_Checkpoint)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_Current_Checkpoint)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_Current_Checkpoint)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			uVar2 = GlobalFunc_5110(iVar1);
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_Current_Checkpoint, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_Current_Checkpoint, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_Mission_Fail_State.Failed_Script_Name));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_Current_Checkpoint = iParam0;
		func_861(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}

void func_861(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8F0C5
{
	func_862(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_862(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x8F0E1
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7719();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_864(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}


void func_864(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8FF87
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = GlobalFunc_6674(iParam2);
	}
	if (func_688(iParam2, &iVar0, iParam3, iParam5))
	{
		GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}


















int func_882(int iParam0)//Position - 0x91645
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0 + 1;
	uVar1 = uVar0;
	return uVar1;
}

void func_883(var uParam0, int iParam1)//Position - 0x91659
{
	if (iParam1 == 0)
	{
		*uParam0 = 4;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 5;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 6;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 8;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 14;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 16;
	}
	bLocal_955 = true;
}



void func_886()//Position - 0x91701
{
	if (iLocal_1035 == 1)
	{
		RECORDING::_0x81CBAE94390F9F89();
	}
	func_690(&Local_550, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_690(&Local_583, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_690(&Local_561, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_690(&Local_572, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_690(&Local_594, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_690(&Local_616, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_690(&Local_605, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.x))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_718.f_2, 1f, Local_718.f_1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_729.x))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_729.f_2, 1f, Local_729.f_1, 0);
	}
	GlobalFunc_2943(&Local_641, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_652, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_663, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_674, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_685, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_696, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_707, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_718, CAM::IS_SCREEN_FADED_OUT());
	GlobalFunc_2943(&Local_729, CAM::IS_SCREEN_FADED_OUT());
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1023))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1023, 0);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_988))
	{
		AUDIO::STOP_SOUND(iLocal_988);
	}
	AUDIO::STOP_AUDIO_SCENES();
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1028);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1029);
	}
	GlobalFunc_110();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_5112(17, 0), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 0);
	if (CAM::DOES_CAM_EXIST(iLocal_1025))
	{
		CAM::DESTROY_CAM(iLocal_1025, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1024))
	{
		CAM::DESTROY_CAM(iLocal_1024, 0);
	}
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	GlobalFunc_7632(0);
	GlobalFunc_563(0);
	GlobalFunc_2224(0);
	GlobalFunc_10875(22, 0, 0);
	func_852(22, 0);
	GlobalFunc_8634(22, 0);
	func_849(22, 1);
	GlobalFunc_8625(22, 0);
	GlobalFunc_8523(22, 0);
	func_842(22);
	GlobalFunc_7678(1, 1);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_974);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1026, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1027, 0);
	func_713();
}



