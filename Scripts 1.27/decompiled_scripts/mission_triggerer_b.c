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
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	struct<3> Local_506 = { 0, 0, 0 } ;
	struct<3> Local_509 = { 0, 0, 0 } ;
	struct<3> Local_512 = { 0, 0, 0 } ;
	struct<3> Local_515 = { 0, 0, 0 } ;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
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
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	bool bLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	struct<3> Local_700 = { 0, 0, 0 } ;
	float fLocal_703 = 0f;
	float fLocal_704 = 0f;
	float fLocal_705 = 0f;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	float fLocal_715 = 0f;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
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
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	bool bLocal_897 = 0;
	int iLocal_898 = 0;
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
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	int iLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	struct<3> Local_1083 = { 0, 0, 0 } ;
	struct<3> Local_1086 = { 0, 0, 0 } ;
	int iLocal_1089 = 0;
	int iLocal_1090 = 0;
	var uLocal_1091 = 0;
	float fLocal_1092 = 0f;
	float fLocal_1093 = 0f;
	float fLocal_1094 = 0f;
	float fLocal_1095 = 0f;
	float fLocal_1096 = 0f;
	int iLocal_1097 = 0;
	int iLocal_1098 = 0;
	int iLocal_1099 = 0;
	int iLocal_1100 = 0;
	int iLocal_1101 = 0;
	struct<5> Local_1102 = { 262, 0, 1065353216, 0, 0 } ;
	int iLocal_1107 = 0;
	int iLocal_1108 = 0;
	struct<3> Local_1109 = { 0, 0, 0 } ;
	var uLocal_1112 = 0;
	int iLocal_1113 = 0;
	int iLocal_1114 = 0;
	int iLocal_1115[2] = { 0, 0 };
	struct<3> Local_1118 = { 0, 0, 0 } ;
	struct<3> Local_1121 = { 0, 0, 0 } ;
	int iLocal_1124 = 0;
	int iLocal_1125 = 0;
	struct<43> Local_1126 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	float fLocal_1183 = 0f;
	struct<3> Local_1184 = { 0, 0, 0 } ;
	char* sLocal_1187 = NULL;
	char* sLocal_1188 = NULL;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	bool bLocal_1191 = 0;
	struct<3> Local_1192 = { 0, 0, 0 } ;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	int iLocal_1197 = 0;
	int iLocal_1198 = 0;
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
	int iLocal_1451 = 0;
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
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
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
	int iLocal_1910 = 0;
	int iLocal_1911 = 0;
	int iLocal_1912 = 0;
	int iLocal_1913 = 0;
	int iLocal_1914 = 0;
	int iLocal_1915 = 0;
	struct<3> Local_1916 = { 0, 0, 0 } ;
	float fLocal_1919 = 0f;
	float fLocal_1920 = 0f;
	float fLocal_1921 = 0f;
	int iLocal_1922 = 0;
	int iLocal_1923 = 0;
	int iLocal_1924 = 0;
	int iLocal_1925 = 0;
	int iLocal_1926 = 0;
	int iLocal_1927 = 0;
	int iLocal_1928 = 0;
	int iLocal_1929 = 0;
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
		if (!GlobalFunc_230(62) || GlobalFunc_230(38))
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

























void func_26(int iParam0, var uParam1)//Position - 0x12D0
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
				func_50(&(Global_86864.f_28[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_49(&(Global_86864[iVar0]));
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
					func_35(&(Global_86864.f_9[iVar0]));
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

void func_35(var uParam0)//Position - 0x25BD
{
	var uVar0;
	var uVar1;
	
	GlobalFunc_8267(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				PED::DELETE_PED(uParam0);
			}
		}
	}
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
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
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


void func_49(var uParam0)//Position - 0x2A45
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
					{
						ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
					}
				}
				iVar2 = HUD::GET_BLIP_FROM_ENTITY(*uParam0);
				if (iVar2 != 0)
				{
					HUD::REMOVE_BLIP(&iVar2);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missarmenian3leadinoutArmenian_3_int", "_intro_loop_car", 2))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, 1f, 1);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
			}
		}
	}
}

void func_50(var uParam0)//Position - 0x2ACD
{
	var uVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				OBJECT::DELETE_OBJECT(uParam0);
			}
		}
	}
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
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
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
	
	GlobalFunc_9026(iParam0, &Var0);
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


void func_162(int iParam0, var uParam1, var uParam2)//Position - 0x7C01
{
	switch (iParam0)
	{
		case 63:
			GlobalFunc_4601(uParam1, iParam0, 150f, 165f, 50f, 0, 0, 0);
			uParam2->f_1 = 470711/*func_999*/;
			uParam2->f_2 = 470665/*func_998*/;
			uParam2->f_3 = 470598/*func_997*/;
			uParam2->f_4 = 470291/*func_995*/;
			uParam2->f_5 = 470009/*func_994*/;
			uParam2->f_6 = 469911/*func_993*/;
			uParam2->f_7 = 469833/*func_992*/;
			uParam2->f_10 = 469782/*func_991*/;
			uParam2->f_11 = 469653/*func_990*/;
			uParam2->f_12 = 469644/*func_989*/;
			uParam2->f_8 = 468156/*func_987*/;
			uParam2->f_9 = 468148/*func_986*/;
			break;
		
		case 64:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 468140/*func_985*/;
			uParam2->f_2 = 468076/*func_984*/;
			uParam2->f_3 = 468009/*func_983*/;
			uParam2->f_4 = 467944/*func_982*/;
			uParam2->f_5 = 467834/*func_981*/;
			uParam2->f_6 = 467789/*func_980*/;
			uParam2->f_7 = 467752/*func_979*/;
			uParam2->f_10 = 467733/*func_978*/;
			uParam2->f_11 = 467595/*func_977*/;
			uParam2->f_12 = 467586/*func_976*/;
			uParam2->f_8 = 464846/*func_969*/;
			uParam2->f_9 = 464838/*func_968*/;
			break;
		
		case 12:
			GlobalFunc_4601(uParam1, iParam0, 100f, 105f, 35f, 0, 0, 0);
			uParam2->f_1 = 464802/*func_967*/;
			uParam2->f_2 = 464689/*func_966*/;
			uParam2->f_3 = 464531/*func_965*/;
			uParam2->f_4 = 464446/*func_964*/;
			uParam2->f_5 = 463497/*func_963*/;
			uParam2->f_6 = 463335/*func_962*/;
			uParam2->f_7 = 463186/*func_961*/;
			uParam2->f_10 = 462956/*func_960*/;
			uParam2->f_11 = 462757/*func_959*/;
			uParam2->f_12 = 462748/*func_958*/;
			uParam2->f_8 = 461352/*func_957*/;
			uParam2->f_9 = 461344/*func_956*/;
			break;
		
		case 13:
			GlobalFunc_4601(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 461318/*func_955*/;
			uParam2->f_2 = 461219/*func_954*/;
			uParam2->f_3 = 461189/*func_953*/;
			uParam2->f_4 = 461094/*func_952*/;
			uParam2->f_5 = 460243/*func_951*/;
			uParam2->f_6 = 459965/*func_949*/;
			uParam2->f_7 = 459849/*func_948*/;
			uParam2->f_10 = 459110/*func_947*/;
			uParam2->f_11 = 458907/*func_945*/;
			uParam2->f_12 = 458898/*func_944*/;
			uParam2->f_8 = 458890/*func_943*/;
			uParam2->f_9 = 458882/*func_942*/;
			break;
		
		case 20:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 458874/*func_941*/;
			uParam2->f_2 = 458866/*func_940*/;
			uParam2->f_3 = 458858/*func_939*/;
			uParam2->f_4 = 458849/*func_938*/;
			uParam2->f_5 = 458841/*func_937*/;
			uParam2->f_6 = 458833/*func_936*/;
			uParam2->f_7 = 458825/*func_935*/;
			uParam2->f_10 = 458682/*func_934*/;
			uParam2->f_11 = 458673/*func_933*/;
			uParam2->f_12 = 458664/*func_932*/;
			uParam2->f_8 = 458656/*func_931*/;
			uParam2->f_9 = 458648/*func_930*/;
			break;
		
		case 21:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 458640/*func_929*/;
			uParam2->f_2 = 458632/*func_928*/;
			uParam2->f_3 = 458624/*func_927*/;
			uParam2->f_4 = 458615/*func_926*/;
			uParam2->f_5 = 458607/*func_925*/;
			uParam2->f_6 = 458595/*func_924*/;
			uParam2->f_7 = 458583/*func_923*/;
			uParam2->f_10 = 458511/*func_922*/;
			uParam2->f_11 = 458502/*func_921*/;
			uParam2->f_12 = 458493/*func_920*/;
			uParam2->f_8 = 458485/*func_919*/;
			uParam2->f_9 = 458477/*func_918*/;
			break;
		
		case 29:
			GlobalFunc_4601(uParam1, iParam0, 85f, 95f, 50f, 0, 0, 0);
			uParam2->f_1 = 458453/*func_917*/;
			uParam2->f_2 = 458384/*func_916*/;
			uParam2->f_3 = 458355/*func_915*/;
			uParam2->f_4 = 458329/*func_914*/;
			uParam2->f_5 = 457918/*func_913*/;
			uParam2->f_6 = 457833/*func_912*/;
			uParam2->f_7 = 457748/*func_911*/;
			uParam2->f_10 = 457516/*func_910*/;
			uParam2->f_11 = 457293/*func_909*/;
			uParam2->f_12 = 457284/*func_908*/;
			uParam2->f_8 = 456332/*func_906*/;
			uParam2->f_9 = 456324/*func_905*/;
			break;
		
		case 30:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 456316/*func_904*/;
			uParam2->f_2 = 456308/*func_903*/;
			uParam2->f_3 = 456300/*func_902*/;
			uParam2->f_4 = 456291/*func_901*/;
			uParam2->f_5 = 456176/*func_899*/;
			uParam2->f_6 = 456151/*func_898*/;
			uParam2->f_7 = 456109/*func_897*/;
			uParam2->f_10 = 456020/*func_896*/;
			uParam2->f_11 = 456011/*func_895*/;
			uParam2->f_12 = 456002/*func_894*/;
			uParam2->f_8 = 455994/*func_893*/;
			uParam2->f_9 = 455986/*func_892*/;
			break;
		
		case 32:
			GlobalFunc_4601(uParam1, iParam0, 220f, 230f, 50f, 0, 0, 0);
			uParam2->f_1 = 455966/*func_891*/;
			uParam2->f_2 = 455850/*func_890*/;
			uParam2->f_3 = 455821/*func_889*/;
			uParam2->f_4 = 455795/*func_888*/;
			uParam2->f_5 = 453968/*func_879*/;
			uParam2->f_6 = 453879/*func_878*/;
			uParam2->f_7 = 453790/*func_877*/;
			uParam2->f_10 = 453527/*func_876*/;
			uParam2->f_11 = 453035/*func_871*/;
			uParam2->f_12 = 453026/*func_870*/;
			uParam2->f_8 = 451491/*func_862*/;
			uParam2->f_9 = 451483/*func_861*/;
			break;
		
		case 33:
			GlobalFunc_4601(uParam1, iParam0, 250f, 270f, 50f, 7, 500f, 1);
			uParam2->f_1 = 451471/*func_860*/;
			uParam2->f_2 = 451433/*func_859*/;
			uParam2->f_3 = 451414/*func_858*/;
			uParam2->f_4 = 451374/*func_857*/;
			uParam2->f_5 = 451067/*func_855*/;
			uParam2->f_6 = 450697/*func_853*/;
			uParam2->f_7 = 450613/*func_852*/;
			uParam2->f_10 = 450358/*func_850*/;
			uParam2->f_11 = 450293/*func_849*/;
			uParam2->f_12 = 450284/*func_848*/;
			uParam2->f_8 = 449768/*func_844*/;
			uParam2->f_9 = 449204/*func_838*/;
			break;
		
		case 34:
			GlobalFunc_4601(uParam1, iParam0, 175f, 185f, 50f, 7, 500f, 1);
			uParam2->f_1 = 449192/*func_837*/;
			uParam2->f_2 = 449094/*func_836*/;
			uParam2->f_3 = 449075/*func_835*/;
			uParam2->f_4 = 449049/*func_834*/;
			uParam2->f_5 = 448487/*func_833*/;
			uParam2->f_6 = 448407/*func_832*/;
			uParam2->f_7 = 448327/*func_831*/;
			uParam2->f_10 = 447933/*func_827*/;
			uParam2->f_11 = 447890/*func_826*/;
			uParam2->f_12 = 447881/*func_825*/;
			uParam2->f_8 = 446998/*func_817*/;
			uParam2->f_9 = 446990/*func_816*/;
			break;
		
		case 35:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 1);
			uParam2->f_1 = 446795/*func_814*/;
			uParam2->f_2 = 446761/*func_813*/;
			uParam2->f_3 = 446744/*func_812*/;
			uParam2->f_4 = 446698/*func_811*/;
			uParam2->f_5 = 445417/*func_808*/;
			uParam2->f_6 = 445211/*func_807*/;
			uParam2->f_7 = 444959/*func_806*/;
			uParam2->f_10 = 444851/*func_805*/;
			uParam2->f_11 = 444842/*func_804*/;
			uParam2->f_12 = 444833/*func_803*/;
			uParam2->f_8 = 444821/*func_802*/;
			uParam2->f_9 = 438521/*func_758*/;
			break;
		
		case 36:
			GlobalFunc_4601(uParam1, iParam0, 130f, 140f, 50f, 7, 200f, 1);
			uParam2->f_1 = 438507/*func_757*/;
			uParam2->f_2 = 438499/*func_756*/;
			uParam2->f_3 = 438491/*func_755*/;
			uParam2->f_4 = 438482/*func_754*/;
			uParam2->f_5 = 438378/*func_753*/;
			uParam2->f_6 = 438359/*func_752*/;
			uParam2->f_7 = 438340/*func_751*/;
			uParam2->f_10 = 438197/*func_749*/;
			uParam2->f_11 = 438162/*func_748*/;
			uParam2->f_12 = 438153/*func_747*/;
			uParam2->f_8 = 438145/*func_746*/;
			uParam2->f_9 = 438137/*func_745*/;
			break;
		
		case 37:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 7, 500f, 1);
			uParam2->f_1 = 438097/*func_743*/;
			uParam2->f_2 = 438089/*func_742*/;
			uParam2->f_3 = 438081/*func_741*/;
			uParam2->f_4 = 438072/*func_740*/;
			uParam2->f_5 = 438012/*func_739*/;
			uParam2->f_6 = 438004/*func_738*/;
			uParam2->f_7 = 437996/*func_737*/;
			uParam2->f_10 = 437789/*func_733*/;
			uParam2->f_11 = 436945/*func_728*/;
			uParam2->f_12 = 436936/*func_727*/;
			uParam2->f_8 = 436928/*func_726*/;
			uParam2->f_9 = 436920/*func_725*/;
			break;
		
		case 38:
			GlobalFunc_4601(uParam1, iParam0, 250f, 260f, 50f, 0, 0, 0);
			uParam2->f_1 = 436912/*func_724*/;
			uParam2->f_2 = 436783/*func_723*/;
			uParam2->f_3 = 436754/*func_722*/;
			uParam2->f_4 = 436728/*func_721*/;
			uParam2->f_5 = 418306/*func_691*/;
			uParam2->f_6 = 418198/*func_690*/;
			uParam2->f_7 = 418090/*func_689*/;
			uParam2->f_10 = 417210/*func_688*/;
			uParam2->f_11 = 416845/*func_687*/;
			uParam2->f_12 = 416435/*func_684*/;
			uParam2->f_8 = 416427/*func_683*/;
			uParam2->f_9 = 416419/*func_682*/;
			break;
		
		case 41:
			GlobalFunc_4601(uParam1, iParam0, 215f, 225f, 50f, 6, 0, 0);
			uParam2->f_1 = 416411/*func_681*/;
			uParam2->f_2 = 416174/*func_680*/;
			uParam2->f_3 = 416140/*func_679*/;
			uParam2->f_4 = 415008/*func_671*/;
			uParam2->f_5 = 409238/*func_658*/;
			uParam2->f_6 = 409136/*func_657*/;
			uParam2->f_7 = 409034/*func_656*/;
			uParam2->f_10 = 408723/*func_655*/;
			uParam2->f_11 = 408572/*func_654*/;
			uParam2->f_12 = 408563/*func_653*/;
			uParam2->f_8 = 406468/*func_648*/;
			uParam2->f_9 = 406460/*func_647*/;
			break;
		
		case 43:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 406452/*func_646*/;
			uParam2->f_2 = 406426/*func_645*/;
			uParam2->f_3 = 406400/*func_644*/;
			uParam2->f_4 = 406391/*func_643*/;
			uParam2->f_5 = 406383/*func_642*/;
			uParam2->f_6 = 406375/*func_641*/;
			uParam2->f_7 = 406367/*func_640*/;
			uParam2->f_10 = 406294/*func_639*/;
			uParam2->f_11 = 406285/*func_638*/;
			uParam2->f_12 = 406276/*func_637*/;
			uParam2->f_8 = 406219/*func_636*/;
			uParam2->f_9 = 406211/*func_635*/;
			break;
		
		case 71:
			GlobalFunc_4601(uParam1, iParam0, 25f, 35f, 50f, 0, 0, 0);
			uParam2->f_1 = 406199/*func_634*/;
			uParam2->f_2 = 405770/*func_628*/;
			uParam2->f_3 = 405366/*func_622*/;
			uParam2->f_4 = 404984/*func_618*/;
			uParam2->f_5 = 404123/*func_617*/;
			uParam2->f_6 = 403990/*func_616*/;
			uParam2->f_7 = 386563/*func_609*/;
			uParam2->f_10 = 386503/*func_608*/;
			uParam2->f_11 = 386366/*func_607*/;
			uParam2->f_12 = 386357/*func_606*/;
			uParam2->f_8 = 376905/*func_589*/;
			uParam2->f_9 = 376897/*func_588*/;
			break;
		
		case 72:
			GlobalFunc_4601(uParam1, iParam0, 465f, 480f, 50f, 0, 0f, 0);
			uParam2->f_1 = 376889/*func_587*/;
			uParam2->f_2 = 376791/*func_586*/;
			uParam2->f_3 = 376716/*func_585*/;
			uParam2->f_4 = 376574/*func_584*/;
			uParam2->f_5 = 376116/*func_583*/;
			uParam2->f_6 = 375750/*func_581*/;
			uParam2->f_7 = 375515/*func_580*/;
			uParam2->f_10 = 375213/*func_579*/;
			uParam2->f_11 = 375158/*func_578*/;
			uParam2->f_12 = 375149/*func_577*/;
			uParam2->f_8 = 374101/*func_576*/;
			uParam2->f_9 = 374093/*func_575*/;
			break;
		
		case 73:
			GlobalFunc_4601(uParam1, iParam0, 670f, 700f, 50f, 0, 0f, 0);
			uParam2->f_1 = 374077/*func_574*/;
			uParam2->f_2 = 374042/*func_573*/;
			uParam2->f_3 = 374007/*func_572*/;
			uParam2->f_4 = 373954/*func_571*/;
			uParam2->f_5 = 373024/*func_570*/;
			uParam2->f_6 = 372856/*func_569*/;
			uParam2->f_7 = 372766/*func_568*/;
			uParam2->f_10 = 368797/*func_565*/;
			uParam2->f_11 = 368788/*func_564*/;
			uParam2->f_12 = 368779/*func_563*/;
			uParam2->f_8 = 368601/*func_561*/;
			uParam2->f_9 = 368593/*func_560*/;
			break;
		
		case 74:
			GlobalFunc_4601(uParam1, iParam0, 50f, 65f, 50f, 7, 0, 0);
			uParam2->f_1 = 368577/*func_559*/;
			uParam2->f_2 = 368490/*func_558*/;
			uParam2->f_3 = 368392/*func_557*/;
			uParam2->f_4 = 368267/*func_556*/;
			uParam2->f_5 = 366165/*func_552*/;
			uParam2->f_6 = 365965/*func_551*/;
			uParam2->f_7 = 365900/*func_550*/;
			uParam2->f_10 = 365838/*func_548*/;
			uParam2->f_11 = 365701/*func_547*/;
			uParam2->f_12 = 365692/*func_546*/;
			uParam2->f_8 = 363194/*func_534*/;
			uParam2->f_9 = 363186/*func_533*/;
			break;
		
		case 75:
			GlobalFunc_4601(uParam1, iParam0, 12f, 18f, 50f, 0, 0, 0);
			uParam2->f_1 = 363174/*func_532*/;
			uParam2->f_2 = 363102/*func_531*/;
			uParam2->f_3 = 363030/*func_530*/;
			uParam2->f_4 = 362920/*func_529*/;
			uParam2->f_5 = 41155/*func_230*/;
			uParam2->f_6 = 40870/*func_228*/;
			uParam2->f_7 = 40720/*func_224*/;
			uParam2->f_10 = 40660/*func_223*/;
			uParam2->f_11 = 40566/*func_222*/;
			uParam2->f_12 = 40557/*func_221*/;
			uParam2->f_8 = 37385/*func_210*/;
			uParam2->f_9 = 37377/*func_209*/;
			break;
		
		case 3:
			GlobalFunc_4601(uParam1, iParam0, 200f, 210f, 50f, 0, 0, 0);
			uParam2->f_1 = 37369/*func_208*/;
			uParam2->f_2 = 37353/*func_207*/;
			uParam2->f_3 = 37337/*func_206*/;
			uParam2->f_4 = 37313/*func_205*/;
			uParam2->f_5 = 37073/*func_202*/;
			uParam2->f_6 = 37050/*func_201*/;
			uParam2->f_7 = 37004/*func_199*/;
			uParam2->f_10 = 36280/*func_196*/;
			uParam2->f_11 = 36271/*func_195*/;
			uParam2->f_12 = 36262/*func_194*/;
			uParam2->f_8 = 36254/*func_193*/;
			uParam2->f_9 = 36246/*func_192*/;
			break;
		
		case 4:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 36238/*func_191*/;
			uParam2->f_2 = 36220/*func_190*/;
			uParam2->f_3 = 36208/*func_189*/;
			uParam2->f_4 = 36191/*func_188*/;
			uParam2->f_5 = 36134/*func_187*/;
			uParam2->f_6 = 36115/*func_186*/;
			uParam2->f_7 = 36096/*func_185*/;
			uParam2->f_10 = 35977/*func_184*/;
			uParam2->f_11 = 35968/*func_183*/;
			uParam2->f_12 = 35959/*func_182*/;
			uParam2->f_8 = 35812/*func_180*/;
			uParam2->f_9 = 35804/*func_179*/;
			break;
		
		case 54:
		case 55:
		case 58:
			GlobalFunc_4601(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 35796/*func_178*/;
			uParam2->f_2 = 35779/*func_177*/;
			uParam2->f_3 = 35762/*func_176*/;
			uParam2->f_4 = 35737/*func_175*/;
			uParam2->f_5 = 35633/*func_174*/;
			uParam2->f_6 = 35614/*func_173*/;
			uParam2->f_7 = 35491/*func_171*/;
			uParam2->f_10 = 35121/*func_167*/;
			uParam2->f_11 = 35112/*func_166*/;
			uParam2->f_12 = 35090/*func_165*/;
			uParam2->f_8 = 35082/*func_164*/;
			uParam2->f_9 = 35074/*func_163*/;
			break;
		
		default:
			return;
			break;
	}
	*uParam2 = 1;
}









