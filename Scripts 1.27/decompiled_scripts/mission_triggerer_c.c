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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 16;
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
	struct<3> Local_435 = { 0, 0, 0 } ;
	int iLocal_438 = 0;
	var uLocal_439[4] = { 0, 0, 0, 0 };
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 4;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 4;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 4;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 4;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 4;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 4;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487[4] = { 0, 0, 0, 0 };
	int iLocal_492[3] = { 0, 0, 0 };
	var uLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	var uLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	struct<3> Local_506 = { 0, 0, 0 } ;
	struct<3> Local_509 = { 0, 0, 0 } ;
	struct<3> Local_512 = { 0, 0, 0 } ;
	struct<3> Local_515 = { 0, 0, 0 } ;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	int iLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 16;
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
	struct<3> Local_689 = { 0, 0, 0 } ;
	struct<3> Local_692 = { 0, 0, 0 } ;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	struct<3> Local_700 = { 0, 0, 0 } ;
	float fLocal_703 = 0f;
	float fLocal_704 = 0f;
	float fLocal_705 = 0f;
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
	struct<3> Local_722 = { 0, 0, 0 } ;
	struct<3> Local_725 = { 0, 0, 0 } ;
	var uLocal_728 = 16;
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
	struct<3> Local_899 = { 0, 0, 0 } ;
	struct<3> Local_902 = { 0, 0, 0 } ;
	struct<3> Local_905 = { 0, 0, 0 } ;
	float fLocal_908 = 0f;
	float fLocal_909 = 0f;
	float fLocal_910 = 0f;
	var uLocal_911 = 16;
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
	var uLocal_1023 = 0;
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
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	int iLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	struct<3> Local_1083 = { 0, 0, 0 } ;
	struct<3> Local_1086 = { 0, 0, 0 } ;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	float fLocal_1092 = 0f;
	float fLocal_1093 = 0f;
	float fLocal_1094 = 0f;
	float fLocal_1095 = 0f;
	float fLocal_1096 = 0f;
	var uLocal_1097 = 0;
	int iLocal_1098 = 0;
	int iLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 262;
	var uLocal_1103 = 0;
	var uLocal_1104 = 1065353216;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	struct<3> Local_1109 = { 0, 0, 0 } ;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 2;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	struct<3> Local_1118 = { 0, 0, 0 } ;
	struct<3> Local_1121 = { 0, 0, 0 } ;
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
	var uLocal_1135 = 25;
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
	var uLocal_1161 = 2;
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
	struct<3> Local_1180 = { 0, 0, 0 } ;
	var uLocal_1183 = 0;
	struct<3> Local_1184 = { 0, 0, 0 } ;
	var uLocal_1187 = 0;
	char* sLocal_1188 = NULL;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	struct<3> Local_1192 = { 0, 0, 0 } ;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	struct<3> Local_1213 = { 0, 0, 0 } ;
	struct<3> Local_1216 = { 0, 0, 0 } ;
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
	float fLocal_1243 = 0f;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 7;
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
	var uLocal_1259 = 3;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	int iLocal_1266 = 0;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	struct<3> Local_1270 = { 0, 0, 0 } ;
	struct<3> Local_1273 = { 0, 0, 0 } ;
	int iLocal_1276 = 0;
	struct<3> Local_1277 = { 0, 0, 0 } ;
	float fLocal_1280 = 0f;
	float fLocal_1281 = 0f;
	float fLocal_1282 = 0f;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 16;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
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
	int iLocal_1450 = 0;
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
	char cLocal_1471[32] = "";
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	char* sLocal_1479 = NULL;
	char* sLocal_1480 = NULL;
	var uLocal_1481 = 262;
	var uLocal_1482 = 0;
	var uLocal_1483 = 1065353216;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	struct<3> Local_1489 = { 0, 0, 0 } ;
	struct<3> Local_1492 = { 0, 0, 0 } ;
	var uLocal_1495 = 262;
	var uLocal_1496 = 0;
	var uLocal_1497 = 1065353216;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	float fLocal_1506 = 0f;
	int iLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	int iLocal_1512 = 0;
	int iLocal_1513 = 0;
	int iLocal_1514 = 0;
	int iLocal_1515 = 0;
	int iLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	int iLocal_1523 = 0;
	struct<3> Local_1524 = { 0, 0, 0 } ;
	int iLocal_1527 = 0;
	int iLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	int iLocal_1532 = 0;
	int iLocal_1533 = 0;
	float fLocal_1534 = 0f;
	float fLocal_1535 = 0f;
	float fLocal_1536 = 0f;
	float fLocal_1537 = 0f;
	float fLocal_1538 = 0f;
	float fLocal_1539 = 0f;
	int iLocal_1540 = 0;
	int iLocal_1541 = 0;
	struct<5> Local_1542 = { 262, 0, 1065353216, 0, 0 } ;
	int iLocal_1547 = 0;
	int iLocal_1548 = 0;
	int iLocal_1549 = 0;
	int iLocal_1550 = 0;
	var uLocal_1551 = 0;
	int iLocal_1552 = 0;
	float fLocal_1553 = 0f;
	float fLocal_1554 = 0f;
	float fLocal_1555 = 0f;
	float fLocal_1556 = 0f;
	float fLocal_1557 = 0f;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	struct<3> Local_1562 = { 0, 0, 0 } ;
	struct<3> Local_1565 = { 0, 0, 0 } ;
	struct<3> Local_1568 = { 0, 0, 0 } ;
	float fLocal_1571 = 0f;
	float fLocal_1572 = 0f;
	float fLocal_1573 = 0f;
	var uLocal_1574 = 16;
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
	var uLocal_1648 = 0;
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
	var uLocal_1739 = 16;
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
	var uLocal_1824 = 0;
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
	var uLocal_1860 = 0;
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
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	struct<3> Local_1904 = { 0, 0, 0 } ;
	struct<3> Local_1907 = { 0, 0, 0 } ;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	struct<3> Local_1916 = { 0, 0, 0 } ;
	float fLocal_1919 = 0f;
	float fLocal_1920 = 0f;
	float fLocal_1921 = 0f;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 16;
	var uLocal_1932 = 0;
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
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
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
	struct<3> Local_2096 = { 0, 0, 0 } ;
	struct<3> Local_2099 = { 0, 0, 0 } ;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	int iLocal_2106 = 0;
	int iLocal_2107 = 0;
	int iLocal_2108 = 0;
	var uLocal_2109 = 0;
	int iLocal_2110 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<116> Var0;
	
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
	iLocal_237 = 1496005418;
	iLocal_238 = -1863079210;
	Local_435 = { 500f, 500f, 500f };
	iLocal_438 = -1;
	iLocal_500 = -1;
	iLocal_501 = -1;
	Local_506 = { 1987.235f, 3052.738f, 46.22f };
	Local_509 = { 1986.785f, 3052.088f, 46.32f };
	Local_512 = { 1987.035f, 3052.288f, 46.34f };
	Local_515 = { 0f, 0f, 53.64f };
	iLocal_520 = 999;
	Local_689 = { -1159.737f, -1520.509f, 9.629f };
	Local_692 = { 0f, 0f, 45f };
	Local_700 = { -1158.278f, -1521.068f, 11.3094f };
	fLocal_703 = 0.65f;
	fLocal_704 = 0f;
	fLocal_705 = 35f;
	Local_722 = { -1159.923f, -1520.503f, 9.6327f };
	Local_725 = { 0f, 0f, 40f };
	Local_899 = { -1159.923f, -1520.503f, 9.6327f };
	Local_902 = { 0f, 0f, 40f };
	Local_905 = { -1158.278f, -1521.068f, 10.8094f };
	fLocal_908 = 0.65f;
	fLocal_909 = -0.16f;
	fLocal_910 = 35f;
	iLocal_1080 = -1;
	Local_1083 = { -440.132f, 1058.52f, 326.69f };
	Local_1086 = { 0f, 0f, 0f };
	fLocal_1092 = 30f;
	fLocal_1093 = 0.38f;
	fLocal_1094 = 0f;
	fLocal_1095 = 0.095f;
	fLocal_1096 = 0.05f;
	iLocal_1098 = -1;
	iLocal_1099 = -1;
	Local_1109 = { 0.2f, 2.2f, 0f };
	Local_1118 = { 0f, 0f, 0f };
	Local_1121 = { Local_1118 };
	Local_1180 = { 0f, 0f, 0f };
	Local_1184 = { 0f, 0f, 0f };
	sLocal_1188 = "FBIPRAU";
	Local_1192 = { 0f, 0f, 0f };
	iLocal_1201 = -1;
	iLocal_1202 = -1;
	iLocal_1203 = -1;
	Local_1213 = { 1276.88f, -1712.571f, 54.415f };
	Local_1216 = { 0f, 0f, -142.02f };
	fLocal_1243 = -0.64f;
	Local_1270 = { 95.84f, -1291.44f, 28.275f };
	Local_1273 = { 0f, 0f, 30f };
	Local_1277 = { 92.83592f, -1291.296f, 29.36181f };
	fLocal_1280 = 0.35f;
	fLocal_1281 = 0f;
	fLocal_1282 = 40f;
	StringCopy(&cLocal_1471, "jhp1a_sec_arrive", 32);
	sLocal_1479 = "jhp2a_alt";
	sLocal_1480 = "jhp2a_main";
	Local_1489 = { 441.8607f, -1015.758f, 27.66605f };
	Local_1492 = { -1511.456f, -654.4792f, 28.23983f };
	fLocal_1506 = 999999f;
	iLocal_1507 = -1;
	iLocal_1532 = 613961892;
	fLocal_1534 = 30f;
	fLocal_1535 = 0.46f;
	fLocal_1536 = 0f;
	fLocal_1537 = -0.02f;
	fLocal_1538 = 0.1f;
	fLocal_1553 = 25f;
	fLocal_1554 = 0.5f;
	fLocal_1555 = 0f;
	fLocal_1556 = -0.005f;
	fLocal_1557 = 0.1f;
	Local_1562 = { -803.523f, 171.887f, 72.321f };
	Local_1565 = { 0f, 0f, -59.24f };
	Local_1568 = { -803.8107f, 172.2809f, 73.0846f };
	fLocal_1571 = 0.35f;
	fLocal_1572 = -0.02f;
	fLocal_1573 = 30f;
	Local_1904 = { 1972.956f, 3812.079f, 32.84f };
	Local_1907 = { 0f, 0f, 31f };
	Local_1916 = { 1972.982f, 3814.104f, 33.9045f };
	fLocal_1919 = 0.35f;
	fLocal_1920 = -0.78f;
	fLocal_1921 = 30f;
	Local_2096 = { -1148.219f, -1522.4f, 10.633f };
	Local_2099 = { 0f, 0f, -53.75f };
	Var0.f_1 = 8;
	Var0.f_115.f_7 = 21;
	Var0.f_115.f_8 = 6;
	Var0.f_110 = 0;
	Var0.f_111 = -1;
	Var0 = 31745/*func_162*/;
	GlobalFunc_6510();
	while (true)
	{
		if (!Var0.f_106)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 0))
			{
				Var0.f_106 = 1;
				if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(115))
				{
					if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 1)
					{
						func_160(&Var0);
						Var0.f_106 = 0;
					}
					else
					{
						func_158(&Var0);
					}
				}
			}
		}
		if (!GlobalFunc_230(38) || GlobalFunc_230(46))
		{
			func_158(&Var0);
		}
		func_1(&Var0);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x4B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (GlobalFunc_236())
	{
		uParam0->f_109 = MISC::GET_GAME_TIMER() + 2000;
	}
	if (Global_SAVE_DATA.isGameflowActive)
	{
		if (!Global_87297)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
				while (iVar0 < Global_87299)
				{
					Global_87288 = Global_87300[iVar0 /*17*/].f_5;
					if (Global_87300[iVar0 /*17*/] == 1 && !Global_87297)
					{
						if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[Global_87300[iVar0 /*17*/].f_6 /*3*/], 1) || MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[Global_87300[iVar0 /*17*/].f_6 /*3*/], 2))
						{
							GlobalFunc_7999(iVar0);
						}
						else
						{
							switch (Global_87300[iVar0 /*17*/].f_3)
							{
								case 0:
									func_26(iVar0, uParam0);
									break;
								
								case 1:
									func_19(iVar0, uParam0);
									break;
								
								case 2:
									break;
								}
							}
					}
					iVar0++;
				}
				if (Global_87291 != -1)
				{
					iVar0 = 0;
					while (iVar0 < Global_87299)
					{
						if (!Global_87297)
						{
							if (Global_87300[iVar0 /*17*/].f_5 == Global_87291)
							{
								Global_87298 = iVar0;
								Global_87297 = 1;
								MISC::SET_BIT(&(Global_87300[iVar0 /*17*/].f_10.f_1), 8);
								uParam0->f_112 = 1;
							}
						}
						iVar0++;
					}
					Global_87291 = -1;
				}
			}
		}
		else if (Global_87297 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = GlobalFunc_6506(Global_87300[Global_87298 /*17*/].f_5);
				iVar2 = GlobalFunc_7733(&(Global_87300[Global_87298 /*17*/].f_7), Global_87300[Global_87298 /*17*/].f_4, iVar1, uParam0->f_112, 0);
				Global_87288 = -1;
				switch (iVar2)
				{
					case 0:
						Global_87297 = 0;
						uParam0->f_112 = 0;
						break;
					
					case 1:
						Global_87297 = 0;
						Global_87300[Global_87298 /*17*/].f_1 = 1;
						Global_87298 = -1;
						Global_17097 = 0;
						uParam0->f_112 = 0;
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				if (Global_87300[Global_87298 /*17*/].f_7 != -1)
				{
					GlobalFunc_4572(&(Global_87300[Global_87298 /*17*/].f_7));
				}
				Global_87298 = -1;
				Global_87297 = 0;
				uParam0->f_112 = 0;
			}
		}
	}
	if (Global_87290 != -1)
	{
		if (Global_87289 == -1 || Global_87289 == Global_87290)
		{
			iVar3 = GlobalFunc_2636(Global_87290);
			if (iVar3 != -1)
			{
				if (!uParam0->f_1[iVar3 /*13*/])
				{
					Stack.Push(Global_87300[iVar3 /*17*/].f_5);
					Stack.Push(&(Global_87300[iVar3 /*17*/].f_10));
					Stack.Push(&(uParam0->f_1[iVar3 /*13*/]));
					Call_Loc(*uParam0);
				}
				Call_Loc(uParam0->f_1[iVar3 /*13*/].f_2);
				Call_Loc(uParam0->f_1[iVar3 /*13*/].f_4);
				if (StackVal)
				{
					Global_87289 = Global_87300[iVar3 /*17*/].f_10;
					uParam0->f_108 = uParam0->f_1[iVar3 /*13*/].f_3;
					uParam0->f_107 = 1;
					Global_87294 = 0;
					Global_87290 = -1;
				}
			}
			else
			{
				Global_87290 = -1;
			}
		}
	}
	if (Global_87287)
	{
		GlobalFunc_187();
		GlobalFunc_7629();
		if ((GlobalFunc_4571() != 60 && (GlobalFunc_4571() != 23 || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)) && (GlobalFunc_4571() != 38 || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4))
		{
			GlobalFunc_2536(1, 0);
		}
		else
		{
			GlobalFunc_2536(1, 1);
		}
	}
	if (GlobalFunc_4938(3))
	{
		if (uParam0->f_110 != 0)
		{
			uParam0->f_110 = 0;
		}
		if (Global_87293)
		{
			func_160(uParam0);
		}
	}
	else
	{
		uParam0->f_110++;
	}
	if (Global_87289 != -1)
	{
		if (MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13))
		{
			if (Global_87293)
			{
				func_158(uParam0);
			}
		}
		else if (uParam0->f_110 > 50)
		{
			func_158(uParam0);
		}
	}
	else if (uParam0->f_110 > 0)
	{
		func_158(uParam0);
	}
	if (Global_87296)
	{
		if (!Global_87295)
		{
			Global_87296 = 0;
		}
	}
}


















void func_19(int iParam0, var uParam1)//Position - 0x10A5
{
	int iVar0;
	
	if (!GlobalFunc_4938(GlobalFunc_6506(Global_87300[iParam0 /*17*/].f_5)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, iVar0))
		{
			if (!MISC::IS_BIT_SET(Global_17097, iVar0))
			{
				MISC::SET_BIT(&Global_17097, iVar0);
			}
		}
		iVar0++;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
		{
			if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, GlobalFunc_8329()))
			{
				Global_87298 = iParam0;
				Global_87297 = 1;
				uParam1->f_112 = 1;
				return;
			}
		}
	}
}







void func_26(int iParam0, var uParam1)//Position - 0x12D0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = Global_87300[iParam0 /*17*/].f_5;
	iVar1 = 0;
	if (MISC::IS_BIT_SET(Global_Mission_Blips[Global_87300[iParam0 /*17*/].f_9 /*23*/].f_11, 19))
	{
		iVar1 = GlobalFunc_8329();
		if (iVar1 > 2 || iVar1 < 0)
		{
			iVar1 = 0;
		}
	}
	Var2 = { Global_Mission_Blips[Global_87300[iParam0 /*17*/].f_9 /*23*/][iVar1 /*3*/] };
	if (GlobalFunc_3048(iVar0))
	{
		if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 0))
		{
			Stack.Push(iVar0);
			Stack.Push(&(Global_87300[iParam0 /*17*/].f_10));
			Stack.Push(&(uParam1->f_1[iParam0 /*13*/]));
			Call_Loc(*uParam1);
			GlobalFunc_4587(&(Global_87300[iParam0 /*17*/].f_10));
		}
		func_147(iVar0, Var2, &(uParam1->f_113));
		if (!func_27(iParam0, uParam1))
		{
			return;
		}
	}
	Global_87298 = iParam0;
	Global_87297 = 1;
}

