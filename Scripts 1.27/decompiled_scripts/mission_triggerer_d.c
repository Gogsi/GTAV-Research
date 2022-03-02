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
	int iLocal_244 = 0;
	int iLocal_245 = 0;
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
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	struct<3> Local_418 = { 0, 0, 0 } ;
	struct<3> Local_421 = { 0, 0, 0 } ;
	var uLocal_424 = 0;
	struct<3> Local_425 = { 0, 0, 0 } ;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	int iLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	struct<3> Local_435 = { 0, 0, 0 } ;
	int iLocal_438 = 0;
	var uLocal_439 = 4;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
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
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 4;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 3;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
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
	int iLocal_1199 = 0;
	var uLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	struct<3> Local_1213 = { 0, 0, 0 } ;
	struct<3> Local_1216 = { 0, 0, 0 } ;
	struct<8> Local_1219 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1227 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1235 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_1243 = 0f;
	int iLocal_1244 = 0;
	int iLocal_1245 = 0;
	int iLocal_1246 = 0;
	int iLocal_1247[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1255 = 0;
	int iLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	int iLocal_1259[3] = { 0, 0, 0 };
	int iLocal_1263 = 0;
	int iLocal_1264 = 0;
	int iLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	struct<3> Local_1270 = { 0, 0, 0 } ;
	struct<3> Local_1273 = { 0, 0, 0 } ;
	var uLocal_1276 = 0;
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
	int iLocal_1530 = 0;
	int iLocal_1531 = 0;
	int iLocal_1532 = 0;
	var uLocal_1533 = 0;
	float fLocal_1534 = 0f;
	float fLocal_1535 = 0f;
	float fLocal_1536 = 0f;
	float fLocal_1537 = 0f;
	float fLocal_1538 = 0f;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 262;
	var uLocal_1543 = 0;
	var uLocal_1544 = 1065353216;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	float fLocal_1553 = 0f;
	float fLocal_1554 = 0f;
	float fLocal_1555 = 0f;
	float fLocal_1556 = 0f;
	float fLocal_1557 = 0f;
	int iLocal_1558 = 0;
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
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
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
	Var0 = 31747/*func_162*/;
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
		if (!GlobalFunc_230(46) || Global_SAVE_DATA.FLOW_STRUCT.flowCompleted)
		{
			func_158(&Var0);
		}
		func_1(&Var0);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x4B3
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
									GlobalFunc_9534(iVar0, uParam0);
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

























void func_26(int iParam0, var uParam1)//Position - 0x12D3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = Global_87300[iParam0 /*17*/].f_5;
	iVar1 = 0;
	if (MISC::IS_BIT_SET(Global_Mission_Blips[Global_87300[iParam0 /*17*/].f_9 /*23*/].f_11, 19))
	{
		iVar1 = GlobalFunc_8315();
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
		GlobalFunc_9540(iVar0, Var2, &(uParam1->f_113));
		if (!func_27(iParam0, uParam1))
		{
			return;
		}
	}
	Global_87298 = iParam0;
	Global_87297 = 1;
}

int func_27(int iParam0, var uParam1)//Position - 0x13A3
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
	iVar1 = GlobalFunc_8315();
	if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 0))
	{
		if (GlobalFunc_42(iVar1))
		{
			iVar2 = Global_81155[iVar0 /*34*/].f_10;
			fVar3 = GlobalFunc_4586(GlobalFunc_9539(iVar2));
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
					if (GlobalFunc_42(GlobalFunc_8315()))
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
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && GlobalFunc_42(GlobalFunc_8315()))
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
									if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, GlobalFunc_8315()))
									{
										if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 10))
										{
											if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 9))
											{
												if (GlobalFunc_9538(iVar0))
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
														GlobalFunc_9258(&(uParam1->f_115), 0, 0, 2000, 1, 1, 0, 1);
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
												Var17 = { GlobalFunc_9537(iVar0) };
												fVar20 = GlobalFunc_4586(Var17);
												fVar21 = GlobalFunc_4581(iVar0);
												if (!MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_10.f_1, 13))
												{
													if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
													{
														HUD::REMOVE_BLIP(&(uParam1->f_114));
													}
													uParam1->f_114 = GlobalFunc_5104(Var17, 0);
													HUD::SET_BLIP_SPRITE(uParam1->f_114, GlobalFunc_9536(iVar2));
													if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_Mission_Blips[iVar2 /*23*/].f_20)))
													{
														HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_114, &(Global_Mission_Blips[iVar2 /*23*/].f_20));
													}
													HUD::SET_BLIP_HIGH_DETAIL(uParam1->f_114, 1);
													HUD::SET_BLIP_AS_SHORT_RANGE(uParam1->f_114, 0);
													HUD::SET_BLIP_DISPLAY(uParam1->f_114, 4);
													switch (GlobalFunc_8315())
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
																if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 25) || (iVar0 == 15 && GlobalFunc_8315() == 1))
																{
																	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uVar22))
																	{
																		GlobalFunc_530(uVar22, 2.5f, 2, 0.5f, 1, 1);
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
										if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_11, GlobalFunc_8315()))
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
													switch (GlobalFunc_8315())
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
													GlobalFunc_4580(GlobalFunc_9539(iVar2));
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
								if ((GlobalFunc_9538(iVar0) || !MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, GlobalFunc_8315())) || GlobalFunc_6508())
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
										if (MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_11, GlobalFunc_8315()))
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







void func_34()//Position - 0x246E
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













void func_47(var uParam0)//Position - 0x2918
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
						GlobalFunc_4573(*uParam0);
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




void func_51(var uParam0)//Position - 0x2B0A
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







