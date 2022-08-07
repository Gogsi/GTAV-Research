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
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<2> Local_51[3];
	struct<5> Local_58[3];
	struct<5> Local_74[7];
	var uLocal_110 = 16;
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
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 3;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 1092616192;
	var uLocal_283 = 1101004800;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 3;
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
	var uLocal_305 = -1;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 1000;
	var uLocal_313 = 1000;
	var uLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	struct<3> Local_330 = { 0, 0, 0 } ;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 21;
	var uLocal_338 = 6;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	float fLocal_348 = 0f;
	var uLocal_349 = 0;
	float fLocal_350 = 0f;
	float fLocal_351 = 0f;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	bool bLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	bool bLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	var uLocal_379 = 0;
	int iLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 30;
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
	var uLocal_533 = 10;
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
	var uLocal_584 = 10;
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
	var uLocal_655 = 20;
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
	var uLocal_756 = 20;
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
	var uLocal_857 = 30;
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
	var uLocal_1038 = 5;
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
	var uLocal_1069 = 7;
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
	var uLocal_1103 = 0;
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
	var uLocal_1119 = 5;
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
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 3;
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
	var uLocal_1161 = 15;
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
	var uLocal_1256 = 10;
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
	var uLocal_1307 = 5;
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
	var uLocal_1333 = 5;
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
	var uLocal_1362 = 3;
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
	var uLocal_1380 = 12;
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
	var uLocal_1393 = 12;
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
	var uLocal_1406 = 12;
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
	var uLocal_1419 = 9;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 9;
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
	var uLocal_1462 = 12;
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
	var uLocal_1475 = 12;
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
	var uLocal_1488 = 12;
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
	var uLocal_1501 = 9;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 9;
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
	var uLocal_1544 = 12;
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
	var uLocal_1557 = 12;
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
	var uLocal_1570 = 12;
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
	var uLocal_1583 = 9;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 9;
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
	int iLocal_1609 = 0;
	int iLocal_1610 = 0;
	int iLocal_1611 = 0;
	int iLocal_1612 = 0;
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	bool bLocal_1615 = 0;
	int iLocal_1616 = 0;
	bool bLocal_1617 = 0;
	int iLocal_1618 = 0;
	int iLocal_1619 = 0;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
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
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_48 = { 2574.515f, 2173.424f, 31.5596f };
	iLocal_323 = 1;
	fLocal_351 = 0f;
	uLocal_379 = MISC::GET_HASH_KEY("w_sr_sniperrifle");
	iLocal_1619 = 57473;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		}
		func_647();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(1);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("FINALE_B_GENERAL", 0);
	PED::ADD_RELATIONSHIP_GROUP("michael_rel", &iLocal_316);
	HUD::REQUEST_ADDITIONAL_TEXT("FINALE2", 0);
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (!GlobalFunc_Is_Mission_Retry())
	{
		func_618();
	}
	func_612();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_KillMichael", 0);
		GlobalFunc_8012(&uLocal_382);
		GlobalFunc_5195(&uLocal_1362);
		func_608();
		func_554();
		if (!bLocal_1615)
		{
			func_544();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x140
{
	switch (iLocal_1610)
	{
		case 0:
			func_496();
			break;
		
		case 1:
			func_465();
			break;
		
		case 2:
			func_455();
			break;
		
		case 4:
			func_454();
			break;
		
		case 3:
			func_449();
			break;
		
		case 5:
			func_163();
			break;
		
		case 6:
			func_141();
			break;
		
		case 7:
			func_26();
			break;
		
		case 8:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1C5
{
	switch (iLocal_1611)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			iLocal_1611++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x209
{
	Global_86811 = 1;
	GlobalFunc_553(852);
	func_22(0);
	func_9(5, 0);
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		Global_54752 = 1;
		GlobalFunc_45(1, 1);
	}
	GlobalFunc_5103(1, 0);
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		Global_54750 = 0;
	}
	func_647();
	SCRIPT::TERMINATE_THIS_THREAD();
}






int func_9(int iParam0, int iParam1)//Position - 0x413
{
	if (MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 17))
	{
		return 0;
	}
	return GlobalFunc_8964(iParam0, iParam1);
}













void func_22(int iParam0)//Position - 0x6C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/] == iParam0)
		{
			Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/] = 145;
			GlobalFunc_5211(&(Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/].f_2), 4);
		}
		iVar0++;
	}
}




void func_26()//Position - 0x7A2
{
	RECORDING::_0x208784099002BC30("M_KillMichael", 0);
	switch (iLocal_1611)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			OBJECT::_0xF92099527DB8E2A7(128, 0);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			CUTSCENE::REQUEST_CUTSCENE("fin_B_MCS_2", 8);
			iLocal_370 = 0;
			iLocal_359 = 0;
			iLocal_360 = 0;
			iLocal_361 = 0;
			iLocal_362 = 0;
			iLocal_364 = 0;
			iLocal_371 = 0;
			iLocal_372 = 0;
			iLocal_373 = 0;
			iLocal_374 = 0;
			iLocal_375 = 0;
			iLocal_369 = 0;
			iLocal_365 = 0;
			iLocal_367 = 0;
			GlobalFunc_8316(1, 1, 1, 0);
			GlobalFunc_Checkpoint3(7, "Stage 7: over the Edge", 1, 0, 0, 1);
			GlobalFunc_4935();
			iLocal_321 = 0;
			iLocal_1611++;
			break;
		
		case 1:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				PED::CLEAR_PED_BLOOD_DAMAGE(func_58());
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_58(), "Michael", 0, 0, 3);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 3);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_6685(0);
				iLocal_1611++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(Local_58[1 /*5*/], 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FINB_TOWER");
				func_54(5);
				MISC::CLEAR_AREA(2735.707f, 1576.864f, 59.4745f, 50f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_COPS(2735.707f, 1576.864f, 59.4745f, 50f, 0);
				MISC::CLEAR_AREA_OF_PEDS(2735.707f, 1576.864f, 59.4745f, 50f, 0);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				iLocal_376 = 0;
				iLocal_377 = 0;
				iLocal_378 = 0;
				iLocal_1611++;
			}
			break;
		
		case 3:
			if (iLocal_378 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 83500)
					{
						RECORDING::_0x293220DA1B46CEBC(6f, 2f, 3);
						iLocal_378 = 1;
					}
				}
			}
			if (!iLocal_376)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_58(), MISC::GET_HASH_KEY("1stPunch")))
				{
					iLocal_376 = 1;
				}
			}
			if (!iLocal_377)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_58(), MISC::GET_HASH_KEY("2ndPunch")))
				{
					PED::APPLY_PED_DAMAGE_PACK(func_58(), "SCR_Finale_Michael_Face", 0f, 1f);
					iLocal_377 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				uLocal_301 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2686.664f, 1578.053f, 23.6635f, 39.7643f, -17.7609f, -90.867f, 22.6486f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_301, 1);
				CAM::SHAKE_CAM(uLocal_301, "HAND_SHAKE", 0.8f);
				func_53(0, 2726.221f, 1579.399f, 91.7594f, 1, 0, 1, 1, 3000, 0, 1);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MAKE_CHOICE"))
				{
					AUDIO::START_AUDIO_SCENE("FIN_2_MAKE_CHOICE");
				}
				iLocal_359 = 1;
				GlobalFunc_8316(0, 1, 1, 0);
				func_52();
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_1611++;
			}
			break;
		
		case 4:
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(uLocal_379);
			if (iLocal_367 == 0)
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
				uLocal_320 = PED::CREATE_SYNCHRONIZED_SCENE(2727.982f, 1576.869f, 65.25f, 0f, 0f, 179.99f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_51(), uLocal_320, "missfinale_b_ig_5", "hold_michael_loop_fra", 1000f, -8f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_51(), 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(func_58(), uLocal_320, "missfinale_b_ig_5", "hold_michael_loop_mic", 1000f, -8f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_58(), 0, 0);
				iLocal_367 = 1;
			}
			if (iLocal_364 == 0)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REQUEST_CUTSCENE("fin_b_ext", 8);
					iLocal_364 = 1;
				}
			}
			func_50();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_320) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_320) >= 1f)
			{
				uLocal_320 = PED::CREATE_SYNCHRONIZED_SCENE(2727.982f, 1576.869f, 65.25f, 0f, 0f, 179.99f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_51(), uLocal_320, "missfinale_b_ig_5", "hold_michael_loop_fra", 1000f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(func_58(), uLocal_320, "missfinale_b_ig_5", "hold_michael_loop_mic", 1000f, -8f, 0, 0, 1148846080, 0);
			}
			if (iLocal_364 == 1 && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (!GlobalFunc_74("FIN2_DROP"))
				{
					GlobalFunc_Display_Help_Text("FIN2_DROP");
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 223) || (iLocal_369 == 1 && !GlobalFunc_111()))
				{
					GlobalFunc_4956();
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					func_54(5);
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_CHOOSE");
					RECORDING::_0x293220DA1B46CEBC(2f, 12f, 4);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_KILL_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("FIN_2_KILL_MICHAEL");
					}
					iLocal_321 = 4;
					iLocal_1611++;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 225))
				{
					CUTSCENE::REMOVE_CUTSCENE();
					GlobalFunc_4956();
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fin_b_ext", 510, 8);
					uLocal_320 = PED::CREATE_SYNCHRONIZED_SCENE(2727.982f, 1576.869f, 65.25f, 0f, 0f, 179.99f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_51(), uLocal_320, "missfinale_b_ig_5", "hold_michael_headbut_fra", 1000f, -1.5f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(func_58(), uLocal_320, "missfinale_b_ig_5", "hold_michael_headbut_mic", 1000f, -8f, 0, 0, 1148846080, 0);
					CAM::STOP_CAM_POINTING(uLocal_301);
					CAM::DETACH_CAM(uLocal_301);
					CAM::SET_CAM_PARAMS(uLocal_301, 2725.686f, 1583.916f, 67.5568f, -11.1217f, 2.3208f, -160.0679f, 17.5411f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_301, 2725.258f, 1583.757f, 67.5387f, -11.1217f, 2.3208f, -159.0268f, 17.5411f, 6000, 1, 1, 2);
					func_54(5);
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_CHOOSE");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_SAVE_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("FIN_2_SAVE_MICHAEL");
					}
					RECORDING::_0x293220DA1B46CEBC(2f, 12f, 4);
					GlobalFunc_553(857);
					iLocal_321 = 4;
					iLocal_1611 = 401;
				}
			}
			if (iLocal_369 == 0)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 1, 1);
						GlobalFunc_173(&uLocal_110, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 1, 1);
						if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_HOLD", 7, 0, 0, 0))
						{
							iLocal_369 = 1;
						}
					}
				}
			}
			break;
		
		case 401:
			CAM::STOP_CAM_POINTING(uLocal_301);
			CAM::DETACH_CAM(uLocal_301);
			if (iLocal_371 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_320) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_320) >= 0.257f)
				{
					AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 22, 0, 0);
					iLocal_371 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_320) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_320) >= 0.683f)
			{
				CAM::SET_CAM_PARAMS(uLocal_301, 2727.444f, 1574.474f, 67.0238f, -12.9643f, 2.3208f, -6.261f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_301, 2727.68f, 1574.801f, 67.5812f, -28.1126f, 2.3208f, 3.7272f, 45f, 1400, 1, 1, 2);
				iLocal_1611 = 402;
			}
			break;
		
		case 402:
			if (iLocal_372 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_320) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_320) >= 0.704f)
				{
					AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 22, 0, 0);
					iLocal_372 = 1;
				}
			}
			if (iLocal_373 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_320) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_320) >= 0.825f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_58()))
					{
						if (!PED::IS_PED_INJURED(func_58()))
						{
							AUDIO::PLAY_PAIN(func_58(), 22, 0, 0);
							iLocal_373 = 1;
						}
					}
				}
			}
			if (iLocal_374 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_320) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_320) >= 0.885f)
				{
					PED::APPLY_PED_DAMAGE_PACK(PLAYER::PLAYER_PED_ID(), "SCR_Franklin_finb", 0f, 1f);
					iLocal_374 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_320) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_320) >= 1f)
			{
				iLocal_1611 = 5;
			}
			break;
		
		case 5:
			iLocal_368 = 0;
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_58(), "Michael", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 1);
			GlobalFunc_8316(1, 1, 1, 0);
			if (!CAM::DOES_CAM_EXIST(uLocal_381))
			{
				uLocal_381 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				CAM::SET_CAM_PARAMS(uLocal_381, 2689.55f, 1549.861f, 29.78473f, 8.000013f, -6E-06f, 178f, 40f, 0, 1, 1, 2);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_378 = 0;
			iLocal_1611++;
			break;
		
		case 6:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_378 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8200)
					{
						RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
						iLocal_378 = 1;
					}
				}
				if (iLocal_368 == 0)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(func_58(), MISC::GET_HASH_KEY("Michael_Fucked")))
					{
						PED::APPLY_PED_DAMAGE_PACK(func_58(), "SCR_Finale_Michael", 0f, 1f);
						iLocal_368 = 1;
					}
				}
				if (iLocal_375 == 0)
				{
					if (iLocal_374 == 1)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 7500)
						{
							PED::APPLY_PED_DAMAGE_PACK(PLAYER::PLAYER_PED_ID(), "SCR_Franklin_finb2", 0f, 1f);
							iLocal_375 = 1;
						}
					}
				}
				if (iLocal_365 == 0)
				{
					CAM::SET_CAM_ACTIVE(uLocal_381, 1);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					iLocal_365 = 1;
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 46000)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 2689.5f, 1383f, 23.9f, 1f, -1, 1193033728, 1056964608);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				}
				if (Global_86810 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 56376)
					{
						AUDIO::PLAY_END_CREDITS_MUSIC(1);
						AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
						AUDIO::SET_MOBILE_PHONE_RADIO_STATE(1);
						AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
						AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_MICHAEL", 1);
						Global_86810 = 1;
					}
				}
				if (iLocal_370 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 63352)
					{
						MISC::SET_CREDITS_ACTIVE(1);
						MISC::_0xB51B9AB9EF81868C(0);
						AUDIO::START_AUDIO_SCENE("END_CREDITS_SCENE");
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
						func_9(5, 0);
						iLocal_370 = 1;
					}
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				iLocal_1611++;
			}
			break;
		
		case 7:
			CAM::SHAKE_CAM(uLocal_381, "HAND_SHAKE", 0.1f);
			SYSTEM::SETTIMERA(0);
			iLocal_1611++;
			break;
		
		case 8:
			if (SYSTEM::TIMERA() > 45000)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(5000);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_3();
				}
			}
			break;
	}
	HUD::DISPLAY_AMMO_THIS_FRAME(0);
}
























