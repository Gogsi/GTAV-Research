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
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
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
	int iLocal_234 = 0;
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	bool bLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
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
	int iLocal_1081 = 0;
	int iLocal_1082 = 0;
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
	int iLocal_1452 = 0;
	int iLocal_1453 = 0;
	int iLocal_1454 = 0;
	int iLocal_1455 = 0;
	int iLocal_1456 = 0;
	int iLocal_1457 = 0;
	int iLocal_1458 = 0;
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	int iLocal_1461 = 0;
	int iLocal_1462 = 0;
	int iLocal_1463 = 0;
	int iLocal_1464 = 0;
	int iLocal_1465 = 0;
	var uLocal_1466 = 0;
	int iLocal_1467 = 0;
	int iLocal_1468 = 0;
	int iLocal_1469 = 0;
	var uLocal_1470 = 0;
	char cLocal_1471[32] = "";
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	char* sLocal_1479 = NULL;
	char* sLocal_1480 = NULL;
	struct<5> Local_1481 = { 262, 0, 1065353216, 0, 0 } ;
	int iLocal_1486 = 0;
	int iLocal_1487 = 0;
	int iLocal_1488 = 0;
	struct<3> Local_1489 = { 0, 0, 0 } ;
	struct<3> Local_1492 = { 0, 0, 0 } ;
	struct<5> Local_1495 = { 262, 0, 1065353216, 0, 0 } ;
	int iLocal_1500 = 0;
	int iLocal_1501 = 0;
	int iLocal_1502 = 0;
	int iLocal_1503 = 0;
	int iLocal_1504 = 0;
	int iLocal_1505 = 0;
	float fLocal_1506 = 0f;
	int iLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	int iLocal_1510 = 0;
	int iLocal_1511 = 0;
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
	int iLocal_1561 = 0;
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
	Var0 = 31733/*func_162*/;
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
		if (GlobalFunc_230(62))
		{
			func_158(&Var0);
		}
		func_1(&Var0);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x4A3
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

























void func_26(int iParam0, var uParam1)//Position - 0x12C3
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

int func_27(int iParam0, var uParam1)//Position - 0x1393
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
							func_138(&(Global_86864.f_209));
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
																	ENTITY::SET_ENTITY_HEALTH(iVar22, 1);
																}
																if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar22) < 1f)
																{
																	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar22, 1f);
																}
																if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar22) < 1f)
																{
																	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar22, 1f);
																}
																if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 25) || (iVar0 == 15 && GlobalFunc_8315() == 1))
																{
																	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar22))
																	{
																		GlobalFunc_530(iVar22, 2.5f, 2, 0.5f, 1, 1);
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







void func_34()//Position - 0x245E
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













void func_47(var uParam0)//Position - 0x2908
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




void func_51(int iParam0)//Position - 0x2AFA
{
	var uVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(uVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(uVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}







bool func_58(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F48
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_59(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_59(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F76
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
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
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
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
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
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
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
























































void func_115(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5FD8
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







int func_122(int iParam0, var uParam1)//Position - 0x6313
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

void func_123(int iParam0)//Position - 0x647F
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
					ENTITY::SET_ENTITY_HEALTH(iVar1, 1);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar1, 1f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar1, 1f);
				}
				GlobalFunc_530(iVar1, 2.5f, 2, 0.25f, 0, 1);
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















void func_138(var uParam0)//Position - 0x714C
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || MISC::IS_BIT_SET(Global_89962.f_20, 2)) || MISC::IS_BIT_SET(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_139(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_139(var uParam0)//Position - 0x71D6
{
	func_140(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_140(var uParam0, char* sParam1, int iParam2)//Position - 0x71EC
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (GlobalFunc_4585(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}


















void func_158(var uParam0)//Position - 0x7963
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


void func_160(var uParam0)//Position - 0x7A08
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


void func_162(int iParam0, var uParam1, var uParam2)//Position - 0x7BF5
{
	switch (iParam0)
	{
		case 1:
			GlobalFunc_4601(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 418429/*func_738*/;
			uParam2->f_2 = 418331/*func_737*/;
			uParam2->f_3 = 418287/*func_736*/;
			uParam2->f_4 = 418261/*func_735*/;
			uParam2->f_5 = 417752/*func_734*/;
			uParam2->f_6 = 417566/*func_733*/;
			uParam2->f_7 = 417380/*func_732*/;
			uParam2->f_10 = 416553/*func_730*/;
			uParam2->f_11 = 416021/*func_729*/;
			uParam2->f_12 = 416012/*func_728*/;
			uParam2->f_8 = 415239/*func_724*/;
			uParam2->f_9 = 415231/*func_723*/;
			break;
		
		case 2:
			GlobalFunc_4601(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 415194/*func_722*/;
			uParam2->f_2 = 415097/*func_721*/;
			uParam2->f_3 = 415048/*func_720*/;
			uParam2->f_4 = 415022/*func_719*/;
			uParam2->f_5 = 395926/*func_712*/;
			uParam2->f_6 = 395695/*func_711*/;
			uParam2->f_7 = 395464/*func_710*/;
			uParam2->f_10 = 393278/*func_707*/;
			uParam2->f_11 = 392837/*func_706*/;
			uParam2->f_12 = 392828/*func_705*/;
			uParam2->f_8 = 392820/*func_704*/;
			uParam2->f_9 = 392812/*func_703*/;
			break;
		
		case 17:
			GlobalFunc_4601(uParam1, iParam0, 75f, 100f, 50f, 0, 0, 0);
			uParam2->f_1 = 392796/*func_702*/;
			uParam2->f_2 = 392788/*func_701*/;
			uParam2->f_3 = 392780/*func_700*/;
			uParam2->f_4 = 392771/*func_699*/;
			uParam2->f_5 = 392763/*func_698*/;
			uParam2->f_6 = 392755/*func_697*/;
			uParam2->f_7 = 392747/*func_696*/;
			uParam2->f_10 = 392488/*func_695*/;
			uParam2->f_11 = 392479/*func_694*/;
			uParam2->f_12 = 392470/*func_693*/;
			uParam2->f_8 = 392462/*func_692*/;
			uParam2->f_9 = 392454/*func_691*/;
			break;
		
		case 18:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 392446/*func_690*/;
			uParam2->f_2 = 392428/*func_689*/;
			uParam2->f_3 = 392410/*func_688*/;
			uParam2->f_4 = 392392/*func_687*/;
			uParam2->f_5 = 391965/*func_686*/;
			uParam2->f_6 = 391944/*func_685*/;
			uParam2->f_7 = 391923/*func_684*/;
			uParam2->f_10 = 391579/*func_683*/;
			uParam2->f_11 = 391570/*func_682*/;
			uParam2->f_12 = 391561/*func_681*/;
			uParam2->f_8 = 391470/*func_680*/;
			uParam2->f_9 = 391379/*func_679*/;
			break;
		
		case 19:
			GlobalFunc_4601(uParam1, iParam0, 100f, 120f, 50f, 0, 0, 0);
			uParam2->f_1 = 391359/*func_678*/;
			uParam2->f_2 = 390888/*func_674*/;
			uParam2->f_3 = 390509/*func_668*/;
			uParam2->f_4 = 390119/*func_664*/;
			uParam2->f_5 = 388706/*func_661*/;
			uParam2->f_6 = 388555/*func_660*/;
			uParam2->f_7 = 388404/*func_659*/;
			uParam2->f_10 = 387936/*func_656*/;
			uParam2->f_11 = 387915/*func_655*/;
			uParam2->f_12 = 387906/*func_654*/;
			uParam2->f_8 = 386098/*func_653*/;
			uParam2->f_9 = 386090/*func_652*/;
			break;
		
		case 44:
			GlobalFunc_4601(uParam1, iParam0, 50f, 65f, 50f, 0, 0, 0);
			uParam2->f_1 = 385955/*func_651*/;
			uParam2->f_2 = 385868/*func_650*/;
			uParam2->f_3 = 385765/*func_649*/;
			uParam2->f_4 = 385671/*func_648*/;
			uParam2->f_5 = 385588/*func_647*/;
			uParam2->f_6 = 385302/*func_646*/;
			uParam2->f_7 = 385207/*func_645*/;
			uParam2->f_10 = 385096/*func_644*/;
			uParam2->f_11 = 385024/*func_643*/;
			uParam2->f_12 = 385015/*func_642*/;
			uParam2->f_8 = 381887/*func_635*/;
			uParam2->f_9 = 381732/*func_634*/;
			break;
		
		case 40:
			GlobalFunc_4601(uParam1, iParam0, 110f, 135f, 50f, 0, 0, 0);
			uParam2->f_1 = 381724/*func_633*/;
			uParam2->f_2 = 381716/*func_632*/;
			uParam2->f_3 = 381708/*func_631*/;
			uParam2->f_4 = 381699/*func_630*/;
			uParam2->f_5 = 381683/*func_629*/;
			uParam2->f_6 = 381671/*func_628*/;
			uParam2->f_7 = 381659/*func_627*/;
			uParam2->f_10 = 380882/*func_623*/;
			uParam2->f_11 = 380873/*func_622*/;
			uParam2->f_12 = 380864/*func_621*/;
			uParam2->f_8 = 380856/*func_620*/;
			uParam2->f_9 = 380848/*func_619*/;
			break;
		
		case 43:
			GlobalFunc_4601(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 380840/*func_618*/;
			uParam2->f_2 = 380814/*func_617*/;
			uParam2->f_3 = 380788/*func_616*/;
			uParam2->f_4 = 380779/*func_615*/;
			uParam2->f_5 = 380771/*func_614*/;
			uParam2->f_6 = 380763/*func_613*/;
			uParam2->f_7 = 380755/*func_612*/;
			uParam2->f_10 = 380682/*func_611*/;
			uParam2->f_11 = 380673/*func_610*/;
			uParam2->f_12 = 380664/*func_609*/;
			uParam2->f_8 = 380607/*func_608*/;
			uParam2->f_9 = 380599/*func_607*/;
			break;
		
		case 86:
			GlobalFunc_4601(uParam1, iParam0, 100f, 120f, 50f, 0, 0, 0);
			uParam2->f_1 = 380531/*func_606*/;
			uParam2->f_2 = 380476/*func_605*/;
			uParam2->f_3 = 380393/*func_604*/;
			uParam2->f_4 = 379678/*func_597*/;
			uParam2->f_5 = 376359/*func_585*/;
			uParam2->f_6 = 376138/*func_583*/;
			uParam2->f_7 = 376033/*func_581*/;
			uParam2->f_10 = 374376/*func_569*/;
			uParam2->f_11 = 373965/*func_565*/;
			uParam2->f_12 = 373956/*func_564*/;
			uParam2->f_8 = 369540/*func_551*/;
			uParam2->f_9 = 369377/*func_550*/;
			break;
		
		case 87:
			GlobalFunc_4601(uParam1, iParam0, 325f, 335f, 50f, 0, 0, 0);
			uParam2->f_1 = 369369/*func_549*/;
			uParam2->f_2 = 369264/*func_548*/;
			uParam2->f_3 = 369166/*func_547*/;
			uParam2->f_4 = 368804/*func_546*/;
			uParam2->f_5 = 367076/*func_545*/;
			uParam2->f_6 = 366993/*func_544*/;
			uParam2->f_7 = 366910/*func_543*/;
			uParam2->f_10 = 366735/*func_541*/;
			uParam2->f_11 = 366726/*func_540*/;
			uParam2->f_12 = 366717/*func_539*/;
			uParam2->f_8 = 366709/*func_538*/;
			uParam2->f_9 = 366701/*func_537*/;
			break;
		
		case 88:
			GlobalFunc_4601(uParam1, iParam0, 250f, 270f, 270f, 0, 0f, 2);
			uParam2->f_1 = 366632/*func_536*/;
			uParam2->f_2 = 366568/*func_535*/;
			uParam2->f_3 = 366504/*func_534*/;
			uParam2->f_4 = 366438/*func_533*/;
			uParam2->f_5 = 365927/*func_531*/;
			uParam2->f_6 = 365632/*func_529*/;
			uParam2->f_7 = 365570/*func_528*/;
			uParam2->f_10 = 365291/*func_527*/;
			uParam2->f_11 = 365282/*func_526*/;
			uParam2->f_12 = 364831/*func_525*/;
			uParam2->f_8 = 364720/*func_524*/;
			uParam2->f_9 = 364547/*func_523*/;
			break;
		
		case 89:
			GlobalFunc_4601(uParam1, iParam0, 320f, 350f, 350f, 0, 0f, 2);
			uParam2->f_1 = 364478/*func_522*/;
			uParam2->f_2 = 364433/*func_521*/;
			uParam2->f_3 = 364398/*func_520*/;
			uParam2->f_4 = 364308/*func_519*/;
			uParam2->f_5 = 363107/*func_514*/;
			uParam2->f_6 = 362951/*func_513*/;
			uParam2->f_7 = 362841/*func_512*/;
			uParam2->f_10 = 362329/*func_509*/;
			uParam2->f_11 = 362274/*func_508*/;
			uParam2->f_12 = 361652/*func_505*/;
			uParam2->f_8 = 360710/*func_502*/;
			uParam2->f_9 = 360108/*func_496*/;
			break;
		
		case 62:
			GlobalFunc_4601(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 360096/*func_495*/;
			uParam2->f_2 = 360053/*func_494*/;
			uParam2->f_3 = 360010/*func_493*/;
			uParam2->f_4 = 359944/*func_492*/;
			uParam2->f_5 = 53006/*func_204*/;
			uParam2->f_6 = 52732/*func_202*/;
			uParam2->f_7 = 52661/*func_200*/;
			uParam2->f_10 = 52601/*func_199*/;
			uParam2->f_11 = 52528/*func_198*/;
			uParam2->f_12 = 52519/*func_197*/;
			uParam2->f_8 = 34344/*func_180*/;
			uParam2->f_9 = 34336/*func_179*/;
			break;
		
		case 54:
		case 55:
		case 58:
			GlobalFunc_4601(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 34328/*func_178*/;
			uParam2->f_2 = 34311/*func_177*/;
			uParam2->f_3 = 34294/*func_176*/;
			uParam2->f_4 = 34269/*func_175*/;
			uParam2->f_5 = 34165/*func_174*/;
			uParam2->f_6 = 34146/*func_173*/;
			uParam2->f_7 = 34023/*func_171*/;
			uParam2->f_10 = 33653/*func_167*/;
			uParam2->f_11 = 33644/*func_166*/;
			uParam2->f_12 = 33622/*func_165*/;
			uParam2->f_8 = 33614/*func_164*/;
			uParam2->f_9 = 33606/*func_163*/;
			break;
		
		default:
			return;
			break;
	}
	*uParam2 = 1;
}


















void func_180()//Position - 0x8628
{
	GlobalFunc_10686(46, 4);
	GlobalFunc_10686(40, 4);
	GlobalFunc_10686(45, 4);
	GlobalFunc_10686(41, 4);
	GlobalFunc_10686(43, 4);
	GlobalFunc_10686(42, 4);
	GlobalFunc_10686(44, 4);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.1025f, 175.4421f, 71.33471f, -807.3251f, 172.3821f, 73.83471f, 12.25f, 0, 1, 0))
	{
		CAM::SET_GAMEPLAY_COORD_HINT(Local_1568, -1, 2000, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1571);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1572);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1573);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
	}
	else
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
	}
	if (GlobalFunc_8315() == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -820.7342f, 179.5471f, 68.11261f, -818.6727f, 174.1724f, 74.36282f, 7.5f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	if (GlobalFunc_8315() == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.228f, 178.2448f, 68.67244f, -801.2753f, 182.8168f, 75.35547f, 7.5f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	switch (iLocal_1561)
	{
		case 0:
			if (GlobalFunc_8315() == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1971.284f, 3812.5f, 30.84707f, 1978.908f, 3816.801f, 35.18824f, 3.5f, 0, 1, 0))
				{
					GlobalFunc_173(&uLocal_1574, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					func_181();
					iLocal_1561++;
				}
			}
			else
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (GlobalFunc_8315() == 0)
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -814.8013f, 179.0616f, 68.65919f, -818.582f, 177.3977f, 74.97781f, 3.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.228f, 178.2448f, 68.67244f, -801.2753f, 182.8168f, 75.35547f, 7.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.6451f, 179.6094f, 70.47739f, -816.4962f, 176.4357f, 75.22739f, 6f, 0, 1, 0))
					{
						iLocal_1561 = 2;
					}
				}
				else if (GlobalFunc_8315() == 1)
				{
					if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -808.7091f, 178.3853f, 68.65309f, -807.4963f, 175.3388f, 75.59469f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.7493f, 176.7683f, 69.33471f, -802.0392f, 181.4183f, 75.35547f, 3f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.8173f, 168.5545f, 69.33471f, -804.9606f, 177.7912f, 75.6881f, 8.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.214f, 181.6833f, 70.85777f, -810.2359f, 179.3729f, 74.40309f, 3.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.711f, 180.3725f, 70.90308f, -812.6513f, 178.4246f, 74.90919f, 3.5f, 0, 1, 0))
					{
						GlobalFunc_173(&uLocal_1574, 0, Global_86864.f_9[0], "MICHAEL", 0, 1);
						GlobalFunc_173(&uLocal_1574, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1559))
						{
							uLocal_1560 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1562, Local_1565, 2);
							if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
							{
								if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -808.416f, 177.4646f, 71.6071f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1560, "missheist_jewelleadinoutjh_endscene", "action_mic", 8f, -8f, 4, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1560, 0.7f);
									func_181();
									iLocal_1561++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_8315() == 1)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1560))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1560) > 0.8f)
					{
						iLocal_1561++;
					}
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				iLocal_1561++;
			}
			break;
		
		case 2:
			if (GlobalFunc_8315() == 0)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (GlobalFunc_8315() == 1)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			break;
	}
}

