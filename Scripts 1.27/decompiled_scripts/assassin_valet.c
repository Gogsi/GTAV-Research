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
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<39> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 16;
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
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	float fLocal_269 = 0f;
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
	var uLocal_280 = 21;
	var uLocal_281 = 6;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 1132396544;
	var uLocal_288 = 1132396544;
	var uLocal_289 = 1132396544;
	var uLocal_290 = 0;
	var uLocal_291 = -1082130432;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 8;
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
	var uLocal_351 = -1;
	var uLocal_352 = 1092616192;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	bool bLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	struct<7> Local_359 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	float fLocal_371 = 0f;
	float fLocal_372 = 0f;
	float fLocal_373 = 0f;
	bool bLocal_374 = 0;
	bool bLocal_375 = 0;
	int iLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
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
	var uLocal_419 = 3;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 1;
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
	var uLocal_440 = 2;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 13;
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
	var uLocal_458 = 13;
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
	var uLocal_667 = 13;
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
	var uLocal_876 = 13;
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
	var uLocal_890 = 13;
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
	var uLocal_904 = 13;
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
	var uLocal_918 = 13;
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
	struct<55> Local_963 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031[3] = { 0, 0, 0 };
	int iLocal_1035[2] = { 0, 0 };
	int iLocal_1038 = 0;
	int iLocal_1039[2] = { 0, 0 };
	int iLocal_1042 = 0;
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045[2] = { 0, 0 };
	var uLocal_1048[3] = { 0, 0, 0 };
	var uLocal_1052[2] = { 0, 0 };
	int iLocal_1055 = 0;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	struct<8> Local_1058[3];
	struct<8> Local_1083[2];
	struct<8> Local_1100[2];
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119[3] = { 0, 0, 0 };
	var uLocal_1123[2] = { 0, 0 };
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	bool bLocal_1133 = 0;
	int iLocal_1134 = 0;
	bool bLocal_1135 = 0;
	int iLocal_1136 = 0;
	bool bLocal_1137 = 0;
	bool bLocal_1138 = 0;
	bool bLocal_1139 = 0;
	bool bLocal_1140 = 0;
	int iLocal_1141 = 0;
	bool bLocal_1142 = 0;
	bool bLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	bool bLocal_1147 = 0;
	bool bLocal_1148 = 0;
	bool bLocal_1149 = 0;
	bool bLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	bool bLocal_1153 = 0;
	int iLocal_1154 = 0;
	bool bLocal_1155 = 0;
	int iLocal_1156 = 0;
	bool bLocal_1157 = 0;
	int iLocal_1158 = 0;
	bool bLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	bool bLocal_1162 = 0;
	int iLocal_1163 = 0;
	int iLocal_1164 = 0;
	bool bLocal_1165 = 0;
	int iLocal_1166 = 0;
	bool bLocal_1167 = 0;
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	bool bLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	bool bLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	bool bLocal_1183 = 0;
	int iLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	bool bLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	var uLocal_1194[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1200 = 0;
	var uLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	var uLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	float fLocal_1216 = 0f;
	float fLocal_1217 = 0f;
	float fLocal_1218 = 0f;
	float fLocal_1219[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1225[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1231 = 0f;
	float fLocal_1232 = 0f;
	float fLocal_1233[3] = { 0f, 0f, 0f };
	var uLocal_1237[3] = { 0, 0, 0 };
	float fLocal_1241 = 0f;
	float fLocal_1242 = 0f;
	float fLocal_1243 = 0f;
	int iLocal_1244 = 0;
	float fLocal_1245 = 0f;
	struct<3> Local_1246[3];
	struct<3> Local_1256[3];
	struct<3> Local_1266[5];
	struct<3> Local_1282 = { 0, 0, 0 } ;
	struct<3> Local_1285 = { 0, 0, 0 } ;
	struct<3> Local_1288 = { 0, 0, 0 } ;
	struct<3> Local_1291 = { 0, 0, 0 } ;
	struct<3> Local_1294 = { 0, 0, 0 } ;
	struct<3> Local_1297 = { 0, 0, 0 } ;
	struct<3> Local_1300 = { 0, 0, 0 } ;
	struct<3> Local_1303 = { 0, 0, 0 } ;
	struct<3> Local_1306 = { 0, 0, 0 } ;
	float fLocal_1309 = 0f;
	int iLocal_1310 = 0;
	int iLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	var uLocal_1314[2] = { 0, 0 };
	int iLocal_1317 = 0;
	int iLocal_1318[3] = { 0, 0, 0 };
	var uLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	int iLocal_1330 = 0;
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
	bool bLocal_1361 = 0;
	var uLocal_1362 = 16;
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
	var uLocal_1472 = 0;
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
	var uLocal_1529 = -1;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 1000;
	var uLocal_1537 = 1000;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 8;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 4;
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
	var uLocal_1560 = 4;
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
	var uLocal_1575 = 4;
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
	var uLocal_1590 = 4;
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
	var uLocal_1605 = 4;
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
	var uLocal_1620 = 4;
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
	var uLocal_1635 = 4;
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
	var uLocal_1650 = 4;
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
	struct<3> Local_1663 = { 0, 0, 0 } ;
	float fLocal_1666 = 0f;
	struct<3> Local_1667 = { 0, 0, 0 } ;
	float fLocal_1670 = 0f;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	struct<3> Local_1673 = { 0, 0, 0 } ;
	struct<3> Local_1676 = { 0, 0, 0 } ;
	struct<3> Local_1679 = { 0, 0, 0 } ;
	struct<3> Local_1682 = { 0, 0, 0 } ;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	int iLocal_1688 = 0;
	struct<12> Local_1689 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	Local_44 = { 500f, 500f, 500f };
	uLocal_53 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_54 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_267 = -1;
	fLocal_269 = 1f;
	iLocal_382 = 100;
	iLocal_383 = 3;
	iLocal_1029 = 3;
	iLocal_1208 = 37000;
	iLocal_1214 = -1;
	fLocal_1216 = 90000f;
	fLocal_1241 = 135f;
	fLocal_1243 = 0f;
	fLocal_1245 = 0f;
	Local_1291 = { -1162.985f, -161.715f, -38.221f };
	Local_1294 = { -1327.63f, -266.202f, 38.221f };
	Local_1297 = { -1236.661f, -197.316f, 39.6313f };
	Local_1300 = { -1266.027f, -218.9829f, 41.44594f };
	Local_1306 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1309 = 40f;
	iLocal_1323 = joaat("a_m_y_beachvesp_02");
	iLocal_1324 = joaat("fbi2");
	iLocal_1325 = joaat("s_m_m_highsec_01");
	iLocal_1326 = joaat("s_m_m_highsec_02");
	iLocal_1327 = joaat("washington");
	Local_1663 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1666 = 304.201f;
	Local_1667 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1670 = 137.9228f;
	Local_1673 = { -1510.733f, -935.96f, 10.90214f };
	Local_1676 = { 15.07491f, -0.024198f, -71.86189f };
	Local_1679 = { -1510.878f, -936.1155f, 9.798549f };
	Local_1682 = { 4.686822f, -0.024198f, -72.45972f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		GlobalFunc_5211(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_iGenData), 1024);
		GlobalFunc_10632();
		func_470();
	}
	MISC::SET_MISSION_FLAG(1);
	iLocal_1043 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_7698())
		{
			iLocal_1151 = 1;
		}
		bLocal_1140 = true;
	}
	else
	{
		bLocal_1140 = false;
	}
	GlobalFunc_587();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
	GlobalFunc_7080();
	iLocal_268 = 0;
	Local_56 = { GlobalFunc_5689(iLocal_268) };
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1325, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1326, 1);
	CAM::INVALIDATE_IDLE_CAM();
	if (GlobalFunc_Is_Mission_Retry())
	{
		bLocal_375 = true;
		iLocal_1207 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544)
		{
			if (iLocal_1207 <= 1)
			{
				iLocal_1207++;
			}
		}
		func_462();
		if (iLocal_1207 == 0)
		{
			if (iLocal_1151)
			{
				GlobalFunc_8368();
				while (!GlobalFunc_8367())
				{
					SYSTEM::WAIT(0);
				}
				iVar0 = func_422(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_BIG_VEHICLE(iVar0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
			GlobalFunc_5116(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1207 == 1)
		{
			if (iLocal_1151)
			{
				GlobalFunc_8368();
				while (!GlobalFunc_8367())
				{
					SYSTEM::WAIT(0);
				}
				iVar1 = func_422(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_BIG_VEHICLE(iVar1))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar1);
				}
			}
			GlobalFunc_5116(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1207 == 2)
		{
			if (iLocal_1151)
			{
				GlobalFunc_8368();
				while (!GlobalFunc_8367())
				{
					SYSTEM::WAIT(0);
				}
				iVar2 = func_422(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar2)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_BIG_VEHICLE(iVar2))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar2);
				}
			}
			GlobalFunc_5116(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ASS1", 0);
		if (iLocal_1141)
		{
			if (GlobalFunc_145())
			{
				func_419();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_1043))
		{
			func_412();
			if (iLocal_1029 < 10)
			{
				Local_359.f_6 = 1;
			}
			else
			{
				Local_359.f_6 = 5;
			}
			func_141();
			func_89();
			if (iLocal_1156)
			{
				func_84();
			}
			if (!bLocal_1139)
			{
				if (iLocal_1029 >= 9 && iLocal_1029 < 11)
				{
					func_80(&uLocal_1201, &fLocal_1216, &bLocal_1138, &bLocal_1139);
				}
			}
			func_55();
			func_53();
			if (((iLocal_1132 || bLocal_1137) && iLocal_1029 < 11) || (bLocal_1167 && iLocal_1029 < 11))
			{
				if (!GlobalFunc_226(&uLocal_1352) && iLocal_1029 > 8)
				{
					GlobalFunc_7731(&uLocal_1352);
				}
				else if (iLocal_1029 < 8 || GlobalFunc_4981(&uLocal_1352) > 5f)
				{
					if (iLocal_1042 == 1)
					{
						func_31(1);
					}
					else if (iLocal_1042 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (GlobalFunc_4981(&uLocal_1352) > 2.5f)
				{
					if (!iLocal_1168)
					{
						if (!bLocal_1187)
						{
							iLocal_1055 = func_30(70f, 0);
						}
						else
						{
							iLocal_1055 = func_30(70f, 1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(iLocal_1055))
							{
								TASK::CLEAR_PED_TASKS(iLocal_1055);
								if (iLocal_1042 == 1)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1312))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1055, 0))
										{
											TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1055, iLocal_1312, iLocal_1312, 2f, 0, 0.5f, 1082130432, 1, 0, -957453492);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1055) && !PED::IS_PED_INJURED(iLocal_1055))
									{
										func_28(iLocal_1055, 6, "OJAvaGUARD2");
										GlobalFunc_10630(&uLocal_1362, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1042 == 8)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
									{
										TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1055, iLocal_1310, iLocal_1310, 2f, 0, 0.5f, 1082130432, 1, 0, -957453492);
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									GlobalFunc_10630(&uLocal_1362, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_1055, PLAYER::PLAYER_PED_ID(), -1, 0);
									func_2(iLocal_1055);
								}
							}
						}
						iLocal_1168 = 1;
					}
				}
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x710
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1043, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1043, 0);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
		{
			bLocal_1142 = true;
		}
	}
	else
	{
		bLocal_1142 = false;
	}
	if (bLocal_1142)
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1310))
		{
			VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iVar0, iLocal_1310);
		}
	}
}

void func_2(int iParam0)//Position - 0x774
{
	struct<6> Var0;
	
	if (!iLocal_1178)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && GlobalFunc_5682(iParam0, 1) < 50f)
		{
			if (!GlobalFunc_111())
			{
				if (iLocal_1042 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1042 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					GlobalFunc_10630(&uLocal_1362, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1178 = 1;
			}
			else
			{
				Var0 = { GlobalFunc_560() };
				if (!MISC::ARE_STRINGS_EQUAL(&Var0, "OJAS_FEED"))
				{
					GlobalFunc_4935();
				}
			}
		}
	}
}