void func_171()//Position - 0x8AA3
{
	func_172(&(Global_86864[0]));
}

void func_172(var uParam0)//Position - 0x8AB6
{
	var uVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 1))
					{
						VEHICLE::DELETE_VEHICLE(uParam0);
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					}
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(uParam0);
				}
			}
		}
	}
}

void func_173()//Position - 0x8B1E
{
	func_49(&(Global_86864[0]));
}







void func_180()//Position - 0x8BE4
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




int func_184()//Position - 0x8C89
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












int func_196()//Position - 0x8DB8
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(163, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_81155[3 /*34*/].f_11, GlobalFunc_8315()))
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (4.75f * 4.75f))
			{
				func_197();
				return 1;
			}
		}
	}
	return 0;
}

void func_197()//Position - 0x8E18
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





void func_202()//Position - 0x90D1
{
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.2495f, -947.0913f, -1509.862f) + Vector(2f, 2f, 2f), Vector(8.2495f, -947.0913f, -1509.862f) - Vector(2f, 2f, 2f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1509.862f, -947.0913f, 6.2495f, 20f, 1, 0, 0, 0);
	GlobalFunc_6514(3, "ASS_INT_2_ALT1", -1, 0, -1);
}



int func_205()//Position - 0x91C1
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leaning@"))
	{
		return 1;
	}
	return 0;
}

void func_206()//Position - 0x91D9
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
}

void func_207()//Position - 0x91E9
{
	STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
}



void func_210()//Position - 0x9209
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.29f, -1524.255f, 9.363565f, -1151.24f, -1520.052f, 12.88272f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1147.681f, -1522.99f, 6.38306f, -1144.043f, -1520.518f, 9.938194f, 1.5f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (GlobalFunc_8315() == 0 || GlobalFunc_8315() == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1160.324f, -1522.265f, 8.382723f, -1152.146f, -1517.005f, 12.88272f, 5f, 0, 1, 0))
		{
			CAM::SET_GAMEPLAY_COORD_HINT(Local_905, -1, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_908);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_909);
			CAM::SET_GAMEPLAY_HINT_FOV(fLocal_910);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.35f, -1521.426f, 9.132723f, -1151.579f, -1519.681f, 12.63272f, 2.25f, 0, 1, 0))
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.052f, -1523.333f, 12.4219f, -1142.907f, -1518.366f, 6.557154f, 3.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1160.781f, -1522.466f, 8.705703f, -1150.433f, -1515.172f, 12.63272f, 10f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	switch (iLocal_896)
	{
		case 0:
			bLocal_897 = false;
			iLocal_898 = 0;
			if (GlobalFunc_8315() == 2)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1152.418f, -1516.766f, 9.132729f, -1155.04f, -1518.588f, 11.88273f, 1.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.494f, -1518.192f, 9.512158f, -1151.646f, -1515.086f, 11.88273f, 1.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.906f, -1520.176f, 9.391918f, -1151.594f, -1521.362f, 12.45251f, 1.5f, 0, 1, 0))
				{
					GlobalFunc_173(&uLocal_911, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					func_197();
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					iLocal_896++;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.287f, -1520.628f, 9.632729f, -1157.176f, -1516.414f, 12.13273f, 13f, 0, 1, 0))
			{
				func_197();
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (GlobalFunc_8315() == 0)
				{
					GlobalFunc_173(&uLocal_911, 0, Global_86864.f_9[2], "TREVOR", 0, 1);
					GlobalFunc_173(&uLocal_911, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					func_197();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1156.76f, -1519.92f, 9.63f, 1f, 20000, 1048576000, 0, 1193033728);
					iLocal_896++;
				}
				else if (GlobalFunc_8315() == 1)
				{
					GlobalFunc_173(&uLocal_911, 0, Global_86864.f_9[2], "TREVOR", 0, 1);
					GlobalFunc_173(&uLocal_911, 1, Global_86864.f_9[3], "MICHAEL", 0, 1);
					GlobalFunc_173(&uLocal_911, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1156.76f, -1519.92f, 9.63f, 1f, 20000, 1048576000, 0, 1193033728);
					iLocal_896++;
				}
			}
			break;
		
		case 1:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (bLocal_897 == 0)
			{
				if (GlobalFunc_8315() == 2)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_2B_HEIST_TOILET_FLUSH", false))
					{
						if (GlobalFunc_10618(&uLocal_911, "D2BAUD", "DS2B_INT_LI1", 7, 0, 0, 0))
						{
							bLocal_897 = true;
						}
					}
				}
				if (GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_10618(&uLocal_911, "D2BAUD", "DS2B_INT_LI2", 7, 0, 0, 0))
					{
						bLocal_897 = true;
					}
				}
				if (GlobalFunc_8315() == 1)
				{
					if (GlobalFunc_10618(&uLocal_911, "D2BAUD", "DS2B_INT_LI3", 7, 0, 0, 0))
					{
						bLocal_897 = true;
					}
				}
			}
			if (GlobalFunc_8315() == 1)
			{
				if (iLocal_898 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_894))
					{
						uLocal_893 = PED::CREATE_SYNCHRONIZED_SCENE(Local_899, Local_902, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
						{
							if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], uLocal_893, "missheistdocks2bleadinoutlsdh_2b_int", "action_floyd", 8f, -8f, 5, 16, 1148846080, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
						{
							if (!PED::IS_PED_INJURED(Global_86864.f_9[2]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iLocal_893, "missheistdocks2bleadinoutlsdh_2b_int", "action_trevor", 8f, -8f, 5, 16, 1148846080, 0);
							}
						}
						iLocal_898 = 1;
					}
				}
			}
			if (bLocal_897)
			{
				if (!GlobalFunc_111())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[3]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[3], 1);
						}
					}
					if (GlobalFunc_8315() == 2)
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Flush", -1148.903f, -1519.257f, 9.6327f, "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0, 0);
					}
					iLocal_896++;
				}
			}
			break;
		
		case 2:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			break;
	}
}












int func_222()//Position - 0x9E76
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
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
	return 0;
}

int func_223()//Position - 0x9ED4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_896 == 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_224()//Position - 0x9F10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_35(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_225(0);
	GlobalFunc_4593();
}

void func_225(bool bParam0)//Position - 0x9F59
{
	if (bParam0)
	{
		GlobalFunc_5211(&(Global_96066.f_35), 262144);
	}
	else
	{
		GlobalFunc_5312(&(Global_96066.f_35), 262144);
	}
}



void func_228()//Position - 0x9FA6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_229(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	func_225(0);
	GlobalFunc_4593();
}

void func_229(var uParam0)//Position - 0x9FEB
{
	var uVar0;
	var uVar1;
	
	GlobalFunc_8267(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*uParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
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

void func_230()//Position - 0xA0C3
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	if (GlobalFunc_8315() != 2)
	{
		GlobalFunc_6800(&(Global_86864.f_9[0]), 24, -1149.465f, -1519.378f, 10.6327f, 0, 1);
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(24));
		ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_9[0], 40);
		GlobalFunc_6800(&(Global_86864.f_9[1]), 32, -1148.442f, -1518.71f, 9.6327f, 0, 1);
		GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(32));
		ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_9[1], 40);
	}
	GlobalFunc_5168(0, 3, 1);
	GlobalFunc_5168(1, 3, 1);
	GlobalFunc_10686(53, 0);
	if (GlobalFunc_8315() == 2)
	{
		func_231(&(Global_86864.f_9[3]), 0, -1159.972f, -1524.687f, 6.7144f, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[3], 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_2B_HEIST_TOILET_FLUSH", false);
	}
	else if (GlobalFunc_8315() == 0)
	{
		func_231(&(Global_86864.f_9[2]), 2, Local_899, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
		ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_9[2], 40);
		if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tumbler_01_empty"), Local_899, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		iLocal_894 = PED::CREATE_SYNCHRONIZED_SCENE(Local_899, Local_902, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_894, 1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_86864.f_9[1], Global_86864.f_9[2], 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_894, "missheistdocks2bleadinoutlsdh_2b_int", "standing_loop_peda", 1000f, -8f, 5, 16, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_894, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_floyd", 1000f, -8f, 69, 16, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iLocal_894, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_trevor", 1000f, -8f, 69, 16, 1148846080, 0);
	}
	else if (GlobalFunc_8315() == 1)
	{
		func_231(&(Global_86864.f_9[2]), 2, Local_899, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
		ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_9[2], 40);
		func_231(&(Global_86864.f_9[3]), 0, Local_899, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
		ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[3], 0);
		if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tumbler_01_empty"), Local_899, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		iLocal_894 = PED::CREATE_SYNCHRONIZED_SCENE(Local_899, Local_902, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_894, 1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_86864.f_9[1], Global_86864.f_9[2], 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_894, "missheistdocks2bleadinoutlsdh_2b_int", "standing_loop_peda", 1000f, -1000f, 5, 16, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_894, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_b_floyd", 1000f, -1000f, 69, 16, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iLocal_894, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_b_trevor", 1000f, -1000f, 69, 16, 1148846080, 0);
		uLocal_895 = PED::CREATE_SYNCHRONIZED_SCENE(Local_899, Local_902, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_895, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], iLocal_895, "missheistdocks2bleadinoutlsdh_2b_int", "standing_loop_michael", 1000f, -8f, 5, 16, 1148846080, 0);
	}
	STREAMING::_0xF8155A7F03DDFC8E(3);
	GlobalFunc_6514(75, "LSDH_2B_INT", 124, 112, 0);
	func_225(1);
}

int func_231(var uParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xA54A
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, iParam5, 0, 0);
			GlobalFunc_8642(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_505(*uParam0);
			GlobalFunc_8021(*uParam0, 1, 0);
			GlobalFunc_8030(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_233(*uParam0, bParam8);
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


int func_233(int iParam0, bool bParam1)//Position - 0xA662
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_322(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7997(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_322(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_476(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 10))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 50))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 59))
			{
				func_476(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 22))
			{
				func_476(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10997(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 4))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 3))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 82))
			{
				func_476(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 76))
			{
				func_476(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 1))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10997(iParam0, 12, 12))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10997(iParam0, 3, 71))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 7))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 88))
			{
				func_476(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 17))
			{
				func_476(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_476(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

























































































void func_322(int iParam0, int iParam1)//Position - 0x2400B
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
				iVar1 = GlobalFunc_11122(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_333(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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











void func_333(int iParam0, var uParam1, bool bParam2)//Position - 0x2525B
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
				func_476(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11150(iParam0, iVar1, &iVar2))
			{
				func_476(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_336(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_336(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_336(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x254F2
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
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11124(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_336(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_336(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_336(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_336(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_336(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_336(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_336(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_336(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11124(iParam0, 8, -1), iParam2);
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
				GlobalFunc_11275(iParam0, iParam2, bParam11);
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
						iVar96 = GlobalFunc_7953(iParam0, iVar95);
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
						func_336(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_336(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_336(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_336(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11124(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11124(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_336(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_336(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
						func_336(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_336(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11202(iParam0, &uVar4))
		{
			func_336(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_336(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_336(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_336(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_336(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}












































































































































int func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x5024C
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
									iVar3 = GlobalFunc_11243(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
									func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11122(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11151(iParam0, iVar10, &iVar4, 1))
							{
								func_476(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_476(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_476(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_476(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_476(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_476(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_476(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
						func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			func_476(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11150(iParam0, iVar10, &iVar4))
		{
			func_476(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





























void func_505(int iParam0)//Position - 0x53E63
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
		func_333(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11122(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11122(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11122(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11122(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_333(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}
























int func_529()//Position - 0x589A8
{
	if ((((((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(24)) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(32))) && STREAMING::HAS_MODEL_LOADED(joaat("player_zero"))) && STREAMING::HAS_MODEL_LOADED(joaat("player_one"))) && STREAMING::HAS_MODEL_LOADED(joaat("player_two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2bleadinoutlsdh_2b_int")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_tumbler_01_empty")))
	{
		return 1;
	}
	return 0;
}

void func_530()//Position - 0x58A16
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(24));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(32));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_one"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tumbler_01_empty"));
	STREAMING::REMOVE_ANIM_DICT("missheistdocks2bleadinoutlsdh_2b_int");
}

void func_531()//Position - 0x58A5E
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(24));
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(32));
	STREAMING::REQUEST_MODEL(joaat("player_zero"));
	STREAMING::REQUEST_MODEL(joaat("player_one"));
	STREAMING::REQUEST_MODEL(joaat("player_two"));
	STREAMING::REQUEST_MODEL(joaat("prop_tumbler_01_empty"));
	STREAMING::REQUEST_ANIM_DICT("missheistdocks2bleadinoutlsdh_2b_int");
}

void func_532()//Position - 0x58AA6
{
	iLocal_896 = 0;
}


void func_534()//Position - 0x58ABA
{
	var uVar0;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.403f, -1524.314f, 9.53306f, -1153.922f, -1516.734f, 11.63272f, 4f, 0, 1, 0))
	{
		GlobalFunc_2536(1, 0);
	}
	switch (iLocal_716)
	{
		case 0:
			if (GlobalFunc_8315() == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.044f, -1517.907f, 9.432728f, -1150.391f, -1515.201f, 11.63273f, 9f, 0, 1, 0))
				{
					func_197();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					GlobalFunc_173(&uLocal_728, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					iLocal_716++;
				}
			}
			else if (GlobalFunc_8315() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.044f, -1517.907f, 9.432728f, -1150.391f, -1515.201f, 11.63273f, 5f, 0, 1, 0))
				{
					func_197();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					GlobalFunc_173(&uLocal_728, 0, Global_86864.f_9[2], "TREVOR", 0, 1);
					GlobalFunc_173(&uLocal_728, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					iLocal_716++;
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.813f, -1520.602f, 9.432723f, -1153.76f, -1516.677f, 11.63272f, 4f, 0, 1, 0))
				{
					func_197();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					GlobalFunc_173(&uLocal_728, 0, Global_86864.f_9[2], "TREVOR", 0, 1);
					GlobalFunc_173(&uLocal_728, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					iLocal_716++;
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_116(0))
			{
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_10618(&uLocal_728, "D2AAUD", "DH2A_INT_LI1", 7, 0, 0, 0))
					{
						iLocal_716++;
					}
				}
				else if (GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_10630(&uLocal_728, "D2AAUD", "DH2A_INT_LI2", "DH2A_INT_LI2_3", 7, 0, 0))
					{
						iLocal_716++;
					}
				}
				else if (GlobalFunc_8315() == 1)
				{
					if (!iLocal_717)
					{
						if (GlobalFunc_10630(&uLocal_728, "D2AAUD", "DH2A_INT_LI3", "DH2A_INT_LI3_3", 7, 0, 0))
						{
							iLocal_718 = MISC::GET_GAME_TIMER() + 5000;
							iLocal_717 = 1;
						}
					}
					else if (!GlobalFunc_111())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.044f, -1517.907f, 9.432728f, -1150.391f, -1515.201f, 11.63273f, 5f, 0, 1, 0) || MISC::GET_GAME_TIMER() > iLocal_718)
						{
							if (GlobalFunc_10630(&uLocal_728, "D2AAUD", "DH2A_INT_LI3", "DH2A_INT_LI3_5", 7, 0, 0))
							{
								iLocal_716++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1153.109f, -1517.931f, 9.6327f, 1f, -1, 1048576000, 1, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1156.726f, -1520.17f, 9.6327f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			GlobalFunc_8641(&uLocal_719);
			if (GlobalFunc_8315() == 2)
			{
				fLocal_715 = 3.65f;
			}
			else if (GlobalFunc_8315() == 1)
			{
				fLocal_715 = 2.3f;
			}
			else if (GlobalFunc_8315() == 0)
			{
				fLocal_715 = 1.2f;
			}
			iLocal_716++;
			break;
		
		case 3:
			GlobalFunc_2536(1, 0);
			func_541();
			if (GlobalFunc_8315() == 2)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_708) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_709))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.906f, -1517.456f, 9.632723f, -1149.402f, -1518.129f, 11.63272f, 2f, 0, 1, 0))
					{
						iLocal_709 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722, Local_725, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_709, "missheistdocks2aleadinoutlsdh_2a_int", "action_wade", 8f, -8f, 0, 0, 1148846080, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
						{
							if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_709, "missheistdocks2aleadinoutlsdh_2a_int", "action_floyd", 8f, -8f, 0, 0, 1148846080, 0);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_714, 0))
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.906f, -1517.456f, 9.632723f, -1149.402f, -1518.129f, 11.63272f, 2f, 0, 1, 0))
					{
						CAM::SET_GAMEPLAY_COORD_HINT(-1159.883f, -1522.024f, 10.5408f, 2000, 2500, 2000, 0);
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.2f);
						MISC::SET_BIT(&iLocal_714, 0);
					}
				}
			}
			if (GlobalFunc_8315() == 2)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_709))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_709) > 0.95f)
					{
						uLocal_710 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722, Local_725, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_710, "missheistdocks2aleadinoutlsdh_2a_int", "stand_loop_wade", 8f, -8f, 64, 0, 1148846080, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
						{
							if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_710, "missheistdocks2aleadinoutlsdh_2a_int", "stand_loop_floyd", 8f, -8f, 64, 0, 1148846080, 0);
							}
						}
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_710, 1);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1155.075f, -1519.585f, 9.432723f, -1157.799f, -1521.592f, 11.63272f, 8f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1155.075f, -1519.585f, 9.432723f, -1157.799f, -1521.592f, 11.63272f, 8f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			else if (GlobalFunc_8315() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1155.075f, -1519.585f, 9.432723f, -1157.799f, -1521.592f, 11.63272f, 8f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			if (GlobalFunc_5425(&uLocal_719) > fLocal_715)
			{
				iLocal_716++;
			}
			break;
		
		case 4:
			break;
	}
	if (GlobalFunc_2203(3))
	{
		if (!GlobalFunc_2799(3))
		{
			GlobalFunc_5649(3, 2, 2, 0, 0);
			GRAPHICS::SET_TV_VOLUME(-25f);
		}
	}
}







void func_541()//Position - 0x59395
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5f))
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 0, 0, 1, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 1000, 1);
		}
	}
}






int func_547()//Position - 0x59485
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
		{
			if (PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
			{
				return 1;
			}
			else
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[iVar0], 1), 5f))
				{
					ENTITY::SET_ENTITY_HEALTH(Global_86864.f_9[iVar0], 0);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_548()//Position - 0x5950E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_716 == 4)
		{
			GlobalFunc_4935();
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			return 1;
		}
	}
	return 0;
}


void func_550()//Position - 0x5954C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_35(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_4593();
}

void func_551()//Position - 0x5958D
{
	int iVar0;
	
	if (GlobalFunc_8315() == 2)
	{
		func_35(&(Global_86864.f_9[3]));
		func_35(&(Global_86864.f_9[4]));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_229(&(Global_86864.f_9[iVar0]));
			iVar0++;
		}
	}
	else if (GlobalFunc_8315() == 0)
	{
		func_35(&(Global_86864.f_9[4]));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_229(&(Global_86864.f_9[iVar0]));
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_229(&(Global_86864.f_9[iVar0]));
			iVar0++;
		}
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_4593();
}

void func_552()//Position - 0x59655
{
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-1164.574f, -1533.097f, 5.41414f, -1140.268f, -1504.865f, 13.82142f, 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PEDS(-1156.248f, -1520.397f, 9.63273f, 6f, 0);
	MISC::CLEAR_AREA_OF_PEDS(-1148.879f, -1515.722f, 9.64032f, 6f, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	GlobalFunc_6800(&(Global_86864.f_9[0]), 24, Local_722, 0, 1);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(24));
	GlobalFunc_6800(&(Global_86864.f_9[1]), 32, Local_722, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 11, 0, 0, 0);
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(32));
	GlobalFunc_5168(0, 3, 1);
	GlobalFunc_5168(1, 3, 1);
	GlobalFunc_10686(53, 0);
	if (GlobalFunc_8315() == 2)
	{
		iLocal_708 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722, Local_725, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_708, "missheistdocks2aleadinoutlsdh_2a_int", "Sitting_loop_Wade", 1000f, -8f, 0, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_708, "missheistdocks2aleadinoutlsdh_2a_int", "Sitting_loop_Floyd", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_708, 1);
		func_231(&(Global_86864.f_9[3]), 0, Local_722, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[3], 0);
		ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[3], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
		func_231(&(Global_86864.f_9[4]), 1, Local_722, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[4], Global_86864.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[4], 0);
		ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[4], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_one"));
	}
	else if (GlobalFunc_8315() == 0)
	{
		func_231(&(Global_86864.f_9[2]), 2, Local_722, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
		func_231(&(Global_86864.f_9[4]), 1, Local_722, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[4], Global_86864.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[4], 0);
		ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[4], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_one"));
		uLocal_711 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722 + Vector(0f, -0.2f, 0.2f), Local_725, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_711, "missheistdocks2aleadinoutlsdh_2a_int", "cleaning_wade", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_711, 1);
		uLocal_712 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722, Local_725, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], uLocal_712, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_floyd", 1000f, -8f, 0, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iLocal_712, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_trevor", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_712, 1);
	}
	else if (GlobalFunc_8315() == 1)
	{
		func_231(&(Global_86864.f_9[2]), 2, Local_722, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
		func_231(&(Global_86864.f_9[3]), 0, Local_722, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
		iLocal_711 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722 + Vector(0f, -0.2f, 0.2f), Local_725, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_711, "missheistdocks2aleadinoutlsdh_2a_int", "cleaning_wade", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_711, 1);
		iLocal_712 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722, Local_725, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_712, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_2_floyd", 1000f, -8f, 0, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iLocal_712, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_2_trevor", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_712, 1);
		uLocal_713 = PED::CREATE_SYNCHRONIZED_SCENE(Local_722, Local_725, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], uLocal_713, "missheistdocks2aleadinoutlsdh_2a_int", "sitting_loop_michael", 1000f, -8f, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_713, 1);
	}
	GlobalFunc_6514(74, "LSDH_2A_INT", 60, 48, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		func_553(74, "Wade", Global_86864.f_9[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		func_553(74, "Floyd", Global_86864.f_9[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
	{
		func_553(74, "Trevor", Global_86864.f_9[2]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
	{
		func_553(74, "Michael", Global_86864.f_9[3]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
	{
		func_553(74, "Franklin", Global_86864.f_9[4]);
	}
	MISC::CLEAR_BIT(&iLocal_714, 0);
}

void func_553(int iParam0, char* sParam1, var uParam2)//Position - 0x59CC4
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



int func_556()//Position - 0x59E8B
{
	if ((((((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(24)) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(32))) && STREAMING::HAS_MODEL_LOADED(joaat("player_zero"))) && STREAMING::HAS_MODEL_LOADED(joaat("player_one"))) && STREAMING::HAS_MODEL_LOADED(joaat("player_two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2aleadinoutlsdh_2a_int")) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(-1158.341f, -1520.893f, 9.6345f)))
	{
		return 1;
	}
	return 0;
}

void func_557()//Position - 0x59F08
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(24));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(32));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_one"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
	STREAMING::REMOVE_ANIM_DICT("missheistdocks2aleadinoutlsdh_2a_int");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(-1158.341f, -1520.893f, 9.6345f));
}

void func_558()//Position - 0x59F6A
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(24));
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(32));
	STREAMING::REQUEST_MODEL(joaat("player_zero"));
	STREAMING::REQUEST_MODEL(joaat("player_one"));
	STREAMING::REQUEST_MODEL(joaat("player_two"));
	STREAMING::REQUEST_ANIM_DICT("missheistdocks2aleadinoutlsdh_2a_int");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(-1158.341f, -1520.893f, 9.6345f));
}

void func_559()//Position - 0x59FC1
{
	iLocal_716 = 0;
	iLocal_714 = 0;
}


void func_561()//Position - 0x59FD9
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", 0);
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Global_86864[2] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iLocal_1078 == 0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				iLocal_1077 = MISC::GET_GAME_TIMER();
				iLocal_1078 = 1;
			}
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed"))
			{
				iLocal_1077 = MISC::GET_GAME_TIMER();
				iLocal_1078 = 1;
			}
		}
	}
}




int func_565()//Position - 0x5A09D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0))
		{
			return 1;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1589.7f, 2794.7f, 16f, 1) < 40f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1590.458f, 2780.463f, 14.90755f, -1575.295f, 2794.16f, 20.15739f, 19f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2306.4f, 3389f, 30f, 1) < 40f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2309.718f, 3387.245f, 29.21989f, -2293.503f, 3375.455f, 34.32692f, 7.75f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2297.019f, 3387.863f, 29.5446f, -2282.235f, 3376.637f, 34.745f, 9f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 1) < 25f)
				{
					if (PED::CAN_PED_SEE_HATED_PED(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_1078 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_1077 + 3000)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
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
	return 0;
}



void func_568()//Position - 0x5B01E
{
	func_172(&(Global_86864[0]));
	func_172(&(Global_86864[1]));
	func_172(&(Global_86864[2]));
	func_35(&(Global_86864.f_9[0]));
	func_35(&(Global_86864.f_9[1]));
	VEHICLE::_0x0A436B8643716D14();
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1079);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1076, 0);
}