void func_181()//Position - 0x8ABC
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
					ENTITY::SET_ENTITY_HEALTH(iVar1, 1);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar1, 1f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar1, 1f);
				}
				GlobalFunc_530(iVar1, 2.5f, 2, 0.5f, 0, 1);
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

















int func_198()//Position - 0xCD30
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
	return 0;
}

int func_199()//Position - 0xCD79
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1561 == 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_200()//Position - 0xCDB5
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_8915(&(Global_86864.f_9[1]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}


void func_202()//Position - 0xCDFC
{
	func_203(&(Global_86864.f_9[0]));
	func_203(&(Global_86864.f_9[1]));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_203(var uParam0)//Position - 0xCE36
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

void func_204()//Position - 0xCF0E
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	GlobalFunc_5168(1, 1, 1);
	GlobalFunc_5168(1, 0, 1);
	GlobalFunc_5168(1, 7, 1);
	GlobalFunc_10686(53, 0);
	if (GlobalFunc_8315() == 2)
	{
	}
	else if (GlobalFunc_8315() == 0)
	{
		func_211(&(Global_86864.f_9[1]), 2, 1975.373f, 3818.316f, 32.4363f, 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 4, 23, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 6, 10, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 8, 14, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 11, 0, 0, 0);
		GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864.f_9[1], 1);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_86864.f_9[1], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
	}
	else if (GlobalFunc_8315() == 1)
	{
		func_211(&(Global_86864.f_9[0]), 0, Local_1562, 0, 1, 1, 0);
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
		func_211(&(Global_86864.f_9[1]), 2, 1975.373f, 3818.316f, 32.4363f, 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 4, 23, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 6, 10, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 8, 14, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 11, 0, 0, 0);
		GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864.f_9[1], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
		if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tumbler_01_empty"), Local_1562, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		uLocal_1559 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1562, Local_1565, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1559, "missheist_jewelleadinoutjh_endscene", "loop_mic", 1000f, -8f, 4, 16, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1559, 1);
	}
	GlobalFunc_6514(62, "TREVOR_1_INT", 8183, 8180, 8176);
	if (GlobalFunc_8315() == 2)
	{
		func_205(62, "Trevor", PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_8315() == 0)
	{
		func_205(62, "Michael", PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_8315() == 1)
	{
		func_205(62, "Michael", Global_86864.f_9[0]);
		func_205(62, "Franklin", PLAYER::PLAYER_PED_ID());
	}
}

void func_205(int iParam0, char* sParam1, int iParam2)//Position - 0xD2E8
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






int func_211(var uParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xD5F0
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
			func_483(*uParam0);
			GlobalFunc_8021(*uParam0, 1, 0);
			GlobalFunc_8030(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_213(*uParam0, bParam8);
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


int func_213(int iParam0, bool bParam1)//Position - 0xD708
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_302(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7997(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_302(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_454(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 10))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 50))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 59))
			{
				func_454(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 22))
			{
				func_454(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10997(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 4))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 3))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 82))
			{
				func_454(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 76))
			{
				func_454(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 1))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10997(iParam0, 12, 12))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10997(iParam0, 3, 71))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 7))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 88))
			{
				func_454(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 17))
			{
				func_454(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_454(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

























































































void func_302(int iParam0, int iParam1)//Position - 0x272B8
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
					func_313(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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











void func_313(int iParam0, var uParam1, bool bParam2)//Position - 0x28509
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
				func_454(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11150(iParam0, iVar1, &iVar2))
			{
				func_454(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_316(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_316(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x287A0
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
					func_316(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_316(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_316(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_316(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_316(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_316(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_316(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_316(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
						func_316(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_316(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_316(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_316(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
							func_316(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_316(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
						func_316(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_316(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11202(iParam0, &uVar4))
		{
			func_316(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_316(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_316(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_316(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_316(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}










































































































































int func_454(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x537AB
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
										func_454(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
									func_454(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								func_454(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_454(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_454(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_454(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_454(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_454(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_454(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
						func_454(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_454(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_454(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			func_454(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11150(iParam0, iVar10, &iVar4))
		{
			func_454(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





























void func_483(int iParam0)//Position - 0x573C5
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
		func_313(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
				func_313(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}









int func_492()//Position - 0x57E08
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("player_zero")) && STREAMING::HAS_MODEL_LOADED(joaat("player_two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewelleadinoutjh_endscene")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_tumbler_01_empty")))
	{
		return 1;
	}
	return 0;
}

void func_493()//Position - 0x57E4A
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_two"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tumbler_01_empty"));
	STREAMING::REMOVE_ANIM_DICT("missheist_jewelleadinoutjh_endscene");
}

void func_494()//Position - 0x57E75
{
	STREAMING::REQUEST_MODEL(joaat("player_zero"));
	STREAMING::REQUEST_MODEL(joaat("player_two"));
	STREAMING::REQUEST_MODEL(joaat("prop_tumbler_01_empty"));
	STREAMING::REQUEST_ANIM_DICT("missheist_jewelleadinoutjh_endscene");
}

void func_495()//Position - 0x57EA0
{
	iLocal_1561 = 0;
}

void func_496()//Position - 0x57EAC
{
	if (iLocal_1500)
	{
		if (!iLocal_1501)
		{
			if (Global_87264 == 1)
			{
				iLocal_1501 = 1;
			}
			else if (Global_87264 <= 3)
			{
				switch (GlobalFunc_5216("AM_H_JHP1B_REAP"))
				{
					case 2:
						GlobalFunc_6677("AM_H_JHP1B_REAP", 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					
					case 1:
						StringCopy(&Global_95999, "", 16);
						iLocal_1501 = 1;
						break;
				}
			}
			else
			{
				iLocal_1501 = 1;
			}
		}
		if (!func_497(&Local_1495) || !MISC::IS_BIT_SET(Global_81155[89 /*34*/].f_11, GlobalFunc_8315()))
		{
			Global_87263 = -15;
			StringCopy(&Global_87247, "", 64);
			iLocal_1500 = 0;
		}
	}
}

int func_497(var uParam0)//Position - 0x57F59
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_1))
			{
				return func_499(*uParam0, uParam0->f_1, &(uParam0->f_3), uParam0->f_2);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		GlobalFunc_786(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1));
	}
	return 1;
}


int func_499(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x5800A
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



void func_502()//Position - 0x58106
{
	int iVar0;
	
	if (iLocal_1500)
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1456678445))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(-1456678445, joaat("prop_com_gar_door_01"), 452.2993f, -1001.18f, 26.7593f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(2103312950))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(2103312950, joaat("prop_com_gar_door_01"), 447.48f, -1001.171f, 26.7126f, 1, 1, 0);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(2103312950) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(2103312950, 1, 1, 1);
		}
		if (func_504(Global_86864.f_9[0]) && func_504(Global_86864[0]))
		{
			func_497(&Local_1495);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_86864.f_9[0], 449.7722f, -998.6234f, 23.11544f, 449.7684f, -993.6255f, 27.64756f, 11.75f, 0, 1, 0))
			{
				if (!GlobalFunc_2664(Global_86864.f_9[0], -1817882002, 1))
				{
					if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1456678445)) < 0.05f)
					{
						Global_87263 = -15;
						StringCopy(&Global_87247, "", 64);
						iLocal_1500 = 0;
					}
					else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1456678445) == 0)
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1456678445, 1, 1, 1);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_86864[0], 446.3242f, -993.3392f, 24.19417f, 445.6908f, -1029.076f, 30.28554f, 26.4375f, 0, 1, 0))
			{
				if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1456678445)) > 0.75f)
				{
					if (!GlobalFunc_2664(Global_86864.f_9[0], -1817882002, 1))
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Global_86864.f_9[0], Global_86864[0], 452.2002f, -997.1097f, 24.7618f, 5f, 0, joaat("fbi2"), 262275, 0.5f, 2f);
					}
				}
				else
				{
					if (GlobalFunc_2664(Global_86864.f_9[0], -235832601, 1))
					{
						if (!GlobalFunc_2664(Global_86864.f_9[0], -1273030092, 1))
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Global_86864.f_9[0], Global_86864[0], 452.3164f, -1004.637f, 25.9034f, 4, 2f, 262275, 0.5f, 1f, 0);
						}
					}
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1456678445) != 0)
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1456678445, 0, 1, 1);
					}
				}
			}
			else
			{
				VEHICLE::_0x88BC673CA9E0AE99(Global_86864[0], 1);
				VEHICLE::_0x2C4A1590ABF43E8B(Global_86864[0], 1);
				if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_86864[0]))
				{
					ENTITY::RESET_ENTITY_ALPHA(Global_86864[0]);
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Global_86864[0]))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_86864.f_9[0], Global_86864[0], &Global_87247, 786603, Local_1495.f_3, 24, -1, 15f, 0, 1073741824);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
				{
					if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_86864.f_9[iVar0]))
					{
						ENTITY::RESET_ENTITY_ALPHA(Global_86864.f_9[iVar0]);
					}
				}
			}
			iVar0++;
		}
	}
}


int func_504(int iParam0)//Position - 0x58469
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

int func_505()//Position - 0x584B4
{
	float fVar0;
	float fVar1;
	
	if (iLocal_1500)
	{
		return 0;
	}
	else if (MISC::IS_BIT_SET(Global_81155[89 /*34*/].f_11, GlobalFunc_8315()))
	{
		if (Global_87263 == -15)
		{
			Global_87263 = GlobalFunc_7719();
			GlobalFunc_8385(&Global_87263, 0, 0, 1, 0, 0, 0);
		}
		if (GlobalFunc_8448(Global_87263) || Global_87264 == 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_87247))
			{
				switch (Global_86863)
				{
					case 0:
					case 1:
						Global_86864.f_358 = 0;
						StringCopy(&Global_87247, "JHP1bRoute2", 64);
						break;
					
					case 2:
					case 3:
						Global_86864.f_358 = 1;
						StringCopy(&Global_87247, "JHP1b", 64);
						break;
					
					default:
						fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1489, 1);
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1492, 1);
						if (fVar0 >= fVar1)
						{
							Global_86864.f_358 = 0;
							StringCopy(&Global_87247, "JHP1bRoute2", 64);
						}
						else if (fVar1 >= fVar0)
						{
							Global_86864.f_358 = 1;
							StringCopy(&Global_87247, "JHP1b", 64);
						}
						break;
				}
				Global_86863 = -1;
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING(&Global_87247);
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_87247))
				{
					Local_1495 = { func_506(219, &Global_87247, 0.2f, 0) };
					iLocal_1500 = 1;
					iLocal_1501 = 0;
					iLocal_1502 = 0;
					Global_87264++;
					return 0;
				}
			}
		}
		else if (!iLocal_1502 && !iLocal_1500)
		{
			if (Global_87264 <= 2)
			{
				switch (GlobalFunc_5216("AM_H_JHP1B_MISS"))
				{
					case 2:
						GlobalFunc_6677("AM_H_JHP1B_MISS", 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					
					case 1:
						StringCopy(&Global_95999, "", 16);
						iLocal_1502 = 1;
						break;
				}
			}
			else
			{
				iLocal_1502 = 1;
			}
		}
	}
	else
	{
		Global_87263 = -15;
		iLocal_1500 = 0;
		StringCopy(&Global_87247, "", 64);
	}
	return 1;
}

struct<5> func_506(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x58699
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



int func_509()//Position - 0x58759
{
	struct<3> Var0;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	Var0 = { GlobalFunc_2247(219, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && MISC::IS_BIT_SET(Global_81155[89 /*34*/].f_11, GlobalFunc_8315()))
	{
		fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar4 < (110f * 110f))
			{
				bVar3 = true;
			}
		}
		else if (fVar4 < (60f * 60f))
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar5]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[iVar5], 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864[iVar5], PLAYER::PLAYER_PED_ID(), 1))
					{
						bVar3 = true;
					}
				}
				else
				{
					bVar3 = true;
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar5]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[iVar5]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar5], PLAYER::PLAYER_PED_ID(), 1))
					{
						bVar3 = true;
					}
				}
				else
				{
					bVar3 = true;
				}
			}
			iVar5++;
		}
	}
	if (bVar3)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		GlobalFunc_7055(Global_86864[0], 0, 0);
		Global_87263 = -15;
		iLocal_1500 = 0;
		return 1;
	}
	return 0;
}