int func_25(float fParam0)//Position - 0x1128
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(uLocal_1048[iVar0]))
		{
			if (GlobalFunc_2264(uLocal_1048[iVar0], Local_1288, 1) < fParam0)
			{
				return uLocal_1048[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_1052[iVar0]))
		{
			if (GlobalFunc_2264(uLocal_1052[iVar0], Local_1288, 1) < fParam0)
			{
				return uLocal_1052[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}



void func_28(int iParam0, int iParam1, char* sParam2)//Position - 0x1232
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		GlobalFunc_173(&uLocal_1362, iParam1, iParam0, sParam2, 0, 1);
	}
}


int func_30(int iParam0, bool bParam1)//Position - 0x12EE
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(uLocal_1048[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_1048[iVar0], 0)))
			{
				fVar1 = GlobalFunc_5682(uLocal_1048[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1048[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_1052[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_1052[iVar0], 0)))
			{
				fVar1 = GlobalFunc_5682(uLocal_1052[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1052[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1045[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_1052[iVar0], 0)))
			{
				fVar1 = GlobalFunc_5682(iLocal_1045[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1045[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)//Position - 0x1428
{
	char* sVar0;
	
	if (iLocal_1141 == 0)
	{
		iLocal_1042 = iParam0;
		GlobalFunc_4935();
		HUD::CLEAR_PRINTS();
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		if (func_45())
		{
			GlobalFunc_5129(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Global_Mission_Fail_State.f_12[0] = 1;
		}
		else
		{
			Global_Mission_Fail_State.f_12[0] = 0;
		}
		switch (iLocal_1042)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_1141 = 1;
		GlobalFunc_7076(sVar0);
		GlobalFunc_10616(0);
	}
}














int func_45()//Position - 0x2400
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}








void func_53()//Position - 0x252E
{
	if (func_54(&iLocal_1042))
	{
		func_31(6);
	}
}

int func_54(int iParam0)//Position - 0x2545
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_1029 > 11)
	{
		if (!PED::IS_PED_INJURED(iLocal_1044))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_1044, iLocal_1310, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_1162)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
		{
			if (!PED::IS_PED_INJURED(iLocal_1044))
			{
				if (GlobalFunc_156(iLocal_1043, iLocal_1044, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1310) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1310))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1044))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_1118))
				{
					if (GlobalFunc_156(iLocal_1043, iLocal_1044, 1) >= (fVar0 * 0.5f))
					{
						if (!HUD::IS_BLIP_FLASHING(uLocal_1118))
						{
							HUD::SET_BLIP_FLASHES(uLocal_1118, 1);
						}
					}
					else if (HUD::IS_BLIP_FLASHING(uLocal_1118))
					{
						HUD::SET_BLIP_FLASHES(uLocal_1118, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()//Position - 0x264B
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
	{
		if (!PED::IS_PED_INJURED(iLocal_1044))
		{
			GlobalFunc_10693(&uLocal_1527, iLocal_1044, 0, 0, 1, 1, 1);
		}
	}
}

























void func_80(var uParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x3575
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		*fParam1 = (*fParam1 / 1000f);
		if (!GlobalFunc_226(&uLocal_1349))
		{
			GlobalFunc_7731(&uLocal_1349);
		}
		*bParam2 = 1;
	}
	if (GlobalFunc_226(&uLocal_1349))
	{
		fVar0 = GlobalFunc_4981(&uLocal_1349);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1211 = SYSTEM::ROUND((*fParam1 - fVar0));
	iLocal_1211 *= 1000;
	if (iLocal_1211 < 63000)
	{
		iLocal_1145 = 1;
	}
	if (iLocal_1211 < 65000)
	{
		iLocal_1152 = 1;
	}
	if (iLocal_1211 < iLocal_1208)
	{
		iLocal_1175 = 1;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI", 0))
	{
		bLocal_1361 = false;
	}
	else
	{
		bLocal_1361 = true;
	}
	if (iLocal_1211 < 30000)
	{
		iLocal_1166 = 1;
		if (bLocal_1361)
		{
			if (GlobalFunc_226(&uLocal_1358))
			{
				if (GlobalFunc_4981(&uLocal_1358) > 1f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					GlobalFunc_6715(&uLocal_1358);
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				GlobalFunc_7731(&uLocal_1358);
			}
		}
		GlobalFunc_5277(iLocal_1211, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5277(iLocal_1211, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
}




void func_84()//Position - 0x37F7
{
	int iVar0;
	
	switch (iLocal_1205)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1048[0]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_1048[0]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1048[1]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_1048[1]);
				}
				iVar0 = func_88();
				if (bLocal_1155)
				{
					if (!iLocal_1171)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1171 = 1;
						}
					}
				}
				else if (!bLocal_1162 && PED::IS_PED_INJURED(iLocal_1044))
				{
					if (!iLocal_1171)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1171 = 1;
						}
					}
				}
				if (!GlobalFunc_226(&uLocal_1337))
				{
					GlobalFunc_7731(&uLocal_1337);
				}
				else
				{
					GlobalFunc_6715(&uLocal_1337);
				}
				iLocal_1205 = 1;
			}
			break;
		
		case 1:
			iLocal_1205 = 2;
			break;
		
		case 2:
			if (iLocal_1171 || !PED::IS_PED_INJURED(iLocal_1044))
			{
				if (!GlobalFunc_111() && !bLocal_1155)
				{
					if (!iLocal_1169)
					{
						iVar0 = func_88();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1169 = 1;
						}
					}
					else if (!bLocal_1179 && PED::IS_PED_INJURED(iLocal_1044))
					{
						iVar0 = func_88();
						func_87(iVar0);
					}
				}
			}
			else if (bLocal_1155)
			{
				if (!iLocal_1171)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1171 = 1;
					}
				}
			}
			else if (!bLocal_1162)
			{
				if (!iLocal_1171)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1171 = 1;
					}
				}
			}
			if (func_86(iLocal_1043))
			{
				fLocal_1242 = 2.5f;
			}
			else
			{
				fLocal_1242 = 5f;
			}
			if (GlobalFunc_226(&uLocal_1337))
			{
				if ((GlobalFunc_4981(&uLocal_1337) > fLocal_1242 && func_85()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_4935();
					if (!iLocal_1132)
					{
						iLocal_1132 = 1;
						iLocal_1176 = 1;
					}
					iLocal_1156 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_85()//Position - 0x3A3F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1048[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1048[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_1048[iVar0], 85, 1);
			if (PED::CAN_PED_SEE_HATED_PED(uLocal_1048[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1052[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1052[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_1052[iVar0], 85, 1);
			if (PED::CAN_PED_SEE_HATED_PED(uLocal_1052[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1045[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1045[iVar0], 85, 1);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_1045[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x3B47
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_87(int iParam0)//Position - 0x3BBF
{
	if (!bLocal_1179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044) && PED::IS_PED_INJURED(iLocal_1044))
		{
			if (!GlobalFunc_111())
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && GlobalFunc_5682(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1179 = true;
				}
			}
		}
	}
}

int func_88()//Position - 0x3C34
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1048[iVar1]) && !PED::IS_PED_INJURED(uLocal_1048[iVar1]))
		{
			iVar0 = uLocal_1048[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1052[iVar1]) && !PED::IS_PED_INJURED(uLocal_1052[iVar1]))
			{
				iVar0 = uLocal_1052[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045[iVar1]) && !PED::IS_PED_INJURED(iLocal_1045[iVar1]))
			{
				iVar0 = iLocal_1045[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_89()//Position - 0x3CF8
{
	func_96();
	if (!iLocal_1156)
	{
		if (!iLocal_1132)
		{
			if (func_90(&iLocal_1042))
			{
				iLocal_1132 = 1;
			}
		}
	}
}

int func_90(int iParam0)//Position - 0x3D20
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1132)
	{
		if (iLocal_1166 && !bLocal_1135)
		{
			if (func_95(&iLocal_1042))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(iLocal_1043, 4))
		{
			if (PED::IS_PED_SHOOTING(iLocal_1043))
			{
				fVar1 = GlobalFunc_2264(PLAYER::PLAYER_PED_ID(), -1230.599f, -196.5408f, 38.1528f, 1);
				WEAPON::GET_CURRENT_PED_WEAPON(iLocal_1043, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
					{
						iLocal_1156 = 1;
						iLocal_1154 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((GlobalFunc_5680(iLocal_1310) || func_93(iLocal_1310)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1310) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1310, iLocal_1043, 1)))
		{
			return 1;
		}
		if (GlobalFunc_5680(iLocal_1311) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1311) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1311, iLocal_1043, 1)))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310) && !ENTITY::IS_ENTITY_DEAD(iLocal_1310))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_1043, iLocal_1310, 0))
			{
				VEHICLE::SET_VEHICLE_ALARM(iLocal_1310, 1);
				VEHICLE::START_VEHICLE_ALARM(iLocal_1310);
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1043, 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1043, 0);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_1310) || (bLocal_1142 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1310)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_1029 == 12)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				if (GlobalFunc_156(iLocal_1043, iLocal_1310, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_1031[0] == 2 || iLocal_1031[1] == 2) || iLocal_1031[2] == 2)
		{
			if (func_92())
			{
				return 1;
			}
		}
		if (iLocal_1029 < 11)
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_1306, fLocal_1309))
			{
				return 1;
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_1306, fLocal_1309))
		{
			if (func_91())
			{
				iLocal_1186 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91()//Position - 0x3F80
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, 0, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_92()//Position - 0x3FF2
{
	int iVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x4056
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 3 && PED::GET_VEHICLE_PED_IS_ENTERING(iLocal_1043) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}


int func_95(int iParam0)//Position - 0x415C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
	{
		if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_1310, joaat("weapon_stickybomb"), -1))
		{
			if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_96()//Position - 0x41F0
{
	int iVar0;
	
	func_137();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1048[iVar0]))
		{
			if (iLocal_1132 && !bLocal_1165)
			{
				GlobalFunc_2282(uLocal_1048[iVar0], &(Local_1058[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1052[iVar0]))
		{
			if (iLocal_1132 && !bLocal_1165)
			{
				GlobalFunc_2282(uLocal_1052[iVar0], &(Local_1083[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045[iVar0]))
		{
			if (iLocal_1132 && !bLocal_1165)
			{
				GlobalFunc_2282(iLocal_1045[iVar0], &(Local_1100[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1045[iVar0]))
			{
				if (iLocal_1039[iVar0] == 4)
				{
					PED::SET_PED_RESET_FLAG(iLocal_1045[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1202 == 0)
	{
		func_134(0);
	}
	else if (iLocal_1202 == 1)
	{
		func_134(1);
	}
	else if (iLocal_1202 == 2)
	{
		if (iLocal_1029 >= 9)
		{
			func_123(0);
		}
	}
	else if (iLocal_1202 == 3)
	{
		if (iLocal_1029 >= 9)
		{
			func_123(1);
		}
	}
	else if (iLocal_1202 == 4)
	{
		if (iLocal_1029 >= 9)
		{
			func_123(2);
			func_122(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1202 == 5)
	{
		func_97(0);
		func_122(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1202 == 6)
	{
		func_97(1);
		func_122(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1202++;
	if (iLocal_1202 > 6)
	{
		iLocal_1202 = 0;
	}
	if (iLocal_1132)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1044))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1044, 120, 1);
		}
	}
}

void func_97(int iParam0)//Position - 0x441D
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	iVar0 = uLocal_1052[iParam0];
	switch (iLocal_1035[iParam0])
	{
		case 0:
			if (iLocal_1145)
			{
				iLocal_1035[iParam0] = 1;
			}
			else if (bLocal_1143)
			{
				iLocal_1035[iParam0] = 3;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1311, 0))
			{
				if (func_121())
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1311))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1311, -1) == uLocal_1052[iParam0])
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_1052[iParam0], iLocal_1311, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_1035[iParam0] = 2;
				}
				else
				{
					func_120(iParam0);
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1311, 0))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1311))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1311, 1) };
					uVar4 = ENTITY::GET_ENTITY_HEADING(iLocal_1311);
					iLocal_1145 = 0;
					iLocal_1035[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1311, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1052[iParam0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_1052[iParam0], iLocal_1311, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
					{
						if (!iLocal_1132)
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1311, -1) == uLocal_1052[iParam0])
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1052[iParam0], -1273030092) != 1)
								{
									TASK::TASK_VEHICLE_ESCORT(uLocal_1052[iParam0], iLocal_1311, iLocal_1310, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1311, -1) == uLocal_1052[iParam0])
						{
							if (!iLocal_1146)
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_1044))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
									}
									else
									{
										iLocal_1035[iParam0] = 8;
									}
								}
								else
								{
									TASK::TASK_VEHICLE_ESCORT(uLocal_1052[iParam0], iLocal_1311, iLocal_1310, -1, 45f, 786981, 10f, -1, 10f);
									TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iVar0, PLAYER::PLAYER_PED_ID());
									iLocal_1146 = 1;
								}
							}
						}
						else if (!bLocal_1162)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1052[iParam0], 780511057) != 1)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(iLocal_1311) < 5f)
									{
										iLocal_1035[iParam0] = 8;
									}
								}
								TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1052[iParam0], 780511057) != 1)
						{
							TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (!iLocal_1156)
					{
						iLocal_1035[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_226(&uLocal_1331))
			{
				GlobalFunc_6715(&uLocal_1331);
			}
			func_117(&(uLocal_1052[iParam0]));
			iLocal_1035[iParam0] = 5;
			break;
		
		case 5:
			if (!func_86(iLocal_1043))
			{
				if (GlobalFunc_4981(&uLocal_1331) >= 27f || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1043, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_116(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_120(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1035[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_1157)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
				if (!PED::IS_PED_INJURED(uLocal_1052[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1052[iParam0], uLocal_1322);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 1, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
				if (!PED::IS_PED_INJURED(uLocal_1052[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1052[iParam0], uLocal_1322);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
			}
			iLocal_1035[iParam0] = 7;
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(uLocal_1052[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1052[iParam0], 1435919172) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_1052[iParam0], iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 8:
			if (iLocal_1042 != 4 && iLocal_1042 != 5)
			{
				func_114(iVar0);
			}
			else
			{
				func_113(iVar0);
			}
			iLocal_1035[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1042 != 4)
				{
					func_112(iLocal_1311, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
			if (iLocal_1035[iParam0] != 6 && iLocal_1035[iParam0] != 7)
			{
				iLocal_1035[iParam0] = 6;
			}
		}
		else if (func_105(iVar0, iLocal_1311, &Local_359, &iLocal_370, 0, 0, 0, 1, 1) || func_104(iLocal_1311))
		{
			iVar5 = func_30(1116471296, 1);
			if (iVar5 != 0)
			{
				func_103(ENTITY::GET_ENTITY_COORDS(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1132 = 1;
			}
		}
		else if (!bLocal_1135)
		{
			if (func_101(iVar0, 10f))
			{
				if (iLocal_1035[iParam0] != 4 && iLocal_1035[iParam0] != 5)
				{
					if (!bLocal_1133)
					{
						GlobalFunc_5312(&Local_359, 4);
						iLocal_1035[iParam0] = 4;
					}
					else if (!func_86(iLocal_1043))
					{
						iLocal_1132 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
						{
							iLocal_1042 = 5;
						}
						iLocal_1035[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1311, 0))
		{
			if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1311, 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0)) || iLocal_1144) || !bLocal_1135)
			{
				if (iLocal_1035[iParam0] < 8)
				{
					iLocal_1035[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1035[iParam0] < 8)
		{
			iLocal_1035[iParam0] = 8;
		}
	}
	func_98(iVar0, uLocal_1123[iParam0]);
}

void func_98(int iParam0, var uParam1)//Position - 0x4AD0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(uParam1))
			{
				HUD::REMOVE_BLIP(&uParam1);
			}
		}
	}
}



int func_101(int iParam0, float fParam1)//Position - 0x4B1E
{
	if (!iLocal_1132)
	{
		if (!func_86(iLocal_1043))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_5682(iParam0, 0) <= fParam1)
					{
						if (PED::IS_PED_FACING_PED(iParam0, iLocal_1043, 120f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1043, 17))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1043, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(iParam0, iLocal_1043, 120f))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1043, 17))
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

int func_102()//Position - 0x4C33
{
	if (iLocal_1156 || bLocal_1157)
	{
		return 1;
	}
	return 0;
}

void func_103(struct<3> Param0, float fParam3, float fParam4)//Position - 0x4C4F
{
	int iVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1310))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1310) || iLocal_1186)
	{
		bLocal_1155 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
	{
		if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1044, joaat("weapon_sniperrifle"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1044, joaat("weapon_heavysniper"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1044, joaat("weapon_remotesniper"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1044, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_1154 = 1;
			iLocal_1030 = 1;
		}
	}
	if (iLocal_370 == 4 || iLocal_370 == 8)
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1310))
		{
			fParam3 = (fParam3 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_1132)
	{
		if ((iLocal_1154 || bLocal_1155) || iVar0)
		{
			fVar1 = GlobalFunc_2264(PLAYER::PLAYER_PED_ID(), Param0, 1);
			if (fVar1 > fParam3)
			{
				iLocal_1156 = 1;
				if (fVar1 > fParam4)
				{
					bLocal_1157 = true;
				}
			}
		}
	}
}

int func_104(int iParam0)//Position - 0x4D55
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
						if (fVar1 > 7f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iParam0, 1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x4DD6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!GlobalFunc_747(*uParam2, 1))
		{
			if (GlobalFunc_7075(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 4))
		{
			if (GlobalFunc_7074(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 8))
		{
			if (GlobalFunc_2266(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !GlobalFunc_747(*uParam2, 128);
		if (bParam4)
		{
			if (func_106(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_106(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x4EFE
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_355)
		{
			iLocal_356 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_355 = true;
		}
		iLocal_357 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_358 = (iLocal_356 - iLocal_357);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_358) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_355)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_358) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (GlobalFunc_2265(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && GlobalFunc_5682(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}






void func_112(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x537A
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_156(iParam1, iParam0, 0) > fParam2 && GlobalFunc_5682(iParam1, 1) < fParam3)
				{
					if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 6, 35f, 786469, -1f, -1f, 1);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
			{
				if (GlobalFunc_5682(iParam1, 1) > fParam4)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 35f, 786469, -1f, -1f, 1);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
		{
			TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
}

void func_113(int iParam0)//Position - 0x54E1
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_1043) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
		}
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_1043, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_114(int iParam0)//Position - 0x5545
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1043))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1043, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			TASK::TASK_COMBAT_PED(0, iLocal_1043, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_1322);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
		}
		else if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 780511057) != 1)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::TASK_COMBAT_PED(iParam0, iLocal_1043, 0, 16);
			}
		}
	}
}

Vector3 func_115()//Position - 0x55E7
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	switch (iVar3)
	{
		case 0:
			Var0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			Var0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			Var0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return Var0;
}

void func_116(int iParam0, struct<3> Param1)//Position - 0x565B
{
	if (!iLocal_1132)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1043, iParam0, Param1, 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, iLocal_1043, 160f))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1043, 17))
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
						iLocal_1042 = 5;
						iLocal_1132 = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
		}
	}
}

