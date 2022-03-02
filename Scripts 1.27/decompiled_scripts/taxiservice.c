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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	float fLocal_80 = 0f;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	char* sLocal_108 = NULL;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 12;
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
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
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
	var uLocal_800 = 1065353216;
	var uLocal_801 = 0;
	struct<9> Local_802 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	struct<3> Local_815[40];
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	char cLocal_940[32] = "";
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	struct<3> Local_948 = { 0, 0, 0 } ;
	struct<3> Local_951 = { 0, 0, 0 } ;
	struct<3> Local_954 = { 0, 0, 0 } ;
	struct<3> Local_957 = { 0, 0, 0 } ;
	struct<3> Local_960 = { 0, 0, 0 } ;
	struct<3> Local_963 = { 0, 0, 0 } ;
	struct<3> Local_966 = { 0, 0, 0 } ;
	struct<3> Local_969 = { 0, 0, 0 } ;
	struct<3> Local_972 = { 0, 0, 0 } ;
	struct<3> Local_975 = { 0, 0, 0 } ;
	int iLocal_978 = 0;
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
	iLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_70 = 1076369579;
	iLocal_71 = 1076631591;
	fLocal_74 = 0.22f;
	fLocal_75 = 50f;
	fLocal_76 = -4f;
	fLocal_77 = 4f;
	fLocal_78 = -89f;
	fLocal_79 = 89f;
	fLocal_80 = 4f;
	fLocal_83 = 0f;
	fLocal_85 = 0.4f;
	fLocal_86 = 0.6f;
	fLocal_87 = 0.201f;
	fLocal_88 = 0.351f;
	iLocal_91 = -1;
	iLocal_106 = -1;
	iLocal_107 = -1;
	sLocal_108 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 195, 1);
	iLocal_109 = joaat("prop_taxi_meter_2");
	iLocal_111 = 3;
	iLocal_812 = -1;
	iLocal_813 = 262;
	StringCopy(&cLocal_940, "oddjobs@taxi@driver", 32);
	Local_951 = { 0f, 0f, 0f };
	Local_954 = { 0f, 0f, 0f };
	Local_966 = { 0f, -0.25f, 0.55f };
	Local_969 = { -0.3f, 1f, 0.35f };
	Local_972 = { -0.01f, 0.6f, 0.24f };
	Local_975 = { -5f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
		{
			func_223(0);
		}
		else
		{
			func_223(1);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_216())
	{
		func_223(1);
	}
	while (true)
	{
		if (!func_215())
		{
			func_223(1);
		}
		if (func_214(iLocal_938))
		{
			func_223(1);
		}
		switch (iLocal_938)
		{
			case 1:
				func_54();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1D1
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_96400)
		{
			Global_96400 = 0;
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
			}
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
			if ((iLocal_937 == 2 || iLocal_937 == 3) || iLocal_937 == 4)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_96384) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384, 1))
	{
		if (!func_2(PLAYER::PLAYER_PED_ID(), -828834893) && !func_2(PLAYER::PLAYER_PED_ID(), 451360105))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	else
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_96385, Global_96384, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Global_96385, Global_96384, PLAYER::PLAYER_PED_ID(), 8, 25f, 790564, 300f, 15f, 1);
					}
				}
				else if (!PED::IS_PED_FLEEING(Global_96385))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SMART_FLEE_PED(Global_96385, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
				}
				PED::SET_PED_KEEP_TASK(Global_96385, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 0);
			}
		}
		else if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(Global_96385, Global_96384, 0))
			{
				if (!func_2(Global_96385, -258271821))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Global_96385, Global_96384, 12f, 790699);
				}
			}
			PED::SET_PED_KEEP_TASK(Global_96385, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 0);
		}
		func_223(1);
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x39F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0)//Position - 0x3E6
{
	if (GlobalFunc_777(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_5()//Position - 0x430
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
	{
		PED::GET_GROUP_SIZE(GlobalFunc_468(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			uVar2 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 0);
			if (!PED::IS_PED_INJURED(uVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(Global_96384))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar2, Global_96384, 0))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar2, Global_96384, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(Global_96384))
					{
						if (PED::IS_PED_IN_VEHICLE(iVar2, Global_96384, 0))
						{
							TASK::TASK_LEAVE_VEHICLE(iVar2, Global_96384, 64);
						}
					}
				}
			}
		}
	}
}


void func_7()//Position - 0x4ED
{
	bool bVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		if (!PED::IS_PED_INJURED(Global_96385))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
			{
				if (!func_52())
				{
					bVar0 = true;
					if (GlobalFunc_469(GlobalFunc_8315()) >= iLocal_102)
					{
						if (bLocal_66)
						{
							if (iLocal_102 > 0)
							{
								if (fLocal_73 > 75f)
								{
									iLocal_814 = 6;
								}
								else
								{
									iLocal_814 = 5;
								}
								func_35(Global_96385, &iLocal_814);
								GlobalFunc_10834(GlobalFunc_8315(), 21, iLocal_102);
								bVar0 = false;
							}
						}
						else if (iLocal_67 || iLocal_937 == 3)
						{
							if (iLocal_102 > 0)
							{
								iLocal_814 = 13;
								func_35(Global_96385, &iLocal_814);
								GlobalFunc_10834(GlobalFunc_8315(), 21, iLocal_102);
								bVar0 = false;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Global_96384) > 5f)
						{
							if (!GlobalFunc_142())
							{
								iLocal_814 = 12;
								func_35(Global_96385, &iLocal_814);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							}
						}
						else
						{
							iLocal_814 = 13;
							func_35(Global_96385, &iLocal_814);
							if (iLocal_102 > 0)
							{
								GlobalFunc_10834(GlobalFunc_8315(), 21, iLocal_102);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_102 > 0)
						{
							iLocal_814 = 7;
							func_35(Global_96385, &iLocal_814);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
					}
				}
			}
		}
	}
}




