void func_512()//Position - 0x58959
{
	int iVar0;
	
	if (GlobalFunc_474(219))
	{
		Local_1495 = { func_506(219, &Global_87247, 0.2f, -1) };
	}
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_4588(&(Global_86864[1]));
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	func_51(&(Global_86864.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
}

void func_513()//Position - 0x589C7
{
	var uVar0;
	char* sVar1;
	int iVar2;
	
	GlobalFunc_4574(&(Global_86864[0]));
	GlobalFunc_4574(&(Global_86864[1]));
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[iVar2]))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_86864.f_9[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_86864.f_9[iVar2]));
					}
				}
			}
		}
		iVar2++;
	}
	func_51(&(Global_86864.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
}

void func_514()//Position - 0x58A63
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	Global_86864.f_358 = 1;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(&Global_87247, &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87247, Local_1495.f_3, &Var1);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87247, GlobalFunc_254((Local_1495.f_3 - 1), 0, iVar0), &Var4);
	fVar7 = GlobalFunc_830(Var4, Var1);
	MISC::CLEAR_AREA(Var1, 60f, 1, 0, 0, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), Var1, fVar7, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fbi2"));
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_86864[0], 15f);
	ENTITY::SET_ENTITY_ALPHA(Global_86864[0], 100, 0);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_86864[0], 0);
	func_516(0, Global_86864[0], 0);
	PED::SET_PED_ACCURACY(Global_86864.f_9[0], 7);
	func_516(1, Global_86864[0], 0);
	PED::SET_PED_ACCURACY(Global_86864.f_9[1], 7);
	func_516(2, Global_86864[0], 0);
	PED::SET_PED_ACCURACY(Global_86864.f_9[2], 7);
	func_516(3, Global_86864[0], 0);
	PED::SET_PED_ACCURACY(Global_86864.f_9[3], 7);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_86864.f_9[0], Global_86864[0], &Global_87247, 786469, Local_1495.f_3, 24, -1, 25f, 0, 1073741824);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[0], 0, 0);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864[0], 250);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[0], 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[0], 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[0]);
	VEHICLE::SET_VEHICLE_STRONG(Global_86864[0], 1);
	ENTITY::SET_ENTITY_HEALTH(Global_86864[0], ENTITY::GET_ENTITY_HEALTH(Global_86864[0]) * 3);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_86864[0], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_86864[0]) * 3f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_86864[0], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_86864[0]) * 3f));
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_86864[0], 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_86864[0], 1);
	VEHICLE::_0x9BECD4B9FEF3F8A6(Global_86864[0], 1);
	VEHICLE::SET_VEHICLE_SIREN(Global_86864[0], 1);
	VEHICLE::SET_VEHICLE_CAN_BREAK(Global_86864[0], 0);
	VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Global_86864[0], 5, 0);
	Local_1495 = { func_515(219, Global_86864[0]) };
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_box_ammo03a"), Global_Mission_Blips[219 /*23*/][0 /*3*/], 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864[0], 0, 0f, -1.77f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
}

struct<5> func_515(int iParam0, int iParam1)//Position - 0x58D09
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

void func_516(int iParam0, var uParam1, bool bParam2)//Position - 0x58D3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		iVar1 = joaat("s_m_y_cop_01");
		iVar2 = joaat("weapon_pistol");
	}
	else
	{
		iVar1 = joaat("s_m_y_swat_01");
		iVar2 = joaat("weapon_smg");
	}
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 2;
	}
	Global_86864.f_9[iParam0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1, 6, iVar1, iVar0, 1, 1);
	PED::SET_PED_AS_ENEMY(Global_86864.f_9[iParam0], 1);
	PED::SET_PED_TO_LOAD_COVER(Global_86864.f_9[iParam0], 1);
	WEAPON::GIVE_WEAPON_TO_PED(Global_86864.f_9[iParam0], iVar2, -1, 1, 1);
	PED::SET_PED_MONEY(Global_86864.f_9[iParam0], 0);
	PED::SET_PED_CAN_PEEK_IN_COVER(Global_86864.f_9[iParam0], 1);
	ENTITY::SET_ENTITY_LOD_DIST(Global_86864.f_9[iParam0], 250);
	PED::SET_PED_ALERTNESS(Global_86864.f_9[iParam0], 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[iParam0], 1, 0);
	PED::SET_PED_COMBAT_ABILITY(Global_86864.f_9[iParam0], 2);
	PED::SET_PED_CONFIG_FLAG(Global_86864.f_9[iParam0], 184, 1);
	if (!bParam2)
	{
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[iParam0], 10, 0, 0, 0);
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[iParam0], 1);
	AUDIO::STOP_PED_SPEAKING(Global_86864.f_9[iParam0], 1);
	PED::SET_PED_AS_COP(Global_86864.f_9[iParam0], 1);
	PED::SET_PED_CONFIG_FLAG(Global_86864.f_9[iParam0], 330, 1);
	ENTITY::SET_ENTITY_ALPHA(Global_86864.f_9[iParam0], 100, 0);
	PED::SET_PED_ARMOUR(Global_86864.f_9[iParam0], 25);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_86864.f_9[iParam0], -183807561);
}



int func_519()//Position - 0x58F14
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("fbi2")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_swat_01"))) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_87247)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_87247)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_box_ammo03a")))
	{
		return 1;
	}
	return 0;
}

void func_520()//Position - 0x58F6E
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fbi2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_swat_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_box_ammo03a"));
}

void func_521()//Position - 0x58F91
{
	STREAMING::REQUEST_MODEL(joaat("fbi2"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_swat_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_box_ammo03a"));
	HUD::REQUEST_ADDITIONAL_TEXT("JHP1B", 0);
}

void func_522()//Position - 0x58FBE
{
	struct<5> Var0;
	
	StringCopy(&Global_87247, "", 64);
	Global_87264 = 0;
	Global_87263 = -15;
	Var0 = 262;
	Var0.f_2 = 1065353216;
	Local_1495 = { Var0 };
	iLocal_1500 = 0;
	iLocal_1501 = 0;
	iLocal_1502 = 0;
}

void func_523()//Position - 0x59003
{
	if (iLocal_1486)
	{
		if (!iLocal_1487)
		{
			if (Global_87246 == 1)
			{
				iLocal_1487 = 1;
			}
			else if (Global_87246 <= 3)
			{
				switch (GlobalFunc_5216("AM_H_JHP2A_REAP"))
				{
					case 2:
						GlobalFunc_6677("AM_H_JHP2A_REAP", 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					
					case 1:
						StringCopy(&Global_95999, "", 16);
						iLocal_1487 = 1;
						break;
				}
			}
			else
			{
				iLocal_1487 = 1;
			}
		}
		if (!func_497(&Local_1481) || !MISC::IS_BIT_SET(Global_81155[88 /*34*/].f_11, GlobalFunc_8315()))
		{
			Global_87245 = -15;
			iLocal_1486 = 0;
			StringCopy(&Global_87229, "", 64);
		}
	}
}

void func_524()//Position - 0x590B0
{
	if (iLocal_1486)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_86864[0]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_86864[0]);
			}
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
				if (!func_497(&Local_1481))
				{
					Global_87245 = -15;
					iLocal_1486 = 0;
					StringCopy(&Global_87229, "", 64);
				}
			}
		}
	}
}

int func_525()//Position - 0x5911F
{
	struct<3> Var0;
	
	if (Global_86863 != -1)
	{
		func_536();
	}
	if (iLocal_1486)
	{
		return 0;
	}
	else if (MISC::IS_BIT_SET(Global_81155[88 /*34*/].f_11, GlobalFunc_8315()))
	{
		if (Global_87245 == -15)
		{
			Global_87245 = GlobalFunc_7719();
			GlobalFunc_8385(&Global_87245, 0, 24, 0, 0, 0, 0);
		}
		if (GlobalFunc_8448(Global_87245) || Global_87246 == 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_87229))
			{
				switch (Global_86863)
				{
					case 1:
						StringCopy(&Global_87229, sLocal_1479, 64);
						break;
					
					case 2:
						StringCopy(&Global_87229, sLocal_1480, 64);
						break;
					
					default:
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (SYSTEM::VDIST2(Var0, 1519.918f, -1001.889f, 56.8241f) > SYSTEM::VDIST2(Var0, 1388.332f, 683.8095f, 78.2656f))
						{
							StringCopy(&Global_87229, sLocal_1480, 64);
						}
						else
						{
							StringCopy(&Global_87229, sLocal_1479, 64);
						}
						break;
				}
				Global_86863 = -1;
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING(&Global_87229);
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_87229))
				{
					Local_1481 = { func_506(218, &Global_87229, 0.2f, 0) };
					iLocal_1486 = 1;
					iLocal_1487 = 0;
					iLocal_1488 = 0;
					Global_87246++;
					return 0;
				}
			}
		}
		else if (!iLocal_1488 && !iLocal_1486)
		{
			if (Global_87246 <= 2)
			{
				switch (GlobalFunc_5216("AM_H_JHP2A_MISS"))
				{
					case 2:
						GlobalFunc_6677("AM_H_JHP2A_MISS", 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					
					case 1:
						StringCopy(&Global_95999, "", 16);
						iLocal_1488 = 1;
						break;
				}
			}
			else
			{
				iLocal_1488 = 1;
			}
		}
	}
	else
	{
		Global_87245 = -15;
		iLocal_1486 = 0;
		StringCopy(&Global_87229, "", 64);
	}
	return 1;
}


int func_527()//Position - 0x592EB
{
	struct<3> Var0;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	
	Var0 = { GlobalFunc_2247(218, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && MISC::IS_BIT_SET(Global_81155[88 /*34*/].f_11, GlobalFunc_8315()))
	{
		fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(Global_86864[0], 1) };
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) && fVar4 < 12100f)
		{
			bVar3 = true;
		}
		else if (fVar4 < (50f * 50f) && MISC::ABSF(Var5.f_2) < 5f)
		{
			bVar3 = true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864[0], PLAYER::PLAYER_PED_ID(), 1))
		{
			bVar3 = true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 1))
		{
			bVar3 = true;
		}
		else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_86864[0], 1), 7f, 1, 1))
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		GlobalFunc_7055(Global_86864[0], 0, 0);
		Global_87245 = -15;
		iLocal_1486 = 0;
		return 1;
	}
	return 0;
}

void func_528()//Position - 0x59402
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4588(&(Global_86864[0]));
	if (GlobalFunc_2641(218))
	{
		Local_1481 = { func_506(218, &Global_87229, 0.2f, -1) };
	}
}

void func_529()//Position - 0x59440
{
	func_530(&(Global_86864.f_9[0]), Global_86864[0]);
	GlobalFunc_4574(&(Global_86864[0]));
}

void func_530(var uParam0, int iParam1)//Position - 0x59467
{
	var uVar0;
	char* sVar1;
	
	GlobalFunc_8267(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
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

void func_531()//Position - 0x59567
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_87229, Local_1481.f_3, &Var0);
	Var3 = { GlobalFunc_107(Var0 - Global_Mission_Blips[218 /*23*/][0 /*3*/]) * FtoV(TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(&Global_87229, Local_1481.f_3)) };
	fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Var0.x - Global_Mission_Blips[218 /*23*/][0 /*3*/]), (Var0.f_1 - Global_Mission_Blips[218 /*23*/][0 /*3*/].f_1));
	MISC::CLEAR_AREA(Global_Mission_Blips[218 /*23*/][0 /*3*/], 15f, 1, 0, 0, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("boxville3"), Global_Mission_Blips[218 /*23*/][0 /*3*/], fVar6, 1, 1);
	ENTITY::SET_ENTITY_ALPHA(Global_86864[0], 100, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864[0], 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[0], 1);
	ENTITY::SET_ENTITY_HEALTH(Global_86864[0], 3000);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[0], 1, 0);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[0], 2, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_86864[0]);
	ENTITY::SET_ENTITY_VELOCITY(Global_86864[0], Var3);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("boxville3"));
	Global_86864.f_9[0] = PED::CREATE_PED_INSIDE_VEHICLE(Global_86864[0], 26, joaat("s_m_m_armoured_01"), -1, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_armoured_01"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
	PED::SET_PED_CONFIG_FLAG(Global_86864.f_9[0], 116, 0);
	PED::SET_PED_CONFIG_FLAG(Global_86864.f_9[0], 118, 0);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_86864.f_9[0], Global_86864[0], &Global_87229, 786475, Local_1481.f_3, 16, -1, 12f, 0, 1073741824);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[0], 0, 0);
	Local_1481 = { func_515(218, Global_86864[0]) };
}


int func_533()//Position - 0x59766
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("boxville3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01"))) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_87229)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_87229))
	{
		return 1;
	}
	return 0;
}

void func_534()//Position - 0x597A8
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("boxville3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_armoured_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_idol_case_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_yell_plastic_target"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 0);
}

void func_535()//Position - 0x597E8
{
	STREAMING::REQUEST_MODEL(joaat("boxville3"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_armoured_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_idol_case_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_yell_plastic_target"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 1);
}

void func_536()//Position - 0x59828
{
	struct<5> Var0;
	
	StringCopy(&Global_87229, "", 64);
	Global_87246 = 0;
	Global_87245 = -15;
	Var0 = 262;
	Var0.f_2 = 1065353216;
	Local_1481 = { Var0 };
	iLocal_1486 = 0;
	iLocal_1487 = 0;
	iLocal_1488 = 0;
}





int func_541()//Position - 0x5988F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_8315() == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 182.9537f, -3119.884f, 101.9226f, 94.25f, 239.75f, 108.0625f, 0, 1, 0) && !((GlobalFunc_2268() && CAM::IS_SCREEN_FADED_OUT()) && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()))
		{
			return 1;
		}
	}
	return 0;
}


void func_543()//Position - 0x5993E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		GlobalFunc_4588(&(Global_86864[iVar0]));
		iVar0++;
	}
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
}

void func_544()//Position - 0x59991
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		GlobalFunc_4574(&(Global_86864[iVar0]));
		iVar0++;
	}
	func_51(&(Global_86864.f_28[0]));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_203(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
}