int func_27(int iParam0, var uParam1)//Position - 0x13A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<12> Var5;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	var uVar22;
	bool bVar23;
	bool bVar24;
	
	iVar0 = Global_87300[iParam0 /*17*/].f_5;
	iVar1 = GlobalFunc_8329();
	if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 0))
	{
		if (GlobalFunc_42(iVar1))
		{
			iVar2 = Global_81155[iVar0 /*34*/].f_10;
			fVar3 = GlobalFunc_4586(func_144(iVar2));
			if (GlobalFunc_4938(GlobalFunc_6506(iVar0)))
			{
				if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 13))
				{
					if (uParam1->f_109 > MISC::GET_GAME_TIMER() || GlobalFunc_6509(iVar1) == 5)
					{
						if (!Global_84352[iVar0 /*2*/])
						{
							fVar4 = (Global_87300[iParam0 /*17*/].f_10.f_2 * 0.25f);
							if (fVar3 < (fVar4 * fVar4))
							{
								Global_84352[iVar0 /*2*/] = 1;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_42(GlobalFunc_8329()))
					{
						Call_Loc(uParam1->f_1[iParam0 /*13*/].f_12);
						if (!StackVal)
						{
							GlobalFunc_8269(&(Global_86864.f_209));
						}
					}
				}
				if (!Global_84352[iVar0 /*2*/])
				{
					Call_Loc(uParam1->f_1[iParam0 /*13*/].f_12);
					if (!StackVal)
					{
						if (Global_87300[iParam0 /*17*/].f_2)
						{
							Global_87300[iParam0 /*17*/].f_2 = 0;
							Global_84352[iVar0 /*2*/] = 1;
						}
						if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 1))
						{
							if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 9))
							{
								if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 13))
								{
									if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
									{
										HUD::REMOVE_BLIP(&(uParam1->f_114));
									}
									MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 13);
								}
								if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 11))
								{
									GlobalFunc_2198(iVar2, 1, 0);
								}
								MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 1);
							}
						}
						else
						{
							if (!GlobalFunc_4584(iVar0))
							{
								if (GlobalFunc_474(iVar2) && GlobalFunc_2641(iVar2))
								{
									GlobalFunc_5843(iVar2);
									GlobalFunc_4583(iVar0);
								}
							}
							if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 9))
							{
								if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 11))
								{
									GlobalFunc_2198(iVar2, 0, 0);
								}
								MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 1);
							}
						}
						if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 4))
						{
							if (func_122(iParam0, uParam1))
							{
								return 1;
							}
						}
						if (!Global_87293 && Global_87290 == -1)
						{
							if (!GlobalFunc_6508())
							{
								if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 6))
								{
									if (fVar3 < (Global_87300[iParam0 /*17*/].f_10.f_4 * Global_87300[iParam0 /*17*/].f_10.f_4))
									{
										GlobalFunc_6423(iVar0, 3, Global_87300[iParam0 /*17*/].f_10.f_6);
										MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 6);
									}
								}
								else if (fVar3 > ((Global_87300[iParam0 /*17*/].f_10.f_4 * Global_87300[iParam0 /*17*/].f_10.f_4) + 30f))
								{
									GlobalFunc_2635(iVar0);
									MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 6);
								}
							}
						}
						if (Global_87300[iParam0 /*17*/].f_10.f_5 != 0f)
						{
							if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 7))
							{
								if (fVar3 < (Global_87300[iParam0 /*17*/].f_10.f_5 * Global_87300[iParam0 /*17*/].f_10.f_5))
								{
									GlobalFunc_6423(Global_87300[iParam0 /*17*/].f_10, 1, Global_87300[iParam0 /*17*/].f_10.f_6);
									MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 7);
								}
							}
							else if (fVar3 > ((Global_87300[iParam0 /*17*/].f_10.f_5 * Global_87300[iParam0 /*17*/].f_10.f_5) + 30f))
							{
								GlobalFunc_2635(iVar0);
								MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 7);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && GlobalFunc_42(GlobalFunc_8329()))
						{
							if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 2))
							{
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_9);
								if (fVar3 < (Global_87300[iParam0 /*17*/].f_10.f_2 * Global_87300[iParam0 /*17*/].f_10.f_2))
								{
									if (!Global_87286)
									{
										if (!Global_87295)
										{
											Call_Loc(uParam1->f_1[iParam0 /*13*/].f_2);
											if (MISC::IS_BIT_SET(Global_81155[Global_87300[iParam0 /*17*/].f_5 /*34*/].f_15, 15))
											{
												SCRIPT::REQUEST_SCRIPT(&(Global_81155[Global_87300[iParam0 /*17*/].f_5 /*34*/]));
												SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
											}
											Global_87289 = iVar0;
											uParam1->f_108 = uParam1->f_1[iParam0 /*13*/].f_3;
											uParam1->f_107 = 1;
											MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 2);
											Global_87294 = 1;
											if (!Global_87295)
											{
												Global_87295 = 1;
											}
										}
									}
									else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
									{
										Global_87286 = 0;
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 3))
							{
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_9);
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_2);
								if (Global_87286)
								{
									func_115(&(Global_87300[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
									return 0;
								}
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_4);
								if (StackVal)
								{
									if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, GlobalFunc_8329()))
									{
										if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 10))
										{
											if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 9))
											{
												if (func_109(iVar0))
												{
													MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 9);
												}
												else if (!GlobalFunc_6508())
												{
													Call_Loc(uParam1->f_1[iParam0 /*13*/].f_5);
													Global_87294 = 0;
													MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 3);
													if (Global_86213 == 0)
													{
														GlobalFunc_6423(iVar0, 2, Global_87300[iParam0 /*17*/].f_10.f_6);
													}
													if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 11))
													{
														func_100(&(uParam1->f_115), 0, 0, 2000, 1, 1, 0, 1);
														Var5.f_7 = 21;
														Var5.f_8 = 6;
														uParam1->f_115 = { Var5 };
														if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
														{
															CAM::DO_SCREEN_FADE_IN(800);
														}
														MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 11);
													}
													if (func_122(iParam0, uParam1))
													{
														return 1;
													}
												}
												else
												{
													GlobalFunc_6507(&(Global_87300[iParam0 /*17*/].f_10));
												}
											}
											else
											{
												Var17 = { func_98(iVar0) };
												fVar20 = GlobalFunc_4586(Var17);
												fVar21 = GlobalFunc_4581(iVar0);
												if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 13))
												{
													if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
													{
														HUD::REMOVE_BLIP(&(uParam1->f_114));
													}
													uParam1->f_114 = GlobalFunc_5104(Var17, 0);
													HUD::SET_BLIP_SPRITE(uParam1->f_114, func_94(iVar2));
													if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_Mission_Blips[iVar2 /*23*/].f_20)))
													{
														HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_114, &(Global_Mission_Blips[iVar2 /*23*/].f_20));
													}
													HUD::SET_BLIP_HIGH_DETAIL(uParam1->f_114, 1);
													HUD::SET_BLIP_AS_SHORT_RANGE(uParam1->f_114, 0);
													HUD::SET_BLIP_DISPLAY(uParam1->f_114, 4);
													switch (GlobalFunc_8329())
													{
														case 0:
															HUD::SET_BLIP_COLOUR(uParam1->f_114, 42);
															break;
														
														case 1:
															HUD::SET_BLIP_COLOUR(uParam1->f_114, 43);
															break;
														
														case 2:
															HUD::SET_BLIP_COLOUR(uParam1->f_114, 44);
															break;
													}
													MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 13);
												}
												GlobalFunc_4580(Var17);
												if (fVar20 < (fVar21 * fVar21))
												{
													PLAYER::FORCE_CLEANUP(8);
													MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 9);
													if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
													{
														if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
														{
															if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
															{
																uVar22 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
																if (ENTITY::GET_ENTITY_HEALTH(uVar22) < 1)
																{
																	ENTITY::SET_ENTITY_HEALTH(uVar22, 1);
																}
																if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uVar22) < 1f)
																{
																	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uVar22, 1f);
																}
																if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uVar22) < 1f)
																{
																	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uVar22, 1f);
																}
																if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 25) || (iVar0 == 15 && GlobalFunc_8329() == 1))
																{
																	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uVar22))
																	{
																		GlobalFunc_113(uVar22, 2.5f, 2, 0.5f, 1, 1);
																	}
																}
															}
														}
													}
													if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 23))
													{
														return 1;
													}
													else
													{
														MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 10);
													}
												}
											}
										}
										else
										{
											bVar23 = false;
											if (GlobalFunc_5183(Global_81155[iVar0 /*34*/].f_13, Global_81155[iVar0 /*34*/].f_14))
											{
												bVar23 = true;
											}
											if (func_58(iVar0, &(uParam1->f_115), bVar23, 1, 0, 1, 0))
											{
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), GlobalFunc_4579(iVar0), 1, 0, 0, 1);
													ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), GlobalFunc_4578(iVar0));
													if (GlobalFunc_4577(iVar0))
													{
														if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
														{
															PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
														}
														PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
													}
													PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
													CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
													CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
												}
												MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 10);
												MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 11);
											}
										}
									}
								}
							}
							else
							{
								if (!Global_87295)
								{
									Global_87295 = 1;
								}
								if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 1))
								{
									if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 11))
									{
										if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_11, GlobalFunc_8329()))
										{
											bVar24 = true;
											if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 13))
											{
												if (MISC::IS_BIT_SET(Global_2621447[iVar0], 0))
												{
													bVar24 = true;
												}
												else
												{
													switch (GlobalFunc_8329())
													{
														case 0:
															if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 28))
															{
																bVar24 = false;
															}
															break;
														
														case 1:
														case 2:
															bVar24 = false;
															break;
														}
													}
											}
											if (bVar24)
											{
												if (!Global_87287)
												{
													GlobalFunc_4580(func_144(iVar2));
												}
											}
										}
									}
								}
								if (fVar3 < 56.25f)
								{
									if (!Global_87296)
									{
										Global_87296 = 1;
									}
								}
								else if (Global_87296)
								{
									Global_87296 = 0;
								}
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_8);
								GlobalFunc_4576();
								if ((func_109(iVar0) || !MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, GlobalFunc_8329())) || GlobalFunc_6508())
								{
									if (Global_87287)
									{
										GlobalFunc_5164();
									}
									if (!(GlobalFunc_6508() && iVar0 == 92))
									{
										GlobalFunc_6507(&(Global_87300[iParam0 /*17*/].f_10));
										func_34();
										MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 3);
										Call_Loc(uParam1->f_1[iParam0 /*13*/].f_3);
										MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 2);
										if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 5))
										{
											Call_Loc(uParam1->f_1[iParam0 /*13*/].f_1);
										}
										Global_87295 = 0;
									}
								}
								else
								{
									Call_Loc(uParam1->f_1[iParam0 /*13*/].f_11);
									if (StackVal)
									{
										if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_11, GlobalFunc_8329()))
										{
											GlobalFunc_6677("AM_H_DISRU", 2, 0, 10000, 10000, 7, 0, 0, 0);
										}
										if (Global_87287)
										{
											GlobalFunc_5164();
										}
										Call_Loc(uParam1->f_1[iParam0 /*13*/].f_6);
										GlobalFunc_6507(&(Global_87300[iParam0 /*17*/].f_10));
										MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 3);
										GlobalFunc_5312(&(Global_96066.f_35), 262144);
										Call_Loc(uParam1->f_1[iParam0 /*13*/].f_3);
										MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 2);
										if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 5))
										{
											Call_Loc(uParam1->f_1[iParam0 /*13*/].f_1);
										}
										GlobalFunc_507(iVar0, 1);
										Global_87295 = 0;
									}
									else if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 4))
									{
										if (func_122(iParam0, uParam1))
										{
											Global_87295 = 0;
											return 1;
										}
									}
								}
							}
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 1))
						{
							if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 11))
							{
								GlobalFunc_2198(iVar2, 0, 0);
							}
							if (Global_87287)
							{
								GlobalFunc_5164();
							}
							MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 1);
						}
						if (!Global_87300[iParam0 /*17*/].f_2)
						{
							Global_87300[iParam0 /*17*/].f_2 = 1;
						}
						func_115(&(Global_87300[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 1))
					{
						if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 11))
						{
							GlobalFunc_2198(iVar2, 0, 0);
						}
						GlobalFunc_6507(&(Global_87300[iParam0 /*17*/].f_10));
						MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 1);
					}
					if (Global_87289 == Global_87300[iParam0 /*17*/].f_10)
					{
						func_115(&(Global_87300[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
					}
				}
			}
			else if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 2))
			{
				if (Global_87289 != -1)
				{
					if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 8))
					{
						func_115(&(Global_87300[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
					}
				}
			}
			if (Global_68507 != Global_87289)
			{
				if (Global_87289 == Global_87300[iParam0 /*17*/].f_5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (fVar3 > (Global_87300[iParam0 /*17*/].f_10.f_3 * Global_87300[iParam0 /*17*/].f_10.f_3))
						{
							func_115(&(Global_87300[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 1);
						}
					}
				}
			}
		}
	}
	return 0;
}







void func_34()//Position - 0x246B
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Global_86864.f_28[iVar0]))
			{
				func_51(&(Global_86864.f_28[iVar0]));
			}
			else
			{
				GlobalFunc_4575(&(Global_86864.f_28[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_4574(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_51(&(Global_86864.f_28[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[iVar0]))
			{
				bVar1 = true;
				if (PED::IS_PED_TRACKED(Global_86864.f_9[iVar0]))
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(Global_86864.f_9[iVar0]);
				}
				if (bVar1)
				{
					func_47(&(Global_86864.f_9[iVar0]));
				}
				else
				{
					GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
				}
			}
			else
			{
				func_47(&(Global_86864.f_9[iVar0]));
			}
		}
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_5312(&(Global_96066.f_35), 262144);
	Global_68262 = 1;
}













void func_47(var uParam0)//Position - 0x2915
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	GlobalFunc_8267(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(uVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						func_48(*uParam0);
						ENTITY::SET_ENTITY_HAS_GRAVITY(*uParam0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
						TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
						if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 1))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
							{
								ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
							}
							ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
							TASK::TASK_WANDER_STANDARD(*uParam0, 1193033728, 0);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar2);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar2);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar2);
						}
						PED::SET_PED_KEEP_TASK(*uParam0, 1);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
			}
		}
	}
}

void func_48(int iParam0)//Position - 0x29F2
{
	TASK::CLEAR_PED_TASKS(uParam0);
	PED::SET_PED_DIES_WHEN_INJURED(uParam0, 1);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0, 1);
	PED::SET_PED_CAN_EVASIVE_DIVE(uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0, 0);
	PED::SET_PED_CONFIG_FLAG(uParam0, 208, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 1);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
}



void func_51(var uParam0)//Position - 0x2B07
{
	var uVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(uVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
			}
		}
	}
}







bool func_58(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F55
{
	struct<2> Var0;
	
	func_89(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_59(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_59(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F83
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_2(0) && !bParam2) && !bParam4)
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
				uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(uVar0))
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
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_100(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
					uVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(uVar2))
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
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				func_100(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
				uVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(uVar4))
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
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_100(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			if (GlobalFunc_9535(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
		else if (GlobalFunc_9535(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
					GlobalFunc_9535(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
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






























void func_89(int iParam0, var uParam1)//Position - 0x43FF
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (GlobalFunc_8329())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (GlobalFunc_8329())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (GlobalFunc_8329() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (MISC::GET_HASH_KEY("RAIN") == MISC::GET_PREV_WEATHER_TYPE_HASH_NAME())
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}





int func_94(int iParam0)//Position - 0x5555
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return -1;
	}
	if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 19))
	{
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			return Global_Mission_Blips[iVar0 /*23*/].f_12[GlobalFunc_8329()];
		}
	}
	return Global_Mission_Blips[iVar0 /*23*/].f_12[0];
}




Vector3 func_98(int iParam0)//Position - 0x56B4
{
	switch (iParam0)
	{
		case 69:
			return 717.6356f, -974.0173f, 23.9143f;
			break;
		
		case 2:
			return -60.4359f, -1109.547f, 25.4358f;
			break;
		
		case 17:
			return -790.8605f, 179.0219f, 71.8352f;
			break;
		
		case 86:
			return 717.6356f, -974.0173f, 23.9143f;
			break;
		
		case 63:
			return 1977.723f, 3815.195f, 32.427f;
			break;
		
		case 64:
			return 1980.144f, 3816.593f, 31.2676f;
			break;
		
		case 30:
			return 149.9259f, -680.9203f, 41.0273f;
			break;
		
		case 76:
			return 128.5236f, -1291.609f, 28.2695f;
			break;
		
		case 43:
			return -14.4295f, -1437.772f, 30.1015f;
			break;
		
		case 49:
			return 295.877f, 185.7382f, 103.2762f;
			break;
		
		case 84:
			return 115.4478f, -1295.915f, 28.2692f;
			break;
		
		case 85:
			return 115.4478f, -1295.915f, 28.2692f;
			break;
		
		case 62:
			switch (GlobalFunc_8329())
			{
				case 2:
					return 1973.724f, 3815.174f, 32.4261f;
					break;
				
				default:
					return -817.8629f, 177.6462f, 71.2278f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}


void func_100(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5885
{
	var uVar0;
	
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
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
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
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
		}
	}
}









int func_109(int iParam0)//Position - 0x5BFD
{
	if (iParam0 == 86)
	{
		if (!GlobalFunc_8255())
		{
			return 0;
		}
	}
	if (Global_87287)
	{
		return 0;
	}
	if (GlobalFunc_111())
	{
		return 0;
	}
	if (Global_81155[iParam0 /*34*/].f_13 == -1 && Global_81155[iParam0 /*34*/].f_14 == -1)
	{
		return 0;
	}
	if (GlobalFunc_5183(Global_81155[iParam0 /*34*/].f_13, Global_81155[iParam0 /*34*/].f_14))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 23))
	{
		return 1;
	}
	switch (GlobalFunc_8329())
	{
		case 0:
			if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 8))
			{
				return 0;
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 9))
			{
				return 0;
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 10))
			{
				return 0;
			}
			break;
	}
	return 1;
}






void func_115(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5FE4
{
	GlobalFunc_6507(uParam0);
	GlobalFunc_4582(*uParam0);
	GlobalFunc_507(*uParam0, 1);
	if (Global_87287)
	{
		GlobalFunc_5164();
	}
	if (Global_87289 == *uParam0)
	{
		Global_68490 = 0;
		Global_87289 = -1;
		Global_87295 = 0;
		Global_87296 = 0;
	}
	if (Global_87296)
	{
		Global_87296 = 0;
	}
	if (*uParam1)
	{
		if (MISC::IS_BIT_SET(uParam0->f_1, 3))
		{
			if (*uParam0 == Global_68507)
			{
				Call_Loc(uParam1->f_7);
			}
			else if (bParam3)
			{
				Call_Loc(uParam1->f_7);
			}
			else
			{
				func_34();
			}
			GlobalFunc_5312(&(Global_96066.f_35), 262144);
			MISC::CLEAR_BIT(&(uParam0->f_1), 3);
		}
		if (MISC::IS_BIT_SET(uParam0->f_1, 2))
		{
			Call_Loc(uParam1->f_3);
			if (!MISC::IS_BIT_SET(uParam0->f_1, 5))
			{
				Call_Loc(uParam1->f_1);
			}
			MISC::CLEAR_BIT(&(uParam0->f_1), 2);
			MISC::CLEAR_BIT(&(uParam0->f_1), 8);
			MISC::CLEAR_BIT(&(uParam0->f_1), 9);
			*uParam2 = 0;
			Global_87289 = -1;
			Global_87294 = 0;
			Global_87295 = 0;
			Global_87296 = 0;
			if (MISC::IS_BIT_SET(Global_81155[*uParam0 /*34*/].f_15, 15))
			{
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_81155[*uParam0 /*34*/]));
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
			}
		}
	}
	else
	{
		func_34();
	}
	if (Global_87845.f_47 != 0)
	{
		Global_87845.f_47 = 0;
	}
}







int func_122(int iParam0, var uParam1)//Position - 0x631F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_87300[iParam0 /*17*/].f_5;
	if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, GlobalFunc_8329()))
	{
		iVar1 = 0;
		if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 15))
		{
			iVar1 = 1;
		}
		iVar2 = 0;
		if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 22))
		{
			if (Global_87287)
			{
				if (uParam1->f_111 == -1)
				{
					uParam1->f_111 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - uParam1->f_111) > 12000)
				{
					iVar2 = 1;
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			Call_Loc(uParam1->f_1[iParam0 /*13*/].f_10);
			if (StackVal || iVar2)
			{
				if (GlobalFunc_8988(iVar1))
				{
					if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 4) || Global_87289 == iVar0)
					{
						MISC::SET_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 8);
						PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
						GlobalFunc_6423(iVar0, 4, Global_87300[iParam0 /*17*/].f_10.f_6);
						Global_68514.f_7 = 1;
						uParam1->f_111 = -1;
						if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 11))
						{
							GlobalFunc_2198(Global_81155[iVar0 /*34*/].f_10, 0, 0);
						}
						MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 1);
						if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_114));
						}
						MISC::CLEAR_BIT(&(Global_87300[iParam0 /*17*/].f_10.f_1), 13);
						func_123(iVar0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_123(int iParam0)//Position - 0x648B
{
	int iVar0;
	var uVar1;
	
	if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 15))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864[iVar0]))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_86864[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Global_86864[iVar0], 1), 3.75f, 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[iVar0]))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_86864.f_9[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_86864.f_9[iVar0], 16);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[iVar0], 1), 3.75f, 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[iVar0]))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_86864.f_28[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
				}
			}
			iVar0++;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 15))
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f, 0);
		}
		if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 15) && !MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 24))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::GET_ENTITY_HEALTH(uVar1) < 1)
				{
					ENTITY::SET_ENTITY_HEALTH(uVar1, 1);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uVar1, 1f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uVar1, 1f);
				}
				GlobalFunc_113(uVar1, 2.5f, 2, 0.25f, 0, 1);
				if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 500, 0);
						}
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 64);
					}
				}
			}
		}
	}
}





















Vector3 func_144(int iParam0)//Position - 0x733A
{
	if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 19))
	{
		return GlobalFunc_2247(iParam0, GlobalFunc_8329());
	}
	return GlobalFunc_2247(iParam0, 0);
}



void func_147(int iParam0, struct<3> Param1, var uParam4)//Position - 0x73C2
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (GlobalFunc_42(GlobalFunc_8329()))
	{
		if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_11, GlobalFunc_8329()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(Param1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 64f)
				{
					GlobalFunc_187();
					if (!*uParam4)
					{
						bVar1 = MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_11, 0);
						bVar2 = MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_11, 1);
						bVar3 = MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_11, 2);
						switch (GlobalFunc_8329())
						{
							case 0:
								if (bVar2)
								{
									if (bVar3)
									{
										sVar0 = "TRIG_FT";
									}
									else
									{
										sVar0 = "TRIG_F";
									}
								}
								else if (bVar3)
								{
									sVar0 = "TRIG_T";
								}
								break;
							
							case 1:
								if (bVar1)
								{
									if (bVar3)
									{
										sVar0 = "TRIG_MT";
									}
									else
									{
										sVar0 = "TRIG_M";
									}
								}
								else if (bVar3)
								{
									sVar0 = "TRIG_T";
								}
								break;
							
							case 2:
								if (bVar1)
								{
									if (bVar2)
									{
										sVar0 = "TRIG_MF";
									}
									else
									{
										sVar0 = "TRIG_M";
									}
								}
								else if (bVar2)
								{
									sVar0 = "TRIG_F";
								}
								break;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							switch (GlobalFunc_5216(sVar0))
							{
								case 2:
									GlobalFunc_6677(sVar0, 3, 0, 1000, 10000, GlobalFunc_8546(), 0, 0, 0);
									break;
								
								case 1:
									*uParam4 = 1;
									StringCopy(&Global_95999, "", 16);
									if (!GlobalFunc_63(7))
									{
										GlobalFunc_6677("TRIG_SWTCH", 3, 0, 21000, 10000, GlobalFunc_8546(), 0, 0, 0);
									}
									break;
							}
						}
					}
				}
				else if (*uParam4)
				{
					*uParam4 = 0;
				}
			}
		}
	}
}











void func_158(var uParam0)//Position - 0x796F
{
	int iVar0;
	
	func_160(uParam0);
	iVar0 = 0;
	while (iVar0 < Global_87299)
	{
		uParam0->f_1[iVar0 /*13*/] = 0;
		MISC::CLEAR_BIT(&(Global_87300[iVar0 /*17*/].f_10.f_1), 0);
		if (MISC::IS_BIT_SET(Global_87300[iVar0 /*17*/].f_10.f_1, 1))
		{
			GlobalFunc_2198(Global_87300[iVar0 /*17*/].f_9, 0, 0);
			MISC::CLEAR_BIT(&(Global_87300[iVar0 /*17*/].f_10.f_1), 1);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_114))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_114));
	}
	GlobalFunc_7538();
}