bool func_58(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F58
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_59(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_59(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F86
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
			GlobalFunc_9258(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
				GlobalFunc_9258(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			GlobalFunc_9258(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
























































void func_115(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5FE6
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







int func_122(int iParam0, var uParam1)//Position - 0x6321
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_87300[iParam0 /*17*/].f_5;
	if (MISC::IS_BIT_SET(Global_87300[iParam0 /*17*/].f_8, GlobalFunc_8315()))
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
				if (GlobalFunc_9039(iVar1))
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

void func_123(int iParam0)//Position - 0x648D
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
				GlobalFunc_530(uVar1, 2.5f, 2, 0.25f, 0, 1);
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



































void func_158(var uParam0)//Position - 0x7971
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


void func_160(var uParam0)//Position - 0x7A16
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
			GlobalFunc_9258(&(uParam0->f_115), 0, 0, 2000, 1, 1, 0, 1);
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


void func_162(int iParam0, var uParam1, var uParam2)//Position - 0x7C03
{
	switch (iParam0)
	{
		case 66:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 431704/*func_958*/;
			uParam2->f_2 = 431658/*func_957*/;
			uParam2->f_3 = 431599/*func_956*/;
			uParam2->f_4 = 431543/*func_955*/;
			uParam2->f_5 = 431124/*func_954*/;
			uParam2->f_6 = 431073/*func_953*/;
			uParam2->f_7 = 431022/*func_952*/;
			uParam2->f_10 = 430833/*func_951*/;
			uParam2->f_11 = 430731/*func_950*/;
			uParam2->f_12 = 430722/*func_949*/;
			uParam2->f_8 = 429396/*func_947*/;
			uParam2->f_9 = 429313/*func_946*/;
			break;
		
		case 68:
			GlobalFunc_4601(uParam1, iParam0, 80f, 100f, 50f, 3, 500f, 1);
			uParam2->f_1 = 429305/*func_945*/;
			uParam2->f_2 = 429279/*func_944*/;
			uParam2->f_3 = 429243/*func_943*/;
			uParam2->f_4 = 429212/*func_942*/;
			uParam2->f_5 = 428927/*func_941*/;
			uParam2->f_6 = 428709/*func_939*/;
			uParam2->f_7 = 428626/*func_938*/;
			uParam2->f_10 = 427676/*func_936*/;
			uParam2->f_11 = 427667/*func_935*/;
			uParam2->f_12 = 427658/*func_934*/;
			uParam2->f_8 = 427419/*func_933*/;
			uParam2->f_9 = 427293/*func_930*/;
			break;
		
		case 69:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 427277/*func_929*/;
			uParam2->f_2 = 427232/*func_928*/;
			uParam2->f_3 = 427177/*func_927*/;
			uParam2->f_4 = 427109/*func_926*/;
			uParam2->f_5 = 426449/*func_925*/;
			uParam2->f_6 = 426371/*func_924*/;
			uParam2->f_7 = 426293/*func_923*/;
			uParam2->f_10 = 425507/*func_920*/;
			uParam2->f_11 = 425367/*func_919*/;
			uParam2->f_12 = 425352/*func_918*/;
			uParam2->f_8 = 425344/*func_917*/;
			uParam2->f_9 = 425336/*func_916*/;
			break;
		
		case 70:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 425324/*func_915*/;
			uParam2->f_2 = 425261/*func_914*/;
			uParam2->f_3 = 425198/*func_913*/;
			uParam2->f_4 = 425102/*func_912*/;
			uParam2->f_5 = 406533/*func_882*/;
			uParam2->f_6 = 406384/*func_881*/;
			uParam2->f_7 = 406235/*func_880*/;
			uParam2->f_10 = 406199/*func_879*/;
			uParam2->f_11 = 406190/*func_878*/;
			uParam2->f_12 = 406181/*func_877*/;
			uParam2->f_8 = 405041/*func_872*/;
			uParam2->f_9 = 405033/*func_871*/;
			break;
		
		case 4:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 405025/*func_870*/;
			uParam2->f_2 = 405006/*func_869*/;
			uParam2->f_3 = 404994/*func_868*/;
			uParam2->f_4 = 404976/*func_867*/;
			uParam2->f_5 = 404919/*func_866*/;
			uParam2->f_6 = 404900/*func_865*/;
			uParam2->f_7 = 404881/*func_864*/;
			uParam2->f_10 = 404762/*func_863*/;
			uParam2->f_11 = 404753/*func_862*/;
			uParam2->f_12 = 404744/*func_861*/;
			uParam2->f_8 = 404629/*func_860*/;
			uParam2->f_9 = 404621/*func_859*/;
			break;
		
		case 5:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 404613/*func_858*/;
			uParam2->f_2 = 404594/*func_857*/;
			uParam2->f_3 = 404582/*func_856*/;
			uParam2->f_4 = 404564/*func_855*/;
			uParam2->f_5 = 404556/*func_854*/;
			uParam2->f_6 = 404548/*func_853*/;
			uParam2->f_7 = 404540/*func_852*/;
			uParam2->f_10 = 404445/*func_851*/;
			uParam2->f_11 = 404436/*func_850*/;
			uParam2->f_12 = 404414/*func_849*/;
			uParam2->f_8 = 404299/*func_848*/;
			uParam2->f_9 = 404291/*func_847*/;
			break;
		
		case 6:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 404283/*func_846*/;
			uParam2->f_2 = 404264/*func_845*/;
			uParam2->f_3 = 404252/*func_844*/;
			uParam2->f_4 = 404234/*func_843*/;
			uParam2->f_5 = 404226/*func_842*/;
			uParam2->f_6 = 404218/*func_841*/;
			uParam2->f_7 = 404210/*func_840*/;
			uParam2->f_10 = 404107/*func_839*/;
			uParam2->f_11 = 404098/*func_838*/;
			uParam2->f_12 = 404076/*func_837*/;
			uParam2->f_8 = 403961/*func_836*/;
			uParam2->f_9 = 403953/*func_835*/;
			break;
		
		case 7:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 403945/*func_834*/;
			uParam2->f_2 = 403926/*func_833*/;
			uParam2->f_3 = 403914/*func_832*/;
			uParam2->f_4 = 403896/*func_831*/;
			uParam2->f_5 = 403808/*func_830*/;
			uParam2->f_6 = 403789/*func_829*/;
			uParam2->f_7 = 403770/*func_828*/;
			uParam2->f_10 = 403675/*func_827*/;
			uParam2->f_11 = 403666/*func_826*/;
			uParam2->f_12 = 403644/*func_825*/;
			uParam2->f_8 = 403496/*func_823*/;
			uParam2->f_9 = 403488/*func_822*/;
			break;
		
		case 11:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 403480/*func_821*/;
			uParam2->f_2 = 403472/*func_820*/;
			uParam2->f_3 = 403464/*func_819*/;
			uParam2->f_4 = 403455/*func_818*/;
			uParam2->f_5 = 403447/*func_817*/;
			uParam2->f_6 = 403439/*func_816*/;
			uParam2->f_7 = 403431/*func_815*/;
			uParam2->f_10 = 403359/*func_814*/;
			uParam2->f_11 = 403350/*func_813*/;
			uParam2->f_12 = 403341/*func_812*/;
			uParam2->f_8 = 403333/*func_811*/;
			uParam2->f_9 = 403325/*func_810*/;
			break;
		
		case 22:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 403317/*func_809*/;
			uParam2->f_2 = 403309/*func_808*/;
			uParam2->f_3 = 403301/*func_807*/;
			uParam2->f_4 = 403292/*func_806*/;
			uParam2->f_5 = 403284/*func_805*/;
			uParam2->f_6 = 403272/*func_804*/;
			uParam2->f_7 = 403260/*func_803*/;
			uParam2->f_10 = 403188/*func_802*/;
			uParam2->f_11 = 403179/*func_801*/;
			uParam2->f_12 = 403170/*func_800*/;
			uParam2->f_8 = 403162/*func_799*/;
			uParam2->f_9 = 403154/*func_798*/;
			break;
		
		case 23:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 403126/*func_797*/;
			uParam2->f_2 = 403107/*func_796*/;
			uParam2->f_3 = 403054/*func_795*/;
			uParam2->f_4 = 403028/*func_794*/;
			uParam2->f_5 = 402997/*func_793*/;
			uParam2->f_6 = 402904/*func_792*/;
			uParam2->f_7 = 402818/*func_791*/;
			uParam2->f_10 = 402749/*func_790*/;
			uParam2->f_11 = 402718/*func_789*/;
			uParam2->f_12 = 402709/*func_788*/;
			uParam2->f_8 = 400514/*func_775*/;
			uParam2->f_9 = 400506/*func_774*/;
			break;
		
		case 24:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 400498/*func_773*/;
			uParam2->f_2 = 400490/*func_772*/;
			uParam2->f_3 = 400482/*func_771*/;
			uParam2->f_4 = 400473/*func_770*/;
			uParam2->f_5 = 400287/*func_769*/;
			uParam2->f_6 = 400229/*func_768*/;
			uParam2->f_7 = 400171/*func_767*/;
			uParam2->f_10 = 399978/*func_766*/;
			uParam2->f_11 = 399969/*func_765*/;
			uParam2->f_12 = 399960/*func_764*/;
			uParam2->f_8 = 399830/*func_763*/;
			uParam2->f_9 = 399822/*func_762*/;
			break;
		
		case 25:
			GlobalFunc_4601(uParam1, iParam0, 120f, 130f, 50f, 0, 0, 0);
			uParam2->f_1 = 399814/*func_761*/;
			uParam2->f_2 = 399806/*func_760*/;
			uParam2->f_3 = 399798/*func_759*/;
			uParam2->f_4 = 399789/*func_758*/;
			uParam2->f_5 = 399629/*func_757*/;
			uParam2->f_6 = 399602/*func_756*/;
			uParam2->f_7 = 399543/*func_753*/;
			uParam2->f_10 = 399330/*func_751*/;
			uParam2->f_11 = 399321/*func_750*/;
			uParam2->f_12 = 399312/*func_749*/;
			uParam2->f_8 = 396575/*func_744*/;
			uParam2->f_9 = 396567/*func_743*/;
			break;
		
		case 26:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 396551/*func_742*/;
			uParam2->f_2 = 396291/*func_739*/;
			uParam2->f_3 = 396222/*func_738*/;
			uParam2->f_4 = 396153/*func_737*/;
			uParam2->f_5 = 395664/*func_735*/;
			uParam2->f_6 = 395340/*func_734*/;
			uParam2->f_7 = 395153/*func_731*/;
			uParam2->f_10 = 394945/*func_729*/;
			uParam2->f_11 = 394803/*func_728*/;
			uParam2->f_12 = 394794/*func_727*/;
			uParam2->f_8 = 377658/*func_708*/;
			uParam2->f_9 = 377650/*func_707*/;
			break;
		
		case 78:
			GlobalFunc_4601(uParam1, iParam0, 140f, 150f, 50f, 7, 500f, 0);
			uParam2->f_1 = 377642/*func_706*/;
			uParam2->f_2 = 377607/*func_705*/;
			uParam2->f_3 = 377572/*func_704*/;
			uParam2->f_4 = 377505/*func_703*/;
			uParam2->f_5 = 376402/*func_700*/;
			uParam2->f_6 = 376321/*func_699*/;
			uParam2->f_7 = 376240/*func_698*/;
			uParam2->f_10 = 375955/*func_695*/;
			uParam2->f_11 = 375912/*func_694*/;
			uParam2->f_12 = 375903/*func_693*/;
			uParam2->f_8 = 375895/*func_692*/;
			uParam2->f_9 = 375887/*func_691*/;
			break;
		
		case joaat("mpsv_lp0_31"):
			GlobalFunc_4601(uParam1, iParam0, 130f, 150f, 50f, 7, 500f, 0);
			uParam2->f_1 = 375822/*func_690*/;
			uParam2->f_2 = 375768/*func_689*/;
			uParam2->f_3 = 375718/*func_688*/;
			uParam2->f_4 = 375641/*func_687*/;
			uParam2->f_5 = 373785/*func_685*/;
			uParam2->f_6 = 373684/*func_684*/;
			uParam2->f_7 = 373549/*func_683*/;
			uParam2->f_10 = 373159/*func_681*/;
			uParam2->f_11 = 373014/*func_678*/;
			uParam2->f_12 = 373000/*func_677*/;
			uParam2->f_8 = 371860/*func_675*/;
			uParam2->f_9 = 371852/*func_674*/;
			break;
		
		case 80:
		case 81:
		case 82:
			GlobalFunc_4601(uParam1, iParam0, 150f, 160f, 50f, 0, 0f, 1);
			uParam2->f_1 = 371814/*func_673*/;
			uParam2->f_2 = 371797/*func_672*/;
			uParam2->f_3 = 371780/*func_671*/;
			uParam2->f_4 = 371755/*func_670*/;
			uParam2->f_5 = 371453/*func_667*/;
			uParam2->f_6 = 371357/*func_666*/;
			uParam2->f_7 = 371261/*func_665*/;
			uParam2->f_10 = 370364/*func_659*/;
			uParam2->f_11 = 370355/*func_658*/;
			uParam2->f_12 = 370346/*func_657*/;
			uParam2->f_8 = 370098/*func_656*/;
			uParam2->f_9 = 367328/*func_641*/;
			break;
		
		case 83:
			GlobalFunc_4601(uParam1, iParam0, 300f, 320f, 225f, 0, 500f, 0);
			uParam2->f_1 = 367320/*func_640*/;
			uParam2->f_2 = 367303/*func_639*/;
			uParam2->f_3 = 367286/*func_638*/;
			uParam2->f_4 = 367261/*func_637*/;
			uParam2->f_5 = 367066/*func_636*/;
			uParam2->f_6 = 367021/*func_635*/;
			uParam2->f_7 = 366976/*func_634*/;
			uParam2->f_10 = 366883/*func_633*/;
			uParam2->f_11 = 366710/*func_632*/;
			uParam2->f_12 = 366696/*func_631*/;
			uParam2->f_8 = 366688/*func_630*/;
			uParam2->f_9 = 366680/*func_629*/;
			break;
		
		case 77:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 366672/*func_628*/;
			uParam2->f_2 = 366626/*func_627*/;
			uParam2->f_3 = 366580/*func_626*/;
			uParam2->f_4 = 366504/*func_625*/;
			uParam2->f_5 = 366050/*func_623*/;
			uParam2->f_6 = 366003/*func_622*/;
			uParam2->f_7 = 365956/*func_621*/;
			uParam2->f_10 = 358901/*func_615*/;
			uParam2->f_11 = 358751/*func_614*/;
			uParam2->f_12 = 358742/*func_613*/;
			uParam2->f_8 = 358734/*func_612*/;
			uParam2->f_9 = 358726/*func_611*/;
			break;
		
		case 84:
			GlobalFunc_4601(uParam1, iParam0, 40f, 55f, 50f, 0, 0, 0);
			uParam2->f_1 = 358718/*func_610*/;
			uParam2->f_2 = 358704/*func_609*/;
			uParam2->f_3 = 358690/*func_608*/;
			uParam2->f_4 = 358669/*func_607*/;
			uParam2->f_5 = 358111/*func_602*/;
			uParam2->f_6 = 358087/*func_601*/;
			uParam2->f_7 = 358063/*func_600*/;
			uParam2->f_10 = 358006/*func_599*/;
			uParam2->f_11 = 357997/*func_598*/;
			uParam2->f_12 = 357988/*func_597*/;
			uParam2->f_8 = 357980/*func_596*/;
			uParam2->f_9 = 357972/*func_595*/;
			break;
		
		case 85:
			GlobalFunc_4601(uParam1, iParam0, 40f, 55f, 50f, 0, 0, 0);
			uParam2->f_1 = 357964/*func_594*/;
			uParam2->f_2 = 357950/*func_593*/;
			uParam2->f_3 = 357873/*func_591*/;
			uParam2->f_4 = 357834/*func_589*/;
			uParam2->f_5 = 357776/*func_587*/;
			uParam2->f_6 = 357752/*func_586*/;
			uParam2->f_7 = 357728/*func_585*/;
			uParam2->f_10 = 357434/*func_584*/;
			uParam2->f_11 = 357425/*func_583*/;
			uParam2->f_12 = 357365/*func_581*/;
			uParam2->f_8 = 357357/*func_580*/;
			uParam2->f_9 = 357349/*func_579*/;
			break;
		
		case 42:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 357341/*func_578*/;
			uParam2->f_2 = 357333/*func_577*/;
			uParam2->f_3 = 357325/*func_576*/;
			uParam2->f_4 = 357316/*func_575*/;
			uParam2->f_5 = 357294/*func_574*/;
			uParam2->f_6 = 357282/*func_573*/;
			uParam2->f_7 = 357270/*func_572*/;
			uParam2->f_10 = 357192/*func_571*/;
			uParam2->f_11 = 357183/*func_570*/;
			uParam2->f_12 = 357174/*func_569*/;
			uParam2->f_8 = 357120/*func_568*/;
			uParam2->f_9 = 357112/*func_567*/;
			break;
		
		case 47:
			GlobalFunc_4601(uParam1, iParam0, 150f, 175f, 50f, 0, 0, 0);
			uParam2->f_1 = 357083/*func_566*/;
			uParam2->f_2 = 356946/*func_563*/;
			uParam2->f_3 = 356867/*func_562*/;
			uParam2->f_4 = 356684/*func_559*/;
			uParam2->f_5 = 50274/*func_271*/;
			uParam2->f_6 = 50108/*func_270*/;
			uParam2->f_7 = 49942/*func_269*/;
			uParam2->f_10 = 48892/*func_267*/;
			uParam2->f_11 = 48449/*func_266*/;
			uParam2->f_12 = 48440/*func_265*/;
			uParam2->f_8 = 48432/*func_264*/;
			uParam2->f_9 = 48424/*func_263*/;
			break;
		
		case 48:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 48408/*func_262*/;
			uParam2->f_2 = 48400/*func_261*/;
			uParam2->f_3 = 48392/*func_260*/;
			uParam2->f_4 = 48383/*func_259*/;
			uParam2->f_5 = 48375/*func_258*/;
			uParam2->f_6 = 48367/*func_257*/;
			uParam2->f_7 = 48359/*func_256*/;
			uParam2->f_10 = 48180/*func_255*/;
			uParam2->f_11 = 48171/*func_254*/;
			uParam2->f_12 = 48162/*func_253*/;
			uParam2->f_8 = 48154/*func_252*/;
			uParam2->f_9 = 48146/*func_251*/;
			break;
		
		case 49:
			GlobalFunc_4601(uParam1, iParam0, 180f, 190f, 50f, 0, 0, 0);
			uParam2->f_1 = 48138/*func_250*/;
			uParam2->f_2 = 48130/*func_249*/;
			uParam2->f_3 = 48122/*func_248*/;
			uParam2->f_4 = 48109/*func_247*/;
			uParam2->f_5 = 48101/*func_246*/;
			uParam2->f_6 = 48093/*func_245*/;
			uParam2->f_7 = 48085/*func_244*/;
			uParam2->f_10 = 48013/*func_243*/;
			uParam2->f_11 = 48004/*func_242*/;
			uParam2->f_12 = 47075/*func_235*/;
			uParam2->f_8 = 47067/*func_234*/;
			uParam2->f_9 = 47059/*func_233*/;
			break;
		
		case 60:
			GlobalFunc_4601(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 47039/*func_232*/;
			uParam2->f_2 = 46978/*func_231*/;
			uParam2->f_3 = 46917/*func_230*/;
			uParam2->f_4 = 46823/*func_229*/;
			uParam2->f_5 = 45788/*func_226*/;
			uParam2->f_6 = 45263/*func_223*/;
			uParam2->f_7 = 45129/*func_222*/;
			uParam2->f_10 = 44923/*func_221*/;
			uParam2->f_11 = 44775/*func_220*/;
			uParam2->f_12 = 44766/*func_219*/;
			uParam2->f_8 = 41170/*func_202*/;
			uParam2->f_9 = 41162/*func_201*/;
			break;
		
		case 61:
			GlobalFunc_4601(uParam1, iParam0, 200f, 220f, 50f, 0, 0, 0);
			uParam2->f_1 = 41154/*func_200*/;
			uParam2->f_2 = 41119/*func_199*/;
			uParam2->f_3 = 41073/*func_198*/;
			uParam2->f_4 = 41020/*func_197*/;
			uParam2->f_5 = 40237/*func_194*/;
			uParam2->f_6 = 40170/*func_193*/;
			uParam2->f_7 = 36336/*func_184*/;
			uParam2->f_10 = 36273/*func_183*/;
			uParam2->f_11 = 36264/*func_182*/;
			uParam2->f_12 = 36255/*func_181*/;
			uParam2->f_8 = 36219/*func_180*/;
			uParam2->f_9 = 36211/*func_179*/;
			break;
		
		case 54:
		case 55:
		case 58:
			GlobalFunc_4601(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 36203/*func_178*/;
			uParam2->f_2 = 36186/*func_177*/;
			uParam2->f_3 = 36169/*func_176*/;
			uParam2->f_4 = 36144/*func_175*/;
			uParam2->f_5 = 36040/*func_174*/;
			uParam2->f_6 = 36021/*func_173*/;
			uParam2->f_7 = 35898/*func_171*/;
			uParam2->f_10 = 35528/*func_167*/;
			uParam2->f_11 = 35519/*func_166*/;
			uParam2->f_12 = 35497/*func_165*/;
			uParam2->f_8 = 35489/*func_164*/;
			uParam2->f_9 = 35481/*func_163*/;
			break;
		
		default:
			return;
			break;
	}
	*uParam2 = 1;
}


















void func_180()//Position - 0x8D7B
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Global_86864[3] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
}



int func_183()//Position - 0x8DB1
{
	struct<3> Var0;
	
	Var0 = { GlobalFunc_2247(211, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 1) < 2.5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_184()//Position - 0x8DF0
{
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_4588(&(Global_86864[1]));
	GlobalFunc_4588(&(Global_86864[2]));
	GlobalFunc_4588(&(Global_86864[3]));
	GlobalFunc_7678(24, 1);
	STREAMING::NEW_LOAD_SCENE_STOP();
	GlobalFunc_4593();
}









void func_193()//Position - 0x9CEA
{
	GlobalFunc_4574(&(Global_86864[0]));
	GlobalFunc_4574(&(Global_86864[1]));
	GlobalFunc_4574(&(Global_86864[2]));
	GlobalFunc_4574(&(Global_86864[3]));
	STREAMING::NEW_LOAD_SCENE_STOP();
	GlobalFunc_7678(24, 1);
	GlobalFunc_4593();
}

void func_194()//Position - 0x9D2D
{
	MISC::CLEAR_AREA(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f);
	GlobalFunc_7678(24, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1006f, -478f, 49f, 15f, 0);
	MISC::CLEAR_AREA(-1024.1f, -485.3321f, 35.9816f, 5f, 1, 0, 0, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -1024.1f, -485.3321f, 35.9816f, 209.7233f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[0], 112, 112);
	ENTITY::SET_ENTITY_HEALTH(Global_86864[0], 3000);
	VEHICLE::SET_VEHICLE_STRONG(Global_86864[0], 1);
	ENTITY::SET_ENTITY_PROOFS(Global_86864[0], 0, 1, 0, 0, 0, 0, 0, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[0], 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_86864[0], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
	MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[1], 0, 0);
	ENTITY::SET_ENTITY_HEALTH(Global_86864[1], 3000);
	VEHICLE::SET_VEHICLE_STRONG(Global_86864[1], 1);
	ENTITY::SET_ENTITY_PROOFS(Global_86864[1], 0, 1, 1, 0, 0, 0, 0, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[1], 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_86864[1], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
	MISC::CLEAR_AREA(-1033.938f, -489.7475f, 35.8323f, 5f, 1, 0, 0, 0);
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[2], 89, 89);
	ENTITY::SET_ENTITY_HEALTH(Global_86864[2], 3000);
	VEHICLE::SET_VEHICLE_STRONG(Global_86864[2], 1);
	ENTITY::SET_ENTITY_PROOFS(Global_86864[2], 0, 1, 1, 0, 0, 0, 0, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[2], 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_86864[2], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
	GlobalFunc_6514(61, "sol_3_int", 0, -1, -1);
}



int func_197()//Position - 0xA03C
{
	if ((STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))) && STREAMING::HAS_MODEL_LOADED(joaat("surano")))
	{
		return 1;
	}
	return 0;
}

void func_198()//Position - 0xA071
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
	STREAMING::NEW_LOAD_SCENE_STOP();
	GlobalFunc_7678(24, 1);
}

void func_199()//Position - 0xA09F
{
	STREAMING::REQUEST_MODEL(joaat("rapidgt"));
	STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
	STREAMING::REQUEST_MODEL(joaat("surano"));
}



void func_202()//Position - 0xA0D2
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
		{
			switch (iLocal_1558)
			{
				case 0:
					func_218();
					break;
				
				case 1:
					func_206();
					break;
				
				case 2:
					func_203();
					break;
				}
			}
	}
}

void func_203()//Position - 0xA121
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_205())
			{
				if (func_204())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[2], 0f, 0f, 0f, 1, 60000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1553);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1554);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1555);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1556);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_1557);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				}
			}
		}
		else if (func_204())
		{
			CAM::_0xCCD078C2665D2973(1);
		}
		else
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
	}
	if (!GlobalFunc_111())
	{
		CAM::_0xCCD078C2665D2973(0);
		iLocal_1558 = 3;
	}
}