void func_545()//Position - 0x599E4
{
	var uVar0;
	
	if (GlobalFunc_8315() == 0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f));
		MISC::CLEAR_AREA(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
		Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[0], 7);
		VEHICLE::SET_VEHICLE_ALARM(Global_86864[0], 1);
		Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 145.1268f, -3078.932f, 4.8963f, 283.8845f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Global_86864[1], 1, 1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Global_86864[1], 4, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_86864[1], 0, 1, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_86864[1], 4, 0, 0);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_86864[1], 100f);
		Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_86864[2], 2, 1, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_86864[2], 3, 1, 0);
		Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[0], 1);
		ENTITY::SET_ENTITY_HEALTH(Global_86864.f_9[0], 150);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 10, 1, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 0, 1, 0, false);
		PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 1, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_86864.f_9[0], 2f);
		TASK::TASK_PLAY_ANIM(Global_86864.f_9[0], "misslsdhsclipboard@base", "base", 1000f, -8f, -1, 1, 0, 0, 0, 0);
		Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), PED::GET_PED_BONE_COORDS(Global_86864.f_9[0], 60309, 0f, 0f, 0f), 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		Global_86864.f_9[2] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[2], 1);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[2], 10, 0, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_86864.f_9[2], 0, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_86864.f_9[2], 2f);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[2], 155.74f, -3098.89f, 4.93f, 0.5f, 0);
		Global_86864.f_9[3] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[3], 1);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[3], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[3], 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[3], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[3], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[3], 10, 1, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_86864.f_9[3], 1, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_86864.f_9[3], 2f);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[3], 159.8f, -3085.96f, 5f, 0.5f, 0);
		Global_86864.f_9[4] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[4], 1);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[4], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[4], 3, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[4], 4, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[4], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[4], 10, 0, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_86864.f_9[4], 0, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_86864.f_9[4], 2f);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_86864.f_9[4], 159.06f, -3085f, 5.01f, 0.5f, 0);
		if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
		{
			Global_86864[3] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1);
			Global_86864.f_9[5] = PED::CREATE_PED_INSIDE_VEHICLE(Global_86864[3], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Global_86864[3], &cLocal_1471, 786599, 0, 0, -1, -1f, 0, 1073741824);
			TASK::TASK_LEAVE_VEHICLE(0, Global_86864[3], 0);
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_86864.f_9[5], uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			Global_86864.f_357 = 1;
		}
		else
		{
			Global_86864[3] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1);
			VEHICLE::SET_VEHICLE_LIGHTS(Global_86864[3], 2);
			Global_86864.f_9[5] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 162.69f, -3115.67f, 4.95f, 3.5948f, 1, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_86864.f_9[5], 1);
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Global_86864.f_9[5], 162.69f, -3115.67f, 4.95f, 1f, 0);
			Global_86864.f_357 = 0;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[5], 1);
		PED::SET_PED_ACCURACY(Global_86864.f_9[5], 5);
	}
}

int func_546()//Position - 0x5A0A4
{
	if (GlobalFunc_8315() == 0)
	{
		if ((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("burrito2")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pestcont_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("dilettante2"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_1471)) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(154.9478f, -3092.523f, 4.911984f, "po1_08_warehouseint1"))) && TASK::DOES_SCENARIO_EXIST_IN_AREA(155.74f, -3098.89f, 4.93f, 0.5f, 0)) && TASK::DOES_SCENARIO_EXIST_IN_AREA(159.8f, -3085.96f, 5f, 0.5f, 0)) && TASK::DOES_SCENARIO_EXIST_IN_AREA(159.06f, -3085f, 5.01f, 0.5f, 0)) && (((CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21) && TASK::DOES_SCENARIO_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, 1f, 0)) || (CLOCK::GET_CLOCK_HOURS() < 5 || (CLOCK::GET_CLOCK_HOURS() >= 21 && TASK::DOES_SCENARIO_EXIST_IN_AREA(162.67f, -3115.61f, 4.95f, 1f, 0))))) && !((GlobalFunc_2268() && CAM::IS_SCREEN_FADED_OUT()) && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()))
		{
			return 1;
		}
	}
	return 0;
}

void func_547()//Position - 0x5A20E
{
	if (GlobalFunc_8315() == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito2"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pestcont_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dilettante2"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_clipboard_01"));
		STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@base");
		INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(154.9478f, -3092.523f, 4.911984f, "po1_08_warehouseint1"));
	}
}

void func_548()//Position - 0x5A270
{
	if (GlobalFunc_8315() == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("burrito2"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_pestcont_01"));
		STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
		STREAMING::REQUEST_MODEL(joaat("dilettante2"));
		STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
		STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
		TASK::REQUEST_WAYPOINT_RECORDING(&cLocal_1471);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(154.9478f, -3092.523f, 4.911984f, "po1_08_warehouseint1"));
	}
}


void func_550()//Position - 0x5A2E1
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 724.6898f, -984.8638f, 23.17047f };
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar6 = SYSTEM::VDIST2(Var3, Var0);
	if (fVar6 < (60f * 60f))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 695.6506f, -985.3491f, 21.71652f, 755.7269f, -984.1184f, 28.20845f, 18.75f, 0, 1, 0))
				{
					Global_86864[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
		}
	}
}

void func_551()//Position - 0x5A384
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iLocal_1464 == 0)
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SEW_MACHINE"))
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("SEW_MACHINE"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("SEW_MACHINE", 1);
				iLocal_1464 = 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			if (iLocal_1454 == 1)
			{
				if (iLocal_1463 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
					iLocal_1463 = 1;
				}
			}
			else if (iLocal_1463 == 1)
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_86864.f_9[0]);
				iLocal_1463 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 718.617f, -964.8593f, 29.3956f, 1) < 25f)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 720.1095f, -974.8798f, 23.41416f, 716.2106f, -974.832f, 25.66417f, 1f, 0, 1, 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 718.617f, -964.8593f, 29.3956f, 1) < 9f)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 736.0319f, -951.9467f, 29.36732f, 703.6653f, -951.8903f, 34.11732f, 12f, 0, 1, 0))
			{
				iLocal_1454 = 1;
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 714.391f, -976.4401f, 22.64487f, 721.8054f, -976.4894f, 26.2f, 1.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 736.0319f, -951.9467f, 29.36732f, 703.6653f, -951.8903f, 34.11732f, 12f, 0, 1, 0))
		{
			iLocal_1454 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 695.6506f, -985.3491f, 21.71652f, 755.7269f, -984.1184f, 28.20845f, 18.75f, 0, 1, 0))
			{
				Global_86864[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_1456 == 0)
		{
			if (iLocal_1461 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.5f, -964.7f, 29.4f, 4f, 4f, 4f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 719.3163f, -964.7173f, 28.64561f, 715.9938f, -964.719f, 31.64561f, 2.75f, 0, 1, 0))
					{
						iLocal_1456 = 1;
					}
				}
			}
		}
		if (iLocal_1456 == 1)
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), "bb_jew_7", 3, 0, -1);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0.5f, 1, -1, 2000, 2000, 0);
				}
				else
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, -1, 2000, 2000, 0);
				}
				CAM::SET_GAMEPLAY_HINT_FOV(30f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.02f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				func_181();
			}
		}
		if (iLocal_1461 == 1)
		{
			if (iLocal_1454 == 1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (Global_86864.f_357 == 1)
				{
					if (iLocal_1458 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
							{
								if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), 0))
								{
									iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), 0, 0, 1);
									if (iVar0 != 0)
									{
										if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
										{
											uLocal_1466 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1466, "MISSHEIST_JEWELLEADINOUT", "Lester_Leadin_Action", 8f, -8f, 5, 0, 1148846080, 0);
											ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), uLocal_1466, "ss_door02_leadin_action", "MISSHEIST_JEWELLEADINOUT", 8f, -1056964608, 0, 1148846080);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1466, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1466, 1);
											PED::SET_FORCE_FOOTSTEP_UPDATE(Global_86864.f_9[0], 1);
											iLocal_1467 = MISC::GET_GAME_TIMER();
											iLocal_1453 = 1;
											iLocal_1458 = 1;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_1459 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
						{
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), 0))
							{
								iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), 0, 0, 1);
								if (iVar1 != 0)
								{
									if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar1))
									{
										uLocal_1466 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1466, "MISSHEIST_JEWELLEADINOUT", "Lester_Leadin_Action", 8f, -8f, 5, 0, 1148846080, 0);
										ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), uLocal_1466, "ss_door02_leadin_action", "MISSHEIST_JEWELLEADINOUT", 8f, -1056964608, 0, 1148846080);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1466, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1466, 1);
										PED::SET_FORCE_FOOTSTEP_UPDATE(Global_86864.f_9[0], 1);
										iLocal_1467 = MISC::GET_GAME_TIMER();
										iLocal_1453 = 1;
										iLocal_1459 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_1459 == 1 || iLocal_1458 == 1)
			{
				if (iLocal_1455 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 1) < 9f)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&(Global_86864.f_44), "JHS1AUD", "JHS1_LI_1", 7, 0, 0, 0))
									{
										iLocal_1455 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_1460 == 0)
			{
				if (iLocal_1453 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
						{
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), 0))
							{
								iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), 0, 0, 1);
								if (iVar2 != 0)
								{
									if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar2))
									{
										if (MISC::GET_GAME_TIMER() > iLocal_1467 + 3000)
										{
											if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1466))
											{
												if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1466) > 0.99f)
												{
													ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_9[0], -1000f, 1);
													ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), -1000f);
													uLocal_1466 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
													TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1466, "MISSHEIST_JEWELLEADINOUT", "lester_leadin_loop", 1000f, -8f, 5, 0, 1148846080, 0);
													ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), uLocal_1466, "ss_door02_leadin_loop", "MISSHEIST_JEWELLEADINOUT", 1000f, -1056964608, 0, 1148846080);
													PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1466, 1);
													PED::SET_FORCE_FOOTSTEP_UPDATE(Global_86864.f_9[0], 0);
													iLocal_1460 = 1;
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
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					if (iLocal_1454 == 0)
					{
						if (GlobalFunc_111())
						{
							if (!GlobalFunc_620())
							{
								GlobalFunc_619(1);
							}
						}
					}
					else if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_1454 == 1)
			{
				if (iLocal_1452 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
						{
							if (!GlobalFunc_111() && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 3))
							{
								if (iLocal_1457 == 0)
								{
									if (GlobalFunc_10618(&(Global_86864.f_44), "JHS1AUD", "JHS1_PH34b", 7, 0, 0, 0))
									{
										if (iLocal_1465 == 0)
										{
											uLocal_1466 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1466, "MISSHEIST_JEWELLEADINOUT", "lester_hanging_around_suitless_negative_a", 2f, -2f, 5, 0, 1148846080, 0);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1466, 0);
											iLocal_1465 = 1;
										}
										SYSTEM::SETTIMERB(0);
										iLocal_1457 = 1;
									}
								}
								else
								{
									if ((SYSTEM::TIMERB() > 2000 && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 3))
									{
										uLocal_1466 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1466, "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 2f, -2f, 5, 0, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1466, 1);
									}
									if (SYSTEM::TIMERB() > 15000)
									{
										iLocal_1457 = 0;
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_hanging_around_suitless_negative_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 3))
					{
						PED::SET_PED_CAPSULE(Global_86864.f_9[0], 0.55f);
					}
				}
			}
		}
		if (iLocal_1454 == 1 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 718.1f, -975.3f, 23.9f, 1) < 3f)
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
			GlobalFunc_7629();
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1);
			if (iVar3 != joaat("weapon_unarmed") && !GlobalFunc_116(0))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				}
			}
		}
	}
}














int func_565()//Position - 0x5B4CD
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_86864.f_9[iVar0]))
				{
					GlobalFunc_4935();
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_86864.f_9[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					GlobalFunc_4935();
					return 1;
				}
			}
			iVar0++;
		}
		if (iLocal_1454 == 1)
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
			if (iVar1 != joaat("weapon_unarmed"))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_4935();
					return 1;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iLocal_1454 == 1)
		{
			if (iLocal_1462 == 0)
			{
				GlobalFunc_4956();
				if (GlobalFunc_10618(&(Global_86864.f_44), "JHS1AUD", "JHS1_PH56", 7, 0, 0, 0))
				{
					iLocal_1468 = MISC::GET_GAME_TIMER();
					iLocal_1469 = MISC::GET_GAME_TIMER();
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_1462 = 1;
				}
			}
			if (iLocal_1462 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1468 + 5000)
				{
					GlobalFunc_4956();
					if (GlobalFunc_10618(&(Global_86864.f_44), "JHS1AUD", "JHS1_PH56", 7, 0, 0, 0))
					{
						iLocal_1468 = MISC::GET_GAME_TIMER();
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
			}
			if (iLocal_1462 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1469 + 10000)
				{
					GlobalFunc_4935();
					return 1;
				}
			}
		}
	}
	return 0;
}




int func_569()//Position - 0x5B668
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_1461 == 1)
		{
			if (iLocal_1456 == 1)
			{
				if (iLocal_1453 == 1)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 710.6041f, -965.1575f, 28.89533f, 710.6282f, -963.3939f, 31.31467f, 2f, 0, 1, 0))
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_4956();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
						STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWELLEADINOUT");
						PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
						PED::SET_FORCE_FOOTSTEP_UPDATE(Global_86864.f_9[0], 0);
						return 1;
					}
				}
			}
		}
		else
		{
			if (iLocal_1452 == 0)
			{
				if (iLocal_1454 == 1)
				{
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
					{
						if (!GlobalFunc_74("JH1_SUIT"))
						{
							GlobalFunc_1("JH1_SUIT");
						}
					}
					GlobalFunc_8914(18, 1);
					func_572(18, 1);
					GlobalFunc_1293(18);
					GlobalFunc_5157(&(Global_86864.f_44), "JHS1AUD", "JHS1_PH34", 8, 0, 0);
					uLocal_1466 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1466, "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 8f, -8f, 5, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1466, 0);
					iLocal_1452 = 1;
					Global_86864.f_357 = 1;
				}
			}
			return 0;
		}
	}
	return 0;
}



void func_572(int iParam0, bool bParam1)//Position - 0x5B826
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 8, 0))
		{
			GlobalFunc_7969(iParam0, 8, 0);
			GlobalFunc_1293(iParam0);
		}
	}
	else if (GlobalFunc_7702(iParam0, 8, 0))
	{
		GlobalFunc_7982(iParam0, 8, 0);
		GlobalFunc_1293(iParam0);
	}
}









void func_581()//Position - 0x5BCE1
{
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_200(&(Global_86864.f_44), 1);
	HUD::CLEAR_HELP(1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1470, 0);
	GlobalFunc_4956();
	GlobalFunc_4593();
}