void func_160(var uParam0)//Position - 0x7A14
{
	int iVar0;
	int iVar1;
	struct<165> Var2;
	
	iVar0 = GlobalFunc_2636(Global_87289);
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_87300[iVar0 /*17*/].f_10.f_1, 0) && uParam0->f_1[iVar0 /*13*/])
		{
			func_115(&(Global_87300[iVar0 /*17*/].f_10), &(uParam0->f_1[iVar0 /*13*/]), &(uParam0->f_107), 0);
		}
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(Global_87300[iVar0 /*17*/].f_10.f_1, 0) && uParam0->f_1[iVar0 /*13*/])
		{
			func_115(&(Global_87300[iVar0 /*17*/].f_10), &(uParam0->f_1[iVar0 /*13*/]), &(uParam0->f_107), 0);
		}
		if (MISC::IS_BIT_SET(Global_87300[iVar0 /*17*/].f_10.f_1, 10) || MISC::IS_BIT_SET(Global_87300[iVar0 /*17*/].f_10.f_1, 11))
		{
			MISC::CLEAR_BIT(&(Global_87300[iVar0 /*17*/].f_10.f_1), 10);
			MISC::CLEAR_BIT(&(Global_87300[iVar0 /*17*/].f_10.f_1), 11);
			func_100(&(uParam0->f_115), 0, 0, 2000, 1, 1, 0, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_86864[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 18)
	{
		Global_86864.f_9[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_86864.f_28[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_86864.f_37[iVar1] = 0;
		iVar1++;
	}
	Var2 = 16;
	Global_86864.f_44 = { Var2 };
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	Global_87295 = 0;
	Global_87294 = 0;
	Global_87289 = -1;
	Global_87293 = 0;
	if (uParam0->f_107)
	{
		Call_Loc(uParam0->f_108);
		uParam0->f_107 = 0;
	}
}


void func_162(int iParam0, var uParam1, var uParam2)//Position - 0x7C01
{
	switch (iParam0)
	{
		case 3:
			func_858(uParam1, iParam0, 200f, 210f, 50f, 0, 0f, 4);
			uParam2->f_1 = 444367/*func_857*/;
			uParam2->f_2 = 444350/*func_856*/;
			uParam2->f_3 = 444333/*func_855*/;
			uParam2->f_4 = 444308/*func_854*/;
			uParam2->f_5 = 444207/*func_853*/;
			uParam2->f_6 = 444184/*func_852*/;
			uParam2->f_7 = 444161/*func_851*/;
			uParam2->f_10 = 444065/*func_850*/;
			uParam2->f_11 = 444056/*func_849*/;
			uParam2->f_12 = 444047/*func_848*/;
			uParam2->f_8 = 444039/*func_847*/;
			uParam2->f_9 = 444031/*func_846*/;
			break;
		
		case 4:
			func_858(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 444023/*func_845*/;
			uParam2->f_2 = 444004/*func_844*/;
			uParam2->f_3 = 443992/*func_843*/;
			uParam2->f_4 = 443974/*func_842*/;
			uParam2->f_5 = 443917/*func_841*/;
			uParam2->f_6 = 443898/*func_840*/;
			uParam2->f_7 = 443879/*func_839*/;
			uParam2->f_10 = 443760/*func_838*/;
			uParam2->f_11 = 443751/*func_837*/;
			uParam2->f_12 = 443742/*func_836*/;
			uParam2->f_8 = 443627/*func_835*/;
			uParam2->f_9 = 443619/*func_834*/;
			break;
		
		case 5:
			func_858(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 443611/*func_833*/;
			uParam2->f_2 = 443592/*func_832*/;
			uParam2->f_3 = 443580/*func_831*/;
			uParam2->f_4 = 443562/*func_830*/;
			uParam2->f_5 = 443554/*func_829*/;
			uParam2->f_6 = 443546/*func_828*/;
			uParam2->f_7 = 443538/*func_827*/;
			uParam2->f_10 = 443443/*func_826*/;
			uParam2->f_11 = 443434/*func_825*/;
			uParam2->f_12 = 443412/*func_824*/;
			uParam2->f_8 = 443297/*func_823*/;
			uParam2->f_9 = 443289/*func_822*/;
			break;
		
		case 6:
			func_858(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 443281/*func_821*/;
			uParam2->f_2 = 443262/*func_820*/;
			uParam2->f_3 = 443250/*func_819*/;
			uParam2->f_4 = 443232/*func_818*/;
			uParam2->f_5 = 443224/*func_817*/;
			uParam2->f_6 = 443216/*func_816*/;
			uParam2->f_7 = 443208/*func_815*/;
			uParam2->f_10 = 443105/*func_814*/;
			uParam2->f_11 = 443096/*func_813*/;
			uParam2->f_12 = 443074/*func_812*/;
			uParam2->f_8 = 442959/*func_811*/;
			uParam2->f_9 = 442951/*func_810*/;
			break;
		
		case 7:
			func_858(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 442943/*func_809*/;
			uParam2->f_2 = 442924/*func_808*/;
			uParam2->f_3 = 442912/*func_807*/;
			uParam2->f_4 = 442894/*func_806*/;
			uParam2->f_5 = 442806/*func_805*/;
			uParam2->f_6 = 442787/*func_804*/;
			uParam2->f_7 = 442768/*func_803*/;
			uParam2->f_10 = 442673/*func_802*/;
			uParam2->f_11 = 442664/*func_801*/;
			uParam2->f_12 = 442642/*func_800*/;
			uParam2->f_8 = 442494/*func_798*/;
			uParam2->f_9 = 442486/*func_797*/;
			break;
		
		case 8:
			func_858(uParam1, iParam0, 300f, 335f, 50f, 0, 0, 0);
			uParam2->f_1 = 442433/*func_796*/;
			uParam2->f_2 = 442238/*func_794*/;
			uParam2->f_3 = 442166/*func_792*/;
			uParam2->f_4 = 441134/*func_788*/;
			uParam2->f_5 = 439609/*func_787*/;
			uParam2->f_6 = 439457/*func_786*/;
			uParam2->f_7 = 439305/*func_785*/;
			uParam2->f_10 = 437265/*func_782*/;
			uParam2->f_11 = 436847/*func_781*/;
			uParam2->f_12 = 436838/*func_780*/;
			uParam2->f_8 = 436830/*func_779*/;
			uParam2->f_9 = 436822/*func_778*/;
			break;
		
		case 9:
			func_858(uParam1, iParam0, 100f, 120f, 50f, 0, 0, 0);
			uParam2->f_1 = 436814/*func_777*/;
			uParam2->f_2 = 436709/*func_775*/;
			uParam2->f_3 = 436690/*func_774*/;
			uParam2->f_4 = 436664/*func_773*/;
			uParam2->f_5 = 436647/*func_772*/;
			uParam2->f_6 = 436495/*func_771*/;
			uParam2->f_7 = 436397/*func_770*/;
			uParam2->f_10 = 435940/*func_768*/;
			uParam2->f_11 = 435601/*func_767*/;
			uParam2->f_12 = 435592/*func_766*/;
			uParam2->f_8 = 434068/*func_765*/;
			uParam2->f_9 = 434060/*func_764*/;
			break;
		
		case 10:
			func_858(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 434052/*func_763*/;
			uParam2->f_2 = 434044/*func_762*/;
			uParam2->f_3 = 434025/*func_761*/;
			uParam2->f_4 = 434016/*func_760*/;
			uParam2->f_5 = 434008/*func_759*/;
			uParam2->f_6 = 434000/*func_758*/;
			uParam2->f_7 = 433992/*func_757*/;
			uParam2->f_10 = 433920/*func_756*/;
			uParam2->f_11 = 433911/*func_755*/;
			uParam2->f_12 = 433902/*func_754*/;
			uParam2->f_8 = 433819/*func_753*/;
			uParam2->f_9 = 433811/*func_752*/;
			break;
		
		case 59:
			func_858(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 433803/*func_751*/;
			uParam2->f_2 = 433795/*func_750*/;
			uParam2->f_3 = 433783/*func_749*/;
			uParam2->f_4 = 433774/*func_748*/;
			uParam2->f_5 = 433740/*func_747*/;
			uParam2->f_6 = 433728/*func_746*/;
			uParam2->f_7 = 433716/*func_745*/;
			uParam2->f_10 = 433696/*func_744*/;
			uParam2->f_11 = 433687/*func_743*/;
			uParam2->f_12 = 433678/*func_742*/;
			uParam2->f_8 = 433229/*func_740*/;
			uParam2->f_9 = 433221/*func_739*/;
			break;
		
		case 45:
			func_858(uParam1, iParam0, 100f, 125f, 50f, 0, 0, 0);
			uParam2->f_1 = 433181/*func_738*/;
			uParam2->f_2 = 433155/*func_737*/;
			uParam2->f_3 = 433129/*func_736*/;
			uParam2->f_4 = 433090/*func_735*/;
			uParam2->f_5 = 428690/*func_727*/;
			uParam2->f_6 = 428565/*func_726*/;
			uParam2->f_7 = 428420/*func_724*/;
			uParam2->f_10 = 428175/*func_723*/;
			uParam2->f_11 = 427960/*func_722*/;
			uParam2->f_12 = 427951/*func_721*/;
			uParam2->f_8 = 423970/*func_714*/;
			uParam2->f_9 = 423962/*func_713*/;
			break;
		
		case 14:
			func_858(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 423954/*func_712*/;
			uParam2->f_2 = 423871/*func_711*/;
			uParam2->f_3 = 423852/*func_710*/;
			uParam2->f_4 = 423826/*func_709*/;
			uParam2->f_5 = 423818/*func_708*/;
			uParam2->f_6 = 423810/*func_707*/;
			uParam2->f_7 = 423802/*func_706*/;
			uParam2->f_10 = 423666/*func_705*/;
			uParam2->f_11 = 423657/*func_704*/;
			uParam2->f_12 = 423648/*func_703*/;
			uParam2->f_8 = 423640/*func_702*/;
			uParam2->f_9 = 423632/*func_701*/;
			break;
		
		case 15:
			func_858(uParam1, iParam0, 50f, 75f, 50f, 5, 0, 0);
			uParam2->f_1 = 423624/*func_700*/;
			uParam2->f_2 = 423616/*func_699*/;
			uParam2->f_3 = 423608/*func_698*/;
			uParam2->f_4 = 423599/*func_697*/;
			uParam2->f_5 = 423577/*func_696*/;
			uParam2->f_6 = 423565/*func_695*/;
			uParam2->f_7 = 423553/*func_694*/;
			uParam2->f_10 = 423478/*func_693*/;
			uParam2->f_11 = 423469/*func_692*/;
			uParam2->f_12 = 423460/*func_691*/;
			uParam2->f_8 = 423452/*func_690*/;
			uParam2->f_9 = 423444/*func_689*/;
			break;
		
		case 16:
			func_858(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 423436/*func_688*/;
			uParam2->f_2 = 423419/*func_687*/;
			uParam2->f_3 = 423402/*func_686*/;
			uParam2->f_4 = 423377/*func_685*/;
			uParam2->f_5 = 423364/*func_684*/;
			uParam2->f_6 = 423351/*func_683*/;
			uParam2->f_7 = 423338/*func_682*/;
			uParam2->f_10 = 423197/*func_681*/;
			uParam2->f_11 = 423188/*func_680*/;
			uParam2->f_12 = 423179/*func_679*/;
			uParam2->f_8 = 423171/*func_678*/;
			uParam2->f_9 = 423163/*func_677*/;
			break;
		
		case 91:
			func_858(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 423151/*func_676*/;
			uParam2->f_2 = 423107/*func_675*/;
			uParam2->f_3 = 423063/*func_674*/;
			uParam2->f_4 = 423004/*func_673*/;
			uParam2->f_5 = 422698/*func_672*/;
			uParam2->f_6 = 422642/*func_671*/;
			uParam2->f_7 = 422586/*func_670*/;
			uParam2->f_10 = 422093/*func_669*/;
			uParam2->f_11 = 421983/*func_668*/;
			uParam2->f_12 = 421974/*func_667*/;
			uParam2->f_8 = 420752/*func_664*/;
			uParam2->f_9 = 420615/*func_663*/;
			break;
		
		case 93:
			func_858(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 420607/*func_662*/;
			uParam2->f_2 = 420593/*func_661*/;
			uParam2->f_3 = 420495/*func_658*/;
			uParam2->f_4 = 420455/*func_656*/;
			uParam2->f_5 = 420424/*func_654*/;
			uParam2->f_6 = 420412/*func_653*/;
			uParam2->f_7 = 420400/*func_652*/;
			uParam2->f_10 = 420328/*func_651*/;
			uParam2->f_11 = 420319/*func_650*/;
			uParam2->f_12 = 420310/*func_649*/;
			uParam2->f_8 = 420302/*func_648*/;
			uParam2->f_9 = 420294/*func_647*/;
			break;
		
		case 92:
			func_858(uParam1, iParam0, 550f, 580f, 580f, 5, 900f, 2);
			uParam2->f_1 = 420225/*func_646*/;
			uParam2->f_2 = 420162/*func_645*/;
			uParam2->f_3 = 420109/*func_644*/;
			uParam2->f_4 = 419991/*func_643*/;
			uParam2->f_5 = 417730/*func_638*/;
			uParam2->f_6 = 417627/*func_637*/;
			uParam2->f_7 = 417472/*func_636*/;
			uParam2->f_10 = 416805/*func_633*/;
			uParam2->f_11 = 416750/*func_632*/;
			uParam2->f_12 = 416161/*func_629*/;
			uParam2->f_8 = 415362/*func_627*/;
			uParam2->f_9 = 414699/*func_621*/;
			break;
		
		case 39:
			func_858(uParam1, iParam0, 290f, 300f, 50f, 0, 0, 0);
			uParam2->f_1 = 414691/*func_620*/;
			uParam2->f_2 = 414328/*func_616*/;
			uParam2->f_3 = 413943/*func_610*/;
			uParam2->f_4 = 413561/*func_606*/;
			uParam2->f_5 = 412727/*func_604*/;
			uParam2->f_6 = 412617/*func_603*/;
			uParam2->f_7 = 412519/*func_602*/;
			uParam2->f_10 = 411975/*func_600*/;
			uParam2->f_11 = 411628/*func_599*/;
			uParam2->f_12 = 411619/*func_598*/;
			uParam2->f_8 = 410968/*func_597*/;
			uParam2->f_9 = 410960/*func_596*/;
			break;
		
		case 65:
			func_858(uParam1, iParam0, 25f, 35f, 50f, 0, 0, 0);
			uParam2->f_1 = 410952/*func_595*/;
			uParam2->f_2 = 410891/*func_594*/;
			uParam2->f_3 = 410840/*func_593*/;
			uParam2->f_4 = 410776/*func_592*/;
			uParam2->f_5 = 393351/*func_586*/;
			uParam2->f_6 = 393282/*func_585*/;
			uParam2->f_7 = 393151/*func_583*/;
			uParam2->f_10 = 393107/*func_582*/;
			uParam2->f_11 = 392872/*func_581*/;
			uParam2->f_12 = 392842/*func_580*/;
			uParam2->f_8 = 390594/*func_569*/;
			uParam2->f_9 = 390586/*func_568*/;
			break;
		
		case 76:
			func_858(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 390530/*func_567*/;
			uParam2->f_2 = 390426/*func_566*/;
			uParam2->f_3 = 390353/*func_565*/;
			uParam2->f_4 = 390196/*func_564*/;
			uParam2->f_5 = 388490/*func_558*/;
			uParam2->f_6 = 388253/*func_556*/;
			uParam2->f_7 = 388161/*func_555*/;
			uParam2->f_10 = 388059/*func_554*/;
			uParam2->f_11 = 387943/*func_553*/;
			uParam2->f_12 = 387934/*func_552*/;
			uParam2->f_8 = 383881/*func_537*/;
			uParam2->f_9 = 383740/*func_536*/;
			break;
		
		case 46:
			func_858(uParam1, iParam0, 200f, 225f, 50f, 0, 0, 0);
			uParam2->f_1 = 383724/*func_535*/;
			uParam2->f_2 = 383662/*func_534*/;
			uParam2->f_3 = 383581/*func_533*/;
			uParam2->f_4 = 79645/*func_254*/;
			uParam2->f_5 = 53357/*func_205*/;
			uParam2->f_6 = 53067/*func_203*/;
			uParam2->f_7 = 52940/*func_201*/;
			uParam2->f_10 = 52616/*func_200*/;
			uParam2->f_11 = 52508/*func_199*/;
			uParam2->f_12 = 52499/*func_198*/;
			uParam2->f_8 = 35276/*func_180*/;
			uParam2->f_9 = 35268/*func_179*/;
			break;
		
		case 54:
		case 55:
		case 58:
			func_858(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 35260/*func_178*/;
			uParam2->f_2 = 35243/*func_177*/;
			uParam2->f_3 = 35226/*func_176*/;
			uParam2->f_4 = 35201/*func_175*/;
			uParam2->f_5 = 35097/*func_174*/;
			uParam2->f_6 = 35078/*func_173*/;
			uParam2->f_7 = 34955/*func_171*/;
			uParam2->f_10 = 34585/*func_167*/;
			uParam2->f_11 = 34576/*func_166*/;
			uParam2->f_12 = 34554/*func_165*/;
			uParam2->f_8 = 34546/*func_164*/;
			uParam2->f_9 = 34538/*func_163*/;
			break;
		
		default:
			return;
			break;
	}
	*uParam2 = 1;
}


















void func_180()//Position - 0x89CC
{
	switch (GlobalFunc_8329())
	{
		case 0:
			if (!iLocal_1527)
			{
				if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.5211f, 71.10547f, -795.6818f, 177.6922f, 74.83471f, 6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7001f, 185.8952f, 71.10547f, -800.207f, 176.4364f, 74.83471f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.318f, 71.33471f, -805.5256f, 178.1133f, 74.83471f, 8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.6328f, 74.65309f, 2f, 0, 1, 0))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_PRE_MISSION_MUSIC"))
					{
						iLocal_1527 = 1;
					}
				}
			}
			else if (((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.5211f, 71.10547f, -795.6818f, 177.6922f, 74.83471f, 6f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7001f, 185.8952f, 71.10547f, -800.207f, 176.4364f, 74.83471f, 4f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.318f, 71.33471f, -805.5256f, 178.1133f, 74.83471f, 8f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.6328f, 74.65309f, 2f, 0, 1, 0))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_LEFT_HOUSE"))
				{
					iLocal_1527 = 0;
				}
			}
			break;
		
		case 2:
			func_197(0);
			func_184(40, 4);
			func_184(41, 4);
			func_184(42, 4);
			func_184(43, 4);
			func_184(44, 4);
			break;
	}
	if (!iLocal_1528)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_2247(207, GlobalFunc_8329())) <= (30f * 30f))
		{
			GlobalFunc_6514(46, "MIC_1_INT", 15, -1, 30);
			iLocal_1528 = 1;
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_2247(207, GlobalFunc_8329())) > (100f * 100f))
	{
		GlobalFunc_4593();
		iLocal_1528 = 0;
	}
}




void func_184(int iParam0, int iParam1)//Position - 0x8D9E
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422140.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422140.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_186(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_186(int iParam0)//Position - 0x8EE5
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!GlobalFunc_4921())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { GlobalFunc_511(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		GlobalFunc_8505(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_90014.f_288 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
			iVar9 = GlobalFunc_9149(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (GlobalFunc_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (GlobalFunc_9148())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		GlobalFunc_510(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}











void func_197(int iParam0)//Position - 0xCCF9
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_67138[iParam0] = 1;
}


int func_199()//Position - 0xCD1C
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_86864.f_9[iVar0]) || FIRE::IS_ENTITY_ON_FIRE(Global_86864.f_9[iVar0]))
				{
					if (iVar0 == 0)
					{
						Global_2544857 = 1;
					}
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_200()//Position - 0xCD88
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(207, GlobalFunc_8329()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (GlobalFunc_8329())
		{
			case 0:
				fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
				if (fVar3 < (2.5f * 2.5f))
				{
					if (iLocal_1527)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MIC1_INTRO_CS_BEGINS");
					}
					return 1;
				}
				break;
			
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "missmic1leadinoutmic_1_int", "_leadin_michael", 3))
						{
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5212f, 168.3172f, 71.33471f, -805.3661f, 178.3396f, 74.83471f, 9f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -808.5197f, 176.2145f, 70.83471f, -809.0067f, 181.6289f, 75.40309f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.494f, 179.4951f, 71.15309f, -808.4824f, 184.8225f, 75.55967f, 5f, 0, 1, 0))
							{
								return 1;
							}
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_201()//Position - 0xCECC
{
	if (iLocal_1527)
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_LEFT_HOUSE"))
		{
		}
	}
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_5168(2, 0, 0);
	GlobalFunc_4593();
	iLocal_1528 = 0;
}


void func_203()//Position - 0xCF4B
{
	if (iLocal_1527)
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_LEFT_HOUSE"))
		{
		}
	}
	GlobalFunc_4574(&(Global_86864[0]));
	func_204(&(Global_86864.f_9[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_5168(2, 0, 0);
	GlobalFunc_4593();
	iLocal_1528 = 0;
}

void func_204(var uParam0)//Position - 0xCF95
{
	var uVar0;
	var uVar1;
	
	GlobalFunc_8267(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(uVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						func_48(*uParam0);
						if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 1))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
							{
								ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
							}
							ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
						}
						ENTITY::SET_ENTITY_HAS_GRAVITY(*uParam0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1024, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 16, 1);
						TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
						TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, 1, 0);
						PED::SET_PED_KEEP_TASK(*uParam0, 1);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
			}
		}
	}
}

void func_205()//Position - 0xD06D
{
	struct<4> Var0;
	
	MISC::CLEAR_AREA(GlobalFunc_2247(207, 0), 5f, 1, 0, 0, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::ADD_RELATIONSHIP_GROUP("MICHAEL_1_TS_RELGROUP", &(Global_86864.f_42));
	switch (GlobalFunc_8329())
	{
		case 0:
			break;
		
		case 2:
			if (GlobalFunc_4608(0, 0) == 0)
			{
				GlobalFunc_7695(0);
				GlobalFunc_6682(&Var0, 0);
				if (GlobalFunc_10543(&(Global_86864[0]), 0, Var0, Var0.f_3, 1, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[0], 2);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[0], 0, 0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(0, 0));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				GlobalFunc_4598(Global_86864.f_9[0]);
				GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
				TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[0], "missmic1leadinoutmic_1_int", "_leadin_michael", -803.85f, 172.265f, 71.845f, 0f, 0f, 110f, 1000f, -1000f, -1, 790529, 0f, 2, 1);
			}
			GlobalFunc_5168(2, 0, 1);
			break;
	}
	iLocal_1528 = 0;
}

















































int func_254()//Position - 0x1371D
{
	switch (GlobalFunc_8329())
	{
		case 0:
			return 1;
			break;
		
		case 2:
			if ((!func_255(&(Global_86864.f_9[0]), 0, -804.2f, 172.4f, 72.85f, 12, -99) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(0, 0))) || !STREAMING::HAS_ANIM_DICT_LOADED("missmic1leadinoutmic_1_int"))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_255(var uParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6)//Position - 0x1378F
{
	if (!GlobalFunc_7214(iParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_PED(26, GlobalFunc_4917(iParam1), Param2, 0f, 0, 1);
		PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
		func_525(*uParam0);
		GlobalFunc_8270(*uParam0, 1, 0);
		func_515(*uParam0);
		func_512(*uParam0);
		func_369(*uParam0, 0);
		GlobalFunc_516(*uParam0);
		MISC::SET_BIT(&(Global_87845.f_47), GlobalFunc_237(iParam1));
		if (iParam6 != -99)
		{
			func_256(*uParam0, iParam5, iParam6, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
		return 0;
	}
	else if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	else if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x13876
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
				iVar5 = GlobalFunc_7150(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7150(iParam0, 9);
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
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
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
									iVar3 = GlobalFunc_11246(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11246(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11126(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11121(iParam0, iVar10, &iVar4, 1))
							{
								func_256(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_256(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_256(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_256(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_256(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_256(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_256(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11246(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11246(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11246(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11121(iParam0, iVar10, &iVar4, 0))
		{
			func_256(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11120(iParam0, iVar10, &iVar4))
		{
			func_256(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

















































































































int func_369(int iParam0, bool bParam1)//Position - 0x2F7FD
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_373(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7997(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_373(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10997(iParam0, 3, 169))
					{
						func_256(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 10))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 50))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 59))
			{
				func_256(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 22))
			{
				func_256(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10997(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 4))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 3))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 82))
			{
				func_256(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 76))
			{
				func_256(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 1))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10997(iParam0, 12, 12))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10997(iParam0, 3, 71))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 7))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 88))
			{
				func_256(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 17))
			{
				func_256(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_256(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_373(int iParam0, int iParam1)//Position - 0x2FF4C
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6712(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11126(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_384(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8532(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_9151();
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
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7150(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7150(iParam0, GlobalFunc_33(iVar67));
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











void func_384(int iParam0, var uParam1, bool bParam2)//Position - 0x3119E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6712(iParam0);
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
			if (GlobalFunc_11121(iParam0, iVar1, &iVar2, 0))
			{
				func_256(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11120(iParam0, iVar1, &iVar2))
			{
				func_256(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_387(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_387(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x31435
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
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11125(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_387(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10761(iParam0, 11, uVar15[11], iParam6, 0);
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
						iVar3 = GlobalFunc_11123(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_387(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = GlobalFunc_7150(iParam0, 1);
			iVar3 = GlobalFunc_11123(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
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
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_387(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar70 = GlobalFunc_7150(iParam0, 11);
				iVar71 = GlobalFunc_7150(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_7150(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11123(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_7150(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_387(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_387(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_387(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_387(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_387(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10761(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11125(iParam0, 8, -1), iParam2);
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
				GlobalFunc_11276(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10761(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_7150(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_7150(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_7150(iParam0, 7);
				if (!GlobalFunc_8583(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
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
					iVar94 = GlobalFunc_7150(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
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
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_387(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7998(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10998(iParam0, 9, iVar97))
						{
							func_387(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_387(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_387(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11125(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11125(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_387(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_387(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_387(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_387(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11205(iParam0, &uVar4))
		{
			func_387(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_387(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_387(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_387(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_387(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





























































































































void func_512(int iParam0)//Position - 0x5BB5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS(iParam0);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar0 /*15*/].f_10[iVar1], iVar2))
				{
					if (GlobalFunc_5123(&Var3, GlobalFunc_523(iVar1, iVar2), GlobalFunc_522(iVar0), iParam0, -1))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var3.f_4, Var3.f_5);
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}



void func_515(int iParam0)//Position - 0x5BC58
{
	int iVar0;
	
	iVar0 = GlobalFunc_6712(uParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(uParam0))
	{
		PED::ADD_ARMOUR_TO_PED(iParam0, (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar0] - PED::GET_PED_ARMOUR(iParam0)));
	}
}










void func_525(int iParam0)//Position - 0x5D17C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6712(iParam0);
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
		func_384(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11126(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11126(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11126(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11126(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_384(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








void func_533()//Position - 0x5DA5D
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Global_86864.f_9[0]))
		{
			GlobalFunc_8915(&(Global_86864.f_9[0]));
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(0, 0));
	STREAMING::REMOVE_ANIM_DICT("missmic1leadinoutmic_1_int");
}

void func_534()//Position - 0x5DAAE
{
	switch (GlobalFunc_8329())
	{
		case 0:
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(joaat("player_zero"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
			STREAMING::REQUEST_ANIM_DICT("missmic1leadinoutmic_1_int");
			break;
	}
}

void func_535()//Position - 0x5DAEC
{
	iLocal_1527 = 0;
	iLocal_1528 = 0;
}

void func_536()//Position - 0x5DAFC
{
	if (!iLocal_1269)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 127.7924f, -1290.529f, 31.48345f, 126.7243f, -1288.844f, 28.28557f, 4.5f, 0, 1, 0))
		{
			iLocal_1269 = 1;
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 129.1924f, -1299.392f, 28.2327f, 127.4775f, -1296.46f, 31.70886f, 4f, 0, 1, 0))
		{
			iLocal_1269 = 0;
		}
		GlobalFunc_2536(1, 0);
	}
	if (GlobalFunc_8329() != 2)
	{
		func_184(82, 4);
	}
}

void func_537()//Position - 0x5DB89
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (GlobalFunc_8329() != 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 92.58456f, -1293.605f, 28.07538f, 98.85587f, -1289.741f, 30.26875f, 6.5f, 0, 1, 0))
		{
			CAM::SET_GAMEPLAY_COORD_HINT(Local_1277, -1, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1280);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1281);
			CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1282);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_1277, 30f))
			{
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1277, -1, 2048, 2);
			}
		}
		else
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
		}
	}
	func_184(82, 4);
	if (!iLocal_1269)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 127.7924f, -1290.529f, 31.48345f, 126.7243f, -1288.844f, 28.28557f, 4.5f, 0, 1, 0))
		{
			iLocal_1269 = 1;
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 129.1924f, -1299.392f, 28.2327f, 127.4775f, -1296.46f, 31.70886f, 4f, 0, 1, 0))
		{
			iLocal_1269 = 0;
		}
		GlobalFunc_2536(1, 0);
	}
	switch (iLocal_1268)
	{
		case 0:
			if (GlobalFunc_8329() == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 93.70387f, -1289.812f, 31.11002f, 94.82489f, -1291.769f, 28.26875f, 2.67f, 0, 1, 0))
				{
					GlobalFunc_173(&uLocal_1285, 0, Global_86864.f_9[0], "TREVOR", 0, 1);
					func_549();
					GlobalFunc_702(1, 0, 1);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_1268 = 2;
				}
			}
			else if (GlobalFunc_8329() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 100.1588f, -1294.28f, 28.26663f, 98.8404f, -1291.977f, 31.24332f, 1.75f, 0, 1, 0))
				{
					func_549();
					GlobalFunc_702(1, 0, 1);
					GlobalFunc_173(&uLocal_1285, 0, Global_86864.f_9[0], "TREVOR", 0, 1);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					uLocal_1266 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1270, Local_1273, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1266, "missbigscore1leadinoutbs_1_int", "leadin_action_a_trevor", 1000f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_1283, iLocal_1266, "leadin_action_a_fridge_door", "missbigscore1leadinoutbs_1_int", 1000f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_1284, iLocal_1266, "leadin_action_a_fridge", "missbigscore1leadinoutbs_1_int", 1000f, -8f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1266, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2096, 2);
					GlobalFunc_4956();
					iLocal_1268++;
				}
			}
			else if (GlobalFunc_8329() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 100.1588f, -1294.28f, 28.26663f, 98.8404f, -1291.977f, 31.24332f, 1.75f, 0, 1, 0))
				{
					func_549();
					GlobalFunc_702(1, 0, 1);
					GlobalFunc_173(&uLocal_1285, 0, Global_86864.f_9[0], "TREVOR", 0, 1);
					GlobalFunc_173(&uLocal_1285, 1, Global_86864.f_9[1], "MICHAEL", 0, 1);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_1266 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1270, Local_1273, 2);
					uLocal_1267 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1270, Local_1273, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_1266, "missbigscore1leadinoutbs_1_int", "leadin_action_c_michael", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1266, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2096, 2);
					GlobalFunc_4956();
					iLocal_1268++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_8329() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 96.83046f, -1290.328f, 28.26876f, 98.01225f, -1292.351f, 31.24332f, 3.5f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				}
				if (!iLocal_1450)
				{
					GlobalFunc_173(&uLocal_1285, 0, Global_86864.f_9[0], "TREVOR", 0, 1);
					if (GlobalFunc_10652(&uLocal_1285, "FH1AUD", "FH1_INTLI3", 7, 0, 0, 0))
					{
						iLocal_1450 = 1;
					}
				}
			}
			else if (GlobalFunc_8329() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 91.93958f, -1292.488f, 30.86913f, 98.35245f, -1288.746f, 28.38858f, 2.8f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				}
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 99.38659f, -1290.62f, 27.88257f, 96.55007f, -1292.253f, 31.26875f, 1.75f, 0, 1, 0))
					{
						if (!iLocal_1450)
						{
							GlobalFunc_173(&uLocal_1285, 0, Global_86864.f_9[0], "TREVOR", 0, 1);
							if (GlobalFunc_10652(&uLocal_1285, "FH1AUD", "FH1_INTLI4", 7, 0, 0, 0))
							{
								iLocal_1450 = 1;
							}
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1267))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1267) > 0.95f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
						{
							iLocal_1267 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1270, Local_1273, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1267, "missbigscore1leadinoutbs_1_int", "leadin_loop_c_trevor", 1.5f, -8f, 0, 0, 1148846080, 0);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1266))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1266) >= 0.7f && !GlobalFunc_111())
				{
					iLocal_1268++;
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[1], 1);
				}
			}
			break;
	}
	if (!iLocal_1276)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_86864.f_28[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					iLocal_1276 = 1;
				}
			}
		}
	}
}












void func_549()//Position - 0x5E84F
{
	int iVar0;
	var uVar1;
	
	if (!Global_87287)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864[iVar0]))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_86864[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[iVar0]))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_86864.f_9[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_86864.f_9[iVar0], 16);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[iVar0], 1), 6f, 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[iVar0]))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_86864.f_28[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 6f, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::GET_ENTITY_HEALTH(uVar1) < 1)
				{
					ENTITY::SET_ENTITY_HEALTH(uVar1, 1);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uVar1, 1f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uVar1, 1f);
				}
				GlobalFunc_113(uVar1, 2.5f, 2, 0.5f, 0, 1);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 500, 0);
					}
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
		GlobalFunc_2571(1);
		PLAYER::FORCE_CLEANUP(8);
		Global_87287 = 1;
	}
}




int func_553()//Position - 0x5EB67
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
		{
			if (PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (iLocal_1269)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_554()//Position - 0x5EBDB
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1268 == 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			if (GlobalFunc_8329() != 2)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				GlobalFunc_2536(1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1277, -1, 2048, 2);
			}
			return 1;
		}
	}
	return 0;
}

void func_555()//Position - 0x5EC41
{
	int iVar0;
	
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	func_51(&uLocal_1283);
	func_51(&uLocal_1284);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_556()//Position - 0x5EC9D
{
	int iVar0;
	
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_557(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	func_51(&(Global_86864.f_28[0]));
	func_51(&uLocal_1283);
	func_51(&uLocal_1284);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_557(var uParam0)//Position - 0x5ED03
{
	var uVar0;
	char* sVar1;
	
	GlobalFunc_8267(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				func_48(*uParam0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
					{
						ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
					}
					ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
				ENTITY::SET_ENTITY_HAS_GRAVITY(*uParam0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
			}
		}
	}
}

void func_558()//Position - 0x5ED8A
{
	MISC::CLEAR_AREA(GlobalFunc_2247(233, 0), 2f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	if (GlobalFunc_8329() == 2)
	{
	}
	else if (GlobalFunc_8329() == 0)
	{
		while (!func_562(&(Global_86864.f_9[0]), 2, Local_1270, 0, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
		Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), Local_1270, 1, 1, 0);
		iLocal_1276 = 0;
		uLocal_1283 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(93.2458f, -1291.031f, 29.1533f, 5f, joaat("prop_cs_fridge_door"), 1, 0, 1);
		uLocal_1284 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(92.7504f, -1290.901f, 29.1933f, 5f, joaat("prop_cs_fridge"), 1, 0, 1);
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		iLocal_1266 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1270, Local_1273, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1266, "missbigscore1leadinoutbs_1_int", "leadin_loop_b_trevor", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1266, 1);
	}
	else if (GlobalFunc_8329() == 1)
	{
		while (!func_562(&(Global_86864.f_9[0]), 2, Local_1270, 0, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
		while (!func_562(&(Global_86864.f_9[1]), 0, 94.71292f, -1290.841f, 28.26876f, 0, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
		ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[1], 27.17f);
		Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), Local_1270, 1, 1, 0);
		iLocal_1276 = 0;
		uLocal_1283 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(93.2458f, -1291.031f, 29.1533f, 5f, joaat("prop_cs_fridge_door"), 1, 0, 1);
		uLocal_1284 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(92.7504f, -1290.901f, 29.1933f, 5f, joaat("prop_cs_fridge"), 1, 0, 1);
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		iLocal_1266 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1270, Local_1273, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1266, "missbigscore1leadinoutbs_1_int", "leadin_loop_c_trevor", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1266, 1);
	}
	GlobalFunc_6514(76, "BS_1_INT", 252, 248, 0);
	if (GlobalFunc_8329() == 2)
	{
		func_559(76, "Trevor", PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_8329() == 0)
	{
		func_559(76, "Trevor", Global_86864.f_9[0]);
		func_559(76, "Michael", PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_8329() == 1)
	{
		func_559(76, "Trevor", Global_86864.f_9[0]);
		func_559(76, "Michael", Global_86864.f_9[1]);
		func_559(76, "Franklin", PLAYER::PLAYER_PED_ID());
	}
}

void func_559(int iParam0, char* sParam1, int iParam2)//Position - 0x5F078
{
	int iVar0;
	
	if (Global_68250 == iParam0)
	{
		if (Global_68443 < 5)
		{
			Global_68444[Global_68443 /*2*/] = GlobalFunc_4595(sParam1);
			Global_68444[Global_68443 /*2*/].f_1 = iParam2;
			Global_68443++;
			iVar0 = GlobalFunc_4594(sParam1);
			if (iVar0 != 144)
			{
				MISC::SET_BIT(&(Global_68265[iVar0]), 0);
				MISC::SET_BIT(&(Global_68265[iVar0]), 1);
				MISC::SET_BIT(&(Global_68265[iVar0]), 2);
				MISC::SET_BIT(&(Global_68265[iVar0]), 3);
				MISC::SET_BIT(&(Global_68265[iVar0]), 4);
				MISC::SET_BIT(&(Global_68265[iVar0]), 5);
				MISC::SET_BIT(&(Global_68265[iVar0]), 6);
				MISC::SET_BIT(&(Global_68265[iVar0]), 7);
				MISC::SET_BIT(&(Global_68265[iVar0]), 8);
				MISC::SET_BIT(&(Global_68265[iVar0]), 9);
				MISC::SET_BIT(&(Global_68265[iVar0]), 10);
				MISC::SET_BIT(&(Global_68265[iVar0]), 11);
			}
		}
	}
}



int func_562(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x5F23F
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
			func_525(*uParam0);
			GlobalFunc_8270(*uParam0, 1, 0);
			func_515(*uParam0);
			func_512(*uParam0);
			func_369(*uParam0, bParam8);
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


int func_564()//Position - 0x5F434
{
	if ((((((STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_fridge_door"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_fridge"))) && STREAMING::HAS_MODEL_LOADED(joaat("player_zero"))) && STREAMING::HAS_MODEL_LOADED(joaat("player_two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missbigscore1leadinoutbs_1_int")) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				return 0;
			}
		}
		else
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(93.3024f, -1290.947f, 29.2074f, 0.5f, 2);
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_565()//Position - 0x5F4D1
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fridge_door"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fridge"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
	STREAMING::REMOVE_ANIM_DICT("missbigscore1leadinoutbs_1_int");
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
}

void func_566()//Position - 0x5F51A
{
	STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_fridge_door"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_fridge"));
	STREAMING::REQUEST_MODEL(joaat("player_zero"));
	STREAMING::REQUEST_MODEL(joaat("player_two"));
	STREAMING::REQUEST_ANIM_DICT("missbigscore1leadinoutbs_1_int");
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(93.3024f, -1290.947f, 29.2074f, 0.5f, 2);
		}
	}
}

void func_567()//Position - 0x5F582
{
	iLocal_1268 = 0;
	iLocal_1276 = 0;
	iLocal_1269 = 0;
	iLocal_1450 = 0;
	Local_1270 = { 95.84f, -1291.44f, 28.275f };
	Local_1273 = { 0f, 0f, 30f };
}


void func_569()//Position - 0x5F5C2
{
	if (iLocal_2103 < 3)
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	if (GlobalFunc_8329() == 2)
	{
		if (iLocal_2104 == 1)
		{
		}
		else if (func_581())
		{
			GlobalFunc_4956();
			GlobalFunc_200(&uLocal_1931, 0);
			GlobalFunc_200(&uLocal_1931, 1);
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_86864.f_9[0]);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			GlobalFunc_8380(0, 1, 1, 0);
			iLocal_2104 = 1;
		}
		else
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::_0xCCD078C2665D2973(1);
			}
			switch (iLocal_2103)
			{
				case 0:
					STREAMING::REQUEST_MODEL(joaat("v_ilev_trev_doorfront"));
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1143.596f, -1531.037f, 11.71196f, -1155.015f, -1514.865f, 14.71195f, 19f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1142.95f, -1518.523f, 3f, -1149.981f, -1523.386f, 12.63301f, 3.5f, 0, 1, 0))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_trev_doorfront")))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2108))
							{
								iLocal_2108 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1149.71f, -1521.09f, 10.78f, 10f, joaat("v_ilev_trev_doorfront"), 1, 0, 1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2108))
							{
								GlobalFunc_173(&uLocal_1931, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								GlobalFunc_6808(&(Global_86864.f_9[0]), 32, -1148.786f, -1523.266f, 9.633f, 0, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(32));
								uLocal_2102 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2096, Local_2099, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_2102, "misstrevor4leadinouttrv_4_int", "leadin_loop_start_idle_floyd", 1000f, -8f, 1, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-1149.71f, -1521.09f, 10.78f, 5f, joaat("v_ilev_trev_doorfront"), iLocal_2102, "leadin_loop_start_idle_front_door", "misstrevor4leadinouttrv_4_int", 1000f, -1056964608, 0, 1148846080);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2102, 1);
								GlobalFunc_173(&uLocal_1931, 0, Global_86864.f_9[0], "FLOYD", 0, 1);
								PED::SET_PED_CAN_BE_TARGETTED(Global_86864.f_9[0], 0);
								iLocal_2103++;
							}
						}
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(Global_86864.f_9[0]) && GlobalFunc_10652(&uLocal_1931, "TRV5AUD", "TRV5_INT_LI1", 8, 0, 0, 0))
					{
						iLocal_2103++;
					}
					break;
				
				case 2:
					STREAMING::REQUEST_MODEL(joaat("v_ilev_trev_doorfront"));
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1147.397f, -1525.268f, 8.961864f, -1151.11f, -1520.073f, 14.71186f, 2.5f, 0, 1, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						func_549();
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
						iLocal_2103 = 4;
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1142.396f, -1519.314f, 6.05884f, -1148.072f, -1523.278f, 10.63302f, 2.3f, 0, 1, 0) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_trev_doorfront")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2108))
						{
							iLocal_2108 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1149.71f, -1521.09f, 10.78f, 10f, joaat("v_ilev_trev_doorfront"), 1, 0, 1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2108))
						{
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0.3f, 1, -1, 3000, 2000, 0);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							}
							func_549();
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							GlobalFunc_8380(1, 1, 0, 0);
							iLocal_2102 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2096, Local_2099, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_2102, "misstrevor4leadinouttrv_4_int", "leadin_action_floyd", 8f, -8f, 1, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-1149.71f, -1521.09f, 10.78f, 5f, joaat("v_ilev_trev_doorfront"), iLocal_2102, "leadin_action_front_door", "misstrevor4leadinouttrv_4_int", 1000f, -1056964608, 0, 1148846080);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2102, 0);
							TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 0, 2);
							iLocal_2107 = MISC::GET_GAME_TIMER();
							iLocal_2103++;
						}
					}
					break;
				
				case 3:
					if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), 713668775)) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1147.62f, -1522.95f, 9.63f, 1) > 2f) && !func_570())
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1147.62f, -1522.95f, 9.63f, 1f, 20000, 1048576000, 0, 1193033728);
					}
					if (iLocal_2105 == 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2107) > 1500 && GlobalFunc_10652(&uLocal_1931, "TRV5AUD", "TRV5_INT_LI2", 8, 0, 0, 0))
						{
							iLocal_2105 = 1;
						}
					}
					else if (!GlobalFunc_111())
					{
						GlobalFunc_200(&uLocal_1931, 0);
						GlobalFunc_200(&uLocal_1931, 1);
						iLocal_2103++;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2102) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
					{
						STREAMING::REQUEST_MODEL(joaat("v_ilev_trev_doorfront"));
						if ((iLocal_2106 == 0 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2102) > 0.98f) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_trev_doorfront")))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2108))
							{
								iLocal_2108 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1149.71f, -1521.09f, 10.78f, 10f, joaat("v_ilev_trev_doorfront"), 1, 0, 1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2108))
							{
								iLocal_2102 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2096, Local_2099, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_2102, "misstrevor4leadinouttrv_4_int", "leadin_loop_exit_idle_floyd", 8f, -8f, 1, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-1149.71f, -1521.09f, 10.78f, 5f, joaat("v_ilev_trev_doorfront"), iLocal_2102, "leadin_loop_exit_idle_front_door", "misstrevor4leadinouttrv_4_int", 8f, -1056964608, 0, 1148846080);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2102, 1);
								iLocal_2106 = 1;
							}
						}
					}
					break;
				
				case 4:
					break;
				}
			}
	}
}