void func_569()//Position - 0x5B078
{
	func_49(&(Global_86864[0]));
	func_49(&(Global_86864[1]));
	func_49(&(Global_86864[2]));
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			PED::SET_PED_KEEP_TASK(Global_86864.f_9[0], 1);
			func_229(&(Global_86864.f_9[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
		{
			PED::SET_PED_KEEP_TASK(Global_86864.f_9[1], 1);
			func_229(&(Global_86864.f_9[1]));
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1079);
}

void func_570()//Position - 0x5B120
{
	if (GlobalFunc_8315() != 2)
	{
		GlobalFunc_6677("TRIG_T", 0, 0, -1, 10000, 7, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("MarineLeadInGroupHash", &iLocal_1079);
	Global_24709[0 /*7*/].f_6 = 1;
	MISC::CLEAR_AREA(-1876.8f, 2806.1f, 32.3f, 8f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(-1857.7f, 2797.9f, 32.4f, 8f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(-1591.7f, 2799.5f, 16.1f, 3f, 1, 0, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-1593f, 2797.5f, 19f, -1590.7f, 2802.6f, 15.4f);
	PED::SET_PED_NON_CREATION_AREA(-2308.3f, 3386.6f, 32.5f, -2305.9f, 3392.5f, 29.4f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1);
	uLocal_1076 = PED::ADD_SCENARIO_BLOCKING_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		MISC::CLEAR_AREA(-2145.486f, 3018.294f, 31.81f, 10f, 1, 0, 0, 0);
		Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), -2145.486f, 3018.294f, 31.81f, 330.4836f, 1, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_86864[0], 0);
		ENTITY::FREEZE_ENTITY_POSITION(Global_86864[0], 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[0], 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
	{
		MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
		Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_86864[1], 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[1], 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[1], 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[1]);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[0], 1);
		WEAPON::GIVE_WEAPON_TO_PED(Global_86864.f_9[0], joaat("weapon_assaultrifle"), 2000, 1, 1);
		PED::SET_PED_ACCURACY(Global_86864.f_9[0], 10);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[0], iLocal_1079);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[1], 1);
		WEAPON::GIVE_WEAPON_TO_PED(Global_86864.f_9[1], joaat("weapon_assaultrifle"), 2000, 1, 1);
		PED::SET_PED_ACCURACY(Global_86864.f_9[1], 10);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[0], iLocal_1079);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1079, 1862763509);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
}

int func_571()//Position - 0x5B4C2
{
	if ((STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
	{
		return 1;
	}
	return 0;
}

void func_572()//Position - 0x5B4F7
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
}

void func_573()//Position - 0x5B51A
{
	STREAMING::REQUEST_MODEL(joaat("cargobob"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("buzzard"));
}

void func_574()//Position - 0x5B53D
{
	iLocal_1077 = 0;
	iLocal_1078 = 0;
}


void func_576()//Position - 0x5B555
{
	if (!Global_86864.f_357)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_86864.f_28[0]))
				{
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_86864.f_28[1]))
					{
						PHYSICS::SET_CG_AT_BOUNDCENTER(Global_86864[0]);
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[0])))
						{
							Global_86864.f_37[0] = PHYSICS::ADD_ROPE(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, 0, 0, 0, 2f, 1, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_86864.f_37[0], Global_86864.f_28[0], Global_86864[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864.f_28[0], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864[0], 1.8f, 1.02f, 1.11f), 5f, 0, 0, 0, 0);
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[1])))
						{
							Global_86864.f_37[1] = PHYSICS::ADD_ROPE(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, 0, 0, 0, 2f, 1, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_86864.f_37[1], Global_86864.f_28[0], Global_86864[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864.f_28[0], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864[0], -1.8f, 1.02f, 1.11f), 3f, 0, 0, 0, 0);
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[2])))
						{
							Global_86864.f_37[2] = PHYSICS::ADD_ROPE(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, 0, 0, 0, 2f, 1, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_86864.f_37[2], Global_86864.f_28[1], Global_86864[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864.f_28[1], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864[0], 1.8f, -3.07f, 1.11f), 3f, 0, 0, 0, 0);
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[3])))
						{
							Global_86864.f_37[3] = PHYSICS::ADD_ROPE(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, 0, 0, 0, 2f, 1, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_86864.f_37[3], Global_86864.f_28[1], Global_86864[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864.f_28[1], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864[0], -1.8f, -3.07f, 1.11f), 3f, 0, 0, 0, 0);
						}
						if (((PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[0])) && PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[1]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[2]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[3])))
						{
							Global_86864.f_357 = 1;
							iLocal_707 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_707)
	{
		if (((PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[0])) && PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[1]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[2]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[3])))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_86864[0], 0);
					PHYSICS::ACTIVATE_PHYSICS(Global_86864[0]);
					iLocal_707 = 0;
				}
			}
		}
	}
	if (!iLocal_706)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[3]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0])) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_86864.f_28[3]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[3], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
	}
}



int func_579()//Position - 0x5B9AD
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	
	Var0 = { 1240.068f, -3009.082f, 8.31891f };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar3 < (150f * 150f))
			{
				return 1;
			}
		}
		else if (fVar3 < (90f * 90f))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(Global_86864[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar4 = 0;
		while (iVar4 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			if (PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[iVar5])))
			{
				if (!PHYSICS::_0x84DE3B5FB3E666F0(&(Global_86864.f_37[iVar5])))
				{
					return 1;
				}
			}
			iVar5++;
		}
	}
	return 0;
}

void func_580()//Position - 0x5BADB
{
	if (Global_86864.f_357)
	{
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[0]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[0]));
		}
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[1]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[1]));
		}
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[2]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[2]));
		}
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[3]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[3]));
		}
		Global_86864.f_357 = 0;
	}
	func_172(&(Global_86864[0]));
	func_35(&(Global_86864.f_9[0]));
	func_35(&(Global_86864.f_9[1]));
	func_50(&(Global_86864.f_28[0]));
	func_50(&(Global_86864.f_28[1]));
	func_50(&(Global_86864.f_28[2]));
	func_50(&(Global_86864.f_28[3]));
	iLocal_706 = 0;
}

void func_581()//Position - 0x5BBC6
{
	if (Global_86864.f_357)
	{
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[0]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[0]));
		}
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[1]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[1]));
		}
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[2]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[2]));
		}
		if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(Global_86864.f_37[3]))
		{
			PHYSICS::DELETE_ROPE(&(Global_86864.f_37[3]));
		}
		Global_86864.f_357 = 0;
	}
	func_49(&(Global_86864[0]));
	func_582(&(Global_86864.f_9[0]));
	func_582(&(Global_86864.f_9[1]));
	func_51(&(Global_86864.f_28[0]));
	func_51(&(Global_86864.f_28[1]));
	func_51(&(Global_86864.f_28[2]));
	func_51(&(Global_86864.f_28[3]));
}

void func_582(var uParam0)//Position - 0x5BCAD
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

void func_583()//Position - 0x5BD34
{
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("submersible"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864[0], 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[0], 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[0], 0);
	Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 1, 1);
	TASK::TASK_PLAY_ANIM(Global_86864.f_9[0], "cellphone@str", "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Global_86864.f_9[0], 512, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_86864.f_9[0], 17, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
	AUDIO::STOP_PED_SPEAKING(Global_86864.f_9[0], 1);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, 1, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[0], 1);
	Global_86864.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, 1, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[1], 1);
	Global_86864.f_28[2] = OBJECT::CREATE_OBJECT(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[2], 0f, 0f, 90f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[2], 1);
	Global_86864.f_28[3] = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, 1, 1, 0);
	Global_86864.f_357 = 0;
	iLocal_707 = 0;
	iLocal_706 = 0;
}

int func_584()//Position - 0x5BEFE
{
	if (((((((((STREAMING::HAS_MODEL_LOADED(joaat("submersible")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_sub_release"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01"))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_phone_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@str")) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocksprep1ig_1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
	{
		return 1;
	}
	return 0;
}

void func_585()//Position - 0x5BF8C
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("submersible"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sub_release"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_dockwork_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("missheistdocksprep1ig_1");
	PHYSICS::ROPE_UNLOAD_TEXTURES();
}

void func_586()//Position - 0x5BFD7
{
	STREAMING::REQUEST_MODEL(joaat("submersible"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_sub_release"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
	STREAMING::REQUEST_MODEL(joaat("p_amb_phone_01"));
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP1", 0);
	STREAMING::REQUEST_ANIM_DICT("cellphone@str");
	STREAMING::REQUEST_ANIM_DICT("missheistdocksprep1ig_1");
	TASK::REQUEST_WAYPOINT_RECORDING("docksprep1");
	PHYSICS::ROPE_LOAD_TEXTURES();
}



void func_589()//Position - 0x5C049
{
	if (iLocal_698)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1145.479f, -1512.777f, 9.403284f, -1160.305f, -1523.243f, 12.63273f, 7.75f, 0, 1, 0))
		{
			GlobalFunc_76(7);
			iLocal_698 = 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_104(7)))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1145.479f, -1512.777f, 9.403284f, -1160.305f, -1523.243f, 12.63273f, 7.75f, 0, 1, 0))
		{
			GlobalFunc_7695(7);
			iLocal_698 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.29f, -1524.255f, 9.363565f, -1151.24f, -1520.052f, 12.88272f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1147.681f, -1522.99f, 6.38306f, -1144.043f, -1520.518f, 9.938194f, 1.5f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (GlobalFunc_8315() == 2)
	{
		if (iLocal_696 == 0)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.284f, -1524.21f, 9.132868f, -1150.174f, -1521.547f, 12.13273f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.298f, -1524.264f, 8.892135f, -1150.187f, -1521.567f, 11.88301f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.387f, -1524.254f, 8.883018f, -1146.503f, -1522.315f, 12.25284f, 2.25f, 0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1160.324f, -1522.265f, 8.382723f, -1152.146f, -1517.005f, 12.88272f, 5f, 0, 1, 0))
	{
		CAM::SET_GAMEPLAY_COORD_HINT(Local_700, -1, 2000, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_703);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_704);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_705);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.35f, -1521.426f, 9.132723f, -1151.579f, -1519.681f, 12.63272f, 2.25f, 0, 1, 0))
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
	}
	if ((GlobalFunc_2203(3) && !GlobalFunc_2799(3)) && !GlobalFunc_2202(3))
	{
		GlobalFunc_5649(3, 0, 10, 0, 1);
		GRAPHICS::SET_TV_VOLUME(-25f);
	}
	switch (iLocal_696)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.638f, -1522.367f, 9.382867f, -1151.354f, -1519.901f, 12.38273f, 1.5f, 0, 1, 0) && GlobalFunc_8315() == 2)
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[1]))
				{
					func_197();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					uLocal_695 = PED::CREATE_SYNCHRONIZED_SCENE(Local_689, Local_692, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_695, "missheistdockssetup1leadinout", "lsdh_int_leadin_action_floyd", 8f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_695, "missheistdockssetup1leadinout", "lsdh_int_leadin_action_wade", 8f, -8f, 1, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_695, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_695, 1f);
					bLocal_697 = false;
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					iLocal_696++;
				}
			}
			break;
		
		case 1:
			if (bLocal_697 == 0)
			{
				if (GlobalFunc_10618(&uLocal_524, "D1AUD", "DS1_LDI", 8, 0, 0, 0))
				{
					bLocal_697 = true;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_695))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[1]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_695) == 1f)
					{
						iLocal_695 = PED::CREATE_SYNCHRONIZED_SCENE(Local_689, Local_692, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_695, "missheistdockssetup1leadinout", "lsdh_int_leadin_react_floyd", 8f, -8f, 1, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_695, "missheistdockssetup1leadinout", "lsdh_int_leadin_react_wade", 8f, -8f, 1, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_695, 0);
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_695, 1f);
						iLocal_696++;
					}
				}
			}
			break;
		
		case 2:
			if (bLocal_697 == 0)
			{
				if (GlobalFunc_10618(&uLocal_524, "D1AUD", "DS1_LDI", 8, 0, 0, 0))
				{
					bLocal_697 = true;
				}
			}
			if (bLocal_697)
			{
				if (!GlobalFunc_111())
				{
					iLocal_696++;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_695))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_695) > 0.7f)
				{
					iLocal_696++;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_695))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_695) > 0.55f)
				{
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1156.52f, -1520.618f, 9.382729f, -1157.289f, -1519.429f, 12.63273f, 1f, 0, 1, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			}
			break;
		
		case 3:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			break;
	}
}


















int func_607()//Position - 0x5E53E
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
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		if (PED::IS_PED_INJURED(Global_86864.f_9[1]))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[1], PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_608()//Position - 0x5E5C7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_696 == 3)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_609()//Position - 0x5E603
{
	func_35(&(Global_86864.f_9[0]));
	GlobalFunc_200(&uLocal_524, 3);
	func_35(&(Global_86864.f_9[1]));
	GlobalFunc_200(&uLocal_524, 4);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", 0, 1065353216, 1056964608);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_7621(145, 0, 0, 0, 0);
	GlobalFunc_7621(146, 0, 0, 0, 0);
	if (iLocal_698)
	{
		GlobalFunc_76(7);
		iLocal_698 = 0;
	}
	GlobalFunc_4593();
}







void func_616()//Position - 0x62A16
{
	func_229(&(Global_86864.f_9[0]));
	GlobalFunc_200(&uLocal_524, 3);
	func_229(&(Global_86864.f_9[1]));
	GlobalFunc_200(&uLocal_524, 4);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", 0, 1065353216, 1056964608);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	if (iLocal_699 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_699);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (iLocal_698)
	{
		GlobalFunc_76(7);
		iLocal_698 = 0;
	}
	GlobalFunc_4593();
}

void func_617()//Position - 0x62A9B
{
	MISC::CLEAR_AREA(GlobalFunc_2247(216, 0), 25f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	GlobalFunc_6800(&(Global_86864.f_9[0]), 32, -1159.71f, -1521.33f, 10.65f, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 11, 0, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(32));
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	GlobalFunc_173(&uLocal_524, 3, Global_86864.f_9[0], "FLOYD", 0, 1);
	GlobalFunc_6800(&(Global_86864.f_9[1]), 24, -1158.07f, -1520.9f, 10.65f, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 3, 3, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 4, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 9, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 10, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 11, 0, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(24));
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	GlobalFunc_173(&uLocal_524, 4, Global_86864.f_9[1], "WADE", 0, 1);
	GlobalFunc_173(&uLocal_524, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_695 = PED::CREATE_SYNCHRONIZED_SCENE(Local_689, Local_692, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_695, "missheistdockssetup1leadinout", "lsdh_int_leadin_loop_floyd", 1000f, -8f, 0, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_695, "missheistdockssetup1leadinout", "lsdh_int_leadin_loop_wade", 1000f, -8f, 0, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_695, 1);
	iLocal_696 = 0;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", 1, 1065353216, 1056964608);
	GlobalFunc_6514(71, "LSDH_INT", -1, -1, 0);
	func_553(71, "FLOYD", Global_86864.f_9[0]);
	func_553(71, "WADE", Global_86864.f_9[1]);
	GlobalFunc_7621(145, 2, 0, 1, 0);
	GlobalFunc_7621(146, 1, 0, 1, 0);
}

int func_618()//Position - 0x62DF8
{
	return func_619(&(Global_86864.f_209));
}

int func_619(var uParam0)//Position - 0x62E0A
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
			if (!func_620(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_620(var uParam0)//Position - 0x62E6C
{
	return func_621(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_621(int iParam0, char* sParam1, int iParam2)//Position - 0x62E83
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

void func_622()//Position - 0x62F76
{
	func_623(&(Global_86864.f_209), 0);
	if (iLocal_699 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_699);
	}
	if (iLocal_698)
	{
		GlobalFunc_76(7);
		iLocal_698 = 0;
	}
}

void func_623(var uParam0, bool bParam1)//Position - 0x62FA6
{
	int iVar0;
	
	if (!bParam1)
	{
		func_625(uParam0);
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


void func_625(var uParam0)//Position - 0x62FFA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_626(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_626(var uParam0)//Position - 0x63033
{
	GlobalFunc_6519(*uParam0, &(uParam0->f_2), uParam0->f_1);
}


void func_628()//Position - 0x6310A
{
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(24));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(32));
	GlobalFunc_6491(&(Global_86864.f_209), "missheistdockssetup1leadinout");
	func_631(&(Global_86864.f_209), "d1leadin");
	func_629(&(Global_86864.f_209), "DOCKH1", 0, 0);
	func_629(&(Global_86864.f_209), "D1AUD", 6, 0);
}

void func_629(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x63172
{
	int iVar0;
	
	if (bParam3)
	{
		MISC::SET_BIT(&iVar0, 26);
	}
	GlobalFunc_4529(uParam0, 8, iParam2, sParam1, iVar0);
}


void func_631(var uParam0, char* sParam1)//Position - 0x6327D
{
	GlobalFunc_4529(uParam0, 5, -1, sParam1, 0);
}



void func_634()//Position - 0x632B7
{
	iLocal_698 = 0;
}


void func_636()//Position - 0x632CB
{
	GlobalFunc_10686(47, 4);
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.20067f, -1443.825f, 31.18375f, 4f, 5f, 1.75f, 0, 1, 0))
	{
		GlobalFunc_2536(1, 0);
	}
}



int func_639()//Position - 0x63316
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.24382f, -1441.824f, 30.89186f, 2.5f, 3.5f, 1.5f, 0, 1, 0))
		{
			func_197();
			return 1;
		}
	}
	return 0;
}





void func_644()//Position - 0x63380
{
	STREAMING::REMOVE_ANIM_DICT("misstimelapse@franklinold_home");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_fa_frontdoor"));
}

void func_645()//Position - 0x6339A
{
	STREAMING::REQUEST_ANIM_DICT("misstimelapse@franklinold_home");
	STREAMING::REQUEST_MODEL(joaat("v_ilev_fa_frontdoor"));
}



