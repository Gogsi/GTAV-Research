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
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 1000;
	var uLocal_37 = 1000;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
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
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	float fLocal_76 = 0f;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
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
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	var uLocal_111 = 175;
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
	var uLocal_287 = 175;
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
	var uLocal_463 = 175;
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
	var uLocal_639 = 175;
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
	var uLocal_815 = 175;
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
	var uLocal_972 = 0;
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
	var uLocal_995 = 35;
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
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 35;
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
	var uLocal_1049 = 0;
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
	var uLocal_1067 = 35;
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
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
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
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 35;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
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
	var uLocal_1139 = 35;
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
	var uLocal_1175 = 35;
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
	var uLocal_1211 = 15;
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
	var uLocal_1227 = 15;
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
	var uLocal_1243 = 15;
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
	var uLocal_1259 = 15;
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
	float fLocal_1275 = 0f;
	float fLocal_1276 = 0f;
	var uLocal_1277 = 0;
	float fLocal_1278 = 0f;
	float fLocal_1279 = 0f;
	float fLocal_1280 = 0f;
	float fLocal_1281 = 0f;
	var uLocal_1282 = 0;
	float fLocal_1283 = 0f;
	float fLocal_1284 = 0f;
	float fLocal_1285 = 0f;
	float fLocal_1286 = 0f;
	float fLocal_1287 = 0f;
	float fLocal_1288 = 0f;
	float fLocal_1289 = 0f;
	float fLocal_1290 = 0f;
	float fLocal_1291 = 0f;
	float fLocal_1292 = 0f;
	float fLocal_1293 = 0f;
	float fLocal_1294 = 0f;
	float fLocal_1295 = 0f;
	var uLocal_1296 = 175;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 175;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 175;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 35;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 35;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 35;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 15;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	int iLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 175;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 15;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 35;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 175;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 15;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 35;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 175;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 12;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 15;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 35;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 6;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 12;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	int iLocal_3182 = 0;
	struct<21> Local_3183 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	struct<40> Local_3217 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 4;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 4;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 4;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 4;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 4;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 4;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 4;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 16;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 21;
	var uLocal_3476 = 6;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	bool bLocal_3480 = 0;
	int iLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 20;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	bool bLocal_3504 = 0;
	bool bLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3518[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3619[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3640[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3661 = 0;
	int iLocal_3662 = 0;
	int iLocal_3663 = 0;
	int iLocal_3664 = 0;
	int iLocal_3665 = 0;
	int iLocal_3666 = 0;
	int iLocal_3667 = 0;
	int iLocal_3668 = 0;
	int iLocal_3669 = 0;
	int iLocal_3670 = 0;
	int iLocal_3671 = 0;
	int iLocal_3672 = 0;
	int iLocal_3673 = 0;
	int iLocal_3674 = 0;
	int iLocal_3675 = 0;
	int iLocal_3676 = 0;
	int iLocal_3677 = 0;
	int iLocal_3678 = 0;
	int iLocal_3679 = 0;
	int iLocal_3680 = 0;
	int iLocal_3681 = 0;
	int iLocal_3682 = 0;
	int iLocal_3683 = 0;
	int iLocal_3684 = 0;
	int iLocal_3685 = 0;
	int iLocal_3686 = 0;
	int iLocal_3687 = 0;
	int iLocal_3688 = 0;
	int iLocal_3689 = 0;
	int iLocal_3690 = 0;
	int iLocal_3691 = 0;
	int iLocal_3692 = 0;
	int iLocal_3693 = 0;
	int iLocal_3694 = 0;
	int iLocal_3695 = 0;
	int iLocal_3696 = 0;
	int iLocal_3697 = 0;
	int iLocal_3698 = 0;
	int iLocal_3699 = 0;
	int iLocal_3700 = 0;
	int iLocal_3701 = 0;
	int iLocal_3702[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3709 = 0;
	int iLocal_3710 = 0;
	int iLocal_3711 = 0;
	int iLocal_3712 = 0;
	int iLocal_3713 = 0;
	int iLocal_3714 = 0;
	int iLocal_3715 = 0;
	int iLocal_3716 = 0;
	int iLocal_3717 = 0;
	int iLocal_3718 = 0;
	int iLocal_3719 = 0;
	int iLocal_3720 = 0;
	int iLocal_3721 = 0;
	int iLocal_3722 = 0;
	int iLocal_3723 = 0;
	int iLocal_3724 = 0;
	int iLocal_3725 = 0;
	int iLocal_3726 = 0;
	int iLocal_3727 = 0;
	int iLocal_3728 = 0;
	int iLocal_3729 = 0;
	int iLocal_3730 = 0;
	int iLocal_3731 = 0;
	int iLocal_3732 = 0;
	int iLocal_3733 = 0;
	int iLocal_3734 = 0;
	int iLocal_3735 = 0;
	int iLocal_3736 = 0;
	int iLocal_3737 = 0;
	int iLocal_3738 = 0;
	int iLocal_3739[3] = { 0, 0, 0 };
	int iLocal_3743 = 0;
	int iLocal_3744 = 0;
	int iLocal_3745 = 0;
	int iLocal_3746 = 0;
	int iLocal_3747 = 0;
	int iLocal_3748 = 0;
	int iLocal_3749 = 0;
	int iLocal_3750 = 0;
	int iLocal_3751 = 0;
	int iLocal_3752 = 0;
	int iLocal_3753 = 0;
	int iLocal_3754 = 0;
	int iLocal_3755 = 0;
	int iLocal_3756 = 0;
	int iLocal_3757 = 0;
	int iLocal_3758 = 0;
	int iLocal_3759 = 0;
	int iLocal_3760 = 0;
	bool bLocal_3761 = 0;
	int iLocal_3762 = 0;
	int iLocal_3763 = 0;
	int iLocal_3764 = 0;
	int iLocal_3765 = 0;
	int iLocal_3766 = 0;
	int iLocal_3767 = 0;
	int iLocal_3768 = 0;
	int iLocal_3769 = 0;
	int iLocal_3770 = 0;
	int iLocal_3771 = 0;
	int iLocal_3772 = 0;
	int iLocal_3773 = 0;
	int iLocal_3774 = 0;
	int iLocal_3775 = 0;
	int iLocal_3776 = 0;
	int iLocal_3777 = 0;
	int iLocal_3778 = 0;
	int iLocal_3779 = 0;
	int iLocal_3780 = 0;
	int iLocal_3781 = 0;
	int iLocal_3782 = 0;
	int iLocal_3783 = 0;
	int iLocal_3784 = 0;
	int iLocal_3785 = 0;
	int iLocal_3786 = 0;
	int iLocal_3787 = 0;
	int iLocal_3788 = 0;
	int iLocal_3789 = 0;
	int iLocal_3790 = 0;
	int iLocal_3791 = 0;
	int iLocal_3792 = 0;
	int iLocal_3793 = 0;
	int iLocal_3794 = 0;
	int iLocal_3795 = 0;
	int iLocal_3796 = 0;
	int iLocal_3797 = 0;
	int iLocal_3798 = 0;
	int iLocal_3799 = 0;
	int iLocal_3800 = 0;
	int iLocal_3801 = 0;
	int iLocal_3802 = 0;
	int iLocal_3803 = 0;
	int iLocal_3804 = 0;
	int iLocal_3805 = 0;
	int iLocal_3806 = 0;
	int iLocal_3807 = 0;
	int iLocal_3808 = 0;
	int iLocal_3809 = 0;
	int iLocal_3810 = 0;
	int iLocal_3811 = 0;
	int iLocal_3812 = 0;
	int iLocal_3813 = 0;
	int iLocal_3814 = 0;
	int iLocal_3815 = 0;
	int iLocal_3816 = 0;
	int iLocal_3817 = 0;
	int iLocal_3818 = 0;
	int iLocal_3819 = 0;
	int iLocal_3820 = 0;
	int iLocal_3821 = 0;
	struct<3> Local_3822 = { 0, 0, 0 } ;
	struct<3> Local_3825 = { 0, 0, 0 } ;
	struct<3> Local_3828 = { 0, 0, 0 } ;
	struct<3> Local_3831 = { 0, 0, 0 } ;
	struct<3> Local_3834 = { 0, 0, 0 } ;
	struct<3> Local_3837 = { 0, 0, 0 } ;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	struct<3> Local_3843 = { 0, 0, 0 } ;
	struct<3> Local_3846 = { 0, 0, 0 } ;
	struct<3> Local_3849 = { 0, 0, 0 } ;
	struct<3> Local_3852 = { 0, 0, 0 } ;
	struct<3> Local_3855 = { 0, 0, 0 } ;
	struct<3> Local_3858 = { 0, 0, 0 } ;
	struct<3> Local_3861 = { 0, 0, 0 } ;
	struct<3> Local_3864 = { 0, 0, 0 } ;
	struct<3> Local_3867 = { 0, 0, 0 } ;
	struct<3> Local_3870 = { 0, 0, 0 } ;
	float fLocal_3873 = 0f;
	float fLocal_3874 = 0f;
	float fLocal_3875 = 0f;
	var uLocal_3876[2] = { 0, 0 };
	var uLocal_3879[2] = { 0, 0 };
	var uLocal_3882 = 0;
	float fLocal_3883 = 0f;
	float fLocal_3884 = 0f;
	float fLocal_3885 = 0f;
	int iLocal_3886 = 0;
	int iLocal_3887 = 0;
	int iLocal_3888 = 0;
	int iLocal_3889 = 0;
	int iLocal_3890 = 0;
	int iLocal_3891 = 0;
	int iLocal_3892 = 0;
	int iLocal_3893 = 0;
	int iLocal_3894 = 0;
	int iLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	int iLocal_3898 = 0;
	int iLocal_3899 = 0;
	int iLocal_3900 = 0;
	int iLocal_3901 = 0;
	int iLocal_3902 = 0;
	int iLocal_3903 = 0;
	int iLocal_3904 = 0;
	int iLocal_3905 = 0;
	int iLocal_3906 = 0;
	int iLocal_3907 = 0;
	int iLocal_3908 = 0;
	int iLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	char* sLocal_3913 = NULL;
	int iLocal_3914 = 0;
	int iLocal_3915[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3924 = 0;
	int iLocal_3925[4] = { 0, 0, 0, 0 };
	int iLocal_3930 = 0;
	int iLocal_3931 = 0;
	int iLocal_3932[2] = { 0, 0 };
	int iLocal_3935 = 0;
	int iLocal_3936 = 0;
	int iLocal_3937 = 0;
	int iLocal_3938 = 0;
	int iLocal_3939 = 0;
	int iLocal_3940 = 0;
	int iLocal_3941 = 0;
	int iLocal_3942 = 0;
	int iLocal_3943 = 0;
	int iLocal_3944 = 0;
	int iLocal_3945 = 0;
	int iLocal_3946 = 0;
	int iLocal_3947 = 0;
	int iLocal_3948 = 0;
	int iLocal_3949 = 0;
	int iLocal_3950 = 0;
	int iLocal_3951 = 0;
	int iLocal_3952 = 0;
	int iLocal_3953 = 0;
	int iLocal_3954 = 0;
	int iLocal_3955 = 0;
	int iLocal_3956 = 0;
	int iLocal_3957 = 0;
	int iLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 25;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 2;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	int iLocal_4025 = 0;
	int iLocal_4026 = 0;
	int iLocal_4027 = 0;
	int iLocal_4028 = 0;
	int iLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 3;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 3;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 3;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 3;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 3;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169[2] = { 0, 0 };
	int iLocal_4172 = 0;
	int iLocal_4173 = 0;
	int iLocal_4174 = 0;
	int iLocal_4175 = 0;
	int iLocal_4176 = 0;
	int iLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 2;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 2;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 20;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = -1;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 1065353216;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = -1;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 1065353216;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = -1;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 1065353216;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = -1;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 1065353216;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = -1;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 1065353216;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = -1;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 1065353216;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = -1;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 1065353216;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = -1;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 1065353216;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = -1;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 1065353216;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = -1;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 1065353216;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = -1;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 1065353216;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = -1;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 1065353216;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = -1;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 1065353216;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = -1;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 1065353216;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = -1;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 1065353216;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = -1;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 1065353216;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = -1;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 1065353216;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = -1;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 1065353216;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = -1;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 1065353216;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = -1;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 1065353216;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 16;
	var uLocal_5330 = 0;
	var uLocal_5331 = -1082130432;
	var uLocal_5332 = 0;
	var uLocal_5333 = -1082130432;
	var uLocal_5334 = 0;
	var uLocal_5335 = -1082130432;
	var uLocal_5336 = 0;
	var uLocal_5337 = -1082130432;
	var uLocal_5338 = 0;
	var uLocal_5339 = -1082130432;
	var uLocal_5340 = 0;
	var uLocal_5341 = -1082130432;
	var uLocal_5342 = 0;
	var uLocal_5343 = -1082130432;
	var uLocal_5344 = 0;
	var uLocal_5345 = -1082130432;
	var uLocal_5346 = 0;
	var uLocal_5347 = -1082130432;
	var uLocal_5348 = 0;
	var uLocal_5349 = -1082130432;
	var uLocal_5350 = 0;
	var uLocal_5351 = -1082130432;
	var uLocal_5352 = 0;
	var uLocal_5353 = -1082130432;
	var uLocal_5354 = 0;
	var uLocal_5355 = -1082130432;
	var uLocal_5356 = 0;
	var uLocal_5357 = -1082130432;
	var uLocal_5358 = 0;
	var uLocal_5359 = -1082130432;
	var uLocal_5360 = 0;
	var uLocal_5361 = -1082130432;
	var uLocal_5362 = 16;
	var uLocal_5363 = 0;
	var uLocal_5364 = -1082130432;
	var uLocal_5365 = 0;
	var uLocal_5366 = -1082130432;
	var uLocal_5367 = 0;
	var uLocal_5368 = -1082130432;
	var uLocal_5369 = 0;
	var uLocal_5370 = -1082130432;
	var uLocal_5371 = 0;
	var uLocal_5372 = -1082130432;
	var uLocal_5373 = 0;
	var uLocal_5374 = -1082130432;
	var uLocal_5375 = 0;
	var uLocal_5376 = -1082130432;
	var uLocal_5377 = 0;
	var uLocal_5378 = -1082130432;
	var uLocal_5379 = 0;
	var uLocal_5380 = -1082130432;
	var uLocal_5381 = 0;
	var uLocal_5382 = -1082130432;
	var uLocal_5383 = 0;
	var uLocal_5384 = -1082130432;
	var uLocal_5385 = 0;
	var uLocal_5386 = -1082130432;
	var uLocal_5387 = 0;
	var uLocal_5388 = -1082130432;
	var uLocal_5389 = 0;
	var uLocal_5390 = -1082130432;
	var uLocal_5391 = 0;
	var uLocal_5392 = -1082130432;
	var uLocal_5393 = 0;
	var uLocal_5394 = -1082130432;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = -1082130432;
	var uLocal_5412 = -1082130432;
	var uLocal_5413 = 1;
	var uLocal_5414 = 1;
	var uLocal_5415 = 1;
	var uLocal_5416 = -1;
	var uLocal_5417 = -1;
	var uLocal_5418 = -1;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 2;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 2;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 20;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = -1;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 1065353216;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = -1;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 1065353216;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = -1;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 1065353216;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = -1;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 1065353216;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = -1;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 1065353216;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = -1;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 1065353216;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = -1;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 1065353216;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = -1;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 1065353216;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = -1;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 1065353216;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = -1;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 1065353216;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = -1;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 1065353216;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = -1;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 1065353216;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = -1;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 1065353216;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = -1;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 1065353216;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = -1;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 1065353216;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = -1;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 1065353216;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = -1;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 1065353216;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = -1;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 1065353216;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = -1;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 1065353216;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = -1;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 1065353216;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 16;
	var uLocal_6571 = 0;
	var uLocal_6572 = -1082130432;
	var uLocal_6573 = 0;
	var uLocal_6574 = -1082130432;
	var uLocal_6575 = 0;
	var uLocal_6576 = -1082130432;
	var uLocal_6577 = 0;
	var uLocal_6578 = -1082130432;
	var uLocal_6579 = 0;
	var uLocal_6580 = -1082130432;
	var uLocal_6581 = 0;
	var uLocal_6582 = -1082130432;
	var uLocal_6583 = 0;
	var uLocal_6584 = -1082130432;
	var uLocal_6585 = 0;
	var uLocal_6586 = -1082130432;
	var uLocal_6587 = 0;
	var uLocal_6588 = -1082130432;
	var uLocal_6589 = 0;
	var uLocal_6590 = -1082130432;
	var uLocal_6591 = 0;
	var uLocal_6592 = -1082130432;
	var uLocal_6593 = 0;
	var uLocal_6594 = -1082130432;
	var uLocal_6595 = 0;
	var uLocal_6596 = -1082130432;
	var uLocal_6597 = 0;
	var uLocal_6598 = -1082130432;
	var uLocal_6599 = 0;
	var uLocal_6600 = -1082130432;
	var uLocal_6601 = 0;
	var uLocal_6602 = -1082130432;
	var uLocal_6603 = 16;
	var uLocal_6604 = 0;
	var uLocal_6605 = -1082130432;
	var uLocal_6606 = 0;
	var uLocal_6607 = -1082130432;
	var uLocal_6608 = 0;
	var uLocal_6609 = -1082130432;
	var uLocal_6610 = 0;
	var uLocal_6611 = -1082130432;
	var uLocal_6612 = 0;
	var uLocal_6613 = -1082130432;
	var uLocal_6614 = 0;
	var uLocal_6615 = -1082130432;
	var uLocal_6616 = 0;
	var uLocal_6617 = -1082130432;
	var uLocal_6618 = 0;
	var uLocal_6619 = -1082130432;
	var uLocal_6620 = 0;
	var uLocal_6621 = -1082130432;
	var uLocal_6622 = 0;
	var uLocal_6623 = -1082130432;
	var uLocal_6624 = 0;
	var uLocal_6625 = -1082130432;
	var uLocal_6626 = 0;
	var uLocal_6627 = -1082130432;
	var uLocal_6628 = 0;
	var uLocal_6629 = -1082130432;
	var uLocal_6630 = 0;
	var uLocal_6631 = -1082130432;
	var uLocal_6632 = 0;
	var uLocal_6633 = -1082130432;
	var uLocal_6634 = 0;
	var uLocal_6635 = -1082130432;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = -1082130432;
	var uLocal_6653 = -1082130432;
	var uLocal_6654 = 1;
	var uLocal_6655 = 1;
	var uLocal_6656 = 1;
	var uLocal_6657 = -1;
	var uLocal_6658 = -1;
	var uLocal_6659 = -1;
	char* sLocal_6660 = NULL;
	int iLocal_6661 = 0;
	int iLocal_6662 = 0;
	bool bLocal_6663 = 0;
	int iLocal_6664 = 0;
	int iLocal_6665 = 0;
	int iLocal_6666 = 0;
	int iLocal_6667 = 0;
	int iLocal_6668 = 0;
	int iLocal_6669 = 0;
	int iLocal_6670 = 0;
	int iLocal_6671 = 0;
	int iLocal_6672 = 0;
	int iLocal_6673 = 0;
	int iLocal_6674 = 0;
	int iLocal_6675 = 0;
	int iLocal_6676 = 0;
	int iLocal_6677 = 0;
	int iLocal_6678 = 0;
	int iLocal_6679 = 0;
	int iLocal_6680 = 0;
	int iLocal_6681 = 0;
	int iLocal_6682 = 0;
	int iLocal_6683 = 0;
	int iLocal_6684 = 0;
	int iLocal_6685 = 0;
	int iLocal_6686 = 0;
	int iLocal_6687 = 0;
	int iLocal_6688 = 0;
	int iLocal_6689 = 0;
	int iLocal_6690 = 0;
	int iLocal_6691 = 0;
	float fLocal_6692 = 0f;
	float fLocal_6693 = 0f;
	int iLocal_6694 = 0;
	float fLocal_6695 = 0f;
	float fLocal_6696 = 0f;
	float fLocal_6697 = 0f;
	float fLocal_6698 = 0f;
	float fLocal_6699 = 0f;
	float fLocal_6700 = 0f;
	int iLocal_6701 = 0;
	float fLocal_6702 = 0f;
	int iLocal_6703 = 0;
	int iLocal_6704 = 0;
	int iLocal_6705 = 0;
	float fLocal_6706 = 0f;
	float fLocal_6707 = 0f;
	int iLocal_6708 = 0;
	int iLocal_6709 = 0;
	struct<3> Local_6710 = { 0, 0, 0 } ;
	struct<3> Local_6713 = { 0, 0, 0 } ;
	float fLocal_6716 = 0f;
	float fLocal_6717 = 0f;
	int iLocal_6718 = 0;
	int iLocal_6719 = 0;
	int iLocal_6720 = 0;
	int iLocal_6721 = 0;
	bool bLocal_6722 = 0;
	int iLocal_6723 = 0;
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
	iLocal_39 = 3;
	fLocal_42 = 80f;
	fLocal_43 = 140f;
	fLocal_44 = 180f;
	iLocal_50 = 1;
	iLocal_51 = 65;
	iLocal_52 = 49;
	iLocal_53 = 64;
	Local_68 = { 0f, 0f, 0f };
	Local_71 = { 0f, 0f, 0f };
	iLocal_74 = -1;
	fLocal_76 = 1f;
	iLocal_80 = 1;
	iLocal_87 = 1;
	iLocal_109 = 1;
	fLocal_1275 = 120f;
	fLocal_1276 = 0f;
	fLocal_1278 = 1f;
	fLocal_1279 = 0f;
	fLocal_1280 = 1f;
	fLocal_1281 = 30f;
	fLocal_1283 = 1f;
	fLocal_1284 = 5f;
	fLocal_1285 = 1f;
	fLocal_1286 = 1f;
	fLocal_1287 = 100f;
	fLocal_1288 = 100f;
	fLocal_1289 = 0f;
	fLocal_1290 = 7000f;
	fLocal_1291 = 0f;
	fLocal_1292 = 0f;
	fLocal_1293 = 0.3f;
	fLocal_1294 = 0.5f;
	fLocal_1295 = 50f;
	iLocal_1951 = -1;
	iLocal_1959 = -1;
	iLocal_1960 = -1;
	bLocal_3480 = true;
	Local_3822 = { -893f, -446.2f, 173.1f };
	Local_3825 = { -411.5472f, 1175.308f, 324.5601f };
	Local_3828 = { -390.1234f, 1226.199f, 324.6426f };
	Local_3831 = { 1.6631f, -3.2729f, 0.7426f };
	Local_3834 = { -15f, -30f, -20f };
	Local_3837 = { 2813.867f, 4679.448f, 44.9295f };
	Local_3843 = { -526.6754f, 1145.181f, 307.5816f };
	Local_3846 = { -276.3485f, 1305.733f, 336.9266f };
	Local_3849 = { 253.4966f, 2206.179f, 34.6447f };
	Local_3852 = { 709.994f, 2627.179f, 129.6453f };
	Local_3861 = { 0f, 0f, 0f };
	fLocal_3873 = 255.9889f;
	sLocal_6660 = "shake_cam_all@";
	iLocal_6685 = 250;
	iLocal_6686 = 1000;
	iLocal_6687 = 1500;
	iLocal_6688 = 2000;
	iLocal_6689 = 3000;
	iLocal_6690 = 2500;
	iLocal_6691 = 5000;
	fLocal_6692 = 9000f;
	fLocal_6693 = 0.7f;
	iLocal_6694 = 3;
	fLocal_6695 = 25700f;
	fLocal_6696 = 0.6f;
	fLocal_6697 = 30000f;
	fLocal_6698 = 0.6f;
	fLocal_6699 = 16500f;
	fLocal_6700 = 0.4f;
	fLocal_6702 = 2800f;
	iLocal_6703 = 1750;
	iLocal_6704 = 2000;
	iLocal_6705 = -1;
	fLocal_6706 = 0.243f;
	fLocal_6707 = 0.756f;
	Local_6710 = { 0f, 1.5f, 0f };
	Local_6713 = { -90f, 0f, 0f };
	fLocal_6716 = 4f;
	fLocal_6717 = 0.243f;
	MISC::SET_MISSION_FLAG(1);
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		GlobalFunc_7934(2, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	GlobalFunc_52(0, 1);
	GlobalFunc_601(20, 1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	VEHICLE::SET_RANDOM_TRAINS(0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SOL1_FAIL");
		GlobalFunc_10632();
		func_850();
	}
	while (bLocal_3480)
	{
		RECORDING::_0x208784099002BC30("M_CAIDALIBRE", 0);
		switch (iLocal_3182)
		{
			case 0:
				if (GlobalFunc_Is_Mission_Retry())
				{
					func_848();
					iLocal_3749 = 0;
					if (Global_84544 == 1)
					{
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
						{
							GlobalFunc_4972(-363.519f, 1142.171f, 323.0888f, 11.2577f, 1, 0);
							iLocal_3182 = 2;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 1)
						{
							GlobalFunc_4972(Local_3828, 328.7128f, 1, 0);
							iLocal_3182 = 4;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 2)
						{
							GlobalFunc_4972(2776.957f, 4740.372f, 44.9082f, 341.7251f, 1, 0);
							iLocal_3182 = 5;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 3)
						{
							GlobalFunc_4972(-370.9615f, 1151.7f, 324.3864f, 225.6383f, 1, 0);
							iLocal_3182 = 7;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 4)
						{
							GlobalFunc_4972(1204.7f, 1859f, 78.2f, 214.528f, 1, 0);
							iLocal_3182 = 8;
						}
					}
					else
					{
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
						{
							GlobalFunc_4972(1386.809f, 1142.364f, 113.334f, 82.7671f, 1, 0);
							iLocal_3182 = 1;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 1)
						{
							iLocal_3802 = 1;
							GlobalFunc_4972(-363.519f, 1142.171f, 323.0888f, 11.2577f, 1, 0);
							iLocal_3182 = 2;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 2)
						{
							GlobalFunc_4972(Local_3828, 328.7128f, 1, 0);
							iLocal_3182 = 4;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 3)
						{
							GlobalFunc_4972(2776.957f, 4740.372f, 44.9082f, 341.7251f, 1, 0);
							iLocal_3182 = 5;
						}
						if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 4)
						{
							GlobalFunc_4972(-370.9615f, 1151.7f, 324.3864f, 225.6383f, 1, 0);
							iLocal_3182 = 7;
						}
					}
					func_815();
					iLocal_3481 = 0;
				}
				else
				{
					if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						if (GlobalFunc_8315() == 0 || GlobalFunc_8315() == 1)
						{
							CUTSCENE::REQUEST_CUTSCENE("MARTIN_1_INT", 8);
						}
						if (GlobalFunc_8315() == 2)
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MARTIN_1_INT", 131068, 8);
						}
						if (GlobalFunc_8315() == 2)
						{
							while (!func_813(&(uLocal_3259[0]), 0, 1390.707f, 1142.659f, 113.4431f, 170.5477f, 1, 0, 0))
							{
								SYSTEM::WAIT(0);
							}
						}
						while (!GlobalFunc_9748(&iLocal_3940, 0, 1371.368f, 1132.974f, 112.8401f, 20.5505f, 1, 1))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (iLocal_3682 == 0)
					{
						iLocal_3892 = 0;
						iLocal_3671 = 1;
						iLocal_3747 = 0;
						iLocal_3749 = 0;
						iLocal_3773 = 0;
						iLocal_3774 = 0;
						iLocal_3804 = 0;
						iLocal_3815 = 0;
						HUD::REQUEST_ADDITIONAL_TEXT("BFINJEC", 0);
						while (iLocal_3671)
						{
							switch (iLocal_3892)
							{
								case 0:
									if (GlobalFunc_8315() == 0)
									{
										if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
										{
											STREAMING::REQUEST_MODEL(GlobalFunc_4931(2, 0));
											GlobalFunc_11116(2, "Trevor", 2);
											GlobalFunc_11086("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
										}
									}
									if (GlobalFunc_8315() == 2)
									{
										if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
											{
												if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
												{
													GlobalFunc_11086("Michael", Global_86864.f_9[0], joaat("player_zero"), 2);
												}
											}
											GlobalFunc_11086("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"), 2);
										}
									}
									if (GlobalFunc_Has_Cutscene_Loaded())
									{
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
											{
												PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
											}
										}
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
										GlobalFunc_8380(1, 1, 1, 0);
										if (GlobalFunc_8315() == 0)
										{
											bLocal_3761 = true;
											if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											{
												CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
											}
											GlobalFunc_9748(&iLocal_6723, 2, 1431.214f, 1055.911f, 113.2366f, 356.6531f, 1, 0);
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("player_two"), 0);
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6723, "trevors_car", 1, joaat("bodhi2"), 0);
											if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
												{
													ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
													iLocal_3940 = Global_86864[0];
												}
											}
										}
										if (GlobalFunc_8315() == 2)
										{
											bLocal_3761 = false;
											if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											{
												CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
												uLocal_3259[0] = Global_86864.f_9[0];
												PED::SET_PED_CAN_BE_TARGETTED(uLocal_3259[0], 0);
											}
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3259[0], "Michael", 0, joaat("player_zero"), 0);
											if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
												iLocal_3940 = Global_86864[1];
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3940, 1);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
												{
													ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
													iLocal_3956 = Global_86864[0];
													VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3956, 3);
												}
											}
										}
										if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
										{
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
											iLocal_3957 = Global_86864[2];
										}
										GlobalFunc_562(45);
										uLocal_4035 = PED::ADD_SCENARIO_BLOCKING_AREA(1333f, 1095f, 137f, 1438.9f, 1197f, 109f, 0, 1, 1, 1);
										if (bLocal_3761)
										{
											CUTSCENE::START_CUTSCENE(0);
										}
										else
										{
											CUTSCENE::START_CUTSCENE(256);
										}
										RECORDING::_0x48621C9FCA3EBD28(4);
										SYSTEM::SETTIMERA(0);
										if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
										{
											if (!CAM::IS_SCREEN_FADED_IN())
											{
												CAM::DO_SCREEN_FADE_IN(250);
											}
										}
										iLocal_3817 = 0;
										iLocal_3908 = 0;
										iLocal_3892++;
									}
									break;
								
								case 1:
									if (CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										if (CUTSCENE::GET_CUTSCENE_TIME() > 130000)
										{
											PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
										}
										if (!iLocal_3817)
										{
											MISC::CLEAR_AREA_OF_PROJECTILES(1371.197f, 1146.639f, 112.7587f, 100f, 0);
											MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
											if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96384, 1, 1);
												func_785(Global_96384, 1);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96385, 1, 1);
												func_784(Global_96385, 1);
											}
											iLocal_3817 = 1;
										}
									}
									if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										if (!CAM::IS_SCREEN_FADED_IN())
										{
											CAM::DO_SCREEN_FADE_IN(250);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
									{
										if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3940, 0))
										{
											VEHICLE::DELETE_VEHICLE(&iLocal_3940);
										}
									}
									if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
									{
										if (bLocal_3761 == 1)
										{
											if (CUTSCENE::IS_CUTSCENE_PLAYING())
											{
												if (iLocal_3804 == 0)
												{
													if (CLOCK::GET_CLOCK_HOURS() > 21 || CLOCK::GET_CLOCK_HOURS() < 6)
													{
														if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevors_car", 0)))
														{
															if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevors_car", 0)))
															{
																VEHICLE::SET_VEHICLE_LIGHTS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevors_car", 0)), 3);
																iLocal_3804 = 1;
															}
														}
													}
												}
												if (CUTSCENE::GET_CUTSCENE_SECTION_PLAYING() > 1)
												{
													if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
													{
														if (GlobalFunc_9748(&iLocal_3956, 2, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 1))
														{
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3956, 3);
														}
													}
												}
												if (iLocal_3747 == 0)
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3940, 0))
														{
															if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3940)))
															{
																ENTITY::SET_ENTITY_COORDS(iLocal_3940, 1360.577f, 1181.465f, 111.4876f, 1, 0, 0, 1);
																ENTITY::SET_ENTITY_HEADING(iLocal_3940, 180.5927f);
																VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3940);
																iLocal_3747 = 1;
															}
															if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3940)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3940))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3940))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3940)))
															{
																ENTITY::SET_ENTITY_COORDS(iLocal_3940, 1372.07f, 1131.598f, 112.8844f, 1, 0, 0, 1);
																ENTITY::SET_ENTITY_HEADING(iLocal_3940, 19.2193f);
																VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3940);
																GlobalFunc_9807(1368.9f, 1126.3f, 116.6f, 1374.7f, 1136.7f, 111.9f, 6f, 1372.07f, 1131.598f, 112.8844f, 19.2193f, 1, 1, 1, 0, 0);
																iLocal_3747 = 1;
															}
															if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3940)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3940))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3940))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3940))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3940)))
															{
																VEHICLE::DELETE_VEHICLE(&iLocal_3940);
																iLocal_3747 = 1;
															}
														}
													}
												}
											}
											if (iLocal_3774 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
												{
													PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
													PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
													PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
													iLocal_3774 = 1;
												}
											}
											if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
											{
												iLocal_3930 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", joaat("player_two")));
												if (PED::IS_PED_WEARING_HELMET(iLocal_3930))
												{
													PED::REMOVE_PED_HELMET(iLocal_3930, 1);
												}
											}
											if (iLocal_3773 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
														{
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
															{
																if (!PED::IS_PED_INJURED(iLocal_3930))
																{
																	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3930, 1);
																	TASK::OPEN_SEQUENCE_TASK(&uLocal_4037);
																	TASK::TASK_ENTER_VEHICLE(0, iLocal_3956, 20000, -1, 1f, 1, 0);
																	if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																	{
																		TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, 0, 1360.32f, 1166.077f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																		TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																	}
																	if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																	{
																		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
																	}
																	TASK::CLOSE_SEQUENCE_TASK(uLocal_4037);
																	TASK::TASK_PERFORM_SEQUENCE(iLocal_3930, uLocal_4037);
																	TASK::CLEAR_SEQUENCE_TASK(&uLocal_4037);
																	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3930, 0, 0);
																	PED::FORCE_PED_MOTION_STATE(iLocal_3930, -668482597, 0, 0, 0);
																	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3956, 0);
																	iLocal_3773 = 1;
																}
															}
														}
													}
												}
											}
										}
										if (bLocal_3761 == 0)
										{
											if (iLocal_3747 == 0)
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
													{
														if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
														{
															ENTITY::SET_ENTITY_COORDS(iLocal_3956, 1360.577f, 1181.465f, 111.4876f, 1, 0, 0, 1);
															ENTITY::SET_ENTITY_HEADING(iLocal_3956, 180.5927f);
															VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3956);
															iLocal_3747 = 1;
														}
														if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3956)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3956))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3956))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
														{
															ENTITY::SET_ENTITY_COORDS(iLocal_3956, 1371.197f, 1146.639f, 112.7587f, 1, 0, 0, 1);
															ENTITY::SET_ENTITY_HEADING(iLocal_3956, 177.6714f);
															VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3956);
															GlobalFunc_9807(1368.5f, 1141f, 116.8f, 1374.2f, 1152.5f, 112.6f, 6f, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 1, 1, 0, 0);
															iLocal_3747 = 1;
														}
														if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3956))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3956))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3956))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
														{
															VEHICLE::DELETE_VEHICLE(&iLocal_3956);
														}
													}
												}
												if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
												{
													if (GlobalFunc_9748(&iLocal_3956, 2, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 0))
													{
														VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3956, 3);
														iLocal_3747 = 1;
													}
												}
											}
											if (iLocal_3774 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
												{
													if (GlobalFunc_8315() != 0)
													{
														if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("player_zero"))))
														{
															PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("player_zero"))), 0, 0);
															PED::FORCE_PED_MOTION_STATE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("player_zero"))), -668482597, 0, 0, 0);
														}
														GlobalFunc_9134(&uLocal_3259, 0);
														func_746(&uLocal_3259, 1, 1, 1);
													}
													iLocal_3774 = 1;
												}
											}
											if (iLocal_3773 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
												{
													if (GlobalFunc_8315() == 0)
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
															{
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3259[2], 1);
																TASK::OPEN_SEQUENCE_TASK(&uLocal_4037);
																TASK::TASK_ENTER_VEHICLE(0, iLocal_3956, -1, -1, 1f, 1, 0);
																if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																{
																	TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, 0, 1360.32f, 1166.077f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																	TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																}
																if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																{
																	TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
																}
																TASK::CLOSE_SEQUENCE_TASK(uLocal_4037);
																TASK::TASK_PERFORM_SEQUENCE(uLocal_3259[2], uLocal_4037);
																TASK::CLEAR_SEQUENCE_TASK(&uLocal_4037);
																PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3259[2], 0, 0);
																PED::FORCE_PED_MOTION_STATE(uLocal_3259[2], -668482597, 0, 0, 0);
																iLocal_3773 = 1;
															}
														}
													}
													else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
														{
															TASK::OPEN_SEQUENCE_TASK(&uLocal_4037);
															TASK::TASK_ENTER_VEHICLE(0, iLocal_3956, -1, -1, 1f, 1, 0);
															if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
															{
																TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, 0, 1360.32f, 1166.077f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
															}
															if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
															{
																TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
															}
															TASK::CLOSE_SEQUENCE_TASK(uLocal_4037);
															TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4037);
															TASK::CLEAR_SEQUENCE_TASK(&uLocal_4037);
															PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
															PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
															iLocal_3773 = 1;
														}
													}
												}
											}
										}
										if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
										{
											RECORDING::_0x81CBAE94390F9F89();
											RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[0]))
											{
												if (!PED::IS_PED_INJURED(uLocal_3259[0]))
												{
													CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_3259[0]);
												}
											}
										}
										if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
										{
											GlobalFunc_8380(0, 1, 1, 0);
											iLocal_3892++;
										}
									}
									else
									{
										iLocal_3815 = 1;
									}
									while (iLocal_3815 == 1)
									{
										switch (iLocal_3908)
										{
											case 0:
												if (!CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_OUT())
												{
													CAM::DO_SCREEN_FADE_OUT(800);
												}
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
												{
													if (CAM::IS_SCREEN_FADED_OUT())
													{
														iLocal_3908++;
													}
												}
												break;
											
											case 1:
												if (CAM::IS_SCREEN_FADING_IN())
												{
													CAM::DO_SCREEN_FADE_OUT(0);
												}
												if (GlobalFunc_8315() != 0)
												{
													GlobalFunc_9134(&uLocal_3259, 0);
													func_746(&uLocal_3259, 1, 0, 0);
												}
												if (GlobalFunc_8315() == 0)
												{
													TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
													iLocal_3908++;
												}
												break;
											
											case 2:
												if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
												{
													GlobalFunc_7046(2, 1);
													while (!GlobalFunc_7045(2, 1))
													{
														SYSTEM::WAIT(0);
													}
													GlobalFunc_9748(&iLocal_3956, 2, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 1);
													VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3956);
													VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3956, 3);
												}
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
												{
													if (!PED::IS_PED_INJURED(uLocal_3259[2]))
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
															{
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3259[2], 1);
																TASK::OPEN_SEQUENCE_TASK(&uLocal_4037);
																TASK::TASK_ENTER_VEHICLE(0, iLocal_3956, -1, -1, 1f, 1, 0);
																if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																{
																	TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, 0, 1360.32f, 1166.077f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																	TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																}
																if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																{
																	TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
																}
																TASK::CLOSE_SEQUENCE_TASK(uLocal_4037);
																TASK::TASK_PERFORM_SEQUENCE(uLocal_3259[2], uLocal_4037);
																TASK::CLEAR_SEQUENCE_TASK(&uLocal_4037);
																PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3259[2], 0, 0);
																PED::FORCE_PED_MOTION_STATE(uLocal_3259[2], -668482597, 0, 0, 0);
																iLocal_3773 = 1;
															}
														}
													}
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
												{
													if (!PED::IS_PED_INJURED(iLocal_3930))
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
															{
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3930, 1);
																TASK::OPEN_SEQUENCE_TASK(&uLocal_4037);
																TASK::TASK_ENTER_VEHICLE(0, iLocal_3956, -1, -1, 1f, 1, 0);
																if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																{
																	TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, 0, 1360.32f, 1166.077f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																	TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																}
																if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
																{
																	TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
																}
																TASK::CLOSE_SEQUENCE_TASK(uLocal_4037);
																TASK::TASK_PERFORM_SEQUENCE(iLocal_3930, uLocal_4037);
																TASK::CLEAR_SEQUENCE_TASK(&uLocal_4037);
																PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3930, 0, 0);
																PED::FORCE_PED_MOTION_STATE(iLocal_3930, -668482597, 0, 0, 0);
																iLocal_3773 = 1;
															}
														}
													}
												}
												PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
												PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
												CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
												SYSTEM::SETTIMERA(0);
												iLocal_3908++;
												break;
											
											case 3:
												if (SYSTEM::TIMERA() > 1000)
												{
													if (!CAM::IS_SCREEN_FADED_IN())
													{
														CAM::DO_SCREEN_FADE_IN(800);
													}
													GlobalFunc_8380(0, 1, 1, 0);
													iLocal_3892++;
													iLocal_3908++;
													iLocal_3815 = 0;
												}
												break;
										}
										SYSTEM::WAIT(0);
									}
									break;
								
								case 2:
									HUD::CLEAR_PRINTS();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3940, 0))
										{
											VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_3940, 0);
											ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3940);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
										{
											VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3956, 0);
										}
									}
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
									{
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
										{
											if (!PED::IS_PED_INJURED(uLocal_3259[2]))
											{
												iLocal_3930 = uLocal_3259[2];
											}
										}
									}
									CUTSCENE::REMOVE_CUTSCENE();
									iLocal_3671 = 0;
									iLocal_3682 = 1;
									iLocal_3892++;
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
					if (func_743())
					{
						iLocal_3182 = 1;
					}
				}
				break;
			
			case 1:
				if (func_712())
				{
					iLocal_3182 = 2;
				}
				break;
			
			case 2:
				if (func_702())
				{
					iLocal_3182 = 3;
				}
				break;
			
			case 3:
				if (func_657())
				{
					iLocal_3182 = 4;
				}
				break;
			
			case 4:
				if (func_635())
				{
					iLocal_3182 = 5;
				}
				break;
			
			case 5:
				if (func_632())
				{
					iLocal_3182 = 6;
				}
				break;
			
			case 6:
				func_631();
				if (func_627())
				{
					iLocal_3182 = 7;
				}
				break;
			
			case 7:
				func_631();
				if (func_548())
				{
					iLocal_3182 = 8;
				}
				break;
			
			case 8:
				if (func_533())
				{
					iLocal_3182 = 9;
				}
				break;
			
			case 9:
				func_31();
				break;
		}
		if (iLocal_3749 == 1)
		{
			func_10();
		}
		if ((iLocal_3182 == 1 || iLocal_3182 == 2) || iLocal_3182 == 3)
		{
			if (iLocal_3688 == 1)
			{
				func_2(&Local_3217);
				if (iLocal_3819 == 0)
				{
					if (CAM::DOES_CAM_EXIST(Local_3217.f_39))
					{
						CAM::SET_CAM_NEAR_CLIP(Local_3217.f_39, 1f);
						iLocal_3819 = 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_3955 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3955))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3955, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3955, 0))
					{
						GlobalFunc_504(iLocal_3955, -1);
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_850();
}