void func_50()//Position - 0x1B04
{
	switch (iLocal_321)
	{
		case 0:
			iLocal_347 = MISC::GET_GAME_TIMER();
			iLocal_321 = 2;
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 2500)
			{
				CAM::SET_CAM_PARAMS(uLocal_301, 2686.664f, 1578.053f, 23.6635f, 39.7643f, -17.7609f, -90.867f, 22.6486f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_301, "HAND_SHAKE", 0.8f);
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_321++;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 3500)
			{
				CAM::SET_CAM_PARAMS(uLocal_301, 2726.661f, 1577.726f, 65.221f, 23.2568f, 7.2233f, -107.1534f, 68.8743f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_301, 2726.76f, 1578.263f, 65.233f, 23.2568f, 7.2233f, -107.1534f, 68.8743f, 5000, 0, 0, 2);
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_321++;
			}
			break;
		
		case 3:
			iLocal_321++;
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 6000)
			{
				CAM::STOP_CAM_POINTING(uLocal_301);
				CAM::DETACH_CAM(uLocal_301);
				CAM::SET_CAM_PARAMS(uLocal_301, 2726.62f, 1575.273f, 67.2784f, -27.9599f, 7.2233f, -28.8742f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_301, 2726.952f, 1575.151f, 67.3749f, -27.9599f, 7.2233f, -11.0954f, 45f, 5000, 0, 0, 2);
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_321++;
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 6000)
			{
				iLocal_321 = 1;
			}
			break;
	}
}

int func_51()//Position - 0x1CCD
{
	return Local_58[0 /*5*/];
}

void func_52()//Position - 0x1CDA
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_1618 == 0)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("FINALE B CHOICE");
			iLocal_1618 = 1;
		}
	}
}

void func_53(bool bParam0, struct<3> Param1, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1CFD
{
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam9);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::RENDER_SCRIPT_CAMS(bParam4, iParam5, iParam8, 1, 0, 0);
	if (bParam6)
	{
		MISC::CLEAR_AREA_OF_PROJECTILES(Param1, 500f, 0);
	}
	if (bParam7)
	{
		FIRE::STOP_FIRE_IN_RANGE(Param1, 200f);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
	}
	if (bParam10)
	{
		GlobalFunc_6685(0);
	}
}

void func_54(int iParam0)//Position - 0x1D7A
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_IN_CAR") && iParam0 != 1)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_CHASE_IN_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_FOCUS_CAM") && iParam0 != 2)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_FOCUS_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_ESCAPE_SCENE") && iParam0 != 3)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_MICHAEL_ESCAPE_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT") && iParam0 != 4)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES") && iParam0 != 5)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_CLIMBS_LADDER") && iParam0 != 6)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_MICHAEL_CLIMBS_LADDER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_UP_LADDER") && iParam0 != 7)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_CHASE_UP_LADDER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MAKE_CHOICE") && iParam0 != 8)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_MAKE_CHOICE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_SAVE_MICHAEL") && iParam0 != 9)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_SAVE_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_KILL_MICHAEL") && iParam0 != 10)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_KILL_MICHAEL");
	}
}




int func_58()//Position - 0x1FD7
{
	return Local_58[1 /*5*/];
}



















































































void func_141()//Position - 0x928C
{
	switch (iLocal_1611)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_327 = 0;
			GlobalFunc_Checkpoint3(6, "Stage 6: Ladder dodge", 0, 0, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), -1, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_pistol"), 1);
			WEAPON::SET_PED_INFINITE_AMMO(func_58(), 1, joaat("weapon_pistol"));
			PED::SET_PED_COMBAT_MOVEMENT(func_58(), 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_58(), 2735.487f, 1578.352f, 65.7129f, 2f, 0, 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(func_58(), func_51(), -1, 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_UP_LADDER"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_UP_LADDER");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			iLocal_347 = MISC::GET_GAME_TIMER();
			iLocal_354 = 0;
			iLocal_1611++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2735.73f, 1576.83f, 58.73f, 4f, 4f, 10f, 0, 1, 0) && PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_58(), 1);
				ENTITY::SET_ENTITY_COORDS(func_58(), 2735.91f, 1577.47f, 65.54f, 1, 0, 0, 1);
				if (iLocal_354 == 7)
				{
					PED::SET_PED_ACCURACY(func_58(), 0);
					TASK::TASK_SHOOT_AT_ENTITY(func_58(), func_51(), -1, -687903391);
				}
				ENTITY::FREEZE_ENTITY_POSITION(func_58(), 1);
				TASK::CLEAR_PED_TASKS(func_58());
				AUDIO::TRIGGER_MUSIC_EVENT("FINB_CLIMB");
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				iLocal_1611++;
			}
			break;
		
		case 2:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2735.707f, 1576.864f, 59.4745f, 1f, 1f, 1f, 0, 1, 0))
			{
				func_158(7);
				iLocal_1611++;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2735.695f, 1576.529f, 55.5211f, 1f, 1f, 1f, 0, 1, 0))
			{
				iLocal_1611 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2735.737f, 1576.679f, 64.9689f, 1f, 1f, 1.2f, 0, 1, 0))
			{
				iLocal_1611 = 0;
				GlobalFunc_571(1, 858);
				func_156(7);
				iLocal_1611++;
			}
			break;
	}
	func_154();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2735.8f, 1577f, 50f, 1) > 50f)
	{
		func_143(0);
	}
	if (iLocal_327 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2735.8f, 1577f, 50f, 1) < 100f)
		{
			CUTSCENE::REQUEST_CUTSCENE("fin_B_MCS_2", 8);
			iLocal_327 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2735.8f, 1577f, 50f, 1) > 100f)
	{
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_327 = 0;
	}
	if (iLocal_1611 >= 1 && iLocal_1611 < 4)
	{
		if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_58(), 0);
			ENTITY::FREEZE_ENTITY_POSITION(func_58(), 0);
			if (!GlobalFunc_709(func_58(), 713668775, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_58(), 2729.568f, 1579.289f, 65.5428f, 2f, 20000, 1048576000, 0, 1193033728);
			}
			iLocal_1611 = 1;
		}
	}
}


void func_143(int iParam0)//Position - 0x95F3
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "FIN2_FAIL1";
			break;
		
		case 1:
			sVar0 = "FIN2_FAIL2";
			break;
		
		default:
			sVar0 = "FIN2_FAILDF";
			break;
	}
	iLocal_344 = 0;
	GlobalFunc_10835(sVar0);
	while (!GlobalFunc_145())
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		}
		SYSTEM::WAIT(0);
	}
	func_647();
	SCRIPT::TERMINATE_THIS_THREAD();
}











void func_154()//Position - 0xA4B8
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_51()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2735.73f, 1576.83f, 58.73f, 4f, 4f, 10f, 0, 1, 0) && PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(func_51(), 1) };
			Var3 = { 2735.8f, 1576.5f, 66.4f };
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(func_51(), "missfinale_b_ig_4", "LHUP_dodgeleft_short", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(func_51(), "missfinale_b_ig_4", "LHUP_dodgeleft_long", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(func_51(), "missfinale_b_ig_4", "LHUP_dodgeright_short", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(func_51(), "missfinale_b_ig_4", "LHUP_dodgeright_long", 3))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			else if (iLocal_354 > 1 || Var0.f_2 < 49.4f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			switch (iLocal_354)
			{
				case 0:
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) && ENTITY::IS_ENTITY_AT_COORD(func_51(), 2735.783f, 1576.858f, 51.27797f, 0.5f, 0.5f, 3f, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, 2736.005f, 1576.757f, 52.01969f, 10, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
						PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2736.005f, 1576.757f, 52.01969f, 0);
						iLocal_353 = MISC::GET_GAME_TIMER();
						iLocal_354++;
					}
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_353) > 1000)
					{
						TASK::TASK_PLAY_ANIM(func_51(), "missfinale_b_ig_4", "LHUP_dodgeleft_short", 8f, -8f, -1, 32, 0, 0, 0, 0);
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, 2735.852f, 1576.798f, 52.27501f, 10, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
						PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2735.852f, 1576.798f, 52.27501f, 0);
						iLocal_353 = MISC::GET_GAME_TIMER();
						iLocal_354++;
					}
					break;
				
				case 2:
					if (Var0.f_2 >= 56.5f)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, 2736.042f, 1576.745f, 58.29689f, 10, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
						PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2736.042f, 1576.745f, 58.29689f, 0);
						iLocal_353 = MISC::GET_GAME_TIMER();
						iLocal_354++;
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_353) > 450)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, 2735.019f, 1576.118f, 57.91095f, 10, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
						PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2735.019f, 1576.118f, 57.91095f, 0);
						iLocal_353 = MISC::GET_GAME_TIMER();
						iLocal_354++;
					}
					break;
				
				case 4:
					if (Var0.f_2 >= 59f)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, 2734.81f, 1575.69f, 60.61f, 10, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
						PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2734.81f, 1575.69f, 60.61f, 0);
						iLocal_353 = MISC::GET_GAME_TIMER();
						iLocal_354++;
					}
					break;
				
				case 5:
					if ((MISC::GET_GAME_TIMER() - iLocal_353) > 400)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, 2736.03f, 1576.75f, 60.58f, 10, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
						PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2736.03f, 1576.75f, 60.58f, 0);
						iLocal_353 = MISC::GET_GAME_TIMER();
						iLocal_354++;
					}
					break;
				
				case 6:
					if ((MISC::GET_GAME_TIMER() - iLocal_353) > 400)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, 2736.51f, 1576.33f, 49.54f, 10, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
						PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2736.51f, 1576.33f, 49.54f, 0);
						if (GlobalFunc_2773(func_58()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(func_58(), 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(func_58(), 2729.18f, 1578.21f, 65.54f, func_51(), 3f, 1, 2f, 1082130432, 1, 0, 0, -957453492, 20000);
						}
						iLocal_354++;
					}
					break;
				
				case 7:
					if (Var0.f_2 >= 59f)
					{
						if (GlobalFunc_2773(func_58()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(func_58(), 0);
							if (!GlobalFunc_709(func_58(), -1758697641, 1))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(func_58(), 2729.18f, 1578.21f, 65.54f, func_51(), 3f, 1, 2f, 1082130432, 1, 0, 0, -957453492, 20000);
							}
						}
					}
					break;
				}
			}
	}
}


int func_156(int iParam0)//Position - 0xA9B3
{
	if (iLocal_1609 == 0)
	{
		iLocal_1613 = iParam0;
		iLocal_1609 = 1;
		return 1;
	}
	return 0;
}


