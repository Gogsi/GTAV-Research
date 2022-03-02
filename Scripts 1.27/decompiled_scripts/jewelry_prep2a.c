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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
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
	char cLocal_78[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 30;
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
	var uLocal_249 = 10;
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
	var uLocal_300 = 10;
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
	var uLocal_371 = 20;
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
	var uLocal_472 = 20;
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
	var uLocal_573 = 30;
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
	var uLocal_754 = 5;
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
	var uLocal_785 = 7;
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
	var uLocal_835 = 5;
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
	var uLocal_861 = 3;
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
	var uLocal_877 = 15;
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
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 10;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 5;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 5;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	struct<8> Local_1078[2];
	var uLocal_1095 = 0;
	var uLocal_1096 = 3;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 1092616192;
	var uLocal_1103 = 1101004800;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 3;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 16;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = -1;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 1000;
	var uLocal_1295 = 1000;
	var uLocal_1296 = 0;
	int iLocal_1297 = 0;
	var uLocal_1298 = 0;
	int iLocal_1299 = 0;
	struct<3> Local_1300 = { 0, 0, 0 } ;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	int iLocal_1310 = 0;
	var uLocal_1311 = 0;
	struct<2> Local_1312 = { 0, 0 } ;
	int iLocal_1314 = 0;
	var uLocal_1315 = 0;
	struct<2> Local_1316[3];
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	float fLocal_1327 = 0f;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	char cLocal_1333[24] = "";
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	bool bLocal_1346 = 0;
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
	StringCopy(&cLocal_78, "JHP2ADS", 16);
	iLocal_82 = joaat("s_m_m_armoured_01");
	iLocal_83 = joaat("boxville3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	Local_86 = { 0f, 0.175f, 0f };
	Local_89 = { 0f, -3.6f, 0f };
	iLocal_92 = 0;
	fLocal_1327 = 0f;
	iLocal_1344 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_253(5);
	}
	MISC::SET_MISSION_FLAG(1);
	func_232();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_JewelStoreJobPrep2A", 0);
		if (bLocal_97)
		{
			func_230();
		}
		GlobalFunc_6821(&uLocal_98);
		func_187();
		func_185();
		if (!bLocal_95)
		{
			func_181();
			GlobalFunc_4494(&Local_1078);
			func_1();
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x102
{
	switch (iLocal_92)
	{
		case 0:
			if (func_21())
			{
				func_20(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x133
{
	AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_STOP");
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_8(0);
	if (GlobalFunc_230(87))
	{
		GlobalFunc_5103(0, 1);
	}
	else
	{
		GlobalFunc_5103(0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}






void func_8(bool bParam0)//Position - 0x310
{
	int iVar0;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 0);
	if (GlobalFunc_701())
	{
		GlobalFunc_7632(0);
	}
	iLocal_1329 = 0;
	Global_67064 = 0;
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		Global_67064 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_1310);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1310);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1300.x))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&Local_1300);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1300);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1312))
	{
		if (bParam0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::DELETE_VEHICLE(&Local_1312);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1312);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1316)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1316[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(Local_1316[iVar0 /*2*/]));
			}
			else
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_1316[iVar0 /*2*/]))
				{
					ENTITY::DETACH_ENTITY(Local_1316[iVar0 /*2*/], 1, 1);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1316[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1323))
	{
		if (bParam0)
		{
			OBJECT::DELETE_OBJECT(&iLocal_1323);
		}
		else
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1323))
			{
				ENTITY::DETACH_ENTITY(iLocal_1323, 1, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1323);
		}
	}
	if (iLocal_1324 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1324, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
		}
	}
	GlobalFunc_4948(&uLocal_1285, 0, 0);
	GlobalFunc_771();
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
	}
	GlobalFunc_601(6, 0);
}












void func_20(int iParam0)//Position - 0x7EA
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_93 = 0;
		iLocal_94 = 0;
		iLocal_92 = iParam0;
	}
}