void func_2(bool bParam0)//Position - 0x1788
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	int iVar14;
	int iVar15;
	float fVar16;
	bool bVar17;
	float fVar18;
	float fVar19;
	struct<3> Var20;
	
	if (ENTITY::DOES_ENTITY_EXIST(bParam0->f_40))
	{
		if (!*bParam0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
			{
				func_9(bParam0, 1);
			}
		}
		else
		{
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				GlobalFunc_612(&iVar0, &iVar1, &iVar2, &iVar3, 0);
			}
			else
			{
				iVar0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
				iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
				iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 1) * 127f));
				iVar3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 2) * 127f));
			}
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 39) * 127f));
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				func_7(&iVar0);
				func_7(&iVar1);
				func_7(&iVar2);
				func_7(&iVar3);
			}
			fVar4 = ((bParam0->f_15 - 45f) / (1f - 45f));
			iVar5 = iVar3;
			iVar6 = iVar2;
			iVar7 = iVar1;
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				if (MISC::IS_SNIPER_INVERTED())
				{
					iVar5 = iVar1;
					iVar6 = iVar0;
					iVar7 = iVar3;
				}
				if (PAD::IS_LOOK_INVERTED())
				{
					iVar5 = -iVar5;
				}
			}
			fVar8 = (-(IntToFloat(iVar5) / 128f) * bParam0->f_22);
			fVar9 = (-(IntToFloat(iVar6) / 128f) * bParam0->f_22);
			if (bParam0->f_15 <= bParam0->f_23)
			{
				fVar10 = ((bParam0->f_15 - 1f) / (bParam0->f_23 - 1f));
				if (fVar10 < 0.05f)
				{
					fVar10 = 0.05f;
				}
				fVar8 = (fVar8 * fVar10);
				fVar9 = (fVar9 * fVar10);
			}
			Var11 = { ENTITY::GET_ENTITY_ROTATION(bParam0->f_40, 2) };
			iVar14 = 1;
			if (MISC::ABSI(iVar6) > 0)
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					Var11 = { Var11 + Vector(fVar9, 0f, 0f) * FtoV(SYSTEM::TIMESTEP()) };
				}
				else
				{
					Var11 = { Var11 + Vector(fVar9, 0f, 0f) * Vector(0.5f, 0.5f, 0.5f) };
				}
				if (bParam0->f_7)
				{
					if (Var11.f_2 <= bParam0->f_24)
					{
						Var11.f_2 = bParam0->f_24;
						iVar14 = 0;
					}
					if (Var11.f_2 >= bParam0->f_25)
					{
						Var11.f_2 = bParam0->f_25;
						iVar14 = 0;
					}
				}
			}
			else
			{
				iVar14 = 0;
			}
			iVar15 = 1;
			if (MISC::ABSI(iVar5) > 0)
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					Var11 = { Var11 + Vector(0f, 0f, fVar8) * FtoV(SYSTEM::TIMESTEP()) };
				}
				else
				{
					Var11 = { Var11 + Vector(0f, 0f, fVar8) * Vector(0.5f, 0.5f, 0.5f) };
				}
				if (Var11.x <= bParam0->f_26)
				{
					Var11.x = bParam0->f_26;
					iVar15 = 0;
				}
				if (Var11.x >= bParam0->f_27)
				{
					Var11.x = bParam0->f_27;
					iVar15 = 0;
				}
			}
			else
			{
				iVar15 = 0;
			}
			ENTITY::SET_ENTITY_ROTATION(bParam0->f_40, Var11, 2, 1);
			if (iVar15 || iVar14)
			{
				if (AUDIO::HAS_SOUND_FINISHED(bParam0->f_14))
				{
					AUDIO::PLAY_SOUND_FRONTEND(bParam0->f_14, "Remote_Sniper_Rifle_Move", 0, 1);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "movement_speed", (SYSTEM::TO_FLOAT((MISC::ABSI(iVar6) + MISC::ABSI(iVar5))) / 256f));
				if (iVar5 < 0)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "y_direction", 1f);
				}
				else if (iVar5 > 0)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "y_direction", 0f);
				}
				else
				{
					AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "y_direction", 0.5f);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(bParam0->f_14))
			{
				AUDIO::STOP_SOUND(bParam0->f_14);
			}
			fVar16 = ((IntToFloat(iVar7) / 128f) * (20f / (1f + (fVar4 * 2f))));
			bVar17 = true;
			if (MISC::ABSI(iVar7) > 0)
			{
				bParam0->f_15 = (bParam0->f_15 + (fVar16 * SYSTEM::TIMESTEP()));
				if (bParam0->f_15 <= bParam0->f_28)
				{
					bParam0->f_15 = bParam0->f_28;
					bVar17 = false;
				}
				if (bParam0->f_15 >= 45f)
				{
					bParam0->f_15 = 45f;
					bVar17 = false;
				}
			}
			else
			{
				bVar17 = false;
			}
			if (bVar17)
			{
				if (AUDIO::HAS_SOUND_FINISHED(bParam0->f_13))
				{
					AUDIO::PLAY_SOUND_FRONTEND(bParam0->f_13, "Remote_Sniper_Rifle_Zoom", 0, 1);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_13, "zoom_speed", (SYSTEM::TO_FLOAT(MISC::ABSI(iVar7)) / 128f));
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(bParam0->f_13))
			{
				AUDIO::STOP_SOUND(bParam0->f_13);
			}
			fVar18 = Var11.f_2;
			if (fVar18 < 0f)
			{
				fVar18 = (fVar18 + 360f);
			}
			fVar19 = MISC::ABSF((bParam0->f_20 - fVar18));
			if (fVar19 > 180f)
			{
				fVar19 = (360f - fVar19);
			}
			if (bParam0->f_17 == bParam0->f_18)
			{
				bParam0->f_18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.01f, 0.01f);
				bParam0->f_19 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.002f, 0.008f);
			}
			else
			{
				func_6(&(bParam0->f_17), bParam0->f_18, bParam0->f_19);
			}
			bParam0->f_16 = bParam0->f_15;
			CAM::SET_CAM_ROT(bParam0->f_39, Var11, 2);
			CAM::SET_CAM_FOV(bParam0->f_39, bParam0->f_16);
			func_4(bParam0);
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 24))
			{
				bParam0->f_5 = 1;
				bParam0->f_12 = MISC::GET_GAME_TIMER() + 350;
			}
			else if (bParam0->f_5)
			{
				if (MISC::GET_GAME_TIMER() >= bParam0->f_12)
				{
					bParam0->f_5 = 0;
				}
			}
			if (bParam0->f_5)
			{
				if (MISC::GET_GAME_TIMER() >= bParam0->f_11)
				{
					bParam0->f_32 = { Var11 };
					bParam0->f_29 = { GlobalFunc_590(Var11) };
					bParam0->f_10 = 0;
					bParam0->f_11 = MISC::GET_GAME_TIMER() + 350;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Remote_Sniper_Rifle_Fire", bParam0->f_40, 0, 0, 0);
					bParam0->f_6 = 1;
				}
			}
			if (bParam0->f_6)
			{
				if (MISC::GET_GAME_TIMER() >= bParam0->f_10)
				{
					Var20 = { CAM::GET_CAM_COORD(bParam0->f_39) };
					bParam0->f_10 = 0;
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var20, Var20 + bParam0->f_29 * Vector(bParam0->f_21, bParam0->f_21, bParam0->f_21), bParam0->f_9, 1, bParam0->f_38, PLAYER::PLAYER_PED_ID(), 0, 1, -1082130432);
					bParam0->f_6 = 0;
				}
			}
			bParam0->f_35 = { 0f, 0f, 0f };
			bParam0->f_1 = WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &(bParam0->f_35));
			if (bParam0->f_3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
				{
					func_9(bParam0, 0);
				}
			}
		}
	}
}


void func_4(bool bParam0)//Position - 0x1D1E
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	if (!bParam0->f_8)
	{
		GRAPHICS::ANIMPOSTFX_PLAY("SniperOverlay", 0, 1);
		bParam0->f_8 = 1;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	HUD::SET_WIDESCREEN_FORMAT(0);
	fVar0 = (1f + (((bParam0->f_15 - 45f) / (1f - 45f)) * 9f));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(bParam0->f_41, "SET_ZOOM_LEVEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var1 = { ENTITY::GET_ENTITY_ROTATION(bParam0->f_40, 2) };
	fVar4 = func_5(Var1.f_2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(bParam0->f_41, "SET_COMPASS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var5 = { MISC::GET_WIND_DIRECTION() };
	fVar8 = MISC::ATAN2(Var5.x, Var5.f_1);
	fVar8 = func_5(fVar8);
	fVar8 = (fVar8 - 360f);
	if (fVar8 < 0f)
	{
		fVar8 = (fVar8 * -1f);
	}
	fVar9 = (fVar8 - fVar4);
	if (fVar9 < -180f)
	{
		fVar9 = (fVar9 + 360f);
	}
	else if (fVar9 > 180f)
	{
		fVar9 = (fVar9 - 360f);
	}
	if (fVar9 > 0f)
	{
		fVar10 = 0f;
	}
	else
	{
		fVar10 = 1f;
	}
	fVar11 = fVar9;
	if (fVar11 > 90f)
	{
		fVar11 = (fVar11 - 180f);
	}
	else if (fVar11 < -90f)
	{
		fVar11 = (fVar11 + 180f);
	}
	if (fVar11 < 0f)
	{
		fVar11 = (fVar11 * -1f);
	}
	fVar11 = (fVar11 / 90f);
	fVar12 = MISC::GET_WIND_SPEED();
	fVar12 = ((fVar12 * 20f) * fVar11);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(bParam0->f_41, "SET_WIND");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar12);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::DRAW_SCALEFORM_MOVIE(bParam0->f_41, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
}

float func_5(var uParam0)//Position - 0x1EBF
{
	float fVar0;
	
	fVar0 = uParam0;
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_6(var uParam0, float fParam1, float fParam2)//Position - 0x1EF6
{
	float fVar0;
	
	if (*uParam0 != fParam1)
	{
		fVar0 = ((fParam2 * 30f) * MISC::GET_FRAME_TIME());
		if ((*uParam0 - fParam1) > fVar0)
		{
			*uParam0 = (*uParam0 - fVar0);
		}
		else if ((*uParam0 - fParam1) < -fVar0)
		{
			*uParam0 = (*uParam0 + fVar0);
		}
		else
		{
			*uParam0 = fParam1;
		}
	}
}

void func_7(int iParam0)//Position - 0x1F4C
{
	if (*iParam0 > 0 && *iParam0 < 10)
	{
		*iParam0 = 0;
	}
	if (*iParam0 < 0 && *iParam0 > -10)
	{
		*iParam0 = 0;
	}
}


void func_9(bool bParam0, bool bParam1)//Position - 0x2058
{
	HUD::DISPLAY_RADAR(!bParam1);
	HUD::DISPLAY_HUD(!bParam1);
	CAM::SET_WIDESCREEN_BORDERS(bParam1, 0);
	CAM::RENDER_SCRIPT_CAMS(bParam1, 0, 3000, 1, 0, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	HUD::CLEAR_HELP(1);
	*bParam0 = bParam1;
	bParam0->f_6 = 0;
	bParam0->f_5 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER("RemoteSniper");
		GRAPHICS::SET_SEETHROUGH(0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		bParam0->f_13 = AUDIO::GET_SOUND_ID();
		bParam0->f_14 = AUDIO::GET_SOUND_ID();
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MARTIN_1_SNIPER", 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		GRAPHICS::SET_SEETHROUGH(0);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		if (bParam0->f_8 == 1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("SniperOverlay");
			bParam0->f_8 = 0;
		}
		if (bParam0->f_13 != 0)
		{
			AUDIO::STOP_SOUND(bParam0->f_13);
			AUDIO::RELEASE_SOUND_ID(bParam0->f_13);
			bParam0->f_13 = 0;
		}
		if (bParam0->f_14 != 0)
		{
			AUDIO::STOP_SOUND(bParam0->f_14);
			AUDIO::RELEASE_SOUND_ID(bParam0->f_14);
			bParam0->f_14 = 0;
		}
	}
}

void func_10()//Position - 0x2156
{
	switch (iLocal_3182)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
			{
				if (PED::IS_PED_INJURED(iLocal_3930))
				{
					func_16("M1_FAIL3");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 1))
				{
					func_16("M1_FAIL5");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_3952))
				{
					func_16("M1_FAIL1");
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3952, 0);
					func_16("M1_FAIL1");
				}
			}
			break;
		
		case 2:
			if (iLocal_3738 == 0)
			{
				if (iLocal_3481 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (!bLocal_3505)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938) > 33269f)
									{
										iLocal_3738 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_3738 == 1)
			{
				func_16("2SLOW");
			}
			break;
		
		case 4:
			if (iLocal_3481 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_156(iLocal_3938, PLAYER::PLAYER_PED_ID(), 1) > 750f)
					{
						func_16("BFFLOST");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_3952, 0);
						func_16("M1_FAIL1");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[0]))
				{
					if (PED::IS_PED_INJURED(uLocal_3259[0]))
					{
						func_16("M1_FAIL4");
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3481 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
				{
					if (GlobalFunc_156(iLocal_4027, PLAYER::PLAYER_PED_ID(), 1) > 400f)
					{
						func_16("BFFLOST");
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_3890 > 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3952, 1) > 300f)
							{
								func_16("M1_FAIL2");
							}
						}
					}
				}
			}
			break;
	}
	if (iLocal_3675 == 1)
	{
		if (iLocal_3182 == 2)
		{
		}
		if (GlobalFunc_145())
		{
			func_9(&Local_3217, 0);
			func_12(&Local_3217, 1);
			iLocal_3688 = 0;
			if (GlobalFunc_8315() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
				{
					PED::DELETE_PED(&iLocal_3930);
				}
			}
			func_11();
		}
	}
}

void func_11()//Position - 0x239E
{
	func_850();
}

void func_12(bool bParam0, bool bParam1)//Position - 0x23AA
{
	func_9(bParam0, 0);
	if (bParam0->f_4)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(func_13());
		bParam0->f_4 = 0;
	}
	if (CAM::DOES_CAM_EXIST(bParam0->f_39))
	{
		CAM::DESTROY_CAM(bParam0->f_39, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam0->f_40))
	{
		OBJECT::DELETE_OBJECT(&(bParam0->f_40));
	}
	if (bParam1)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(bParam0->f_41))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(bParam0->f_41));
		}
		bParam0->f_2 = 0;
		bParam0->f_41 = 0;
	}
}

char* func_13()//Position - 0x2416
{
	return "Remote_Gun";
}



void func_16(char* sParam0)//Position - 0x24AB
{
	if (iLocal_3675 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
				{
					if (!PED::IS_PED_INJURED(iLocal_3914))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_3914, iLocal_3938, 0))
						{
							if (ENTITY::IS_ENTITY_IN_AIR(iLocal_3938))
							{
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3938, 0);
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3938);
								}
								TASK::CLEAR_PED_TASKS(iLocal_3914);
								TASK::TASK_PLANE_MISSION(iLocal_3914, iLocal_3938, 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3938, 0f, 0f, 100f), 4, 30f, 1f, ENTITY::GET_ENTITY_HEADING(iLocal_3938), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_3938)), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_3938)));
								PED::SET_PED_KEEP_TASK(iLocal_3914, 1);
							}
						}
					}
				}
			}
		}
		sLocal_3913 = sParam0;
		GlobalFunc_4935();
		GlobalFunc_4956();
		HUD::CLEAR_PRINTS();
		AUDIO::TRIGGER_MUSIC_EVENT("SOL1_FAIL");
		GlobalFunc_10835(sLocal_3913);
		iLocal_3675 = 1;
	}
}















void func_31()//Position - 0x3475
{
	func_532(800);
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		func_47(206, 0);
	}
	GlobalFunc_9804(3, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("SOL1_END");
	GlobalFunc_5103(0, 0);
	func_850();
}
