void func_583()//Position - 0x5BD4A
{
	func_51(&(Global_86864.f_28[0]));
	GlobalFunc_8916(&(Global_86864.f_9[0]));
	GlobalFunc_200(&(Global_86864.f_44), 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}


void func_585()//Position - 0x5BE27
{
	MISC::CLEAR_AREA(718.617f, -964.8593f, 29.3956f, 15f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	uLocal_1470 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		GlobalFunc_4598(Global_86864.f_9[0]);
		ENTITY::SET_ENTITY_HEADING(Global_86864.f_9[0], 120.4053f);
		GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
		GlobalFunc_173(&(Global_86864.f_44), 1, Global_86864.f_9[0], "LESTER", 1, 1);
		GlobalFunc_173(&(Global_86864.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 1393.04f, -2069.232f, 51.0114f, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_86864.f_9[0], 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_86864.f_28[0], Global_86864.f_9[0], PED::GET_PED_BONE_INDEX(Global_86864.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	uLocal_1466 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_1466, "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 8f, -8f, 1, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1466, 1);
	PED::SET_PED_KEEP_TASK(Global_86864.f_9[0], 1);
	if (!Global_96400)
	{
		func_588(714.7288f, -976.2421f, 23.13369f, 721.3814f, -976.2391f, 27.19417f, 5.75f, 707.3029f, -980.5249f, 23.1296f, 43.7514f, 1, 0, 1, 0, 0);
	}
	if (GlobalFunc_8255())
	{
		iLocal_1461 = 1;
	}
	else
	{
		iLocal_1461 = 0;
	}
	GlobalFunc_6514(86, "JH_1_INT", 0, -1, -1);
	GlobalFunc_6516(86, "Lester", 3, 0, 0);
	GlobalFunc_6516(86, "Lester", 4, 1, 0);
	GlobalFunc_6515(86, "Lester", 1, 0, 0);
}



void func_588(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x5C155
{
	func_589(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_589(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x5C17E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam18)
			{
				GlobalFunc_108(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (GlobalFunc_4966(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (GlobalFunc_4929(iVar0, GlobalFunc_8315(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!GlobalFunc_105(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.x = (Param11.x + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.x - Var4.x) > Param11.x)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}








int func_597()//Position - 0x5CB1E
{
	struct<3> Var0[2];
	struct<3> Var7[1];
	
	GlobalFunc_4599(&(Var0[0 /*3*/]), 3, 0, 0);
	GlobalFunc_4599(&(Var0[1 /*3*/]), 4, 1, 0);
	GlobalFunc_4599(&(Var7[0 /*3*/]), 1, 0, 0);
	if ((((!func_598(&(Global_86864.f_9[0]), 12, 718.617f, -964.8593f, 29.3956f, &Var0, &Var7) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSHEIST_JEWELLEADINOUT")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("bb_jew_7"))
	{
		return 0;
	}
	return 1;
}

int func_598(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6)//Position - 0x5CBBB
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






void func_604()//Position - 0x5CDE9
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWELLEADINOUT");
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	TASK::REMOVE_WAYPOINT_RECORDING("bb_jew_7");
	iLocal_1452 = 0;
	iLocal_1453 = 0;
	iLocal_1460 = 0;
	iLocal_1454 = 0;
	iLocal_1455 = 0;
	iLocal_1456 = 0;
	iLocal_1463 = 0;
}

void func_605()//Position - 0x5CE3C
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(12));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWELLEADINOUT");
	HUD::REQUEST_ADDITIONAL_TEXT("JH1TRIG", 0);
	TASK::REQUEST_WAYPOINT_RECORDING("bb_jew_7");
}

void func_606()//Position - 0x5CE73
{
	iLocal_1456 = 0;
	iLocal_1452 = 0;
	iLocal_1453 = 0;
	iLocal_1460 = 0;
	iLocal_1454 = 0;
	iLocal_1455 = 0;
	iLocal_1457 = 0;
	iLocal_1458 = 0;
	iLocal_1459 = 0;
	iLocal_1462 = 0;
	iLocal_1463 = 0;
	iLocal_1464 = 0;
	iLocal_1465 = 0;
	iLocal_1468 = 0;
	iLocal_1469 = 0;
}


void func_608()//Position - 0x5CEBF
{
	GlobalFunc_10686(47, 4);
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.20067f, -1443.825f, 31.18375f, 4f, 5f, 1.75f, 0, 1, 0))
	{
		GlobalFunc_2536(1, 0);
	}
}



int func_611()//Position - 0x5CF0A
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.24382f, -1441.824f, 30.89186f, 2.5f, 3.5f, 1.5f, 0, 1, 0))
		{
			func_181();
			return 1;
		}
	}
	return 0;
}





void func_616()//Position - 0x5CF74
{
	STREAMING::REMOVE_ANIM_DICT("misstimelapse@franklinold_home");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_fa_frontdoor"));
}

void func_617()//Position - 0x5CF8E
{
	STREAMING::REQUEST_ANIM_DICT("misstimelapse@franklinold_home");
	STREAMING::REQUEST_MODEL(joaat("v_ilev_fa_frontdoor"));
}






int func_623()//Position - 0x5CFD2
{
	if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -18.72549f, -1457.395f, 29.4688f, -8.22405f, -1449.732f, 30.2016f, 0, 0, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -14.031f, -1449.824f, 29.573f, -17.235f, -1409.843f, 28.314f, 40f, 0, 0, 0))
	{
		if (!MISC::IS_BIT_SET(Global_86864.f_358, 1))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.19264f, -1446.692f, 30.89615f, 7f, 7f, 7f, 0, 0, 0) || !MISC::IS_BIT_SET(Global_86864.f_358, 2))
			{
				GlobalFunc_4593();
				MISC::SET_BIT(&(Global_86864.f_358), 1);
				MISC::CLEAR_BIT(&(Global_86864.f_358), 2);
				MISC::CLEAR_BIT(&(Global_86864.f_358), 5);
			}
		}
		else
		{
			GlobalFunc_6514(40, "FRA_0_INT", -1, 14, -1);
			func_624();
			MISC::SET_BIT(&(Global_86864.f_358), 3);
			MISC::CLEAR_BIT(&(Global_86864.f_358), 4);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_86864.f_358, 2))
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.19264f, -1446.692f, 30.89615f, 7f, 7f, 7f, 0, 0, 0) || !MISC::IS_BIT_SET(Global_86864.f_358, 1))
		{
			GlobalFunc_4593();
			MISC::CLEAR_BIT(&(Global_86864.f_358), 1);
			MISC::SET_BIT(&(Global_86864.f_358), 2);
			MISC::CLEAR_BIT(&(Global_86864.f_358), 5);
		}
	}
	else
	{
		GlobalFunc_6514(40, "FRA_0_INT", -1, 13, -1);
		func_624();
		MISC::CLEAR_BIT(&(Global_86864.f_358), 3);
		MISC::SET_BIT(&(Global_86864.f_358), 4);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.19264f, -1446.692f, 30.89615f, 3f, 4.5f, 1.5f, 0, 1, 0) && (MISC::IS_BIT_SET(Global_86864.f_358, 4) || MISC::IS_BIT_SET(Global_86864.f_358, 3)))
		{
			func_181();
			return 1;
		}
	}
	return 0;
}

void func_624()//Position - 0x5D1E8
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Global_86864.f_358, 5))
	{
		GlobalFunc_6516(40, "Lamar", 0, 0, 0);
		GlobalFunc_6516(40, "Lamar", 1, 1, 0);
		GlobalFunc_6516(40, "Lamar", 2, 2, 0);
		GlobalFunc_6516(40, "Lamar", 3, 2, 1);
		GlobalFunc_6516(40, "Lamar", 4, 4, 0);
		GlobalFunc_6516(40, "Lamar", 5, 0, 0);
		GlobalFunc_6516(40, "Lamar", 8, 0, 0);
		GlobalFunc_6516(40, "Lamar", 9, 0, 0);
		GlobalFunc_6516(40, "Lamar", 6, 1, 0);
		if (GlobalFunc_2577())
		{
			iVar0 = GlobalFunc_2578();
		}
		else
		{
			iVar0 = 4;
		}
		GlobalFunc_6516(40, "Chop", 3, 0, iVar0);
		MISC::SET_BIT(&(Global_86864.f_358), 5);
	}
}





void func_629()//Position - 0x5D2F3
{
	Global_86864.f_358 = 0;
}





void func_634()//Position - 0x5D324
{
	if (iLocal_1510 == 0)
	{
		iLocal_1510 = INTERIOR::GET_INTERIOR_AT_COORDS(1273.448f, -1715.755f, 53.7715f);
	}
	if (iLocal_1511 == 0)
	{
		iLocal_1511 = INTERIOR::GET_INTERIOR_AT_COORDS(1274.364f, -1708.204f, 53.7715f);
	}
	if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_1510 || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_1511) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1274.497f, -1720.745f, 53.6807f, 1) < 2.375f)
	{
		GlobalFunc_187();
		Global_2268 = 1;
	}
	else
	{
		Global_2268 = 0;
	}
}

void func_635()//Position - 0x5D3BF
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1274.497f, -1720.745f, 53.6807f, 1) < 2.375f)
	{
		GlobalFunc_187();
		Global_2268 = 1;
	}
	else
	{
		Global_2268 = 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1), 1), 1274.45f, -1720.51f, 53.65f);
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1), 1274.451f, -1720.513f, 53.65498f, 1275.782f, -1723.202f, 56.26743f, 3.625f, 0, 1, 0))
			{
				if (fVar0 < fLocal_1506)
				{
					Var1 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1), 1) - Vector(53.65f, -1720.51f, 1274.45f)) };
					fVar4 = GlobalFunc_168(-ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)), Var1);
					fVar5 = GlobalFunc_168(-func_532(ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))), Var1);
					if (fVar4 > 0.1f && fVar5 > 0.85f)
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1), 1f, 1, 0);
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 100, 0);
					}
				}
			}
		}
		fLocal_1506 = fVar0;
	}
	if (iLocal_1505 >= 0 && iLocal_1505 <= 2)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_86864.f_358))
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && GlobalFunc_4926(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(800);
				GlobalFunc_4956();
				PED::SET_SYNCHRONIZED_SCENE_RATE(Global_86864.f_358, 0f);
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(Global_86864.f_358, 1f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(Global_86864.f_358, 1f);
				iLocal_1505 = 2;
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1508))
	{
		STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if ((CAM::DOES_CAM_EXIST(uLocal_1508) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_86864.f_358)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_86864.f_358) >= 0.371f)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam");
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1509, "SET_TIME");
		if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() <= 12)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_HOURS());
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((CLOCK::GET_CLOCK_HOURS() - 12));
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_MINUTES());
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() < 12)
		{
			GlobalFunc_726("LSH_TIMEAM");
		}
		else
		{
			GlobalFunc_726("LSH_TIMEPM");
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_1509, 255, 255, 255, 255, 0);
	}
	else if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1274.682f, -1720.726f, 54.68081f, 1.75f, 2.3125f, 1f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	switch (iLocal_1505)
	{
		case 0:
			if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1275.344f, -1722.348f, 53.65502f, 1274.433f, -1720.448f, 55.88267f, 3.1875f, 0, 1, 0))
				{
					ENTITY::CREATE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 2f, joaat("prop_cctv_cam_06a"), 1);
					Global_86864.f_28[1] = OBJECT::CREATE_OBJECT(joaat("p_cctv_s"), 1276.5f, -1719.98f, 56.37f, 1, 1, 0);
					Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1273.895f, -1720.816f, 53.66f, 0f, 0f, 27.36f, 2);
					uLocal_1508 = CAM::CREATE_CAMERA(964613260, 1);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "MissLester1ALeadInOut", "lester_1_int_leadin_doorway_michael", 1273.895f, -1720.816f, 53.66f, 0f, 0f, 27.36f, 1000f, -8f, -1, 4104, 0, 2, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[1], Global_86864.f_358, "lester_1_int_leadin_doorway_seccamprop", "MissLester1ALeadInOut", 1000f, -8f, 4, 1148846080);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1508, Global_86864.f_358, "lester_1_int_leadin_doorway_cam", "MissLester1ALeadInOut");
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Global_86864.f_358, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 1, 1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1509, "SET_DETAILS");
					GlobalFunc_726("LSH_CAMDETAILS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1509, "SET_LOCATION");
					GlobalFunc_726("LSH_CAMLOCALE");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_187();
					HUD::DISPLAY_HUD(0);
					HUD::DISPLAY_RADAR(0);
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					func_588(1278.176f, -1729.592f, 51.45601f, 1274.337f, -1720.473f, 56.96748f, 7.25f, 1283.785f, -1728.948f, 51.8119f, 115.1431f, 1, 1, 1, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(1275.42f, -1721.52f, 53.65f, 5f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(1275.42f, -1721.52f, 53.65f, 5f, 0);
					FIRE::STOP_FIRE_IN_RANGE(1274.49f, -1720.51f, 53.7f, 6.625f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(1274.49f, -1720.51f, 53.7f, 6.625f);
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					iLocal_1505++;
				}
			}
			break;
		
		case 1:
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			GlobalFunc_187();
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_86864.f_358) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_86864.f_358) >= 0.5f) && GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&(Global_86864.f_44), "LS1AAUD", "LES1A_INTL1", 8, 0, 0, 0))
				{
					iLocal_1505++;
				}
			}
			break;
		
		case 2:
			GlobalFunc_187();
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (!Global_86864.f_357)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_86864.f_358))
				{
					fVar6 = (ENTITY::GET_ANIM_DURATION("MissLester1ALeadInOut", "lester_1_int_leadin_doorway_cam") * 1000f);
					fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_86864.f_358);
					fVar8 = (fVar7 * fVar6);
					if (fVar8 >= (fVar6 - 300f))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						Global_86864.f_357 = 1;
					}
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_86864.f_358) || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_86864.f_358) == 1f && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADED_OUT())))
			{
				Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("ig_lestercrest"), 1275.365f, -1710.774f, 53.7715f, 333.7887f, 1, 1);
				Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), 1275.365f, -1710.774f, 53.7715f, 1, 1, 0);
				GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
				PED::SET_PED_PROP_INDEX(Global_86864.f_9[0], 1, 0, 0, false);
				Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1277.661f, -1713.688f, 54.41f, 0f, 0f, -151.56f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], Global_86864.f_358, "MissLester1ALeadInOut", "Lester_1_INT_LeadIn_loop_Lester", 1000f, -8f, 5, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], Global_86864.f_358, "Lester_1_INT_LeadIn_loop_wChair", "MissLester1ALeadInOut", 1000f, -8f, 4, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_86864.f_358, 1);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
				if (!Global_87225)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(62.7384f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::_0xED3C76ADFA6D07C4(PLAYER::PLAYER_PED_ID());
					OBJECT::DELETE_OBJECT(&(Global_86864.f_28[1]));
					ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 2f, joaat("prop_cctv_cam_06a"), 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					GlobalFunc_8316(0, 1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(uLocal_1508, 0);
					iLocal_1503 = 0;
					Global_87225 = 1;
				}
				else
				{
					iLocal_1503 = 1;
				}
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "UNLOCK_DOOR", 1275.72f, -1719.97f, 54.97f, "LESTER1A_SOUNDS", 0, 0, 0);
				GlobalFunc_173(&(Global_86864.f_44), 8, Global_86864.f_9[0], "Lester", 0, 1);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 0, 1);
				iLocal_1504 = MISC::GET_GAME_TIMER() + 750;
				iLocal_1505++;
			}
			break;
		
		case 3:
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if (INTERIOR::IS_INTERIOR_SCENE())
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_ENTER_LESTERS_HOUSE"))
					{
						AUDIO::START_AUDIO_SCENE("LESTER_1A_ENTER_LESTERS_HOUSE");
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.801f, -1717.001f, 53.77146f, 1272.208f, -1713.675f, 56.38584f, 6.75f, 0, 1, 0) && GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&(Global_86864.f_44), "LS1AAUD", "LES1A_INTL2", 8, 0, 0, 0))
					{
						Global_86864.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1277.661f, -1713.688f, 54.41f, 0f, 0f, -151.56f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], Global_86864.f_358, "MissLester1ALeadInOut", "Lester_1_INT_LeadIn_action_Lester", 1000f, -8f, 5, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864.f_28[0], Global_86864.f_358, "Lester_1_INT_LeadIn_action_wChair", "MissLester1ALeadInOut", 1000f, -8f, 4, 1148846080);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Global_86864.f_358, 1);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2048, 4);
						func_181();
						GlobalFunc_6514(44, "LESTER_1_INT", 0, -1, -1);
						GlobalFunc_6515(44, "Lester", 1, 0, 0);
						iLocal_1505++;
					}
				}
				else if (!iLocal_1503)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_1504)
					{
						fVar9 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_1504)) / 100f), 0f, 1f);
						fVar10 = GlobalFunc_5180(0f, 0.05f, fVar9);
						if (fVar10 >= 0.05f)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, fVar10, 1, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 0, 1, 1);
							iLocal_1503 = 1;
						}
						else
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, fVar10, 1, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, 1, 1);
						}
					}
				}
				else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-565026078) != 0)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 0, 1, 1);
				}
			}
			break;
		
		case 4:
			if (iLocal_1507 == -1)
			{
				iLocal_1507 = MISC::GET_GAME_TIMER();
			}
			fVar11 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-565026078);
			if (fVar11 != 0f && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-565026078) != 1)
			{
				fVar12 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_1507)) / 500f), 0f, 1f);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, GlobalFunc_551(0f, 1f, fVar12), 1, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, 1, 1);
			}
			else
			{
				GlobalFunc_10686(75, 1);
			}
			if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_86864.f_358) || PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_86864.f_358) == 1f) || !GlobalFunc_111()) && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_1505++;
			}
			break;
	}
}