int func_21()//Position - 0x805
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	var uVar13;
	
	Var0 = { 692.8256f, -1012.544f, 21.722f };
	Var3 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_94)
	{
		if (func_179(Local_1312))
		{
			if (HUD::GET_BLIP_FROM_ENTITY(Local_1312) != 0)
			{
				Local_1312.f_1 = HUD::GET_BLIP_FROM_ENTITY(Local_1312);
			}
			else
			{
				Local_1312.f_1 = GlobalFunc_6783(Local_1312, 0, 0);
			}
			GlobalFunc_164("JHP2A_STEAL", 7500, 1);
			GlobalFunc_159("JHP2A_HLP2", 15000);
		}
		else if (HUD::GET_BLIP_FROM_ENTITY(Local_1312) != 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			iVar7 = HUD::GET_BLIP_FROM_ENTITY(Local_1312);
			HUD::REMOVE_BLIP(&iVar7);
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_START");
		GlobalFunc_10606(0f, 0f, 0f, 0f, 1, GlobalFunc_8329());
		RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
		iLocal_1339 = 0;
		iLocal_94 = 1;
		bLocal_1346 = true;
		iLocal_93 = 1;
	}
	if (iLocal_94)
	{
		func_122();
		switch (iLocal_93)
		{
			case 1:
				if ((((((iLocal_1297 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_1312)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0)) && ENTITY::DOES_ENTITY_EXIST(Local_1300.x)) && !PED::IS_PED_INJURED(Local_1300.x)) && PED::IS_PED_IN_VEHICLE(Local_1300.x, Local_1312, 0)) && func_119(&(Local_1078[0 /*8*/])))
				{
					func_98(&uLocal_1285, Local_1312, 0, 0, 1, 1, 1);
				}
				else
				{
					GlobalFunc_4948(&uLocal_1285, 0, 0);
				}
				if (iLocal_1297 == 3 || iLocal_1297 == 2)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					GlobalFunc_5652(&uLocal_1095, 1, 0);
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && GlobalFunc_74("JHP2A_HLP2"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (!iLocal_1339)
					{
						GlobalFunc_164("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_93 = 2;
				}
				else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1314) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1314, Local_1312))
				{
					if (HUD::DOES_BLIP_EXIST(Local_1312.f_1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						HUD::REMOVE_BLIP(&(Local_1312.f_1));
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
						GlobalFunc_574(705, 0);
					}
					func_93(&uLocal_1095, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1314, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1312, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1314, 5f, -1, 0);
						iLocal_93 = 101;
					}
				}
				else if (iLocal_1297 == 1)
				{
					GlobalFunc_5652(&uLocal_1095, 1, 0);
					if (!HUD::DOES_BLIP_EXIST(Local_1316[0 /*2*/].f_1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						Local_1316[0 /*2*/].f_1 = GlobalFunc_6799(Local_1316[0 /*2*/]);
						GlobalFunc_164("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1339 = 1;
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1312, 0);
					}
				}
				else if (iLocal_1297 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_1312.f_1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						HUD::REMOVE_BLIP(&(Local_1312.f_1));
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
						GlobalFunc_574(705, 0);
					}
					if (func_90(&uLocal_1095, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1312, "JHP2A_RTNVAN", "", "", PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1312, 0), 0, 1, -1))
					{
						iLocal_93 = 101;
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_1095) && HUD::DOES_BLIP_HAVE_GPS_ROUTE(uLocal_1095))
					{
						HUD::SET_BLIP_ROUTE(uLocal_1095, 0);
					}
				}
				break;
			
			case 101:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1312) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1312, 0))
				{
					iVar8 = Local_1312;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1314, Local_1312))
				{
					iVar8 = iLocal_1314;
				}
				if (GlobalFunc_530(iVar8, 1093140480, 1, 1056964608, 0, 1))
				{
					if (GlobalFunc_230(87))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_93 = 1000;
					}
					else
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						iLocal_93++;
					}
				}
				break;
			
			case 102:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					HUD::CLEAR_PRINTS();
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1312, 0);
					VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1312, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1314, 5f, 1, 0);
					}
					GlobalFunc_571(0, -1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1316[0 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1316[0 /*2*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1316[1 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1316[1 /*2*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1316[2 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1316[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
				{
					iVar6 = 0;
					while (iVar6 < Local_1316)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1316[iVar6 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1316[iVar6 /*2*/]))
						{
							if (HUD::DOES_BLIP_EXIST(Local_1312.f_1))
							{
								MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
								HUD::REMOVE_BLIP(&(Local_1312.f_1));
								MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
							}
							if (!HUD::DOES_BLIP_EXIST(Local_1316[iVar6 /*2*/].f_1))
							{
								Local_1316[iVar6 /*2*/].f_1 = GlobalFunc_6799(Local_1316[iVar6 /*2*/]);
							}
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < Local_1316)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1316[iVar6 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1316[iVar6 /*2*/]))
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
							{
								bVar9 = func_87(Local_1316[iVar6 /*2*/]);
								if ((bVar9 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, 0f, -3f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, 0f, -4.5f, 1f), 1.68f, 0, 1, 1)) || (!bVar9 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1316[iVar6 /*2*/], 1), 0.75f, 0.75f, 4f, 0, 0, 1)))
								{
									WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 1, 0, 0);
									OBJECT::DELETE_OBJECT(&(Local_1316[iVar6 /*2*/]));
									HUD::CLEAR_PRINTS();
									AUDIO::PLAY_SOUND_FRONTEND(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
								}
							}
						}
						iVar6++;
					}
				}
				else
				{
					GlobalFunc_574(705, 0);
					iVar6 = 0;
					while (iVar6 < Local_1316)
					{
						if (HUD::DOES_BLIP_EXIST(Local_1316[iVar6 /*2*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_1316[iVar6 /*2*/].f_1));
						}
						iVar6++;
					}
					func_41(&uLocal_1095, Var3, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar10, 1);
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, 0, 1, 0))
					{
						iVar12 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, 1, 0))
					{
						bVar11 = true;
					}
					if (bVar11 || ((iVar12 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && bLocal_1346))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
						if (!GlobalFunc_701())
						{
							GlobalFunc_7632(1);
						}
						if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_116(0))
							{
								if (iVar10 != joaat("weapon_briefcase"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 1);
								}
							}
						}
					}
					if (bVar11)
					{
						if (iVar10 == joaat("weapon_briefcase"))
						{
							if (!GlobalFunc_74("JHP2A_HLP1"))
							{
								GlobalFunc_1("JHP2A_HLP1");
							}
						}
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) && iVar10 == joaat("weapon_briefcase"))
						{
							if (GlobalFunc_74("JHP2A_HLP1"))
							{
								HUD::CLEAR_HELP(1);
							}
							uVar13 = WEAPON::GET_WEAPON_OBJECT_FROM_PED(PLAYER::PLAYER_PED_ID(), 1);
							PHYSICS::ACTIVATE_PHYSICS(uVar13);
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Drop_Case", iVar13, "JWL_PREP_2A_SOUNDS", 0, 0);
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar13);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
							WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
							GlobalFunc_571(0, -1);
							GlobalFunc_553(706);
							GlobalFunc_5652(&uLocal_1095, 1, 0);
							if (GlobalFunc_230(87))
							{
								if (GlobalFunc_701())
								{
									GlobalFunc_7632(0);
								}
								iLocal_93 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (GlobalFunc_701())
						{
							GlobalFunc_7632(0);
						}
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_74("JHP2A_HLP1"))
							{
								HUD::CLEAR_HELP(1);
							}
						}
					}
					bLocal_1346 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
				}
				break;
			
			case 1000:
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1312, 0);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1312, 1);
				GlobalFunc_2571(1);
				GlobalFunc_2536(1, 0);
				if (GlobalFunc_5170())
				{
					if (func_24(&uLocal_1120, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_93++;
					}
				}
				break;
			
			case 1001:
				GlobalFunc_2536(1, 0);
				if (GlobalFunc_617())
				{
					iLocal_93++;
				}
				break;
			
			case 1002:
				GlobalFunc_2536(1, 0);
				if (!GlobalFunc_617())
				{
					GlobalFunc_689();
					return 1;
				}
				break;
			
			case 2000:
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
				Global_67064 = 1;
				GlobalFunc_2571(1);
				GlobalFunc_2536(1, 0);
				iLocal_93++;
				break;
			
			case 2001:
				GlobalFunc_2536(1, 0);
				if (GlobalFunc_5170())
				{
					if (func_24(&uLocal_1120, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_93++;
					}
				}
				break;
			
			case 2002:
				GlobalFunc_2536(1, 0);
				if (GlobalFunc_617())
				{
					iLocal_93++;
				}
				break;
			
			case 2003:
				GlobalFunc_2536(1, 0);
				if (!GlobalFunc_617())
				{
					GlobalFunc_689();
					return 1;
				}
				break;
			}
	}
	return 0;
}