int func_204()//Position - 0xA1B8
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1032.113f, -543.7176f, 32.31895f, -1047.358f, -515.1872f, 39.0386f, 4.09f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1032.645f, -542.8795f, 32.33058f, -1008.599f, -526.5407f, 39.62954f, 8.6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1060.342f, -555.0635f, 32.43643f, -1032.631f, -543.3942f, 39.31255f, 21.04f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_205()//Position - 0xA25E
{
	if (((((((((((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1])) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[0])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[1])) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0])) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1])) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[2])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0)) && !FIRE::IS_ENTITY_ON_FIRE(Global_86864[0])) && !FIRE::IS_ENTITY_ON_FIRE(Global_86864[1]))
	{
		return 1;
	}
	return 0;
}

void func_206()//Position - 0xA33C
{
	if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027.311f, -550.6376f, 33.12112f, -1044.723f, -514.8788f, 120.7887f, 20f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1004.805f, -530.9731f, 32.27923f, -1060.613f, -554.6837f, 120.9054f, 21.37f, 0, 1, 0)) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		if (func_205())
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1021.02f, -532.5411f, 34.98043f, -1024.51f, -525.2033f, 120.9054f, 16.13f, 0, 1, 0))
			{
				if (GlobalFunc_10618(&(Global_86864.f_44), "SOL2AUD", "SOL2_INTA_LI", 8, 0, 0, 0))
				{
					Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(-1034.413f, -545.0591f, 34.64f, 0f, 0f, 22.1f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_86864.f_358, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], Global_86864.f_358, "misssolomon_2leadinout", "idle_03_sol_2_int_rocco", 8f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], Global_86864.f_358, "misssolomon_2leadinout", "idle_03_sol_2_int_milton", 8f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], Global_86864.f_358, "misssolomon_2leadinout", "idle_03_sol_2_int_solomon", 8f, -8f, 0, 0, 1148846080, 0);
					func_207();
					iLocal_1558 = 2;
				}
			}
			else
			{
				iLocal_1558 = 3;
			}
		}
	}
}

void func_207()//Position - 0xA4ED
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
				GlobalFunc_530(uVar1, 2.5f, 2, 0.5f, 0, 1);
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











void func_218()//Position - 0xAD7F
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(212, 0) };
	fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
	if (((ENTITY::DOES_ENTITY_EXIST(Global_86864[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864[1])) && !ENTITY::IS_ENTITY_DEAD(Global_86864[0])) && !ENTITY::IS_ENTITY_DEAD(Global_86864[1]))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_86864[0], 4);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_86864[1], 1);
	}
	if (fVar3 < (75f * 75f))
	{
		if (func_205())
		{
			STREAMING::SET_HD_AREA(Var0, 50f);
			Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(-1034.413f, -545.0591f, 34.64f, 0f, 0f, 22.1f, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_86864.f_358, 1);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], Global_86864.f_358, "misssolomon_2leadinout", "idle_02_sol_2_int_rocco", 8f, -8f, 0, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], Global_86864.f_358, "misssolomon_2leadinout", "idle_02_sol_2_int_milton", 8f, -8f, 0, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], Global_86864.f_358, "misssolomon_2leadinout", "idle_02_sol_2_int_solomon", 8f, -8f, 0, 0, 1148846080, 0);
			iLocal_1558 = 1;
		}
	}
}


int func_220()//Position - 0xAEE7
{
	if (!func_205())
	{
		CAM::STOP_GAMEPLAY_HINT(1);
		return 1;
	}
	else if ((MISC::IS_BULLET_IN_BOX(-1027.135f, -550.491f, 30.06013f, -1035.072f, -534.8494f, 40.7644f, 0) || MISC::IS_PROJECTILE_IN_AREA(-1025.526f, -545.9699f, 30.06013f, -1042.389f, -538.6453f, 40.7644f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1032.861f, -543.8926f, 34.29076f, 26f))
	{
		CAM::STOP_GAMEPLAY_HINT(1);
		return 1;
	}
	return 0;
}

int func_221()//Position - 0xAF7B
{
	struct<3> Var0;
	float fVar3;
	
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
	{
		Var0 = { GlobalFunc_2247(212, 0) };
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (iLocal_1558 == 3)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			if (!GlobalFunc_111())
			{
				return 1;
			}
		}
		else if (fVar3 < (15.5f * 15.5f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1009.134f, -547.054f, 51.83326f, -1042.951f, -559.6316f, 19.5009f, 6.5f, 0, 1, 0))
		{
			if (!GlobalFunc_111())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_222()//Position - 0xB049
{
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_4588(&(Global_86864[1]));
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_8915(&(Global_86864.f_9[1]));
	GlobalFunc_8915(&(Global_86864.f_9[2]));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fugitive"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_roccopelosi"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_y_guido_01"), 0);
	GlobalFunc_4593();
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
}

void func_223()//Position - 0xB0CF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_4574(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == 2)
		{
			GlobalFunc_8916(&(Global_86864.f_9[iVar0]));
		}
		else
		{
			func_224(&(Global_86864.f_9[iVar0]));
		}
		iVar0++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fugitive"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_roccopelosi"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_y_guido_01"), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_224(var uParam0)//Position - 0xB162
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
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_4573(*uParam0);
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


void func_226()//Position - 0xB2DC
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1032.97f, -544.14f, 35.3f };
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("ig_roccopelosi"), Var0, -103.17f, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
	GlobalFunc_173(&(Global_86864.f_44), 3, Global_86864.f_9[0], "ROCCO", 0, 1);
	Var0 = { -1031.72f, -543.42f, 35.26f };
	Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("u_m_y_guido_01"), Var0, 110.43f, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[1], 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_86864.f_9[1]);
	Var0 = { -1031.94f, -544.25f, 35.29f };
	Global_86864.f_9[2] = PED::CREATE_PED(26, joaat("ig_solomon"), Var0, 40.97f, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[2], 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_86864.f_9[2]);
	GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
	Var3 = { -1041.64f, -545.08f, 34.81f };
	MISC::CLEAR_AREA(Var3, 6f, 1, 0, 0, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("fugitive"), Var3, 116.57f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_86864[0], 4);
	Var3 = { -1046.186f, -554.2908f, 33.4636f };
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), Var3, 101.5845f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_86864[1], 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fugitive"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_roccopelosi"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_y_guido_01"), 1);
	Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(-1034.413f, -545.0591f, 34.64f, 0f, 0f, 22.1f, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_86864.f_358, 1);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], Global_86864.f_358, "misssolomon_2leadinout", "idle_01_sol_2_int_rocco", 1000f, -8f, 0, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], Global_86864.f_358, "misssolomon_2leadinout", "idle_01_sol_2_int_milton", 1000f, -8f, 0, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], Global_86864.f_358, "misssolomon_2leadinout", "idle_01_sol_2_int_solomon", 1000f, -8f, 0, 0, 1148846080, 0);
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-1065.402f, -494.2596f, 60.47529f, -986.2028f, -561.6414f, 17.43359f, 0, 1, 1, 1);
	GlobalFunc_6514(60, "SOL_2_INT_ALT1", 0, -1, -1);
}



int func_229()//Position - 0xB6E7
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("ig_roccopelosi")) && STREAMING::HAS_MODEL_LOADED(joaat("u_m_y_guido_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("ig_solomon"))) && STREAMING::HAS_MODEL_LOADED(joaat("fugitive"))) && STREAMING::HAS_MODEL_LOADED(joaat("baller2"))) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_2leadinout"))
	{
		return 1;
	}
	return 0;
}

void func_230()//Position - 0xB745
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_roccopelosi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_y_guido_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_solomon"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fugitive"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller2"));
	STREAMING::REMOVE_ANIM_DICT("misssolomon_2leadinout");
}

void func_231()//Position - 0xB782
{
	STREAMING::REQUEST_MODEL(joaat("ig_roccopelosi"));
	STREAMING::REQUEST_MODEL(joaat("u_m_y_guido_01"));
	STREAMING::REQUEST_MODEL(joaat("ig_solomon"));
	STREAMING::REQUEST_MODEL(joaat("fugitive"));
	STREAMING::REQUEST_MODEL(joaat("baller2"));
	STREAMING::REQUEST_ANIM_DICT("misssolomon_2leadinout");
}

void func_232()//Position - 0xB7BF
{
	Global_86864.f_357 = 0;
	iLocal_1558 = 0;
}



int func_235()//Position - 0xB7E3
{
	if (!GlobalFunc_8371(18))
	{
		return 1;
	}
	return 0;
}








int func_243()//Position - 0xBB8D
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(210, 0) };
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




int func_247()//Position - 0xBBED
{
	return 1;
	return 1;
}








int func_255()//Position - 0xBC34
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	float fVar5;
	
	Var0 = { GlobalFunc_2247(209, 0) };
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !Global_96400)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			fVar3 = 1089f;
		}
		else
		{
			fVar3 = (7f * 7f);
		}
		fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar5 < fVar3)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(uVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					if (GlobalFunc_530(iVar4, 500f, 1, 20f, 0, 1))
					{
						return 1;
					}
				}
			}
			return 1;
		}
	}
	return 0;
}







void func_262()//Position - 0xBD18
{
	Global_86864.f_357 = 0;
}