void func_47(int iParam0, int iParam1)//Position - 0x3875
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
			GlobalFunc_3033(Global_88538[iParam0 /*3*/], -1082130432, 350, 1114636288, 0);
			if (!GlobalFunc_8633(Var0.f_3))
			{
				iVar109 = GlobalFunc_237(Var0.f_3);
				while (!func_498(iVar109, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	iVar110 = 1;
	while (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && iVar110)
	{
		if (!func_48(&Var0, iParam1))
		{
		}
		else
		{
			iVar110 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_48(var uParam0, var uParam1)//Position - 0x397D
{
	return func_49(uParam0, 440320/*func_497*/, 440149/*func_496*/, uParam1);
}

int func_49(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3995
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var121;
	int iVar124;
	struct<3> Var125;
	var uVar128;
	struct<3> Var129;
	struct<3> Var132;
	var uVar135;
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
	if (iVar0 >= (Global_35464 - 1000))
	{
		GlobalFunc_3061(2666);
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
			else if (GlobalFunc_8648() == 36)
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
			if (GlobalFunc_10760(uParam0, &Var125, &uVar128))
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
			if (GlobalFunc_8632(uParam0->f_2, &Var129, &Var132, &uVar135))
			{
				if ((GlobalFunc_2940(uParam0->f_2, &sVar136, &cVar152) || GlobalFunc_2939(uParam0->f_2, &sVar168, &uVar172, &uVar173, &uVar174, &uVar175, &uVar176, &uVar177)) || GlobalFunc_2938(uParam0->f_2, &sVar178))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var129);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var132, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, uVar135);
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
				func_188(PLAYER::PLAYER_PED_ID(), 0);
				func_181(PLAYER::PLAYER_PED_ID());
			}
			GlobalFunc_9262(uParam0->f_3, uParam0->f_2);
			iLocal_75 = 0;
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
		iLocal_75++;
		STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				*uParam0 = 2;
				if (iLocal_75 > 150)
				{
					iLocal_75 = 0;
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
		if (GlobalFunc_10759(uParam0))
		{
			Var196 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] };
			bVar261 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar261 = true;
			}
			if (func_813(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar261))
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
			if (func_161(&(uParam0->f_62), iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &(uParam0->f_8), 0, 0))
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
			if (func_145(&(uParam0->f_62), uParam0->f_62.f_10, iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &cVar277, 2))
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
			func_119(uParam0);
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
							if (func_746(&(uParam0->f_17), bVar263, bVar264, 0))
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
								func_119(uParam0);
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
		GlobalFunc_9271(uParam0->f_3);
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






































































int func_119(var uParam0)//Position - 0x120D4
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
				if (func_144(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_144(uParam0, &fVar1))
				{
					return GlobalFunc_9272(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_144(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_144(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_144(uParam0, &fVar1))
				{
					return GlobalFunc_9272(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_144(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_144(uParam0, &fVar1))
			{
				GlobalFunc_741(20, &uVar3, &iVar2);
				return GlobalFunc_9272(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_144(uParam0, &fVar1))
			{
				GlobalFunc_741(15, &uVar5, &iVar4);
				return GlobalFunc_9272(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
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
		if (func_120(&fVar1, 5f))
		{
			return GlobalFunc_9272(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!GlobalFunc_2929())
	{
	}
	return 0;
}

int func_120(float fParam0, float fParam1)//Position - 0x1230B
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_74 == -1)
	{
		iLocal_74 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_74);
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
























int func_144(var uParam0, float fParam1)//Position - 0x12E9B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	
	Var0 = { Local_68 };
	Var3 = { Local_71 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13))
	{
		Local_68 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 1) };
		Var0 = { Local_68 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12))
	{
		Local_71 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1) };
		Var3 = { Local_71 };
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

int func_145(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char[4] cParam8, int iParam9)//Position - 0x12F44
{
	return GlobalFunc_9274(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, cParam8, iParam9, 0, 0, 0);
	return 1;
}
















int func_161(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, int iParam9)//Position - 0x137E4
{
	return GlobalFunc_9274(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, uParam7, 2, 0, bParam8, iParam9);
	return 1;
}




















void func_181(int iParam0)//Position - 0x1460B
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		GlobalFunc_2936(iParam0, iVar0);
		func_182(iParam0, iVar0);
	}
}

void func_182(int iParam0, int iParam1)//Position - 0x14640
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
	if (func_183(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), 50f, 12, &(Global_87757[iParam1 /*29*/]), &(Global_87757[iParam1 /*29*/].f_9)))
	{
		Global_87757[iParam1 /*29*/].f_12 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_12 = 0f;
	}
	if (func_183(Global_87757[iParam1 /*29*/], Global_87757[iParam1 /*29*/].f_9, (150f - 50f), 12, &(Global_87757[iParam1 /*29*/].f_3), &(Global_87757[iParam1 /*29*/].f_10)))
	{
		Global_87757[iParam1 /*29*/].f_13 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_13 = 0f;
	}
	if (func_183(Global_87757[iParam1 /*29*/].f_3, Global_87757[iParam1 /*29*/].f_10, (500f - 150f), 12, &(Global_87757[iParam1 /*29*/].f_6), &(Global_87757[iParam1 /*29*/].f_11)))
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

int func_183(struct<3> Param0, float fParam3, float fParam4, int iParam5, var uParam6, var uParam7)//Position - 0x14AC1
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





void func_188(int iParam0, int iParam1)//Position - 0x14FC1
{
	int iVar0;
	struct<3> Var1;
	
	func_442(iParam0, 0);
	func_189(iParam0, 0);
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

void func_189(int iParam0, int iParam1)//Position - 0x15036
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
				iVar1 = GlobalFunc_11083(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_208(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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



















void func_208(int iParam0, var uParam1, bool bParam2)//Position - 0x1654A
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
			if (GlobalFunc_11085(iParam0, iVar1, &iVar2, 0))
			{
				func_425(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11084(iParam0, iVar1, &iVar2))
			{
				func_425(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_211(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_211(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x167E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, func_311(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_211(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			GlobalFunc_10633(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_211(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11040(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_211(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11040(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_6669(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_211(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_211(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_211(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_211(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_211(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_311(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_262(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, 0);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9021(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7980(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_211(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10918(iParam0, 9, iVar97))
						{
							func_211(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_211(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_211(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = func_311(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_311(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_211(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_211(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_211(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_211(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_215(iParam0, &uVar4))
		{
			func_211(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_211(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_211(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_211(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_211(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}




int func_215(int iParam0, var uParam1)//Position - 0x17D8D
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_311(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6671(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6671(741, Global_68104, 0) == 0 && GlobalFunc_6671(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				if (GlobalFunc_6671(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6671(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6671(741, Global_68104, 0);
		iVar1 = GlobalFunc_6671(742, Global_68104, 0);
		if (!GlobalFunc_10918(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6671(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6671(740, Global_68104, 0);
			}
			GlobalFunc_6784(741, -99, Global_68104, 1);
			GlobalFunc_6784(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}















































void func_262(int iParam0, int iParam1, bool bParam2)//Position - 0x1E036
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9757(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_263(iParam0, bParam2, 0);
}

void func_263(int iParam0, bool bParam1, bool bParam2)//Position - 0x1E078
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = func_281(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_278(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}















int func_278(int iParam0)//Position - 0x21BF1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_311(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_311(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_281(int iParam0)//Position - 0x21DC0
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_311(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_311(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_311(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_311(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}






























int func_311(int iParam0, int iParam1, int iParam2)//Position - 0x2AA24
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (GlobalFunc_10918(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (GlobalFunc_10918(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7980(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}


















































































































int func_425(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x5A9BF
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
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
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
			iVar7 = GlobalFunc_7980(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7980(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7980(iParam0, 2);
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
										func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
									func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11083(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11085(iParam0, iVar10, &iVar4, 1))
							{
								func_425(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_425(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_425(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_425(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_425(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_425(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_425(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
						func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11085(iParam0, iVar10, &iVar4, 0))
		{
			func_425(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11084(iParam0, iVar10, &iVar4))
		{
			func_425(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

















void func_442(int iParam0, bool bParam1)//Position - 0x5D2C9
{
	GlobalFunc_8644(iParam0);
	GlobalFunc_7700(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}
























































int func_498(int iParam0, bool bParam1)//Position - 0x6B834
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
		func_501(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_813(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_746(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_501(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6B9EC
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
				func_525(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				func_518(*uParam0);
				GlobalFunc_8021(*uParam0, 1, 0);
				GlobalFunc_8030(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_503(*uParam0, bParam6);
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


int func_503(int iParam0, bool bParam1)//Position - 0x6BB17
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_189(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_189(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						func_425(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				func_425(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				func_425(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				func_425(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				func_425(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				func_425(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				func_425(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}















void func_518(int iParam0)//Position - 0x6CCE6
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
		func_208(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11083(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11083(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11083(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11083(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_208(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}







int func_525(int iParam0, int iParam1, bool bParam2)//Position - 0x6D59E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_89952)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_89952[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_89952)
		{
			iVar1 = 0;
		}
		Global_89952[iVar1] = Global_87845[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_89952[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_89952[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_89952[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1000f, -1, 1, 0);
					}
				}
			}
		}
	}
	Global_87845[iVar0] = iParam0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam1] = GlobalFunc_8058();
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_87845.f_47), iVar0);
	}
	return 1;
}







void func_532(int iParam0)//Position - 0x6E106
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	while (CAM::IS_SCREEN_FADING_IN())
	{
		SYSTEM::WAIT(0);
	}
}

int func_533()//Position - 0x6E134
{
	if (iLocal_3481 == 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		iLocal_3737 = 0;
		iLocal_3749 = 0;
		iLocal_3760 = 0;
		iLocal_3781 = 0;
		VEHICLE::REQUEST_VEHICLE_RECORDING(0, "END_MARTIN_1");
		HUD::CLEAR_HELP(1);
		GlobalFunc_4935();
		if (CAM::DOES_CAM_EXIST(uLocal_4172))
		{
			CAM::DESTROY_CAM(iLocal_4172, 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_4173))
		{
			CAM::DESTROY_CAM(iLocal_4173, 0);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_4172))
		{
			iLocal_4172 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1216.503f, 1864.998f, 79.2422f, 1.266527f, 0f, -89.01587f, 45.03114f, 0, 2);
			CAM::SET_CAM_ACTIVE(iLocal_4172, 1);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_4173))
		{
			iLocal_4173 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1217.515f, 1867.193f, 79.2422f, 16.74339f, 0f, -57.13797f, 45.03114f, 0, 2);
			CAM::SET_CAM_ACTIVE(iLocal_4173, 1);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(0, -1, 1);
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_ext", 8);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		while (!CUTSCENE::HAS_CUTSCENE_LOADED() || !STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_ext"))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_2780() == 0)
				{
					GlobalFunc_11116(2, "Trevor", 2);
				}
				else
				{
					GlobalFunc_11116(2, "Trevor", 2);
				}
				GlobalFunc_11086("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
			}
			SYSTEM::WAIT(0);
		}
		iLocal_3890 = 0;
		iLocal_3749 = 1;
		iLocal_3481 = 1;
	}
	else
	{
		if (iLocal_3890 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_3952);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4025))
			{
				OBJECT::DELETE_OBJECT(&iLocal_4025);
			}
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
			}
			GlobalFunc_8380(1, 1, 1, 0);
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_4173, iLocal_4172, 10000, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			SYSTEM::SETTIMERA(0);
			MISC::CLEAR_AREA(1215.974f, 1863.091f, 77.88766f, 14f, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(1219.4f, 1865.7f, 78.1f, 15f, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			SYSTEM::SETTIMERB(0);
			iLocal_3890 = 1;
		}
		if (iLocal_3890 == 1)
		{
			if (SYSTEM::TIMERB() < 5000)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1219.4f, 1865.5f, 78.3278f, 3f, joaat("prop_barrel_01a"), 0))
				{
					uLocal_3910 = PED::_CREATE_SYNCHRONIZED_SCENE_2(1219.4f, 1865.5f, 78.3278f, 1f, joaat("prop_barrel_01a"));
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_3910, "missmartin1@leadinoutmartin_1_ext", "martin_1_ext_leadin", 8f, -8f, 0, 0, 1148846080, 0);
					iLocal_3890 = 2;
				}
			}
			else
			{
				iLocal_3890 = 2;
			}
		}
		if (iLocal_3890 == 2)
		{
			if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "M1_EXT_LI", 7, 0, 0, 0))
			{
			}
			iLocal_3890 = 3;
		}
		if (iLocal_3890 == 3)
		{
			if (SYSTEM::TIMERA() > 9500)
			{
				MISC::CLEAR_AREA(1214.055f, 1875.012f, 77.7712f, 15f, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3940, 0))
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3940)))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_3940, 1211.049f, 1859.602f, 77.9089f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_3940, 311.1039f);
						}
						else
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_3940);
						}
					}
				}
				iLocal_3890 = 4;
			}
		}
		if (iLocal_3890 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3956);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3936, "Trevor", 2, joaat("player_two"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3937, "Patricia", 2, joaat("cs_patricia"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3935, "Madrazos_Car", 2, joaat("baller"), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			CUTSCENE::START_CUTSCENE(0);
			CUTSCENE::_0x7F96F23FA9B73327(joaat("baller"));
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_3890 = 5;
		}
		if (iLocal_3890 == 5)
		{
			if (iLocal_3781 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::SET_CAM_ACTIVE(iLocal_4172, 0);
					CAM::SET_CAM_ACTIVE(iLocal_4173, 0);
					CAM::DESTROY_CAM(iLocal_4172, 0);
					CAM::DESTROY_CAM(iLocal_4173, 0);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					iLocal_3781 = 1;
				}
			}
			if (iLocal_3737 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3940, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3940, 1);
						iLocal_3737 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3956, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3956, 2);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_3936 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", joaat("player_two"));
				iLocal_3930 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_3936);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
				{
					if (!PED::IS_PED_INJURED(iLocal_3930))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_3930, iLocal_3956, -1);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Patricia", 0))
			{
				iLocal_3937 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Patricia", joaat("cs_patricia"));
				iLocal_3931 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_3937);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_3931, iLocal_3956, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_3931, iLocal_3956, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3931, 1);
							PED::SET_PED_KEEP_TASK(iLocal_3931, 1);
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3935))
			{
				iLocal_3935 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Madrazos_Car", joaat("baller"));
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
			{
				iLocal_3956 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iLocal_3935);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
			{
				if (iLocal_3760 == 0)
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_3956, "MADRAZO");
					iLocal_3760 = 1;
				}
			}
			if (!CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Madrazos_Car", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_3956, 1, 1, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Madrazos_Car", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3956, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3956, 0, "END_MARTIN_1", 1);
						VEHICLE::_0x5845066D8A1EA7F7(iLocal_3956, -0.1890575f, -0.1890575f, 0.1890575f, 0);
					}
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3956))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3956, 0, "END_MARTIN_1", 1);
							VEHICLE::_0x5845066D8A1EA7F7(iLocal_3956, -0.1890575f, -0.1890575f, 0.1890575f, 0);
						}
					}
				}
				RECORDING::_0x81CBAE94390F9F89();
				GlobalFunc_8380(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4030, 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4031, 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4032, 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4034, 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4035, 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4036, 0);
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					GlobalFunc_45(0, 0);
				}
				iLocal_3890 = 6;
			}
		}
		if (iLocal_3890 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3956, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3956, 2);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3931))
					{
						if (!PED::IS_PED_INJURED(iLocal_3931))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_3931, iLocal_3956, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_3931, iLocal_3956, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3931, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3931, 1);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
					{
						if (!PED::IS_PED_INJURED(iLocal_3930))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_3930, iLocal_3956, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_3930, iLocal_3956, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3930, 1);
							}
						}
					}
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3956, 1);
					if (!PED::IS_PED_INJURED(iLocal_3930))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_3930, iLocal_3956, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3956))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3956) > 5000f)
								{
									iLocal_3890 = 7;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3890 >= 7)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_4166))
			{
				HUD::REMOVE_BLIP(&uLocal_4166);
			}
			if (Global_68505 == 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				iLocal_3481 = 0;
				return 1;
			}
		}
	}
	return 0;
}















int func_548()//Position - 0x6F0A7
{
	if (GlobalFunc_8315() == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[4]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[4], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[5]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[5], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[6]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[6], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[7]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[7], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[8]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[8], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[9]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[9], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[10]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[10], 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4028))
	{
		iLocal_4028 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1219.4f, 1865.5f, 78.3278f, 1f, joaat("prop_barrel_01a"), 1, 0, 1);
	}
	else if (iLocal_3800 == 0)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_4028, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4028, 1);
		iLocal_3800 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
		{
			GRAPHICS::_0x27CFB1B1E078CB2D();
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
			{
				if (iLocal_3805 == 0)
				{
					if (iLocal_3806 == 0)
					{
						if (func_626(iLocal_3952))
						{
							iLocal_3806 = 1;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_AIR(iLocal_3952))
					{
						iLocal_3805 = 1;
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3952))
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_3952, 1, 0);
				}
			}
		}
	}
	if (iLocal_3481 == 1 && iLocal_3890 < 6)
	{
		if (iLocal_3890 > 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3941, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3941, 0) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3941, 1) > 150f)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3941);
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_3890 == 3 || iLocal_3890 == 4)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_4167))
				{
					if (iLocal_3744 == 1)
					{
						HUD::CLEAR_PRINTS();
						iLocal_3744 = 0;
					}
					if (iLocal_3743 == 1)
					{
						HUD::CLEAR_PRINTS();
					}
					uLocal_4167 = GlobalFunc_5104(1370.4f, 1174.3f, 113.1f, 1);
					if (iLocal_3746 == 0)
					{
						GlobalFunc_164("SNIPE5", 7500, 1);
						iLocal_3746 = 1;
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_4168))
				{
					HUD::REMOVE_BLIP(&uLocal_4168);
				}
			}
			if (iLocal_3890 == 5)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_4167))
				{
					HUD::REMOVE_BLIP(&uLocal_4167);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_4168))
				{
					HUD::REMOVE_BLIP(&uLocal_4168);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1216.6f, 1868.1f, 78.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 5f)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_4166))
					{
						if (iLocal_3744 == 1)
						{
							HUD::CLEAR_PRINTS();
							iLocal_3744 = 0;
						}
						uLocal_4166 = GlobalFunc_5104(1216.6f, 1868.1f, 78.1f, 1);
					}
					else
					{
						if (iLocal_3745 == 0 && iLocal_3769 == 1)
						{
							if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								GlobalFunc_164("SNIPE7", 7500, 1);
								iLocal_3745 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1216.6f, 1868.1f, 78.1f, 2.5f, 2.5f, 2f, 1, 1, 0))
						{
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_4167))
			{
				HUD::REMOVE_BLIP(&uLocal_4167);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_4166))
			{
				HUD::REMOVE_BLIP(&uLocal_4166);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_4168))
			{
				HUD::REMOVE_BLIP(&uLocal_4168);
			}
			if (iLocal_3744 == 0)
			{
				GlobalFunc_164("M1_GOD3", 7500, 1);
				iLocal_3744 = 1;
			}
		}
	}
	if (iLocal_3789 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_104(24)))
		{
			GlobalFunc_9138(GlobalFunc_104(24));
			iLocal_3789 = 1;
		}
	}
	if (iLocal_3481 == 0)
	{
		iLocal_3749 = 0;
		STREAMING::REMOVE_PTFX_ASSET();
		iLocal_3710 = 0;
		iLocal_3743 = 0;
		iLocal_3744 = 0;
		iLocal_3745 = 0;
		iLocal_3746 = 0;
		iLocal_3769 = 0;
		iLocal_3770 = 0;
		iLocal_3771 = 0;
		iLocal_3772 = 0;
		iLocal_3782 = 0;
		iLocal_3800 = 0;
		iLocal_3805 = 0;
		iLocal_3806 = 0;
		iLocal_3809 = 0;
		iLocal_3810 = 0;
		iLocal_3812 = 0;
		if (!GlobalFunc_5599(24))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
			{
				if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(0, 1)))
				{
					while (!GlobalFunc_9748(&iLocal_3941, 0, -390.978f, 1189.539f, 324.642f, 102.4179f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3941);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3941, 1);
				}
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(0, 1));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
		{
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded")))
			{
				iLocal_3952 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), -363.5392f, 1142.265f, 323.1035f, 11.1408f, 1, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3952, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3952);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3952, 0, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3952, 10f);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3952, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
				iLocal_4025 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.171f, 323.0888f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4025, iLocal_3952, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3952, 310);
			}
		}
		if (GlobalFunc_8315() == 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_3259[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
				{
					while (!func_501(&(uLocal_3259[0]), 0, iLocal_3952, -1, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_3259[0], joaat("weapon_petrolcan"), 1000, 1, 1);
				}
			}
		}
		if (GlobalFunc_8315() == 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 1000, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, -1);
			}
		}
		HUD::CLEAR_HELP(1);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		GlobalFunc_2789(1, 1);
		GlobalFunc_2789(2, 1);
		GlobalFunc_2789(7, 1);
		GlobalFunc_2789(8, 1);
		GlobalFunc_2789(9, 1);
		GlobalFunc_2789(10, 1);
		GlobalFunc_2789(4, 1);
		GlobalFunc_2789(12, 1);
		uLocal_4033 = PED::ADD_SCENARIO_BLOCKING_AREA(1288f, 1962.8f, 128.4f, 1139.2f, 1800.8f, 59.5f, 0, 1, 1, 1);
		uLocal_4034 = PED::ADD_SCENARIO_BLOCKING_AREA(-358.3f, 1130.6f, 333.3f, -323.6f, 1170.2f, 319.6f, 0, 1, 1, 1);
		func_616();
		iLocal_3890 = 0;
		iLocal_3749 = 1;
		iLocal_3481 = 1;
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(0, -1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
				{
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_3952, 1), 20f, 1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_3890 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && iLocal_3675 == 0)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_3890 = 1;
		}
		if (iLocal_3890 == 1)
		{
			if (GlobalFunc_8315() == 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_3259[0]))
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!Local_3183.f_20)
							{
								if (GlobalFunc_9134(&uLocal_3259, 0))
								{
									HUD::CLEAR_PRINTS();
									AUDIO::TRIGGER_MUSIC_EVENT("SOL1_END");
									Local_3183.f_12 = uLocal_3259[uLocal_3259.f_7];
									Local_3183.f_20 = 1;
								}
							}
							else
							{
								while (func_615(&Local_3183, 0, 0f, 0f))
								{
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
									HUD::CLEAR_PRINTS();
									if (Local_3183.f_18)
									{
										if (!Local_3183.f_19)
										{
											if (func_746(&uLocal_3259, 1, 1, 0))
											{
												Local_3183.f_19 = 1;
											}
										}
									}
									if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
									{
									}
									SYSTEM::WAIT(0);
								}
							}
						}
					}
				}
			}
			if (GlobalFunc_8315() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_3259[2], 1);
				}
				if (iLocal_3821 == 1)
				{
					if (!CAM::_0xEAF0FA793D05C592())
					{
						CAM::_0x2A2173E46DAECD12(1, 4);
					}
					CAM::_0x2A2173E46DAECD12(0, 4);
					iLocal_3821 = 0;
				}
				if (!GlobalFunc_579())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3938, 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3939);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3932[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[1]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3932[1]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4026))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_4026))
						{
							ENTITY::DETACH_ENTITY(iLocal_4026, 1, 1);
						}
						OBJECT::DELETE_OBJECT(&iLocal_4026);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
					{
						PED::DELETE_PED(&(uLocal_3259[2]));
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (!GlobalFunc_5384(joaat("weapon_pistol")))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 100, 0, 0);
					}
					else if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL")) < 100)
					{
						WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 100);
					}
					func_577(4, "STAGE_DESTROY_SNIPER", 1, 0, 0, 1);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
					{
						AUDIO::START_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
					}
					SYSTEM::SETTIMERB(0);
					iLocal_3890 = 2;
				}
			}
		}
		if (iLocal_3890 == 2)
		{
			if (iLocal_3812 == 0)
			{
				if (SYSTEM::TIMERB() > 2000)
				{
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					iLocal_3812 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_3952, 0), -428f, 1111f, 327f, 1) < 250f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						iLocal_3810 = 0;
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_164("M1_GOD5", 200000, -1);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_4168))
							{
								HUD::CLEAR_PRINTS();
								HUD::REMOVE_BLIP(&uLocal_4168);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(uLocal_4168))
						{
							uLocal_4168 = GlobalFunc_6783(iLocal_3952, 0, 0);
							HUD::CLEAR_PRINTS();
							if (iLocal_3809 == 0)
							{
								GlobalFunc_164("SNIPE9", 7500, -1);
								iLocal_3809 = 1;
							}
						}
					}
					else
					{
						func_16("M1_FAIL6");
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						if (iLocal_3810 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_4168))
							{
								HUD::REMOVE_BLIP(&uLocal_4168);
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_4168))
							{
								uLocal_4168 = GlobalFunc_6783(iLocal_3952, 1, 0);
								HUD::CLEAR_PRINTS();
								GlobalFunc_164("M1_GOD4", 200000, -1);
							}
							iLocal_3810 = 1;
						}
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_164("M1_GOD4", 200000, -1);
						}
					}
					if (iLocal_3675 == 0)
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_3952))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_4168))
							{
								HUD::REMOVE_BLIP(&uLocal_4168);
							}
							SYSTEM::SETTIMERA(0);
							HUD::CLEAR_PRINTS();
							iLocal_3818 = 0;
							iLocal_3890 = 3;
						}
					}
				}
			}
		}
		if (iLocal_3890 == 3)
		{
			if (iLocal_3818 == 0)
			{
				if (SYSTEM::TIMERA() > 3000)
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
					iLocal_3818 = 1;
				}
			}
			if (SYSTEM::TIMERA() > 30000 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1373f, 1147f, 113f, 1) < 1000f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (GlobalFunc_10664(&uLocal_3303, 2, "SLM1AUD", "M1_CHANGE", 9, 0, 0, 1))
					{
						iLocal_3890 = 4;
					}
				}
			}
		}
		if (iLocal_3890 == 4)
		{
			if (GlobalFunc_1993())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
				{
					PED::DELETE_PED(&(uLocal_3259[2]));
				}
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				SYSTEM::SETTIMERB(0);
				iLocal_3890 = 5;
			}
		}
		if (iLocal_3890 == 5)
		{
			if (iLocal_3710 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1216.6f, 1868.1f, 78.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("Martin_1_ext", 8);
					iLocal_3710 = 1;
				}
			}
			if (iLocal_3710 == 1)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (GlobalFunc_2780() == 0)
					{
						GlobalFunc_11116(2, "Trevor", 2);
					}
					else
					{
						GlobalFunc_11116(2, "Trevor", 2);
					}
					GlobalFunc_11086("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1204.7f, 1859f, 78.2f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_3710 = 0;
				}
			}
			if (iLocal_3769 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "M1_CHANGE2", 7, 0, 0, 0))
						{
							iLocal_3769 = 1;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3938, 1) < 160f)
				{
					if (iLocal_3770 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "M1_WRECK", 7, 0, 0, 0))
								{
									iLocal_3770 = 1;
								}
							}
						}
					}
					if (iLocal_3771 == 0)
					{
						GlobalFunc_159("BFHELPTXT2", -1);
						iLocal_3771 = 1;
					}
					if (iLocal_3772 == 0)
					{
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
						iLocal_3772 = 1;
					}
					if (iLocal_3772 == 1)
					{
						GlobalFunc_10365(&uLocal_27, iLocal_3938, 0, 0, 1, 1, 1);
					}
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
				else if (iLocal_3772 == 1)
				{
					HUD::CLEAR_HELP(1);
					GlobalFunc_4948(&uLocal_27, 0, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
					iLocal_3772 = 0;
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1216.6f, 1868.1f, 78.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 5f)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_4166))
					{
						HUD::REMOVE_BLIP(&uLocal_4166);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_3940 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						GlobalFunc_530(iLocal_3940, 1093140480, 1, 1056964608, 0, 1);
						STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_ext");
						SYSTEM::SETTIMERB(0);
						iLocal_3890 = 6;
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_ext");
						iLocal_3890 = 6;
					}
				}
			}
		}
		if (iLocal_3890 == 6)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_4166))
			{
				HUD::REMOVE_BLIP(&uLocal_4166);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					if (iLocal_3782 == 0)
					{
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						SYSTEM::SETTIMERB(0);
						iLocal_3782 = 1;
					}
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
					{
						AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
					}
					iLocal_3890 = 7;
				}
			}
		}
		if (iLocal_3890 >= 7)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_4166))
			{
				HUD::REMOVE_BLIP(&uLocal_4166);
			}
			iLocal_3481 = 0;
			return 1;
		}
	}
	return 0;
}





