void func_648()//Position - 0x633C4
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { GlobalFunc_2247(201, GlobalFunc_8315()) };
		if (!MISC::IS_BIT_SET(uLocal_1451, 3))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0) < (90f * 90f))
			{
				GlobalFunc_6514(41, "FRANKLIN_1_INT", -1, 0, 14);
				GlobalFunc_6516(41, "Lamar", 0, 0, 0);
				GlobalFunc_6516(41, "Lamar", 1, 0, 0);
				GlobalFunc_6516(41, "Lamar", 2, 0, 0);
				GlobalFunc_6516(41, "Lamar", 3, 2, 1);
				GlobalFunc_6516(41, "Lamar", 4, 5, 0);
				GlobalFunc_6516(41, "Lamar", 5, 0, 0);
				GlobalFunc_6516(41, "Lamar", 6, 1, 0);
				GlobalFunc_6516(41, "Lamar", 7, 0, 0);
				GlobalFunc_6516(41, "Lamar", 8, 0, 0);
				GlobalFunc_6516(41, "Lamar", 9, 0, 0);
				GlobalFunc_6516(41, "Lamar", 10, 1, 2);
				GlobalFunc_6516(41, "Chop", 3, 0, GlobalFunc_2578());
				MISC::SET_BIT(&iLocal_1451, 3);
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0) > (120f * 120f))
		{
			GlobalFunc_4593();
			MISC::CLEAR_BIT(&iLocal_1451, 3);
		}
		if (!MISC::IS_BIT_SET(iLocal_1451, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -15.34787f, -1442.365f, 29.11303f, -14.26101f, -1455.566f, 32.44184f, 14f, 0, 1, 0))
				{
					if (GlobalFunc_113(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 5f, 1, 1056964608, 0, 1))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						MISC::SET_BIT(&iLocal_1451, 1);
					}
				}
			}
		}
	}
	switch (GlobalFunc_8315())
	{
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 84.51381f, -1959.555f, 19.62684f, 86.77345f, -1956.918f, 22.74916f, 3.5f, 0, 1, 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -11.65f, -1446.85f, 29.725f, 1) < 3f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
				{
					PED::SET_PED_CAPSULE(Global_86864.f_9[0], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[0], 129, 1);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[0], 249, 1);
					if (MISC::IS_BIT_SET(iLocal_1451, 2))
					{
						func_650();
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_loop_denise", 3))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -12.73619f, -1456.807f, 28.92205f, -14.03528f, -1441.362f, 33.10773f, 12f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -19.77248f, -1442.888f, 29.15791f, -19.23627f, -1450.451f, 32.59698f, 7.5f, 0, 1, 0)) && !GlobalFunc_4600(-12.73619f, -1456.807f, 28.92205f, -14.03528f, -1441.362f, 33.10773f, 12f))
							{
								func_197();
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									MISC::SET_BIT(&iLocal_1451, 2);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -23.82611f, -1454.173f, 29.23097f, -5.332073f, -1452.457f, 32.55205f, 8f, 0, 1, 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -14.3153f, -1449.739f, 29.6177f, 1f, 60000, 0.25f, 513, 358.6017f);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2048, 2);
									}
								}
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2048, 2);
								TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise", -11.65f, -1446.85f, 29.725f, 0f, 0f, -2.52f, 2f, -2f, -1, 790538, 0, 2, 1);
							}
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise", 3))
					{
						if (!MISC::IS_BIT_SET(iLocal_1451, 0))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_86864.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise") >= 0.25f || ENTITY::HAS_ANIM_EVENT_FIRED(Global_86864.f_9[0], MISC::GET_HASH_KEY("START_AUDIO")))
							{
								if (GlobalFunc_10618(&(Global_86864.f_44), "FKN1AUD", "F1_INTLF", 12, 0, 0, 0))
								{
									MISC::SET_BIT(&iLocal_1451, 0);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
				{
					PED::SET_PED_CAPSULE(Global_86864.f_9[0], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[0], 129, 1);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[0], 249, 1);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_denise", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_talk_denise", 3))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -13.85061f, -1442.33f, 29.10537f, -13.0564f, -1455.565f, 32.44538f, 12f, 0, 1, 0) && !GlobalFunc_4600(-13.85061f, -1442.33f, 29.10537f, -13.0564f, -1455.565f, 32.44538f, 12f))
							{
								func_197();
								MISC::SET_BIT(&iLocal_1451, 0);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
				{
					PED::SET_PED_CAPSULE(Global_86864.f_9[1], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[1], 129, 1);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[1], 249, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[2]))
				{
					PED::SET_PED_CAPSULE(Global_86864.f_9[2], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[2], 129, 1);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[2], 249, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[3]))
				{
					PED::SET_PED_CAPSULE(Global_86864.f_9[3], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[3], 129, 1);
					PED::SET_PED_RESET_FLAG(Global_86864.f_9[3], 249, 1);
				}
			}
			break;
	}
}


void func_650()//Position - 0x63B0C
{
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_GAMEPLAY_HINT_FOV(35.2f);
		CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0f);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.4f);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-4f);
	}
}




int func_654()//Position - 0x63BFC
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
			{
				return 1;
			}
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if ((PED::IS_PED_INJURED(Global_86864.f_9[iVar0]) || PED::IS_PED_RAGDOLL(Global_86864.f_9[iVar0])) || FIRE::IS_ENTITY_ON_FIRE(Global_86864.f_9[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_655()//Position - 0x63C93
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (GlobalFunc_8315())
		{
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
					{
						if (MISC::IS_BIT_SET(iLocal_1451, 0))
						{
							if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise", 3) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_86864.f_9[0], MISC::GET_HASH_KEY("START_CS"))) || !GlobalFunc_111())
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(Global_86864.f_9[0]);
									PED::SET_PED_CAPSULE(Global_86864.f_9[0], 0f);
									func_679();
									PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
									return 1;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
					{
						if (MISC::IS_BIT_SET(iLocal_1451, 0))
						{
							if (!GlobalFunc_111())
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(Global_86864.f_9[0]);
									func_679();
									PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
									return 1;
								}
							}
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_656()//Position - 0x63DCA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_35(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		func_172(&(Global_86864[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
	{
		func_50(&(Global_86864.f_28[0]));
	}
	GlobalFunc_4593();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
}

void func_657()//Position - 0x63E30
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_229(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		func_49(&(Global_86864[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
	{
		func_51(&(Global_86864.f_28[0]));
	}
	GlobalFunc_4593();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
}

void func_658()//Position - 0x63E96
{
	var uVar0;
	
	switch (GlobalFunc_8315())
	{
		case 1:
			MISC::CLEAR_AREA(-12.73f, -1445.93f, 29.7f, 2f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(-19.05f, -1455.47f, 29.51f, 2f, 1, 0, 0, 0);
			break;
		
		case 2:
			MISC::CLEAR_AREA(-13.93f, -1446.32f, 29.65f, 2f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(-19.05f, -1455.47f, 29.51f, 2f, 1, 0, 0, 0);
			break;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::ADD_RELATIONSHIP_GROUP("FRANKLIN_1_TS_RELGROUP", &(Global_86864.f_42));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_86864.f_42, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_86864.f_42);
	switch (GlobalFunc_8315())
	{
		case 1:
			if (func_665(&(Global_86864[0]), 19, -19.1293f, -1455.206f, 29.5073f, 94.6991f, 1, 0))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[0]);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[0], 2);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[0], 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_5112(19, 0));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				GlobalFunc_4598(Global_86864.f_9[0]);
				func_661(Global_86864.f_9[0]);
				TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_loop_denise", -11.65f, -1446.85f, 29.725f, 0f, 0f, -2.52f, 1000f, -2f, -1, 790529, 0, 2, 1);
				GlobalFunc_173(&(Global_86864.f_44), 8, Global_86864.f_9[0], "DENISE", 0, 1);
			}
			MISC::CLEAR_BIT(&iLocal_1451, 0);
			Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_trowel"), -12.899f, -1446.51f, 29.6976f, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_86864.f_28[0], 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			break;
		
		case 2:
			if (func_665(&(Global_86864[0]), 19, -19.1293f, -1455.206f, 29.5073f, 94.6991f, 1, 0))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[0]);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[0], 2);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[0], 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_5112(19, 0));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				GlobalFunc_4598(Global_86864.f_9[0]);
				func_661(Global_86864.f_9[0]);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_denise", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -1000f, -1, 790528, 0, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_talk_denise", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -1000f, -1, 790528, 0, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uVar0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_86864.f_9[0], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_trowel"), -12.899f, -1446.51f, 29.6976f, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_86864.f_28[0], -12.899f, -1446.51f, 29.6976f, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[0], -93.24f, 0f, 40.7f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[0], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_86864.f_28[0], 1);
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
			{
				GlobalFunc_4598(Global_86864.f_9[1]);
				func_661(Global_86864.f_9[1]);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_lamar", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -8f, 7000, 790529, 0, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_b_lamar", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 8f, -8f, -1, 790528, 0, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uVar0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_86864.f_9[1], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			if (func_659(&(Global_86864.f_9[2]), -15.0506f, -1446.052f, 29.6444f, 215.2747f, 1))
			{
				func_661(Global_86864.f_9[2]);
				TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[2], "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_chop", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -2f, -1, 790529, 0, 2, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
			{
				GlobalFunc_4598(Global_86864.f_9[3]);
				func_661(Global_86864.f_9[3]);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_franklin", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -8f, 9000, 790529, 0, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_b_franklin", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 8f, -8f, -1, 790528, 0, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uVar0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_86864.f_9[3], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			GlobalFunc_173(&(Global_86864.f_44), 8, Global_86864.f_9[0], "DENISE", 0, 1);
			MISC::CLEAR_BIT(&iLocal_1451, 0);
			break;
	}
	switch (GlobalFunc_8315())
	{
		case 1:
			break;
		
		case 2:
			break;
	}
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 15f);
}

int func_659(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x644B6
{
	int iVar0;
	
	iVar0 = GlobalFunc_2579();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			PED::DELETE_PED(uParam0);
		}
		*uParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
		if (Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_263)
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_254.f_4, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 4, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*uParam0);
		if (bParam5)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}


void func_661(int iParam0)//Position - 0x645C7
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_AS_ENEMY(iParam0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
			PED::SET_PED_CAN_RAGDOLL(iParam0, 1);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, 0);
			PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 169, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_86864.f_42);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		}
	}
}




int func_665(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x64AC8
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
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
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
				GlobalFunc_5018(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				func_666(uParam0, Var0);
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

void func_666(var uParam0, struct<74> Param1)//Position - 0x65091
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
	GlobalFunc_5018(uParam0, &(Param1.f_31), &(Param1.f_57));
	VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Param1.f_72);
}





int func_671()//Position - 0x65520
{
	struct<3> Var0[3];
	struct<3> Var10[11];
	struct<3> Var44[1];
	
	if (Global_86864.f_209.f_147 != 4)
	{
		GlobalFunc_4607(&(Global_86864.f_209), 4);
	}
	GlobalFunc_4599(&(Var0[0 /*3*/]), 0, 0, 0);
	GlobalFunc_4599(&(Var0[1 /*3*/]), 3, 0, 0);
	GlobalFunc_4599(&(Var0[2 /*3*/]), 4, 0, 0);
	Var44[0 /*3*/].f_1 = -1;
	switch (GlobalFunc_8315())
	{
		case 1:
			if (!func_619(&(Global_86864.f_209)) || !func_675(&(Global_86864.f_9[0]), 44, -12.58f, -1446.37f, 29.72f, &Var0, &Var44))
			{
				return 0;
			}
			break;
		
		case 2:
			GlobalFunc_4599(&(Var10[0 /*3*/]), 0, 0, 0);
			GlobalFunc_4599(&(Var10[1 /*3*/]), 1, 0, 0);
			GlobalFunc_4599(&(Var10[2 /*3*/]), 2, 0, 0);
			GlobalFunc_4599(&(Var10[3 /*3*/]), 3, 2, 1);
			GlobalFunc_4599(&(Var10[4 /*3*/]), 4, 5, 0);
			GlobalFunc_4599(&(Var10[5 /*3*/]), 5, 0, 0);
			GlobalFunc_4599(&(Var10[6 /*3*/]), 6, 1, 0);
			GlobalFunc_4599(&(Var10[7 /*3*/]), 7, 0, 0);
			GlobalFunc_4599(&(Var10[8 /*3*/]), 8, 0, 0);
			GlobalFunc_4599(&(Var10[9 /*3*/]), 9, 0, 0);
			GlobalFunc_4599(&(Var10[10 /*3*/]), 10, 1, 2);
			if (((!func_619(&(Global_86864.f_209)) || !func_675(&(Global_86864.f_9[0]), 44, -12.58f, -1446.37f, 29.72f, &Var0, &Var44)) || !func_675(&(Global_86864.f_9[1]), 19, -15.5027f, -1445.416f, 29.6478f, &Var10, &Var44)) || !func_672(&(Global_86864.f_9[3]), 1, -14.2182f, -1448.268f, 29.6458f, 12, -99))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_672(var uParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6)//Position - 0x656E9
{
	if (!GlobalFunc_7214(iParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_PED(26, GlobalFunc_4917(iParam1), Param2, 0f, 0, 1);
		PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
		func_505(*uParam0);
		GlobalFunc_8021(*uParam0, 1, 0);
		GlobalFunc_8030(*uParam0);
		GlobalFunc_7707(*uParam0);
		func_233(*uParam0, 0);
		GlobalFunc_516(*uParam0);
		MISC::SET_BIT(&(Global_87845.f_47), GlobalFunc_237(iParam1));
		if (iParam6 != -99)
		{
			func_476(*uParam0, iParam5, iParam6, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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



int func_675(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6)//Position - 0x65834
{
	int iVar0;
	
	if (!GlobalFunc_7048(iParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		GlobalFunc_6800(uParam0, iParam1, Param2, 0f, 0);
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
		while (iVar0 < *uParam6)
		{
			if ((uParam6[iVar0 /*3*/])->f_1 != -1)
			{
				PED::SET_PED_PROP_INDEX(*uParam0, (*uParam6)[iVar0 /*3*/], (uParam6[iVar0 /*3*/])->f_1, (uParam6[iVar0 /*3*/])->f_2, false);
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




void func_679()//Position - 0x6598C
{
	GlobalFunc_4607(&(Global_86864.f_209), 1);
	func_623(&(Global_86864.f_209), 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
}

void func_680()//Position - 0x659AE
{
	switch (GlobalFunc_8315())
	{
		case 1:
			GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_5112(19, 0));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_denise"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_cs_trowel"));
			GlobalFunc_6491(&(Global_86864.f_209), "missfra1leadinout");
			func_629(&(Global_86864.f_209), "FKN1AUD", 6, 0);
			break;
		
		case 2:
			GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_5112(19, 0));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_lamardavis"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_denise"));
			GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_2579());
			GlobalFunc_6492(&(Global_86864.f_209), joaat("player_one"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_cs_trowel"));
			GlobalFunc_6491(&(Global_86864.f_209), "missfra1leadinoutfra_1_int_trevor");
			func_629(&(Global_86864.f_209), "FKN1AUD", 6, 0);
			break;
	}
}




int func_684()//Position - 0x65AB3
{
	if ((((((!GlobalFunc_485(45) || GlobalFunc_2647(-1847734803)) || GlobalFunc_2647(-714760066)) || GlobalFunc_2647(-1198055521)) || GlobalFunc_2647(1374342572)) || GlobalFunc_2647(530956160)) || GlobalFunc_2647(240475766))
	{
		return 1;
	}
	return 0;
}



int func_687()//Position - 0x65C4D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < 5)
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
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar0]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[iVar0], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
		switch (GlobalFunc_8315())
		{
			case 1:
				if (MISC::IS_BULLET_IN_ANGLED_AREA(1378.639f, -2081.849f, 50.49826f, 1376.108f, -2084.015f, 53.49826f, 3f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1378.639f, -2081.849f, 50.49826f, 1376.108f, -2084.015f, 53.49826f, 3f))
				{
					return 1;
				}
				break;
			
			case 2:
				if (MISC::IS_BULLET_IN_ANGLED_AREA(1373.769f, -2076.116f, 50.49826f, 1371.826f, -2077.559f, 53.49826f, 2.5f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1373.769f, -2076.116f, 50.49826f, 1371.826f, -2077.559f, 53.49826f, 2.5f))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_688()//Position - 0x65DBA
{
	int iVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = GlobalFunc_8315();
		if (GlobalFunc_42(iVar0))
		{
			switch (iVar0)
			{
				case 0:
					if (!Global_87287)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1382.589f, -2072.575f, 50.74822f, 1368.92f, -2084.042f, 55.99822f, 18f, 0, 1, 0))
						{
							func_197();
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1381.249f, -2077.387f, 50.74822f, 1372.043f, -2085.125f, 55.99821f, 8.75f, 0, 1, 0))
					{
						return 1;
					}
					break;
				
				case 1:
					if (!Global_87287)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.698f, -2067.857f, 50.74815f, 1367.673f, -2083.885f, 56.24815f, 24.5f, 0, 1, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1384.969f, -2069.66f, 50.74815f, 1365.263f, -2086.169f, 55.99814f, 22.25f, 0, 1, 0))
						{
							func_197();
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1378.201f, -2076.921f, 50.74821f, 1369.652f, -2084.022f, 55.99822f, 13f, 0, 1, 0))
					{
						return 1;
					}
					break;
				
				case 2:
					if (!Global_87287)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.698f, -2067.857f, 50.74815f, 1367.673f, -2083.885f, 56.24815f, 24.5f, 0, 1, 0))
						{
							func_197();
							if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
							{
								PED::REQUEST_PED_VISIBILITY_TRACKING(Global_86864.f_9[0]);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1379.521f, -2075.929f, 50.74822f, 1370.848f, -2082.985f, 56.24822f, 13.75f, 0, 1, 0))
					{
						return 1;
					}
					break;
				}
		}
		if (Global_87287)
		{
			switch (iVar0)
			{
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (PED::IS_TRACKED_PED_VISIBLE(Global_86864.f_9[0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
								{
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									TASK::OPEN_SEQUENCE_TASK(&uVar1);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 1f, 20000, 1048576000, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(uVar1);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar1);
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								}
							}
							else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
							{
								if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1)
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 1f, 20000, 1048576000, 0, 1193033728);
									}
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
						}
						else
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
					}
					break;
				}
			}
	}
	return 0;
}

void func_689()//Position - 0x6612A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_172(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_35(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	func_50(&(Global_86864.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_690()//Position - 0x66196
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_49(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_229(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	func_51(&(Global_86864.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_691()//Position - 0x66202
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	MISC::CLEAR_AREA(1382.637f, -2073.68f, 50.9988f, 40f, 1, 0, 0, 0);
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(1505.3f, -2052f, 100f, 1252.8f, -2034f, -100f, 0, 1, 1, 1);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("trash"), 1380.42f, -2072.77f, 51.7607f, 37.5f, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trash"));
	AUDIO::_0x43FA0DFC5DF87815(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[0], 2);
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), 1377.104f, -2076.2f, 52f, 37.5f, 1, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Global_86864[1], 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[1], 2);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[1], 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
	if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_7937(PLAYER::PLAYER_PED_ID()))
		{
			Global_86864[2] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 0, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[2], 2);
		}
		else
		{
			func_695(&(Global_86864[2]), 2, 1385.09f, -2070.564f, 51.9675f, 37.5f, 1, 0);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(2, 1));
	switch (GlobalFunc_8315())
	{
		case 2:
			func_694();
			break;
		
		case 1:
			func_693();
			GlobalFunc_7539(1);
			break;
		
		case 0:
			GlobalFunc_7539(0);
			GlobalFunc_7539(1);
			break;
	}
	GlobalFunc_6514(38, "FBI_4_MCS_3_CONCAT", 0, 14, 12);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		func_553(38, "MICHAEL", Global_86864.f_9[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		func_553(38, "FRANKLIN", Global_86864.f_9[1]);
	}
}


void func_693()//Position - 0x66418
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	func_231(&(Global_86864.f_9[0]), 0, 1377.126f, -2082.33f, 50.9983f, 55.3305f, 0, 1, 0);
	GlobalFunc_7539(0);
	func_476(Global_86864.f_9[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	Var0 = { 1376.84f, -2082.661f, 51.05f };
	Var3 = { 0f, 0f, 117f };
	uVar6 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uVar6, "MISSFBI4LEADINOUTFBI_4_MCS_3", "_LEADIN_LOOP_MICHAEL", 1000f, -1000f, 0, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar6, 1);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 1377.222f, -2082.205f, 51.4064f, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Global_86864.f_28[0], 20.96f);
	Var0 = { 1376.69f, -2082.761f, 51.05f };
	Var3 = { 0f, 0f, 117f };
	iVar6 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], iVar6, "_LEADIN_LOOP_HEIST_BAG", "MISSFBI4LEADINOUTFBI_4_MCS_3", 1000f, 1090519040, 0, 1148846080);
}

void func_694()//Position - 0x66564
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	func_231(&(Global_86864.f_9[0]), 0, 1373.246f, -2076.661f, 50.9983f, 107.6638f, 0, 1, 0);
	GlobalFunc_7539(0);
	func_476(Global_86864.f_9[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	func_231(&(Global_86864.f_9[1]), 1, 1372.592f, -2077.23f, 50.9983f, 310.9398f, 0, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
	func_476(Global_86864.f_9[1], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 1377.222f, -2082.205f, 51.4064f, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Global_86864.f_28[0], 20.96f);
	Var0 = { 1376.69f, -2082.761f, 51.05f };
	Var3 = { 0f, 0f, 117f };
	uVar6 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], uVar6, "_LEADIN_LOOP_HEIST_BAG", "MISSFBI4LEADINOUTFBI_4_MCS_3", 1000f, 1090519040, 0, 1148846080);
}