bool func_24(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x125D
{
	GlobalFunc_513(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return GlobalFunc_9817(sParam3, iParam4, bParam8);
}

















int func_41(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x1AD8
{
	return func_42(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam12, 1065353216);
}

int func_42(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)//Position - 0x1B33
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	GlobalFunc_647(uParam0);
	GlobalFunc_646(uParam0);
	GlobalFunc_502();
	if (GlobalFunc_7931(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		GlobalFunc_635(sParam20);
		GlobalFunc_635(sParam21);
		GlobalFunc_635(sParam22);
		GlobalFunc_635(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 23);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (GlobalFunc_5146(uParam0, iParam29))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				GlobalFunc_635(sParam24);
				GlobalFunc_635(sParam27);
				GlobalFunc_635("MORE_SEATS");
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						GlobalFunc_635(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(uParam0);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
						{
							HUD::REMOVE_BLIP(uParam0);
						}
						uParam0->f_5 = GlobalFunc_5104(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					else if (!GlobalFunc_537(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 2))
						{
							GlobalFunc_5145(uParam0, sParam19, 0);
							MISC::SET_BIT(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (MISC::IS_BIT_SET(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], GlobalFunc_468()) || !GlobalFunc_5144(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (GlobalFunc_5143(uParam0))
							{
								GlobalFunc_635(sParam19);
								GlobalFunc_635(sParam24);
								GlobalFunc_635(sParam20);
								GlobalFunc_635(sParam21);
								GlobalFunc_635(sParam22);
								GlobalFunc_635(sParam23);
								GlobalFunc_635("LOSE_WANTED");
								GlobalFunc_635("MORE_SEATS");
								GlobalFunc_635(sParam27);
								GlobalFunc_5652(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22)))
				{
					GlobalFunc_635(sParam24);
					GlobalFunc_635(sParam27);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						GlobalFunc_635(sParam19);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								GlobalFunc_635(sParam19);
							}
							*uParam0 = GlobalFunc_6783(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
							if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_714(*uParam0, uParam0);
							}
						}
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
									{
										GlobalFunc_5145(uParam0, sParam27, 0);
										MISC::SET_BIT(&(uParam0->f_13), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam24, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
								if (!MISC::IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
									{
										GlobalFunc_5130(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					GlobalFunc_635(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(uParam0->f_17[iVar9]))
									{
										GlobalFunc_5130(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(uParam0->f_13), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								if (MISC::IS_BIT_SET(uParam0->f_13, 9))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
						{
							GlobalFunc_5145(uParam0, sParam24, 0);
							MISC::SET_BIT(&(uParam0->f_13), 3);
							MISC::CLEAR_BIT(&(uParam0->f_13), 4);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(uParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 0);
		}
		GlobalFunc_635(sParam19);
		GlobalFunc_635(sParam24);
		GlobalFunc_635(sParam27);
		GlobalFunc_635(sParam24);
		GlobalFunc_635("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			HUD::REMOVE_BLIP(uParam0);
		}
	}
	MISC::CLEAR_BIT(&(uParam0->f_13), 11);
	MISC::CLEAR_BIT(&(uParam0->f_13), 12);
	return 0;
}













































int func_87(int iParam0)//Position - 0x4449
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_1312))
	{
		return 0;
	}
	Var0 = { MISC::_0x21C235BC64831E5A(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, Local_86), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, Local_89), 0) };
	if (SYSTEM::VDIST2(Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, Local_86)) <= SYSTEM::VDIST2(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, Local_89), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, Local_86)))
	{
		return 1;
	}
	return 0;
}



bool func_90(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, int iParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)//Position - 0x46DA
{
	return func_42(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, iParam10);
}



int func_93(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x474A
{
	return func_42(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, 0, 0, 0, iParam8, sParam9, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}





void func_98(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x49F7
{
	func_99(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_99(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x4A14
{
	GlobalFunc_9524(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}




















int func_119(var uParam0)//Position - 0x57B3
{
	if (GlobalFunc_4492(uParam0) && !GlobalFunc_4497(uParam0))
	{
		return 1;
	}
	return 0;
}



void func_122()//Position - 0x581D
{
	int iVar0;
	
	if (iLocal_1297 == 0 || iLocal_1297 == 1)
	{
		if (((ENTITY::IS_ENTITY_DEAD(Local_1312) || (ENTITY::DOES_ENTITY_EXIST(Local_1316[0 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1316[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1316[1 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1316[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1316[2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1316[2 /*2*/])))
		{
			iLocal_1297 = 2;
		}
	}
	if (iLocal_1297 == 2)
	{
		if ((((!ENTITY::DOES_ENTITY_EXIST(Local_1312) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0)) || (ENTITY::DOES_ENTITY_EXIST(Local_1316[0 /*2*/]) && !func_87(Local_1316[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1316[1 /*2*/]) && !func_87(Local_1316[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1316[2 /*2*/]) && !func_87(Local_1316[2 /*2*/])))
		{
			iLocal_1297 = 3;
		}
	}
	if (iLocal_1297 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_1312))
					{
						iLocal_1314 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1297 == 0)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0))
		{
			iLocal_1297 = 1;
		}
	}
	if (iLocal_1297 == 1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1312, 1))
	{
		GlobalFunc_601(6, 1);
	}
	else
	{
		GlobalFunc_601(6, 0);
	}
}

























































int func_179(int iParam0)//Position - 0x8F79
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!ENTITY::IS_ENTITY_DEAD(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}


void func_181()//Position - 0x904D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!iLocal_1345)
		{
			GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
			iLocal_1345 = 1;
		}
	}
	else if (iLocal_1345)
	{
		GlobalFunc_503(0, -1);
		GlobalFunc_504(0, -1);
		iLocal_1345 = 0;
	}
	if (!iLocal_1343)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1312, 1))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1343 = 1;
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1343 = 1;
			}
		}
	}
	if (iLocal_92 == 0)
	{
		switch (iLocal_1297)
		{
			case 0:
				if ((ENTITY::DOES_ENTITY_EXIST(Local_1300.x) && !PED::IS_PED_INJURED(Local_1300.x)) && func_119(&(Local_1078[0 /*8*/])))
				{
					if (Local_1078[0 /*8*/].f_1 == 1)
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1312, 1) > 500f)
						{
							func_253(1);
						}
					}
					else if (Local_1078[0 /*8*/].f_1 == 4)
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1312, 1) > 250f)
						{
							func_253(1);
						}
					}
					else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1312, 1) > 250f)
					{
						func_253(2);
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1312, 1) > 250f)
				{
					func_253(2);
				}
				break;
			
			case 1:
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1312, 1) > 250f)
				{
					func_253(2);
				}
				break;
			
			case 3:
			case 2:
				if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
				{
					if (((((ENTITY::DOES_ENTITY_EXIST(Local_1316[0 /*2*/]) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1316[0 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1316[1 /*2*/])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1316[1 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1316[2 /*2*/])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1316[2 /*2*/], 1) > 250f)
					{
						func_253(3);
					}
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1312))
	{
		if ((ENTITY::IS_ENTITY_IN_WATER(Local_1312) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
		{
			func_253(4);
		}
	}
}




void func_185()//Position - 0x938F
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1300.x))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1300.x, 0))
		{
			func_186(Local_1300.x, &(Local_1300.f_2), -1, 0, 0, 0, -1082130432, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1312))
	{
		if (((!func_179(Local_1312) && ENTITY::IS_ENTITY_DEAD(Local_1312)) && iLocal_1340) && GlobalFunc_156(Local_1312, PLAYER::PLAYER_PED_ID(), 1) > 200f)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1312);
		}
	}
}