void func_577(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7102D
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
			iVar5 = GlobalFunc_7706(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
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
		func_578(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}

void func_578(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x711A6
{
	func_579(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_579(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x711C2
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_8058();
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
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}




































int func_615(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x74551
{
	return GlobalFunc_9274(uParam0, 0, 1, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

void func_616()//Position - 0x74572
{
	switch (iLocal_3182)
	{
		case 3:
			GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
			{
				GlobalFunc_173(&uLocal_3303, 4, iLocal_3914, "Solomon1Pilot", 0, 1);
			}
			GlobalFunc_173(&uLocal_3303, 5, 0, "Sol1Tower", 0, 1);
			break;
		
		case 4:
			if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_173(&uLocal_3303, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			GlobalFunc_173(&uLocal_3303, 0, 0, "MICHAEL", 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
			{
				GlobalFunc_173(&uLocal_3303, 4, iLocal_3914, "Solomon1Pilot", 0, 1);
			}
			GlobalFunc_173(&uLocal_3303, 5, 0, "Sol1Tower", 0, 1);
			break;
		
		case 6:
			if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_173(&uLocal_3303, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			GlobalFunc_173(&uLocal_3303, 0, 0, "MICHAEL", 0, 1);
			break;
		
		case 7:
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_3259[0]))
				{
					GlobalFunc_173(&uLocal_3303, 0, uLocal_3259[0], "MICHAEL", 0, 1);
				}
			}
			GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
			break;
	}
}










int func_626(int iParam0)//Position - 0x74841
{
	if (iLocal_3807 == 0)
	{
		Local_3867 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		iLocal_3907 = MISC::GET_GAME_TIMER();
		iLocal_3807 = 1;
	}
	if (iLocal_3808 == 0 && iLocal_3807 == 1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_3907 + 4000)
		{
			Local_3870 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			iLocal_3808 = 1;
		}
	}
	if (iLocal_3808 == 1)
	{
		if (Local_3867.f_2 > (Local_3870.f_2 + 5f))
		{
			return 1;
		}
		else
		{
			iLocal_3808 = 0;
			iLocal_3807 = 0;
		}
	}
	return 0;
}

int func_627()//Position - 0x748BD
{
	int iVar0;
	
	if (!iLocal_3481)
	{
		iLocal_3749 = 0;
		iLocal_3777 = 0;
		iLocal_3786 = 0;
		iLocal_3787 = 0;
		iLocal_3788 = 0;
		iLocal_3790 = 0;
		iLocal_3803 = 0;
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_SOL_JET");
		CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
		STREAMING::REQUEST_MODEL(joaat("burrito3"));
		STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 1));
		STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
		STREAMING::REQUEST_ANIM_DICT("missmartin1@switch");
		GlobalFunc_7215(0);
		GlobalFunc_4948(&uLocal_27, 0, 0);
		if (HUD::DOES_BLIP_EXIST(uLocal_4163))
		{
			HUD::REMOVE_BLIP(&uLocal_4163);
		}
		while (!CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		func_616();
		HUD::CLEAR_HELP(1);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), 1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_KILL_PASSENGERS"))
		{
			AUDIO::STOP_AUDIO_SCENE("MARTIN_1_KILL_PASSENGERS");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		}
		iLocal_3890 = 0;
		iLocal_3749 = 1;
		iLocal_3481 = 1;
		iLocal_3820 = 0;
		iLocal_3821 = 0;
	}
	else
	{
		switch (iLocal_3890)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_4027, "Crashed_Plane", 0, joaat("prop_shamal_crash"), 0);
				}
				STREAMING::REMOVE_ANIM_DICT("missmartin1@leadinoutmartin_1_dead_pilot");
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Pilot_Martin_1", 2, joaat("s_m_m_pilot_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Briefcase", 2, joaat("p_attache_case_01_s"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevors_phone", 2, joaat("prop_phone_ing_02"), 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				GlobalFunc_8380(1, 1, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("SOL1_GOT_IT");
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_3890++;
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iLocal_3821 == 0)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							CAM::_0x2A2173E46DAECD12(0, 1);
							iLocal_3821 = 1;
						}
					}
				}
				if (iLocal_3803 == 0)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3958))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3958, 0))
							{
								if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3958)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3958))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3958))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3958)))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_3958, 2795.724f, 4801.276f, 45.5453f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iLocal_3958, 168.8915f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3958);
									iLocal_3803 = 1;
								}
								else
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3958, 1, 0);
									VEHICLE::DELETE_VEHICLE(&iLocal_3958);
									iLocal_3803 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_3820)
				{
					if (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
						{
							PED::DELETE_PED(&iLocal_3914);
							iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar0))
								{
									iLocal_3914 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
								}
							}
							iLocal_3820 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_3932[1]))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_3932[1], 0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4026))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Briefcase", 0), 1, 0);
					iLocal_4026 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Briefcase", 0));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4029))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevors_phone", 0), 1, 0);
					iLocal_4029 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevors_phone", 0));
				}
				if (iLocal_3790 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0)))
					{
						PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0)), 1, 0.515f, 0.814f, 300.781f, 0.975f, 3, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0)), 1, 0.633f, 0.62f, 300.617f, 0.262f, 1, 0f, "ShotgunLargeMonolithic");
						iLocal_3790 = 1;
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iLocal_3788 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_3932[0], 2806.659f, 4801.574f, 48.02658f, 2800.095f, 4802.901f, 44.98862f, 2.5f, 0, 1, 0))
							{
								if (!PED::IS_PED_INJURED(iLocal_3932[0]))
								{
									fLocal_3885 = ENTITY::GET_ENTITY_HEADING(iLocal_3932[0]);
								}
								PED::DELETE_PED(&(iLocal_3932[0]));
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
						{
							STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgang_01"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgang_01")))
							{
								iLocal_3932[0] = PED::CREATE_PED(26, joaat("g_m_y_mexgang_01"), 2803.229f, 4805.61f, 45.9882f, fLocal_3885, 1, 1);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 1, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 4, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 5, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 6, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 10, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 11, 0, 0, 0);
								PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_3932[0]);
								PED::EXPLODE_PED_HEAD(iLocal_3932[0], joaat("weapon_sniperrifle"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgang_01"));
								iLocal_3788 = 1;
							}
						}
					}
					if (!MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), "Silent Ringtone Dummy"))
					{
						if (iLocal_3786 == 0)
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > 12959)
							{
								AUDIO::PLAY_PED_RINGTONE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 0);
								iLocal_3786 = 1;
							}
						}
						if (iLocal_3787 == 0)
						{
							if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()) && CUTSCENE::GET_CUTSCENE_TIME() > 15953)
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
								iLocal_3787 = 1;
							}
						}
					}
					if (GlobalFunc_75())
					{
						iLocal_3777 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Crashed_Plane", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_4027, 2807.692f, 4796.449f, 47.6684f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_4027, 0f, 0f, -11.34007f, 2, 1);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_4027, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_4027, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_4027, 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2801.962f, 4800.413f, 46.0215f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 0f, 0f, -34.2f, 2, 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@switch"))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 1000f, -8f, -1, 0, 0, 0, 0, 0);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Briefcase", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4026))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4026, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0.05f, 0f, 0f, 0f, -90f, 0f, 0, 0, 0, 0, 2, 1);
						if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@switch"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_4026, "missmartin1@switch", "trevor_switch_case", 3))
							{
								ENTITY::PLAY_ENTITY_ANIM(iLocal_4026, "trevor_switch_case", "missmartin1@switch", 1000f, 0, 1, 0, 0, 0);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_4026);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Pilot_Martin_1", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
					{
						PED::DELETE_PED(&iLocal_3914);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(80f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.97f, 1065353216);
					if (iLocal_3777 == 1)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.97f, 1065353216);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_phone", joaat("prop_phone_ing_02")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4029))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4029, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
				if (iLocal_3777 == 1)
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(80f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.97f, 1065353216);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					GlobalFunc_8380(0, 1, 1, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					iLocal_3890++;
				}
				break;
			
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3914, 1, 0);
					PED::DELETE_PED(&iLocal_3914);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4029))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor") > 0.08f)
						{
							OBJECT::DELETE_OBJECT(&iLocal_4029);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor") > 0.5f)
					{
						iLocal_3890++;
					}
				}
				break;
		}
		if (iLocal_3890 >= 3)
		{
			func_628(1);
			if (iLocal_3507[2] == 1)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[1]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[1], 0);
					iLocal_3507[2] = 0;
				}
			}
			iLocal_3890 = 0;
			iLocal_3481 = 0;
			return 1;
		}
	}
	return 0;
}

void func_628(int iParam0)//Position - 0x751FE
{
	if (CAM::DOES_CAM_EXIST(iLocal_4172))
	{
		CAM::STOP_CAM_SHAKING(iLocal_4172, iParam0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_4173))
	{
		CAM::STOP_CAM_SHAKING(iLocal_4173, iParam0);
	}
}



void func_631()//Position - 0x75283
{
	if (GlobalFunc_8315() == 2)
	{
		if (iLocal_3821 == 1)
		{
			CAM::_0x2A2173E46DAECD12(0, 1);
		}
	}
}

int func_632()//Position - 0x752A0
{
	bool bVar0;
	
	if (iLocal_3813 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3932[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3932[0], "missmartin1@exit_plane", "exit_plane_guy_b", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_3932[0], "missmartin1@exit_plane", "exit_plane_guy_b", 0.3f);
					iLocal_3813 = 1;
				}
			}
		}
	}
	if (iLocal_3814 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3932[1]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3932[1], "missmartin1@exit_plane", "exit_plane_guy_a", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_3932[1], "missmartin1@exit_plane", "exit_plane_guy_a", 0.3f);
					iLocal_3814 = 1;
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_3958 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iLocal_3758 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2803.8f, 4798.1f, 47.7f, 1) < 100f)
		{
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
			iLocal_3758 = 1;
		}
	}
	if (iLocal_3758 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2803.8f, 4798.1f, 47.7f, 1) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_3801 = 0;
			iLocal_3758 = 0;
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11086("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"), 2);
		}
	}
	if (iLocal_3758 == 1 && iLocal_3801 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11086("Pilot_Martin_1", iLocal_3914, 0, 2);
				iLocal_3801 = 1;
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_3784 == 0)
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_3784 = 1;
			}
		}
	}
	else if (iLocal_3784 == 1)
	{
		iLocal_3784 = 0;
	}
	if (!iLocal_3481)
	{
		func_577(3, "STAGE_KILL_PASSENGERS", 0, 0, 0, 1);
		iLocal_3749 = 0;
		iLocal_3766 = 0;
		iLocal_3767 = 0;
		iLocal_3768 = 0;
		iLocal_3784 = 0;
		iLocal_3797 = 0;
		iLocal_3801 = 0;
		iLocal_3685 = 1;
		iLocal_3785 = 0;
		iLocal_3813 = 0;
		iLocal_3814 = 0;
		func_616();
		GlobalFunc_2789(1, 0);
		GlobalFunc_2789(2, 0);
		GlobalFunc_2789(7, 0);
		GlobalFunc_2789(8, 0);
		GlobalFunc_2789(9, 0);
		GlobalFunc_2789(10, 0);
		GlobalFunc_2789(4, 0);
		GlobalFunc_2789(12, 0);
		STREAMING::REQUEST_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_A");
		STREAMING::REQUEST_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_B");
		if (HUD::DOES_BLIP_EXIST(uLocal_4165))
		{
			HUD::REMOVE_BLIP(&uLocal_4165);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			while (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::SETTIMERB(0);
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4500f, 0);
			SYSTEM::WAIT(0);
			while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && SYSTEM::TIMERB() < 20000)
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_4967(iLocal_3940, -1, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3940, 0))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3940, 20f);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
			{
				uLocal_4038[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_wreck", iLocal_4027, Local_3861, Local_3861, 1065353216, 0, 0, 0);
				uLocal_4038[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_spot", 2803.5f, 4789.3f, 46.6f, 89.5f, 0f, 0f, 1.5f, 0, 0, 0, 0);
				uLocal_4038[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2805.4f, 4782.5f, 46.5f, 89.5f, 0f, 74f, 1.5f, 0, 0, 0, 0);
				uLocal_4038[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2804.1f, 4777.3f, 46.2f, 89.5f, 0f, 74f, 1.5f, 0, 0, 0, 0);
				uLocal_4038[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_drip", 2808.2f, 4791.6f, 48.8f, 89.5f, 0f, 169.1f, 1.5f, 0, 0, 0, 0);
				uLocal_4038[8] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_tail_fire", 2805.8f, 4788.5f, 49.8f, 89.5f, -100f, -40f, 0.7f, 0, 0, 0, 0);
				uLocal_4038[9] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_engine_fire", 2808.6f, 4793.4f, 48.7f, 0f, 0f, -10f, 0.6f, 0, 0, 0, 0);
				uLocal_4038[10] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_elec_crackle", 2809.1f, 4802.4f, 48f, 0f, 0f, 0f, 0.9f, 0, 0, 0, 0);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		SYSTEM::SETTIMERB(0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(PLAYER::PLAYER_PED_ID(), 1);
		iLocal_3891 = 0;
		iLocal_3890 = 0;
		iLocal_3749 = 1;
		iLocal_3481 = 1;
		iLocal_3904 = MISC::GET_GAME_TIMER();
		iLocal_3905 = MISC::GET_GAME_TIMER();
	}
	else
	{
		switch (iLocal_3890)
		{
			case 0:
				bVar0 = false;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3932[0]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3932[0], "missmartin1@exit_plane", "exit_plane_guy_b", 3))
						{
							if (iLocal_3785 == 0)
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_3932[0], "missmartin1@exit_plane", "exit_plane_guy_b") > 0.427f)
								{
									ENTITY::SET_ENTITY_COLLISION(iLocal_4027, 1, 0);
									iLocal_3785 = 1;
								}
							}
							if (iLocal_3767 == 0)
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_3932[0], "missmartin1@exit_plane", "exit_plane_guy_b") > 0.99f)
								{
									ENTITY::STOP_ENTITY_ANIM(iLocal_3932[0], "exit_plane_guy_b", "missmartin1@exit_plane", -2f);
									TASK::TASK_PLAY_ANIM(iLocal_3932[0], "missmartin1@exit_plane", "loop_guy_b", 4f, -8f, -1, 9, 0, 0, 0, 0);
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() >= iLocal_3909 + 500)
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				if (iLocal_3785 == 0)
				{
					if (bVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_4027, 1, 0);
							iLocal_3785 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_4027, 1) < 50f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3932[0]))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_4169[0]))
								{
									uLocal_4169[0] = GlobalFunc_6783(iLocal_3932[0], 1, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_3932[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
								}
								if (iLocal_3766 == 0)
								{
									GlobalFunc_164("M1_GOD2", 7500, -1);
									iLocal_3766 = 1;
								}
								if (iLocal_3767 == 0)
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3932[0], 1) < 100f)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_3904 + 4000)
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
											{
												if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													GlobalFunc_173(&uLocal_3303, 4, iLocal_3932[0], "JAVIER", 0, 1);
													if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_STUMBLE", 7, 0, 0, 0))
													{
														iLocal_3904 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3932[0], 1) < 30f)
										{
											if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
											{
												iLocal_3768 = 1;
											}
											if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
											{
												if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !GlobalFunc_116(0))
												{
													if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_3932[0]))
													{
														iLocal_3768 = 1;
													}
												}
											}
											if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
											{
												iLocal_3768 = 1;
											}
										}
										if (iLocal_3768 == 1)
										{
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3932[0], ENTITY::GET_ENTITY_COORDS(iLocal_3932[0], 1), 10f, 0, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3932[0], 50, 1);
											TASK::TASK_COMBAT_PED(iLocal_3932[0], PLAYER::PLAYER_PED_ID(), 0, 16);
											iLocal_3767 = 1;
										}
									}
								}
								else if (iLocal_3797 == 0)
								{
									HUD::CLEAR_PRINTS();
									GlobalFunc_4956();
									GlobalFunc_173(&uLocal_3303, 4, iLocal_3932[0], "JAVIER", 0, 1);
									if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_ATTACK", 7, 0, 0, 0))
									{
										iLocal_3905 = MISC::GET_GAME_TIMER();
										iLocal_3797 = 1;
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_3905 + 4000)
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											GlobalFunc_173(&uLocal_3303, 4, iLocal_3932[0], "JAVIER", 0, 1);
											if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_ATTACK", 7, 0, 0, 0))
											{
												iLocal_3905 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(uLocal_4169[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_4169[0]));
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_4169[0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_4169[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[1]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3932[1]))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3932[1], "missmartin1@exit_plane", "exit_plane_guy_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_3932[1], "missmartin1@exit_plane", "exit_plane_guy_a") > 0.587f)
									{
										TASK::TASK_WRITHE(iLocal_3932[1], PLAYER::PLAYER_PED_ID(), 25, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3932[1], 1, 0);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(uLocal_4169[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_4169[1]));
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_4169[1]))
						{
							HUD::REMOVE_BLIP(&(uLocal_4169[1]));
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_4169[0]) && !HUD::DOES_BLIP_EXIST(uLocal_4169[1]))
						{
							GlobalFunc_4948(&uLocal_27, 0, 0);
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
							STREAMING::REMOVE_ANIM_DICT("missmartin1@exit_plane");
							STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_A");
							STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_B");
							iLocal_3890++;
						}
					}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2807.429f, 4802.98f, 45.97585f, 2806.674f, 4799.813f, 48.22693f, 3.5f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_4163))
					{
						HUD::CLEAR_PRINTS();
						HUD::REMOVE_BLIP(&uLocal_4163);
					}
					STREAMING::REMOVE_ANIM_DICT("missmartin1@exit_plane");
					iLocal_3890++;
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_4163))
				{
					uLocal_4163 = HUD::ADD_BLIP_FOR_COORD(2807.9f, 4800.7f, 47.1f);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_4163, true);
					GlobalFunc_164("M1_GOD1", 7500, 1);
				}
				break;
		}
		if (iLocal_3890 >= 2)
		{
			RECORDING::_0x293220DA1B46CEBC(10f, 0f, 4);
			AUDIO::STOP_STREAM();
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
			iLocal_3481 = 0;
			return 1;
		}
	}
	return 0;
}



int func_635()//Position - 0x75CDF
{
	if (iLocal_3481 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3939, 1) < 100f)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_4165))
						{
							uLocal_4165 = GlobalFunc_6783(iLocal_3939, 0, 0);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_4165))
					{
						HUD::REMOVE_BLIP(&uLocal_4165);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_4165))
				{
					HUD::REMOVE_BLIP(&uLocal_4165);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_4165))
			{
				HUD::REMOVE_BLIP(&uLocal_4165);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_4165))
		{
			HUD::REMOVE_BLIP(&uLocal_4165);
		}
	}
	if (iLocal_3758 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2803.8f, 4798.1f, 47.7f, 1) < 100f)
		{
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
			iLocal_3758 = 1;
		}
	}
	if (iLocal_3758 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2803.8f, 4798.1f, 47.7f, 1) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_3758 = 0;
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11086("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"), 2);
		}
	}
	if (iLocal_3481 == 1)
	{
		func_654();
	}
	if (iLocal_3700 == 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
			{
				if (AUDIO::LOAD_STREAM("MARTIN_1_DAMAGED_PLANE_MASTER", 0))
				{
					AUDIO::PLAY_STREAM_FROM_VEHICLE(iLocal_3938);
					iLocal_3700 = 1;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938) < 30000f)
				{
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				}
			}
		}
	}
	if (iLocal_3709 == 0)
	{
		if (GlobalFunc_8315() == 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
				{
					iLocal_3709 = 1;
				}
			}
		}
	}
	if (iLocal_3709 == 1)
	{
		if (GlobalFunc_8315() == 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
				{
					GlobalFunc_565(394, 1, 0);
					iLocal_3709 = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[0]))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_3259[0], 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_3259[0]))
		{
			PED::DELETE_PED(&(uLocal_3259[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3952, 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3952))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4025))
			{
				OBJECT::DELETE_OBJECT(&iLocal_4025);
			}
			VEHICLE::DELETE_VEHICLE(&iLocal_3952);
		}
	}
	if (!iLocal_3481)
	{
		func_577(2, "STAGE_CHASE_PLANE", 0, 0, 0, 1);
		iLocal_3749 = 0;
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		uLocal_4030 = PED::ADD_SCENARIO_BLOCKING_AREA(957.9f, 3051.7f, 76.7f, 1898.5f, 3195.2f, 32.3f, 0, 1, 1, 1);
		uLocal_4032 = PED::ADD_SCENARIO_BLOCKING_AREA(2782.5f, 4496.7f, 50.8f, 2787.3f, 4519.3f, 42.5f, 0, 1, 1, 1);
		func_616();
		fLocal_3875 = 0.4f;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
			{
				iLocal_3894 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3894, "PLANE_ON_FIRE", iLocal_3938, 0, 0, 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, fLocal_3875);
				}
			}
		}
		iLocal_3661 = 0;
		iLocal_3762 = 0;
		iLocal_3662 = 0;
		iLocal_3663 = 0;
		iLocal_3664 = 0;
		iLocal_3665 = 0;
		iLocal_3667 = 0;
		iLocal_3668 = 0;
		iLocal_3670 = 0;
		iLocal_3672 = 0;
		iLocal_3673 = 0;
		iLocal_3674 = 0;
		iLocal_3676 = 0;
		iLocal_3678 = 0;
		iLocal_3679 = 0;
		iLocal_3680 = 0;
		iLocal_3681 = 0;
		iLocal_3683 = 0;
		iLocal_3685 = 0;
		iLocal_3692 = 0;
		iLocal_3693 = 0;
		iLocal_3694 = 0;
		iLocal_3697 = 0;
		iLocal_3695 = 0;
		iLocal_3698 = 0;
		iLocal_3696 = 0;
		iLocal_3699 = 0;
		iLocal_3701 = 0;
		iLocal_3709 = 0;
		iLocal_3715 = 0;
		iLocal_3716 = 0;
		iLocal_3717 = 0;
		iLocal_3718 = 0;
		iLocal_3719 = 0;
		iLocal_3720 = 0;
		iLocal_3721 = 0;
		iLocal_3722 = 0;
		iLocal_3724 = 0;
		iLocal_3725 = 0;
		iLocal_3726 = 0;
		iLocal_3727 = 0;
		iLocal_3728 = 0;
		iLocal_3729 = 0;
		iLocal_3730 = 0;
		iLocal_3731 = 0;
		iLocal_3732 = 0;
		iLocal_3733 = 0;
		iLocal_3734 = 0;
		iLocal_3735 = 0;
		iLocal_3736 = 0;
		iLocal_3751 = 0;
		iLocal_3752 = 0;
		iLocal_3753 = 0;
		iLocal_3754 = 0;
		iLocal_3755 = 0;
		iLocal_3756 = 0;
		iLocal_3757 = 0;
		iLocal_3759 = 0;
		iLocal_3758 = 0;
		iLocal_3763 = 0;
		iLocal_3766 = 0;
		iLocal_3764 = 0;
		iLocal_3767 = 0;
		iLocal_3768 = 0;
		iLocal_3748 = 0;
		iLocal_3796 = 0;
		iLocal_3798 = 0;
		iLocal_3799 = 0;
		iLocal_3886 = 0;
		while (iLocal_3886 <= 19)
		{
			iLocal_3619[iLocal_3886] = 0;
			iLocal_3886++;
		}
		iLocal_3886 = 0;
		while (iLocal_3886 <= 5)
		{
			iLocal_3702[iLocal_3886] = 0;
			iLocal_3886++;
		}
		iLocal_3886 = 0;
		while (iLocal_3886 <= 2)
		{
			iLocal_3739[iLocal_3886] = 0;
			iLocal_3886++;
		}
		SYSTEM::SETTIMERB(0);
		PATHFIND::SET_ROADS_IN_AREA(Local_3849, Local_3852, 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(-9.5f, 1758.3f, 235.3f, 134.5f, 1638.3f, 222.5f, 0, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), 1);
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(0);
		GlobalFunc_503(iLocal_3939, -1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
		{
			AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
		}
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		GlobalFunc_2224(1);
		uLocal_4031 = PED::ADD_SCENARIO_BLOCKING_AREA(2756.5f, 4523.2f, 72f, 2916.2f, 4821.8f, 36.9f, 0, 1, 1, 1);
		uLocal_4036 = PED::ADD_SCENARIO_BLOCKING_AREA(2813.7f, 4807.9f, 51.5f, 2803.1f, 4795.8f, 44.6f, 0, 1, 1, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(iLocal_3939, -1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 20f);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[0], 0);
		}
		if (iLocal_3507[2] == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
			{
				uLocal_4038[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke_loop", iLocal_3938, Local_3831, Local_3861, 1065353216, 0, 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(uLocal_4038[1], 2f);
				iLocal_3507[2] = 1;
			}
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_4172))
		{
			iLocal_4172 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 20.82167f, 1743.011f, 221.8495f, 11.51113f, 0f, 165.5968f, 34.7007f, 0, 2);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_4173))
		{
			iLocal_4173 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 28.23102f, 1742.381f, 221.2972f, 27.23873f, 0f, 144.9305f, 34.7007f, 0, 2);
		}
		if (!CAM::DOES_CAM_EXIST(uLocal_4175))
		{
			iLocal_4175 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 26.25573f, 1737.435f, 225.4661f, -14.31823f, 2.157022f, -28.27988f, 50.02843f, 0, 2);
		}
		GlobalFunc_2789(1, 0);
		GlobalFunc_2789(2, 0);
		GlobalFunc_2789(7, 0);
		GlobalFunc_2789(8, 0);
		GlobalFunc_2789(9, 0);
		GlobalFunc_2789(10, 0);
		GlobalFunc_2789(4, 0);
		GlobalFunc_2789(12, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		HUD::CLEAR_PRINTS();
		GlobalFunc_164("BFCHASE", 7500, -1);
		iLocal_3891 = 0;
		iLocal_3890 = 0;
		fLocal_3883 = 1f;
		iLocal_3749 = 1;
		iLocal_3481 = 1;
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
				{
					fLocal_3874 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938);
				}
			}
		}
		switch (iLocal_3890)
		{
			case 0:
				if (iLocal_3661)
				{
					if ((ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 25f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 293f) || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 354f)
					{
						MISC::SET_TIME_SCALE(1f);
						HUD::DISPLAY_RADAR(true);
						HUD::DISPLAY_HUD(true);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
						{
							AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
						}
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						CAM::SET_WIDESCREEN_BORDERS(false, 500);
						iLocal_3661 = 0;
						iLocal_3762 = 1;
						iLocal_3891 = 99;
					}
					switch (iLocal_3891)
					{
						case 0:
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
							{
								AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
							}
							SYSTEM::SETTIMERA(0);
							RECORDING::_0x293220DA1B46CEBC(4f, 7f, 4);
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_BUS_JUMP");
							iLocal_3891++;
							break;
						
						case 1:
							if (SYSTEM::TIMERA() > 500 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
							{
								fLocal_3883 = (fLocal_3883 / 1.15f);
								MISC::SET_TIME_SCALE(fLocal_3883);
								if (fLocal_3883 <= 0.25f)
								{
									fLocal_3883 = 0.25f;
									MISC::SET_TIME_SCALE(0.25f);
									iLocal_3891++;
								}
							}
							break;
						
						case 2:
							if (iLocal_3676 == 0)
							{
								GlobalFunc_4956();
								HUD::CLEAR_PRINTS();
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_JUMP3", 7, 0, 0, 0))
								{
									iLocal_3676 = 1;
								}
							}
							iLocal_3891++;
							break;
						
						case 3:
							if (SYSTEM::TIMERA() > 1000 || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
							{
								fLocal_3883 = (fLocal_3883 * 1.15f);
								MISC::SET_TIME_SCALE(fLocal_3883);
								if (fLocal_3883 >= 1f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
									{
										AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
									}
									MISC::SET_TIME_SCALE(1f);
									iLocal_3891 = 0;
									iLocal_3661 = 0;
									iLocal_3762 = 1;
									iLocal_3891++;
								}
							}
							break;
					}
				}
				else
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (iLocal_3667 == 1 && MISC::GET_GAME_TIMER() > iLocal_3887 + 7000)
						{
							func_650();
						}
						if (iLocal_3667 == 0)
						{
							func_650();
						}
					}
					func_649();
					if (iLocal_3673 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3939))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3939) > 21000f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3939);
									VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGBFReady");
									iLocal_3673 = 1;
								}
							}
							else
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGBFReady");
								iLocal_3673 = 1;
							}
						}
					}
					if (iLocal_3685 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938) > 18952f)
								{
									CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
									iLocal_3685 = 1;
								}
							}
						}
					}
					if (iLocal_3683 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
									{
										iLocal_3683 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3668 == 0)
					{
						GlobalFunc_164("BFCHASE", 7500, 1);
						iLocal_3668 = 1;
					}
					if (!PED::IS_PED_INJURED(iLocal_3914))
					{
						func_648();
					}
					if (iLocal_3762 == 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -5.680077f, 1710.671f, 230.7381f, 10.9259f, 1699.666f, 224.2284f, 5.25f, 0, 1, 0))
							{
								if ((ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 25f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 293f) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 354f)
								{
									fLocal_3883 = 0.3f;
									iLocal_3891 = 0;
									iLocal_3661 = 1;
								}
							}
						}
					}
					if (iLocal_3762 == 1)
					{
						if (iLocal_3763 == 0)
						{
							if (CAM::IS_GAMEPLAY_CAM_RENDERING())
							{
								if (CAM::DOES_CAM_EXIST(iLocal_4172))
								{
									CAM::DESTROY_CAM(iLocal_4172, 0);
								}
								if (CAM::DOES_CAM_EXIST(iLocal_4173))
								{
									CAM::DESTROY_CAM(iLocal_4173, 0);
								}
								if (CAM::DOES_CAM_EXIST(iLocal_4175))
								{
									CAM::DESTROY_CAM(iLocal_4175, 0);
								}
								MISC::SET_TIME_SCALE(1f);
								iLocal_3763 = 1;
							}
						}
						if (iLocal_3764 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									PATHFIND::SET_ROADS_IN_AREA(-9.5f, 1758.3f, 235.3f, 134.5f, 1638.3f, 222.5f, 1, 1);
									CAM::SHAKE_GAMEPLAY_CAM("small_explosion_shake", 0.2f);
									RECORDING::_0x293220DA1B46CEBC(6f, 2f, 3);
									iLocal_3764 = 1;
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938) < 105199f)
							{
								func_642(iLocal_3938, PLAYER::PLAYER_PED_ID(), &fLocal_3875, 0.45f, 90f, 107f, 125f, 2f, 0f, 0.95f, 1);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, fLocal_3875);
							}
							else
							{
								func_642(iLocal_3938, PLAYER::PLAYER_PED_ID(), &fLocal_3875, 0.55f, 95f, 105f, 125f, 2f, 0f, 1.3f, 1);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, fLocal_3875);
								if (iLocal_3672 == 0)
								{
									iLocal_3672 = 1;
								}
							}
						}
					}
					if (iLocal_3670 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3942))
						{
							if (fLocal_3874 > 72000f && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3942, 1) < 200f)
							{
								if (iLocal_3755 == 0)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "MARTIN1_DISTANT_TRAIN_HORNS_MASTER", 0, 1);
									iLocal_3898 = MISC::GET_GAME_TIMER();
									iLocal_3755 = 1;
								}
								else if (iLocal_3756 == 0)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3898 + 3000)
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "MARTIN1_DISTANT_TRAIN_HORNS_MASTER", 0, 1);
										iLocal_3898 = MISC::GET_GAME_TIMER();
										iLocal_3756 = 1;
									}
								}
								else if (iLocal_3757 == 0)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3898 + 3000)
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "MARTIN1_DISTANT_TRAIN_HORNS_MASTER", 0, 1);
										iLocal_3757 = 1;
									}
								}
							}
						}
						if (iLocal_3665 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1529f, 3349f, 37f, 6f, 3f, 4f, 0, 1, 0))
									{
										if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 65f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 270f)
										{
											if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 15f)
											{
												iLocal_3665 = 1;
											}
										}
									}
								}
							}
						}
						if (iLocal_3665 == 1)
						{
							if (iLocal_3662 == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
									{
										if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
										{
											AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
											MISC::SET_TIME_SCALE(0.3f);
											fLocal_3883 = 0.3f;
											SYSTEM::SETTIMERA(0);
											AUDIO::TRIGGER_MUSIC_EVENT("SOL1_TRAIN_JUMP");
											if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
											{
												AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
											}
											RECORDING::_0x293220DA1B46CEBC(6f, 6f, 4);
											iLocal_3662 = 1;
										}
									}
								}
							}
							else if (iLocal_3663 == 0)
							{
								if (SYSTEM::TIMERA() > 250)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
										{
											if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
											{
												MISC::SET_TIME_SCALE(1f);
												AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
												iLocal_3670 = 1;
												iLocal_3663 = 1;
											}
										}
									}
									else
									{
										MISC::SET_TIME_SCALE(1f);
										AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
										iLocal_3670 = 1;
										iLocal_3663 = 1;
									}
								}
								if (SYSTEM::TIMERA() > 379)
								{
									fLocal_3883 = (fLocal_3883 * 1.05f);
									MISC::SET_TIME_SCALE(fLocal_3883);
									if (fLocal_3883 >= 1f)
									{
										MISC::SET_TIME_SCALE(1f);
										AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
										iLocal_3670 = 1;
										iLocal_3663 = 1;
									}
								}
							}
						}
						else if (iLocal_3796 == 0)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_JUMP4", 7, 0, 0, 0))
								{
									iLocal_3796 = 1;
								}
							}
						}
					}
					else
					{
						if (iLocal_3748 == 0)
						{
							MISC::SET_TIME_SCALE(1f);
							RECORDING::_0x293220DA1B46CEBC(5f, 2f, 3);
							iLocal_3748 = 1;
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
						{
							AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
						}
					}
					if (fLocal_3874 > 90000f)
					{
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					}
					if (iLocal_3753 == 0)
					{
						if (fLocal_3874 > 108000f)
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MARTIN_1_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MARTIN_1_02", 0))
							{
								iLocal_3753 = 1;
							}
						}
					}
					else if (iLocal_3754 == 0)
					{
						if (fLocal_3874 > 117262f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
							{
								AUDIO::STOP_STREAM();
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "MARTIN_1_PLANE_CRASH_MASTER", iLocal_3938, 0, 0, 0);
								iLocal_3754 = 1;
							}
						}
					}
					if (iLocal_3759 == 0)
					{
						if (fLocal_3874 > 117262f)
						{
							if (GlobalFunc_60(&uLocal_4050, 84))
							{
								GlobalFunc_7621(84, 1, 0, 1, 0);
								iLocal_3759 = 1;
							}
						}
					}
					if (iLocal_3692 == 0)
					{
						if (fLocal_3874 > 108000f)
						{
							AUDIO::PREPARE_MUSIC_EVENT("SOL1_CRASH");
							STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgang_01"));
							STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_02"));
							iLocal_3692 = 1;
						}
					}
					else if (iLocal_3701 == 0)
					{
						if (fLocal_3874 > 117262f)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
							{
								AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
							{
								AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_KILL_PASSENGERS"))
							{
								AUDIO::START_AUDIO_SCENE("MARTIN_1_KILL_PASSENGERS");
							}
							if (iLocal_3674 == 0)
							{
								AUDIO::STOP_SOUND(iLocal_3894);
								iLocal_3674 = 1;
							}
							STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
							STREAMING::REQUEST_ANIM_DICT("missmartin1@exit_plane");
							STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_dead_pilot");
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_CRASH");
							iLocal_3701 = 1;
						}
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (fLocal_3874 > 116262f)
							{
								uLocal_4038[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_crash_dust", iLocal_3938, Local_3861, Local_3861, 1065353216, 0, 0, 0);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (fLocal_3874 > 119000f)
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3938, 0, 0, 1);
							}
						}
					}
					if (iLocal_3675 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
							{
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[1]))
								{
									GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[1], 0);
								}
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[2]))
								{
									GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[2], 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
								{
									if (!PED::IS_PED_INJURED(iLocal_3914))
									{
										ENTITY::SET_ENTITY_COORDS(iLocal_3914, 2808.387f, 4795.484f, 45.8104f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_COLLISION(iLocal_3914, 0, 0);
									}
								}
								VEHICLE::DELETE_VEHICLE(&iLocal_3938);
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash")))
								{
									iLocal_4027 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.449f, 47.6684f, 1, 1, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_4027, 0, 0);
									ENTITY::SET_ENTITY_ROTATION(iLocal_4027, 0f, 0f, -11.34007f, 2, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_4027, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4027, 1);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_4027, 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
								}
								if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_dead_pilot"))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
									{
										if (!PED::IS_PED_INJURED(iLocal_3914))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3914, 1);
											ENTITY::SET_ENTITY_COORDS(iLocal_3914, 2808.387f, 4795.484f, 45.8104f, 1, 0, 0, 1);
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3914, iLocal_4027, 0, -0.54f, 5.7f, 0.03f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											TASK::TASK_PLAY_ANIM(iLocal_3914, "missmartin1@leadinoutmartin_1_dead_pilot", "dead_pilot_leadin_loop", 1000f, -8f, -1, 9, 0, 0, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_3914, 1);
											ENTITY::SET_ENTITY_COLLISION(iLocal_3914, 0, 0);
											PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3914, 1, 0.515f, 0.814f, 300.781f, 0.975f, 3, 0f, "stab");
											PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3914, 1, 0.633f, 0.62f, 300.617f, 0.262f, 1, 0f, "ShotgunLargeMonolithic");
											PED::SET_PED_CAN_BE_TARGETTED(iLocal_3914, 0);
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_3914, "dead_1", 0);
										}
									}
								}
								if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgang_01")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@exit_plane"))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
									{
										iLocal_3932[0] = PED::CREATE_PED(26, joaat("g_m_y_mexgang_01"), 2807.312f, 4802.314f, 46.3392f, 78.4343f, 1, 1);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 0, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 1, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 2, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 3, 1, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 4, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 5, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 6, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 7, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 8, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 9, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 10, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 11, 0, 0, 0);
										PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_3932[0]);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3932[0], 1);
										WEAPON::GIVE_WEAPON_TO_PED(iLocal_3932[0], joaat("weapon_pistol"), 100, 0, 1);
										PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_3932[0], 1, 0.36f, 0.71f, "ShotgunSmall");
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3932[0], ENTITY::GET_ENTITY_COORDS(iLocal_3932[0], 1), 10f, 0, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3932[0], 50, 1);
										TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3932[0], "missmartin1@exit_plane", "exit_plane_guy_b", 2804.311f, 4798.03f, 46.7273f, 0f, 0f, -0.21f, 8f, -1000f, -1, 4096, 0, 2, 0);
										iLocal_3909 = MISC::GET_GAME_TIMER();
									}
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3932[1]))
									{
										iLocal_3932[1] = PED::CREATE_PED(26, joaat("g_m_y_mexgoon_02"), 2805.369f, 4799.155f, 46.039f, 82.164f, 1, 1);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 0, 0, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 1, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 2, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 3, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 4, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 5, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 6, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 7, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 8, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 9, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 10, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 11, 0, 0, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3932[1], 1);
										PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_3932[1], 1, 0.36f, 0.71f, "ShotgunSmall");
										TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3932[1], "missmartin1@exit_plane", "exit_plane_guy_a", 2806.272f, 4799.625f, 46.5135f, 0f, 0f, 40f, 8f, -1000f, -1, 4106, 0, 2, 0);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgang_01"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
								}
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
								}
								VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_SOL_JET");
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
								{
									uLocal_4038[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_wreck", iLocal_4027, Local_3861, Local_3861, 1065353216, 0, 0, 0);
								}
								uLocal_4038[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_spot", 2803.5f, 4789.3f, 46.6f, 89.5f, 0f, 0f, 1.5f, 0, 0, 0, 0);
								uLocal_4038[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2805.4f, 4782.5f, 46.5f, 89.5f, 0f, 74f, 1.5f, 0, 0, 0, 0);
								uLocal_4038[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2804.1f, 4777.3f, 46.2f, 89.5f, 0f, 74f, 1.5f, 0, 0, 0, 0);
								uLocal_4038[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_drip", 2808.2f, 4791.6f, 48.8f, 89.5f, 0f, 169.1f, 1.5f, 0, 0, 0, 0);
								uLocal_4038[8] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_tail_fire", 2805.8f, 4788.5f, 49.8f, 89.5f, -100f, -40f, 0.7f, 0, 0, 0, 0);
								uLocal_4038[9] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_engine_fire", 2808.6f, 4793.4f, 48.7f, 0f, 0f, -10f, 0.6f, 0, 0, 0, 0);
								uLocal_4038[10] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_elec_crackle", 2809.1f, 4802.4f, 48f, 0f, 0f, 0f, 0.9f, 0, 0, 0, 0);
								MISC::SET_INSTANCE_PRIORITY_HINT(0);
								RECORDING::_0x293220DA1B46CEBC(12f, 2f, 3);
								iLocal_3890++;
							}
						}
					}
				}
				break;
		}
		if (iLocal_3890 >= 1)
		{
			if (iLocal_3507[2] == 1)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[1]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[1], 0);
					iLocal_3507[2] = 0;
				}
			}
			RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
			GlobalFunc_4948(&uLocal_27, 0, 0);
			iLocal_3481 = 0;
			return 1;
		}
	}
	return 0;
}