void func_158(int iParam0)//Position - 0xAA6D
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			GlobalFunc_718(&uLocal_382, joaat("freight"));
			GlobalFunc_718(&uLocal_382, joaat("tankercar"));
			GlobalFunc_746(&uLocal_382, 1, "FIN2");
			break;
		
		case 2:
			GlobalFunc_727(&uLocal_382, "fin2_mike1");
			GlobalFunc_719(&uLocal_382, "missfinale_b_ig_1");
			break;
		
		case 3:
			GlobalFunc_719(&uLocal_382, "missfinale_b_ig_2");
			break;
		
		case 4:
			break;
		
		case 5:
			GlobalFunc_719(&uLocal_382, "missfinale_b_ig_3");
			break;
		
		case 6:
			GlobalFunc_719(&uLocal_382, "missfinale_b_ig_4");
			break;
		
		case 7:
			GlobalFunc_719(&uLocal_382, "missfinale_b_ig_5");
			break;
		
		case 8:
			break;
	}
}





void func_163()//Position - 0xAE65
{
	switch (iLocal_1611)
	{
		case 0:
			iLocal_357 = 0;
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			SYSTEM::SETTIMERA(0);
			if (!HUD::DOES_BLIP_EXIST(uLocal_300))
			{
				uLocal_300 = GlobalFunc_5104(2741.32f, 1523.05f, 46.51f, 0);
			}
			if (iLocal_356 == 0)
			{
				GlobalFunc_164("FIN2_SPOT", 7500, 1);
				iLocal_356 = 1;
			}
			GlobalFunc_Checkpoint3(5, "Stage 5: shoot out", 0, 0, 0, 1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			iLocal_1611++;
			break;
		
		case 1:
			if ((ENTITY::IS_ENTITY_AT_COORD(func_51(), 2729.504f, 1530.742f, 39.3167f, 2f, 2f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2738.485f, 1532.373f, 39.7673f, 2f, 2f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2755.4f, 1531f, 39.8887f, 7f, 7f, 4f, 0, 1, 0))
			{
				if (func_172(2740.594f, 1522.915f, 44.5066f, 276.0896f))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
					TASK::CLEAR_PED_TASKS(func_58());
					if (HUD::DOES_BLIP_EXIST(uLocal_300))
					{
						HUD::REMOVE_BLIP(&uLocal_300);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
					{
						Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
					}
					WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), 50, 1, 1);
					TASK::CLEAR_PED_TASKS(func_58());
					TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_51(), -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
					TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
					ENTITY::SET_ENTITY_VISIBLE(func_58(), 1);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_1611++;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2741.32f, 1523.05f, 45.25f, 1.5f, 1.5f, 1f, 0, 1, 0))
			{
				if (func_172(2736.41f, 1537.38f, 49.6966f, 276.0896f))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
					if (HUD::DOES_BLIP_EXIST(uLocal_300))
					{
						HUD::REMOVE_BLIP(&uLocal_300);
					}
					TASK::CLEAR_PED_TASKS(func_58());
					if (!HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
					{
						Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(func_58(), 23, 0);
					WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), 50, 1, 1);
					TASK::CLEAR_PED_TASKS(func_58());
					TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2733.059f, 1528.958f, 49.6923f, func_51(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_51(), -1, -687903391);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
					TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_1611 = 301;
				}
			}
			break;
		
		case 2:
			if (((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_58()) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2741.157f, 1523.121f, 44.4857f, 2f, 2f, 2f, 0, 1, 0)) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_58()) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2741.157f, 1523.121f, 44.4857f, 2f, 2f, 2f, 0, 1, 0))) || (MISC::GET_GAME_TIMER() - iLocal_347) > 6000) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 9.2f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_58(), func_51(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2738.97f, 1526.111f, 47.15614f, 3f, -1, 0.5f, 0, 1193033728);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2734.744f, 1527.007f, 47.15614f, func_51(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
				TASK::TASK_SHOOT_AT_ENTITY(0, func_51(), -1, -687903391);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
				TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_1611++;
			}
			break;
		
		case 3:
			if ((((((ENTITY::IS_ENTITY_AT_COORD(func_51(), 2741.394f, 1523.607f, 45.5072f, 1.25f, 1.25f, 2f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_347) > 12500) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_58()) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2733.807f, 1526.926f, 47.1349f, 2f, 2f, 2f, 0, 1, 0))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_58()) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2733.807f, 1526.926f, 47.1349f, 2f, 2f, 2f, 0, 1, 0))) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 11f && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2733.807f, 1526.926f, 47.1349f, 2f, 2f, 2f, 0, 1, 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_58(), func_51(), 1)) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2755.3f, 1556.6f, 42.3f, 4f, 4f, 4f, 0, 1, 0))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				TASK::CLEAR_PED_TASKS(func_58());
				TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2738.399f, 1545.061f, 47.1352f, 3f, -1, 0.5f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
				TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
				iLocal_1611++;
			}
			break;
		
		case 301:
			if (((((ENTITY::IS_ENTITY_AT_COORD(func_51(), 2744.23f, 1523.03f, 46.08f, 1.25f, 1.25f, 2f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_347) > 12500) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_58()) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2733.059f, 1528.958f, 49.6923f, 2f, 2f, 2f, 0, 1, 0))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_58()) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2733.059f, 1528.958f, 49.6923f, 2f, 2f, 2f, 0, 1, 0))) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 11f && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2733.059f, 1528.958f, 49.6923f, 2f, 2f, 2f, 0, 1, 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_58(), func_51(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				TASK::CLEAR_PED_TASKS(func_58());
				TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2740.29f, 1544.7f, 49.7f, 3f, -1, 0.5f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
				TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
				iLocal_1611 = 4;
			}
			break;
		
		case 4:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 10f && !ENTITY::IS_ENTITY_ON_SCREEN(func_58()))
			{
				HUD::REMOVE_BLIP(&(Local_58[1 /*5*/].f_1));
				if (!HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					uLocal_300 = GlobalFunc_5104(2735.803f, 1535.994f, 48.3381f, 0);
				}
				TASK::CLEAR_PED_TASKS(func_58());
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
				HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(uLocal_300, 1);
				ENTITY::SET_ENTITY_COORDS(func_58(), 2750.81f, 1579.74f, 49.69f, 1, 0, 0, 1);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				iLocal_1611++;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2736.12f, 1537.14f, 48.69f, 2f, 2f, 6f, 0, 1, 0))
			{
				HUD::REMOVE_BLIP(&(Local_58[1 /*5*/].f_1));
				if (!HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					uLocal_300 = GlobalFunc_5104(2735.803f, 1535.994f, 48.3381f, 0);
				}
				TASK::CLEAR_PED_TASKS(func_58());
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
				HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(uLocal_300, 1);
				ENTITY::SET_ENTITY_COORDS(func_58(), 2750.81f, 1579.74f, 49.69f, 1, 0, 0, 1);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				iLocal_1611++;
			}
			break;
		
		case 5:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if ((ENTITY::IS_ENTITY_AT_COORD(func_51(), 2734.405f, 1529.719f, 46.3205f, 3f, 3f, 20f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2757.706f, 1539.859f, 44.8806f, 3f, 3f, 20f, 0, 1, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 20f)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
				{
					Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					HUD::REMOVE_BLIP(&uLocal_300);
				}
				TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2741.55f, 1574.16f, 49.7f, func_51(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
				TASK::TASK_SHOOT_AT_ENTITY(0, func_51(), -1, -687903391);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
				TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
				func_158(6);
				iLocal_347 = MISC::GET_GAME_TIMER();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				iLocal_1611++;
			}
			break;
		
		case 6:
			if (((((MISC::GET_GAME_TIMER() - iLocal_347) > 10000 || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_58())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_58())) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 18f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_58(), func_51(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_58(), 2735.576f, 1576.076f, 49.5361f, 3f, -1, 1048576000, 0, 1193033728);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_58(), 3f);
				iLocal_1611++;
			}
			break;
		
		case 7:
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.772f, 1576.932f, 51.6f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				uLocal_301 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2738.052f, 1574.118f, 51.0774f, -7.4845f, 0.9834f, 28.0021f, 67.1294f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_301, 1);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				CAM::SHAKE_CAM(uLocal_301, "HAND_SHAKE", 0.6f);
				CAM::SET_CAM_PARAMS(uLocal_301, 2737.683f, 1574.018f, 51.0801f, 3.5197f, -1.0329f, 37.5864f, 67.1294f, 4000, 0, 1, 2);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_58(), 0f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58());
				uLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(2735.436f, 1576.891f, 49.518f, 0f, 0f, -104.4f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_58(), uLocal_319, "missfinale_b_ig_3", "climb_ladder_mic", 1000f, -8f, 0, 0, 1148846080, 0);
				if (!HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					uLocal_300 = GlobalFunc_5104(2738.993f, 1575.487f, 52f, 0);
					HUD::SET_BLIP_COLOUR(uLocal_300, 1);
				}
				if (HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_58[1 /*5*/].f_1));
				}
				func_54(5);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_CLIMBS_LADDER"))
				{
					AUDIO::START_AUDIO_SCENE("FIN_2_MICHAEL_CLIMBS_LADDER");
				}
				iLocal_347 = MISC::GET_GAME_TIMER();
				func_53(0, 2739.405f, 1577.129f, 51.4361f, 1, 0, 1, 1, 3000, 0, 1);
				bLocal_329 = false;
				iLocal_1611++;
			}
			break;
		
		case 8:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_319) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_319) >= 0.46f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_unarmed"), 1);
				iLocal_1611++;
			}
			break;
		
		case 9:
			if ((!bLocal_329 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_347) >= 4090)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				bLocal_329 = true;
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_319) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_319) >= 1f) || (PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !bLocal_329))
			{
				func_168(1, 0, 0, 3000, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				ENTITY::SET_ENTITY_HEADING(func_51(), GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(func_51(), 1), ENTITY::GET_ENTITY_COORDS(func_58(), 1), 1));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_166(func_58()));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_164(func_58()), 1065353216);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58());
				ENTITY::SET_ENTITY_COORDS(func_58(), 2736.251f, 1578.114f, 65.5427f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_58(), 42.317f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_58(), 2729.607f, 1579.843f, 65.5428f, 2f, 20000, 1048576000, 0, 1193033728);
				PED::FORCE_PED_MOTION_STATE(func_58(), -530524, 1, 1, 0);
				func_54(5);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_UP_LADDER"))
				{
					AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_UP_LADDER");
				}
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				iLocal_1611++;
			}
			break;
		
		case 10:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2729.607f, 1579.843f, 65.5428f, 2f, 2f, 2f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_58(), 0);
				if (!HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					uLocal_300 = GlobalFunc_5104(2738.993f, 1575.487f, 52f, 0);
					HUD::SET_BLIP_COLOUR(uLocal_300, 1);
				}
				iLocal_1611++;
			}
			break;
		
		case 11:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2745.7f, 1573.3f, 50f, 1) > 110f)
			{
				func_143(0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2736.677f, 1575.869f, 50.0683f, 4f, 4f, 2f, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					HUD::REMOVE_BLIP(&uLocal_300);
				}
				iLocal_1611 = 0;
				func_156(6);
			}
			break;
	}
	if (iLocal_357 == 0)
	{
		if (iLocal_1611 > 9)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					GlobalFunc_173(&uLocal_110, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 1, 1);
					if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_UPST", 7, 0, 0, 0))
					{
						iLocal_357 = 1;
					}
				}
			}
		}
	}
}

var func_164(int iParam0)//Position - 0xBCD5
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var3 = { GlobalFunc_107(Var0) };
	return MISC::ATAN2(Var3.f_2, SYSTEM::VMAG(Var3.x, Var3.f_1, 0f));
}


float func_166(int iParam0)//Position - 0xBD50
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	if (fVar3 > 180f)
	{
		fVar3 = (fVar3 - 360f);
	}
	if (fVar3 < -180f)
	{
		fVar3 = (fVar3 + 360f);
	}
	return fVar3;
}


void func_168(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xBE13
{
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), iParam0, iParam4);
	if (bParam5)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
	bLocal_363 = false;
}