int func_643()//Position - 0x5E000
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && PED::IS_PED_INJURED(Global_86864.f_9[0]))
	{
		func_651();
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 0, 1, 1);
		Global_87225 = 0;
		Global_2268 = 0;
		return 1;
	}
	return 0;
}

int func_644()//Position - 0x5E048
{
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0) && !PED::IS_PED_INJURED(Global_86864.f_9[0])) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_1505 > 4)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_ENTER_LESTERS_HOUSE"))
			{
				AUDIO::STOP_AUDIO_SCENE("LESTER_1A_ENTER_LESTERS_HOUSE");
			}
			Global_87225 = 0;
			func_651();
			return 1;
		}
	}
	return 0;
}

void func_645()//Position - 0x5E0B7
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	GlobalFunc_4575(&(Global_86864.f_28[1]));
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_646()//Position - 0x5E116
{
	var uVar0;
	char* sVar1;
	
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	GlobalFunc_8267(Global_86864.f_9[0]);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_86864.f_9[0], &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
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
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_86864.f_9[0]));
			}
		}
	}
	func_51(&(Global_86864.f_28[0]));
	func_51(&(Global_86864.f_28[1]));
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	GlobalFunc_4593();
}

void func_647()//Position - 0x5E234
{
	PED::ADD_RELATIONSHIP_GROUP("TS_LES1A", &(Global_86864.f_42));
	GlobalFunc_173(&(Global_86864.f_44), 8, 0, "Lester", 0, 1);
	GlobalFunc_173(&(Global_86864.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (Global_87225)
	{
		iLocal_1505 = 2;
	}
	else
	{
		iLocal_1505 = 0;
	}
}

int func_648()//Position - 0x5E287
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("ig_lestercrest")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_wheelchair_01_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_cctv_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("MissLester1ALeadInOut")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1509))
	{
		return 1;
	}
	return 0;
}

void func_649()//Position - 0x5E2E5
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_lestercrest"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wheelchair_01_s"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cctv_s"));
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	STREAMING::REMOVE_ANIM_DICT("MissLester1ALeadInOut");
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	STREAMING::CLEAR_HD_AREA();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1509);
}

void func_650()//Position - 0x5E34C
{
	STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
	STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
	STREAMING::REQUEST_MODEL(joaat("p_cctv_s"));
	STREAMING::REQUEST_ANIM_DICT("MissLester1ALeadInOut");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false);
	STREAMING::SET_HD_AREA(1274.42f, -1720.42f, 54.99f, 5f);
	uLocal_1509 = unk_0x67D02A194A2FC2BD("SECURITY_CAM");
}

void func_651()//Position - 0x5E3A3
{
	int iVar0;
	
	iLocal_1503 = 0;
	iLocal_1505 = 0;
	fLocal_1506 = 999999f;
	iLocal_1507 = -1;
	iLocal_1504 = -1;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, 0f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, 1, 1);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1508))
	{
		CAM::DESTROY_CAM(uLocal_1508, 0);
	}
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), 0);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 1, 1);
}


void func_653()//Position - 0x5E432
{
	var uVar0;
	var uVar1;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(1893421006, joaat("v_ilev_mm_doorw"), -809.281f, 177.855f, 76.89f, 0, 0, 0);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1893421006, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 4, 0, 1);
			}
			if (!iLocal_1082)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -809.7424f, 177.3127f, 76.94073f, 0.5f, 0.5f, 1.2f, 0, 1, 0))
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_173(&(Global_86864.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							if (GlobalFunc_10618(&(Global_86864.f_44), "FAM3AUD", "FAM3_INTLID", 7, 0, 0, 0))
							{
								iLocal_1082 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
				{
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY3_2", false);
					switch (iLocal_1081)
					{
						case 0:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -827.6044f, 186.8568f, 67.19885f, -817.8566f, 162.9871f, 75.10821f, 12f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -829.0895f, 166.3622f, 66.57806f, -818.6422f, 176.9029f, 75.02752f, 16f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -833.9898f, 178.3006f, 67.98793f, -822.4761f, 176.7278f, 75.27834f, 12.7f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -819.0621f, 189.4579f, 69.49169f, -817.6436f, 176.6223f, 75.22742f, 6f, 0, 1, 0))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach", -817.395f, 179.25f, 71.2f, 0f, 0f, -115f, 1000f, -4f, -1, 5130, 0f, 2, 1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_86864.f_9[0], 0, 0);
									TASK::SET_PED_PATH_AVOID_FIRE(Global_86864.f_9[0], 0);
									ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[0], 1);
									INTERIOR::CLEAR_ROOM_FOR_ENTITY(Global_86864.f_9[0]);
									if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY3_2", false))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY3_COACH_OUT_WINDOW_MASTER", Global_86864.f_9[0], 0, 0, 0);
									}
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[1], 1);
									func_181();
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2048, 2);
									}
									iLocal_1081++;
								}
							}
							break;
						
						case 1:
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach", 3))
							{
								if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0]))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], -1, 2048, 2);
								}
								if (!iLocal_1082)
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_86864.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach") > 0.25f)
									{
										if (GlobalFunc_10618(&(Global_86864.f_44), "FAM3AUD", "FAM3_GROUND", 7, 0, 0, 0))
										{
											iLocal_1082 = 1;
										}
									}
								}
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_86864.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach") >= 0.95f)
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -818.0023f, 165.6361f, 72.42603f, 8f, 4f, 4f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -818.0023f, 165.6361f, 72.42603f, 8f, 4f, 4f, 0, 1, 0))
									{
										iLocal_1080 = 0;
										TASK::TASK_PLAY_ANIM(Global_86864.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_180", 1.5f, -4f, -1, 32778, 0, 0, 0, 0);
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -831.5207f, 167.633f, 66.51776f, -826.6659f, 178.9337f, 74.30521f, 8f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -833.4692f, 164.454f, 65.8009f, -831.2573f, 168.3784f, 72.68283f, 10f, 0, 1, 0))
									{
										iLocal_1080 = 1;
										TASK::TASK_PLAY_ANIM(Global_86864.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_0", 1.5f, -4f, -1, 32778, 0, 0, 0, 0);
									}
									iLocal_1081++;
								}
							}
							break;
						
						case 2:
							switch (iLocal_1080)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_180", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_86864.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_180") >= 0.525f)
										{
											TASK::CLEAR_SEQUENCE_TASK(&uVar0);
											TASK::OPEN_SEQUENCE_TASK(&uVar0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -815.77f, 163.63f, 70.34f, 2f, 20000, 0.25f, 1, 1193033728);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0))
											{
												if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Global_86864.f_9[0], Global_86864[1], -1, 0, 0))
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_86864[1], 20000, -1, 2f, 131072, 0);
												}
												else
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_86864[1], 20000, -1, 2f, 1, 0);
												}
											}
											else
											{
												TASK::TASK_SMART_FLEE_COORD(0, -815.77f, 163.63f, 70.34f, 100f, -1, 0, 0);
											}
											TASK::CLOSE_SEQUENCE_TASK(uVar0);
											TASK::TASK_PERFORM_SEQUENCE(Global_86864.f_9[0], uVar0);
											TASK::CLEAR_SEQUENCE_TASK(&uVar0);
											PED::FORCE_PED_MOTION_STATE(Global_86864.f_9[0], -530524, 0, 0, 0);
											TASK::SET_PED_PATH_AVOID_FIRE(Global_86864.f_9[0], 0);
											iLocal_1081++;
										}
									}
									break;
								
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_86864.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_0", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_86864.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_0") >= 0.525f)
										{
											TASK::CLEAR_SEQUENCE_TASK(&uVar1);
											TASK::OPEN_SEQUENCE_TASK(&uVar1);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -831.35f, 165.95f, 68.27f, 2f, 20000, 0.25f, 1, 1193033728);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0))
											{
												if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Global_86864.f_9[0], Global_86864[1], -1, 0, 0))
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_86864[1], 20000, -1, 2f, 131072, 0);
												}
												else
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_86864[1], 20000, -1, 2f, 1, 0);
												}
											}
											else
											{
												TASK::TASK_SMART_FLEE_COORD(0, -831.35f, 165.95f, 68.27f, 100f, -1, 0, 0);
											}
											TASK::CLOSE_SEQUENCE_TASK(uVar1);
											TASK::TASK_PERFORM_SEQUENCE(Global_86864.f_9[0], uVar1);
											TASK::CLEAR_SEQUENCE_TASK(&uVar1);
											PED::FORCE_PED_MOTION_STATE(Global_86864.f_9[0], -530524, 0, 0, 0);
											TASK::SET_PED_PATH_AVOID_FIRE(Global_86864.f_9[0], 0);
											iLocal_1081++;
										}
									}
									break;
							}
							break;
						}
					}
			}
			break;
	}
}


int func_655()//Position - 0x5EB4B
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	return 0;
}

int func_656()//Position - 0x5EB60
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(181, GlobalFunc_8315()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		switch (GlobalFunc_8315())
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.5096f, 181.2568f, 70.5141f, -816.144f, 175.0715f, 75.21168f, 6f, 0, 1, 0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
				if (fVar3 < (2.75f * 2.75f))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.3764f, 179.8199f, 71.12732f, -816.1158f, 176.5313f, 74.72732f, 3.5f, 0, 1, 0))
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, 0, 1);
						}
						if (iLocal_1082)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_5105();
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
							{
								TASK::CLEAR_PED_TASKS(Global_86864.f_9[0]);
							}
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						return 1;
					}
				}
				break;
			
			case 1:
				if (fVar3 < (2.75f * 2.75f))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, 0, 1);
					}
					if (iLocal_1082)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
						{
							TASK::CLEAR_PED_TASKS(Global_86864.f_9[0]);
						}
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					return 1;
				}
				break;
			}
	}
	return 0;
}



void func_659()//Position - 0x5ED34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		GlobalFunc_8915(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_4588(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		GlobalFunc_4575(&(Global_86864.f_28[iVar0]));
		iVar0++;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1893421006);
	}
	GlobalFunc_4593();
}

void func_660()//Position - 0x5EDCB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_203(&(Global_86864.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_4574(&(Global_86864[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_51(&(Global_86864.f_28[iVar0]));
		iVar0++;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1893421006);
	}
	GlobalFunc_4593();
}

void func_661()//Position - 0x5EE62
{
	MISC::CLEAR_AREA(GlobalFunc_2247(181, 0), 30f, 1, 0, 0, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	PED::ADD_RELATIONSHIP_GROUP("FAMILY_3_TS_RELGROUP", &(Global_86864.f_42));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_86864.f_42, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_86864.f_42);
	switch (GlobalFunc_8315())
	{
		case 1:
			if (GlobalFunc_6808(&(Global_86864.f_9[0]), 25, -811.6234f, 167.6178f, 75.7124f, 116.2182f, 1))
			{
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 4, 1, 0, 0);
				func_663(Global_86864.f_9[0]);
				GlobalFunc_173(&(Global_86864.f_44), 0, 0, "MICHAEL", 0, 1);
				GlobalFunc_173(&(Global_86864.f_44), 2, 0, "AMANDA", 0, 1);
				GlobalFunc_173(&(Global_86864.f_44), 3, Global_86864.f_9[0], "TENNISCOACH", 0, 1);
				ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[0], 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_86864.f_9[0], 1);
				TASK::SET_PED_PATH_AVOID_FIRE(Global_86864.f_9[0], 0);
				ENTITY::SET_ENTITY_PROOFS(Global_86864.f_9[0], 1, 1, 1, 1, 1, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_tenniscoach"));
			}
			break;
	}
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("bison2"), -827.0914f, 176.4763f, 69.9637f, 148.6507f, 1, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[0], 5, 0);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[0], 132, 0);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[0], 2);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[0], 0, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_86864[0], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_86864[0], 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("blista"), -826.2942f, 158.1811f, 68.3918f, 84.0848f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[1], 43, 43);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[1], 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[1], 0);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_86864[1], 0, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_86864[1], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_86864[1], 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
	Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01"), -818.038f, 179.26f, 71.252f, 1, 1, 0);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_86864.f_28[0], -818.038f, 179.26f, 71.252f, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[0], -20.52f, -74.02f, 14.3f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[0], 1);
	Global_86864.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), -818.128f, 179.1527f, 71.262f, 1, 1, 0);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_86864.f_28[1], -818.128f, 179.1527f, 71.262f, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[1], -39.24f, -75.96f, 16.2f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[1], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_rack_01"));
	GlobalFunc_6514(19, "FAMILY_3_INT", 0, 24, -1);
	switch (GlobalFunc_8315())
	{
		case 0:
			func_662(19, "Franklin", joaat("player_one"), 17);
			GlobalFunc_6516(19, "TennisCoach", 3, 1, 0);
			GlobalFunc_6516(19, "TennisCoach", 4, 1, 0);
			GlobalFunc_6516(19, "Amanda", 2, 1, 0);
			GlobalFunc_6516(19, "Amanda", 3, 2, 0);
			GlobalFunc_6516(19, "Amanda", 4, 2, 0);
			GlobalFunc_6516(19, "Amanda", 10, 1, 0);
			break;
		
		case 1:
			func_662(19, "Michael", joaat("player_zero"), 35);
			GlobalFunc_6516(19, "Amanda", 2, 1, 0);
			GlobalFunc_6516(19, "Amanda", 3, 2, 0);
			GlobalFunc_6516(19, "Amanda", 4, 2, 0);
			GlobalFunc_6516(19, "Amanda", 10, 1, 0);
			break;
	}
}