void func_642(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x7B9AE
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
	int iVar10;
	
	if (iLocal_93 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_93 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1286;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = GlobalFunc_2916(iParam0, iParam1);
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
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (GlobalFunc_5657(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
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
			if (GlobalFunc_2915(iParam0, iParam1) < fParam5)
			{
				fVar1 = GlobalFunc_3022(iParam0, iParam1);
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
			iLocal_94 = 1;
		}
		else if (iLocal_94)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_94 = 0;
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
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1293 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1294 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1284 - fLocal_1285));
							fVar1 = (fVar1 + fLocal_1285);
							fLocal_1283 = fVar1;
							if (fLocal_1283 < fLocal_1285)
							{
								fLocal_1283 = fLocal_1285;
							}
							if (fLocal_1283 > fLocal_1284)
							{
								fLocal_1283 = fLocal_1284;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1283);
						}
					}
				}
			}
		}
	}
}






void func_648()//Position - 0x7BE92
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("MARTIN_1_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_FOCUS_CAM");
	}
	if (iLocal_3685 == 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_4953(1, 1, 0))
		{
			if (fLocal_3874 < 117498f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
				{
					GlobalFunc_10365(&uLocal_27, iLocal_3938, 0, 0, 1, 1, 1);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_4169[0]) && !HUD::DOES_BLIP_EXIST(uLocal_4169[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
				{
					GlobalFunc_10365(&uLocal_27, iLocal_3938, 0, 0, 1, 1, 1);
				}
			}
			else
			{
				GlobalFunc_4948(&uLocal_27, 0, 0);
			}
		}
		else
		{
			GlobalFunc_4948(&uLocal_27, 0, 0);
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_4953(1, 1, 0))
	{
		if (iLocal_3664 == 0)
		{
			if (iLocal_3685 == 1)
			{
				if (iLocal_3739[0] == 0)
				{
					GlobalFunc_159("BFHELPTXT2", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_3739[0] = 1;
				}
				else if (iLocal_3739[1] == 0)
				{
					if (SYSTEM::TIMERB() > 15000)
					{
						GlobalFunc_159("BFHELPTXT2", -1);
						SYSTEM::SETTIMERB(0);
						iLocal_3739[1] = 1;
					}
				}
				else if (iLocal_3739[2] == 0)
				{
					if (SYSTEM::TIMERB() > 10000)
					{
						GlobalFunc_159("BFHELPTXT2", -1);
						SYSTEM::SETTIMERB(0);
						iLocal_3739[2] = 1;
					}
				}
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				iLocal_3664 = 1;
			}
		}
	}
	else if (GlobalFunc_74("BFHELPTXT2"))
	{
		HUD::CLEAR_HELP(1);
	}
}

void func_649()//Position - 0x7C030
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
		{
			if (iLocal_3702[0] == 0)
			{
				if (fLocal_3874 > 17960f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3938, 3000, 0, 4);
					iLocal_3702[0] = 1;
				}
			}
			if (iLocal_3702[1] == 0)
			{
				if (fLocal_3874 > 29010f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3938, 3000, 0, 4);
					iLocal_3702[1] = 1;
				}
			}
			if (iLocal_3702[2] == 0)
			{
				if (fLocal_3874 > 55700f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3938, 3000, 0, 4);
					iLocal_3702[2] = 1;
				}
			}
			if (iLocal_3702[3] == 0)
			{
				if (fLocal_3874 > 65565f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3938, 3000, 0, 4);
					iLocal_3702[3] = 1;
				}
			}
			if (iLocal_3702[4] == 0)
			{
				if (fLocal_3874 > 104000f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3938, 3000, 0, 4);
					iLocal_3702[4] = 1;
				}
			}
			if (iLocal_3702[5] == 0)
			{
				if (fLocal_3874 > 110000f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3938, 3000, 0, 4);
					iLocal_3702[5] = 1;
				}
			}
		}
	}
}

void func_650()//Position - 0x7C15D
{
	if (iLocal_3736 == 0)
	{
		if (fLocal_3874 > 13662f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FMC1", 7, 0, 0, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("SOL1_AIR_TRAFFIC");
						iLocal_3736 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3735 == 0)
	{
		if (fLocal_3874 > 23659f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -253.2f, 1556.2f, 335.9f, 1) < 10f)
						{
							if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_OROAD", 7, 0, 0, 0))
							{
								AUDIO::PREPARE_MUSIC_EVENT("SOL1_BUS_JUMP");
								iLocal_3735 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3734 == 0)
	{
		if (fLocal_3874 > 24701f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1.431795f, 1704.114f, 217.4028f, -89.1462f, 1637.338f, 276.5471f, 26f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_JUMP1", 7, 0, 0, 0))
							{
								iLocal_3734 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3733 == 0)
	{
		if (fLocal_3874 > 30963f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FALL1", 7, 0, 0, 0))
					{
						iLocal_3733 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3732 == 0)
	{
		if (fLocal_3874 > 37858f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3938, 1) < 125f)
							{
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FMC2", 7, 0, 0, 0))
								{
									iLocal_3732 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3731 == 0)
	{
		if (fLocal_3874 > 40402f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FALL2", 7, 0, 0, 0))
					{
						iLocal_3731 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3730 == 0)
	{
		if (fLocal_3874 > 46889f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FALL3", 7, 0, 0, 0))
					{
						iLocal_3730 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3729 == 0)
	{
		if (fLocal_3874 > 53000f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3938, 1) < 125f)
							{
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FMC3", 7, 0, 0, 0))
								{
									iLocal_3729 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3728 == 0)
	{
		if (fLocal_3874 > 60000f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FALL4", 7, 0, 0, 0))
					{
						AUDIO::PREPARE_MUSIC_EVENT("SOL1_TRAIN_JUMP");
						iLocal_3728 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3727 == 0)
	{
		if (fLocal_3874 > 71768f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1496.084f, 3259.302f, 34.68414f, 1526.86f, 3337.125f, 45.19955f, 40f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_JUMP2", 7, 0, 0, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3942, 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUBWAY_TRAIN_HORNS_AIR_HORN", iLocal_3942, 0, 0, 0);
								}
								iLocal_3727 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1538.229f, 3252.865f, 34.07587f, 1526.86f, 3337.125f, 45.19955f, 40f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_JUMP2", 7, 0, 0, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3942, 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUBWAY_TRAIN_HORNS_AIR_HORN", iLocal_3942, 0, 0, 0);
								}
								iLocal_3727 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3726 == 0)
	{
		if (fLocal_3874 > 76555f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FALL5", 7, 0, 0, 0))
					{
						iLocal_3726 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3799 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1970f, 3815f, 34f, 1) < 60f && fLocal_3874 > 84000f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3938, 1) < 125f)
							{
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_TRAILER", 7, 0, 0, 0))
								{
									iLocal_3799 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3725 == 0)
	{
		if (fLocal_3874 > 90000f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3938, 1) < 125f)
							{
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FMC4", 7, 0, 0, 0))
								{
									iLocal_3725 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3724 == 0)
	{
		if (fLocal_3874 > 103000f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_CLIFF", 7, 0, 0, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("SOL1_ALMOST_CRASHED");
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
						}
						iLocal_3724 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3798 == 0)
	{
		if (fLocal_3874 > 117262f)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_FMC5", 7, 0, 0, 0))
					{
						iLocal_3798 = 1;
					}
				}
			}
		}
	}
}




void func_654()//Position - 0x7C8CD
{
	if (iLocal_3715 == 0)
	{
		if (fLocal_3874 > 60000f)
		{
			STREAMING::REQUEST_MODEL(joaat("freight"));
			STREAMING::REQUEST_MODEL(joaat("freightcar"));
			STREAMING::REQUEST_MODEL(joaat("freightcont2"));
			iLocal_3715 = 1;
		}
	}
	if (iLocal_3715 == 1)
	{
		if (iLocal_3619[0] == 0)
		{
			if (fLocal_3874 > 65173f)
			{
				STREAMING::REQUEST_MODEL(joaat("freight"));
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freightcont2"));
				if ((STREAMING::HAS_MODEL_LOADED(joaat("freight")) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2")))
				{
					iLocal_3942 = VEHICLE::CREATE_MISSION_TRAIN(22, 1800.49f, 3504.19f, 37.9f, 1);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
					{
						AUDIO::START_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
					iLocal_3619[0] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3942))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3942))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_3942, (fLocal_3875 * 33.3f));
				if (fLocal_3874 > 90000f)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3942, 1) > 250f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3942))
					{
						VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_3942, 0);
					}
				}
			}
		}
	}
	if (Global_86800 == 0)
	{
		if (iLocal_3717 == 0)
		{
			if (fLocal_3874 > 21000f)
			{
				STREAMING::REQUEST_MODEL(joaat("hauler"));
				STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_TRK");
				iLocal_3717 = 1;
			}
		}
		if (iLocal_3717 == 1)
		{
			if (iLocal_3619[1] == 0)
			{
				STREAMING::REQUEST_MODEL(joaat("hauler"));
				STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_TRK");
				if ((STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_TRK"))
				{
					if (fLocal_3874 > 26640f)
					{
						iLocal_3944 = VEHICLE::CREATE_VEHICLE(joaat("hauler"), 716.3976f, 2266.221f, 49.7731f, 31.2793f, 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3944, 294, "BB_SOL_TRK", 1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3944, "MARTIN_1_PASSING_TRUCKS_GROUP", 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3944, 0))
						{
							iLocal_3915[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3944, 26, joaat("a_m_y_business_01"), -1, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3915[0], 1);
							PED::SET_PED_KEEP_TASK(iLocal_3915[0], 1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[0]));
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hauler"));
						iLocal_3619[1] = 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3944))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3944, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3944))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3944) > 15500f)
						{
							Global_86800 = 1;
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3944))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3944, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3944))
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_3944, fLocal_3875);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3944, iLocal_3939))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3944);
							}
						}
					}
				}
			}
			else
			{
				if (iLocal_3640[1] == 0)
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TRK");
					iLocal_3640[1] = 1;
				}
				if (GlobalFunc_156(iLocal_3944, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3944))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3944, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[0]))
					{
						PED::DELETE_PED(&(iLocal_3915[0]));
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_3944);
				}
			}
		}
	}
	if (iLocal_3718 == 0)
	{
		if (fLocal_3874 > 29000f)
		{
			STREAMING::REQUEST_MODEL(joaat("patriot"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_VAN");
			iLocal_3718 = 1;
		}
	}
	if (iLocal_3718 == 1)
	{
		if (iLocal_3619[2] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("patriot"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_VAN");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("patriot")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_VAN"))
			{
				if (fLocal_3874 > 34302f)
				{
					iLocal_3945 = VEHICLE::CREATE_VEHICLE(joaat("patriot"), 381.9736f, 2468.791f, 45.1115f, 264.3281f, 1, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3945, 294, "BB_SOL_VAN", 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3945, "MARTIN_1_PASSING_TRUCKS_GROUP", 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3945, 0))
					{
						iLocal_3915[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3945, 26, joaat("a_m_y_business_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3915[1], 1);
						PED::SET_PED_KEEP_TASK(iLocal_3915[1], 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[1]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("patriot"));
					iLocal_3619[2] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3945))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3945, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3945))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3945, fLocal_3875);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3945, iLocal_3939))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3945);
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_3640[2] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_VAN");
						iLocal_3640[2] = 1;
					}
					if (GlobalFunc_156(iLocal_3945, PLAYER::PLAYER_PED_ID(), 1) > 150f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3945, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[1]))
						{
							PED::DELETE_PED(&(iLocal_3915[1]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3945);
					}
				}
			}
		}
	}
	if (iLocal_3716 == 0)
	{
		if (fLocal_3874 > 20000f)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS");
			iLocal_3716 = 1;
		}
	}
	if (iLocal_3716 == 1)
	{
		if (iLocal_3619[3] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("bus")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_BUS"))
			{
				if (fLocal_3874 > 25650f)
				{
					PATHFIND::SET_ROADS_IN_AREA(105.7f, 1683f, 230f, -11.8f, 1818.4f, 207f, 0, 1);
					iLocal_3943 = VEHICLE::CREATE_VEHICLE(joaat("bus"), 143.1083f, 1650.007f, 227.9803f, 32.0527f, 1, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3943, 294, "BB_SOL_BUS", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3943, 4000f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3943, 0))
					{
						iLocal_3915[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3943, 26, joaat("a_m_y_business_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3915[2], 1);
						PED::SET_PED_KEEP_TASK(iLocal_3915[2], 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[2]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
					iLocal_3619[3] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3943))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3943, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3943))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3943, (fLocal_3875 * 2.5f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3943, iLocal_3939))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3943);
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_3640[3] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS");
						iLocal_3640[3] = 1;
					}
					if (GlobalFunc_156(iLocal_3943, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3943))
					{
						PATHFIND::SET_ROADS_IN_AREA(105.7f, 1683f, 230f, -11.8f, 1818.4f, 207f, 1, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[2]))
						{
							PED::DELETE_PED(&(iLocal_3915[2]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3943);
					}
				}
			}
		}
	}
	if (iLocal_3719 == 0)
	{
		if (fLocal_3874 > 37000f)
		{
			STREAMING::REQUEST_MODEL(joaat("baller"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BLR");
			iLocal_3719 = 1;
		}
	}
	if (iLocal_3719 == 1)
	{
		if (iLocal_3619[4] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("baller"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BLR");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("baller")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_BLR"))
			{
				if (fLocal_3874 > 42784f)
				{
					iLocal_3946 = VEHICLE::CREATE_VEHICLE(joaat("baller"), 961.7518f, 2697.295f, 39.2009f, 85.8753f, 1, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3946, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3946, 294, "BB_SOL_BLR", 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3946, 0))
					{
						iLocal_3915[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3946, 26, joaat("a_m_y_business_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3915[3], 1);
						PED::SET_PED_KEEP_TASK(iLocal_3915[3], 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[3]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
					iLocal_3619[4] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3946))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3946, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3946))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3946, (fLocal_3875 * 1.5f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_156(iLocal_3946, PLAYER::PLAYER_PED_ID(), 1) < 80f)
						{
							func_655(iLocal_3946);
						}
						if (fLocal_3874 > 62784f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3946))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3946);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3946);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[3]));
							VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BLR");
						}
					}
				}
				else
				{
					if (iLocal_3640[4] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BLR");
						iLocal_3640[4] = 1;
					}
					if (GlobalFunc_156(iLocal_3946, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3946))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[3]))
						{
							PED::DELETE_PED(&(iLocal_3915[3]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3946);
					}
				}
			}
		}
	}
	if (iLocal_3720 == 0)
	{
		if (fLocal_3874 > 33000f)
		{
			STREAMING::REQUEST_MODEL(joaat("dilettante"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_DIL");
			iLocal_3720 = 1;
		}
	}
	if (iLocal_3720 == 1)
	{
		if (iLocal_3619[5] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("dilettante"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_DIL");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("dilettante")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_DIL"))
			{
				if (fLocal_3874 > 38832f)
				{
					iLocal_3947 = VEHICLE::CREATE_VEHICLE(joaat("dilettante"), 1373.666f, 2691.536f, 36.6655f, 101.0761f, 1, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3947, 294, "BB_SOL_DIL", 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3947, 0))
					{
						iLocal_3915[4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3947, 26, joaat("a_m_y_business_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3915[4], 1);
						PED::SET_PED_KEEP_TASK(iLocal_3915[4], 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[4]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dilettante"));
					iLocal_3619[5] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3947))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3947, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3947))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3947, fLocal_3875);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_156(iLocal_3947, PLAYER::PLAYER_PED_ID(), 1) < 80f)
						{
							func_655(iLocal_3947);
						}
					}
					if (fLocal_3874 > 58832f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3947))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3947);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3947);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[4]));
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DIL");
					}
				}
				else
				{
					if (iLocal_3640[5] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DIL");
						iLocal_3640[5] = 1;
					}
					if (GlobalFunc_156(iLocal_3947, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3947))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[4]))
						{
							PED::DELETE_PED(&(iLocal_3915[4]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3947);
					}
				}
			}
		}
	}
	if (iLocal_3721 == 0)
	{
		if (fLocal_3874 > 77000f)
		{
			STREAMING::REQUEST_MODEL(joaat("tornado3"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_TOR");
			iLocal_3721 = 1;
		}
	}
	if (iLocal_3721 == 1)
	{
		if (iLocal_3619[7] == 0)
		{
			if ((STREAMING::HAS_MODEL_LOADED(joaat("tornado3")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_TOR"))
			{
				if (fLocal_3874 > 82241f)
				{
					iLocal_3949 = VEHICLE::CREATE_VEHICLE(joaat("tornado3"), 1890.786f, 3826.833f, 31.3937f, 208.6624f, 1, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3949, 294, "BB_SOL_TOR", 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3949, 0))
					{
						iLocal_3915[6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3949, 26, joaat("a_m_y_business_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3915[6], 1);
						PED::SET_PED_KEEP_TASK(iLocal_3915[6], 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[6]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tornado3"));
					iLocal_3619[7] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3949))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3949, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3949))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3949, (fLocal_3875 * 1.5f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3949, iLocal_3939))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3949);
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_3640[7] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TOR");
						iLocal_3640[7] = 1;
					}
					if (GlobalFunc_156(iLocal_3949, PLAYER::PLAYER_PED_ID(), 1) > 150f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[6]))
						{
							PED::DELETE_PED(&(iLocal_3915[6]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3949);
					}
				}
			}
		}
	}
	if (iLocal_3722 == 0)
	{
		if (fLocal_3874 > 89000f)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
			iLocal_3722 = 1;
		}
	}
	if (iLocal_3722 == 1)
	{
		if (iLocal_3619[8] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("bus")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_BUS2"))
			{
				if (fLocal_3874 > 94000f)
				{
					iLocal_3950 = VEHICLE::CREATE_VEHICLE(joaat("bus"), 2501.225f, 4119.913f, 37.4645f, 153.5773f, 1, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3950, 294, "BB_SOL_BUS2", 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3950, 0))
					{
						iLocal_3915[7] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3950, 26, joaat("a_m_y_business_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3915[7], 1);
						PED::SET_PED_KEEP_TASK(iLocal_3915[7], 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[7]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_business_01"));
					iLocal_3619[8] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3950))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3950, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3950))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3950, (fLocal_3875 * 1.2f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_156(iLocal_3950, PLAYER::PLAYER_PED_ID(), 1) < 80f)
						{
							func_655(iLocal_3950);
						}
					}
					if (fLocal_3874 > 110000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3950))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3950);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3950);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3915[7]));
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
					}
				}
				else
				{
					if (iLocal_3640[8] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
						iLocal_3640[8] = 1;
					}
					if (GlobalFunc_156(iLocal_3950, PLAYER::PLAYER_PED_ID(), 1) > 150f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[7]))
						{
							PED::DELETE_PED(&(iLocal_3915[7]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3950);
					}
				}
			}
		}
	}
	if (iLocal_3678 == 0)
	{
		if (fLocal_3874 > 65000f)
		{
			STREAMING::REQUEST_MODEL(joaat("dump"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_DMP");
			iLocal_3678 = 1;
		}
	}
	else if (iLocal_3679 == 0)
	{
		if (fLocal_3874 > 70000f)
		{
			if ((STREAMING::HAS_MODEL_LOADED(joaat("dump")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_DMP"))
			{
				iLocal_3954 = VEHICLE::CREATE_VEHICLE(joaat("dump"), 2229.238f, 3861.112f, 32.4406f, 66.3172f, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dump"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("dump"), 1);
				iLocal_3924 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3954, 26, joaat("s_m_y_construct_01"), -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3924, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3954, "MARTIN_1_DUMP_TRUCK_GROUP", 0);
				iLocal_3679 = 1;
			}
		}
	}
	else if (iLocal_3680 == 0)
	{
		if (fLocal_3874 > 79600f)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3954, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3954))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3954, 294, "BB_SOL_DMP", 1);
					iLocal_3680 = 1;
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3954))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3954, 0))
			{
				if (fLocal_3874 > 90000f)
				{
					Local_3855 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					Local_3858 = { ENTITY::GET_ENTITY_COORDS(iLocal_3954, 1) };
					if (Local_3855.x < Local_3858.x)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
						}
					}
					else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
					{
						AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
					}
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
			{
				AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
		{
			AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
		}
		if (iLocal_3681 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3954, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3954))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3954, (fLocal_3875 * 1.2f));
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3954) > 52843f)
					{
						func_655(iLocal_3954);
						iLocal_3681 = 1;
					}
					if (fLocal_3874 > 100000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3954))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3954, 0);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3954);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3954);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3924);
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DMP");
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3954))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3954))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DMP");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3954, 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3954, 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3954))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3924))
						{
							PED::DELETE_PED(&iLocal_3924);
						}
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3954, 0);
						VEHICLE::DELETE_VEHICLE(&iLocal_3954);
					}
				}
			}
		}
	}
	if (fLocal_3874 > 45000f)
	{
		if (iLocal_3699 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3951))
				{
					iLocal_3951 = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 754.9153f, 2688.456f, 39.1427f, 301.681f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3951, 1);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3951, 0, 0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bobcatxl"));
					iLocal_3699 = 1;
				}
			}
		}
		if (iLocal_3694 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_barman_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_barman_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3925[0]))
				{
					iLocal_3925[0] = PED::CREATE_PED(26, joaat("s_m_y_barman_01"), 755.7743f, 2691.34f, 39.0932f, 260.5786f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3925[0], 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_barman_01"));
					iLocal_3694 = 1;
				}
			}
		}
		if (iLocal_3693 == 0)
		{
			if (iLocal_3694 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3874 > 50000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3925[0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[0], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3925[0], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
								iLocal_3693 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3925[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3925[0]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[0], "missmartin1@pointing_sky1@base", "base", 3))
				{
					if (fLocal_3874 > 52000f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3951, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_3925[0], iLocal_3951, 20000, -1, 2f, 1, 0);
							PED::SET_PED_KEEP_TASK(iLocal_3925[0], 1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3925[0]));
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3951);
						}
					}
				}
			}
		}
	}
	if (fLocal_3874 > 75000f)
	{
		if (iLocal_3698 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("a_m_m_tramp_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_tramp_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3925[1]))
				{
					iLocal_3925[1] = PED::CREATE_PED(26, joaat("a_m_m_tramp_01"), 1663.005f, 3602.342f, 34.5846f, 308.4162f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3925[1], 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_tramp_01"));
					iLocal_3698 = 1;
				}
			}
		}
		if (iLocal_3696 == 0)
		{
			if (iLocal_3698 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3874 > 78000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3925[1]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[1], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3925[1], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
								iLocal_3696 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3925[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3925[1]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[1], "missmartin1@pointing_sky1@base", "base", 3) || fLocal_3874 > 99000f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3925[1]));
				}
			}
		}
	}
	if (fLocal_3874 > 100000f)
	{
		if (iLocal_3697 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_barman_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_barman_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3925[2]))
				{
					iLocal_3925[2] = PED::CREATE_PED(26, joaat("s_m_y_barman_01"), 2672.271f, 4338.626f, 44.4309f, 354.954f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3925[2], 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_barman_01"));
					iLocal_3697 = 1;
				}
			}
		}
		if (iLocal_3695 == 0)
		{
			if (iLocal_3697 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3874 > 105000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3925[2]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[2], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3925[2], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
								iLocal_3695 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3925[2]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3925[2]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[2], "missmartin1@pointing_sky1@base", "base", 3))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3925[2]));
				}
			}
		}
	}
	if (fLocal_3874 > 109000f)
	{
		if (iLocal_3752 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_lathandy_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_lathandy_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3925[3]))
				{
					iLocal_3925[3] = PED::CREATE_PED(26, joaat("s_m_m_lathandy_01"), 2825.17f, 4616.926f, 45.5896f, 14.0262f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3925[3], 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_lathandy_01"));
					iLocal_3752 = 1;
				}
			}
		}
		if (iLocal_3751 == 0)
		{
			if (iLocal_3752 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3874 > 113000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3925[3]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[3], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3925[3], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
								iLocal_3751 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3925[3]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3925[3]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3925[3], "missmartin1@pointing_sky1@base", "base", 3))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3925[3]));
					STREAMING::REMOVE_ANIM_DICT("missmartin1@pointing_sky1@base");
				}
			}
		}
	}
}