int func_695(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x666AD
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
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
				GlobalFunc_5018(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
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
				GlobalFunc_5018(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
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
				GlobalFunc_5018(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_4970(iParam0);
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


























int func_721()//Position - 0x6A9F8
{
	if (func_619(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_722()//Position - 0x6AA12
{
	func_623(&(Global_86864.f_209), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_723()//Position - 0x6AA2F
{
	GlobalFunc_6492(&(Global_86864.f_209), joaat("trash"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("towtruck"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("p_ld_heist_bag_s_1"));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4931(2, 1));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(0));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(1));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("towtruck"));
	GlobalFunc_6491(&(Global_86864.f_209), "MISSFBI4LEADINOUTFBI_4_MCS_3");
}





int func_728()//Position - 0x6AAD1
{
	if (!GlobalFunc_8371(28) || GlobalFunc_8624(28))
	{
		return 1;
	}
	return 0;
}





int func_733()//Position - 0x6AE1D
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(193, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (10f * 10f) || GlobalFunc_8372(28))
		{
			if (GlobalFunc_2033(iLocal_1197) >= func_735())
			{
				return 1;
			}
			else if (!iLocal_1198)
			{
				GlobalFunc_2154("AM_H_FBIPCASH", func_735(), 10000);
				iLocal_1198 = 1;
			}
		}
	}
	return 0;
}


int func_735()//Position - 0x6AEBA
{
	int iVar0;
	
	iVar0 = (GlobalFunc_2033(iLocal_1197) - 315);
	if (iVar0 < 0)
	{
		iVar0 = 315;
	}
	return iVar0;
}




void func_739()//Position - 0x6AEFC
{
	switch (GlobalFunc_8315())
	{
		case 0:
			iLocal_1197 = 0;
			break;
		
		case 1:
			iLocal_1197 = 1;
			break;
		
		case 2:
			iLocal_1197 = 2;
			break;
	}
	iLocal_1198 = 0;
}




void func_743()//Position - 0x6AF51
{
	GlobalFunc_1293(28);
}





int func_748()//Position - 0x6AF92
{
	if (!GlobalFunc_8371(21) || GlobalFunc_8624(21))
	{
		return 1;
	}
	return 0;
}

int func_749()//Position - 0x6AFB5
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(192, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (10f * 10f))
		{
			if (GlobalFunc_2033(iLocal_1195) >= func_750())
			{
				return 1;
			}
			else if (!iLocal_1196)
			{
				GlobalFunc_2154("AM_H_FBIPCASH", func_750(), 10000);
				iLocal_1196 = 1;
			}
		}
	}
	return 0;
}

int func_750()//Position - 0x6B029
{
	var uVar0;
	
	uVar0 = MISC::ABSI((GlobalFunc_2033(iLocal_1195) - 300));
	return uVar0;
}



void func_753()//Position - 0x6B06A
{
	switch (GlobalFunc_8315())
	{
		case 0:
			iLocal_1195 = 0;
			break;
		
		case 1:
			iLocal_1195 = 1;
			break;
		
		case 2:
			iLocal_1195 = 2;
			break;
	}
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-1333.431f, -1280.897f, 11.48874f, -1337.81f, -1286.405f, 2.83855f, 0, 1, 1, 1);
	iLocal_1196 = 0;
}




void func_757()//Position - 0x6B0EB
{
	GlobalFunc_1293(21);
}

void func_758()//Position - 0x6B0F9
{
	func_759();
}

void func_759()//Position - 0x6B105
{
	bool bVar0;
	
	func_801();
	if (iLocal_1114 == 0)
	{
		func_790();
		switch (iLocal_1124)
		{
			case 0:
				if (func_783(&bVar0))
				{
					GlobalFunc_4932(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), &Local_1126);
					Local_1180 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					fLocal_1183 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
					Local_1184 = { Local_1180 };
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 1);
					Global_86864[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (bVar0)
					{
						iLocal_1124 = 3;
					}
					else
					{
						HUD::CLEAR_HELP(1);
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
						{
							GlobalFunc_159("AM_H_FBIC8A", 7500);
						}
						else
						{
							GlobalFunc_159("AM_H_FBIC8B", 7500);
						}
						iLocal_1124 = 1;
					}
				}
				else if (func_764())
				{
					Local_1184 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					Local_1180 = { Local_1184 };
					iLocal_1124 = 2;
				}
				break;
			
			case 1:
				func_763();
				if (func_764())
				{
					Local_1184 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					GlobalFunc_571(0, -1);
					iLocal_1124 = 3;
				}
				break;
			
			case 2:
				func_760();
				if (func_783(&bVar0))
				{
					GlobalFunc_4932(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), &Local_1126);
					Local_1180 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					fLocal_1183 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 1);
					Global_86864[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					HUD::CLEAR_HELP(1);
					iLocal_1124 = 3;
				}
				break;
			
			case 3:
				break;
			}
	}
}

void func_760()//Position - 0x6B28B
{
	if (!OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("pickup_weapon_petrolcan"), Local_1180, 10f))
	{
		iLocal_1124 = 0;
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		if (iLocal_1124 == 1)
		{
			GlobalFunc_159("AM_H_FBIC11A", 7500);
		}
		else
		{
			GlobalFunc_159("AM_H_FBIC11B", 7500);
		}
	}
	else if (GlobalFunc_663("AM_H_FBIC11A", 0, 0) || GlobalFunc_663("AM_H_FBIC11B", 0, 0))
	{
		HUD::CLEAR_HELP(1);
	}
}



void func_763()//Position - 0x6B3BB
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= ((100f - 10f) * (100f - 10f)))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_86864[0], 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_86864[0], 1), Local_1180) >= 625f)
				{
					iLocal_1124 = 0;
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_86864[0], 1), Local_1180) >= 100f)
				{
					if (iLocal_1124 == 2)
					{
						GlobalFunc_159("AM_H_FBIC10A", 7500);
					}
					else
					{
						GlobalFunc_159("AM_H_FBIC10B", 7500);
					}
				}
				else if (GlobalFunc_663("AM_H_FBIC10A", 0, 0) || GlobalFunc_663("AM_H_FBIC10B", 0, 0))
				{
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else if (iLocal_1124 == 1)
		{
			iLocal_1124 = 0;
		}
	}
}

int func_764()//Position - 0x6B4AC
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("pickup_weapon_petrolcan"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f))
		{
			if (!iLocal_1125)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
				{
					if (GlobalFunc_8315() == 0)
					{
						sVar0 = "AM_H_FBIC1E";
					}
					else
					{
						sVar0 = "AM_H_FBIC1F";
					}
					switch (GlobalFunc_5216(sVar0))
					{
						case 2:
							GlobalFunc_6677(sVar0, 2, 0, -1, 7500, 7, 0, 0, 0);
							break;
						
						case 1:
							iLocal_1125 = 1;
							break;
						}
				}
			}
			else if (iLocal_1124 == 1)
			{
				if (GlobalFunc_116(0))
				{
					func_775(1);
					iVar4 = GlobalFunc_8315();
					if (iVar4 == 0)
					{
						iVar1 = 0;
						sVar2 = "MICHAEL";
						sVar3 = "FBI_3_MDRPJA";
						iVar5 = 9;
					}
					else if (iVar4 == 1)
					{
						iVar1 = 1;
						sVar2 = "FRANKLIN";
						sVar3 = "FBI_3_FDRPJA";
						iVar5 = 9;
					}
					else if (iVar4 == 2)
					{
						iVar1 = 2;
						sVar2 = "TREVOR";
						sVar3 = "FBI_3_TDRPJA";
						iVar5 = 8;
					}
					if (GlobalFunc_791(0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
						{
							GlobalFunc_173(&(Global_86864.f_44), iVar1, PLAYER::PLAYER_PED_ID(), sVar2, 0, 1);
							if (func_771(iVar5, sVar3))
							{
								return 1;
							}
						}
					}
					else if (GlobalFunc_791(2))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
						{
							GlobalFunc_173(&(Global_86864.f_44), iVar1, PLAYER::PLAYER_PED_ID(), sVar2, 0, 1);
							if (func_771(iVar5, sVar3))
							{
								return 1;
							}
						}
					}
					else if (GlobalFunc_791(1))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
						{
							GlobalFunc_173(&(Global_86864.f_44), iVar1, PLAYER::PLAYER_PED_ID(), sVar2, 0, 1);
							if (func_771(iVar5, sVar3))
							{
								return 1;
							}
						}
					}
				}
			}
			else if (GlobalFunc_116(0))
			{
				iVar9 = GlobalFunc_8315();
				if (iVar9 == 0)
				{
					iVar6 = 0;
					sVar7 = "MICHAEL";
					sVar8 = "FBI_3_MDRPJ";
					iVar10 = 9;
				}
				else if (iVar9 == 1)
				{
					iVar6 = 1;
					sVar7 = "FRANKLIN";
					sVar8 = "FBI_3_FDRPJ";
					iVar10 = 9;
				}
				else if (iVar9 == 2)
				{
					iVar6 = 2;
					sVar7 = "TREVOR";
					sVar8 = "FBI_3_TDRPJ";
					iVar10 = 8;
				}
				if (GlobalFunc_791(0))
				{
					if (func_765(0))
					{
						GlobalFunc_173(&(Global_86864.f_44), iVar6, PLAYER::PLAYER_PED_ID(), sVar7, 0, 1);
						if (func_771(iVar10, sVar8))
						{
							return 1;
						}
					}
				}
				else if (GlobalFunc_791(2))
				{
					if (func_765(0))
					{
						GlobalFunc_173(&(Global_86864.f_44), iVar6, PLAYER::PLAYER_PED_ID(), sVar7, 0, 1);
						if (func_771(iVar10, sVar8))
						{
							return 1;
						}
					}
				}
				else if (GlobalFunc_791(1))
				{
					if (func_765(0))
					{
						GlobalFunc_173(&(Global_86864.f_44), iVar6, PLAYER::PLAYER_PED_ID(), sVar7, 0, 1);
						if (func_771(iVar10, sVar8))
						{
							return 1;
						}
					}
				}
			}
		}
		else
		{
			iLocal_1125 = 0;
		}
	}
	return 0;
}

int func_765(bool bParam0)//Position - 0x6B79B
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (func_770(bParam0))
		{
			if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
			{
				iVar4 = 1;
				if (bParam0)
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					iVar4 = 0;
				}
				else
				{
					iVar3 = PLAYER::PLAYER_PED_ID();
				}
				if (!MISC::IS_POSITION_OCCUPIED(Var0, 2f, 0, 1, iVar4, 0, 0, iVar3, 0))
				{
					if (bParam0)
					{
						if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1, 0, 0))
						{
							GlobalFunc_159("AM_H_FBIC5", 10000);
							return 0;
						}
						Var5 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2) };
						if (Var5.x >= 10f || Var5.x <= -10f)
						{
							GlobalFunc_159("AM_H_FBIC5A", 10000);
							return 0;
						}
						else if (Var5.f_1 >= 10f || Var5.f_1 <= -10f)
						{
							GlobalFunc_159("AM_H_FBIC5B", 10000);
							return 0;
						}
						if (ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							GlobalFunc_159("AM_H_FBIC7", 10000);
							return 0;
						}
					}
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var8, 0, 1077936128, 0))
					{
						if (!func_767())
						{
							if (!func_766())
							{
								if (SYSTEM::VDIST2(Var0, Var8) >= 100f)
								{
									return 1;
								}
								else
								{
									GlobalFunc_159("AM_H_FBIC6", 10000);
								}
							}
						}
						else
						{
							GlobalFunc_159("AM_H_FBIC4", 10000);
						}
					}
					else
					{
						return 1;
					}
				}
				else
				{
					GlobalFunc_159("AM_H_FBIC5", 10000);
				}
			}
			else
			{
				GlobalFunc_159("AM_H_FBIC3", 10000);
			}
		}
	}
	return 0;
}

int func_766()//Position - 0x6B93E
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 855.7258f, -2344.491f, 29.33145f) <= 52900f)
	{
		GlobalFunc_159("AM_H_FBIC6A", 10000);
		return 1;
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1383.21f, -2068.02f, 51.87057f) <= 28900f)
	{
		GlobalFunc_159("AM_H_FBIC6B", 10000);
		return 1;
	}
	return 0;
}

int func_767()//Position - 0x6B9B4
{
	int iVar0;
	float fVar1;
	
	iVar0 = GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0);
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_85405[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		return 1;
	}
	return 0;
}



int func_770(bool bParam0)//Position - 0x6BAA0
{
	if (bParam0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_771(int iParam0, char* sParam1)//Position - 0x6BAD6
{
	if (func_773(&(Global_86864.f_44), iParam0, 0, sLocal_1188, sParam1, 9, 1, 0, 0, 0))
	{
		if (GlobalFunc_663("AM_H_FBIC3", 0, 0))
		{
			HUD::CLEAR_HELP(1);
		}
		GlobalFunc_786(191, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		return 1;
	}
	return 0;
}


bool func_773(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6BB6F
{
	GlobalFunc_513(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_1581 = iParam2;
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15706 = 0;
	Global_15697 = 1;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam6 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return GlobalFunc_9625(sParam4, iParam5, bParam9);
}


void func_775(bool bParam0)//Position - 0x6BC20
{
	if (bParam0)
	{
		if (GlobalFunc_8315() == 0)
		{
			GlobalFunc_807("AM_H_FBIC9");
			GlobalFunc_806("AM_H_FBIC9");
		}
		else if (GlobalFunc_8315() == 1)
		{
			GlobalFunc_805("AM_H_FBIC9");
		}
		else
		{
			GlobalFunc_805("AM_H_FBIC9");
		}
	}
	else if (GlobalFunc_8315() == 0)
	{
		GlobalFunc_803();
		GlobalFunc_802();
	}
	else if (GlobalFunc_8315() == 1)
	{
		GlobalFunc_804();
	}
	else
	{
		GlobalFunc_804();
	}
}








int func_783(bool bParam0)//Position - 0x6BD28
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	char* sVar11;
	char* sVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	char* sVar17;
	int iVar18;
	int iVar19;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (iLocal_1189)
				{
					if (iLocal_1124 == 2)
					{
						if (!iLocal_1190)
						{
							if (func_786())
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
								{
									iLocal_1190 = 1;
									func_775(iLocal_1190);
								}
								else
								{
									iLocal_1190 = 0;
									func_775(iLocal_1190);
								}
							}
						}
						else if (GlobalFunc_5200())
						{
							if (OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("pickup_weapon_petrolcan"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f))
							{
								*bParam0 = 1;
								iVar3 = GlobalFunc_8315();
								if (iVar3 == 0)
								{
									iVar0 = 0;
									sVar1 = "MICHAEL";
									sVar2 = "FBI_3_MDRPCA";
									iVar4 = 5;
								}
								else if (iVar3 == 1)
								{
									iVar0 = 1;
									sVar1 = "FRANKLIN";
									sVar2 = "FBI_3_FDRPCA";
									iVar4 = 9;
								}
								else if (iVar3 == 2)
								{
									iVar0 = 2;
									sVar1 = "TREVOR";
									sVar2 = "FBI_3_TDRPCA";
									iVar4 = 8;
								}
								if (GlobalFunc_791(0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
									{
										GlobalFunc_173(&(Global_86864.f_44), iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
										if (func_771(iVar4, sVar2))
										{
											return 1;
										}
									}
								}
								else if (GlobalFunc_791(2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
									{
										GlobalFunc_173(&(Global_86864.f_44), iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
										if (func_771(iVar4, sVar2))
										{
											return 1;
										}
									}
								}
								else if (GlobalFunc_791(1))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
									{
										GlobalFunc_173(&(Global_86864.f_44), iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
										if (func_771(iVar4, sVar2))
										{
											return 1;
										}
									}
								}
							}
							else
							{
								*bParam0 = 0;
								iVar8 = GlobalFunc_8315();
								if (iVar8 == 0)
								{
									iVar5 = 0;
									sVar6 = "MICHAEL";
									sVar7 = "FBI_3_MDRPCA";
									iVar9 = 5;
								}
								else if (iVar8 == 1)
								{
									iVar5 = 1;
									sVar6 = "FRANKLIN";
									sVar7 = "FBI_3_FDRPCA";
									iVar9 = 9;
								}
								else if (iVar8 == 2)
								{
									iVar5 = 2;
									sVar6 = "TREVOR";
									sVar7 = "FBI_3_TDRPCA";
									iVar9 = 8;
								}
								if (GlobalFunc_791(0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
									{
										GlobalFunc_173(&(Global_86864.f_44), iVar5, PLAYER::PLAYER_PED_ID(), sVar6, 0, 1);
										if (func_771(iVar9, sVar7))
										{
											return 1;
										}
									}
								}
								else if (GlobalFunc_791(2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
									{
										GlobalFunc_173(&(Global_86864.f_44), iVar5, PLAYER::PLAYER_PED_ID(), sVar6, 0, 1);
										if (func_771(iVar9, sVar7))
										{
											return 1;
										}
									}
								}
								else if (GlobalFunc_791(1))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) <= 100f)
									{
										GlobalFunc_173(&(Global_86864.f_44), iVar5, PLAYER::PLAYER_PED_ID(), sVar6, 0, 1);
										if (func_771(iVar9, sVar7))
										{
											return 1;
										}
									}
								}
							}
						}
					}
					else if (!iLocal_1190)
					{
						if (func_786())
						{
							if (func_765(1))
							{
								Local_1192 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								iLocal_1190 = 1;
								func_775(iLocal_1190);
							}
						}
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1192) <= 25f)
					{
						if (GlobalFunc_5200())
						{
							if (OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("pickup_weapon_petrolcan"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f))
							{
								*bParam0 = 1;
								iVar13 = GlobalFunc_8315();
								if (iVar13 == 0)
								{
									iVar10 = 0;
									sVar11 = "MICHAEL";
									sVar12 = "FBI_3_MDRPCA";
									iVar14 = 5;
								}
								else if (iVar13 == 1)
								{
									iVar10 = 1;
									sVar11 = "FRANKLIN";
									sVar12 = "FBI_3_FDRPCA";
									iVar14 = 9;
								}
								else if (iVar13 == 2)
								{
									iVar10 = 2;
									sVar11 = "TREVOR";
									sVar12 = "FBI_3_TDRPCA";
									iVar14 = 8;
								}
								if (GlobalFunc_791(0))
								{
									GlobalFunc_173(&(Global_86864.f_44), iVar10, PLAYER::PLAYER_PED_ID(), sVar11, 0, 1);
									if (func_771(iVar14, sVar12))
									{
										return 1;
									}
								}
								else if (GlobalFunc_791(2))
								{
									GlobalFunc_173(&(Global_86864.f_44), iVar10, PLAYER::PLAYER_PED_ID(), sVar11, 0, 1);
									if (func_771(iVar14, sVar12))
									{
										return 1;
									}
								}
								else if (GlobalFunc_791(1))
								{
									GlobalFunc_173(&(Global_86864.f_44), iVar10, PLAYER::PLAYER_PED_ID(), sVar11, 0, 1);
									if (func_771(iVar14, sVar12))
									{
										return 1;
									}
								}
							}
							else
							{
								*bParam0 = 0;
								iVar18 = GlobalFunc_8315();
								if (iVar18 == 0)
								{
									iVar15 = 0;
									sVar16 = "MICHAEL";
									sVar17 = "FBI_3_MDRPC";
									iVar19 = 5;
								}
								else if (iVar18 == 1)
								{
									iVar15 = 1;
									sVar16 = "FRANKLIN";
									sVar17 = "FBI_3_FDRPC";
									iVar19 = 9;
								}
								else if (iVar18 == 2)
								{
									iVar15 = 2;
									sVar16 = "TREVOR";
									sVar17 = "FBI_3_TDRPC";
									iVar19 = 8;
								}
								if (GlobalFunc_791(0))
								{
									GlobalFunc_173(&(Global_86864.f_44), iVar15, PLAYER::PLAYER_PED_ID(), sVar16, 0, 1);
									if (func_771(iVar19, sVar17))
									{
										return 1;
									}
								}
								else if (GlobalFunc_791(2))
								{
									GlobalFunc_173(&(Global_86864.f_44), iVar15, PLAYER::PLAYER_PED_ID(), sVar16, 0, 1);
									if (func_771(iVar19, sVar17))
									{
										return 1;
									}
								}
								else if (GlobalFunc_791(1))
								{
									GlobalFunc_173(&(Global_86864.f_44), iVar15, PLAYER::PLAYER_PED_ID(), sVar16, 0, 1);
									if (func_771(iVar19, sVar17))
									{
										return 1;
									}
								}
							}
						}
						else
						{
							iLocal_1190 = 0;
							func_775(iLocal_1190);
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_786()//Position - 0x6C2C2
{
	int iVar0;
	
	if (GlobalFunc_5200())
	{
		iVar0 = GlobalFunc_5199();
		if ((iVar0 == 0 || iVar0 == 2) || iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}




void func_790()//Position - 0x6C415
{
	char* sVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_86864.f_357)
		{
			if (iLocal_1124 != 1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_794())
				{
					if (!GlobalFunc_796())
					{
						func_792();
						if (GlobalFunc_8315() == 0)
						{
							sVar0 = "AM_H_FBIC1A";
						}
						else
						{
							sVar0 = "AM_H_FBIC1B";
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							if (func_791(sVar0, 2, 0, 2000, 10000))
							{
								Global_86864.f_357 = 1;
							}
						}
					}
					else
					{
						iLocal_1189 = 0;
						Global_86864.f_357 = 1;
					}
				}
				else if (!bLocal_1191)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1187))
					{
						if (func_791(sLocal_1187, 2, 0, 2000, 10000))
						{
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
		else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Local_1121 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iLocal_1189 = 0;
			Global_86864.f_357 = 0;
		}
	}
}

int func_791(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6C50C
{
	switch (GlobalFunc_5216(sParam0))
	{
		case 2:
			GlobalFunc_6677(sParam0, iParam1, iParam2, iParam3, iParam4, 7, 0, 0, 0);
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_792()//Position - 0x6C548
{
	if (!GlobalFunc_100(Local_1118, 0f, 0f, 0f))
	{
		if (GlobalFunc_537(Local_1121, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f))
		{
			return;
		}
	}
	Local_1118 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
}


int func_794()//Position - 0x6C5E7
{
	if (func_800() && func_795())
	{
		iLocal_1189 = 1;
	}
	else
	{
		iLocal_1189 = 0;
	}
	return iLocal_1189;
}

int func_795()//Position - 0x6C60D
{
	if (func_798() && !func_796())
	{
		return 1;
	}
	return 0;
}

int func_796()//Position - 0x6C62B
{
	struct<36> Var0;
	
	Var0.f_9 = 25;
	Var0.f_35 = 2;
	GlobalFunc_4932(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), &Var0);
	if (func_797(0, &Var0))
	{
		sLocal_1187 = "AM_H_FBIC2A";
		return 1;
	}
	else if (func_797(1, &Var0))
	{
		sLocal_1187 = "AM_H_FBIC2B";
		return 1;
	}
	else if (func_797(2, &Var0))
	{
		sLocal_1187 = "AM_H_FBIC2C";
		return 1;
	}
	return 0;
}

int func_797(int iParam0, var uParam1)//Position - 0x6C69B
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

int func_798()//Position - 0x6C7EF
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
	if (!func_799(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	sLocal_1187 = "AM_H_FBIC2";
	return 0;
}

int func_799(int iParam0)//Position - 0x6C83D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iLocal_1115[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !GlobalFunc_230(33))
			{
				bLocal_1191 = true;
			}
			else if (iVar0 == 1 && !GlobalFunc_230(34))
			{
				bLocal_1191 = true;
			}
			else
			{
				bLocal_1191 = false;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_800()//Position - 0x6C8A0
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return 1;
}

void func_801()//Position - 0x6C8F0
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iLocal_1124 != 1)
	{
		switch (iLocal_1114)
		{
			case 0:
				if (GlobalFunc_663("AM_H_FBICWANT", 0, 0))
				{
					HUD::CLEAR_HELP(1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					HUD::CLEAR_HELP(1);
					iLocal_1114 = 1;
				}
				break;
			
			case 1:
				if (!func_791("AM_H_FBICWANT", 2, 0, 2000, 10000))
				{
					iLocal_1114 = 2;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_1114 = 0;
				}
				break;
			
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_1114 = 0;
				}
				break;
			}
	}
}

void func_802()//Position - 0x6C995
{
	func_759();
}



int func_805()//Position - 0x6C9B3
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(191, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (10f * 10f))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck"));
		}
	}
	return 0;
}

void func_806()//Position - 0x6CA1F
{
	var uVar0;
	char* sVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_86864[iVar2]))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_86864[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_86864[iVar2], 0))
						{
							if (iLocal_1124 == 1)
							{
								iLocal_1124 = 0;
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_86864[iVar2]));
						}
						else
						{
							VEHICLE::DELETE_VEHICLE(&(Global_86864[iVar2]));
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[iVar2]))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_86864.f_28[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						OBJECT::DELETE_OBJECT(&(Global_86864.f_28[iVar2]));
					}
				}
			}
		}
		iVar2++;
	}
	Global_86864.f_357 = 0;
}