int func_570()//Position - 0x5FC2D
{
	if ((GlobalFunc_115(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 1) < 2f)
	{
		return 1;
	}
	return 0;
}










int func_580()//Position - 0x5FE8A
{
	if (iLocal_2110 == 1 && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	return 0;
}

int func_581()//Position - 0x5FEA8
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		func_585();
		func_593();
		iLocal_2110 = 1;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			return 1;
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1) };
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			else if (MISC::IS_BULLET_IN_AREA(Var0, 20f, 1))
			{
				return 1;
			}
			else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f))
			{
				return 1;
			}
			else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(Var0, joaat("weapon_stickybomb"), 20f, 1))
			{
				return 1;
			}
			else if (FIRE::GET_CLOSEST_FIRE_POS(&Var3, Var0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < 10f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_582()//Position - 0x5FF93
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_2103 == 4)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			return 1;
		}
	}
	return 0;
}

void func_583()//Position - 0x5FFBF
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_200(&uLocal_1931, 0);
	GlobalFunc_200(&uLocal_1931, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2108))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2108, 0f, 1);
	}
	GlobalFunc_129(&iLocal_2108, 0);
	GlobalFunc_4593();
}


void func_585()//Position - 0x60042
{
	func_204(&(Global_86864.f_9[0]));
	GlobalFunc_200(&uLocal_1931, 0);
	GlobalFunc_200(&uLocal_1931, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2108))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2108, 0f, 1);
	}
	GlobalFunc_129(&iLocal_2108, 0);
	GlobalFunc_4593();
}