void func_655(int iParam0)//Position - 0x7E0E9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_656(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

void func_656(int iParam0)//Position - 0x7E10B
{
	float fVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, 1);
				if (bLocal_110)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

int func_657()//Position - 0x7E1A4
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	GlobalFunc_7629();
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3938);
		}
	}
	if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		GlobalFunc_5077();
	}
	if (iLocal_3714 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
		{
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("player_two"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sanchez")))
			{
				iLocal_3939 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Local_3828, 328.7128f, 1, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3939, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("player_two")))
			{
				if (func_501(&(uLocal_3259[2]), 2, iLocal_3939, -1, 1, 0, 0))
				{
					func_425(uLocal_3259[2], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_173(&uLocal_3303, 2, uLocal_3259[2], "TREVOR", 0, 1);
				}
			}
		}
		else if (GlobalFunc_9134(&uLocal_3259, 2))
		{
			if (func_746(&uLocal_3259, 1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952) && ENTITY::DOES_ENTITY_EXIST(uLocal_3259[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_3259[0], iLocal_3952, 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_3259[0], iLocal_3952, -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3259[0], 1);
						}
					}
				}
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Angry_1", 0);
				GlobalFunc_173(&uLocal_3303, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				GlobalFunc_173(&uLocal_3303, 0, 0, "MICHAEL", 0, 1);
				iLocal_3714 = 1;
			}
		}
	}
	if (!iLocal_3481)
	{
		iLocal_3749 = 0;
		iLocal_3714 = 0;
		iLocal_3712 = 0;
		iLocal_3666 = 0;
		iLocal_3890 = 0;
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_4163))
		{
			HUD::REMOVE_BLIP(&uLocal_4163);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -464.7f, 1255.5f, 317f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.0994f);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iLocal_3938, 3);
		}
		func_616();
		HUD::CLEAR_HELP(1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
		{
			AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
		}
		MISC::CLEAR_AREA(-401f, 1211f, 325f, 70f, 1, 0, 0, 0);
		PATHFIND::SET_ROADS_IN_AREA(Local_3843, Local_3846, 0, 1);
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		iLocal_3666 = iLocal_3666;
		uLocal_3895 = uLocal_3895;
		iLocal_4177 = 1;
		iLocal_6662 = 0;
		bLocal_6663 = false;
		iLocal_6664 = 0;
		iLocal_6665 = 0;
		iLocal_6666 = 0;
		iLocal_6667 = 0;
		iLocal_6668 = 0;
		iLocal_6669 = 0;
		iLocal_6670 = 0;
		iLocal_6671 = 0;
		iLocal_6701 = 0;
		AUDIO::PREPARE_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[1]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[1], 0);
		}
		iLocal_3507[2] = 0;
		GlobalFunc_8380(1, 1, 1, 0);
		AUDIO::STOP_STREAM();
		SYSTEM::SETTIMERB(0);
		iLocal_3749 = 1;
		iLocal_3481 = 1;
	}
	else
	{
		switch (iLocal_3890)
		{
			case 0:
				GlobalFunc_6093();
				if (!iLocal_3712)
				{
					if (!iLocal_3711)
					{
						iLocal_3711 = AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_SHOT_DOWN_MASTER", 0);
					}
				}
				if (!iLocal_6662 && SYSTEM::TIMERB() > iLocal_6685)
				{
					GlobalFunc_4956();
					HUD::CLEAR_PRINTS();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
					{
						AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
					{
						AUDIO::START_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
					}
					func_9(&Local_3217, 0);
					func_12(&Local_3217, 1);
					SYSTEM::SETTIMERB(0);
					iLocal_6662 = 1;
					Global_24454 = 0;
				}
				if (iLocal_6662 && !bLocal_6663)
				{
					if (!iLocal_3712)
					{
						if (iLocal_3711)
						{
							AUDIO::PLAY_STREAM_FRONTEND();
							iLocal_3712 = 1;
						}
					}
					if (!iLocal_6664 && SYSTEM::TIMERB() > iLocal_6686)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_3895, "SOLOMON_1_JET_SHOT_EXPLODE", iLocal_3938, 0, 0, 0);
									AUDIO::TRIGGER_MUSIC_EVENT("SOL1_ENGINE_HIT");
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_sol1_sniper_impact", iLocal_3938, Local_3831 + Local_6710, Local_6713, fLocal_6716, 0, 0, 0);
								}
							}
						}
						iLocal_6664 = 1;
					}
					if (!iLocal_6665 && SYSTEM::TIMERB() > iLocal_6687)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
								{
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[0]))
									{
										GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[0], 0);
									}
									uLocal_4038[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke_loop", iLocal_3938, Local_3831, Local_3861, 1065353216, 0, 0, 0);
								}
							}
						}
						iLocal_6665 = 1;
					}
					if (!iLocal_6666 && SYSTEM::TIMERB() > iLocal_6688)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[1]))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[1], 0);
						}
						iLocal_6666 = 1;
					}
					if (!iLocal_3507[2] && SYSTEM::TIMERB() > iLocal_6689)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
								{
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[0]))
									{
										GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[0], 0);
									}
									uLocal_4038[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke_loop", iLocal_3938, Local_3831, Local_3861, 1065353216, 0, 0, 0);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(uLocal_4038[1], 2f);
									iLocal_3507[2] = 1;
								}
							}
						}
					}
					if (!iLocal_6668 && SYSTEM::TIMERB() > iLocal_6691)
					{
						GlobalFunc_4935();
						HUD::CLEAR_PRINTS();
						GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_PLANEHIT", 7, 0, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
						iLocal_6668 = 1;
					}
					if (!iLocal_6667 && SYSTEM::TIMERB() > iLocal_6690)
					{
						GlobalFunc_4935();
						HUD::CLEAR_PRINTS();
						GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_HIT", 7, 0, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
						iLocal_6667 = 1;
					}
					if (func_660(&uLocal_4178, &uLocal_5419))
					{
						SYSTEM::SETTIMERA(0);
						bLocal_6663 = true;
					}
				}
				if (bLocal_6663)
				{
					if (!iLocal_6670)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
						}
						iLocal_6670 = 1;
					}
					if (!iLocal_6671)
					{
						if (func_658() || SYSTEM::TIMERA() > iLocal_6704)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_3939))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3939))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3939);
									}
								}
							}
							if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
							iLocal_3890++;
							iLocal_6671 = 1;
						}
					}
				}
				break;
			
			case 1:
				iLocal_3890++;
				break;
		}
		if (iLocal_3890 >= 2)
		{
			func_628(1);
			GlobalFunc_8380(0, 1, 1, 0);
			iLocal_3481 = 0;
			return 1;
		}
	}
	return 0;
}

int func_658()//Position - 0x7E875
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	GlobalFunc_255(&iVar0, &iVar1, &uVar2, &uVar3, 0, 0);
	if (((IntToFloat(iVar0) > 0.5f || IntToFloat(iVar0) < -0.5f) || IntToFloat(iVar1) > 0.5f) || IntToFloat(iVar1) < -0.5f)
	{
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 71) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 71))
	{
		return 1;
	}
	return 0;
}


int func_660(var uParam0, var uParam1)//Position - 0x7E9E8
{
	var uVar0;
	float fVar1;
	
	switch (iLocal_4177)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			CAM::DESTROY_ALL_CAMS(0);
			func_698(uParam0, &iLocal_3938);
			GlobalFunc_7718(uParam0);
			CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam0->f_1, iLocal_6694 + 1, 4);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			CAM::SET_WIDESCREEN_BORDERS(true, 500);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3938);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, 294, "DGTitanEntry", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, fLocal_6692);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, fLocal_6693);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3938, 1);
					}
				}
			}
			iLocal_6701 = 0;
			iLocal_6669 = 0;
			iLocal_6718 = 0;
			iLocal_6719 = 0;
			iLocal_6708 = 0;
			iLocal_6709 = 0;
			bLocal_6722 = false;
			iLocal_4177 = 2;
		
		case 2:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				uVar0 = uVar0;
				uVar0 = func_667(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (!iLocal_6701)
				{
					if (CAM::IS_CAM_SPLINE_PAUSED(uParam0->f_1))
					{
						CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam0->f_1, iLocal_6694 + 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3938);
									}
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, 294, "DGTitanCrash", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, fLocal_6695);
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, fLocal_6696);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3938, 1);
								}
							}
						}
						iLocal_6701 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
						{
							CAM::DESTROY_CAM(uParam0->f_1, 0);
						}
					}
					CAM::DESTROY_ALL_CAMS(0);
					iLocal_4177 = 3;
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
		
		case 3:
			GlobalFunc_5810(&uLocal_4145);
			GlobalFunc_669(&uLocal_4145, iLocal_3939, 2, 1.3f, 1000, 1000, 700, 700, 1045220557);
			GlobalFunc_668(&uLocal_4145, 22f, 0f, 5f);
			RECORDING::_0x293220DA1B46CEBC(8f, 2f, 3);
			func_663(uParam1, &iLocal_3938, &iLocal_3939);
			GlobalFunc_7718(uParam1);
			CAM::SET_CAM_ACTIVE(uParam1->f_1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3939))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3939))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3939);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3939, 294, "DGBFReady", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3939, fLocal_6702);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3939, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3938);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, 294, "DGTitanCrash", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, fLocal_6697);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, fLocal_6698);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3938, 1);
					}
				}
			}
			iLocal_6721 = -1;
			iLocal_6720 = MISC::GET_GAME_TIMER();
			SYSTEM::SETTIMERA(0);
			iLocal_4177 = 4;
		
		case 4:
			if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
			{
				uVar0 = func_667(uParam1);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam1->f_1);
				if (!iLocal_6708)
				{
					if (fVar1 >= fLocal_6706)
					{
						iLocal_6705 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_6705, "In", "SHORT_PLAYER_SWITCH_SOUND_SET", 1);
						iLocal_6708 = 1;
					}
				}
				if (!iLocal_6709)
				{
					if (fVar1 >= fLocal_6707)
					{
						AUDIO::STOP_SOUND(iLocal_6705);
						iLocal_6709 = 1;
					}
				}
				if (!iLocal_6719)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_6720 + 1565)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorMid", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_6719 = 1;
					}
				}
				if (!iLocal_6669)
				{
					if (SYSTEM::TIMERA() > iLocal_6703)
					{
						if (iLocal_3711 == 1)
						{
							AUDIO::STOP_STREAM();
							iLocal_3711 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -393f, 1223f, 329f, 2000, 2096, 4);
							}
						}
						AUDIO::TRIGGER_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
						iLocal_6669 = 1;
					}
				}
				if (!iLocal_6718)
				{
					if (fVar1 >= fLocal_6717)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_6721 = MISC::GET_GAME_TIMER() + 200;
						iLocal_6718 = 1;
					}
				}
				if (iLocal_6721 != -1 && MISC::GET_GAME_TIMER() >= iLocal_6721)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_6721 = -1;
				}
				if (fVar1 >= 1f)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
					{
						bLocal_6722 = true;
					}
					else
					{
						bLocal_6722 = GlobalFunc_7208(&uLocal_4145, 1, 1, 1, 0, 0, 0);
					}
					if (bLocal_6722)
					{
						MISC::SET_TIME_SCALE(1f);
						if (CAM::DOES_CAM_EXIST(uParam1->f_1))
						{
							if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
							{
								CAM::DESTROY_CAM(uParam1->f_1, 0);
							}
						}
						CAM::DESTROY_ALL_CAMS(0);
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						AUDIO::STOP_SOUND(iLocal_6705);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3938))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3938);
									}
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, 1, "BB_SOL_JET", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, fLocal_6699);
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, fLocal_6700);
									VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGTitanCrash");
								}
							}
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						}
						STREAMING::REMOVE_ANIM_DICT(sLocal_6660);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						CAM::SET_WIDESCREEN_BORDERS(false, 500);
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						iLocal_4177 = 0;
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}



void func_663(var uParam0, int iParam1, int iParam2)//Position - 0x7F342
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 9.5194f, 42.635f, -0.8512f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 7.8905f, -0.0652f, 5.4872f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 1f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1000;
		uParam0->f_10[1 /*57*/].f_6 = { 14.4904f, 30.6943f, -3.5751f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 2.447f, -0.7788f, 2.6008f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 24.5f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 2f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 1f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.9f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0.8f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 900;
		uParam0->f_10[2 /*57*/].f_6 = { 16.7361f, 31.1127f, -5.2246f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 1.5855f, -0.5112f, 1.987f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 24.5f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 1f;
		uParam0->f_10[2 /*57*/].f_28 = 2;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.3f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 600;
		uParam0->f_10[3 /*57*/].f_6 = { 24.6776f, 34.653f, -18.4241f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { 23.3133f, 36.4863f, 3.5606f };
		uParam0->f_10[3 /*57*/].f_18 = 1;
		uParam0->f_10[3 /*57*/].f_19 = 1;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 24.5f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 1f;
		uParam0->f_10[3 /*57*/].f_53 = 0;
		uParam0->f_10[3 /*57*/].f_23 = 1f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 50;
		uParam0->f_10[3 /*57*/].f_42 = 50;
		uParam0->f_10[3 /*57*/].f_43 = 100;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_54 = 1;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 0;
		uParam0->f_10[5 /*57*/].f_6 = { 0.9194f, 2.7878f, 6.4911f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 13.0044f, 0f, 142.8329f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 40f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 1f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 600;
		uParam0->f_10[6 /*57*/].f_6 = { 2.1044f, 3.4443f, 0.9265f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 0.1714f, 0.304f, 1.684f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0.75f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = -0.4f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 700;
		uParam0->f_10[7 /*57*/].f_6 = { 1.3806f, 2.0677f, 0.2982f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -0.1853f, 0.2172f, 0.6513f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 40f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 1f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 0;
		uParam0->f_10[7 /*57*/].f_23 = 0.75f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[8 /*57*/].f_2 = 0;
		uParam0->f_10[8 /*57*/].f_3 = -1;
		uParam0->f_10[8 /*57*/].f_4 = 0;
		uParam0->f_10[8 /*57*/].f_5 = 300;
		uParam0->f_10[8 /*57*/].f_6 = { 1.3811f, 1.8374f, 0.2559f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { 8.5434f, 0f, 137.2264f };
		uParam0->f_10[8 /*57*/].f_18 = 0;
		uParam0->f_10[8 /*57*/].f_19 = 0;
		uParam0->f_10[8 /*57*/].f_20 = 0;
		uParam0->f_10[8 /*57*/].f_21 = 40f;
		uParam0->f_10[8 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_27 = 0;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0f;
		uParam0->f_10[8 /*57*/].f_53 = 0;
		uParam0->f_10[8 /*57*/].f_23 = 0.75f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 1f;
		uParam0->f_10[8 /*57*/].f_34 = 0;
		uParam0->f_10[8 /*57*/].f_35 = 0f;
		uParam0->f_10[8 /*57*/].f_36 = 0;
		uParam0->f_10[8 /*57*/].f_37 = 0;
		uParam0->f_10[8 /*57*/].f_39 = 0f;
		uParam0->f_10[8 /*57*/].f_40 = 0f;
		uParam0->f_10[8 /*57*/].f_41 = 0;
		uParam0->f_10[8 /*57*/].f_42 = 0;
		uParam0->f_10[8 /*57*/].f_43 = 0;
		uParam0->f_10[8 /*57*/].f_38 = 0f;
		uParam0->f_10[8 /*57*/].f_45 = 0;
		uParam0->f_10[8 /*57*/].f_46 = 0;
		uParam0->f_10[8 /*57*/].f_47 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 9;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Martin1_JetToBike.txt";
		uParam0->f_1225 = "CameraInfo_Martin1_JetToBike.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
	uParam0->f_4[1] = *iParam2;
}




int func_667(var uParam0)//Position - 0x8035E
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_76 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_76 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_76 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_76 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_76);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		GlobalFunc_674(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						
						case 2:
							sVar2 = "switch_cam_1";
							break;
						
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							GlobalFunc_5158(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						
						case 3:
							GlobalFunc_5158(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), 0);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::_0x1CBA05AE7BD7EE05(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(GlobalFunc_673(), ""))
				{
					GlobalFunc_5158(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				GlobalFunc_672(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			GlobalFunc_672(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::_0xE3E2C1B4C59DBC77(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, 1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		GlobalFunc_671(0, 0, 1, 1);
	}
	else
	{
		GlobalFunc_671(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	GlobalFunc_670(uParam0);
	return iVar0;
}































void func_698(var uParam0, int iParam1)//Position - 0x81ED1
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 2.8408f, 12.3731f, 0.1466f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 2.2061f, -0.0863f, 0.6487f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 25f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0.1f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 600;
		uParam0->f_10[1 /*57*/].f_6 = { 2.7632f, 10.8777f, 0.202f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 2.1944f, -0.0942f, 0.5753f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 25f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 2500;
		uParam0->f_10[2 /*57*/].f_6 = { 2.5059f, 7.8159f, 0.3064f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 1.9644f, -0.1365f, 0.1968f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 25f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 1f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 1;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 2.56f, 74.1566f, 3.0641f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -8.339f, 0.0002f, -175.0362f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 1f;
		uParam0->f_10[4 /*57*/].f_28 = 2;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 1;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 3000;
		uParam0->f_10[5 /*57*/].f_6 = { 3.8913f, -5.8747f, 0.5965f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -3.51f, -0.1071f, -176.1688f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 30f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 1f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 1f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_54 = 1;
		uParam0->f_10[7 /*57*/].f_2 = 1;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 0;
		uParam0->f_10[7 /*57*/].f_6 = { 16.2416f, -41.4694f, -2.3709f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 3.018f, -0.2268f, 9.4804f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 45f;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 1f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[8 /*57*/].f_2 = 0;
		uParam0->f_10[8 /*57*/].f_3 = -1;
		uParam0->f_10[8 /*57*/].f_4 = 0;
		uParam0->f_10[8 /*57*/].f_5 = 3000;
		uParam0->f_10[8 /*57*/].f_6 = { 12.4154f, -42.9466f, -6.2632f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { 0.5307f, -0.4107f, 6.1259f };
		uParam0->f_10[8 /*57*/].f_18 = 0;
		uParam0->f_10[8 /*57*/].f_19 = 0;
		uParam0->f_10[8 /*57*/].f_20 = 0;
		uParam0->f_10[8 /*57*/].f_21 = 45f;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0f;
		uParam0->f_10[8 /*57*/].f_53 = 2;
		uParam0->f_10[8 /*57*/].f_23 = 1f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 1f;
		uParam0->f_10[8 /*57*/].f_34 = 0;
		uParam0->f_10[8 /*57*/].f_35 = 0f;
		uParam0->f_10[8 /*57*/].f_36 = 0;
		uParam0->f_10[8 /*57*/].f_37 = 0;
		uParam0->f_10[8 /*57*/].f_39 = 0f;
		uParam0->f_10[8 /*57*/].f_40 = 0f;
		uParam0->f_10[8 /*57*/].f_41 = 0;
		uParam0->f_10[8 /*57*/].f_42 = 0;
		uParam0->f_10[8 /*57*/].f_43 = 0;
		uParam0->f_10[8 /*57*/].f_38 = 0f;
		uParam0->f_10[8 /*57*/].f_45 = 0;
		uParam0->f_10[8 /*57*/].f_46 = 0;
		uParam0->f_10[8 /*57*/].f_47 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 9;
		uParam0->f_1218 = 0;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Martin1_PlaneShotScene.txt";
		uParam0->f_1225 = "CameraInfo_Martin1_PlaneShotScene.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
}




int func_702()//Position - 0x82C34
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
		{
			if (iLocal_6684 == 0)
			{
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_3938, 3);
				iLocal_6684 = 1;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
			{
			}
		}
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	GlobalFunc_7629();
	GlobalFunc_5077();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	PAD::_0x7F4724035FDCA1DD(0);
	if (iLocal_3481)
	{
		if (iLocal_3900 == 0)
		{
			if (iLocal_6676 == 0)
			{
				if (AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_HIT_1_MASTER", 0))
				{
					iLocal_6676 = 1;
				}
			}
		}
		if (iLocal_3900 == 1 && iLocal_6672 == 1)
		{
			if (iLocal_6677 == 0)
			{
				if (AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_HIT_2_MASTER", 0))
				{
					iLocal_6677 = 1;
				}
			}
		}
	}
	Global_24454 = 1;
	if (!iLocal_3481)
	{
		func_577(1, "STAGE_SHOOT_PLANE", 0, 0, 0, 1);
		iLocal_3749 = 0;
		VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanCrash");
		CUTSCENE::_0xC61B86C9F61EB404(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		MISC::CLEAR_AREA(Local_3822, 5f, 1, 0, 0, 0);
		bLocal_3505 = false;
		bLocal_3504 = false;
		iLocal_3506 = 0;
		iLocal_3669 = 0;
		iLocal_3677 = 0;
		iLocal_3684 = 0;
		iLocal_3689 = 0;
		iLocal_3738 = 0;
		iLocal_3765 = 0;
		iLocal_6661 = 0;
		iLocal_6672 = 0;
		iLocal_6673 = 0;
		iLocal_6674 = 0;
		iLocal_6676 = 0;
		iLocal_6677 = 0;
		iLocal_6678 = 0;
		iLocal_6679 = 0;
		iLocal_6680 = 0;
		iLocal_6681 = 0;
		iLocal_6682 = 0;
		iLocal_6683 = 0;
		iLocal_6684 = 0;
		iLocal_3819 = 0;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		iLocal_3900 = 0;
		iLocal_3889 = 0;
		iLocal_3893 = 0;
		iLocal_3903 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_AREA(-318.28f, 1398.18f, 351.69f, 170f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-397.8f, 1205.1f, 324.8f, 50f, 1, 0, 0, 0);
		func_616();
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
		{
			AUDIO::START_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
		}
		if (iLocal_3778 == 1)
		{
			func_711(&uLocal_3468, 0, 0, 2000, 1, 1, 0, 1);
			if (iLocal_3686 == 0)
			{
				func_9(&Local_3217, 1);
				iLocal_3686 = 1;
			}
			iLocal_3688 = 1;
		}
		iLocal_3688 = 1;
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -455.6177f, 1083.254f, 326.6815f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.0994f);
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		SYSTEM::SETTIMERB(0);
		iLocal_3891 = 0;
		iLocal_3890 = 0;
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			if (GlobalFunc_188())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			GlobalFunc_4967(iLocal_3952, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		GlobalFunc_702(1, 1, 1);
		iLocal_3749 = 1;
		iLocal_3481 = 1;
	}
	else
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		if (!iLocal_6661)
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_6660);
			iLocal_6661 = 1;
		}
		PAD::DISABLE_CONTROL_ACTION(2, 205, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 226, 1);
		PAD::SET_PAD_SHAKE(0, 9, 0);
		switch (iLocal_3890)
		{
			case 0:
				if (iLocal_3684 == 0 && iLocal_3675 == 0)
				{
					if (SYSTEM::TIMERB() > 1000)
					{
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(800);
							iLocal_3684 = 1;
						}
					}
				}
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &uLocal_3840))
				{
				}
				if (!bLocal_3505)
				{
					if (iLocal_3900 == 1)
					{
						if (iLocal_6672 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
								{
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3938);
								}
							}
							if (!CAM::DOES_CAM_EXIST(uLocal_4176) && MISC::GET_GAME_TIMER() > iLocal_3889 + 500)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::CLEAR_HELP(1);
								}
								HUD::CLEAR_PRINTS();
								iLocal_6678 = 1;
								func_9(&Local_3217, 0);
								iLocal_4176 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_FOV(iLocal_4176, 22.4f);
								CAM::SHAKE_CAM(iLocal_4176, "SKY_DIVING_SHAKE", 1.5f);
								CAM::ATTACH_CAM_TO_ENTITY(iLocal_4176, iLocal_3938, 4.88167f, 6.58488f, 0.16096f, 1);
								CAM::POINT_CAM_AT_ENTITY(iLocal_4176, iLocal_3938, 1.2611f, -2.12109f, 0.750921f, 1);
								CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
								HUD::DISPLAY_RADAR(false);
								HUD::DISPLAY_HUD(false);
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::START_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								if (iLocal_6676 == 1)
								{
									AUDIO::PLAY_STREAM_FRONTEND();
								}
								iLocal_3901 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_6675 == 0)
							{
								if (CAM::DOES_CAM_EXIST(iLocal_4176) && MISC::GET_GAME_TIMER() > iLocal_3901 + 400)
								{
									uLocal_4038[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke", iLocal_3938, Local_3831, Local_3861, 1065353216, 0, 0, 0);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(uLocal_4038[0], 2f);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_4038[0], "Shot1", 1f, 0);
									iLocal_3901 = MISC::GET_GAME_TIMER();
									RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
									iLocal_6675 = 1;
								}
							}
							if (iLocal_6675 == 1 && MISC::GET_GAME_TIMER() > iLocal_3901 + 2500)
							{
								iLocal_6678 = 0;
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								CAM::DESTROY_CAM(iLocal_4176, 0);
								func_9(&Local_3217, 1);
								Local_3217.f_15 = 4f;
								iLocal_6672 = 1;
								GlobalFunc_159("M1_HELP3", -1);
							}
						}
					}
					if (iLocal_3900 == 2)
					{
						if (iLocal_6672 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
								{
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3938);
								}
							}
							if (!CAM::DOES_CAM_EXIST(iLocal_4176) && MISC::GET_GAME_TIMER() > iLocal_3889 + 500)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::CLEAR_HELP(1);
								}
								HUD::CLEAR_PRINTS();
								iLocal_6678 = 1;
								func_9(&Local_3217, 0);
								iLocal_4176 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_FOV(iLocal_4176, 22.4f);
								CAM::SHAKE_CAM(iLocal_4176, "SKY_DIVING_SHAKE", 1.5f);
								CAM::ATTACH_CAM_TO_ENTITY(iLocal_4176, iLocal_3938, 6.63932f, 5.91098f, 0.482164f, 1);
								CAM::POINT_CAM_AT_ENTITY(iLocal_4176, iLocal_3938, 1.87226f, -2.71828f, 0.671346f, 1);
								CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
								HUD::DISPLAY_RADAR(false);
								HUD::DISPLAY_HUD(false);
								if (iLocal_6677 == 1)
								{
									AUDIO::PLAY_STREAM_FRONTEND();
								}
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::START_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								iLocal_3901 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_6675 == 0)
							{
								if (CAM::DOES_CAM_EXIST(iLocal_4176) && MISC::GET_GAME_TIMER() > iLocal_3901 + 400)
								{
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[0]))
									{
										GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_4038[0], "Shot2", 1f, 0);
									}
									iLocal_3901 = MISC::GET_GAME_TIMER();
									RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
									iLocal_6675 = 1;
								}
							}
							if (iLocal_6675 == 1 && MISC::GET_GAME_TIMER() > iLocal_3901 + 2500)
							{
								iLocal_6678 = 0;
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								AUDIO::STOP_STREAM();
								CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
								CAM::DESTROY_CAM(iLocal_4176, 0);
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								func_9(&Local_3217, 1);
								Local_3217.f_15 = 4f;
								iLocal_6672 = 1;
							}
						}
					}
					if (iLocal_3900 == 3)
					{
						if (iLocal_6672 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[0]))
							{
								GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_4038[0], "Shot3", 1f, 0);
							}
							iLocal_6672 = 1;
						}
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						bLocal_3504 = true;
						bLocal_3505 = true;
						iLocal_3890 = 1;
						GlobalFunc_571(0, -1);
					}
					if (!Local_3217)
					{
					}
					else
					{
						if (iLocal_3506 == 0)
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_SOL_JET");
							VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGBFReady");
							iLocal_3506 = 1;
						}
						if (!bLocal_3504)
						{
							if (iLocal_3675 == 0)
							{
								if (iLocal_6674 == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_159("M1_HELP2", -1);
										iLocal_6674 = 1;
									}
								}
								if (iLocal_6674 == 1)
								{
									if (iLocal_6673 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											GlobalFunc_159("M1_HELP1", -1);
											iLocal_6673 = 1;
										}
									}
								}
								if (iLocal_3765 == 0 && iLocal_3802 == 0)
								{
									GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
									GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
									if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_CONTROL", 7, 0, 0, 0))
									{
										iLocal_3765 = 1;
									}
								}
								if (iLocal_6683 == 0)
								{
									if (iLocal_3802 == 0)
									{
										if (SYSTEM::TIMERB() > 12500)
										{
											iLocal_3893 = MISC::GET_GAME_TIMER();
											iLocal_6683 = 1;
										}
									}
									else if (SYSTEM::TIMERB() > 2500)
									{
										iLocal_3893 = MISC::GET_GAME_TIMER();
										iLocal_6683 = 1;
									}
								}
								if (iLocal_6683 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3893 + 1500)
									{
										if (iLocal_6679 == 0)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
											{
												if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3938) && iLocal_3900 == 0)
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
													{
														if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
															GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
															if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_SEE", 7, 0, 0, 0))
															{
																iLocal_6679 = 1;
															}
														}
													}
												}
											}
										}
									}
									if (iLocal_6680 == 0 && iLocal_6679 == 1)
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
										{
											if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
												if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_LEAD", 7, 0, 0, 0))
												{
													iLocal_6680 = 1;
												}
											}
										}
									}
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
									{
										STREAMING::REQUEST_MODEL(joaat("shamal"));
										STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_01"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_01")))
										{
											iLocal_3938 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.618f, -2734.44f, 12.8201f, 327.2515f, 1, 1);
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_3938, 1);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3938, 1, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3938, 1);
											ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3938, 1);
											VEHICLE::CONTROL_LANDING_GEAR(iLocal_3938, 3);
											iLocal_3914 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3938, 26, joaat("s_m_m_pilot_01"), -1, 1, 1);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 1, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 6, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 7, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 9, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 10, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 11, 0, 0, 0);
											func_706(&Local_3217, &iLocal_3914);
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_01"));
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
									{
										if (!HUD::DOES_BLIP_EXIST(uLocal_4163))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
											{
												uLocal_4163 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3938);
												HUD::SET_BLIP_AS_FRIENDLY(uLocal_4163, false);
											}
										}
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, 294, "DGTitanEntry", 1);
											VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, 0.616f);
										}
										if (iLocal_6682 == 0)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
												{
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
													{
														if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938) > 14136f)
														{
															VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, 0.55f);
															iLocal_6682 = 1;
														}
													}
												}
											}
										}
										if (iLocal_6678 == 0)
										{
											func_704(&Local_3217, Local_3831, &(uLocal_3876[1]), &(uLocal_3879[1]));
										}
										if (iLocal_3677 == 0)
										{
											GlobalFunc_159("BFHELPTXT4", -1);
											iLocal_3677 = 1;
										}
										if (iLocal_3689 == 0)
										{
											if (iLocal_3802 == 0)
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
												{
													GlobalFunc_164("BFDAMAGE", 7500, 1);
													iLocal_3689 = 1;
												}
											}
											else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
											{
												GlobalFunc_164("BFDAMAGE", 4000, 1);
												iLocal_3689 = 1;
											}
										}
									}
								}
								else if (iLocal_3802 == 0)
								{
									if (iLocal_6681 == 0)
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
										{
											if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
												if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_LOOK", 7, 0, 0, 0))
												{
													iLocal_6681 = 1;
												}
											}
										}
									}
								}
							}
						}
						CAM::_0x271401846BD26E92(1, 1);
						if (iLocal_3669 == 0)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938) > 20000f)
									{
										GlobalFunc_164("SNIPE4", 7500, 1);
										iLocal_3669 = 1;
									}
								}
							}
						}
						if (iLocal_3738 == 0)
						{
							if (SYSTEM::TIMERB() > 1000)
							{
								GlobalFunc_574(399, 0);
								if (!bLocal_3504)
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(2, 24))
									{
										GlobalFunc_565(395, 1, 0);
										if (CAM::GET_FINAL_RENDERED_CAM_FOV() <= 16f && CAM::GET_FINAL_RENDERED_CAM_FOV() > 5f)
										{
											if ((((uLocal_3876[1] > 0.49f && uLocal_3876[1] < 0.51f) && uLocal_3879[1] > 0.49f) && uLocal_3879[1] < 0.51f) && !bLocal_3504)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_3889 + 200)
												{
													iLocal_6672 = 0;
													iLocal_6675 = 0;
													iLocal_3889 = MISC::GET_GAME_TIMER();
													iLocal_3900++;
												}
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_3903 + 5000)
											{
												GlobalFunc_4956();
												GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
												if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
												{
													iLocal_3903 = MISC::GET_GAME_TIMER();
												}
											}
										}
										if (CAM::GET_FINAL_RENDERED_CAM_FOV() <= 5f && CAM::GET_FINAL_RENDERED_CAM_FOV() > 2f)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
												{
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
													{
														if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3938) < 18000f)
														{
															if ((((uLocal_3876[1] > 0.485f && uLocal_3876[1] < 0.515f) && uLocal_3879[1] > 0.485f) && uLocal_3879[1] < 0.515f) && !bLocal_3504)
															{
																if (MISC::GET_GAME_TIMER() > iLocal_3889 + 200)
																{
																	iLocal_6672 = 0;
																	iLocal_6675 = 0;
																	iLocal_3889 = MISC::GET_GAME_TIMER();
																	iLocal_3900++;
																}
															}
															else if (MISC::GET_GAME_TIMER() > iLocal_3903 + 5000)
															{
																GlobalFunc_4956();
																GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
																GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
																if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
																{
																	iLocal_3903 = MISC::GET_GAME_TIMER();
																}
															}
														}
														else if ((((uLocal_3876[1] > 0.45f && uLocal_3876[1] < 0.55f) && uLocal_3879[1] > 0.45f) && uLocal_3879[1] < 0.55f) && !bLocal_3504)
														{
															if (MISC::GET_GAME_TIMER() > iLocal_3889 + 200)
															{
																iLocal_6672 = 0;
																iLocal_6675 = 0;
																iLocal_3889 = MISC::GET_GAME_TIMER();
																iLocal_3900++;
															}
														}
														else if (MISC::GET_GAME_TIMER() > iLocal_3903 + 5000)
														{
															GlobalFunc_4956();
															GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
															GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
															if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
															{
																iLocal_3903 = MISC::GET_GAME_TIMER();
															}
														}
													}
												}
											}
										}
										if (CAM::GET_FINAL_RENDERED_CAM_FOV() <= 2f && CAM::GET_FINAL_RENDERED_CAM_FOV() >= 1f)
										{
											if ((((uLocal_3876[1] > 0.46f && uLocal_3876[1] < 0.54f) && uLocal_3879[1] > 0.46f) && uLocal_3879[1] < 0.54f) && !bLocal_3504)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_3889 + 200)
												{
													iLocal_6672 = 0;
													iLocal_6675 = 0;
													iLocal_3889 = MISC::GET_GAME_TIMER();
													iLocal_3900++;
												}
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_3903 + 5000)
											{
												GlobalFunc_4956();
												GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
												if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
												{
													iLocal_3903 = MISC::GET_GAME_TIMER();
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
		}
		if (iLocal_3890 >= 1)
		{
			CUTSCENE::_0xC61B86C9F61EB404(1);
			iLocal_3481 = 0;
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			return 1;
		}
	}
	return 0;
}