int func_172(struct<3> Param0, float fParam3)//Position - 0xBF84
{
	if (GlobalFunc_2773(func_58()))
	{
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 3, 22, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 6, 4, 0, 0);
		ENTITY::SET_ENTITY_COORDS(func_58(), Param0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(func_58(), fParam3);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(), iLocal_316);
		GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
		WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), -1, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_58(), 23, 0);
		PED::SET_PED_ACCURACY(func_58(), 10);
		PED::SET_PED_CONFIG_FLAG(func_58(), 208, 1);
		PED::SET_PED_CONFIG_FLAG(func_58(), 118, 0);
		PED::SET_PED_CONFIG_FLAG(func_58(), 109, 1);
		PED::SET_PED_CONFIG_FLAG(func_58(), 108, 1);
		TASK::SET_PED_PATH_AVOID_FIRE(func_58(), 0);
		ENTITY::SET_ENTITY_PROOFS(func_58(), 0, 1, 1, 0, 0, 0, 0, 0);
		return 1;
	}
	else if (func_173(&(Local_58[1 /*5*/]), 0, Param0, fParam3, 1, 0, 0))
	{
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 3, 22, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 6, 4, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(), iLocal_316);
		GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
		WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), -1, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_58(), 23, 0);
		PED::SET_PED_ACCURACY(func_58(), 10);
		PED::SET_PED_CONFIG_FLAG(func_58(), 208, 1);
		PED::SET_PED_CONFIG_FLAG(func_58(), 118, 0);
		PED::SET_PED_CONFIG_FLAG(func_58(), 109, 1);
		PED::SET_PED_CONFIG_FLAG(func_58(), 108, 1);
		TASK::SET_PED_PATH_AVOID_FIRE(func_58(), 0);
		ENTITY::SET_ENTITY_PROOFS(func_58(), 0, 1, 1, 0, 0, 0, 0, 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_58(), iLocal_1619);
		return 1;
	}
	return 0;
}

int func_173(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xC14B
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
			GlobalFunc_11318(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11333(*uParam0, bParam8);
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




















































































































































































































































































void func_449()//Position - 0x55656
{
	switch (iLocal_1611)
	{
		case 0:
			iLocal_315 = GlobalFunc_1535(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(func_58()))
			{
				ENTITY::SET_ENTITY_COORDS(func_58(), 2757.721f, 1537.803f, 39.3377f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_VISIBLE(func_58(), 0);
				if (!HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					uLocal_300 = GlobalFunc_5104(2766.714f, 1564.821f, 31.51167f, 0);
					HUD::SET_BLIP_COLOUR(uLocal_300, 1);
					if (iLocal_356 == 0)
					{
						GlobalFunc_164("FIN2_SPOT", 7500, 1);
						iLocal_356 = 1;
					}
				}
				WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), 50, 1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_pistol"), 1);
				GlobalFunc_Checkpoint3(3, "Stage 3: confrontation", 0, 0, 0, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1611++;
			}
			else
			{
				func_172(2757.721f, 1537.803f, 39.3377f, 341.1591f);
			}
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2765.76f, 1560.417f, 31f, 2768.037f, 1569.146f, 34f, 4.5f, 0, 1, 0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_58()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					HUD::REMOVE_BLIP(&uLocal_300);
				}
				ENTITY::SET_ENTITY_VISIBLE(func_58(), 1);
				WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), 50, 1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_pistol"), 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_58(), 27, 0);
				if (!HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
				{
					Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
				}
				func_158(4);
				AUDIO::TRIGGER_MUSIC_EVENT("FINB_STEPS");
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				uLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(2769.011f, 1563.39f, 31.525f, 0f, 0f, -105f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_51(), uLocal_318, "missfinale_b_ig_2", "mic_shoots_fr_f", 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(func_58(), uLocal_318, "missfinale_b_ig_2", "mic_shoots_fr_m", 1000f, -1.5f, 0, 0, 1148846080, 0);
				RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
				uLocal_301 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
				CAM::SET_CAM_ACTIVE(uLocal_301, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_301, uLocal_318, "mic_shoots_fr_cam", "missfinale_b_ig_2");
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::BEGIN_SRL();
				}
				else
				{
					STREAMING::END_SRL();
				}
				iLocal_1621 = MISC::GET_GAME_TIMER();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				func_53(0, 2769.011f, 1563.39f, 31.525f, 1, 0, 1, 1, 3000, 0, 1);
				iLocal_1611++;
			}
			break;
		
		case 2:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1621)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) >= 0.4f)
			{
				iLocal_1611++;
			}
			break;
		
		case 3:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1621)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) >= 0.63f)
			{
				PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2767.072f, 1569.261f, 31.51177f, 1);
				iLocal_1611++;
			}
			break;
		
		case 4:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1621)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) >= 0.75f)
			{
				iLocal_1611++;
			}
			break;
		
		case 5:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1621)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) >= 0.82f)
			{
				PED::SET_PED_SHOOTS_AT_COORD(func_58(), 2767.764f, 1565.576f, 32.76665f, 1);
				iLocal_1611++;
			}
			break;
		
		case 6:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1621)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) >= 0.86f)
			{
				GlobalFunc_730(305.7959f);
				func_168(1, 0, 0, 3000, 0, 1);
				STREAMING::END_SRL();
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_51(), 2769.765f, 1568.705f, 34.0682f, 2f, -1, 1048576000, 0, 1193033728);
				PED::FORCE_PED_MOTION_STATE(func_51(), -530524, 1, 1, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_315, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_58(), 27, 0);
				PED::SET_PED_ACCURACY(func_58(), 15);
				if (!HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
				{
					Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
				}
				TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2749.08f, 1525.366f, 39.3373f, func_51(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
				TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
				iLocal_1611++;
			}
			break;
		
		case 7:
			GlobalFunc_5979(713668775);
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2769.123f, 1566.615f, 38.5209f, 1f, 1f, 2f, 0, 1, 0))
			{
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_1611 = 0;
				func_156(4);
			}
			break;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2737.177f, 1522.528f, 24.3547f, 6f, 6f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2757.552f, 1528.321f, 31.9641f, 3f, 3f, 2f, 0, 1, 0))
	{
		func_143(0);
	}
}





void func_454()//Position - 0x55D2F
{
	switch (iLocal_1611)
	{
		case 0:
			GlobalFunc_Checkpoint3(4, "Stage 4: heli appears", 0, 0, 0, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2753.366f, 1523.521f, 39.3162f, func_51(), 3f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
			TASK::TASK_SHOOT_AT_COORD(0, 2764.538f, 1565.085f, 39.3267f, -1, -957453492);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
			TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
			iLocal_347 = MISC::GET_GAME_TIMER();
			iLocal_1611++;
			break;
		
		case 1:
			if ((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_58()) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_58())) || (MISC::GET_GAME_TIMER() - iLocal_347) > 8000) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 26f && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2753.366f, 1523.521f, 39.3162f, 3f, 3f, 3f, 0, 1, 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_58(), func_51(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_58(), 2743.275f, 1525.388f, 39.3162f, 3f, 20000, 0.3f, 0, 1193033728);
				iLocal_347 = MISC::GET_GAME_TIMER();
				func_158(5);
				iLocal_1611++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2743.275f, 1525.388f, 39.3162f, 2f, 2f, 2f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_58()))
				{
					PED::DELETE_PED(&(Local_58[1 /*5*/]));
				}
				iLocal_1611++;
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 1000)
			{
				iLocal_1611 = 0;
				func_156(5);
			}
			break;
	}
}