void func_586()//Position - 0x60087
{
	iLocal_2103 = 0;
	GlobalFunc_6514(65, "TRV_5_INT", -1, -1, 0);
	GlobalFunc_7621(135, 0, 0, 1, 0);
	GlobalFunc_7621(136, 0, 0, 1, 0);
	GlobalFunc_7621(137, 0, 0, 1, 0);
	GlobalFunc_7621(138, 0, 0, 1, 0);
	GlobalFunc_7621(141, 0, 0, 1, 0);
	GlobalFunc_7621(142, 0, 0, 1, 0);
	GlobalFunc_7621(144, 0, 0, 1, 0);
	GlobalFunc_7621(139, 0, 0, 1, 0);
	GlobalFunc_7621(140, 0, 0, 1, 0);
	GlobalFunc_7621(143, 0, 0, 1, 0);
	iLocal_2103 = 0;
	iLocal_2104 = 0;
	iLocal_2105 = 0;
	iLocal_2106 = 0;
	iLocal_2110 = 0;
}






int func_592()//Position - 0x64498
{
	if (((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(32)) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4leadinouttrv_4_int")) && INTERIOR::IS_VALID_INTERIOR(uLocal_2109)) && INTERIOR::IS_INTERIOR_READY(uLocal_2109))
	{
		return 1;
	}
	return 0;
}

void func_593()//Position - 0x644D8
{
	GlobalFunc_129(&iLocal_2108, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(32));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_trev_doorfront"));
	STREAMING::REMOVE_ANIM_DICT("misstrevor4leadinouttrv_4_int");
	INTERIOR::UNPIN_INTERIOR(uLocal_2109);
}

void func_594()//Position - 0x6450B
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(32));
	STREAMING::REQUEST_ANIM_DICT("misstrevor4leadinouttrv_4_int");
	uLocal_2109 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1151.157f, -1520.153f, 9.6327f, "v_trevors");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_2109);
}



void func_597()//Position - 0x64558
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = SYSTEM::VDIST2(Var0, 3832.685f, 4463.334f, 1.7214f);
	fVar4 = SYSTEM::VDIST2(Var0, 3827.882f, 4463.081f, 1.9017f);
	fVar5 = (fVar4 - fVar3);
	if (fVar5 > 0.5f)
	{
		if (MISC::IS_BIT_SET(Global_86864.f_358, 1))
		{
			GlobalFunc_4593();
			MISC::CLEAR_BIT(&(Global_86864.f_358), 1);
		}
		if (!MISC::IS_BIT_SET(Global_86864.f_358, 0))
		{
			if (!Global_68262)
			{
				iVar6 = Global_81155[39 /*34*/].f_13;
				iVar7 = Global_81155[39 /*34*/].f_14;
				if (GlobalFunc_5183(iVar6, iVar7))
				{
					GlobalFunc_6514(39, "FBI_5_INT", 191, 191, 188);
					Global_86824 = 0;
				}
				else
				{
					GlobalFunc_6514(39, "FBI_5_INT", 255, 255, 252);
					Global_86824 = 1;
				}
				if (GlobalFunc_8329() == 0)
				{
					func_559(39, "Michael", PLAYER::PLAYER_PED_ID());
				}
				if (GlobalFunc_8329() == 1)
				{
					func_559(39, "Michael", Global_86864.f_9[0]);
					func_559(39, "Franklin", PLAYER::PLAYER_PED_ID());
				}
				if (GlobalFunc_8329() == 2)
				{
					func_559(39, "Michael", Global_86864.f_9[0]);
					func_559(39, "Franklin", Global_86864.f_9[1]);
					func_559(39, "Trevor", PLAYER::PLAYER_PED_ID());
				}
				MISC::SET_BIT(&(Global_86864.f_358), 0);
			}
		}
	}
	else if (fVar5 < -0.5f)
	{
		if (MISC::IS_BIT_SET(Global_86864.f_358, 0))
		{
			GlobalFunc_4593();
			MISC::CLEAR_BIT(&(Global_86864.f_358), 0);
		}
		if (!MISC::IS_BIT_SET(Global_86864.f_358, 1))
		{
			if (!Global_68262)
			{
				iVar8 = Global_81155[39 /*34*/].f_13;
				iVar9 = Global_81155[39 /*34*/].f_14;
				if (GlobalFunc_5183(iVar8, iVar9))
				{
					GlobalFunc_6514(39, "FBI_5_INT", 191, 190, 184);
					Global_86824 = 0;
				}
				else
				{
					GlobalFunc_6514(39, "FBI_5_INT", 255, 254, 248);
					Global_86824 = 1;
				}
				if (GlobalFunc_8329() == 0)
				{
					func_559(39, "Michael", PLAYER::PLAYER_PED_ID());
				}
				if (GlobalFunc_8329() == 1)
				{
					func_559(39, "Michael", Global_86864.f_9[0]);
					func_559(39, "Franklin", PLAYER::PLAYER_PED_ID());
				}
				if (GlobalFunc_8329() == 2)
				{
					func_559(39, "Michael", Global_86864.f_9[0]);
					func_559(39, "Franklin", Global_86864.f_9[1]);
					func_559(39, "Trevor", PLAYER::PLAYER_PED_ID());
				}
				MISC::SET_BIT(&(Global_86864.f_358), 1);
			}
		}
	}
}


int func_599()//Position - 0x647EC
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if ((PED::IS_PED_INJURED(Global_86864.f_9[iVar0]) || PED::IS_PED_RAGDOLL(Global_86864.f_9[iVar0])) || FIRE::IS_ENTITY_ON_FIRE(Global_86864.f_9[iVar0]))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Global_86864[0], 3853.257f, 4455.461f, 1.957811f, 4.25f, 1.75f, 2f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (GlobalFunc_8329() != 0)
	{
		if (MISC::IS_BULLET_IN_ANGLED_AREA(3830.111f, 4460.513f, 1.026169f, 3830.214f, 4466.375f, 4.992479f, 6f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 3830.111f, 4460.513f, 1.026169f, 3830.214f, 4466.375f, 4.992479f, 6f))
		{
			return 1;
		}
	}
	return 0;
}

int func_600()//Position - 0x64947
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	Var0 = { GlobalFunc_2247(195, GlobalFunc_8329()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar3 = GlobalFunc_8329();
		if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		{
			if (!(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
			{
				fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
				if (!Global_87287)
				{
					if (iVar3 == 2 || iVar3 == 1)
					{
						if (fVar4 < 210.25f)
						{
							if (GlobalFunc_8329() == 2)
							{
								GlobalFunc_5157(&(Global_86864.f_44), "FBI5AAU", "FBI5_INT_LI", 9, 0, 0);
							}
							else
							{
								GlobalFunc_5157(&(Global_86864.f_44), "FBI5AAU", "FBI5_INT_LIF", 9, 0, 0);
							}
							func_549();
						}
					}
				}
				else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
					{
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, 13000, 2000, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOV(30f);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.46f);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.02f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
					}
				}
				else
				{
					CAM::_0xCCD078C2665D2973(1);
				}
				if (!MISC::IS_BIT_SET(Global_86864.f_358, 0) && !MISC::IS_BIT_SET(Global_86864.f_358, 1))
				{
					return 0;
				}
				if (fVar4 < (14f * 14f))
				{
					if (!GlobalFunc_111())
					{
						return 1;
					}
				}
				if (iVar3 == 2 || iVar3 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3847.273f, 4463.729f, 4.15182f, 16.25f, 1.75f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3835.646f, 4464.247f, 2.944657f, 3.75f, 14f, 3.5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


void func_602()//Position - 0x64B67
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	GlobalFunc_4588(&(Global_86864[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_200(&(Global_86864.f_44), 0);
	GlobalFunc_200(&(Global_86864.f_44), 1);
	GlobalFunc_4593();
}

void func_603()//Position - 0x64BC9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_204(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	GlobalFunc_4574(&(Global_86864[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_200(&(Global_86864.f_44), 0);
	GlobalFunc_200(&(Global_86864.f_44), 1);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	GlobalFunc_4593();
}

void func_604()//Position - 0x64C37
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	Global_86864.f_358 = 0;
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(3773.4f, 4393.7f, 50f, 3891.2f, 4555.1f, -50f, 0, 1, 1, 1);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	MISC::CLEAR_AREA(3795.099f, 4466.838f, 4.6044f, 120f, 1, 0, 0, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), 3853.46f, 4455.427f, -0.2f, 266.1028f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[0], 0, 0);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[0], 5f);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[0], 3, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[0]);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Global_86864[0], 0, 1);
	iVar7 = CLOCK::GET_CLOCK_HOURS();
	if (iVar7 < 7 || iVar7 >= 20)
	{
		VEHICLE::SET_VEHICLE_LIGHTS(Global_86864[0], 2);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
	switch (GlobalFunc_8329())
	{
		case 1:
			Var1 = { 3830.185f, 4463.323f, 2.699f };
			Var4 = { 0f, 0f, -93f };
			func_562(&(Global_86864.f_9[0]), 0, 3830.301f, 4463.743f, 1.7318f, 264.4568f, 0, 1, 0);
			GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
			uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var4, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar0, 1);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iVar0, "MISSFBI5LEADINOUT", "LEADIN_1_MIC", 1000f, -8f, 1, 16, 1148846080, 0);
			GlobalFunc_173(&(Global_86864.f_44), 0, Global_86864.f_9[0], "MICHAEL", 0, 1);
			GlobalFunc_173(&(Global_86864.f_44), 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			Var1 = { 3830.185f, 4463.323f, 1.697f };
			Var4 = { 0f, 0f, -95f };
			func_562(&(Global_86864.f_9[0]), 0, 3830.301f, 4463.743f, 1.7318f, 264.4568f, 0, 1, 0);
			GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
			func_562(&(Global_86864.f_9[1]), 1, 3830.196f, 4462.538f, 1.7318f, 269.7024f, 0, 1, 0);
			GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
			iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var4, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, 1);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iVar0, "MISSFBI5LEADINOUT", "LEADIN_2_MIC", 1000f, -8f, 1, 16, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iVar0, "MISSFBI5LEADINOUT", "LEADIN_2_FRA", 1000f, -8f, 1, 16, 1148846080, 0);
			GlobalFunc_173(&(Global_86864.f_44), 0, Global_86864.f_9[0], "MICHAEL", 0, 1);
			GlobalFunc_173(&(Global_86864.f_44), 1, Global_86864.f_9[1], "FRANKLIN", 0, 1);
			break;
	}
	GlobalFunc_7539(0);
	GlobalFunc_7539(1);
}


int func_606()//Position - 0x64F79
{
	return func_607(&(Global_86864.f_209));
}

int func_607(var uParam0)//Position - 0x64F8B
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
			if (!func_608(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_608(var uParam0)//Position - 0x64FED
{
	return func_609(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_609(int iParam0, char* sParam1, int iParam2)//Position - 0x65004
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (GlobalFunc_2270(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
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

void func_610()//Position - 0x650F7
{
	func_611(&(Global_86864.f_209), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_611(var uParam0, bool bParam1)//Position - 0x65114
{
	int iVar0;
	
	if (!bParam1)
	{
		func_613(uParam0);
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


void func_613(var uParam0)//Position - 0x65168
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_614(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_614(var uParam0)//Position - 0x651A1
{
	GlobalFunc_6519(*uParam0, &(uParam0->f_2), uParam0->f_1);
}


void func_616()//Position - 0x65278
{
	switch (GlobalFunc_8329())
	{
		case 2:
			GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(1));
		
		case 1:
			GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(0));
			GlobalFunc_6491(&(Global_86864.f_209), "MISSFBI5LEADINOUT");
			break;
	}
	GlobalFunc_6492(&(Global_86864.f_209), joaat("dinghy"));
}





void func_621()//Position - 0x653EB
{
	if (iLocal_1547)
	{
		if (!iLocal_1548)
		{
			if (Global_87282 == 1)
			{
				switch (GlobalFunc_5216("AM_H_PREP4"))
				{
					case 2:
						GlobalFunc_6677("AM_H_PREP4", 2, 0, 1000, 10000, 5, 0, 0, 0);
						break;
					
					case 1:
						StringCopy(&Global_95999, "", 16);
						iLocal_1548 = 1;
						break;
				}
			}
			else if (Global_87282 <= 3)
			{
				switch (GlobalFunc_5216("AM_RHP_REAP"))
				{
					case 2:
						GlobalFunc_6677("AM_RHP_REAP", 2, 0, 1000, 10000, 5, 0, 0, 0);
						break;
					
					case 1:
						StringCopy(&Global_95999, "", 16);
						iLocal_1548 = 1;
						break;
				}
			}
			else
			{
				iLocal_1548 = 1;
			}
		}
		if (!func_622(&Local_1542) || !MISC::IS_BIT_SET(Global_81155[92 /*34*/].f_11, GlobalFunc_8329()))
		{
			Global_87281 = -15;
			StringCopy(&Global_87265, "", 64);
			iLocal_1547 = 0;
		}
	}
}

int func_622(var uParam0)//Position - 0x654D6
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_1))
			{
				return func_624(*uParam0, uParam0->f_1, &(uParam0->f_3), uParam0->f_2);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		GlobalFunc_786(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1));
	}
	return 1;
}


int func_624(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x65586
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	
	if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam1, *uParam2, &Var0))
	{
		if (!GlobalFunc_537(Global_Mission_Blips[iParam0 /*23*/][0 /*3*/], Var0, 0.1f))
		{
			fVar6 = GlobalFunc_253(((GlobalFunc_567(0.2f, (TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(uParam1, *uParam2) * fParam3)) * SYSTEM::TIMESTEP()) / MISC::GET_DISTANCE_BETWEEN_COORDS(Global_Mission_Blips[iParam0 /*23*/][0 /*3*/], Var0, 1)), 0f, 1f);
			Var3 = { GlobalFunc_721(Global_Mission_Blips[iParam0 /*23*/][0 /*3*/], Var0, fVar6) };
		}
		else
		{
			Var3 = { Var0 };
			*uParam2++;
		}
		GlobalFunc_786(iParam0, Var3);
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(uParam1, &iVar7);
		if (*uParam2 >= iVar7)
		{
			*uParam2 = (*uParam2 - 1);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}



void func_627()//Position - 0x65682
{
	int iVar0;
	
	if (iLocal_1547)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			if (!func_622(&Local_1542))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
				{
				}
			}
			iVar0++;
		}
		if (((((func_628(Global_86864.f_9[0]) && func_628(Global_86864.f_9[2])) && func_628(Global_86864.f_9[6])) && func_628(Global_86864[0])) && func_628(Global_86864[1])) && func_628(Global_86864[2]))
		{
			VEHICLE::_0x88BC673CA9E0AE99(Global_86864[0], 1);
			VEHICLE::_0xBE5C1255A1830FF5(Global_86864[0], 1);
			VEHICLE::_0x2C4A1590ABF43E8B(Global_86864[0], 1);
			VEHICLE::_0x88BC673CA9E0AE99(Global_86864[1], 1);
			VEHICLE::_0xBE5C1255A1830FF5(Global_86864[1], 1);
			VEHICLE::_0x2C4A1590ABF43E8B(Global_86864[1], 1);
			VEHICLE::_0x88BC673CA9E0AE99(Global_86864[2], 1);
			VEHICLE::_0xBE5C1255A1830FF5(Global_86864[2], 1);
			VEHICLE::_0x2C4A1590ABF43E8B(Global_86864[2], 1);
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_86864[0]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_86864[0]);
			}
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_86864[1]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_86864[1]);
			}
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_86864[2]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_86864[2]);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Global_86864[1]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_86864[0], 0), ENTITY::GET_ENTITY_COORDS(Global_86864[1], 0), 1) > 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_86864[2], 0), ENTITY::GET_ENTITY_COORDS(Global_86864[1], 0), 1) > 65f)
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Global_86864[1]);
				}
				else
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(Global_86864[1]);
				}
			}
			else
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Global_86864[1]))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_86864.f_9[2], Global_86864[1], &Global_87265, 786603, Local_1542.f_3, 24, -1, 15f, 0, 1073741824);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_86864.f_9[0], -1273030092) != 1)
				{
					TASK::TASK_VEHICLE_ESCORT(Global_86864.f_9[0], Global_86864[0], Global_86864[1], -1, 16f, 786469, 8f, 20, 1101004800);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_86864.f_9[6], -1273030092) != 1)
				{
					TASK::TASK_VEHICLE_ESCORT(Global_86864.f_9[6], Global_86864[2], Global_86864[0], -1, 16f, 786469, 8f, 20, 1101004800);
				}
			}
		}
	}
}