void func_704(bool bParam0, struct<3> Param1, var uParam4, var uParam5)//Position - 0x83C4A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	float fVar46;
	float fVar47;
	float fVar48;
	float fVar49;
	float fVar50;
	float fVar51;
	float fVar52;
	float fVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	
	Var18 = { CAM::GET_CAM_COORD(bParam0->f_39) };
	Var21 = { ENTITY::GET_ENTITY_ROTATION(bParam0->f_40, 2) };
	fVar24 = 1f;
	fVar25 = 30f;
	fVar26 = (bParam0->f_16 * 1.345f);
	fVar27 = bParam0->f_16;
	Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3938, Vector(0f, fVar25, fVar24) + Param1) };
	Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3938, Vector(0f, fVar25, -fVar24) + Param1) };
	Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3938, Vector(0f, (fVar25 - fVar24), 0f) + Param1) };
	Var15 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3938, Vector(0f, (fVar25 + fVar24), 0f) + Param1) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3938, Vector(fVar24, fVar25, 0f) + Param1) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3938, Vector(-fVar24, fVar25, 0f) + Param1) };
	Var28 = { Var0 - Var18 };
	Var31 = { Var3 - Var18 };
	Var34 = { Var6 - Var18 };
	Var37 = { Var9 - Var18 };
	Var40 = { Var12 - Var18 };
	Var43 = { Var15 - Var18 };
	fVar46 = MISC::GET_HEADING_FROM_VECTOR_2D(Var34.x, Var34.f_1);
	fVar47 = MISC::GET_HEADING_FROM_VECTOR_2D(Var37.x, Var37.f_1);
	fVar48 = MISC::GET_HEADING_FROM_VECTOR_2D(Var40.x, Var40.f_1);
	fVar49 = MISC::GET_HEADING_FROM_VECTOR_2D(Var43.x, Var43.f_1);
	fVar50 = MISC::ATAN2(Var28.f_2, func_705(Var0, Var18, 1, 1));
	fVar51 = MISC::ATAN2(Var31.f_2, func_705(Var3, Var18, 1, 1));
	if (MISC::ABSF((fVar48 - fVar49)) > MISC::ABSF((fVar46 - fVar47)))
	{
		fVar46 = fVar48;
		fVar47 = fVar49;
	}
	fVar52 = Var21.f_2;
	if (fVar52 < 0f)
	{
		fVar52 = (fVar52 + 360f);
	}
	fVar53 = ((fVar46 - fVar52) / fVar26);
	fVar54 = ((fVar47 - fVar52) / fVar26);
	fVar55 = ((fVar50 - Var21.x) / fVar27);
	fVar56 = ((fVar51 - Var21.x) / fVar27);
	fVar57 = (0.5f - fVar53);
	fVar58 = (0.5f - fVar54);
	fVar59 = (0.5f - fVar55);
	fVar60 = (0.5f - fVar56);
	HUD::SET_WIDESCREEN_FORMAT(1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	fVar61 = MISC::ABSF((fVar57 - fVar58));
	fVar62 = MISC::ABSF((fVar59 - fVar60));
	*uParam4 = ((fVar57 + fVar58) / 2f);
	*uParam5 = ((fVar59 + fVar60) / 2f);
	GRAPHICS::DRAW_RECT(*uParam4, fVar59, fVar61, 0.002f, 255, 0, 0, 128, 1);
	GRAPHICS::DRAW_RECT(fVar58, *uParam5, 0.002f, fVar62, 255, 0, 0, 128, 1);
	GRAPHICS::DRAW_RECT(*uParam4, fVar60, fVar61, 0.002f, 255, 0, 0, 128, 1);
	GRAPHICS::DRAW_RECT(fVar57, *uParam5, 0.002f, fVar62, 255, 0, 0, 128, 1);
}

float func_705(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7)//Position - 0x83ECE
{
	if (bParam6)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
	}
	if (bParam7)
	{
		return SYSTEM::VDIST(Param0, Param3);
	}
	return SYSTEM::VDIST2(Param0, Param3);
}

void func_706(bool bParam0, int iParam1)//Position - 0x83F08
{
	struct<3> Var0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(*iParam1))
	{
		Var0 = { 0f, 0f, 0f };
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, PLAYER::PLAYER_PED_ID(), 1))
		{
			iVar3 = 0;
			PED::GET_PED_LAST_DAMAGE_BONE(*iParam1, &iVar3);
			if (PED::WAS_PED_SKELETON_UPDATED(*iParam1))
			{
				Var0 = { PED::GET_PED_BONE_COORDS(*iParam1, iVar3, 0f, 0f, 0f) };
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, 1) };
			}
		}
		else if (func_707(bParam0, iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, 1) };
		}
		if (Var0.x != 0f)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam1, 0))
			{
				PED::SET_PED_TO_RAGDOLL(*iParam1, 100, 1000, 2, 0, 0, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(*iParam1, 1, bParam0->f_29 * Vector(4f, 4f, 4f), Var0 - ENTITY::GET_ENTITY_COORDS(*iParam1, 1), PED::GET_PED_RAGDOLL_BONE_INDEX(*iParam1, 0), 0, 0, 1, 0, 1);
			}
			ENTITY::SET_ENTITY_HEALTH(*iParam1, 0);
		}
	}
}

int func_707(var uParam0, var uParam1)//Position - 0x83FD8
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	float fVar46;
	float fVar47;
	float fVar48;
	float fVar49;
	float fVar50;
	float fVar51;
	
	if (!PED::IS_PED_INJURED(*uParam1))
	{
		if (uParam0->f_1)
		{
			fVar0 = func_705(uParam0->f_35, ENTITY::GET_ENTITY_COORDS(*uParam1, 1), 0, 0);
			if (fVar0 < 25f)
			{
				Var19 = { CAM::GET_CAM_COORD(uParam0->f_39) };
				if (PED::WAS_PED_SKELETON_UPDATED(*uParam1))
				{
					Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0.45f, 0f, 0f) };
					Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, -0.45f, 0f, 0f) };
					Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, -0.3f, 0f) };
					Var16 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, 0.3f, 0f) };
					Var1 = { PED::GET_PED_BONE_COORDS(*uParam1, 31086, 0f, 0f, 0f) + Vector(0.2f, 0f, 0f) };
					Var22 = { PED::GET_PED_BONE_COORDS(*uParam1, 14201, 0f, 0f, 0f) - Vector(0.2f, 0f, 0f) };
					Var25 = { PED::GET_PED_BONE_COORDS(*uParam1, 52301, 0f, 0f, 0f) - Vector(0.2f, 0f, 0f) };
					if (Var22.f_2 < Var25.f_2)
					{
						Var4 = { Var22 };
					}
					else
					{
						Var4 = { Var25 };
					}
					Var28 = { Var1 - Var19 };
					Var31 = { Var4 - Var19 };
					Var34 = { Var7 - Var19 };
					Var37 = { Var10 - Var19 };
					Var40 = { Var13 - Var19 };
					Var43 = { Var16 - Var19 };
					fVar46 = MISC::GET_HEADING_FROM_VECTOR_2D(Var34.x, Var34.f_1);
					fVar47 = MISC::GET_HEADING_FROM_VECTOR_2D(Var37.x, Var37.f_1);
					fVar48 = MISC::GET_HEADING_FROM_VECTOR_2D(Var40.x, Var40.f_1);
					fVar49 = MISC::GET_HEADING_FROM_VECTOR_2D(Var43.x, Var43.f_1);
					fVar50 = MISC::ATAN2(Var28.f_2, func_705(Var1, Var19, 1, 1));
					fVar51 = MISC::ATAN2(Var31.f_2, func_705(Var4, Var19, 1, 1));
					if (MISC::ABSF((fVar48 - fVar49)) > MISC::ABSF((fVar46 - fVar47)))
					{
						fVar46 = fVar48;
						fVar47 = fVar49;
					}
					if (fVar46 > fVar47)
					{
						func_708(&fVar46, &fVar47);
					}
					if (fVar51 > fVar50)
					{
						func_708(&fVar51, &fVar50);
					}
					if (uParam0->f_32 < fVar50)
					{
						if (uParam0->f_32 > fVar51)
						{
							if (uParam0->f_32.f_2 < fVar47)
							{
								if (uParam0->f_32.f_2 > fVar46)
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
	return 0;
}

void func_708(float fParam0, float fParam1)//Position - 0x841FA
{
	var uVar0;
	
	uVar0 = *fParam0;
	*fParam0 = *fParam1;
	*fParam1 = uVar0;
}



void func_711(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x842DD
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	GlobalFunc_8380(bParam1, 1, 0, 0);
	GlobalFunc_737();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_8058();
		}
	}
}

int func_712()//Position - 0x8444A
{
	func_740();
	if (iLocal_3890 > 4 && iLocal_3890 < 7)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_3911))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_3911, 255, 255, 255, 0, 0);
		}
	}
	if (iLocal_3481)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3957))
		{
			if (GlobalFunc_156(iLocal_3957, PLAYER::PLAYER_PED_ID(), 1) > 100f)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3957);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3957, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3957);
			}
		}
	}
	if (!iLocal_3481)
	{
		iLocal_3749 = 0;
		iLocal_3686 = 0;
		iLocal_3687 = 0;
		iLocal_3688 = 0;
		iLocal_3690 = 0;
		iLocal_3691 = 0;
		iLocal_3713 = 0;
		iLocal_3750 = 0;
		iLocal_3744 = 0;
		iLocal_3776 = 0;
		iLocal_3778 = 0;
		iLocal_3779 = 0;
		iLocal_3780 = 0;
		iLocal_3783 = 0;
		iLocal_3791 = 0;
		iLocal_3792 = 0;
		iLocal_3793 = 0;
		iLocal_3794 = 0;
		iLocal_3795 = 0;
		iLocal_3811 = 0;
		iLocal_3816 = 0;
		iLocal_3775 = 0;
		GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		HUD::CLEAR_PRINTS();
		CUTSCENE::REMOVE_CUTSCENE();
		GlobalFunc_7934(2, 1);
		iLocal_3890 = 0;
		iLocal_3899 = 0;
		iLocal_3902 = 0;
		iLocal_3906 = 0;
		uLocal_4034 = PED::ADD_SCENARIO_BLOCKING_AREA(-358.3f, 1130.6f, 333.3f, -323.6f, 1170.2f, 319.6f, 0, 1, 1, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
			{
				iLocal_3930 = uLocal_3259[2];
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(0, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3940);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
			{
				GlobalFunc_7699(&uLocal_3959, iLocal_3956, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3956, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
		{
			if (!PED::IS_PED_INJURED(uLocal_3259[2]))
			{
				func_425(uLocal_3259[2], 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		func_425(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		iLocal_3749 = 1;
		iLocal_3481 = 1;
	}
	else
	{
		if (iLocal_3811 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3259[2]))
			{
				if (!PED::IS_PED_INJURED(uLocal_3259[2]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3259[2], 1);
					iLocal_3811 = 1;
				}
			}
		}
		if (iLocal_3890 < 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3825, 1) < 200f)
				{
					STREAMING::REQUEST_MODEL(joaat("burrito3"));
					STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded")))
					{
						iLocal_3952 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), -363.519f, 1142.171f, 323.0888f, 11.2577f, 1, 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3952, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3952);
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_3952, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3952, 0, 0);
						VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3952, 10f);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3952, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 2, 0, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 3, 0, 1);
						iLocal_4025 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.171f, 323.0888f, 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4025, iLocal_3952, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3952);
						SYSTEM::SETTIMERB(0);
					}
				}
			}
			else
			{
				if (SYSTEM::TIMERB() < 2000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 2, 0, 0);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 3, 0, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3952);
					}
				}
				if (iLocal_3776 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3825, 1) < 10f)
					{
						iLocal_3776 = 1;
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3825, 1) > 200f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4025))
					{
						OBJECT::DELETE_OBJECT(&iLocal_4025);
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_3952);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
				{
					if (!PED::IS_PED_INJURED(iLocal_3930))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_3930, iLocal_3956, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_3956) == joaat("bodhi2"))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3930, 1) < 5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									Local_3864 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
									MISC::GET_GROUND_Z_FOR_3D_COORD(Local_3864, &fLocal_3884);
									if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1371.319f, 1149.513f, 113.3655f, 1371.156f, 1145.733f, 115.3213f, 1.5f, 0, 1, 0) && Local_3864.f_2 > 114.2f) || (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3956) && Local_3864.f_2 > (fLocal_3884 + 0.2f))) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3956, -0.00188396f, -0.300501f, 1.24172f), 1.5f, 1.5f, 2f, 0, 1, 0))
									{
										if (iLocal_3779 == 0)
										{
											TASK::CLEAR_PED_TASKS(iLocal_3930);
											if (!VEHICLE::IS_VEHICLE_STOPPED(iLocal_3956))
											{
												VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_3956, 2f, 2, 0);
											}
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3930, 1);
											if (iLocal_3780 == 0)
											{
												GlobalFunc_173(&uLocal_3303, 2, iLocal_3930, "TREVOR", 0, 1);
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
												{
													if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "M1_GETOFF", 7, 0, 0, 0))
														{
															iLocal_3906 = MISC::GET_GAME_TIMER();
															iLocal_3780 = 1;
														}
													}
												}
											}
											iLocal_3779 = 1;
										}
										if (iLocal_3780 == 1)
										{
											if (MISC::GET_GAME_TIMER() > iLocal_3906 + 8000)
											{
												GlobalFunc_173(&uLocal_3303, 2, iLocal_3930, "TREVOR", 0, 1);
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
												{
													if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "M1_GETOFF", 7, 0, 0, 0))
														{
															iLocal_3906 = MISC::GET_GAME_TIMER();
														}
													}
												}
											}
										}
									}
									else if (iLocal_3779 == 1)
									{
										TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_3930, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
										iLocal_3779 = 0;
									}
								}
								else if (iLocal_3779 == 1)
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_3930, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
									iLocal_3779 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (iLocal_3744 == 0)
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				GlobalFunc_164("LOSE_WANTED", 7500, 1);
				iLocal_3744 = 1;
			}
			if (iLocal_3775 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3952, 2);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3952, 0);
						iLocal_3775 = 1;
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_4168))
			{
				HUD::REMOVE_BLIP(&uLocal_4168);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_4164))
			{
				HUD::REMOVE_BLIP(&uLocal_4164);
			}
		}
		else
		{
			switch (iLocal_3890)
			{
				case 0:
					if (!HUD::DOES_BLIP_EXIST(uLocal_4164))
					{
						uLocal_4164 = HUD::ADD_BLIP_FOR_COORD(Local_3825);
					}
					HUD::SET_BLIP_ROUTE(uLocal_4164, 1);
					AUDIO::TRIGGER_MUSIC_EVENT("SOL1_START");
					GlobalFunc_164("BFDRIVE", 7500, 1);
					iLocal_3890++;
					break;
				
				case 1:
					if (!HUD::DOES_BLIP_EXIST(uLocal_4164))
					{
						if (iLocal_3744 == 1)
						{
							HUD::CLEAR_PRINTS();
							iLocal_3744 = 0;
						}
						uLocal_4164 = HUD::ADD_BLIP_FOR_COORD(Local_3825);
						HUD::SET_BLIP_ROUTE(uLocal_4164, 1);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
						}
						if (iLocal_3690 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_VEH");
							iLocal_3690 = 1;
						}
					}
					if (iLocal_3791 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
								if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_HEAD", 7, 0, 0, 0))
								{
									iLocal_3791 = 1;
								}
							}
						}
					}
					if (iLocal_3795 == 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							func_425(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
							iLocal_3795 = 1;
						}
					}
					if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_3930) && iLocal_3795 == 1) && MISC::GET_GAME_TIMER() > iLocal_3902 + 30000)
					{
						if (iLocal_3794 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
									GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
									if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_BIKE", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
										iLocal_3794 = 1;
									}
								}
							}
						}
						if (iLocal_3792 == 0 && iLocal_3794 == 1)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
									GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
									if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_ATVAN", 7, 0, 0, 0))
									{
										iLocal_3792 = 1;
									}
								}
							}
						}
					}
					if (!Global_96400)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3825, 100f, 100f, 100f, 0, 1, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
								{
									iLocal_3941 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								}
								if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
								{
									iLocal_3687 = 1;
								}
								STREAMING::REQUEST_MODEL(joaat("shamal"));
								STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_01"));
								STREAMING::REQUEST_PTFX_ASSET();
								VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanEntry");
								func_739(&Local_3217);
								iLocal_3890++;
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 2, 0, 0);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 3, 0, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3952);
						}
					}
					if (iLocal_3793 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3952, 1) < 30f)
								{
									GlobalFunc_4935();
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											GlobalFunc_173(&uLocal_3303, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
											GlobalFunc_173(&uLocal_3303, 2, 0, "TREVOR", 0, 1);
											if (GlobalFunc_10618(&uLocal_3303, "SLM1AUD", "S1_ATVAN2", 7, 0, 0, 0))
											{
												RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
												iLocal_3793 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3713 == 0)
					{
						if (func_738(&Local_3217))
						{
							MISC::CLEAR_AREA(Local_3822, 5f, 1, 0, 0, 0);
							func_737(&Local_3217, Local_3822, fLocal_3873);
							func_736(&Local_3217, 1, -179f, -70f);
							func_735(&Local_3217, -5f, 20f);
							GlobalFunc_1648(&Local_3217, 0);
							iLocal_3713 = 1;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")))
						{
							iLocal_3938 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.618f, -2734.44f, 12.8201f, 327.2515f, 1, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3938, 1);
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_3938, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3938, 1, 1);
							VEHICLE::CONTROL_LANDING_GEAR(iLocal_3938, 3);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_01")))
								{
									iLocal_3914 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3938, 26, joaat("s_m_m_pilot_01"), -1, 1, 1);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 1, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 2, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 4, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 5, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 6, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 7, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 8, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 9, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 10, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 11, 0, 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3914, 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_01"));
								}
							}
						}
					}
					if (iLocal_3687 == 1)
					{
						if (!PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_3687 = 0;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_4164))
						{
							HUD::REMOVE_BLIP(&uLocal_4164);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_4168))
						{
							if (iLocal_3744 == 1)
							{
								HUD::CLEAR_PRINTS();
								iLocal_3744 = 0;
							}
							uLocal_4168 = GlobalFunc_6783(iLocal_3952, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3952, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3952, 1);
								iLocal_3775 = 0;
							}
							if (iLocal_3750 == 0)
							{
								GlobalFunc_164("SNIPE8", 7500, 1);
								iLocal_3750 = 1;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
						{
							if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_3952, 0);
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3952, 1);
								}
							}
							if (iLocal_3783 == 0)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3952, 1) > 150f)
								{
									HUD::SET_BLIP_ROUTE(uLocal_4168, 1);
									iLocal_3783 = 1;
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
								}
								uLocal_3911 = unk_0x67D02A194A2FC2BD("REMOTE_SNIPER_LOADING");
								AUDIO::TRIGGER_MUSIC_EVENT("SOL1_SNIPER_READY");
								AUDIO::PREPARE_MUSIC_EVENT("SOL1_APP_ACTIVE");
								PLAYER::SET_MAX_WANTED_LEVEL(0);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								iLocal_3899 = MISC::GET_GAME_TIMER();
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
								iLocal_3890++;
							}
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3952, 0, 1);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 2, 0, 0);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 3, 0, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3952);
						}
					}
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
					if (iLocal_3675 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_3899 + 1500)
						{
							GlobalFunc_8380(1, 1, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3952, 1);
								}
							}
							if (GlobalFunc_111())
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_4956();
							}
							iLocal_3890++;
						}
					}
					break;
				
				case 4:
					if (HUD::DOES_BLIP_EXIST(uLocal_4168))
					{
						HUD::REMOVE_BLIP(&uLocal_4168);
					}
					while (!func_728(45, &uLocal_3468, 0, 0, 1, 1, 0))
					{
						iLocal_3778 = 1;
						SYSTEM::WAIT(0);
					}
					if (iLocal_3778 == 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_3911))
						{
							SYSTEM::WAIT(0);
						}
						SYSTEM::SETTIMERB(0);
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						iLocal_3890++;
					}
					else
					{
						iLocal_3890 = 7;
					}
					break;
				
				case 5:
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_3911))
					{
						if (iLocal_3691 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_APP_ACTIVE");
							SYSTEM::SETTIMERB(0);
							iLocal_3691 = 1;
						}
						GlobalFunc_702(1, 1, 1);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_3911, "START_LOADING");
						SYSTEM::SETTIMERA(0);
						iLocal_3888 = MISC::GET_GAME_TIMER();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SCOPE_UI_MASTER", 0, 1);
						iLocal_3890++;
					}
					break;
				
				case 6:
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_3912))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3911, "IS_LOAD_ANIM_FINISHED");
						uLocal_3912 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
					if (iLocal_3686 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_3888 + 5999)
						{
							func_9(&Local_3217, 1);
							iLocal_3686 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_3888 + 100)
					{
						iLocal_3688 = 1;
					}
					if (MISC::GET_GAME_TIMER() > iLocal_3888 + 6000 && iLocal_3686 == 1)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_3911);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3941, 0))
							{
								MISC::CLEAR_AREA(-386.6838f, 1202.588f, 324.6417f, 5f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_3941, -386.6838f, 1202.588f, 324.6417f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_3941, 100.5474f);
								func_713(iLocal_3941, -386.6838f, 1202.588f, 324.6417f, 100.5474f, 24, 0);
							}
						}
						iLocal_3890++;
					}
					break;
				}
		}
		if (iLocal_3890 > 6 && iLocal_3675 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_4164))
			{
				HUD::REMOVE_BLIP(&uLocal_4164);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_4168))
			{
				HUD::REMOVE_BLIP(&uLocal_4168);
			}
			iLocal_3688 = 1;
			iLocal_3481 = 0;
			return 1;
		}
	}
	return 0;
}