void func_117(int iParam0)//Position - 0x5701
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_1055 == 0)
	{
		iLocal_1055 = func_30(70f, 0);
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
		{
			if (!iLocal_1134)
			{
				if (*iParam0 == iLocal_1055)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_ENTITY(0, iLocal_1043, 20000, 2f, 1f, 1073741824, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_1043, -1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_1134 = 1;
					Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 1227113341) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_1043, -1);
				}
			}
			else if (*iParam0 != iLocal_1055)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 1227113341) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_1043, -1);
				}
			}
		}
		PED::SET_PED_CAN_BE_TARGETTED(*iParam0, 1);
		func_118();
	}
}

void func_118()//Position - 0x57E8
{
	int iVar0;
	
	if (!iLocal_1136)
	{
		if (!bLocal_1147)
		{
			if (!GlobalFunc_111())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_119())
				{
					GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1136 = 1;
				}
				else
				{
					GlobalFunc_10630(&uLocal_1362, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1136 = 1;
				}
			}
		}
	}
}

int func_119()//Position - 0x5859
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1310))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1310, 1) };
		}
		fVar6 = SYSTEM::VDIST2(Var0, Var3);
		if (fVar6 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_120(int iParam0)//Position - 0x58AF
{
	int iVar0;
	
	bLocal_1133 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1052[iParam0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1311, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_1052[iParam0], iLocal_1311, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1052[iParam0], -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(uLocal_1052[iParam0], iLocal_1311, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_121()//Position - 0x592B
{
	if (!PED::IS_PED_INJURED(uLocal_1052[0]) && !PED::IS_PED_INJURED(uLocal_1052[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(uLocal_1052[0], iLocal_1311, 0) && PED::IS_PED_IN_VEHICLE(uLocal_1052[1], iLocal_1311, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_122(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x597A
{
	if (!iLocal_1132)
	{
		if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param3, fParam6, joaat("weapon_stickybomb"), 0))
		{
			iLocal_1132 = 1;
		}
	}
}

void func_123(int iParam0)//Position - 0x59A4
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_1048[iParam0];
	switch (iLocal_1031[iParam0])
	{
		case 0:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_1266[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				TASK::TASK_ACHIEVE_HEADING(0, fLocal_1219[iParam0], 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, uLocal_1322);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
				iLocal_1031[iParam0] = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (!bLocal_1167)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2017877118) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503) != 1)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_1266[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_131(iVar0, &(uLocal_1194[iParam0]), 1);
							}
							else
							{
								iLocal_1031[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_226(&uLocal_1331))
			{
				GlobalFunc_6715(&uLocal_1331);
				func_117(&iVar0);
				iLocal_1031[iParam0] = 2;
			}
			else if (GlobalFunc_4981(&uLocal_1331) > uLocal_1225[iParam0] || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_117(&iVar0);
				iLocal_1031[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_86(iLocal_1043))
			{
				iLocal_1160 = 1;
				if (bLocal_1159)
				{
					iLocal_1031[iParam0] = 4;
					break;
				}
				else if (GlobalFunc_4981(&uLocal_1331) >= 27f && iLocal_1136)
				{
					func_116(iVar0, 15f, 15f, 3f);
				}
				else if (GlobalFunc_4981(&uLocal_1331) >= 15f)
				{
					func_129(iVar0);
				}
			}
			else
			{
				iLocal_1160 = 0;
				bLocal_1133 = true;
				if (!bLocal_1153)
				{
					iLocal_1031[iParam0] = 0;
				}
				else
				{
					iLocal_1031[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, 1);
				PED::SET_PED_RESET_FLAG(iVar0, 60, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_1048[0], uLocal_1048[1], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1310, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1310, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_1048[1], uLocal_1048[0], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1310, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1310, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1311, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1311, 0))
							{
								TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1311, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_1031[iParam0] = 5;
			}
			else
			{
				iLocal_1031[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 60, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_1048[iParam0], uLocal_1048[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_1048[iParam0], uLocal_1048[0], -1, 2048, 4);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				if (!func_127())
				{
					if (iLocal_1132)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 780511057) != 1)
							{
								if (GlobalFunc_115(uLocal_1048[0]))
								{
									TASK::TASK_CLEAR_LOOK_AT(uLocal_1048[0]);
								}
								if (GlobalFunc_115(uLocal_1048[1]))
								{
									TASK::TASK_CLEAR_LOOK_AT(uLocal_1048[1]);
								}
								TASK::TASK_COMBAT_PED(iVar0, iLocal_1043, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1031[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1031[iParam0] = 10;
			}
			if (bLocal_1148)
			{
				if (iLocal_1031[iParam0] != 10 && iLocal_1031[iParam0] != 11)
				{
					iLocal_1031[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_1132)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1310, -1) == iVar0)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1310, 1, 1);
							if (func_125())
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1310, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1310, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_1031[iParam0] = 7;
				}
			}
			else
			{
				if (GlobalFunc_115(uLocal_1048[0]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_1048[0]);
				}
				if (GlobalFunc_115(uLocal_1048[1]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_1048[1]);
				}
				iLocal_1031[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1132)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1310, -1) == iVar0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1310, 1) == iLocal_1044)
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (bLocal_1147 || (iLocal_1161 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1310)))
						{
							TASK::CLEAR_PED_TASKS(iVar0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
									{
										TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_1310, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
								{
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, iLocal_1310, PLAYER::PLAYER_PED_ID(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(iVar0, iLocal_1043, 0, 16);
					}
				}
			}
			else if (bLocal_1147 || (iLocal_1161 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1310)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1310, -1) == iVar0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, iLocal_1310, Local_1288, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_1157)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1048[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1048[iParam0], uLocal_1322);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 1, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1048[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1048[iParam0], uLocal_1322);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
			}
			iLocal_1031[iParam0] = 9;
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(uLocal_1048[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1048[iParam0], 1435919172) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_1048[iParam0], iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 10:
			if (iLocal_1042 == 4 || iLocal_1042 == 5)
			{
				func_113(iVar0);
			}
			else if (iLocal_1042 != 8)
			{
				func_114(iVar0);
				iLocal_1031[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_112(iLocal_1310, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (iLocal_1029 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1232;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
			if (iLocal_1031[iParam0] != 8 && iLocal_1031[iParam0] != 9)
			{
				iLocal_1031[iParam0] = 8;
			}
		}
		else if (func_124(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_103(ENTITY::GET_ENTITY_COORDS(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1132 = 1;
			}
		}
		else if (!bLocal_1135)
		{
			if (func_101(iVar0, fVar1))
			{
				if ((iLocal_1031[iParam0] != 3 && iLocal_1031[iParam0] != 2) && !bLocal_1159)
				{
					if (!bLocal_1133)
					{
						GlobalFunc_5312(&Local_359, 4);
						iLocal_1031[iParam0] = 3;
					}
					else if (!func_86(iLocal_1043))
					{
						iLocal_1132 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
						{
							iLocal_1042 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1031[iParam0] != 10 && iLocal_1031[iParam0] != 11) && iLocal_1031[iParam0] != 7)
	{
		iLocal_1031[iParam0] = 10;
	}
	func_98(iVar0, uLocal_1119[iParam0]);
}

int func_124(int iParam0)//Position - 0x62D6
{
	int iVar0;
	
	if (!iLocal_1132)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_105(iParam0, iVar0, &Local_359, &iLocal_370, 0, 0, 0, 1, 1) || (PED::IS_PED_RAGDOLL(iParam0) && GlobalFunc_5682(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_125()//Position - 0x634A
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1210 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar1);
	uLocal_1210 = uLocal_1210;
	uLocal_1210 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, 1, 0))
			{
				iLocal_1209++;
			}
		}
		iVar0++;
	}
	if (iLocal_1209 >= 1)
	{
		iLocal_1161 = 1;
		return 1;
	}
	return 0;
}


int func_127()//Position - 0x640E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_1044))
		{
			if (!iLocal_1132)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_1044, iLocal_1310, 0) && func_128())
				{
					return 1;
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iLocal_1044, iLocal_1310, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128()//Position - 0x6464
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1045[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1045[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_129(int iParam0)//Position - 0x64A5
{
	switch (iLocal_1206)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1136 = 1;
				iLocal_1206 = 1;
			}
			break;
		
		case 1:
			func_130(iParam0);
			break;
	}
}

void func_130(int iParam0)//Position - 0x6518
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (GlobalFunc_5682(iParam0, 1) < 5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_1043, -1, 0);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_1055)
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_1043, -1, 0);
			}
		}
	}
}

void func_131(int iParam0, var uParam1, bool bParam2)//Position - 0x65B5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam2)
		{
			func_132(iParam0, uParam1);
		}
	}
}

void func_132(int iParam0, var uParam1)//Position - 0x65D4
{
	int iVar0;
	
	iVar0 = func_133(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0x66A9
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	}
	return iVar0;
}

void func_134(int iParam0)//Position - 0x66F1
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1045[iParam0]))
	{
		return;
	}
	switch (iLocal_1039[iParam0])
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1044))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1044, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_1045[iParam0]))
					{
						if (iParam0 == 0)
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_1045[iParam0], iLocal_1044, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1311, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar2);
								TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_1311, 30000, 2, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar2);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_1045[iParam0], uVar2);
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
							}
						}
						iLocal_1039[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1310;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1311;
				iVar1 = 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1045[iParam0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1045[iParam0]))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_1045[iParam0], iVar0, 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1044, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1045[iParam0], -1794415470) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_1045[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_1039[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1310;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1311;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1045[iParam0]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1045[iParam0], iVar0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
					{
						if (iLocal_1132)
						{
							if (!bLocal_1162)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1045[iParam0], 780511057) != 1)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
										{
											iLocal_1039[iParam0] = 5;
										}
									}
									TASK::TASK_COMBAT_PED(iLocal_1045[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1045[iParam0], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(iLocal_1045[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (!iLocal_1156)
					{
						iLocal_1039[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_1045[iParam0]))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_1045[iParam0]))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_1045[iParam0]);
				}
			}
			if (bLocal_1157)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1045[iParam0], uLocal_1322);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
			}
			else if (!PED::IS_PED_INJURED(iLocal_1045[iParam0]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1045[iParam0], Local_1303, 15f, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_1045[iParam0], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1045[iParam0], 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1045[iParam0], 2f);
				if (!iLocal_1129 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_1045[iParam0], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
					if (PED::IS_PED_INJURED(iLocal_1044))
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), 3000, 0, 1);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_1044, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
					iLocal_1129 = 1;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
					{
						Var4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1310, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1310, "wheel_lr")) };
						Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_1310, 1) };
						Var7 = { Var4 - Var7 };
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_1045[iParam0], iLocal_1310, Var7, 1.5f, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					if (PED::IS_PED_INJURED(iLocal_1044) && !GlobalFunc_100(GlobalFunc_649(), Var4))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var4, func_115(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Var4, -1, 0, 0.25f, 0, 0, 0, 1);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), 1500, 1, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1044))
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_1044, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1045[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1045[iParam0], uLocal_1322);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
			}
			iLocal_1039[iParam0] = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1045[iParam0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1310;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1311;
			}
			if (!PED::IS_PED_INJURED(iLocal_1044))
			{
				if (!PED::IS_PED_INJURED(iLocal_1045[iParam0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1044, 0))
					{
						TASK::TASK_COMBAT_PED(iLocal_1045[iParam0], iLocal_1043, 0, 16);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1045[iParam0], iLocal_1044, PLAYER::PLAYER_PED_ID(), 3f, 1, 0.005f, 1082130432, 1, 0, -957453492);
					}
				}
				iLocal_1039[iParam0] = 6;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
				{
					func_114(iLocal_1045[iParam0]);
					iLocal_1039[iParam0] = 6;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1045[iParam0], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(iLocal_1045[iParam0], iLocal_1043, 0, 16);
				}
			}
			else
			{
				func_114(iLocal_1045[iParam0]);
				iLocal_1039[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1045[iParam0]);
			func_87(iLocal_1045[iParam0]);
			break;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
			if (iLocal_1039[iParam0] != 3 && iLocal_1039[iParam0] != 4)
			{
				iLocal_1039[iParam0] = 3;
			}
		}
		else if (func_124(iLocal_1045[iParam0]))
		{
			iLocal_1132 = 1;
		}
	}
	else if (iLocal_1039[iParam0] < 5)
	{
		if (!PED::IS_PED_INJURED(iLocal_1045[iParam0]))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_1045[iParam0]))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_1045[iParam0]);
			}
			TASK::TASK_CLEAR_DEFENSIVE_AREA(iLocal_1045[iParam0]);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_1045[iParam0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1045[iParam0], 13, 1);
		}
		iLocal_1039[iParam0] = 5;
	}
}