int func_266()//Position - 0xBD41
{
	int iVar0;
	var uVar1;
	
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
	if (MISC::IS_BULLET_IN_ANGLED_AREA(-4.701051f, -1445.258f, 29.05389f, -27.65721f, -1446.865f, 39.65231f, 20f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -4.701051f, -1445.258f, 29.05389f, -27.65721f, -1446.865f, 39.65231f, 20f))
	{
		return 1;
	}
	uVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-14.23323f, -1441.486f, 30.10742f, 8.75f, 0, 23);
	if (ENTITY::DOES_ENTITY_EXIST(uVar1) || MISC::IS_AREA_OCCUPIED(Vector(30.10742f, -1441.486f, -14.23323f) - Vector(5f, 5f, 5f), Vector(30.10742f, -1441.486f, -14.23323f) + Vector(5f, 5f, 5f), 0, 1, 0, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_267()//Position - 0xBEFC
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { GlobalFunc_2247(208, GlobalFunc_8315()) };
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (75f * 75f))
		{
			if (iLocal_1531 == 0)
			{
				iLocal_1531 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.5468f, -1437.918f, 30.2015f, "v_franklins");
			}
			else if (iLocal_1530 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1531);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_1531))
				{
				}
				else
				{
					STREAMING::SET_INTERIOR_ACTIVE(iLocal_1531, 1);
					iLocal_1530 = 1;
				}
			}
		}
		else if (fVar3 > (80f * 80f))
		{
			if (iLocal_1531 != 0)
			{
				if (iLocal_1530 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1531);
					iLocal_1530 = 0;
				}
			}
		}
		if (!Global_87287)
		{
			uVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-14.23323f, -1441.486f, 30.10742f, 8.75f, 0, 7);
			if (!ENTITY::DOES_ENTITY_EXIST(uVar4) && !MISC::IS_AREA_OCCUPIED(Vector(30.10742f, -1441.486f, -14.23323f) - Vector(5f, 5f, 5f), Vector(30.10742f, -1441.486f, -14.23323f) + Vector(5f, 5f, 5f), 0, 1, 0, 0, 0, 0, 0))
			{
				if ((((GlobalFunc_8315() != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -27.72336f, -1451.52f, 28.91276f, -5.230825f, -1450.832f, 39.5481f, 30f, 0, 1, 0)) || (GlobalFunc_8315() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.701051f, -1445.258f, 29.05389f, -27.65721f, -1446.865f, 39.65231f, 20f, 0, 1, 0))) && !GlobalFunc_4600(-4.701051f, -1445.258f, 29.05389f, -27.65721f, -1446.865f, 39.65231f, 20f)) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					func_207();
					MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 100f, 0);
				}
			}
		}
		else if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("MIC_2_INT"))
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1532))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1532, joaat("v_ilev_fa_frontdoor"), -14.8689f, -1441.182f, 31.1932f, 1, 1, 0);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1529))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
				{
					Global_86864.f_28[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-14.8689f, -1441.182f, 31.1932f, 1f, joaat("v_ilev_fa_frontdoor"), 1, 0, 1);
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_RATE(uLocal_1529) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_28[1], 0);
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1532) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1532) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1532, 1f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1532, 4, 0, 1);
					}
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1529, 0.01f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1529, 1f);
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_86864.f_9[3], -14.9856f, -1446.958f, 29.6462f, 1f, 20000, 1048576000, 0, 1193033728);
						GlobalFunc_4575(&(Global_86864.f_28[2]));
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1529) >= 0.75f)
				{
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -7.118235f, -1445.559f, 29.18559f, -20.30406f, -1446.629f, 33.62251f, 8f, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -0.967271f, -1445.203f, 29.05389f, -30.5764f, -1446.576f, 44.35346f, 28f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_269()//Position - 0xC316
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_8915(&(Global_86864.f_9[1]));
	GlobalFunc_8915(&(Global_86864.f_9[2]));
	GlobalFunc_8915(&(Global_86864.f_9[3]));
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	func_51(&(Global_86864.f_28[1]));
	GlobalFunc_4575(&(Global_86864.f_28[2]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1532))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1532);
	}
	if (iLocal_1531 != 0)
	{
		if (iLocal_1530 == 1)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_1531);
			iLocal_1530 = 0;
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_270()//Position - 0xC3BC
{
	func_224(&(Global_86864.f_9[0]));
	func_224(&(Global_86864.f_9[1]));
	func_224(&(Global_86864.f_9[2]));
	func_224(&(Global_86864.f_9[3]));
	func_51(&(Global_86864.f_28[0]));
	func_51(&(Global_86864.f_28[1]));
	func_51(&(Global_86864.f_28[2]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1532))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1532);
	}
	if (iLocal_1531 != 0)
	{
		if (iLocal_1530 == 1)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_1531);
			iLocal_1530 = 0;
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_271()//Position - 0xC462
{
	if (iLocal_1531 == 0)
	{
		iLocal_1531 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.5468f, -1437.918f, 30.2015f, "v_franklins");
	}
	MISC::CLEAR_AREA(GlobalFunc_2247(170, 0), 40f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.54982f, -1452.648f, -13.21922f) - Vector(10f, 20f, 20f), Vector(30.54982f, -1452.648f, -13.21922f) + Vector(10f, 20f, 20f), 0, 1, 1, 1);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_fa_frontdoor"), Vector(31.1932f, -1441.182f, -14.8689f) + Vector(0.01f, -0.03f, 0f), 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[0], 0f, 0f, -179.5f, 2, 1);
	GlobalFunc_6808(&(Global_86864.f_9[0]), 44, -14.2667f, -1443.437f, 30.1058f, 162.9857f, 1);
	PED::SET_PED_LOD_MULTIPLIER(Global_86864.f_9[0], 2f);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("csb_denise_friend"), -15.103f, -1442.799f, 30.1058f, -108.3768f, 1, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 4, 1, 0, 0);
	PED::SET_PED_LOD_MULTIPLIER(Global_86864.f_9[1], 2f);
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	Global_86864.f_9[2] = PED::CREATE_PED(26, joaat("csb_denise_friend"), -13.5914f, -1443.029f, 30.1058f, 159.0737f, 1, 1);
	PED::SET_PED_LOD_MULTIPLIER(Global_86864.f_9[2], 2f);
	GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
	if (GlobalFunc_8315() == 2)
	{
		func_278(&(Global_86864.f_9[3]), 1, -14.6627f, -1452.039f, 29.5395f, 349.9372f, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
		Global_86864.f_28[2] = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[3], 1), 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[2], Global_86864.f_9[3], PED::GET_PED_BONE_INDEX(Global_86864.f_9[3], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		TASK::TASK_PLAY_ANIM(Global_86864.f_9[3], "cellphone@", "cellphone_text_in", 1.5f, -1.5f, -1, 2, 0, 0, 0, 0);
	}
	uLocal_1529 = PED::CREATE_SYNCHRONIZED_SCENE(Vector(31.193f, -1441.182f, -14.869f) + Vector(0.01f, -0.03f, 0f), 0f, 0f, 180f, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], uLocal_1529, "mic_2_int_alt1_leadin_door", "missmic2leadinmic_2_int", 1000f, -1000f, 0, 1148846080);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1529, "missmic2leadinmic_2_int", "mic_2_int_alt1_leadin_denise", 1000f, -1000f, 1, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], uLocal_1529, "missmic2leadinmic_2_int", "mic_2_int_alt1_leadin_f1", 1000f, -1000f, 1, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], uLocal_1529, "missmic2leadinmic_2_int", "mic_2_int_alt1_leadin_f2", 1000f, -1000f, 1, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1529, 0f);
	PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1529, 0f);
	STREAMING::REMOVE_ANIM_DICT("missmic2leadinmic_2_int");
	STREAMING::REMOVE_ANIM_DICT("cellphone@");
	GlobalFunc_7539(1);
	GlobalFunc_7052(44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("csb_denise_friend"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_fa_frontdoor"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
	GlobalFunc_6514(47, "MIC_2_INT", -1, 0, 0);
	func_272(47, "DENISE", Global_86864.f_9[0]);
	func_272(47, "Denises_Friend_1", Global_86864.f_9[1]);
	func_272(47, "Denises_Friend_2", Global_86864.f_9[2]);
}

void func_272(int iParam0, char* sParam1, var uParam2)//Position - 0xC878
{
	int iVar0;
	
	if (Global_68250 == iParam0)
	{
		if (Global_68443 < 5)
		{
			Global_68444[Global_68443 /*2*/] = GlobalFunc_4595(sParam1);
			Global_68444[Global_68443 /*2*/].f_1 = uParam2;
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






int func_278(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xCAB2
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
			GlobalFunc_8642(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_549(*uParam0);
			GlobalFunc_8021(*uParam0, 1, 0);
			GlobalFunc_8030(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_280(*uParam0, bParam8);
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


int func_280(int iParam0, bool bParam1)//Position - 0xCBCA
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_367(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7997(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_367(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_520(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 10))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 50))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 59))
			{
				func_520(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 22))
			{
				func_520(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10997(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 4))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 3))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 82))
			{
				func_520(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 76))
			{
				func_520(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 1))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10997(iParam0, 12, 12))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10997(iParam0, 3, 71))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 7))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 88))
			{
				func_520(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 17))
			{
				func_520(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_520(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}























































































void func_367(int iParam0, int iParam1)//Position - 0x26765
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
				iVar1 = func_519(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_378(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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











void func_378(int iParam0, var uParam1, bool bParam2)//Position - 0x279B5
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
			if (GlobalFunc_11151(iParam0, iVar1, &iVar2, 0))
			{
				func_520(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11150(iParam0, iVar1, &iVar2))
			{
				func_520(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_381(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_381(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_381(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x27C4C
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
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, func_475(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_381(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_381(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_381(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_381(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_381(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_381(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_381(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_381(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
				iVar6 = GlobalFunc_6739(iVar5, func_475(iParam0, 8, -1), iParam2);
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
				func_425(iParam0, iParam2, bParam11);
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
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_381(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_381(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_381(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_381(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = func_475(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_475(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_381(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_381(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
						func_381(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_381(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_382(iParam0, &uVar4))
		{
			func_381(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_381(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_381(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_381(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_381(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_382(int iParam0, var uParam1)//Position - 0x28D13
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_475(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!GlobalFunc_10998(iParam0, iVar1, iVar0))
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











































void func_425(int iParam0, int iParam1, bool bParam2)//Position - 0x2DFCE
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
	func_426(iParam0, bParam2, 0);
}

void func_426(int iParam0, bool bParam1, bool bParam2)//Position - 0x2E010
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
		bVar15 = func_446(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_443(iParam0);
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

















int func_443(int iParam0)//Position - 0x31B71
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
				iVar2 = func_475(iParam0, 11, -1);
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
				iVar4 = func_475(iParam0, 11, -1);
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



int func_446(int iParam0)//Position - 0x31D40
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
						iVar2 = func_475(iParam0, 11, -1);
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
						iVar4 = func_475(iParam0, 8, -1);
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
						iVar6 = func_475(iParam0, 11, -1);
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
						iVar8 = func_475(iParam0, 8, -1);
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





























int func_475(int iParam0, int iParam1, int iParam2)//Position - 0x3A894
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
				if (GlobalFunc_10998(iParam0, iParam1, iVar0))
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
				if (GlobalFunc_10998(iParam0, iParam1, iVar1))
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
			return GlobalFunc_7150(iParam0, iParam1);
		}
	}
	return -99;
}












































int func_519(int iParam0, int iParam1, int iParam2)//Position - 0x529B0
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
				if (GlobalFunc_10997(iParam0, iParam1, iVar0))
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
				if (GlobalFunc_10997(iParam0, iParam1, iVar1))
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
			return GlobalFunc_7150(iParam0, iParam1);
		}
	}
	return -99;
}

int func_520(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x52A51
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
									iVar3 = GlobalFunc_11243(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_520(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11243(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_520(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, func_519(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11151(iParam0, iVar10, &iVar4, 1))
							{
								func_520(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_520(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_520(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_520(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_520(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_520(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_520(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11243(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_520(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11243(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_520(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11243(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_520(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11151(iParam0, iVar10, &iVar4, 0))
		{
			func_520(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11150(iParam0, iVar10, &iVar4))
		{
			func_520(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





























void func_549(int iParam0)//Position - 0x5666A
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
		func_378(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = func_519(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = func_519(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_519(iParam0, 4, -1);
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
				iVar1 = func_519(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_378(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}










int func_559()//Position - 0x5714C
{
	if ((((((STREAMING::HAS_ANIM_DICT_LOADED("missmic2leadinmic_2_int") && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@")) && GlobalFunc_7214(1)) && GlobalFunc_7048(44)) && STREAMING::HAS_MODEL_LOADED(joaat("csb_denise_friend"))) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_fa_frontdoor"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing")))
	{
		return 1;
	}
	return 0;
}



void func_562()//Position - 0x57203
{
	STREAMING::REMOVE_ANIM_DICT("missmic2leadinmic_2_int");
	STREAMING::REMOVE_ANIM_DICT("cellphone@");
	GlobalFunc_7539(1);
	GlobalFunc_7052(44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("csb_denise_friend"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_fa_frontdoor"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1532))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1532);
	}
}

void func_563()//Position - 0x57252
{
	STREAMING::REQUEST_ANIM_DICT("missmic2leadinmic_2_int");
	STREAMING::REQUEST_ANIM_DICT("cellphone@");
	GlobalFunc_7215(1);
	GlobalFunc_7049(44);
	STREAMING::REQUEST_MODEL(joaat("csb_denise_friend"));
	STREAMING::REQUEST_MODEL(joaat("v_ilev_fa_frontdoor"));
	STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
}



void func_566()//Position - 0x572DB
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}


void func_568()//Position - 0x57300
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 9.206559f, 530.0972f, 175.3782f, 4f, 3.75f, 1.75f, 0, 1, 0))
	{
		GlobalFunc_2536(1, 0);
	}
}



int func_571()//Position - 0x57348
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(202, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (2.5f * 2.5f))
		{
			GlobalFunc_2536(1, 0);
			return 1;
		}
	}
	return 0;
}



void func_574()//Position - 0x573AE
{
	GlobalFunc_6514(42, "FRA_2_INT", -1, 0, -1);
}







bool func_581()//Position - 0x573F5
{
	return !GlobalFunc_485(34);
}



int func_584()//Position - 0x5743A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = GlobalFunc_8315();
		bVar1 = false;
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(120.7764f, -1292.886f, 28.2815f, "v_strip3");
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar2)
		{
			bVar1 = true;
		}
		if (GlobalFunc_740(CLOCK::GET_CLOCK_HOURS(), Global_81155[85 /*34*/].f_13, Global_81155[85 /*34*/].f_14))
		{
			if (bVar1)
			{
				if (!Global_87283)
				{
					Global_87283 = 1;
				}
			}
			if (GlobalFunc_42(iVar0))
			{
				switch (iVar0)
				{
					case 0:
					case 1:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 113.9529f, -1293.915f, 28.27027f, 115.7906f, -1297.234f, 31.51914f, 2.75f, 0, 1, 0))
						{
							return 1;
						}
						break;
					
					case 2:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 117.4607f, -1293.652f, 28.28254f, 118.7768f, -1295.871f, 31.51958f, 2.75f, 0, 1, 0))
						{
							return 1;
						}
						break;
					}
			}
		}
		else if (bVar1)
		{
			return 1;
		}
		else if (Global_87283)
		{
			Global_87283 = 0;
		}
	}
	return 0;
}



void func_587()//Position - 0x57590
{
	GlobalFunc_4491(4);
	GlobalFunc_6514(85, "BS_2B_MCS_3", 14, 12, 15);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 1, 0, 1);
}


int func_589()//Position - 0x575CA
{
	if (GlobalFunc_2288(4))
	{
		return 1;
	}
	return 0;
}


void func_591()//Position - 0x575F1
{
	GlobalFunc_2287(4, 0);
}


void func_593()//Position - 0x5763E
{
	GlobalFunc_2287(4, 1);
}






int func_599()//Position - 0x57676
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(120.7764f, -1292.886f, 28.2815f, "v_strip3");
	}
	return 0;
}



void func_602()//Position - 0x576DF
{
	int iVar0;
	int iVar1;
	
	GlobalFunc_4491(4);
	GlobalFunc_6514(84, "BS_2A_MCS_10", 30, 28, 0);
	iVar0 = GlobalFunc_5133(4, 4);
	iVar1 = GlobalFunc_5133(4, 0);
	GlobalFunc_6516(84, "HACKER_SELECTION", 0, Global_86242[iVar0 /*5*/].f_2, 0);
	GlobalFunc_6516(84, "HACKER_SELECTION", 2, Global_86242[iVar0 /*5*/].f_3, 0);
	if (iVar0 == 6 || iVar0 == 7)
	{
		GlobalFunc_6516(84, "HACKER_SELECTION", 5, 0, 0);
	}
	else
	{
		GlobalFunc_6516(84, "HACKER_SELECTION", 5, 2, 0);
	}
	GlobalFunc_6516(84, "HACKER_SELECTION", 3, Global_86242[iVar0 /*5*/].f_3, 0);
	GlobalFunc_6516(84, "HACKER_SELECTION", 4, Global_86242[iVar0 /*5*/].f_3, 0);
	GlobalFunc_6516(84, "HACKER_SELECTION", 8, 0, 0);
	GlobalFunc_6516(84, "gunman_selection_1", 0, Global_86242[iVar1 /*5*/].f_2, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 1, 0, 1);
}





int func_607()//Position - 0x5790D
{
	if (GlobalFunc_2288(4))
	{
		return 1;
	}
	return 0;
}

void func_608()//Position - 0x57922
{
	GlobalFunc_2287(4, 0);
}

void func_609()//Position - 0x57930
{
	GlobalFunc_2287(4, 1);
}





int func_614()//Position - 0x5795F
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 99.79075f, -1293.35f, 27.74953f, 103.5078f, -1299.958f, 31.01879f, 2.375f, 0, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_615()//Position - 0x579F5
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = GlobalFunc_8315();
	if (GlobalFunc_42(iVar0))
	{
		switch (iVar0)
		{
			case 0:
			case 1:
				Var2 = { GlobalFunc_2247(240, GlobalFunc_8315()) };
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var2) < (2.5f * 2.5f))
					{
						iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar1))
							{
								GlobalFunc_8032(24, -23.9f, -1437.3f, 31.2f, 0f);
								ENTITY::SET_ENTITY_COORDS(iVar1, -23.9f, -1437.3f, 31.2f, 1, 0, 0, 1);
							}
						}
						return 1;
					}
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 99.67842f, -1295.231f, 27.51531f, 101.8105f, -1294.029f, 30.76875f, 5f, 0, 1, 0))
				{
					iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar1))
						{
							GlobalFunc_8032(24, 138.5988f, -1274.976f, 28.298f, 292.4026f);
							ENTITY::SET_ENTITY_COORDS(iVar1, 138.5988f, -1274.976f, 28.298f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar1, 292.4026f);
						}
					}
					return 1;
				}
				break;
			}
	}
	return 0;
}






void func_621()//Position - 0x59584
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4593();
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 0, 0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_622()//Position - 0x595B3
{
	func_224(&(Global_86864.f_9[0]));
	GlobalFunc_4593();
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 0, 0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_623()//Position - 0x595E2
{
	var uVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_6808(&(Global_86864.f_9[0]), 12, 99.266f, -1294.164f, 28.265f, 217.5577f, 1);
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
		PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 1, 0, 0, false);
		Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 99.8142f, -1293.774f, 28.2679f, 1, 1, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(99.266f, -1294.164f, 28.265f, 0f, 0f, -43f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uVar0, "MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT", "LESTER_BASE_IDLE", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar0, 1);
	}
	GlobalFunc_4491(4);
	GlobalFunc_6514(77, "BS_2A_2B_INT", 4, 6, 0);
	GlobalFunc_6515(77, "LESTER", 1, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 1, 0, 1);
}


int func_625()//Position - 0x597A8
{
	if (GlobalFunc_8315() == 2)
	{
		if ((!GlobalFunc_7048(12) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT"))
		{
			return 0;
		}
	}
	if (!GlobalFunc_2288(4))
	{
		return 0;
	}
	return 1;
}

void func_626()//Position - 0x597F4
{
	if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_7052(12);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
		STREAMING::REMOVE_ANIM_DICT("MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT");
	}
	GlobalFunc_2287(4, 0);
}

void func_627()//Position - 0x59822
{
	if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_7049(12);
		STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
		STREAMING::REQUEST_ANIM_DICT("MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT");
	}
	GlobalFunc_2287(4, 1);
}




int func_631()//Position - 0x59868
{
	return GlobalFunc_485(35);
}

int func_632()//Position - 0x59876
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
	{
		if (((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 50f, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[1], 1), 50f, 1)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 50f)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[1], 1), 50f))
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

int func_633()//Position - 0x59923
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(239, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[83 /*34*/].f_11, GlobalFunc_8315()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (250f * 250f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_634()//Position - 0x59980
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_8915(&(Global_86864.f_9[1]));
}

void func_635()//Position - 0x599AD
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	func_224(&(Global_86864.f_9[0]));
	func_224(&(Global_86864.f_9[1]));
}

void func_636()//Position - 0x599DA
{
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(2595.124f, 2807.558f, 30.7274f, 2649.778f, 2988.829f, 53.4642f, 0, 1, 1, 1);
	PED::SET_PED_NON_CREATION_AREA(2595.124f, 2807.558f, 30.7274f, 2649.778f, 2988.829f, 53.4642f);
	MISC::CLEAR_AREA_OF_PEDS(2627.966f, 2941.1f, 39.4282f, 30f, 0);
	Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 2628.908f, 2947.625f, 40.428f, 338.9562f, 1, 1);
	Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 2632.814f, 2933.482f, 43.7436f, 53.5715f, 1, 1);
}

int func_637()//Position - 0x59A9D
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01")))
	{
		return 1;
	}
	return 0;
}

void func_638()//Position - 0x59AB6
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
}

void func_639()//Position - 0x59AC7
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
}


void func_641()//Position - 0x59AE0
{
	int iVar0;
	
	if (GlobalFunc_485(30) && Global_34913 == 15)
	{
		if (Global_87285 == -15)
		{
			Global_87285 = GlobalFunc_7719();
			if (Global_87284)
			{
				GlobalFunc_8385(&Global_87285, 0, 30, 2, 0, 0, 0);
			}
			else
			{
				GlobalFunc_8385(&Global_87285, 0, 30, 7, 0, 0, 0);
			}
		}
		else if (GlobalFunc_8448(Global_87285))
		{
			GlobalFunc_6677("AM_H_GAUNT_R", 0, 0, -1, 10000, 7, 0, 0, 0);
			Global_87285 = -15;
			Global_87284 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_67138.f_577)
		{
			func_654();
			if (!GlobalFunc_487())
			{
				if ((Global_68508 != 80 && Global_68508 != 81) && Global_68508 != 82)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!iLocal_1264)
						{
							iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("gauntlet")))
								{
									if (func_649())
									{
										switch (GlobalFunc_4571())
										{
											case 80:
												if (!GlobalFunc_230(80))
												{
													iLocal_1259[0] = 1;
												}
												break;
											
											case 81:
												if (GlobalFunc_230(80) && !GlobalFunc_230(81))
												{
													iLocal_1259[1] = 1;
												}
												break;
											
											case 82:
												if ((GlobalFunc_230(80) && GlobalFunc_230(81)) && !GlobalFunc_230(82))
												{
													iLocal_1259[2] = 1;
												}
												break;
										}
									}
									else
									{
										iLocal_1264 = 1;
									}
								}
							}
						}
					}
					else if (iLocal_1264)
					{
						iLocal_1264 = 0;
					}
				}
			}
			if (Global_86864.f_359 != -1)
			{
				if ((MISC::GET_GAME_TIMER() - Global_86864.f_359) > 30)
				{
					func_642();
					Global_86864.f_359 = -1;
				}
			}
			else
			{
				Global_86864.f_359 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_642()//Position - 0x59CBB
{
	int iVar0;
	
	if (!Global_86864.f_357)
	{
		iVar0 = 80;
		while (iVar0 <= 82)
		{
			if (!GlobalFunc_485(func_648(iVar0)) && GlobalFunc_230(iVar0))
			{
				if (func_647(iVar0, 1))
				{
					func_672();
					if (func_670())
					{
						func_644(iVar0);
						iLocal_1265 = iVar0;
						Global_86864.f_357 = 1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (!func_647(iLocal_1265, 0))
	{
		GlobalFunc_4574(&(Global_86864[func_643(iLocal_1265)]));
		func_671();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 0);
		Global_86864.f_357 = 0;
	}
}

int func_643(int iParam0)//Position - 0x59D59
{
	switch (iParam0)
	{
		case 80:
			return 0;
			break;
		
		case 81:
			return 1;
			break;
		
		case 82:
			return 2;
			break;
	}
	return 0;
}

void func_644(int iParam0)//Position - 0x59D90
{
	struct<3> Var0;
	int iVar3;
	
	switch (iParam0)
	{
		case 80:
			Var0 = { -311.1739f, -771.6993f, 52.2467f };
			func_645(Var0, 182.106f, iParam0, 13);
			break;
		
		case 81:
			Var0 = { -657.8753f, -272.2921f, 34.7628f };
			func_645(Var0, 30.6575f, iParam0, 4);
			break;
		
		case 82:
			Var0 = { 307.123f, -1084.801f, 28.3597f };
			func_645(Var0, 299.7018f, iParam0, 0);
			break;
	}
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		iLocal_1259[iVar3] = 0;
		iVar3++;
	}
}

void func_645(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x59E3E
{
	MISC::CLEAR_AREA(Param0, 12f, 1, 0, 0, 0);
	while (!ENTITY::DOES_ENTITY_EXIST(Global_86864[func_643(iParam4)]))
	{
		Global_86864[func_643(iParam4)] = VEHICLE::CREATE_VEHICLE(joaat("gauntlet"), Param0, fParam3, 1, 1);
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_86864[func_643(iParam4)]))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_86864[func_643(iParam4)], iParam5);
		if (!DECORATOR::DECOR_EXIST_ON(Global_86864[func_643(iParam4)], "MapGauntlet"))
		{
			DECORATOR::DECOR_SET_INT(Global_86864[func_643(iParam4)], "MapGauntlet", iParam4);
		}
		func_646(Global_86864[func_643(iParam4)]);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) <= (2.5f * 2.5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864[func_643(iParam4)]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_86864[func_643(iParam4)], -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	iLocal_1265 = iParam4;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 1);
}

int func_646(int iParam0)//Position - 0x59F75
{
	if (!DECORATOR::DECOR_EXIST_ON(uParam0, "IgnoredByQuickSave"))
	{
		if (DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1))
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

int func_647(int iParam0, bool bParam1)//Position - 0x59FA7
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	switch (iParam0)
	{
		case 80:
			Var0 = { GlobalFunc_2247(236, 0) };
			break;
		
		case 81:
			Var0 = { GlobalFunc_2247(237, 0) };
			break;
		
		case 82:
			Var0 = { GlobalFunc_2247(238, 0) };
			break;
	}
	fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
	fVar4 = 150f;
	if (!bParam1)
	{
		fVar4 = 160f;
	}
	if (fVar3 <= (fVar4 * fVar4))
	{
		return 1;
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x5A029
{
	switch (iParam0)
	{
		case 80:
			return 31;
			break;
		
		case 81:
			return 32;
			break;
		
		case 82:
			return 33;
			break;
	}
	return -1;
}

int func_649()//Position - 0x5A063
{
	iLocal_1263 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*29*/].f_17;
	if (GlobalFunc_2033(iLocal_1263) >= 11000)
	{
		if (!func_653())
		{
			return 1;
		}
		else
		{
			GlobalFunc_1479("AM_H_FHPCREP", func_651(1), 10000);
			return 0;
		}
	}
	else if (!iLocal_1264)
	{
		GlobalFunc_1479("AM_H_FHPCCASH", func_651(0), 10000);
		iLocal_1264 = 1;
	}
	return 0;
}


var func_651(bool bParam0)//Position - 0x5A0EF
{
	var uVar0;
	
	if (bParam0)
	{
		uVar0 = MISC::ABSI((GlobalFunc_2033(iLocal_1263) - (11000 + GlobalFunc_1303(Global_86864[func_643(GlobalFunc_4571())]))));
	}
	else
	{
		uVar0 = MISC::ABSI((GlobalFunc_2033(iLocal_1263) - 11000));
	}
	return uVar0;
}


int func_653()//Position - 0x5A401
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[func_643(GlobalFunc_4571())]))
	{
		iLocal_1263 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*29*/].f_17;
		if ((GlobalFunc_2033(iLocal_1263) - GlobalFunc_1303(Global_86864[func_643(GlobalFunc_4571())])) < 11000)
		{
			return 1;
		}
	}
	return 0;
}

void func_654()//Position - 0x5A459
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -442.3102f, -2178.718f, 9.3993f) > 10000f)
	{
		iVar0 = 1616809629;
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0);
		}
		iVar0 = -1380475172;
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0);
		}
	}
	else
	{
		Var1 = { -442.5602f, -2184.605f, 14.55648f };
		Var4 = { -442.668f, -2172.496f, 9.39933f };
		fVar7 = 13.47f;
		iVar0 = 1616809629;
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("prop_com_gar_door_01"), -440.0606f, -2171.827f, 11.3672f, 1, 1, 0);
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var4, fVar7, 0, 1, 0))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, 1, 1);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, 1, 1);
		}
		iVar0 = -1380475172;
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("prop_com_gar_door_01"), -445.3054f, -2171.827f, 11.3672f, 1, 1, 0);
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var4, fVar7, 0, 1, 0))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, 1, 1);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, 1, 1);
		}
	}
}


void func_656()//Position - 0x5A5B2
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_67138.f_577)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!iLocal_1264)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864[func_643(GlobalFunc_4571())]) && !ENTITY::IS_ENTITY_DEAD(Global_86864[func_643(GlobalFunc_4571())]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_86864[func_643(GlobalFunc_4571())], 0))
						{
							if (func_649())
							{
								iLocal_1264 = 1;
								iLocal_1259[func_643(GlobalFunc_4571())] = 1;
								return;
							}
							else
							{
								iLocal_1264 = 1;
							}
						}
						else
						{
							iLocal_1264 = 0;
						}
					}
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("gauntlet")))
						{
							if (func_649())
							{
								iLocal_1264 = 1;
								iLocal_1259[func_643(GlobalFunc_4571())] = 1;
							}
							else
							{
								iLocal_1264 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1264 = 0;
			}
		}
	}
}