void func_713(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x85471
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		GlobalFunc_8319(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		GlobalFunc_4932(iParam0, &Var0);
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		GlobalFunc_8387(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_714(iParam5, iParam0, 0);
	}
}

void func_714(int iParam0, int iParam1, int iParam2)//Position - 0x8559C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_8058();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = GlobalFunc_104(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						GlobalFunc_8317(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}














bool func_728(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x876AB
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_729(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_729(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x876D9
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			uVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_8059(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_711(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				uVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_8059(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				func_711(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			uVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_8059(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_711(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (GlobalFunc_9272(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (GlobalFunc_9272(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					GlobalFunc_9272(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}






void func_735(var uParam0, float fParam1, float fParam2)//Position - 0x88EF7
{
	uParam0->f_26 = fParam1;
	uParam0->f_27 = fParam2;
}

void func_736(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x88F0B
{
	uParam0->f_7 = iParam1;
	uParam0->f_24 = fParam2;
	uParam0->f_25 = fParam3;
}

void func_737(var uParam0, struct<3> Param1, float fParam4)//Position - 0x88F25
{
	if (func_738(uParam0))
	{
		uParam0->f_40 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pool_ball_01"), Param1, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_40, 0f, 0f, fParam4, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_40, 1);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_40, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_40, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pool_ball_01"));
		uParam0->f_39 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_39, uParam0->f_40, 0f, 1f, 0f, 1);
		CAM::SET_CAM_ROT(uParam0->f_39, ENTITY::GET_ENTITY_ROTATION(uParam0->f_40, 2), 2);
		uParam0->f_15 = 45f;
		uParam0->f_28 = 1f;
		CAM::SET_CAM_FOV(uParam0->f_39, uParam0->f_15);
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_39, 0.02f);
		uParam0->f_38 = joaat("weapon_remotesniper");
		uParam0->f_9 = 100;
		uParam0->f_22 = 20f;
		uParam0->f_23 = 10f;
		uParam0->f_21 = 1000f;
		uParam0->f_3 = 1;
		uParam0->f_26 = -20f;
		uParam0->f_27 = 45f;
		uParam0->f_20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		uParam0->f_10 = 0;
		uParam0->f_11 = 0;
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_6 = 0;
		uParam0->f_5 = 0;
	}
}

int func_738(var uParam0)//Position - 0x89042
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_pool_ball_01")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_13(), 0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_41))
		{
			return 1;
		}
	}
	uParam0->f_4 = 1;
	return 0;
}

void func_739(var uParam0)//Position - 0x89079
{
	STREAMING::REQUEST_MODEL(joaat("prop_pool_ball_01"));
	if (!uParam0->f_2)
	{
		uParam0->f_41 = unk_0x67D02A194A2FC2BD("remote_sniper_hud");
		uParam0->f_2 = 1;
	}
}

void func_740()//Position - 0x890A4
{
	if (iLocal_3890 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
		{
			if (!PED::IS_PED_INJURED(iLocal_3930))
			{
				if (GlobalFunc_156(iLocal_3930, PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (iLocal_3816 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_3930, PLAYER::PLAYER_PED_ID(), -1, 0, 3);
						iLocal_3816 = 1;
					}
				}
				else if (iLocal_3816 == 1)
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_3930);
					iLocal_3816 = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
	{
		if (!PED::IS_PED_INJURED(iLocal_3930))
		{
			if (GlobalFunc_156(iLocal_3930, PLAYER::PLAYER_PED_ID(), 1) > 100f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3930))
			{
				PED::DELETE_PED(&iLocal_3930);
				iLocal_3902 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
	{
		if (GlobalFunc_156(iLocal_3956, PLAYER::PLAYER_PED_ID(), 1) > 100f || !ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3956))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_3956);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956) && ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
	{
		if (!PED::IS_PED_INJURED(iLocal_3930))
		{
			if (!GlobalFunc_111())
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3930))
				{
					GlobalFunc_5130(iLocal_3930, "GENERIC_INSULT_MED", 6);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_3930, iLocal_3956, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(iLocal_3930, iLocal_3956, 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_3930, iLocal_3956, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3930, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_3930, 1), 200f, 0, 4)))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3930, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3930, -1794415470) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_3930, VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_3930, 1), 200f, 0, 4), -1, -1, 2f, 9, 0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3930, 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3930, 1805844857) != 0)
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_3930, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3930, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3930, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3930, -1273030092) != 0)
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_3930, PED::GET_VEHICLE_PED_IS_IN(iLocal_3930, 0), PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, -1f, 1f, 0);
						}
					}
				}
			}
		}
	}
}



int func_743()//Position - 0x89532
{
	if (!iLocal_3481)
	{
		HUD::REQUEST_ADDITIONAL_TEXT("BFINJEC", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, 0, 0);
		func_848();
		HUD::TOGGLE_STEALTH_RADAR(0);
		iLocal_3890 = 0;
		iLocal_3481 = 1;
	}
	else
	{
		switch (iLocal_3890)
		{
			case 0:
				iLocal_3890++;
				break;
		}
		if (iLocal_3890 >= 1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			iLocal_3481 = 0;
			return 1;
		}
	}
	return 0;
}



int func_746(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x89621
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			func_442(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		func_442((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_Running_Missions[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_Running_Missions[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		GlobalFunc_10882(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8382();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}






































void func_784(int iParam0, bool bParam1)//Position - 0x8F207
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 0);
			}
			PED::DELETE_PED(&iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

void func_785(int iParam0, bool bParam1)//Position - 0x8F23E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 0, 1);
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 0);
			VEHICLE::DELETE_VEHICLE(&iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}




























int func_813(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x9374E
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
			func_525(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_518(*uParam0);
			GlobalFunc_8021(*uParam0, 1, 0);
			GlobalFunc_8030(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_503(*uParam0, bParam8);
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


void func_815()//Position - 0x93806
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_845();
	func_844();
	GlobalFunc_4948(&uLocal_27, 0, 0);
	func_842();
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	Global_24454 = 0;
	switch (iLocal_3182)
	{
		case 0:
			if (GlobalFunc_8315() != 0)
			{
				while (!func_813(&(uLocal_3259[0]), 0, 1392.33f, 1141.611f, 113.443f, 91.8877f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 0);
				func_746(&uLocal_3259, 1, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1386.809f, 1142.364f, 113.334f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 82.7671f);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
			if (GlobalFunc_2780() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					if (GlobalFunc_7984())
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
						{
							GlobalFunc_10627(&iLocal_3956, 1360.32f, 1166.077f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
						}
						if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
						{
							GlobalFunc_10627(&iLocal_3956, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
						}
					}
					else
					{
						while (!GlobalFunc_9748(&iLocal_3956, 2, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (GlobalFunc_2780() == 0)
			{
				if (GlobalFunc_7984())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
					{
						GlobalFunc_10627(&iLocal_3940, 1360.32f, 1166.077f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
					{
						GlobalFunc_10627(&iLocal_3940, 1372.07f, 1131.598f, 112.8844f, 19.2193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					while (!GlobalFunc_9748(&iLocal_3956, 2, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			while (!func_813(&iLocal_3930, 2, 1386.17f, 1141.114f, 113.334f, 87.7877f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3956, 3);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_4037);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3930, 1);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_3956, 20000, -1, 1f, 1, 0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
					{
						TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, 0, 1360.32f, 1166.077f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
						TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
					}
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_4037);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_3930, uLocal_4037);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_4037);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3930, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3957))
			{
				iLocal_3957 = VEHICLE::CREATE_VEHICLE(joaat("fusilade"), 1404.827f, 1118.405f, 113.838f, 90.5742f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3957, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fusilade"));
			}
			break;
		
		case 1:
			if (GlobalFunc_8315() != 0)
			{
				while (!func_813(&(uLocal_3259[0]), 0, 1392.33f, 1141.611f, 113.443f, 91.8877f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 0);
				func_746(&uLocal_3259, 0, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1386.809f, 1142.364f, 113.334f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 82.7671f);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
			if (GlobalFunc_2780() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
				{
					while (!GlobalFunc_9748(&iLocal_3940, 0, 1372.07f, 1131.598f, 112.8844f, 19.2193f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					if (GlobalFunc_7984())
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
						{
							GlobalFunc_10627(&iLocal_3956, 1360.32f, 1166.077f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
						}
						if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
						{
							GlobalFunc_10627(&iLocal_3956, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
						}
					}
					else
					{
						while (!GlobalFunc_9748(&iLocal_3956, 2, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (GlobalFunc_2780() == 0)
			{
				if (GlobalFunc_7984())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
					{
						GlobalFunc_10627(&iLocal_3940, 1360.32f, 1166.077f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
					{
						GlobalFunc_10627(&iLocal_3940, 1372.07f, 1131.598f, 112.8844f, 19.2193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
				{
					while (!GlobalFunc_9748(&iLocal_3956, 2, 1371.197f, 1146.639f, 112.7587f, 177.6714f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			while (!func_813(&iLocal_3930, 2, 1386.17f, 1141.114f, 113.334f, 87.7877f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3956, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3956, 3);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_4037);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3930, 1);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_3956, 20000, -1, 1f, 1, 0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
					{
						TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, 0, 1360.32f, 1166.077f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
						TASK::TASK_HELI_MISSION(0, iLocal_3956, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
					}
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3956)))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3956, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 30f, 786599, -1f, -1f, 1);
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_4037);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_3930, uLocal_4037);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_4037);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3930, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3957))
			{
				iLocal_3957 = VEHICLE::CREATE_VEHICLE(joaat("fusilade"), 1404.827f, 1118.405f, 113.838f, 90.5742f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3957, 112, 112);
			}
			break;
		
		case 2:
			MISC::CLEAR_AREA(Local_3822, 5f, 1, 0, 0, 0);
			func_737(&Local_3217, Local_3822, fLocal_3873);
			func_736(&Local_3217, 1, -179f, -70f);
			func_735(&Local_3217, -5f, 20f);
			func_9(&Local_3217, 1);
			GlobalFunc_1648(&Local_3217, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
			{
				iLocal_3952 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), -363.519f, 1142.171f, 323.0888f, 11.2577f, 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 2, 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 3, 0, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3952, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3952);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3952, 0, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3952, 10f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3952, 1);
				iLocal_4025 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.171f, 323.0888f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4025, iLocal_3952, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
			}
			if (GlobalFunc_8315() != 0)
			{
				while (!func_501(&(uLocal_3259[0]), 0, iLocal_3952, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 0);
				func_746(&uLocal_3259, 0, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, -1);
						}
					}
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_SHOOT_PLANE_RT");
			break;
		
		case 3:
			if (!iLocal_6661)
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_6660);
				iLocal_6661 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
			{
				iLocal_3952 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), 138.8186f, 1389.206f, 253.1271f, 253.6382f, 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 2, 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3952, 3, 0, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3952, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3952);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3952, 0, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3952, 10f);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3952, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
				iLocal_4025 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.171f, 323.0888f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4025, iLocal_3952, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
			}
			if (GlobalFunc_8315() == 2)
			{
				while (!func_501(&(uLocal_3259[0]), 0, iLocal_3952, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 0);
				func_746(&uLocal_3259, 0, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3952, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3952, -1);
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
			{
				iLocal_3938 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.618f, -2734.44f, 12.8201f, 327.2515f, 1, 1);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_3938, 3);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3938, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3938, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3938, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3938, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3938))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, 294, "DGTitanEntry", 1);
					func_832(iLocal_3938, 5000f, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
			{
				iLocal_3914 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3938, 26, joaat("s_m_m_pilot_01"), -1, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 11, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_01"));
			}
			func_698(&uLocal_4178, &iLocal_3938);
			func_663(&uLocal_5419, &iLocal_3938, &iLocal_3939);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_6660))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
			{
				iLocal_3939 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Local_3828, 328.7128f, 1, 1);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3939, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
			if (GlobalFunc_8315() != 2)
			{
				while (!func_501(&(uLocal_3259[2]), 2, iLocal_3939, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				func_425(uLocal_3259[2], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_9134(&uLocal_3259, 2);
				func_746(&uLocal_3259, 0, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3939, -1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
			{
				iLocal_3938 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.618f, -2734.44f, 12.8201f, 327.2515f, 1, 1);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_3938, 3);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3938, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3938, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3938, 1, "BB_SOL_JET", 1);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_3938, 0.4f);
				func_832(iLocal_3938, 13662f, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3938, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
			{
				iLocal_3914 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3938, 26, joaat("s_m_m_pilot_01"), -1, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 11, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_01"));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3939, 0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3939, 294, "DGBFReady", 1);
				func_832(iLocal_3939, 18400f, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_CHASE_PLANE_RT");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
			{
				iLocal_3940 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 2776.957f, 4740.372f, 44.9082f, 341.7251f, 1, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3940, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
			}
			if (GlobalFunc_8315() != 2)
			{
				while (!func_501(&(uLocal_3259[2]), 2, iLocal_3940, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 2);
				func_746(&uLocal_3259, 0, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3940, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3940, -1);
				}
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3940, 1, 1);
			func_425(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			iLocal_4027 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.449f, 47.6684f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_4027, 0, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_4027, 0f, 0f, -11.34007f, 2, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_4027, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4027, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_4027, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
			{
				iLocal_3914 = PED::CREATE_PED(26, joaat("s_m_m_pilot_01"), 2809.4f, 4801.3f, 47.7f, 0f, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3914, 11, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3914, 1);
				ENTITY::SET_ENTITY_COORDS(iLocal_3914, 2808.387f, 4795.484f, 45.8104f, 1, 0, 0, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3914, iLocal_4027, 0, -0.54f, 5.7f, 0.03f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				TASK::TASK_PLAY_ANIM(iLocal_3914, "missmartin1@leadinoutmartin_1_dead_pilot", "dead_pilot_leadin_loop", 1000f, -8f, -1, 9, 0, 0, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_3914, 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_3914, 0, 0);
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3914, 1, 0.515f, 0.814f, 300.781f, 0.975f, 3, 0f, "stab");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3914, 1, 0.633f, 0.62f, 300.617f, 0.262f, 1, 0f, "ShotgunLargeMonolithic");
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3914, 0);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_3914, "dead_1", 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
			{
				iLocal_3932[0] = PED::CREATE_PED(26, joaat("g_m_y_mexgang_01"), 2807.312f, 4802.314f, 46.3392f, 78.4343f, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 6, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[0], 11, 0, 0, 0);
				PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_3932[0]);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3932[0], 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3932[0], joaat("weapon_pistol"), 100, 0, 1);
				PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_3932[0], 1, 0.36f, 0.71f, "ShotgunSmall");
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3932[0], ENTITY::GET_ENTITY_COORDS(iLocal_3932[0], 1), 10f, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3932[0], 50, 1);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3932[0], "missmartin1@exit_plane", "exit_plane_guy_b", 2804.311f, 4798.03f, 46.7273f, 0f, 0f, -0.21f, 8f, -1000f, -1, 4096, 0, 2, 0);
				iLocal_3909 = MISC::GET_GAME_TIMER();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3932[1]))
			{
				iLocal_3932[1] = PED::CREATE_PED(26, joaat("g_m_y_mexgoon_02"), 2805.369f, 4799.155f, 46.039f, 82.164f, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3932[1], 11, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3932[1], 1);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3932[1], "missmartin1@exit_plane", "exit_plane_guy_a", 2806.272f, 4799.625f, 46.5135f, 0f, 0f, 40f, 8f, -1000f, -1, 4106, 0, 2, 0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgang_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_KILL_PASSENGERS"))
			{
				AUDIO::START_AUDIO_SCENE("MARTIN_1_KILL_PASSENGERS");
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_CRASHED_PLANE_RT");
			break;
		
		case 6:
			iLocal_3939 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 2350.723f, 3925.112f, 34.6029f, 298.6736f, 1, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3939, 1, 1);
			if (GlobalFunc_8315() != 2)
			{
				while (!func_813(&(uLocal_3259[2]), 2, -450.3808f, 1065.343f, 326.5121f, 0, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 2);
				func_746(&uLocal_3259, 0, 0, 0);
			}
			func_425(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			iLocal_4027 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.449f, 47.6684f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_4027, 0f, 0f, -11.34007f, 2, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_4027, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4027, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_4027, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_01"));
			break;
		
		case 7:
			STREAMING::REMOVE_PTFX_ASSET();
			if (GlobalFunc_8315() != 0)
			{
				while (!func_813(&(uLocal_3259[0]), 0, -365.1108f, 1146.226f, 323.6802f, 212.6341f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 0);
				func_746(&uLocal_3259, 0, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -365.1108f, 1146.226f, 323.6802f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 212.6341f);
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
				{
					if (GlobalFunc_7698())
					{
						GlobalFunc_6791(0, 0);
						GlobalFunc_8365(-386.6838f, 1202.588f, 324.6417f, 20f, 1);
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622()))
						{
							iLocal_3941 = GlobalFunc_9749(-386.6838f, 1202.588f, 324.6417f, 100.5474f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
						}
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3941, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_4027 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.449f, 47.6684f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_4027, 0, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_4027, 0f, 0f, -11.34007f, 2, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_4027, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4027, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_4027, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
			if (GlobalFunc_60(&uLocal_4050, 84))
			{
				GlobalFunc_7621(84, 1, 0, 1, 0);
			}
			break;
		
		case 8:
			MISC::CLEAR_AREA(1216.6f, 1852.6f, 78.8f, 60f, 1, 0, 0, 0);
			uLocal_4033 = PED::ADD_SCENARIO_BLOCKING_AREA(1288f, 1962.8f, 128.4f, 1139.2f, 1800.8f, 59.5f, 0, 1, 1, 1);
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
			if (GlobalFunc_8315() != 0)
			{
				while (!func_813(&(uLocal_3259[0]), 0, 1204.7f, 1859f, 78.2f, 214.528f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_9134(&uLocal_3259, 0);
				func_746(&uLocal_3259, 1, 0, 0);
			}
			if (!GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1204.7f, 1859f, 78.2f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 214.528f);
			}
			break;
		
		case 9:
			func_31();
			break;
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

















void func_832(int iParam0, float fParam1, int iParam2)//Position - 0x95D0E
{
	float fVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
			fVar0 = (fVar0 * -1f);
			fParam1 = (fVar0 + fParam1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0, fParam1);
			if (iParam2 == 1)
			{
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iParam0);
			}
		}
	}
}










void func_842()//Position - 0x96087
{
	STREAMING::REQUEST_PTFX_ASSET();
	while (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	uLocal_4035 = PED::ADD_SCENARIO_BLOCKING_AREA(1333f, 1095f, 137f, 1438.9f, 1197f, 109f, 0, 1, 1, 1);
	switch (iLocal_3182)
	{
		case 0:
			if (GlobalFunc_2780() == 2)
			{
				if (GlobalFunc_7984())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (GlobalFunc_2780() == 0)
			{
				if (GlobalFunc_7984())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			STREAMING::REQUEST_MODEL(joaat("fusilade"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("fusilade")))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 1:
			if (GlobalFunc_2780() == 2)
			{
				if (GlobalFunc_7984())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (GlobalFunc_2780() == 0)
			{
				if (GlobalFunc_7984())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2575());
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			STREAMING::REQUEST_MODEL(joaat("fusilade"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("fusilade")))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 2:
			if (GlobalFunc_188())
			{
				STREAMING::NEW_LOAD_SCENE_START(-892f, -446f, 173f, 0f, 0f, -103f, 3000f, 0);
			}
			func_739(&Local_3217);
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanEntry");
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) || !STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded"))) || !func_738(&Local_3217)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGTitanEntry"))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanEntry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGBFReady");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_SOL_JET");
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanCrash");
			while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("shamal")) || !STREAMING::HAS_MODEL_LOADED(joaat("burrito3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGTitanEntry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGBFReady")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "BB_SOL_JET")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGTitanCrash"))
			{
				SYSTEM::WAIT(0);
			}
			while (!AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_SHOT_DOWN_MASTER", 0))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_01"));
			GlobalFunc_7215(2);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_SOL_JET");
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGBFReady");
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("sanchez")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_01"))) || !GlobalFunc_7214(2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "BB_SOL_JET")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGBFReady"))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 5:
			if (GlobalFunc_60(&uLocal_4050, 84))
			{
				GlobalFunc_7621(84, 1, 0, 1, 0);
			}
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_01"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgang_01"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@exit_plane");
			STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_dead_pilot");
			while ((((((!STREAMING::HAS_MODEL_LOADED(joaat("sanchez")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgang_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@exit_plane")) || !STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_dead_pilot"))
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_7698())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622()))
					{
						GlobalFunc_8368();
						while (!GlobalFunc_8367())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			break;
		
		case 6:
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_01"));
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("sanchez")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_01"))) || !CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_60(&uLocal_4050, 84))
			{
				GlobalFunc_7621(84, 1, 0, 1, 0);
			}
			break;
		
		case 7:
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 1));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) || !STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded"))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(0, 1)))
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_7698())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622()))
					{
						GlobalFunc_8368();
						while (!GlobalFunc_8367())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			break;
		
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_ext");
			while (!STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_ext"))
			{
				SYSTEM::WAIT(0);
			}
			break;
	}
}


void func_844()//Position - 0x967F9
{
	if (HUD::DOES_BLIP_EXIST(uLocal_4163))
	{
		HUD::REMOVE_BLIP(&uLocal_4163);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4164))
	{
		HUD::REMOVE_BLIP(&uLocal_4164);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4165))
	{
		HUD::REMOVE_BLIP(&uLocal_4165);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4166))
	{
		HUD::REMOVE_BLIP(&uLocal_4166);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4167))
	{
		HUD::REMOVE_BLIP(&uLocal_4167);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4168))
	{
		HUD::REMOVE_BLIP(&uLocal_4168);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4169[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_4169[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4169[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_4169[1]));
	}
}

void func_845()//Position - 0x96895
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CUTSCENE::REMOVE_CUTSCENE();
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	MISC::SET_TIME_SCALE(1f);
	if (!GlobalFunc_188())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
		}
	}
	if (iLocal_3674 == 0)
	{
		AUDIO::STOP_SOUND(iLocal_3894);
		iLocal_3674 = 1;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
	}
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_START");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_VEH");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SNIPER_READY");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_APP_ACTIVE");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ENGINE_HIT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_AIR_TRAFFIC");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_BUS_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_TRAIN_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ALMOST_CRASHED");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SHOOT_PLANE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_CHASE_PLANE_RT");
	AUDIO::STOP_STREAM();
	iLocal_3700 = 0;
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[0], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[1], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[2], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[3]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4038[3], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[4]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[4], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[5]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[5], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[6]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[6], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[7]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[7], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[8]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[8], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[9]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[9], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4038[10]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_4038[10], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4025))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4025);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4027))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4027);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4029))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4029);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4028))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4028);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3914))
	{
		PED::DELETE_PED(&iLocal_3914);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3924))
	{
		PED::DELETE_PED(&iLocal_3924);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3930))
	{
		PED::DELETE_PED(&iLocal_3930);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3931))
	{
		PED::DELETE_PED(&iLocal_3931);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[0]))
	{
		PED::DELETE_PED(&(iLocal_3932[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3932[1]))
	{
		PED::DELETE_PED(&(iLocal_3932[1]));
	}
	iLocal_3886 = 0;
	while (iLocal_3886 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3925[iLocal_3886]))
		{
			PED::DELETE_PED(&(iLocal_3925[iLocal_3886]));
		}
		iLocal_3886++;
	}
	iLocal_3886 = 0;
	while (iLocal_3886 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3915[iLocal_3886]))
		{
			PED::DELETE_PED(&(iLocal_3915[iLocal_3886]));
		}
		iLocal_3886++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3935))
	{
		ENTITY::DELETE_ENTITY(&iLocal_3935);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3936))
	{
		ENTITY::DELETE_ENTITY(&iLocal_3936);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3937))
	{
		ENTITY::DELETE_ENTITY(&iLocal_3937);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3938))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3938);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3939))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3939);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3940))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3940);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3942))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_3942);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3943))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3943);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3944))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3944);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3945))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3945);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3946))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3946);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3947))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3947);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3948))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3948);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3949))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3949);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3950))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3950);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3951))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3951);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3952))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3952);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3953))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3953);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3954))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3954);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3955))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3955);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3956))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3956);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3957))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3957);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3958))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3958);
	}
	GlobalFunc_2224(0);
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGTitanEntry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGTitanCrash");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGBFReady");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_SOL_JET");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TRK");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_VAN");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BLR");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DIL");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BOB");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TOR");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DMP");
	STREAMING::REMOVE_ANIM_DICT("missmartin1@pointing_sky1@base");
	STREAMING::REMOVE_ANIM_DICT("missmartin1@exit_plane");
	STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_A");
	STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_B");
	iLocal_3886 = 0;
	while (iLocal_3886 <= 99)
	{
		iLocal_3518[iLocal_3886] = 0;
		iLocal_3886++;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_3896))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(uLocal_3896);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_3897))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(uLocal_3897);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_4173))
	{
		CAM::DESTROY_CAM(iLocal_4173, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_4172))
	{
		CAM::DESTROY_CAM(iLocal_4172, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_4174))
	{
		CAM::DESTROY_CAM(iLocal_4174, 0);
	}
	func_9(&Local_3217, 0);
	func_12(&Local_3217, 1);
	iLocal_3688 = 0;
	MISC::CLEAR_AREA(1388.6f, 1150f, 114f, 70f, 1, 0, 0, 0);
}



void func_848()//Position - 0x9703F
{
	iLocal_3890 = 0;
	iLocal_3891 = 0;
}


void func_850()//Position - 0x97073
{
	func_851();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_851()//Position - 0x97087
{
	GlobalFunc_5661(2, 1);
	GlobalFunc_52(1, 1);
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
	if (iLocal_3674 == 0)
	{
		AUDIO::STOP_SOUND(iLocal_3894);
		iLocal_3674 = 1;
	}
	GlobalFunc_601(20, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, 1, 1);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	GlobalFunc_2224(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4169[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_4169[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4169[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_4169[1]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_4163))
	{
		HUD::REMOVE_BLIP(&uLocal_4163);
	}
	CAM::STOP_GAMEPLAY_HINT(0);
	GlobalFunc_4948(&uLocal_27, 0, 0);
	MISC::SET_TIME_SCALE(1f);
	PATHFIND::SET_ROADS_IN_AREA(105.7f, 1683f, 230f, -11.8f, 1818.4f, 207f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(-9.5f, 1758.3f, 235.3f, 134.5f, 1638.3f, 222.5f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2299.7f, 4870.2f, 39f, 2307f, 4894.2f, 45f, 1, 1);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	func_844();
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_START");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_VEH");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SNIPER_READY");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_APP_ACTIVE");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ENGINE_HIT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_AIR_TRAFFIC");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_BUS_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_TRAIN_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ALMOST_CRASHED");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SHOOT_PLANE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_CHASE_PLANE_RT");
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_3896))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(uLocal_3896);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_3897))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(uLocal_3897);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4030, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4031, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4032, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4033, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4034, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4035, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_4036, 0);
	func_12(&Local_3217, 1);
	func_852(1, 1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	GlobalFunc_2789(1, 1);
	GlobalFunc_2789(2, 1);
	GlobalFunc_2789(7, 1);
	GlobalFunc_2789(8, 1);
	GlobalFunc_2789(9, 1);
	GlobalFunc_2789(10, 1);
	GlobalFunc_2789(4, 1);
	GlobalFunc_2789(12, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	VEHICLE::SET_RANDOM_TRAINS(1);
	Global_24454 = 0;
}

void func_852(bool bParam0, bool bParam1)//Position - 0x973FC
{
	if (iLocal_3723)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(iLocal_4172))
			{
				CAM::SET_CAM_ACTIVE(iLocal_4172, 0);
				CAM::DESTROY_CAM(iLocal_4172, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_4173))
			{
				CAM::SET_CAM_ACTIVE(iLocal_4173, 0);
				CAM::DESTROY_CAM(iLocal_4173, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_4174))
			{
				CAM::SET_CAM_ACTIVE(iLocal_4174, 0);
				CAM::DESTROY_CAM(iLocal_4174, 0);
			}
			if (bParam1)
			{
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			}
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_3723 = 0;
		}
	}
}