void func_137()//Position - 0x6F9A
{
	var uVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
	{
		Local_1303 = { ENTITY::GET_ENTITY_COORDS(iLocal_1044, 0) };
	}
	switch (iLocal_1038)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1044))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_1048[0]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_1044, iLocal_1310, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1044, -1794415470) != 1)
						{
							if (!iLocal_1132 && !iLocal_1156)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_1044, iLocal_1310, 30000, 1, 1f, 1, 0);
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_1044, iLocal_1310, 30000, 1, 2f, 1, 0);
							}
							if (!GlobalFunc_226(&uLocal_1340))
							{
								GlobalFunc_7731(&uLocal_1340);
							}
							else
							{
								GlobalFunc_6715(&uLocal_1340);
							}
						}
						if (!iLocal_1158)
						{
							if (GlobalFunc_226(&uLocal_1340))
							{
								if (GlobalFunc_4981(&uLocal_1340) > 3.5f)
								{
									if (!PED::IS_PED_INJURED(iLocal_1044))
									{
										GlobalFunc_173(&uLocal_1362, 4, iLocal_1044, "OJAva_TARGET", 0, 1);
										if (GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_1158 = 1;
										}
									}
								}
							}
						}
						if (func_140(iLocal_1044))
						{
							GlobalFunc_4935();
							iLocal_1038 = 4;
						}
					}
					else
					{
						bLocal_1135 = true;
						iLocal_1038 = 1;
					}
				}
				else
				{
					iLocal_1038 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_1158)
			{
				if (!PED::IS_PED_INJURED(iLocal_1044))
				{
					GlobalFunc_173(&uLocal_1362, 4, iLocal_1044, "OJAva_TARGET", 0, 1);
					if (GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_1158 = 1;
					}
				}
			}
			if (!iLocal_1177)
			{
				if (func_139())
				{
					if (GlobalFunc_156(iLocal_1044, PLAYER::PLAYER_PED_ID(), 1) <= 5f && !GlobalFunc_111())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_138())
							{
								iLocal_1177 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1044))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_1044, iLocal_1310, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1044, -828834893) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_1044, 0, 256);
					}
				}
				else if (!bLocal_1162)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1044, 2f);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_1043, 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1044))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1044, uVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					bLocal_1162 = true;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1044, 1435919172) != 1)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_1044, iLocal_1043, 200f, -1, 0, 0);
				}
				if (!iLocal_1177)
				{
					if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1177 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
		}
		else if (func_124(iLocal_1044) || iLocal_1186)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_103(ENTITY::GET_ENTITY_COORDS(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1132 = 1;
			}
		}
	}
}

int func_138()//Position - 0x72BD
{
	switch (iLocal_1212)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				GlobalFunc_10630(&uLocal_1362, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				GlobalFunc_6715(&uLocal_1340);
				iLocal_1212++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_111() && GlobalFunc_4981(&uLocal_1340) > 7f)
			{
				GlobalFunc_10630(&uLocal_1362, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				GlobalFunc_6715(&uLocal_1340);
				iLocal_1212++;
			}
			break;
		
		case 2:
			if (!GlobalFunc_111() && GlobalFunc_4981(&uLocal_1340) > 8f)
			{
				GlobalFunc_10630(&uLocal_1362, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_139()//Position - 0x7388
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1310, -1);
		if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1310, 0);
			if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1310, 2);
				if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x7412
{
	var uVar0;
	
	if ((iLocal_1132 || iLocal_1156) || bLocal_1157)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (GlobalFunc_111())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (!bLocal_1162)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_1043, 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1044))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1044, uVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					bLocal_1162 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_141()//Position - 0x74C2
{
	if (!iLocal_1163)
	{
		if (iLocal_1029 > 15)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
			iLocal_1163 = 1;
		}
	}
	if (!iLocal_1164)
	{
		if (iLocal_1132 && !GlobalFunc_111())
		{
			func_411();
			iLocal_1164 = 1;
			if (!iLocal_1163)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
				iLocal_1163 = 1;
			}
		}
	}
	func_410();
	switch (iLocal_1029)
	{
		case 3:
			if (GlobalFunc_Is_Mission_Retry())
			{
				iLocal_1029 = 4;
				break;
			}
			func_409();
			func_407();
			break;
		
		case 4:
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_7698())
				{
					iLocal_1151 = 1;
				}
				bLocal_1140 = true;
			}
			func_406();
			func_405();
			func_404();
			func_403(1);
			func_402();
			GlobalFunc_5211(&Local_359, 2);
			iLocal_1029 = 5;
			break;
		
		case 5:
			if (func_401())
			{
				iLocal_1029 = 6;
			}
			break;
		
		case 6:
			func_400();
			func_399();
			if (bLocal_1140)
			{
				if (Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_HotelMissionTime != 0f)
				{
					GlobalFunc_4987(&uLocal_1334, Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_HotelMissionTime);
				}
				iLocal_1207 = GlobalFunc_Get_Mission_Fail_Checkpoint();
				if (Global_84544)
				{
					if (iLocal_1207 <= 2)
					{
						iLocal_1207++;
					}
				}
				if (iLocal_1207 == 0)
				{
					func_398();
				}
				else if (iLocal_1207 == 1)
				{
					func_397();
				}
				else if (iLocal_1207 == 2)
				{
					func_393();
				}
			}
			else
			{
				if (!GlobalFunc_226(&uLocal_1334))
				{
					GlobalFunc_7731(&uLocal_1334);
					Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_HotelMissionTime = 0f;
				}
				iLocal_1029 = 7;
			}
			break;
		
		case 7:
			func_387();
			func_372();
			break;
		
		case 8:
			func_340();
			break;
		
		case 9:
			func_387();
			func_339();
			func_259();
			break;
		
		case 10:
			func_339();
			func_255();
			break;
		
		case 11:
			func_241();
			func_240();
			break;
		
		case 12:
			func_239();
			func_240();
			break;
		
		case 13:
			func_235();
			func_240();
			break;
		
		case 15:
			func_233();
			break;
		
		case 16:
			func_230();
			break;
		
		case 17:
			func_224();
			break;
		
		case 18:
			func_142();
			break;
	}
}

void func_142()//Position - 0x76E2
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_143();
}