void func_455()//Position - 0x55F4E
{
	switch (iLocal_1611)
	{
		case 0:
			iLocal_326 = 0;
			iLocal_1620 = 0;
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1, 1, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51[1 /*2*/]))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_51[1 /*2*/]);
				}
				ENTITY::SET_ENTITY_INVINCIBLE(Local_51[1 /*2*/], 0);
			}
			uLocal_317 = PED::CREATE_SYNCHRONIZED_SCENE(2676.348f, 1594.871f, 23.595f, 0f, 0f, -90f, 2);
			WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_unarmed"), 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
			TASK::TASK_SYNCHRONIZED_SCENE(func_58(), uLocal_317, "missfinale_b_ig_1", "arrive_plant_m", 1000f, -8f, 0, 0, 1148846080, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(func_51(), 0))
			{
				GlobalFunc_2294(func_51(), 2676.507f, 1592.904f, 31.51181f);
				TASK::TASK_LOOK_AT_ENTITY(func_51(), func_58(), -1, 2048, 2);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2685.244f, 1634.94f, 20f, 2685.105f, 1598.704f, 33f, 25f, 0, 1, 0))
				{
					TASK::TASK_PLAY_ANIM(func_51(), "missfinale_b_ig_1", "arrive_plant_F", 1000f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_51(), func_58(), 5000);
				}
			}
			else
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(func_51(), 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_51[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_51[0 /*2*/], 0);
			}
			if (HUD::DOES_BLIP_EXIST(Local_51[1 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_51[1 /*2*/].f_1));
			}
			if (!HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
			{
				Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
			}
			VEHICLE::SET_VEHICLE_FIXED(Local_51[1 /*2*/]);
			RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
			GlobalFunc_6685(0);
			uLocal_301 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2701.965f, 1596.563f, 32.7892f, -1.3076f, 0.0972f, 109.9187f, 32f, 0, 2);
			CAM::SET_CAM_ACTIVE(uLocal_301, 1);
			CAM::SHAKE_CAM(uLocal_301, "HAND_SHAKE", 0.4f);
			CAM::SET_CAM_PARAMS(uLocal_301, 2701.943f, 1596.604f, 33.0893f, -3.5782f, 0.0972f, 113.5868f, 32f, 12000, 1, 1, 2);
			func_53(0, 2701.965f, 1596.563f, 32.7892f, 1, 0, 1, 1, 3000, 0, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_345 = 1;
			iLocal_347 = MISC::GET_GAME_TIMER();
			GlobalFunc_Checkpoint3(2, "Stage 2: power plant", 0, 0, 0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("FINB_ARRIVE");
			AUDIO::STOP_AUDIO_SCENES();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_ESCAPE_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_MICHAEL_ESCAPE_SCENE");
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_51[1 /*2*/], 0);
			GlobalFunc_574(858, 0);
			bLocal_329 = false;
			iLocal_1611++;
			break;
		
		case 1:
			if (iLocal_326 == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(func_51(), 0))
				{
					if (iLocal_328 == 1)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2673.883f, 1604.627f, 23.4956f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 239.5733f);
					}
					if (!ENTITY::IS_ENTITY_ON_SCREEN(func_51()))
					{
						GlobalFunc_2294(func_51(), 2693f, 1594f, 31f);
						TASK::TASK_LOOK_AT_ENTITY(func_51(), func_58(), -1, 2048, 2);
						iLocal_326 = 1;
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_51(), func_58(), 0);
						TASK::TASK_LOOK_AT_ENTITY(func_51(), func_58(), -1, 2048, 2);
						iLocal_326 = 1;
					}
				}
			}
			if (((MISC::GET_GAME_TIMER() - iLocal_347) > 1500 && (MISC::GET_GAME_TIMER() - iLocal_347) < 3700) && PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				TASK::CLEAR_PED_TASKS(func_51());
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				func_168(1, 0, 0, 3000, 0, 0);
				func_461(2672.413f, 1592.093f, 29.49044f);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_317))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_317, 1f);
				}
				iLocal_1611 = 2;
			}
			if ((!bLocal_329 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_347) >= 3700)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				bLocal_329 = true;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 4000)
			{
				func_168(1, 0, 0, 3000, 0, 0);
				func_461(2703.02f, 1593.134f, 31.51181f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(func_51(), 0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(15f, 1065353216);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_1611 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_5979(1785177548);
			GlobalFunc_5979(-2017877118);
			GlobalFunc_5979(-875674219);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_ESCAPE_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FIN_2_MICHAEL_ESCAPE_SCENE");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_317) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_317) >= 1f)
			{
				func_158(3);
				if ((GlobalFunc_709(func_51(), 1785177548, 1) || GlobalFunc_709(func_51(), -2017877118, 1)) || GlobalFunc_709(func_51(), -875674219, 1))
				{
					TASK::CLEAR_PED_TASKS(func_51());
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_58(), 2764.676f, 1559.75f, 31.4983f, 3f, 20000, 1048576000, 0, 1193033728);
				PED::FORCE_PED_MOTION_STATE(func_58(), -530524, 0, 1, 0);
				iLocal_1611++;
			}
			break;
		
		case 3:
			if (GlobalFunc_2773(func_58()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2764.676f, 1559.75f, 31.4983f, 4f, 4f, 2f, 0, 1, 0) && (!ENTITY::IS_ENTITY_ON_SCREEN(func_58()) || ENTITY::IS_ENTITY_OCCLUDED(func_58())))
				{
					if (HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_58[1 /*5*/].f_1));
					}
					GlobalFunc_881(&(Local_58[1 /*5*/]));
					if (!HUD::DOES_BLIP_EXIST(uLocal_300))
					{
						uLocal_300 = GlobalFunc_5104(2766.939f, 1565.062f, 31.4983f, 0);
					}
				}
			}
			else if (iLocal_356 == 0 && GlobalFunc_5171())
			{
				GlobalFunc_164("FIN2_SPOT", 7500, 1);
				iLocal_356 = 1;
			}
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2704.003f, 1593.456f, 31.9187f, 3f, 3f, 3f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_58()))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
					{
						Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_300))
					{
						HUD::REMOVE_BLIP(&uLocal_300);
					}
					ENTITY::SET_ENTITY_COORDS(func_58(), 2768.508f, 1575.349f, 31.4983f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_VISIBLE(func_58(), 1);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
					WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), -1, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2769.366f, 1578.535f, 31.51167f, func_51(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_51(), -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
					TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
					iLocal_347 = MISC::GET_GAME_TIMER();
					GlobalFunc_132(&(Local_58[2 /*5*/]), 1, 0, 1);
					iLocal_1611++;
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				}
				else
				{
					func_172(2768.508f, 1575.349f, 31.4983f, 0f);
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2765.76f, 1560.417f, 31f, 2768.037f, 1569.146f, 34f, 4.5f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_58()))
				{
					ENTITY::SET_ENTITY_COORDS(func_58(), 2757.721f, 1537.803f, 39.3377f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_VISIBLE(func_58(), 0);
					if (!HUD::DOES_BLIP_EXIST(uLocal_300))
					{
						uLocal_300 = GlobalFunc_5104(2766.714f, 1564.821f, 31.51167f, 0);
						if (iLocal_356 == 0)
						{
							GlobalFunc_164("FIN2_SPOT", 7500, 1);
							iLocal_356 = 1;
						}
					}
					WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), 50, 1, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_pistol"), 1);
					GlobalFunc_Checkpoint3(3, "Stage 3: confrontation", 0, 0, 0, 1);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					func_156(3);
					iLocal_1611 = 0;
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				}
				else
				{
					func_172(2757.721f, 1537.803f, 39.3377f, 341.1591f);
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_2773(func_58()))
			{
				if ((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_58()) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_58())) || (MISC::GET_GAME_TIMER() - iLocal_347) > 6000) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 30f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_58(), func_51(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_58(), 2767.414f, 1572.86f, 31.4983f, 3f, 20000, 1048576000, 0, 1193033728);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_1611++;
				}
			}
			else
			{
				iLocal_1611++;
			}
			break;
		
		case 5:
			if (GlobalFunc_2773(func_58()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2767.414f, 1572.86f, 31.4983f, 3f, 3f, 5f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_58[1 /*5*/].f_1));
					}
					GlobalFunc_881(&(Local_58[1 /*5*/]));
					uLocal_300 = GlobalFunc_5104(2766.939f, 1565.062f, 31.4983f, 0);
					if (iLocal_356 == 0)
					{
						GlobalFunc_164("FIN2_SPOT", 7500, 1);
						iLocal_356 = 1;
					}
					iLocal_1611++;
				}
			}
			else
			{
				iLocal_1611++;
			}
			break;
		
		case 6:
			func_156(3);
			iLocal_1611 = 0;
			break;
	}
	if (GlobalFunc_2773(func_58()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2767.5f, 1574.2f, 31.8f, 2.5f, 2.5f, 2.5f, 0, 1, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_58(), 1), ENTITY::GET_ENTITY_COORDS(func_51(), 1), 1) < 25f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_58[1 /*5*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_58[1 /*5*/].f_1));
				}
				GlobalFunc_881(&(Local_58[1 /*5*/]));
				if (!HUD::DOES_BLIP_EXIST(uLocal_300))
				{
					uLocal_300 = GlobalFunc_5104(2766.939f, 1565.062f, 31.4983f, 0);
					GlobalFunc_164("FIN2_SPOT", 7500, 1);
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2765.924f, 1565.142f, 31.51252f, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!iLocal_1620)
		{
			STREAMING::PREFETCH_SRL("finbconf");
			STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
			iLocal_1620 = 1;
		}
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(func_51(), 2765.924f, 1565.142f, 31.51252f, 40f, 40f, 40f, 0, 1, 0))
	{
		if (iLocal_1620)
		{
			STREAMING::END_SRL();
			iLocal_1620 = 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2765.76f, 1560.417f, 31f, 2768.037f, 1569.146f, 34f, 4.5f, 0, 1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_58()))
		{
			ENTITY::SET_ENTITY_COORDS(func_58(), 2757.721f, 1537.803f, 39.3377f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_VISIBLE(func_58(), 0);
			if (!HUD::DOES_BLIP_EXIST(uLocal_300))
			{
				uLocal_300 = GlobalFunc_5104(2766.714f, 1564.821f, 31.51167f, 0);
				HUD::SET_BLIP_COLOUR(uLocal_300, 1);
				if (iLocal_356 == 0)
				{
					GlobalFunc_164("FIN2_SPOT", 7500, 1);
					iLocal_356 = 1;
				}
			}
			WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), 50, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_pistol"), 1);
			GlobalFunc_Checkpoint3(3, "Stage 3: confrontation", 0, 0, 0, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_156(3);
			iLocal_1611 = 0;
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		else
		{
			func_172(2757.721f, 1537.803f, 39.3377f, 341.1591f);
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(func_51(), 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2759.543f, 1604.303f, 22f, 2731.96f, 1500.858f, 60f, 70f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2665.017f, 1593.253f, 22f, 2727.687f, 1593.788f, 40f, 50f, 0, 1, 0))
		{
			if (GlobalFunc_763(Local_51[0 /*2*/], 1093140480, 1, 1056964608, 0, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(func_51(), 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_51[0 /*2*/], 0);
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2716.3f, 1592.9f, 32f, 1) > 100f)
	{
		func_143(0);
	}
}






void func_461(struct<3> Param0)//Position - 0x56E90
{
	float fVar0;
	
	fVar0 = GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((fVar0 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
}




void func_465()//Position - 0x56F7D
{
	struct<3> Var0;
	
	switch (iLocal_1611)
	{
		case 0:
			GlobalFunc_Checkpoint3(1, "Stage 1: chase", 0, 0, 0, 1);
			VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(100f);
			iLocal_328 = 0;
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::TRIGGER_MUSIC_EVENT("FINB_CHASE");
			if ((GlobalFunc_Is_Mission_Retry() && Global_Current_Checkpoint == 1) && iLocal_346)
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51[1 /*2*/]))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_51[1 /*2*/], 1, "FIN2", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_51[1 /*2*/], 8000f);
				}
				VEHICLE::DELETE_ALL_TRAINS();
				if (!ENTITY::DOES_ENTITY_EXIST(Local_51[2 /*2*/]))
				{
					Local_51[2 /*2*/] = VEHICLE::CREATE_MISSION_TRAIN(19, Local_48, 1);
				}
				fLocal_348 = 0.38f;
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_51[0 /*2*/]);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_51[0 /*2*/], 20f);
				iLocal_346 = 0;
			}
			else
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51[1 /*2*/]))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_51[1 /*2*/], 1, "FIN2", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_51[1 /*2*/], 6000f);
				}
				VEHICLE::DELETE_ALL_TRAINS();
				if (!ENTITY::DOES_ENTITY_EXIST(Local_51[2 /*2*/]))
				{
					Local_51[2 /*2*/] = VEHICLE::CREATE_MISSION_TRAIN(19, Local_48, 1);
				}
				fLocal_348 = 0.3665f;
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_51[1 /*2*/], 1);
			iLocal_347 = MISC::GET_GAME_TIMER();
			MISC::CLEAR_AREA_OF_PROJECTILES(2384.377f, 2556.371f, 46.1006f, 4000f, 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_IN_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_IN_CAR");
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_51[1 /*2*/], "FIN_2_MICHAELS_CAR", 0);
			iLocal_1611++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
				{
					GlobalFunc_730(182.0164f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::DO_SCREEN_FADE_IN(800);
				GlobalFunc_164("FIN2_CHASE", 7500, 1);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 1500 && PED::IS_PED_IN_ANY_VEHICLE(func_51(), 0))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(func_51(), 0), 1);
				GlobalFunc_Checkpoint3(1, "Stage 1: chase", 0, 0, 0, 1);
				iLocal_322 = 0;
				iLocal_323 = 0;
				iLocal_1611++;
			}
			break;
		
		case 2:
			if (!iLocal_323)
			{
				if (GlobalFunc_713(func_58(), 2661.483f, 1639.283f, 23.5914f, 1) < 200f)
				{
					func_158(2);
					GlobalFunc_718(&uLocal_382, joaat("s_m_m_security_01"));
					ENTITY::CREATE_FORCED_OBJECT(2665.633f, 1638.529f, 24.3911f, 5f, joaat("prop_sec_barier_02b"), 1);
					iLocal_322 = 1;
					iLocal_323 = 1;
				}
			}
			else if (iLocal_322 && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				Local_58[2 /*5*/] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 2661.483f, 1639.283f, 23.5914f, 85.5309f, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_58[2 /*5*/], 1);
				ENTITY::SET_ENTITY_HEALTH(Local_58[2 /*5*/], 101);
				PED::SET_PED_MONEY(Local_58[2 /*5*/], 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_58[2 /*5*/], 3, 0, 0, 0);
				GlobalFunc_5174(&uLocal_382, joaat("s_m_m_security_01"));
				iLocal_322 = 0;
			}
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51[1 /*2*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58());
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_51[1 /*2*/], 0);
				WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), 50, 1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_pistol"), 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2676.507f, 1592.904f, 31.51181f, 2f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_SHOOT_AT_ENTITY(0, func_51(), -1, -687903391);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
				TASK::TASK_PERFORM_SEQUENCE(func_58(), uLocal_302);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_58());
				if (HUD::DOES_BLIP_EXIST(Local_51[1 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_51[1 /*2*/].f_1));
				}
				Local_58[1 /*5*/].f_1 = GlobalFunc_6797(func_58(), 1, 145);
				iLocal_1611++;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2667.2f, 1639f, 24f, 1) > 100f)
			{
				func_143(0);
			}
			PED::SET_PED_RESET_FLAG(func_58(), 343, 1);
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51[1 /*2*/]) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2676.17f, 1593.071f, 31.5119f, 5f, 5f, 2f, 0, 1, 0))
			{
				if (((GlobalFunc_713(func_51(), 2676.507f, 1592.904f, 31.51181f, 1) < 35f || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_58())) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_58())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_58(), func_51(), 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(func_51(), 0))
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == joaat("bus"))
						{
							iLocal_328 = 1;
						}
						GlobalFunc_763(PED::GET_VEHICLE_PED_IS_IN(func_51(), 0), 1093140480, 1, 1056964608, 0, 1);
					}
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1, 1, 0, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1);
					GlobalFunc_4948(&uLocal_303, 0, 0);
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					iLocal_1611 = 0;
					func_156(2);
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]) && !ENTITY::IS_ENTITY_DEAD(Local_51[1 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51[1 /*2*/]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_51[1 /*2*/], 1), 2611.379f, 1802.926f, 25.4156f) < (50f * 50f))
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(func_51(), 0))
	{
		if (GlobalFunc_713(func_51(), 2676.507f, 1592.904f, 31.51181f, 1) < 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2682.937f, 1557.595f, 23.49973f, 2683.116f, 1623.929f, 23.49991f, 35f, 0, 1, 0))
		{
			if (GlobalFunc_763(PED::GET_VEHICLE_PED_IS_IN(func_51(), 0), 1093140480, 1, 1056964608, 0, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(func_51(), 0, 0);
			}
		}
	}
	if ((GlobalFunc_2773(func_51()) && GlobalFunc_2773(func_58())) && GlobalFunc_2773(Local_51[1 /*2*/]))
	{
		fLocal_350 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_51(), 1), ENTITY::GET_ENTITY_COORDS(func_58(), 1));
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_51(), 1) };
		if (Var0.f_2 < 17.5f)
		{
			func_143(0);
		}
		func_491(&uLocal_349, &(Local_58[0 /*5*/]), &(Local_51[1 /*2*/]));
		VEHICLE::SET_PLAYBACK_SPEED(Local_51[1 /*2*/], uLocal_349);
		func_488();
		if (fLocal_350 > 225f)
		{
			func_143(0);
		}
	}
	GlobalFunc_10692(&uLocal_303, Local_51[1 /*2*/], 0, 0, 1, 1, 1);
	GlobalFunc_2216(Local_51[1 /*2*/].f_1, Local_51[1 /*2*/], 225f, 1061158912, 0);
	if (GlobalFunc_2773(Local_58[2 /*5*/]) && GlobalFunc_2773(Local_51[1 /*2*/]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(Local_58[2 /*5*/], Local_51[1 /*2*/], 2f, 2f, 2f, 0, 1, 0))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_58[2 /*5*/], 99);
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("FIN_2_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_FOCUS_CAM");
	}
	if (GlobalFunc_2773(func_58()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(2684.2f, 1615.1f, 24f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 45f)
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
}























void func_488()//Position - 0x58602
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_51[2 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_51[1 /*2*/], 1)) };
	fVar3 = ENTITY::GET_ENTITY_SPEED(Local_51[2 /*2*/]);
	if (fLocal_351 < 33500f)
	{
		if (Var0.f_1 < 1.5f)
		{
			fVar4 = (ENTITY::GET_ENTITY_SPEED(func_58()) * fLocal_348);
			if (fVar4 != 0f && fVar4 <= ENTITY::GET_ENTITY_SPEED(func_58()))
			{
				VEHICLE::SET_TRAIN_SPEED(Local_51[2 /*2*/], fVar4);
			}
		}
		else
		{
			fVar4 = ENTITY::GET_ENTITY_SPEED(Local_51[1 /*2*/]);
			if (fVar4 != 0f && fVar4 <= ENTITY::GET_ENTITY_SPEED(func_58()))
			{
				func_490(&fVar3, fVar4, 0.8f, 1);
				VEHICLE::SET_TRAIN_SPEED(Local_51[2 /*2*/], fVar3);
			}
		}
	}
	else
	{
		fVar3 = ENTITY::GET_ENTITY_SPEED(Local_51[2 /*2*/]);
		GlobalFunc_253(fVar3, 15f, 30f);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_51[2 /*2*/], fVar3);
	}
	fLocal_350 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_51(), 1), ENTITY::GET_ENTITY_COORDS(func_58(), 1));
}