int func_186(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x940B
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_187()//Position - 0x952A
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_95 == 1)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
		}
		else
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(0);
				CUTSCENE::REMOVE_CUTSCENE();
			}
			iLocal_92 = iLocal_96;
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_8(1);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (!GlobalFunc_188())
			{
				func_226(iLocal_92, &Var0, &uVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_98, Var0, 50f, 0);
			}
			GlobalFunc_762(&uLocal_98);
			switch (iLocal_92)
			{
				case 0:
					GlobalFunc_718(&uLocal_98, iLocal_82);
					GlobalFunc_718(&uLocal_98, iLocal_83);
					GlobalFunc_718(&uLocal_98, iLocal_84);
					GlobalFunc_727(&uLocal_98, &Global_87229);
					break;
				
				case 1:
					GlobalFunc_718(&uLocal_98, joaat("burrito2"));
					break;
			}
			while (!GlobalFunc_7725(&uLocal_98))
			{
				SYSTEM::WAIT(0);
				func_185();
			}
			switch (iLocal_92)
			{
				case 0:
					while (!func_213(0))
					{
						SYSTEM::WAIT(0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Global_87229, "jhp2a_main"))
					{
						while (!func_191(&iLocal_1310, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							SYSTEM::WAIT(0);
							MISC::CLEAR_AREA_OF_VEHICLES(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						while (!func_191(&iLocal_1310, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							SYSTEM::WAIT(0);
							MISC::CLEAR_AREA_OF_VEHICLES(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, 0);
						}
					}
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1310, 0);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1310, 1, false);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1310, 2, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1310);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1310, 1, 1);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_1310, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1310, -1);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 1:
					if (!GlobalFunc_230(87))
					{
						Local_1312 = VEHICLE::CREATE_VEHICLE(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1312, 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1312);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.5735f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
			}
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			bLocal_95 = false;
		}
	}
}