void func_143()//Position - 0x76F6
{
	func_223();
	switch (iLocal_1213)
	{
		case 0:
			if (!iLocal_376)
			{
				if (iLocal_1030 == 1)
				{
					bLocal_374 = true;
					GlobalFunc_7071();
				}
				Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_HotelMissionTime = GlobalFunc_4981(&uLocal_1334);
				fLocal_371 = Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_HotelMissionTime;
				func_215();
				iLocal_376 = 1;
				iLocal_1213 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1185)
			{
				AUDIO::PLAY_MISSION_COMPLETE_AUDIO("FRANKLIN_BIG_01");
				iLocal_1185 = 1;
			}
			if (GlobalFunc_7082(&uLocal_387, 1, 0) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
			{
				GlobalFunc_5210(&uLocal_1539, 0, 0, 0, 1);
				GlobalFunc_813(&uLocal_1539, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				GlobalFunc_813(&uLocal_1539, "ES_XPAND", 2, 216, 1, 1, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_1213 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_9142(&uLocal_387, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1183 = true;
			}
			if (!bLocal_1183)
			{
				func_178(&uLocal_1539, 1128792064, 1, 0, 1, 1065353216);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
			{
				if (!bLocal_1183)
				{
					bLocal_1183 = true;
					GlobalFunc_2252(&uLocal_387);
				}
			}
			if (bLocal_1183)
			{
				if (GlobalFunc_9142(&uLocal_387, 0, 1065353216, 0, 0, 0))
				{
					GlobalFunc_5674(&uLocal_387);
					Global_SAVE_DATA.ASSASSIN_iCurRank++;
					GlobalFunc_7069();
					GlobalFunc_10952(Local_56);
					GlobalFunc_5103(0, 0);
					GlobalFunc_7068();
					func_470();
				}
			}
			break;
	}
}



































void func_178(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x8BBE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
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
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
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
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							GlobalFunc_257(sVar3);
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





































void func_215()//Position - 0xB484
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_376)
	{
		GlobalFunc_2263(&uLocal_387, &Local_963, &Global_54765, 0);
		fLocal_371 = (fLocal_371 * 1000f);
		if (Global_84544)
		{
			GlobalFunc_2262(&uLocal_387, 6, &(Local_963.f_12), "MTPHPERSKI", SYSTEM::FLOOR(fLocal_371), 0, 3, 0);
			GlobalFunc_2262(&uLocal_387, 6, &(Local_963.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			GlobalFunc_2262(&uLocal_387, 6, &(Local_963.f_30), "MTPHPERSKI", SYSTEM::ROUND((fLocal_373 + fLocal_372)), 0, 3, 0);
			GlobalFunc_141();
		}
		else
		{
			if (bLocal_375)
			{
				GlobalFunc_2262(&uLocal_387, 6, &(Local_963.f_12), "MTPHPERRET", SYSTEM::FLOOR(fLocal_371), 0, 3, 0);
			}
			else
			{
				GlobalFunc_2262(&uLocal_387, 9, &(Local_963.f_12), "", SYSTEM::FLOOR(fLocal_371), 0, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_963.f_18)))
			{
				if (bLocal_374)
				{
					GlobalFunc_2262(&uLocal_387, 6, &(Local_963.f_24), "", 0, 0, 2, 0);
					GlobalFunc_2262(&uLocal_387, 3, &(Local_963.f_30), "", SYSTEM::ROUND((fLocal_373 + fLocal_372)), 0, 2, 0);
				}
				else
				{
					GlobalFunc_2262(&uLocal_387, 6, &(Local_963.f_24), "", 0, 0, 1, 0);
					GlobalFunc_2262(&uLocal_387, 3, &(Local_963.f_30), "", SYSTEM::ROUND(fLocal_372), 0, 0, 0);
				}
			}
			else
			{
				GlobalFunc_2262(&uLocal_387, 3, &(Local_963.f_30), "", SYSTEM::ROUND(fLocal_372), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_84544)
		{
			iVar1 = 0;
			while (iVar1 < Global_66845)
			{
				if (Global_66846[iVar1 /*9*/] >= 0 && !Global_54975[Global_66846[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_66846[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_382 = 50;
			iLocal_383 = 1;
			GlobalFunc_2261(&uLocal_387, 1, &(Local_963.f_48), iLocal_382, 0, 0, 1);
		}
		else if (bLocal_374)
		{
			if (bLocal_375)
			{
				iLocal_382 = 75;
				iLocal_383 = 2;
				GlobalFunc_2261(&uLocal_387, 1, &(Local_963.f_42), iLocal_382, 0, 0, 2);
			}
			else
			{
				iLocal_382 = 100;
				iLocal_383 = 3;
				GlobalFunc_2261(&uLocal_387, 1, &(Local_963.f_36), iLocal_382, 0, 0, 3);
			}
		}
		else if (!bLocal_374 && !bLocal_375)
		{
			iLocal_382 = 75;
			iLocal_383 = 2;
			GlobalFunc_2261(&uLocal_387, 1, &(Local_963.f_42), iLocal_382, 0, 0, 2);
		}
		else
		{
			iLocal_382 = 50;
			iLocal_383 = 1;
			GlobalFunc_2261(&uLocal_387, 1, &(Local_963.f_48), iLocal_382, 0, 0, 1);
		}
		func_216();
		iLocal_376 = 1;
	}
}

void func_216()//Position - 0xB6F0
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 1)
	{
		GlobalFunc_565(38, SYSTEM::FLOOR(fLocal_371), 1);
		if (bLocal_374)
		{
			GlobalFunc_565(39, 1, 1);
		}
		else
		{
			GlobalFunc_565(39, 0, 1);
		}
		if (bLocal_374)
		{
			GlobalFunc_565(40, SYSTEM::ROUND((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			GlobalFunc_565(40, SYSTEM::ROUND(fLocal_372), 1);
		}
		GlobalFunc_565(41, iLocal_382, 1);
		GlobalFunc_565(42, iLocal_383, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_multi")) == 1)
	{
		GlobalFunc_565(52, SYSTEM::FLOOR(fLocal_371), 1);
		if (bLocal_374)
		{
			GlobalFunc_565(53, 1, 1);
		}
		else
		{
			GlobalFunc_565(53, 0, 1);
		}
		if (bLocal_374)
		{
			GlobalFunc_565(56, SYSTEM::ROUND((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			GlobalFunc_565(56, SYSTEM::ROUND(fLocal_372), 1);
		}
		GlobalFunc_565(54, iLocal_382, 1);
		GlobalFunc_565(55, iLocal_383, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_hooker")) == 1)
	{
		GlobalFunc_565(66, SYSTEM::FLOOR(fLocal_371), 1);
		if (bLocal_374)
		{
			GlobalFunc_565(67, 1, 1);
		}
		else
		{
			GlobalFunc_565(67, 0, 1);
		}
		if (bLocal_374)
		{
			GlobalFunc_565(68, SYSTEM::ROUND((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			GlobalFunc_565(68, SYSTEM::ROUND(fLocal_372), 1);
		}
		GlobalFunc_565(69, iLocal_382, 1);
		GlobalFunc_565(70, iLocal_383, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_bus")) == 1)
	{
		GlobalFunc_565(81, SYSTEM::FLOOR(fLocal_371), 1);
		if (bLocal_374)
		{
			GlobalFunc_565(82, 1, 1);
		}
		else
		{
			GlobalFunc_565(82, 0, 1);
		}
		if (bLocal_374)
		{
			GlobalFunc_565(83, SYSTEM::ROUND((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			GlobalFunc_565(83, SYSTEM::ROUND(fLocal_372), 1);
		}
		GlobalFunc_565(84, iLocal_382, 1);
		GlobalFunc_565(85, iLocal_383, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_construction")) == 1)
	{
		GlobalFunc_565(97, SYSTEM::FLOOR(fLocal_371), 1);
		if (bLocal_374)
		{
			GlobalFunc_565(98, 1, 1);
		}
		else
		{
			GlobalFunc_565(98, 0, 1);
		}
		if (bLocal_374)
		{
			GlobalFunc_565(99, SYSTEM::ROUND((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			GlobalFunc_565(99, SYSTEM::ROUND(fLocal_372), 1);
		}
		GlobalFunc_565(100, iLocal_382, 1);
		GlobalFunc_565(101, iLocal_383, 1);
	}
}







void func_223()//Position - 0xBADB
{
	int iVar0;
	
	if (!bLocal_1173)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0))
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("ASS1_LOST"))
						{
							bLocal_1173 = true;
						}
					}
				}
			}
		}
	}
}

void func_224()//Position - 0xBB3A
{
	float fVar0;
	
	if (!iLocal_1170)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_164("ASS_VA_GO", 7500, -1);
				iLocal_1170 = 1;
			}
		}
	}
	GlobalFunc_10860(&iLocal_1182, &uLocal_1362, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1191)
	{
		case 0:
			iLocal_1191++;
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = GlobalFunc_2264(PLAYER::PLAYER_PED_ID(), Local_1297, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_1165 = true;
					func_226();
					iLocal_1191++;
				}
				else
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			break;
		
		case 2:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_223();
					if (func_225())
					{
						iLocal_1029 = 18;
					}
				}
			}
			else if (!iLocal_1181)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_164("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1191++;
						iLocal_1181 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_1191 = 2;
			}
			break;
	}
}

int func_225()//Position - 0xBC75
{
	if (bLocal_1173)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
		iLocal_1174 = 1;
	}
	func_226();
	return 1;
}

void func_226()//Position - 0xBC98
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_1045[iVar0]))
			{
				GlobalFunc_589(&(Local_1100[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_1045[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1045[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
	{
		if (!PED::IS_PED_INJURED(iLocal_1044))
		{
			TASK::CLEAR_PED_TASKS(iLocal_1044);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1044);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1048[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_1048[iVar0]))
			{
				GlobalFunc_589(&(Local_1058[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(uLocal_1048[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1048[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1052[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_1052[iVar0]))
			{
				GlobalFunc_589(&(Local_1083[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(uLocal_1052[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1052[iVar0]));
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1323);
}




void func_230()//Position - 0xBE6E
{
	GlobalFunc_10860(&iLocal_1182, &uLocal_1362, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1191)
	{
		case 0:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!iLocal_1181)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_164("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1191++;
							iLocal_1181 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_1170)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_164("ASS_VA_GO", 7500, -1);
							iLocal_1191++;
							iLocal_1170 = 1;
						}
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1191++;
			}
			break;
		
		case 1:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_30(125f, 1) == 0)
			{
				func_223();
				func_226();
				func_232(1);
				func_231();
				iLocal_1191++;
			}
			break;
		
		case 2:
			func_223();
			iLocal_1029 = 18;
			break;
	}
}

void func_231()//Position - 0xBF94
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1310, 1);
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1310);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1311))
		{
			if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1311) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1311)) && !CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1311);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1052[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1052[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1311))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_1052[0], iLocal_1311, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1052[0]);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1052[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1052[1]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1311))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_1052[1], iLocal_1311, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1052[1]);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1311, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1311);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1314[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1314[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1314[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1314[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1317) && !ENTITY::IS_ENTITY_DEAD(iLocal_1317))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1317) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1317, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1317);
		}
	}
}

void func_232(bool bParam0)//Position - 0xC115
{
	int iVar0;
	
	if (bParam0)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_1118))
		{
			HUD::REMOVE_BLIP(&uLocal_1118);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_1119[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_1119[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_1123[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_1123[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_1123[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_1123[iVar0]));
		}
		iVar0++;
	}
}

void func_233()//Position - 0xC1B4
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1291, Local_1294, fLocal_1241, 1, 0, 0))
	{
		bLocal_1150 = true;
	}
	else
	{
		bLocal_1150 = false;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1118))
	{
		HUD::REMOVE_BLIP(&uLocal_1118);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	if (bLocal_1150)
	{
		func_234();
		iLocal_1029 = 17;
	}
	else
	{
		func_234();
		iLocal_1029 = 16;
	}
	GlobalFunc_4948(&uLocal_1527, 0, 0);
}

void func_234()//Position - 0xC220
{
	iLocal_1191 = 0;
}

void func_235()//Position - 0xC22C
{
	if (!bLocal_1147)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1310, 3);
				if (func_237(iLocal_1310, 5f))
				{
					bLocal_1147 = true;
				}
			}
		}
	}
	if (!iLocal_1144)
	{
		if (func_236(iLocal_1310, 10000))
		{
			iLocal_1144 = 1;
		}
	}
}

int func_236(int iParam0, int iParam1)//Position - 0xC27F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, iParam1) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, float fParam1)//Position - 0xC2CF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (GlobalFunc_713(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}


void func_239()//Position - 0xC33A
{
	switch (iLocal_1191)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				if (func_127())
				{
					if (!PED::IS_PED_INJURED(uLocal_1048[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(uLocal_1048[0], iLocal_1310, 0))
							{
								bLocal_1143 = true;
								func_234();
								iLocal_1029 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_240()//Position - 0xC39C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044))
	{
		if (PED::IS_PED_INJURED(iLocal_1044))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_1044))
			{
				bLocal_1148 = true;
				if (HUD::DOES_BLIP_EXIST(uLocal_1118))
				{
					HUD::REMOVE_BLIP(&uLocal_1118);
				}
				func_103(Local_1303, 1097859072, 1116471296);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
			func_234();
			iLocal_1029 = 15;
		}
	}
}

void func_241()//Position - 0xC3FE
{
	func_232(0);
	func_248();
	func_246();
	func_243();
	func_242();
	GlobalFunc_164("ASS_VA_KILL", 7500, -1);
	SYSTEM::SETTIMERA(0);
	bLocal_1159 = true;
	func_234();
	iLocal_1029 = 12;
}

void func_242()//Position - 0xC439
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1325);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1326);
}

void func_243()//Position - 0xC44F
{
	func_245(&(Local_1689.f_4));
	func_244(&(Local_1689[0]));
	func_244(&(Local_1689[1]));
	func_244(&(Local_1689.f_8[0]));
	func_244(&(Local_1689.f_8[1]));
	func_244(&(Local_1689.f_5[0]));
	func_244(&(Local_1689.f_5[1]));
	func_244(&(Local_1689.f_3));
}

void func_244(var uParam0)//Position - 0xC4AD
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*uParam0))
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_245(var uParam0)//Position - 0xC4D8
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*uParam0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_246()//Position - 0xC4FA
{
	struct<3> Var0[2];
	struct<3> Var7;
	var uVar10;
	int iVar11;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1044) && !ENTITY::IS_ENTITY_DEAD(iLocal_1044))
	{
		Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_1044, 1) };
		uVar10 = ENTITY::GET_ENTITY_HEADING(iLocal_1044);
	}
	Var0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var7, uVar10, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var7, uVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1045[iVar11] = PED::CREATE_PED(26, iLocal_1325, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1237[iLocal_1200], 1, 1);
		}
		else
		{
			iLocal_1045[iVar11] = PED::CREATE_PED(26, iLocal_1326, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1237[iLocal_1200], 1, 1);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1045[iVar11], 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_1045[iVar11]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1045[iVar11], 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1045[iVar11], 23, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1045[iVar11], 30, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1045[iVar11], 13, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_1045[iVar11], 2);
		PED::SET_PED_KEEP_TASK(iLocal_1045[iVar11], 1);
		func_247(iLocal_1045[iVar11], 1);
		PED::SET_PED_TO_LOAD_COVER(iLocal_1045[iVar11], 1);
		iVar11++;
	}
}