void func_490(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x5871D
{
	float fVar0;
	
	if (*uParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (fVar0 + (fParam2 * SYSTEM::TIMESTEP()));
		}
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

void func_491(var uParam0, var uParam1, var uParam2)//Position - 0x58779
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	bool bVar15;
	
	if (GlobalFunc_2773(*uParam1) && GlobalFunc_2773(*uParam2))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam2, 1) };
		fLocal_350 = SYSTEM::VDIST(Var0, Var3);
		fVar6 = 4f;
		fVar7 = 10f;
		fVar8 = 50f;
		fVar9 = 100f;
		fVar10 = 1f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
		{
			fLocal_351 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam2);
			if (fLocal_351 < 5000f)
			{
				fVar7 = 20f;
				fVar8 = 50f;
				fVar9 = 120f;
			}
			if (fLocal_351 > 5000f && fLocal_351 < 15000f)
			{
				fVar7 = 25f;
				fVar8 = 50f;
				fVar9 = 200f;
			}
			if (fLocal_351 > 15000f && fLocal_351 < 21000f)
			{
				fVar7 = 40f;
				fVar8 = 60f;
				fVar9 = 250f;
			}
			if (fLocal_351 > 21000f && fLocal_351 < 25000f)
			{
				fVar7 = 60f;
				fVar8 = 80f;
				fVar9 = 250f;
			}
			if (fLocal_351 > 25000f && fLocal_351 < 30000f)
			{
				fVar7 = 70f;
				fVar8 = 250f;
				fVar9 = 300f;
			}
			if (fLocal_351 > 30000f && fLocal_351 < 35000f)
			{
				fVar7 = 85f;
				fVar8 = 300f;
				fVar9 = 300f;
			}
			if (fLocal_351 > 35000f)
			{
				fVar7 = 115f;
				fVar8 = 350f;
				fVar9 = 350f;
			}
			fVar11 = 0f;
			Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(*uParam2, Var0) };
			if (Var12.f_1 < 1f)
			{
				if (fLocal_350 > fVar8)
				{
					bVar15 = false;
					if (fLocal_350 > fVar9)
					{
						if (fLocal_350 > 200f)
						{
							bVar15 = true;
						}
						fLocal_350 = fVar9;
					}
					fVar11 = ((fLocal_350 - fVar8) / (fVar9 - fVar8));
					if (ENTITY::IS_ENTITY_ON_SCREEN(*uParam2) && !bVar15)
					{
						fVar10 = (0.7f - (0.2f * fVar11));
					}
					else
					{
						fVar10 = (0.5f - (0.3f * fVar11));
					}
				}
				else if (fLocal_350 > fVar7)
				{
					fVar11 = ((fLocal_350 - fVar7) / (fVar8 - fVar7));
					fVar10 = (1f - (0.3f * fVar11));
				}
				else
				{
					if (fLocal_350 < fVar6)
					{
						fLocal_350 = fVar6;
					}
					fVar11 = ((fVar7 - fLocal_350) / (fVar7 - fVar6));
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						fVar10 = (1f + (fVar11 * 2f));
					}
					else
					{
						fVar10 = (1f + fVar11);
					}
				}
			}
			else
			{
				if (fLocal_350 > 20f)
				{
					fLocal_350 = 20f;
				}
				fVar11 = (fLocal_350 / 20f);
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
				{
					fVar10 = (2.25f + fVar11);
				}
				else
				{
					fVar10 = (1f + fVar11);
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 500)
			{
				iLocal_352 = MISC::GET_GAME_TIMER();
			}
			func_490(uParam0, fVar10, 0.06f, 1);
		}
	}
}





void func_496()//Position - 0x58C02
{
	RECORDING::_0x208784099002BC30("M_KillMichael", 0);
	switch (iLocal_1611)
	{
		case 0:
			iLocal_324 = 0;
			iLocal_325 = 0;
			if (!ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]))
			{
				if (GlobalFunc_7984())
				{
					Local_51[0 /*2*/] = GlobalFunc_2251();
					if (ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_51[0 /*2*/], 1, 0);
					}
				}
			}
			if (GlobalFunc_Is_Mission_Retry() && !bLocal_1617)
			{
				CLOCK::SET_CLOCK_TIME(0, 0, 0);
				MISC::CLEAR_AREA(2381.488f, 2619.819f, 45.6327f, 200f, 1, 0, 0, 0);
				iLocal_1611 = 3;
			}
			else
			{
				func_539();
				if (bLocal_358)
				{
					iLocal_1611++;
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_9140(&Local_330, 0, 0, 2000, 1, 0, 0, 1);
				MISC::CLEAR_AREA(2381.488f, 2619.819f, 45.6327f, 200f, 1, 0, 0, 0);
				FIRE::STOP_FIRE_IN_RANGE(2381.488f, 2619.819f, 45.6327f, 200f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_51[1 /*2*/], 0))
					{
						func_158(1);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_51[1 /*2*/], 2);
						RECORDING::_0x48621C9FCA3EBD28(4);
						iLocal_1611++;
					}
				}
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]))
				{
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Local_51[0 /*2*/])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_51[0 /*2*/]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Local_51[0 /*2*/]))) || (VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Local_51[0 /*2*/])) && ENTITY::GET_ENTITY_MODEL(Local_51[0 /*2*/]) != joaat("bus")))
					{
						ENTITY::SET_ENTITY_COORDS(Local_51[0 /*2*/], 2382.333f, 2610.147f, 45.5779f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_51[0 /*2*/], 187.5107f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_51[0 /*2*/]);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_51[0 /*2*/], 0);
						func_522(0f, 0f, 0f, 0f, 1, 1);
						iLocal_1611 = 3;
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&(Local_51[0 /*2*/]));
					}
				}
				else
				{
					while (!func_498(&(Local_51[0 /*2*/]), 1, 2382.333f, 2610.147f, 45.5779f, 187.5107f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (iLocal_324 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 16090 && CAM::IS_SCREEN_FADED_IN())
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), Local_58[1 /*5*/], 0);
						iLocal_324 = 1;
					}
				}
				if (iLocal_325 == 0)
				{
					if (AUDIO::IS_PED_RINGTONE_PLAYING(Local_58[1 /*5*/]) && CUTSCENE::GET_CUTSCENE_TIME() > 19544)
					{
						AUDIO::STOP_PED_RINGTONE(Local_58[1 /*5*/]);
						iLocal_325 = 1;
					}
				}
			}
			if (!iLocal_366)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 82245)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_START");
					iLocal_366 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					ENTITY::SET_ENTITY_COORDS(func_51(), 2384.436f, 2620.929f, 45.60714f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_51(), 179.01f);
				}
				PED::FORCE_PED_MOTION_STATE(func_51(), -530524, 0, 1, 0);
				TASK::TASK_ENTER_VEHICLE(func_51(), Local_51[0 /*2*/], -1, -1, 1073741824, 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_359 = 1;
			}
			else
			{
				GlobalFunc_730(182.0164f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_58(), Local_51[1 /*2*/], -1);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_51[1 /*2*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(), iLocal_316);
				GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
				iLocal_360 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_51[1 /*2*/], 1, "FIN2", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_51[1 /*2*/], 2000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_51[1 /*2*/], 1);
				iLocal_361 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_380))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_380, func_51());
				}
				iLocal_362 = 1;
			}
			if ((((iLocal_359 && iLocal_360) && iLocal_361) && iLocal_362) || GlobalFunc_Is_Mission_Retry())
			{
				if (!iLocal_366)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_START");
					iLocal_366 = 1;
				}
				Local_51[1 /*2*/].f_1 = GlobalFunc_6783(Local_51[1 /*2*/], 1, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_51[0 /*2*/], 1);
				GlobalFunc_164("FIN2_CHASE", 7500, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_1611 = 0;
				func_156(1);
			}
			break;
	}
}


int func_498(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x590B3
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
























void func_522(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x5D122
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (GlobalFunc_104(24) != PLAYER::GET_PLAYERS_LAST_VEHICLE())
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				GlobalFunc_10367(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Param0, fParam3, 24, 0);
			}
		}
	}
}

















void func_539()//Position - 0x5F16F
{
	if (!bLocal_358)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("FIN_B_MCS_1_aandb", 8);
			iLocal_359 = 0;
			iLocal_360 = 0;
			iLocal_361 = 0;
			iLocal_362 = 0;
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_Has_Cutscene_Loaded())
		{
			GlobalFunc_8316(1, 1, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_58[1 /*5*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_58[1 /*5*/], "MICHAEL", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_51[1 /*2*/], "Michaels_car", 0, 0, 0);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_51(), joaat("weapon_pistol"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_51(), joaat("weapon_pistol"), 25, 1, 1);
			}
			iLocal_380 = GlobalFunc_6830(func_51(), joaat("weapon_pistol"), 1, 0, 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_380, "Franklins_weapon", 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::CLEAR_PED_PROP(Local_58[1 /*5*/], 0);
			iLocal_366 = 0;
			bLocal_358 = true;
		}
	}
}





void func_544()//Position - 0x5F3BC
{
	struct<3> Var0;
	
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		func_549(0);
	}
	iLocal_343 = 0;
	while (iLocal_343 <= (3 - 1))
	{
		if (!GlobalFunc_2773(Local_58[iLocal_343 /*5*/]))
		{
			if (iLocal_343 != 2)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_58[iLocal_343 /*5*/]));
			}
		}
		iLocal_343++;
	}
	iLocal_343 = 0;
	while (iLocal_343 <= (3 - 1))
	{
		if (!GlobalFunc_2773(Local_51[iLocal_343 /*2*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_51[iLocal_343 /*2*/]));
		}
		iLocal_343++;
	}
	TASK::ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(20f);
	PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	if (iLocal_1610 >= 2 && iLocal_344)
	{
		if (GlobalFunc_713(func_51(), 2727.148f, 1557.3f, 23.50072f, 1) > 170f)
		{
			func_143(0);
		}
		else if (GlobalFunc_713(func_51(), 2727.148f, 1557.3f, 23.50072f, 1) > 150f)
		{
			GlobalFunc_164("FIN2_LOST", 7500, 1);
		}
	}
	if (GlobalFunc_2773(func_58()) && iLocal_1610 < 7)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_58(), 1);
		PED::SET_PED_RESET_FLAG(func_58(), 390, 1);
	}
	if (iLocal_345)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (iLocal_1610 > 1)
		{
			if (Var0.f_2 > 66f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 8);
			}
			else if (Var0.f_2 > 50f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 7);
			}
			else if (Var0.f_2 > 47f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 6);
			}
			else if (Var0.f_2 > 44.5f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 5);
			}
			else if (Var0.f_2 > 41.5f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 4);
			}
			else if (Var0.f_2 > 39f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 3);
			}
			else if (Var0.f_2 > 33f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 2);
			}
			else if (Var0.f_2 > 25f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 1);
			}
			else
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 0);
			}
		}
	}
	func_548();
	func_547(iLocal_1610);
	GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 859);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 856);
		GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
	}
	else
	{
		GlobalFunc_503(0, -1);
		GlobalFunc_504(0, 856);
	}
}