void func_35(int iParam0, int iParam1)//Position - 0x15C7
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!func_41(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					GlobalFunc_5130(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_36();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					GlobalFunc_5130(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					GlobalFunc_5130(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					GlobalFunc_5130(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					GlobalFunc_5130(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					GlobalFunc_5130(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
						}
						GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_36();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					GlobalFunc_5130(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					GlobalFunc_5130(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					GlobalFunc_5130(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					GlobalFunc_5130(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_96405)
					{
						GlobalFunc_5130(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_96405 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					GlobalFunc_5130(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (AUDIO::IS_RADIO_RETUNING())
					{
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 4000)
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
							if (bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
							}
							switch (AUDIO::GET_PLAYER_RADIO_STATION_INDEX())
							{
								case 0:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VIBE", 7);
									break;
								
								case 1:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LRR", 7);
									break;
								
								case 2:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JNR", 7);
									break;
								
								case 3:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_MASSIVEB", 7);
									break;
								
								case 4:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_K109", 7);
									break;
								
								case 5:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_WKTT", 7);
									break;
								
								case 6:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LCHC", 7);
									break;
								
								case 7:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JOURNEY", 7);
									break;
								
								case 8:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FUSION", 7);
									break;
								
								case 9:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BEAT", 7);
									break;
								
								case 10:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BROKER", 7);
									break;
								
								case 11:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								
								case 12:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_PLR", 7);
									break;
								
								case 13:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_SANJUAN", 7);
									break;
								
								case 14:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FRANCOIS", 7);
									break;
								
								case 15:
									GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
						}
						GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					GlobalFunc_5130(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
						}
						GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "THANKS", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!func_41(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_36()//Position - 0x1A6E
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_37();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
		}
		GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), sVar0, 7);
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
}

char* func_37()//Position - 0x1ABA
{
	char cVar0[32];
	
	StringCopy(&cVar0, ZONE::GET_NAME_OF_ZONE(func_38(Local_42.x)), 32);
	if (MISC::ARE_STRINGS_EQUAL("SanAnd", &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Alamo", &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Alta", &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Airp", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ArmyB", &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BhamCa", &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Banning", &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Baytre", &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Beach", &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BradT", &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BradP", &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Burton", &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CANNY", &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CCreak", &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CalafB", &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ChamH", &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CHU", &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CHIL", &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("COSI", &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CMSW", &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Cypre", &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Davis", &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Desrt", &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelBe", &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelPe", &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelSol", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Downt", &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DTVine", &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Eclips", &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ELSant", &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("EBuro", &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ELGorl", &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Elysian", &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Galli", &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Galfish", &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Greatc", &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Golf", &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("GrapeS", &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Hawick", &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Harmo", &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Heart", &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("HumLab", &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("HORS", &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Koreat", &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Jail", &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LAct", &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LDam", &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Lago", &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LegSqu", &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosSF", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LMesa", &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosPuer", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosPFy", &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Mirr", &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Morn", &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Murri", &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTChil", &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTJose", &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTGordo", &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Movie", &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (MISC::ARE_STRINGS_EQUAL("NCHU", &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Oceana", &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Observ", &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Palmpow", &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PBOX", &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PBluff", &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Paleto", &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalCov", &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalFor", &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalHigh", &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ProcoB", &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Prol", &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("RTRAK", &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Rancho", &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("RGLEN", &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Richm", &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Rockf", &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SANDY", &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TongvaH", &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TongvaV", &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("East_V", &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Zenora", &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Slab", &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SKID", &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SLSant", &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Stad", &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Tatamo", &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Termina", &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TEXTI", &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WVine", &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("UtopiaG", &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Vesp", &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (MISC::ARE_STRINGS_EQUAL("VCana", &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Vine", &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WMirror", &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WindF", &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Zancudo", &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SanChia", &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("STRAW", &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("zQ_UAR", &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ZP_ORT", &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_38(int iParam0)//Position - 0x23E3
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = HUD::GET_BLIP_INFO_ID_TYPE(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (!PED::IS_PED_INJURED(iVar4))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = HUD::GET_BLIP_INFO_ID_PICKUP_INDEX(iParam0);
		if (OBJECT::DOES_PICKUP_EXIST(uVar6))
		{
			Var0 = { OBJECT::GET_PICKUP_COORDS(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	return Var0;
}



int func_41(int iParam0, bool bParam1)//Position - 0x26CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
		{
			GlobalFunc_6524("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6524("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (GlobalFunc_111())
	{
		GlobalFunc_6524("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			GlobalFunc_6524("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
		{
			PED::GET_GROUP_SIZE(GlobalFunc_468(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), iVar2);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							GlobalFunc_6524("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}











int func_52()//Position - 0x29D7
{
	if (GlobalFunc_466(1) == GlobalFunc_8315())
	{
		return 1;
	}
	return 0;
}


void func_54()//Position - 0x2A03
{
	if (func_212())
	{
		func_210();
		func_209();
		func_208();
		if (!func_205())
		{
			func_199();
		}
		func_198();
		if (iLocal_937 != 4)
		{
			func_35(Global_96385, &iLocal_814);
			if (iLocal_937 != 0)
			{
				if (func_196())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_112))
					{
						func_172();
						iLocal_59 = 1;
					}
				}
				func_163();
			}
		}
		switch (iLocal_937)
		{
			case 0:
				if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_idle", 3))
						{
							if (!func_2(Global_96385, -2118855366))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 1000000);
							}
						}
					}
				}
				if (func_162())
				{
					if (func_161() && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_172();
						iLocal_814 = 1;
						iLocal_936 = 0;
						Global_96421 = 0;
						iLocal_89 = 0;
						iLocal_67 = 0;
						iLocal_57 = 0;
						iLocal_59 = 1;
						func_160();
						iLocal_937 = 1;
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_idle", 3))
						{
							if (!func_2(Global_96385, -2118855366))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 1000000);
							}
						}
					}
				}
				func_159(&Global_96384, iLocal_978);
				if (func_158())
				{
					STATS::STAT_INCREMENT(joaat("sp_number_of_taxis_used"), 1f);
					iLocal_59 = 1;
					iLocal_937 = 2;
				}
				break;
			
			case 2:
				if (func_158())
				{
					func_155();
				}
				break;
			
			case 3:
				func_154();
				break;
			
			case 4:
				func_70();
				break;
		}
		func_55();
	}
	else
	{
		iLocal_938 = 2;
	}
}

void func_55()//Position - 0x2C07
{
	char* sVar0;
	
	if (!func_205())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_113))
		{
			if (iLocal_937 != 0)
			{
				sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 218, 1);
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_108, sVar0))
				{
					sLocal_108 = sVar0;
					iLocal_59 = 1;
				}
				if (iLocal_59)
				{
					Local_802 = { GlobalFunc_1285() };
					GlobalFunc_5330(&uLocal_114);
					GlobalFunc_1987(0, 75, "TXM_EXIT", &uLocal_114, 0, 332);
					if (iLocal_92 > 1)
					{
						GlobalFunc_1987(2, 218, "TXM_CDES", &uLocal_114, 0, 332);
					}
					if (!bLocal_61)
					{
						if (iLocal_92 > 0)
						{
							GlobalFunc_1987(2, 176, "TXM_SLCT", &uLocal_114, 0, 332);
						}
					}
					else if (iLocal_937 == 2)
					{
						GlobalFunc_1987(2, 177, "TXM_STOP", &uLocal_114, 0, 332);
						if (bLocal_60)
						{
							GlobalFunc_1987(2, 176, "TXM_SLCT", &uLocal_114, 0, 332);
						}
						if (func_65())
						{
							GlobalFunc_1987(2, 176, "TXM_SKIP", &uLocal_114, 0, 332);
						}
						if (!bLocal_65)
						{
							GlobalFunc_1987(2, 179, "TXM_HURY", &uLocal_114, 0, 332);
						}
					}
					else if (iLocal_937 == 3)
					{
						GlobalFunc_1987(2, 177, "TXM_STRT", &uLocal_114, 0, 332);
						if (bLocal_60)
						{
							GlobalFunc_1987(2, 176, "TXM_SLCT", &uLocal_114, 0, 332);
						}
					}
					iLocal_59 = 0;
				}
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
				GlobalFunc_732(1);
				GlobalFunc_1100(1);
				func_56(&uLocal_113, &Local_802, &uLocal_114, GlobalFunc_1281(&uLocal_114));
			}
		}
		else
		{
			uLocal_113 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_113);
		iLocal_59 = 1;
	}
}

void func_56(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x2D73
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GlobalFunc_1280(uParam2);
	}
	if (Global_1318744 < 2)
	{
		GlobalFunc_1100(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (MISC::IS_BIT_SET(uParam2->f_676, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, 1));
						if (iVar3 < 332)
						{
							GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						GlobalFunc_257(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(uVar4, uVar5, 1));
					}
					if (MISC::IS_BIT_SET(uParam2->f_674, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_675, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GlobalFunc_726(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_678, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GlobalFunc_257(&(uParam2->f_1[iVar0 /*56*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						GlobalFunc_257(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_674, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_675, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GlobalFunc_726(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_686);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		GlobalFunc_1279(*uParam0, uParam1);
	}
	GlobalFunc_1020();
}









int func_65()//Position - 0x3188
{
	if (iLocal_937 != 2)
	{
		return 0;
	}
	if (bLocal_60)
	{
		return 0;
	}
	if (fLocal_84 < 50f)
	{
		return 0;
	}
	if (CAM::DOES_CAM_EXIST(uLocal_69))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_69))
		{
			return 0;
		}
	}
	return 1;
}





void func_70()//Position - 0x3373
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
	switch (iLocal_939)
	{
		case 0:
			GlobalFunc_7632(1);
			if (GlobalFunc_2311(iLocal_90, 500))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_939 = 1;
			}
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_96384, 0);
				}
				HUD::CLEAR_PRINTS();
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
				{
					HUD::RELEASE_NAMED_RENDERTARGET("taxi");
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
				{
					OBJECT::DELETE_OBJECT(&iLocal_110);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_109);
				}
				if (CAM::IS_CAM_ACTIVE(uLocal_69))
				{
					GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
					Global_96401 = 0;
					CAM::SET_CAM_ACTIVE(uLocal_69, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					HUD::UNLOCK_MINIMAP_POSITION();
					HUD::UNLOCK_MINIMAP_ANGLE();
					HUD::SET_RADAR_ZOOM(0);
				}
				func_145(iLocal_978);
				iLocal_90 = MISC::GET_GAME_TIMER();
				if (bLocal_60)
				{
					bLocal_62 = false;
					bLocal_60 = false;
					Local_42 = { Local_815[iLocal_93 /*3*/] };
				}
				if (!bLocal_62)
				{
					iLocal_89 = 0;
					iLocal_936 = 0;
					iLocal_939 = 2;
				}
				else
				{
					GlobalFunc_4593();
					iLocal_939 = 3;
				}
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 2:
			if (func_113(&Local_42, &Global_96391, &Global_96397))
			{
				GlobalFunc_4593();
				iLocal_939 = 3;
			}
			break;
		
		case 3:
			if (Global_68261 == -1)
			{
				func_112();
				func_111();
				func_109();
				func_105();
				func_104();
				MISC::CLEAR_AREA(Global_96391, 5f, 1, 0, 0, 0);
				func_100(1097859072);
				if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					ENTITY::SET_ENTITY_COORDS(Global_96384, Global_96391, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Global_96384, Global_96397);
					ENTITY::FREEZE_ENTITY_POSITION(Global_96384, 1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::NEW_LOAD_SCENE_STOP();
				MISC::CLEAR_AREA(Global_96391, 5000f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Global_96391, 5000f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Global_96391, 30f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Global_96391, 5000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Global_96391, 5000f);
				if (Global_87289 != -1)
				{
					GlobalFunc_507(Global_87289, 1);
					GlobalFunc_562(Global_87289);
				}
				iLocal_811 = func_97(Local_42.x);
				if (iLocal_811 != -1)
				{
					GlobalFunc_507(iLocal_811, 1);
				}
				iLocal_58 = 0;
				iLocal_939 = 4;
			}
			break;
		
		case 4:
			if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Global_96391, 4500f, 0))
			{
				iLocal_58 = 1;
				iLocal_939 = 5;
			}
			else if (GlobalFunc_2311(iLocal_90, 2500))
			{
				iLocal_939 = 5;
			}
			break;
		
		case 5:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (iLocal_811 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_58 = 0;
						GlobalFunc_6549(iLocal_811);
						GlobalFunc_507(iLocal_811, 0);
					}
					iLocal_939 = 6;
				}
				else if (GlobalFunc_2311(iLocal_90, 20000))
				{
					if (iLocal_811 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_58 = 0;
						GlobalFunc_6549(iLocal_811);
						GlobalFunc_507(iLocal_811, 0);
					}
					iLocal_939 = 6;
				}
			}
			else
			{
				if (iLocal_811 != -1)
				{
					GlobalFunc_6549(iLocal_811);
					GlobalFunc_507(iLocal_811, 0);
				}
				iLocal_58 = 0;
				iLocal_939 = 6;
			}
			break;
		
		case 6:
			GlobalFunc_2769();
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			MISC::POPULATE_NOW();
			if (iLocal_811 != -1)
			{
				bVar1 = true;
				if (Global_81155[iLocal_811 /*34*/].f_13 == -1 && Global_81155[iLocal_811 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((GlobalFunc_8315() == 0 && !MISC::IS_BIT_SET(Global_81155[iLocal_811 /*34*/].f_15, 8)) || (GlobalFunc_8315() == 1 && !MISC::IS_BIT_SET(Global_81155[iLocal_811 /*34*/].f_15, 9))) || (GlobalFunc_8315() == 2 && !MISC::IS_BIT_SET(Global_81155[iLocal_811 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (GlobalFunc_5183(Global_81155[iLocal_811 /*34*/].f_13, Global_81155[iLocal_811 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					CLOCK::ADVANCE_CLOCK_TIME_TO(Global_81155[iLocal_811 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_106 = func_85(1129381888, 1);
			iLocal_939 = 7;
			break;
		
		case 7:
			bVar0 = true;
			if (func_84(iLocal_106))
			{
				bVar0 = false;
			}
			if (!func_76(Global_96391))
			{
				bVar0 = false;
			}
			if (!GlobalFunc_2768())
			{
				bVar0 = false;
			}
			if (!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION())
			{
				bVar0 = false;
			}
			if (iLocal_58)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_811 != -1 && Global_87294)
			{
				bVar0 = false;
			}
			if (GlobalFunc_2311(iLocal_90, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_58)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					iLocal_58 = 0;
				}
				if (iLocal_68)
				{
					iLocal_68 = 0;
					MISC::GET_GROUND_Z_FOR_3D_COORD(Global_96391 + Vector(100f, 0f, 0f), &fVar2);
					if (fVar2 > Global_96391.f_2)
					{
						Global_96391.f_2 = (fVar2 + 0.5f);
					}
				}
				func_100(12f);
				func_72();
				if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_96384, 0);
					ENTITY::SET_ENTITY_HEADING(Global_96384, Global_96397);
					ENTITY::SET_ENTITY_COORDS(Global_96384, Global_96391, 1, 0, 0, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96384);
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 24, 5000);
				}
				iLocal_90 = MISC::GET_GAME_TIMER();
				iLocal_939 = 8;
			}
			break;
		
		case 8:
			if (GlobalFunc_2311(iLocal_90, 500))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_96384, 1);
				}
				if (!GlobalFunc_188())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				iLocal_939 = 9;
			}
			break;
		
		case 9:
			if (CAM::IS_SCREEN_FADED_IN() || GlobalFunc_188())
			{
				if (((!Global_87295 && iLocal_811 != -1) && iLocal_811 != 72) && iLocal_811 != 87)
				{
					GlobalFunc_562(iLocal_811);
				}
				GlobalFunc_7632(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384, 1))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 24, 5000);
				PED::SET_PED_KEEP_TASK(Global_96385, 1);
				bLocal_66 = true;
				iLocal_938 = 2;
				iLocal_939 = 10;
			}
			break;
		
		case 10:
			break;
	}
}


void func_72()//Position - 0x39F3
{
	struct<3> Var0;
	float fVar3;
	
	switch (iLocal_812)
	{
		case 92:
			Var0 = { GlobalFunc_2247(228, 0) };
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_96391, Var0, 1);
			if (fVar3 < 100f)
			{
				Var0 = { GlobalFunc_107(Global_96391 - Var0) };
				Var0 = { (Global_96391 + (Var0.x * IntToFloat((100 - SYSTEM::ROUND(fVar3))))), (Global_96391.f_1 + (Var0.f_1 * IntToFloat((100 - SYSTEM::ROUND(fVar3))))), Global_96391.f_2 };
				PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, &Global_96391, &Global_96397, 1, 1077936128, 0);
				ENTITY::SET_ENTITY_COORDS(Global_96384, Global_96391, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Global_96384, Global_96397);
			}
			break;
	}
}




int func_76(struct<3> Param0)//Position - 0x3B3B
{
	int iVar0;
	
	iVar0 = func_82(Param0);
	if (!GlobalFunc_226(&uLocal_51))
	{
		iLocal_50 = 0;
		GlobalFunc_7260(&uLocal_51, 0f);
	}
	if (iVar0 == iLocal_50 || GlobalFunc_5182(&uLocal_51) > 8f)
	{
		GlobalFunc_235(&uLocal_51);
		iLocal_50 = 0;
		return 1;
	}
	return 0;
}






int func_82(struct<3> Param0)//Position - 0x3C18
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	if (GlobalFunc_892(0, 4))
	{
		iVar1 = 69;
		while (iVar1 <= 71)
		{
			fVar2 = SYSTEM::VDIST2(GlobalFunc_2247(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (GlobalFunc_892(0, 0))
	{
		iVar1 = 124;
		while (iVar1 <= 136)
		{
			fVar2 = SYSTEM::VDIST2(GlobalFunc_2247(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (GlobalFunc_892(0, 10))
	{
		iVar1 = 124;
		fVar2 = SYSTEM::VDIST2(GlobalFunc_2247(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}


int func_84(int iParam0)//Position - 0x3D20
{
	if (iParam0 != -1)
	{
		if (!Global_96440[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0, bool bParam1)//Position - 0x3D41
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = iParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			iVar36 = GlobalFunc_8310();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
				{
					GlobalFunc_6675(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}












int func_97(int iParam0)//Position - 0x59A2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/])
		{
			if (Global_87300[iVar0 /*17*/].f_9 != 262)
			{
				if (Global_Mission_Blips[Global_87300[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_87300[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}



void func_100(int iParam0)//Position - 0x5A5E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (!(((((((GlobalFunc_891(89) || GlobalFunc_891(88)) || GlobalFunc_891(92)) || GlobalFunc_891(33)) || GlobalFunc_785() == 89) || GlobalFunc_785() == 88) || GlobalFunc_785() == 92) || GlobalFunc_785() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_96391 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_101(&iVar0, Var3, iParam0))
		{
			bVar1 = false;
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Global_96391, iVar2, &Var3, 1, 1077936128, 0))
			{
				iVar2++;
			}
		}
	}
	if (SYSTEM::VDIST2(Var3, Global_96391) > 2f)
	{
		PATHFIND::GET_SAFE_COORD_FOR_PED(Var3, 0, &Global_96391, 0);
	}
}

int func_101(int iParam0, struct<3> Param1, var uParam4)//Position - 0x5B46
{
	int iVar0[5];
	int iVar6;
	
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		*iParam0 = VEHICLE::GET_CLOSEST_VEHICLE(Param1, uParam4, iVar0[iVar6], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar6++;
	}
	return 0;
}



void func_104()//Position - 0x5C2F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		switch (Global_54975[Global_66846[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_66846[iVar0 /*9*/].f_3 = 3;
				break;
			
			case 4:
				if (Global_54758)
				{
					Global_66846[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_105()//Position - 0x5C8F
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_108(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_96391);
	if (bLocal_65)
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 200f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 200f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	else
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 100f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 100f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	CLOCK::ADD_TO_CLOCK_TIME(iVar1, iVar2, 0);
	GlobalFunc_7942((SYSTEM::TO_FLOAT((iVar1 * 60 + iVar2)) / 60f));
}



float func_108(struct<3> Param0, struct<3> Param3)//Position - 0x5DF6
{
	return (SYSTEM::VMAG(Param3 - Param0) * 1.3f);
}

void func_109()//Position - 0x5E11
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_108(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_96391) / 50f) * fLocal_74) * 2.4f);
	iVar1 = (SYSTEM::FLOOR(fLocal_83) + SYSTEM::ROUND(fVar0));
	fVar0 = SYSTEM::TO_FLOAT(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = SYSTEM::ROUND(fVar0);
	iLocal_102 = (iLocal_102 + iVar1);
	fLocal_83 = (fLocal_83 + IntToFloat(iLocal_102));
	func_110();
}

void func_110()//Position - 0x5E79
{
	iLocal_104 = (iLocal_104 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (iLocal_104 > 5000)
	{
		fLocal_83 = (fLocal_83 + fLocal_74);
		iLocal_104 = 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_960, 0) > 50f)
	{
		fLocal_83 = (fLocal_83 + fLocal_74);
		iLocal_104 = 0;
		Local_960 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
	iLocal_102 = SYSTEM::CEIL(fLocal_83);
	if (iLocal_102 != iLocal_103)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_102);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		fLocal_84 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_96391);
		iLocal_103 = iLocal_102;
	}
}

void func_111()//Position - 0x5F17
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_72)
	{
		case 0:
			iVar0 = joaat("sp0_dist_as_passenger_taxi");
			break;
		
		case 1:
			iVar0 = joaat("sp1_dist_as_passenger_taxi");
			break;
		
		case 2:
			iVar0 = joaat("sp2_dist_as_passenger_taxi");
			break;
		
		default:
			if (!GlobalFunc_39(14))
			{
			}
			break;
	}
	if (!GlobalFunc_39(14))
	{
		fVar1 = PATHFIND::CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_96391);
		STATS::STAT_INCREMENT(iVar0, fVar1);
	}
}

void func_112()//Position - 0x5F8A
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(Global_96066.f_218))
	{
		STREAMING::STREAMVOL_DELETE(Global_96066.f_218);
	}
}

int func_113(int iParam0, var uParam1, var uParam2)//Position - 0x5FAD
{
	struct<3> Var0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		switch (iLocal_936)
		{
			case 0:
				iLocal_111 = 3;
				Local_948 = { func_38(*iParam0) };
				if (HUD::DOES_BLIP_EXIST(Global_96389) && *iParam0 == Global_96389)
				{
					*uParam1 = { Global_96394 };
					*uParam2 = Global_96398;
					Var0 = { Local_948 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_73 = SYSTEM::VMAG(Var0);
					iLocal_111 = 7;
					iLocal_936 = 4;
					return 1;
				}
				else
				{
					if (func_131(Local_948, uParam1, uParam2))
					{
						Var0 = { Local_948 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_73 = SYSTEM::VMAG(Var0);
						iLocal_111 = 7;
						iLocal_936 = 4;
						return 1;
					}
					iLocal_936 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (func_120(Local_948, uParam1, uParam2, 1))
				{
					Var0 = { Local_948 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_73 = SYSTEM::VMAG(Var0);
					iLocal_111 = 7;
					iLocal_936 = 4;
					return 1;
				}
				else
				{
					iLocal_89 = 0;
					iLocal_936 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
				{
					if (func_114(&Global_96384, ENTITY::GET_ENTITY_COORDS(Global_96384, 0), Local_948, uParam1, uParam2, &iLocal_89, 1000))
					{
						iLocal_936 = 3;
						return 1;
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 3:
				if (func_131(*uParam1, uParam1, uParam2))
				{
					Var0 = { Local_948 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_73 = SYSTEM::VMAG(Var0);
					iLocal_111 = 7;
				}
				iLocal_936 = 4;
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				break;
		}
	}
	return 0;
}

int func_114(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7, var uParam8, int iParam9, int iParam10)//Position - 0x6168
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	var uVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!GlobalFunc_1972(Param4))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *iParam9 + 2;
	iVar25 = 50;
	GlobalFunc_5573(Param1, Param4, &Local_951, &Local_954, iParam10);
	if (GlobalFunc_1992(Local_951, Local_954))
	{
		while (!bVar19 && *iParam9 < iVar24)
		{
			if (Param4.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param4, *iParam9, uParam7, uParam8, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam7, 1, iVar20, 1077936128, 0);
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar18))
				{
					if (PATHFIND::GET_CLOSEST_ROAD(*uParam7, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
					{
						if (*uParam8 < 90f || *uParam8 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(uVar18) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(uVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (SYSTEM::TO_FLOAT(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * SYSTEM::TO_FLOAT(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (SYSTEM::TO_FLOAT(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * SYSTEM::TO_FLOAT(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(*uParam7, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param4.f_2 - uParam7->f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if (func_115(Param4, *uParam7) || fVar17 < 0.5f)
						{
							*uParam7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam7, *uParam8, fVar15, 0f, 0f) };
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
							{
								iVar11 = *uParam0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam7, 3f, 3f, 3f, iVar11))
							{
								if (func_120(*uParam7, uParam7, uParam8, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*iParam9++;
			if (*iParam9 >= iVar25)
			{
				*uParam7 = { Param4 };
				if (uParam7->f_2 == 1f)
				{
					fVar17 = 1f;
					fVar17 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_AREA((*uParam7 - 2f), (uParam7->f_1 - 2f), (*uParam7 + 2f), (uParam7->f_1 + 2f));
					if (fVar17 > 1f)
					{
						iLocal_68 = 1;
						uParam7->f_2 = fVar17;
						uParam7->f_2 = (uParam7->f_2 + 0.5f);
					}
				}
				bVar19 = true;
			}
		}
		if (bVar19)
		{
			Var2 = { Param4 - *uParam7 };
			Var2.f_2 = 0f;
			fLocal_73 = SYSTEM::VMAG(Var2);
			if (fLocal_73 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_115(struct<3> Param0, struct<3> Param3)//Position - 0x64B5
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		GlobalFunc_6524("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		GlobalFunc_6524("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}





int func_120(struct<3> Param0, var uParam3, var uParam4, int iParam5)//Position - 0x6940
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (GlobalFunc_1991(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*uParam4 = 163.87f;
		return 1;
	}
	else if (GlobalFunc_1991(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*uParam4 = 0f;
		return 1;
	}
	else if (GlobalFunc_1991(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*uParam4 = 355.3355f;
		return 1;
	}
	else if (GlobalFunc_1991(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*uParam4 = 94.6893f;
		return 1;
	}
	else if (GlobalFunc_1991(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*uParam4 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam4 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*uParam4 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*uParam4 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*uParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
	{
		*uParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*uParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*uParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
	{
		*uParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*uParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*uParam4 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*uParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*uParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*uParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*uParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*uParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*uParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
	{
		*uParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*uParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*uParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*uParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*uParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*uParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.118f, 35.7838f, 52.659f };
				*uParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*uParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*uParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*uParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*uParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*uParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*uParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*uParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*uParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*uParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*uParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*uParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*uParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*uParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*uParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*uParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*uParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.487f, -2525.534f, 19.079f };
					*uParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*uParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*uParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*uParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*uParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*uParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*uParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*uParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*uParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*uParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*uParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.224f, -2716.217f, 19.06f };
					*uParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*uParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*uParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*uParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*uParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*uParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*uParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*uParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*uParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*uParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*uParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*uParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*uParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*uParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*uParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*uParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*uParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*uParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.025f, 28.808f };
				*uParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*uParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*uParam4 = 175.4362f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*uParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.866f, 21.4152f };
				*uParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.194f, 21.216f };
				*uParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*uParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.718f, 21.3987f };
				*uParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (GlobalFunc_5360(3, Var1))
	{
		if (GlobalFunc_877(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*uParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*uParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (GlobalFunc_497(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*uParam4 = 275.4274f;
			return 1;
		}
		if (GlobalFunc_497(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*uParam4 = 275.4411f;
			return 1;
		}
		if (GlobalFunc_497(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*uParam4 = 301.2981f;
			return 1;
		}
		if (GlobalFunc_497(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*uParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*uParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (GlobalFunc_497(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			*uParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*uParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*uParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*uParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*uParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*uParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
	{
		*uParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*uParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
	{
		*uParam3 = { -658.2056f, -1388.789f, 9.499f };
		*uParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*uParam4 = 71.6555f;
		return 1;
	}
	if (!func_123())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (GlobalFunc_5360(7, Var1))
		{
			if (GlobalFunc_877(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*uParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (GlobalFunc_5360(2, Var1))
	{
		if (GlobalFunc_877(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.109f, 12.7091f };
						*uParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*uParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*uParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*uParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*uParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*uParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*uParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*uParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*uParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*uParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.487f, -2525.534f, 19.079f };
						*uParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*uParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = GlobalFunc_1990(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = GlobalFunc_1990(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*uParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*uParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*uParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*uParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (GlobalFunc_1986(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*uParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*uParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*uParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*uParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*uParam4 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*uParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*uParam4 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*uParam4 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam4 = 140.7302f;
		return 1;
	}
	return 0;
}



int func_123()//Position - 0x8A98
{
	int iVar0;
	
	iVar0 = GlobalFunc_8315();
	if (iVar0 == 0)
	{
		if (GlobalFunc_485(65))
		{
			return 1;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (GlobalFunc_485(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (GlobalFunc_485(65))
		{
			return 1;
		}
	}
	return 0;
}








int func_131(struct<3> Param0, var uParam3, var uParam4)//Position - 0x9A98
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	func_143(&Param0, &iLocal_812, &fVar0);
	func_141(&Param0, &iLocal_107, &fVar1);
	func_138(&Param0, &iLocal_813, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_137(iLocal_812, Param0))
		{
			if (func_136(iLocal_812, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_135(iLocal_107, Param0))
		{
			if (func_134(iLocal_107, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 1E+08f)
	{
		if (func_133(iLocal_813, Param0))
		{
			if (func_132(iLocal_813, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132(int iParam0, var uParam1, var uParam2)//Position - 0x9B7E
{
	switch (iParam0)
	{
		case 75:
			*uParam1 = { -1094.711f, -2641.982f, 12.7071f };
			*uParam2 = 188.2694f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -1917.719f, 4445.75f, 38.6592f };
			*uParam2 = 45.822f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { -482.5762f, 1993.85f, 206.3482f };
			*uParam2 = 263.9373f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { -208.3305f, 4195.341f, 43.1714f };
			*uParam2 = 333.4403f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 1619.446f, 3820.96f, 33.9381f };
			*uParam2 = 129.6464f;
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2045.169f, 2155.887f, 94.3423f };
			*uParam2 = 347.9475f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 2952.767f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 1;
			break;
		
		case 104:
		case 105:
			*uParam1 = { 2119.676f, 4747.198f, 40.1793f };
			*uParam2 = 305.2213f;
			return 1;
			break;
		
		case 124:
			*uParam1 = { -817.3487f, -1303.89f, 4.0005f };
			*uParam2 = 253.9379f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 2414.063f, 1503.77f, 35.6614f };
			*uParam2 = 124.0994f;
			return 1;
			break;
		
		case 127:
			*uParam1 = { -203.2552f, 6536.089f, 10.0979f };
			*uParam2 = 311.0677f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 130:
			*uParam1 = { -1214.252f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 1;
			break;
		
		case 133:
			*uParam1 = { -1363.183f, 4468.691f, 23.1468f };
			*uParam2 = 272.2546f;
			return 1;
			break;
		
		case 134:
			*uParam1 = { 2477.088f, 4948.677f, 44.0936f };
			*uParam2 = 49.3948f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 1047.931f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 1;
			break;
		
		case 106:
			*uParam1 = { -1200.863f, -2049.46f, 12.9248f };
			*uParam2 = 334.965f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 1960.388f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 1;
			break;
	}
	return 0;
}

int func_133(int iParam0, struct<3> Param1)//Position - 0x9EB4
{
	switch (iParam0)
	{
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1157.595f, -2726.636f, 12.94464f, -1110.794f, -2679.33f, 22.94466f, 26f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 69:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1908.065f, 4432.693f, 51.3842f, -1962.212f, 4473.8f, 22.93989f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -541.8311f, 2050.599f, 186.3904f, -499.787f, 1968.325f, 228.0183f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43.1f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -179.8588f, 4216.167f, 30.26505f, -246.32f, 4226.653f, 53.77886f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1634.122f, 3858.049f, 28.33912f, 1573.259f, 3800.442f, 48.35476f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2057.873f, 2059.198f, 63.88074f, 1999.045f, 2190.544f, 122.2642f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40.7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 3028.084f, 2768.167f, 57.72984f, 2944.284f, 2772.836f, 30.23068f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 104:
		case 105:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2097.951f, 4820.308f, 55.48169f, 2151.254f, 4726.398f, 31.0732f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 124:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4.7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -763.5086f, -1297.98f, 2.000373f, -864.1372f, -1278.007f, 24.15038f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2512.305f, 1519.462f, 28.55504f, 2380.374f, 1521.587f, 58.80984f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10.0979f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -193.5583f, 6533.439f, -1.902109f, -299.2512f, 6645.049f, 20.45973f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 130:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1171.147f, 4647.89f, 203.7937f, -1280.149f, 4457.597f, 5.653551f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -687.974f, 4499.52f, 114.781f, -826.0081f, 4496.864f, 49.88359f, 140f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 133:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1364.701f, 4490.626f, 49.52477f, -1367.169f, 4340.34f, -1.682158f, 100f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2566.189f, 5007.007f, 97.36896f, 2491.714f, 4923.261f, 30.43494f, 80f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1009.917f, -163.4684f, 102.1028f, 1113.474f, -221.3295f, 49.8745f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (SYSTEM::VDIST2(Param1, -1230.622f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		
		case 64:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (SYSTEM::VDIST2(Param1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_134(int iParam0, var uParam1, var uParam2)//Position - 0xA4D8
{
	int iVar0;
	
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646.118f, 4206.743f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				
				case 1:
					*uParam1 = { -1582.89f, 4201.409f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 1;
			break;
		
		case 11:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 12:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 14:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934.66f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				
				case 1:
					*uParam1 = { -2842.023f, 3145.086f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 1;
			break;
		
		case 17:
			*uParam1 = { -204.0333f, 1313.973f, 303.4189f };
			*uParam2 = 126.7738f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -906.4329f, -2694.28f, 12.8182f };
			*uParam2 = 329.3241f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1753.901f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { -1859.543f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 827.072f, 1282.288f, 359.2872f };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -640.2675f, 6050.98f, 7.4082f };
			*uParam2 = 138.3021f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { -92.2052f, -1254.828f, 28.1682f };
			*uParam2 = 349.959f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 1;
			break;
		
		case 28:
		case 29:
			*uParam1 = { 569.276f, -1730.967f, 28.1277f };
			*uParam2 = 246.5764f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { -1110.088f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 67.1562f, 4560.134f, 97.8678f };
			*uParam2 = 113.412f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { -1069.076f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { -1073.129f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { -91.4237f, -1305.558f, 28.1569f };
			*uParam2 = 2.2198f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 2479.249f, 3401.234f, 48.9551f };
			*uParam2 = 35.1009f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 1149.978f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 1;
			break;
		
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27.2198f, -1467.933f, 29.8592f };
			*uParam2 = 273.1409f;
			return 1;
			break;
	}
	return 0;
}

int func_135(int iParam0, struct<3> Param1)//Position - 0xA9AA
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83.3f;
			}
			if (SYSTEM::VDIST2(Param1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11.66f;
			}
			if (SYSTEM::VDIST2(Param1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302.86f;
			}
			if (SYSTEM::VDIST2(Param1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14.64f;
			}
			if (SYSTEM::VDIST2(Param1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170.29f;
			}
			if (SYSTEM::VDIST2(Param1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44.9677f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1903.322f, -401.2384f, 19.23456f, -1844.879f, -445.7261f, 73.56197f, 115f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 794.2453f, 1277.443f, -100f, 833.8215f, 1277.108f, 400f, 19f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1015.526f, 6287.513f, -10.94449f, -761.3104f, 5895.014f, 45.33727f, 167.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -72.13491f, -1267.587f, 27.68361f, -72.18015f, -1256.712f, 31f, 30f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16.3f;
			}
			if (SYSTEM::VDIST2(Param1, -683.4159f, 5841.043f, 16.3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (SYSTEM::VDIST2(Param1, 566.1639f, -1773.817f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63.1146f;
			}
			if (SYSTEM::VDIST2(Param1, -1103.628f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -21.12362f, 4518.907f, 119.7836f, 43.13283f, 4538.929f, 72.58955f, 48f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (SYSTEM::VDIST2(Param1, -1099.502f, 790.2614f, 163.3998f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1088.425f, 372.0723f, 62.75896f, -967.03f, 363.5976f, 101.3483f, 75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.2f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -91.45676f, -1296.975f, 26.15437f, 40.67288f, -1297.459f, 58.29368f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49.9f;
			}
			if (SYSTEM::VDIST2(Param1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -78.38029f, 285.5254f, 102.6286f, -51.1546f, 357.5217f, 122.0617f, 40f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 420.5196f, 116.2892f, 77.57532f, 212.2937f, 193.6794f, 131.8767f, 250f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1140.158f, -540.9644f, 49.99944f, 972.3716f, -535.1002f, 85.64397f, 168.25f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (SYSTEM::VDIST2(Param1, -16.5304f, -1473.121f, 29.611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_136(int iParam0, var uParam1, var uParam2)//Position - 0xB0B8
{
	int iVar0;
	
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456.347f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 1;
			break;
		
		case 32:
		case 38:
			*uParam1 = { 1361.675f, -2040.575f, 51.0214f };
			*uParam2 = 281.5022f;
			return 1;
			break;
		
		case 41:
		case 47:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -43.9252f, -1460.432f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				
				case 1:
					*uParam1 = { 14.0313f, -1460.48f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 1;
			break;
		
		case 48:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 1;
			break;
		
		case 45:
			iVar0 = 3;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				
				case 1:
					*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				
				case 2:
					*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 1;
			break;
		
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430.097f, -2588.065f, 47.0326f };
			*uParam2 = 353.6747f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { 185.1471f, -3047.229f, 4.7824f };
			*uParam2 = 163.8686f;
			return 1;
			break;
		
		case 78:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 504.1742f, -1652.472f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				
				case 1:
					*uParam1 = { 275.9677f, -1554.22f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 853.9595f, -1590.922f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				
				case 1:
					*uParam1 = { 847.5631f, -1559.719f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 1;
			break;
		
		case 83:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602.427f, 2852.173f, 35.28f };
					*uParam2 = 19.36f;
					break;
				
				case 1:
					*uParam1 = { 2686.404f, 2957.39f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 1;
			break;
		
		case 76:
		case 84:
			*uParam1 = { 135.4725f, -1309.896f, 28.0485f };
			*uParam2 = 301.12f;
			return 1;
			break;
	}
	return 0;
}

int func_137(int iParam0, struct<3> Param1)//Position - 0xB45D
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1535.754f, -922.101f, 4.122119f, -1487.87f, -961.3929f, 26.71922f, 50f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 53.12898f, -463.9999f, 36.9208f, 99.3761f, -329.3476f, 118.0454f, 125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1420.347f, -2036.558f, 47.36072f, 1341.11f, -2103.844f, 72.32651f, 55f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (SYSTEM::VDIST2(Param1, -13.89061f, -1449.29f, 29.64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173.47f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -2306.98f, 435.3038f, 171.4666f, -2303.291f, 366.3199f, 179.6018f, 65.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (SYSTEM::VDIST2(Param1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -995.978f, -517.4324f, 11.37763f, -1060.725f, -547.5588f, 65.33043f, 35.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23.18f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.4064f, 43.03712f, 53f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 148.8361f, -3029.146f, 4.277727f, 148.1396f, -3342.344f, 22.90379f, 97.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 446.8174f, -1691.708f, 23.28233f, 288.5565f, -1552.352f, 108.3117f, 155f, 0, 1))
			{
				return 1;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 910.9382f, -1749.91f, 14.50614f, 921.7415f, -1455.248f, 99.67125f, 210f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2657.302f, 2974.529f, 34.53447f, 2591.657f, 2880.223f, 68.08156f, 78.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 83.32325f, -1312.172f, 23.33694f, 148.383f, -1273.553f, 49.46651f, 65f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_138(var uParam0, int iParam1, float fParam2)//Position - 0xB8B5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	
	iVar0 = 262;
	fVar1 = 999999f;
	iVar3 = 64;
	while (iVar3 <= 110)
	{
		*iParam1 = iVar3;
		if (func_140(iParam1))
		{
			if (GlobalFunc_474(*iParam1))
			{
				Var4 = { GlobalFunc_2247(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 124;
	while (iVar3 <= 136)
	{
		*iParam1 = iVar3;
		if (func_140(iParam1))
		{
			if (GlobalFunc_474(*iParam1))
			{
				Var4 = { GlobalFunc_2247(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 262)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 262;
	*fParam2 = 999999f;
	return 0;
}


int func_140(var uParam0)//Position - 0xBA0A
{
	if ((((((((((((((((((((*uParam0 == 69 || *uParam0 == 70) || *uParam0 == 72) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 71) || *uParam0 == 75) || *uParam0 == 104) || *uParam0 == 105) || *uParam0 == 124) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 130) || *uParam0 == 131) || *uParam0 == 133) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 106) || *uParam0 == 64)
	{
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, float fParam2)//Position - 0xBB10
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	struct<27> Var7;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < 63)
	{
		*iParam1 = iVar6;
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*iParam1 /*6*/], 0) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*iParam1 /*6*/], 3))
		{
			GlobalFunc_6675(*iParam1, &Var7);
			if (MISC::IS_BIT_SET(Var7.f_26, func_142()))
			{
				Var3 = { Var7.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar6;
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_142()//Position - 0xBBE2
{
	if (GlobalFunc_39(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				return 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				return 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return GlobalFunc_8315();
}

int func_143(var uParam0, int iParam1, float fParam2)//Position - 0xBC65
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	while (iVar6 < 8)
	{
		if (Global_87300[iVar6 /*17*/])
		{
			if (Global_87300[iVar6 /*17*/].f_9 != 262)
			{
				if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[Global_87300[iVar6 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { HUD::GET_BLIP_COORDS(Global_Mission_Blips[Global_87300[iVar6 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = SYSTEM::VDIST(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_87300[iVar6 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar6;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_87300[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}


void func_145(int iParam0)//Position - 0xBD54
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
	{
		PED::GET_GROUP_SIZE(GlobalFunc_468(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar2, Global_96384))
					{
						iVar3 = 0;
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, iVar3))
						{
							iVar3 = func_146(&Global_96384);
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, iVar3))
							{
								TASK::CLEAR_PED_TASKS(iVar2);
								PED::SET_PED_INTO_VEHICLE(iVar2, Global_96384, iVar3);
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iVar2);
							PED::SET_PED_INTO_VEHICLE(iVar2, Global_96384, iVar3);
						}
					}
				}
			}
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar2, Global_96384))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, iVar3))
					{
						iVar3 = func_146(&Global_96384);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, iVar3))
						{
							TASK::CLEAR_PED_TASKS(iVar2);
							PED::SET_PED_INTO_VEHICLE(iVar2, Global_96384, iVar3);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iVar2);
						PED::SET_PED_INTO_VEHICLE(iVar2, Global_96384, iVar3);
					}
				}
			}
		}
	}
}

int func_146(var uParam0)//Position - 0xBE78
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 0))
			{
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 1))
			{
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 2))
			{
				return 2;
			}
		}
	}
	return -2;
}








void func_154()//Position - 0xC0CA
{
	struct<3> Var0;
	var uVar3;
	
	if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Global_96384))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_idle", 3))
				{
					if (!func_2(Global_96385, -2118855366))
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 1000000);
					}
					else
					{
						func_160();
					}
				}
				func_159(&Global_96384, iLocal_978);
			}
			else if (!func_2(Global_96385, -272084098))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Global_96384, 1) };
				uVar3 = ENTITY::GET_ENTITY_HEADING(Global_96384);
				TASK::TASK_VEHICLE_PARK(Global_96385, Global_96384, Var0, uVar3, 3, 60f, 0);
			}
		}
	}
}

void func_155()//Position - 0xC1A9
{
	int iVar0;
	float fVar1;
	
	if (bLocal_61)
	{
		if (bLocal_62)
		{
			func_110();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
			{
				if (!PED::IS_PED_INJURED(Global_96385))
				{
					if (func_157())
					{
						if (ENTITY::GET_ENTITY_SPEED(Global_96384) < 2f)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384, 1))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
							}
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 24, 5000);
							PED::SET_PED_KEEP_TASK(Global_96385, 1);
							bLocal_66 = true;
							iLocal_938 = 2;
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_idle", 3))
					{
						if (PED::IS_PED_HEADTRACKING_PED(Global_96385, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(Global_96385);
						}
						TASK::TASK_PLAY_ANIM(Global_96385, &cLocal_940, "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Global_96385, &cLocal_940, "leanover_exit", 1.2f);
						iLocal_91 = MISC::GET_GAME_TIMER();
						func_159(&Global_96384, iLocal_978);
					}
					else if (!func_2(Global_96385, 242628503))
					{
						if (func_156(&iLocal_91, iLocal_978))
						{
							if (!func_2(Global_96385, -2118855366))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 1000000);
							}
						}
						else
						{
							iLocal_57 = 0;
							if (bLocal_65)
							{
								fVar1 = 25f;
								iVar0 = iLocal_71;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_70;
							}
							TASK::CLEAR_PED_TASKS(Global_96385);
							TASK::TASK_CLEAR_LOOK_AT(Global_96385);
							PED::SET_DRIVER_ABILITY(Global_96385, 0.5f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_801);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, Global_96384, Global_96391, fVar1, iVar0, 45f);
							TASK::TASK_VEHICLE_PARK(0, Global_96384, Global_96391, Global_96397, iLocal_111, 60f, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_801);
							TASK::TASK_PERFORM_SEQUENCE(Global_96385, uLocal_801);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_801);
						}
					}
				}
			}
		}
	}
}

int func_156(int iParam0, int iParam1)//Position - 0xC3A1
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (GlobalFunc_2311(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!PED::DOES_GROUP_EXIST(GlobalFunc_468()))
	{
		*iParam0 = -1;
		return 0;
	}
	PED::GET_GROUP_SIZE(GlobalFunc_468(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 0);
	if (!PED::IS_PED_INJURED(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, iVar6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 == PLAYER::PLAYER_PED_ID())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar3, 167, 0))
		{
			bVar4 = false;
		}
		if (func_2(iVar3, -1794415470))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			TASK::TASK_ENTER_VEHICLE(iVar3, Global_96384, 20000, iVar6, 2f, 9437185, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 1);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iVar2 == PLAYER::PLAYER_PED_ID())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (PED::GET_PED_CONFIG_FLAG(iVar3, 167, 0))
			{
				bVar4 = false;
			}
			if (func_2(iVar3, -1794415470))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				TASK::TASK_ENTER_VEHICLE(iVar3, Global_96384, 20000, iVar6, 2f, 9437185, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_157()//Position - 0xC524
{
	if ((ENTITY::IS_ENTITY_AT_COORD(Global_96384, Global_96391, 45f, 45f, 20f, 0, 1, 0) || iLocal_57) || iLocal_937 == 4)
	{
		iLocal_57 = 1;
		if (TASK::GET_SCRIPT_TASK_STATUS(Global_96385, 242628503) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_158()//Position - 0xC57B
{
	if (bLocal_61)
	{
		if (bLocal_62)
		{
			return 1;
		}
		else if (func_113(&Local_42, &Global_96391, &Global_96397))
		{
			iLocal_104 = 0;
			Local_960 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			fLocal_84 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_96391);
			bLocal_62 = true;
			return 1;
		}
	}
	return 0;
}

void func_159(var uParam0, int iParam1)//Position - 0xC5D3
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
	{
		PED::GET_GROUP_SIZE(GlobalFunc_468(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					if (iVar3 == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_2(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (iVar3 == PLAYER::PLAYER_PED_ID())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_2(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

int func_160()//Position - 0xC709
{
	if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_940);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_940))
			{
				if (PED::IS_PED_HEADTRACKING_PED(Global_96385, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_96385);
				}
				TASK::OPEN_SEQUENCE_TASK(&uLocal_801);
				TASK::TASK_PLAY_ANIM(0, &cLocal_940, "leanover_enter", 4f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_940, "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_801);
				TASK::TASK_PERFORM_SEQUENCE(Global_96385, uLocal_801);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_801);
				return 1;
			}
		}
	}
	return 0;
}

int func_161()//Position - 0xC7B7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
		{
			iLocal_110 = OBJECT::CREATE_OBJECT(iLocal_109, ENTITY::GET_ENTITY_COORDS(Global_96384, 1), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_110, Global_96384, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_96384, "Chassis"), Local_972, Local_975, 0, 0, 0, 0, 2, 1);
			VEHICLE::SET_TAXI_LIGHTS(Global_96384, 0);
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("taxi", 0);
				HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iLocal_110));
			}
			uLocal_94 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi");
		}
	}
	return 0;
}

int func_162()//Position - 0xC851
{
	STREAMING::REQUEST_MODEL(iLocal_109);
	uLocal_112 = unk_0x67D02A194A2FC2BD("taxi_display");
	uLocal_113 = unk_0x67D02A194A2FC2BD("instructional_buttons");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_940);
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_109) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_112)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_113)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_940))
	{
		return 1;
	}
	return 0;
}

void func_163()//Position - 0xC8AA
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_69))
	{
		if (!GlobalFunc_579() && !GlobalFunc_153(8, -1))
		{
			uLocal_69 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_69, Global_96384, Local_966, 1);
			func_167();
			CAM::_0x661B5C8654ADD825(uLocal_69, 1);
		}
	}
	else if (!bLocal_61 || bLocal_60)
	{
		if (!GlobalFunc_579() && !GlobalFunc_153(8, -1))
		{
			if (!CAM::IS_CAM_ACTIVE(uLocal_69))
			{
				GlobalFunc_1096(4, 1, -1);
				CAM::_0x661B5C8654ADD825(uLocal_69, 1);
				func_165();
				CAM::SET_CAM_ACTIVE(uLocal_69, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				Global_96401 = 1;
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(1);
				func_167();
				iLocal_59 = 1;
			}
			else
			{
				func_167();
			}
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		}
	}
	else if (CAM::IS_CAM_ACTIVE(uLocal_69))
	{
		CAM::SET_CAM_ACTIVE(uLocal_69, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		Global_96401 = 0;
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
		iLocal_59 = 1;
		func_164();
	}
}

void func_164()//Position - 0xC9C7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_92)
	{
		if (bLocal_61)
		{
			if (Local_42.x == Local_815[iVar0 /*3*/])
			{
				iLocal_93 = iVar0;
			}
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_93);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_165()//Position - 0xCA0F
{
	struct<3> Var0;
	
	if (HUD::DOES_BLIP_EXIST(Local_42.x))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_42.x) };
		if (CAM::DOES_CAM_EXIST(uLocal_69) && CAM::IS_CAM_ACTIVE(uLocal_69))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.x, Var0.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}
}


void func_167()//Position - 0xCAA3
{
	if (CAM::DOES_CAM_EXIST(uLocal_69))
	{
		func_168(Global_96384, &uLocal_69, Local_969);
		CAM::SET_CAM_FOV(uLocal_69, fLocal_75);
		CAM::SET_CAM_NEAR_CLIP(uLocal_69, 0.01f);
		CAM::_0xA2767257A320FC82(uLocal_69, 1);
		CAM::_0x469F2ECDEC046337(1);
	}
}

void func_168(int iParam0, var uParam1, struct<3> Param2)//Position - 0xCAE2
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (CAM::DOES_CAM_EXIST(*uParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { GlobalFunc_107(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96384, Param2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96384, Local_966)) };
			GlobalFunc_1477(Var6, &uVar3, &uVar4, 1);
			CAM::SET_CAM_ROT(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}




void func_172()//Position - 0xCC37
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	func_178();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "CLEAR_TAXI_DISPLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 0;
	while (iVar0 < iLocal_92)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_815[iVar0 /*3*/]))
		{
		}
		else if (func_177(Local_815[iVar0 /*3*/]) == -1)
		{
		}
		else if (GlobalFunc_537(HUD::GET_BLIP_COORDS(Local_815[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608))
		{
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(Local_815[iVar0 /*3*/]));
			HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(Local_815[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			iVar8 = func_175(Local_815[iVar0 /*3*/]);
			if (iVar8 == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Local_815[iVar0 /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(GlobalFunc_5572(iVar8));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(Local_815[iVar0 /*3*/]) == 2)
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_815[iVar0 /*3*/]))))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_815[iVar0 /*3*/])), 1) };
				}
			}
			else if (HUD::GET_BLIP_INFO_ID_TYPE(Local_815[iVar0 /*3*/]) == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_815[iVar0 /*3*/]), 0))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_815[iVar0 /*3*/]), 1) };
				}
			}
			else
			{
				Var5 = { HUD::GET_BLIP_COORDS(Local_815[iVar0 /*3*/]) };
			}
			GlobalFunc_726(ZONE::GET_NAME_OF_ZONE(Var5));
			if (Local_815[iVar0 /*3*/].f_2 == 0)
			{
				if (Local_815[iVar0 /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_815[iVar0 /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_815[iVar0 /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_815[iVar0 /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (bLocal_61)
			{
				if (Local_42.x == Local_815[iVar0 /*3*/])
				{
					iLocal_93 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_61)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_93);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_102);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_93);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}



int func_175(int iParam0)//Position - 0xD482
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar1 = iVar0;
		iVar2 = GlobalFunc_1989(iVar1);
		if (Global_Mission_Blips[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}


int func_177(int iParam0)//Position - 0xD749
{
	var uVar0;
	
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		uVar0 = HUD::GET_BLIP_SPRITE(iParam0);
	}
	return uVar0;
}

void func_178()//Position - 0xD764
{
	int iVar0;
	
	iLocal_92 = 0;
	func_195();
	func_182(iLocal_45, 0);
	func_182(iLocal_46, 0);
	func_182(32, 0);
	func_182(143, 0);
	func_182(144, 0);
	func_182(145, 0);
	func_182(146, 0);
	func_182(78, 0);
	func_182(79, 0);
	func_182(88, 0);
	func_182(124, 0);
	func_182(112, 0);
	func_182(123, 0);
	func_182(293, 0);
	func_182(86, 0);
	func_182(77, 0);
	func_182(89, 0);
	func_182(106, 0);
	func_182(108, 0);
	func_182(120, 0);
	func_182(352, 0);
	func_182(107, 0);
	func_182(96, 0);
	func_182(104, 0);
	func_182(105, 0);
	func_182(80, 0);
	func_182(113, 0);
	func_182(118, 0);
	func_182(207, 1);
	func_182(208, 1);
	func_182(209, 1);
	func_182(210, 1);
	func_182(211, 1);
	func_182(212, 1);
	func_182(213, 1);
	func_182(214, 1);
	func_182(321, 1);
	func_182(320, 1);
	func_182(319, 1);
	func_182(322, 1);
	func_182(325, 1);
	func_182(324, 1);
	func_182(349, 1);
	func_182(323, 1);
	func_182(326, 1);
	func_182(317, 1);
	func_182(318, 1);
	func_182(363, 0);
	func_182(355, 0);
	func_182(263, 1);
	func_182(262, 1);
	func_182(267, 1);
	func_182(266, 1);
	func_182(265, 1);
	func_182(400, 0);
	func_182(381, 0);
	func_182(384, 0);
	func_182(382, 0);
	func_182(206, 0);
	func_182(405, 0);
	func_182(385, 0);
	func_182(383, 0);
	func_182(386, 0);
	func_182(387, 0);
	func_182(389, 0);
	func_182(388, 0);
	func_182(149, 0);
	func_182(66, 0);
	func_182(115, 0);
	func_182(114, 0);
	func_182(205, 1);
	func_182(48, 0);
	func_182(40, 1);
	func_182(357, 1);
	func_182(356, 1);
	func_182(359, 1);
	func_182(110, 1);
	func_182(60, 1);
	func_182(41, 1);
	func_182(61, 1);
	func_182(374, 1);
	func_182(375, 1);
	func_182(64, 1);
	func_182(165, 1);
	func_182(166, 1);
	func_182(167, 1);
	func_182(168, 1);
	func_182(169, 1);
	func_182(170, 1);
	func_182(172, 1);
	func_182(280, 1);
	func_182(37, 1);
	func_182(147, 1);
	func_182(62, 0);
	func_182(95, 1);
	func_182(99, 1);
	func_182(102, 1);
	func_182(135, 1);
	func_182(103, 1);
	func_182(90, 1);
	func_182(109, 1);
	func_182(141, 1);
	func_182(136, 1);
	func_182(127, 1);
	func_182(142, 1);
	func_182(38, 1);
	func_182(84, 1);
	func_182(119, 1);
	func_182(121, 1);
	func_182(122, 1);
	func_182(68, 1);
	func_182(126, 1);
	func_182(85, 1);
	func_182(140, 1);
	func_182(197, 1);
	func_182(162, 1);
	func_182(315, 1);
	func_182(71, 1);
	func_182(72, 1);
	func_182(225, 1);
	func_182(73, 1);
	func_182(111, 1);
	func_182(75, 1);
	func_182(93, 1);
	func_182(98, 1);
	func_182(117, 1);
	iLocal_95 = func_179();
	iLocal_96 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
	if (MISC::GET_MISSION_FLAG())
	{
		if (iLocal_95 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Global_96388))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (HUD::DOES_BLIP_EXIST(Local_815[iVar0 /*3*/]))
					{
						if (Local_815[iVar0 /*3*/] == Global_96388)
						{
							iLocal_93 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_96388 == 0)
	{
		Global_96388 = 0;
	}
	if (MISC::GET_MISSION_FLAG())
	{
		if (!Global_96390 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (HUD::DOES_BLIP_EXIST(Local_815[iVar0 /*3*/]))
				{
					if (func_177(Local_815[iVar0 /*3*/]) == Global_96390)
					{
						iLocal_93 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_96390 == -1)
	{
		Global_96390 = -1;
	}
}

int func_179()//Position - 0xDBD6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = HUD::GET_FIRST_BLIP_INFO_ID(iLocal_45);
	while (HUD::DOES_BLIP_EXIST(iVar1))
	{
		if (func_181(iVar1))
		{
			if ((HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 6) || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 3)
			{
				iVar0++;
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 2 || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 1)
			{
				if (func_180(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = HUD::GET_NEXT_BLIP_INFO_ID(iLocal_45);
	}
	iVar1 = HUD::GET_FIRST_BLIP_INFO_ID(iLocal_46);
	while (HUD::DOES_BLIP_EXIST(iVar1))
	{
		if (func_181(iVar1))
		{
			if (HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = HUD::GET_NEXT_BLIP_INFO_ID(iLocal_46);
	}
	return iVar0;
}

int func_180(int iParam0)//Position - 0xDC92
{
	if (((HUD::GET_BLIP_HUD_COLOUR(iParam0) == 9 || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 11) || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 10) || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)//Position - 0xDCD8
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_INFO_ID_DISPLAY(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_182(int iParam0, bool bParam1)//Position - 0xDD08
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar4 = HUD::GET_FIRST_BLIP_INFO_ID(iParam0);
	iVar5 = 20;
	while (HUD::DOES_BLIP_EXIST(iVar4))
	{
		if (iLocal_99 >= iVar5)
		{
			SYSTEM::WAIT(0);
			iLocal_99 = 0;
			if (!func_215())
			{
				func_223(1);
			}
			func_167();
			func_210();
			func_209();
		}
		if (iLocal_92 < 40)
		{
			if (func_181(iVar4))
			{
				if (func_194(iVar4))
				{
					if (!func_192(&iVar4))
					{
						bVar3 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case joaat("mpsv_lp0_31"):
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar3 = true;
								break;
							
							case 363:
								iVar7 = func_191(&iVar4);
								if (((iVar7 == 33 || iVar7 == 92) || iVar7 == 89) || iVar7 == 88)
								{
									bVar3 = false;
								}
								else
								{
									bVar3 = true;
								}
								break;
							
							default:
								bVar3 = false;
								if (iParam0 == iLocal_46)
								{
									bVar3 = true;
								}
								else if (iParam0 == iLocal_45)
								{
									if (func_190(&iVar4))
									{
										bVar3 = true;
									}
								}
								break;
						}
						if (HUD::DOES_BLIP_EXIST(Global_96387))
						{
							if (func_177(iVar4) == iLocal_45)
							{
								if (!Global_96387 == iVar4)
								{
									bVar3 = false;
								}
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_181(iVar4))
							{
								iVar6 = HUD::GET_BLIP_INFO_ID_TYPE(iVar4);
								if (((iVar6 == 4 || iVar6 == 5) || iVar6 == 2) || iVar6 == 1)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								func_189(&iVar4, &Var0);
								func_183(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_99++;
		iVar4 = HUD::GET_NEXT_BLIP_INFO_ID(iParam0);
	}
}

void func_183(struct<3> Param0, bool bParam3)//Position - 0xE158
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_177(Param0.x) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_177(Local_815[iVar0 /*3*/]) == func_177(Param0.x))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_92)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_92)
		{
			if (func_177(Local_815[iVar0 /*3*/]) == func_177(Param0.x))
			{
				if (func_187(Param0, Local_815[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_186(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_184(Param0, iVar0);
						iLocal_92++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_184(Param0, iVar0);
				iLocal_92++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_184(Param0, iVar0);
			iLocal_92++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_184(struct<3> Param0, int iParam3)//Position - 0xE277
{
	func_185(iParam3);
	Local_815[iParam3 /*3*/] = { Param0 };
	if (func_177(Local_815[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_98 = iParam3;
		Local_963 = { HUD::GET_BLIP_COORDS(Local_815[iParam3 /*3*/]) };
	}
}

void func_185(int iParam0)//Position - 0xE2B8
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_815[(iVar0 - 1) /*3*/] };
		Local_815[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_98)
		{
			iLocal_98 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_186(struct<3> Param0, int iParam3)//Position - 0xE2FD
{
	Local_815[iParam3 /*3*/] = { Param0 };
	if (func_177(Local_815[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_98 = iParam3;
		Local_963 = { HUD::GET_BLIP_COORDS(Local_815[iParam3 /*3*/]) };
	}
}

int func_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xE338
{
	if (func_188(uParam0) < func_188(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_188(int iParam0)//Position - 0xE355
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0))
		{
			Var0 = { func_38(iParam0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	return SYSTEM::VMAG(Var0);
}

void func_189(int iParam0, var uParam1)//Position - 0xE398
{
	struct<3> Var0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_96389)
	{
		Var0 = { func_38(*uParam1) };
		PATHFIND::GET_STREET_NAME_AT_COORD(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(Global_96391, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_190(var uParam0)//Position - 0xE3E2
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = HUD::GET_BLIP_HUD_COLOUR(*uParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_191(var uParam0)//Position - 0xE450
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/])
		{
			if (Global_87300[iVar0 /*17*/].f_9 != 262)
			{
				if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[Global_87300[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_Mission_Blips[Global_87300[iVar0 /*17*/].f_9 /*23*/].f_19 == *uParam0)
					{
						return Global_87300[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_192(var uParam0)//Position - 0xE4C3
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		return 1;
	}
	if (Global_96386 == *uParam0)
	{
		return 1;
	}
	if (HUD::GET_BLIP_COLOUR(*uParam0) == 39)
	{
		return 1;
	}
	if (GlobalFunc_100(HUD::GET_BLIP_COORDS(*uParam0), 0f, 0f, 0f))
	{
		return 1;
	}
	if (func_177(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}


int func_194(var uParam0)//Position - 0xE546
{
	float fVar0;
	
	if (!func_177(uParam0) == iLocal_45)
	{
		fVar0 = func_188(uParam0);
		if (fVar0 > 50f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_195()//Position - 0xE57A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_815[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_98 = -1;
	Local_963 = { 0f, 0f, 0f };
	iLocal_99 = 0;
}

bool func_196()//Position - 0xE5AE
{
	bool bVar0;
	struct<3> Var1;
	var uVar4;
	
	bVar0 = false;
	if (!HUD::DOES_BLIP_EXIST(Local_815[iLocal_93 /*3*/]))
	{
		if (iLocal_93 != iLocal_98)
		{
			return 1;
		}
	}
	if (SYSTEM::TIMERB() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_96 != HUD::GET_NUMBER_OF_ACTIVE_BLIPS())
			{
				bVar0 = true;
			}
			iLocal_96 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
			if (iLocal_97 != func_197())
			{
				bVar0 = true;
			}
			iLocal_97 = func_197();
		}
		if (!bVar0)
		{
			if (iLocal_98 != -1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_815[iLocal_98 /*3*/]))
				{
					if (func_177(Local_815[iLocal_98 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						Var1 = { HUD::GET_BLIP_COORDS(Local_815[iLocal_98 /*3*/]) };
						if (!GlobalFunc_537(Var1, Local_963, 1056964608))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					uVar4 = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
					if (HUD::DOES_BLIP_EXIST(uVar4))
					{
						Var1 = { HUD::GET_BLIP_COORDS(iVar4) };
						if (!GlobalFunc_537(Var1, Local_963, 1056964608))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		SYSTEM::SETTIMERB(0);
	}
	return bVar0;
}

int func_197()//Position - 0xE6A0
{
	int iVar0;
	
	iVar0 = 0;
	if (func_3(Global_96384))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, -1))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 0))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 1))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 2))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_198()//Position - 0xE704
{
	if (iLocal_937 != 0)
	{
		HUD::SET_TEXT_RENDER_ID(uLocal_94);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_112, fLocal_87, fLocal_88, fLocal_85, fLocal_86, 0, 0, 0, 255, 0);
		}
	}
}

void func_199()//Position - 0xE743
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_937 != 0)
	{
		if (iLocal_92 > 1)
		{
			GlobalFunc_612(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(2, 241);
				PAD::SET_INPUT_EXCLUSIVE(2, 242);
				PAD::SET_INPUT_EXCLUSIVE(2, 180);
				PAD::SET_INPUT_EXCLUSIVE(2, 181);
			}
			if (iVar0 > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 180))
			{
				if (!iLocal_63)
				{
					if (bLocal_61)
					{
						if (bLocal_60)
						{
							func_203();
						}
						else
						{
							iLocal_59 = 1;
						}
						bLocal_60 = true;
					}
					else
					{
						func_203();
					}
					iLocal_105 = MISC::GET_GAME_TIMER();
					iLocal_63 = 1;
				}
			}
			else
			{
				iLocal_63 = 0;
			}
			if (iVar0 < -28 || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				if (!iLocal_64)
				{
					if (bLocal_61)
					{
						if (bLocal_60)
						{
							func_201();
						}
						else
						{
							iLocal_59 = 1;
						}
						bLocal_60 = true;
					}
					else
					{
						func_201();
					}
					iLocal_105 = MISC::GET_GAME_TIMER();
					iLocal_64 = 1;
				}
			}
			else
			{
				iLocal_64 = 0;
			}
		}
		if (!bLocal_61)
		{
			if (iLocal_92 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 176))
				{
					if (HUD::DOES_BLIP_EXIST(Local_815[iLocal_93 /*3*/]))
					{
						iLocal_814 = 2;
						Local_42 = { Local_815[iLocal_93 /*3*/] };
						iLocal_57 = 0;
						iLocal_91 = MISC::GET_GAME_TIMER();
						iLocal_100 = MISC::GET_GAME_TIMER();
						iLocal_101 = MISC::GET_GAME_TIMER();
						iLocal_89 = 0;
						iLocal_936 = 0;
						bLocal_61 = true;
						iLocal_59 = 1;
						bLocal_60 = false;
					}
				}
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
			if (iLocal_937 == 2)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 177))
				{
					iLocal_814 = 13;
					iLocal_59 = 1;
					if (!PED::IS_PED_INJURED(Global_96385))
					{
						TASK::CLEAR_PED_TASKS(Global_96385);
					}
					iLocal_937 = 3;
				}
				if (!bLocal_65)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 179))
					{
						iLocal_814 = 20;
						bLocal_65 = true;
						iLocal_59 = 1;
						fLocal_74 = (0.22f * 2f);
						if (!PED::IS_PED_INJURED(Global_96385))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_enter", 3))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_idle", 3))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_exit", 3))
									{
										TASK::CLEAR_PED_TASKS(Global_96385);
									}
								}
							}
						}
					}
				}
				if (func_65())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 176))
					{
						if (bLocal_62)
						{
							iLocal_59 = 1;
							iLocal_90 = MISC::GET_GAME_TIMER();
							iLocal_939 = 0;
							iLocal_937 = 4;
						}
					}
				}
				if (iLocal_814 == 0)
				{
					if (iLocal_100 != -1)
					{
						if (GlobalFunc_2311(iLocal_100, 68000))
						{
							iLocal_814 = 4;
							iLocal_100 = -1;
						}
					}
				}
				if (iLocal_814 == 0)
				{
					if (iLocal_101 != -1)
					{
						if (GlobalFunc_2311(iLocal_101, 5000))
						{
							if ((PAD::IS_CONTROL_PRESSED(2, 81) || PAD::IS_CONTROL_PRESSED(2, 82)) || PAD::IS_CONTROL_PRESSED(2, 85))
							{
								iLocal_814 = 17;
								iLocal_100 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_937 == 3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 177))
				{
					iLocal_814 = 3;
					iLocal_59 = 1;
					iLocal_937 = 2;
				}
			}
			if (bLocal_60)
			{
				if (func_200())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 176))
					{
						if (HUD::DOES_BLIP_EXIST(Local_815[iLocal_93 /*3*/]))
						{
							iLocal_814 = 9;
							bLocal_62 = false;
							if (iLocal_937 == 3)
							{
								iLocal_937 = 2;
							}
							iLocal_59 = 1;
							Local_42 = { Local_815[iLocal_93 /*3*/] };
							iLocal_57 = 0;
							iLocal_91 = MISC::GET_GAME_TIMER();
							iLocal_89 = 0;
							iLocal_936 = 0;
							if (!PED::IS_PED_INJURED(Global_96385))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_enter", 3))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_idle", 3))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_exit", 3))
										{
											TASK::CLEAR_PED_TASKS(Global_96385);
										}
									}
								}
							}
							iLocal_105 = MISC::GET_GAME_TIMER();
							bLocal_60 = false;
						}
					}
					if (GlobalFunc_2311(iLocal_105, 3000))
					{
						bLocal_60 = false;
					}
				}
			}
		}
	}
}

int func_200()//Position - 0xEAAC
{
	if (CAM::DOES_CAM_EXIST(uLocal_69))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_69))
		{
			return 1;
		}
	}
	if (bLocal_60)
	{
		return 1;
	}
	return 0;
}

void func_201()//Position - 0xEAD4
{
	struct<3> Var0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_93 = (iLocal_93 - 1);
	if (iLocal_93 < 0)
	{
		iLocal_93 = (iLocal_92 - 1);
	}
	if (HUD::DOES_BLIP_EXIST(Local_815[iLocal_93 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_815[iLocal_93 /*3*/]) };
		if (!GlobalFunc_105(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.x, Var0.f_1);
		}
	}
}


void func_203()//Position - 0xEB63
{
	struct<3> Var0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_112, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_93++;
	if (iLocal_93 > (iLocal_92 - 1))
	{
		iLocal_93 = 0;
	}
	if (HUD::DOES_BLIP_EXIST(Local_815[iLocal_93 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_815[iLocal_93 /*3*/]) };
		if (!GlobalFunc_105(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.x, Var0.f_1);
		}
	}
}


int func_205()//Position - 0xEC9D
{
	if (iLocal_937 == 4)
	{
		return 1;
	}
	if (GlobalFunc_1593())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (GlobalFunc_160())
	{
		return 1;
	}
	if (GlobalFunc_153(8, -1))
	{
		return 1;
	}
	if (GlobalFunc_116(0))
	{
		return 1;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 1;
	}
	if (GlobalFunc_579())
	{
		return 1;
	}
	if (Global_68505 || Global_68506)
	{
		return 1;
	}
	return 0;
}



void func_208()//Position - 0xED38
{
	if (!Global_96389 == 0)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_96389))
		{
			Global_96389 = 0;
		}
	}
}

void func_209()//Position - 0xED5B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::_0x36F1B38855F2A8DF(PLAYER::PLAYER_ID());
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 2);
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 3);
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 4);
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 5);
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 15);
	}
}

void func_210()//Position - 0xEDAC
{
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(1);
	PAD::_0x7F4724035FDCA1DD(2);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	GlobalFunc_163();
	PAD::DISABLE_CONTROL_ACTION(0, 200, 1);
	if (GlobalFunc_1593() || GlobalFunc_116(0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
}


int func_212()//Position - 0xEE29
{
	int iVar0;
	
	if (Global_96385 == 0)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(Global_96385))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
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
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
					if (!iVar0 == PLAYER::PLAYER_PED_ID())
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							Global_96400 = 1;
							PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
							return 1;
						}
					}
				}
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_69))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_69))
		{
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
			Global_96401 = 0;
		}
		CAM::SET_CAM_ACTIVE(uLocal_69, 0);
		CAM::DESTROY_CAM(uLocal_69, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}
	return 0;
}

int func_213(var uParam0)//Position - 0xEF37
{
	if (VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xEF52
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) != iLocal_72)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96384))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96385))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(Global_96385))
	{
		return 1;
	}
	if (iLocal_937 != 4)
	{
		if (iParam0 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 1;
			}
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_96384, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_96384, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_96384, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_96384, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(Global_96384, 0) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, 0))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.x = (Var4.x - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.x = (Var7.x + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (MISC::IS_PROJECTILE_IN_AREA(Var4, Var7, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_215()//Position - 0xF0A4
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_87287 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_96404)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		return 0;
	}
	return 1;
}

int func_216()//Position - 0xF0F3
{
	var uVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iLocal_96 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
		if (func_220(&uVar0, GlobalFunc_561(), func_221()))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1);
			func_208();
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 1) == PLAYER::PLAYER_PED_ID())
			{
				iLocal_978 = 1;
			}
			else
			{
				iLocal_978 = 2;
			}
			if (func_218(&uVar0, &iVar1, 1))
			{
				Local_957 = { ENTITY::GET_ENTITY_COORDS(Global_96384, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Local_957.f_2 = 0f;
				fLocal_73 = SYSTEM::VMAG(Local_957);
				iLocal_72 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
				func_217();
				iLocal_97 = func_197();
				iLocal_59 = 1;
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				Global_96400 = 1;
				iLocal_937 = 0;
				iLocal_938 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_217()//Position - 0xF1D5
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 1))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, 1);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 2))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, 2);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_218(var uParam0, int iParam1, bool bParam2)//Position - 0xF273
{
	if (!*uParam0 == Global_96384 && !Global_96384 == 0)
	{
		func_219();
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam1, *uParam0))
				{
					Global_96384 = *uParam0;
					Global_96385 = *iParam1;
					Global_96399 = 1;
					if (bParam2)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96385, 1, 1);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96384, 1, 1);
						StringCopy(&Global_96415, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96385))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96385, 1, 0);
						}
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96384))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96384, 1, 0);
							StringCopy(&Global_96415, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
						}
					}
					PED::SET_PED_CONFIG_FLAG(Global_96385, 251, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_96385, 5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_96385, 17, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Global_96385, 512, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 1);
					AUDIO::SET_AMBIENT_VOICE_NAME(Global_96385, "A_M_M_EASTSA_02_LATINO_FULL_01");
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96384, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_96384, 1);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96384, 0, 0);
					VEHICLE::_0xBE5C1255A1830FF5(Global_96384, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_219()//Position - 0xF3B7
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
	{
		if (!PED::IS_PED_INJURED(Global_96385))
		{
			PED::SET_PED_CONFIG_FLAG(Global_96385, 251, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 0);
			if (!PED::IS_PED_FLEEING(Global_96385) && !PED::IS_PED_IN_COMBAT(Global_96385, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_96385, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -258271821) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar0);
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 1) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 2)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 0))
									{
										TASK::TASK_PAUSE(0, 2000);
									}
									else
									{
										TASK::TASK_PAUSE(0, 500);
									}
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_96384, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(uVar0);
									TASK::TASK_PERFORM_SEQUENCE(Global_96385, uVar0);
									TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_96385, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_96385, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -1146898486) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_96385, 1193033728, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96385))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_96385, 0))
			{
				if (!PED::IS_PED_INJURED(Global_96385))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96385, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_96385);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96384))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_96384, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_96384, 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96384, 1, 0);
					VEHICLE::_0xBE5C1255A1830FF5(Global_96384, 0);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_96384);
			}
		}
	}
	Global_96385 = 0;
	Global_96384 = 0;
	StringCopy(&Global_96415, "NULL", 24);
	Global_96421 = -1;
}

int func_220(var uParam0, int iParam1, var uParam2)//Position - 0xF5F1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) == iParam1)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								if (PED::IS_PED_MODEL(iVar0, uParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*uParam0, 1119092736))
									{
										iVar1 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*uParam0);
										if (iVar1 != 3 && iVar1 != 2)
										{
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_221()//Position - 0xF684
{
	return joaat("a_m_y_stlat_01");
}


void func_223(bool bParam0)//Position - 0xF69E
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("taxi");
	}
	if (CAM::DOES_CAM_EXIST(uLocal_69))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_69))
		{
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
		}
		CAM::SET_CAM_ACTIVE(uLocal_69, 0);
		CAM::DESTROY_CAM(uLocal_69, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}
	Global_96401 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		OBJECT::DELETE_OBJECT(&iLocal_110);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_109);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_112);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_113);
	if (func_224(Global_96385))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_enter", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_96385, "leanover_enter", &cLocal_940, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_idle", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_96385, "leanover_idle", &cLocal_940, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_940, "leanover_exit", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_96385, "leanover_exit", &cLocal_940, -2f);
		}
		if (PED::IS_PED_HEADTRACKING_PED(Global_96385, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_96385);
		}
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_940);
	if (iLocal_937 == 4)
	{
		if (iLocal_939 != 10)
		{
			if (iLocal_58)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				iLocal_58 = 0;
			}
			GlobalFunc_7632(0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_96384, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Global_96384, 0);
				}
			}
			if (bParam0)
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if ((!GlobalFunc_188() && !GlobalFunc_142()) && Global_89962 != 10)
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_3(Global_96384))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384, 1))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, -1) != PLAYER::PLAYER_PED_ID())
				{
					if (!func_2(PLAYER::PLAYER_PED_ID(), -828834893) && !func_2(PLAYER::PLAYER_PED_ID(), 451360105))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
			}
		}
	}
	func_5();
	func_219();
	Global_96421 = -1;
	Global_96400 = 0;
	Global_96404 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_224(int iParam0)//Position - 0xF8FB
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