void func_247(int iParam0, bool bParam1)//Position - 0xC64D
{
	if (iParam0 != iLocal_1044)
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, 1);
	}
	else
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 1);
	}
	PED::SET_PED_ACCURACY(iParam0, 60);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
	PED::SET_PED_AS_ENEMY(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_1330);
}

void func_248()//Position - 0xC6B9
{
	func_250();
	iLocal_1200 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_1193);
	iLocal_1044 = PED::CREATE_PED(26, iLocal_1323, Local_1256[iLocal_1200 /*3*/], uLocal_1237[iLocal_1200], 1, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1044, 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_1044);
	func_247(iLocal_1044, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1323);
	if (!HUD::DOES_BLIP_EXIST(uLocal_1118))
	{
		uLocal_1118 = GlobalFunc_5681(iLocal_1044, 0, 0);
	}
	HUD::SET_BLIP_SCALE(uLocal_1118, 1f);
}


void func_250()//Position - 0xC7D1
{
	int iVar0;
	
	iLocal_1193 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_1246[iVar0 /*3*/], 5f) && !func_254(iVar0, 6f))
		{
			Local_1256[iLocal_1193 /*3*/] = { Local_1246[iVar0 /*3*/] };
			uLocal_1237[iLocal_1193] = fLocal_1233[iVar0];
			iLocal_1193++;
		}
		iVar0++;
	}
	if (iLocal_1193 == 0)
	{
		if (func_91())
		{
			Local_1256[0 /*3*/] = { Local_1246[1 /*3*/] };
			uLocal_1237[0] = fLocal_1233[1];
			iLocal_1193++;
		}
		else if (func_253())
		{
			Local_1256[0 /*3*/] = { Local_1246[0 /*3*/] };
			uLocal_1237[0] = fLocal_1233[0];
			iLocal_1193++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (GlobalFunc_5683(Local_1246[iVar0 /*3*/], 1) > 30f && !func_254(iVar0, 6f))
				{
					Local_1256[iLocal_1193 /*3*/] = { Local_1246[iVar0 /*3*/] };
					uLocal_1237[iLocal_1193] = fLocal_1233[iVar0];
					iLocal_1193++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1193 == 0)
	{
		func_251();
	}
}

void func_251()//Position - 0xC909
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = SYSTEM::VDIST(Var1, Local_1246[iVar0 /*3*/]);
		if (fVar4 > fLocal_1245)
		{
			fLocal_1245 = fVar4;
			iLocal_1244 = iVar0;
		}
		iVar0++;
	}
	Local_1256[0 /*3*/] = { Local_1246[iLocal_1244 /*3*/] };
	uLocal_1237[0] = fLocal_1233[iLocal_1244];
}


int func_253()//Position - 0xC99C
{
	if (GlobalFunc_2264(PLAYER::PLAYER_PED_ID(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0, float fParam1)//Position - 0xC9CA
{
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_1246[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_255()//Position - 0xC9E9
{
	switch (iLocal_1191)
	{
		case 0:
			if (!iLocal_1160)
			{
				GlobalFunc_5312(&Local_359, 4);
				func_258();
				SYSTEM::SETTIMERA(0);
				iLocal_1191++;
			}
			break;
		
		case 1:
			if (((bLocal_1139 && !bLocal_1137) && func_257()) && func_256())
			{
				func_234();
				iLocal_1029 = 11;
			}
			break;
	}
}

int func_256()//Position - 0xCA55
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_1323);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1323))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_257()//Position - 0xCA79
{
	if (((ENTITY::DOES_ENTITY_EXIST(uLocal_1048[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_1048[1])) && !PED::IS_PED_INJURED(uLocal_1048[0])) && !PED::IS_PED_INJURED(uLocal_1048[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(uLocal_1048[0], iLocal_1310, 0) && PED::IS_PED_IN_VEHICLE(uLocal_1048[1], iLocal_1310, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_258()//Position - 0xCAEC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1031[iVar0] = 4;
		iVar0++;
	}
	bLocal_1153 = true;
}

void func_259()//Position - 0xCB12
{
	switch (iLocal_1191)
	{
		case 0:
			GlobalFunc_Checkpoint4(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			GlobalFunc_5312(&Local_359, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1310, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1317) && !ENTITY::IS_ENTITY_DEAD(iLocal_1317))
					{
						GlobalFunc_9138(iLocal_1317);
					}
				}
			}
			func_264();
			func_263();
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_START");
			MISC::SET_BIT(&Local_359, 4);
			GlobalFunc_164("ASS_VA_PLANT", 7500, 1);
			iLocal_1191++;
			break;
		
		case 1:
			if (iLocal_1166)
			{
				if (((!func_262(&iLocal_1312) && !func_261(&(iLocal_1318[0]), &bLocal_1187)) && !func_261(&(iLocal_1318[1]), &bLocal_1187)) && !func_261(&(iLocal_1318[2]), &bLocal_1187))
				{
					SYSTEM::SETTIMERA(0);
					func_234();
					iLocal_1029 = 10;
				}
				else
				{
					func_260();
				}
			}
			break;
	}
}

void func_260()//Position - 0xCC20
{
	iLocal_1042 = 1;
	bLocal_1137 = true;
}

int func_261(var uParam0, int iParam1)//Position - 0xCC30
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
	{
		return 0;
	}
	if (GlobalFunc_156(*uParam0, iLocal_1311, 1) <= 5f)
	{
		iLocal_1312 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_262(var uParam0)//Position - 0xCC75
{
	struct<3> Var0;
	
	*uParam0 = VEHICLE::GET_CLOSEST_VEHICLE(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1310) && *uParam0 != iLocal_1311) && *uParam0 != Local_1689.f_4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1) == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1317 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1317) && !ENTITY::IS_ENTITY_DEAD(iLocal_1317))
		{
			if (!func_86(iLocal_1317))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1317, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_263()//Position - 0xCD3D
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1048[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1326;
			}
			else
			{
				iVar0 = iLocal_1325;
			}
			uLocal_1048[iVar1] = PED::CREATE_PED(26, iVar0, Local_1266[iVar1 /*3*/], fLocal_1219[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iVar1], 11, 1, 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_1048[iVar1]))
		{
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_1048[iVar1], 0);
			PED::SET_PED_KEEP_TASK(uLocal_1048[iVar1], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1048[iVar1], 23, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1048[iVar1], 30, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_1048[iVar1], 2);
			PED::SET_PED_CONFIG_FLAG(uLocal_1048[iVar1], 104, 1);
			func_247(uLocal_1048[iVar1], 1);
		}
		iVar1++;
	}
}

void func_264()//Position - 0xCF02
{
	func_266();
	func_265();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1327);
}

void func_265()//Position - 0xCF19
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1052[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_1052[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1311, 26, iLocal_1325, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_1052[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1311, 26, iLocal_1326, 0, 1, 1);
			}
			func_247(uLocal_1052[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1052[iVar0], 3, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1052[iVar0], 23, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1052[iVar0], 30, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_1052[iVar0], 2);
			PED::SET_PED_KEEP_TASK(uLocal_1052[iVar0], 1);
		}
		iVar0++;
	}
}

void func_266()//Position - 0xCFCD
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
	{
		iLocal_1311 = VEHICLE::CREATE_VEHICLE(iLocal_1327, Local_1282, fLocal_1231, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1311, 0);
	}
}









































































void func_339()//Position - 0x13D46
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, 0, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) <= 0.5f)
				{
					if (!GlobalFunc_226(&uLocal_1343))
					{
						GlobalFunc_7731(&uLocal_1343);
					}
				}
				else if (GlobalFunc_226(&uLocal_1343))
				{
					GlobalFunc_6715(&uLocal_1343);
				}
				if (GlobalFunc_226(&uLocal_1343))
				{
					if (GlobalFunc_4981(&uLocal_1343) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (GlobalFunc_226(&uLocal_1343))
			{
				GlobalFunc_6715(&uLocal_1343);
			}
		}
	}
}

void func_340()//Position - 0x13E22
{
	switch (iLocal_1191)
	{
		case 0:
			if (func_370(1084227584, 1) || (bLocal_1149 && STREAMING::STREAMVOL_HAS_LOADED(uLocal_1128)))
			{
				GlobalFunc_9807(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, Local_1663, fLocal_1666, 1, 1, 1, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_368();
				func_367();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1310))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1310, 107, "ASSOJva", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1310, 2500f);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), "OFF");
					}
				}
				iLocal_1191++;
			}
			else if (STREAMING::STREAMVOL_HAS_LOADED(uLocal_1128))
			{
			}
			break;
		
		case 1:
			if (func_341())
			{
				iLocal_1192 = 0;
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				func_462();
				func_234();
				iLocal_1029 = 9;
			}
			break;
	}
}