int func_628(int iParam0)//Position - 0x65956
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_629()//Position - 0x659A1
{
	if (iLocal_1547)
	{
		return 0;
	}
	else if (MISC::IS_BIT_SET(Global_81155[92 /*34*/].f_11, GlobalFunc_8329()))
	{
		if (Global_87281 == -15)
		{
			Global_87281 = GlobalFunc_7719();
			GlobalFunc_8385(&Global_87281, 0, 0, 1, 0, 0, 0);
		}
		if (GlobalFunc_8448(Global_87281) || Global_87282 == 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_87265))
			{
				switch (Global_86863)
				{
					case 1:
						StringCopy(&Global_87265, "Rural_prep_trigger1", 64);
						break;
					
					case 2:
						StringCopy(&Global_87265, "Rural_prep_trigger2", 64);
						break;
					
					default:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1274.827f, 1647.323f, 87.2092f, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 527.5057f, 4268.423f, 52.26282f, 1))
						{
							StringCopy(&Global_87265, "Rural_prep_trigger2", 64);
							Global_86864.f_357 = 0;
						}
						else
						{
							StringCopy(&Global_87265, "Rural_prep_trigger1", 64);
							Global_86864.f_357 = 1;
						}
						break;
				}
				Global_86863 = -1;
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING(&Global_87265);
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_87265))
				{
					Local_1542 = { func_630(228, &Global_87265, 0.4f, 0) };
					iLocal_1547 = 1;
					iLocal_1548 = 0;
					iLocal_1549 = 0;
					Global_87282++;
					return 0;
				}
			}
		}
		else if (!iLocal_1549 && !iLocal_1547)
		{
			if (Global_87282 <= 2)
			{
				switch (GlobalFunc_5216("AM_RHP_MISS"))
				{
					case 2:
						GlobalFunc_6677("AM_RHP_MISS", 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					
					case 1:
						StringCopy(&Global_95999, "", 16);
						iLocal_1549 = 1;
						break;
				}
			}
			else
			{
				iLocal_1549 = 1;
			}
		}
	}
	else
	{
		Global_87281 = -15;
		iLocal_1547 = 0;
	}
	return 1;
}

struct<5> func_630(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x65B65
{
	struct<5> Var0;
	struct<3> Var5;
	
	Var0 = 262;
	Var0.f_2 = 1065353216;
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	Var0.f_2 = fParam2;
	if (iParam3 != -1)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(uParam1, iParam3, &Var5);
		GlobalFunc_786(Var0, Var5);
		Var0.f_3 = iParam3 + 1;
	}
	else if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Var0.f_1, Global_Mission_Blips[Var0 /*23*/][0 /*3*/], &iParam3))
	{
		Var0.f_3 = iParam3;
	}
	return Var0;
}



int func_633()//Position - 0x65C25
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	Var0 = { GlobalFunc_2247(228, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && MISC::IS_BIT_SET(Global_81155[92 /*34*/].f_11, GlobalFunc_8329()))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar4 = 0;
			while (iVar4 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar4]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_86864[iVar4], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 1000f)
					{
						AUDIO::START_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar4++;
			}
		}
		fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar5 < (120f * 120f))
			{
				bVar3 = true;
			}
		}
		else if (fVar5 < (65f * 65f))
		{
			bVar3 = true;
		}
		iVar6 = 0;
		while (iVar6 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar6]))
			{
				if (Global_86864.f_358 == -1)
				{
					if (FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(Global_86864[iVar6], 0), 5f))
					{
						Global_86864.f_358 = iVar6;
						Global_86864.f_359 = MISC::GET_GAME_TIMER();
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[iVar6], 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864[iVar6], PLAYER::PLAYER_PED_ID(), 1))
					{
						bVar3 = true;
					}
				}
				else
				{
					bVar3 = true;
				}
			}
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar6]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[iVar6]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar6], PLAYER::PLAYER_PED_ID(), 1))
					{
						bVar3 = true;
					}
				}
				else
				{
					bVar3 = true;
				}
			}
			iVar6++;
		}
	}
	if (bVar3)
	{
		Global_87281 = -15;
		iLocal_1547 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			GlobalFunc_7055(Global_86864[0], 0, 0);
		}
		return 1;
	}
	return 0;
}



void func_636()//Position - 0x65EC0
{
	int iVar0;
	
	if (GlobalFunc_474(228))
	{
		Local_1542 = { func_630(228, &Global_87265, 0.4f, -1) };
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar0]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_86864[iVar0], 0);
		}
		GlobalFunc_4588(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	GlobalFunc_4575(&(Global_86864.f_28[1]));
}

void func_637()//Position - 0x65F5B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_4574(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_557(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_51(&(Global_86864.f_28[iVar0]));
		iVar0++;
	}
}

void func_638()//Position - 0x65FC2
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	int iVar28;
	
	Global_86864.f_358 = -1;
	Global_86864.f_359 = -1;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(&Global_87265, &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87265, Local_1542.f_3, &Var6);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87265, GlobalFunc_254((Local_1542.f_3 - 1), 0, iVar0), &Var9);
	fVar12 = GlobalFunc_830(Var9, Var6);
	bVar1 = false;
	iVar2 = 3;
	while (iVar2 <= 13)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87265, GlobalFunc_254((Local_1542.f_3 + iVar2), 0, iVar0), &Var3);
		if (SYSTEM::VDIST2(Var3, Var6) > 225f)
		{
			Var13 = { Var3 };
			iVar20 = (Local_1542.f_3 + iVar2);
			bVar1 = true;
			iVar2 = 13;
		}
		if ((Local_1542.f_3 + iVar2) >= iVar0)
		{
			iVar2 = 13;
		}
		iVar2++;
	}
	if (bVar1)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87265, GlobalFunc_254((iVar20 - 1), 0, iVar0), &Var16);
		fVar19 = GlobalFunc_830(Var16, Var13);
	}
	else
	{
		Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864[1], 0f, 20f, 0f) };
	}
	bVar1 = false;
	iVar2 = 3;
	while (iVar2 <= 13)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87265, GlobalFunc_254((Local_1542.f_3 - iVar2), 0, iVar0), &Var3);
		if (SYSTEM::VDIST2(Var3, Var6) > 225f)
		{
			Var21 = { Var3 };
			iVar28 = (Local_1542.f_3 - iVar2);
			bVar1 = true;
			iVar2 = 13;
		}
		if ((Local_1542.f_3 - iVar2) <= 0)
		{
			iVar2 = 13;
		}
		iVar2++;
	}
	if (bVar1)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87265, GlobalFunc_254((iVar28 - 1), 0, iVar0), &Var24);
		fVar27 = GlobalFunc_830(Var24, Var21);
	}
	else
	{
		Var21 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864[0], 0f, -20f, 0f) };
	}
	MISC::CLEAR_AREA(Var13, 60f, 1, 0, 0, 0);
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Var13, fVar19, 1, 1);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864[1], 250);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[1], 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[1], 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[1]);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_86864[1], 15f);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_86864[1], 1);
	VEHICLE::_0x9BECD4B9FEF3F8A6(Global_86864[1], 1);
	ENTITY::SET_ENTITY_ALPHA(Global_86864[1], 100, 0);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[1], 0, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_86864[1], "PS_PREP_VEHICLES_GROUP", 0);
	MISC::CLEAR_AREA(Var6, 60f, 1, 0, 0, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("barracks"), Var6, fVar12, 1, 1);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864[0], 250);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[0], 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[0], 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[0]);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_86864[0], 15f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("barracks"));
	VEHICLE::SET_VEHICLE_STRONG(Global_86864[0], 1);
	ENTITY::SET_ENTITY_HEALTH(Global_86864[0], ENTITY::GET_ENTITY_HEALTH(Global_86864[0]) * 2);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_86864[0], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_86864[0]) * 2.5f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_86864[0], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_86864[0]) * 2.5f));
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_86864[0], 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_86864[0], 1);
	VEHICLE::_0x9BECD4B9FEF3F8A6(Global_86864[0], 1);
	ENTITY::SET_ENTITY_ALPHA(Global_86864[0], 100, 0);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[0], 0, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_86864[0], "PS_PREP_VEHICLES_GROUP", 0);
	MISC::CLEAR_AREA(Var21, 60f, 1, 0, 0, 0);
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Var21, fVar27, 1, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[2], 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[2], 1);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864[2], 250);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[2]);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_86864[2], 15f);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_86864[2], 1);
	VEHICLE::_0x9BECD4B9FEF3F8A6(Global_86864[2], 1);
	ENTITY::SET_ENTITY_ALPHA(Global_86864[2], 100, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("crusader"));
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[2], 0, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_86864[2], "PS_PREP_VEHICLES_GROUP", 0);
	func_640(0, Global_86864[0]);
	TASK::TASK_VEHICLE_ESCORT(Global_86864.f_9[0], Global_86864[0], Global_86864[1], -1, 13f, 786603, 8f, 20, 5f);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[0], 0, 0);
	func_640(2, Global_86864[1]);
	func_640(3, Global_86864[1]);
	func_640(4, Global_86864[1]);
	func_640(5, Global_86864[1]);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_86864.f_9[2], Global_86864[1], &Global_87265, 786603, Local_1542.f_3, 24, -1, 12f, 0, 1073741824);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[2], 0, 0);
	func_640(6, Global_86864[2]);
	func_640(7, Global_86864[2]);
	func_640(8, Global_86864[2]);
	func_640(9, Global_86864[2]);
	TASK::TASK_VEHICLE_ESCORT(Global_86864.f_9[6], Global_86864[2], Global_86864[0], -1, 13f, 786603, 8f, 20, 5f);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[6], 0, 0);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), Global_Mission_Blips[228 /*23*/][0 /*3*/], 1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_28[0], 250);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864[0], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	Global_86864.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), Global_Mission_Blips[228 /*23*/][0 /*3*/], 1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_28[1], 250);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[1], Global_86864[0], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	Local_1542 = { func_639(228, Global_86864[0]) };
}

struct<5> func_639(int iParam0, int iParam1)//Position - 0x66618
{
	struct<5> Var0;
	
	Var0 = 262;
	Var0.f_2 = 1065353216;
	Var0 = iParam0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		Var0.f_4 = iParam1;
	}
	return Var0;
}

void func_640(int iParam0, int iParam1)//Position - 0x6664A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = joaat("weapon_carbinerifle");
	if (iParam1 == Global_86864[1] || iParam1 == Global_86864[2])
	{
		iVar0 = joaat("s_m_y_marine_03");
	}
	else if (iParam1 == Global_86864[0])
	{
		iVar0 = joaat("s_m_m_marine_01");
	}
	if ((iParam0 == 2 || iParam0 == 6) || iParam0 == 0)
	{
		iVar1 = -1;
		iVar2 = joaat("weapon_pistol");
	}
	else if ((iParam0 == 3 || iParam0 == 7) || iParam0 == 1)
	{
		iVar1 = 0;
		iVar2 = joaat("weapon_smg");
	}
	else if (iParam0 == 4 || iParam0 == 8)
	{
		iVar1 = 1;
		iVar2 = joaat("weapon_microsmg");
	}
	else if (iParam0 == 5 || iParam0 == 9)
	{
		iVar1 = 2;
		iVar2 = joaat("weapon_carbinerifle");
	}
	Global_86864.f_9[iParam0] = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 26, iVar0, iVar1, 1, 1);
	PED::SET_PED_AS_ENEMY(Global_86864.f_9[iParam0], 1);
	WEAPON::GIVE_WEAPON_TO_PED(Global_86864.f_9[iParam0], iVar2, -1, 1, 1);
	PED::SET_PED_MONEY(Global_86864.f_9[iParam0], 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[iParam0], 2, 1, 0, 0);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_9[iParam0], 250);
	PED::SET_PED_ALERTNESS(Global_86864.f_9[iParam0], 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[iParam0], 1, 0);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_86864.f_9[iParam0], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_86864.f_9[iParam0], 0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_86864.f_9[iParam0], 1, 0);
	PED::SET_PED_COMBAT_MOVEMENT(Global_86864.f_9[iParam0], 1);
	PED::SET_PED_CONFIG_FLAG(Global_86864.f_9[iParam0], 184, 1);
	PED::SET_PED_CONFIG_FLAG(Global_86864.f_9[iParam0], 272, 1);
	PED::SET_PED_CONFIG_FLAG(Global_86864.f_9[iParam0], 330, 1);
	AUDIO::STOP_PED_SPEAKING(Global_86864.f_9[iParam0], 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[iParam0], 1);
	PED::SET_PED_ACCURACY(Global_86864.f_9[iParam0], 10);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[iParam0], 1);
}



int func_643()//Position - 0x66897
{
	if (((((((STREAMING::HAS_MODEL_LOADED(joaat("crusader")) && STREAMING::HAS_MODEL_LOADED(joaat("barracks"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_marine_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_mil_crate_01"))) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_87265)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_87265)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_644()//Position - 0x6690D
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("crusader"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("barracks"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_marine_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_mil_crate_01"));
}

void func_645()//Position - 0x66942
{
	STREAMING::REQUEST_MODEL(joaat("barracks"));
	STREAMING::REQUEST_MODEL(joaat("crusader"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_03"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_mil_crate_01"));
	HUD::REQUEST_ADDITIONAL_TEXT("RURALP", 0);
}

void func_646()//Position - 0x66981
{
	struct<5> Var0;
	
	StringCopy(&Global_87265, "", 64);
	Global_87282 = 0;
	Global_87281 = -15;
	Var0 = 262;
	Var0.f_2 = 1065353216;
	Local_1542 = { Var0 };
	iLocal_1547 = 0;
	iLocal_1548 = 0;
	iLocal_1549 = 0;
}





int func_651()//Position - 0x669E8
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(226, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}



void func_654()//Position - 0x66A48
{
	GlobalFunc_4491(2);
}


int func_656()//Position - 0x66A67
{
	if (!GlobalFunc_2288(2))
	{
		return 0;
	}
	return 1;
}


void func_658()//Position - 0x66A8F
{
	if (GlobalFunc_785() != 93)
	{
		GlobalFunc_2287(2, 0);
	}
}



void func_661()//Position - 0x66AF1
{
	GlobalFunc_2287(2, 1);
}


void func_663()//Position - 0x66B07
{
	if (!iLocal_1541)
	{
		MISC::CLEAR_AREA_OF_PEDS(1389.837f, 3600.49f, 38.9419f, 3f, 1);
		MISC::CLEAR_AREA_OF_PEDS(1391.99f, 3606.362f, 34.981f, 3f, 1);
		Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(39.69191f, 3611.205f, 1393.025f) + Vector(4.25f, 18.75f, 15.25f), Vector(39.69191f, 3611.205f, 1393.025f) - Vector(7.25f, 19.75f, 16.25f), 0, 1, 1, 1);
		iLocal_1541 = 1;
	}
}

void func_664()//Position - 0x66B90
{
	float fVar0;
	
	if (!iLocal_1541)
	{
		MISC::CLEAR_AREA_OF_PEDS(1389.837f, 3600.49f, 38.9419f, 3f, 1);
		MISC::CLEAR_AREA_OF_PEDS(1391.99f, 3606.362f, 34.981f, 3f, 1);
		Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(39.69191f, 3611.205f, 1393.025f) + Vector(4.25f, 18.75f, 15.25f), Vector(39.69191f, 3611.205f, 1393.025f) - Vector(7.25f, 19.75f, 16.25f), 0, 1, 1, 1);
		iLocal_1541 = 1;
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1533))
		{
			fVar0 = ENTITY::GET_ENTITY_HEADING(Global_86864.f_9[0]);
			if (fVar0 > 180f)
			{
				fVar0 = (fVar0 - 360f);
			}
			else if (fVar0 <= -180f)
			{
				fVar0 = (fVar0 + 360f);
			}
			if (MISC::ABSF((fVar0 - 149.111f)) > 10f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 1390.075f, 3599.438f, 38.975f) > 2f)
			{
				if (iLocal_1533 != -1)
				{
					iLocal_1533 = -1;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_86864.f_9[0], 1390.075f, 3599.438f, 38.975f, 1f, 20000, 1048576000, 512, 149.111f);
			}
			else
			{
				iLocal_1533 = PED::CREATE_SYNCHRONIZED_SCENE(1390.075f, 3599.438f, 38.975f, 0f, 0f, 149.111f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1533, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 8f, -8f, 13, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1533, 1);
			}
		}
	}
	if (!iLocal_1540)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
		{
			if ((!PED::IS_PED_INJURED(Global_86864.f_9[1]) && !PED::IS_PED_FLEEING(Global_86864.f_9[1])) && !ENTITY::IS_ENTITY_OCCLUDED(Global_86864.f_9[1]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1391.368f, 3606.88f, 33.86995f, 1393.204f, 3601.869f, 36.23091f, 8.25f, 0, 1, 0))
				{
					GlobalFunc_5122(Global_86864.f_9[1], "GENERIC_HI", 4);
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_86864.f_9[1]))
					{
						iLocal_1540 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1396.191f, 3600.963f, 41.0382f, 1391f, 3615.52f, 38.05183f, 13.75f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
}




int func_668()//Position - 0x6705F
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if ((PED::IS_PED_INJURED(Global_86864.f_9[0]) || ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0])) || FIRE::IS_ENTITY_ON_FIRE(Global_86864.f_9[0]))
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
			iLocal_1541 = 0;
			return 1;
		}
	}
	return 0;
}

int func_669()//Position - 0x670CD
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1389.602f, 3610.13f, 37.96965f, 1393.32f, 3599.918f, 41.05939f, 7.5f, 0, 1, 0)) && !PED::IS_PED_INJURED(Global_86864.f_9[0])) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 100f))
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, 13000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1534);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1535);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1536);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1537);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_1538);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				}
				func_549();
			}
			else
			{
				CAM::_0xCCD078C2665D2973(1);
			}
		}
		else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		if (GlobalFunc_8329() == 0)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				fLocal_1539 = (fLocal_1539 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_1539 != 0f)
			{
				fLocal_1539 = 0f;
			}
			if (fLocal_1539 > 2f && CAM::GET_GAMEPLAY_CAM_FOV() == 30f)
			{
				Global_86864.f_357 = 0;
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", 0, 1f, 0.8f);
				return 1;
			}
		}
		if ((GlobalFunc_8329() == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1400.117f, 3606.126f, 37.96798f, 1388.663f, 3601.978f, 40.83895f, 7.25f, 0, 1, 0)) || (GlobalFunc_8329() == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1388.757f, 3609.823f, 37.88084f, 1392.489f, 3599.616f, 40.96309f, 5.2f, 0, 1, 0)))
		{
			Global_86864.f_357 = 0;
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", 0, 1f, 0.8f);
			return 1;
		}
	}
	return 0;
}

void func_670()//Position - 0x672BA
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4593();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", 0, 1f, 0.8f);
	iLocal_1541 = 0;
}