void func_807()//Position - 0x6CB1B
{
	var uVar0;
	char* sVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_86864[iVar2]))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_86864[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_86864[iVar2]));
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[iVar2]))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_86864.f_28[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_86864.f_28[iVar2]));
					}
				}
			}
		}
		iVar2++;
	}
	Global_86864.f_357 = 0;
}

void func_808()//Position - 0x6CBE9
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (!GlobalFunc_100(0f, 0f, 0f, Local_1180))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1180) >= 100f && iLocal_1124 == 1)
			{
				Global_86864[0] = VEHICLE::CREATE_VEHICLE(Local_1126.f_42, Local_1180, fLocal_1183, 1, 1);
				func_809(Global_86864[0], &Local_1126, 0, 1);
			}
		}
	}
	if (!GlobalFunc_100(0f, 0f, 0f, Local_1184))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1184) >= 100f && iLocal_1124 == 2)
		{
			Global_86864.f_28[0] = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_weapon_petrolcan"), Local_1184, 1, 0);
		}
	}
}

void func_809(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6CCAD
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
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || GlobalFunc_322(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && GlobalFunc_321())
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
			GlobalFunc_5018(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
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


int func_811()//Position - 0x6D0EA
{
	if (iLocal_1124 == 1)
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_1126.f_42))
		{
			return 1;
		}
	}
	else if (iLocal_1124 == 2)
	{
		return 1;
	}
	return 0;
}

void func_812()//Position - 0x6D118
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1126.f_42);
}

void func_813()//Position - 0x6D129
{
	if (iLocal_1124 == 1)
	{
		STREAMING::REQUEST_MODEL(Local_1126.f_42);
	}
	else if (iLocal_1124 == 2)
	{
	}
}

void func_814()//Position - 0x6D14B
{
	char* sVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_794())
			{
				Local_1118 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (GlobalFunc_8315() == 0)
				{
					sVar0 = "AM_H_FBIC1A";
				}
				else
				{
					sVar0 = "AM_H_FBIC1B";
				}
				GlobalFunc_6677(sVar0, 2, 0, 2000, 7500, 7, 0, 0, 0);
				if (GlobalFunc_5216(sVar0) == 1)
				{
					Global_86864.f_357 = 1;
				}
			}
		}
		else
		{
			Global_86864.f_357 = 0;
		}
	}
	iLocal_1115[0] = joaat("trash");
	iLocal_1115[1] = joaat("towtruck");
	iLocal_1125 = 0;
	GlobalFunc_4503(joaat("weapon_petrolcan"));
	Local_1192 = { 0f, 0f, 0f };
	iLocal_1190 = 0;
	iLocal_1189 = 0;
	func_775(0);
}



void func_817()//Position - 0x6D216
{
	func_818();
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
	{
		PED::SET_PED_CAPSULE(Global_86864.f_9[0], 0.1f);
	}
}

void func_818()//Position - 0x6D257
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!GlobalFunc_9814(iVar1))
			{
				if (GlobalFunc_9813(iVar1, 0))
				{
					if (func_821(iVar1))
					{
						if (GlobalFunc_9812(iVar1, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
							TASK::CLEAR_PED_TASKS(iVar1);
						}
					}
				}
			}
			else if (func_821(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 0)
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, 0), -401.4687f, -2168.186f, 9.3184f, 4, 20f, 786469, 2f, 10f, 1);
				}
			}
			else
			{
				GlobalFunc_9811(iVar1);
			}
		}
		iVar0++;
	}
}



int func_821(int iParam0)//Position - 0x6D40E
{
	if (!GlobalFunc_236())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), 0)) && !ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), -401.4687f, -2168.186f, 9.3184f, 2f, 2f, 2f, 0, 1, 0))
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), -1) == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}





int func_826()//Position - 0x6D592
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

int func_827()//Position - 0x6D5BD
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(190, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (75f * 75f))
		{
			GlobalFunc_10755();
			iLocal_1113 = 1;
			if (!HUD::DOES_BLIP_EXIST(uLocal_1112))
			{
				uLocal_1112 = GlobalFunc_6783(Global_86864[0], 0, 0);
			}
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_10755();
			iLocal_1113 = 1;
			return VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck"));
		}
	}
	return 0;
}




void func_831()//Position - 0x6D747
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_172(&(Global_86864[iVar0]));
		func_35(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	if (!iLocal_1113)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
}

void func_832()//Position - 0x6D797
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_49(&(Global_86864[iVar0]));
		func_229(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	if (!iLocal_1113)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
}

void func_833()//Position - 0x6D7E7
{
	struct<3> Var0;
	
	Var0 = { Global_Mission_Blips[190 /*23*/][0 /*3*/] };
	MISC::CLEAR_AREA(Var0, 30f, 1, 1, 0, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), Var0, 83.9445f, 1, 1);
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("peyote"), -412.3477f, -2176.262f, 9.3184f, 281.0786f, 1, 1);
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("ruiner"), -386.5059f, -2168.738f, 9.3184f, 87.2085f, 1, 1);
	Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("s_m_m_trucker_01"), -409.7205f, -2175.858f, 9.31836f, 121.7754f, 1, 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_86864.f_9[0]);
	if (((((ENTITY::DOES_ENTITY_EXIST(Global_86864[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864[0])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[1])) && !ENTITY::IS_ENTITY_DEAD(Global_86864[1])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[2])) && !ENTITY::IS_ENTITY_DEAD(Global_86864[2]))
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_86864[1], 4, 0, 0);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_86864[1], 100f);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_86864[1], 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_86864[1], 0, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]) && !ENTITY::IS_ENTITY_DEAD(Global_86864[1]))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[0], "mini@repair", "fixing_a_ped", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_86864[1], Local_1109), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(Global_86864[1]), 1000f, -1.5f, -1, 1, 0, 2, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
		}
		PED::SET_PED_CAPSULE(Global_86864.f_9[0], 0.1f);
	}
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.198f, -2155.886f, 8.36266f, -383.4908f, -2188.511f, 12.9213f, 0, 1, 1, 1);
}

int func_834()//Position - 0x6DA19
{
	if (func_619(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_835()//Position - 0x6DA33
{
	func_623(&(Global_86864.f_209), 0);
}

void func_836()//Position - 0x6DA46
{
	GlobalFunc_6492(&(Global_86864.f_209), joaat("towtruck"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("peyote"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ruiner"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("s_m_m_trucker_01"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("a_f_m_tourist_01"));
	GlobalFunc_6491(&(Global_86864.f_209), "mini@repair");
}

void func_837()//Position - 0x6DAA8
{
	iLocal_1113 = 0;
}

void func_838()//Position - 0x6DAB4
{
	switch (iLocal_1108)
	{
		case 0:
			TASK::REQUEST_WAYPOINT_RECORDING("FBI4_P1_BlipRoute1");
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("FBI4_P1_BlipRoute1"))
			{
				Local_1102 = { func_843(189, "FBI4_P1_BlipRoute1", 0.5f, 0) };
				iLocal_1108 = 1;
			}
			break;
		
		case 1:
			if (!func_839(&Local_1102))
			{
				iLocal_1108 = 0;
			}
			break;
	}
}

int func_839(var uParam0)//Position - 0x6DB14
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_1))
			{
				return func_840(*uParam0, uParam0->f_1, &(uParam0->f_3), uParam0->f_2);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		GlobalFunc_786(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1));
	}
	return 1;
}

int func_840(int iParam0, char* sParam1, var uParam2, float fParam3)//Position - 0x6DB75
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	
	if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam1, *uParam2, &Var0))
	{
		if (!GlobalFunc_537(Global_Mission_Blips[iParam0 /*23*/][0 /*3*/], Var0, 0.1f))
		{
			fVar6 = GlobalFunc_253(((GlobalFunc_567(0.2f, (TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sParam1, *uParam2) * fParam3)) * SYSTEM::TIMESTEP()) / MISC::GET_DISTANCE_BETWEEN_COORDS(Global_Mission_Blips[iParam0 /*23*/][0 /*3*/], Var0, 1)), 0f, 1f);
			Var3 = { GlobalFunc_721(Global_Mission_Blips[iParam0 /*23*/][0 /*3*/], Var0, fVar6) };
		}
		else
		{
			Var3 = { Var0 };
			*uParam2++;
		}
		GlobalFunc_786(iParam0, Var3);
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar7);
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



struct<5> func_843(int iParam0, char* sParam1, float fParam2, int iParam3)//Position - 0x6DC71
{
	struct<5> Var0;
	struct<3> Var5;
	
	Var0 = 262;
	Var0.f_2 = 1065353216;
	Var0 = iParam0;
	Var0.f_1 = sParam1;
	Var0.f_2 = fParam2;
	if (iParam3 != -1)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iParam3, &Var5);
		GlobalFunc_786(Var0, Var5);
		Var0.f_3 = iParam3 + 1;
	}
	else if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Var0.f_1, Global_Mission_Blips[Var0 /*23*/][0 /*3*/], &iParam3))
	{
		Var0.f_3 = iParam3;
	}
	return Var0;
}

void func_844()//Position - 0x6DCE8
{
	func_846();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
	{
		if (!func_839(&Local_1102))
		{
			Local_1102 = { func_845(189, Global_86864[0]) };
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
}

struct<5> func_845(int iParam0, int iParam1)//Position - 0x6DD3C
{
	struct<5> Var0;
	
	Var0 = 262;
	Var0.f_2 = 1065353216;
	Var0 = iParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		Var0.f_4 = iParam1;
	}
	return Var0;
}

void func_846()//Position - 0x6DD6E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!GlobalFunc_9814(iVar1))
			{
				if (GlobalFunc_9813(iVar1, 0))
				{
					if (func_847(iVar1))
					{
						if (GlobalFunc_9812(iVar1, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
							TASK::CLEAR_PED_TASKS(iVar1);
						}
					}
				}
			}
			else if (func_847(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 0)
				{
					Var2 = { GlobalFunc_2247(189, 0) };
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, 0), Var2, 4, 20f, 786469, 2f, 10f, 1);
				}
			}
			else
			{
				GlobalFunc_9811(iVar1);
			}
		}
		iVar0++;
	}
}

int func_847(int iParam0)//Position - 0x6DE47
{
	if (!GlobalFunc_236())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), 0)) && !ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), -401.4687f, -2168.186f, 9.3184f, 2f, 2f, 2f, 0, 1, 0))
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), -1) == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


int func_849()//Position - 0x6DEF5
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			Local_1102 = { func_843(189, "FBI4_P1_BlipRoute1", 0.5f, -1) };
			return 1;
		}
	}
	return 0;
}

int func_850()//Position - 0x6DF36
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(189, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar3 < (110f * 110f))
			{
				GlobalFunc_10755();
				iLocal_1107 = 1;
				GlobalFunc_6783(Global_86864[0], 0, 0);
				return 1;
			}
		}
		else if (fVar3 < (75f * 75f))
		{
			GlobalFunc_10755();
			iLocal_1107 = 1;
			GlobalFunc_6783(Global_86864[0], 0, 0);
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_10755();
			iLocal_1107 = 1;
			return VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("trash"));
		}
	}
	return 0;
}


void func_852()//Position - 0x6E035
{
	func_35(&(Global_86864.f_9[0]));
	func_35(&(Global_86864.f_9[1]));
	func_172(&(Global_86864[0]));
	if (!iLocal_1107)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 0);
	}
	Local_1102 = { func_843(189, "FBI4_P1_BlipRoute1", 0.5f, -1) };
}

void func_853()//Position - 0x6E089
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			func_854(&(Global_86864.f_9[0]), Global_86864[0]);
		}
		else
		{
			func_229(&(Global_86864.f_9[0]));
		}
	}
	if (!iLocal_1107)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 0);
	}
	func_49(&(Global_86864[0]));
	func_229(&(Global_86864.f_9[1]));
}

void func_854(var uParam0, int iParam1)//Position - 0x6E0FB
{
	var uVar0;
	char* sVar1;
	
	GlobalFunc_8267(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
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
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, iParam1, PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, 1);
							PED::SET_PED_KEEP_TASK(*uParam0, 1);
						}
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
				}
			}
		}
	}
}

void func_855()//Position - 0x6E1FB
{
	struct<3> Var0;
	
	MISC::CLEAR_AREA(Global_Mission_Blips[189 /*23*/][0 /*3*/], 33.4375f, 1, 0, 0, 0);
	TASK::WAYPOINT_RECORDING_GET_COORD("FBI4_P1_BlipRoute1", Local_1102.f_3 + 1, &Var0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("trash"), Global_Mission_Blips[189 /*23*/][0 /*3*/], func_856(Global_Mission_Blips[189 /*23*/][0 /*3*/], Var0), 1, 1);
	Global_86864.f_9[0] = PED::CREATE_PED_INSIDE_VEHICLE(Global_86864[0], 26, joaat("s_m_y_garbage"), -1, 1, 1);
	Global_86864.f_9[1] = PED::CREATE_PED_INSIDE_VEHICLE(Global_86864[0], 26, joaat("s_m_y_garbage"), 0, 1, 1);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_86864.f_9[0], Global_86864[0], "FBI4_P1_BlipRoute1", 786599, Local_1102.f_3 + 1, 0, -1, -1082130432, 0, 1073741824);
	Local_1102 = { func_845(189, Global_86864[0]) };
}

float func_856(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x6E2E0
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	fVar0 = (fVar0 * -1f);
	return fVar0;
}

int func_857()//Position - 0x6E32E
{
	if (func_619(&(Global_86864.f_209)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("FBI4_P1_BlipRoute1"))
	{
		return 1;
	}
	return 0;
}

void func_858()//Position - 0x6E356
{
	func_623(&(Global_86864.f_209), 0);
}

void func_859()//Position - 0x6E369
{
	GlobalFunc_6492(&(Global_86864.f_209), joaat("trash"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("s_m_y_garbage"));
}

void func_860()//Position - 0x6E38F
{
	iLocal_1107 = 0;
}


void func_862()//Position - 0x6E3A3
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_1100)
		{
			case 0:
				func_869();
				break;
			
			case 1:
				func_868();
				break;
			
			case 2:
				func_863();
				break;
			}
	}
}

void func_863()//Position - 0x6E3E6
{
	int iVar0;
	
	func_866();
	iVar0 = GlobalFunc_8315();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1403.8f, -2085.146f, 50.99826f, 1387.052f, -2065.733f, 90.99826f, 23f, 0, 1, 0))
	{
		if (!iLocal_1097)
		{
			if (GlobalFunc_8315() != 0)
			{
				Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1391.657f, -2073.055f, 51.624f, 0f, 0f, 40.32f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_86864.f_358, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Global_86864.f_358, 1);
				func_865(Global_86864.f_358, iVar0);
				if (iVar0 == 2)
				{
					func_864(Global_86864.f_358, "fbi_4_int_trv_react_mic");
				}
				else if (iVar0 == 1)
				{
					func_864(Global_86864.f_358, "fbi_4_int_fra_react_mic");
				}
				iLocal_1097 = 1;
			}
			else
			{
				iLocal_1097 = 1;
			}
		}
		else if (GlobalFunc_8315() != 0)
		{
			if (GlobalFunc_8315() == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1099) > 10300)
				{
					iLocal_1100 = 3;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1099) > 5300 && !GlobalFunc_111())
			{
				iLocal_1100 = 3;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1098) > 2000)
		{
			iLocal_1100 = 3;
		}
	}
}

void func_864(int iParam0, char* sParam1)//Position - 0x6E513
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[3]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], uParam0, "missfbi4leadinoutfbi_4_int", sParam1, 1.5f, -1.5f, 0, 0, 1148846080, 0);
		}
	}
}

void func_865(int iParam0, int iParam1)//Position - 0x6E564
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (iParam1 == 0)
	{
		return;
	}
	else if (iParam1 == 1)
	{
		sVar0 = "fbi_4_int_fra_react_andreas";
		sVar1 = "fbi_4_int_fra_react_dave";
		sVar2 = "fbi_4_int_fra_react_steve";
	}
	else if (iParam1 == 2)
	{
		sVar0 = "fbi_4_int_trv_react_andreas";
		sVar1 = "fbi_4_int_trv_react_dave";
		sVar2 = "fbi_4_int_trv_react_steve";
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uParam0, "missfbi4leadinoutfbi_4_int", sVar0, 1.5f, -1.5f, 0, 0, 1148846080, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iParam0, "missfbi4leadinoutfbi_4_int", sVar1, 1.5f, -1.5f, 0, 0, 1148846080, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[2]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iParam0, "missfbi4leadinoutfbi_4_int", sVar2, 1.5f, -1.5f, 0, 0, 1148846080, 0);
		}
	}
}

void func_866()//Position - 0x6E68C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_867())
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[1], 0f, 0f, 0f, 1, 60000, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1092);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1093);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1094);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1095);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_1096);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				iLocal_1098 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			CAM::_0xCCD078C2665D2973(1);
		}
	}
}

int func_867()//Position - 0x6E703
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_86864.f_9[iVar0] != PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_868()//Position - 0x6E755
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	char* sVar7;
	
	iVar0 = GlobalFunc_8315();
	Var1 = { GlobalFunc_2247(188, 0) };
	fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1);
	fVar5 = 20.08f;
	fVar6 = 20.08f;
	if (iVar0 != 0)
	{
		if (!Global_86864.f_357)
		{
			if (fVar4 < ((fVar5 + fVar5) * (fVar5 + fVar5)))
			{
				if (iVar0 == 2)
				{
					GlobalFunc_173(&(Global_86864.f_44), 0, Global_86864.f_9[3], "MICHAEL", 0, 1);
					GlobalFunc_173(&(Global_86864.f_44), 3, Global_86864.f_9[2], "STEVE", 0, 1);
					sVar7 = "fbi4_INT_LIT";
				}
				else
				{
					GlobalFunc_173(&(Global_86864.f_44), 2, Global_86864.f_9[4], "TREVOR", 0, 1);
					iLocal_1099 = MISC::GET_GAME_TIMER();
					sVar7 = "fbi4_INT_LIF";
				}
				Global_86864.f_357 = GlobalFunc_10618(&(Global_86864.f_44), "HeatAud", sVar7, 9, 0, 0, 0);
			}
		}
		else if (!GlobalFunc_111())
		{
			iLocal_1100 = 3;
			return;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1403.8f, -2085.146f, 50.99826f, 1383.056f, -2060.081f, 90.99826f, 24f, 0, 1, 0))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_866();
				func_197();
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_1100 = 2;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, -1, 1048576000, 0, 1193033728);
				}
			}
		}
		else if (fVar4 > ((fVar6 + fVar6) * (fVar6 + fVar6)))
		{
			Global_86864.f_357 = 0;
			GlobalFunc_4935();
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1403.8f, -2085.146f, 50.99826f, 1383.056f, -2061.081f, 90.99826f, 23f, 0, 1, 0))
	{
		if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_866();
			func_197();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_1100 = 2;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, -1, 1048576000, 0, 1193033728);
			}
		}
	}
}

void func_869()//Position - 0x6E967
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(188, 0) };
	fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
	if (fVar3 < (75f * 75f))
	{
		iLocal_1100 = 1;
	}
}


int func_871()//Position - 0x6E9AB
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BULLET_IN_AREA(1393.965f, -2070.811f, 50.99826f, 50f, 0) || MISC::IS_PROJECTILE_IN_AREA(1402.254f, -2045.808f, 50f, 1377.433f, -2106.007f, 100f, 0))
		{
			func_875();
			func_872();
			return 1;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_86864.f_9[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Global_86864.f_9[iVar0]))
							{
								func_875();
								func_872();
								return 1;
							}
						}
					}
				}
				iVar0++;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			Var2 = { GlobalFunc_2247(188, 0) };
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
			{
				fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar1, 1), Var2);
				if (fVar5 < 64f)
				{
					func_875();
					func_872();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_872()//Position - 0x6EAC5
{
	CAM::STOP_GAMEPLAY_HINT(0);
	if (GlobalFunc_111())
	{
		GlobalFunc_4956();
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}



void func_875()//Position - 0x6EB20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_86864.f_9[iVar0] != PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(Global_86864.f_9[iVar0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(Global_86864.f_9[iVar0], 1);
				}
			}
		}
		iVar0++;
	}
}