int func_341()//Position - 0x13F6B
{
	int iVar0;
	
	switch (iLocal_1192)
	{
		case 0:
			GlobalFunc_9145(0, 0, 1);
			func_365();
			CAM::SHAKE_CAM(uLocal_1328, "HAND_SHAKE", 0.2f);
			CAM::SHAKE_CAM(uLocal_1329, "HAND_SHAKE", 0.2f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1329, uLocal_1328, 6000, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			GlobalFunc_164("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1149)
			{
				func_364();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			else
			{
				func_355();
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1192++;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1310))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
				{
					if (SYSTEM::TIMERA() > 6000)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1310))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1310);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1310, 102, "ASSOJva", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1310, 4500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_1310, 1);
						GlobalFunc_164("ASS_VA_SNIPE2", 7500, 1);
						CAM::SET_CAM_PARAMS(uLocal_1328, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(uLocal_1328, 0.5f);
						CAM::SET_CAM_FAR_DOF(uLocal_1328, 7f);
						CAM::SHAKE_CAM(uLocal_1328, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_PARAMS(uLocal_1329, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(uLocal_1329, 0.7f);
						CAM::SET_CAM_FAR_DOF(uLocal_1329, 10f);
						CAM::SHAKE_CAM(uLocal_1329, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1329, uLocal_1328, 2000, 3, 3);
						iLocal_1192++;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1310))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1310) >= 7000f)
					{
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1310);
						iLocal_1190 = 0;
						while (iLocal_1190 < 3)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_1048[iLocal_1190]))
							{
								if (iLocal_1190 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1190 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1048[iLocal_1190], 242628503) != 1)
								{
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1322);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1246[iLocal_1190 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1322);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_1048[iLocal_1190], uLocal_1322);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1322);
								}
							}
							iLocal_1190++;
						}
						SYSTEM::SETTIMERA(0);
						iLocal_1192++;
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() >= 2000)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::SET_CAM_PARAMS(uLocal_1328, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1328, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(uLocal_1329, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1329, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1329, uLocal_1328, 4000, 3, 3);
					iLocal_1215 = 4000;
				}
				else
				{
					CAM::SET_CAM_PARAMS(uLocal_1328, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1328, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(uLocal_1329, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1329, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1329, uLocal_1328, 4000, 3, 3);
					iLocal_1215 = 4000;
				}
				SYSTEM::SETTIMERA(0);
				iLocal_1192++;
			}
			break;
		
		case 4:
			if (!iLocal_1188)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					if (SYSTEM::TIMERA() >= (iLocal_1215 - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1188 = 1;
					}
				}
			}
			if (SYSTEM::TIMERA() >= iLocal_1215)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1310))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1310);
					}
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
				VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1310, 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1310, 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1310, 2, 1);
				HUD::CLEAR_HELP(1);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(1, 0f, 1, 0);
				}
				GlobalFunc_9144(1, 1, 1);
				return 1;
			}
			break;
	}
	if (GlobalFunc_7945(iLocal_381))
	{
		HUD::CLEAR_HELP(1);
		func_342(1);
		return 1;
	}
	return 0;
}

void func_342(bool bParam0)//Position - 0x14453
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1310))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1310);
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
		VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
		ENTITY::SET_ENTITY_COORDS(iLocal_1310, Local_1288, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_1310, fLocal_1218);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1310, 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1310, 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1310, 2, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1310, 2, 1);
		iLocal_1192 = 0;
		HUD::CLEAR_PRINTS();
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		GlobalFunc_9144(1, 1, 1);
		if (bParam0)
		{
			func_343();
		}
	}
}

void func_343()//Position - 0x144FC
{
	CAM::DO_SCREEN_FADE_IN(1000);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
}












void func_355()//Position - 0x147F0
{
	GlobalFunc_9805(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, GlobalFunc_625(), 1, 1, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 310.0126f);
	}
}









void func_364()//Position - 0x15117
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1300, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 299.4985f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1313))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1313, 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1313, 0, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_1313, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_1313, 296.7603f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1313);
		}
	}
}

int func_365()//Position - 0x1519D
{
	iLocal_381 = MISC::GET_GAME_TIMER();
	return iLocal_381;
}


void func_367()//Position - 0x15205
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1310))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1310, 0))
		{
			iLocal_1190 = 0;
			while (iLocal_1190 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1048[iLocal_1190]))
				{
					if (iLocal_1190 == 0)
					{
						uLocal_1048[iLocal_1190] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1310, 26, iLocal_1325, -1, 1, 1);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 0, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 11, 0, 0, 0);
					}
					else if (iLocal_1190 == 1)
					{
						uLocal_1048[iLocal_1190] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1310, 26, iLocal_1325, 0, 1, 1);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 3, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 11, 0, 2, 0);
					}
					else if (iLocal_1190 == 2)
					{
						uLocal_1048[iLocal_1190] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1310, 26, iLocal_1326, 1, 1, 1);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_1048[iLocal_1190], 11, 1, 1, 0);
					}
				}
				iLocal_1190++;
			}
		}
	}
}

void func_368()//Position - 0x1539E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1310))
	{
		iLocal_1310 = VEHICLE::CREATE_VEHICLE(iLocal_1324, Local_1285, fLocal_1217, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1324);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_1310, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1310, 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_1310, 1);
	}
}


int func_370(int iParam0, int iParam1)//Position - 0x1540D
{
	int iVar0;
	
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_2267(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam0, 1, 1056964608, 0, 1)) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!GlobalFunc_226(&uLocal_366))
		{
			GlobalFunc_6715(&uLocal_366);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		else if (GlobalFunc_4981(&uLocal_366) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}


void func_372()//Position - 0x15639
{
	int iVar0;
	
	switch (iLocal_1191)
	{
		case 0:
			GlobalFunc_575(500);
			GlobalFunc_Checkpoint4(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				GlobalFunc_164("ASS_VA_LOSECOPS", 7500, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
			iLocal_1191++;
			break;
		
		case 1:
			func_385();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1317))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_1317 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1317) && !ENTITY::IS_ENTITY_DEAD(iLocal_1317))
							{
								GlobalFunc_9138(iLocal_1317);
							}
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!func_382())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_1117))
					{
						uLocal_1117 = GlobalFunc_5104(Local_1300, 1);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1117, "ASS_VA_DESTBLIP");
						GlobalFunc_2269(&uLocal_1117, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1131)
						{
							GlobalFunc_164("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1131 = 1;
						}
						else if (GlobalFunc_663("ASS_VA_LOSECOPS", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				else if (STREAMING::STREAMVOL_HAS_LOADED(uLocal_1128) && func_378())
				{
					func_377();
					func_234();
					iLocal_1029 = 8;
				}
			}
			else if (!func_382())
			{
				GlobalFunc_5684(uLocal_1117, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_373();
			break;
	}
}

void func_373()//Position - 0x157D9
{
	if (!iLocal_1130)
	{
		if (GlobalFunc_5683(Local_1300, 1) <= 100f)
		{
			func_375();
			uLocal_1128 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1130 = 1;
		}
	}
	else if (GlobalFunc_5683(Local_1300, 1) > 120f)
	{
		if (STREAMING::STREAMVOL_IS_VALID(uLocal_1128))
		{
			STREAMING::STREAMVOL_DELETE(uLocal_1128);
			func_242();
			iLocal_1130 = 0;
		}
	}
	else if (!STREAMING::STREAMVOL_IS_VALID(uLocal_1128))
	{
		if (!GlobalFunc_2268())
		{
			iLocal_1130 = 0;
		}
	}
}


void func_375()//Position - 0x158BC
{
	STREAMING::REQUEST_MODEL(iLocal_1325);
	STREAMING::REQUEST_MODEL(iLocal_1326);
}


void func_377()//Position - 0x15903
{
	if (HUD::DOES_BLIP_EXIST(uLocal_1117))
	{
		HUD::REMOVE_BLIP(&uLocal_1117);
	}
}

int func_378()//Position - 0x1591C
{
	int iVar0;
	
	func_375();
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1325) && STREAMING::HAS_MODEL_LOADED(iLocal_1326))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}




int func_382()//Position - 0x159BC
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = GlobalFunc_2264(iLocal_1043, Local_1300, 1);
	if (fVar0 < 200f)
	{
		func_384();
	}
	if (func_383())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1043, Local_1300, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((fVar0 < 2f || ENTITY::IS_ENTITY_AT_COORD(iLocal_1043, Local_1300, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, 1, 0))
			{
				if (func_383() && iVar1)
				{
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_383()//Position - 0x15A9B
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1313 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_1313);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_1149 = true;
			return 1;
		}
	}
	return 0;
}

void func_384()//Position - 0x15B12
{
	var uVar0;
	
	switch (iLocal_1203)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_02"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_hipster_01"));
			STREAMING::REQUEST_MODEL(joaat("taxi"));
			TASK::REQUEST_WAYPOINT_RECORDING("OJAS_HotelTaxi01");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
			if ((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("taxi"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_hipster_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAS_HotelTaxi01"))
			{
				iLocal_1203++;
			}
			break;
		
		case 1:
			Local_1689[0] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
			Local_1689[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1689[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1689[1], 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1689[1], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1689[0]))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1689[0], uVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1689[0], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1689[1]))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1689[1], uVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			Local_1689.f_4 = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1689.f_4);
			Local_1689.f_3 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1689.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1689.f_3, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_1689.f_3, Local_1689[0], -1, 0, 2);
			Local_1689.f_8[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
			Local_1689.f_8[1] = PED::CREATE_PED(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1689.f_8[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1689.f_8[1], 1);
			TASK::TASK_PLAY_ANIM(Local_1689.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_1689.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1689.f_5[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
			Local_1689.f_5[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1689.f_5[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1689.f_5[1], 1);
			TASK::TASK_PLAY_ANIM(Local_1689.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_1689.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1689.f_11 = 1;
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_bevhills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_bevhills_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_hipster_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
			iLocal_1203++;
			break;
		
		case 2:
			break;
	}
}

void func_385()//Position - 0x15EF9
{
	struct<3> Var0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_1184 = 1;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (iLocal_1184)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			fLocal_1243 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1300);
			iLocal_1184 = 0;
		}
	}
	else if (fLocal_1243 == 0f)
	{
		fLocal_1243 = SYSTEM::VDIST(-1510.291f, -946.9932f, 8.278f, Local_1300);
	}
	if (SYSTEM::VDIST(Var0, Local_1300) > (fLocal_1243 + 400f))
	{
		func_31(7);
	}
	else if (SYSTEM::VDIST(Var0, Local_1300) > (fLocal_1243 + 200f))
	{
		if (!iLocal_1180)
		{
			GlobalFunc_164("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1180 = 1;
		}
	}
}


void func_387()//Position - 0x15FF7
{
	var uVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056))
	{
		func_392();
		if (!PED::IS_PED_INJURED(iLocal_1056))
		{
			fVar1 = GlobalFunc_5682(iLocal_1056, 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_1056, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_1056, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_1056, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_1056, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_1056, 208, 1);
			if (fVar1 < 5f)
			{
				if (GlobalFunc_226(&uLocal_1355))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_7944(&uLocal_1355, 10f))
						{
							GlobalFunc_173(&uLocal_1362, 3, iLocal_1056, "LESTER", 0, 1);
							GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1056) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1056))
				{
					func_388();
				}
			}
			switch (iLocal_1189)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1056) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1056, PLAYER::PLAYER_PED_ID(), 1))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1688, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1688, PLAYER::PLAYER_PED_ID(), 1))
							{
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_1056, "move_lester_CaneUp", 1048576000);
							TASK::TASK_PLAY_ANIM(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1189 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_1056), 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_1056, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							PED::FORCE_PED_MOTION_STATE(iLocal_1056, -668482597, 0, 0, 0);
							iLocal_1189 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_388()//Position - 0x16216
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056))
	{
		PED::DELETE_PED(&iLocal_1056);
	}
}




void func_392()//Position - 0x16285
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1056, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_31(9);
		}
	}
}

void func_393()//Position - 0x162AF
{
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_STOP");
	if (!MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 13))
	{
		func_462();
	}
	GlobalFunc_5108(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	iLocal_1029 = 18;
	GlobalFunc_575(500);
}




void func_397()//Position - 0x163F7
{
	while (iLocal_1203 < 2)
	{
		func_384();
		SYSTEM::WAIT(0);
	}
	func_368();
	func_342(0);
	if (!MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 13))
	{
		func_462();
	}
	iLocal_1158 = 0;
	iLocal_1182 = 0;
	MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_RESTART1");
	while (!func_378())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_5108(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	iLocal_1029 = 9;
	GlobalFunc_575(500);
}

void func_398()//Position - 0x164A2
{
	GlobalFunc_5108(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	GlobalFunc_575(500);
	iLocal_1029 = 7;
}

void func_399()//Position - 0x164CB
{
	uLocal_1314[0] = VEHICLE::CREATE_VEHICLE(iLocal_1327, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1);
	uLocal_1314[1] = VEHICLE::CREATE_VEHICLE(iLocal_1327, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1);
}

void func_400()//Position - 0x16519
{
	uLocal_1328 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	uLocal_1329 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_401()//Position - 0x16583
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_1324) && STREAMING::HAS_MODEL_LOADED(iLocal_1327)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "ASSOJva")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(107, "ASSOJva")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101a")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_104")) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@ASSASSINATE@GUARD")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_402()//Position - 0x16615
{
	STREAMING::REQUEST_MODEL(iLocal_1324);
	STREAMING::REQUEST_MODEL(iLocal_1327);
	STREAMING::REQUEST_ANIM_DICT("ODDJOBS@ASSASSINATE@GUARD");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
	HUD::REQUEST_ADDITIONAL_TEXT("ASS_VA", 3);
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REQUEST_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_104");
}