void func_547(int iParam0)//Position - 0x5F754
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_1612)
			{
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_51(), 2458.077f, 2444.431f, 38f, 2452.169f, 2471.423f, 50f, 64f, 0, 1, 0))
					{
						GlobalFunc_173(&uLocal_110, 1, func_51(), "FRANKLIN", 0, 1);
						if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_SHOUT", 7, 0, 0, 0))
						{
							iLocal_1612++;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2611.656f, 2000.864f, 30.9074f, 30f, 30f, 7f, 0, 1, 0))
					{
						iLocal_1612++;
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2611.656f, 2000.864f, 30.9074f, 30f, 30f, 7f, 0, 1, 0))
					{
						if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_CHSE2", 7, 0, 0, 0))
						{
							iLocal_1612++;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2609.143f, 1803.906f, 25.49314f, 13f, 45f, 5f, 0, 1, 0))
					{
						iLocal_1612++;
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2609.143f, 1803.906f, 25.49314f, 13f, 45f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_51[2 /*2*/], 2609.143f, 1803.906f, 25.49314f, 13f, 45f, 5f, 0, 1, 0))
					{
						if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_TRAIN2", 7, 0, 0, 0))
						{
							iLocal_1612++;
						}
					}
					break;
			}
			break;
		
		case 2:
			switch (iLocal_1612)
			{
				case 0:
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					else
					{
						iLocal_1612++;
					}
					break;
				
				case 1:
					GlobalFunc_173(&uLocal_110, 1, func_51(), "FRANKLIN", 0, 1);
					if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_CALLS", 7, 0, 0, 0))
					{
						iLocal_1612++;
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2704.003f, 1593.456f, 31.9187f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4935();
						}
						iLocal_1612++;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2725.5f, 1590.1f, 31.7f, 1) < 60f)
					{
						if (!GlobalFunc_111())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_355) > 8000 && GlobalFunc_5171())
							{
								GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
							}
						}
						else
						{
							iLocal_355 = MISC::GET_GAME_TIMER();
						}
					}
					break;
				
				case 3:
					if (GlobalFunc_2773(func_58()))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_COW", 7, 0, 0, 0))
							{
								iLocal_1612++;
							}
						}
					}
					break;
				
				case 4:
					if (!GlobalFunc_111())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_355) > 9000 && GlobalFunc_5171())
						{
							GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_355 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_1612)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2766.939f, 1565.062f, 31.4983f, 3.25f, 3.25f, 2.5f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 0, 1);
						iLocal_1612++;
					}
					else if (!GlobalFunc_111())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_355) > 8000 && GlobalFunc_5171())
						{
							GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_355 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 1:
					if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_SHOOT", 7, 0, 0, 0))
					{
						iLocal_1612++;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_355) > 8000 && GlobalFunc_5171())
						{
							GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_355 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_1612)
			{
				case 0:
					if (!GlobalFunc_111())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_355) > 8000 && GlobalFunc_5171())
						{
							GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_355 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		
		case 5:
			switch (iLocal_1612)
			{
				case 0:
					if (((ENTITY::IS_ENTITY_AT_COORD(func_51(), 2729.504f, 1530.742f, 39.3167f, 2f, 2f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2738.485f, 1532.373f, 39.7673f, 2f, 2f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2754.612f, 1528.179f, 39.8887f, 7f, 7f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(func_51(), 2741.32f, 1523.05f, 45.25f, 1.5f, 1.5f, 1f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						iLocal_1612++;
					}
					else if (!GlobalFunc_111())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_355) > 8000 && GlobalFunc_5171())
						{
							GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_355 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 1:
					if (GlobalFunc_2773(func_58()))
					{
						GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 0, 1);
						if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_CHAT", 7, 0, 0, 0))
						{
							iLocal_1612++;
						}
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_355) > 8000 && GlobalFunc_5171())
						{
							GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_355 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		
		case 6:
			switch (iLocal_1612)
			{
				case 0:
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					else
					{
						iLocal_1612++;
					}
					break;
				
				case 1:
					if (GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_POWER", 7, 0, 0, 0))
					{
						iLocal_1612++;
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_AT_COORD(func_51(), 2735.737f, 1576.679f, 64.9689f, 1f, 1f, 1f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						iLocal_1612++;
					}
					else if (!GlobalFunc_111())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_355) > 8000 && GlobalFunc_5171())
						{
							GlobalFunc_10607(&uLocal_110, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_355 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
	}
}

void func_548()//Position - 0x5FE60
{
	if (bLocal_363)
	{
	}
}

void func_549(int iParam0)//Position - 0x5FE6E
{
	if (iParam0 != func_58())
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_58()))
		{
			if (!PED::IS_PED_INJURED(func_58()))
			{
				GlobalFunc_11060("MICHAEL", func_58(), joaat("player_zero"), 2);
			}
		}
		else
		{
			GlobalFunc_11116(0, "MICHAEL", 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 22, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 26, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 4, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		}
	}
	if (GlobalFunc_2773(func_51()) && iParam0 != func_51())
	{
		GlobalFunc_11060("FRANKLIN", PLAYER::PLAYER_PED_ID(), joaat("player_one"), 2);
	}
}





void func_554()//Position - 0x6095D
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_1615 == 1)
	{
		if (iLocal_1609 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				func_156(iLocal_1616);
			}
		}
		else if (iLocal_1609 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_597();
			GlobalFunc_762(&uLocal_382);
			if (!GlobalFunc_188())
			{
				func_594(iLocal_1616, &Var0, &uVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_382, Var0, 50f, 0);
			}
			func_158(iLocal_1616);
			while (!GlobalFunc_7725(&uLocal_382))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1610)
			{
				case 0:
					func_588();
					break;
				
				case 1:
					func_586();
					break;
				
				case 2:
					func_585();
					break;
				
				case 3:
					func_584();
					break;
				
				case 4:
					func_583();
					break;
				
				case 5:
					func_582();
					break;
				
				case 6:
					func_581();
					break;
				
				case 7:
					func_560();
					break;
				
				case 8:
					func_557();
					break;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_555();
			bLocal_1615 = false;
			if (!GlobalFunc_188())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_555()//Position - 0x60AC2
{
	if (GlobalFunc_2773(func_58()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(), iLocal_316);
		GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
		PED::SET_PED_ACCURACY(func_58(), 25);
	}
	GlobalFunc_173(&uLocal_110, 1, func_51(), "FRANKLIN", 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_51(), 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_51[1 /*2*/], 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_51[1 /*2*/], 1);
	}
	VEHICLE::SET_RANDOM_TRAINS(0);
	iLocal_344 = 1;
	func_556();
}

void func_556()//Position - 0x60B50
{
	if (ENTITY::DOES_ENTITY_EXIST(func_58()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(func_58(), joaat("weapon_pistol"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), -1, 1, 1);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_58(), joaat("weapon_pistol"), 1);
		}
	}
}

void func_557()//Position - 0x60B96
{
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
}



void func_560()//Position - 0x60CA5
{
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	while (!func_561(2686.794f, 1617.019f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_498(&(Local_51[1 /*2*/]), 0, 2682.682f, 1607.433f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_173(&(Local_58[1 /*5*/]), 0, 2735.626f, 1577.705f, 65.5224f, 326.7082f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_172(2734.588f, 1580.242f, 65.5234f, 326.7082f);
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	iLocal_345 = 1;
	MISC::CLEAR_AREA(2738.993f, 1575.487f, 49.6975f, 500f, 0, 0, 0, 0);
}

int func_561(struct<3> Param0, float fParam3)//Position - 0x60D84
{
	if (GlobalFunc_7698())
	{
		if ((((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_622()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_622())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_622())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_622())) && GlobalFunc_622() != joaat("bus"))
		{
			GlobalFunc_8368();
			while (!GlobalFunc_8367())
			{
				SYSTEM::WAIT(0);
			}
			Local_51[0 /*2*/] = func_562(Param0, fParam3);
			return 1;
		}
		else if (!func_498(&(Local_51[0 /*2*/]), 1, Param0, fParam3, 1, 1))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (!func_498(&(Local_51[0 /*2*/]), 1, Param0, fParam3, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_562(struct<3> Param0, float fParam3)//Position - 0x60E43
{
	return func_563(&(Global_93588.f_2167), Param0, fParam3, 0);
}

int func_563(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x60E5D
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
				func_572(iVar0, &(uParam0->f_12), 0, 1);
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









void func_572(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6170F
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









void func_581()//Position - 0x61C39
{
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	while (!func_561(2686.794f, 1617.019f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_498(&(Local_51[1 /*2*/]), 0, 2682.682f, 1607.433f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_173(&(Local_58[1 /*5*/]), 0, 2734.588f, 1580.242f, 65.5234f, 326.7082f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_172(2734.588f, 1580.242f, 65.5234f, 326.7082f);
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_CLIMB");
	iLocal_345 = 1;
	MISC::CLEAR_AREA(2738.993f, 1575.487f, 49.6975f, 500f, 0, 0, 0, 0);
}

void func_582()//Position - 0x61D22
{
	CLOCK::SET_CLOCK_TIME(23, 0, 0);
	while (!func_561(2686.794f, 1617.019f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_498(&(Local_51[1 /*2*/]), 0, 2682.682f, 1607.433f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_172(2740.318f, 1521.151f, 44.4857f, 326.7082f))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_STEPS");
	iLocal_345 = 1;
	MISC::CLEAR_AREA(2758.258f, 1541.88f, 39.3167f, 500f, 0, 0, 0, 0);
	PED::FORCE_PED_MOTION_STATE(func_51(), -1115154469, 1, 1, 0);
}

void func_583()//Position - 0x61DFB
{
	CLOCK::SET_CLOCK_TIME(22, 50, 0);
	while (!func_561(2686.794f, 1617.019f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_498(&(Local_51[1 /*2*/]), 0, 2682.682f, 1607.433f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_172(2761.163f, 1549.152f, 39.3377f, 336.6246f))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_STEPS");
	iLocal_345 = 1;
	MISC::CLEAR_AREA(2762.268f, 1555.856f, 39.3163f, 500f, 0, 0, 0, 0);
	PED::FORCE_PED_MOTION_STATE(func_51(), -1115154469, 1, 1, 0);
}

void func_584()//Position - 0x61ED4
{
	CLOCK::SET_CLOCK_TIME(22, 45, 0);
	while (!func_561(2686.794f, 1617.019f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_498(&(Local_51[1 /*2*/]), 0, 2682.682f, 1607.433f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_172(2752.18f, 1561.709f, 39.3163f, 0f))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	iLocal_345 = 1;
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_ARRIVE");
	MISC::CLEAR_AREA(2691.374f, 1641.821f, 24.2936f, 500f, 0, 0, 0, 0);
	PED::FORCE_PED_MOTION_STATE(func_51(), -1115154469, 1, 1, 0);
}

void func_585()//Position - 0x61FA9
{
	CLOCK::SET_CLOCK_TIME(22, 30, 0);
	while (!func_498(&(Local_51[1 /*2*/]), 0, 2682.682f, 1607.433f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_172(2675.83f, 1593.164f, 31.498f, 266.7406f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_561(2689.989f, 1615.612f, 23.6365f, 146.5498f))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_51[0 /*2*/], 0, 0, 0);
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_ARRIVE");
	MISC::CLEAR_AREA(2691.374f, 1641.821f, 24.2936f, 500f, 0, 0, 0, 0);
}

void func_586()//Position - 0x62079
{
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	while (!func_498(&(Local_51[1 /*2*/]), 0, 2378.12f, 2612.7f, 45.6341f, 181.5441f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_11337(&(Local_58[1 /*5*/]), 0, Local_51[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_561(2382.333f, 2610.147f, 45.5779f, 187.5107f))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(func_58()))
	{
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 3, 22, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_58(), 6, 4, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(), iLocal_316);
		GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
		WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), -1, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_58(), 23, 0);
		PED::SET_PED_ACCURACY(func_58(), 10);
		PED::SET_PED_CONFIG_FLAG(func_58(), 208, 1);
		PED::SET_PED_CONFIG_FLAG(func_58(), 118, 0);
		PED::SET_PED_CONFIG_FLAG(func_58(), 109, 1);
		PED::SET_PED_CONFIG_FLAG(func_58(), 108, 1);
		TASK::SET_PED_PATH_AVOID_FIRE(func_58(), 0);
		ENTITY::SET_ENTITY_PROOFS(func_58(), 0, 1, 1, 0, 0, 0, 0, 0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(Local_51[0 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_INTO_VEHICLE(func_51(), Local_51[0 /*2*/], -1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_51[0 /*2*/], 0))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(Local_51[0 /*2*/], 2);
			VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(Local_51[0 /*2*/], 2f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_51[0 /*2*/]);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_51[0 /*2*/], 1, 1);
		}
	}
	if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
	{
		PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
	}
	iLocal_346 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_51[1 /*2*/], 0))
		{
			Local_51[1 /*2*/].f_1 = GlobalFunc_6783(Local_51[1 /*2*/], 1, 0);
			VEHICLE::SET_VEHICLE_LIGHTS(Local_51[1 /*2*/], 2);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_51[2 /*2*/]))
	{
		Local_51[2 /*2*/] = VEHICLE::CREATE_MISSION_TRAIN(19, Local_48, 1);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_CHASE");
	MISC::CLEAR_AREA(2387.603f, 2551.298f, 46.2726f, 500f, 0, 0, 0, 0);
	GlobalFunc_164("FIN2_CHASE", 7500, 1);
}


void func_588()//Position - 0x62379
{
	Local_58[0 /*5*/] = PLAYER::PLAYER_PED_ID();
	if (GlobalFunc_Is_Mission_Retry())
	{
		CLOCK::SET_CLOCK_TIME(0, 0, 0);
		while (!func_498(&(Local_51[1 /*2*/]), 0, 2378.12f, 2612.7f, 45.6341f, 181.5441f, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!GlobalFunc_11337(&(Local_58[1 /*5*/]), 0, Local_51[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_561(2382.333f, 2610.147f, 45.5779f, 187.5107f))
		{
			SYSTEM::WAIT(0);
		}
		if (!PED::IS_PED_INJURED(func_58()))
		{
			PED::SET_PED_COMPONENT_VARIATION(func_58(), 3, 22, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(func_58(), 4, 26, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(func_58(), 6, 4, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(), iLocal_316);
			GlobalFunc_173(&uLocal_110, 0, func_58(), "MICHAEL", 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), 1);
			WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(func_58(), 23, 0);
			PED::SET_PED_ACCURACY(func_58(), 10);
			PED::SET_PED_CONFIG_FLAG(func_58(), 208, 1);
			PED::SET_PED_CONFIG_FLAG(func_58(), 118, 0);
			PED::SET_PED_CONFIG_FLAG(func_58(), 109, 1);
			PED::SET_PED_CONFIG_FLAG(func_58(), 108, 1);
			TASK::SET_PED_PATH_AVOID_FIRE(func_58(), 0);
			ENTITY::SET_ENTITY_PROOFS(func_58(), 0, 1, 1, 0, 0, 0, 0, 0);
		}
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 1);
		}
		else
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}






void func_594(int iParam0, var uParam1, var uParam2)//Position - 0x62FC8
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 2383.603f, 2612.298f, 46.16f };
			*uParam2 = 0f;
			break;
		
		case 1:
			*uParam1 = { 2383.603f, 2612.298f, 46.16f };
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = { 2686.5f, 1613.42f, 23.61f };
			*uParam2 = 0f;
			break;
		
		case 3:
			*uParam1 = { 2745.117f, 1584.761f, 31.498f };
			*uParam2 = 257.6353f;
			break;
		
		case 4:
			*uParam1 = { 2768.772f, 1564.327f, 36.6811f };
			*uParam2 = 340.9131f;
			break;
		
		case 5:
			*uParam1 = { 2758.258f, 1541.88f, 39.3167f };
			*uParam2 = 160.8288f;
			break;
		
		case 6:
			*uParam1 = { 2738.993f, 1575.487f, 49.6975f };
			*uParam2 = 71.989f;
			break;
		
		case 7:
			*uParam1 = { 2738.993f, 1575.487f, 49.6975f };
			*uParam2 = 71.989f;
			break;
		
		case 8:
			*uParam1 = { 2677.299f, 1600.24f, 23.4956f };
			*uParam2 = -22.33f;
			break;
	}
}



void func_597()//Position - 0x6337B
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	iLocal_343 = 0;
	while (iLocal_343 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_58[iLocal_343 /*5*/]) && !PED::IS_PED_INJURED(Local_58[iLocal_343 /*5*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_58[iLocal_343 /*5*/], 0))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_58[iLocal_343 /*5*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_58[iLocal_343 /*5*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			if (Local_58[iLocal_343 /*5*/] != PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_881(&(Local_58[iLocal_343 /*5*/]));
			}
		}
		iLocal_343++;
	}
	iLocal_343 = 0;
	while (iLocal_343 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iLocal_343 /*2*/]))
		{
			if (Local_51[iLocal_343 /*2*/] != Local_51[2 /*2*/])
			{
				GlobalFunc_7089(&(Local_51[iLocal_343 /*2*/]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_51[iLocal_343 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_51[iLocal_343 /*2*/].f_1));
			}
		}
		iLocal_343++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_51[2 /*2*/]))
	{
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_51[2 /*2*/]), 0);
	}
	GlobalFunc_130(&iLocal_380);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	func_168(1, 0, 0, 3000, 0, 0);
	bLocal_358 = false;
	iLocal_344 = 0;
	iLocal_356 = 0;
	iLocal_345 = 0;
	iLocal_346 = 0;
	iLocal_359 = 0;
	iLocal_360 = 0;
	iLocal_361 = 0;
	iLocal_362 = 0;
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	GlobalFunc_4935();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_4948(&uLocal_303, 0, 0);
	if (HUD::DOES_BLIP_EXIST(uLocal_300))
	{
		HUD::REMOVE_BLIP(&uLocal_300);
	}
	GlobalFunc_5652(&uLocal_275, 1, 0);
	GlobalFunc_7139(&uLocal_275, 0);
	iLocal_343 = 0;
	while (iLocal_343 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_74[iLocal_343 /*5*/]))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_74[iLocal_343 /*5*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_74[iLocal_343 /*5*/]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_74[iLocal_343 /*5*/]));
			}
		}
		iLocal_343++;
	}
}











void func_608()//Position - 0x6392C
{
	switch (iLocal_1609)
	{
		case 1:
			iLocal_1609 = 2;
			iLocal_1611 = -1;
			break;
		
		case 2:
			iLocal_1609 = 3;
			iLocal_1611 = 0;
			iLocal_1612 = 0;
			iLocal_1610 = iLocal_1613;
			break;
		
		case 3:
			iLocal_1613 = -1;
			iLocal_1609 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1614) > 1500)
			{
				iLocal_1614 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}




void func_612()//Position - 0x63B76
{
	struct<3> Var0;
	var uVar3;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]))
		{
			while (!func_498(&(Local_51[1 /*2*/]), 0, 2394.1f, 2622f, 45.8f, 0f, 1, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_58[1 /*5*/]))
		{
			while (!func_173(&(Local_58[1 /*5*/]), 0, 2398.6f, 2620.9f, 45.5f, 0f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(func_58(), iLocal_1619);
		}
	}
	GlobalFunc_52(0, 1);
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo2"), 1);
	Local_58[0 /*5*/] = PLAYER::PLAYER_PED_ID();
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_316, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_316);
	PED::ADD_SCENARIO_BLOCKING_AREA(2644.987f, 1340.449f, 20f, 2839.826f, 1728.39f, 25f, 0, 1, 1, 1);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalB1sta");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finaBroute1A");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalbroute2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalbround");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalb1st");
	GlobalFunc_601(2, 1);
	GlobalFunc_601(0, 1);
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_Is_Mission_Retry())
		{
			iLocal_1616 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544)
			{
				iLocal_1616++;
				if (iLocal_1616 >= 8)
				{
					iLocal_1616 = 8;
				}
			}
			if (iLocal_1616 == 0)
			{
				iLocal_1616 = 1;
			}
			bLocal_1617 = false;
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			func_594(iLocal_1616, &Var0, &uVar3);
			GlobalFunc_5196(Var0, uVar3, 1, 0);
		}
		bLocal_1615 = true;
	}
	else
	{
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			iLocal_1616 = 0;
		}
		bLocal_1617 = false;
		GlobalFunc_Checkpoint3(0, "Stage 0: meet", 0, 0, 0, 1);
		iLocal_1610 = 0;
		func_156(iLocal_1610);
		func_158(0);
		while (!GlobalFunc_7725(&uLocal_382))
		{
			SYSTEM::WAIT(0);
		}
		func_588();
		func_555();
	}
	GlobalFunc_563(1);
	iLocal_1611 = 0;
}