int func_191(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x991A
{
	struct<43> Var0;
	
	Var0.f_9 = 25;
	Var0.f_35 = 2;
	if (GlobalFunc_199())
	{
		if (GlobalFunc_7698())
		{
			GlobalFunc_98(Global_93588.f_2167.f_12, &Var0);
		}
	}
	else if (GlobalFunc_7984())
	{
		GlobalFunc_98(Global_91351.f_2167.f_12, &Var0);
	}
	if (Var0.f_42 != 0)
	{
		if (!func_209(0, &Var0))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Var0.f_42) || VEHICLE::IS_THIS_MODEL_A_BIKE(Var0.f_42))
			{
				STREAMING::REQUEST_MODEL(Var0.f_42);
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_42))
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_42, Param1, fParam4, 1, 1);
					GlobalFunc_7098(*iParam0, &Var0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_42);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam5 = true;
		}
	}
	if (bParam5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (GlobalFunc_10543(iParam0, 0, Param1, fParam4, 1, 0))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}


















int func_209(int iParam0, var uParam1)//Position - 0xD5C9
{
	struct<58> Var0;
	
	if (!GlobalFunc_42(iParam0))
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam0 /*74*/] != 0)
	{
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam0 /*74*/] == uParam1->f_42 && MISC::GET_HASH_KEY(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam0 /*74*/].f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam0 /*74*/] != 0)
	{
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam0 /*74*/] == uParam1->f_42 && MISC::GET_HASH_KEY(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam0 /*74*/].f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 25;
	Var0.f_57 = 2;
	GlobalFunc_97(iParam0, &Var0, 1);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_42 && MISC::GET_HASH_KEY(&(Var0.f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	GlobalFunc_97(iParam0, &Var0, 2);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_42 && MISC::GET_HASH_KEY(&(Var0.f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}




int func_213(bool bParam0)//Position - 0xD76C
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	GlobalFunc_727(&uLocal_98, &Global_87229);
	GlobalFunc_718(&uLocal_98, joaat("s_m_m_armoured_01"));
	GlobalFunc_718(&uLocal_98, iLocal_84);
	GlobalFunc_718(&uLocal_98, iLocal_85);
	if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")) && STREAMING::HAS_MODEL_LOADED(iLocal_84)) && STREAMING::HAS_MODEL_LOADED(iLocal_85))
	{
		if (bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1312))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
					Local_1312 = Global_86864[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1300.x))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
					Local_1300.x = Global_86864.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			GlobalFunc_718(&uLocal_98, iLocal_83);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_83) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_87229))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_87229, "jhp2a_main"))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87229, 23, &Var1);
					MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1312 = VEHICLE::CREATE_VEHICLE(iLocal_83, Var1, 119.4988f, 1, 1);
					Local_1300.x = PED::CREATE_PED_INSIDE_VEHICLE(Local_1312, 26, iLocal_82, -1, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1312);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1300.x, Local_1312, &Global_87229, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87229, 29, &Var1);
					MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1312 = VEHICLE::CREATE_VEHICLE(iLocal_83, Var1, 134.0011f, 1, 1);
					Local_1300.x = PED::CREATE_PED_INSIDE_VEHICLE(Local_1312, 26, iLocal_82, -1, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1312);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1300.x, Local_1312, &Global_87229, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1312))
		{
			GlobalFunc_743(Local_1312, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1312, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1312, 1);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1312, 1);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1312, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1300.x))
		{
			if (!PED::IS_PED_INJURED(Local_1300.x))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1300.x, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1300.x, iLocal_1299);
				PED::SET_PED_ACCURACY(Local_1300.x, 5);
				PED::SET_PED_CAN_BE_TARGETTED(Local_1300.x, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1300.x, 1, 0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1300.x, joaat("weapon_pistol"), 15, 0, 1);
				GlobalFunc_173(&uLocal_1120, 3, Local_1300.x, "JHP2A_Driver", 0, 1);
				GlobalFunc_4493(&(Local_1078[0 /*8*/]), 0, 0, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1312) && ENTITY::DOES_ENTITY_EXIST(Local_1300.x))
		{
			func_216();
			GlobalFunc_4493(&(Local_1078[1 /*8*/]), 0, 0, 1);
			GlobalFunc_5174(&uLocal_98, joaat("boxville3"));
			GlobalFunc_5174(&uLocal_98, joaat("s_m_m_armoured_01"));
			GlobalFunc_5174(&uLocal_98, iLocal_84);
			GlobalFunc_5174(&uLocal_98, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}



void func_216()//Position - 0xDAD4
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1312))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1312) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1323))
		{
			iLocal_1323 = OBJECT::CREATE_OBJECT(iLocal_85, ENTITY::GET_ENTITY_COORDS(Local_1312, 1), 1, 1, 0);
			OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1323, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_1323, Local_1312, -1, -1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1312, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_1312, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1323, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1316[0 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1312))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
				Local_1316[0 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, Var0, 1, 1, 0);
			}
			else
			{
				Local_1316[0 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1312, 1), 1, 1, 0);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1316[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1316[0 /*2*/], Local_1312, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1316[0 /*2*/], 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1316[1 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1312))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
				Local_1316[1 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, Var0, 1, 1, 0);
			}
			else
			{
				Local_1316[1 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1312, 1), 1, 1, 0);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1316[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1316[1 /*2*/], Local_1312, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1316[1 /*2*/], 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1316[2 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1312))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
				Local_1316[2 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, Var0, 1, 1, 0);
			}
			else
			{
				Local_1316[2 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1312, 1), 1, 1, 0);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1316[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1316[2 /*2*/], Local_1312, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1316[2 /*2*/], 1);
			}
		}
	}
}