void func_403(bool bParam0)//Position - 0x16670
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 1, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_404()//Position - 0x1672F
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var3 = { -1279.658f, -222.0533f, 41.446f };
	GlobalFunc_173(&uLocal_1362, 1, iLocal_1043, "FRANKLIN", 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	PED::ADD_RELATIONSHIP_GROUP("Guards", &iLocal_1330);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1330);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1330, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1330, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1330);
	MISC::CLEAR_AREA(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	uLocal_1126 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	uLocal_1127 = PED::ADD_SCENARIO_BLOCKING_AREA(Var3 - Vector(45f, 35f, 35f), Var3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_405()//Position - 0x1685B
{
	StringCopy(&Local_963, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_963.f_6), {Global_54765}, 6);
	StringCopy(&(Local_963.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_963.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_963.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_963.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_963.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_963.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_963.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_963.f_54), "ASS_VA_COMP", 24);
}

void func_406()//Position - 0x168D1
{
	Local_1282 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1231 = 260.3612f;
	Local_1285 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1217 = 96.8755f;
	Local_1288 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1218 = 201.0763f;
	fLocal_1232 = 40f;
	Local_359.f_2 = 40f;
	Local_1246[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	Local_1246[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	Local_1246[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1233[0] = 157.3177f;
	fLocal_1233[1] = 58.3594f;
	fLocal_1233[2] = 65.6443f;
	Local_1266[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	Local_1266[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	Local_1266[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	Local_1266[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	Local_1266[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1219[0] = 160.0748f;
	fLocal_1219[1] = 58.3365f;
	fLocal_1219[2] = 58.0214f;
	fLocal_1219[3] = 97.6664f;
	fLocal_1219[4] = 225.8689f;
	iLocal_1190 = 0;
	while (iLocal_1190 <= 4)
	{
		uLocal_1225[iLocal_1190] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f);
		iLocal_1190++;
	}
	fLocal_372 = 7000f;
	fLocal_373 = 2000f;
	iLocal_1042 = 0;
	iLocal_1178 = 0;
	bLocal_1179 = false;
	iLocal_1164 = 0;
	bLocal_1187 = false;
	iLocal_1186 = 0;
}

void func_407()//Position - 0x16A9B
{
	switch (iLocal_1191)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE("ASS_INT_2_ALT1", 8);
			STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leadin");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
			STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("ig_lestercrest")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leadin")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leaning@")) && STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
			{
				iLocal_1191++;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_9145(56, 0, 1);
				GlobalFunc_9807(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				MISC::CLEAR_AREA(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1667, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1670);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!CAM::DOES_CAM_EXIST(uLocal_1671))
				{
					uLocal_1671 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1673, Local_1676, 42.2032f, 1, 2);
					CAM::SHAKE_CAM(uLocal_1671, "HAND_SHAKE", 0.3f);
				}
				if (!CAM::DOES_CAM_EXIST(uLocal_1672))
				{
					uLocal_1672 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1679, Local_1682, 42.2032f, 0, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1672, uLocal_1671, 5000, 1, 1);
					CAM::SHAKE_CAM(uLocal_1671, "HAND_SHAKE", 0.3f);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1191++;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!GlobalFunc_226(&uLocal_1685))
					{
						GlobalFunc_7731(&uLocal_1685);
					}
				}
				if (GlobalFunc_226(&uLocal_1685))
				{
					if (GlobalFunc_4981(&uLocal_1685) > 6f)
					{
						iLocal_1191++;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				iLocal_1191++;
			}
			break;
		
		case 4:
			GlobalFunc_8316(1, 1, 1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1056, "Lester", 2, joaat("ig_lestercrest"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			CUTSCENE::START_CUTSCENE(0);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_1191++;
			break;
		
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				iLocal_1191++;
			}
			break;
		
		case 6:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1056))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
					{
						iLocal_1056 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0)))
					{
						iLocal_1057 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0);
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056) && !PED::IS_PED_INJURED(iLocal_1056))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1056, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_1056, -11f);
						TASK::TASK_PLAY_ANIM(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1056, 0, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056) && !PED::IS_PED_INJURED(iLocal_1056))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1057, iLocal_1056, PED::GET_PED_BONE_INDEX(iLocal_1056, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_8316(0, 1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_1056))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_1056, 0, 0, 0, 0, 0, 0, 0, 0);
					PED::SET_PED_CAN_RAGDOLL(iLocal_1056, 1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				GlobalFunc_9144(1, 1, 1);
				iLocal_1191++;
			}
			break;
		
		case 7:
			GlobalFunc_6715(&uLocal_1355);
			func_234();
			iLocal_1029 = 4;
			break;
	}
}


void func_409()//Position - 0x16FCC
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1688))
	{
		iLocal_1688 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_410()//Position - 0x16FFE
{
	int iVar0;
	
	if (iLocal_1029 > 7)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if ((iVar0 != iLocal_1318[0] && iVar0 != iLocal_1318[1]) && iVar0 != iLocal_1318[2])
						{
							if (iLocal_1214 >= 2)
							{
								iLocal_1214 = -1;
							}
							iLocal_1318[iLocal_1214 + 1] = iVar0;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1318[iLocal_1214 + 1], 1, 0);
							VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_1318[iLocal_1214 + 1], 0);
							iLocal_1214++;
						}
					}
				}
			}
		}
	}
}

void func_411()//Position - 0x170A5
{
	int iVar0;
	
	if (iLocal_1176)
	{
		iVar0 = func_30(1116471296, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_412()//Position - 0x170E7
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1689.f_11)
	{
		if (!bLocal_1167)
		{
			if (iLocal_1029 < 10)
			{
				if (func_418())
				{
					iVar0 = func_30(1116471296, 1);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (GlobalFunc_5682(iVar0, 0) < 10f)
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
							Var1 = { Var1 };
							GlobalFunc_173(&uLocal_1362, 3, iVar0, "OJAvaGuard", 0, 1);
							GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_417();
					bLocal_1167 = true;
				}
				if (iLocal_1132)
				{
					func_417();
					bLocal_1167 = true;
				}
				else
				{
					func_416();
					func_413();
				}
			}
		}
	}
}

void func_413()//Position - 0x17199
{
	if (bLocal_1138)
	{
		if (IntToFloat(iLocal_1211) < (IntToFloat(iLocal_1208) - 5f))
		{
			func_415(Local_1689.f_8[0], 1);
			func_415(Local_1689.f_8[1], 1);
			func_415(Local_1689.f_5[0], 1);
			func_415(Local_1689.f_5[1], 1);
		}
		else
		{
			if ((GlobalFunc_5682(Local_1689.f_8[0], 0) < 1f || GlobalFunc_5682(Local_1689.f_8[1], 0) < 1f) || iLocal_1136)
			{
				func_414(Local_1689.f_8[0], 1);
				func_414(Local_1689.f_8[1], 1);
			}
			if (!iLocal_1136)
			{
				func_414(Local_1689.f_5[0], 0);
				func_414(Local_1689.f_5[1], 0);
			}
			else
			{
				func_414(Local_1689.f_5[0], 1);
				func_414(Local_1689.f_5[1], 1);
			}
		}
	}
}

void func_414(int iParam0, int iParam1)//Position - 0x17274
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			if (GlobalFunc_5682(iParam0, 0) < 1f || iParam1)
			{
				func_415(iParam0, 1);
			}
		}
	}
}

void func_415(int iParam0, bool bParam1)//Position - 0x172B0
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((bParam1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1) || !bParam1)
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
}

void func_416()//Position - 0x17327
{
	int iVar0;
	
	switch (iLocal_1204)
	{
		case 0:
			if (((iLocal_1152 || iLocal_1136) || GlobalFunc_5682(Local_1689[0], 0) < 1f) || GlobalFunc_5682(Local_1689[1], 0) < 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1689[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1689[1]))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_1689[0], Local_1689[1], -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_1689[1], Local_1689[0], -1, 0, 2);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(Local_1689[1]) && ENTITY::DOES_ENTITY_EXIST(Local_1689.f_4)) && !PED::IS_PED_INJURED(Local_1689[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1689.f_4, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_1689[1]);
					TASK::TASK_ENTER_VEHICLE(Local_1689[1], Local_1689.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!GlobalFunc_226(&uLocal_1346))
				{
					GlobalFunc_7731(&uLocal_1346);
				}
				iLocal_1204++;
			}
			break;
		
		case 1:
			if (!iLocal_1172)
			{
				if (GlobalFunc_226(&uLocal_1346))
				{
					if (GlobalFunc_4981(&uLocal_1346) > 3f)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1689[0]) && ENTITY::DOES_ENTITY_EXIST(Local_1689.f_4)) && !PED::IS_PED_INJURED(Local_1689[0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1689.f_4, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1689[0], -1794415470) != 1)
							{
								TASK::CLEAR_PED_TASKS(Local_1689[0]);
								TASK::TASK_ENTER_VEHICLE(Local_1689[0], Local_1689.f_4, 20000, 1, 1f, 1, 0);
								iLocal_1172 = 1;
							}
						}
					}
				}
				else
				{
					GlobalFunc_7731(&uLocal_1346);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1689[0]) && !PED::IS_PED_INJURED(Local_1689[1]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_1689[0], Local_1689.f_4, 0) && PED::IS_PED_IN_VEHICLE(Local_1689[1], Local_1689.f_4, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1689.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_4))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_1689.f_3);
						GlobalFunc_6715(&uLocal_1346);
					}
					iLocal_1204++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_226(&uLocal_1346))
			{
				if (GlobalFunc_4981(&uLocal_1346) > 3f)
				{
					if (!PED::IS_PED_INJURED(Local_1689.f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1689.f_4, 0))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1689.f_3, Local_1689.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1204++;
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_1689.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_4))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1689.f_4) || iLocal_1175)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_1689.f_3, Local_1689.f_4, 10f, 786603);
					iLocal_1204++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1175)
			{
				if (!PED::IS_PED_INJURED(uLocal_1052[0]))
				{
					iVar0 = uLocal_1052[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!GlobalFunc_111())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							GlobalFunc_10618(&uLocal_1362, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				GlobalFunc_6715(&uLocal_1346);
				iLocal_1204++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_417()//Position - 0x1768E
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1689.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_3)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1689.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1689[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1689[0])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1689[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1689[0], 2, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1689[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1689[1])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1689[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1689[1], 2, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1689.f_8[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_8[0])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1689.f_8[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1689.f_8[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_8[1])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1689.f_8[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1689.f_5[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_5[0])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1689.f_5[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1689.f_5[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_5[1])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1689.f_5[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
}

int func_418()//Position - 0x1788A
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1689.f_3))
	{
		if (PED::IS_PED_BEING_JACKED(Local_1689.f_3))
		{
			if (PED::GET_PEDS_JACKER(Local_1689.f_3) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_1689.f_4))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1689.f_4, 0))
		{
			return 1;
		}
	}
	if (func_105(Local_1689[0], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689[1], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_8[0], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_8[1], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_5[0], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_5[1], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_104(Local_1689.f_4))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_419()//Position - 0x179D6
{
	func_470();
}



int func_422(struct<3> Param0, float fParam3)//Position - 0x17AA4
{
	return func_423(&(Global_93588.f_2167), Param0, fParam3, 0);
}

int func_423(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x17ABE
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
				GlobalFunc_7028(iVar0, &(uParam0->f_12), 0, 1);
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
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					GlobalFunc_194(iVar0, uParam0->f_11);
				}
				else if ((!GlobalFunc_8529(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = GlobalFunc_2277(iVar0);
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
					GlobalFunc_8526(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}







































void func_462()//Position - 0x1ACAE
{
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1128))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1128);
	}
}








void func_470()//Position - 0x1B2AB
{
	if (GlobalFunc_226(&uLocal_1334))
	{
		Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_HotelMissionTime = GlobalFunc_4981(&uLocal_1334);
	}
	if (!iLocal_1174)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI");
	func_243();
	func_226();
	func_231();
	func_232(1);
	func_377();
	func_474();
	func_403(0);
	GlobalFunc_4935();
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_86864.f_28[0]));
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1126, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1127, 0);
	func_462();
	GlobalFunc_4948(&uLocal_1527, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_5695(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1325, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1326, 0);
	func_471();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_471()//Position - 0x1B394
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_5683(Local_1246[iVar0 /*3*/], 1) < 5f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 119.5633f);
			}
		}
		iVar0++;
	}
}



void func_474()//Position - 0x1B59C
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_104");
}