int func_659()//Position - 0x5A6BC
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1259[func_643(GlobalFunc_4571())] && !Global_67138.f_577)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[func_643(iLocal_1265)]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_86864[func_643(iLocal_1265)], 1))
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_86864[func_643(iLocal_1265)], "MapGauntlet"))
					{
						if (iLocal_1265 == 80)
						{
							GlobalFunc_585(31, 1);
							Global_87284 = 0;
						}
						else if (iLocal_1265 == 81)
						{
							GlobalFunc_585(32, 1);
							Global_87284 = 0;
						}
						else if (iLocal_1265 == 82)
						{
							GlobalFunc_585(33, 1);
							Global_87284 = 0;
						}
					}
				}
			}
			GlobalFunc_5207("AM_H_GAUNT_R", 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 1);
			return 1;
		}
	}
	return 0;
}






void func_665()//Position - 0x5AA3D
{
	int iVar0;
	
	if ((!iLocal_1259[0] && !iLocal_1259[1]) && !iLocal_1259[2])
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 0);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_1259[iVar0] = 0;
		iVar0++;
	}
	GlobalFunc_4588(&(Global_86864[func_643(GlobalFunc_4571())]));
}

void func_666()//Position - 0x5AA9D
{
	int iVar0;
	
	if ((!iLocal_1259[0] && !iLocal_1259[1]) && !iLocal_1259[2])
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 0);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_1259[iVar0] = 0;
		iVar0++;
	}
	GlobalFunc_4574(&(Global_86864[func_643(GlobalFunc_4571())]));
}

void func_667()//Position - 0x5AAFD
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iVar0, "MapGauntlet"))
		{
			func_668();
			func_644(GlobalFunc_4571());
		}
		else if (DECORATOR::DECOR_GET_INT(iVar0, "MapGauntlet") != GlobalFunc_4571())
		{
			func_668();
			func_644(GlobalFunc_4571());
		}
		else
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1));
			if (fVar1 > (150f * 150f))
			{
				func_668();
				func_644(GlobalFunc_4571());
			}
		}
	}
	else
	{
		func_668();
		func_644(GlobalFunc_4571());
	}
}

void func_668()//Position - 0x5ABA4
{
	struct<3> Var0;
	
	if (GlobalFunc_4571() == 81)
	{
		Var0 = { -653.4072f, -280.5184f, 34.5603f };
		func_669(Var0);
		Var0 = { -662.522f, -265.6498f, 34.9485f };
		func_669(Var0);
	}
}

void func_669(struct<3> Param0)//Position - 0x5ABEB
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Param0, 2.51f, joaat("gauntlet"), 4);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
		VEHICLE::DELETE_VEHICLE(&iVar0);
	}
}

int func_670()//Position - 0x5AC2B
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("gauntlet")))
	{
		return 1;
	}
	return 0;
}

void func_671()//Position - 0x5AC44
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gauntlet"));
}

void func_672()//Position - 0x5AC55
{
	STREAMING::REQUEST_MODEL(joaat("gauntlet"));
}

void func_673()//Position - 0x5AC66
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar0++;
	}
	Global_86864.f_359 = -1;
	iLocal_1264 = 0;
}


void func_675()//Position - 0x5AC94
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 1);
		}
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[6]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[6]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_86864.f_9[6], -1680762137) != 1)
					{
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(861.3f, -1565f, 29.4f, 5f, 1))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Global_86864.f_9[6], 861.3f, -1565f, 29.4f, 5f, 0);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[7]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[7]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_86864.f_9[7], -1680762137) != 1)
					{
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, 1))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Global_86864.f_9[7], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
						}
					}
				}
			}
		}
	}
	if (iLocal_1247[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 5f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
					iLocal_1247[0] = 1;
				}
			}
		}
	}
	if (iLocal_1247[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 5f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
					iLocal_1247[1] = 1;
				}
			}
		}
	}
	if (iLocal_1247[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[2]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 5f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
					iLocal_1247[2] = 1;
				}
			}
		}
	}
	if (iLocal_1247[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[3]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 5f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
					iLocal_1247[3] = 1;
				}
			}
		}
	}
	if (iLocal_1247[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[4]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 5f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
					iLocal_1247[4] = 1;
				}
			}
		}
	}
	if (iLocal_1247[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[5]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[5]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 5f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
					iLocal_1247[5] = 1;
				}
			}
		}
	}
	if (iLocal_1247[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[8]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[8]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 5f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[8], 889.285f, -1561.485f, 29.6539f, 5f, 0);
					iLocal_1247[6] = 1;
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Global_86864[3] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	if (iLocal_1245 == 0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				iLocal_1245 = 1;
			}
			else
			{
				iLocal_1245 = 1;
			}
		}
	}
}


int func_677()//Position - 0x5B108
{
	return GlobalFunc_485(35);
}

int func_678()//Position - 0x5B116
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0))
		{
			iLocal_1246 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[2], 0))
		{
			iLocal_1246 = 1;
		}
	}
	if (iLocal_1246 == 1)
	{
		GlobalFunc_4935();
		HUD::CLEAR_PRINTS();
		GlobalFunc_159("HELP_2", -1);
		return 1;
	}
	return 0;
}



int func_681()//Position - 0x5B1A7
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[2], 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Global_86864[2], 1) };
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 1) < 90f)
			{
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1255);
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1256);
				return 1;
			}
		}
		else
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 1) < 65f)
			{
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1255);
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1256);
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[6]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[6]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[6], 1) < 10f)
					{
						return 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[7]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[7]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[7], 1) < 10f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


void func_683()//Position - 0x5B32D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_4588(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 0);
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1255);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1256);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1257, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1258, 0);
}

void func_684()//Position - 0x5B3B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_4574(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		func_224(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1255);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1256);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1257, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1258, 0);
}