void func_671()//Position - 0x672F2
{
	func_204(&(Global_86864.f_9[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	iLocal_1541 = 0;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", 0, 1f, 0.8f);
	GlobalFunc_4593();
}

void func_672()//Position - 0x6732A
{
	if (GlobalFunc_8329() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			func_562(&(Global_86864.f_9[0]), 2, 1390.075f, 3599.438f, 38.975f, 149.111f, 1, 1, 0);
			iLocal_1533 = PED::CREATE_SYNCHRONIZED_SCENE(1390.075f, 3599.438f, 38.975f, 0f, 0f, 149.111f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1533, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 8f, -8f, 9, 0, 1148846080, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1533, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
		{
			Global_86864.f_9[1] = PED::CREATE_PED(4, joaat("a_m_m_hillbilly_02"), 1392.328f, 3606.53f, 33.9809f, 183.1381f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(Global_86864.f_9[1], joaat("weapon_pistol"), -1, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(Global_86864.f_9[1], "WORLD_HUMAN_GUARD_STAND", 0, 0);
		}
	}
	GlobalFunc_6514(91, "RBHS_INT", 126, -1, 0);
	iLocal_1540 = 0;
	fLocal_1539 = 0f;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", 1, 1f, 0.8f);
}

bool func_673()//Position - 0x6745C
{
	return (((STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1leadinoutrbhs_int_1") && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_hillbilly_02"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("paletoleadin"));
}

void func_674()//Position - 0x67497
{
	STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_02"));
	TASK::REMOVE_WAYPOINT_RECORDING("paletoleadin");
}

void func_675()//Position - 0x674C3
{
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	STREAMING::REQUEST_MODEL(joaat("a_m_m_hillbilly_02"));
	TASK::REQUEST_WAYPOINT_RECORDING("paletoleadin");
}

void func_676()//Position - 0x674EF
{
	iLocal_1541 = 0;
}





int func_681()//Position - 0x6751D
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(178, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (2.5f * 2.5f))
		{
			return 1;
		}
		else if (fVar3 < (100f * 100f))
		{
			if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"))) > 0.1f)
			{
				func_184(51, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"), 0f, 1, 1);
			}
		}
	}
	return 0;
}

void func_682()//Position - 0x675AA
{
	Global_86196 = 1;
}

void func_683()//Position - 0x675B7
{
	Global_86196 = 1;
}

void func_684()//Position - 0x675C4
{
	Global_86196 = 0;
}

int func_685()//Position - 0x675D1
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("MISSEXILE3"))
	{
		return 1;
	}
	return 0;
}

void func_686()//Position - 0x675EA
{
	STREAMING::REMOVE_ANIM_DICT("MISSEXILE3");
}

void func_687()//Position - 0x675FB
{
	STREAMING::REQUEST_ANIM_DICT("MISSEXILE3");
}






int func_693()//Position - 0x67636
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(177, GlobalFunc_8329()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}



void func_696()//Position - 0x67699
{
	GlobalFunc_6514(15, "EXILE_2_INT", 0, -1, 0);
}









int func_705()//Position - 0x676F2
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(176, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < 49f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		}
		if (fVar3 < (2.5f * 2.5f))
		{
			func_549();
			return 1;
		}
	}
	return 0;
}




int func_709()//Position - 0x67792
{
	if (func_607(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_710()//Position - 0x677AC
{
	func_611(&(Global_86864.f_209), 0);
}

void func_711()//Position - 0x677BF
{
	GlobalFunc_6491(&(Global_86864.f_209), "missexile1_cargoplaneleadinoutexile_1_intleadin");
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(2));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(0));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_phone_ing_03"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_phone_ing"));
}



void func_714()//Position - 0x67822
{
	int iVar0;
	
	if (GlobalFunc_8329() == 0)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_719(2, "Trevor", 2);
			func_717("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
		}
	}
	if (GlobalFunc_8329() == 2)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					func_717("Michael", Global_86864.f_9[0], joaat("player_zero"), 2);
				}
			}
			func_717("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"), 2);
		}
	}
	if (GlobalFunc_8329() == 2)
	{
		Local_1524 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 1) < 20f)
		{
			if (iLocal_1516 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
				iLocal_1516 = 1;
			}
		}
		else if (iLocal_1516 == 1)
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_86864.f_9[0]);
			iLocal_1516 = 0;
		}
		if (iLocal_1512 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					if (iLocal_1515 == 0)
					{
						if (GlobalFunc_156(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1) > 8.1f)
						{
							iLocal_1522 = PED::CREATE_SYNCHRONIZED_SCENE(1393.589f, 1142.884f, 113.44f, 0f, 0f, 133.56f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1522, "MISSMARTIN1@LEADINOUTMARTIN_1_INT", "Leadin_loop", 8f, -8f, 5, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1522, 1);
							iLocal_1516 = 0;
							iLocal_1515 = 1;
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_156(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1) < 8f || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1392.3f, 1141.6f, 114.4f, 3f, 3f, 3f, 0, 1, 1))
						{
							if (Local_1524.f_2 < 116f)
							{
								if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
								}
								MISC::CLEAR_AREA_OF_PROJECTILES(1391.9f, 1142f, 113.8f, 30f, 0);
								if (iLocal_1515 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1522))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_9[0], -8f, 1);
									}
								}
								iLocal_1523 = PED::CREATE_SYNCHRONIZED_SCENE(1393.589f, 1142.884f, 113.44f, 0f, 0f, 133.56f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1523, "MISSMARTIN1@LEADINOUTMARTIN_1_INT", "Leadin_action", 8f, -8f, 5, 0, 1148846080, 0);
								func_549();
								iLocal_1521 = MISC::GET_GAME_TIMER();
								iLocal_1516 = 0;
								iLocal_1514 = 1;
								iLocal_1512 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_1512 == 1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
			if (iVar0 != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
			if (iLocal_1514 == 1 && iLocal_1517 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1519);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1390.306f, 1141.593f, 113.3342f, 1f, 20000, 0.25f, 0, 279.0005f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_86864.f_9[0], 0);
				TASK::TASK_LOOK_AT_ENTITY(0, Global_86864.f_9[0], -1, 0, 3);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1519);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1519);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				iLocal_1517 = 1;
			}
			if (iLocal_1517 == 1 && iLocal_1518 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1523))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1523) > 0.527f)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1519);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1393.31f, 1141.876f, 113.4431f, 1f, 20000, 0.25f, 0, 270.43f);
						TASK::TASK_LOOK_AT_ENTITY(0, Global_86864.f_9[0], -1, 0, 3);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1519);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1519);
						iLocal_1518 = 1;
					}
				}
			}
			if (iLocal_1513 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10652(&(Global_86864.f_44), "SLM1AUD", "M1_INT_LI", 7, 0, 0, 0))
					{
						iLocal_1513 = 1;
					}
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1))
		{
			if (!PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				Global_86864[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
			else if (GlobalFunc_708(PLAYER::PLAYER_PED_ID()) == -1)
			{
				Global_86864[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}



void func_717(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x67D88
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_718(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}

void func_718(int iParam0, var uParam1, int iParam2)//Position - 0x67E43
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_8532(iParam0, &Var2, 0);
	GlobalFunc_8532(iParam0, uParam1, iParam2);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (GlobalFunc_4911(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5668(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10836(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5668(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10836(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10836(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10836(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = GlobalFunc_24(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { GlobalFunc_10836(iVar81, 0, iVar86) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}

void func_719(int iParam0, char* sParam1, int iParam2)//Position - 0x680B3
{
	struct<50> Var0;
	struct<50> Var65;
	int iVar130;
	int iVar131;
	int iVar132;
	struct<14> Var133;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	
	if (!GlobalFunc_42(iParam0))
	{
		return;
	}
	Var0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam0 /*65*/] };
	Var65 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam0 /*65*/] };
	iVar130 = 0;
	while (iVar130 < 12)
	{
		GlobalFunc_7952(0, iVar130, &(Var65.f_13[iVar130]), &(Var65[iVar130]), &(Var65.f_26[iVar130]), iParam2, iParam0);
		iVar130++;
	}
	iVar130 = 0;
	while (iVar130 < 9)
	{
		GlobalFunc_7951(0, iVar130, &(Var65.f_39[iVar130]), &(Var65.f_49[iVar130]), iParam2, iParam0);
		iVar130++;
	}
	iVar147 = GlobalFunc_4917(iParam0);
	iVar148 = 0;
	iVar149 = 0;
	iVar131 = 0;
	while (iVar131 < 12)
	{
		if (Var65.f_13[iVar131] != Var0.f_13[iVar131] || Var65[iVar131] != Var0[iVar131])
		{
			if (GlobalFunc_4911(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 1, Var65.f_62) };
				Var65.f_13[1] = Var133.f_3;
				Var65[1] = Var133.f_4;
				iVar149 = 1;
			}
		}
		iVar131++;
	}
	iVar131 = 0;
	while (iVar131 < 9)
	{
		if (Var65.f_39[iVar131] != Var0.f_39[iVar131] || Var65.f_49[iVar131] != Var0.f_49[iVar131])
		{
			if (GlobalFunc_4911(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 1, Var65.f_62) };
				Var65.f_13[1] = Var133.f_3;
				Var65[1] = Var133.f_4;
				iVar149 = 1;
			}
		}
		iVar131++;
	}
	if (iVar149 || iVar148)
	{
		iVar150 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[1 /*4*/][iParam0];
		iVar151 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[2 /*4*/][iParam0];
		iVar152 = GlobalFunc_24(iVar147, iVar151, iVar150);
		if (iVar152 != -99)
		{
			Var133 = { GlobalFunc_10836(iVar147, 0, iVar152) };
			Var65.f_13[0] = Var133.f_3;
			Var65[0] = Var133.f_4;
		}
	}
	iVar131 = 0;
	while (iVar131 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iVar131, Var65.f_13[iVar131], Var65[iVar131], GlobalFunc_4917(iParam0));
		iVar131++;
	}
	iVar131 = 0;
	while (iVar131 < 9)
	{
		if (Global_89752[iParam0 /*65*/].f_39[iVar131] == -1 || Global_89752[iParam0 /*65*/].f_39[iVar131] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar131, -1, 0, GlobalFunc_4917(iParam0));
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar131, Var65.f_39[iVar131], Var65.f_49[iVar131], GlobalFunc_4917(iParam0));
		}
		iVar131++;
	}
	GlobalFunc_10996(sParam1, iParam0);
}



int func_722()//Position - 0x687B8
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1393.4f, 1141.5f, 114.4f, 1) < 70f)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (GlobalFunc_8329() == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 1))
			{
				return 1;
			}
		}
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(1389.3f, 1139.8f, 113.8f, 7f))
		{
			return 1;
		}
	}
	return 0;
}

int func_723()//Position - 0x6888F
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(206, GlobalFunc_8329()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_8329() == 0)
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (2.5f * 2.5f))
			{
				return 1;
			}
		}
		if (iLocal_1518 == 1)
		{
			if (iLocal_1514 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1523))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1523) > 0.94f)
							{
								return 1;
							}
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_86864.f_9[0], MISC::GET_HASH_KEY("START_CUTSCENE")))
							{
								return 1;
							}
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_1521 + 15000 || GlobalFunc_156(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1) > 12f)
				{
					if (!GlobalFunc_111())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_724()//Position - 0x68984
{
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_4588(&(Global_86864[1]));
	GlobalFunc_4588(&(Global_86864[2]));
	if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_8915(&(Global_86864.f_9[0]));
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, 1, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1520, 0);
	GlobalFunc_4593();
	if (GlobalFunc_785() != 45)
	{
		GlobalFunc_52(1, 1);
	}
}


void func_726()//Position - 0x68A15
{
	GlobalFunc_4574(&(Global_86864[0]));
	GlobalFunc_4574(&(Global_86864[1]));
	GlobalFunc_4574(&(Global_86864[2]));
	if (GlobalFunc_8329() == 2)
	{
		func_204(&(Global_86864.f_9[0]));
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, 1, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1520, 0);
	GlobalFunc_4593();
	if (GlobalFunc_785() != 45)
	{
		GlobalFunc_52(1, 1);
	}
}

void func_727()//Position - 0x68A92
{
	GlobalFunc_7934(2, 0);
	GlobalFunc_52(0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, 0, 0);
	MISC::CLEAR_AREA(1388.6f, 1150f, 114f, 70f, 1, 0, 0, 0);
	uLocal_1520 = PED::ADD_SCENARIO_BLOCKING_AREA(1333f, 1095f, 137f, 1438.9f, 1197f, 109f, 0, 1, 1, 1);
	if (GlobalFunc_8329() == 2)
	{
		while (!func_562(&(Global_86864.f_9[0]), 0, 1390.707f, 1142.659f, 113.4431f, 170.5477f, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!GlobalFunc_10543(&(Global_86864[1]), 0, 1371.368f, 1132.974f, 112.8401f, 20.5505f, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[1], 2);
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(Global_86864.f_9[0], 0);
				GlobalFunc_173(&(Global_86864.f_44), 0, Global_86864.f_9[0], "MICHAEL", 0, 1);
			}
		}
		GlobalFunc_173(&(Global_86864.f_44), 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("fusilade"), 1404.827f, 1118.405f, 113.838f, 90.5742f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[2], 112, 112);
	GlobalFunc_6514(45, "MARTIN_1_INT", 0, -1, 252);
	if (GlobalFunc_8329() == 0)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_719(2, "Trevor", 2);
			func_717("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
		}
	}
	if (GlobalFunc_8329() == 2)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					func_717("Michael", Global_86864.f_9[0], joaat("player_zero"), 2);
				}
			}
			func_717("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"), 2);
		}
	}
}








int func_735()//Position - 0x69BC2
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("MISSMARTIN1@LEADINOUTMARTIN_1_INT") && STREAMING::HAS_MODEL_LOADED(joaat("fusilade")))
	{
		return 1;
	}
	return 0;
}

void func_736()//Position - 0x69BE9
{
	STREAMING::REMOVE_ANIM_DICT("MISSMARTIN1@LEADINOUTMARTIN_1_INT");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fusilade"));
}

void func_737()//Position - 0x69C03
{
	STREAMING::REQUEST_MODEL(joaat("fusilade"));
	STREAMING::REQUEST_ANIM_DICT("MISSMARTIN1@LEADINOUTMARTIN_1_INT");
}

void func_738()//Position - 0x69C1D
{
	iLocal_1512 = 0;
	iLocal_1513 = 0;
	iLocal_1514 = 0;
	iLocal_1515 = 0;
	iLocal_1516 = 0;
	iLocal_1517 = 0;
	iLocal_1518 = 0;
	iLocal_1521 = 0;
}


void func_740()//Position - 0x69C4D
{
	struct<3> Var0;
	float fVar3;
	
	switch (iLocal_1550)
	{
		case 0:
			Var0 = { GlobalFunc_2247(211, 0) };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
				if (fVar3 < (2.5f * 2.5f))
				{
					iLocal_1550++;
				}
			}
			break;
		
		case 1:
			func_549();
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -1011.293f, -480.4006f, 38.97574f, 1f, -1, 1193033728, 1056964608);
			uLocal_1551 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1017f, -483.5f, 40.7f, 49.6f, 0f, -78.9f, 50f, 0, 2);
			CAM::SHAKE_CAM(uLocal_1551, "hand_shake", 0.5f);
			CAM::SET_CAM_ACTIVE(uLocal_1551, 1);
			func_741(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 1, 3500, 0);
			GlobalFunc_8380(1, 1, 1, 0);
			iLocal_1552 = MISC::GET_GAME_TIMER();
			iLocal_1550++;
			break;
		
		case 2:
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if ((MISC::GET_GAME_TIMER() - iLocal_1552) >= 3500)
			{
				iLocal_1550++;
			}
			break;
		
		case 3:
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			break;
	}
	if (iLocal_1550 > 0)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
}

void func_741(bool bParam0, struct<3> Param1, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x69D99
{
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam8);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::RENDER_SCRIPT_CAMS(bParam4, iParam5, iParam7, 1, 1, 0);
	if (bParam6)
	{
		MISC::CLEAR_AREA_OF_PROJECTILES(Param1, 500f, 0);
	}
	FIRE::STOP_FIRE_IN_RANGE(Param1, 200f);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::SET_VEH_RADIO_STATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), "OFF");
	}
	GlobalFunc_6685(0);
}



int func_744()//Position - 0x69E20
{
	if (iLocal_1550 == 3)
	{
		return 1;
	}
	return 0;
}



void func_747()//Position - 0x69E4C
{
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1006f, -478f, 49f, 15f, 0);
}






void func_753()//Position - 0x69E9B
{
	GlobalFunc_6492(&(Global_86864.f_209), joaat("jb700"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("u_m_m_spyactor"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("u_f_y_spyactress"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("a_f_y_hipster_04"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_a_trailer_door_01"));
}



int func_756()//Position - 0x69F00
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(172, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}





void func_761()//Position - 0x69F69
{
	func_611(&(Global_86864.f_209), 0);
}




void func_765()//Position - 0x69F94
{
	int iVar0;
	
	if (iLocal_498 > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iLocal_498)
		{
			iLocal_498 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_498, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	switch (iLocal_497)
	{
		case 0:
			uLocal_496 = INTERIOR::GET_INTERIOR_AT_COORDS(441.02f, -978.93f, 30.69f);
			if (INTERIOR::IS_VALID_INTERIOR(uLocal_496))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_496);
				iLocal_497++;
			}
			break;
		
		case 1:
			if (INTERIOR::IS_INTERIOR_READY(uLocal_496))
			{
				STREAMING::SET_INTERIOR_ACTIVE(uLocal_496, 1);
				iLocal_497++;
			}
			break;
		
		case 2:
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.25204f, -976.5132f, 442.0406f) - Vector(1.125f, 3.5f, 3.3125f), Vector(30.25204f, -976.5132f, 442.0406f) + Vector(1.125f, 3.5f, 3.3125f), 0, 1, 1, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.68951f, -990.568f, 454.5167f) - Vector(1f, 3.5f, 6.75f), Vector(30.68951f, -990.568f, 454.5167f) + Vector(1f, 3.5f, 6.75f), 0, 1, 1, 1);
			MISC::CLEAR_AREA_OF_PEDS(454.6653f, -990.8345f, 29.7694f, 10f, 0);
			MISC::CLEAR_AREA_OF_PEDS(441.65f, -976.73f, 29.69f, 4f, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.15f, -986.07f, 442.42f) - Vector(1f, 0.5f, 0.5f), Vector(30.15f, -986.07f, 442.42f) + Vector(1f, 0.5f, 0.5f), 0, 1, 1, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.15f, -985.99f, 439.31f) - Vector(1f, 0.5f, 0.5f), Vector(30.15f, -985.99f, 439.31f) + Vector(1f, 0.5f, 0.5f), 0, 1, 1, 1);
			iLocal_487[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 441.0267f, -978.204f, 29.6895f, 192f, 1, 1);
			iLocal_487[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 440.2506f, -975.6328f, 29.6895f, 356f, 1, 1);
			iLocal_487[2] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 454.1487f, -979.894f, 29.6896f, 105.1729f, 1, 1);
			iLocal_487[3] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 450.2071f, -992.9072f, 29.6896f, 316.4481f, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_487[0]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[0], 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[0], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[0], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[0], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[0], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[0], 10, 0, 1, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_487[1]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[1], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[1], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[1], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[1], 10, 1, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_487[2]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[2], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[2], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[2], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[2], 9, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_487[2], 10, 1, 1, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_487[0], 0);
			AUDIO::STOP_PED_SPEAKING(iLocal_487[0], 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_487[1], 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_487[2], 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_487[3], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_487[0], joaat("weapon_pistol"), -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_487[1], joaat("weapon_pistol"), -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_487[2], joaat("weapon_pistol"), -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_487[3], joaat("weapon_pistol"), -1, 0, 1);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_487[0], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_487[1], "WORLD_HUMAN_CLIPBOARD", 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_487[2], "WORLD_HUMAN_CLIPBOARD", 0, 0);
			iLocal_492[0] = PED::CREATE_PED(4, joaat("a_m_y_genstreet_02"), 436.9079f, -986.8186f, 29.6895f, 71.5386f, 1, 1);
			iLocal_492[1] = PED::CREATE_PED(4, joaat("a_m_y_genstreet_02"), 443.468f, -981.777f, 29.6895f, 30f, 1, 1);
			iLocal_492[2] = PED::CREATE_PED(4, joaat("a_m_y_genstreet_02"), 444.914f, -988.1146f, 29.6895f, 71.5386f, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_492[0]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[0], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[0], 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[0], 4, 0, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_492[1]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[1], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[1], 4, 0, 2, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_492[2]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[2], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[2], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_492[2], 4, 0, 1, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_492[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_492[1], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
			iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(447.14f, -988.574f, 29.688f, 0f, 0f, -80.15f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_487[3], iVar0, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard1", 1000f, -4f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_492[2], iVar0, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_dockworker", 1000f, -4f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, 1);
			iLocal_497++;
			break;
	}
}


int func_767()//Position - 0x6A591
{
	var uVar0;
	int iVar1;
	
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f))
	{
		uVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0) == PLAYER::PLAYER_PED_ID())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			return 1;
		}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f, 0, 1, 0))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			return 1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar1]))
		{
			if (PED::IS_PED_INJURED(Global_86864.f_9[iVar1]))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar1], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_COMBAT(Global_86864.f_9[iVar1], 0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_768()//Position - 0x6A6E4
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(171, GlobalFunc_8329()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (GlobalFunc_8329() == 2)
		{
			if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && fVar3 < (10f * 10f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 409.3329f, -969.2733f, 27.56642f, 408.9702f, -982.8369f, 32.20646f, 6.625f, 0, 1, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					GlobalFunc_159("CHRETURN", 3000);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iLocal_498)
					{
						iLocal_498 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				else
				{
					Global_86864.f_9[0] = iLocal_487[0];
					Global_86864.f_9[1] = iLocal_487[1];
					Global_86864.f_9[2] = iLocal_487[2];
					Global_86864.f_9[6] = iLocal_487[3];
					Global_86864.f_9[3] = iLocal_492[0];
					Global_86864.f_9[4] = iLocal_492[1];
					Global_86864.f_9[5] = iLocal_492[2];
					return 1;
				}
			}
		}
		else if (GlobalFunc_8329() == 1)
		{
			if (fVar3 < (5f * 5f))
			{
				Global_86864.f_9[0] = iLocal_487[0];
				Global_86864.f_9[1] = iLocal_487[1];
				Global_86864.f_9[2] = iLocal_487[2];
				Global_86864.f_9[6] = iLocal_487[3];
				Global_86864.f_9[3] = iLocal_492[0];
				Global_86864.f_9[4] = iLocal_492[1];
				Global_86864.f_9[5] = iLocal_492[2];
				return 1;
			}
		}
	}
	return 0;
}


void func_770()//Position - 0x6A8AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_487)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_487[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_487[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_492)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_492[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_492[iVar0]));
		}
		iVar0++;
	}
}