void func_662(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x5F27A
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	
	if (Global_68250 == iParam0)
	{
		if (Global_68429 < 4)
		{
			Global_68430[Global_68429 /*3*/] = GlobalFunc_4595(sParam1);
			Global_68430[Global_68429 /*3*/].f_1 = iParam2;
			Global_68430[Global_68429 /*3*/].f_2 = iParam3;
			Global_68429++;
			iVar0 = GlobalFunc_4594(sParam1);
			if (iVar0 != 144)
			{
				uVar2 = { GlobalFunc_7617(iParam2, iParam3) };
				iVar1 = 0;
				while (iVar1 < 12)
				{
					iVar18 = GlobalFunc_33(iVar1);
					iVar19 = iVar18;
					if ((iVar18 == 2 || iVar18 == 0) && uVar2[iVar19] == -99)
					{
						MISC::CLEAR_BIT(&(Global_68265[iVar0]), iVar1);
					}
					else
					{
						MISC::SET_BIT(&(Global_68265[iVar0]), iVar1);
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < 9)
				{
					MISC::SET_BIT(&(Global_68265[iVar0]), (12 + iVar1));
					iVar1++;
				}
			}
		}
	}
}

void func_663(int iParam0)//Position - 0x5F36D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_AS_ENEMY(iParam0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
			PED::SET_PED_CAN_RAGDOLL(iParam0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, 0);
			PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 169, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_86864.f_42);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		}
	}
}

int func_664()//Position - 0x5F3E7
{
	if (func_665(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

int func_665(var uParam0)//Position - 0x5F401
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
			if (!func_666(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_666(var uParam0)//Position - 0x5F463
{
	return func_667(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_667(int iParam0, char* sParam1, int iParam2)//Position - 0x5F47A
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (GlobalFunc_4585(iParam0))
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

void func_668()//Position - 0x5F56D
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_669(&(Global_86864.f_209), 0);
}

void func_669(var uParam0, bool bParam1)//Position - 0x5F584
{
	int iVar0;
	
	if (!bParam1)
	{
		func_671(uParam0);
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


void func_671(var uParam0)//Position - 0x5F5D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_672(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_672(var uParam0)//Position - 0x5F611
{
	func_673(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_673(int iParam0, char* sParam1, int iParam2)//Position - 0x5F628
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (GlobalFunc_4585(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_674()//Position - 0x5F6E8
{
	switch (GlobalFunc_8315())
	{
		case 0:
			GlobalFunc_6492(&(Global_86864.f_209), joaat("blista"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("bison2"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_tennis_rack_01"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_tennis_rack_01b"));
			break;
		
		case 1:
			GlobalFunc_6491(&(Global_86864.f_209), "get_up@directional@movement@from_knees@panic");
			GlobalFunc_6492(&(Global_86864.f_209), joaat("blista"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("bison2"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_tenniscoach"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_tennis_rack_01"));
			GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_tennis_rack_01b"));
			GlobalFunc_6491(&(Global_86864.f_209), "missfam3leadinoutfam_3_int");
			break;
	}
}




void func_678()//Position - 0x5F8BF
{
	iLocal_1082 = 0;
	iLocal_1080 = -1;
	iLocal_1081 = 0;
}

void func_679()//Position - 0x5F8D3
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.5945f, 182.7716f, 66.90443f, -828.9664f, 178.4743f, 74.64547f, 12.75f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
}

void func_680()//Position - 0x5F92E
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.5945f, 182.7716f, 66.90443f, -828.9664f, 178.4743f, 74.64547f, 12.75f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
}



int func_683()//Position - 0x5F99B
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(180, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (3.5f * 3.5f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, 1f, Global_18.f_2, 1, 1, 0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					while (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				if ((((PED::GET_PED_DRAWABLE_VARIATION(Global_86864.f_9[0], 1) == 0 && PED::GET_PED_DRAWABLE_VARIATION(Global_86864.f_9[0], 3) == 0) && PED::GET_PED_DRAWABLE_VARIATION(Global_86864.f_9[0], 4) == 0) && PED::GET_PED_DRAWABLE_VARIATION(Global_86864.f_9[0], 6) == 0) && PED::GET_PED_DRAWABLE_VARIATION(Global_86864.f_9[0], 10) == 0)
				{
					func_181();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_684()//Position - 0x5FAF3
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
}

void func_685()//Position - 0x5FB08
{
	func_203(&(Global_86864.f_9[0]));
}

void func_686()//Position - 0x5FB1D
{
	bool bVar0;
	
	bVar0 = false;
	while (!GlobalFunc_6808(&(Global_86864.f_9[0]), 14, -805.7495f, 168.2395f, 75.7504f, 84.5596f, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_9[0], 1);
		ENTITY::SET_ENTITY_COLLISION(Global_86864.f_9[0], 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(Global_86864.f_9[0], 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_86864.f_9[0], 1, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_86864.f_9[0], 3, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_86864.f_9[0], 4, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_86864.f_9[0], 6, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_86864.f_9[0], 10, 0, 0);
	}
	while (!bVar0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[0])) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(Global_86864.f_9[0]))
		{
			bVar0 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 10, 0, 0, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(Global_86864.f_9[0]);
	}
}

bool func_687()//Position - 0x5FCC8
{
	return STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(14));
}

void func_688()//Position - 0x5FCDA
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(14));
}

void func_689()//Position - 0x5FCEC
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(14));
}






int func_695()//Position - 0x5FD28
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { GlobalFunc_2247(179, GlobalFunc_8315()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0);
		if (fVar3 < (3f * 3f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -814.7225f, 176.354f, 74.65309f, -816.4317f, 181.5874f, 71.00117f, 2f, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -814.7225f, 176.354f, 74.65309f, -816.4317f, 181.5874f, 71.00117f, 2f, 0, 1, 0))
			{
				Global_86864.f_357 = 1;
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0.025f, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 4, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0.025f, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 4, 0, 1);
				}
			}
			else
			{
				Global_86864.f_357 = 0;
			}
			return 1;
		}
	}
	return 0;
}







void func_702()//Position - 0x5FE5C
{
	Global_86864.f_357 = 0;
}




int func_706()//Position - 0x5FE85
{
	int iVar0;
	
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
	if (((MISC::IS_BULLET_IN_ANGLED_AREA(-37.20001f, -1114.964f, 25.43914f, -60.22221f, -1106.472f, 29.18576f, 10f, 1) || MISC::IS_BULLET_IN_ANGLED_AREA(-37.20001f, -1114.964f, 25.43914f, -61.98855f, -1116.24f, 29.18388f, 9f, 1)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -37.20001f, -1114.964f, 25.43914f, -60.22221f, -1106.472f, 29.18576f, 10f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -37.20001f, -1114.964f, 25.43914f, -61.98855f, -1116.24f, 29.18388f, 9f))
	{
		return 1;
	}
	return 0;
}

int func_707()//Position - 0x6003E
{
	struct<3> Var0;
	
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_237))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_237, joaat("v_ilev_csr_door_l"), -38.4641f, -1108.446f, 26.7198f, 1, 1, 0);
	}
	else if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_237) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_237) != 4)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_237, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_237, 4, 0, 1);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_238, joaat("v_ilev_csr_door_r"), -36.6615f, -1109.102f, 26.7198f, 1, 1, 0);
	}
	else if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_238) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_238) != 4)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_238, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_238, 4, 0, 1);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { GlobalFunc_2247(162, 0) };
		if (!Global_87287)
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.964f, 25.43914f, -60.22221f, -1106.472f, 29.18576f, 10f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.964f, 25.43914f, -61.98855f, -1116.24f, 29.18388f, 9f, 0, 1, 0)) && (!GlobalFunc_4600(-37.20001f, -1114.964f, 25.43914f, -60.22221f, -1106.472f, 29.18576f, 10f) && !GlobalFunc_4600(-37.20001f, -1114.964f, 25.43914f, -61.98855f, -1116.24f, 29.18388f, 9f))) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_243 = -1;
				}
				func_181();
				MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 100f, 0);
			}
		}
		else
		{
			if (iLocal_243 == -1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_243 = MISC::GET_GAME_TIMER();
			}
			if (!bLocal_241)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.24773f, -1124.25f, 25.20335f, -42.22523f, -1103.323f, 30.42234f, 15f, 0, 1, 0) && !(iLocal_243 == -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.05745f, -1107.888f, 25.43703f, -59.5508f, -1104.442f, 28.93643f, 7f, 0, 1, 0)))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.82238f, -1111.382f, 25.43735f, -59.89202f, -1110.715f, 30.43581f, 20f, 0, 1, 0) && iLocal_243 != -1) && (MISC::GET_GAME_TIMER() - iLocal_243) > 1500)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -46.0563f, -1113.369f, 25.4358f, 1f, 20000, 1048576000, 4, 1193033728);
						iLocal_242 = 1;
						bLocal_241 = true;
					}
				}
				else
				{
					if (iLocal_243 == -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.05745f, -1107.888f, 25.43703f, -59.5508f, -1104.442f, 28.93643f, 7f, 0, 1, 0))
					{
						iLocal_242 = 1;
					}
					bLocal_241 = true;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]) && !PED::IS_PED_INJURED(Global_86864.f_9[1]))
			{
				PED::SET_PED_RESET_FLAG(Global_86864.f_9[1], 313, 1);
				PED::SET_PED_RESET_FLAG(Global_86864.f_9[1], 309, 1);
			}
			if (bLocal_241)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.26463f, -1108.278f, 25.43694f, -42.44073f, -1117.464f, 30.43473f, 9.5f, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
				}
				if (((((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[0])) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1])) && !PED::IS_PED_INJURED(Global_86864.f_9[1])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[0])) && !ENTITY::IS_ENTITY_DEAD(Global_86864[0]))
				{
					if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("ARMENIAN_3_INT"))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_239))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_239))
							{
								if (!GlobalFunc_111())
								{
									if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 2) || iLocal_242)
									{
										GlobalFunc_10618(&(Global_86864.f_44), "ARM3AUD", "ARM3_INT_LI", 7, 0, 0, 0);
										Global_86864.f_358 = MISC::GET_GAME_TIMER() + 3500;
									}
									else
									{
										GlobalFunc_10630(&(Global_86864.f_44), "ARM3AUD", "ARM3_INT_LI", "ARM3_INT_LI_3", 7, 0, 0);
										Global_86864.f_358 = -1;
									}
								}
								else if (MISC::GET_GAME_TIMER() > Global_86864.f_358)
								{
									if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 2)
									{
										CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
										CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
										CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
										CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.015f);
										CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.02f);
										CAM::SET_GAMEPLAY_HINT_FOV(35f);
									}
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_86864.f_9[0], 10000, 0, 2);
									uLocal_240 = PED::CREATE_SYNCHRONIZED_SCENE(-43.6345f, -1110.605f, 25.9582f, 0f, 0f, 178.9958f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_240, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_240, 1);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -40.73348f, -1123.268f, 24.71316f, -41.51882f, -1107.432f, 32.43694f, 15f, 0, 1, 0))
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_240, "missarmenian3leadinoutarmenian_3_int", "_leadin_look_left_simeon", 2f, -2f, 1, 0, 1148846080, 0);
									}
									else
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_240, "missarmenian3leadinoutarmenian_3_int", "_leadin_look_right_simeon", 2f, -2f, 1, 0, 1148846080, 0);
									}
									TASK::TASK_PLAY_ANIM(Global_86864.f_9[1], "missarmenian3leadinoutArmenian_3_int", "_leadin_customer", 1000f, -2f, -1, 18, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864[0], uLocal_240, "_leadin_car", "missarmenian3leadinoutArmenian_3_int", 1000f, -1000f, 1, 1148846080);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Global_86864[0]);
									TASK::TASK_LOOK_AT_ENTITY(Global_86864.f_9[0], PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
								}
							}
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_240))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_240))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_240) >= 0.35f && !GlobalFunc_111()) || (Global_86864.f_358 == -1 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_240) >= 0.25f))
								{
									Global_86864.f_357 = 1;
									return 1;
								}
							}
						}
					}
				}
				if (((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !PED::IS_PED_INJURED(Global_86864.f_9[0])) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Global_86864.f_9[0], 1) - Vector(1f, 0f, 0f), 2f, 2f, 5f, 0, 1, 0)) || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.964f, 25.43914f, -62.60672f, -1104.862f, 29.31163f, 16f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.964f, 25.43914f, -63.4054f, -1116.214f, 29.18087f, 13f, 0, 1, 0)))
				{
					Global_86864.f_357 = 1;
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
	}
	return 0;
}



void func_710()//Position - 0x608C8
{
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_8915(&(Global_86864.f_9[1]));
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_4588(&(Global_86864[1]));
	GlobalFunc_4588(&(Global_86864[2]));
	GlobalFunc_4588(&(Global_86864[3]));
	GlobalFunc_4588(&(Global_86864[4]));
	GlobalFunc_4588(&(Global_86864[5]));
	GlobalFunc_4588(&(Global_86864[6]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_237))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_237);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_238);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.43694f, -1105.479f, -46.89022f) - Vector(5f, 20f, 20f), Vector(29.43694f, -1105.479f, -46.89022f) + Vector(5f, 20f, 20f), 1, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	CAM::STOP_GAMEPLAY_HINT(0);
	GlobalFunc_4593();
}