void func_226(int iParam0, var uParam1, var uParam2)//Position - 0xE395
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}




void func_230()//Position - 0xEDEB
{
	if (bLocal_97 && (GlobalFunc_145() || CAM::IS_SCREEN_FADED_OUT()))
	{
		func_8(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_232()//Position - 0xEE41
{
	struct<3> Var0;
	var uVar3;
	
	func_239();
	PED::ADD_RELATIONSHIP_GROUP("SECDRIVER", &iLocal_1299);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1299, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1299, -183807561);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1299);
	if (GlobalFunc_2(0) || GlobalFunc_199())
	{
		iLocal_96 = 0;
		if (GlobalFunc_199())
		{
			if (Global_84544)
			{
				iLocal_96++;
			}
		}
		StringCopy(&Global_87229, "jhp2a_alt", 64);
		if (GlobalFunc_199())
		{
			func_226(iLocal_96, &Var0, &uVar3);
			GlobalFunc_5812(Var0, uVar3, 1, 0);
		}
		bLocal_95 = true;
	}
	else
	{
		while (!func_213(1))
		{
			SYSTEM::WAIT(0);
			GlobalFunc_8012(&uLocal_98);
		}
	}
	GlobalFunc_3005(&uLocal_98, "JHP2A", 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	GlobalFunc_5198(88);
	GlobalFunc_173(&uLocal_1120, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	GlobalFunc_173(&uLocal_1120, 3, 0, "Lester", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 1);
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
	}
	GlobalFunc_3041();
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_87229))
	{
	}
	iLocal_1324 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	Global_67064 = 1;
}







void func_239()//Position - 0xF1AA
{
	GlobalFunc_4498(&(Local_1078[0 /*8*/]), 63260/*func_248*/, "Van Driver Manager");
	GlobalFunc_4498(&(Local_1078[1 /*8*/]), 61912/*func_240*/, "Cargo Manager");
}

void func_240(var uParam0)//Position - 0xF1D8
{
	if (!GlobalFunc_4497(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_1312))
		{
			func_245(Local_1316[0 /*2*/], 1);
			func_245(Local_1316[1 /*2*/], 1);
			func_245(Local_1316[2 /*2*/], 1);
			iLocal_1340 = 1;
			GlobalFunc_4496(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					GlobalFunc_724(&uLocal_98, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1330) > 150)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1323, PLAYER::PLAYER_PED_ID(), 0))
							{
								if ((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1323, joaat("weapon_molotov"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1323, joaat("weapon_bzgas"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1323, joaat("weapon_knife"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1323, joaat("weapon_unarmed"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1323, joaat("weapon_hit_by_water_cannon"), 0))
								{
									WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_1323);
								}
								else
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1323);
									iLocal_1330 = MISC::GET_GAME_TIMER();
									iLocal_1329++;
									if (iLocal_1329 >= 3)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Destroyed", iLocal_1323, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Damage", iLocal_1323, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1323);
						}
					}
					if (((((iLocal_1329 >= 3 || ENTITY::IS_ENTITY_DEAD(iLocal_1323)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1312, 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1312, 3)) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1312, 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1312, 3) > 0f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1323))
						{
							OBJECT::DELETE_OBJECT(&iLocal_1323);
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1312, 2))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1312, 2, 0, 0);
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1312, 3))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1312, 3, 0, 0);
						}
						iLocal_1341 = 0;
						iLocal_1342 = 0;
						func_245(Local_1316[0 /*2*/], 0);
						func_245(Local_1316[1 /*2*/], 0);
						func_245(Local_1316[2 /*2*/], 0);
						func_242(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_115(Local_1312))
					{
						if (MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1312, 2)) > 0.5f && MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1312, 3)) > 0.5f)
						{
							func_242(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (GlobalFunc_115(Local_1312))
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1312, 2))
						{
							if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1312, 2))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1312, 2, 1, 0);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1312, 2, 0, 0, 1);
								iLocal_1341 = 1;
							}
						}
						else
						{
							iLocal_1341 = 1;
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1312, 3))
						{
							if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1312, 3))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1312, 3, 1, 0);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1312, 3, 0, 0, 1);
								iLocal_1342 = 1;
							}
						}
						else
						{
							iLocal_1342 = 1;
						}
						if (iLocal_1341 && iLocal_1342)
						{
							iLocal_1340 = 1;
							func_242(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (GlobalFunc_4497(uParam0))
	{
	}
}


void func_242(var uParam0, int iParam1, int iParam2)//Position - 0xF4E5
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}