int func_876()//Position - 0x6EB97
{
	struct<3> Var0;
	float fVar3;
	
	if (GlobalFunc_42(GlobalFunc_8315()))
	{
		if (MISC::IS_BIT_SET(Global_81155[32 /*34*/].f_11, GlobalFunc_8315()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { GlobalFunc_2247(188, 0) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1411.473f, -2050.928f, 49.99822f, 1352.345f, -2098.835f, 80.99826f, 30f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
					fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
					if (GlobalFunc_8315() == 1)
					{
						if (fVar3 < 4f)
						{
							GlobalFunc_4956();
							return 1;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (fVar3 < 16f)
						{
							GlobalFunc_4956();
							return 1;
						}
					}
					else if (fVar3 < 36f)
					{
						GlobalFunc_4956();
						return 1;
					}
					if (iLocal_1100 == 3)
					{
						GlobalFunc_4956();
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_877()//Position - 0x6EC9E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_35(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	func_172(&(Global_86864[1]));
	func_50(&(Global_86864.f_28[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_4593();
}

void func_878()//Position - 0x6ECF7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_229(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	func_49(&(Global_86864[1]));
	func_50(&(Global_86864.f_28[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_4593();
}

void func_879()//Position - 0x6ED50
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	MISC::CLEAR_AREA(1382.637f, -2073.68f, 50.9988f, 40f, 1, 0, 0, 0);
	iVar0 = GlobalFunc_8315();
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(1257.324f, -2170.501f, 40.5466f, 1510.186f, -1965.295f, 75.6541f, 0, 1, 1, 1);
	if (iVar0 == 0)
	{
		func_887(1);
	}
	else
	{
		func_887(0);
	}
	switch (iVar0)
	{
		case 0:
			func_886(iVar0);
			break;
		
		case 1:
			func_884(iVar0);
			break;
		
		case 2:
			func_881(iVar0);
			break;
	}
	GlobalFunc_6514(32, "FBI_4_INT", 0, 120, 126);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
	{
		func_553(32, "steve_FBI", Global_86864.f_9[2]);
		GlobalFunc_6515(32, "steve_FBI", 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
	{
		func_553(32, "michael", Global_86864.f_9[3]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
	{
		func_553(32, "trevor", Global_86864.f_9[4]);
	}
}


void func_881(int iParam0)//Position - 0x6EF08
{
	func_883(iParam0);
	func_882(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
}

void func_882(bool bParam0)//Position - 0x6EF24
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "fbi_4_int_fra_idle_mic";
	}
	else
	{
		sVar0 = "fbi_4_int_trv_idle_mic";
	}
	func_231(&(Global_86864.f_9[3]), 0, 1982.198f, 3818.953f, 31.4232f, 215.9222f, 0, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
	GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], Global_86864.f_358, "missfbi4leadinoutfbi_4_int", sVar0, 1000f, -8f, 1, 0, 1148846080, 0);
}

void func_883(int iParam0)//Position - 0x6EFB1
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	
	if (iParam0 == 0)
	{
		Var0 = { 1390.956f, -2072.543f, 51.98967f };
		Var3 = { 0f, 0f, 40.32f };
		Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
		uVar6 = Global_86864.f_358;
	}
	else
	{
		Var0 = { 1391.657f, -2073.055f, 51.624f };
		Var3 = { 0f, 0f, 40.32f };
		Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
		uVar6 = Global_86864.f_358;
	}
	sVar7 = "missfbi4leadinoutfbi_4_int";
	if (iParam0 == 0)
	{
		sVar8 = "AGENTS_IDLE_A_ANDREAS";
		sVar9 = "AGENTS_IDLE_A_DAVE";
		sVar10 = "AGENTS_IDLE_B_STEVE";
	}
	else if (iParam0 == 1)
	{
		sVar8 = "fbi_4_int_fra_idle_andreas";
		sVar9 = "fbi_4_int_fra_idle_dave";
		sVar10 = "fbi_4_int_fra_idle_steve";
	}
	else if (iParam0 == 2)
	{
		sVar8 = "fbi_4_int_trv_idle_andreas";
		sVar9 = "fbi_4_int_trv_idle_dave";
		sVar10 = "fbi_4_int_trv_idle_steve";
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uVar6, sVar7, sVar8, 1000f, -8f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar6, 1);
		}
	}
	if (iParam0 == 0)
	{
		Var0 = { 1392.979f, -2071.985f, 52.01f };
		Var3 = { 0f, 0f, 26f };
		iVar6 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iVar6, sVar7, sVar9, 1000f, -8f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar6, 1);
		}
	}
	if (iParam0 == 0)
	{
		Var0 = { 1393.279f, -2069.735f, 52.01f };
		Var3 = { 0f, 0f, 33f };
		iVar6 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[2]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iVar6, sVar7, sVar10, 1000f, -8f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar6, 1);
		}
	}
}

void func_884(int iParam0)//Position - 0x6F1E3
{
	func_883(iParam0);
	func_882(1);
	func_885();
}

void func_885()//Position - 0x6F1FA
{
	func_231(&(Global_86864.f_9[4]), 2, 1982.198f, 3818.953f, 31.4232f, 215.9222f, 0, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
	GlobalFunc_4596(Global_86864.f_9[4], Global_86864.f_42);
	uLocal_1101 = PED::CREATE_SYNCHRONIZED_SCENE(1391.657f, -2073.055f, 51.624f, 0f, 0f, 40.32f, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[4], uLocal_1101, "missfbi4leadinoutfbi_4_int", "fbi_4_int_fra_idle_trv", 1000f, -1000f, 1, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1101, 1);
	while (!func_695(&(Global_86864[1]), 2, 1382.5f, -2068.988f, 51.96749f, 13.78538f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[1], 2);
		}
	}
}

void func_886(int iParam0)//Position - 0x6F2ED
{
	func_883(iParam0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
}

void func_887(bool bParam0)//Position - 0x6F30D
{
	GlobalFunc_6800(&(Global_86864.f_9[0]), 67, 1390.123f, -2070.553f, 51.0074f, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(67));
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	GlobalFunc_6800(&(Global_86864.f_9[1]), 30, 1392.27f, -2071.484f, 51.0172f, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(30));
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	if (bParam0)
	{
		Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_player_phone_01"), PED::GET_PED_BONE_COORDS(Global_86864.f_9[1], 28422, 0f, 0f, 0f), 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[1], PED::GET_PED_BONE_INDEX(Global_86864.f_9[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
	}
	GlobalFunc_6800(&(Global_86864.f_9[2]), 23, 1393.04f, -2069.232f, 51.0114f, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 10, 1, 0, 0);
	PED::SET_PED_PROP_INDEX(Global_86864.f_9[2], 1, 0, 0, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(23));
	GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
}

int func_888()//Position - 0x6F473
{
	if (func_619(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_889()//Position - 0x6F48D
{
	func_623(&(Global_86864.f_209), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_890()//Position - 0x6F4AA
{
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(0));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4917(2));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(67));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(30));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(23));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_player_phone_01"));
	GlobalFunc_6491(&(Global_86864.f_209), "missfbi4leadinoutfbi_4_int");
}

void func_891()//Position - 0x6F51E
{
	Global_86864.f_357 = 0;
	iLocal_1100 = 0;
}





int func_896()//Position - 0x6F554
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(186, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (2.5f * 2.5f))
		{
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_1091))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_1091);
			}
			return 1;
		}
	}
	return 0;
}

void func_897()//Position - 0x6F5AD
{
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1091))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FBI2")) == 0)
		{
			STREAMING::STREAMVOL_DELETE(uLocal_1091);
		}
	}
}

void func_898()//Position - 0x6F5D7
{
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1091))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1091);
	}
}

void func_899()//Position - 0x6F5F0
{
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1091))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1091);
	}
	uLocal_1091 = STREAMING::STREAMVOL_CREATE_FRUSTUM(60.9f, -753.7f, 46f, GlobalFunc_590(5.8f, 0f, -75f), 300f, 12, 127);
}







void func_906()//Position - 0x6F68C
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	
	if (!MISC::IS_BIT_SET(iLocal_1090, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(Global_81155[29 /*34*/].f_11, GlobalFunc_8315()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar3 = SYSTEM::VDIST2(Var0, -443.2148f, 1060.247f, 326.6808f);
				fVar4 = SYSTEM::VDIST2(Var0, -438.8461f, 1059.52f, 326.6808f);
				fVar5 = (fVar3 - fVar4);
				if (fVar5 > 0.5f)
				{
					if (MISC::IS_BIT_SET(iLocal_1090, 1))
					{
						GlobalFunc_4593();
						MISC::CLEAR_BIT(&iLocal_1090, 1);
					}
					if (!MISC::IS_BIT_SET(iLocal_1090, 2))
					{
						if (!Global_68262)
						{
							GlobalFunc_6514(29, "FBI_1_INT", 61, -1, -1);
							MISC::SET_BIT(&iLocal_1090, 2);
						}
					}
				}
				else if (fVar5 < -0.5f)
				{
					if (MISC::IS_BIT_SET(iLocal_1090, 2))
					{
						GlobalFunc_4593();
						MISC::CLEAR_BIT(&iLocal_1090, 2);
					}
					if (!MISC::IS_BIT_SET(iLocal_1090, 1))
					{
						if (!Global_68262)
						{
							GlobalFunc_6514(29, "FBI_1_INT", 62, -1, -1);
							MISC::SET_BIT(&iLocal_1090, 1);
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -453.3642f, 1075.772f, 326.6713f, -428.4899f, 1065.004f, 331.1821f, 21.25f, 0, 1, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, 1);
					if (iVar6 != joaat("weapon_unarmed"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -453.782f, 1067.391f, 326.4316f, -440.046f, 1060.741f, 331.117f, 6.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -442.6568f, 1059.945f, 326.4322f, -432.556f, 1062.536f, 331.2425f, 6.25f, 0, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1089))
							{
								iLocal_1089 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1083, Local_1086, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1089, "MISSFBI1LEADINOUT", "FBI_1_INT_LEADIN_ACTION_DAVEN", 8f, -1000f, 1, 16, 1148846080, 0);
								func_197();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								if (MISC::IS_BIT_SET(iLocal_1090, 1))
								{
									sVar7 = "FIB1_LEADINA";
								}
								else
								{
									sVar7 = "FIB1_LEADINB";
								}
								iVar8 = 0;
								iVar9 = 0;
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sVar7, &iVar9);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar7, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar8);
								if (iVar8 < (iVar9 - 1))
								{
									iVar8++;
								}
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), sVar7, iVar8, 517, -1);
								if (MISC::IS_BIT_SET(iLocal_1090, 1))
								{
									GlobalFunc_5157(&(Global_86864.f_44), "FBI1AUD", "FBI1_INTL", 9, 0, 0);
								}
								MISC::SET_BIT(&iLocal_1090, 0);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(iLocal_1090, 0))
				{
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
						{
							CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
							CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, 13000, 2000, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_FOV(30f);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.46f);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
							if (MISC::IS_BIT_SET(iLocal_1090, 2))
							{
								CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.8f);
							}
							else
							{
								CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.02f);
							}
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
						}
					}
					else
					{
						CAM::_0xCCD078C2665D2973(1);
					}
				}
			}
		}
	}
}



int func_909()//Position - 0x6FA4D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			if (PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(-448.8936f, 1064.199f, 326.4382f, -433.1197f, 1061.907f, 330.6856f, 8.5f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -448.8936f, 1064.199f, 326.4382f, -433.1197f, 1061.907f, 330.6856f, 8.5f))
	{
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		return 1;
	}
	return 0;
}

int func_910()//Position - 0x6FB2C
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (MISC::IS_BIT_SET(iLocal_1090, 0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1089))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1089) > 0.8f)
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (MISC::IS_BIT_SET(iLocal_1090, 2))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
					if (fVar1 < 25f)
					{
						bVar0 = true;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!GlobalFunc_111())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
				{
					PED::SET_PED_KEEP_TASK(Global_86864.f_9[0], 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_86864.f_9[0]));
			}
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			func_915();
			return 1;
		}
	}
	return 0;
}

void func_911()//Position - 0x6FC14
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	if (Global_86864.f_358 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_86864.f_358);
	}
	func_35(&(Global_86864.f_9[0]));
	GlobalFunc_200(&(Global_86864.f_44), 0);
	GlobalFunc_200(&(Global_86864.f_44), 8);
	GlobalFunc_4593();
}

void func_912()//Position - 0x6FC69
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	if (Global_86864.f_358 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_86864.f_358);
	}
	func_229(&(Global_86864.f_9[0]));
	GlobalFunc_200(&(Global_86864.f_44), 0);
	GlobalFunc_200(&(Global_86864.f_44), 8);
	GlobalFunc_4593();
}

void func_913()//Position - 0x6FCBE
{
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA((-440.4123f - 20f), (1073.885f - 15.75f), (327.1169f - 2f), (-440.4123f + 20f), (1073.885f + 15.75f), (327.1169f + 2f), 0, 1, 1, 1);
	PED::SET_PED_NON_CREATION_AREA((-440.4123f - 20f), (1073.885f - 15.75f), (327.1169f - 2f), (-440.4123f + 20f), (1073.885f + 15.75f), (327.1169f + 2f));
	Global_86864.f_358 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-440.4123f, 1073.885f, 327.1169f, 35f, 27.625f, 3.2f, 0f, 0, 7);
	MISC::CLEAR_AREA(-436.8515f, 1059.04f, 326.6815f, 20f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	GlobalFunc_6800(&(Global_86864.f_9[0]), 30, -436.8515f, 1059.04f, 326.6815f, 0f, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(30));
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	iLocal_1089 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1083, Local_1086, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1089, 1);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1089, "MISSFBI1LEADINOUT", "FBI_1_INT_LEADIN_LOOP_DAVEN", 1000f, -8f, 1, 16, 1148846080, 0);
	GlobalFunc_173(&(Global_86864.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	GlobalFunc_173(&(Global_86864.f_44), 8, Global_86864.f_9[0], "DAVE", 0, 1);
}

int func_914()//Position - 0x6FE59
{
	if (func_619(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_915()//Position - 0x6FE73
{
	func_623(&(Global_86864.f_209), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
}

void func_916()//Position - 0x6FE90
{
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(30));
	GlobalFunc_6491(&(Global_86864.f_209), "MISSFBI1LEADINOUT");
	func_631(&(Global_86864.f_209), "FIB1_LEADINA");
	func_631(&(Global_86864.f_209), "FIB1_LEADINB");
}

void func_917()//Position - 0x6FED5
{
	iLocal_1089 = 0;
	iLocal_1090 = 0;
	Global_86864.f_358 = -1;
}





int func_922()//Position - 0x6FF0F
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(183, 0) };
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












int func_934()//Position - 0x6FFBA
{
	struct<3> Var0;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_8315() == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.1922f, 179.0325f, 71.59528f, -799.4782f, 187.5136f, 75.85547f, 6f, 0, 1, 0))
			{
				return 1;
			}
		}
		else if (GlobalFunc_8315() == 2)
		{
			Var0 = { GlobalFunc_2247(182, GlobalFunc_8315()) };
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
			if (fVar3 < (7.5f * 7.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}











int func_945()//Position - 0x7009B
{
	if ((((func_946(Global_86864.f_9[0], 0) || func_946(Global_86864.f_9[1], 1)) || func_946(Global_86864.f_9[2], 2)) || func_946(Global_86864.f_9[3], 3)) || func_946(Global_86864.f_9[4], 4))
	{
		return 1;
	}
	return 0;
}

int func_946(int iParam0, int iParam1)//Position - 0x70109
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
		else if (!MISC::IS_BIT_SET(iLocal_523, iParam1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) == 1)
			{
				MISC::SET_BIT(&iLocal_523, iParam1);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_947()//Position - 0x70166
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1993.069f, 3057.777f, 46.05669f, 1990.494f, 3053.401f, 48.71535f, 6f, 0, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		if (!MISC::IS_BIT_SET(iLocal_523, 5))
		{
			if (SYSTEM::VDIST2(GlobalFunc_2247(175, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 625f)
			{
				GlobalFunc_6514(13, "CHINESE_2_INT", -1, -1, 0);
				MISC::SET_BIT(&iLocal_523, 5);
			}
		}
		if (iLocal_518 > 0)
		{
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f);
		}
		switch (iLocal_518)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1989.208f, 3053.569f, 45.5903f, 1989.933f, 3051.354f, 48.34022f, 1.25f, 0, 1, 0))
				{
					if ((((!PED::IS_PED_INJURED(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[1])) && !PED::IS_PED_INJURED(Global_86864.f_9[2])) && !PED::IS_PED_INJURED(Global_86864.f_9[3])) && !PED::IS_PED_INJURED(Global_86864.f_9[4]))
					{
						iLocal_520 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
						iLocal_521 = PED::CREATE_SYNCHRONIZED_SCENE(1986.938f, 3052.2f, 46.251f, 0f, 0f, 57.6f, 2);
						iLocal_522 = PED::CREATE_SYNCHRONIZED_SCENE(1987.151f, 3052.476f, 46.214f, 0f, 0f, 57.6f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_520, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 4f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_521, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_old_a", 4f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iLocal_522, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_old_b", 4f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], iLocal_520, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_transl", 4f, -1000f, 0, 0, 1148846080, 0);
						func_197();
					}
					iLocal_518++;
					iLocal_519 = MISC::GET_GAME_TIMER() + 1200;
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1988.081f, 3055.031f, 45.7778f, 1986.831f, 3052.973f, 48.84019f, 1f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
				if (MISC::GET_GAME_TIMER() > iLocal_519)
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_520);
					return 1;
				}
				break;
			
			default:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_520))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_520) == 1f)
					{
						AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_520);
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

void func_948()//Position - 0x70449
{
	func_35(&(Global_86864.f_9[0]));
	func_35(&(Global_86864.f_9[1]));
	func_35(&(Global_86864.f_9[2]));
	func_35(&(Global_86864.f_9[3]));
	func_35(&(Global_86864.f_9[4]));
	iLocal_518 = 0;
	iLocal_519 = 0;
	iLocal_520 = 999;
	iLocal_523 = 0;
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_949()//Position - 0x704BD
{
	GlobalFunc_8916(&(Global_86864.f_9[0]));
	func_229(&(Global_86864.f_9[1]));
	func_229(&(Global_86864.f_9[2]));
	func_229(&(Global_86864.f_9[3]));
	func_229(&(Global_86864.f_9[4]));
	iLocal_518 = 0;
	iLocal_519 = 0;
	iLocal_520 = 999;
	iLocal_523 = 0;
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}


void func_951()//Position - 0x705D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	iLocal_518 = 0;
	iLocal_519 = 0;
	iLocal_520 = 999;
	MISC::CLEAR_AREA(1985.971f, 3052.475f, 46.2152f, 6f, 1, 0, 0, 0);
	Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("ig_janet"), 1985.666f, 3052.661f, 46.2151f, 0f, 1, 1);
	Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("ig_old_man1a"), 1985.666f, 3052.661f, 46.2151f, 0f, 1, 1);
	Global_86864.f_9[2] = PED::CREATE_PED(26, joaat("ig_old_man2"), 1985.666f, 3052.661f, 46.2151f, 0f, 1, 1);
	Global_86864.f_9[3] = PED::CREATE_PED(26, joaat("ig_taostranslator"), 1985.666f, 3052.661f, 46.2151f, 0f, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
	{
		GlobalFunc_4598(Global_86864.f_9[4]);
	}
	MISC::CLEAR_BIT(&iLocal_523, 0);
	MISC::CLEAR_BIT(&iLocal_523, 1);
	MISC::CLEAR_BIT(&iLocal_523, 2);
	MISC::CLEAR_BIT(&iLocal_523, 3);
	MISC::CLEAR_BIT(&iLocal_523, 4);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
	GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
	GlobalFunc_4596(Global_86864.f_9[4], Global_86864.f_42);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[4], 9, 1, 0, 0);
	iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
	iVar1 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
	iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(1986.938f, 3052.2f, 46.251f, 0f, 0f, 57.6f, 2);
	iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(1987.151f, 3052.476f, 46.214f, 0f, 0f, 57.6f, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iVar0, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_janet", 1000f, -1000f, 0, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iVar2, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_old_a", 1000f, -1000f, 0, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iVar3, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_old_b", 1000f, -1000f, 0, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], iVar0, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_transl", 1000f, -1000f, 0, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[4], iVar1, "MISSChinese2_crystalMazeMCS1_IG", "Dance_loop_tao", 1000f, -1000f, 0, 0, 1148846080, 0);
	PED::SET_PED_PROP_INDEX(Global_86864.f_9[3], 1, 0, 1, false);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, 1);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar1, 1);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, 1);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, 1);
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(47.3957f, 3050.202f, 1987.606f) + Vector(12f, 12f, 12f), Vector(47.3957f, 3050.202f, 1987.606f) - Vector(12f, 12f, 12f), 0, 1, 1, 1);
	iLocal_518 = 0;
}

int func_952()//Position - 0x70926
{
	struct<3> Var0[1];
	struct<3> Var4[1];
	
	if (!func_619(&(Global_86864.f_209)))
	{
		return 0;
	}
	Var0[0 /*3*/].f_1 = -1;
	Var4[0 /*3*/].f_1 = -1;
	if (!func_675(&(Global_86864.f_9[4]), 21, 1985.666f, 3052.661f, 46.2151f, &Var0, &Var4))
	{
		return 0;
	}
	return 1;
}

void func_953()//Position - 0x70985
{
	func_623(&(Global_86864.f_209), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
}

void func_954()//Position - 0x709A3
{
	GlobalFunc_6491(&(Global_86864.f_209), "MISSChinese2_crystalMazeMCS1_IG");
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_janet"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_old_man2"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_old_man1a"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_taostranslator"));
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(21));
}

void func_955()//Position - 0x70A06
{
	iLocal_518 = 0;
	iLocal_519 = 0;
	iLocal_520 = 999;
	iLocal_523 = 0;
}


void func_957()//Position - 0x70A28
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1990.9f, 3054.3f, 47.5f, 2f, 2f, 2.5f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1989.53f, 3053.48f, 46.09f, 2039.93f, 3053.49f, 48.13f, 2.4f, 0, 1, 0))
		{
			if (CAM::IS_SPHERE_VISIBLE(1990.797f, 3053.552f, 47.40242f, 0.8f))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(1989.3f, 3053.5f, 47.9f, &fVar1, &fVar2);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1989.4f, 3052.5f, 47.9f) < 4f || (MISC::ABSF((fVar1 - 0.5f)) < 0.1f && MISC::ABSF((fVar2 - 0.5f)) < 0.3f))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
				}
			}
		}
		fVar3 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 5f);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1990.9f, 3054.3f, 47.5f) < (fVar3 * fVar3))
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (!MISC::IS_BIT_SET(iLocal_499, 4))
		{
			GlobalFunc_6514(12, "CHINESE_1_INT", -1, -1, 0);
			MISC::SET_BIT(&iLocal_499, 4);
		}
		if (!MISC::IS_BIT_SET(iLocal_499, 2))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1988.712f, 3051.993f, 46.21894f, 1989.821f, 3053.717f, 48.71535f, 3.5f, 0, 1, 0))
			{
				if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CHINESE_1_INT_LEADIN", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[0], 0);
							ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[1], 0);
							ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[2], 0);
							ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[3], 0);
							ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[4], 0);
							iLocal_502 = PED::CREATE_SYNCHRONIZED_SCENE(Local_506, Local_515, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_502, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "HUSB_LEADIN_ACTION", 1000f, -1.5f, 1, 16, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_502, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "RUSS_LEADIN_ACTION", 1000f, -1.5f, 1, 16, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[0], 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[1], 0, 0);
							func_197();
							if (AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_502))
							{
								MISC::SET_BIT(&iLocal_499, 3);
							}
							iLocal_501 = MISC::GET_GAME_TIMER();
							MISC::SET_BIT(&iLocal_499, 2);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(iLocal_499, 8))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1988.172f, 3053.668f, 46.2153f, 1f, -1, 0.25f, 0, 47.3f);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 4000, 0, 2);
				MISC::SET_BIT(&iLocal_499, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_499, 5))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_502))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_502) > 0.99f)
					{
						iLocal_502 = PED::CREATE_SYNCHRONIZED_SCENE(Local_506, Local_515, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_502, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_502, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "HUSB_LEADIN_LOOP", 1.5f, -1000f, 1, 16, 1148846080, 0);
							}
						}
						iLocal_503 = PED::CREATE_SYNCHRONIZED_SCENE(Local_506, Local_515, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_503, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[1], iLocal_503, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "RUSS_LEADIN_LOOP", 1.5f, -1000f, 1, 16, 1148846080, 0);
							}
						}
						MISC::SET_BIT(&iLocal_499, 5);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(iLocal_499, 4))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Old_Man1A", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tao", 1, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Taos_Translator", 1, 0, 0, 0);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_499, 0) && MISC::IS_BIT_SET(iLocal_499, 2))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1986.219f, 3056.189f, 46.21534f, 1982.284f, 3049.868f, 49.46496f, 5.5f, 0, 1, 0) || ((MISC::GET_GAME_TIMER() - iLocal_501) > 2900 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1988.712f, 3051.993f, 46.21894f, 1989.821f, 3053.717f, 48.71535f, 3.5f, 0, 1, 0)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[4]))
					{
						GlobalFunc_5157(&(Global_86864.f_44), "METHAUD", "CHIN_INTL", 9, 0, 0);
						iLocal_500 = MISC::GET_GAME_TIMER();
						MISC::SET_BIT(&iLocal_499, 0);
					}
				}
			}
		}
	}
}