void func_771()//Position - 0x6A90F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_487)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_487[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_487[iVar0], 1))
			{
				PED::SET_PED_KEEP_TASK(iLocal_487[iVar0], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_487[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_492)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_492[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_492[iVar0], 1))
			{
				PED::SET_PED_KEEP_TASK(iLocal_492[iVar0], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_492[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_772()//Position - 0x6A9A7
{
	iLocal_498 = 0;
	PED::SET_CREATE_RANDOM_COPS(0);
}

int func_773()//Position - 0x6A9B8
{
	if (func_607(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_774()//Position - 0x6A9D2
{
	func_611(&(Global_86864.f_209), 0);
}

void func_775()//Position - 0x6A9E5
{
	GlobalFunc_6491(&(Global_86864.f_209), "missheistdockssetup1ig_13@start_idle");
	GlobalFunc_6492(&(Global_86864.f_209), joaat("s_m_y_cop_01"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("a_m_y_genstreet_02"));
	func_776(&(Global_86864.f_209), "CHHEIST", 0, 0);
}

void func_776(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x6AA2B
{
	int iVar0;
	
	if (bParam3)
	{
		MISC::SET_BIT(&iVar0, 26);
	}
	GlobalFunc_4529(uParam0, 8, iParam2, sParam1, iVar0);
}





int func_781()//Position - 0x6AA6F
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < Global_86864.f_9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
				{
					return 1;
				}
				else if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar0], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(Global_86864.f_9[iVar0])) || FIRE::IS_ENTITY_ON_FIRE(Global_86864.f_9[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_86864)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Global_86864[iVar0]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[iVar0], 0))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(107.1844f, -434.6098f, 37.23969f, 124.4786f, -385.5533f, 52.27139f, 40f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 107.1844f, -434.6098f, 37.23969f, 124.4786f, -385.5533f, 52.27139f, 40f))
	{
		return 1;
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(114.5789f, -399.8644f, 40.264f, 12f, 0, 20503);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar1)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

int func_782()//Position - 0x6AC11
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { GlobalFunc_2247(170, 0) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar6 = SYSTEM::VDIST2(Var3, 108.3888f, -396.6129f, 40.27208f);
		fVar7 = SYSTEM::VDIST2(Var3, 114.0303f, -399.2563f, 40.26558f);
		fVar8 = (fVar6 - fVar7);
		if (!Global_87287)
		{
			if (fVar8 > 0.5f)
			{
				if (MISC::IS_BIT_SET(uLocal_484, 1))
				{
					GlobalFunc_4593();
					MISC::CLEAR_BIT(&iLocal_484, 1);
				}
				if (!MISC::IS_BIT_SET(iLocal_484, 2))
				{
					if (!Global_68262)
					{
						GlobalFunc_6514(8, "CAR_1_INT_CONCAT", 8, 14, 12);
						func_559(8, "DEVIN", Global_86864.f_9[0]);
						GlobalFunc_6516(8, "DEVIN", 8, 1, 0);
						func_559(8, "MOLLY", Global_86864.f_9[1]);
						MISC::SET_BIT(&iLocal_484, 2);
					}
				}
			}
			else if (fVar8 < -0.5f)
			{
				if (MISC::IS_BIT_SET(iLocal_484, 2))
				{
					GlobalFunc_4593();
					MISC::CLEAR_BIT(&iLocal_484, 2);
				}
				if (!MISC::IS_BIT_SET(iLocal_484, 1))
				{
					if (!Global_68262)
					{
						GlobalFunc_6514(8, "CAR_1_INT_CONCAT", 8, 15, 12);
						func_559(8, "DEVIN", Global_86864.f_9[0]);
						GlobalFunc_6516(8, "DEVIN", 8, 1, 0);
						func_559(8, "MOLLY", Global_86864.f_9[1]);
						MISC::SET_BIT(&iLocal_484, 1);
					}
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_484, 1) && !MISC::IS_BIT_SET(iLocal_484, 2))
			{
				if (!Global_68262)
				{
					GlobalFunc_6514(8, "CAR_1_INT_CONCAT", 8, 14, 12);
					func_559(8, "DEVIN", Global_86864.f_9[0]);
					GlobalFunc_6516(8, "DEVIN", 8, 1, 0);
					func_559(8, "MOLLY", Global_86864.f_9[1]);
					MISC::SET_BIT(&iLocal_484, 2);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_484, 1) || MISC::IS_BIT_SET(iLocal_484, 2))
			{
				if ((((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4 && ((GlobalFunc_8329() != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 107.1844f, -434.6098f, 37.23969f, 124.4786f, -385.5533f, 52.27139f, 40f, 0, 1, 0)) || (GlobalFunc_8329() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 109.3462f, -419.775f, 37.35889f, 121.5405f, -384.9882f, 52.58789f, 32f, 0, 1, 0)))) || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 111.3462f, -404.775f, 37.35889f, 118.5405f, -383.9882f, 52.58789f, 25f, 0, 1, 0))) && !GlobalFunc_4600(107.1844f, -434.6098f, 37.23969f, 124.4786f, -385.5533f, 52.27139f, 40f)) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_486 = -1;
					}
					func_549();
					MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 100f, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 15000, 0, 2);
				}
			}
		}
		else
		{
			if (iLocal_486 == -1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_486 = MISC::GET_GAME_TIMER();
			}
			if (!iLocal_485)
			{
				if ((((GlobalFunc_8329() != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 96.08694f, -384.519f, 39.30441f, 131.7006f, -409.5232f, 46.06152f, 20f, 0, 1, 0)) || (GlobalFunc_8329() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 98.81f, -386.6437f, 39.88712f, 124.4522f, -403.8644f, 50.20362f, 20f, 0, 1, 0))) && iLocal_486 != -1) && (MISC::GET_GAME_TIMER() - iLocal_486) > 1500)
				{
					if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 1f, 20000, 1048576000, 4, 1193033728);
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), -1, 2500, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
						if (GlobalFunc_8329() == 1)
						{
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.915f);
						}
						else
						{
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.015f);
						}
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.02f);
						CAM::SET_GAMEPLAY_HINT_FOV(30f);
					}
					Global_86864.f_358 = MISC::GET_GAME_TIMER();
					iLocal_485 = 1;
				}
			}
			else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_483))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("CAR_1_INT_CONCAT"))
				{
					if (GlobalFunc_8329() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 98.81f, -386.6437f, 39.88712f, 124.4522f, -403.8644f, 50.20362f, 20f, 0, 1, 0))
					{
						iLocal_483 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_483, "misscarsteal1leadin", "DEVON_Fra_enters_leadin", 4f, -1000f, 1, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_483, "misscarsteal1leadin", "MOLLY_Fra_enters_leadin", 4f, -1000f, 1, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_483, 0f);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_483, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_483, 1);
						GlobalFunc_173(&(Global_86864.f_44), 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						GlobalFunc_10652(&(Global_86864.f_44), "CST3AUD", "CST3_INT_LI", 7, 0, 0, 0);
					}
				}
			}
			if ((((GlobalFunc_8329() == 1 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 103.8719f, -393.5728f, 37.76558f, 117.711f, -400.9166f, 50.26337f, 14f, 0, 1, 0) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_483) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_483) >= 0.5f))) || (GlobalFunc_8329() == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 110.2848f, -406.4378f, 45.26479f, 116.9663f, -392.0454f, 39.71128f, 20f, 0, 1, 0))) || (GlobalFunc_8329() == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 110.2848f, -406.4378f, 45.26479f, 116.9663f, -392.0454f, 39.71128f, 24f, 0, 1, 0))) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 106.0383f, -438.1933f, 37.25396f, 126.9945f, -378.3998f, 52.26057f, 50f, 0, 1, 0))
			{
				return 1;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			}
		}
	}
	return 0;
}



void func_785()//Position - 0x6B409
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_8915(&(Global_86864.f_9[1]));
	GlobalFunc_8915(&(Global_86864.f_9[2]));
	GlobalFunc_8915(&(Global_86864.f_9[3]));
	GlobalFunc_8915(&(Global_86864.f_9[4]));
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_4588(&(Global_86864[1]));
	GlobalFunc_4588(&(Global_86864[2]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	CAM::STOP_GAMEPLAY_HINT(0);
	MISC::CLEAR_BIT(&iLocal_484, 2);
	MISC::CLEAR_BIT(&iLocal_484, 1);
	GlobalFunc_4593();
}

void func_786()//Position - 0x6B4A1
{
	func_204(&(Global_86864.f_9[0]));
	func_204(&(Global_86864.f_9[1]));
	func_204(&(Global_86864.f_9[2]));
	func_204(&(Global_86864.f_9[3]));
	func_204(&(Global_86864.f_9[4]));
	GlobalFunc_4574(&(Global_86864[0]));
	GlobalFunc_4574(&(Global_86864[1]));
	GlobalFunc_4574(&(Global_86864[2]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	CAM::STOP_GAMEPLAY_HINT(0);
	MISC::CLEAR_BIT(&iLocal_484, 2);
	MISC::CLEAR_BIT(&iLocal_484, 1);
	GlobalFunc_4593();
}

void func_787()//Position - 0x6B539
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
	
	MISC::CLEAR_AREA(GlobalFunc_2247(170, 0), 14f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(80.36914f, -389.1319f, 104.7474f) - Vector(50f, 100f, 65f), Vector(80.36914f, -389.1319f, 104.7474f) + Vector(50f, 100f, 65f), 0, 1, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		GlobalFunc_4598(Global_86864.f_9[0]);
		ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[0], -140.8511f);
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		GlobalFunc_4598(Global_86864.f_9[1]);
		ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[1], -0.4412f);
		GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	}
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("felon"), 110.7381f, -401.221f, 40.9425f, -112.084f, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
	{
		GlobalFunc_4598(Global_86864.f_9[2]);
		PED::SET_PED_INTO_VEHICLE(Global_86864.f_9[2], Global_86864[0], -1);
		GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
	}
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("f620"), 117.105f, -414.6006f, 40.1527f, 268.8413f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_86864[1], 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[1], 43, 43);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_86864[1], 48, 48);
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_86864[2], 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[2], 0, 0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_86864[2], 0, 0);
	if (GlobalFunc_8329() == 1 || (GlobalFunc_8329() == 0 && ENTITY::DOES_ENTITY_EXIST(uLocal_439[2])))
	{
		iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iVar0, "misscarsteal1leadin", "devon_idle_01", 1000f, -1000f, 1, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, 1);
		iVar1 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iVar1, "misscarsteal1leadin", "molly_idle_01", 1000f, -1000f, 1, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar1, 1);
	}
	else if (GlobalFunc_8329() == 2)
	{
		iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iVar2, "misscarsteal1leadinout@i_fought_the_law", "leadin_loop_devin", 1000f, -1000f, 1, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, 1);
		iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iVar3, "misscarsteal1leadinout@i_fought_the_law", "leadin_loop_molly", 1000f, -1000f, 1, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			GlobalFunc_4598(Global_86864.f_9[3]);
			ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[3], 148.2f);
			GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
			iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], iVar4, "misscarsteal1leadinout@i_fought_the_law", "leadin_loop_franklin", 1000f, -1000f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 1);
		}
	}
	else if (GlobalFunc_8329() == 0)
	{
		iVar5 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iVar5, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_DEVIN", 1000f, -1000f, 1, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar5, 1);
		iVar6 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iVar6, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_MOLLY", 1000f, -1000f, 1, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar6, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			GlobalFunc_4598(Global_86864.f_9[3]);
			ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[3], 148.2f);
			GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
			iVar7 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], iVar7, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_FRANKLIN", 1000f, -1000f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar7, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
		{
			GlobalFunc_4598(Global_86864.f_9[4]);
			ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[4], 42.4422f);
			GlobalFunc_4596(Global_86864.f_9[4], Global_86864.f_42);
			iVar8 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[4], iVar8, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_TREVOR", 1000f, -1000f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar8, 1);
		}
	}
	STREAMING::REMOVE_ANIM_DICT("misscarsteal1leadin");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal1leadinout@i_fought_the_law");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("felon"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("adder"));
}

int func_788()//Position - 0x6BB2E
{
	struct<3> Var0[3];
	struct<3> Var10[3];
	struct<3> Var20[1];
	struct<3> Var24[1];
	struct<3> Var28[1];
	
	if (!func_607(&(Global_86864.f_209)))
	{
		return 0;
	}
	GlobalFunc_4599(&(Var0[0 /*3*/]), 3, 2, 0);
	GlobalFunc_4599(&(Var0[1 /*3*/]), 4, 2, 0);
	GlobalFunc_4599(&(Var0[2 /*3*/]), 10, 1, 0);
	GlobalFunc_4599(&(Var10[0 /*3*/]), 0, 1, 1);
	GlobalFunc_4599(&(Var10[1 /*3*/]), 3, 0, 0);
	GlobalFunc_4599(&(Var10[2 /*3*/]), 4, 0, 0);
	Var20[0 /*3*/].f_1 = -1;
	Var24[0 /*3*/] = 1;
	Var24[0 /*3*/].f_1 = 0;
	Var24[0 /*3*/].f_2 = 0;
	Var28[0 /*3*/].f_1 = -1;
	switch (GlobalFunc_8329())
	{
		case 1:
			if ((!func_789(&(Global_86864.f_9[0]), 29, 111.4789f, -396.7308f, 40.2624f, &Var0, &Var28) || !func_789(&(Global_86864.f_9[1]), 45, 112.5587f, -400.4127f, 40.2624f, &Var20, &Var24)) || !func_789(&(Global_86864.f_9[2]), 28, 111.4789f, -396.7308f, 40.2624f, &Var10, &Var28))
			{
				return 0;
			}
			break;
		
		case 2:
			if (((!func_789(&(Global_86864.f_9[0]), 29, 111.4789f, -396.7308f, 40.2624f, &Var0, &Var28) || !func_789(&(Global_86864.f_9[1]), 45, 112.5587f, -400.4127f, 40.2624f, &Var20, &Var24)) || !func_789(&(Global_86864.f_9[2]), 28, 111.4789f, -396.7308f, 40.2624f, &Var10, &Var28)) || !func_255(&(Global_86864.f_9[3]), 1, 111.661f, -400.209f, 40.243f, 12, -99))
			{
				return 0;
			}
			break;
		
		case 0:
			if ((((!func_789(&(Global_86864.f_9[0]), 29, 111.4789f, -396.7308f, 40.2624f, &Var0, &Var28) || !func_789(&(Global_86864.f_9[1]), 45, 112.5587f, -400.4127f, 40.2624f, &Var20, &Var24)) || !func_789(&(Global_86864.f_9[2]), 28, 111.4789f, -396.7308f, 40.2624f, &Var10, &Var28)) || !func_255(&(Global_86864.f_9[3]), 1, 111.661f, -400.209f, 40.243f, 12, -99)) || !func_255(&(Global_86864.f_9[4]), 2, 111.7596f, -399.2278f, 40.2648f, 12, -99))
			{
				return 0;
			}
			break;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal1leadinout@i_fought_the_law"))
	{
		return 0;
	}
	return 1;
}

int func_789(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6)//Position - 0x6BDF5
{
	int iVar0;
	
	if (!GlobalFunc_7048(iParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		GlobalFunc_6808(uParam0, iParam1, Param2, 0f, 0);
		iVar0 = 0;
		while (iVar0 < *uParam5)
		{
			if ((uParam5[iVar0 /*3*/])->f_1 != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, (*uParam5)[iVar0 /*3*/], (uParam5[iVar0 /*3*/])->f_1, (uParam5[iVar0 /*3*/])->f_2, 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < *iParam6)
		{
			if ((iParam6[iVar0 /*3*/])->f_1 != -1)
			{
				PED::SET_PED_PROP_INDEX(*uParam0, (*iParam6)[iVar0 /*3*/], (iParam6[iVar0 /*3*/])->f_1, (iParam6[iVar0 /*3*/])->f_2, false);
			}
			iVar0++;
		}
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
		return 0;
	}
	else if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::DELETE_PED(uParam0);
		return 0;
	}
	else if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
	{
		return 0;
	}
	return 1;
}



void func_792()//Position - 0x6BF36
{
	GlobalFunc_7052(29);
	STREAMING::REMOVE_ANIM_DICT("misscarsteal1leadinout@i_fought_the_law");
	func_611(&(Global_86864.f_209), 0);
}


void func_794()//Position - 0x6BF7E
{
	GlobalFunc_7049(29);
	STREAMING::REQUEST_ANIM_DICT("misscarsteal1leadinout@i_fought_the_law");
	Global_86864.f_209.f_146 = MISC::GET_FRAME_COUNT();
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(2));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(1));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(45));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("a_m_y_business_01"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("felon"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("f620"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("adder"));
	GlobalFunc_6491(&(Global_86864.f_209), "misscarsteal1leadin");
}


void func_796()//Position - 0x6C041
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	MISC::CLEAR_BIT(&iLocal_484, 2);
	MISC::CLEAR_BIT(&iLocal_484, 1);
	Global_86864.f_358 = -1;
}


void func_798()//Position - 0x6C07E
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 809.4f, -1075.1f, 29f);
	if (fVar0 < 625f)
	{
		if (iLocal_438 == -1)
		{
			iLocal_438 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_438, "ASS_PAYPHONE_RING_master", 809.4f, -1075.1f, 29f, 0, 0, 0, 0);
		}
	}
	else if (iLocal_438 != -1)
	{
		GlobalFunc_894(&iLocal_438);
		iLocal_438 = -1;
	}
}




int func_802()//Position - 0x6C131
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(167, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[7 /*34*/].f_11, GlobalFunc_8329()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (4f * 4f))
			{
				GlobalFunc_894(&iLocal_438);
				iLocal_438 = -1;
				return 1;
			}
		}
	}
	return 0;
}



void func_805()//Position - 0x6C1B6
{
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(27.6547f, -1075.924f, 809.1208f) + Vector(5f, 5f, 5f), Vector(27.6547f, -1075.924f, 809.1208f) - Vector(5f, 5f, 5f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(809.1208f, -1075.924f, 27.6547f, 20f, 1, 0, 0, 0);
}






void func_811()//Position - 0x6C24F
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -26.204f, -109.798f, 57f);
	if (fVar0 < 625f)
	{
		if (iLocal_438 == -1)
		{
			iLocal_438 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_438, "ASS_PAYPHONE_RING_master", -26.204f, -109.798f, 57f, 0, 0, 0, 0);
		}
	}
	else if (iLocal_438 != -1)
	{
		GlobalFunc_894(&iLocal_438);
		iLocal_438 = -1;
	}
}



int func_814()//Position - 0x6C2E1
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(166, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[6 /*34*/].f_11, GlobalFunc_8329()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (3.5f * 3.5f))
			{
				GlobalFunc_894(&iLocal_438);
				iLocal_438 = -1;
				return 1;
			}
		}
	}
	return 0;
}









void func_823()//Position - 0x6C3A1
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 214.3494f, -853.0786f, 30.7142f);
	if (fVar0 < 625f)
	{
		if (iLocal_438 == -1)
		{
			iLocal_438 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_438, "ASS_PAYPHONE_RING_master", 214.3494f, -853.0786f, 30.7142f, 0, 0, 0, 0);
		}
	}
	else if (iLocal_438 != -1)
	{
		GlobalFunc_894(&iLocal_438);
		iLocal_438 = -1;
	}
}



int func_826()//Position - 0x6C433
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(165, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[5 /*34*/].f_11, GlobalFunc_8329()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (4f * 4f))
			{
				GlobalFunc_894(&iLocal_438);
				iLocal_438 = -1;
				return 1;
			}
		}
	}
	return 0;
}









void func_835()//Position - 0x6C4EB
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -700.1431f, -917.7708f, 18.2147f);
	if (fVar0 < 625f)
	{
		if (iLocal_438 == -1)
		{
			iLocal_438 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_438, "ASS_PAYPHONE_RING_master", -700.1431f, -917.7708f, 19f, 0, 0, 0, 0);
		}
	}
	else if (iLocal_438 != -1)
	{
		GlobalFunc_894(&iLocal_438);
		iLocal_438 = -1;
	}
}



int func_838()//Position - 0x6C570
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(164, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[4 /*34*/].f_11, GlobalFunc_8329()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (6f * 6f))
			{
				STREAMING::SET_HD_AREA(-717.8348f, -932.1736f, 18.01735f, 26f);
				GlobalFunc_894(&iLocal_438);
				iLocal_438 = -1;
				return 1;
			}
		}
	}
	return 0;
}












int func_850()//Position - 0x6C6A1
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(163, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[3 /*34*/].f_11, GlobalFunc_8329()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (4.75f * 4.75f))
			{
				func_549();
				return 1;
			}
		}
	}
	return 0;
}



void func_853()//Position - 0x6C72F
{
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.2495f, -947.0913f, -1509.862f) + Vector(2f, 2f, 2f), Vector(8.2495f, -947.0913f, -1509.862f) - Vector(2f, 2f, 2f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1509.862f, -947.0913f, 6.2495f, 20f, 1, 0, 0, 0);
	GlobalFunc_6514(3, "ASS_INT_2_ALT1", -1, 0, -1);
}

int func_854()//Position - 0x6C794
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leaning@"))
	{
		return 1;
	}
	return 0;
}

void func_855()//Position - 0x6C7AD
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
}

void func_856()//Position - 0x6C7BE
{
	STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
}


void func_858(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7)//Position - 0x6C7D7
{
	*uParam0 = iParam1;
	uParam0->f_2 = fParam2;
	uParam0->f_3 = fParam3;
	uParam0->f_4 = fParam4;
	uParam0->f_6 = iParam5;
	uParam0->f_5 = fParam6;
	if (MISC::IS_BIT_SET(Global_81155[iParam1 /*34*/].f_15, 13))
	{
		Global_84352[iParam1 /*2*/].f_1 = (fParam2 + 5f);
	}
	else
	{
		Global_84352[iParam1 /*2*/].f_1 = 20f;
	}
	if (MISC::IS_BIT_SET(iParam7, 0))
	{
		MISC::SET_BIT(&(uParam0->f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
	if (MISC::IS_BIT_SET(iParam7, 1))
	{
		MISC::SET_BIT(&(uParam0->f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 5);
	}
	if (MISC::IS_BIT_SET(iParam7, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 12);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	MISC::SET_BIT(&(uParam0->f_1), 0);
}