void func_245(int iParam0, bool bParam1)//Position - 0xF5F9
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, 1, bParam1);
			ENTITY::SET_ENTITY_COLLISION(iParam0, 1, 0);
			PHYSICS::ACTIVATE_PHYSICS(iParam0);
		}
		if (bParam1)
		{
			Var0 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f), IntToFloat(-MISC::GET_RANDOM_INT_IN_RANGE(3, 6)), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f))) };
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 1, Var0 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f)), 0, 1, 1, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 5, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), 0, 1, 1, 0);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, Local_1312, 1);
		}
	}
}



void func_248(var uParam0)//Position - 0xF71C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	float fVar8;
	
	if (!GlobalFunc_4497(uParam0))
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(Local_1300.x) || PED::IS_PED_INJURED(Local_1300.x)) || (ENTITY::DOES_ENTITY_EXIST(Local_1312) && GlobalFunc_156(Local_1312, Local_1300.x, 1) > 200f)) || (!PED::IS_PED_IN_ANY_VEHICLE(Local_1300.x, 0) && GlobalFunc_156(Local_1312, Local_1300.x, 1) > 200f))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1312) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0))
			{
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1312, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1300);
			GlobalFunc_4496(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!ENTITY::DOES_ENTITY_EXIST(Local_1312) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0)) || !PED::IS_PED_IN_VEHICLE(Local_1300.x, Local_1312, 0)))
			{
				iLocal_1331 = 0;
				iLocal_1332 = 0;
				StringCopy(&cLocal_1333, "", 24);
				func_242(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_1312))
					{
						if ((!iLocal_1326 && (MISC::GET_GAME_TIMER() - iLocal_1328) > 500) && fLocal_1327 >= 4f)
						{
							iLocal_1326 = 1;
							iLocal_1325++;
						}
					}
					else if (iLocal_1326)
					{
						iLocal_1328 = MISC::GET_GAME_TIMER();
						iLocal_1326 = 0;
					}
					Var1 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(iVar0, 1) - ENTITY::GET_ENTITY_COORDS(Local_1312, 1)) };
					Var4 = { ENTITY::GET_ENTITY_VELOCITY(Local_1312) - ENTITY::GET_ENTITY_VELOCITY(iVar0) };
					fLocal_1327 = GlobalFunc_168(Var4, Var1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1312, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1300.x, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 116)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 121)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 46)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 136)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 86)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 87)) || PED::IS_PED_BEING_JACKED(Local_1300.x)) || FIRE::IS_ENTITY_ON_FIRE(Local_1312)) || iLocal_1325 > 0)
					{
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 4, 0);
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1312) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0))
						{
							if ((ENTITY::IS_ENTITY_STATIC(PLAYER::PLAYER_PED_ID()) || fLocal_1327 > 0.5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, 0f, 2f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1312, 0f, 10f, 2f), 4.5f, 0, 1, 0))
							{
								if (!AUDIO::IS_HORN_ACTIVE(Local_1312))
								{
									if (iLocal_1344 == -1)
									{
										iLocal_1344 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1344) > 5000)
									{
										VEHICLE::START_VEHICLE_HORN(Local_1312, 2000, 1330140418, 0);
									}
								}
								else
								{
									iLocal_1344 = -1;
								}
							}
						}
						if (GlobalFunc_713(Local_1312, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							GlobalFunc_727(&uLocal_98, "jhp2a_airport");
						}
						if (!GlobalFunc_709(Local_1300.x, -235832601, 1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1312, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, 1, 0))
							{
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("jhp2a_airport"))
								{
									iLocal_1331 = 0;
									iLocal_1332 = 0;
									StringCopy(&cLocal_1333, "", 24);
									func_242(uParam0, 2, 0);
								}
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1300.x, Local_1312, &Global_87229, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1312, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1300.x, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 116)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 121)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 46)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 136)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 86)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 87)) || PED::IS_PED_BEING_JACKED(Local_1300.x)) || FIRE::IS_ENTITY_ON_FIRE(Local_1312)) || iLocal_1325 > 0)
					{
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 5, 0);
					}
					else if (!GlobalFunc_709(Local_1300.x, -235832601, 1))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1312, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, 1, 0))
						{
							iLocal_1331 = 0;
							iLocal_1332 = 0;
							StringCopy(&cLocal_1333, "", 24);
							func_242(uParam0, 3, 0);
						}
						else
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1300.x, Local_1312, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1312, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1300.x, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 116)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 121)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 46)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 136)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 86)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 87)) || PED::IS_PED_BEING_JACKED(Local_1300.x)) || FIRE::IS_ENTITY_ON_FIRE(Local_1312)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1312, 1)) || iLocal_1325 > 0)
					{
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 5, 0);
					}
					else if (PED::IS_PED_IN_VEHICLE(Local_1300.x, Local_1312, 1))
					{
						if (!GlobalFunc_709(Local_1300.x, 451360105, 1))
						{
							TASK::TASK_LEAVE_VEHICLE(Local_1300.x, Local_1312, 0);
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1312, 2);
						if (!GlobalFunc_709(Local_1300.x, 242628503, 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1298);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1298);
							TASK::TASK_PERFORM_SEQUENCE(Local_1300.x, uLocal_1298);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1298);
						}
					}
					break;
				
				case 4:
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1312, 0, 1))
					{
						iVar7++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1312, 1, 1))
					{
						iVar7++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1312, 4, 1))
					{
						iVar7++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1312, 5, 1))
					{
						iVar7++;
					}
					if (((((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_1312)) <= 0f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1312) <= 250f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1312) <= 400f) || PED::IS_PED_INJURED(Local_1300.x)) || iVar7 >= 2) || iLocal_1325 > 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1312) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1312, 0))
						{
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1312, 0);
						}
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 5, 0);
					}
					else if (!GlobalFunc_709(Local_1300.x, -1273030092, 1))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_1300.x, Local_1312, PLAYER::PLAYER_PED_ID(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1312) && !ENTITY::IS_ENTITY_DEAD(Local_1312))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_1300.x, Local_1312, 0))
						{
							if (!GlobalFunc_644(Local_1312))
							{
								if (!GlobalFunc_709(Local_1300.x, -2118855366, 1))
								{
									TASK::CLEAR_PED_TASKS(Local_1300.x);
									TASK::TASK_VEHICLE_TEMP_ACTION(Local_1300.x, Local_1312, 5, -1);
								}
							}
							else if (!GlobalFunc_709(Local_1300.x, 451360105, 1))
							{
								TASK::TASK_LEAVE_VEHICLE(Local_1300.x, Local_1312, 256);
							}
						}
						else if (!GlobalFunc_709(Local_1300.x, 780511057, 1))
						{
							PED::SET_PED_CAN_BE_TARGETTED(Local_1300.x, 1);
							TASK::TASK_COMBAT_PED(Local_1300.x, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1312) && !ENTITY::IS_ENTITY_DEAD(Local_1312))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_1312, 2, 1);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_1312, 3, 1);
					}
					break;
				}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Local_1300.x) && !PED::IS_PED_INJURED(Local_1300.x)) && !PED::IS_CONVERSATION_PED_DEAD(Local_1300.x))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1331)
					{
						case 0:
							if (GlobalFunc_5170() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1300.x))
							{
								if (PED::IS_PED_BEING_JACKED(Local_1300.x))
								{
									GlobalFunc_5130(Local_1300.x, "JACKED_GENERIC", 10);
								}
								else
								{
									GlobalFunc_5130(Local_1300.x, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1331++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_IN_VEHICLE(Local_1300.x, Local_1312, 0) || iLocal_1297 == 3)
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_1300.x, Local_1312, 0))
								{
									iLocal_1331 = 4;
								}
								else
								{
									iLocal_1331++;
								}
							}
							else if (GlobalFunc_5170() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1300.x))
							{
								if (GlobalFunc_10652(&uLocal_1120, &cLocal_78, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1331++;
								}
							}
							break;
						
						case 2:
							if (GlobalFunc_5170() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1300.x))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1333))
								{
									fVar8 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1300.x, 1));
									if ((((((iLocal_1326 || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1300.x, 124)) || fVar8 < 49f) && (MISC::GET_GAME_TIMER() - iLocal_1332) > 5000) && fVar8 < 225f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1333, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1333, "JS_ATT_M", 24);
										}
									}
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1333))
								{
									if (MISC::ARE_STRINGS_EQUAL(&cLocal_1333, "GENERIC_CURSE_HIGH"))
									{
										GlobalFunc_5130(Local_1300.x, "GENERIC_CURSE_HIGH", 10);
										iLocal_1331++;
									}
									else
									{
										if (GlobalFunc_10652(&uLocal_1120, &cLocal_78, &cLocal_1333, 8, 0, 0, 0))
										{
											iLocal_1331++;
										}
										iLocal_1331++;
									}
								}
							}
							break;
						
						case 3:
							if (!GlobalFunc_111() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1300.x))
							{
								iLocal_1332 = MISC::GET_GAME_TIMER();
								StringCopy(&cLocal_1333, "", 24);
								iLocal_1331 = (iLocal_1331 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1331)
					{
						case 0:
							if (GlobalFunc_5170() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1300.x))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1333))
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_1332) > 5000 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1300.x, 1)) < 400f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1333, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1333, "JS_COMB_M", 24);
										}
									}
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1333))
								{
									if (MISC::ARE_STRINGS_EQUAL(&cLocal_1333, "GENERIC_INSULT_HIGH"))
									{
										GlobalFunc_5130(Local_1300.x, "GENERIC_INSULT_HIGH", 10);
										iLocal_1331++;
									}
									else if (GlobalFunc_10652(&uLocal_1120, &cLocal_78, &cLocal_1333, 8, 0, 0, 0))
									{
										iLocal_1331++;
									}
								}
							}
							break;
						
						case 1:
							if (!GlobalFunc_111() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1300.x))
							{
								iLocal_1332 = MISC::GET_GAME_TIMER();
								StringCopy(&cLocal_1333, "", 24);
								iLocal_1331 = (iLocal_1331 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (GlobalFunc_4497(uParam0))
	{
	}
}





void func_253(int iParam0)//Position - 0x10539
{
	struct<2> Var0;
	char[] cVar4[8];
	
	AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		GlobalFunc_10716();
		func_8(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (!bLocal_97)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar4))
		{
			GlobalFunc_10881(&Var0);
		}
		else
		{
			func_254(&Var0, &cVar4);
		}
		bLocal_97 = true;
	}
}

void func_254(char* sParam0, char* sParam1)//Position - 0x105DF
{
	GlobalFunc_691(sParam0, sParam1);
	GlobalFunc_10730(0);
}