int func_959()//Position - 0x70FA5
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < 5)
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
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(1986.219f, 3056.189f, 46.21534f, 1982.284f, 3049.868f, 49.46496f, 5.5f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1986.219f, 3056.189f, 46.21534f, 1982.284f, 3049.868f, 49.46496f, 5.5f))
	{
		return 1;
	}
	return 0;
}

int func_960()//Position - 0x7106C
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (MISC::IS_BIT_SET(iLocal_499, 0))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_500) > 1200)
		{
			bVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar1]))
			{
				PED::SET_PED_KEEP_TASK(Global_86864.f_9[iVar1], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_86864.f_9[iVar1]));
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[iVar1]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_86864.f_28[iVar1]));
			}
			iVar1++;
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_502))
		{
			if (MISC::IS_BIT_SET(iLocal_499, 3))
			{
				AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_502);
			}
		}
		PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
		func_965();
		return 1;
	}
	return 0;
}

void func_961()//Position - 0x71152
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_35(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_50(&(Global_86864.f_28[iVar0]));
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_499, 7))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-925491840, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-925491840, 0, 0, 1);
		MISC::CLEAR_BIT(&iLocal_499, 7);
	}
	GlobalFunc_200(&(Global_86864.f_44), 4);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	GlobalFunc_4593();
}

void func_962()//Position - 0x711E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_229(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	GlobalFunc_8916(&(Global_86864.f_9[4]));
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_51(&(Global_86864.f_28[iVar0]));
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_499, 7))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-925491840, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-925491840, 0, 0, 1);
		MISC::CLEAR_BIT(&iLocal_499, 7);
	}
	GlobalFunc_200(&(Global_86864.f_44), 4);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_963()//Position - 0x71289
{
	iLocal_499 = 0;
	iLocal_500 = -1;
	iLocal_501 = -1;
	iLocal_502 = 0;
	iLocal_503 = 0;
	iLocal_504 = 0;
	iLocal_505 = 0;
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(46.8556f, 3052.905f, 1984.997f) + Vector(2f, 5f, 5f), Vector(46.8556f, 3052.905f, 1984.997f) - Vector(2f, 5f, 5f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(1984.136f, 3051.934f, 46.21508f, 5.5f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(1991.079f, 3047.38f, 46.21512f, 5f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("ig_josef"), 1990.484f, 3047.265f, 46.2151f, 55.6093f, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_josef"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[0], 1);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("ig_russiandrunk"), 1989.171f, 3048.335f, 46.2151f, 242.9991f, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cs_russiandrunk"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[1], 1);
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	Global_86864.f_9[2] = PED::CREATE_PED(26, joaat("ig_old_man1a"), 1984.411f, 3051.54f, 46.2151f, 242.9991f, 1, 1);
	PED::SET_PED_PROP_INDEX(Global_86864.f_9[2], 0, 0, 0, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man1a"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[2], 1);
	GlobalFunc_4596(Global_86864.f_9[2], Global_86864.f_42);
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tumbler_01"), 1984.75f, 3053.25f, 47.33f, 1, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[0], 1);
	Global_86864.f_9[3] = PED::CREATE_PED(26, joaat("ig_old_man2"), 1984.411f, 3051.54f, 46.2151f, 242.9991f, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man2"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[3], 1);
	GlobalFunc_4596(Global_86864.f_9[3], Global_86864.f_42);
	Global_86864.f_9[4] = PED::CREATE_PED(26, joaat("ig_janet"), 1982.56f, 3053.414f, 46.2151f, 242.9991f, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_janet"));
	GlobalFunc_4596(Global_86864.f_9[4], Global_86864.f_42);
	ENTITY::SET_ENTITY_COORDS(Global_86864.f_9[4], 1984.312f, 3054.372f, 46.24f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[4], -118.8f);
	iLocal_504 = PED::CREATE_SYNCHRONIZED_SCENE(Local_509, Local_515, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_504, 1);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[2], iLocal_504, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "OLDMAN1_LEADIN_LOOP", 1000f, -1000f, 1, 16, 1148846080, 0);
	iLocal_505 = PED::CREATE_SYNCHRONIZED_SCENE(Local_512, Local_515, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_505, 1);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[3], iLocal_505, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "OLDMAN2_LEADIN_LOOP", 1000f, -1000f, 1, 16, 1148846080, 0);
	TASK::TASK_PLAY_ANIM(Global_86864.f_9[4], "MISSCHINESE1LEADINOUTCHINESE_1_INT", "janet_leadin_outro_loop", 8f, -8f, -1, 9, 0, 0, 0, 0);
	TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	OBJECT::_DOOR_CONTROL(joaat("v_ilev_fh_door4"), 1988.353f, 3054.411f, 47.3204f, 1, 0f, 0f, 1.175f);
	MISC::SET_BIT(&iLocal_499, 7);
	GlobalFunc_173(&(Global_86864.f_44), 4, Global_86864.f_9[4], "JANET", 0, 1);
}

int func_964()//Position - 0x7163E
{
	if (!MISC::IS_BIT_SET(iLocal_499, 1))
	{
		AUDIO::_0xC8EDE9BDBCCBA6D4("CHINESE_1_INT_LEADIN", 1986.441f, 3052.163f, 46.2152f);
		MISC::SET_BIT(&iLocal_499, 1);
	}
	if (func_619(&(Global_86864.f_209)) && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CHINESE_1_INT_LEADIN", 0))
	{
		return 1;
	}
	return 0;
}

void func_965()//Position - 0x71693
{
	func_623(&(Global_86864.f_209), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_200(&(Global_86864.f_44), 4);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_502))
	{
		if (MISC::IS_BIT_SET(iLocal_499, 3))
		{
			AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_502);
		}
	}
	else
	{
		iLocal_502 = PED::CREATE_SYNCHRONIZED_SCENE(Local_506, Local_515, 2);
		AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_502);
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_502);
	}
	if (MISC::IS_BIT_SET(iLocal_499, 7))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-925491840, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-925491840, 0, 0, 1);
		MISC::CLEAR_BIT(&iLocal_499, 7);
	}
}

void func_966()//Position - 0x71731
{
	GlobalFunc_6491(&(Global_86864.f_209), "MISSCHINESE1LEADINOUTCHINESE_1_INT");
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_old_man2"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_old_man1a"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_josef"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_russiandrunk"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_janet"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_tumbler_01"));
}

void func_967()//Position - 0x717A2
{
	iLocal_499 = 0;
	iLocal_500 = -1;
	iLocal_501 = -1;
	iLocal_502 = 0;
	iLocal_503 = 0;
	iLocal_504 = 0;
	iLocal_505 = 0;
}


void func_969()//Position - 0x717CE
{
	var uVar0;
	var uVar1;
	
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1980.202f, 3816.369f, 31.3084f, 1) < 4.875f)
	{
		iLocal_1929 = 1;
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	else if (iLocal_1929)
	{
		iLocal_1929 = 0;
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
	}
	switch (iLocal_1924)
	{
		case 0:
			if (GlobalFunc_6800(&(Global_86864.f_9[0]), 24, 1973.317f, 3816.846f, 32.4287f, 181.0048f, 1))
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_86864.f_9[0]);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 3, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 4, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 8, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 9, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 10, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 11, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(Global_86864.f_9[0], "misstrevor3leadinout", "trv_drive_ext_leadin_door_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
				iLocal_1924 = 2;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1980.746f, 3814.702f, 30.49608f, 1978.32f, 3818.517f, 34.57274f, 4.1875f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1980.083f, 3814.581f, 30.49009f, 1977.62f, 3813.189f, 34.42154f, 1.5625f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					iLocal_1928 = PED::CREATE_SYNCHRONIZED_SCENE(1973.938f, 3815.933f, 32.432f, 0f, 1.25f, 29.35f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1928, "misstrevor3leadinout", "trevor_dri_int_leadin_action_wade", 8f, -1000f, 5, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1928, 0.13f);
					func_197();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (func_971(PLAYER::PLAYER_PED_ID(), 1979.122f, 3816.031f, 31.28171f, 1979.84f, 3816.418f, 32.83316f, 1.625f))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1976.079f, 3812.487f, 21.04169f, 1980.76f, 3814.99f, 32.37143f, 1.625f, 0, 1, 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1980.047f, 3816.412f, 31.2845f, 1f, 20000, 1048576000, 0, 1193033728);
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "trv3_1", 0, 12, -1);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, Global_86864.f_9[0], 6000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_86864.f_9[0], -1);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					iLocal_1924 = 3;
					GlobalFunc_173(&(Global_86864.f_44), 2, Global_86864.f_9[0], "Wade", 0, 1);
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1973.095f, 3813.914f, 31.54959f, 1977.104f, 3816.118f, 35.04963f, 3.75f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					iLocal_1928 = PED::CREATE_SYNCHRONIZED_SCENE(1973.938f, 3815.933f, 32.432f, 0f, 1.25f, 29.35f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1928, "misstrevor3leadinout", "trevor_dri_int_leadin_action_wade", 8f, -1000f, 5, 0, 1148846080, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					func_197();
					iLocal_1924 = 4;
					GlobalFunc_173(&(Global_86864.f_44), 2, Global_86864.f_9[0], "Wade", 0, 1);
				}
			}
			break;
		
		case 3:
			if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 94f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 155f)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1928))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1928) > 0.37f)
					{
						if (GlobalFunc_10618(&(Global_86864.f_44), "TRV3AUD", "TRV3_DRINT", 7, 1, 0, 0))
						{
							iLocal_1924 = 5;
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1928))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1928) > 0.37f)
					{
						if (GlobalFunc_10618(&(Global_86864.f_44), "TRV3AUD", "TRV3_DRINT", 7, 1, 0, 0))
						{
							iLocal_1924 = 5;
						}
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 94f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 155f)
			{
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1928))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_1927);
				iLocal_1923 = 1;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1928))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1928) >= 0.77f && func_970())
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1927);
					iLocal_1923 = 1;
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1928) >= 0.99f)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1927);
					iLocal_1923 = 1;
				}
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1972.727f, 3813.056f, 32.4245f, 0) < 1.3f)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_1927);
				iLocal_1923 = 1;
			}
			break;
	}
}

int func_970()//Position - 0x71DA7
{
	if (!iLocal_1925)
	{
		if (func_971(Global_86864.f_9[0], 1970.069f, 3813.558f, 30.76939f, 1971.171f, 3811.62f, 33.25047f, 1f))
		{
			iLocal_1926 = 0;
		}
		else
		{
			iLocal_1926 = 1;
		}
		iLocal_1925 = 1;
	}
	if (iLocal_1926)
	{
		return 1;
	}
	return 0;
}

int func_971(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x71DFF
{
	var uVar0[20];
	int iVar21;
	int iVar22;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar21 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar0);
		iVar22 = 0;
		while (iVar22 <= (iVar21 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar22], 0))
			{
				if (GlobalFunc_4966(uVar0[iVar22], Param1, Param4, fParam7))
				{
					return 0;
				}
			}
			iVar22++;
		}
	}
	return 1;
}






int func_977()//Position - 0x7228B
{
	if (((FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1975.319f, 3814.92f, 32.4367f, 2.0625f) > 0 || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1971.837f, 3811.964f, 33.32494f, 2.0625f) > 0) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, 1973.499f, 3815.593f, 32.5645f, 2f)) || (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && PED::IS_PED_INJURED(Global_86864.f_9[0])))
	{
		return 1;
	}
	return 0;
}

int func_978()//Position - 0x72315
{
	if (iLocal_1923)
	{
		return 1;
	}
	return 0;
}

void func_979()//Position - 0x72328
{
	func_35(&(Global_86864.f_9[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	iLocal_1923 = 0;
	iLocal_1924 = 0;
	GlobalFunc_4593();
}

void func_980()//Position - 0x7234D
{
	func_229(&(Global_86864.f_9[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	iLocal_1923 = 0;
	iLocal_1925 = 0;
	iLocal_1926 = 0;
	iLocal_1924 = 0;
	GlobalFunc_4593();
}

void func_981()//Position - 0x7237A
{
	iLocal_1923 = 0;
	iLocal_1925 = 0;
	iLocal_1926 = 0;
	iLocal_1924 = 0;
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(32.677f, 3814.013f, 1974.455f) + Vector(7f, 7f, 7f), Vector(32.677f, 3814.013f, 1974.455f) - Vector(7f, 7f, 7f), 0, 1, 1, 1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("trv3_1", 1, 0.7f, 1f);
	STREAMING::REQUEST_IPL("TrevorsTrailerCollision");
	GlobalFunc_6514(64, "TREVOR_DRIVE_INT", -1, -1, 0);
}

int func_982()//Position - 0x723E8
{
	if (((STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3leadinout") && STREAMING::HAS_MODEL_LOADED(joaat("cs_wade"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("trv3_1")) && INTERIOR::IS_INTERIOR_READY(iLocal_1927))
	{
		return 1;
	}
	return 0;
}

void func_983()//Position - 0x72429
{
	STREAMING::REMOVE_ANIM_DICT("misstrevor3leadinout");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cs_wade"));
	TASK::REMOVE_WAYPOINT_RECORDING("trv3_1");
	INTERIOR::UNPIN_INTERIOR(iLocal_1927);
	STREAMING::REMOVE_IPL("TrevorsTrailerCollision");
	iLocal_1923 = 0;
	iLocal_1925 = 0;
	iLocal_1926 = 0;
	iLocal_1924 = 0;
}

void func_984()//Position - 0x7246C
{
	STREAMING::REQUEST_ANIM_DICT("misstrevor3leadinout");
	TASK::REQUEST_WAYPOINT_RECORDING("trv3_1");
	STREAMING::REQUEST_MODEL(joaat("cs_wade"));
	iLocal_1927 = INTERIOR::GET_INTERIOR_AT_COORDS(1973.192f, 3818.033f, 32.4363f);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1927);
}



void func_987()//Position - 0x724BC
{
	if (iLocal_1910 < 2)
	{
		if (iLocal_1914)
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1977.695f, 3815.277f, 33.64655f, 1979.088f, 3816.119f, 30.79779f, 2f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1966.745f, 3797.721f, 30.7297f, 1949.704f, 3827.022f, 35.6627f, 30.25f, 0, 1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(1973.84f, 3814.072f, 32.45993f, ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1), 1) < 15f)
					{
						iLocal_1911 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1904, Local_1907, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1911, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_idle", 4f, -4f, 1, 16, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1911, 1);
						TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						iLocal_1914 = 0;
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1966.745f, 3797.721f, 30.7297f, 1949.704f, 3827.022f, 35.6627f, 30.25f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					iLocal_1911 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1904, Local_1907, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1911, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_idle_slow", 4f, -4f, 1, 16, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1911, 1);
					TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					iLocal_1914 = 1;
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1970.685f, 3812.408f, 29.38306f, 1978.959f, 3817.218f, 36.79403f, 5.5f, 0, 1, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1972.871f, 3813.138f, 31.17449f, 1982.964f, 3818.989f, 34.55718f, 3.75f, 0, 1, 0))
	{
		CAM::SET_GAMEPLAY_COORD_HINT(Local_1916, -1, 2000, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1919);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1920);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1921);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
	}
	else
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
	}
	switch (iLocal_1910)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1957.9f, 3808.965f, 30.39679f, 1994.085f, 3828.923f, 36.73199f, 26.75f, 0, 1, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				iLocal_1910++;
			}
			break;
		
		case 1:
			if (iLocal_1913 == 0)
			{
				if (GlobalFunc_10618(&uLocal_1739, "T2AUD", "TR2_INT_LI1", 8, 0, 0, 0))
				{
					iLocal_1913 = 1;
					iLocal_1922 = MISC::GET_GAME_TIMER();
				}
			}
			else if (GlobalFunc_588(&iLocal_1922, MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000)))
			{
				iLocal_1913 = 0;
			}
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1977.695f, 3815.277f, 33.64655f, 1979.088f, 3816.119f, 30.79779f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1971.321f, 3812.474f, 32.03806f, 1977.033f, 3815.691f, 34.67418f, 3f, 0, 1, 0)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1977.358f, 3814.966f, 31.17613f, 1979.914f, 3816.569f, 34.03573f, 2f, 0, 1, 0) && GlobalFunc_8315() == 2))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					func_197();
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1974.67f, 3813.64f, 32.43f, 1f, 20000, 1048576000, 0, 1193033728);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_1911 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1904, Local_1907, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1911, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_action", 8f, -8f, 1, 16, 1148846080, 0);
					TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1911, 0);
					iLocal_1910++;
				}
			}
			break;
		
		case 2:
			if (iLocal_1912 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_1739, "T2AUD", "TR2_INT_LI2", 8, 0, 0, 0))
					{
						iLocal_1912 = 1;
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				iLocal_1910++;
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1911) > 0.266f)
			{
				iLocal_1910++;
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1911))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1911) == 1f)
					{
						iLocal_1911 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1904, Local_1907, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1911, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_outro_idle", 8f, -8f, 1, 16, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1911, 0);
						iLocal_1910++;
					}
				}
			}
			break;
		
		case 3:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			iLocal_1910++;
			break;
		
		case 4:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			break;
	}
}



int func_990()//Position - 0x72A95
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
			return 1;
		}
	}
	return 0;
}

int func_991()//Position - 0x72B16
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1910 > 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_992()//Position - 0x72B49
{
	func_35(&(Global_86864.f_9[0]));
	GlobalFunc_200(&uLocal_1739, 3);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("t2leadin", 0, 1065353216, 1056964608);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	if (iLocal_1915)
	{
		GlobalFunc_76(6);
		iLocal_1915 = 0;
	}
	GlobalFunc_4593();
}

void func_993()//Position - 0x72B97
{
	func_229(&(Global_86864.f_9[0]));
	GlobalFunc_200(&uLocal_1739, 3);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("t2leadin", 0, 1065353216, 1056964608);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	CAM::STOP_GAMEPLAY_HINT(0);
	CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
	if (iLocal_1915)
	{
		GlobalFunc_76(6);
		iLocal_1915 = 0;
	}
	GlobalFunc_4593();
}

void func_994()//Position - 0x72BF9
{
	MISC::CLEAR_AREA(GlobalFunc_2247(213, 0), 3f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	GlobalFunc_7621(78, 1, 0, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		GlobalFunc_4598(Global_86864.f_9[0]);
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
		GlobalFunc_173(&uLocal_1739, 3, Global_86864.f_9[0], "NervousRon", 0, 1);
	}
	GlobalFunc_173(&uLocal_1739, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_1911 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1904, Local_1907, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], iLocal_1911, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_idle", 1000f, -8f, 1, 16, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1911, 1);
	iLocal_1910 = 0;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("T2leadin", 1, 1065353216, 1056964608);
	GlobalFunc_6514(63, "TREVOR_2_INT", -1, -1, 0);
	func_553(63, "RON", Global_86864.f_9[0]);
	GlobalFunc_6514(63, "TREVOR_2_INT", -1, -1, 0);
}

int func_995()//Position - 0x72D13
{
	struct<3> Var0[12];
	struct<3> Var37[2];
	
	GlobalFunc_4599(&(Var0[0 /*3*/]), 0, 0, 0);
	GlobalFunc_4599(&(Var0[1 /*3*/]), 1, 0, 0);
	GlobalFunc_4599(&(Var0[2 /*3*/]), 2, 0, 0);
	GlobalFunc_4599(&(Var0[3 /*3*/]), 3, 0, 0);
	GlobalFunc_4599(&(Var0[4 /*3*/]), 4, 0, 0);
	GlobalFunc_4599(&(Var0[5 /*3*/]), 5, 0, 0);
	GlobalFunc_4599(&(Var0[6 /*3*/]), 6, 0, 0);
	GlobalFunc_4599(&(Var0[7 /*3*/]), 7, 0, 0);
	GlobalFunc_4599(&(Var0[8 /*3*/]), 8, 0, 0);
	GlobalFunc_4599(&(Var0[9 /*3*/]), 9, 0, 0);
	GlobalFunc_4599(&(Var0[10 /*3*/]), 10, 0, 0);
	GlobalFunc_4599(&(Var0[11 /*3*/]), 11, 0, 0);
	GlobalFunc_4599(&(Var37[0 /*3*/]), 0, 0, 0);
	GlobalFunc_4599(&(Var37[0 /*3*/]), 1, 0, 0);
	if (((!func_675(&(Global_86864.f_9[0]), 20, 1972.956f, 3812.079f, 32.84f, &Var0, &Var37) || !STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2leadinouttrv_2_int")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("T2leadin"))
	{
		return 0;
	}
	return 1;
}


void func_997()//Position - 0x72E46
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(20));
	STREAMING::REMOVE_ANIM_DICT("misstrevor2leadinouttrv_2_int");
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	HUD::CLEAR_ADDITIONAL_TEXT(0, false);
	TASK::REMOVE_WAYPOINT_RECORDING("T2leadin");
	if (iLocal_1915)
	{
		GlobalFunc_76(7);
		iLocal_1915 = 0;
	}
}

void func_998()//Position - 0x72E89
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(20));
	STREAMING::REQUEST_ANIM_DICT("misstrevor2leadinouttrv_2_int");
	TASK::REQUEST_WAYPOINT_RECORDING("T2leadin");
	HUD::REQUEST_ADDITIONAL_TEXT("SJC", 0);
}

void func_999()//Position - 0x72EB7
{
	CAM::STOP_GAMEPLAY_HINT(0);
	CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
}