void func_685()//Position - 0x5B419
{
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedGroup", &iLocal_1255);
	PED::ADD_RELATIONSHIP_GROUP("GuardGroup", &iLocal_1256);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1256, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1255, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1256, iLocal_1255);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1255, iLocal_1256);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1256, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1256);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1255, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1255);
	MISC::CLEAR_AREA(897.3f, -1556.1f, 30.4f, 40f, 1, 0, 0, 0);
	uLocal_1257 = PED::ADD_SCENARIO_BLOCKING_AREA(851.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_1258 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
	{
		MISC::CLEAR_AREA(919.5082f, -1546.935f, 29.7786f, 5f, 1, 0, 0, 0);
		Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
	{
		MISC::CLEAR_AREA(918.2448f, -1551.258f, 29.782f, 5f, 1, 0, 0, 0);
		Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
	}
	if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Global_86864[2]))
	{
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Global_86864[2], Global_86864[1], 0.5f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		MISC::CLEAR_AREA(912.34f, -1543.297f, 29.6469f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[0], iLocal_1255);
		GlobalFunc_3040(Global_86864.f_9[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		MISC::CLEAR_AREA(917.5028f, -1517.401f, 29.9673f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[1], iLocal_1255);
		GlobalFunc_3040(Global_86864.f_9[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[1], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
	{
		MISC::CLEAR_AREA(869.6423f, -1541.423f, 29.2516f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[2], iLocal_1255);
		GlobalFunc_3040(Global_86864.f_9[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[2], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
	{
		MISC::CLEAR_AREA(884.3046f, -1573.188f, 29.8247f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[3], iLocal_1255);
		GlobalFunc_3040(Global_86864.f_9[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[3], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
	{
		MISC::CLEAR_AREA(903.8805f, -1575.02f, 29.8327f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[4], iLocal_1255);
		GlobalFunc_3040(Global_86864.f_9[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[4], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[5]))
	{
		MISC::CLEAR_AREA(906.2186f, -1575.108f, 29.8125f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[5] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[5], iLocal_1255);
		GlobalFunc_3040(Global_86864.f_9[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[5], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[8]))
	{
		MISC::CLEAR_AREA(889.285f, -1561.485f, 29.6539f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[8] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[8], iLocal_1255);
		GlobalFunc_3040(Global_86864.f_9[8], 20f, 5f, 120f, -45f, 45f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[8], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[6]))
	{
		MISC::CLEAR_AREA(863.1551f, -1564.572f, 29.3231f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[6] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[6], iLocal_1256);
		GlobalFunc_3040(Global_86864.f_9[6], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[6], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[7]))
	{
		MISC::CLEAR_AREA(940.2881f, -1573.877f, 29.3866f, 2f, 1, 0, 0, 0);
		Global_86864.f_9[7] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[7], iLocal_1256);
		GlobalFunc_3040(Global_86864.f_9[7], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[7], 1);
	}
}


int func_687()//Position - 0x5BB59
{
	if ((((HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2"))) && STREAMING::HAS_MODEL_LOADED(joaat("packer"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
	{
		return 1;
	}
	return 0;
}

void func_688()//Position - 0x5BBA6
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
}

void func_689()//Position - 0x5BBD8
{
	HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("packer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
}

void func_690()//Position - 0x5BC0E
{
	iLocal_1246 = 0;
	iLocal_1245 = 0;
	iLocal_1247[0] = 0;
	iLocal_1247[1] = 0;
	iLocal_1247[2] = 0;
	iLocal_1247[3] = 0;
	iLocal_1247[4] = 0;
	iLocal_1247[5] = 0;
	iLocal_1247[6] = 0;
}




int func_694()//Position - 0x5BC68
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_695()//Position - 0x5BC93
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 331.3899f, -1569.874f, 60f, 434.0138f, -1659.102f, 28.1882f, 90f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
			{
				GlobalFunc_6783(Global_86864[0], 0, 0);
			}
			return 1;
		}
	}
	return 0;
}



void func_698()//Position - 0x5BDB0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_4588(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
}

void func_699()//Position - 0x5BE01
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_4574(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_224(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
}

void func_700()//Position - 0x5BE52
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_702();
	Var0 = { 372.9868f, -1623.531f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 8f, 1, 0, 0, 0);
	while (!ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("policet"), Var0, 321.7075f, 1, 1);
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(351.0698f, -1594.332f, 28.2928f, 10f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(368.356f, -1609.626f, 28.2928f, 10f, 1, 0, 0, 0);
	Var3 = { 353.1191f, -1589.606f, 28.2928f };
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(402.9022f, -1633.604f, 25.0472f, 315.6288f, -1558.814f, 38.7931f, 0, 1, 1, 1);
	Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("s_m_y_cop_01"), Var3, 270.0968f, 1, 1);
	TASK::TASK_START_SCENARIO_AT_POSITION(Global_86864.f_9[0], "WORLD_HUMAN_HANG_OUT_STREET", Var3, 270.0968f, 0, 0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 0);
	PED::SET_PED_NAME_DEBUG(Global_86864.f_9[0], "COP 1");
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_86864.f_9[0], 2);
	Var3 = { 354.557f, -1590.549f, 28.2928f };
	Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("s_m_y_cop_01"), Var3, 16.3702f, 1, 1);
	TASK::TASK_START_SCENARIO_AT_POSITION(Global_86864.f_9[1], "WORLD_HUMAN_STAND_MOBILE", Var3, 3.8862f, 0, 0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[1], 0);
	PED::SET_PED_NAME_DEBUG(Global_86864.f_9[1], "COP 2");
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_86864.f_9[1], 2);
	Var3 = { 369.8186f, -1611.029f, 28.2928f };
	Global_86864.f_9[2] = PED::CREATE_PED(26, joaat("s_m_y_cop_01"), Var3, 9.0837f, 1, 1);
	TASK::TASK_USE_MOBILE_PHONE(Global_86864.f_9[2], 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[2], 0);
	PED::SET_PED_NAME_DEBUG(Global_86864.f_9[2], "COP 3");
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_86864.f_9[2], 2);
	func_701();
	Var0 = { 400.5771f, -1618.927f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 6f, 1, 0, 0, 0);
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Var0, 48.8115f, 1, 1);
	Var0 = { 396.6843f, -1623.222f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 6f, 1, 0, 0, 0);
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Var0, 231.3392f, 1, 1);
	Var0 = { 394.3527f, -1625.337f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 6f, 1, 0, 0, 0);
	Global_86864[3] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Var0, 49.3732f, 1, 1);
}

void func_701()//Position - 0x5C139
{
	if (((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1])) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0])) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
	{
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 9, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 9, 2, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 10, 0, 1, 0);
	}
}

void func_702()//Position - 0x5C25B
{
	iLocal_1244 = -1469527606;
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1244, joaat("prop_fnclink_03gate5"), 391.86f, -1636.07f, 29.97f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1244, 4, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[13 /*31*/], 4, 1, 0);
}

int func_703()//Position - 0x5C2A1
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("policet"))) && AUDIO::PREPARE_MUSIC_EVENT("FHPRA_START"))
	{
		return 1;
	}
	return 0;
}

void func_704()//Position - 0x5C2E4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policet"));
}

void func_705()//Position - 0x5C307
{
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("policet"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
}



void func_708()//Position - 0x5C33A
{
	if ((GlobalFunc_234(PLAYER::PLAYER_PED_ID()) && GlobalFunc_234(Global_86864.f_9[0])) && GlobalFunc_234(Global_86864.f_28[0]))
	{
		if (!MISC::IS_BIT_SET(iLocal_1211, 0))
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1275.72f, -1719.97f, 54.97f, 1) < 5f)
			{
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "UNLOCK_DOOR", 1275.72f, -1719.97f, 54.97f, "LESTER1A_SOUNDS", 0, 0, 0);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 0, 1);
				MISC::SET_BIT(&iLocal_1211, 0);
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1275.72f, -1719.97f, 54.97f) < (50f * 50f))
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (!MISC::IS_BIT_SET(iLocal_1211, 1))
		{
			if (GlobalFunc_7259(&Local_1227) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			{
				GlobalFunc_2571(0);
				GlobalFunc_10686(75, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, 0f, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, 1, 1);
				MISC::SET_BIT(&iLocal_1211, 1);
			}
		}
		else
		{
			GlobalFunc_2536(1, 0);
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (GlobalFunc_7259(&Local_1235))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			if (!MISC::IS_BIT_SET(iLocal_1211, 2))
			{
				iLocal_1212 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1213, Local_1216, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1212, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], iLocal_1212, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080);
				MISC::SET_BIT(&iLocal_1211, 2);
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1212))
			{
				if (!MISC::IS_BIT_SET(iLocal_1211, 3))
				{
					if (GlobalFunc_10618(&(Global_86864.f_44), "FINC1AU", "FINC1_INTLI", 9, 0, 0, 0))
					{
						MISC::SET_BIT(&iLocal_1211, 3);
						if (GlobalFunc_234(Global_86864.f_9[0]) && GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2048, 4);
						}
						GlobalFunc_8641(&uLocal_1208);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_1211, 4))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1212) >= 0.99f)
					{
						iLocal_1212 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1213, Local_1216, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1212, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1212, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP2_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], iLocal_1212, "_LEADIN_LOOP2_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080);
						MISC::SET_BIT(&iLocal_1211, 4);
					}
				}
			}
		}
	}
}




















int func_728()//Position - 0x60633
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			if (PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_1219, Local_1219.f_3, Local_1219.f_6, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_1227, Local_1227.f_3, Local_1227.f_6))
	{
		return 1;
	}
	return 0;
}

int func_729()//Position - 0x606C1
{
	if (MISC::IS_BIT_SET(iLocal_1211, 3))
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (GlobalFunc_234(Global_86864.f_9[0]))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOV(50f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1243);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.3f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			}
		}
		else
		{
			CAM::_0xCCD078C2665D2973(1);
		}
		if (!GlobalFunc_111() && GlobalFunc_5425(&uLocal_1208) > 2.1f)
		{
			return 1;
		}
	}
	return 0;
}


void func_731()//Position - 0x60791
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	GlobalFunc_4593();
	GlobalFunc_689();
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	GlobalFunc_200(&(Global_86864.f_44), 0);
	GlobalFunc_200(&(Global_86864.f_44), 1);
	GlobalFunc_10686(75, 0);
	GlobalFunc_5661(6, 1);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 1, 1);
}



void func_734()//Position - 0x6084C
{
	var uVar0;
	char* sVar1;
	
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	GlobalFunc_4593();
	GlobalFunc_689();
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	CAM::STOP_GAMEPLAY_HINT(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
	{
		PED::SET_PED_KEEP_TASK(Global_86864.f_9[0], 1);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_8267(Global_86864.f_9[0]);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_86864.f_9[0], &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Global_86864.f_9[0], 1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Global_86864.f_9[0]))
					{
						ENTITY::DETACH_ENTITY(Global_86864.f_9[0], 1, 1);
					}
					ENTITY::SET_ENTITY_COLLISION(Global_86864.f_9[0], 1, 0);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(Global_86864.f_9[0]);
				ENTITY::SET_ENTITY_HAS_GRAVITY(Global_86864.f_9[0], 1);
				ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[0], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_86864.f_9[0]));
			}
		}
	}
	func_51(&(Global_86864.f_28[0]));
	GlobalFunc_200(&(Global_86864.f_44), 0);
	GlobalFunc_200(&(Global_86864.f_44), 1);
	GlobalFunc_10686(75, 0);
}

void func_735()//Position - 0x60990
{
	GlobalFunc_6514(26, "FIN_C_INT", -1, 0, -1);
	Local_1219 = { GlobalFunc_3023(1273.325f, -1709.458f, 53.77147f, 1274.835f, -1712.467f, 56.27147f, 5.5f) };
	Local_1227 = { GlobalFunc_3023(1274.518f, -1718.665f, 53.77147f, 1272.736f, -1707.608f, 55.77311f, 6.5f) };
	Local_1235 = { GlobalFunc_3023(1271.854f, -1712.835f, 53.77147f, 1276.384f, -1710.632f, 56.88854f, 3.2f) };
	PED::ADD_RELATIONSHIP_GROUP("TS_FINC1", &(Global_86864.f_42));
	Global_86864.f_9[0] = PED::CREATE_PED(26, GlobalFunc_4946(12), Local_1213, 338.0729f, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 1, 0, 0, false);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), Local_1213, 1, 1, 0);
	iLocal_1212 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1213, Local_1216, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1212, 1);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1212, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], iLocal_1212, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080);
	GlobalFunc_173(&(Global_86864.f_44), 0, Global_86864.f_9[0], "LESTER", 0, 1);
	GlobalFunc_173(&(Global_86864.f_44), 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_10686(75, 0);
}


int func_737()//Position - 0x60B79
{
	if (((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(12)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_wheelchair_01_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("missfinale_c2leadinoutfin_c_int")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false))
	{
		return 1;
	}
	return 0;
}

void func_738()//Position - 0x60BBE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wheelchair_01_s"));
	STREAMING::REMOVE_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
	GlobalFunc_200(&(Global_86864.f_44), 0);
	GlobalFunc_200(&(Global_86864.f_44), 1);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	GlobalFunc_10686(75, 0);
}

void func_739()//Position - 0x60C03
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(12));
	STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
	STREAMING::REQUEST_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false);
	GlobalFunc_7934(6, 0);
}



void func_742()//Position - 0x60D07
{
	iLocal_1211 = 0;
	iLocal_1212 = 0;
}


void func_744()//Position - 0x60D1F
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_11116(0, "MICHAEL", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 22, 1, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 26, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 4, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		func_745("Franklin", PLAYER::PLAYER_PED_ID(), joaat("player_one"), 2);
	}
}

void func_745(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x60DAB
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_746(iParam1, &Var0, iParam3);
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

void func_746(int iParam0, var uParam1, int iParam2)//Position - 0x60E66
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
	GlobalFunc_8358(iParam0, &Var2, 0);
	GlobalFunc_8358(iParam0, uParam1, iParam2);
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
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_7138(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10836(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_7138(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
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





int func_751()//Position - 0x617E2
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(198, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[25 /*34*/].f_11, GlobalFunc_8315()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (8f * 8f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GlobalFunc_644(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						return 1;
					}
					else
					{
						GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1);
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_753()//Position - 0x618B7
{
	GlobalFunc_4593();
	if (GlobalFunc_785() != 25)
	{
		GlobalFunc_52(1, 1);
	}
}



void func_756()//Position - 0x618F2
{
	GlobalFunc_4593();
	if (GlobalFunc_785() != 25)
	{
		GlobalFunc_52(1, 1);
	}
}

void func_757()//Position - 0x6190D
{
	GlobalFunc_52(0, 1);
	GlobalFunc_6514(25, "FIN_B_MCS_1_aandb", -1, 0, -1);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_11116(0, "MICHAEL", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 22, 1, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 26, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 4, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		func_745("Franklin", PLAYER::PLAYER_PED_ID(), joaat("player_one"), 2);
	}
}






void func_763()//Position - 0x619D6
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_11116(2, "Trevor", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 3, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 4, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 6, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 10, 0, 0, 0);
		func_745("Franklin", PLAYER::PLAYER_PED_ID(), joaat("player_one"), 2);
	}
}



int func_766()//Position - 0x61A6A
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(197, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[24 /*34*/].f_11, GlobalFunc_8315()))
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 25, 0, 0);
			}
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (8f * 8f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GlobalFunc_644(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						return 1;
					}
					else
					{
						GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1);
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_767()//Position - 0x61B2B
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, 1);
	if (GlobalFunc_785() != 24)
	{
		GlobalFunc_52(1, 1);
	}
}

void func_768()//Position - 0x61B65
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, 1);
	if (GlobalFunc_785() != 24)
	{
		GlobalFunc_52(1, 1);
	}
}