void func_711()//Position - 0x609AF
{
	func_203(&(Global_86864.f_9[0]));
	func_203(&(Global_86864.f_9[1]));
	GlobalFunc_4574(&(Global_86864[0]));
	GlobalFunc_4574(&(Global_86864[1]));
	GlobalFunc_4574(&(Global_86864[2]));
	GlobalFunc_4574(&(Global_86864[3]));
	GlobalFunc_4574(&(Global_86864[4]));
	GlobalFunc_4574(&(Global_86864[5]));
	GlobalFunc_4574(&(Global_86864[6]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_237))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_237);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_238);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.43694f, -1105.479f, -46.89022f) - Vector(5f, 20f, 20f), Vector(29.43694f, -1105.479f, -46.89022f) + Vector(5f, 20f, 20f), 1, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	CAM::STOP_GAMEPLAY_HINT(0);
	GlobalFunc_4593();
}

void func_712()//Position - 0x60A96
{
	var uVar0;
	
	MISC::CLEAR_AREA(-47.07522f, -1114.476f, 25.43581f, 7.5f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(-40.14164f, -1113.714f, 25.43738f, 5f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(-57.75611f, -1112.769f, 25.43581f, 10f, 1, 0, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_86864.f_42));
	Global_86864.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(GlobalFunc_2247(162, 0) - Vector(15f, 25f, 25f), GlobalFunc_2247(170, 0) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.43694f, -1105.479f, -46.89022f) - Vector(5f, 20f, 20f), Vector(29.43694f, -1105.479f, -46.89022f) + Vector(5f, 20f, 20f), 0, 1);
	uLocal_239 = PED::CREATE_SYNCHRONIZED_SCENE(-43.6345f, -1110.605f, 25.9582f, 0f, 0f, 178.9958f, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_239, 1);
	GlobalFunc_6808(&(Global_86864.f_9[0]), 18, -42.4751f, -1110.932f, 25.4343f, 312.8127f, 1);
	GlobalFunc_4596(Global_86864.f_9[0], Global_86864.f_42);
	GlobalFunc_173(&(Global_86864.f_44), 0, Global_86864.f_9[0], "SIMEON", 0, 1);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_239, "missarmenian3leadinoutArmenian_3_int", "_intro_loop_simeon", 1000f, -2f, 1, 0, 1148846080, 0);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("premier"), -43.6345f, -1110.605f, 25.4358f, 178.9958f, 1, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[0], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[0], 43, 43);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[0], 10, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[0], 11, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[0], 12, 1);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_86864[0], 43, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[0], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[0], 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_86864[0], uLocal_239, "_intro_loop_car", "missarmenian3leadinoutArmenian_3_int", 1000f, -1000f, 1, 1148846080);
	Global_86864.f_9[1] = PED::CREATE_PED(26, joaat("a_m_m_bevhills_02"), -39.8746f, -1100.579f, 25.4343f, 139.6499f, 1, 1);
	GlobalFunc_4596(Global_86864.f_9[1], Global_86864.f_42);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[1], 4, 0, 0, 0);
	GlobalFunc_173(&(Global_86864.f_44), 1, Global_86864.f_9[1], "MrKenneth", 0, 1);
	PED::SET_PED_INTO_VEHICLE(Global_86864.f_9[1], Global_86864[0], -1);
	TASK::TASK_PLAY_ANIM(Global_86864.f_9[1], "missarmenian3leadinoutArmenian_3_int", "_intro_loop_customer", 1000f, -2f, -1, 17, 0, 0, 0, 0);
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Vector(25.4364f, -1105.855f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(0f, 0f, 0f), 190.0401f, 1, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[1], 0f);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[1], 1, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[1], 2, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[1], 3, 1);
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Vector(25.4364f, -1105.855f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(1f, 1f, 1f), 190.0401f, 1, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[2], 0f);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[2], 1, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[2], 2, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[2], 3, 1);
	uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-60.3707f, -1098.992f, 25.4262f, "v_carshowroom");
	Global_86864[3] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -36.6411f, -1102.191f, 25.4223f, 154.2468f, 1, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[3], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[3], 39, 39);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[3], 10, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[3], 11, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[3], 12, 1);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_86864[3], 29, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[3], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[3], 0);
	INTERIOR::_0x82EBB79E258FA2B7(Global_86864[3], uVar0);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[3], 1);
	Global_86864[4] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -41.7113f, -1100.042f, 25.4223f, 138.7067f, 1, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[4], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[4], 68, 68);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[4], 1, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[4], 2, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[4], 3, 1);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_86864[4], 68, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[4], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[4], 0);
	INTERIOR::_0x82EBB79E258FA2B7(Global_86864[4], uVar0);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[4], 1);
	Global_86864[5] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -46.3951f, -1097.778f, 25.4223f, 108.3411f, 1, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[5], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[5], 6, 3);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[5], 10, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[5], 11, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[5], 12, 1);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_86864[5], 10, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[5], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[5], 0);
	INTERIOR::_0x82EBB79E258FA2B7(Global_86864[5], uVar0);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[5], 1);
	Global_86864[6] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -50.0989f, -1094.534f, 25.4223f, 88.9621f, 1, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_86864[6], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[6], 42, 42);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[6], 1, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[6], 2, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Global_86864[6], 3, 1);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_86864[6], 42, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[6], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[6], 0);
	INTERIOR::_0x82EBB79E258FA2B7(Global_86864[6], uVar0);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_86864[6], 1);
	STREAMING::REMOVE_ANIM_DICT("missarmenian3leadinoutArmenian_3_int");
	GlobalFunc_7052(18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("premier"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
	GlobalFunc_7621(179, 1, 0, 1, 0);
	GlobalFunc_6514(2, "ARMENIAN_3_INT", -1, 2, -1);
	func_205(2, "Siemon", Global_86864.f_9[0]);
	func_205(2, "customer", Global_86864.f_9[1]);
}







int func_719()//Position - 0x6552E
{
	if (func_665(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_720()//Position - 0x65548
{
	func_669(&(Global_86864.f_209), 0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_237))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_237);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_238);
	}
}

void func_721()//Position - 0x65579
{
	GlobalFunc_6491(&(Global_86864.f_209), "missarmenian3leadinoutArmenian_3_int");
	GlobalFunc_6492(&(Global_86864.f_209), GlobalFunc_4946(18));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("a_m_m_bevhills_02"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("premier"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("tailgater"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("bjxl"));
}

void func_722()//Position - 0x655DA
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_86864.f_43, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_86864.f_42);
	Global_86864.f_358 = 0;
}


void func_724()//Position - 0x65607
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_67)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -24.00677f, -1086.364f, 25.01074f, -31.04554f, -1083.776f, 28.97545f, 3.5625f, 0, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						if (GlobalFunc_530(iVar0, 2f, 1, 1056964608, 0, 1))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							iLocal_67 = 1;
						}
					}
				}
			}
		}
	}
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -33.71f, -1096.13f, 25.42f, 1) < 18f)
	{
		if (!GlobalFunc_1720() || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -33.71f, -1096.13f, 25.42f, 1) < 8f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		}
		if (!iLocal_65)
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -33.71f, -1096.13f, 25.42f, 1) < 18f)
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					GlobalFunc_5105();
					GlobalFunc_173(&uLocal_69, 1, Global_86864.f_9[0], "SIMEON", 0, 1);
					GlobalFunc_173(&uLocal_69, 0, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
					iLocal_65 = 1;
				}
			}
		}
		else if (!iLocal_66)
		{
			if (GlobalFunc_10691(&uLocal_69, "AR2AUD", "AR2_INTRO_LI", 7, 0, 0, 0, 0))
			{
				iLocal_66 = 1;
			}
		}
	}
	else
	{
		if (iLocal_65)
		{
			PAD::ENABLE_CONTROL_ACTION(0, 22, 1);
			iLocal_65 = 0;
		}
		if (iLocal_66)
		{
			GlobalFunc_5105();
			iLocal_66 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(-31.6922f, -1106.555f, 25.4223f);
		if (INTERIOR::IS_INTERIOR_READY(iVar1))
		{
			Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("ig_siemonyetarian"), -30.2735f, -1103.402f, 25.4223f, 140.5788f, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_86864.f_9[0]);
			PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_86864.f_9[0], 7, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(Global_86864.f_9[0], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
		}
	}
}





int func_729()//Position - 0x65915
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.474f, 26.3444f, 5f, joaat("bjxl"), 4);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.839f, 26.3444f, 5f, joaat("schwarzer"), 2);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.463f, 26.0671f, 5f, joaat("tailgater"), 4);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.562f, 26.0671f, 5f, joaat("tailgater"), 4);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.648f, 26.0534f, 5f, joaat("baller"), 2);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.24f, 25.25259f, 1) < 150.5f)
	{
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.24f, 25.25259f, 26.5f, 1, 1))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.24f, 25.25259f, 26.5f))
		{
			return 1;
		}
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.24f, 25.25259f, 1) < 26.5f)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iVar2 = joaat("weapon_unarmed");
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
				switch (iVar2)
				{
					case joaat("weapon_bat"):
					case joaat("weapon_crowbar"):
					case joaat("weapon_hammer"):
					case joaat("weapon_knife"):
					case joaat("weapon_nightstick"):
					case joaat("weapon_petrolcan"):
					case joaat("weapon_stickybomb"):
					case joaat("weapon_grenade"):
					case joaat("weapon_bottle"):
						break;
					
					default:
						return 1;
						break;
					}
				}
			}
	}
	if (iLocal_236 != 0)
	{
		if (MISC::ABSI((iLocal_236 - iVar0)) < 200 && MISC::ABSI((iLocal_236 - iVar0)) > 10)
		{
			return 1;
		}
	}
	iLocal_236 = iVar0;
	return 0;
}

int func_730()//Position - 0x65B29
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_234)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -27.33553f, -1091.912f, 24.9362f, -40.87793f, -1087.528f, 28.10984f, 4.0625f, 0, 1, 0))
					{
						func_181();
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -34.4845f, -1099.388f, 25.4223f, 1f, 20000, 0.25f, 1, 1193033728);
						iLocal_234++;
					}
				}
				break;
			
			case 1:
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), 0))
				{
					iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), 0, 0, 1);
					if (iVar0 != 0)
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
						{
							uLocal_235 = PED::CREATE_SYNCHRONIZED_SCENE(-31.828f, -1101.772f, 26.572f, 0f, 0f, 68.4f, 2);
							if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_86864.f_9[0]);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_86864.f_9[0], uLocal_235, "missarmenian2leadinoutint_alt2", "arm_2_int_alt2_leadin", 1000f, -1000f, 0, 0, 1148846080, 0);
							}
							GlobalFunc_10686(97, 0);
							ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), uLocal_235, "arm_2_int_alt2_leadin_door", "missarmenian2leadinoutint_alt2", 1000f, -1056964608, 0, 1148846080);
							iLocal_234++;
						}
					}
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_235))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_235) > 0.44f)
					{
						if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
						{
							CAM::STOP_GAMEPLAY_HINT(1);
							CAM::SET_GAMEPLAY_ENTITY_HINT(Global_86864.f_9[0], 0f, 0f, 0.5f, 1, 4500, 2500, 2000, 0);
							CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.57f);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.055f);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
							CAM::SET_GAMEPLAY_HINT_FOV(30f);
							iLocal_234++;
						}
					}
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_235))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_235) > 0.5f)
					{
						GlobalFunc_2207();
						iLocal_234++;
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_235))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_235) > 0.99f)
					{
						return 1;
					}
				}
				break;
			}
	}
	if (iLocal_234 > 1)
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	if (!iLocal_64)
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_employee_month_02")))
		{
			iLocal_68 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_68, 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_68, 0, 1);
				Global_86864.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_68, 1), 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[0], 0f, 0f, -20f, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
				iLocal_64 = 1;
			}
		}
	}
	return 0;
}


void func_732()//Position - 0x65E64
{
	GlobalFunc_4588(&(Global_86864[0]));
	GlobalFunc_4588(&(Global_86864[1]));
	GlobalFunc_4588(&(Global_86864[2]));
	GlobalFunc_4588(&(Global_86864[3]));
	GlobalFunc_4588(&(Global_86864[4]));
	GlobalFunc_8915(&(Global_86864.f_9[0]));
	GlobalFunc_4575(&(Global_86864.f_28[0]));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_68, 1);
	}
	func_51(&iLocal_68);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 1, 1);
	iLocal_64 = 0;
	GlobalFunc_4593();
}

void func_733()//Position - 0x65F1E
{
	GlobalFunc_4574(&(Global_86864[0]));
	GlobalFunc_4574(&(Global_86864[1]));
	GlobalFunc_4574(&(Global_86864[2]));
	GlobalFunc_4574(&(Global_86864[3]));
	GlobalFunc_4574(&(Global_86864[4]));
	func_203(&(Global_86864.f_9[0]));
	func_51(&(Global_86864.f_28[0]));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_68, 1);
	}
	func_51(&iLocal_68);
	iLocal_64 = 0;
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 1, 1);
	GlobalFunc_4593();
}

void func_734()//Position - 0x65FD8
{
	GlobalFunc_6514(1, "ARMENIAN_2_INT", -1, 0, -1);
	MISC::CLEAR_AREA_OF_VEHICLES(-11.3885f, -1080.687f, 25.6721f, 8f, 0, 0, 0, 0, 0);
	Global_86864[1] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -7.6801f, -1082.437f, 25.6721f, 159.3786f, 1, 1);
	Global_86864[2] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -11.3885f, -1080.687f, 25.6721f, 160.6359f, 1, 1);
	Global_86864[0] = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -17.3168f, -1079.296f, 25.6721f, 204.3207f, 1, 1);
	MISC::CLEAR_AREA_OF_VEHICLES(-38f, -1104f, 26.0534f, 4f, 0, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-41.4259f, -1099.648f, 26.0534f, 4f, 0, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-46.2594f, -1097.839f, 26.3444f, 4f, 0, 0, 0, 0, 0);
	Global_86864[3] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -41.4259f, -1099.648f, 26.0534f, 132.3786f, 1, 1);
	Global_86864[4] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -46.2594f, -1097.839f, 26.3444f, 113.3786f, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[3], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[3], 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_86864[4], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_86864[4], 0);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[0], 3, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[2], 37, 37);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[1], 52, 10);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[3], 25, 16);
	VEHICLE::SET_VEHICLE_COLOURS(Global_86864[4], 32, 17);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 0, 1);
	GlobalFunc_10686(97, 1);
}

int func_735()//Position - 0x661D5
{
	if (func_665(&(Global_86864.f_209)))
	{
		return 1;
	}
	return 0;
}

void func_736()//Position - 0x661EF
{
	func_669(&(Global_86864.f_209), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_68, 1);
	}
	func_51(&iLocal_68);
	iLocal_64 = 0;
}

void func_737()//Position - 0x6621B
{
	GlobalFunc_6492(&(Global_86864.f_209), joaat("schwarzer"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("baller"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("bullet"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("ig_siemonyetarian"));
	GlobalFunc_6492(&(Global_86864.f_209), joaat("prop_employee_month_02"));
	GlobalFunc_6491(&(Global_86864.f_209), "missarmenian2leadinoutint_alt2");
}