void func_618()//Position - 0x63EA9
{
	Local_330.f_1 = GlobalFunc_7719();
	if (Local_330.f_2 == 0)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_342 = 0;
			CUTSCENE::REQUEST_CUTSCENE("FIN_B_MCS_1_aandb", 8);
			iLocal_359 = 0;
			iLocal_360 = 0;
			iLocal_361 = 0;
			iLocal_362 = 0;
		}
	}
	while (!func_619(25, &Local_330, 1, 0, 0, 1, 1))
	{
		if (Local_330.f_2 == 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*2*/]))
			{
				func_498(&(Local_51[1 /*2*/]), 0, 2394.1f, 2622f, 45.8f, 0f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_58[1 /*5*/]))
			{
				func_172(2398.6f, 2620.9f, 45.5f, 0f);
			}
		}
		SYSTEM::WAIT(0);
		if (Local_330.f_2 == 2 && !iLocal_342)
		{
			GlobalFunc_8316(1, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			if (GlobalFunc_7984())
			{
				Local_51[0 /*2*/] = GlobalFunc_2251();
				if (ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_51[0 /*2*/], 1, 0);
				}
			}
			MISC::CLEAR_AREA(-116.5982f, 493.4021f, 136.6638f, 50f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(2381.488f, 2619.819f, 45.6327f, 200f, 1, 0, 0, 0);
			iLocal_342 = 1;
		}
	}
}

bool func_619(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x63FE1
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_620(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_620(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x64011
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
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			if (func_623(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
		else if (func_623(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
					func_623(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
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



int func_623(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, int iParam8)//Position - 0x6483E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = GlobalFunc_7719();
			iVar5 = GlobalFunc_7719();
			GlobalFunc_94(&iVar5, iParam0);
			GlobalFunc_95(&iVar5, iParam1);
			GlobalFunc_96(&iVar5, 0);
			if (GlobalFunc_7640(*uParam4, iVar5))
			{
				GlobalFunc_8385(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			GlobalFunc_8384(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			GlobalFunc_8057((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
			}
			GlobalFunc_738();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			GlobalFunc_737();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, iParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::_CLEAR_CLOUD_HAT();
							MISC::LOAD_CLOUD_HAT(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				GlobalFunc_8385(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(GlobalFunc_208(iVar5), GlobalFunc_207(iVar5), GlobalFunc_206(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = GlobalFunc_253(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			GlobalFunc_8385(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(GlobalFunc_208(iVar5), GlobalFunc_207(iVar5), GlobalFunc_206(iVar5));
			if (GlobalFunc_209(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(GlobalFunc_209(iVar5), GlobalFunc_210(iVar5), GlobalFunc_4975(iVar5));
			}
			GlobalFunc_5077();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}
























void func_647()//Position - 0x662B9
{
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_FAIL");
	VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(0f);
	OBJECT::_0x762DB2D380B48D04(128);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (!PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID()))
	{
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
	}
	STREAMING::END_SRL();
	iLocal_343 = 0;
	while (iLocal_343 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_58[iLocal_343 /*5*/]) && !PED::IS_PED_INJURED(Local_58[iLocal_343 /*5*/]))
		{
			if (Local_58[iLocal_343 /*5*/] != PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_132(&(Local_58[iLocal_343 /*5*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_58[iLocal_343 /*5*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_58[iLocal_343 /*5*/].f_1));
			}
		}
		iLocal_343++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	iLocal_343 = 0;
	while (iLocal_343 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iLocal_343 /*2*/]))
		{
			GlobalFunc_131(&(Local_51[iLocal_343 /*2*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_51[iLocal_343 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_51[iLocal_343 /*2*/].f_1));
		}
		iLocal_343++;
	}
	GlobalFunc_130(&iLocal_380);
	iLocal_343 = 0;
	while (iLocal_343 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_74[iLocal_343 /*5*/]))
		{
			GlobalFunc_129(&(Local_74[iLocal_343 /*5*/]), 0);
		}
		iLocal_343++;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (iLocal_365 == 0)
	{
		CAM::DESTROY_ALL_CAMS(0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		func_168(1, 0, 0, 3000, 0, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	}
	GlobalFunc_4935();
	if (HUD::DOES_BLIP_EXIST(uLocal_300))
	{
		HUD::REMOVE_BLIP(&uLocal_300);
	}
	GlobalFunc_4948(&uLocal_303, 0, 0);
	GlobalFunc_5652(&uLocal_275, 1, 0);
	GlobalFunc_7139(&uLocal_275, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	VEHICLE::SET_RANDOM_TRAINS(1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	GlobalFunc_52(1, 1);
	GlobalFunc_563(0);
	GlobalFunc_601(2, 0);
	GlobalFunc_601(0, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	iLocal_344 = 0;
	iLocal_356 = 0;
	iLocal_345 = 0;
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalB1sta");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finaBroute1A");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalbroute2");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalbround");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalb1st");
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	func_648();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

void func_648()//Position - 0x66516
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_1618 == 1)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_1618 = 0;
		}
	}
}