void func_769()//Position - 0x61B9F
{
	GlobalFunc_52(0, 1);
	PATHFIND::SET_ROADS_IN_AREA(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, 0, 1);
	GlobalFunc_6514(24, "FIN_A_INT", -1, 0, -1);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_11116(2, "Trevor", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 3, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 4, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 6, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 10, 0, 0, 0);
		func_745("Franklin", PLAYER::PLAYER_PED_ID(), joaat("player_one"), 2);
	}
}






void func_775()//Position - 0x61C82
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_8315() == 1)
	{
		switch (iLocal_1199)
		{
			case 0:
				func_777();
				break;
			
			case 1:
				func_776();
				break;
			}
	}
}

void func_776()//Position - 0x61CC3
{
	struct<3> Var0;
	
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (SYSTEM::VDIST2(Var0, -7.2915f, 512.9512f, 173.6282f) < 81f || SYSTEM::VDIST2(Var0, 7.5179f, 539.526f, 176.1781f) < 6.5f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, 0f, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 1, 0, 1);
		if (HUD::DOES_BLIP_EXIST(uLocal_1200))
		{
			HUD::REMOVE_BLIP(&uLocal_1200);
		}
		iLocal_1199 = 2;
	}
	if (iLocal_1202 != -1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 8.18818f, 538.8317f, 178.2222f, 4.80666f, 533.2961f, 174.3436f, 5f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_1203) > 5000)
		{
			AUDIO::STOP_SOUND(iLocal_1202);
			AUDIO::RELEASE_SOUND_ID(iLocal_1202);
			iLocal_1202 = -1;
		}
	}
}

void func_777()//Position - 0x61DA8
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (iLocal_1201 == -1)
	{
		if (SYSTEM::VDIST2(Var0, GlobalFunc_2247(196, 0)) < 3f)
		{
			if (!CAM::IS_SPHERE_VISIBLE(7.5179f, 539.526f, 176.1781f, 1.5f))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, 0f, 0, 1);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 1, 0, 1);
				iLocal_1201 = MISC::GET_GAME_TIMER();
				func_207();
				MISC::SET_BIT(&(Global_81155[23 /*34*/].f_15), 11);
				GlobalFunc_2198(Global_81155[23 /*34*/].f_10, 0, 0);
			}
			else
			{
				fVar3 = 0f;
				if (MISC::ABSF(fVar3) < 0.02f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, fVar3, 0, 1);
					iLocal_1201 = MISC::GET_GAME_TIMER();
					func_207();
					MISC::SET_BIT(&(Global_81155[23 /*34*/].f_15), 11);
					GlobalFunc_2198(Global_81155[23 /*34*/].f_10, 0, 0);
				}
			}
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_1201) > 3000 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 8.18818f, 538.8317f, 178.2222f, 4.80666f, 533.2961f, 174.3436f, 5f, 0, 1, 0))
	{
		GlobalFunc_7695(4);
		uLocal_1200 = GlobalFunc_5104(7.8325f, 538.7512f, 175.0281f, 0);
		iLocal_1199 = 1;
		if (!iLocal_1204)
		{
			iLocal_1202 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1202, "DOOR_BUZZER_LOOP", 7.1155f, 539.1238f, 175.0281f, "FINALE_INTRO_SOUNDSET", 0, 0, 0);
			iLocal_1203 = MISC::GET_GAME_TIMER();
			iLocal_1204 = 1;
		}
		if (!Global_86864.f_357)
		{
			iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar4, 8.09956f, 539.1997f, 175.0281f, 5f, 5f, 5f, 0, 1, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iVar4, 2.7713f, 546.1324f, 173.5474f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar4, 125.6127f);
						Global_86864.f_357 = 1;
					}
				}
			}
			else
			{
				Global_86864.f_357 = 1;
			}
		}
	}
}












int func_789()//Position - 0x6251E
{
	if (iLocal_1199 == 1)
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_790()//Position - 0x6253D
{
	if (iLocal_1199 == 2)
	{
		if (iLocal_1202 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1202);
			AUDIO::RELEASE_SOUND_ID(iLocal_1202);
			iLocal_1202 = -1;
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, 0f, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 0, 0, 1);
		return 1;
	}
	return 0;
}

void func_791()//Position - 0x62582
{
	GlobalFunc_4593();
	if (iLocal_1202 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1202);
		AUDIO::RELEASE_SOUND_ID(iLocal_1202);
		iLocal_1202 = -1;
	}
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 0, 0, 1);
	MISC::CLEAR_BIT(&(Global_81155[23 /*34*/].f_15), 11);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (HUD::DOES_BLIP_EXIST(uLocal_1200))
	{
		HUD::REMOVE_BLIP(&uLocal_1200);
	}
}

void func_792()//Position - 0x625D8
{
	GlobalFunc_4593();
	if (iLocal_1202 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1202);
		AUDIO::RELEASE_SOUND_ID(iLocal_1202);
		iLocal_1202 = -1;
	}
	if (iLocal_1199 == 2)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 0, 0, 1);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1200))
	{
		HUD::REMOVE_BLIP(&uLocal_1200);
	}
	MISC::CLEAR_BIT(&(Global_81155[23 /*34*/].f_15), 11);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
}

void func_793()//Position - 0x62635
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_797();
	GlobalFunc_6514(23, "CHOICE_INT", -1, 0, -1);
}

int func_794()//Position - 0x62654
{
	if (AUDIO::REQUEST_MISSION_AUDIO_BANK("INTERCOM", 0))
	{
		return 1;
	}
	return 0;
}

void func_795()//Position - 0x6266E
{
	if (iLocal_1202 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1202);
		AUDIO::RELEASE_SOUND_ID(iLocal_1202);
		iLocal_1202 = -1;
	}
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	MISC::CLEAR_BIT(&(Global_81155[23 /*34*/].f_15), 11);
}

void func_796()//Position - 0x626A3
{
	AUDIO::REQUEST_MISSION_AUDIO_BANK("INTERCOM", 0);
}

void func_797()//Position - 0x626B6
{
	Global_86864.f_357 = 0;
	iLocal_1201 = -1;
	iLocal_1202 = -1;
	iLocal_1199 = 0;
}





int func_802()//Position - 0x626F4
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(184, 0) };
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












int func_814()//Position - 0x6279F
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(173, 0) };
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









void func_823()//Position - 0x62828
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




int func_827()//Position - 0x628DB
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(167, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[7 /*34*/].f_11, GlobalFunc_8315()))
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



void func_830()//Position - 0x62960
{
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(27.6547f, -1075.924f, 809.1208f) + Vector(5f, 5f, 5f), Vector(27.6547f, -1075.924f, 809.1208f) - Vector(5f, 5f, 5f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(809.1208f, -1075.924f, 27.6547f, 20f, 1, 0, 0, 0);
}






void func_836()//Position - 0x629F9
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



int func_839()//Position - 0x62A8B
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(166, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[6 /*34*/].f_11, GlobalFunc_8315()))
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









void func_848()//Position - 0x62B4B
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



int func_851()//Position - 0x62BDD
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(165, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[5 /*34*/].f_11, GlobalFunc_8315()))
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









void func_860()//Position - 0x62C95
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



int func_863()//Position - 0x62D1A
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(164, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[4 /*34*/].f_11, GlobalFunc_8315()))
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









void func_872()//Position - 0x62E31
{
	int iVar0;
	var uVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(715.9622f, -964.9521f, 29.3953f, "v_sweatempty");
	if ((INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar0) && ((GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0 && iLocal_432 > 1) || (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1 && iLocal_432 > 0)))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 1, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 1, 1, 0);
	}
	else
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 0, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 0, 1, 0);
	}
	switch (iLocal_432)
	{
		case 0:
			if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar0)
			{
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[0], 0);
					iLocal_432++;
				}
				else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
				{
					if (GlobalFunc_10618(&(Global_86864.f_44), "AH3BAUD", "AH_INTF", 8, 0, 0, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[0], 0);
						ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[1], 0);
						func_207();
						iLocal_432++;
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.7396f, -963.9054f, 31.64567f, 3.25f, 3.125f, 2.25f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
					{
						if (!GlobalFunc_111())
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHeistFBI3BleadInOut", "ah_3b_int_leadin_lester", 709.855f, -963.434f, 29.39f, 0f, 0f, 0f, 1000f, -1000f, -1, 4104, 0, 2, 0);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHeistFBI3BleadInOut", "AH_3B_INT_loop_Lester", 709.855f, -963.434f, 29.39f, 0f, 0f, 0f, 1000f, -8f, -1, 4105, 0, 2, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Global_86864.f_9[0], uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
							{
								CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, -1, 2000, 2000, 0);
								CAM::SET_GAMEPLAY_HINT_FOV(30f);
								CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
								CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
								CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.02f);
								CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
								CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
							}
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 710.9573f, -964.1301f, 29.3953f, 1f, -1, 1048576000, 1, 93.3411f);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_86864.f_9[0], -1);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar1);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 0, 3);
							}
							func_207();
							Global_86864.f_358 = MISC::GET_GAME_TIMER() + 1000;
							iLocal_432++;
						}
					}
				}
			}
			else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 717.4507f, -968.1054f, 27.97803f, 717.4924f, -965.038f, 31.39561f, 4.0625f, 0, 1, 0))
				{
					GlobalFunc_4956();
					iLocal_432 = 4;
				}
				else if (!GlobalFunc_111())
				{
					iLocal_432 = 4;
				}
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > Global_86864.f_358)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&(Global_86864.f_44), "AH3BAUD", "AH_INTL", 8, 0, 0, 0))
					{
						iLocal_432++;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0 && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "MISSHeistFBI3BleadInOut", "AH_3B_INT_leadin_lester", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_86864.f_9[0], "MISSHeistFBI3BleadInOut", "AH_3B_INT_leadin_lester") >= 0.764f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
					if (!GlobalFunc_111())
					{
						iLocal_432 = 4;
					}
				}
			}
			break;
	}
}







int func_879()//Position - 0x632B7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_432 >= 4)
		{
			func_915();
			return 1;
		}
	}
	return 0;
}

void func_880()//Position - 0x632DB
{
	Global_86864[0] = 0;
	GlobalFunc_4588(&(Global_86864[1]));
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_8915(&(Global_86864.f_9[1]));
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	GlobalFunc_4575(&(Global_86864.f_28[1]));
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-874851305, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 0, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(949391213, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 0, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 0, 0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_881()//Position - 0x63370
{
	Global_86864[0] = 0;
	GlobalFunc_4574(&(Global_86864[1]));
	GlobalFunc_8916(&(Global_86864.f_9[0]));
	GlobalFunc_8916(&(Global_86864.f_9[1]));
	func_51(&(Global_86864.f_28[0]));
	func_51(&(Global_86864.f_28[1]));
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-874851305, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 0, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(949391213, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 0, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 0, 0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_882()//Position - 0x63405
{
	GlobalFunc_6514(70, "AH_3B_INT", 0, 2, -1);
	GlobalFunc_6515(70, "Lester", 1, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("REL_TS_FRIENDLY", &(Global_86864.f_42));
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, -1f, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 1, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(949391213, 1f, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 1, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1480820165, 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 1, 0, 1);
	if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
	{
		GlobalFunc_6808(&(Global_86864.f_9[0]), 12, 707.1259f, -961.3305f, 29.3957f, 165.8747f, 0);
		Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 707.1259f, -961.3305f, 29.3957f, 1, 1, 0);
		Global_86864.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_cs_lester_crate"), 707.8559f, -964.3258f, 29.5025f, 1, 1, 0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_86864.f_28[1], 707.8559f, -964.3258f, 29.5025f, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Global_86864.f_28[1], -147.8231f);
		ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[1], 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		GlobalFunc_173(&(Global_86864.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
	{
		if (!GlobalFunc_5886(0, 1, GlobalFunc_2247(Global_81155[70 /*34*/].f_10, 0), 110f))
		{
			GlobalFunc_9808(&(Global_86864[1]), 0, 718.3592f, -983.2876f, 23.1379f, 270.6242f, 1, 0);
		}
		GlobalFunc_6808(&(Global_86864.f_9[0]), 12, 711.9644f, -965.5922f, 29.3957f, 359.9821f, 0);
		func_278(&(Global_86864.f_9[1]), 0, 711.8387f, -963.7095f, 29.3957f, 183.2461f, 0, 0, 0);
		GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
		ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[1], 1);
		GlobalFunc_173(&(Global_86864.f_44), 0, Global_86864.f_9[1], "MICHAEL", 0, 1);
	}
	PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 1, 0, 0, false);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[0], 1);
	GlobalFunc_173(&(Global_86864.f_44), 3, Global_86864.f_9[0], "Lester", 0, 1);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 1);
}






























int func_912()//Position - 0x67C8E
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("player_zero")) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(0, 0))) && STREAMING::HAS_MODEL_LOADED(joaat("ig_lestercrest"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_lester_crate"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSHeistFBI3BleadInOut"))
	{
		return 1;
	}
	return 0;
}

void func_913()//Position - 0x67CEE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_lestercrest"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_lester_crate"));
	STREAMING::REMOVE_ANIM_DICT("MISSHeistFBI3BleadInOut");
}

void func_914()//Position - 0x67D2D
{
	STREAMING::REQUEST_MODEL(joaat("player_zero"));
	STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_lester_crate"));
	STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
	STREAMING::REQUEST_ANIM_DICT("MISSHeistFBI3BleadInOut");
}

void func_915()//Position - 0x67D6C
{
	iLocal_432 = 0;
}



bool func_918()//Position - 0x67D88
{
	return !GlobalFunc_485(12);
}

int func_919()//Position - 0x67D97
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			if (((FIRE::IS_ENTITY_ON_FIRE(Global_86864.f_9[0]) || PED::IS_PED_RAGDOLL(Global_86864.f_9[0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 5f, 1)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 5f))
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

int func_920()//Position - 0x67E23
{
	switch (iLocal_416)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 714.499f, -965.007f, 29.395f, 720.499f, -965.007f, 31.395f, 4.5f, 0, 1, 0))
			{
				func_207();
				Local_418 = { 708.119f, -966.655f, 30.411f };
				Local_421 = { 0f, 0f, 50.4f };
				iLocal_417 = PED::CREATE_SYNCHRONIZED_SCENE(Local_418, Local_421, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_417, "missheist_agency3aleadinoutah_3a_int", "_leadin_action_lester", 8f, -8f, 0, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_417, 0.15f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[0], 0, 0);
				GlobalFunc_5157(&(Global_86864.f_44), "fbiS4AU", "ah3a_INT_LI", 9, 0, 0);
				iLocal_416++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 714.477f, -966.454f, 29.396f, 714.477f, -958.954f, 32.396f, 3.1f, 0, 1, 0))
			{
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.2f);
				CAM::SET_GAMEPLAY_COORD_HINT(705.8f, -964.4f, 31.3f, 10000, 2000, 2000, 0);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_424);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 710.1847f, -964.2543f, 29.3957f, 1f, -1, 0.2f, 0, 89.755f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_424);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_424);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_424);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_416++;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_417))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_417) >= 0.78f)
				{
					if (!GlobalFunc_111())
					{
						CAM::STOP_GAMEPLAY_HINT(0);
						return 1;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 709.789f, -965.364f, 29.396f, 709.789f, -963.614f, 32.396f, 2.2f, 0, 1, 0))
			{
				if (func_921(PLAYER::PLAYER_PED_ID(), 242628503, 1, -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_424);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 705.8f, -964.4f, 31.3f, 1f, -1, 0.2f, 0, 89.755f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_424);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_424);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_424);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_417) >= 0.78f)
			{
				if (!GlobalFunc_111())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_921(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x680A6
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (bParam2)
	{
		if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam3)
		{
			return 1;
		}
	}
	else if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}


void func_923()//Position - 0x68135
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	GlobalFunc_4575(&(Global_86864.f_28[1]));
	GlobalFunc_4593();
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-874851305);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1480820165);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(949391213);
}

void func_924()//Position - 0x68183
{
	GlobalFunc_8916(&(Global_86864.f_9[0]));
	func_51(&(Global_86864.f_28[0]));
	func_51(&(Global_86864.f_28[1]));
	GlobalFunc_4593();
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-874851305);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1480820165);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(949391213);
}

void func_925()//Position - 0x681D1
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	GlobalFunc_173(&(Global_86864.f_44), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	GlobalFunc_6808(&(Global_86864.f_9[0]), 12, 708.123f, -966.4412f, 29.3956f, 16.7531f, 1);
	PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 1, 0, 0, false);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	GlobalFunc_173(&(Global_86864.f_44), 5, Global_86864.f_9[0], "lester", 0, 1);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 708.123f, -966.4412f, 30.3956f, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
	Local_418 = { 708.119f, -966.655f, 30.411f };
	Local_421 = { 0f, 0f, 50.4f };
	iLocal_417 = PED::CREATE_SYNCHRONIZED_SCENE(Local_418, Local_421, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_417, "missheist_agency3aleadinoutah_3a_int", "_leadin_loop_lester", 1000f, -8f, 1, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_417, 1);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[0], 0, 0);
	Global_86864.f_28[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_lester_crate"), 707.32f, -964.61f, 29.5f, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Global_86864.f_28[1], 253.5f);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-874851305))
	{
		Local_425 = { GlobalFunc_511(64) };
		OBJECT::ADD_DOOR_TO_SYSTEM(-874851305, Local_425.f_3, Local_425, 1, 1, 0);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, -1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 4, 0, 1);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1480820165))
	{
		Local_425 = { GlobalFunc_511(65) };
		OBJECT::ADD_DOOR_TO_SYSTEM(-1480820165, Local_425.f_3, Local_425, 1, 1, 0);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1480820165, 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 4, 0, 1);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(949391213))
	{
		Local_425 = { GlobalFunc_511(66) };
		OBJECT::ADD_DOOR_TO_SYSTEM(949391213, Local_425.f_3, Local_425, 1, 1, 0);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(949391213, 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 4, 0, 1);
	GlobalFunc_6514(69, "AH_3A_INT", 0, -1, -1);
	func_272(69, "lester", Global_86864.f_9[0]);
	GlobalFunc_6515(69, "lester", 1, 0, 0);
}

int func_926()//Position - 0x68465
{
	if (((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(12)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_lester_crate"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3aleadinoutah_3a_int"))
	{
		return 1;
	}
	return 0;
}

void func_927()//Position - 0x684A9
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_lester_crate"));
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aleadinoutah_3a_int");
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_928()//Position - 0x684E0
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(12));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_lester_crate"));
	STREAMING::REQUEST_ANIM_DICT("missheist_agency3aleadinoutah_3a_int");
}

void func_929()//Position - 0x6850D
{
	iLocal_416 = 0;
	iLocal_417 = -1;
}

void func_930()//Position - 0x6851D
{
	if (GlobalFunc_2829())
	{
		GlobalFunc_699();
	}
	if (!iLocal_415)
	{
		Global_24667 = 0;
		StringCopy(&Global_24668, "NULL", 24);
		Global_24502 = 0;
		iLocal_415 = 1;
	}
	else if ((Global_24667 == 0 || !MISC::ARE_STRINGS_EQUAL(&Global_24668, "NULL")) || Global_24502 == 0)
	{
		iLocal_415 = 0;
	}
}



void func_933()//Position - 0x6859B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("firetruk")))
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar1]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) < 30f)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_86864.f_42, 1862763509);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
				iVar1++;
			}
		}
	}
	if (GlobalFunc_2829())
	{
		GlobalFunc_699();
	}
	if (!iLocal_415)
	{
		Global_24667 = 0;
		StringCopy(&Global_24668, "NULL", 24);
		Global_24502 = 0;
		iLocal_415 = 1;
	}
	else if ((Global_24667 == 0 || !MISC::ARE_STRINGS_EQUAL(&Global_24668, "NULL")) || Global_24502 == 0)
	{
		iLocal_415 = 0;
	}
}



int func_936()//Position - 0x6869C
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (Global_86864.f_358 == 0)
	{
		Global_86864.f_358 = MISC::GET_HASH_KEY("AGENCY_PREP_1");
	}
	if (!Global_87226)
	{
		switch (GlobalFunc_5216("AM_H_AHP1"))
		{
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_6677("AM_H_AHP1", 2, 0, 2000, 7500, 7, 0, 0, 0);
				}
				break;
			
			case 1:
				Global_87226 = 1;
				break;
			}
	}
	if (Global_87228 == -15)
	{
		Global_87228 = GlobalFunc_7719();
		if (Global_87227)
		{
			GlobalFunc_8385(&Global_87228, 0, 0, 2, 0, 0, 0);
		}
		else
		{
			GlobalFunc_8385(&Global_87228, 0, 0, 7, 0, 0, 0);
		}
	}
	else if (GlobalFunc_8448(Global_87228))
	{
		switch (GlobalFunc_5216("AM_H_PREP6"))
		{
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_6677("AM_H_PREP6", 2, 0, 1000, 10000, 3, 0, 0, 0);
				}
				break;
			
			case 1:
				Global_87228 = GlobalFunc_7719();
				if (Global_87227)
				{
					GlobalFunc_8385(&Global_87228, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					GlobalFunc_8385(&Global_87228, 0, 0, 7, 0, 0, 0);
				}
				StringCopy(&Global_95999, "", 16);
				break;
		}
	}
	else if (!Global_87227)
	{
		if (!Global_68514.f_1)
		{
			if (GlobalFunc_891(68))
			{
				iVar0 = 0;
				iVar1 = 0;
				while (iVar1 < 7)
				{
					if (Global_81119[iVar1 /*5*/] != -1)
					{
						iVar0++;
					}
					iVar1++;
				}
				if (iVar0 <= 1)
				{
					Global_87228 = GlobalFunc_7719();
					Global_87227 = 1;
				}
			}
		}
	}
	if (!Global_86864.f_357)
	{
		Var2 = { 202.0504f, -1655.773f, 28.8031f };
		Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Var2 - Vector(10f, 30f, 30f), Var2 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(Var2, 20f, 1, 0, 0, 0);
		Global_86864.f_357 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("firetruk")))
			{
				Global_86864[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0))
					{
						if (!GlobalFunc_367(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0, 0, 0))
						{
							ENTITY::DETACH_ENTITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 1, 1);
						}
						else
						{
							Global_86864[1] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							Global_86864[0] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)));
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}


void func_938()//Position - 0x68A52
{
	int iVar0;
	
	GlobalFunc_4588(&(Global_86864[0]));
	iVar0 = 0;
	while (iVar0 < Global_86864.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
		{
			GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		}
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_939()//Position - 0x68AA5
{
	int iVar0;
	
	GlobalFunc_4574(&(Global_86864[0]));
	iVar0 = 0;
	while (iVar0 < Global_86864.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
		{
			func_940(&(Global_86864.f_9[iVar0]));
		}
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_940(var uParam0)//Position - 0x68AF8
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
				GlobalFunc_4573(*uParam0);
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

void func_941()//Position - 0x68B7F
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("FIREMEN", &(Global_86864.f_42));
	Global_86864.f_9[0] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, 1, 1);
	Global_86864.f_9[1] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 214.4446f, -1643.72f, 28.7776f, 279.1055f, 1, 1);
	Global_86864.f_9[2] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 217.0826f, -1644.117f, 28.7155f, 72.8262f, 1, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Global_86864.f_9[iVar0], "WORLD_HUMAN_SMOKING", 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Global_86864.f_9[iVar0], 17, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[iVar0], Global_86864.f_42);
			PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[iVar0], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[iVar0], 0, (iVar0 % 2), iVar0, 0);
		}
		iVar0++;
	}
}

bool func_942()//Position - 0x68C9C
{
	return (STREAMING::HAS_MODEL_LOADED(joaat("firetruk")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01")));
}

void func_943()//Position - 0x68CBB
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_fireman_01"));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_944()//Position - 0x68CDF
{
	STREAMING::REQUEST_MODEL(joaat("firetruk"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
}


void func_946()//Position - 0x68D01
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 696.426f, -961.0247f, 22.88202f, 739.2752f, -961.2941f, 35.81699f, 30.5f, 0, 1, 0) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
}

void func_947()//Position - 0x68D54
{
	struct<6> Var0;
	
	if ((!PED::IS_PED_INJURED(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_413)
		{
			iLocal_414 = INTERIOR::GET_INTERIOR_AT_COORDS(719.363f, -962.3938f, 29.90642f);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_414);
			iLocal_413 = 1;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_414))
			{
				STREAMING::REQUEST_MODEL(joaat("v_ind_ss_chair3_cso"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ind_ss_chair3_cso")))
				{
					Global_86864.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ind_ss_chair3_cso"), 719.363f, -962.3938f, 29.90642f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[0], 0f, 0f, 13.50677f, 2, 1);
				}
			}
		}
		if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 717.7486f, -958.6003f, 28.4747f, 717.8596f, -969.3919f, 32.66718f, 10.25f, 0, 1, 0)) && !PED::IS_PED_INJURED(Global_86864.f_9[0])) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 160f))
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, 13000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(40f);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.46f);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.02f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				}
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
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.5255f, -964.7198f, 30.14533f, 4.25f, 5.75f, 2.5f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			if (!iLocal_412)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.4453f, -965.7586f, 29.14533f, 1.5f, 10f, 2.25f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
					{
						GlobalFunc_173(&uLocal_246, 1, Global_86864.f_9[0], "LESTER", 0, 1);
						GlobalFunc_173(&uLocal_246, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					}
					func_207();
					uLocal_245 = PED::CREATE_SYNCHRONIZED_SCENE(719.362f, -962.388f, 29.91f, 0f, 0f, 0f, 2);
					TASK::CLEAR_PED_TASKS(Global_86864.f_9[0]);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_245, "missheistfbisetup1leadinoutah_1_int", "_leadin_action_lester", 8f, -4f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], iLocal_245, "_leadin_action_chair", "missheistfbisetup1leadinoutah_1_int", 8f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[1], iLocal_245, "_leadin_action_cane", "missheistfbisetup1leadinoutah_1_int", 8f, -8f, 0, 1148846080);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2048, 3);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 718.8762f, -964.1069f, 29.3953f, 1f, -1, 0.25f, 512, 352.5665f);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					iLocal_412 = 1;
				}
			}
			else
			{
				if (!GlobalFunc_111())
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_245) > 0.125f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_245) < 0.5f)
					{
						GlobalFunc_10618(&uLocal_246, "FBS1AUD", "FBS1_INT_LI", 8, 0, 0, 0);
					}
				}
				Var0 = { GlobalFunc_560() };
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_245) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_245) >= 0.95f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_245))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&Var0, "FBS1_INT_LI"))
					{
						iLocal_411 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_245) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_244))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_245) >= 1f)
					{
						iLocal_244 = PED::CREATE_SYNCHRONIZED_SCENE(719.362f, -962.388f, 29.91f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_244, "missheistfbisetup1leadinoutah_1_int", "_intro_loop_lester", 4f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], iLocal_244, "_intro_loop_chair", "missheistfbisetup1leadinoutah_1_int", 1000f, -8f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[1], iLocal_244, "_intro_loop_cane", "missheistfbisetup1leadinoutah_1_int", 1000f, -8f, 0, 1148846080);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_244, 1);
					}
				}
			}
		}
		PED::SET_PED_RESET_FLAG(Global_86864.f_9[0], 328, 1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 696.426f, -961.0247f, 22.88202f, 739.2752f, -961.2941f, 35.81699f, 30.5f, 0, 1, 0) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
}



int func_950()//Position - 0x6928B
{
	if ((PED::IS_PED_INJURED(Global_86864.f_9[0]) || FIRE::IS_ENTITY_ON_FIRE(Global_86864.f_9[0])) || ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		return 1;
	}
	return 0;
}

int func_951()//Position - 0x692F1
{
	if (!Global_86864.f_357)
	{
		MISC::CLEAR_AREA(717.8286f, -961.6875f, 29.3953f, 5f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(714.3016f, -971.0053f, 29.3953f, 5f, 1, 0, 0, 0);
		Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(29.3953f, -963.6519f, 714.334f) - Vector(0f, 20f, 20f), Vector(29.3953f, -963.6519f, 714.334f) + Vector(10f, 20f, 20f), 0, 1, 1, 1);
		Global_86864.f_357 = 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_411)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			return 1;
		}
	}
	return 0;
}

void func_952()//Position - 0x693AE
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	GlobalFunc_4575(&(Global_86864.f_28[1]));
	GlobalFunc_4593();
}

void func_953()//Position - 0x693E1
{
	GlobalFunc_8916(&(Global_86864.f_9[0]));
	func_51(&(Global_86864.f_28[0]));
	func_51(&(Global_86864.f_28[1]));
	GlobalFunc_4593();
}

void func_954()//Position - 0x69414
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		GlobalFunc_6808(&(Global_86864.f_9[0]), 12, 719.362f, -962.388f, 29.91f, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[0], 1862763509);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
		PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 1, 0, 0, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
	{
		Global_86864.f_28[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_walking_stick"), 719.061f, -963.204f, 30.4097f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[1], 0f, 0f, -73.7522f, 2, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1])) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_244))
	{
		iLocal_244 = PED::CREATE_SYNCHRONIZED_SCENE(719.362f, -962.388f, 29.91f, 0f, 0f, 0f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_244, "missheistfbisetup1leadinoutah_1_int", "_intro_loop_lester", 1000f, -8f, 0, 0, 1148846080, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[1], iLocal_244, "_intro_loop_cane", "missheistfbisetup1leadinoutah_1_int", 1000f, -8f, 0, 1148846080);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_244, 1);
	}
	ENTITY::CREATE_MODEL_HIDE(718.8765f, -962.5751f, 29.905f, 0.1f, joaat("v_ind_ss_chair01"), 1);
	if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
	{
		GlobalFunc_6514(66, "AH_1_INT", 0, -1, -1);
	}
	if (iLocal_413)
	{
		iLocal_413 = 0;
	}
	iLocal_412 = 0;
	iLocal_411 = 0;
}

bool func_955()//Position - 0x695B7
{
	return (((STREAMING::HAS_ANIM_DICT_LOADED("missheistfbisetup1leadinoutah_1_int") && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(12))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6));
}

void func_956()//Position - 0x695EF
{
	STREAMING::REMOVE_ANIM_DICT("missheistfbisetup1leadinoutah_1_int");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
	HUD::CLEAR_ADDITIONAL_TEXT(6, 1);
	if (iLocal_413)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_414);
		iLocal_413 = 0;
	}
}

void func_957()//Position - 0x6962A
{
	STREAMING::REQUEST_ANIM_DICT("missheistfbisetup1leadinoutah_1_int");
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(12));
	HUD::REQUEST_ADDITIONAL_TEXT("FBS1AUD", 6);
}



