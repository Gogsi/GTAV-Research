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
	var uLocal_29 = 0;
	struct<3> Local_30 = { 0, 0, 0 } ;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	struct<13> Local_36[6];
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 2;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 2;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 20;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = -1;
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
	var uLocal_182 = 1065353216;
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
	var uLocal_209 = -1;
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
	var uLocal_239 = 1065353216;
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
	var uLocal_266 = -1;
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
	var uLocal_296 = 1065353216;
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
	var uLocal_323 = -1;
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
	var uLocal_353 = 1065353216;
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
	var uLocal_380 = -1;
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
	var uLocal_410 = 1065353216;
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
	var uLocal_437 = -1;
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
	var uLocal_467 = 1065353216;
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
	var uLocal_494 = -1;
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
	var uLocal_524 = 1065353216;
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
	var uLocal_551 = -1;
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
	var uLocal_581 = 1065353216;
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
	var uLocal_608 = -1;
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
	var uLocal_638 = 1065353216;
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
	var uLocal_665 = -1;
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
	var uLocal_695 = 1065353216;
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
	var uLocal_722 = -1;
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
	var uLocal_752 = 1065353216;
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
	var uLocal_779 = -1;
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
	var uLocal_809 = 1065353216;
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
	var uLocal_836 = -1;
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
	var uLocal_866 = 1065353216;
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
	var uLocal_893 = -1;
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
	var uLocal_923 = 1065353216;
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
	var uLocal_950 = -1;
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
	var uLocal_980 = 1065353216;
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
	var uLocal_1007 = -1;
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
	var uLocal_1037 = 1065353216;
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
	var uLocal_1064 = -1;
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
	var uLocal_1094 = 1065353216;
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
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = -1;
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
	var uLocal_1151 = 1065353216;
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
	var uLocal_1178 = -1;
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
	var uLocal_1208 = 1065353216;
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
	var uLocal_1235 = -1;
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
	var uLocal_1265 = 1065353216;
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
	var uLocal_1289 = 16;
	var uLocal_1290 = 0;
	var uLocal_1291 = -1082130432;
	var uLocal_1292 = 0;
	var uLocal_1293 = -1082130432;
	var uLocal_1294 = 0;
	var uLocal_1295 = -1082130432;
	var uLocal_1296 = 0;
	var uLocal_1297 = -1082130432;
	var uLocal_1298 = 0;
	var uLocal_1299 = -1082130432;
	var uLocal_1300 = 0;
	var uLocal_1301 = -1082130432;
	var uLocal_1302 = 0;
	var uLocal_1303 = -1082130432;
	var uLocal_1304 = 0;
	var uLocal_1305 = -1082130432;
	var uLocal_1306 = 0;
	var uLocal_1307 = -1082130432;
	var uLocal_1308 = 0;
	var uLocal_1309 = -1082130432;
	var uLocal_1310 = 0;
	var uLocal_1311 = -1082130432;
	var uLocal_1312 = 0;
	var uLocal_1313 = -1082130432;
	var uLocal_1314 = 0;
	var uLocal_1315 = -1082130432;
	var uLocal_1316 = 0;
	var uLocal_1317 = -1082130432;
	var uLocal_1318 = 0;
	var uLocal_1319 = -1082130432;
	var uLocal_1320 = 0;
	var uLocal_1321 = -1082130432;
	var uLocal_1322 = 16;
	var uLocal_1323 = 0;
	var uLocal_1324 = -1082130432;
	var uLocal_1325 = 0;
	var uLocal_1326 = -1082130432;
	var uLocal_1327 = 0;
	var uLocal_1328 = -1082130432;
	var uLocal_1329 = 0;
	var uLocal_1330 = -1082130432;
	var uLocal_1331 = 0;
	var uLocal_1332 = -1082130432;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1082130432;
	var uLocal_1335 = 0;
	var uLocal_1336 = -1082130432;
	var uLocal_1337 = 0;
	var uLocal_1338 = -1082130432;
	var uLocal_1339 = 0;
	var uLocal_1340 = -1082130432;
	var uLocal_1341 = 0;
	var uLocal_1342 = -1082130432;
	var uLocal_1343 = 0;
	var uLocal_1344 = -1082130432;
	var uLocal_1345 = 0;
	var uLocal_1346 = -1082130432;
	var uLocal_1347 = 0;
	var uLocal_1348 = -1082130432;
	var uLocal_1349 = 0;
	var uLocal_1350 = -1082130432;
	var uLocal_1351 = 0;
	var uLocal_1352 = -1082130432;
	var uLocal_1353 = 0;
	var uLocal_1354 = -1082130432;
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
	var uLocal_1371 = -1082130432;
	var uLocal_1372 = -1082130432;
	var uLocal_1373 = 1;
	var uLocal_1374 = 1;
	var uLocal_1375 = 1;
	var uLocal_1376 = -1;
	var uLocal_1377 = -1;
	var uLocal_1378 = -1;
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
	int iLocal_1397 = 0;
	int iLocal_1398 = 0;
	int iLocal_1399 = 0;
	int iLocal_1400 = 0;
	int iLocal_1401 = 0;
	float fLocal_1402 = 0f;
	float fLocal_1403 = 0f;
	int iLocal_1404 = 0;
	float fLocal_1405 = 0f;
	float fLocal_1406 = 0f;
	bool bLocal_1407 = 0;
	int iLocal_1408 = 0;
	int iLocal_1409 = 0;
	int iLocal_1410 = 0;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	float fLocal_1413 = 0f;
	float fLocal_1414 = 0f;
	float fLocal_1415 = 0f;
	int iLocal_1416 = 0;
	char* sLocal_1417 = NULL;
	var uLocal_1418 = 0;
	int iLocal_1419 = 0;
	bool bLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	struct<3> Local_1425[10];
	int iLocal_1456 = 0;
	int iLocal_1457 = 0;
	struct<3> Local_1458 = { 0, 0, 0 } ;
	float fLocal_1461 = 0f;
	struct<3> Local_1462 = { 0, 0, 0 } ;
	struct<3> Local_1465 = { 0, 0, 0 } ;
	struct<3> Local_1468 = { 0, 0, 0 } ;
	struct<14> Local_1471[18];
	struct<2> Local_1724[14];
	int iLocal_1753 = 0;
	int iLocal_1754 = 0;
	int iLocal_1755 = 0;
	int iLocal_1756 = 0;
	int iLocal_1757 = 0;
	int iLocal_1758 = 0;
	struct<10> Local_1759[16];
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	char* sLocal_1924 = NULL;
	char* sLocal_1925 = NULL;
	var uLocal_1926 = 0;
	int iLocal_1927 = 0;
	struct<12> Local_1928[5];
	int iLocal_1989 = 0;
	struct<6> Local_1990[20];
	bool bLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 4;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 4;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 4;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 4;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 4;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 4;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 4;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	struct<21> Local_2157 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_2191 = 0;
	var uLocal_2192 = 0;
	struct<468> Local_2193 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1084227584, 0, 1109393408, 0, 0, 1125515264, 0, 0, 0, 0, 0, 0, 0, 1065848144, 1074048008, 1073959928, 1077206319, -1033122611, -1055016354, 0, 0, 0, 0, 0, 0, 1105199104, 1092616192, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800 } ;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = -1;
	var uLocal_2666 = -1;
	var uLocal_2667 = -1;
	var uLocal_2668 = -1;
	var uLocal_2669 = -1;
	var uLocal_2670 = -1;
	var uLocal_2671 = -1;
	var uLocal_2672 = -1;
	var uLocal_2673 = 0;
	struct<11> Local_2674[5];
	struct<3> Local_2730 = { 0, 0, 0 } ;
	struct<3> Local_2733 = { 0, 0, 0 } ;
	struct<3> Local_2736 = { 0, 0, 0 } ;
	struct<3> Local_2739 = { 0, 0, 0 } ;
	float fLocal_2742 = 0f;
	int iLocal_2743 = 0;
	int iLocal_2744 = 0;
	bool bLocal_2745 = 0;
	bool bLocal_2746 = 0;
	int iLocal_2747 = 0;
	int iLocal_2748[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2765 = 0;
	int iLocal_2766 = 0;
	int iLocal_2767 = 0;
	struct<81> Local_2768[4];
	int iLocal_3093 = 0;
	var uLocal_3094 = 8;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	int iLocal_3103[3] = { 0, 0, 0 };
	int iLocal_3107 = 0;
	int iLocal_3108 = 0;
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	int iLocal_3111 = 0;
	int iLocal_3112 = 0;
	int iLocal_3113 = 0;
	int iLocal_3114 = 0;
	bool bLocal_3115 = 0;
	var uLocal_3116 = 0;
	struct<5> Local_3117 = { 0, 0, 0, 0, 0 } ;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 21;
	var uLocal_3125 = 6;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	int iLocal_3131 = 0;
	int iLocal_3132 = 0;
	int iLocal_3133 = 0;
	int iLocal_3134 = 0;
	int iLocal_3135 = 0;
	int iLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 3;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 1092616192;
	var uLocal_3145 = 1101004800;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 3;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	bool bLocal_3162 = 0;
	struct<9> Local_3163[17];
	float fLocal_3317 = 0f;
	struct<8> Local_3318[72];
	int iLocal_3895[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3931 = 0;
	float fLocal_3932 = 0f;
	var uLocal_3933 = 0;
	int iLocal_3934 = 0;
	int iLocal_3935 = 0;
	int iLocal_3936 = 0;
	int iLocal_3937 = 0;
	int iLocal_3938 = 0;
	int iLocal_3939 = 0;
	int iLocal_3940 = 0;
	int iLocal_3941 = 0;
	int iLocal_3942 = 0;
	char cLocal_3943[24] = "";
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	struct<3> Local_3949 = { 0, 0, 0 } ;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	struct<6> Local_3955 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_3961 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3967 = 0;
	int iLocal_3968 = 0;
	bool bLocal_3969 = 0;
	int iLocal_3970 = 0;
	char* sLocal_3971 = NULL;
	char* sLocal_3972 = NULL;
	int iLocal_3973 = 0;
	var uLocal_3974 = 0;
	bool bLocal_3975 = 0;
	char* sLocal_3976 = NULL;
	var uLocal_3977[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3988 = 10;
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
	int iLocal_3999 = 0;
	struct<3> Local_4000[4];
	char* sLocal_4013 = NULL;
	float fLocal_4014 = 0f;
	int iLocal_4015 = 0;
	bool bLocal_4016 = 0;
	char* sLocal_4017 = NULL;
	struct<4> Local_4018[6];
	struct<7> Local_4043[36];
	struct<6> Local_4296 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_4302 = { 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_4308[25];
	struct<10> Local_4434[21];
	int iLocal_4645 = 0;
	struct<9> Local_4646[15];
	int iLocal_4782 = 0;
	struct<5> Local_4783[2];
	struct<3> Local_4794[7];
	float fLocal_4816 = 0f;
	int iLocal_4817 = 0;
	int iLocal_4818 = 0;
	int iLocal_4819 = 0;
	int iLocal_4820 = 0;
	int iLocal_4821 = 0;
	int iLocal_4822 = 0;
	float fLocal_4823 = 0f;
	float fLocal_4824 = 0f;
	float fLocal_4825 = 0f;
	int iLocal_4826 = 0;
	int iLocal_4827 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_116 = 1f;
	iLocal_117 = 3;
	fLocal_120 = 80f;
	fLocal_121 = 140f;
	fLocal_122 = 180f;
	iLocal_128 = 1;
	iLocal_129 = 65;
	iLocal_130 = 49;
	iLocal_131 = 64;
	uLocal_135 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_136 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_1402 = 0f;
	fLocal_1403 = 145.4926f;
	fLocal_1405 = 0.37f;
	fLocal_1406 = 0.4f;
	fLocal_1413 = 0.278269f;
	fLocal_1414 = 0.345958f;
	fLocal_1415 = 0.95f;
	Local_1458 = { -993.41f, -3023.94f, 12.94f };
	fLocal_1461 = -20.61f;
	Local_1462 = { -990.14f, -3016.53f, 12.94f };
	Local_1465 = { -967.8815f, -2796.752f, 12.9648f };
	Local_1468 = { 0f, 0f, 0f };
	iLocal_1927 = -1;
	iLocal_2767 = -1;
	iLocal_3937 = -1;
	iLocal_3938 = -1;
	GlobalFunc_563(1);
	iLocal_1758 = 1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_902(2);
	}
	func_896();
	GlobalFunc_563(1);
	TASK::SET_SCENARIO_GROUP_ENABLED("MP_POLICE", 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(1413.366f, -2037.311f, 49.11167f, 1345.929f, -2093.547f, 57.62325f, 96.5f, 0, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(56.18571f, -2064.169f, 1382.831f) - Vector(5.75f, 44.75f, 41.25f), Vector(56.18571f, -2064.169f, 1382.831f) + Vector(5.75f, 44.75f, 41.25f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1382.831f, -2064.169f, 56.18571f, 41.25f, 44.75f, 5.75f, 0, 1);
	PED::SET_PED_NON_CREATION_AREA(Vector(56.18571f, -2064.169f, 1382.831f) - Vector(5.75f, 44.75f, 41.25f), Vector(56.18571f, -2064.169f, 1382.831f) + Vector(5.75f, 44.75f, 41.25f));
	PATHFIND::SET_PED_PATHS_IN_AREA(Vector(56.18571f, -2064.169f, 1382.831f) - Vector(5.75f, 44.75f, 41.25f), Vector(56.18571f, -2064.169f, 1382.831f) + Vector(5.75f, 44.75f, 41.25f), 0, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blimp"), 1);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 50f);
	GlobalFunc_10013(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0f, 0f, 0f, 0f, 24, 0);
	func_884();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			if (!bLocal_2746)
			{
				if (iVar0 == 0)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0++;
				}
			}
			else
			{
				iVar0++;
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
		}
		switch (iVar0)
		{
			case 0:
				if (bLocal_2746)
				{
					func_864(1, 1, 0, 1);
				}
				else
				{
					func_864(1, 2, 0, 1);
				}
				break;
			
			case 1:
				func_864(1, 1, 1, 1);
				break;
			
			case 2:
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
				iLocal_1400 = 1;
				func_864(1, 5, 1, 1);
				HUD::CLEAR_PRINTS();
				func_863(6, 14, 0);
				func_827(6, 0);
				func_826(6);
				while (!ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
				{
					func_827(53, 0);
					func_814(&Local_2193, 0);
					SYSTEM::WAIT(0);
				}
				func_813(&Local_2193, Local_1471[3 /*14*/], 1, 2, 1, 1, 1, 1, 0);
				func_812(&Local_2193, Local_1471[3 /*14*/], "CH_CHAD", 8);
				func_826(62);
				CAM::DO_SCREEN_FADE_IN(0);
				break;
			
			case 3:
				func_864(1, 6, 0, 1);
				while (!func_811())
				{
					func_814(&Local_2193, 0);
					GlobalFunc_761(0);
				}
				break;
			
			case 4:
				func_864(1, 9, 0, 1);
				break;
			
			case 5:
				func_864(1, 10, 0, 1);
				break;
			
			case 6:
				if (Global_84544 == 1)
				{
					func_864(1, 12, 0, 1);
				}
				else
				{
					func_864(1, 13, 0, 1);
				}
				break;
			
			case 7:
				func_864(1, 14, 0, 1);
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (bLocal_2746)
		{
			func_864(1, 1, 0, 0);
		}
		else
		{
			func_864(1, 2, 0, 0);
		}
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	uLocal_2192 = uLocal_2192;
	HUD::REQUEST_ADDITIONAL_TEXT("CHHEIST", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	func_863(90, 14, 1);
	func_863(65, 7, 1);
	func_863(69, 14, 1);
	func_863(70, 14, 1);
	while (true)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
		{
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_1724[0 /*2*/], 0, 0);
		}
		if ((!func_808(&Local_2193) && iLocal_1419 != 7) && iLocal_1419 != 8)
		{
			if (func_807())
			{
				iLocal_1410 = 1;
			}
			else
			{
				iLocal_1410 = 0;
			}
		}
		func_806();
		func_811();
		func_137();
		func_827(91, 0);
		func_136();
		func_133();
		func_56();
		func_52();
		func_51();
		func_25();
		func_24();
		func_21();
		RECORDING::_0x208784099002BC30("m_EyeInTheSky", 0);
		func_19();
		if (bLocal_3975)
		{
			func_1(sLocal_3976);
		}
		SYSTEM::WAIT(0);
	}
	iLocal_1424 = iLocal_1424;
}

void func_1(char* sParam0)//Position - 0x540
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		sParam0 = "CHFAILED";
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	while (!AUDIO::TRIGGER_MUSIC_EVENT("CAR2_MISSION_FAIL"))
	{
		GlobalFunc_761(0);
	}
	GlobalFunc_10835(sParam0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_902(1);
}


















void func_19()//Position - 0x159F
{
	switch (iLocal_3968)
	{
		case 0:
			break;
		
		case 1:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(201.4003f, -153.3645f, 57.84888f, 1f, joaat("prop_gar_door_05"), 0))
			{
				iLocal_3108 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(201.4003f, -153.3645f, 57.84888f, 1f, joaat("prop_gar_door_05"), 1, 0, 1);
				ENTITY::SET_ENTITY_COORDS(iLocal_3108, 201.4003f, -153.3645f, 47.84888f, 1, 0, 0, 1);
				iLocal_3107 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_gar_door_05"), 201.4003f, -153.3645f, 57.84888f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_3107, -1.441772f, 0f, -20.00017f, 2, 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3107, 400);
				iLocal_3968 = 2;
			}
			break;
		
		case 2:
			if (func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 57.8f, 1, -2f))
			{
				iLocal_3968 = 0;
			}
			break;
		
		case 3:
			func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 57.8f, 0, 1f);
			iLocal_3968 = 0;
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3108))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107))
				{
					OBJECT::DELETE_OBJECT(&iLocal_3107);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gar_door_05"));
				}
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(201.4003f, -153.3645f, 57.84888f, 1f, joaat("prop_gar_door_05"), 0))
				{
					func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 47.8f, 0, 1f);
					ENTITY::SET_ENTITY_COORDS(iLocal_3108, 201.4003f, -153.3645f, 57.84888f, 1, 0, 0, 1);
				}
				iLocal_3968 = 0;
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107))
			{
				OBJECT::DELETE_OBJECT(&iLocal_3107);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3108))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3108, 201.4003f, -153.3645f, 57.84888f, 1, 0, 0, 1);
			}
			iLocal_3968 = 0;
			break;
	}
}

int func_20(int iParam0, struct<3> Param1, int iParam4, float fParam5)//Position - 0x1772
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Param1, 5f, iParam0, 0))
	{
		if (fParam5 != -2f)
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, iParam4, fParam5, 0);
			OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &iVar3, &fVar2);
			if (iVar3 == iParam4 && fVar2 == fParam5)
			{
				return 1;
			}
		}
		else
		{
			OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &uVar0, &fVar1);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, iParam4, fVar1, 0);
			return 1;
		}
	}
	return 0;
}

void func_21()//Position - 0x17EC
{
	bool bVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1471[3 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2193.f_9))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[3 /*14*/]))
			{
				fVar1 = (MISC::TAN((Local_2193.f_40 / 2f)) * MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2193.f_9, 1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_1471[3 /*14*/], 0), 1));
				if (fVar1 < Local_2193.f_467)
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!iLocal_4827)
			{
				GlobalFunc_574(106, 0);
				iLocal_4827 = 1;
			}
		}
		else if (iLocal_4827)
		{
			GlobalFunc_571(0, -1);
			iLocal_4827 = 0;
		}
	}
}



void func_24()//Position - 0x1971
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
		{
			switch (iLocal_3940)
			{
				case 0:
					if (func_808(&Local_2193))
					{
						if (AUDIO::START_AUDIO_SCENE("CAR_2_HELI_FILTERING"))
						{
							iLocal_3940++;
						}
					}
					break;
				
				case 1:
					AUDIO::SET_AUDIO_SCENE_VARIABLE("CAR_2_HELI_FILTERING", "HeliFiltering", ENTITY::GET_ENTITY_SPEED(Local_1724[0 /*2*/]));
					break;
			}
		}
		else if (iLocal_3940 != 99 && iLocal_3940 > 0)
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_2_HELI_FILTERING");
			iLocal_3940 = 99;
		}
	}
	else if (iLocal_3940 != 99 && iLocal_3940 > 0)
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_HELI_FILTERING");
		iLocal_3940 = 99;
	}
}

void func_25()//Position - 0x1A27
{
	if (iLocal_1424 != 0)
	{
		if (!GlobalFunc_111())
		{
			iLocal_1424 = 0;
		}
	}
	if (iLocal_3999)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_3949))
		{
			if (GlobalFunc_111())
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						cLocal_3943 = { GlobalFunc_514() };
						Local_3949 = { GlobalFunc_560() };
						StringCopy(&Local_3949, "", 24);
						if (!func_47(&cLocal_3943))
						{
							Local_3949 = { GlobalFunc_560() };
							GlobalFunc_5105();
						}
						else
						{
							iLocal_3999 = 0;
							StringCopy(&Local_3949, "", 24);
							StringCopy(&cLocal_3943, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_3999 = 0;
				StringCopy(&Local_3949, "", 24);
				StringCopy(&cLocal_3943, "", 24);
			}
		}
		else
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!func_44(&Local_3949))
				{
					iLocal_3999 = 0;
					StringCopy(&Local_3949, "", 24);
					StringCopy(&cLocal_3943, "", 24);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_3949))
			{
				if (func_26(iLocal_1424, &Local_3949, &cLocal_3943, Local_4000[0 /*3*/], Local_4000[0 /*3*/].f_1, Local_4000[0 /*3*/].f_2, Local_4000[1 /*3*/], Local_4000[1 /*3*/].f_1, Local_4000[1 /*3*/].f_2, Local_4000[2 /*3*/], Local_4000[2 /*3*/].f_1, Local_4000[2 /*3*/].f_2, Local_4000[3 /*3*/], Local_4000[3 /*3*/].f_1, Local_4000[3 /*3*/].f_2, 7))
				{
					StringCopy(&Local_3949, "", 24);
					StringCopy(&cLocal_3943, "", 24);
					iLocal_3999 = 0;
				}
			}
		}
	}
}

int func_26(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0x1B79
{
	if (!GlobalFunc_111() || (GlobalFunc_111() && iParam0 > iLocal_1424))
	{
		func_43(sParam1, iParam3, iParam6, iParam9, iParam12);
		func_40(iParam3, iParam4, sParam5);
		if (iParam6 != -1)
		{
			func_40(iParam6, iParam7, sParam8);
		}
		if (iParam9 != -1)
		{
			func_40(iParam9, iParam10, sParam11);
		}
		if (iParam12 != -1)
		{
			func_40(iParam12, iParam13, sParam14);
		}
		if (iLocal_1424 < iParam0)
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
				iLocal_1424 = 0;
			}
		}
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (GlobalFunc_10626(&Local_1759, sLocal_1924, sParam1, sParam2, iParam15, 1, 0))
			{
				iLocal_1424 = iParam0;
				iLocal_1398 = 0;
				return 1;
			}
			else if (iLocal_1399 != MISC::GET_GAME_TIMER())
			{
				iLocal_1398++;
				iLocal_1399 = MISC::GET_GAME_TIMER();
				if (iLocal_1398 >= 10)
				{
					return 1;
				}
			}
		}
		else if (GlobalFunc_10626(&Local_1759, sLocal_1924, sParam1, sParam2, iParam15, 0, 0))
		{
			iLocal_1424 = iParam0;
			iLocal_1398 = 0;
			return 1;
		}
		else if (iLocal_1399 != MISC::GET_GAME_TIMER())
		{
			iLocal_1398++;
			iLocal_1399 = MISC::GET_GAME_TIMER();
			if (iLocal_1398 >= 10)
			{
				return 1;
			}
		}
	}
	return 0;
}














int func_40(int iParam0, int iParam1, char* sParam2)//Position - 0x2360
{
	if (iParam1 != 0)
	{
		if (PED::IS_PED_INJURED(iParam1))
		{
			return 0;
		}
	}
	if (iParam1 != Local_1759[iParam0 /*10*/])
	{
		GlobalFunc_200(&Local_1759, iParam0);
	}
	GlobalFunc_173(&Local_1759, iParam0, iParam1, sParam2, 0, 1);
	return 1;
}



void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2458
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(uLocal_4013) || !MISC::ARE_STRINGS_EQUAL(sLocal_4013, uParam0))
	{
		sLocal_4013 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_1759[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					GlobalFunc_200(&Local_1759, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_44(char* sParam0)//Position - 0x24CD
{
	struct<6> Var0;
	
	Var0 = { GlobalFunc_560() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0) || MISC::ARE_STRINGS_EQUAL(&Local_3949, sParam0))
	{
		return 1;
	}
	return 0;
}



int func_47(char* sParam0)//Position - 0x2530
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 0)
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		return 1;
	}
	return 0;
}




void func_51()//Position - 0x2655
{
	if (iLocal_3970)
	{
		switch (iLocal_3973)
		{
			case 0:
				if (bLocal_3969)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_3971))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_3971))
						{
							iLocal_3973++;
						}
					}
				}
				else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_3971))
				{
					iLocal_3973++;
				}
				break;
			
			case 1:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uLocal_3972))
				{
					if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
					{
						AUDIO::PREPARE_MUSIC_EVENT(sLocal_3972);
						iLocal_3970 = 0;
					}
				}
				else
				{
					iLocal_3970 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_3973 = 0;
	}
}

void func_52()//Position - 0x26E1
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_808(&Local_2193))
	{
		if (PAD::IS_CONTROL_PRESSED(2, 227))
		{
			if (iLocal_1424 == 2)
			{
				if (iLocal_3938 != -1)
				{
					if (iLocal_1419 < 6)
					{
						if (!MISC::IS_BIT_SET(uLocal_1418, iLocal_3938))
						{
							MISC::SET_BIT(&uLocal_1418, iLocal_3938);
							GlobalFunc_565(108, 1, 0);
						}
					}
					else if (!MISC::IS_BIT_SET(uLocal_1418, iLocal_3938 + 7))
					{
						MISC::SET_BIT(&uLocal_1418, iLocal_3938 + 7);
						GlobalFunc_565(108, 1, 0);
					}
				}
				if (!iLocal_2744)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_115, "SET_AUDIO_STATES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_2743 = 0;
					iLocal_2744 = 1;
				}
			}
			if (!iLocal_2743)
			{
				if (iLocal_1424 != 2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_115, "SET_AUDIO_STATES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_2743 = 1;
					iLocal_2744 = 0;
				}
			}
			if (iLocal_3937 == -1)
			{
				iLocal_3937 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_3937, "Microphone", "POLICE_CHOPPER_CAM_SOUNDS", 1);
				AUDIO::START_AUDIO_SCENE("CAR_2_USE_MICROPHONE");
			}
			fVar2 = 1000000f;
			iLocal_3938 = -1;
			iVar0 = 0;
			while (iVar0 < Local_4794.x)
			{
				if (!GlobalFunc_105(Local_4794[iVar0 /*3*/]))
				{
					if (CAM::IS_SPHERE_VISIBLE(Local_4794[iVar0 /*3*/], 5f))
					{
						if (Local_2193.f_40 < 15f)
						{
							iVar4 = 0;
							iVar5 = -1;
							while (iVar5 <= 1)
							{
								iVar6 = -1;
								while (iVar6 <= 1)
								{
									if (CAM::IS_SPHERE_VISIBLE(Local_4794[iVar0 /*3*/] + Vector(IntToFloat(iVar6 * 15), 0f, IntToFloat(iVar5 * 15)), 5f))
									{
										iVar4++;
									}
									iVar6++;
								}
								iVar5++;
							}
							if (iVar4 > iVar3)
							{
								iLocal_3938 = iVar0;
								iVar3 = iVar4;
							}
						}
					}
				}
				iVar0++;
			}
			if (fVar2 != 1000000f)
			{
				fVar1 = (fVar2 / 20f);
			}
			else
			{
				fVar1 = 1f;
			}
			GlobalFunc_253(fVar1, 0f, 1f);
			AUDIO::SET_VARIABLE_ON_SOUND(iLocal_3937, "Ctrl", fVar1);
		}
		else
		{
			if (iLocal_2744 || iLocal_2743)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_115, "SET_AUDIO_STATES");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_2744 = 0;
				iLocal_2743 = 0;
			}
			if (iLocal_1424 == 2)
			{
				GlobalFunc_4956();
				iLocal_1424 = 0;
			}
			if (iLocal_3937 != -1)
			{
				AUDIO::STOP_SOUND(iLocal_3937);
				AUDIO::STOP_AUDIO_SCENE("CAR_2_USE_MICROPHONE");
				iLocal_3937 = -1;
			}
			iLocal_3938 = -1;
		}
	}
	else if (iLocal_3937 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_3937);
		AUDIO::STOP_AUDIO_SCENE("CAR_2_USE_MICROPHONE");
		iLocal_3937 = -1;
	}
}




void func_56()//Position - 0x2A2F
{
	switch (iLocal_2765)
	{
		case 0:
			if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
			{
				iLocal_2765 = 1;
			}
			else if ((iLocal_1419 == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 476.3787f, -987.3391f, 42.32075f, 430.2201f, -986.7795f, 47.25765f, 31.125f, 0, 1, 0)) || iLocal_1419 > 1)
			{
				GlobalFunc_Checkpoint3(1, "Trevor on roof", 0, 0, 0, 1);
				iLocal_2765++;
			}
			break;
		
		case 1:
			if (iLocal_1419 >= 5)
			{
				if (func_59(&Local_2193, Local_1471[3 /*14*/]) || iLocal_1419 > 5)
				{
					GlobalFunc_Checkpoint3(2, "Follow Chad on foot", 0, 0, 0, 1);
					iLocal_2765++;
				}
			}
			break;
		
		case 2:
			if (iLocal_1419 >= 6)
			{
				GlobalFunc_Checkpoint3(3, "Follow Chad in car", 0, 0, 0, 1);
				iLocal_2765++;
			}
			break;
		
		case 3:
			if (iLocal_1419 == 9)
			{
				GlobalFunc_Checkpoint3(4, "Franklin gets Z-Type", 0, 0, 0, 1);
				if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
				{
					Global_86804 = 1;
				}
				else
				{
					Global_86804 = 0;
				}
				iLocal_2765++;
			}
			else if (iLocal_1419 >= 10)
			{
				iLocal_2765++;
			}
			break;
		
		case 4:
			if (iLocal_1419 >= 9 && func_57(125))
			{
				GlobalFunc_Checkpoint3(5, "Drive Z-type back to garage", 0, 0, 0, 1);
				if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
				{
					Global_86804 = 1;
				}
				else
				{
					Global_86804 = 0;
				}
				iLocal_2765++;
			}
			else if (iLocal_1419 > 10)
			{
				iLocal_2765++;
			}
			break;
		
		case 5:
			if (iLocal_1419 >= 13)
			{
				GlobalFunc_Checkpoint3(6, "Leave the airport", 1, 0, 0, 1);
				iLocal_2765++;
			}
			break;
	}
}

int func_57(int iParam0)//Position - 0x2BF5
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = (iParam0 - Local_4043[0 /*7*/]);
	if (iVar0 >= 0 && iVar0 < Local_4043)
	{
		if (Local_4043[iVar0 /*7*/] == iParam0)
		{
			if (Local_4043[iVar0 /*7*/].f_1 && Local_4043[iVar0 /*7*/].f_2)
			{
				return 1;
			}
		}
		else
		{
			StringCopy(&cVar1, "", 64);
			StringConCat(&cVar1, "IS_COND_TRUE() fail:", 64);
			StringConCat(&cVar1, func_58(iParam0), 64);
		}
	}
	return 0;
}

char* func_58(int iParam0)//Position - 0x2C61
{
	switch (iParam0)
	{
		case 0:
			return "	COND_NULL RETURN	";
			break;
		
		case 1:
			return "	COND_FAILING RETURN	";
			break;
		
		case 2:
			return "	COND_COP_WALKING_TO_STAIRS RETURN	";
			break;
		
		case 3:
			return "	COND_CUTSCENE_ENDED RETURN	";
			break;
		
		case 4:
			return "	COND_PLAYER_ENTERED_RECEPTION RETURN	";
			break;
		
		case 5:
			return "	COND_COP_IN_CORRIDOR RETURN	";
			break;
		
		case 6:
			return "	COND_PLAYER_ANYWHERE_IN_STAIRWALL RETURN	";
			break;
		
		case 7:
			return "	COND_PLAYER_LAGS_BEHIND_OR_WANDERS RETURN	";
			break;
		
		case 8:
			return "	COND_PLAYER_UP_STAIRWELL RETURN	";
			break;
		
		case 9:
			return "	COND_PLAYER_IN_CORRIDOR RETURN	";
			break;
		
		case 10:
			return "	COND_PLAYER_OUT_OF_BOUNDS RETURN	";
			break;
		
		case 11:
			return "	COND_PLAYER_NEARBY RETURN	";
			break;
		
		case 12:
			return "	COND_COPS_ALERTED_CONDITION RETURN	";
			break;
		
		case 13:
			return "	COND_COP_IN_STAIRWELL RETURN	";
			break;
		
		case 14:
			return "	COND_COP_FINISHED_LEADING_PLAYER RETURN	";
			break;
		
		case 15:
			return "	COND_CAN_SPAWN_CHOPPER RETURN	";
			break;
		
		case 16:
			return "	COND_PLAYER_NOT_FOLLOWING_COP RETURN	";
			break;
		
		case 17:
			return "	COND_DIA_COP_LEADING RETURN	";
			break;
		
		case 18:
			return "	COND_PLAYER_ON_ROOF RETURN	";
			break;
		
		case 19:
			return "	COND_PLAYER_TRYS_TO_ENTER_CHOPPER RETURN	";
			break;
		
		case 20:
			return "	COND_PLAYER_IN_LOCKER_ROOM RETURN	";
			break;
		
		case 21:
			return "	COND_PLAYER_RUNS_AHEAD RETURN	";
			break;
		
		case 22:
			return "	COND_TREVOR_TELLS_PILOT_TO_TAKE_OFF RETURN	";
			break;
		
		case 23:
			return "	COND_TREVOR_TELLS_PILOT_TO_ACTIVATE_SCANNER RETURN	";
			break;
		
		case 24:
			return "	COND_READY_TO_TURN_ON_SCANNER RETURN	";
			break;
		
		case 25:
			return "	COND_DIA_BACK_TO_FRONT_DESK RETURN	";
			break;
		
		case 26:
			return "	COND_DIA_GET_IN RETURN	";
			break;
		
		case 27:
			return "	COND_PLAYER_IN_CHOPPER RETURN	";
			break;
		
		case 28:
			return "	COND_COP_LEADING_PLAYER RETURN	";
			break;
		
		case 29:
			return "	COND_PLAYER_SPOTTED_BY_PILOT RETURN	";
			break;
		
		case 30:
			return "	COND_START_FRANKLIN RETURN	";
			break;
		
		case 31:
			return "	COND_PLAYER_LEAVING_TREVOR RETURN	";
			break;
		
		case 32:
			return "	COND_END_FRANKLIN RETURN	";
			break;
		
		case 33:
			return "	COND_SCAN_STAGE_START RETURN	";
			break;
		
		case 34:
			return "	COND_STARTED_AS_TREVOR RETURN	";
			break;
		
		case 35:
			return "	COND_FAR_ENOUGH_FROM_FRANKLIN_TO_PLAY_CONVO RETURN	";
			break;
		
		case 36:
			return "	COND_LEARNT_TO_SCAN RETURN	";
			break;
		
		case 37:
			return "	COND_BOOTING_UP_LINE_PLAYED RETURN	";
			break;
		
		case 38:
			return "	COND_FRANKLIN_SCANNED RETURN	";
			break;
		
		case 39:
			return "	COND_DIA_SCANNED_CONVO_FINISHED RETURN	";
			break;
		
		case 40:
			return "	COND_DIA_SCAN_MY_BUDDY RETURN	";
			break;
		
		case 41:
			return "	COND_TREV_SAID_TO_FIND_FRANKLIN RETURN	";
			break;
		
		case 42:
			return "	COND_TOLD_TO_SCAN_FRANKLIN RETURN	";
			break;
		
		case 43:
			return "	COND_OUTSIDE_SAFE_ZONE RETURN	";
			break;
		
		case 44:
			return "	COND_FLEW_IN_TO_FAIL_ZONE RETURN	";
			break;
		
		case 46:
			return "	COND_SCAN_STAGE_END RETURN	";
			break;
		
		case 47:
			return "	COND_START_SCAN_AREA_1 RETURN	";
			break;
		
		case 48:
			return "	COND_POSTAL_BEING_OBSERVED RETURN	";
			break;
		
		case 49:
			return "	COND_PERVERT_BEING_OBSERVED RETURN	";
			break;
		
		case 50:
			return "	COND_AREA1_PED_JUST_SCANNED RETURN	";
			break;
		
		case 51:
			return "	COND_SCANNED_PED_WAS_A_WOMAN RETURN	";
			break;
		
		case 52:
			return "	COND_DIA_COME_IN_FRANKLIN_PLAYED RETURN	";
			break;
		
		case 53:
			return "	COND_CHOPPER_IN_VIEWING_RANGE_OF_AREA1 RETURN	";
			break;
		
		case 54:
			return "	COND_START_SCAN_AREA_3 RETURN	";
			break;
		
		case 55:
			return "	COND_LISTENING_IN_ON_DIALOGUE RETURN	";
			break;
		
		case 56:
			return "	COND_END_SCAN_AREA_1 RETURN	";
			break;
		
		case 57:
			return "	COND_AREA3_PED_JUST_SCANNED RETURN	";
			break;
		
		case 58:
			return "	COND_PROSIE_BEING_OBSERVED RETURN	";
			break;
		
		case 59:
			return "	COND_CHAD_BEING_OBSERVED RETURN	";
			break;
		
		case 60:
			return "	COND_CHAD_WAS_SCANNED RETURN	";
			break;
		
		case 61:
			return "	COND_CHAD_HIDDEN RETURN	";
			break;
		
		case 62:
			return "	COND_CHAD_ON_SCREEN RETURN	";
			break;
		
		case 63:
			return "	COND_CHAD_OFFSCREEN_FOR_4_SECONDS RETURN	";
			break;
		
		case 64:
			return "	COND_CHAD_BY_GARAGES RETURN	";
			break;
		
		case 65:
			return "	COND_CHAD_IN_APARTMENT_LOCATE RETURN	";
			break;
		
		case 66:
			return "	COND_GARAGE_DOOR_OPENING RETURN	";
			break;
		
		case 67:
			return "	COND_END_SCAN_AREA_3 RETURN	";
			break;
		
		case 68:
			return "	COND_CARPARK_STARTS RETURN	";
			break;
		
		case 69:
			return "	COND_CHOPPER_DESCENDING RETURN	";
			break;
		
		case 70:
			return "	COND_FRANKLIN_STOPPED_HIS_CAR RETURN	";
			break;
		
		case 71:
			return "	COND_FRANKLIN_HAS_STOPPED_RUNNING RETURN	";
			break;
		
		case 72:
			return "	COND_A_LITTLE_AFTER_EXITS_CLEAR_DIA RETURN	";
			break;
		
		case 73:
			return "	COND_DIA_TAKE_US_DOWN RETURN	";
			break;
		
		case 74:
			return "	COND_DIA_THERMAL_VISION RETURN	";
			break;
		
		case 75:
			return "	COND_DIA_CAN_YOU_SEE_FRANKLIN RETURN	";
			break;
		
		case 76:
			return "	COND_DIA_ANY_OTHER_HEAT_SOURCES RETURN	";
			break;
		
		case 77:
			return "	COND_DIA_LOOK_FOR_MORE_HEAT_PLAYED RETURN	";
			break;
		
		case 78:
			return "	COND_DIA_FRANKLIN_SEES_PISSER RETURN	";
			break;
		
		case joaat("mpsv_lp0_31"):
			return "	COND_DIA_FRANKLIN_SEES_FIXING_MAN RETURN	";
			break;
		
		case 80:
			return "	COND_DIA_FRANKLIN_SEES_CHAD RETURN	";
			break;
		
		case 81:
			return "	COND_DIA_TREVOR_SEE_FRANKLIN_ENDED RETURN	";
			break;
		
		case 82:
			return "	COND_CHOPPER_AT_CAR_PARK_LEVEL RETURN	";
			break;
		
		case 83:
			return "	COND_THERMAL_TURNED_ON RETURN	";
			break;
		
		case 84:
			return "	COND_FRANKLIN_OBSERVED_WITH_THERMAL RETURN	";
			break;
		
		case 85:
			return "	COND_SEE_WANKER RETURN	";
			break;
		
		case 86:
			return "	COND_SEE_FIXING_MAN RETURN	";
			break;
		
		case 87:
			return "	COND_SEE_CHAD RETURN	";
			break;
		
		case 88:
			return "	COND_SEE_LEANING_MAN RETURN	";
			break;
		
		case 89:
			return "	COND_SEE_PHONE_CAR_MAN RETURN	";
			break;
		
		case 90:
			return "	COND_FRANKLIN_AT_PHONE_MAN RETURN	";
			break;
		
		case 91:
			return "	COND_FRANKLIN_AT_CHAD RETURN	";
			break;
		
		case 92:
			return "	COND_THERMAL_READY RETURN	";
			break;
		
		case 93:
			return "	COND_DIA_TREVOR_SEES_CHAD_ENDED RETURN	";
			break;
		
		case 94:
			return "	COND_SWITCH_BEGUN RETURN	";
			break;
		
		case 95:
			return "	COND_BLOCK_LISTENING RETURN	";
			break;
		
		case 96:
			return "	COND_FRANKLIN_SAW_WRONG_GUY RETURN	";
			break;
		
		case 97:
			return "	COND_DIA_FROM_FRANKLIN_SEEING_CHAD RETURN	";
			break;
		
		case 98:
			return "	COND_FRANKLIN_RUNS_TO_CAR RETURN	";
			break;
		
		case 99:
			return "	COND_WAITING_FOR_NEXT_TARGET RETURN	";
			break;
		
		case 100:
			return "	COND_NEXT_TARGET_FOUND RETURN	";
			break;
		
		case 101:
			return "	COND_INVESTIGATING_NEXT_TARGET RETURN	";
			break;
		
		case 102:
			return "	COND_CAR_PARK_ENDS RETURN	";
			break;
		
		case 103:
			return "	COND_ZTYPE_STARTS RETURN	";
			break;
		
		case 104:
			return "	COND_CHAD_INTERRUPTED RETURN	";
			break;
		
		case 105:
			return "	COND_CHAD_CAN_BACK_OFF RETURN	";
			break;
		
		case 106:
			return "	COND_GUN_AIMED_AT_CHAD RETURN	";
			break;
		
		case 107:
			return "	COND_CHAD_DAMAGED_BY_PLAYER RETURN	";
			break;
		
		case 108:
			return "	COND_CHAD_CAN_RUN RETURN	";
			break;
		
		case 109:
			return "	COND_PLAYER_AT_SECURITY RETURN	";
			break;
		
		case 110:
			return "	COND_PLAYER_200M_FROM_SECURITY RETURN	";
			break;
		
		case 111:
			return "	COND_CHAD_PLAYER_IN_GARAGE RETURN	";
			break;
		
		case 112:
			return "	COND_CHAD_RAGDOLL RETURN	";
			break;
		
		case 113:
			return "	COND_PLAYER_GOT_IN_CAR RETURN	";
			break;
		
		case 114:
			return "	COND_PROCEED_TO_HANGAR_CONDITIONS_MET RETURN	";
			break;
		
		case 115:
			return "	COND_PHONE_CALL_MADE RETURN	";
			break;
		
		case 116:
			return "	COND_NO_DIALOGUE_FOR_TWO_SECONDS RETURN	";
			break;
		
		case 117:
			return "	COND_CHAD_DEAD RETURN	";
			break;
		
		case 118:
			return "	COND_CHAD_PLAYER_100m_FROM_CAR_PARK RETURN	";
			break;
		
		case 119:
			return "	COND_PLAYER_30m_from_garage RETURN	";
			break;
		
		case 120:
			return "	COND_PLAYER_200m_from_garage RETURN	";
			break;
		
		case 121:
			return "	COND_PLAYER_300m_from_garage RETURN	";
			break;
		
		case 122:
			return "	COND_PLAYER_DEFAULT_LOAD_CUT_RANGE_FROM_HANGAR RETURN	";
			break;
		
		case 123:
			return "	COND_WANTED RETURN	";
			break;
		
		case 124:
			return "	COND_HIT_BLIP RETURN	";
			break;
		
		case 125:
			return "	COND_PLAYER_IN_ZTYPE RETURN	";
			break;
		
		case 126:
			return "	COND_DRIVE_TO_INSTRUCTIONS_GIVEN RETURN	";
			break;
		
		case 127:
			return "	COND_CHAD_ESCAPED_IN_ZTYPE RETURN	";
			break;
		
		case 128:
			return "	COND_PLAYER_SHOOTING_NEAR_CHAD RETURN	";
			break;
		
		case 129:
			return "	COND_DEVIN_WALKING_IN_TO_ZTYPE RETURN	";
			break;
		
		case 130:
			return "	COND_CHOPPER_DAMAGED_BY_PLAYER RETURN	";
			break;
		
		case 131:
			return "	COND_DAMAGED_ZTYPE RETURN	";
			break;
		
		case 132:
			return "	COND_PLAYER_7M_FROM_CHAD RETURN	";
			break;
		
		case 133:
			return "	COND_ZTYPE_IN_HANGAR RETURN	";
			break;
		
		case 134:
			return "	COND_ZTYPE_IN_CAR_STOP_RANGE RETURN	";
			break;
		
		case 135:
			return "	COND_ZTYPE_IS_STOPPED RETURN	";
			break;
		
		case 138:
			return "	COND_ZTYPE_ENDS RETURN	";
			break;
		
		case 139:
			return "	COND_EXIT_AIRPORT_START RETURN	";
			break;
		
		case 140:
			return "	COND_PLAY_IN_ZTYPE RETURN	";
			break;
		
		case 141:
			return "	COND_EXIT_AIRPORT_END RETURN	";
			break;
	}
	return "NO DATA";
}

int func_59(var uParam0, int iParam1)//Position - 0x3524
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_127 - 1))
	{
		if (uParam0->f_298[iVar0 /*11*/] == iParam1)
		{
			if (MISC::IS_BIT_SET(uParam0->f_298[iVar0 /*11*/].f_2, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 0;
}










































































void func_133()//Position - 0xA54E
{
	int iVar0;
	
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (Local_1928[0 /*12*/].f_10 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (Local_1928 - 2))
			{
				Local_1928[iVar0 /*12*/] = { Local_1928[iVar0 + 1 /*12*/] };
				iVar0++;
			}
			Local_1928[(Local_1928 - 1) /*12*/] = 0;
			Local_1928[(Local_1928 - 1) /*12*/].f_1 = -1;
			Local_1928[(Local_1928 - 1) /*12*/].f_2 = -1;
			Local_1928[(Local_1928 - 1) /*12*/].f_3 = 0;
			Local_1928[(Local_1928 - 1) /*12*/].f_5 = -1;
			Local_1928[(Local_1928 - 1) /*12*/].f_10 = 0;
		}
		if (!MISC::IS_STRING_NULL(Local_1928[0 /*12*/]))
		{
			if (Local_1928[0 /*12*/].f_2 != -1)
			{
				if (Local_1928[0 /*12*/].f_3 == 0)
				{
					Local_1928[0 /*12*/].f_2 = (Local_1928[0 /*12*/].f_2 + MISC::GET_GAME_TIMER());
					Local_1928[0 /*12*/].f_3 = 1;
				}
			}
			if (MISC::GET_GAME_TIMER() > Local_1928[0 /*12*/].f_2)
			{
				GlobalFunc_Display_Help_Text(Local_1928[0 /*12*/]);
				if (Local_1928[0 /*12*/].f_4 != 1)
				{
					if (Local_1928[0 /*12*/].f_1 == 0)
					{
						Local_1928[0 /*12*/].f_1 = 7500;
					}
				}
				Local_1928[0 /*12*/].f_10 = 1;
				if (Local_1928[0 /*12*/].f_1 > 0)
				{
					iLocal_1989 = (MISC::GET_GAME_TIMER() + Local_1928[0 /*12*/].f_1);
				}
				else
				{
					iLocal_1989 = -1;
				}
			}
		}
		else
		{
			iLocal_1989 = -1;
		}
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!MISC::IS_STRING_NULL(Local_1928[0 /*12*/]))
		{
			if (iLocal_1989 > 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1989)
				{
					if (GlobalFunc_74(Local_1928[0 /*12*/]))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
		}
	}
}



void func_136()//Position - 0xA6F6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1471)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1471[iVar0 /*14*/].f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1471[iVar0 /*14*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_1471[iVar0 /*14*/]))
				{
					HUD::REMOVE_BLIP(&(Local_1471[iVar0 /*14*/].f_1));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(Local_1471[iVar0 /*14*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_137()//Position - 0xA75B
{
	switch (iLocal_1419)
	{
		case 0:
			if (bLocal_2746 == 0)
			{
				iLocal_1419 = 2;
			}
			else
			{
				func_804(1);
				iLocal_1419 = 1;
			}
			break;
		
		case 1:
			if (func_802())
			{
				func_796(16);
			}
			break;
		
		case 2:
			if (func_539())
			{
				func_796(16);
			}
			break;
		
		case 3:
			if (func_538())
			{
				func_796(16);
			}
			break;
		
		case 4:
			if (func_535())
			{
				func_796(16);
			}
			break;
		
		case 5:
			if (func_531())
			{
				func_796(16);
			}
			break;
		
		case 6:
			if (func_525())
			{
				func_796(16);
			}
			break;
		
		case 7:
			if (func_520())
			{
				func_796(9);
			}
			break;
		
		case 8:
			if (func_520())
			{
				func_796(9);
			}
			break;
		
		case 9:
			if (func_506())
			{
				func_796(12);
			}
			break;
		
		case 11:
		case 10:
			if (func_506())
			{
				func_796(12);
			}
			break;
		
		case 12:
			if (func_494())
			{
				func_796(16);
			}
			break;
		
		case 13:
			if (func_151())
			{
				func_796(16);
			}
			break;
		
		case 14:
			func_148();
			break;
	}
	if (iLocal_1419 >= 9)
	{
		GlobalFunc_9132(1);
	}
	func_814(&Local_2193, 0);
	func_142();
	iLocal_4782 = iLocal_4782;
	if (iLocal_1419 >= 3 && iLocal_1419 <= 8)
	{
		GlobalFunc_7629();
	}
}





void func_142()//Position - 0xAA42
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (bLocal_2745 == 1)
	{
		if (iLocal_1419 == 6 || iLocal_1419 == 7)
		{
			if (!MISC::IS_PC_VERSION())
			{
				iLocal_4645 = (iLocal_4645 + SYSTEM::FLOOR(((SYSTEM::TIMESTEP() * fLocal_3317) * 1000f)));
			}
			else
			{
				iLocal_4645 = (iLocal_4645 + SYSTEM::FLOOR((((SYSTEM::TIMESTEP() * fLocal_3317) * 1000f) + 0.5f)));
			}
			iVar0 = 0;
			while (iVar0 < Local_3318)
			{
				if (Local_3318[iVar0 /*8*/].f_3 >= 1)
				{
					if (Local_3318[iVar0 /*8*/].f_4 == 0 && Local_3318[iVar0 /*8*/].f_5 == 0)
					{
						if ((Local_3318[iVar0 /*8*/].f_2 - 5000) < iLocal_4645)
						{
							if (Local_3318[iVar0 /*8*/].f_6 == 0 && Local_3318[iVar0 /*8*/].f_7 == 0)
							{
								STREAMING::REQUEST_MODEL(Local_3318[iVar0 /*8*/]);
							}
						}
						if ((iVar0 != 31 && iLocal_4645 > Local_3318[iVar0 /*8*/].f_2) || (iVar0 == 31 && iLocal_4645 > (Local_3318[iVar0 /*8*/].f_2 - 15000)))
						{
							if (Local_3318[iVar0 /*8*/].f_6 == 1)
							{
								Local_3318[iVar0 /*8*/].f_1 = Local_1724[2 /*2*/];
								Local_2730 = { ENTITY::GET_ENTITY_COORDS(Local_3318[iVar0 /*8*/].f_1, 1) };
								Local_2733 = { ENTITY::GET_ENTITY_ROTATION(Local_3318[iVar0 /*8*/].f_1, 2) };
							}
							else if (Local_3318[iVar0 /*8*/].f_7 == 1)
							{
								if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(Local_1471[4 /*14*/], 0))
										{
											Local_1724[1 /*2*/] = PED::GET_VEHICLE_PED_IS_IN(Local_1471[4 /*14*/], 1);
										}
									}
								}
								Local_3318[iVar0 /*8*/].f_1 = Local_1724[1 /*2*/];
							}
							else if (STREAMING::HAS_MODEL_LOADED(Local_3318[iVar0 /*8*/]))
							{
								if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3318[iVar0 /*8*/].f_1, 0))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3318[iVar0 /*8*/].f_3, sLocal_1417))
									{
										Local_3318[iVar0 /*8*/].f_1 = VEHICLE::CREATE_VEHICLE(Local_3318[iVar0 /*8*/], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_3318[iVar0 /*8*/].f_3, 0f, sLocal_1417), 0f, 1, 1);
										VEHICLE::SET_VEHICLE_LIGHTS(Local_3318[iVar0 /*8*/].f_1, 3);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3318[iVar0 /*8*/].f_1, 0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_3318[iVar0 /*8*/].f_1, 0);
								if (Local_3318[iVar0 /*8*/].f_6 == 1 || Local_3318[iVar0 /*8*/].f_7 == 1)
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3318[iVar0 /*8*/].f_1))
									{
										Local_2730 = { ENTITY::GET_ENTITY_COORDS(Local_3318[iVar0 /*8*/].f_1, 1) + Vector(0.0054f, -0.1f, -0.01f) };
										Local_2733 = { ENTITY::GET_ENTITY_ROTATION(Local_3318[iVar0 /*8*/].f_1, 2) };
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3318[iVar0 /*8*/].f_1);
										Local_3318[(iVar0 - 1) /*8*/].f_5 = 0;
									}
								}
								if (Local_3318[iVar0 /*8*/].f_3 == 100)
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1724[1 /*2*/], 1000f, 1);
									VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_1724[1 /*2*/], 0, 1);
								}
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3318[iVar0 /*8*/].f_1))
								{
									if (Local_3318[iVar0 /*8*/].f_6 == 1)
									{
										if (Local_3318[iVar0 /*8*/].f_3 == 400)
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3318[iVar0 /*8*/].f_1, Local_3318[iVar0 /*8*/].f_3, sLocal_1417, 0);
											bVar2 = true;
										}
										else
										{
											fLocal_2742 = 0f;
											Local_2736 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_3318[iVar0 /*8*/].f_3, 1000f, "cs2") };
											Local_2739 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Local_3318[iVar0 /*8*/].f_3, 1000f, "cs2") };
										}
									}
									else
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_3318[iVar0 /*8*/].f_1, Local_3318[iVar0 /*8*/].f_3, sLocal_1417, 16, 0, 786603);
										bVar2 = true;
									}
									if (bVar2)
									{
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3318[iVar0 /*8*/].f_1, 0);
										iVar1 = (iLocal_4645 - Local_3318[iVar0 /*8*/].f_2);
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3318[iVar0 /*8*/].f_1, SYSTEM::TO_FLOAT(iVar1));
									}
									Local_3318[iVar0 /*8*/].f_4 = 1;
								}
							}
						}
					}
					if (Local_3318[iVar0 /*8*/].f_4 == 1 && Local_3318[iVar0 /*8*/].f_5 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3318[iVar0 /*8*/].f_1, 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3318[iVar0 /*8*/].f_1))
							{
								if (Local_3318[iVar0 /*8*/].f_6 != 1 && Local_3318[iVar0 /*8*/].f_7 != 1)
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_3318[iVar0 /*8*/].f_1, 1);
								}
								else if (Local_3318[iVar0 /*8*/].f_6)
								{
									if (Local_3318[iVar0 /*8*/].f_3 > 400)
									{
										if ((iLocal_4645 - Local_3318[iVar0 /*8*/].f_2) < 2000)
										{
											fLocal_2742 = (fLocal_2742 + SYSTEM::TIMESTEP());
											fVar9 = (1f - SYSTEM::COS((fLocal_2742 * 90f)));
											if (fLocal_2742 < 1f)
											{
												Var3 = { Local_2730 + Local_2736 - Local_2730 * Vector(fVar9, fVar9, fVar9) };
												Var6 = { Local_2733 + Local_2739 - Local_2733 * Vector(fVar9, fVar9, fVar9) };
												ENTITY::FREEZE_ENTITY_POSITION(Local_3318[iVar0 /*8*/].f_1, 1);
												ENTITY::SET_ENTITY_COORDS(Local_3318[iVar0 /*8*/].f_1, Var3, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_ROTATION(Local_3318[iVar0 /*8*/].f_1, Var6, 2, 1);
											}
											else
											{
												Var3 = { Local_2730 + Local_2736 - Local_2730 * Vector(fVar9, fVar9, fVar9) };
												Var6 = { Local_2733 + Local_2739 - Local_2733 * Vector(fVar9, fVar9, fVar9) };
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3318[iVar0 /*8*/].f_1, Var3, 0, 0, 1);
												ENTITY::SET_ENTITY_ROTATION(Local_3318[iVar0 /*8*/].f_1, Var6, 2, 1);
												ENTITY::FREEZE_ENTITY_POSITION(Local_3318[iVar0 /*8*/].f_1, 0);
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3318[iVar0 /*8*/].f_1, Local_3318[iVar0 /*8*/].f_3, sLocal_1417, 0);
												iVar1 = (iLocal_4645 - Local_3318[iVar0 /*8*/].f_2);
												VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3318[iVar0 /*8*/].f_1, SYSTEM::TO_FLOAT(iVar1));
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3318[iVar0 /*8*/].f_1, 0);
											}
										}
									}
									else
									{
										ENTITY::FREEZE_ENTITY_POSITION(Local_3318[iVar0 /*8*/].f_1, 1);
									}
								}
							}
							if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3318[iVar0 /*8*/].f_3, sLocal_1417))
							{
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3318[iVar0 /*8*/].f_3, sLocal_1417))
							{
								if (IntToFloat(iLocal_4645) < (IntToFloat(Local_3318[iVar0 /*8*/].f_2) + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_3318[iVar0 /*8*/].f_3, sLocal_1417)))
								{
								}
								else
								{
									if (Local_3318[iVar0 /*8*/].f_6 != 1 && Local_3318[iVar0 /*8*/].f_7 != 1)
									{
										ENTITY::FREEZE_ENTITY_POSITION(Local_3318[iVar0 /*8*/].f_1, 1);
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3318[iVar0 /*8*/].f_1))
									{
										if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(Local_3318[iVar0 /*8*/].f_1) == VEHICLE::GET_VEHICLE_RECORDING_ID(Local_3318[iVar0 /*8*/].f_3, sLocal_1417))
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3318[iVar0 /*8*/].f_1);
										}
									}
									if (Local_3318[iVar0 /*8*/].f_6 != 1 && Local_3318[iVar0 /*8*/].f_7 != 1)
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_3318[iVar0 /*8*/].f_1));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3318[iVar0 /*8*/]);
									}
									if (Local_3318[iVar0 /*8*/].f_6 == 1)
									{
										Local_2730 = { ENTITY::GET_ENTITY_COORDS(Local_3318[iVar0 /*8*/].f_1, 1) + Vector(0.0054f, -0.1f, -0.01f) };
										Local_2733 = { ENTITY::GET_ENTITY_ROTATION(Local_3318[iVar0 /*8*/].f_1, 2) };
									}
									Local_3318[iVar0 /*8*/].f_5 = 1;
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
}






void func_148()//Position - 0xB296
{
	HUD::CLEAR_PRINTS();
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
	GlobalFunc_5103(0, 0);
	func_902(3);
}



int func_151()//Position - 0xB3CF
{
	func_482(139, 141);
	func_233(0, 80, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(1, 81, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(0, 22, 0, 0, 1, 0, 1, 0);
	func_154(18);
	func_154(19);
	if (func_152(0, 22))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0, int iParam1)//Position - 0xB426
{
	char cVar0[64];
	
	if (Local_4018[iParam0 /*4*/] == iParam1)
	{
		if (Local_4018[iParam0 /*4*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_4018[iParam0 /*4*/] != 0)
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "IS_INS_COM() fail:", 64);
		StringConCat(&cVar0, func_153(iParam1), 64);
	}
	return 0;
}

char* func_153(int iParam0)//Position - 0xB472
{
	switch (iParam0)
	{
		case 0:
			return "INS_NULL";
			break;
		
		case 1:
			return "INS_GET_TO_RECEPTION";
			break;
		
		case 2:
			return "INS_FOLLOW_COP";
			break;
		
		case 3:
			return "INS_GET_TO_ROOF";
			break;
		
		case 4:
			return "INS_GET_IN_CHOPPER";
			break;
		
		case 5:
			return "INS_ABANDON_TREVOR";
			break;
		
		case 6:
			return "INS_TEACH_TO_SCAN";
			break;
		
		case 7:
			return "INS_SCAN_FRANKLIN";
			break;
		
		case 8:
			return "INS_SCAN_COMPLETE";
			break;
		
		case 9:
			return "INS_GET_BACK_TO_FRANKLIN";
			break;
		
		case 10:
			return "INS_FOLLOW_CHAD";
			break;
		
		case 11:
			return "INS_SHOW_HIDDEN_HELP";
			break;
		
		case 12:
			return "INS_TURN_ON_THERMAL_VISION";
			break;
		
		case 13:
			return "INS_ZOOM_IN_ON_FRANKLIN";
			break;
		
		case 14:
			return "INS_LOOK_FOR_A_HEAT_SOURCES";
			break;
		
		case 15:
			return "INS_LOOK_FOR_ANOTHER_HEAT_SOURCES";
			break;
		
		case 16:
			return "INS_SWITCH_TO_FRANKLIN";
			break;
		
		case 17:
			return "INS_GET_IN_THE_ZTYPE";
			break;
		
		case 18:
			return "INS_DRIVE_TO_AIRPORT";
			break;
		
		case 19:
			return "INS_DRIVE_TO_DESTINATION";
			break;
		
		case 20:
			return "INS_WARNING_WANTED_LEVEL";
			break;
		
		case 21:
			return "INS_DRIVE_IN_TO_GARAGE";
			break;
		
		case 22:
			return "INS_EXIT_AIRPORT";
			break;
		
		case 23:
			return "INS_RETURN_ZTYPE";
			break;
	}
	return "NO DATA";
}

void func_154(int iParam0)//Position - 0xB605
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(442.1297f, -982.7592f, 31.463f, "v_policehub");
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar0)
				{
					iVar1 = joaat("weapon_unarmed");
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
					{
						if (iVar1 != joaat("weapon_unarmed"))
						{
							if (!GlobalFunc_116(0))
							{
								if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM001") && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM002"))
								{
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
									PLAYER::SET_MAX_WANTED_LEVEL(5);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
									func_157(iParam0, "CH_F15", 1);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(442.1297f, -982.7592f, 31.463f, "v_policehub");
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar0)
					{
						if (iLocal_1423 == 0)
						{
							iLocal_1423 = MISC::GET_GAME_TIMER() + 2700;
							iLocal_1422 = 2;
						}
					}
				}
			}
			if (iLocal_1422 == 2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1423)
				{
					func_157(iParam0, "CH_F13", 1);
				}
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1471[5 /*14*/]))
			{
				if (PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
				{
					if (!func_57(13))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						func_157(iParam0, "CH_F13", 1);
					}
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f, 0, 1, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					func_157(iParam0, "CH_F13", 1);
				}
			}
			break;
		
		case 5:
			if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f))
			{
				uVar2 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f);
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar2) == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					func_157(iParam0, "CH_F13", 1);
				}
			}
			break;
		
		case 6:
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iLocal_2748, -1);
			iVar3 = 0;
			while (iVar3 < iLocal_2748)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2748[iVar3]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2748[iVar3]))
					{
						if (PED::IS_PED_IN_COMBAT(iLocal_2748[iVar3], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(iLocal_2748[iVar3]))
						{
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_2748[iVar3]) == iLocal_3939)
							{
								func_157(iParam0, "CH_F13", 1);
							}
						}
					}
					else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_3939)
					{
						func_157(iParam0, "CH_F13", 1);
					}
				}
				iVar3++;
			}
			break;
		
		case 7:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1724[0 /*2*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					func_157(iParam0, "CH_F01", 1);
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 422f, -978f, 30f, 1) > 100f && (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))))
			{
				func_157(iParam0, "CH_F14", 0);
			}
			break;
		
		case 9:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1724[0 /*2*/], 476.3787f, -987.3391f, 45.75825f, 430.2201f, -986.7795f, 79.07014f, 31.125f, 0, 1, 0))
					{
						func_157(iParam0, "CH_F18", 0);
					}
				}
			}
			break;
		
		case 10:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_1724[2 /*2*/]) < 820)
				{
					func_157(iParam0, "CH_F07", 0);
				}
				if (((VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1724[2 /*2*/], 0) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1724[2 /*2*/], 1)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1724[2 /*2*/], 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1724[2 /*2*/], 3))
				{
					func_157(iParam0, "CH_F07", 0);
				}
			}
			break;
		
		case 11:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 1) > 150f)
				{
					func_157(iParam0, "CH_F08", 0);
				}
			}
			break;
		
		case 12:
			if (func_57(127))
			{
				func_157(iParam0, "CH_F20", 0);
			}
			break;
		
		case 17:
			if (func_57(44))
			{
				func_157(iParam0, "CH_F19", 0);
			}
			break;
		
		case 18:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1724[5 /*2*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
				{
					func_157(iParam0, "CH_F21", 0);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[5 /*2*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_157(iParam0, "CH_F23", 0);
				}
			}
			break;
		
		case 19:
			if ((((ENTITY::DOES_ENTITY_EXIST(Local_1471[6 /*14*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1471[6 /*14*/], PLAYER::PLAYER_PED_ID(), 1)) || (ENTITY::DOES_ENTITY_EXIST(Local_1471[7 /*14*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1471[7 /*14*/], PLAYER::PLAYER_PED_ID(), 1))) || (ENTITY::DOES_ENTITY_EXIST(Local_1471[8 /*14*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1471[8 /*14*/], PLAYER::PLAYER_PED_ID(), 1))) || (ENTITY::DOES_ENTITY_EXIST(Local_1471[9 /*14*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1471[9 /*14*/], PLAYER::PLAYER_PED_ID(), 1)))
			{
				func_157(iParam0, "CH_F24", 0);
			}
			break;
		
		case 13:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
			{
				if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1724[2 /*2*/], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1724[2 /*2*/], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1724[2 /*2*/], 0, 7000))
				{
					func_157(iParam0, "CH_F12", 0);
				}
			}
			break;
		
		case 14:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2747))
			{
				if (PED::IS_PED_INJURED(iLocal_2747))
				{
					func_157(iParam0, "CH_F21", 0);
				}
			}
			break;
		
		case 16:
			if (func_57(133))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_157(iParam0, "CH_F25", 0);
				}
			}
			break;
		
		case 15:
			if (func_57(121))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2747))
				{
					if (!PED::IS_PED_INJURED(iLocal_2747))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2747, PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_2747, 1785177548) == 2)
						{
							iVar4 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[6 /*14*/]))
				{
					if (PED::IS_PED_INJURED(Local_1471[6 /*14*/]))
					{
						iVar4 = 1;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1471[6 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_1471[6 /*14*/], 993674639) == 2)
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[7 /*14*/]))
				{
					if (PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
					{
						iVar4 = 1;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1471[7 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_1471[7 /*14*/], 993674639) == 2)
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[8 /*14*/]))
				{
					if (PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
					{
						iVar4 = 1;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1471[8 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_1471[8 /*14*/], 993674639) == 2)
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1724[5 /*2*/]))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (ENTITY::GET_ENTITY_HEALTH(Local_1724[5 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1724[4 /*2*/]))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[4 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (ENTITY::GET_ENTITY_HEALTH(Local_1724[4 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1724[12 /*2*/]))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[12 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (ENTITY::GET_ENTITY_HEALTH(Local_1724[4 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1724[13 /*2*/]))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[13 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (ENTITY::GET_ENTITY_HEALTH(Local_1724[13 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (iVar4 && iLocal_4015 == 0)
				{
					func_157(iParam0, "CH_F22", 1);
					if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
					{
						TASK::TASK_SMART_FLEE_PED(Local_1471[8 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(Local_1471[8 /*14*/], 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_2747))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_2747, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_2747, 1);
					}
					if (!PED::IS_PED_INJURED(Local_1471[6 /*14*/]))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_1471[6 /*14*/], joaat("weapon_microsmg"), 1000, 0, 1);
						TASK::TASK_COMBAT_PED(Local_1471[6 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(Local_1471[6 /*14*/], 1);
					}
					if (!PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_1471[7 /*14*/], joaat("weapon_microsmg"), 1000, 0, 1);
						TASK::TASK_COMBAT_PED(Local_1471[7 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(Local_1471[7 /*14*/], 1);
					}
				}
			}
			break;
	}
	if (iLocal_4015 != 0)
	{
		if (bLocal_4016 && fLocal_4014 < 2f)
		{
			fLocal_4014 = (fLocal_4014 + SYSTEM::TIMESTEP());
		}
		else
		{
			func_1(sLocal_4017);
		}
	}
}



void func_157(int iParam0, char* sParam1, bool bParam2)//Position - 0xC086
{
	if (!func_44("cs2_cop5"))
	{
		func_158(0);
	}
	if (!bLocal_4016)
	{
		iLocal_4015 = iParam0;
		sLocal_4017 = sParam1;
		bLocal_4016 = bParam2;
	}
}

void func_158(bool bParam0)//Position - 0xC0B5
{
	iLocal_3999 = 0;
	StringCopy(&cLocal_3943, "", 24);
	StringCopy(&Local_3949, "", 24);
	if (bParam0)
	{
		GlobalFunc_5105();
	}
	else
	{
		GlobalFunc_4956();
		GlobalFunc_4935();
	}
}


void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC0F5
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (Local_4018[iParam0 /*4*/] != iParam1)
	{
		Local_4018[iParam0 /*4*/].f_1 = 0;
		Local_4018[iParam0 /*4*/] = iParam1;
	}
	if (!Local_4018[iParam0 /*4*/].f_1)
	{
		if (func_228(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_4018[iParam0 /*4*/])
			{
				case 1:
					GlobalFunc_527("CH_POL1", 7500, 1);
					uLocal_3933 = GlobalFunc_5104(441.02f, -978.93f, 30.69f, 0);
					Local_4018[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 2:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							if (HUD::DOES_BLIP_EXIST(uLocal_3933))
							{
								HUD::REMOVE_BLIP(&uLocal_3933);
							}
							if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
							{
								uLocal_3933 = GlobalFunc_6797(Local_1471[5 /*14*/], 0, 145);
							}
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!GlobalFunc_111())
							{
								GlobalFunc_527("CH_POL2", 7500, 1);
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 3:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							if (HUD::DOES_BLIP_EXIST(uLocal_3933))
							{
								HUD::REMOVE_BLIP(&uLocal_3933);
							}
							if (GlobalFunc_663("CH_POL2", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							func_223(1, 2, 1);
							uLocal_3933 = GlobalFunc_5104(463.5469f, -984.1166f, 42.6919f, 0);
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!GlobalFunc_111())
							{
								GlobalFunc_527("CH_POL3", 7500, 1);
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 4:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
					{
						switch (Local_4018[iParam0 /*4*/].f_2)
						{
							case 0:
								if (HUD::DOES_BLIP_EXIST(uLocal_3933))
								{
									HUD::REMOVE_BLIP(&uLocal_3933);
								}
								if (INTERIOR::IS_VALID_INTERIOR(iLocal_3939))
								{
									INTERIOR::UNPIN_INTERIOR(iLocal_3939);
								}
								uLocal_3933 = GlobalFunc_6783(Local_1724[0 /*2*/], 0, 0);
								Local_4018[iParam0 /*4*/].f_2++;
								break;
							
							case 1:
								if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_663("CH_POL3", 0, 0))
										{
											HUD::CLEAR_PRINTS();
										}
										GlobalFunc_527("CH_INS1", 1, 1);
									}
								}
								else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_3933))
									{
										HUD::REMOVE_BLIP(&uLocal_3933);
										Local_4018[iParam0 /*4*/].f_2++;
									}
								}
								break;
							
							case 2:
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
								{
									uLocal_3933 = GlobalFunc_6783(Local_1724[0 /*2*/], 0, 0);
									Local_4018[iParam0 /*4*/].f_2++;
								}
								break;
							
							case 3:
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
								{
									HUD::REMOVE_BLIP(&uLocal_3933);
									Local_4018[iParam0 /*4*/].f_2 = 2;
								}
								break;
							}
					}
					break;
				
				case 5:
					GlobalFunc_527("CH_INS50", 7500, 1);
					Local_4018[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 6:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_Display_Help_Text("CH_INS3");
							Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 8000;
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (GlobalFunc_74("CH_INS3"))
							{
								if (iLocal_3132 == 0)
								{
									iLocal_3132 = MISC::GET_GAME_TIMER() + 3000;
								}
								if (MISC::ABSF(PAD::GET_DISABLED_CONTROL_NORMAL(0, 291)) > 0.1f || MISC::ABSF(PAD::GET_DISABLED_CONTROL_NORMAL(0, 290)) > 0.1f)
								{
									iLocal_3131 = (iLocal_3131 + SYSTEM::FLOOR((1000f * SYSTEM::TIMESTEP())));
									if (!iLocal_3134)
									{
										iLocal_3134 = 1;
										iLocal_3133++;
									}
								}
								else
								{
									iLocal_3134 = 0;
								}
								if ((iLocal_3131 > 3000 || iLocal_3133 >= 2) || MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3132)
									{
										iLocal_3134 = 0;
										iLocal_3133 = 0;
										iLocal_3132 = 0;
										iLocal_3131 = 0;
										Local_4018[iParam0 /*4*/].f_2++;
										HUD::CLEAR_HELP(1);
									}
								}
							}
							else
							{
								HUD::CLEAR_HELP(1);
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							GlobalFunc_Display_Help_Text("CH_INS4");
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 3:
							if (GlobalFunc_74("CH_INS4"))
							{
								if (iLocal_3132 == 0)
								{
									iLocal_3132 = MISC::GET_GAME_TIMER() + 3000;
									Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 8000;
								}
								if (MISC::ABSF(PAD::GET_DISABLED_CONTROL_NORMAL(0, 39)) >= 0.05f)
								{
									iLocal_3131 = (iLocal_3131 + SYSTEM::FLOOR((1000f * SYSTEM::TIMESTEP())));
									if (!iLocal_3134)
									{
										iLocal_3134 = 1;
										iLocal_3133++;
									}
								}
								else
								{
									iLocal_3134 = 0;
								}
								if ((iLocal_3131 > 3000 || iLocal_3133 >= 2) || MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3132)
									{
										iLocal_3134 = 0;
										iLocal_3133 = 0;
										iLocal_3132 = 0;
										iLocal_3131 = 0;
										HUD::CLEAR_HELP(1);
										Local_4018[iParam0 /*4*/].f_2 = 6;
									}
								}
							}
							else
							{
								Local_4018[iParam0 /*4*/].f_2 = 6;
							}
							break;
						
						case 4:
							GlobalFunc_159("CH_INS4", -1);
							Local_4018[iParam0 /*4*/].f_2 = 6;
							break;
						
						case 5:
							if (GlobalFunc_74("CH_INS5"))
							{
								if (Local_2193.f_40 < 20f)
								{
									HUD::CLEAR_HELP(1);
									Local_4018[iParam0 /*4*/].f_2++;
								}
							}
							else
							{
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 6:
							GlobalFunc_159("CH_INS6d", 5500);
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 7:
							if (!GlobalFunc_74("CH_INS6d"))
							{
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
					{
						switch (Local_4018[iParam0 /*4*/].f_2)
						{
							case 0:
								GlobalFunc_159("CH_INS7b", -1);
								GlobalFunc_527("CH_INS7", 7500, 1);
								func_218(&Local_2193);
								func_813(&Local_2193, Local_1471[4 /*14*/], 1, 3, 0, 1, 0, 1, 0);
								func_812(&Local_2193, Local_1471[4 /*14*/], "CH_NAME", 3);
								Local_4018[iParam0 /*4*/].f_2++;
								break;
							
							case 1:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[4 /*14*/]))
								{
									Local_4018[iParam0 /*4*/].f_3 = (Local_4018[iParam0 /*4*/].f_3 + SYSTEM::FLOOR((1000f * SYSTEM::TIMESTEP())));
									if (Local_4018[iParam0 /*4*/].f_3 > 5000)
									{
										iLocal_3131 = 0;
										HUD::CLEAR_HELP(1);
									}
								}
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									GlobalFunc_159("CH_INS8c", 5000);
									Local_4018[iParam0 /*4*/].f_3 = 0;
									Local_4018[iParam0 /*4*/].f_2++;
								}
								break;
							
							case 2:
								if (GlobalFunc_74("CH_INS8c"))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[4 /*14*/]))
									{
										if (Local_2193.f_128 == 1 || func_59(&Local_2193, Local_1471[4 /*14*/]))
										{
											Local_4018[iParam0 /*4*/].f_3 = (Local_4018[iParam0 /*4*/].f_3 + SYSTEM::FLOOR((1000f * SYSTEM::TIMESTEP())));
											if (Local_4018[iParam0 /*4*/].f_3 > 5000)
											{
												iLocal_3131 = 0;
												HUD::CLEAR_HELP(1);
												Local_4018[iParam0 /*4*/].f_2++;
											}
										}
									}
								}
								else
								{
									if (func_217(&Local_2193, &iVar0))
									{
										Local_4018[iParam0 /*4*/].f_2 = 5;
									}
									else
									{
										Local_4018[iParam0 /*4*/].f_2++;
									}
									Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 3000;
									GlobalFunc_159("CH_INS7c", 13000);
								}
								break;
							
							case 3:
							case 4:
							case 5:
								if (func_59(&Local_2193, Local_1471[4 /*14*/]) || Local_2193.f_128 == 1)
								{
									Local_4018[iParam0 /*4*/].f_1 = 1;
								}
								else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3)
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[4 /*14*/], 0) < 550f)
										{
											if (func_217(&Local_2193, &iVar1))
											{
												if (Local_4018[iParam0 /*4*/].f_2 < 5)
												{
													HUD::CLEAR_HELP(1);
													GlobalFunc_159("CH_INS7c", -1);
													Local_4018[iParam0 /*4*/].f_2 = 5;
												}
											}
											else if (Local_4018[iParam0 /*4*/].f_2 < 4)
											{
												GlobalFunc_159("CH_INS4", -1);
												Local_4018[iParam0 /*4*/].f_2 = 4;
											}
										}
									}
								}
								break;
							}
					}
					break;
				
				case 8:
					Local_4018[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 9:
					break;
				
				case 10:
					GlobalFunc_164("CH_INS13", 6000, 1);
					Local_4018[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					GlobalFunc_159("CH_INS41", -1);
					Local_4018[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_Display_Help_Text("CH_INS31");
							func_863(16, 14, 0);
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (bLocal_3162 == 1)
							{
								HUD::CLEAR_HELP(1);
								GlobalFunc_159("CH_INS32", -1);
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								if (!func_57(83))
								{
									GlobalFunc_527("CH_INS30", 7500, 1);
									Local_4018[iParam0 /*4*/].f_1 = 1;
								}
								else
								{
									Local_4018[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 13:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_527("CH_ZOOM", 7500, 1);
							Local_4018[iParam0 /*4*/].f_2 = 2;
							break;
						
						case 2:
							if (!GlobalFunc_663("CH_ZOOM", 0, 0))
							{
								Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1500;
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3)
							{
								GlobalFunc_527("CH_ZOOMC", 7500, 1);
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_527("CH_INS32b", 7500, 1);
							GlobalFunc_159("CH_ZOOMb", -1);
							Local_4018[iParam0 /*4*/].f_2++;
							Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2500;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3)
							{
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (func_57(100))
							{
								if (GlobalFunc_663("CH_INS32b", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_57(99))
							{
								Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_527("CH_INS32c", 7500, 1);
									Local_4018[iParam0 /*4*/].f_2++;
								}
							}
							else if (func_57(100))
							{
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
					}
					break;
				
				case 16:
					GlobalFunc_527("CH_INS39", 7500, 1);
					Local_4018[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 17:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_527("CH_GET", 7500, 1);
							uLocal_3933 = GlobalFunc_6783(Local_1724[2 /*2*/], 0, 0);
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_57(113) && func_57(115))
							{
								if (GlobalFunc_663("CH_GET", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
								{
									if (GlobalFunc_663("CH_GET", 0, 0))
									{
										HUD::CLEAR_PRINTS();
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_3933))
									{
										HUD::REMOVE_BLIP(&uLocal_3933);
									}
								}
								else if (!HUD::DOES_BLIP_EXIST(uLocal_3933))
								{
									uLocal_3933 = GlobalFunc_6783(Local_1724[2 /*2*/], 0, 0);
								}
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							HUD::CLEAR_PRINTS();
							if (HUD::DOES_BLIP_EXIST(uLocal_3933))
							{
								HUD::REMOVE_BLIP(&uLocal_3933);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								GlobalFunc_504(Local_1724[2 /*2*/], -1);
								GlobalFunc_2223(Local_1724[2 /*2*/], -1);
							}
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_57(115))
							{
								AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
								func_212(14, 0);
								Local_4018[iParam0 /*4*/].f_2++;
								Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 5500;
								GlobalFunc_2427(2, 1);
							}
							break;
						
						case 2:
							if (Local_4018[iParam0 /*4*/].f_3 != 0)
							{
								if (MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3)
								{
									Local_4018[iParam0 /*4*/].f_3 = 0;
									AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								fVar3 = ENTITY::GET_ENTITY_SPEED(Local_1724[2 /*2*/]);
								fVar2 = (fVar3 * 0.2f);
								if (fVar2 < 3f)
								{
									fVar2 = 3f;
								}
								fVar2 = (fVar2 + 2f);
								if (GlobalFunc_713(Local_1724[2 /*2*/], -968.4945f, -2798.293f, 12.9648f, 1) < fVar2 || GlobalFunc_9194(&uLocal_3137, Local_1465, 2f, 2f, 5f, 1, Local_1724[2 /*2*/], "CH_INS53", "CMN_GENGETIN", "CMN_GENGETBCK", 1, 0, 1, -1))
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
									{
										Local_4018[iParam0 /*4*/].f_2++;
									}
								}
								else if (func_57(114))
								{
									Local_4018[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						
						case 3:
							if (GlobalFunc_530(Local_1724[2 /*2*/], 3f, 2, 1056964608, 0, 1))
							{
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 19:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								if (GlobalFunc_9194(&uLocal_3137, Local_1462, 2f, 2f, 2f, 1, Local_1724[2 /*2*/], "CH_INS25", "CMN_GENGETIN", "CMN_GENGETBCK", 1, 0, 1, -1))
								{
									Local_4018[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_208(5, 71))
							{
								GlobalFunc_527("CH_COPS", 7500, 1);
								Local_4018[iParam0 /*4*/].f_2++;
								Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 12000;
							}
							break;
						
						case 1:
							if (!GlobalFunc_663("CH_COPS", 0, 0))
							{
								GlobalFunc_527("CH_COPS2", 7500, 1);
								Local_4018[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (MISC::GET_GAME_TIMER() > Local_4018[iParam0 /*4*/].f_3 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1462, 1) > 300f)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									PLAYER::SET_MAX_WANTED_LEVEL(5);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
									Local_4018[iParam0 /*4*/].f_2++;
									Local_4018[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
								}
							}
							break;
						
						case 3:
							if (!GlobalFunc_111())
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_CAR_STEAL_2_01", 0f);
								Local_4018[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 21:
					GlobalFunc_527("CH_INS38", 7500, 1);
					Local_4018[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 22:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_5652(&uLocal_3137, 1, 0);
							GlobalFunc_7139(&uLocal_3137, 0);
							Local_4018[1 /*4*/].f_2 = 0;
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if ((GlobalFunc_9193(&uLocal_3137, -951.5104f, -2785.983f, 12.9648f, Global_18, 1, "CH_INS51", 0, 1, -1) || !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 0, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1000.982f, -2863.638f, 12.02729f, -962.7838f, -2797.051f, 21.38574f, 41.75f, 0, 1, 0))
							{
								Local_4018[iParam0 /*4*/].f_1 = 1;
								GlobalFunc_5652(&uLocal_3137, 1, 0);
								GlobalFunc_7139(&uLocal_3137, 0);
							}
							break;
					}
					break;
				
				case 23:
					switch (Local_4018[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_5652(&uLocal_3137, 1, 0);
							GlobalFunc_7139(&uLocal_3137, 0);
							Local_4018[0 /*4*/].f_2 = 0;
							Local_4018[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (GlobalFunc_9194(&uLocal_3137, Local_1462, Global_18, 1, Local_1724[2 /*2*/], "CH_INS52", "CMN_GENGETIN", "CMN_GENGETBCK", 0, 0, 1, -1))
							{
								Local_4018[iParam0 /*4*/].f_1 = 1;
								GlobalFunc_5652(&uLocal_3137, 1, 0);
								GlobalFunc_7139(&uLocal_3137, 0);
							}
							break;
					}
					break;
				}
			}
	}
}
















































int func_208(int iParam0, int iParam1)//Position - 0x10AC8
{
	if (Local_4308[iParam0 /*5*/] == iParam1)
	{
		if (Local_4308[iParam0 /*5*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}




void func_212(int iParam0, int iParam1)//Position - 0x10CE5
{
	iLocal_3970 = 1;
	iLocal_3973 = 0;
	bLocal_3969 = false;
	switch (iParam0)
	{
		case 2:
		case 4:
		case 6:
		case 8:
		case 14:
			bLocal_3969 = true;
			break;
	}
	sLocal_3971 = func_213(iParam0);
	sLocal_3972 = func_213(iParam1);
}

char* func_213(int iParam0)//Position - 0x10D37
{
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case 1:
			return "CAR2_MISSION_START";
			break;
		
		case 2:
			return "CAR2_SCAN_1";
			break;
		
		case 3:
			return "car2_scan_2_restart";
			break;
		
		case 4:
			return "CAR2_GUN";
			break;
		
		case 5:
			return "car2_scan_2_restart";
			break;
		
		case 6:
			return "CAR2_CHASE_START";
			break;
		
		case 7:
			return "CAR2_CHASE_RESTART";
			break;
		
		case 8:
			return "CAR2_ALLEY";
			break;
		
		case 9:
			return "CAR2_SWITCH_1_RESTART";
			break;
		
		case 10:
			return "CAR2_CHAD_FOUND";
			break;
		
		case 11:
			return "CAR2_SWITCH_1";
			break;
		
		case 12:
			return "CAR2_SWITCH_1_RESTART";
			break;
		
		case 13:
			return "CAR2_DRIVE_RESTART";
			break;
		
		case 14:
			return "CAR2_RADIO_1";
			break;
		
		case 15:
			return "CAR2_STOP";
			break;
		
		case 16:
			return "CAR2_MISSION_FAIL";
			break;
	}
	return "";
}




int func_217(var uParam0, int iParam1)//Position - 0x10EED
{
	if (uParam0->f_171 == -1)
	{
		return 0;
	}
	*iParam1 = uParam0->f_298[uParam0->f_171 /*11*/];
	return 1;
}

void func_218(var uParam0)//Position - 0x10F13
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_242)
	{
		uParam0->f_242[iVar0 /*11*/].f_5 = -1;
		uParam0->f_242[iVar0 /*11*/].f_4 = 0;
		uParam0->f_242[iVar0 /*11*/].f_3 = 0;
		uParam0->f_242[iVar0 /*11*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	uParam0->f_241 = 0;
}





void func_223(int iParam0, int iParam1, int iParam2)//Position - 0x1104B
{
	Local_4018[iParam0 /*4*/].f_1 = iParam2;
	Local_4018[iParam0 /*4*/] = iParam1;
}





int func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1111C
{
	bLocal_1420 = false;
	iLocal_1421 = 0;
	if (func_229(&bLocal_1420, &iLocal_1421, iParam0, iParam1))
	{
		if (func_229(&bLocal_1420, &iLocal_1421, iParam2, iParam3))
		{
			if (func_229(&bLocal_1420, &iLocal_1421, iParam4, iParam5))
			{
				if (func_229(&bLocal_1420, &iLocal_1421, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_1420)
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1117B
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_57(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_232(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_57(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_57(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_232(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_57(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_231(iParam3))
			{
				if (func_232(iParam3))
				{
					*iParam0 = 1;
				}
			}
			else if (func_57(iParam3))
			{
				func_230(iParam3);
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_230(int iParam0)//Position - 0x112CD
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_4043[0 /*7*/]);
	if (Local_4043[iVar0 /*7*/] == iParam0)
	{
		Local_4043[iVar0 /*7*/].f_3 = 1;
	}
}

int func_231(int iParam0)//Position - 0x112F9
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_4043[0 /*7*/]);
	if (Local_4043[iVar0 /*7*/] == iParam0)
	{
		if (Local_4043[iVar0 /*7*/].f_1 && Local_4043[iVar0 /*7*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0)//Position - 0x1133A
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_4043[0 /*7*/]);
	if (Local_4043[iVar0 /*7*/] == iParam0)
	{
		if (Local_4043[iVar0 /*7*/].f_1 && !Local_4043[iVar0 /*7*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_233(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1137C
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	float fVar12;
	float fVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (Local_4434[iParam0 /*10*/] != iParam1 || Local_4434[iParam0 /*10*/].f_1 == 0)
	{
		Local_4434[iParam0 /*10*/] = iParam1;
		Local_4434[iParam0 /*10*/].f_1 = 1;
		Local_4434[iParam0 /*10*/].f_3 = 0;
		Local_4434[iParam0 /*10*/].f_6 = 0;
		Local_4434[iParam0 /*10*/].f_2 = 0;
		Local_4434[iParam0 /*10*/].f_4 = 0;
		Local_4434[iParam0 /*10*/].f_7 = 0;
	}
	if (Local_4434[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_228(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_4434[iParam0 /*10*/].f_2 = 0;
	}
	if (!bLocal_2111 || Local_4434[iParam0 /*10*/].f_6 == 99)
	{
		if (Local_4434[iParam0 /*10*/].f_3 == 0 || Local_4434[iParam0 /*10*/].f_6 == 99)
		{
			if (bVar0 == 1)
			{
				if (!Local_4434[iParam0 /*10*/].f_2)
				{
					Local_4434[iParam0 /*10*/].f_2 = 1;
				}
				switch (Local_4434[iParam0 /*10*/])
				{
					case 1:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 99:
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
								break;
							
							case 100:
								Local_1471[5 /*14*/] = Global_86864.f_9[0];
								Local_1471[6 /*14*/] = Global_86864.f_9[1];
								Local_1471[7 /*14*/] = Global_86864.f_9[2];
								Local_1471[8 /*14*/] = Global_86864.f_9[6];
								Local_1471[9 /*14*/] = Global_86864.f_9[3];
								Local_1471[10 /*14*/] = Global_86864.f_9[4];
								Local_1471[11 /*14*/] = Global_86864.f_9[5];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[5 /*14*/], 1, 1);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[6 /*14*/], 1, 1);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[7 /*14*/], 1, 1);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[8 /*14*/], 1, 1);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[9 /*14*/], 1, 1);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[10 /*14*/], 1, 1);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[11 /*14*/], 1, 1);
								break;
							
							case 0:
								func_481(iParam0);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								iLocal_3939 = INTERIOR::GET_INTERIOR_AT_COORDS(441.02f, -978.93f, 30.69f);
								if (INTERIOR::IS_VALID_INTERIOR(iLocal_3939))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3939);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (INTERIOR::IS_INTERIOR_READY(iLocal_3939))
								{
									STREAMING::SET_INTERIOR_ACTIVE(iLocal_3939, 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
								{
									Local_1471[5 /*14*/] = Global_86864.f_9[0];
									Local_1471[6 /*14*/] = Global_86864.f_9[1];
									Local_1471[7 /*14*/] = Global_86864.f_9[2];
									Local_1471[8 /*14*/] = Global_86864.f_9[6];
									Local_1471[9 /*14*/] = Global_86864.f_9[3];
									Local_1471[10 /*14*/] = Global_86864.f_9[4];
									Local_1471[11 /*14*/] = Global_86864.f_9[5];
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[5 /*14*/], 1, 1);
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[6 /*14*/], 1, 1);
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[7 /*14*/], 1, 1);
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[8 /*14*/], 1, 1);
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[9 /*14*/], 1, 1);
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[10 /*14*/], 1, 1);
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[11 /*14*/], 1, 1);
								}
								else
								{
									Local_1471[5 /*14*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 441.0267f, -978.204f, 29.6895f, 192f, 1, 1);
									Local_1471[6 /*14*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 440.2506f, -975.6328f, 29.6895f, 356f, 1, 1);
									Local_1471[7 /*14*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 454.1487f, -979.894f, 29.6896f, 105.1729f, 1, 1);
									Local_1471[8 /*14*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 450.2071f, -992.9072f, 29.6896f, 316.4481f, 1, 1);
									Local_1471[9 /*14*/] = PED::CREATE_PED(4, joaat("a_m_y_genstreet_02"), 436.9079f, -986.8186f, 29.6895f, 71.5386f, 1, 1);
									Local_1471[10 /*14*/] = PED::CREATE_PED(4, joaat("a_m_y_genstreet_02"), 443.468f, -981.777f, 29.6895f, 30f, 1, 1);
									Local_1471[11 /*14*/] = PED::CREATE_PED(4, joaat("a_m_y_genstreet_02"), 444.914f, -988.1146f, 29.6895f, 71.5386f, 1, 1);
								}
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 0, 2, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 3, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 4, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 10, 0, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 0, 0, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 4, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 8, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 10, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 0, 0, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 3, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 4, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 9, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 10, 1, 1, 0);
								PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[8 /*14*/]);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1471[5 /*14*/], 0);
								AUDIO::STOP_PED_SPEAKING(Local_1471[5 /*14*/], 1);
								AUDIO::STOP_PED_SPEAKING(Local_1471[6 /*14*/], 1);
								AUDIO::STOP_PED_SPEAKING(Local_1471[7 /*14*/], 1);
								AUDIO::STOP_PED_SPEAKING(Local_1471[8 /*14*/], 1);
								WEAPON::GIVE_WEAPON_TO_PED(Local_1471[5 /*14*/], joaat("weapon_pistol"), -1, 0, 1);
								WEAPON::GIVE_WEAPON_TO_PED(Local_1471[6 /*14*/], joaat("weapon_pistol"), -1, 0, 1);
								WEAPON::GIVE_WEAPON_TO_PED(Local_1471[7 /*14*/], joaat("weapon_pistol"), -1, 0, 1);
								WEAPON::GIVE_WEAPON_TO_PED(Local_1471[8 /*14*/], joaat("weapon_pistol"), -1, 0, 1);
								TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[5 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
								TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[6 /*14*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
								TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[7 /*14*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[5 /*14*/], 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[6 /*14*/], 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[7 /*14*/], 0, 0);
								TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[9 /*14*/], "WORLD_HUMAN_BUM_STANDING", 0, 0);
								TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[10 /*14*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[9 /*14*/], 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[10 /*14*/], 0, 0);
								uVar1 = PED::CREATE_SYNCHRONIZED_SCENE(447.14f, -988.574f, 29.688f, 0f, 0f, -80.15f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[11 /*14*/], uVar1, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_dockworker", 1000f, -2f, 1, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[8 /*14*/], iVar1, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard1", 1000f, -2f, 1, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar1, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[11 /*14*/], 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[8 /*14*/], 0, 0);
								PED::SET_PED_CAN_RAGDOLL(Local_1471[11 /*14*/], 0);
								Local_4434[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 3:
						if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_1471[5 /*14*/], PLAYER::PLAYER_PED_ID(), 14000, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/], 14000, 0, 2);
						}
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 4:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_44("cs2_cop1"))
								{
									if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 0)
									{
										RECORDING::_0x293220DA1B46CEBC(7f, 5f, 4);
										Local_4434[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_1471[5 /*14*/]);
									func_480();
									TASK::TASK_PLAY_ANIM(0, "misscarsteal2officer", "officer_point", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
									func_479(Local_1471[5 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 5:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_1471[5 /*14*/]);
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 464.19f, -985.8955f, 29.6897f, 1f, 40000, 1048576000, 0, 1193033728);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
									func_479(Local_1471[5 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_57(20))
								{
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_232(20))
								{
									Local_4434[iParam0 /*10*/].f_6 = 0;
								}
								break;
						}
						break;
					
					case 6:
						func_478(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[5 /*14*/]));
						}
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 7:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								STREAMING::REQUEST_MODEL(joaat("polmav"));
								STREAMING::REQUEST_MODEL(iLocal_3135);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(joaat("polmav")) && STREAMING::HAS_MODEL_LOADED(iLocal_3135))
								{
									RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
									Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 449.035f, -982.4875f, 42.6919f, 357.5347f, 1, 1);
									VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1724[0 /*2*/], 0, 1);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[0 /*2*/], 1);
									AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1724[0 /*2*/]);
									func_477(1);
									func_480();
									TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
									TASK::TASK_LOOK_AT_COORD(0, 453.9144f, -948.0502f, 44.276f, -1, 0, 2);
									TASK::TASK_PAUSE(0, 99999999);
									func_479(Local_1471[2 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 8:
						if (!PED::IS_PED_INJURED(Local_1471[9 /*14*/]))
						{
							if (Global_24695)
							{
								if (GlobalFunc_156(Local_1471[9 /*14*/], PLAYER::PLAYER_PED_ID(), 1) < 5f)
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_1471[9 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_1471[9 /*14*/], 1), 30f, 0);
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 9:
						func_480();
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 441.256f, -977.9714f, 29.6895f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
						func_479(Local_1471[5 /*14*/], 0);
						Local_4434[iParam0 /*10*/].f_3 = 1;
						func_476(3, 5, 1);
						break;
					
					case 10:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
								TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 20000, 0, 2f, 262144, 0);
								if (HUD::DOES_BLIP_EXIST(uLocal_3933))
								{
									HUD::REMOVE_BLIP(&uLocal_3933);
								}
								HUD::CLEAR_PRINTS();
								if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_1471[2 /*14*/], PLAYER::PLAYER_PED_ID(), 6000, 0, 2);
								}
								GlobalFunc_7632(1);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 2)
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 20000, 0, 2f, 262144, 0);
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 1)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 11:
						if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
						{
							func_480();
							TASK::TASK_HELI_MISSION(0, Local_1724[0 /*2*/], 0, 0, 447.0187f, -982.2263f, 73.6343f, 4, 15f, 1f, 0f, 130, 30, -1082130432, 0);
							TASK::TASK_HELI_MISSION(0, Local_1724[0 /*2*/], 0, 0, 727.9601f, -1085.078f, 131.2213f, 9, 15f, 1f, 0f, 130, 30, -1082130432, 0);
							func_479(Local_1471[2 /*14*/], 0);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 12:
						if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
						{
							func_480();
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 15000, 0, 2);
							TASK::TASK_PAUSE(0, 1000);
							TASK::TASK_ENTER_VEHICLE(0, Local_1724[0 /*2*/], 20000, -1, 1f, 1, 0);
							TASK::TASK_HELI_MISSION(0, Local_1724[0 /*2*/], 0, 0, ENTITY::GET_ENTITY_COORDS(Local_1724[0 /*2*/], 1), 20, 0f, 5f, 0f, 0, 0, -1082130432, 0);
							func_479(Local_1471[2 /*14*/], 0);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 13:
						if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
						{
							func_480();
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 453.0859f, -985.3833f, 29.6896f, 2f, 20000, 1048576000, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							func_479(Local_1471[5 /*14*/], 0);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 16:
						if (iLocal_2191 == 2)
						{
							HUD::CLEAR_PRINTS();
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 15:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (STREAMING::HAS_ANIM_DICT_LOADED("switch@trevor@head_in_sink"))
								{
									Local_4434[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 3:
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								GlobalFunc_163();
								CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
								CAM::DESTROY_ALL_CAMS(0);
								uVar2 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
								CAM::ADD_CAM_SPLINE_NODE(uVar2, 417.4168f, -964.0216f, 31.2312f, 22.2372f, 0f, -121.6787f, 6500, 3, 2);
								CAM::ADD_CAM_SPLINE_NODE(uVar2, 417.3173f, -965.3885f, 31.2487f, -17.7868f, 0f, -164.7233f, 4500, 3, 2);
								CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uVar2, 3);
								CAM::SET_CAM_ACTIVE(uVar2, 1);
								CAM::SET_CAM_FOV(uVar2, 46.25f);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								Local_4434[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(419.776f, -969.354f, 29.529f, 0f, 0f, -108.72f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), Local_4434[iParam0 /*10*/].f_7, "switch@trevor@head_in_sink", "trev_sink_exit", 1000f, -2f, 0, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_4434[iParam0 /*10*/].f_7, 0);
								PED::SET_SYNCHRONIZED_SCENE_RATE(Local_4434[iParam0 /*10*/].f_7, 0f);
								MISC::CLEAR_AREA(418.9293f, -969.5886f, 29.41168f, 4f, 1, 0, 0, 0);
								Local_4434[iParam0 /*10*/].f_6 = 4;
								Local_4434[iParam0 /*10*/].f_8 = MISC::GET_GAME_TIMER() + 1800;
								GlobalFunc_9805(408.866f, -964.7565f, 26.65749f, 407.2291f, -989.1416f, 34.57925f, 24.8125f, 407.1f, -983.7553f, 28.2668f, 233.2444f, 4f, 10f, 6f, 1, 1, 1, 0, 0);
								break;
							
							case 4:
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								GlobalFunc_163();
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_8)
								{
									PED::SET_SYNCHRONIZED_SCENE_RATE(Local_4434[iParam0 /*10*/].f_7, 1f);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 5:
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								GlobalFunc_163();
								if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_4434[iParam0 /*10*/].f_7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_4434[iParam0 /*10*/].f_7) > 0.67f) && func_467()) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_4434[iParam0 /*10*/].f_7))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
									CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
									CAM::DESTROY_ALL_CAMS(0);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										CAM::SET_GAMEPLAY_ENTITY_HINT(Local_1724[0 /*2*/], 0f, 0f, -7f, 1, 6000, 5000, 4000, 0);
									}
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 6:
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_4434[iParam0 /*10*/].f_7))
								{
									STREAMING::REMOVE_ANIM_DICT("switch@trevor@head_in_sink");
								}
								break;
						}
						break;
					
					case 17:
						PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								STREAMING::REQUEST_ANIM_DICT("misscarsteal2franklin_on_bench");
								STREAMING::REQUEST_ANIM_DICT("AMB@PROP_HUMAN_SEAT_CHAIR@MALE@LEFT_ELBOW_ON_KNEE@BASE");
								STREAMING::REQUEST_MODEL(iLocal_3135);
								STREAMING::REQUEST_MODEL(joaat("polmav"));
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2franklin_on_bench") && STREAMING::HAS_ANIM_DICT_LOADED("AMB@PROP_HUMAN_SEAT_CHAIR@MALE@LEFT_ELBOW_ON_KNEE@BASE"))
								{
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
								GlobalFunc_163();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
								CAM::DESTROY_ALL_CAMS(0);
								uVar3 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
								CAM::ADD_CAM_SPLINE_NODE(uVar3, 1411.643f, -2045.374f, 52.0791f, -4.6833f, 0.165f, 106.0461f, 6500, 3, 2);
								CAM::ADD_CAM_SPLINE_NODE(uVar3, 1411.875f, -2045.208f, 51.9994f, 7.385f, 0.165f, 120.462f, 4000, 3, 2);
								CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uVar3, 2);
								CAM::SET_CAM_ACTIVE(uVar3, 1);
								CAM::SET_CAM_FOV(uVar3, 50f);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								Local_4434[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1409.681f, -2045.772f, 51.5f, 0f, 0f, 144.5f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), Local_4434[iParam0 /*10*/].f_7, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@LEFT_ELBOW_ON_KNEE@BASE", "base", 1000f, -4f, 0, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_4434[iParam0 /*10*/].f_7, 1);
								Local_4434[iParam0 /*10*/].f_6 = 4;
								Local_4434[iParam0 /*10*/].f_8 = MISC::GET_GAME_TIMER() + 2000;
								break;
							
							case 35:
								if (ENTITY::DOES_ENTITY_EXIST(Local_1724[0 /*2*/]))
								{
									CAM::SET_GAMEPLAY_ENTITY_HINT(Local_1724[0 /*2*/], 0f, 0f, 0f, 1, 10000, 6000, 2000, 0);
									Local_4434[iParam0 /*10*/].f_6 = 4;
								}
								break;
							
							case 4:
								GlobalFunc_163();
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_8 || func_467())
								{
									Local_4434[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(1409.681f, -2045.772f, 51.5f, 0f, 0f, 144.5f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), Local_4434[iParam0 /*10*/].f_8, "misscarsteal2franklin_on_bench", "exit_forward", 4f, -4f, 8, 0, 1148846080, 0);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 5:
								GlobalFunc_163();
								if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_4434[iParam0 /*10*/].f_8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_4434[iParam0 /*10*/].f_8) > 0.97f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_4434[iParam0 /*10*/].f_8))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 6:
								GlobalFunc_163();
								if (func_467())
								{
									CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
									CAM::DESTROY_ALL_CAMS(0);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										CAM::SET_GAMEPLAY_ENTITY_HINT(Local_1724[0 /*2*/], 0f, 0f, -7f, 1, 6000, 5000, 4000, 0);
									}
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 19:
						func_441(&Local_2193, Local_1724[0 /*2*/], 1, 0);
						AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 1);
						GlobalFunc_138();
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[2 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[2 /*14*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3135);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1724[0 /*2*/], 1, 1);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
						}
						Local_2193.f_6 = 1;
						func_804(3);
						AUDIO::START_AUDIO_SCENE("CAR_2_HELI_CAM_TUTORIAL");
						func_826(45);
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 20:
						func_212(1, 2);
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 21:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]) || Local_4434[iParam0 /*10*/].f_6 == 99)
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 99:
									STREAMING::REMOVE_ANIM_DICT("misscarsteal2");
									Local_4434[iParam0 /*10*/].f_3 = 1;
									break;
								
								case 0:
									STREAMING::REQUEST_ANIM_DICT("misscarsteal2");
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2"))
									{
										Local_4434[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 2:
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_1471[4 /*14*/], 0) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_1471[4 /*14*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], -828834893) == 7)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_1471[4 /*14*/], 0, 0);
										}
									}
									else if (GlobalFunc_713(Local_1471[4 /*14*/], 1390.733f, -2063.394f, 50.9983f, 1) < 5f)
									{
										if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
										{
											if (MISC::ABSF(GlobalFunc_7059(Local_1471[4 /*14*/], PLAYER::PLAYER_PED_ID())) > 45f)
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], -875674219) != 1)
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1471[4 /*14*/], PLAYER::PLAYER_PED_ID(), 2000);
												}
											}
											else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 242628503) == 7 && TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], -875674219) == 7)
											{
												func_480();
												TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
												func_479(Local_1471[4 /*14*/], 0);
											}
										}
									}
									else
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1471[4 /*14*/], 1390.733f, -2063.394f, 50.9983f, 2f, 20000, 1048576000, 0, 1193033728);
										Local_4434[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 3:
									if (GlobalFunc_713(Local_1471[4 /*14*/], 1390.733f, -2063.394f, 50.9983f, 1) < 5f)
									{
										Local_4434[iParam0 /*10*/].f_6 = 2;
									}
									break;
								}
						}
						break;
					
					case 22:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
								{
									TASK::TASK_SWEEP_AIM_ENTITY(Local_1471[4 /*14*/], "missCarsteal2", "sweep_high", "sweep_high", "sweep_high", -1, Local_1724[0 /*2*/], 1.57f, 1f);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 1226471469) == 1)
									{
										TASK::UPDATE_TASK_SWEEP_AIM_ENTITY(Local_1471[4 /*14*/], Local_1724[0 /*2*/]);
									}
									else
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 24:
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(1598.694f, -2350.996f, -200.3946f, 368.2026f);
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1471[4 /*14*/]))
						{
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 25:
						if (Local_4434[iParam0 /*10*/].f_6 == 0)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
							{
								if (ENTITY::GET_ENTITY_MODEL(Local_1724[1 /*2*/]) != joaat("buffalo2"))
								{
									Local_1724[1 /*2*/] = 0;
								}
							}
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0) && GlobalFunc_713(Local_1724[1 /*2*/], 1380.772f, -2066.011f, 50.9983f, 1) > 60f))
							{
								if (!CAM::IS_SPHERE_VISIBLE(1388.482f, -2043.429f, 50.9985f, 5f) && !VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(1388.482f, -2043.429f, 50.9985f, 5f))
								{
									Local_4434[iParam0 /*10*/].f_6 = 1;
								}
								else if (!CAM::IS_SPHERE_VISIBLE(1408.543f, -2057.734f, 50.9983f, 5f) && !VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(1408.543f, -2057.734f, 50.9983f, 5f))
								{
									Local_4434[iParam0 /*10*/].f_6 = 2;
								}
								else if (!CAM::IS_SPHERE_VISIBLE(1375.769f, -2080.064f, 50.9983f, 5f) && !VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(1375.769f, -2080.064f, 50.9983f, 5f))
								{
									Local_4434[iParam0 /*10*/].f_6 = 3;
								}
							}
						}
						if (Local_4434[iParam0 /*10*/].f_6 > 0)
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 1:
									if (GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, 1388.482f, -2043.429f, 50.9985f, 135.7372f, 1, 1))
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 2:
									if (GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, 1408.543f, -2057.734f, 50.9983f, 108.4516f, 1, 1))
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 3:
									if (GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, 1375.769f, -2080.064f, 50.9983f, 312.541f, 1, 1))
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									break;
							}
						}
						else
						{
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 26:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							PED::SET_PED_LOD_MULTIPLIER(Local_1471[4 /*14*/], 1.7f);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 27:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							PED::SET_PED_LOD_MULTIPLIER(Local_1471[4 /*14*/], 1f);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 23:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 99:
									STREAMING::REMOVE_ANIM_DICT("misscarsteal2");
									Local_4434[iParam0 /*10*/].f_3 = 1;
									break;
								
								case 0:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
									{
										func_480();
										TASK::TASK_ENTER_VEHICLE(0, Local_1724[1 /*2*/], 20000, -1, 2f, 1, 0);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, Local_1724[1 /*2*/], -93.9606f, -68.0128f, 55.7683f, 18f, 786603, 5f);
										func_479(Local_1471[4 /*14*/], 0);
									}
									STREAMING::REMOVE_ANIM_DICT("misscarsteal2");
									func_476(2, 21, 1);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_1471[4 /*14*/], 0))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
										{
											VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_1724[1 /*2*/]);
											Local_4434[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 28:
						if (GlobalFunc_742(-10.7022f, -33.1513f, 69.2777f, 30f, 500f))
						{
							if (CAM::IS_SPHERE_VISIBLE(-27.9336f, -35.7344f, 88.8509f, 10f))
							{
								Local_4434[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 29:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_SCANNING_TARGET"))
								{
									AUDIO::STOP_AUDIO_SCENE("CAR_2_SCANNING_TARGET");
								}
								if (Local_2193.f_128 == 1)
								{
									AUDIO::START_AUDIO_SCENE("CAR_2_SCANNING_TARGET");
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (Local_2193.f_128 == 0)
								{
									AUDIO::STOP_AUDIO_SCENE("CAR_2_SCANNING_TARGET");
									Local_4434[iParam0 /*10*/].f_6 = 0;
								}
								break;
						}
						break;
					
					case 30:
						if (func_59(&Local_2193, Local_1471[3 /*14*/]))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_2_SCAN_THE_SUSPECTS");
							AUDIO::START_AUDIO_SCENE("CAR_2_FOLLOW_CHAD_ON_FOOT");
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 31:
						if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[4 /*14*/]))
						{
							Local_4434[iParam0 /*10*/].f_9 = (Local_4434[iParam0 /*10*/].f_9 + SYSTEM::TIMESTEP());
							if (Local_4434[iParam0 /*10*/].f_9 > 10000f)
							{
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
								{
									PED::DELETE_PED(&(Local_1471[4 /*14*/]));
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
								{
									if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1724[1 /*2*/], 1))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1724[1 /*2*/], 1, 1);
										VEHICLE::DELETE_VEHICLE(&(Local_1724[1 /*2*/]));
									}
								}
								Local_4434[iParam0 /*10*/].f_3 = 1;
							}
						}
						else
						{
							Local_4434[iParam0 /*10*/].f_9 = 0f;
						}
						break;
					
					case 32:
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Garage_Open", Local_1471[3 /*14*/], "CAR_STEAL_2_SOUNDSET", 0, 0);
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 33:
						if (!GlobalFunc_742(-10.7022f, -33.1513f, 69.2777f, 30f, 500f) && !GlobalFunc_742(-30.3868f, -90.256f, 59.0222f, 30f, 500f))
						{
							func_826(52);
							func_826(50);
							func_804(6);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 34:
						if (func_407(6))
						{
							func_405(202.7272f, -149.7968f, 56.176f, 160f);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 35:
						if (iLocal_3938 == 5 || Local_4434[iParam0 /*10*/].f_6 == 0)
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL2_DISTANT_DOG", 0))
									{
										Local_4434[iParam0 /*10*/].f_8 = AUDIO::GET_SOUND_ID();
										Local_4434[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 2:
									if (!PED::IS_PED_INJURED(Local_1471[16 /*14*/]))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[16 /*14*/], "CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a", "idle_a", 3))
										{
											fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1471[16 /*14*/], "CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a", "idle_a");
											if ((((((fVar4 >= 0f && fVar4 < 0.02f) || (fVar4 >= 0.173f && fVar4 < 0.193f)) || (fVar4 >= 0.348f && fVar4 < 0.368f)) || (fVar4 >= 0.528f && fVar4 < 0.548f)) || (fVar4 >= 0.633f && fVar4 < 0.653f)) || (fVar4 >= 0.818f && fVar4 < 0.838f))
											{
												AUDIO::PLAY_SOUND_FRONTEND(Local_4434[iParam0 /*10*/].f_8, "DISTANT_DOG_BARK", "CAR_STEAL_2_SOUNDSET", 1);
												Local_4434[iParam0 /*10*/].f_6++;
												Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 500;
											}
										}
									}
									break;
								
								case 3:
									if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7)
									{
										Local_4434[iParam0 /*10*/].f_6 = 2;
									}
									break;
								
								case 10:
									Local_4434[iParam0 /*10*/].f_3 = 1;
									break;
								}
						}
						break;
					
					case 36:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (Local_2193.f_132)
								{
									Local_4434[iParam0 /*10*/].f_7 = AUDIO::GET_SOUND_ID();
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (Local_2193.f_132)
								{
									AUDIO::PLAY_SOUND_FRONTEND(iLocal_3937, "Lost_Target", "POLICE_CHOPPER_CAM_SOUNDS", 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (!Local_2193.f_132)
								{
									AUDIO::PLAY_SOUND_FRONTEND(iLocal_3937, "Found_Target", "POLICE_CHOPPER_CAM_SOUNDS", 1);
									Local_4434[iParam0 /*10*/].f_6 = 1;
								}
								break;
						}
						break;
					
					case 37:
						PATHFIND::SET_PED_PATHS_IN_AREA(Vector(46.3507f, -100.4234f, -290.3812f) - Vector(10f, 10f, 10f), Vector(46.3507f, -100.4234f, -290.3812f) + Vector(10f, 10f, 10f), 0, 0);
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 38:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_44("cs2_chase2"))
								{
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (!func_44("cs2_chase2"))
								{
									AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_CHASE_START");
									AUDIO::START_AUDIO_SCENE("CAR_2_CAR_CHASE_CONTINUED");
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 39:
						if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Car_Steal_2_Chase_Skids_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Car_Steal_2_Chase_Skids_02", 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								AUDIO::SET_AUDIO_VEHICLE_PRIORITY(Local_1724[2 /*2*/], 3);
							}
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 40:
						if (ENTITY::DOES_ENTITY_EXIST(Local_2193.f_9) && ENTITY::DOES_ENTITY_EXIST(Local_1724[2 /*2*/]))
						{
							Var5 = { CAM::GET_CAM_ROT(Local_2193.f_32, 2) };
							GlobalFunc_5395(ENTITY::GET_ENTITY_COORDS(Local_2193.f_9, 0), ENTITY::GET_ENTITY_COORDS(Local_1724[2 /*2*/], 0), &Var8, &(Var8.f_2), 1);
							fVar11 = SYSTEM::COS((Var5.f_2 - Var8.f_2));
							fVar12 = SYSTEM::COS((Var5.x - Var8.x));
							fVar13 = SYSTEM::COS((Var5.x + Var8.x));
							uVar14 = MISC::ACOS((((fVar11 * (fVar12 + fVar13)) + (fVar12 - fVar13)) / 2f));
							AUDIO::SET_AUDIO_SCENE_VARIABLE("CAR_2_Z_TYPE_ENGINE_BOOST", "TargetCarVisibility", uVar14);
						}
						break;
					
					case 41:
						ENTITY::CREATE_MODEL_HIDE(-111.8944f, -188.65f, 46.02f, 1f, joaat("prop_tree_birch_04"), 1);
						ENTITY::CREATE_MODEL_HIDE(-109.937f, -179.954f, 47.62f, 1f, joaat("prop_tree_birch_04"), 1);
						ENTITY::CREATE_MODEL_HIDE(-108.3848f, -171.323f, 49.34f, 1f, joaat("prop_tree_birch_04"), 1);
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 42:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 2000;
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7)
								{
									func_863(15, 14, 0);
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 43:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 99:
								if (ENTITY::DOES_ENTITY_EXIST(Local_1471[5 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[8 /*2*/], 0))
										{
											PED::SET_PED_INTO_VEHICLE(Local_1471[5 /*14*/], Local_1724[8 /*2*/], -1);
											func_480();
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[5 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[5 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											func_479(Local_1471[5 /*14*/], 1);
										}
										PED::SET_PED_KEEP_TASK(Local_1471[5 /*14*/], 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[5 /*14*/], 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[5 /*14*/]));
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_1724[8 /*2*/]))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[8 /*2*/]));
								}
								break;
							
							case 0:
								if (func_407(7))
								{
									Local_4434[iParam0 /*10*/].f_6 = 100;
									Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
								}
								break;
							
							case 100:
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7)
								{
									func_481(iParam0);
									Local_4434[iParam0 /*10*/].f_6 = 1;
								}
								break;
							
							case 1:
								func_402(8, joaat("dominator"), -1269.403f, -212.2201f, 50.8255f, -56.5256f, -1027080192);
								func_401(5, joaat("a_m_y_genstreet_01"), Local_1724[8 /*2*/], -1, 0, 0);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 2:
								if (func_57(77))
								{
									func_480();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1269.91f, -210.0006f, 50.5499f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_PLAY_ANIM(0, "misscarsteal2peeing", "peeing_intro", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "misscarsteal2peeing", "peeing_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
									func_479(Local_1471[5 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (func_400(15, 56))
								{
									Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 6000;
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 4:
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[8 /*2*/], 0))
									{
										func_480();
										TASK::TASK_PLAY_ANIM(0, "misscarsteal2peeing", "peeing_outro", 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_ENTER_VEHICLE(0, Local_1724[8 /*2*/], 20000, -1, 1f, 1, 0);
										func_479(Local_1471[5 /*14*/], 0);
										STREAMING::REMOVE_ANIM_DICT("misscarsteal2peeing");
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 45:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 99:
								if (ENTITY::DOES_ENTITY_EXIST(Local_1471[6 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_1471[6 /*14*/]))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[9 /*2*/], 0))
										{
											PED::SET_PED_INTO_VEHICLE(Local_1471[6 /*14*/], Local_1724[9 /*2*/], -1);
											func_480();
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[6 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[6 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											func_479(Local_1471[6 /*14*/], 1);
										}
										PED::SET_PED_KEEP_TASK(Local_1471[6 /*14*/], 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[6 /*14*/], 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[6 /*14*/]));
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[9 /*2*/], 0))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[9 /*2*/]));
								}
								break;
							
							case 0:
								func_481(iParam0);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_407(7))
								{
									func_402(9, joaat("dominator"), -1260.322f, -244.883f, 50.7755f, 29.36f, -1027080192);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[9 /*2*/], 4, 0, 0);
									func_287(6, joaat("a_m_y_genstreet_01"), -1260.095f, -244.781f, 51.224f, 34.618f, 2, 0, 0);
									uLocal_3112 = PED::CREATE_SYNCHRONIZED_SCENE(-1260.66f, -244.607f, 50.957f, 0f, 0f, 32.4f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[6 /*14*/], uLocal_3112, "misscarsteal2fixer", "confused_a", 1000f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3112, 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 46:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 99:
								if (ENTITY::DOES_ENTITY_EXIST(Local_1471[7 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[10 /*2*/], 0))
										{
											PED::SET_PED_INTO_VEHICLE(Local_1471[7 /*14*/], Local_1724[10 /*2*/], -1);
											func_480();
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[7 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[7 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											func_479(Local_1471[7 /*14*/], 1);
										}
										PED::SET_PED_KEEP_TASK(Local_1471[7 /*14*/], 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[7 /*14*/], 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[7 /*14*/]));
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[10 /*2*/], 0))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[10 /*2*/]));
								}
								break;
							
							case 0:
								func_481(iParam0);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_407(7))
								{
									func_402(10, joaat("habanero"), -1260.889f, -226.0429f, 50.5499f, 303.048f, -1027080192);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[10 /*2*/], 0, 0, 0);
									func_287(7, joaat("a_m_y_genstreet_01"), -1260.095f, -244.781f, 51.224f, 34.618f, 2, 0, 0);
									uLocal_3113 = PED::CREATE_SYNCHRONIZED_SCENE(-1261.042f, -225.594f, 51.12f, 0f, 0f, -53.64f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[7 /*14*/], uLocal_3113, "misscarsteal2", "wrong_house_dave_dave", 1000f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3113, 1);
									PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3113, 0.41f);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3113) > 0.835f)
								{
									PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3113, 0.46f);
								}
								break;
						}
						break;
					
					case 47:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 99:
								if (ENTITY::DOES_ENTITY_EXIST(Local_1471[8 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[11 /*2*/], 0))
										{
											PED::SET_PED_INTO_VEHICLE(Local_1471[8 /*14*/], Local_1724[11 /*2*/], -1);
											func_480();
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[8 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1471[8 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											TASK::TASK_PAUSE(0, 15000);
											func_479(Local_1471[8 /*14*/], 1);
										}
										PED::SET_PED_KEEP_TASK(Local_1471[8 /*14*/], 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[8 /*14*/], 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[8 /*14*/]));
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[11 /*2*/], 0))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[11 /*2*/]));
								}
								break;
							
							case 0:
								func_481(iParam0);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_407(7))
								{
									func_287(8, joaat("a_m_y_genstreet_01"), -1260.095f, -244.781f, 51.224f, 34.618f, 2, 0, 0);
									uLocal_3114 = PED::CREATE_SYNCHRONIZED_SCENE(-1293.832f, -184.969f, 50.87f, 0f, 0f, 180f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[8 /*14*/], uLocal_3114, "misscarstealfinalecar_5_ig_1", "waitloop_lamar", 1000f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3114, 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 48:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_1471[4 /*14*/], 0))
									{
										func_480();
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1273.988f, -221.81f, 50.5498f, 2f, 20000, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, -1314.795f, -243.3134f, 55.9067f, 3000);
										func_479(Local_1471[4 /*14*/], 0);
										Local_4434[iParam0 /*10*/].f_6++;
										STREAMING::REQUEST_ANIM_DICT("missarmenian2lamar_idles");
										STREAMING::REQUEST_ANIM_DICT("misscarsteal2");
									}
								}
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 242628503) == 7)
									{
										Local_4434[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 2500));
										Local_4434[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								if (func_44("cs2_onme"))
								{
									Local_4434[iParam0 /*10*/].f_6++;
								}
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1471[4 /*14*/], 0))
										{
											if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2lamar_idles"))
											{
												iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
												if (iVar15 == Local_4434[iParam0 /*10*/].f_8)
												{
													iVar15++;
													if (iVar15 == 7)
													{
														iVar15 = 0;
													}
												}
												if (iVar15 == 0)
												{
													TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "missarmenian2lamar_idles", "idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 1)
												{
													TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "missarmenian2lamar_idles", "idle_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 2)
												{
													TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "missarmenian2lamar_idles", "idle_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 3)
												{
													TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "missarmenian2lamar_idles", "idle_d", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 4)
												{
													TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "missarmenian2lamar_idles", "idle_e", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 5)
												{
													TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "missarmenian2lamar_idles", "idle_f", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 6)
												{
													TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "missarmenian2lamar_idles", "idle_look_right", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												Local_4434[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
												Local_4434[iParam0 /*10*/].f_8 = iVar15;
											}
										}
									}
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
								{
									if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_1471[4 /*14*/], 1), 1.5f))
									{
										TASK::TASK_PLAY_ANIM(Local_1471[4 /*14*/], "misscarsteal2", "COME_HERE_IDLE_C", 4f, -4f, -1, 0, 0, 0, 0, 0);
										Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7000;
										Local_4434[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 4:
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7 && !func_44("cs2_onme"))
								{
									Local_4434[iParam0 /*10*/].f_6 = 2;
								}
								break;
						}
						break;
					
					case 49:
						break;
					
					case 50:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1263.639f, -239.6366f, 50.5499f, 2f, 20000, 1048576000, 0, 1193033728);
									if (!PED::IS_PED_INJURED(Local_1471[6 /*14*/]))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[6 /*14*/], 5000);
									}
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
									func_479(Local_1471[4 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 242628503) == 1)
									{
										if (TASK::GET_SEQUENCE_PROGRESS(Local_1471[4 /*14*/]) >= 1)
										{
											Local_4434[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 51:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1273.505f, -212.807f, 50.5499f, 2f, 20000, 1.2f, 0, 300f);
									func_479(Local_1471[4 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 242628503) == 7)
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 52:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1471[4 /*14*/], -1301.094f, -208.0075f, 50.5498f, 2f, 20000, 0.25f, 0, 141.1114f);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (GlobalFunc_713(Local_1471[4 /*14*/], -1301.094f, -208.0075f, 50.5498f, 1) < 5f)
									{
										if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
										{
											WEAPON::GIVE_WEAPON_TO_PED(Local_1471[4 /*14*/], joaat("weapon_pistol"), 50, 1, 1);
											WEAPON::SET_CURRENT_PED_WEAPON(Local_1471[4 /*14*/], joaat("weapon_pistol"), 1);
											TASK::TASK_AIM_GUN_AT_ENTITY(Local_1471[4 /*14*/], Local_1471[3 /*14*/], -1, 0);
										}
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 713668775) == 7)
									{
									}
									break;
								}
						}
						break;
					
					case 53:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1293.675f, -193.4069f, 50.5497f, 2f, 20000, 1048576000, 0, 1193033728);
									if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[8 /*14*/], 5000);
									}
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
									func_479(Local_1471[4 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 242628503) == 1)
									{
										if (TASK::GET_SEQUENCE_PROGRESS(Local_1471[4 /*14*/]) >= 1)
										{
											Local_4434[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 54:
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1265.911f, -225.6303f, 50.5499f, 2f, 20000, 0.25f, 0, 300f);
									func_479(Local_1471[4 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[4 /*14*/], 242628503) == 7)
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 58:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (iLocal_1753 == 10002)
								{
									Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 2500;
									if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										TASK::TASK_AIM_GUN_AT_ENTITY(Local_1471[4 /*14*/], Local_1471[3 /*14*/], 3000, 0);
									}
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
									{
										PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1471[4 /*14*/], 1f);
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 59:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								Local_4434[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 60:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								GlobalFunc_163();
								HUD::CLEAR_PRINTS();
								func_212(11, 14);
								func_286(0, 1);
								Local_2193.f_129 = 0;
								func_441(&Local_2193, Local_1724[0 /*2*/], 0, 0);
								AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 0);
								AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_ENTERS_GARAGE");
								func_826(15);
								func_826(16);
								func_285(94, 1, -1);
								iVar16 = PLAYER::PLAYER_PED_ID();
								GlobalFunc_5127(2, &(Local_1471[1 /*14*/]));
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
								{
									PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), Local_1471[4 /*14*/], false, 1);
									GlobalFunc_6801(1, &(Local_1471[4 /*14*/]));
								}
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[3 /*14*/], 1);
								}
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1299.678f, -205.9114f, 50.5498f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 143.87f);
								Local_1471[1 /*14*/] = iVar16;
								if (iLocal_1410)
								{
									GlobalFunc_5810(&uLocal_1379);
									func_280(&uLocal_1379, Local_1471[4 /*14*/], 1, 2.5f, 1200, 1200, 900, 700, 1045220557);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_1724[0 /*2*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_1724[0 /*2*/]))
									{
										PED::SET_PED_INTO_VEHICLE(Local_1471[1 /*14*/], Local_1724[0 /*2*/], 0);
										if (ENTITY::DOES_ENTITY_EXIST(Local_1471[1 /*14*/]))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_1471[1 /*14*/]))
											{
												if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
												{
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[1 /*14*/], 1);
													TASK::TASK_PLAY_ANIM(Local_1471[1 /*14*/], "misscarsteal2switch", "_heli_trevor", 1000f, -8f, -1, 0, 0, 0, 0, 0);
													PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[1 /*14*/], 0, 0);
												}
											}
										}
										Local_1471[2 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_1724[0 /*2*/], 26, iLocal_3135, -1, 1, 1);
										if (ENTITY::DOES_ENTITY_EXIST(Local_1471[2 /*14*/]))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_1471[2 /*14*/]))
											{
												if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
												{
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[2 /*14*/], 1);
													PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1471[2 /*14*/], 0, 0);
												}
											}
										}
									}
								}
								HUD::DISPLAY_HUD(0);
								HUD::DISPLAY_RADAR(0);
								iLocal_137 = 1;
								Local_4434[iParam0 /*10*/].f_6++;
							
							case 1:
								if (func_243(&uLocal_138))
								{
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 56:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								STREAMING::REQUEST_ANIM_DICT("misscarsteal2Chad_waiting");
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2Chad_waiting"))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
										{
											TASK::TASK_PLAY_ANIM(Local_1471[3 /*14*/], "misscarsteal2Chad_waiting", "Sat_in_Car_Lookaround", 8f, -8f, -1, 1, 0, 0, 0, 0);
										}
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 57:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 99:
								STREAMING::REMOVE_ANIM_DICT("misscarsteal2CAR_STOLEN");
								STREAMING::REMOVE_ANIM_DICT("misscarsteal2CHAD_GARAGE");
								Local_1990[iParam0 /*6*/].f_1 = 0;
								break;
							
							case 0:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[3 /*14*/], 1);
								}
								STREAMING::REQUEST_ANIM_DICT("misscarsteal2CAR_STOLEN");
								STREAMING::REQUEST_ANIM_DICT("misscarsteal2CHAD_GARAGE");
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2CAR_STOLEN") && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2CHAD_GARAGE"))
								{
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									uLocal_3111 = PED::CREATE_SYNCHRONIZED_SCENE(-1308.275f, -222.337f, 50.563f, 0f, 0f, 35.5f, 2);
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1471[3 /*14*/], -1308.275f, -222.337f, 50.563f, 0, 0, 1);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], uLocal_3111, "misscarsteal2CHAD_GARAGE", "chad_parking_garage_chad", 1000f, -4f, 16, 0, 1148846080, 0);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[2 /*2*/], 0, 1, 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3111))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3111) > 0.1f)
										{
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], iLocal_3111, "misscarsteal2CHAD_GARAGE", "chad_parking_garage_chad", 1000f, -4f, 25, 0, 1148846080, 0);
											TASK::TASK_LOOK_AT_ENTITY(Local_1471[3 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 4, 2);
											ENTITY::SET_ENTITY_COLLISION(Local_1471[3 /*14*/], 1, 0);
											Local_4434[iParam0 /*10*/].f_6++;
										}
									}
								}
								break;
							
							case 4:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3111))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3111) > 0.87f)
										{
											Local_4434[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
							
							case 5:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 61:
						GlobalFunc_9132(0);
						func_826(22);
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(21.69487f, -3006.615f, -961.9077f) - Vector(11.125f, 41.5f, 41.1875f), Vector(21.69487f, -3006.615f, -961.9077f) + Vector(11.125f, 41.5f, 41.1875f), 0, 1);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						GlobalFunc_7632(0);
						PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
						func_242(0, 15, 1);
						func_826(80);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 0, 1);
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
						if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[3 /*14*/], 1);
							TASK::TASK_LOOK_AT_ENTITY(Local_1471[3 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1724[2 /*2*/], 0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1724[2 /*2*/], 1, 1);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_1724[2 /*2*/], 0);
						}
						AUDIO::START_AUDIO_SCENE("CAR_2_STEAL_THE_CAR");
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 63:
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
						{
							if (PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_2_STEAL_THE_CAR");
								Local_4434[iParam0 /*10*/].f_3 = 1;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_2_STEAL_THE_CAR");
								Local_4434[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 62:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
							{
								AUDIO::START_AUDIO_SCENE("CAR_2_DRIVE_BACK_TO_GARAGE");
								Local_4434[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 65:
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									TASK::TASK_PLAY_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 4f, -8f, -1, 57, 0, 0, 0, 0);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									func_480();
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
									TASK::TASK_PLAY_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 4f, -8f, -1, 57, 0, 0, 0, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1310.4f, -218.5188f, 50.5498f, PLAYER::PLAYER_PED_ID(), 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									func_479(Local_1471[3 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 13000;
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 2:
									break;
								
								case 3:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (GlobalFunc_713(Local_1471[3 /*14*/], -1287.622f, -251.0352f, 46.0453f, 1) < 2f)
										{
											Local_4434[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
							}
						}
						else
						{
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 64:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 3))
									{
										TASK::STOP_ANIM_TASK(Local_1471[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", -1056964608);
									}
									TASK::CLEAR_PED_TASKS(Local_1471[3 /*14*/]);
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1287.622f, -251.0352f, 46.0453f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_COWER(0, -1);
									func_479(Local_1471[3 /*14*/], 0);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									if (GlobalFunc_713(Local_1471[3 /*14*/], -1287.622f, -251.0352f, 46.0453f, 1) < 2f)
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 66:
						if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									func_480();
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
									TASK::TASK_PLAY_ANIM(0, "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 4f, -4f, 30000, 49, 0, 0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 30000);
									func_479(Local_1471[3 /*14*/], 0);
									STREAMING::REQUEST_ANIM_DICT("misscarsteal2car_stolen");
									Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 25000;
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2car_stolen"))
									{
										TASK::CLEAR_PED_SECONDARY_TASK(Local_1471[3 /*14*/]);
										func_480();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
										TASK::TASK_PLAY_ANIM(0, "misscarsteal2car_stolen", "chad_car_stolen_reaction", 4f, -4f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
										func_479(Local_1471[3 /*14*/], 0);
										Local_4434[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 2:
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[3 /*14*/], -2017877118) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_1471[3 /*14*/], -2017877118) == 2)
									{
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 68:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									TASK::TASK_USE_MOBILE_PHONE(Local_1471[3 /*14*/], 1, 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								break;
						}
						break;
					
					case 69:
						if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_1471[2 /*14*/], Local_1724[0 /*2*/], 0))
								{
									TASK::TASK_HELI_MISSION(Local_1471[2 /*14*/], Local_1724[0 /*2*/], 0, 0, 500.9223f, -1314.291f, 73.6306f, 4, 20f, 10f, 0f, 100, 60, -1082130432, 0);
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 70:
						iVar17 = 0;
						while (iVar17 < iLocal_3895)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3895[iVar17]));
							iVar17++;
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[5 /*2*/]));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[6 /*2*/]));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[10 /*2*/]));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[7 /*2*/]));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[9 /*2*/]));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[1 /*2*/]));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[11 /*2*/]));
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[3 /*14*/]));
						VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_1417);
						func_804(11);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 1, 1);
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 72:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_407(8))
								{
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(13.24f, -2799.27f, -964.12f) - Vector(10f, 10f, 10f), Vector(13.24f, -2799.27f, -964.12f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								Local_1471[5 /*14*/] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), -966.6412f, -2800.247f, 12.9648f, 19.0574f, 1, 1);
								PED::SET_PED_CAN_EVASIVE_DIVE(Local_1471[5 /*14*/], 0);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 2:
								if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
								{
									TASK::TASK_START_SCENARIO_AT_POSITION(Local_1471[5 /*14*/], "WORLD_HUMAN_GUARD_STAND", -966.9684f, -2799.987f, 12.9648f, 19.0574f, 0, 0, 1);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/], 1) < 30f)
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_1471[5 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 73:
						if (!GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5125(17, PLAYER::PLAYER_PED_ID());
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 71:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_407(8))
								{
									Local_4434[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 2:
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1458, 1) < 300f)
								{
									Local_4434[iParam0 /*10*/].f_6 = 3;
								}
								break;
							
							case 3:
								iLocal_1397 = INTERIOR::GET_INTERIOR_AT_COORDS(-960.7767f, -3016.691f, 12.9451f);
								INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1397);
								Local_4434[iParam0 /*10*/].f_6++;
								break;
							
							case 4:
								if (INTERIOR::IS_INTERIOR_READY(iLocal_1397))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
									{
										if (GlobalFunc_7047(&iLocal_2747, 29, Local_1458, fLocal_1461, 1) && GlobalFunc_7047(&(Local_1471[8 /*14*/]), 45, -992.12f, -3024.18f, 12.94f, 42.6f, 1))
										{
											PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_2747);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 4, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 6, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 7, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 9, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 10, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 11, 0, 0, 0);
											PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_2747, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2747, 1);
											Local_1724[5 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -981.02f, -3011.31f, 14.55f, 59.25f, 1, 1);
											VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[5 /*2*/], 2);
											VEHICLE::SET_VEHICLE_LIVERY(Local_1724[5 /*2*/], 1);
											uLocal_2766 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1458 + Vector(1f, 0f, 0f), 0f, 0f, fLocal_1461, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2747, uLocal_2766, "misscarsteal2leadinoutcar_2_mcs_1", "_leadin_loop", 1000f, -1000f, 0, 0, 1148846080, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2766, 1);
											Local_1471[6 /*14*/] = PED::CREATE_PED(26, joaat("s_m_y_devinsec_01"), -989.96f, -3022.82f, 13.91f, 91.12f, 1, 1);
											Local_1471[7 /*14*/] = PED::CREATE_PED(26, joaat("s_m_y_devinsec_01"), -990.51f, -3023.46f, 13.93f, 11.9f, 1, 1);
											WEAPON::GIVE_WEAPON_TO_PED(Local_1471[6 /*14*/], joaat("weapon_microsmg"), 1000, 0, 1);
											WEAPON::GIVE_WEAPON_TO_PED(Local_1471[7 /*14*/], joaat("weapon_microsmg"), 1000, 0, 1);
											PED::SET_PED_PROP_INDEX(Local_1471[8 /*14*/], 1, 0, 0, false);
											PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[6 /*14*/]);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 11, 0, 0, 0);
											PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[7 /*14*/]);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 11, 0, 0, 0);
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[6 /*14*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[7 /*14*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[8 /*14*/], "WORLD_HUMAN_STAND_MOBILE_UPRIGHT", 0, 0);
											PED::SET_PED_CAN_EVASIVE_DIVE(Local_1471[6 /*14*/], 0);
											PED::SET_PED_CAN_EVASIVE_DIVE(Local_1471[7 /*14*/], 0);
											PED::SET_PED_CAN_EVASIVE_DIVE(Local_1471[8 /*14*/], 0);
											Local_1724[4 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -984.58f, -2998.8f, 13.58f, 22.68f, 1, 1);
											Local_1724[12 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -992.74f, -3031.48f, 13.58f, 18.53f, 1, 1);
											Local_1724[13 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -990.95f, -2997.46f, 13.56f, 24.38f, 1, 1);
											VEHICLE::SET_FORCE_HD_VEHICLE(Local_1724[4 /*2*/], 1);
											VEHICLE::SET_FORCE_HD_VEHICLE(Local_1724[13 /*2*/], 1);
											if (iLocal_1419 == 12)
											{
												Local_4434[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												Local_4434[iParam0 /*10*/].f_6++;
											}
										}
									}
								}
								break;
							
							case 5:
								if (func_57(137) && !func_57(123))
								{
									Local_4434[iParam0 /*10*/].f_6 = 6;
								}
								break;
							
							case 6:
								if (!PED::IS_PED_INJURED(iLocal_2747))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[2 /*2*/], 4);
									}
									if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
									{
										CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_2747, 0f, 0f, 0.5f, 1, -1, 7000, 2000, 0);
										CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.51f);
										CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.4f);
										CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
										CAM::SET_GAMEPLAY_HINT_FOV(35f);
									}
									iLocal_2767 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1458 + Vector(1f, 0f, 0f), 0f, 0f, fLocal_1461, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2747, iLocal_2767, "misscarsteal2leadinoutcar_2_mcs_1", "_leadin_action", 4f, -1000f, 0, 0, 1148846080, 0);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 7:
								if (func_235(4, "CAR2_MCS1_LI", 0, iLocal_2747, "Devin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
									Local_4434[iParam0 /*10*/].f_6++;
									Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 2000;
								}
								break;
							
							case 8:
								if (MISC::GET_GAME_TIMER() > Local_4434[iParam0 /*10*/].f_7)
								{
									func_480();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_2747, -1);
									func_479(PLAYER::PLAYER_PED_ID(), 0);
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 74:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0) && !PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
						{
							switch (Local_4434[iParam0 /*10*/].f_6)
							{
								case 0:
									ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 0);
									TASK::TASK_HELI_MISSION(Local_1471[2 /*14*/], Local_1724[0 /*2*/], 0, 0, -1316.728f, -233.5309f, 53.7461f, 4, 4f, 3f, -54f, 20, 20, -1082130432, 0);
									Local_4434[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (func_57(118))
									{
										TASK::TASK_HELI_MISSION(Local_1471[2 /*14*/], Local_1724[0 /*2*/], 0, 0, -1067.636f, -2946.363f, 70.9524f, 4, 20f, 10f, 0f, 100, 60, -1082130432, 0);
										Local_4434[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 75:
						if (Local_4434[iParam0 /*10*/].f_6 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("CAR2_STOP");
							Local_4434[iParam0 /*10*/].f_6 = 1;
						}
						if (GlobalFunc_530(Local_1724[2 /*2*/], 6f, 2, 1056964608, 0, 1))
						{
							func_223(3, 19, 1);
							GlobalFunc_5652(&uLocal_3137, 1, 0);
							RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 76:
						if (!Local_4434[iParam0 /*10*/].f_3)
						{
							if (func_467())
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
								Local_4434[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 77:
						if (((!func_57(85) && !func_57(86)) && !func_57(88)) && !func_57(89))
						{
							GlobalFunc_553(109);
						}
						Local_4434[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 67:
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1458, 1) < 100f)
								{
									if ((!PED::IS_PED_INJURED(iLocal_2747) && !PED::IS_PED_INJURED(Local_1471[6 /*14*/])) && !PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
									{
										CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("Car_2_mcs_1", 2, 8);
									}
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if ((!PED::IS_PED_INJURED(iLocal_2747) && !PED::IS_PED_INJURED(Local_1471[6 /*14*/])) && !PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", iLocal_2747, 0);
										CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
										CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Car_2_Security", Local_1471[6 /*14*/], 0);
										CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Car_2_Security^1", Local_1471[7 /*14*/], 0);
									}
								}
								if (CUTSCENE::HAS_CUTSCENE_LOADED())
								{
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1458, 1) > (100f + 100f))
								{
									CUTSCENE::REMOVE_CUTSCENE();
									Local_4434[iParam0 /*10*/].f_6 = 0;
								}
								break;
						}
						break;
					
					case joaat("mpsv_lp0_31"):
						switch (Local_4434[iParam0 /*10*/].f_6)
						{
							case 0:
								if (CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									Local_4434[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
								{
									if (!CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
									}
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
									Local_4434[iParam0 /*10*/].f_6 = 2;
									Local_4434[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() < Local_4434[iParam0 /*10*/].f_7)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
								}
								else
								{
									Local_4434[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 80:
						if (!GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5125(16, PLAYER::PLAYER_PED_ID());
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 81:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1724[5 /*2*/], 1, 0);
							Local_4434[iParam0 /*10*/].f_3 = 1;
						}
						break;
				}
				if (Local_4434[iParam0 /*10*/].f_6 == 99)
				{
					Local_4434[iParam0 /*10*/].f_3 = 1;
					Local_4434[iParam0 /*10*/].f_6 = 0;
					Local_4434[iParam0 /*10*/].f_1 = 0;
				}
			}
		}
	}
}


int func_235(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, char* sParam13, int iParam14)//Position - 0x15EBA
{
	if (!GlobalFunc_111() || (GlobalFunc_111() && iParam0 > iLocal_1424))
	{
		Local_4000[0 /*3*/] = iParam2;
		Local_4000[0 /*3*/].f_1 = iParam3;
		Local_4000[0 /*3*/].f_2 = sParam4;
		Local_4000[1 /*3*/] = iParam5;
		Local_4000[1 /*3*/].f_1 = iParam6;
		Local_4000[1 /*3*/].f_2 = sParam7;
		Local_4000[2 /*3*/] = iParam8;
		Local_4000[2 /*3*/].f_1 = iParam9;
		Local_4000[2 /*3*/].f_2 = sParam10;
		Local_4000[3 /*3*/] = iParam11;
		Local_4000[3 /*3*/].f_1 = iParam12;
		Local_4000[3 /*3*/].f_2 = sParam13;
		func_43(sParam1, iParam2, iParam5, iParam8, iParam11);
		func_40(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_40(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_40(iParam8, iParam9, sParam10);
		}
		if (iParam11 != -1)
		{
			func_40(iParam11, iParam12, sParam13);
		}
		if (iLocal_1424 < iParam0)
		{
			if (GlobalFunc_111())
			{
				if (iLocal_1424 == 1)
				{
					GlobalFunc_5105();
				}
				else
				{
					GlobalFunc_4956();
				}
				iLocal_1424 = 0;
			}
		}
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (GlobalFunc_10618(&Local_1759, sLocal_1924, sParam1, iParam14, 1, 0, 0))
			{
				iLocal_3999 = 1;
				iLocal_1424 = iParam0;
				iLocal_1398 = 0;
				return 1;
			}
			else if (iLocal_1399 != MISC::GET_GAME_TIMER())
			{
				iLocal_1398++;
				iLocal_1399 = MISC::GET_GAME_TIMER();
				if (iLocal_1398 >= 10)
				{
					return 1;
				}
			}
		}
		else if (GlobalFunc_10618(&Local_1759, sLocal_1924, sParam1, iParam14, 0, 0, 0))
		{
			iLocal_3999 = 0;
			StringCopy(&Local_3949, "", 24);
			StringCopy(&cLocal_3943, "", 24);
			iLocal_1424 = iParam0;
			iLocal_1398 = 0;
			return 1;
		}
		else if (iLocal_1399 != MISC::GET_GAME_TIMER())
		{
			iLocal_1398++;
			iLocal_1399 = MISC::GET_GAME_TIMER();
			if (iLocal_1398 >= 10)
			{
				iLocal_1398 = 0;
				return 1;
			}
		}
	}
	return 0;
}







void func_242(int iParam0, int iParam1, int iParam2)//Position - 0x162BA
{
	int iVar0;
	
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (iVar0 < Local_4646)
		{
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_4646[iVar0 /*9*/], Local_4646[iVar0 /*9*/].f_3, Local_4646[iVar0 /*9*/].f_6, 0, iParam2, 1);
		}
		iVar0++;
	}
}

int func_243(var uParam0)//Position - 0x16303
{
	var uVar0;
	float fVar1;
	int iVar2;
	
	switch (iLocal_137)
	{
		case 0:
			break;
		
		case 1:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 25, 1, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1724[2 /*2*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1724[2 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[2 /*2*/], 0);
						ENTITY::SET_ENTITY_HEALTH(Local_1724[2 /*2*/], 1000);
						VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_1724[2 /*2*/], 0f);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1724[2 /*2*/], 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1724[2 /*2*/], 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[2 /*2*/], 0, 0, 0);
					}
				}
			}
			func_279(uParam0, Local_1724[0 /*2*/], Local_1471[4 /*14*/]);
			GlobalFunc_7718(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			iLocal_1401 = 0;
			iLocal_1404 = 0;
			bLocal_1407 = false;
			iLocal_1411 = 0;
			iLocal_1412 = 0;
			iLocal_1416 = 0;
			iLocal_137 = 2;
		
		case 2:
			uVar0 = uVar0;
			uVar0 = func_248(uParam0);
			fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
			if (!iLocal_1411)
			{
				if (fVar1 > fLocal_1413)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorIn", 0, 0);
					iLocal_1408 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_1408, "HIT_OUT", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
					AUDIO::START_AUDIO_SCENE("CAR_2_SWITCH_TO_FRANLIN_IN_GARAGE");
					iLocal_1411 = 1;
				}
			}
			else if (fVar1 > fLocal_1414 && !iLocal_1416)
			{
				iLocal_1416 = 1;
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_1409, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			}
			if (!iLocal_1412)
			{
				if (fVar1 > fLocal_1415)
				{
					AUDIO::STOP_SOUND(iLocal_1408);
					if (iLocal_1410)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_1408, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					}
					iLocal_1412 = 1;
				}
			}
			if (!iLocal_1401)
			{
				if (fVar1 > fLocal_1402)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1471[1 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1471[1 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_1471[1 /*14*/], PLAYER::PLAYER_PED_ID(), 5000, 2048, 4);
							}
						}
					}
					iLocal_1401 = 1;
				}
			}
			if (fVar1 > fLocal_1406)
			{
				func_285(97, 1, -1);
			}
			if (!iLocal_1404)
			{
				if (fVar1 > fLocal_1405)
				{
					AUDIO::STOP_AUDIO_SCENE("CAR_2_USE_INFRARED");
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1403);
								PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
								PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
								PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), 1);
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misscarsteal2switch", "_ground_franklin", 1000f, -1000f, -1, 2, 0, 0, 0, 0);
							}
						}
					}
					iLocal_1404 = 1;
				}
			}
			if (!bLocal_1407)
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misscarsteal2switch", "_ground_franklin", 3))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "misscarsteal2switch", "_ground_franklin") >= 0.99f)
								{
									if (iLocal_1410)
									{
										TASK::TASK_AIM_GUN_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1471[3 /*14*/], -1, 1);
									}
									else
									{
										TASK::TASK_AIM_GUN_AT_COORD(PLAYER::PLAYER_PED_ID(), -1320.303f, -219.4609f, 50.5926f, -1, 1, 0);
									}
									PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 0, 1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
									HUD::DISPLAY_HUD(1);
									HUD::DISPLAY_RADAR(1);
									CAM::SET_WIDESCREEN_BORDERS(0, 500);
									bLocal_1407 = true;
								}
							}
						}
					}
				}
			}
			if (bLocal_1407)
			{
				HUD::SHOW_HUD_COMPONENT_THIS_FRAME(14);
			}
			if (iLocal_1410)
			{
				if (fVar1 >= 0.8f)
				{
					if (func_244(&uLocal_1379, 0, 1, 1, 0, 1, 0))
					{
						iVar2 = 1;
					}
				}
			}
			else if (fVar1 >= 1f || bLocal_1407)
			{
				iVar2 = 1;
			}
			if (iVar2 == 1)
			{
				MISC::SET_TIME_SCALE(1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (!iLocal_1410)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_1408, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
					{
						CAM::DESTROY_CAM(uParam0->f_1, 0);
					}
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				CAM::SET_WIDESCREEN_BORDERS(0, 500);
				AUDIO::STOP_AUDIO_SCENE("CAR_2_SWITCH_TO_FRANLIN_IN_GARAGE");
				iLocal_137 = 0;
				GlobalFunc_5810(&uLocal_1379);
				return 1;
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
	}
	return 0;
}

int func_244(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x16786
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	
	switch (*uParam0)
	{
		case 0:
			GlobalFunc_5077();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				GlobalFunc_667(uParam0);
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					Var0 = { Var0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, Var0) };
				Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				Var15 = { (-SYSTEM::SIN(Var9.f_2) * SYSTEM::COS(Var9.x)), (SYSTEM::COS(Var9.f_2) * SYSTEM::COS(Var9.x)), SYSTEM::SIN(Var9.x) };
				Var18 = { (-SYSTEM::SIN(Var12.f_2) * SYSTEM::COS(Var12.x)), (SYSTEM::COS(Var12.f_2) * SYSTEM::COS(Var12.x)), SYSTEM::SIN(Var12.x) };
				fVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, Var6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, 1);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			GlobalFunc_5077();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					GlobalFunc_667(uParam0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}




int func_248(var uParam0)//Position - 0x16B9E
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
				fLocal_116 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_116 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_116 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_116 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_116);
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































void func_279(var uParam0, var uParam1, var uParam2)//Position - 0x186E9
{
	if (!iLocal_1410)
	{
		uParam0->f_10[0 /*57*/].f_2 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -2.4172f, 4.2304f, 0.1681f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { 0.9921f, 1.067f, 0.0872f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 1;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 1f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
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
		uParam0->f_10[1 /*57*/].f_2 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1800;
		uParam0->f_10[1 /*57*/].f_6 = { -2.4172f, 4.2304f, 0.1681f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { 0.9921f, 1.067f, 0.0872f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 50f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 1;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
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
		uParam0->f_10[2 /*57*/].f_2 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 1;
		uParam0->f_10[2 /*57*/].f_5 = 1600;
		uParam0->f_10[2 /*57*/].f_6 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.1f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
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
		uParam0->f_10[3 /*57*/].f_4 = 1;
		uParam0->f_10[3 /*57*/].f_5 = 2000;
		uParam0->f_10[3 /*57*/].f_6 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 45f;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 0;
		uParam0->f_10[3 /*57*/].f_23 = 0f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 4;
		uParam0->f_1218 = 2;
		uParam0->f_2 = 0;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 1000;
	}
	else
	{
		uParam0->f_10[0 /*57*/].f_2 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -2.4172f, 4.2304f, 0.1681f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { 0.9921f, 1.067f, 0.0872f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 1;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 1f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
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
		uParam0->f_10[1 /*57*/].f_2 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1800;
		uParam0->f_10[1 /*57*/].f_6 = { -2.4172f, 4.2304f, 0.1681f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { 0.9921f, 1.067f, 0.0872f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 50f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 1;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
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
		uParam0->f_10[2 /*57*/].f_2 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1600;
		uParam0->f_10[2 /*57*/].f_6 = { 0f, -3.2f, 0.67f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { -4f, 0.0236f, 145.3507f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.1f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
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
		uParam0->f_10[3 /*57*/].f_2 = 1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 2000;
		uParam0->f_10[3 /*57*/].f_6 = { 0f, -3.2f, 0.67f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_9 = { -4.0088f, 0.0236f, 145.3507f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 1;
		uParam0->f_10[3 /*57*/].f_21 = 45f;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 2;
		uParam0->f_10[3 /*57*/].f_23 = 0f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 4;
		uParam0->f_1218 = 2;
		uParam0->f_2 = 0;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 1000;
	}
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_CarSteal2_HeliToFranklin.txt";
	uParam0->f_1225 = "CameraInfo_CarSteal2_HeliToFranklin.xml";
	*uParam0 = 1;
	uParam0->f_4[0] = uParam1;
	uParam0->f_7[1] = uParam2;
}

void func_280(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x193E4
{
	uParam0->f_5 = uParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}





int func_285(int iParam0, int iParam1, int iParam2)//Position - 0x19677
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4043)
	{
		if (iParam0 == Local_4043[iVar0 /*7*/])
		{
			Local_4043[iVar0 /*7*/].f_2 = iParam1;
			if (iParam2 != -1)
			{
				Local_4043[iVar0 /*7*/].f_4 = iParam2;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_286(int iParam0, bool bParam1)//Position - 0x196C0
{
	if (iParam0 == 1)
	{
		if (!bParam1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		GRAPHICS::SET_SEETHROUGH(1);
	}
	else
	{
		GRAPHICS::SET_SEETHROUGH(0);
		if (!bParam1)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
		}
	}
}

void func_287(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x196F3
{
	func_288(iParam0, iParam1, Param2, fParam5, 0, -1, iParam6, iParam7, bParam8, 0);
}

void func_288(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x19712
{
	struct<3> Var0;
	
	if (iParam0 == -1 || iParam0 >= 18)
	{
	}
	if (iParam0 != 0)
	{
		if (PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[iParam0 /*14*/]));
		}
		else if (Local_1471[iParam0 /*14*/] == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_1471[iParam0 /*14*/]) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
			{
				Local_1471[iParam0 /*14*/] = 0;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Local_1471[iParam0 /*14*/]) != iParam1 && iParam1 != 0)
		{
			PED::DELETE_PED(&(Local_1471[iParam0 /*14*/]));
			Local_1471[iParam0 /*14*/] = 0;
		}
	}
	iLocal_1753 = iLocal_1753;
	if (iParam6 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1471[iParam0 /*14*/]) && iParam0 != 0)
		{
			if (iParam1 == 0)
			{
				if (PED::CAN_CREATE_RANDOM_PED(0))
				{
					Local_1471[iParam0 /*14*/] = PED::CREATE_RANDOM_PED(Param2);
					ENTITY::SET_ENTITY_HEADING(Local_1471[iParam0 /*14*/], fParam5);
				}
			}
			else
			{
				Local_1471[iParam0 /*14*/] = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
				if (iParam11 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1471[iParam0 /*14*/], Param2, 0, 0, 1);
				}
			}
		}
		else if (!GlobalFunc_105(Param2))
		{
			if (iParam0 == 0)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param2, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam5);
			}
			else if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
			{
				if (iParam11 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1471[iParam0 /*14*/], Param2, 0, 0, 1);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(Local_1471[iParam0 /*14*/], Param2, 1, 0, 0, 1);
				}
				ENTITY::SET_ENTITY_HEADING(Local_1471[iParam0 /*14*/], fParam5);
			}
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_1471[iParam0 /*14*/]) && iParam0 != 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam6, 0))
		{
			Local_1471[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam6, 26, iParam1, iParam7, 1, 1);
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1471[iParam0 /*14*/], 1) };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam6, 0))
		{
			if (iParam0 == 0)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam6, iParam7);
				}
			}
			else if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
			{
				PED::SET_PED_INTO_VEHICLE(Local_1471[iParam0 /*14*/], iParam6, iParam7);
			}
		}
	}
	if (Local_1471[iParam0 /*14*/] != PLAYER::PLAYER_PED_ID())
	{
		if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1471[iParam0 /*14*/], 1);
			if (bParam10)
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_1471[iParam0 /*14*/], 0);
			}
			else
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[iParam0 /*14*/]);
			}
		}
	}
	if (iParam8 != 0)
	{
		if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
		{
			switch (iParam8)
			{
				case 1:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[iParam0 /*14*/], uLocal_1755);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 12, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 14, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 0, 1);
					if (iParam9 != 0)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], joaat("weapon_pistol"), 500, 1, 1);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_1471[iParam0 /*14*/].f_1))
					{
						Local_1471[iParam0 /*14*/].f_1 = GlobalFunc_6783(Local_1471[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 3:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[iParam0 /*14*/], uLocal_1754);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 12, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 14, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 0, 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_1471[iParam0 /*14*/], 0);
					if (iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], joaat("weapon_pistol"), 500, 1, 1);
					}
					break;
				
				case 5:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[iParam0 /*14*/], iLocal_1755);
					if (iParam9 != 0)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], joaat("weapon_pumpshotgun"), 0) && !WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], joaat("weapon_pumpshotgun"), 500, 1, 1);
						}
						else
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], joaat("weapon_pistol"), 500, 1, 1);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 12, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 14, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 0, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_1471[iParam0 /*14*/].f_1))
					{
						Local_1471[iParam0 /*14*/].f_1 = GlobalFunc_6783(Local_1471[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 6:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[iParam0 /*14*/], uLocal_1756);
					if (!HUD::DOES_BLIP_EXIST(Local_1471[iParam0 /*14*/].f_1))
					{
						Local_1471[iParam0 /*14*/].f_1 = GlobalFunc_6783(Local_1471[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 8:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_1471[iParam0 /*14*/], 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[iParam0 /*14*/], iLocal_1756);
					break;
				
				case 4:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_1471[iParam0 /*14*/], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[iParam0 /*14*/], iLocal_1756);
					break;
				
				case 2:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1471[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1471[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_1471[iParam0 /*14*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[iParam0 /*14*/], 17, 1);
					break;
				
				case 7:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[iParam0 /*14*/], uLocal_1757);
					break;
				}
			}
	}
	if (iLocal_1758 == 1)
	{
		if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_1471[iParam0 /*14*/]) == GlobalFunc_4917(1))
			{
				GlobalFunc_11257(Local_1471[iParam0 /*14*/], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (ENTITY::GET_ENTITY_MODEL(Local_1471[iParam0 /*14*/]) == GlobalFunc_4917(2))
			{
				GlobalFunc_11257(Local_1471[iParam0 /*14*/], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (ENTITY::GET_ENTITY_MODEL(Local_1471[iParam0 /*14*/]) == GlobalFunc_4917(0))
			{
				GlobalFunc_11257(Local_1471[iParam0 /*14*/], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
}
















































































































int func_400(int iParam0, int iParam1)//Position - 0x36091
{
	if (Local_4308[iParam0 /*5*/] == iParam1)
	{
		if (Local_4308[iParam0 /*5*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_4308[iParam0 /*5*/] != 0)
	{
	}
	return 0;
}

void func_401(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x360C4
{
	func_288(iParam0, iParam1, Local_1468, 0f, iParam2, iParam3, iParam4, iParam5, 0, 0);
}

void func_402(int iParam0, int iParam1, struct<3> Param2, float fParam5, float fParam6)//Position - 0x360E4
{
	if (iParam0 == -1 || iParam0 >= 14)
	{
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[iParam0 /*2*/], 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_1724[iParam0 /*2*/]) != iParam1 && iParam1 != 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Local_1724[iParam0 /*2*/]));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1724[iParam0 /*2*/]))
	{
		Local_1724[iParam0 /*2*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_1724[iParam0 /*2*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1724[iParam0 /*2*/], Param2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_1724[iParam0 /*2*/], fParam5);
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[iParam0 /*2*/]));
		Local_1724[iParam0 /*2*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[iParam0 /*2*/], 0))
	{
		if (fParam6 != -100f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1724[iParam0 /*2*/], fParam6);
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1724[iParam0 /*2*/]))
		{
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_1724[iParam0 /*2*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1724[iParam0 /*2*/], 0);
		}
	}
}



void func_405(struct<3> Param0, float fParam3)//Position - 0x362C0
{
	func_402(2, joaat("ztype"), Param0, fParam3, -1027080192);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1724[2 /*2*/], 0, 0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1724[2 /*2*/], 0, 0);
	VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1724[2 /*2*/], 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1724[2 /*2*/], 1);
	ENTITY::SET_ENTITY_HEALTH(Local_1724[2 /*2*/], 1000);
	GlobalFunc_743(Local_1724[2 /*2*/], 0);
}


int func_407(int iParam0)//Position - 0x36337
{
	if (func_408(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0, bool bParam1)//Position - 0x3634E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iLocal_1456 >= Local_1425[iVar0 /*3*/] && iLocal_1456 < Local_1425[iVar0 /*3*/].f_1)
	{
		switch (iVar0)
		{
			case 0:
				if (((((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@start_idle")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2officer")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@points@")) && STREAMING::HAS_ANIM_DICT_LOADED("switch@trevor@head_in_sink"))
				{
					return 1;
				}
				break;
			
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
				{
					return 1;
				}
				break;
			
			case 2:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_3135))
				{
					return 1;
				}
				break;
			
			case 3:
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_package_01")) && STREAMING::HAS_MODEL_LOADED(joaat("boxville2"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_hooker_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_janitor"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beach_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2MUGGING")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2PERVERT"))
				{
					return 1;
				}
				break;
			
			case 4:
				if (((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_hooker_02")) && STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_hooker_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("u_m_y_fibmugger_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_og_boss_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_c_rottweiler"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beach_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_gar_door_05"))) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2PIMPSEX")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2CHAD_GOODBYE")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2_bum")) && STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "CS2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "CS2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cs2_01"))
				{
					return 1;
				}
				break;
			
			case 5:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_3136))
				{
					return 1;
				}
				break;
			
			case 6:
				if (STREAMING::HAS_MODEL_LOADED(joaat("ztype")))
				{
					return 1;
				}
				break;
			
			case 7:
				if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("burrito")) && STREAMING::HAS_MODEL_LOADED(joaat("dominator"))) && STREAMING::HAS_MODEL_LOADED(joaat("habanero"))) && STREAMING::HAS_MODEL_LOADED(joaat("dubsta"))) && STREAMING::HAS_MODEL_LOADED(iLocal_3135)) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2peeing")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarstealfinalecar_5_ig_1")) && STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2lamar_idles")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2Chad_waiting")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2CAR_STOLEN")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2CHAD_GARAGE")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2switch")) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2fixer")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cs2_10"))
				{
					return 1;
				}
				break;
			
			case 8:
				if (((((((STREAMING::HAS_MODEL_LOADED(joaat("ig_devin")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_devinsec_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs_molly"))) && STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) && STREAMING::HAS_MODEL_LOADED(joaat("tailgater"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2leadinoutcar_2_mcs_1"))
				{
					return 1;
				}
				break;
			
			case 9:
				return 1;
				break;
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

































int func_441(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A921
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	float fVar10;
	int iVar11;
	
	uParam0->f_70 = { 0f, 0f, 0f };
	if (iParam2 == 1 && uParam0->f_1 == 0)
	{
		if (uParam0->f_5 == 0)
		{
			uLocal_115 = unk_0x67D02A194A2FC2BD("heli_cam");
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
		if (!CAM::DOES_CAM_EXIST(uParam0->f_32))
		{
			uParam0->f_35 = 0;
			uParam0->f_32 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::SET_CAM_NEAR_CLIP(uParam0->f_32, uParam0->f_12);
		}
		uParam0->f_49 = 1;
		MISC::SET_INSTANCE_PRIORITY_HINT(4);
		GlobalFunc_702(1, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
				{
					uParam0->f_8 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1);
					if (!uParam0->f_4)
					{
						ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_8, 0);
					}
					VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(300f);
				}
				VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(300f);
				uParam0->f_6 = 1;
				uParam0->f_33 = 1;
				uParam0->f_129 = 1;
				uParam0->f_2 = 1;
				uParam0->f_9 = iParam1;
				Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
				uParam0->f_22 = Var0.f_2;
				Var3 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
				uParam0->f_41 = Var3.f_2;
				if (uParam0->f_4)
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				}
				else
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
				}
				Var6 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
				uParam0->f_78 = Var6.x;
				uParam0->f_79 = Var6.f_1;
				GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
				{
					iVar9 = ENTITY::GET_ENTITY_MODEL(uParam0->f_8);
				}
				if (iVar9 == joaat("buzzard"))
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("heliGunCam");
				}
				else if (iVar9 == joaat("valkyrie") || iVar9 == joaat("valkyrie2"))
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("heliGunCam");
				}
				else
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				}
				GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(1);
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar10);
				uParam0->f_469 = (fVar10 * 10f);
				if (uParam0->f_470 == 1)
				{
					if (uParam0->f_475 != -1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_475))
						{
							AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_475, "COP_HELI_CAM_BACKGROUND", 0, 1);
						}
					}
				}
				func_465(uParam0);
				uParam0->f_1 = 1;
			}
		}
		return 0;
	}
	else
	{
		if (uParam0->f_1 == 1 && iParam2 == 1)
		{
			if (uParam0->f_165 == 0)
			{
				func_446(uParam0, 0);
				GlobalFunc_2516();
			}
			else
			{
				return 1;
			}
		}
		if (uParam0->f_1 == 1 && iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				uParam0->f_127 = 0;
			}
			uParam0->f_6 = 0;
			uParam0->f_33 = 0;
			uParam0->f_129 = 0;
			uParam0->f_9 = 0;
			uParam0->f_2 = 0;
			uParam0->f_134 = 0;
			func_442(uParam0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(uParam0->f_8))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_8, 1, 1);
				}
				if (!uParam0->f_4)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_8, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_8, 0);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_8, 1);
					VEHICLE::SET_VEHICLE_GRAVITY(uParam0->f_8, 1);
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				if (CAM::IS_CAM_ACTIVE(uParam0->f_32))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_32, 0);
				}
				if (CAM::IS_CAM_RENDERING(uParam0->f_32))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				CAM::DESTROY_CAM(uParam0->f_32, 0);
			}
			if (uParam0->f_472 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_472))
				{
					AUDIO::STOP_SOUND(uParam0->f_472);
				}
			}
			if (uParam0->f_473 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_473))
				{
					AUDIO::STOP_SOUND(uParam0->f_473);
				}
			}
			if (uParam0->f_474 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_474))
				{
					AUDIO::STOP_SOUND(uParam0->f_474);
				}
			}
			if (uParam0->f_476 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_476))
				{
					AUDIO::STOP_SOUND(uParam0->f_476);
				}
			}
			if (uParam0->f_477 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_477))
				{
					AUDIO::STOP_SOUND(uParam0->f_477);
				}
			}
			if (uParam0->f_478 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_478))
				{
					AUDIO::STOP_SOUND(uParam0->f_478);
				}
			}
			if (uParam0->f_475 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_475))
				{
					AUDIO::STOP_SOUND(uParam0->f_475);
				}
			}
			if (uParam0->f_479 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_479))
				{
					AUDIO::STOP_SOUND(uParam0->f_479);
				}
			}
			if (uParam0->f_470 == 1)
			{
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
				AUDIO::RELEASE_SOUND_ID(uParam0->f_475);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_472);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_473);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_474);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_476);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_477);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_478);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_479);
				uParam0->f_475 = -1;
				uParam0->f_472 = -1;
				uParam0->f_473 = -1;
				uParam0->f_474 = -1;
				uParam0->f_476 = -1;
				uParam0->f_477 = -1;
				uParam0->f_478 = -1;
				uParam0->f_479 = -1;
				uParam0->f_470 = 0;
			}
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(0);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterHUD");
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_115);
			GRAPHICS::POP_TIMECYCLE_MODIFIER();
			GlobalFunc_702(0, 0, 1);
			uParam0->f_46 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				iVar11 = 0;
				while (iVar11 < uParam0->f_85)
				{
					uParam0->f_85[iVar11 /*5*/].f_4 = 0;
					iVar11++;
				}
			}
			uParam0->f_8 = 0;
			uParam0->f_1 = 0;
			func_465(uParam0);
			return 1;
		}
	}
	return 0;
}

void func_442(var uParam0)//Position - 0x3AE1D
{
	uParam0->f_47 = 0;
	if (func_444(uParam0))
	{
		func_443(uParam0, uParam0->f_41, 0);
	}
}

void func_443(var uParam0, float fParam1, int iParam2)//Position - 0x3AE3E
{
	if (iParam2 == 1)
	{
		uParam0->f_51 = 1;
		uParam0->f_52 = fParam1;
		uParam0->f_53 = uParam0->f_41;
	}
	else
	{
		uParam0->f_51 = 0;
		uParam0->f_41 = uParam0->f_53;
	}
}

int func_444(var uParam0)//Position - 0x3AE6F
{
	if (uParam0->f_51 == 1)
	{
		return 1;
	}
	return 0;
}


void func_446(var uParam0, int iParam1)//Position - 0x3AE91
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	int iVar25;
	struct<3> Var26;
	int iVar29;
	struct<3> Var30;
	struct<3> Var33;
	struct<3> Var36;
	float fVar39;
	struct<3> Var40;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	float fVar47;
	
	if (uParam0->f_129 == 1)
	{
		fVar0 = ((uParam0->f_121 - uParam0->f_31) / (uParam0->f_30 - uParam0->f_31));
		if (fVar0 < 0f)
		{
			fVar0 = 0f;
		}
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		fVar1 = (uParam0->f_26 + ((uParam0->f_28 - uParam0->f_26) * fVar0));
		fVar2 = (uParam0->f_27 + ((uParam0->f_29 - uParam0->f_27) * fVar0));
		STREAMING::_0xBED8CA5FF5E04113(1.7f, 4.7f, fVar1, fVar2);
		fVar3 = ENTITY::GET_ENTITY_SPEED(uParam0->f_8);
		if (fVar3 > 30f)
		{
			STREAMING::_0x472397322E92A856();
		}
		STREAMING::_0x03F1A106BDA7DD3E();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_8);
			}
		}
		if (uParam0->f_43 != -1)
		{
			if (uParam0->f_44 < uParam0->f_43)
			{
				if (CLOCK::GET_CLOCK_HOURS() < uParam0->f_43 && CLOCK::GET_CLOCK_HOURS() > uParam0->f_44 + 1)
				{
					CLOCK::SET_CLOCK_TIME(uParam0->f_43, 0, 0);
				}
				else if (CLOCK::GET_CLOCK_HOURS() >= uParam0->f_44 && CLOCK::GET_CLOCK_HOURS() < uParam0->f_43)
				{
					CLOCK::SET_CLOCK_TIME(uParam0->f_44, 0, 0);
				}
			}
			else if (CLOCK::GET_CLOCK_HOURS() < uParam0->f_43)
			{
				CLOCK::SET_CLOCK_TIME(uParam0->f_43, 0, 0);
			}
			else if (CLOCK::GET_CLOCK_HOURS() >= uParam0->f_44)
			{
				CLOCK::SET_CLOCK_TIME(uParam0->f_44, 0, 0);
			}
		}
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud") || (iParam1 == 0 && !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_115)))
		{
			uParam0->f_165 = 0;
		}
		else
		{
			uParam0->f_159 = (1f - (2f * uParam0->f_133));
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (iParam1 == 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_115, 255, 255, 255, 0, 1);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
				if (!uParam0->f_165)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam0->f_8) == joaat("polmav") && VEHICLE::GET_VEHICLE_LIVERY(uParam0->f_8) == 0)
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_115, "SET_CAM_LOGO");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_115, "SET_CAM_LOGO");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_115, "SET_CAM_LOGO");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				}
			}
			uParam0->f_165 = 1;
		}
		if (uParam0->f_165 == 1)
		{
			if (iParam1 == 0)
			{
			}
			fVar18 = uParam0->f_236;
			iVar20 = -1;
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
			{
				Var22 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1) };
			}
			if (uParam0->f_166 == 0)
			{
				iVar4 = 0;
				uParam0->f_132 = 0;
				iVar4 = 0;
				while (iVar4 < uParam0->f_298)
				{
					if (MISC::IS_BIT_SET(uParam0->f_298[iVar4 /*11*/].f_2, 9))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_298[iVar4 /*11*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_298[iVar4 /*11*/]))
							{
								if (MISC::IS_BIT_SET(uParam0->f_298[iVar4 /*11*/].f_2, 0))
								{
									switch (uParam0->f_298[iVar4 /*11*/].f_4)
									{
										case 2:
											func_463(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[iVar4 /*11*/], 0), uParam0->f_144, uParam0->f_144.f_1, uParam0->f_144.f_2);
											break;
										
										case 3:
											func_463(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[iVar4 /*11*/], 0), uParam0->f_147, uParam0->f_147.f_1, uParam0->f_147.f_2);
											break;
										
										case 0:
											func_463(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[iVar4 /*11*/], 0), uParam0->f_141, uParam0->f_141.f_1, uParam0->f_141.f_2);
											break;
										
										case 1:
											func_463(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[iVar4 /*11*/], 0), uParam0->f_147, uParam0->f_147.f_1, uParam0->f_147.f_2);
											break;
									}
								}
								else if (CLOCK::GET_CLOCK_HOURS() < 19 && CLOCK::GET_CLOCK_HOURS() > 7)
								{
									func_463(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[iVar4 /*11*/], 0), uParam0->f_141, uParam0->f_141.f_1, uParam0->f_141.f_2);
								}
								else
								{
									func_463(uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[iVar4 /*11*/], 0), uParam0->f_141, uParam0->f_141.f_1, uParam0->f_141.f_2);
								}
							}
						}
					}
					iVar4++;
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
				{
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var22, &uVar19);
					if (uParam0->f_131 == 0 && uParam0->f_127 > 0)
					{
						iVar4 = 0;
						while (iVar4 <= (uParam0->f_127 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_298[iVar4 /*11*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_298[iVar4 /*11*/]) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
								{
									Var12 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[iVar4 /*11*/], 0) };
									if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_298[iVar4 /*11*/]))
									{
										fVar8 = 0f;
										fVar9 = 0f;
										fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var12, ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1), 1);
										fVar21 = func_462(uParam0, uParam0->f_298[iVar4 /*11*/], uParam0->f_9);
										fVar17 = (uParam0->f_153 * fVar21);
										if (MISC::IS_BIT_SET(uParam0->f_298[iVar4 /*11*/].f_2, 2) || iVar4 == uParam0->f_171)
										{
											if (MISC::IS_BIT_SET(uParam0->f_298[iVar4 /*11*/].f_2, 0))
											{
												if (((SYSTEM::TIMERA() - uParam0->f_298[iVar4 /*11*/].f_1) < 500 && !func_460(uParam0, uParam0->f_298[iVar4 /*11*/])) && !func_454(ENTITY::GET_ENTITY_COORDS(uParam0->f_298[iVar4 /*11*/], 1)))
												{
													func_453(uParam0, Var12, fVar21, uParam0->f_298[iVar4 /*11*/].f_4, -1, -1, -1);
													uParam0->f_298[iVar4 /*11*/].f_7 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_298[iVar4 /*11*/], 1) };
												}
												else
												{
													func_452(uParam0, uParam0->f_298[iVar4 /*11*/].f_4, &iVar5, &iVar6, &iVar7);
													GRAPHICS::SET_DRAW_ORIGIN(uParam0->f_298[iVar4 /*11*/].f_7, 0);
													GRAPHICS::DRAW_SPRITE("helicopterhud", "TargetLost", fVar8, fVar9, fVar17, (fVar17 * 2f), 0f, iVar5, iVar6, iVar7, 200, 1);
													GRAPHICS::CLEAR_DRAW_ORIGIN();
													func_451(iVar5, iVar6, iVar7, 0.5f, 1);
													uParam0->f_132 = 1;
												}
											}
											else
											{
												func_452(uParam0, 3, &iVar5, &iVar6, &iVar7);
												if (iVar4 == uParam0->f_171)
												{
													func_453(uParam0, Var12, fVar21, uParam0->f_298[iVar4 /*11*/].f_4, uParam0->f_141, uParam0->f_141.f_1, uParam0->f_141.f_2);
												}
												else
												{
													func_453(uParam0, Var12, fVar21, uParam0->f_298[iVar4 /*11*/].f_4, uParam0->f_141, uParam0->f_141.f_1, uParam0->f_141.f_2);
												}
											}
											if (MISC::IS_BIT_SET(uParam0->f_298[iVar4 /*11*/].f_2, 7))
											{
												func_453(uParam0, Var12, fVar21, uParam0->f_298[iVar4 /*11*/].f_4, 227, 24, 234);
											}
										}
										iVar25 = 0;
										Var26 = { 0f, 0f, 0f };
										iVar29 = 0;
										switch (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_298[iVar4 /*11*/].f_10, &iVar25, &Var26, &Var26, &iVar29))
										{
											case 0:
												Var30 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 1) };
												Var33 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_298[iVar4 /*11*/], 1) + Vector(0.5f, 0f, 0f) };
												uParam0->f_298[iVar4 /*11*/].f_10 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var30, Var33, 1, 0, 7);
												break;
											
											case 2:
												if (iVar25 == 0)
												{
													uParam0->f_298[iVar4 /*11*/].f_1 = SYSTEM::TIMERA();
												}
												break;
										}
										if ((SYSTEM::TIMERA() - uParam0->f_298[iVar4 /*11*/].f_1) < 1500 || MISC::IS_BIT_SET(uParam0->f_298[iVar4 /*11*/].f_2, 0))
										{
											if ((uParam0->f_157 / (uParam0->f_40 * fVar16)) > 1f)
											{
												GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var12, &fVar8, &fVar9);
												fVar15 = SYSTEM::SQRT((((fVar8 - 0.5f) * (fVar8 - 0.5f)) + ((fVar9 - 0.5f) * (fVar9 - 0.5f))));
												if (fVar15 < fVar18)
												{
													fVar10 = fVar8;
													fVar11 = fVar9;
													fVar10 = fVar10;
													fVar11 = fVar11;
													fVar18 = fVar15;
													iVar20 = iVar4;
												}
											}
										}
										GRAPHICS::CLEAR_DRAW_ORIGIN();
									}
								}
							}
							iVar4++;
						}
					}
					uParam0->f_155++;
					if (uParam0->f_155 > (uParam0->f_127 - 1))
					{
						uParam0->f_155 = 0;
					}
				}
				if (uParam0->f_171 != iVar20)
				{
					if (uParam0->f_474 != -1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_474))
						{
							AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_474, "COP_HELI_CAM_BLEEP", 0, 1);
						}
					}
				}
				uParam0->f_171 = iVar20;
				uParam0->f_128 = 0;
				if (uParam0->f_171 != -1 && uParam0->f_2 == 1)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_298[uParam0->f_171 /*11*/].f_2, 0))
					{
						if (PAD::IS_CONTROL_PRESSED(2, 229))
						{
							if (((uParam0->f_156 / (uParam0->f_40 * fVar16)) > 0.5f && !func_454(ENTITY::GET_ENTITY_COORDS(uParam0->f_298[uParam0->f_171 /*11*/], 1))) && !func_460(uParam0, uParam0->f_298[uParam0->f_171 /*11*/]))
							{
								if (uParam0->f_471 == 1)
								{
									if (uParam0->f_479 != -1)
									{
										if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_479))
										{
											AUDIO::STOP_SOUND(uParam0->f_479);
										}
									}
									uParam0->f_471 = 0;
								}
								uParam0->f_128 = 1;
								if (uParam0->f_298[uParam0->f_171 /*11*/].f_3 < 1f)
								{
									if (uParam0->f_476 != -1)
									{
										if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_476))
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_476, "COP_HELI_CAM_SCAN_PED_LOOP", 0, 1);
										}
									}
									fVar18 = MISC::ABSF((1f - fVar18));
									uParam0->f_298[uParam0->f_171 /*11*/].f_3 = (uParam0->f_298[uParam0->f_171 /*11*/].f_3 + ((fVar18 * SYSTEM::TIMESTEP()) / 3.5f));
									fVar21 = func_462(uParam0, uParam0->f_298[uParam0->f_171 /*11*/], uParam0->f_9);
									fVar17 = (uParam0->f_153 * fVar21);
									func_451(255, 0, 0, 0.5f, 1);
									if ((SYSTEM::TIMERA() % 600) < 300)
									{
										GlobalFunc_2008(0.5f, 0.68f, "scan", 1);
									}
									fVar21 = func_462(uParam0, uParam0->f_298[uParam0->f_171 /*11*/], uParam0->f_9);
									fVar17 = 0.03f;
									GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[uParam0->f_171 /*11*/], 0), 0);
									func_448(uParam0, uParam0->f_298[uParam0->f_171 /*11*/], uParam0->f_298[uParam0->f_171 /*11*/].f_3, fVar21);
									GRAPHICS::CLEAR_DRAW_ORIGIN();
								}
								else
								{
									if (MISC::IS_BIT_SET(uParam0->f_298[uParam0->f_171 /*11*/].f_2, 3))
									{
										MISC::SET_BIT(&(uParam0->f_298[uParam0->f_171 /*11*/].f_2), 2);
									}
									MISC::SET_BIT(&(uParam0->f_298[uParam0->f_171 /*11*/].f_2), 0);
									uParam0->f_134 = uParam0->f_298[uParam0->f_171 /*11*/];
									if (uParam0->f_476 != -1)
									{
										if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_476))
										{
											AUDIO::STOP_SOUND(uParam0->f_476);
										}
									}
									if (uParam0->f_298[uParam0->f_171 /*11*/].f_4 == 2)
									{
										if (uParam0->f_477 != -1)
										{
											if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_477))
											{
												AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_477, "COP_HELI_CAM_SCAN_PED_SUCCESS", 0, 1);
											}
										}
									}
									else if (uParam0->f_478 != -1)
									{
										if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_478))
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_478, "COP_HELI_CAM_SCAN_PED_FAILURE", 0, 1);
										}
									}
								}
							}
							else
							{
								fVar21 = func_462(uParam0, uParam0->f_298[uParam0->f_171 /*11*/], uParam0->f_9);
								fVar17 = (uParam0->f_153 * fVar21);
								func_451(255, 0, 0, 0.5f, 1);
								GlobalFunc_2008(0.5f, 0.68f, "HUD_RNG", 0);
								if (!uParam0->f_471)
								{
									if (uParam0->f_479 != -1)
									{
										if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_479))
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_479, "COP_HELI_CAM_BLEEP_TOO_FAR", 0, 1);
											uParam0->f_471 = 1;
										}
									}
								}
							}
						}
						else if (uParam0->f_471 == 1)
						{
							if (uParam0->f_479 != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_479))
								{
									AUDIO::STOP_SOUND(uParam0->f_479);
								}
							}
							uParam0->f_471 = 0;
						}
					}
					else if (PAD::IS_CONTROL_PRESSED(2, 229) || (MISC::GET_GAME_TIMER() < uParam0->f_173 && uParam0->f_172 == uParam0->f_171))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_298[uParam0->f_171 /*11*/]))
						{
							if ((SYSTEM::TIMERA() - uParam0->f_298[uParam0->f_171 /*11*/].f_1) < 500)
							{
								if (!uParam0->f_132)
								{
									uParam0->f_172 = uParam0->f_171;
									uParam0->f_173 = MISC::GET_GAME_TIMER() + 3000;
									GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_298[uParam0->f_171 /*11*/], 0), 0);
									fVar21 = func_462(uParam0, uParam0->f_298[uParam0->f_171 /*11*/], uParam0->f_9);
									fVar8 = 0f;
									fVar9 = 0f;
									func_452(uParam0, uParam0->f_298[uParam0->f_171 /*11*/].f_4, &iVar5, &iVar6, &iVar7);
									GRAPHICS::CLEAR_DRAW_ORIGIN();
									if (uParam0->f_298[uParam0->f_171 /*11*/].f_4 == 2)
									{
										func_447(uParam0, uParam0->f_171, ((fVar8 - (fVar17 / 2f)) + (fVar17 * 0.04f)), ((fVar9 + fVar17) + 0.005f), iVar5, iVar6, iVar7, fVar21, 1);
									}
									else
									{
										func_447(uParam0, uParam0->f_171, ((fVar8 - (fVar17 / 2f)) + (fVar17 * 0.04f)), ((fVar9 + fVar17) + 0.005f), iVar5, iVar6, iVar7, fVar21, 0);
									}
								}
							}
						}
					}
				}
				if (uParam0->f_128 == 0)
				{
					if (uParam0->f_476 != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_476))
						{
							AUDIO::STOP_SOUND(uParam0->f_476);
						}
					}
				}
			}
			if (uParam0->f_241 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= 4)
				{
					if (uParam0->f_242[iVar4 /*11*/].f_5 != -1)
					{
						if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(uParam0->f_242[iVar4 /*11*/], &fVar8, &fVar9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
							{
								Var36 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 1) };
							}
							else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
							{
								Var36 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1) };
							}
							GRAPHICS::SET_DRAW_ORIGIN(uParam0->f_242[iVar4 /*11*/], 0);
							fVar8 = 0f;
							fVar9 = 0f;
							if (uParam0->f_242[iVar4 /*11*/].f_6 == 1)
							{
								fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_242[iVar4 /*11*/], Var36, 1);
								fVar21 = (uParam0->f_158 / (uParam0->f_40 * fVar16));
								if (fVar21 < 0.4f)
								{
									fVar21 = 0.4f;
								}
								if (fVar21 > 2f)
								{
									fVar21 = 2f;
								}
								func_453(uParam0, uParam0->f_242[iVar4 /*11*/], fVar21, 0, -1, -1, -1);
								GRAPHICS::SET_DRAW_ORIGIN(uParam0->f_242[iVar4 /*11*/], 0);
							}
							else
							{
								GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_dest", fVar8, fVar9, 0.042f, 0.042f, 0f, uParam0->f_242[iVar4 /*11*/].f_8, uParam0->f_242[iVar4 /*11*/].f_9, uParam0->f_242[iVar4 /*11*/].f_10, 255, 1);
							}
							GRAPHICS::CLEAR_DRAW_ORIGIN();
						}
						else if (uParam0->f_242[iVar4 /*11*/].f_6 == 1)
						{
							func_463(uParam0, uParam0->f_242[iVar4 /*11*/], uParam0->f_242[iVar4 /*11*/].f_8, uParam0->f_242[iVar4 /*11*/].f_9, uParam0->f_242[iVar4 /*11*/].f_10);
						}
						else
						{
							func_463(uParam0, uParam0->f_242[iVar4 /*11*/], uParam0->f_242[iVar4 /*11*/].f_8, uParam0->f_242[iVar4 /*11*/].f_9, uParam0->f_242[iVar4 /*11*/].f_10);
						}
					}
					iVar4++;
				}
			}
			if (iParam1 == 0)
			{
				fVar39 = uParam0->f_121.f_2;
				Var40 = { 0f, 0f, 0f };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
					{
						Var40 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1) };
						fVar47 = ENTITY::GET_ENTITY_HEADING(uParam0->f_9);
					}
				}
				while (fVar39 < 0f)
				{
					fVar39 = (fVar39 + 360f);
				}
				while (fVar39 > 360f)
				{
					fVar39 = (fVar39 - 360f);
				}
				while (fVar47 < 0f)
				{
					fVar47 = (fVar47 + 360f);
				}
				while (fVar47 > 360f)
				{
					fVar47 = (fVar47 - 360f);
				}
				fVar46 = fVar39;
				fVar44 = (fVar47 - uParam0->f_25);
				fVar45 = (fVar47 + uParam0->f_25);
				if (fVar46 < fVar44 && (fVar46 + 360f) <= fVar45)
				{
					fVar46 = (fVar46 + 360f);
				}
				if (fVar46 > fVar45 && (fVar46 - 360f) >= fVar44)
				{
					fVar46 = (fVar46 - 360f);
				}
				fVar43 = ((fVar46 - fVar44) / (fVar45 - fVar44));
				if (fVar43 == 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 == -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 < 0f && fVar43 >= -0.5f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 < 0f && fVar43 > -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 > 1.5f && fVar43 < 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 > 2f || fVar43 < -1f)
				{
					fVar43 = 0.5f;
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_115, "SET_ALT_FOV_HEADING");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var40.f_2);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar43);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(((uParam0->f_40 - uParam0->f_39) / (uParam0->f_38 - uParam0->f_39)));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar39);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				if (!uParam0->f_130)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
			}
		}
	}
}

int func_447(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x3BE81
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	
	func_451(iParam4, iParam5, iParam6, 0.43f, bParam8);
	if (fParam7 < 0.7f)
	{
		fParam7 = 0.7f;
	}
	if (fParam7 > 1.5f)
	{
		fParam7 = 1.5f;
	}
	if (uParam0->f_298[iParam1 /*11*/].f_6 != -1)
	{
		Var0 = { uParam0->f_433[uParam0->f_298[iParam1 /*11*/].f_6 /*4*/] };
		func_451(iParam4, iParam5, iParam6, 0.43f, bParam8);
		GlobalFunc_2008(0.5f, 0.68f, &Var0, 1);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_298[iParam1 /*11*/].f_2, 8))
	{
	}
	iVar4 = 24;
	while (iVar4 <= 31)
	{
		if (MISC::IS_BIT_SET(uParam0->f_298[iParam1 /*11*/].f_5, iVar4))
		{
			StringCopy(&Var0, "crimes_", 16);
			StringIntConCat(&Var0, (iVar4 - 23), 16);
			func_451(iParam4, iParam5, iParam6, 0.43f, bParam8);
			GlobalFunc_2008(0.5f, (0.68f + (0.037f * IntToFloat(iVar5 + 1))), &Var0, 1);
			iVar5++;
		}
		iVar4++;
	}
	if (iVar5 == 0)
	{
		func_451(iParam4, iParam5, iParam6, 0.43f, bParam8);
		GlobalFunc_2008(fParam2, (fParam3 + (uParam0->f_466 * fParam7)), "unknown", 1);
	}
	if (uParam0->f_298[iParam1 /*11*/].f_4 == 0)
	{
		func_451(iParam4, iParam5, iParam6, 0.43f, bParam8);
		GlobalFunc_2008(fParam2, (fParam3 + (uParam0->f_466 * fParam7)), "HUD_ID2", 1);
	}
	return 1;
}

void func_448(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x3BFF2
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
	float fVar15;
	float fVar16;
	
	Var12 = { 0f, 0f, 0f };
	if (fParam2 < 0.5f)
	{
		if (!PED::IS_PED_INJURED(uParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 14201, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 63931, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 52301, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 36864, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.15f && fParam2 < 0.7f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 36864, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 51826, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 63931, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 58271, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.3f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 11816, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 39317, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.3f;
		fVar16 = 0.5f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 2f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 31086, Var12) };
			Var3 = { Var0 + Var0 - PED::GET_PED_BONE_COORDS(iParam1, 39317, Var12) * Vector(3f, 3f, 3f) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1.3f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 40269, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 28252, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 45509, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 61163, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.75f && fParam2 < 1f)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 28252, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 57005, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.75f;
		fVar16 = 0.25f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!PED::IS_PED_INJURED(iParam1))
		{
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 61163, Var12) };
			Var3 = { PED::GET_PED_BONE_COORDS(iParam1, 18905, Var12) };
			GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar8, &fVar9);
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0.75f;
		fVar16 = 0.3f;
		func_449(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

void func_449(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11)//Position - 0x3C665
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam3 / 10f);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		fVar1 = (fParam1 - (fParam2 + (IntToFloat(iVar0) * fVar2)));
		if (fVar1 > 0f && fVar1 < 0.3f)
		{
			fVar1 = SYSTEM::SIN((fVar1 * 600f));
			GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_line", (fParam4 * IntToFloat(iVar0)), (fParam5 * IntToFloat(iVar0)), ((fParam6 * fParam11) * 0.01f), ((fParam6 * fParam11) * 0.01f), MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, (fParam7 - fParam8), (fParam9 - fParam10)), uParam0->f_150, uParam0->f_150.f_1, uParam0->f_150.f_2, SYSTEM::FLOOR((fVar1 * 32f)), 1);
		}
		iVar0++;
	}
}


void func_451(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x3C72F
{
	HUD::SET_TEXT_SCALE(fParam3, fParam3);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, 150);
	if (bParam4)
	{
		HUD::SET_TEXT_DROPSHADOW(5, 0, 0, 0, 255);
	}
	HUD::SET_TEXT_CENTRE(1);
	HUD::SET_TEXT_FONT(0);
}

int func_452(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x3C764
{
	switch (iParam1)
	{
		case 0:
			*iParam2 = uParam0->f_141;
			*uParam3 = uParam0->f_141.f_1;
			*uParam4 = uParam0->f_141.f_2;
			return 1;
			break;
		
		case 1:
			*iParam2 = 255;
			*uParam3 = 255;
			*uParam4 = 0;
			return 1;
			break;
		
		case 2:
			*iParam2 = uParam0->f_144;
			*uParam3 = uParam0->f_144.f_1;
			*uParam4 = uParam0->f_144.f_2;
			return 1;
			break;
		
		case 3:
			*iParam2 = uParam0->f_147;
			*uParam3 = uParam0->f_147.f_1;
			*uParam4 = uParam0->f_147.f_2;
			return 1;
			break;
	}
	return 0;
}

void func_453(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3C801
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	func_452(uParam0, iParam5, &iVar0, &uVar1, &uVar2);
	GRAPHICS::SET_DRAW_ORIGIN(Param1, 0);
	if (iParam6 != -1)
	{
		iVar0 = iParam6;
		uVar1 = iParam7;
		uVar2 = iParam8;
	}
	fParam4 = (fParam4 * 0.03f);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fParam4 * 0.5f), -fParam4, 0.013f, 0.013f, 0f, iVar0, uVar1, uVar2, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fParam4 * 0.5f), -fParam4, 0.013f, 0.013f, 90f, iVar0, iVar1, iVar2, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fParam4 * 0.5f), fParam4, 0.013f, 0.013f, 270f, iVar0, iVar1, iVar2, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fParam4 * 0.5f), fParam4, 0.013f, 0.013f, 180f, iVar0, iVar1, iVar2, 200, 1);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_454(struct<3> Param0)//Position - 0x3C901
{
	int iVar0;
	struct<3> Var1;
	
	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		if (CAM::IS_CAM_RENDERING(CAM::GET_RENDERING_CAM()))
		{
			Var1 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			iVar0 = 0;
			while (iVar0 < Local_36)
			{
				if (func_455(Var1, Param0, Local_36[iVar0 /*13*/][0 /*3*/], Local_36[iVar0 /*13*/][1 /*3*/], Local_36[iVar0 /*13*/][2 /*3*/], Local_36[iVar0 /*13*/][3 /*3*/]))
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_455(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, struct<3> Param12, struct<3> Param15)//Position - 0x3C97E
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { GlobalFunc_277(Param9 - Param6, Param12 - Param6) };
	if (!GlobalFunc_105(Var3))
	{
		Var3 = { GlobalFunc_107(Var3) };
		if (func_458(&Var0, Param0, Param3, Var3, Param6))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var0, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, 1))
			{
				if (func_456(Var0, Param6, Param9, Param12))
				{
					return 1;
				}
			}
		}
		Var3 = { GlobalFunc_277(Param12 - Param6, Param15 - Param6) };
		Var3 = { GlobalFunc_107(Var3) };
		if (!GlobalFunc_105(Var3))
		{
			if (func_458(&Var0, Param0, Param3, Var3, Param6))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var0, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, 1))
				{
					if (func_456(Var0, Param6, Param15, Param12))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_456(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0x3CA8F
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	Var0 = { Param9 - Param3 };
	Var3 = { Param6 - Param3 };
	Var6 = { Param0 - Param3 };
	fVar9 = GlobalFunc_168(Var0, Var0);
	fVar10 = GlobalFunc_168(Var0, Var3);
	fVar11 = GlobalFunc_168(Var0, Var6);
	fVar12 = GlobalFunc_168(Var3, Var3);
	fVar13 = GlobalFunc_168(Var3, Var6);
	fVar14 = (1f / ((fVar9 * fVar12) - (fVar10 * fVar10)));
	fVar15 = (((fVar12 * fVar11) - (fVar10 * fVar13)) * fVar14);
	fVar16 = (((fVar9 * fVar13) - (fVar10 * fVar11)) * fVar14);
	if ((fVar15 >= 0f && fVar16 >= 0f) && (fVar15 + fVar16) < 1f)
	{
		return 1;
	}
	return 0;
}


int func_458(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10)//Position - 0x3CB75
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { Param4 - Param1 };
	Var3 = { Param1 - Param10 };
	fVar6 = GlobalFunc_168(Param7, Var0);
	fVar7 = -func_457(Param7, Var3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return 0;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { Param1 + Vector(fVar8, fVar8, fVar8) * Var0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return 0;
	}
	return 1;
}


int func_460(var uParam0, int iParam1)//Position - 0x3CC2E
{
	int iVar0;
	
	if (uParam0->f_46 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_85)
			{
				if (func_461(ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1), ENTITY::GET_ENTITY_COORDS(uParam1, 1), uParam0->f_85[iVar0 /*5*/], uParam0->f_85[iVar0 /*5*/].f_3))
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_461(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x3CC8E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	Var4 = { Param3 - Param0 };
	fVar0 = (((Var4.x * Var4.x) + (Var4.f_1 * Var4.f_1)) + (Var4.f_2 * Var4.f_2));
	fVar1 = (2f * (((Var4.x * (Param0.x - Param6.x)) + (Var4.f_1 * (Param0.f_1 - Param6.f_1))) + (Var4.f_2 * (Param0.f_2 - Param6.f_2))));
	fVar2 = (((Param6.x * Param6.x) + (Param6.f_1 * Param6.f_1)) + (Param6.f_2 * Param6.f_2));
	fVar2 = (fVar2 + (((Param0.x * Param0.x) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2)));
	fVar2 = (fVar2 - (2f * (((Param6.x * Param0.x) + (Param6.f_1 * Param0.f_1)) + (Param6.f_2 * Param0.f_2))));
	fVar2 = (fVar2 - (fParam9 * fParam9));
	fVar3 = ((fVar1 * fVar1) - ((4f * fVar0) * fVar2));
	if (MISC::ABSF(fVar0) < 1E-05f || fVar3 <= 0f)
	{
		return 0;
	}
	return 1;
}

float func_462(var uParam0, int iParam1, int iParam2)//Position - 0x3CD78
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam1, 0) };
		if (!ENTITY::IS_ENTITY_DEAD(uParam2))
		{
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 1);
			fVar4 = (uParam0->f_158 / (uParam0->f_40 * fVar3));
			if (fVar4 < 0.4f)
			{
				fVar4 = 0.4f;
			}
			if (fVar4 > 2f)
			{
				fVar4 = 2f;
			}
			return fVar4;
		}
	}
	return 0f;
}

void func_463(var uParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6)//Position - 0x3CDE1
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param1, &uVar0, &uVar0))
		{
			Var1 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Var4 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1.x, Var1.f_1, 0f, Param1.x, Param1.f_1, 0f, 1);
			fVar8 = (Param1.f_2 - Var1.f_2);
			if (fVar7 > 0f)
			{
				fVar9 = MISC::ATAN((fVar8 / fVar7));
			}
			else
			{
				fVar9 = 0f;
			}
			fVar10 = GlobalFunc_1695(Var1, Param1, 0);
			fVar11 = MISC::ATAN2(((SYSTEM::COS(Var4.x) * SYSTEM::SIN(fVar9)) - ((SYSTEM::SIN(Var4.x) * SYSTEM::COS(fVar9)) * SYSTEM::COS(((fVar10 * -1f) - Var4.f_2)))), (SYSTEM::SIN(((fVar10 * -1f) - Var4.f_2)) * SYSTEM::COS(fVar9)));
			if (uParam0->f_10 > 0f)
			{
			}
			fVar12 = (0.5f - (SYSTEM::COS(fVar11) * 0.29f));
			fVar13 = (0.5f - (SYSTEM::SIN(fVar11) * 0.29f));
			GRAPHICS::DRAW_SPRITE("helicopterhud", "hudArrow", fVar12, fVar13, 0.02f, 0.04f, (fVar11 - 90f), uParam4, uParam5, uParam6, 255, 1);
			HUD::SET_TEXT_CENTRE(1);
		}
	}
}


void func_465(var uParam0)//Position - 0x3CF6F
{
	if (uParam0->f_470 == 0)
	{
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0))
		{
			uParam0->f_470 = 1;
			uParam0->f_472 = AUDIO::GET_SOUND_ID();
			uParam0->f_473 = AUDIO::GET_SOUND_ID();
			uParam0->f_475 = AUDIO::GET_SOUND_ID();
			uParam0->f_474 = AUDIO::GET_SOUND_ID();
			uParam0->f_476 = AUDIO::GET_SOUND_ID();
			uParam0->f_477 = AUDIO::GET_SOUND_ID();
			uParam0->f_478 = AUDIO::GET_SOUND_ID();
			uParam0->f_479 = AUDIO::GET_SOUND_ID();
		}
	}
}


int func_467()//Position - 0x3D00C
{
	if ((((((PAD::GET_CONTROL_VALUE(2, 30) != 127 || PAD::GET_CONTROL_VALUE(2, 31) != 127) || PAD::IS_CONTROL_PRESSED(2, 24)) || PAD::IS_CONTROL_PRESSED(2, 168)) || PAD::IS_CONTROL_PRESSED(2, 25)) || PAD::GET_CONTROL_VALUE(2, 291) != 127) || PAD::GET_CONTROL_VALUE(2, 290) != 127)
	{
		return 1;
	}
	return 0;
}









void func_476(int iParam0, int iParam1, bool bParam2)//Position - 0x3D93A
{
	Local_4434[iParam0 /*10*/] = iParam1;
	Local_4434[iParam0 /*10*/].f_1 = 1;
	Local_4434[iParam0 /*10*/].f_3 = 0;
	Local_4434[iParam0 /*10*/].f_6 = 0;
	Local_4434[iParam0 /*10*/].f_4 = 0;
	Local_4434[iParam0 /*10*/].f_7 = 0;
	Local_4434[iParam0 /*10*/].f_2 = 0;
	Local_4434[iParam0 /*10*/].f_8 = 0;
	Local_4434[iParam0 /*10*/].f_9 = 0f;
	if (bParam2)
	{
		Local_4434[iParam0 /*10*/].f_3 = 1;
	}
}

void func_477(bool bParam0)//Position - 0x3D9AA
{
	int iVar0;
	
	if (bParam0)
	{
		func_288(2, iLocal_3135, 444.9502f, -975.7095f, 42.6919f, 233.9611f, 0, -1, 4, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[2 /*14*/], 1);
		PED::SET_PED_PROP_INDEX(Local_1471[2 /*14*/], 0, 0, 0, false);
		PED::SET_PED_CAN_BE_TARGETTED(Local_1471[2 /*14*/], 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[2 /*14*/], 1862763509);
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_1724[0 /*2*/], -1);
		if (!(PED::IS_PED_INJURED(Local_1471[2 /*14*/]) && iVar0 != Local_1471[2 /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_1471[2 /*14*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					PED::SET_PED_INTO_VEHICLE(iVar0, Local_1724[0 /*2*/], 0);
				}
				func_288(2, iLocal_3135, Local_1468, 0f, Local_1724[0 /*2*/], -1, 4, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[2 /*14*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1471[2 /*14*/], 1862763509);
				PED::SET_PED_PROP_INDEX(Local_1471[2 /*14*/], 0, 0, 0, false);
			}
		}
	}
}

void func_478(int iParam0)//Position - 0x3DABD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4434)
	{
		if (Local_4434[iVar0 /*10*/] == iParam0)
		{
			if (Local_4434[iVar0 /*10*/].f_1 == 1)
			{
				Local_4434[iVar0 /*10*/].f_3 = 1;
			}
		}
		iVar0++;
	}
}

void func_479(int iParam0, bool bParam1)//Position - 0x3DAFC
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3974, 1);
	}
	TASK::CLOSE_SEQUENCE_TASK(uLocal_3974);
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_3974);
	}
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_3974);
}

void func_480()//Position - 0x3DB32
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_3974);
}

void func_481(int iParam0)//Position - 0x3DB41
{
	Local_4434[iParam0 /*10*/].f_4 = 1;
}

void func_482(int iParam0, int iParam1)//Position - 0x3DB53
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	struct<3> Var8;
	float fVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_4043[0 /*7*/] != iParam0 && Local_4043[iVar0 /*7*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_4043)
		{
			if (iVar1 <= iVar0)
			{
				Local_4043[iVar1 /*7*/] = (iParam0 + iVar2);
				Local_4043[iVar1 /*7*/].f_1 = 1;
				Local_4043[iVar1 /*7*/].f_2 = 0;
				Local_4043[iVar1 /*7*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_4043[iVar1 /*7*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_4043)
	{
		if (Local_4043[iVar3 /*7*/].f_1)
		{
			switch (Local_4043[iVar3 /*7*/])
			{
				case 1:
					if (iLocal_4015 != 0)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 2:
					if (func_493(5))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_4043[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 3:
					Local_4043[iVar3 /*7*/].f_2 = 1;
					break;
				
				case 17:
					if (MISC::ARE_STRINGS_EQUAL("cs2_cop5", &Local_4302))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 4:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 434.8321f, -983.0393f, 29.31451f, 450.1917f, -983.2404f, 32.81451f, 11f, 0, 1, 0))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 5:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
						{
							if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_1471[5 /*14*/]) == MISC::GET_HASH_KEY("PH_LOCKERS_ROOM"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 6:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM001") || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM002")) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM003")) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM004"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/], 1) > 13f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 8:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM002") || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM003")) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM004"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 9:
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("PH_LOCKERS_ROOM"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 10:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 454.226f, -982.5798f, 30.56459f, 1f, 1f, 1.0625f, 0, 1, 0))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 11:
					if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/]) < 5f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_4043[iVar3 /*7*/].f_2 = 0;
						}
					}
					break;
				
				case 12:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_3939))
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_3939)
						{
						}
					}
					break;
				
				case 13:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_1471[5 /*14*/]))
					{
						if (INTERIOR::IS_VALID_INTERIOR(iLocal_3939))
						{
							if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
							{
								if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_1471[5 /*14*/]) == iLocal_3939)
								{
									if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_1471[5 /*14*/]) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM001") || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_1471[5 /*14*/]) == MISC::GET_HASH_KEY("PH_EXTSTRS_ROOM002"))
									{
										Local_4043[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				
				case 15:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 465.0321f, -985.681f, 38.76678f, 465.0316f, -981.7911f, 42.76662f, 8f, 0, 1, 0))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					if (func_44("cs2_cop5"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 16:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/], 1) > 8f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 18:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 476.3787f, -987.3391f, 42.32075f, 430.2201f, -986.7795f, 47.25765f, 31.125f, 0, 1, 0))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 19:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_1724[0 /*2*/])
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(0, 23) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 1) < 9f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 20:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 455.4418f, -991.062f, 31.06459f, 5.3125f, 3.625f, 1.5f, 0, 1, 0))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 22:
					if (func_44("cs2_cop7"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 21:
					if (func_57(28))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/], 1) > 5f)
						{
							if ((func_57(9) && !func_57(5)) && !func_57(5))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							if (func_57(13) && func_57(6))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 23:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_44("cs2_cop7"))
							{
								Local_4043[iVar3 /*7*/].f_4 = 1;
							}
							break;
						
						case 1:
							if (!func_44("cs2_cop7"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 24:
					if (func_57(23))
					{
						if (!GlobalFunc_111())
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 25:
					if (func_44("cs2_cop6"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 26:
					if (func_44("cs2_cop10"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 27:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == Local_1724[0 /*2*/])
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 28:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (func_493(5) && !func_491(6, 9))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 29:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 464.016f, -984.1805f, 42.06693f, 437.5317f, -984.9327f, 47.19193f, 28.0625f, 0, 1, 0))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 31:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1381.19f, -2065.85f, 50.9983f, 1) > 80f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 34:
					if (bLocal_2746)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_4043[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 35:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[4 /*14*/], 1) > 600f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 36:
					if (!Local_4043[iVar3 /*7*/].f_2 == 1)
					{
						if (func_152(0, 6))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 37:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (func_44("CS2_inst2"))
						{
							if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 1)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 38:
					if (func_59(&Local_2193, Local_1471[4 /*14*/]))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 39:
					if (func_400(4, 18))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 40:
					if (func_400(5, 19) || func_400(1, 15))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 41:
					if (func_400(5, 19))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 42:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (GlobalFunc_663("CH_INS7", 0, 0))
							{
								Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 3000;
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 43:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 483.1245f, -1176.624f, 40.7112f, 1) > 2250f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 44:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 483.1245f, -1176.624f, 40.7112f, 1) > 2650f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 45:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1377.2f, -2066.32f, 51f, 1) < 350f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 48:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
					{
						if (func_490(&Local_2193) == Local_1471[5 /*14*/])
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/], 1) < 300f)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 49:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if ((!PED::IS_PED_INJURED(Local_1471[8 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[9 /*14*/])) && !PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
					{
						if ((func_490(&Local_2193) == Local_1471[8 /*14*/] || func_490(&Local_2193) == Local_1471[9 /*14*/]) || func_490(&Local_2193) == Local_1471[7 /*14*/])
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[9 /*14*/], 1) < 300f)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 50:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 0))
							{
								if (func_59(&Local_2193, Local_1471[5 /*14*/]))
								{
									func_285(51, 0, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 0);
									Local_4043[iVar3 /*7*/].f_6 = MISC::GET_GAME_TIMER() + 2000;
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 1))
							{
								if (func_59(&Local_2193, Local_1471[8 /*14*/]))
								{
									func_285(51, 0, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 1);
									Local_4043[iVar3 /*7*/].f_6 = MISC::GET_GAME_TIMER() + 2000;
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 2))
							{
								if (func_59(&Local_2193, Local_1471[7 /*14*/]))
								{
									func_285(51, 0, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 2);
									Local_4043[iVar3 /*7*/].f_6 = MISC::GET_GAME_TIMER() + 2000;
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 3))
							{
								if (func_59(&Local_2193, Local_1471[9 /*14*/]))
								{
									func_285(51, 1, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 3);
									Local_4043[iVar3 /*7*/].f_6 = MISC::GET_GAME_TIMER() + 2000;
								}
							}
							if (Local_4043[iVar3 /*7*/].f_2)
							{
								if (((MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 0) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 1)) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 2)) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 3))
								{
									Local_4043[iVar3 /*7*/].f_2 = 0;
									Local_4043[iVar3 /*7*/].f_4 = 10;
								}
							}
							break;
						
						case 1:
							if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1471[1 /*14*/]) || MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_6)
							{
								Local_4043[iVar3 /*7*/].f_2 = 0;
								Local_4043[iVar3 /*7*/].f_4 = 2;
							}
							break;
						
						case 2:
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1471[1 /*14*/]) || MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_6)
							{
								Local_4043[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 52:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_44("CS2_arrive"))
							{
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (!func_44("CS2_arrive"))
							{
								Local_4043[iVar3 /*7*/].f_4++;
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 53:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -21.36739f, -54.06999f, 62.39728f, 0) < 180f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_4043[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 57:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 0))
							{
								if (func_59(&Local_2193, Local_1471[13 /*14*/]))
								{
									func_285(51, 1, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 0);
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 1))
							{
								if (func_59(&Local_2193, Local_1471[12 /*14*/]))
								{
									func_285(51, 0, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 1);
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 2))
							{
								if (func_59(&Local_2193, Local_1471[11 /*14*/]))
								{
									func_285(51, 0, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 2);
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 3))
							{
								if (func_59(&Local_2193, Local_1471[14 /*14*/]))
								{
									func_285(51, 0, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 3);
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 4))
							{
								if (func_59(&Local_2193, Local_1471[15 /*14*/]))
								{
									func_285(51, 0, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 4);
								}
							}
							if (!MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 5))
							{
								if (func_59(&Local_2193, Local_1471[10 /*14*/]))
								{
									func_285(51, 1, -1);
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4 = 1;
									MISC::SET_BIT(&(Local_4043[iVar3 /*7*/].f_5), 5);
								}
							}
							if (Local_4043[iVar3 /*7*/].f_2)
							{
								if (((((MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 0) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 1)) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 2)) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 3)) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 4)) && MISC::IS_BIT_SET(Local_4043[iVar3 /*7*/].f_5, 5))
								{
									Local_4043[iVar3 /*7*/].f_2 = 0;
									Local_4043[iVar3 /*7*/].f_4 = 10;
								}
							}
							break;
						
						case 1:
							if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1471[1 /*14*/]))
							{
								Local_4043[iVar3 /*7*/].f_2 = 0;
								Local_4043[iVar3 /*7*/].f_4 = 2;
							}
							break;
						
						case 2:
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1471[1 /*14*/]))
							{
								Local_4043[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 58:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[13 /*14*/]))
					{
						if (func_490(&Local_2193) == Local_1471[13 /*14*/])
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[13 /*14*/], 1) < 300f)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 59:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						if (func_490(&Local_2193) == Local_1471[3 /*14*/])
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[3 /*14*/], 1) < 300f)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 55:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (iLocal_3938 != -1)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 61:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (func_57(60))
					{
						if (Local_2193.f_132)
						{
							if (Local_4043[iVar3 /*7*/].f_5 == 0)
							{
								Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 1000;
							}
							if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
						else
						{
							Local_4043[iVar3 /*7*/].f_5 = 0;
						}
					}
					break;
				
				case 62:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[3 /*14*/]))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 63:
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						switch (Local_4043[iVar3 /*7*/].f_4)
						{
							case 0:
								Local_4043[iVar3 /*7*/].f_2 = 0;
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[3 /*14*/]))
								{
									Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER();
									Local_4043[iVar3 /*7*/].f_4++;
								}
								break;
							
							case 1:
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[3 /*14*/]))
								{
									if ((MISC::GET_GAME_TIMER() - Local_4043[iVar3 /*7*/].f_5) > 4000)
									{
										Local_4043[iVar3 /*7*/].f_2 = 1;
									}
								}
								else
								{
									Local_4043[iVar3 /*7*/].f_4 = 0;
								}
								break;
							}
					}
					break;
				
				case 64:
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						if (!Local_4043[iVar3 /*7*/].f_2)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1471[3 /*14*/], 193.6183f, -152.2327f, 55.38898f, 213.027f, -159.062f, 61.17544f, 6.5f, 0, 1, 0))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 65:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1471[3 /*14*/], 207.9651f, -151.0931f, 59.59906f, 215.8107f, -151.3504f, 76.99492f, 20.75f, 0, 1, 0))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 66:
					if (fLocal_3932 > 0.05f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 68:
					Local_4043[iVar3 /*7*/].f_2 = 1;
					break;
				
				case 69:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(Local_1724[0 /*2*/], 1) };
						if (Var4.f_2 < 100f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 70:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[1 /*2*/]))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 71:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1471[4 /*14*/], -1273.912f, -226.1183f, 49.92462f, -1276.218f, -222.831f, 52.17462f, 4.8125f, 0, 1, 0))
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1471[4 /*14*/]))
								{
									Local_4043[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 72:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						switch (Local_4043[iVar3 /*7*/].f_4)
						{
							case 0:
								if (MISC::ARE_STRINGS_EQUAL(&Local_4302, "cs2_clear"))
								{
									Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 3000;
									Local_4043[iVar3 /*7*/].f_4++;
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
								{
									Local_4043[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 73:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_44("cs2_flylow"))
							{
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (!func_44("cs2_flylow"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 74:
					if (func_44("CS2_Carpark3"))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 1)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 75:
					if (MISC::ARE_STRINGS_EQUAL(&Local_4302, "cs2_onme"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 76:
					if (func_400(6, 43))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 77:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (MISC::ARE_STRINGS_EQUAL(&Local_4302, "cs2_looknow"))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 93:
					if (MISC::ARE_STRINGS_EQUAL(&Local_4302, "CS2_manc1"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 78:
					if (MISC::ARE_STRINGS_EQUAL(&Local_4302, "cs2_mana3"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case joaat("mpsv_lp0_31"):
					if (MISC::ARE_STRINGS_EQUAL(&Local_4302, "cs2_mand2b"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 80:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_208(12, 51))
							{
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (!func_44("cs2_manc2"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 81:
					if (MISC::ARE_STRINGS_EQUAL(&Local_4302, "cs2_seen"))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 82:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1724[0 /*2*/], -1324.085f, -217.1747f, 42.19214f, -1297.746f, -256.1964f, 62.78251f, 19.1875f, 0, 1, 0))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 83:
					if (bLocal_3162)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 84:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (bLocal_3162)
						{
							if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
							{
								if (GlobalFunc_2517(ENTITY::GET_ENTITY_COORDS(Local_1471[4 /*14*/], 0), 0f, 0f, 1f, 1f))
								{
									if (Local_2193.f_40 < 25f)
									{
										Local_4043[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				
				case 85:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (func_57(99) && func_57(92))
						{
							if (((((func_488(5) && !func_488(6)) && !func_488(4)) && !func_488(3)) && !func_488(8)) && !func_488(7))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
								Local_4043[iVar3 /*7*/].f_4++;
							}
						}
					}
					break;
				
				case 86:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (func_57(99) && func_57(92))
						{
							if (((((func_488(6) && !func_488(5)) && !func_488(4)) && !func_488(3)) && !func_488(8)) && !func_488(7))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
								Local_4043[iVar3 /*7*/].f_4++;
							}
						}
					}
					break;
				
				case 87:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (func_57(99) && func_57(92))
						{
							if (((((func_488(3) && !func_488(5)) && !func_488(6)) && !func_488(4)) && !func_488(8)) && !func_488(7))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 88:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (func_57(99) && func_57(92))
						{
							if ((((func_488(8) && !func_488(5)) && !func_488(6)) && !func_488(4)) && !func_488(7))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 89:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (func_57(99) && func_57(92))
						{
							if ((((func_488(7) && !func_488(8)) && !func_488(5)) && !func_488(6)) && !func_488(4))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 100:
					if (func_57(99))
					{
						iVar7 = 0;
						if (func_57(87))
						{
							iVar7++;
						}
						if (func_57(86))
						{
							iVar7++;
						}
						if (func_57(85))
						{
							iVar7++;
						}
						if (func_57(88))
						{
							iVar7++;
						}
						if (func_57(89))
						{
							iVar7++;
						}
						if (iVar7 > Local_4043[iVar3 /*7*/].f_5)
						{
							Local_4043[iVar3 /*7*/].f_5 = iVar7;
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					if (func_57(101))
					{
						Local_4043[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 101:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if ((((func_44("cs2_manb1") || func_44("cs2_manb1b")) || func_44("cs2_manc1")) || func_44("cs2_mana1")) || func_44("cs2_mane1"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (((func_44("cs2_mana3") || func_44("cs2_mand2b")) || func_44("cs2_mane2")) || func_44("cs2_manb2b"))
							{
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 2:
							if (((!func_44("cs2_mana3") && !func_44("cs2_mand2b")) && !func_44("cs2_mane2")) && !func_44("cs2_manb2b"))
							{
								Local_4043[iVar3 /*7*/].f_2 = 0;
								func_487(3, 15, 0);
								Local_4043[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 95:
					break;
				
				case 96:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_57(101))
							{
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (!func_57(101))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
					}
					break;
				
				case 98:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misscarsteal2switch", "_ground_franklin", 3))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 99:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (GlobalFunc_663("CH_INS32b", 0, 0))
							{
								Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
							{
								Local_4043[iVar3 /*7*/].f_4++;
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
						
						case 2:
							if (func_57(100))
							{
								Local_4043[iVar3 /*7*/].f_2 = 0;
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 3:
							if (func_57(101))
							{
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 4:
							if (func_232(101) && func_232(97))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
								Local_4043[iVar3 /*7*/].f_4 = 2;
							}
							break;
					}
					break;
				
				case 92:
					if (func_400(6, 43))
					{
						if (bLocal_3162)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_4043[iVar3 /*7*/].f_2 = 0;
						}
					}
					break;
				
				case 104:
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[3 /*14*/], 1785177548) == 2)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 105:
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3111) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3111) > 0.766f) || func_57(106)) || func_57(104))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 106:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
						{
							if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
							{
								if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), Local_1471[3 /*14*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), Local_1471[3 /*14*/]))
								{
									if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3111) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3111) > 0.35f) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[3 /*14*/], 1) < 4f)
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1471[3 /*14*/], 0))
										{
											Local_4043[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					break;
				
				case 108:
					if (!func_57(127))
					{
						if (func_57(107) || func_57(128))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 110:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1465, 1) < 200f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 109:
					if (func_152(1, 18) && func_486(1, 18) == 3)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 111:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1307.389f, -189.8944f, 38.63548f, -1263.045f, -251.5144f, 64.20932f, 41.3125f, 0, 1, 0))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 107:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
							{
								Local_4043[iVar3 /*7*/].f_5 = ENTITY::GET_ENTITY_HEALTH(Local_1471[3 /*14*/]);
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
							{
								if (ENTITY::GET_ENTITY_HEALTH(Local_1471[3 /*14*/]) < Local_4043[iVar3 /*7*/].f_5)
								{
									Local_4043[iVar3 /*7*/].f_2 = 1;
								}
							}
							else
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 128:
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						if (!Local_4043[iVar3 /*7*/].f_2)
						{
							if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[3 /*14*/], 1) < 20f) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1471[3 /*14*/], 1), 10f, 1, 1))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 112:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						if (PED::IS_PED_RAGDOLL(Local_1471[3 /*14*/]))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 113:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 1))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 115:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (Local_4043[iVar3 /*7*/].f_6 == 0)
						{
							if (GlobalFunc_116(0) || func_44("cs2_call"))
							{
								Local_4043[iVar3 /*7*/].f_6 = 1;
							}
						}
						else if (!func_44("cs2_call") && !GlobalFunc_116(0))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
						if (func_208(8, 73))
						{
							if (Local_4043[iVar3 /*7*/].f_5 == 0)
							{
								if (func_44("cs2_call") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 3)
								{
									Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 3000;
								}
							}
							else if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 114:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
					{
						if ((func_208(4, 74) || GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(Local_1724[2 /*2*/], 1), 2, 0, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1724[2 /*2*/], -1007.526f, -2845.614f, 11.76614f, -968.9106f, -2777.963f, 20.38244f, 12.3125f, 0, 1, 0))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 116:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_57(113))
							{
								Local_4043[iVar3 /*7*/].f_4++;
								Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 5000;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 117:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
					{
						if (PED::IS_PED_DEAD_OR_DYING(Local_1471[3 /*14*/], 1))
						{
							GlobalFunc_585(76, 1);
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
						else if (GlobalFunc_485(76))
						{
							GlobalFunc_585(76, 0);
						}
					}
					if (GlobalFunc_485(76))
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 118:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1285.907f, -225.3947f, 48.2642f, 1) > 100f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 119:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1462, 1) < 30f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 120:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1462, 1) < 200f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 121:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1458, 1) < 300f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 122:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1458, 1) < 100f)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 123:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
					{
						Local_4043[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 125:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 126:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (GlobalFunc_663("CH_INS53", 0, 0))
							{
								Local_4043[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (!GlobalFunc_663("CH_INS53", 0, 0))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 127:
					if (func_491(11, 57))
					{
						if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_1471[3 /*14*/], Local_1724[2 /*2*/], 0))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 1) > 20f)
								{
									Local_4043[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 129:
					if (!PED::IS_PED_INJURED(iLocal_2747) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
					{
						Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_2747, 1) };
						if (GlobalFunc_4966(Local_1724[2 /*2*/], Var8 - Vector(1f, 0.5f, 0.5f), Var8 + Vector(1f, 0.5f, 0.5f), 1f) || GlobalFunc_156(iLocal_2747, Local_1724[2 /*2*/], 1) < 3.5f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 130:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
					{
						switch (Local_4043[iVar3 /*7*/].f_4)
						{
							case 0:
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[0 /*2*/], PLAYER::PLAYER_PED_ID(), 1))
								{
									Local_4043[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 3000;
									Local_4043[iVar3 /*7*/].f_2 = 1;
									Local_4043[iVar3 /*7*/].f_4++;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1724[0 /*2*/]);
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_4043[iVar3 /*7*/].f_5)
								{
									Local_4043[iVar3 /*7*/].f_4 = 0;
									Local_4043[iVar3 /*7*/].f_2 = 0;
								}
								break;
							}
					}
					break;
				
				case 140:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 131:
					switch (Local_4043[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_400(10, 62))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									Local_4043[iVar3 /*7*/].f_5 = ENTITY::GET_ENTITY_HEALTH(Local_1724[2 /*2*/]);
									Local_4043[iVar3 /*7*/].f_4++;
								}
							}
							break;
						
						case 1:
							if (ENTITY::GET_ENTITY_HEALTH(Local_1724[2 /*2*/]) < (Local_4043[iVar3 /*7*/].f_5 - 50))
							{
								Local_4043[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 132:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -991.5975f, -3022.643f, 12.9451f, 1) < 7f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 134:
					if (!Local_4043[iVar3 /*7*/].f_2)
					{
						if (func_232(123))
						{
							if (func_57(133))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									fVar11 = ENTITY::GET_ENTITY_SPEED(Local_1724[2 /*2*/]);
									if (GlobalFunc_713(Local_1724[2 /*2*/], -990.65f, -3016.24f, 12.94f, 1) < 4.5f)
									{
										bVar13 = true;
									}
									if (GlobalFunc_713(Local_1724[2 /*2*/], -991.17f, -3023.55f, 12.94f, 1) < (4.5f + (fVar11 * 0.25f)))
									{
										iVar12 = 1;
									}
									if (bVar13 || iVar12)
									{
										fVar15 = GlobalFunc_713(Local_1724[2 /*2*/], -990.65f, -3016.24f, 12.94f, 1);
										fVar16 = 4.5f;
										fVar17 = MISC::ATAN((fVar16 / fVar15));
										fVar18 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_1724[2 /*2*/]) - GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(Local_1724[2 /*2*/], 1), -990.65f, -3016.24f, 12.94f, 1)));
										if (fVar18 > 180f)
										{
											fVar18 = MISC::ABSF((fVar18 - 360f));
										}
										if (fVar18 < fVar17)
										{
											bVar14 = true;
										}
										if (iVar12 && !bVar14)
										{
											func_285(136, 1, -1);
											CUTSCENE::REMOVE_CUTSCENE();
											CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("Car_2_mcs_1", 3, 8);
											func_483(7, 67, 1);
											Local_4043[iVar3 /*7*/].f_2 = 1;
										}
										else if (bVar13)
										{
											func_285(137, 1, -1);
											Local_4043[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					break;
				
				case 135:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
					{
						if (func_57(134))
						{
							if (func_232(123))
							{
								if (ENTITY::GET_ENTITY_SPEED(Local_1724[2 /*2*/]) < 0.1f)
								{
									Local_4043[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 133:
					Local_4043[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
					{
						if (GlobalFunc_713(Local_1724[2 /*2*/], -978.4459f, -3028.967f, 12.94487f, 1) < 30f)
						{
							Local_4043[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				}
		}
		iVar3++;
	}
}

void func_483(int iParam0, int iParam1, int iParam2)//Position - 0x405D7
{
	char cVar0[64];
	
	if (Local_4434[iParam0 /*10*/] == iParam1)
	{
		Local_4434[iParam0 /*10*/].f_6 = iParam2;
	}
	else
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "SET_ACTION_FLAG() fail:", 64);
	}
}



int func_486(int iParam0, int iParam1)//Position - 0x4067B
{
	char cVar0[64];
	
	if (Local_4018[iParam0 /*4*/] == iParam1)
	{
		return Local_4018[iParam0 /*4*/].f_2;
	}
	else if (Local_4018[iParam0 /*4*/] != 0)
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "IS_INS_COM() fail:", 64);
		StringConCat(&cVar0, func_153(iParam1), 64);
	}
	return 0;
}

void func_487(int iParam0, int iParam1, int iParam2)//Position - 0x406C3
{
	char cVar0[64];
	
	if (Local_4018[iParam0 /*4*/] == iParam1)
	{
		Local_4018[iParam0 /*4*/].f_2 = iParam2;
	}
	else if (Local_4018[iParam0 /*4*/] != 0)
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "IS_INS_COM() fail:", 64);
		StringConCat(&cVar0, func_153(iParam1), 64);
	}
}

int func_488(int iParam0)//Position - 0x40709
{
	float fVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
	{
		if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1471[iParam0 /*14*/], 1), &fVar0, &fVar1))
		{
			if (((fVar0 > 0.3f && fVar0 < 0.7f) && fVar1 > 0.3f) && fVar1 < 0.7f)
			{
				if (Local_2193.f_40 < 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_490(var uParam0)//Position - 0x407BA
{
	if (uParam0->f_171 != -1)
	{
		if (uParam0->f_40 < 15f)
		{
			return uParam0->f_298[uParam0->f_171 /*11*/];
		}
	}
	return 0;
}

int func_491(int iParam0, int iParam1)//Position - 0x407E6
{
	if (Local_4434[iParam0 /*10*/] == iParam1)
	{
		if (Local_4434[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}


int func_493(int iParam0)//Position - 0x4081D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4434)
	{
		if (Local_4434[iVar0 /*10*/] == iParam0)
		{
			if (Local_4434[iVar0 /*10*/].f_1 == 1 && Local_4434[iVar0 /*10*/].f_2 == 1)
			{
				if (Local_4434[iVar0 /*10*/].f_3 == 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_494()//Position - 0x40875
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_1753)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(514.6334f, -1321.992f, 25.63152f, 502.8224f, -1297.021f, 37.44407f, 19.3125f, 0, 0, 1);
			func_804(12);
			func_503();
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REQUEST_CUTSCENE("Car_2_mcs_1", 8);
			}
			iLocal_1753 = 1;
			break;
		
		case 1:
			if ((!PED::IS_PED_INJURED(iLocal_2747) && !PED::IS_PED_INJURED(Local_1471[6 /*14*/])) && !PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", iLocal_2747, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Car_2_Security", Local_1471[6 /*14*/], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Car_2_Security^1", Local_1471[7 /*14*/], 0);
				}
			}
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[2 /*2*/], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1724[2 /*2*/], "Car2_ztype", 1, joaat("ztype"), 0);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[2 /*2*/], 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[13 /*2*/], 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1724[13 /*2*/], "Car_2_Tailgater", 0, joaat("tailgater"), 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1471[9 /*14*/], "Car_2_Pilot", 2, joaat("s_m_m_pilot_01"), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[12 /*2*/], 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1724[12 /*2*/], "Car_2_Tailgater^1", 0, joaat("tailgater"), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[4 /*2*/], 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1724[4 /*2*/], "Car_2_Tailgater^2", 0, joaat("tailgater"), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1724[5 /*2*/], "Car_2_Shamal", 0, joaat("shamal"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_1471[6 /*14*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1471[6 /*14*/], "Car_2_Security", 0, joaat("s_m_y_devinsec_01"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1471[7 /*14*/], "Car_2_Security^1", 0, joaat("s_m_y_devinsec_01"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1471[8 /*14*/], "Molly", 0, joaat("ig_molly"), 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_2747))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2747, "Devin", 0, joaat("ig_devin"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[1 /*14*/]));
				}
				if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[2 /*14*/]));
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_1724[0 /*2*/]));
				}
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 1, 0, 0, 0);
				func_826(40);
				GlobalFunc_8380(1, 1, 1, 0);
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				MISC::CLEAR_AREA_OF_PEDS(482.2777f, -1315.616f, 29.971f, 50f, 0);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
				AUDIO::STOP_AUDIO_SCENE("CAR_2_STEAL_THE_CAR");
				iLocal_1753 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
				{
					VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_1724[2 /*2*/], 0);
					VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_1724[2 /*2*/], 1);
					VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_1724[2 /*2*/], 4);
					VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_1724[2 /*2*/], 5);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_495(0);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				iLocal_1753 = 3;
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1471[9 /*14*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Car_2_Pilot", 0)))
				{
					Local_1471[9 /*14*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Car_2_Pilot", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car2_ztype", joaat("ztype")))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_1724[2 /*2*/]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Devin", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_2747))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2747, Local_1724[5 /*2*/], 2);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2747, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Molly", 0))
			{
				if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_1471[8 /*14*/], Local_1724[5 /*2*/], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[8 /*14*/], 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_2_Security", 0))
			{
				if (!PED::IS_PED_INJURED(Local_1471[6 /*14*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_1471[6 /*14*/], Local_1724[5 /*2*/], 5);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[6 /*14*/], 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_2_Security^1", 0))
			{
				if (!PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_1471[7 /*14*/], Local_1724[5 /*2*/], 7);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[7 /*14*/], 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_2_Pilot", 0))
			{
				if (!PED::IS_PED_INJURED(Local_1471[9 /*14*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_1471[9 /*14*/], Local_1724[5 /*2*/], -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[9 /*14*/], 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
				GlobalFunc_8380(0, 1, 1, 0);
				CUTSCENE::REMOVE_CUTSCENE();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[5 /*2*/], 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[5 /*2*/], 2);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_1724[5 /*2*/], 1);
				}
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_1397))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1397);
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x40E0C
{
	if (iParam0 == 1)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return 1;
		}
	}
	return 0;
}








void func_503()//Position - 0x41059
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_1928 - 1))
	{
		Local_1928[iVar0 /*12*/] = 0;
		Local_1928[iVar0 /*12*/].f_1 = -1;
		Local_1928[iVar0 /*12*/].f_2 = -1;
		Local_1928[iVar0 /*12*/].f_3 = 0;
		Local_1928[iVar0 /*12*/].f_5 = -1;
		Local_1928[iVar0 /*12*/].f_10 = 0;
		iVar0++;
	}
	HUD::CLEAR_HELP(1);
	GlobalFunc_5385(1);
}



int func_506()//Position - 0x41153
{
	func_482(103, 138);
	func_160(0, 17, 3, 113, 1, 0, 1, 0);
	func_160(1, 18, 2, 113, 1, 0, 1, 0);
	func_160(3, 19, 2, 114, 1, 0, 1, 0);
	func_509(0, 66, 3, 104, 5, 112, 5, 106, 5, 108);
	func_509(1, 65, 2, 106, 6, 104, 5, 112, 5, 108);
	func_509(2, 67, 2, 107, 4, 111, 1, 0, 1, 0);
	func_509(13, 68, 3, 107, 4, 128, 4, 111, 1, 0);
	func_509(3, 69, 2, 113, 5, 108, 1, 0, 1, 0);
	func_509(4, 74, 2, 109, 1, 0, 1, 0, 1, 0);
	func_509(8, 73, 2, 113, 4, 116, 1, 0, 1, 0);
	func_508(5, 71, 10, 62, 2, 118, 5, 117, 4, 125);
	func_509(6, 72, 2, 117, 5, 118, 1, 0, 1, 0);
	func_509(9, 61, 2, 130, 1, 0, 1, 0, 1, 0);
	func_508(10, 62, 8, 73, 0, 0, 1, 0, 1, 0);
	func_508(11, 63, 10, 62, 2, 131, 1, 0, 1, 0);
	func_509(12, 64, 2, 132, 5, 125, 5, 137, 1, 0);
	func_233(0, 61, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(1, 69, 0, 2, 125, 1, 0, 1, 0, 1, 0);
	func_233(2, 70, 0, 2, 118, 1, 0, 1, 0, 1, 0);
	func_233(3, 71, 0, 2, 121, 1, 0, 1, 0, 1, 0);
	func_233(4, 72, 0, 2, 110, 1, 0, 1, 0, 1, 0);
	func_507(5, 73, 4, 74);
	func_233(7, 67, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(8, 66, 0, 2, 113, 5, 108, 1, 0, 1, 0);
	func_233(9, 65, 1, 2, 105, 5, 112, 5, 108, 1, 0);
	func_233(10, 64, 0, 2, 108, 1, 0, 1, 0, 1, 0);
	func_233(11, 57, 1, 3, 104, 5, 106, 1, 0, 1, 0);
	func_233(12, 62, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(13, 63, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(14, 74, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(15, 75, 0, 2, 125, 4, 134, 5, 123, 1, 0);
	func_233(16, 76, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_154(10);
	func_154(11);
	func_154(12);
	func_154(13);
	func_154(14);
	func_154(15);
	func_154(16);
	if (iLocal_4015 == 0)
	{
		if (func_57(120) && !func_57(123))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2767))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2767) > 0.685f)
				{
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CAR2_STOP");
						return 1;
					}
				}
			}
			if (func_57(129))
			{
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CAR2_STOP");
					return 1;
				}
			}
			if (func_57(136))
			{
				if (func_57(135))
				{
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CAR2_STOP");
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_507(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4142E
{
	if (Local_4434[iParam0 /*10*/] != iParam1 || Local_4434[iParam0 /*10*/].f_1 == 0)
	{
		Local_4434[iParam0 /*10*/] = iParam1;
		Local_4434[iParam0 /*10*/].f_1 = 1;
		Local_4434[iParam0 /*10*/].f_3 = 0;
		Local_4434[iParam0 /*10*/].f_6 = 0;
		Local_4434[iParam0 /*10*/].f_2 = 0;
		Local_4434[iParam0 /*10*/].f_4 = 0;
		Local_4434[iParam0 /*10*/].f_7 = 0;
	}
	if (Local_4434[iParam0 /*10*/].f_3 == 0)
	{
		if (Local_4308[iParam2 /*5*/].f_1)
		{
			iParam3 = iParam3;
			func_233(iParam0, iParam1, 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
	}
}

void func_508(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x414C7
{
	if (Local_4308[iParam0 /*5*/] != iParam1)
	{
		Local_4308[iParam0 /*5*/].f_1 = 0;
		Local_4308[iParam0 /*5*/] = iParam1;
	}
	if (!Local_4308[iParam0 /*5*/].f_1)
	{
		if (func_400(iParam2, iParam3))
		{
			func_509(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

void func_509(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x4151C
{
	struct<3> Var0;
	struct<3> Var6;
	
	if (Local_4308[iParam0 /*5*/] != iParam1)
	{
		Local_4308[iParam0 /*5*/].f_1 = 0;
		Local_4308[iParam0 /*5*/] = iParam1;
	}
	if (!Local_4308[iParam0 /*5*/].f_1)
	{
		if (func_228(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) && !bLocal_2111)
		{
			if (!Local_4308[iParam0 /*5*/].f_2)
			{
				Local_4308[iParam0 /*5*/].f_2 = 1;
			}
			switch (Local_4308[iParam0 /*5*/])
			{
				case 1:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							func_40(0, PLAYER::PLAYER_PED_ID(), "Trevor");
							func_40(4, Local_1471[5 /*14*/], "cs2_copA");
							if (GlobalFunc_10691(&Local_1759, "CST2AUD", "cs2_cop1", 7, 0, 0, 0, 0))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_57(4))
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_2207();
								if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_1471[5 /*14*/], PLAYER::PLAYER_PED_ID(), 16000, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1471[5 /*14*/], 16000, 0, 2);
								}
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (func_44("cs2_cop1"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!func_44("cs2_cop1"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_235(4, "cs2_cop5", 4, Local_1471[5 /*14*/], "cs2_cop1", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							switch (Local_4308[iParam0 /*5*/].f_4)
							{
								case 0:
								case 2:
								case 4:
								case 6:
									if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[8 /*14*/], 1) < 5f)
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_1471[8 /*14*/], "CHALLENGE_THREATEN", "S_M_Y_Cop_01_WHITE_FULL_02", "SPEECH_PARAMS_FORCE", 0);
											Local_4308[iParam0 /*5*/].f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
										}
									}
									break;
								
								case 8:
									if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[8 /*14*/], 1) < 6f)
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1471[8 /*14*/], PLAYER::PLAYER_PED_ID(), -1);
											Local_4308[iParam0 /*5*/].f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
											if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
											{
												TASK::TASK_LOOK_AT_ENTITY(Local_1471[11 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
											}
										}
									}
									break;
								
								case 9:
									if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[8 /*14*/], 1) < 6f)
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_1471[8 /*14*/], "PROVOKE_STARING", "S_M_Y_Cop_01_WHITE_FULL_02", "SPEECH_PARAMS_FORCE", 0);
											Local_4308[iParam0 /*5*/].f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000));
										}
									}
									break;
								
								case 10:
									if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[8 /*14*/], 1) < 6f)
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_1471[8 /*14*/], "PROVOKE_STARING", "S_M_Y_Cop_01_WHITE_FULL_02", "SPEECH_PARAMS_FORCE", 0);
											Local_4308[iParam0 /*5*/].f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
										}
									}
									break;
								
								case 11:
									if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[8 /*14*/], 1) < 6f)
										{
											func_480();
											TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0);
											TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
											func_479(Local_1471[8 /*14*/], 0);
											Local_4308[iParam0 /*5*/].f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
										}
									}
									break;
								
								case 1:
								case 3:
								case 5:
									if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[11 /*14*/], 1) < 5f)
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_1471[11 /*14*/], "GUN_BEG", "A_M_Y_BevHills_02_Black_FULL_01", "SPEECH_PARAMS_FORCE", 0);
											Local_4308[iParam0 /*5*/].f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
										}
									}
									break;
								
								case 7:
									if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1471[11 /*14*/], 1) < 5f)
										{
											AUDIO::PLAY_PAIN(Local_1471[11 /*14*/], 25, 0, 0);
											Local_4308[iParam0 /*5*/].f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
										}
									}
									break;
							}
							break;
						
						default:
							if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_3)
							{
								Local_4308[iParam0 /*5*/].f_4++;
								Local_4308[iParam0 /*5*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 4:
					if (func_235(4, "cs2_cop8", 4, Local_1471[5 /*14*/], "cs2_cop1", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 5:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							GlobalFunc_5105();
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (func_235(4, "cs2_cop6", 4, Local_1471[5 /*14*/], "cs2_cop1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 100;
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
							{
								if (func_235(4, "cs2_cop7", 2, Local_1471[2 /*14*/], "chopperPilot", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 7:
					if (func_235(4, "cs2_cop8", 4, Local_1471[5 /*14*/], "cs2_cop1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 8:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							func_158(0);
							if (!PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
							{
								TASK::TASK_ARREST_PED(Local_1471[7 /*14*/], PLAYER::PLAYER_PED_ID());
							}
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (func_235(4, "CST2_NOGO", 7, Local_1471[7 /*14*/], "cs2_cop4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
								PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
								PLAYER::SET_MAX_WANTED_LEVEL(5);
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
							}
							break;
						
						case 2:
							if (func_235(4, "CST2_GUN", 7, Local_1471[7 /*14*/], "cs2_cop4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8) || MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 9:
					HUD::CLEAR_PRINTS();
					if (func_235(4, "cs2_cop10", 2, Local_1471[2 /*14*/], "chopperPilot", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 10:
					GlobalFunc_5105();
					if (func_235(4, "CST2_SEES", 5, Local_1471[8 /*14*/], "cs2_cop1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 11:
					if (func_44("cs2_cop5"))
					{
						cLocal_3943 = { GlobalFunc_514() };
						GlobalFunc_5105();
					}
					if (func_235(4, "cs2_cop8", 4, Local_1471[5 /*14*/], "cs2_cop1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 12:
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3943))
					{
						if (func_26(4, "cs2_cop5", &cLocal_3943, 4, Local_1471[5 /*14*/], "cs2_cop1", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 7))
						{
							Local_4308[iParam0 /*5*/].f_1 = 1;
						}
					}
					else
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 13:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_44("CS2_chopper"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (GlobalFunc_663("CH_INS40", 0, 0))
							{
								Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						default:
							if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
							{
								if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (func_235(4, "cs2_switch", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_4308[iParam0 /*5*/].f_3++;
										Local_4308[iParam0 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 5000 + Local_4308[iParam0 /*5*/].f_3 * 2000);
										if (Local_4308[iParam0 /*5*/].f_3 >= 5)
										{
											Local_4308[iParam0 /*5*/].f_1 = 1;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 14:
					if (func_235(4, "CS2_inst2", 2, 0, "chopperPilot", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 15:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(4, "cs2_friend", 2, Local_1471[2 /*14*/], "chopperPilot", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_friend"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (!func_44("cs2_friend"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(3, "cs2_chat1", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_chat1"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (func_235(3, "cs2_chat2", 2, 0, "chopperPilot", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 3:
							if (!GlobalFunc_111())
							{
								if (func_235(3, "cs2_chat3", 2, 0, "chopperPilot", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
								}
							}
							break;
						
						case 4:
							if (!GlobalFunc_111())
							{
								if (func_235(3, "cs2_chat4", 2, 0, "chopperPilot", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 17:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(4, "cs2_seefr", 2, Local_1471[2 /*14*/], "chopperPilot", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_seefr"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (!func_44("cs2_seefr"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 1000;
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_2_HELI_CAM_TUTORIAL");
								AUDIO::START_AUDIO_SCENE("CAR_2_SCAN_FRANKLIN");
								if (func_235(4, "cs2_teach", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
								}
							}
							break;
						
						case 2:
							if (func_44("cs2_teach"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 3:
							if (!func_44("cs2_teach"))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_2_SCAN_FRANKLIN");
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 19:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(4, "cs2_tresp", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_tresp"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (!func_44("cs2_tresp"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(4, "cs2_actor", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "ChopperPilot", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_actor"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (!func_44("cs2_actor"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 21:
					if (func_235(4, "cs2_wrong", 2, 0, "ChopperPilot", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						default:
							if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
							{
								if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[4 /*14*/]))
									{
										if (func_235(4, "cs2_noscan", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
											Local_4308[iParam0 /*5*/].f_3++;
											if (Local_4308[iParam0 /*5*/].f_3 >= 6)
											{
												Local_4308[iParam0 /*5*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_26(3, "cs2_seetheft", "cs2_seetheft_2", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "ChopperPilot", -1, 0, 0, -1, 0, 0, 7))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_235(3, "cs2_seeRoof", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "ChopperPilot", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 27:
					if (func_57(51))
					{
						GlobalFunc_5117(Local_1471[1 /*14*/], "CST2_AIAA", "Trevor", 4);
						if (iLocal_1419 == 4)
						{
							func_285(50, 0, 0);
						}
						else
						{
							func_285(57, 0, 0);
						}
						Local_4308[iParam0 /*5*/].f_4++;
						if (Local_4308[iParam0 /*5*/].f_4 == 5)
						{
							Local_4308[iParam0 /*5*/].f_1 = 1;
						}
					}
					else
					{
						GlobalFunc_5117(Local_1471[1 /*14*/], "CST2_AHAA", "Trevor", 4);
						if (iLocal_1419 == 4)
						{
							func_285(50, 0, 0);
						}
						else
						{
							func_285(57, 0, 0);
						}
						Local_4308[iParam0 /*5*/].f_4++;
						if (Local_4308[iParam0 /*5*/].f_4 == 5)
						{
							Local_4308[iParam0 /*5*/].f_1 = 1;
						}
					}
					break;
				
				case 25:
					if (GlobalFunc_713(Local_1471[13 /*14*/], 187.9382f, -160.1809f, 55.31756f, 0) < 1.5f)
					{
						if (func_235(3, "cs2_posie", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "ChopperPilot", -1, 0, 0, -1, 0, 0, 8))
						{
							Local_4308[iParam0 /*5*/].f_1 = 1;
						}
					}
					else
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_235(3, "cs2_lookChad", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 28:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 1800;
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
							{
								if (func_235(4, "CS2_seeChad", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
								}
							}
							break;
						
						case 2:
							if (!func_44("CS2_seeChad"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 29:
					GlobalFunc_5105();
					if (func_235(4, "cs2_nochad", 0, Local_1471[1 /*14*/], "Trevor", 2, Local_1471[2 /*14*/], "ChopperPilot", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 30:
					if (func_235(4, "CS2_seeChad2", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 31:
					GlobalFunc_5105();
					if (func_515(4, "CS2_tmp36", "CS2_tmp36_4", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 7))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 32:
					if (func_57(63))
					{
						if (func_515(4, "CS2_find", "CS2_find_5", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 7))
						{
							Local_4308[iParam0 /*5*/].f_1 = 1;
						}
					}
					else
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 33:
					if (func_515(4, "CS2_found", "CS2_found_3", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 7))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 34:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() < Local_4308[iParam0 /*5*/].f_4)
							{
								if (iLocal_3938 == -1)
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										if (func_235(1, "cs2_ChadView", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_4308[iParam0 /*5*/].f_1 = 1;
										}
									}
								}
							}
							else
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 35:
					if (func_235(4, "CS2_seeChad3", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 36:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 1700;
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
							{
								if (func_235(4, "cs2_flylow", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
						
						case 2:
							Local_4308[iParam0 /*5*/].f_1 = 1;
							break;
					}
					break;
				
				case 37:
					if (func_235(4, "cs2_down", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "chopperPilot", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 38:
					if (func_235(4, "cs2_clear", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "chopperPilot", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 39:
					if (func_235(4, "CS2_Carpark3", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "ChopperPilot", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 40:
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_235(4, "CS2_Carpark4", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_4308[iParam0 /*5*/].f_1 = 1;
						}
					}
					break;
				
				case 41:
					if (func_235(4, "cs2_onme", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 42:
					if (func_235(4, "cs2_seen", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 43:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(4, "cs2_looknow", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_looknow"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (!func_44("cs2_looknow"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 44:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (GlobalFunc_663("CH_INS32c", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							func_285(95, 1, -1);
							if (func_235(4, "cs2_manb1", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_manb1"))
							{
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 1)
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 46:
					if (GlobalFunc_663("CH_INS32c", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(4, "CS2_manc1", 0, Local_1471[1 /*14*/], "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("CS2_manc1"))
							{
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 1)
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 60:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_515(4, "cs2_IG15", "cs2_IG15_1", 0, 0, "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 7))
							{
								Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 200;
								Local_4308[iParam0 /*5*/].f_3 = 1;
							}
							break;
						
						case 1:
							if (func_44("cs2_IG15"))
							{
								if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 61:
					if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
					{
						if (func_235(4, "cs2_franksh", 2, Local_1471[2 /*14*/], "chopperPilot", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_4308[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							Local_4308[iParam0 /*5*/].f_3++;
							if (Local_4308[iParam0 /*5*/].f_3 == 3)
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
						}
					}
					break;
				
				case 62:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (GlobalFunc_663("CH_INS53", 0, 0))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (!func_57(123))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							else
							{
								func_514(5, 71, 1);
							}
							break;
						
						case 2:
							if (func_235(4, "cs2_franwh", 1, PLAYER::PLAYER_PED_ID(), "Franklin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 3:
							if (func_235(4, "cs2_radio", 0, 0, "Trevor", 1, PLAYER::PLAYER_PED_ID(), "Franklin", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 4:
							if (func_44("cs2_radio"))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 5:
							if (!func_44("cs2_radio"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 63:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_44("cs2_radio"))
							{
								Local_3955 = { GlobalFunc_514() };
								GlobalFunc_4956();
								MISC::SET_BIT(&(Local_4308[iParam0 /*5*/].f_4), 0);
								Local_4308[iParam0 /*5*/].f_3 = 1;
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_4308[iParam0 /*5*/].f_4), 0);
								Local_4308[iParam0 /*5*/].f_3 = 1;
							}
							break;
						
						case 1:
							if (!MISC::IS_BIT_SET(Local_4308[iParam0 /*5*/].f_4, 1))
							{
								if (func_235(4, "cs2_crash1", 0, 0, "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									MISC::SET_BIT(&(Local_4308[iParam0 /*5*/].f_4), 1);
									Local_4308[iParam0 /*5*/].f_3 = 2;
								}
							}
							else if (!MISC::IS_BIT_SET(Local_4308[iParam0 /*5*/].f_4, 2))
							{
								if (func_235(4, "cs2_crash2", 0, 0, "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									MISC::SET_BIT(&(Local_4308[iParam0 /*5*/].f_4), 2);
									Local_4308[iParam0 /*5*/].f_3 = 2;
								}
							}
							else if (!MISC::IS_BIT_SET(Local_4308[iParam0 /*5*/].f_4, 3))
							{
								if (func_235(4, "cs2_crash3", 0, 0, "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									MISC::SET_BIT(&(Local_4308[iParam0 /*5*/].f_4), 3);
									Local_4308[iParam0 /*5*/].f_3 = 2;
								}
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								if (MISC::IS_BIT_SET(Local_4308[iParam0 /*5*/].f_4, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_3955))
								{
									if (func_26(4, "cs2_radio", &Local_3955, 0, 0, "Trevor", 1, PLAYER::PLAYER_PED_ID(), "Franklin", -1, 0, 0, -1, 0, 0, 7))
									{
										MISC::CLEAR_BIT(&(Local_4308[iParam0 /*5*/].f_4), 0);
										Local_4308[iParam0 /*5*/].f_3 = 0;
										func_285(131, 0, 0);
									}
								}
								else if (!MISC::IS_BIT_SET(Local_4308[iParam0 /*5*/].f_4, 3))
								{
									Local_4308[iParam0 /*5*/].f_3 = 0;
									func_285(131, 0, 0);
								}
								else
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 64:
					if (func_235(4, "cs2_where", 7, Local_1471[6 /*14*/], "cs2_cop1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 45:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (GlobalFunc_663("CH_INS32c", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							func_285(95, 1, -1);
							if (func_235(4, "cs2_mana1", 0, Local_1471[1 /*14*/], "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_mana1"))
							{
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 1)
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 48:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (GlobalFunc_663("CH_INS32c", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							func_285(95, 1, -1);
							if (func_235(4, "cs2_mane1", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_mane1"))
							{
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 1)
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (GlobalFunc_663("CH_INS32c", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							func_285(95, 1, -1);
							if (func_235(4, "cs2_manb1b", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (func_44("cs2_manb1b"))
							{
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 1)
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 49:
					if (func_235(4, "cs2_mana3", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						func_285(95, 0, -1);
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 50:
					if (func_235(4, "cs2_mand2b", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						func_285(95, 0, -1);
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 51:
					if (func_235(4, "cs2_manc2", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						func_212(10, 14);
						func_285(95, 0, -1);
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 52:
					if (func_235(4, "cs2_manb2b", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 53:
					if (func_235(4, "cs2_mane2", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
					{
						func_285(95, 0, -1);
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 54:
					if ((iLocal_3938 == 0 || Local_4308[iParam0 /*5*/].f_3 == 0) && func_232(95))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								func_513(0, -1260.095f, -244.781f, 51.224f);
								Local_4308[iParam0 /*5*/].f_3++;
								break;
							
							case 1:
								if (func_235(2, "lisFuckb", 5, Local_1471[6 /*14*/], "cs2_carfuck_man", 6, Local_1471[10 /*14*/], "cs2_carfuck_woman", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
								}
								break;
							
							case 2:
								if (func_235(2, "lisFuckb", 5, Local_1471[6 /*14*/], "cs2_carfuck_man", 6, Local_1471[10 /*14*/], "cs2_carfuck_woman", -1, 0, 0, -1, 0, 0, 8))
								{
									if (Local_4308[iParam0 /*5*/].f_4 < 4)
									{
										Local_4308[iParam0 /*5*/].f_3++;
									}
								}
								break;
							
							case 3:
								if (func_235(2, "lisFuck", 5, Local_1471[6 /*14*/], "cs2_carfuck_man", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_4++;
									Local_4308[iParam0 /*5*/].f_3 = 1;
								}
								break;
						}
					}
					else if (func_44("lisFuckb") || func_44("lisFuck"))
					{
						GlobalFunc_4956();
					}
					break;
				
				case 55:
					if ((iLocal_3938 == 0 || Local_4308[iParam0 /*5*/].f_3 == 0) && func_232(95))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								func_513(0, -1260.095f, -244.781f, 51.224f);
								Local_4308[iParam0 /*5*/].f_3++;
								break;
							
							case 1:
								if (func_235(2, "lisCarFix", 6, Local_1471[6 /*14*/], "cs2_carfix", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
								break;
						}
					}
					else if (func_44("lisCarFix"))
					{
						if (iLocal_1424 == 2)
						{
							GlobalFunc_4956();
						}
					}
					break;
				
				case 58:
					if ((iLocal_3938 == 3 || Local_4308[iParam0 /*5*/].f_3 == 0) && func_232(95))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								func_513(3, -1295.259f, -185.2966f, 51.7873f);
								Local_4308[iParam0 /*5*/].f_3++;
								break;
							
							case 1:
								if (func_235(2, "lisManLean", 6, Local_1471[8 /*14*/], "cs2_carlean", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
								}
								break;
							
							case 2:
								if (Local_4308[iParam0 /*5*/].f_4 != 0)
								{
									StringCopy(&Var0, "lisManLean", 24);
									StringIntConCat(&Var0, Local_4308[iParam0 /*5*/].f_4, 24);
									if (func_26(2, "lisManLean", &Var0, 6, Local_1471[8 /*14*/], "cs2_carlean", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
									{
										Local_4308[iParam0 /*5*/].f_3 = 2;
									}
								}
								break;
							}
					}
					break;
				
				case 59:
					if ((iLocal_3938 == 4 || Local_4308[iParam0 /*5*/].f_3 == 0) && func_232(95))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								func_513(4, -1260.211f, -224.6728f, 51.5658f);
								Local_4308[iParam0 /*5*/].f_3 = 1;
								break;
							
							case 1:
								if (func_208(22, 53))
								{
									if (func_235(2, "lisOnPhn", 6, Local_1471[7 /*14*/], "cs2_carphn", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_4308[iParam0 /*5*/].f_3 = 2;
									}
								}
								break;
							
							case 2:
								if (!GlobalFunc_111())
								{
									Local_4308[iParam0 /*5*/].f_3 = 3;
								}
								break;
							
							case 3:
								if (Local_4308[iParam0 /*5*/].f_4 != 0)
								{
									StringCopy(&Var6, "lisOnPhn_", 24);
									StringIntConCat(&Var6, Local_4308[iParam0 /*5*/].f_4, 24);
									if (func_26(2, "lisOnPhn", &Var6, 6, Local_1471[7 /*14*/], "cs2_carphn", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
									{
										Local_4308[iParam0 /*5*/].f_3 = 2;
									}
								}
								else
								{
									Local_4308[iParam0 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
									Local_4308[iParam0 /*5*/].f_3 = 4;
								}
								break;
							
							case 4:
								if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
								{
									if (func_235(2, "lisOnPhnB", 6, Local_1471[7 /*14*/], "cs2_carphn", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_4308[iParam0 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
									}
								}
								break;
						}
					}
					else if (func_44("lisOnPhn"))
					{
						if (iLocal_1424 == 2)
						{
							Local_4308[iParam0 /*5*/].f_4 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
							Local_4308[iParam0 /*5*/].f_3 = 3;
							GlobalFunc_4956();
						}
					}
					break;
				
				case 56:
					if ((iLocal_3938 == 1 || Local_4308[iParam0 /*5*/].f_3 == 0) && (func_232(95) || ((func_57(95) && !GlobalFunc_111()) && GlobalFunc_156(Local_1471[4 /*14*/], Local_1471[5 /*14*/], 1) > 15f)))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								func_513(1, -1270.379f, -210.2109f, 50.5499f);
								Local_4308[iParam0 /*5*/].f_3++;
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[5 /*14*/], "misscarsteal2peeing", "peeing_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[5 /*14*/], "misscarsteal2peeing", "peeing_loop", 3))
									{
										Local_4308[iParam0 /*5*/].f_3++;
									}
								}
								break;
							
							case 2:
								if (func_235(2, "lisManPeeing", 7, Local_1471[5 /*14*/], "cs2_pissing_man", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
								break;
						}
					}
					else if (func_44("lisManPeeing"))
					{
						if (iLocal_1424 == 2)
						{
							if (iLocal_3938 != 1)
							{
								GlobalFunc_4956();
							}
						}
					}
					break;
				
				case 57:
					if ((iLocal_3938 == 2 || Local_4308[iParam0 /*5*/].f_3 == 0) && func_232(95))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								func_513(2, -1309.563f, -215.238f, 50.993f);
								Local_4308[iParam0 /*5*/].f_3++;
								break;
							
							case 1:
								if (func_235(2, "LisChadWhimp", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
									Local_4308[iParam0 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_4308[iParam0 /*5*/].f_4)
								{
									Local_4308[iParam0 /*5*/].f_3 = 1;
								}
								break;
						}
					}
					else if (func_44("LisChadWhimp"))
					{
						if (iLocal_1424 == 2)
						{
							GlobalFunc_4956();
						}
					}
					break;
				
				case 65:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							func_158(0);
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (func_235(4, "gunAtChad", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 66:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (func_57(113))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							else if (func_235(4, "CS2_gotChad1", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 67:
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								GlobalFunc_4956();
								func_514(13, 68, 1);
								Local_4308[iParam0 /*5*/].f_3++;
								break;
							
							case 1:
								if (func_235(4, "chadfear", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
								break;
							}
					}
					break;
				
				case 68:
					if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
					{
						switch (Local_4308[iParam0 /*5*/].f_3)
						{
							case 0:
								GlobalFunc_4956();
								func_514(2, 67, 1);
								Local_4308[iParam0 /*5*/].f_3++;
								break;
							
							case 1:
								if (func_235(4, "chadbad", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_1 = 1;
								}
								break;
							}
					}
					break;
				
				case 69:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							func_158(0);
							if (!GlobalFunc_111())
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
							{
								if (func_208(1, 65))
								{
									if (func_515(4, "cs2_tmp53", "cs2_tmp53_2", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
									{
										Local_4308[iParam0 /*5*/].f_3++;
									}
								}
								else if (func_515(4, "cs2_tmp53", "cs2_tmp53_1", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
								{
									Local_4308[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 70:
					if (func_235(4, "CS2_chad3", 0, Local_1471[1 /*14*/], "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 71:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_235(4, "trvcops", 0, Local_1471[1 /*14*/], "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
							{
								PLAYER::SET_MAX_WANTED_LEVEL(5);
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								Local_4308[iParam0 /*5*/].f_3++;
							}
							break;
						
						case 1:
							if (!func_44("trvcops"))
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_CAR_STEAL_2_01", 0f);
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 72:
					if (func_235(4, "trvkill", 0, Local_1471[1 /*14*/], "Trevor", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 73:
					if (func_510("cs2_call", 1, PLAYER::PLAYER_PED_ID(), "Franklin", 2, 0, "Molly", -1, 0, 0))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 74:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							if (func_57(125))
							{
								if (func_235(4, "cs2_gate", 1, Local_1471[4 /*14*/], "Franklin", 7, Local_1471[5 /*14*/], "cs2_cop1", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_4308[iParam0 /*5*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!func_44("cs2_gate"))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 75:
					if (func_235(4, "cs2_franch", 1, Local_1471[4 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_4308[iParam0 /*5*/].f_1 = 1;
					}
					break;
				
				case 76:
					switch (Local_4308[iParam0 /*5*/].f_3)
					{
						case 0:
							GlobalFunc_4956();
							Local_4308[iParam0 /*5*/].f_3++;
							break;
						
						case 1:
							if (func_515(4, "CS2_gotChad1", "CS2_gotChad1_11", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
							{
								Local_4308[iParam0 /*5*/].f_1 = 1;
							}
							break;
					}
					break;
				}
			}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Local_4296 = { GlobalFunc_560() };
	}
	else if (!iLocal_3999)
	{
		Local_4302 = { Local_4296 };
	}
}

int func_510(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)//Position - 0x442AF
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_512(iParam1) != iParam2 || iParam2 == 0)
		{
			func_40(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_512(iParam4) != iParam5 || iParam5 == 0)
			{
				func_40(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_512(iParam7) != iParam8 || iParam8 == 0)
			{
				func_40(iParam7, iParam8, sParam9);
			}
		}
		if (GlobalFunc_10638(&Local_1759, 45, sLocal_1924, sParam0, 9, 1, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}


int func_512(int iParam0)//Position - 0x443B3
{
	return uLocal_3977[iParam0];
}

int func_513(int iParam0, struct<3> Param1)//Position - 0x443C2
{
	Local_4794[iParam0 /*3*/] = { Param1 };
	return iParam0;
}

void func_514(int iParam0, int iParam1, int iParam2)//Position - 0x443D9
{
	Local_4308[iParam0 /*5*/].f_1 = iParam2;
	Local_4308[iParam0 /*5*/] = iParam1;
}

int func_515(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0x443F5
{
	if (!GlobalFunc_111() || (GlobalFunc_111() && iParam0 > iLocal_1424))
	{
		func_43(sParam1, iParam3, iParam6, iParam9, iParam12);
		func_40(iParam3, iParam4, sParam5);
		if (iParam6 != -1)
		{
			func_40(iParam6, iParam7, sParam8);
		}
		if (iParam9 != -1)
		{
			func_40(iParam9, iParam10, sParam11);
		}
		if (iParam12 != -1)
		{
			func_40(iParam12, iParam13, sParam14);
		}
		if (iLocal_1424 < iParam0)
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
				iLocal_1424 = 0;
			}
		}
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_10630(&Local_1759, sLocal_1924, sParam1, sParam2, iParam15, 0, 0))
			{
				iLocal_1424 = iParam0;
				iLocal_1398 = 0;
				return 1;
			}
			else if (iLocal_1399 != MISC::GET_GAME_TIMER())
			{
				iLocal_1398++;
				iLocal_1399 = MISC::GET_GAME_TIMER();
				if (iLocal_1398 >= 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}





int func_520()//Position - 0x445A0
{
	func_482(68, 102);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_160(0, 12, 2, 74, 1, 0, 1, 0);
	func_160(1, 13, 2, 75, 5, 84, 1, 0);
	func_160(2, 14, 2, 76, 1, 0, 1, 0);
	func_160(3, 15, 2, 99, 1, 0, 1, 0);
	func_509(0, 36, 2, 68, 1, 0, 1, 0, 1, 0);
	func_509(1, 37, 2, 69, 1, 0, 1, 0, 1, 0);
	func_509(2, 38, 2, 82, 1, 0, 1, 0, 1, 0);
	func_509(3, 39, 2, 72, 1, 0, 1, 0, 1, 0);
	func_509(4, 40, 2, 83, 1, 0, 1, 0, 1, 0);
	func_508(5, 41, 4, 40, 0, 0, 1, 0, 1, 0);
	func_509(6, 43, 2, 81, 1, 0, 1, 0, 1, 0);
	func_524(7, 44, 2, 85, 1, 0, 1, 0, 1, 0);
	func_524(8, 45, 2, 86, 1, 0, 1, 0, 1, 0);
	func_524(9, 46, 2, 87, 1, 0, 1, 0, 1, 0);
	func_524(19, 47, 2, 88, 1, 0, 1, 0, 1, 0);
	func_524(20, 48, 2, 89, 1, 0, 1, 0, 1, 0);
	func_523(10, 49, 6, 51);
	func_523(11, 50, 5, 50);
	func_523(21, 52, 14, 53);
	func_523(22, 53, 15, 54);
	func_509(12, 51, 2, 97, 1, 0, 1, 0, 1, 0);
	func_509(13, 42, 2, 84, 1, 0, 1, 0, 1, 0);
	func_509(14, 55, 0, 0, 1, 0, 1, 0, 1, 0);
	func_509(15, 56, 0, 0, 1, 0, 1, 0, 1, 0);
	func_509(16, 57, 0, 0, 1, 0, 1, 0, 1, 0);
	func_509(17, 58, 0, 0, 1, 0, 1, 0, 1, 0);
	func_509(18, 59, 0, 0, 1, 0, 1, 0, 1, 0);
	func_508(23, 60, 9, 46, 0, 0, 1, 0, 1, 0);
	func_233(0, 42, 0, 2, 73, 1, 0, 1, 0, 1, 0);
	func_233(1, 43, 0, 2, 68, 1, 0, 1, 0, 1, 0);
	func_233(2, 45, 0, 2, 68, 1, 0, 1, 0, 1, 0);
	func_233(3, 48, 1, 2, 70, 5, 101, 1, 0, 1, 0);
	func_233(4, 77, 0, 2, 87, 1, 0, 1, 0, 1, 0);
	func_507(5, 50, 8, 45);
	func_507(6, 51, 7, 44);
	func_507(14, 53, 19, 47);
	func_507(15, 54, 20, 48);
	func_233(10, 56, 0, 2, 68, 1, 0, 1, 0, 1, 0);
	func_233(11, 57, 0, 2, 98, 1, 0, 1, 0, 1, 0);
	func_233(12, 46, 0, 2, 68, 1, 0, 1, 0, 1, 0);
	func_233(13, 47, 0, 2, 68, 1, 0, 1, 0, 1, 0);
	func_507(20, 60, 23, 60);
	switch (iLocal_1753)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-48.34601f, -109.0318f, 82.54919f, 195.5508f, -197.2838f, -38.86471f, 155.8125f, 0, 1, 1);
			if (iLocal_1419 != 8)
			{
				func_522(&Local_2193, Local_1471[3 /*14*/]);
				func_863(33, 14, 0);
				func_521(&Local_2193, -1157.736f, -312.993f, 170.3401f, 10f, 1086324736, 1);
			}
			GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 45, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
			{
				AUDIO::SET_AUDIO_VEHICLE_PRIORITY(Local_1724[2 /*2*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1471[4 /*14*/], 1);
			}
			iLocal_1753 = 4;
			break;
		
		case 4:
			if (func_491(20, 60))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1724[0 /*2*/], 1000);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_521(var uParam0, struct<3> Param1, float fParam4, float fParam5, int iParam6)//Position - 0x4491E
{
	uParam0->f_47 = 1;
	if (iParam6 == 1)
	{
		Param1.f_2 = -1f;
	}
	uParam0->f_74 = { Param1 };
	uParam0->f_69 = fParam5;
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_77 = fParam4;
}

void func_522(var uParam0, int iParam1)//Position - 0x44955
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam1 != 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_298)
		{
			if (uParam0->f_298[iVar0 /*11*/] == iParam1)
			{
				if (uParam0->f_298[iVar0 /*11*/].f_6 != -1)
				{
					StringCopy(&(uParam0->f_433[uParam0->f_298[iVar0 /*11*/].f_6 /*4*/]), "", 16);
				}
				uParam0->f_298[iVar0 /*11*/].f_6 = -1;
				iVar1 = 1;
			}
			if (iVar1 == 1)
			{
				if (iVar0 < (uParam0->f_298 - 1))
				{
					uParam0->f_298[iVar0 /*11*/] = { uParam0->f_298[iVar0 + 1 /*11*/] };
				}
				else
				{
					uParam0->f_298[iVar0 /*11*/].f_1 = 0;
					uParam0->f_298[iVar0 /*11*/] = 0;
					uParam0->f_298[iVar0 /*11*/].f_1 = 0;
					uParam0->f_298[iVar0 /*11*/].f_3 = 0f;
					uParam0->f_298[iVar0 /*11*/].f_5 = 0;
					uParam0->f_298[iVar0 /*11*/].f_2 = 0;
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 0);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 1);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 2);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 3);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 4);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 5);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 6);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 7);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 8);
					MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_2), 9);
					uParam0->f_298[iVar0 /*11*/].f_6 = -1;
				}
			}
			iVar0++;
		}
		if (iVar1 == 1)
		{
			uParam0->f_127 = (uParam0->f_127 - 1);
		}
	}
}

void func_523(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x44AF2
{
	char cVar0[64];
	
	if (Local_4308[iParam0 /*5*/] != iParam1)
	{
		Local_4308[iParam0 /*5*/].f_1 = 0;
		Local_4308[iParam0 /*5*/] = iParam1;
	}
	if (Local_4434[iParam2 /*10*/] == iParam3)
	{
		if (!Local_4308[iParam0 /*5*/].f_1)
		{
			if (Local_4434[iParam2 /*10*/].f_3)
			{
				func_509(iParam0, iParam1, 0, 0, 1, 0, 1, 0, 1, 0);
			}
		}
	}
	else if (Local_4434[iParam2 /*10*/] != 0)
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "DIALOGUE_ON_ACTION():", 64);
		StringIntConCat(&cVar0, iParam2, 64);
	}
}

void func_524(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x44B72
{
	if (Local_4308[iParam0 /*5*/] != iParam1)
	{
		Local_4308[iParam0 /*5*/].f_1 = 0;
		Local_4308[iParam0 /*5*/] = iParam1;
	}
	if (!Local_4308[iParam0 /*5*/].f_1)
	{
		if (Local_4308[iParam0 /*5*/].f_2)
		{
			func_509(iParam0, iParam1, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		else
		{
			func_509(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
		}
	}
}

int func_525()//Position - 0x44BDD
{
	func_233(0, 37, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(1, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(2, 39, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(3, 40, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(4, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_1753)
	{
		case 0:
			Local_2193.f_42 = 1;
			Local_2193.f_18 = 90f;
			func_530(&Local_2193, 0f, 38f);
			func_863(28, 7, 0);
			func_863(34, 7, 0);
			func_863(43, 14, 0);
			func_863(47, 7, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
			{
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_1724[1 /*2*/], 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1724[0 /*2*/], -1))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[2 /*2*/], 1);
			}
			GlobalFunc_159("CH_HLP02", -1);
			GlobalFunc_9132(1);
			iLocal_1753 = 200;
			break;
		
		case 200:
			func_527();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[2 /*2*/]))
				{
					if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(Local_1724[2 /*2*/]) == VEHICLE::GET_VEHICLE_RECORDING_ID(402, "cs2"))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1724[2 /*2*/]) >= 43913f)
						{
							func_863(14, 10, 0);
							iLocal_1753 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			func_527();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[2 /*2*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1724[2 /*2*/]) >= 70913f)
					{
						if (func_526(0))
						{
							iLocal_1753 = 6;
							SYSTEM::SETTIMERA(0);
						}
						else
						{
							SYSTEM::SETTIMERA(0);
							iLocal_1753 = 3;
						}
						func_212(8, 14);
					}
				}
			}
			break;
		
		case 3:
			if (func_235(4, "cs2_tmp16", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_CHASE_CONTINUED");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1724[2 /*2*/], 0);
				AUDIO::STOP_AUDIO_SCENE("CAR_2_Z_TYPE_ENGINE_BOOST");
				AUDIO::START_AUDIO_SCENE("CAR_2_CAR_ENTERS_GARAGE");
				SYSTEM::SETTIMERA(0);
				iLocal_1753 = 4;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 5000)
			{
				func_1("CH_F20");
			}
			else if (GlobalFunc_742(-1246.297f, -239.1974f, 42.4411f, 50f, 300f))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_1753 = 5;
			}
			break;
		
		case 5:
			if (func_235(4, "CS2_cp2b", 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 8))
			{
				func_804(10);
				return 1;
			}
			break;
		
		case 6:
			if (func_235(4, "CS2_carpark2", 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 8))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_CHASE_CONTINUED");
				AUDIO::STOP_AUDIO_SCENE("CAR_2_Z_TYPE_ENGINE_BOOST");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1724[2 /*2*/], 0);
				AUDIO::START_AUDIO_SCENE("CAR_2_CAR_ENTERS_GARAGE");
				func_804(10);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_1724[1 /*2*/], 0);
				}
				return 1;
			}
			break;
		
		case 7:
			break;
	}
	return 0;
}

int func_526(bool bParam0)//Position - 0x44F1A
{
	float fVar0;
	
	fVar0 = (0.15f + (((45f - Local_2193.f_40) / 30f) * 0.35f));
	if (fVar0 < 0.1f)
	{
		fVar0 = 0.1f;
	}
	if (fVar0 > 0.5f)
	{
		fVar0 = 0.5f;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
	{
		if (GlobalFunc_2517(ENTITY::GET_ENTITY_COORDS(Local_1724[2 /*2*/], 1), (0.5f - fVar0), (0.5f - fVar0), (0.5f + fVar0), (0.5f + fVar0)))
		{
			if (bParam0)
			{
				return 1;
			}
			else
			{
				fLocal_4823 = (fLocal_4823 + SYSTEM::TIMESTEP());
				if (fLocal_4823 > 0.3f)
				{
					fLocal_4823 = 0f;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_527()//Position - 0x44FD1
{
	struct<6> Var0;
	
	if (bLocal_2745)
	{
		if (iLocal_4819 == Local_3163)
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[1 /*2*/]))
			{
				fLocal_4824 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1724[1 /*2*/]);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[2 /*2*/]))
			{
				fLocal_4825 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1724[2 /*2*/]);
			}
			else
			{
				fLocal_4825 = -1f;
			}
		}
		if (Local_3163[iLocal_4819 /*9*/].f_6)
		{
			switch (iLocal_4826)
			{
				case 0:
					if (fLocal_4824 >= IntToFloat(Local_3163[iLocal_4819 /*9*/]))
					{
						if (fLocal_4824 < IntToFloat(Local_3163[iLocal_4819 /*9*/] + 500))
						{
							if (!GlobalFunc_111())
							{
								if (func_235(3, "cs2_tmp16", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_4826 = 1;
								}
								if (func_235(3, "cs2_whatsee", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_4826 = 1;
								}
							}
						}
						else
						{
							iLocal_4826 = 8;
						}
					}
					break;
				
				case 1:
					if (fLocal_4824 < IntToFloat(Local_3163[iLocal_4819 /*9*/].f_1))
					{
						if (func_526(0))
						{
							iLocal_4820 = 0;
							iLocal_4826 = 2;
						}
					}
					else if (iLocal_4820 == 0)
					{
						iLocal_4820++;
						iLocal_4826 = 4;
					}
					else
					{
						func_1("CH_F20");
					}
					break;
				
				case 2:
					iLocal_4822 = func_529(fLocal_4824);
					if (!GlobalFunc_111())
					{
						iLocal_4826 = 3;
					}
					break;
				
				case 3:
					Var0 = { func_528(Local_3163[iLocal_4819 /*9*/].f_4, iLocal_4822) };
					if (func_515(4, Local_3163[iLocal_4819 /*9*/].f_4, &Var0, 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 7))
					{
						iLocal_4826 = 8;
					}
					break;
				
				case 4:
					if (func_235(3, "cs2_tmp36", 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_4826 = 5;
					}
					break;
				
				case 5:
					if (func_235(3, "cs2_find", 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_4826 = 6;
						iLocal_4821 = MISC::GET_GAME_TIMER() + 4000;
					}
					break;
				
				case 6:
					if (func_526(1))
					{
						iLocal_4826 = 7;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_4821)
					{
						func_1("CH_F20");
					}
					break;
				
				case 7:
					Var0 = { func_528("cs2_tmp18", func_529(fLocal_4824)) };
					if (func_515(4, "cs2_tmp18", &Var0, 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 7))
					{
						iLocal_4826 = 8;
						iLocal_4820 = 0;
					}
					break;
				
				case 8:
					if (!GlobalFunc_111())
					{
						iLocal_4826 = 0;
						iLocal_4819++;
					}
					break;
			}
		}
		else if (Local_3163[iLocal_4819 /*9*/].f_7)
		{
			switch (iLocal_4826)
			{
				case 0:
					if ((Local_3163[iLocal_4819 /*9*/] != 0 && fLocal_4824 >= IntToFloat(Local_3163[iLocal_4819 /*9*/])) || (Local_3163[iLocal_4819 /*9*/].f_2 != 0 && fLocal_4825 >= IntToFloat(Local_3163[iLocal_4819 /*9*/].f_2)))
					{
						if ((Local_3163[iLocal_4819 /*9*/] != 0 && fLocal_4824 < IntToFloat(Local_3163[iLocal_4819 /*9*/] + 500)) || (Local_3163[iLocal_4819 /*9*/].f_2 != 0 && fLocal_4825 < IntToFloat(Local_3163[iLocal_4819 /*9*/].f_2 + 500)))
						{
							if (func_526(1))
							{
								iLocal_4826 = 3;
							}
							else if (Local_3163[iLocal_4819 /*9*/].f_8)
							{
								iLocal_4826 = 9;
							}
							else if (MISC::ARE_STRINGS_EQUAL(Local_3163[iLocal_4819 /*9*/].f_4, "cs2_tmp18"))
							{
								iLocal_4826 = 4;
							}
							else
							{
								iLocal_4826 = 0;
								iLocal_4819++;
							}
						}
						else
						{
							iLocal_4826 = 0;
							iLocal_4819++;
						}
					}
					break;
				
				case 3:
					if (Local_3163[iLocal_4819 /*9*/].f_5 != 0)
					{
						Var0 = { func_528(Local_3163[iLocal_4819 /*9*/].f_4, Local_3163[iLocal_4819 /*9*/].f_5) };
						if (func_515(3, Local_3163[iLocal_4819 /*9*/].f_4, &Var0, 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 7))
						{
							iLocal_4826 = 8;
						}
					}
					else if (func_235(3, Local_3163[iLocal_4819 /*9*/].f_4, 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_4826 = 8;
					}
					break;
				
				case 4:
					if (func_235(3, "cs2_tmp36", 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_4820++;
						iLocal_4826 = 8;
					}
					break;
				
				case 8:
					if (!GlobalFunc_111())
					{
						iLocal_4826 = 0;
						iLocal_4819++;
					}
					break;
				
				case 9:
					iLocal_4826 = 10;
					break;
				
				case 10:
					if (!GlobalFunc_111())
					{
						func_1("CH_F20");
					}
					break;
			}
		}
		else
		{
			switch (iLocal_4826)
			{
				case 0:
					if ((Local_3163[iLocal_4819 /*9*/] != 0 && fLocal_4824 >= IntToFloat(Local_3163[iLocal_4819 /*9*/])) || (Local_3163[iLocal_4819 /*9*/].f_2 != 0 && fLocal_4825 >= IntToFloat(Local_3163[iLocal_4819 /*9*/].f_2)))
					{
						if (Local_3163[iLocal_4819 /*9*/].f_5 != 0)
						{
							Var0 = { func_528(Local_3163[iLocal_4819 /*9*/].f_4, Local_3163[iLocal_4819 /*9*/].f_5) };
							if (func_515(3, Local_3163[iLocal_4819 /*9*/].f_4, &Var0, 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 7))
							{
								iLocal_4826 = 8;
							}
						}
						else if (MISC::ARE_STRINGS_EQUAL(Local_3163[iLocal_4819 /*9*/].f_4, "cs2_chase3"))
						{
							if (func_235(3, Local_3163[iLocal_4819 /*9*/].f_4, 0, 0, "Trevor", 3, 0, "cs2_copRadio", -1, 0, 0, -1, 0, 0, 8))
							{
								iLocal_4826 = 8;
							}
						}
						else if (func_235(3, Local_3163[iLocal_4819 /*9*/].f_4, 0, Local_1471[1 /*14*/], "Trevor", 1, 0, "Franklin", -1, 0, 0, -1, 0, 0, 8))
						{
							iLocal_4826 = 8;
						}
					}
					break;
				
				case 8:
					if (!GlobalFunc_111())
					{
						iLocal_4826 = 0;
						iLocal_4819++;
					}
					break;
				}
			}
	}
	return 0;
}

struct<6> func_528(char* sParam0, int iParam1)//Position - 0x4560E
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	StringConCat(&Var0, sParam0, 24);
	StringConCat(&Var0, "_", 24);
	StringIntConCat(&Var0, iParam1, 24);
	return Var0;
}

int func_529(float fParam0)//Position - 0x45636
{
	if (fParam0 < 8000f)
	{
		return 1;
	}
	else if (fParam0 < 15800f)
	{
		return 2;
	}
	else if (fParam0 < 23500f)
	{
		return 3;
	}
	else if (fParam0 < 31500f)
	{
		return 4;
	}
	else if (fParam0 < 37600f)
	{
		return 5;
	}
	else if (fParam0 < 44500f)
	{
		return 6;
	}
	else if (fParam0 < 50000f)
	{
		return 7;
	}
	else if (fParam0 < 53000f)
	{
		return 8;
	}
	else if (fParam0 < 56000f)
	{
		return 9;
	}
	else if (fParam0 < 68500f)
	{
		return 10;
	}
	else if (fParam0 < 83500f)
	{
		return 11;
	}
	else if (fParam0 < 85300f)
	{
		return 12;
	}
	else if (fParam0 < 101500f)
	{
		return 13;
	}
	return 13;
}

void func_530(var uParam0, int iParam1, int iParam2)//Position - 0x4572D
{
	uParam0->f_15 = iParam2;
	uParam0->f_16 = iParam1;
}

int func_531()//Position - 0x45741
{
	func_482(54, 67);
	func_233(0, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(2, 35, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(3, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(4, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(5, 32, 0, 2, 66, 1, 0, 1, 0, 1, 0);
	func_233(6, 36, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_509(0, 28, 2, 60, 1, 0, 1, 0, 1, 0);
	func_509(1, 29, 2, 61, 5, 64, 4, 60, 1, 0);
	func_508(4, 32, 3, 31, 0, 0, 1, 0, 1, 0);
	func_508(5, 33, 3, 31, 3, 63, 1, 0, 1, 0);
	func_509(2, 30, 2, 60, 5, 61, 4, 65, 4, 62);
	func_509(3, 31, 2, 63, 4, 60, 1, 0, 1, 0);
	func_508(6, 34, 0, 28, 3, 63, 1, 0, 1, 0);
	func_509(7, 35, 2, 66, 1, 0, 1, 0, 1, 0);
	func_509(8, 25, 2, 58, 5, 55, 5, 60, 1, 0);
	func_509(9, 26, 2, 59, 5, 55, 5, 60, 1, 0);
	func_509(10, 27, 2, 57, 1, 0, 1, 0, 1, 0);
	func_534(0, 10, 0, 28, 0, 0, 1, 0);
	func_160(1, 11, 2, 61, 5, 64, 4, 60);
	switch (iLocal_1753)
	{
		case 0:
			func_863(6, 14, 0);
			iLocal_1753 = 1;
			break;
		
		case 1:
			if (func_533(6))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					fLocal_4816 = ENTITY::GET_ENTITY_SPEED(Local_1724[0 /*2*/]);
				}
				func_158(1);
				func_285(60, 1, -1);
				iLocal_1753 = 15;
			}
			break;
		
		case 15:
			if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1471[3 /*14*/], 191.6349f, -195.2687f, 43.70232f, 215.4263f, -130.4839f, 91.14255f, 31.625f, 0, 1, 0))
				{
					func_804(7);
					iLocal_1753 = 16;
				}
			}
			break;
		
		case 16:
			if (bLocal_2745 == 1)
			{
				func_804(8);
				func_532(27, 2);
				func_826(53);
				func_826(54);
				func_826(84);
				func_826(85);
				return 1;
			}
			break;
	}
	return 0;
}

int func_532(int iParam0, int iParam1)//Position - 0x45977
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1990[iVar0 /*6*/] == iParam0)
		{
			if (Local_1990[iVar0 /*6*/].f_1 == 1)
			{
				Local_1990[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_533(int iParam0)//Position - 0x459BB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1990[iVar0 /*6*/] == iParam0)
		{
			if (Local_1990[iVar0 /*6*/].f_1 == 1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_534(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x459F4
{
	if (Local_4018[iParam0 /*4*/].f_1 == 0)
	{
		if (Local_4308[iParam2 /*5*/].f_1)
		{
			iParam3 = iParam3;
			func_160(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, 1, 0);
		}
	}
}

int func_535()//Position - 0x45A2B
{
	func_482(47, 56);
	func_233(0, 28, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(1, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(2, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(3, 27, 0, 2, 53, 1, 0, 1, 0, 1, 0);
	func_509(0, 23, 2, 48, 5, 55, 4, 52, 4, 53);
	func_509(1, 24, 2, 49, 5, 55, 4, 52, 4, 53);
	func_509(2, 27, 2, 50, 1, 0, 1, 0, 1, 0);
	switch (iLocal_1753)
	{
		case 0:
			if (func_235(4, "CS2_letsGo", 0, Local_1471[1 /*14*/], "Trevor", 2, 0, "ChopperPilot", -1, 0, 0, -1, 0, 0, 8))
			{
				Local_2674[0 /*11*/] = { func_536(&Local_2193, -28.764f, -88.8056f, 57.2592f, Local_2193.f_141, Local_2193.f_141.f_1, Local_2193.f_141.f_2, 1) };
				Local_2674[1 /*11*/] = { func_536(&Local_2193, -7.1245f, -29.902f, 69.097f, Local_2193.f_141, Local_2193.f_141.f_1, Local_2193.f_141.f_2, 1) };
				Local_2674[2 /*11*/] = { func_536(&Local_2193, -17.5966f, -36.9055f, 76.1669f, Local_2193.f_141, Local_2193.f_141.f_1, Local_2193.f_141.f_2, 1) };
				Local_2674[3 /*11*/] = { func_536(&Local_2193, -17.8836f, -36.5907f, 76.3757f, Local_2193.f_141, Local_2193.f_141.f_1, Local_2193.f_141.f_2, 1) };
				func_530(&Local_2193, 0, 1109393408);
				func_863(2, 14, 0);
				func_863(75, 6, 0);
				func_863(88, 14, 0);
				iLocal_1753 = 1;
			}
			break;
		
		case 1:
			if (func_44("CS2_letsGo"))
			{
				iLocal_1753 = 2;
			}
			break;
		
		case 2:
			if (!func_44("CS2_letsGo"))
			{
				GlobalFunc_164("CH_INS12", 7500, 1);
				iLocal_1753 = 3;
			}
			break;
		
		case 3:
			if (!GlobalFunc_74("CH_INS12"))
			{
				func_863(18, 14, 0);
				iLocal_1753 = 9;
			}
			break;
		
		case 9:
			if (func_533(2))
			{
				func_826(49);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-48.34601f, -109.0318f, 82.54919f, 195.5508f, -197.2838f, -38.86471f, 155.8125f, 0, 0, 1);
				return 1;
			}
			break;
	}
	return 0;
}

struct<11> func_536(var uParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x45C8C
{
	struct<11> Var0;
	
	Var0.f_5 = -1;
	Var0 = { Param1 };
	Var0.f_6 = iParam7;
	Var0.f_8 = uParam4;
	Var0.f_9 = uParam5;
	Var0.f_10 = uParam6;
	func_537(uParam0, &Var0);
	return Var0;
}

int func_537(var uParam0, var uParam1)//Position - 0x45CCB
{
	int iVar0;
	
	if (uParam0->f_241 < 5)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (uParam0->f_242[iVar0 /*11*/].f_5 == -1)
			{
				uParam0->f_242[iVar0 /*11*/] = { *uParam1 };
				uParam0->f_242[iVar0 /*11*/].f_5 = iVar0;
				uParam0->f_241++;
				uParam1->f_5 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_538()//Position - 0x45D2C
{
	func_482(33, 46);
	func_509(0, 14, 0, 0, 1, 0, 1, 0, 1, 0);
	func_509(1, 15, 3, 34, 4, 36, 1, 0, 1, 0);
	func_508(2, 16, 6, 20, 2, 34, 4, 35, 1, 0);
	func_508(3, 17, 5, 19, 2, 36, 4, 34, 4, 45);
	func_509(4, 18, 2, 38, 1, 0, 1, 0, 1, 0);
	func_509(5, 19, 2, 34, 1, 0, 1, 0, 1, 0);
	func_509(6, 20, 2, 34, 1, 0, 1, 0, 1, 0);
	func_509(7, 21, 2, 42, 4, 43, 1, 0, 1, 0);
	func_509(8, 22, 2, 40, 5, 38, 5, 35, 1, 0);
	func_233(0, 19, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_233(1, 20, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_233(2, 21, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(3, 22, 1, 2, 38, 5, 39, 1, 0, 1, 0);
	func_507(4, 23, 4, 18);
	func_233(5, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(7, 25, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(8, 26, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(0, 6, 2, 37, 1, 0, 1, 0);
	func_160(1, 7, 2, 40, 1, 0, 1, 0);
	func_160(2, 8, 2, 38, 1, 0, 1, 0);
	func_154(17);
	if (func_400(4, 18))
	{
		func_522(&Local_2193, Local_1471[4 /*14*/]);
		return 1;
	}
	return 0;
}

int func_539()//Position - 0x45E9B
{
	bool bVar0;
	int iVar1;
	
	func_482(30, 32);
	func_233(0, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(1, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_233(2, 18, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_509(0, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(0, 5, 2, 31, 1, 0, 1, 0);
	switch (iLocal_1753)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() < 21 && CLOCK::GET_CLOCK_HOURS() > 4)
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					GlobalFunc_163();
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					Local_3117.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
					CAM::ADD_CAM_SPLINE_NODE(Local_3117.f_4, 1393.363f, -2052.581f, 65.4054f, 2.5107f, 0f, 51.1167f, 5000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(Local_3117.f_4, 1393.456f, -2052.656f, 68.146f, 2.5107f, 0f, 51.1167f, 6000, 3, 2);
					CAM::SET_CAM_FOV(Local_3117.f_4, 35.9859f);
					CAM::SET_CAM_ACTIVE(Local_3117.f_4, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-4f, 1065353216);
					iLocal_1408 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_1408, "TIME_LAPSE_MASTER", 0, 1);
					AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
					STREAMING::REQUEST_MODEL(joaat("polmav"));
					STREAMING::REQUEST_MODEL(iLocal_3135);
					unk_0x67D02A194A2FC2BD("heli_cam");
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
					iLocal_1753++;
				}
			}
			else
			{
				func_476(1, 17, 1);
				STREAMING::REQUEST_MODEL(joaat("polmav"));
				STREAMING::REQUEST_MODEL(iLocal_3135);
				iLocal_1753 = 2;
			}
			break;
		
		case 1:
			GlobalFunc_9196(21, 0, "", "", &Local_3117, -1082130432, 0, 1, 1065353216);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_163();
			if (!CAM::IS_CAM_INTERPOLATING(Local_3117.f_4) && Local_4434[1 /*10*/].f_6 == 2)
			{
				Local_4434[1 /*10*/].f_6 = 3;
				AUDIO::STOP_SOUND(iLocal_1408);
				AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				iLocal_1753 = 3;
			}
			break;
		
		case 2:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_3135) && STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
			{
				iLocal_1753++;
			}
			break;
		
		case 3:
			func_863(22, 14, 1);
			if (!CAM::IS_SPHERE_VISIBLE(1365.115f, -2147.449f, 85.3603f, 10f))
			{
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1365.115f, -2147.449f, 75.3603f, -8.3f, 1, 1);
			}
			else if (!CAM::IS_SPHERE_VISIBLE(1289.747f, -2068.575f, 88.1654f, 10f))
			{
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1289.747f, -2068.575f, 78.1654f, -93f, 1, 1);
			}
			else if (!CAM::IS_SPHERE_VISIBLE(1289.747f, -2068.575f, 88.1654f, 10f))
			{
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1443.897f, -2067.701f, 78.8426f, 86f, 1, 1);
			}
			else
			{
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1406.261f, -2003.584f, 74.7528f, 158f, 1, 1);
			}
			VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
			ENTITY::SET_ENTITY_VELOCITY(Local_1724[0 /*2*/], 0f, 15f, 0f);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
			{
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
			}
			func_477(0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[0 /*2*/], 6);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[2 /*14*/], 3, 0);
			TASK::TASK_HELI_MISSION(Local_1471[2 /*14*/], Local_1724[0 /*2*/], 0, 0, 1359.799f, -2074.86f, 74.829f, 4, 15f, 10f, -1f, 0, 20, -1082130432, 0);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 10000, 0, 2);
			Local_1471[4 /*14*/] = PLAYER::PLAYER_PED_ID();
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
			{
				Local_1724[1 /*2*/] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1724[1 /*2*/], 1, 1);
			}
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1471[2 /*14*/], 0);
			if (func_491(1, 17))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_1724[0 /*2*/], 0f, 0f, -7f, 1, 6000, 5000, 5000, 0);
				}
			}
			iLocal_1753 = 4;
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
			{
				if (func_626(&(Local_1471[1 /*14*/]), 2, Local_1724[0 /*2*/], 0, 1, 0, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_1471[1 /*14*/], PLAYER::PLAYER_PED_ID(), 60000, 0, 2);
					iLocal_1753 = 5;
				}
			}
			break;
		
		case 5:
			if (func_235(4, "CS2_chopper", 1, Local_1471[4 /*14*/], "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
			{
				iLocal_1753 = 21;
			}
			break;
		
		case 21:
			if (!GlobalFunc_111())
			{
				iLocal_1753 = 6;
			}
			break;
		
		case 6:
			if (func_625("CH_INS40") == 0)
			{
				SYSTEM::SETTIMERB(0);
				GlobalFunc_164("CH_INS40", 7500, 1);
			}
			GlobalFunc_2511(&uLocal_2113, 2, 1, 0);
			if (SYSTEM::TIMERB() > 10000)
			{
				bVar0 = true;
			}
			if (func_541(Local_1471[4 /*14*/], Local_1471[1 /*14*/], 0, 2, 3, bVar0))
			{
				GlobalFunc_8376();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				HUD::CLEAR_PRINTS();
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1471[4 /*14*/], 0))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_USING(Local_1471[4 /*14*/]);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar1)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1)))
					{
						if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
						{
							ENTITY::SET_ENTITY_COORDS(iVar1, 1371.375f, -2068.775f, 50.9982f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar1, 124f);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1724[0 /*2*/], 1000);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6f, 1065353216);
				return 1;
			}
			if (iLocal_2191 == 2)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(1);
				}
			}
			break;
	}
	return 0;
}


int func_541(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x46522
{
	iParam3 = iParam3;
	switch (iLocal_2191)
	{
		case 0:
			uLocal_2113[1] = uParam0;
			uLocal_2113[2] = uParam1;
			uLocal_2113[0] = iParam2;
			func_623(1);
			func_623(2);
			func_623(0);
			if (iParam3 != 3)
			{
				GlobalFunc_2518(&uLocal_2113, iParam3, 1);
			}
			iLocal_2191 = 1;
			break;
		
		case 1:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (bParam5)
				{
					GlobalFunc_9134(&uLocal_2113, 2);
				}
				else
				{
					GlobalFunc_10061(&uLocal_2113, PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 1);
				}
				if ((GlobalFunc_751(&uLocal_2113, 1) || GlobalFunc_751(&uLocal_2113, 0)) || GlobalFunc_751(&uLocal_2113, 2))
				{
					Local_2157.f_12 = uLocal_2113[uLocal_2113.f_7];
					Local_2157.f_20 = 1;
					GlobalFunc_729(&uLocal_2113, 1, 1);
					GlobalFunc_729(&uLocal_2113, 0, 1);
					GlobalFunc_729(&uLocal_2113, 2, 1);
					iLocal_2191 = 2;
				}
			}
			break;
		
		case 2:
			if (func_583(&Local_2157, iParam4, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_2157.f_18)
				{
					if (!Local_2157.f_19)
					{
						if (func_542(&uLocal_2113, 1, 1, 0))
						{
							iLocal_2191 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_583(&Local_2157, iParam4, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
			}
			else
			{
				uParam0 = uLocal_2113[1];
				uParam1 = uLocal_2113[2];
				iParam2 = uLocal_2113[0];
				iLocal_2191 = 0;
				GlobalFunc_729(&uLocal_2113, 1, 0);
				GlobalFunc_729(&uLocal_2113, 0, 0);
				GlobalFunc_729(&uLocal_2113, 2, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_542(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x466B6
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
			GlobalFunc_9136(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9136((*uParam0)[uParam0->f_7], 0);
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
		GlobalFunc_10842(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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









































int func_583(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x4C018
{
	return GlobalFunc_9195(uParam0, 0, uParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}








































void func_623(int iParam0)//Position - 0x4E15D
{
	if (!PED::IS_PED_INJURED(uLocal_2113[iParam0]))
	{
		GlobalFunc_729(&uLocal_2113, iParam0, 0);
	}
	else
	{
		GlobalFunc_729(&uLocal_2113, iParam0, 1);
	}
}


int func_625(char* sParam0)//Position - 0x4E1AA
{
	if (GlobalFunc_663(sParam0, 0, 0) || GlobalFunc_74(sParam0))
	{
		sLocal_1925 = sParam0;
		return 2;
	}
	else if (!MISC::IS_STRING_NULL(sLocal_1925))
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_1925, sParam0))
		{
			return 3;
		}
	}
	return 0;
}

int func_626(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x4E1F1
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
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8386(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				GlobalFunc_11318(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				GlobalFunc_11333(*iParam0, bParam6);
				GlobalFunc_516(*iParam0);
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










































































































































































void func_796(int iParam0)//Position - 0x7B985
{
	int iVar0;
	
	iVar0 = iLocal_1419;
	iVar0++;
	if (iLocal_1419 == 1)
	{
		iVar0++;
	}
	if (iParam0 == 16)
	{
		iLocal_1419 = iVar0;
	}
	else
	{
		iLocal_1419 = iParam0;
	}
	func_801();
	func_800(57);
	func_799();
	func_798();
	func_797();
	iLocal_1753 = 0;
}

void func_797()//Position - 0x7B9D3
{
	bLocal_4016 = false;
	sLocal_4017 = "";
	iLocal_4015 = 0;
}

void func_798()//Position - 0x7B9E9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4308)
	{
		Local_4308[iVar0 /*5*/] = 0;
		Local_4308[iVar0 /*5*/].f_1 = 0;
		Local_4308[iVar0 /*5*/].f_2 = 0;
		Local_4308[iVar0 /*5*/].f_3 = 0;
		Local_4308[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

void func_799()//Position - 0x7BA35
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4018)
	{
		Local_4018[iVar0 /*4*/] = 0;
		Local_4018[iVar0 /*4*/].f_1 = 0;
		Local_4018[iVar0 /*4*/].f_2 = 0;
		Local_4018[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_800(int iParam0)//Position - 0x7BA77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4434)
	{
		if (Local_4434[iVar0 /*10*/] != iParam0 || Local_4434[iVar0 /*10*/] == 0)
		{
			if (Local_4434[iVar0 /*10*/].f_4)
			{
				Local_4434[iVar0 /*10*/].f_1 = 1;
				Local_4434[iVar0 /*10*/].f_6 = 99;
				func_233(iVar0, Local_4434[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
			}
			Local_4434[iVar0 /*10*/] = 0;
			Local_4434[iVar0 /*10*/].f_1 = 0;
			Local_4434[iVar0 /*10*/].f_2 = 0;
			Local_4434[iVar0 /*10*/].f_3 = 0;
			Local_4434[iVar0 /*10*/].f_6 = 0;
			Local_4434[iVar0 /*10*/].f_4 = 0;
			Local_4434[iVar0 /*10*/].f_7 = 0;
			Local_4434[iVar0 /*10*/].f_8 = 0;
			Local_4434[iVar0 /*10*/].f_5 = 0;
			Local_4434[iVar0 /*10*/].f_9 = 0f;
		}
		iVar0++;
	}
}

void func_801()//Position - 0x7BB48
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4043)
	{
		Local_4043[iVar0 /*7*/] = 0;
		Local_4043[iVar0 /*7*/].f_1 = 0;
		Local_4043[iVar0 /*7*/].f_2 = 0;
		Local_4043[iVar0 /*7*/].f_3 = 0;
		Local_4043[iVar0 /*7*/].f_4 = 0;
		Local_4043[iVar0 /*7*/].f_5 = 0;
		Local_4043[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

int func_802()//Position - 0x7BBA8
{
	func_233(1, 15, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 239, 1);
	switch (iLocal_1753)
	{
		case 0:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			GlobalFunc_2427(8, 1);
			func_863(71, 14, 0);
			func_863(79, 3, 0);
			if (CLOCK::GET_CLOCK_HOURS() < 21 && CLOCK::GET_CLOCK_HOURS() > 4)
			{
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0);
				iLocal_1753 = 1001;
			}
			else
			{
				func_476(1, 15, 1);
				iLocal_1753 = 2;
			}
			break;
		
		case 1001:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0))
			{
				Local_3117.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
				CAM::ADD_CAM_SPLINE_NODE(Local_3117.f_4, 416.8213f, -963.6541f, 30.9451f, 22.2372f, 0f, -121.6787f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_3117.f_4, 417.4168f, -964.0216f, 31.2312f, 22.2372f, 0f, -121.6787f, 4500, 3, 2);
				CAM::SET_CAM_FOV(Local_3117.f_4, 46.25f);
				CAM::SET_CAM_ACTIVE(Local_3117.f_4, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-4f, 1065353216);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				GlobalFunc_163();
				iLocal_1408 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_1408, "TIME_LAPSE_MASTER", 0, 1);
				AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
				uLocal_3129 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(418.9293f, -969.5886f, 29.41168f, 2.3125f, 3.4375f, 1f, 0f, 0, 7);
				PED::ADD_SCENARIO_BLOCKING_AREA(Vector(29.41168f, -969.5886f, 418.9293f) - Vector(1f, 3.4375f, 2.3125f), Vector(29.41168f, -969.5886f, 418.9293f) + Vector(1f, 3.4375f, 2.3125f), 0, 1, 1, 1);
				MISC::CLEAR_AREA_OF_PEDS(420.26f, -978.76f, 28.83f, 15.625f, 0);
				uLocal_3130 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(28.43f, -979.87f, 417.65f) - Vector(7.875f, 18.4375f, 16.625f), Vector(28.43f, -979.87f, 417.65f) + Vector(7.875f, 18.4375f, 16.625f), 0, 1, 1, 1);
				iLocal_1753 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_5077();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_163();
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			if (GlobalFunc_9196(21, 0, "", "", &Local_3117, -1082130432, 0, 1, 1065353216) && Local_4434[1 /*10*/].f_6 == 2)
			{
				Local_4434[1 /*10*/].f_6 = 3;
				AUDIO::STOP_SOUND(iLocal_1408);
				AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3130, 0);
				func_804(2);
				iLocal_1753 = 2;
			}
			break;
		
		case 2:
			func_482(1, 29);
			func_803(0, 1, 1, 15, 0, 0, 1, 0);
			func_534(2, 3, 0, 1, 0, 0, 1, 0);
			func_534(3, 4, 5, 9, 0, 0, 1, 0);
			func_509(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
			func_509(1, 2, 2, 4, 5, 18, 1, 0, 1, 0);
			func_523(3, 6, 7, 10);
			func_509(5, 9, 2, 29, 5, 27, 4, 18, 1, 0);
			func_509(8, 8, 2, 10, 1, 0, 1, 0, 1, 0);
			func_233(0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			func_233(2, 3, 0, 2, 4, 1, 0, 1, 0, 1, 0);
			func_233(3, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			func_233(4, 6, 0, 2, 12, 1, 0, 1, 0, 1, 0);
			func_233(5, 7, 0, 2, 15, 1, 0, 1, 0, 1, 0);
			func_233(6, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			func_233(7, 10, 0, 2, 19, 1, 0, 1, 0, 1, 0);
			func_233(8, 11, 0, 2, 22, 4, 27, 1, 0, 1, 0);
			func_233(10, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			func_507(12, 12, 5, 9);
			func_154(7);
			func_154(1);
			func_154(2);
			func_154(3);
			func_154(4);
			func_154(5);
			func_154(6);
			func_154(8);
			func_154(9);
			if (func_57(23))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[9 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[9 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[10 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[10 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[11 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[11 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[12 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[12 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[13 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[13 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[5 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[5 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[6 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[6 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[7 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[7 /*14*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1471[8 /*14*/]))
				{
					PED::DELETE_PED(&(Local_1471[8 /*14*/]));
				}
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_3939))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_3939);
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_803(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x7C0AF
{
	if (Local_4018[iParam0 /*4*/].f_1 == 0)
	{
		if (Local_4434[iParam2 /*10*/].f_3)
		{
			iParam3 = iParam3;
			func_160(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, 1, 0);
		}
	}
}

void func_804(int iParam0)//Position - 0x7C0E6
{
	iLocal_1457 = 1;
	iLocal_1456 = iParam0;
	func_805(iParam0);
}

void func_805(int iParam0)//Position - 0x7C0FD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1425.x)
	{
		if (iParam0 >= Local_1425[iVar0 /*3*/] && iParam0 < Local_1425[iVar0 /*3*/].f_1)
		{
		}
		else if (Local_1425[iVar0 /*3*/].f_2)
		{
			switch (iVar0)
			{
				case 0:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2officer");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					STREAMING::REMOVE_ANIM_DICT("reaction@points@");
					STREAMING::REMOVE_ANIM_DICT("switch@trevor@head_in_sink");
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
					break;
				
				case 1:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("polmav"));
					break;
				
				case 2:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3135);
					break;
				
				case 3:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_package_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("boxville2"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_f_y_hooker_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_janitor"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beach_02"));
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2MUGGING");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2PERVERT");
					break;
				
				case 4:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_f_y_hooker_02"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_f_y_hooker_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_y_fibmugger_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_og_boss_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beach_02"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gar_door_05"));
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2PIMPSEX");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2CHAD_GOODBYE");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2_bum");
					STREAMING::REMOVE_ANIM_DICT("CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a");
					VEHICLE::REMOVE_VEHICLE_RECORDING(102, "CS2");
					VEHICLE::REMOVE_VEHICLE_RECORDING(103, "CS2");
					TASK::REMOVE_WAYPOINT_RECORDING("cs2_01");
					AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
					break;
				
				case 5:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3136);
					break;
				
				case 6:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ztype"));
					break;
				
				case 7:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dominator"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("habanero"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dubsta"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3135);
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2peeing");
					STREAMING::REMOVE_ANIM_DICT("misscarstealfinalecar_5_ig_1");
					STREAMING::REMOVE_ANIM_DICT("missarmenian2lamar_idles");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2Chad_waiting");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2CAR_STOLEN");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2CHAD_GARAGE");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2switch");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2fixer");
					TASK::REMOVE_WAYPOINT_RECORDING("cs2_10");
					break;
				
				case 8:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_devin"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_devinsec_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cs_molly"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_01"));
					STREAMING::REMOVE_ANIM_DICT("misscarsteal2leadinoutcar_2_mcs_1");
					break;
				
				case 9:
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
					break;
			}
			Local_1425[iVar0 /*3*/].f_2 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1425.x)
	{
		if (iParam0 >= Local_1425[iVar0 /*3*/] && iParam0 < Local_1425[iVar0 /*3*/].f_1)
		{
			switch (iVar0)
			{
				case 0:
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2officer");
					STREAMING::REQUEST_ANIM_DICT("reaction@points@");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					STREAMING::REQUEST_ANIM_DICT("switch@trevor@head_in_sink");
					break;
				
				case 1:
					STREAMING::REQUEST_MODEL(joaat("polmav"));
					break;
				
				case 2:
					STREAMING::REQUEST_MODEL(iLocal_3135);
					break;
				
				case 3:
					STREAMING::REQUEST_MODEL(joaat("prop_cs_package_01"));
					STREAMING::REQUEST_MODEL(joaat("boxville2"));
					STREAMING::REQUEST_MODEL(joaat("s_f_y_hooker_01"));
					STREAMING::REQUEST_MODEL(joaat("s_m_m_janitor"));
					STREAMING::REQUEST_MODEL(joaat("a_m_y_beach_02"));
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2MUGGING");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2PERVERT");
					break;
				
				case 4:
					STREAMING::REQUEST_MODEL(joaat("s_f_y_hooker_02"));
					STREAMING::REQUEST_MODEL(joaat("s_f_y_hooker_01"));
					STREAMING::REQUEST_MODEL(joaat("u_m_y_fibmugger_01"));
					STREAMING::REQUEST_MODEL(joaat("a_m_m_og_boss_01"));
					STREAMING::REQUEST_MODEL(joaat("a_c_rottweiler"));
					STREAMING::REQUEST_MODEL(joaat("a_m_y_beach_02"));
					STREAMING::REQUEST_MODEL(joaat("prop_gar_door_05"));
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2PIMPSEX");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2CHAD_GOODBYE");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2_bum");
					STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "CS2");
					VEHICLE::REQUEST_VEHICLE_RECORDING(103, "CS2");
					TASK::REQUEST_WAYPOINT_RECORDING("cs2_01");
					break;
				
				case 5:
					STREAMING::REQUEST_MODEL(iLocal_3136);
					break;
				
				case 6:
					STREAMING::REQUEST_MODEL(joaat("ztype"));
					break;
				
				case 7:
					STREAMING::REQUEST_MODEL(joaat("burrito"));
					STREAMING::REQUEST_MODEL(joaat("dominator"));
					STREAMING::REQUEST_MODEL(joaat("habanero"));
					STREAMING::REQUEST_MODEL(joaat("dubsta"));
					STREAMING::REQUEST_MODEL(iLocal_3135);
					STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_01"));
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2peeing");
					STREAMING::REQUEST_ANIM_DICT("misscarstealfinalecar_5_ig_1");
					STREAMING::REQUEST_ANIM_DICT("missarmenian2lamar_idles");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2Chad_waiting");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2CAR_STOLEN");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2CHAD_GARAGE");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2switch");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2fixer");
					TASK::REQUEST_WAYPOINT_RECORDING("cs2_10");
					break;
				
				case 8:
					STREAMING::REQUEST_MODEL(joaat("ig_devin"));
					STREAMING::REQUEST_MODEL(joaat("shamal"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_devinsec_01"));
					STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
					STREAMING::REQUEST_MODEL(joaat("cs_molly"));
					STREAMING::REQUEST_MODEL(joaat("tailgater"));
					STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_01"));
					STREAMING::REQUEST_ANIM_DICT("misscarsteal2leadinoutcar_2_mcs_1");
					break;
				
				case 9:
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0);
					break;
			}
			Local_1425[iVar0 /*3*/].f_2 = 1;
		}
		iVar0++;
	}
}

int func_806()//Position - 0x7C624
{
	int iVar0;
	
	if (iLocal_1457)
	{
		iVar0 = 0;
		while (iVar0 < Local_1425.x)
		{
			if (!func_408(iVar0, 0))
			{
				return 0;
			}
			iVar0++;
		}
	}
	iLocal_1457 = 0;
	return 1;
}

int func_807()//Position - 0x7C65A
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
	{
		return 1;
	}
	return 0;
}

int func_808(var uParam0)//Position - 0x7C67E
{
	if (uParam0->f_1 == 1)
	{
		return 1;
	}
	return 0;
}



int func_811()//Position - 0x7C6CC
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
	{
		if ((iLocal_1419 > 5 && iLocal_1419 < 7) || (iLocal_1419 == 5 && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 3)))
		{
			if (iLocal_4818 == 0)
			{
				iVar0 = 0;
				while (iVar0 < Local_3318)
				{
					if (iVar0 >= 0)
					{
						if (Local_3318[iVar0 /*8*/].f_3 >= 1)
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3318[iVar0 /*8*/].f_3, sLocal_1417);
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < Local_3318)
				{
					if (iVar0 > 0)
					{
						if (Local_3318[iVar0 /*8*/].f_3 >= 1)
						{
							if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3318[iVar0 /*8*/].f_3, sLocal_1417))
							{
								return 0;
							}
						}
					}
					iVar0++;
				}
				iLocal_4818 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
		else if (iLocal_4818)
		{
			if (iLocal_1419 < 5 || iLocal_1419 > 7)
			{
				iVar0 = 0;
				while (iVar0 < Local_3318)
				{
					if (iVar0 > 0)
					{
						if (Local_3318[iVar0 /*8*/].f_3 >= 1)
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3318[iVar0 /*8*/].f_3, sLocal_1417))
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3318[iVar0 /*8*/].f_3, sLocal_1417);
							}
						}
					}
					iVar0++;
				}
				iLocal_4818 = 0;
			}
		}
	}
	return 0;
}

int func_812(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x7C810
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_298)
	{
		if (uParam0->f_298[iVar0 /*11*/] == iParam1)
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_433)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_433[iVar1 /*4*/]), ""))
				{
					StringCopy(&(uParam0->f_433[iVar1 /*4*/]), sParam2, 16);
					uParam0->f_298[iVar0 /*11*/].f_6 = iVar1;
					if (iParam3 != -1)
					{
						iVar2 = 0;
						while (iVar2 <= 7)
						{
							MISC::CLEAR_BIT(&(uParam0->f_298[iVar0 /*11*/].f_5), (24 + iVar2));
							iVar2++;
						}
						MISC::SET_BIT(&(uParam0->f_298[iVar0 /*11*/].f_5), (23 + iParam3));
					}
					return 1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_813(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x7C8C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_298)
	{
		if (iVar0 < 10)
		{
			if (uParam0->f_298[iVar0 /*11*/] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_127 < 10 && uParam0->f_127 >= 0)
	{
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 0);
		}
		if (iParam7 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 1);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 2);
		}
		if (iParam6 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 3);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 3);
		}
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 5);
		}
		if (iParam8 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 8);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 8);
		}
		if (iParam7 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 9);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 9);
		}
		uParam0->f_298[uParam0->f_127 /*11*/] = iParam1;
		uParam0->f_298[uParam0->f_127 /*11*/].f_4 = iParam3;
		uParam0->f_298[uParam0->f_127 /*11*/].f_1 = 0;
		uParam0->f_298[uParam0->f_127 /*11*/].f_3 = 0f;
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_MALE(iParam1))
			{
				MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_5), MISC::GET_RANDOM_INT_IN_RANGE(0, 7));
				MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_5), MISC::GET_RANDOM_INT_IN_RANGE(0, 7) + 16);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_5), MISC::GET_RANDOM_INT_IN_RANGE(8, 15));
				MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_5), MISC::GET_RANDOM_INT_IN_RANGE(0, 7) + 16);
			}
		}
		if (iParam3 == 1)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) > 0)
			{
				MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 4);
				MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 6);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 4);
			}
		}
		if (iParam3 == 2)
		{
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 4);
			MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 6);
		}
		if (iParam3 == 3)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 4)
			{
				MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 4);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 2)
				{
					MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 6);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_2), 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_298[uParam0->f_127 /*11*/].f_2, 6))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= (iVar1 - 1))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 7);
				MISC::SET_BIT(&(uParam0->f_298[uParam0->f_127 /*11*/].f_5), iVar2 + 24);
				iVar0++;
			}
		}
		uParam0->f_127++;
		return 1;
	}
	return 0;
}

void func_814(var uParam0, int iParam1)//Position - 0x7CC28
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		uParam0->f_9 = GlobalFunc_217(uParam0->f_8);
	}
	if (*uParam0 == 0)
	{
		if (func_824(uParam0, iParam1))
		{
			*uParam0 = 1;
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			func_823(uParam0);
			func_819(uParam0);
			func_816(uParam0);
			func_815(uParam0);
		}
		func_465(uParam0);
		func_446(uParam0, iParam1);
		GlobalFunc_2516();
	}
}

void func_815(var uParam0)//Position - 0x7CC9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_242)
	{
		if (uParam0->f_242[iVar0 /*11*/].f_5 != -1)
		{
			if (uParam0->f_242[iVar0 /*11*/].f_3 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_242[iVar0 /*11*/].f_3))
				{
					uParam0->f_242[iVar0 /*11*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_242[iVar0 /*11*/].f_3, 1) };
				}
			}
			if (uParam0->f_242[iVar0 /*11*/].f_4 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_242[iVar0 /*11*/].f_4))
				{
					uParam0->f_242[iVar0 /*11*/] = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_242[iVar0 /*11*/].f_4, 0) };
				}
			}
		}
		iVar0++;
	}
}

void func_816(var uParam0)//Position - 0x7CD38
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	bool bVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	struct<3> Var20;
	float fVar23;
	float fVar24;
	struct<3> Var25;
	float fVar28;
	
	fVar5 = -75f;
	if (uParam0->f_480)
	{
		fVar5 = -25f;
	}
	if (uParam0->f_33 == 1)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_32))
		{
			if (!CAM::IS_CAM_ACTIVE(uParam0->f_32))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_32, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
		}
		if (uParam0->f_35)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				Var6 = { CAM::GET_CAM_COORD(uParam0->f_32) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var6.x, Var6.f_1, (Var6.f_2 + 1f), &fVar9))
				{
					if (fVar9 > Var6.f_2)
					{
						uParam0->f_34 = 1;
					}
				}
			}
		}
		if (uParam0->f_35 == 0)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
					{
						if (uParam0->f_4)
						{
							switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_9))
							{
								case joaat("valkyrie"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 5.32f, -0.3f, 1);
									break;
								
								case joaat("valkyrie2"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 5.32f, -0.3f, 1);
									break;
								
								case joaat("polmav"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 2.75f, -1.25f, 1);
									break;
								
								case joaat("maverick"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 2.75f, -1.25f, 1);
									break;
								
								default:
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.618f, 1);
									break;
							}
						}
						else
						{
							switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_9))
							{
								case joaat("buzzard"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.468f, 1);
									break;
								
								case joaat("polmav"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 2.75f, -1.25f, 1);
									break;
								
								case joaat("buzzard2"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.618f, 1);
									break;
								
								case joaat("valkyrie"):
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 5.32f, -0.3f, 1);
									break;
								
								default:
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_32, uParam0->f_9, 0f, 1.958f, -0.618f, 1);
									break;
								}
						}
						uParam0->f_35 = 1;
					}
				}
			}
		}
		if ((uParam0->f_35 == 1 && uParam0->f_7 == 0) && uParam0->f_54 == 0)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_32))
			{
				if (CAM::IS_CAM_ACTIVE(uParam0->f_32))
				{
					if (!GlobalFunc_126(1))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 19) && !HUD::IS_PAUSE_MENU_ACTIVE())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 39);
							fVar10 = 128f;
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								fVar10 = 15f;
								fVar3 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar10);
								fVar4 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar10);
							}
							else
							{
								iVar2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar10));
								iVar1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar10));
							}
							iVar0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(0, 39) * 128f));
						}
						if (!PAD::_IS_USING_KEYBOARD(0))
						{
							if (iVar0 > 0)
							{
								iVar0 = (iVar0 - 22);
								if (iVar0 < 0)
								{
									iVar0 = 0;
								}
							}
							if (iVar0 < 0)
							{
								iVar0 += 22;
								if (iVar0 > 0)
								{
									iVar0 = 0;
								}
							}
							if (iVar2 > 0)
							{
								iVar2 = (iVar2 - 22);
								if (iVar2 < 0)
								{
									iVar2 = 0;
								}
							}
							if (iVar2 < 0)
							{
								iVar2 += 22;
								if (iVar2 > 0)
								{
									iVar2 = 0;
								}
							}
							if (iVar1 > 0)
							{
								iVar1 = (iVar1 - 22);
								if (iVar1 < 0)
								{
									iVar1 = 0;
								}
							}
							if (iVar1 < 0)
							{
								iVar1 += 22;
								if (iVar1 > 0)
								{
									iVar1 = 0;
								}
							}
						}
						fVar11 = ((uParam0->f_121 / -75f) * 0.5f);
						if (fVar11 > 0f)
						{
							fVar11 = (fVar11 + 1f);
						}
						else
						{
							fVar11 = 1f;
						}
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							uParam0->f_135 = ((fVar3 * uParam0->f_40) * uParam0->f_36);
							uParam0->f_136 = (((fVar4 * uParam0->f_40) * uParam0->f_36) * fVar11);
						}
						else
						{
							uParam0->f_135 = (((SYSTEM::TO_FLOAT(iVar2) * uParam0->f_40) * uParam0->f_36) * SYSTEM::TIMESTEP());
							uParam0->f_136 = ((((SYSTEM::TO_FLOAT(iVar1) * uParam0->f_40) * uParam0->f_36) * fVar11) * SYSTEM::TIMESTEP());
						}
						uParam0->f_136 = GlobalFunc_2235(uParam0->f_136, -1020002304, 1127481344);
						if (GlobalFunc_100(uParam0->f_124, 0f, 0f, 0f))
						{
							Var12 = { CAM::GET_CAM_COORD(uParam0->f_32) };
							uParam0->f_124 = (SYSTEM::SIN(uParam0->f_121.f_2) * 150f);
							uParam0->f_124.f_1 = (SYSTEM::COS(uParam0->f_121.f_2) * 150f);
							uParam0->f_124.f_2 = Var12.f_2;
						}
						if (uParam0->f_4)
						{
							if (iVar2 != 0 && iVar1 != 0)
							{
								uParam0->f_121 = { CAM::GET_CAM_ROT(uParam0->f_32, 2) };
							}
						}
						else
						{
							uParam0->f_121 = { CAM::GET_CAM_ROT(uParam0->f_32, 2) };
						}
						if (!GlobalFunc_100(CAM::GET_CAM_COORD(uParam0->f_32), 0f, 0f, 0f))
						{
							if (uParam0->f_25 != 0f)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
								{
									fVar16 = ENTITY::GET_ENTITY_HEADING(uParam0->f_8);
									fVar17 = (fVar16 - uParam0->f_121.f_2);
									while (MISC::ABSF(fVar17) >= 180f && iVar18 < 30)
									{
										if (fVar17 < 0f)
										{
											fVar17 = (fVar17 + 360f);
										}
										else
										{
											fVar17 = (fVar17 - 360f);
										}
										iVar18++;
										if (iVar18 == 30)
										{
										}
									}
									if (MISC::ABSF(fVar17) > uParam0->f_25)
									{
										bVar15 = true;
										if (fVar17 > 0f)
										{
											uParam0->f_121.f_2 = (fVar16 - uParam0->f_25);
										}
										else
										{
											uParam0->f_121.f_2 = (fVar16 + uParam0->f_25);
										}
									}
								}
							}
							if (uParam0->f_135 != 0f || uParam0->f_136 != 0f)
							{
								iLocal_33++;
								uParam0->f_121 = { uParam0->f_121 + Vector(-uParam0->f_136, 0f, uParam0->f_135) };
								if (uParam0->f_121 < fVar5)
								{
									uParam0->f_121 = fVar5;
								}
								if (uParam0->f_121 > 6f)
								{
									uParam0->f_121 = 6f;
								}
								if (iLocal_33 > 5)
								{
									if (!GlobalFunc_537(Local_30, uParam0->f_121, 0.05f))
									{
										Local_30 = { uParam0->f_121 };
										iLocal_34 = 0;
									}
									else
									{
										iLocal_34 = 1;
									}
									iLocal_33 = 0;
								}
								if (uParam0->f_473 != -1)
								{
									if (bVar15)
									{
										fVar19 = 0f;
									}
									else
									{
										fVar19 = (fVar19 + MISC::ABSF(uParam0->f_136));
									}
									if (uParam0->f_121 < 6f && uParam0->f_121 > -75f)
									{
										fVar19 = (fVar19 + MISC::ABSF(uParam0->f_135));
									}
									if (fVar19 != 0f)
									{
										if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_473) && !iLocal_34)
										{
											AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_473, "COP_HELI_CAM_TURN", 0, 1);
										}
										if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_473))
										{
											if (!iLocal_34)
											{
												AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_473, "Ctrl", fVar19);
											}
											else
											{
												AUDIO::STOP_SOUND(uParam0->f_473);
												iLocal_33 = 6;
											}
										}
									}
								}
							}
							else if (uParam0->f_473 != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_473))
								{
									AUDIO::STOP_SOUND(uParam0->f_473);
									iLocal_34 = 1;
									iLocal_33 = 6;
								}
							}
							Var20 = { uParam0->f_238 };
							if (uParam0->f_4)
							{
								fVar23 = 150f;
							}
							else
							{
								fVar23 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var20, CAM::GET_CAM_COORD(uParam0->f_32), 1);
							}
							uParam0->f_124 = ((SYSTEM::COS(uParam0->f_121) * fVar23) * SYSTEM::SIN(-uParam0->f_121.f_2));
							uParam0->f_124.f_1 = ((SYSTEM::COS(uParam0->f_121) * fVar23) * SYSTEM::COS(-uParam0->f_121.f_2));
							uParam0->f_124.f_2 = (SYSTEM::SIN(uParam0->f_121) * fVar23);
							uParam0->f_124 = { uParam0->f_124 + CAM::GET_CAM_COORD(uParam0->f_32) };
							CAM::POINT_CAM_AT_COORD(uParam0->f_32, uParam0->f_124);
						}
						if (!((iVar0 == 0 || uParam0->f_40 == uParam0->f_38) || uParam0->f_40 == uParam0->f_39))
						{
							if (uParam0->f_472 != -1)
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_472))
								{
									AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_472, "COP_HELI_CAM_ZOOM", 0, 1);
								}
							}
							if (uParam0->f_472 != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_472))
								{
									AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_472, "Ctrl", MISC::ABSF((SYSTEM::TO_FLOAT(iVar0) / 128f)));
									if (iVar0 < 0)
									{
										AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_472, "Dir", -1f);
									}
								}
							}
						}
						else if (uParam0->f_472 != -1)
						{
							if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_472))
							{
								AUDIO::STOP_SOUND(uParam0->f_472);
							}
						}
						uParam0->f_40 = (uParam0->f_40 + ((SYSTEM::TO_FLOAT(iVar0) / uParam0->f_37) * SYSTEM::TIMESTEP()));
						if (uParam0->f_40 > uParam0->f_38)
						{
							uParam0->f_40 = uParam0->f_38;
						}
						if (uParam0->f_40 < uParam0->f_39)
						{
							uParam0->f_40 = uParam0->f_39;
						}
						CAM::_0x487A82C650EB7799(1f);
						CAM::SET_CAM_FOV(uParam0->f_32, uParam0->f_40);
						fVar24 = ((uParam0->f_40 - 5f) / 42f);
						GRAPHICS::_0xE2892E7E55D7073A(fVar24);
					}
				}
			}
		}
		else if (uParam0->f_35 == 1 && uParam0->f_7 == 1)
		{
			Var25 = { uParam0->f_238 };
			fVar28 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var25, CAM::GET_CAM_COORD(uParam0->f_32), 1);
			uParam0->f_124 = ((SYSTEM::COS(uParam0->f_121) * fVar28) * SYSTEM::SIN(-uParam0->f_121.f_2));
			uParam0->f_124.f_1 = ((SYSTEM::COS(uParam0->f_121) * fVar28) * SYSTEM::COS(-uParam0->f_121.f_2));
			uParam0->f_124.f_2 = (SYSTEM::SIN(uParam0->f_121) * fVar28);
			uParam0->f_124 = { uParam0->f_124 + CAM::GET_CAM_COORD(uParam0->f_32) };
			CAM::POINT_CAM_AT_COORD(uParam0->f_32, uParam0->f_124);
			CAM::SET_CAM_FOV(uParam0->f_32, uParam0->f_40);
		}
	}
	else if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_32))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_32, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
	}
}



void func_819(var uParam0)//Position - 0x7D6C4
{
	if (uParam0->f_6 == 1)
	{
		if (uParam0->f_47 == 1)
		{
			if (GlobalFunc_105(uParam0->f_61))
			{
				uParam0->f_61 = { uParam0->f_74 + Vector(0f, (SYSTEM::COS(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f)) * uParam0->f_77), (SYSTEM::SIN(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f)) * uParam0->f_77)) };
			}
			if (func_822(uParam0, uParam0->f_61, uParam0->f_69, -1f, -1, 1, 1))
			{
				if (!func_444(uParam0))
				{
					func_443(uParam0, uParam0->f_41, 1);
				}
				uParam0->f_61 = { 0f, 0f, 0f };
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			if (uParam0->f_49 == 1)
			{
				func_821(uParam0, uParam0->f_9, uParam0->f_238);
			}
		}
		func_820(uParam0);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
		}
	}
}

void func_820(var uParam0)//Position - 0x7D799
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	float fVar13;
	struct<3> Var14;
	float fVar17;
	float fVar18;
	float fVar19;
	struct<3> Var20;
	struct<3> Var23;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	float fVar47;
	
	Var0 = { Var0 };
	if (uParam0->f_48 == 1)
	{
		uParam0->f_48 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
		{
			VEHICLE::SET_VEHICLE_GRAVITY(uParam0->f_8, 0);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_8, 0);
			Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 1) };
			if (GlobalFunc_105(uParam0->f_70))
			{
				Var9 = { 0f, 0f, 0f };
			}
			else
			{
				Var9 = { ((Var3.x - uParam0->f_70) / SYSTEM::TIMESTEP()), ((Var3.f_1 - uParam0->f_70.f_1) / SYSTEM::TIMESTEP()), 0f };
			}
			uVar12 = SYSTEM::SQRT(((Var9.x * Var9.x) + (Var9.f_1 * Var9.f_1)));
			fVar13 = (uParam0->f_41 * -1f);
			if (uParam0->f_67 != -1f)
			{
				fVar17 = GlobalFunc_1695(Var3, uParam0->f_55, 0);
				fVar18 = (fVar17 + 160f);
				fVar19 = (fVar17 - 160f);
				Var20 = { uParam0->f_55 + Vector(0f, (uParam0->f_67 * SYSTEM::COS(fVar18)), (uParam0->f_67 * SYSTEM::SIN(fVar18))) };
				Var23 = { uParam0->f_55 + Vector(0f, (uParam0->f_67 * SYSTEM::COS(fVar19)), (uParam0->f_67 * SYSTEM::SIN(fVar19))) };
				fVar26 = MISC::ATAN(((Var20.x - Var3.x) / (Var20.f_1 - Var3.f_1)));
				if ((Var20.f_1 - Var3.f_1) < 0f)
				{
					fVar26 = (fVar26 + 180f);
				}
				fVar27 = MISC::ATAN(((Var23.x - Var3.x) / (Var23.f_1 - Var3.f_1)));
				if ((Var23.f_1 - Var3.f_1) < 0f)
				{
					fVar27 = (fVar27 + 180f);
				}
				fVar26 = (fVar26 - fVar13);
				fVar27 = (fVar27 - fVar13);
				fVar26 = GlobalFunc_739(fVar26, -180f, 180f);
				fVar27 = GlobalFunc_739(fVar27, -180f, 180f);
				if (MISC::ABSF(fVar26) < MISC::ABSF(fVar27))
				{
					Var14 = { Var20 };
				}
				else
				{
					Var14 = { Var23 };
				}
			}
			else
			{
				Var14 = { uParam0->f_55 };
			}
			fVar28 = GlobalFunc_1695(Var3, Var14, 0);
			fVar29 = (fVar28 - fVar13);
			if (fVar29 < -180f)
			{
				fVar29 = (fVar29 + 360f);
			}
			if (fVar29 > 180f)
			{
				fVar29 = (fVar29 - 360f);
			}
			fVar30 = uParam0->f_68;
			if (SYSTEM::TIMERA() > uParam0->f_468)
			{
				uParam0->f_468 += 500;
				uParam0->f_469 = (uParam0->f_469 * 0.9f);
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &fVar31);
				uParam0->f_469 = (uParam0->f_469 + fVar31);
			}
			Var32 = { ((SYSTEM::SIN(-fVar13) * fVar30) * -5f), ((SYSTEM::COS(-fVar13) * fVar30) * 5f), 0f };
			if (uParam0->f_67 != -1f || Var14.f_2 == -1f)
			{
				fVar35 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA(((Var3.x + Var32.x) - (fVar30 * 5f)), ((Var3.f_1 + Var32.f_1) - (fVar30 * 5f)), ((Var3.x + Var32.x) + (fVar30 * 5f)), ((Var3.f_1 + Var32.f_1) + (fVar30 * 5f)));
				if (fVar35 > (uParam0->f_469 / 10f))
				{
					fVar36 = fVar35;
				}
				else
				{
					fVar36 = ((uParam0->f_469 / 10f) + 40f);
				}
				Var14.f_2 = (fVar36 + 100f);
			}
			fVar37 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var14, 1);
			if (fVar37 > 6f)
			{
				fVar37 = 6f;
			}
			fVar38 = ((Var14.f_2 - Var3.f_2) / fVar37);
			fVar39 = (fVar38 - uParam0->f_80);
			Var0.f_2 = (Var0.f_2 + (fVar39 * SYSTEM::TIMESTEP()));
			uParam0->f_80 = (uParam0->f_80 + (fVar39 * SYSTEM::TIMESTEP()));
			Var0.f_2 = (uParam0->f_80 - 0.57f);
			fVar40 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var14, 0);
			fVar41 = 1f;
			fVar41 = fVar41;
			uVar12 = uVar12;
			fVar42 = (fVar40 / 5f);
			if (uParam0->f_66 == 0)
			{
				if (fVar42 < 30f)
				{
					fVar42 = 30f;
				}
			}
			if (MISC::ABSF((Var14.f_2 - Var3.f_2)) > 2f)
			{
				fVar43 = ((fVar40 * 10f) / MISC::ABSF((Var14.f_2 - Var3.f_2)));
				if (fVar42 > fVar43)
				{
					fVar42 = fVar43;
				}
			}
			if (fVar42 > uParam0->f_15)
			{
				fVar42 = uParam0->f_15;
			}
			if (fVar42 < uParam0->f_16)
			{
				fVar42 = uParam0->f_16;
			}
			if (uParam0->f_68 < fVar42)
			{
				if (MISC::ABSF((uParam0->f_68 - fVar42)) < 2f)
				{
					uParam0->f_68 = (uParam0->f_68 + (1f * SYSTEM::TIMESTEP()));
				}
				else
				{
					uParam0->f_68 = (uParam0->f_68 + (5f * SYSTEM::TIMESTEP()));
				}
			}
			if (uParam0->f_68 > fVar42)
			{
				if (MISC::ABSF((uParam0->f_68 - fVar42)) < 2f)
				{
					uParam0->f_68 = (uParam0->f_68 - (1f * SYSTEM::TIMESTEP()));
				}
				else
				{
					uParam0->f_68 = (uParam0->f_68 - (7f * SYSTEM::TIMESTEP()));
				}
			}
			Var0.x = (SYSTEM::SIN(fVar13) * uParam0->f_68);
			Var0.f_1 = (SYSTEM::COS(fVar13) * uParam0->f_68);
			uParam0->f_78 = Var0.x;
			uParam0->f_79 = Var0.f_1;
			if (uParam0->f_51 == 1)
			{
				fVar45 = (uParam0->f_52 - uParam0->f_53);
				fVar45 = GlobalFunc_739(fVar45, -180f, 180f);
				fVar44 = (fVar45 / 8f);
				if (fVar44 < 0f)
				{
					fVar44 = GlobalFunc_253(fVar44, -20f, -0.01f);
				}
				else
				{
					fVar44 = GlobalFunc_253(fVar44, 20f, 0.01f);
				}
				uParam0->f_53 = (uParam0->f_53 + (fVar44 * SYSTEM::TIMESTEP()));
			}
			fVar44 = fVar29;
			if (fVar44 < -60f)
			{
				fVar44 = -60f;
			}
			if (fVar44 > 60f)
			{
				fVar44 = 60f;
			}
			fVar46 = (uParam0->f_83 + (10f * SYSTEM::TIMESTEP()));
			fVar47 = (uParam0->f_83 - (10f * SYSTEM::TIMESTEP()));
			if (fVar46 > 1f)
			{
				fVar46 = 1f;
			}
			if (fVar47 < -1f)
			{
				fVar47 = -1f;
			}
			if (fVar44 > (uParam0->f_82 + fVar46))
			{
				fVar44 = (uParam0->f_82 + fVar46);
				uParam0->f_83 = fVar46;
			}
			else if (fVar44 < (uParam0->f_82 + fVar47))
			{
				fVar44 = (uParam0->f_82 + fVar47);
				uParam0->f_83 = fVar47;
			}
			else
			{
				uParam0->f_83 = (fVar44 - uParam0->f_82);
			}
			uParam0->f_82 = fVar44;
			uParam0->f_41 = (uParam0->f_41 + (-uParam0->f_82 * SYSTEM::TIMESTEP()));
			Var6 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_8, 2) };
			Var6.f_1 = (Var6.f_1 + (((fVar44 / 2f) - Var6.f_1) * SYSTEM::TIMESTEP()));
			if (uParam0->f_51 == 1)
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_8, 0f, Var6.f_1, uParam0->f_53, 2, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_8, 0f, Var6.f_1, uParam0->f_41, 2, 1);
			}
			uParam0->f_70 = { Var3 };
			uLocal_35 = uLocal_35;
			ENTITY::SET_ENTITY_VELOCITY(uParam0->f_8, Var0 + Vector(0.1f, 0f, 0f));
			uParam0->f_73 = uVar12;
		}
	}
}

void func_821(var uParam0, var uParam1, struct<3> Param2)//Position - 0x7DDC6
{
	uParam1 = uParam1;
	Param2.f_2 = 150f;
	func_822(uParam0, Param2, 5f, 100f, -1, 1, 0);
}

int func_822(var uParam0, struct<3> Param1, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)//Position - 0x7DDEF
{
	float fVar0;
	
	if (iParam8 == 1 || (iParam8 == 0 && uParam0->f_48 == 0))
	{
		uParam0->f_55 = { Param1 };
		uParam0->f_65 = iParam6;
		uParam0->f_66 = iParam7;
		uParam0->f_48 = 1;
		uParam0->f_67 = fParam5;
		if (!GlobalFunc_100(uParam0->f_55, uParam0->f_58))
		{
			uParam0->f_64 = 999999f;
			uParam0->f_58 = { uParam0->f_55 };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 1), Param1, 0);
			if (fVar0 < fParam4)
			{
				return 1;
			}
			uParam0->f_64 = fVar0;
		}
	}
	return 0;
}

void func_823(var uParam0)//Position - 0x7DE90
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	
	if (((CAM::DOES_CAM_EXIST(uParam0->f_32) && uParam0->f_7 == 0) && uParam0->f_35) && !uParam0->f_4)
	{
		iVar12 = 2;
		iVar12 = iVar12;
		Var0 = { CAM::GET_CAM_COORD(uParam0->f_32) };
		Var3 = { CAM::GET_CAM_ROT(uParam0->f_32, 2) };
		fVar17 = 0f;
		iVar18 = 0;
		iVar19 = 0;
		iVar19 = iVar19;
		fVar20 = Var0.f_2;
		fVar20 = fVar20;
		if (iVar18 == 0)
		{
			fVar21 = 0f;
			fVar22 = (SYSTEM::COS(Var3.x) * 50f);
			CAM::SET_CAM_NEAR_CLIP(uParam0->f_32, uParam0->f_12);
			if (uParam0->f_45)
			{
			}
			while (iVar12 < 21)
			{
				iVar12++;
				fVar11 = (fVar22 * IntToFloat(iVar12));
				fVar9 = ((SYSTEM::SIN(Var3.f_2) * fVar11) * -1f);
				fVar10 = (SYSTEM::COS(Var3.f_2) * fVar11);
				fVar21 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA(((Var0.x + fVar9) - 3f), ((Var0.f_1 + fVar10) - 3f), ((Var0.x + fVar9) + 3f), ((Var0.f_1 + fVar10) + 3f));
				fVar21 = (fVar21 - 20f);
				fVar20 = (Var0.f_2 + (SYSTEM::SIN(Var3.x) * (50f * IntToFloat(iVar12))));
				if (uParam0->f_45)
				{
				}
				if (fVar21 > fVar20)
				{
					if (iVar18 == 0)
					{
						iVar18 = 1;
						fVar17 = fVar21;
						iVar12 = 21;
					}
				}
			}
		}
		if (iVar18 == 0)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar24))
			{
				fVar23 = (Var0.f_2 - fVar24);
				if (fVar23 < 150f)
				{
					fVar23 = 150f;
				}
			}
			else
			{
				fVar23 = 150f;
			}
			if (Var3.x < 0f)
			{
				fVar11 = MISC::ABSF((fVar23 / MISC::TAN(Var3.x)));
				fVar17 = (Var0.f_2 - fVar23);
			}
			else
			{
				fVar11 = 1000f;
				fVar17 = (Var0.f_2 + (fVar11 * MISC::TAN(Var3.x)));
			}
		}
		fVar9 = ((SYSTEM::SIN(Var3.f_2) * fVar11) * -1f);
		fVar10 = (SYSTEM::COS(Var3.f_2) * fVar11);
		Var6 = { (fVar9 + Var0.x), (fVar10 + Var0.f_1), fVar17 };
		iVar13 = 0;
		while (iVar13 < uParam0->f_298)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_298[iVar13 /*11*/]))
			{
				if (GlobalFunc_2517(ENTITY::GET_ENTITY_COORDS(uParam0->f_298[iVar13 /*11*/], 1), 0.4f, 0.4f, 0.6f, 0.6f))
				{
					iVar18 = 1;
					iVar19 = 1;
					Var6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_298[iVar13 /*11*/], 1) };
					fVar17 = Var14.f_2;
				}
			}
			iVar13++;
		}
		uParam0->f_238 = { Var6 };
	}
	if (uParam0->f_45)
	{
	}
}

int func_824(var uParam0, var uParam1)//Position - 0x7E0DB
{
	uParam0->f_5 = uParam1;
	uParam0->f_141 = 93;
	uParam0->f_141.f_1 = 182;
	uParam0->f_141.f_2 = 229;
	uParam0->f_144 = 255;
	uParam0->f_144.f_1 = 0;
	uParam0->f_144.f_2 = 0;
	uParam0->f_147 = 255;
	uParam0->f_147.f_1 = 255;
	uParam0->f_147.f_2 = 255;
	uParam0->f_150 = 255;
	uParam0->f_150.f_1 = 40;
	uParam0->f_150.f_2 = 0;
	uParam0->f_15 = 40f;
	uParam0->f_36 = 0.0075f;
	uParam0->f_37 = 20f;
	uParam0->f_40 = 28f;
	uParam0->f_133 = 0.234f;
	uParam0->f_137 = 22;
	uParam0->f_138 = 201;
	uParam0->f_139 = 39;
	uParam0->f_140 = 181;
	uParam0->f_153 = 0.044f;
	uParam0->f_154 = 0.02f;
	uParam0->f_156 = 1240f;
	uParam0->f_157 = 5000f;
	uParam0->f_158 = 1000f;
	uParam0->f_160 = 0.829f;
	uParam0->f_161 = 0.096f;
	uParam0->f_162 = 0.865f;
	uParam0->f_163 = 0.567f;
	uParam0->f_164 = 0.087f;
	uParam0->f_18 = 140f;
	uParam0->f_19 = 1f;
	uParam0->f_20 = 3f;
	uParam0->f_21 = 1f;
	uParam0->f_167 = 0.052f;
	uParam0->f_168 = 0.75f;
	uParam0->f_169 = 0.86f;
	uParam0->f_170 = 0.02f;
	uParam0->f_465 = 0.65f;
	uParam0->f_466 = 0.024f;
	uParam0->f_236 = 0.12f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		HUD::REQUEST_ADDITIONAL_TEXT("CHOPPER", 5);
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("CHOPPER", 5))
		{
			return 1;
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT("CHOPPER", 3);
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("CHOPPER", 3))
		{
			return 1;
		}
	}
	return 0;
}


void func_826(int iParam0)//Position - 0x7E281
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1990[iVar0 /*6*/] == iParam0)
		{
			Local_1990[iVar0 /*6*/].f_2 = 99;
		}
		iVar0++;
	}
}

void func_827(int iParam0, bool bParam1)//Position - 0x7E2B3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	struct<6> Var9;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	var uVar20;
	struct<3> Var21;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Local_1990[iVar0 /*6*/].f_1 == 1)
			{
				if (iParam0 == 91 || Local_1990[iVar0 /*6*/] == iParam0)
				{
					if (iLocal_1419 >= Local_1990[iVar0 /*6*/].f_5)
					{
						Local_1990[iVar0 /*6*/].f_2 = 99;
					}
					if (Local_1990[iVar0 /*6*/].f_2 == 99)
					{
						Local_1990[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_1990[iVar0 /*6*/])
					{
						case 1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1724[0 /*2*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1724[0 /*2*/]))
								{
									if (Local_1990[iVar0 /*6*/].f_2 == 0)
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[0 /*2*/]))
										{
											ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 1);
											Local_1990[iVar0 /*6*/].f_2 = 1;
										}
									}
									else if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1724[0 /*2*/], -1))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[0 /*2*/], 1);
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
								}
							}
							break;
						
						case 8:
							if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1471[1 /*14*/], 1), 0) > 200f)
									{
										PED::DELETE_PED(&(Local_1471[1 /*14*/]));
										if (ENTITY::DOES_ENTITY_EXIST(Local_1724[3 /*2*/]))
										{
											VEHICLE::DELETE_VEHICLE(&(Local_1724[3 /*2*/]));
										}
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
								}
							}
							break;
						
						case 2:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2674[0 /*11*/], 0) < 950f)
									{
										func_804(4);
										func_530(&Local_2193, 0f, 50f);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 1:
									if (func_862(4))
									{
										func_863(50, 14, 0);
										func_863(52, 14, 0);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 2:
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2674[0 /*11*/], 0) < 750f)
									{
										GlobalFunc_5105();
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 3:
									if (!GlobalFunc_111())
									{
										func_863(66, 5, 0);
										func_530(&Local_2193, 0f, 25f);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 4:
									if (func_235(4, "cs2_arrive", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
									{
										AUDIO::START_AUDIO_SCENE("CAR_2_SCAN_THE_SUSPECTS");
										Local_1990[iVar0 /*6*/].f_2 = 2001;
									}
									break;
								
								case 2001:
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2674[0 /*11*/], 0) < 350f)
									{
										func_530(&Local_2193, 0f, 25f);
										Local_1990[iVar0 /*6*/].f_2 = 2002;
									}
									break;
								
								case 2002:
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2674[0 /*11*/], 0) < 250f)
										{
											Local_1990[iVar0 /*6*/].f_2 = 2003;
										}
									}
									break;
								
								case 2003:
									if (((func_59(&Local_2193, Local_1471[5 /*14*/]) || func_59(&Local_2193, Local_1471[9 /*14*/])) || func_59(&Local_2193, Local_1471[7 /*14*/])) || func_59(&Local_2193, Local_1471[8 /*14*/]))
									{
										func_863(74, 14, 0);
										Local_1990[iVar0 /*6*/].f_2 = 5;
									}
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2674[0 /*11*/], 0) < 220f)
									{
										if (!GlobalFunc_111())
										{
											func_863(74, 14, 0);
											Local_1990[iVar0 /*6*/].f_2 = 5;
										}
									}
									break;
								
								case 5:
									iVar1 = 0;
									if (func_59(&Local_2193, Local_1471[7 /*14*/]) || !func_861(&Local_2193, Local_1471[7 /*14*/]))
									{
										iVar1++;
									}
									if (func_59(&Local_2193, Local_1471[8 /*14*/]) || !func_861(&Local_2193, Local_1471[8 /*14*/]))
									{
										iVar1++;
									}
									if (func_59(&Local_2193, Local_1471[9 /*14*/]) || !func_861(&Local_2193, Local_1471[9 /*14*/]))
									{
										iVar1++;
									}
									if (func_59(&Local_2193, Local_1471[5 /*14*/]) || !func_861(&Local_2193, Local_1471[5 /*14*/]))
									{
										iVar1++;
									}
									if (iVar1 == 4)
									{
										GlobalFunc_565(105, 1, 0);
										GlobalFunc_565(105, 1, 0);
										GlobalFunc_565(105, 1, 0);
										GlobalFunc_565(105, 1, 0);
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
									break;
							}
							break;
						
						case 6:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									func_804(5);
									if (!func_44("CS2_scan_wom") && !func_44("CS2_scanning"))
									{
										if (func_235(4, "CS2_tryNext", 1, 0, "Franklin", 0, Local_1471[1 /*14*/], "Trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_1990[iVar0 /*6*/].f_2 = 1;
										}
									}
									break;
								
								case 1:
									if (GlobalFunc_5664("CS2_tryNext"))
									{
										Local_1990[iVar0 /*6*/].f_2 = 2;
									}
									break;
								
								case 2:
									if (func_862(5) || func_862(6))
									{
										func_863(53, 14, 0);
										func_863(54, 14, 0);
										func_863(84, 14, 0);
										func_863(85, 14, 0);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 3:
									if (!GlobalFunc_5664("CS2_tryNext"))
									{
										func_522(&Local_2193, Local_1471[7 /*14*/]);
										func_522(&Local_2193, Local_1471[9 /*14*/]);
										func_522(&Local_2193, Local_1471[8 /*14*/]);
										func_522(&Local_2193, Local_1471[5 /*14*/]);
										func_522(&Local_2193, Local_1471[6 /*14*/]);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 4:
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
									{
										func_863(67, 6, 0);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 5:
									if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
									{
										PED::DELETE_PED(&(Local_1471[4 /*14*/]));
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1724[1 /*2*/]))
									{
										if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1724[1 /*2*/], 0))
										{
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1724[1 /*2*/], 1, 1);
										}
										VEHICLE::DELETE_VEHICLE(&(Local_1724[1 /*2*/]));
									}
									if (GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, -93.4581f, -66.9989f, 55.8005f, 345.5313f, 1, 1))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
										{
											ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[1 /*2*/], 1);
											VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1724[1 /*2*/], 0);
										}
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 6:
									if (func_626(&(Local_1471[4 /*14*/]), 1, Local_1724[1 /*2*/], -1, 1, 0, 0))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
										{
											if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1724[1 /*2*/], -1))
											{
												PED::SET_PED_INTO_VEHICLE(Local_1471[4 /*14*/], Local_1724[1 /*2*/], -1);
											}
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1724[1 /*2*/], 102, sLocal_1417, 1);
											PATHFIND::SET_ROADS_IN_ANGLED_AREA(-48.34601f, -109.0318f, 82.54919f, 195.5508f, -197.2838f, -38.86471f, 155.8125f, 0, 0, 1);
										}
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 7:
									if ((((((ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1471[10 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1471[12 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1471[13 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1471[11 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1471[15 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1471[14 /*14*/]))
									{
										GlobalFunc_164("CH_INS12C", 6000, 1);
										func_859(&Local_2193);
										func_813(&Local_2193, Local_1471[3 /*14*/], 1, 2, 0, 1, 1, 1, 0);
										func_812(&Local_2193, Local_1471[3 /*14*/], "CH_CHAD", 8);
										func_813(&Local_2193, Local_1471[10 /*14*/], 1, 3, 0, 1, 1, 1, 0);
										func_812(&Local_2193, Local_1471[10 /*14*/], "CH_NAME9", 7);
										func_813(&Local_2193, Local_1471[12 /*14*/], 1, 3, 0, 1, 1, 1, 0);
										func_812(&Local_2193, Local_1471[12 /*14*/], "CH_NAME7", 6);
										func_813(&Local_2193, Local_1471[13 /*14*/], 1, 3, 0, 1, 1, 1, 0);
										func_812(&Local_2193, Local_1471[13 /*14*/], "CH_NAME8", 1);
										func_858(&Local_2193, Local_1471[13 /*14*/], 0, -1, -1, -1);
										func_813(&Local_2193, Local_1471[11 /*14*/], 1, 3, 0, 1, 1, 1, 0);
										func_812(&Local_2193, Local_1471[11 /*14*/], "CH_NAME6", 2);
										func_813(&Local_2193, Local_1471[15 /*14*/], 1, 3, 0, 1, 1, 1, 0);
										func_812(&Local_2193, Local_1471[15 /*14*/], "CH_NAME10", 5);
										func_813(&Local_2193, Local_1471[14 /*14*/], 1, 3, 0, 1, 1, 1, 0);
										func_812(&Local_2193, Local_1471[14 /*14*/], "CH_NAME11", 3);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 8:
									if (func_59(&Local_2193, Local_1471[3 /*14*/]))
									{
										func_826(54);
										func_826(52);
										func_826(50);
										if (func_59(&Local_2193, Local_1471[10 /*14*/]) || !func_861(&Local_2193, Local_1471[10 /*14*/]))
										{
											GlobalFunc_565(105, 1, 0);
										}
										if (func_59(&Local_2193, Local_1471[12 /*14*/]) || !func_861(&Local_2193, Local_1471[12 /*14*/]))
										{
											GlobalFunc_565(105, 1, 0);
										}
										if (func_59(&Local_2193, Local_1471[13 /*14*/]) || !func_861(&Local_2193, Local_1471[13 /*14*/]))
										{
											GlobalFunc_565(105, 1, 0);
										}
										if (func_59(&Local_2193, Local_1471[11 /*14*/]) || !func_861(&Local_2193, Local_1471[11 /*14*/]))
										{
											GlobalFunc_565(105, 1, 0);
										}
										if (func_59(&Local_2193, Local_1471[15 /*14*/]) || !func_861(&Local_2193, Local_1471[15 /*14*/]))
										{
											GlobalFunc_565(105, 1, 0);
										}
										if (func_59(&Local_2193, Local_1471[14 /*14*/]) || !func_861(&Local_2193, Local_1471[14 /*14*/]))
										{
											GlobalFunc_565(105, 1, 0);
										}
										GlobalFunc_565(105, 1, 0);
										func_522(&Local_2193, Local_1471[10 /*14*/]);
										func_522(&Local_2193, Local_1471[12 /*14*/]);
										func_522(&Local_2193, Local_1471[13 /*14*/]);
										func_522(&Local_2193, Local_1471[11 /*14*/]);
										func_522(&Local_2193, Local_1471[15 /*14*/]);
										func_522(&Local_2193, Local_1471[14 /*14*/]);
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
									break;
							}
							break;
						
						case 7:
							func_522(&Local_2193, Local_1471[10 /*14*/]);
							if (!PED::IS_PED_INJURED(Local_1471[10 /*14*/]))
							{
								PED::SET_PED_KEEP_TASK(Local_1471[10 /*14*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[10 /*14*/]));
							}
							Local_1990[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 9:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1724[0 /*2*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1724[0 /*2*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1724[0 /*2*/], 1, 1);
										VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
									}
								}
							}
							break;
						
						case 30:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1724[1 /*2*/], 0, 0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1724[1 /*2*/], 100f);
							}
							break;
						
						case 13:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								func_821(&Local_2193, Local_1724[0 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_1724[2 /*2*/], 1));
							}
							break;
						
						case 14:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									Local_1990[iVar0 /*6*/].f_1 = 0;
									break;
								
								case 0:
									if (!func_862(9))
									{
										func_804(9);
									}
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (func_862(9))
									{
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 2:
									func_402(6, joaat("burrito"), -1306.937f, -218.7608f, 50.5497f, 303.7934f, -1027080192);
									func_402(5, joaat("burrito"), -1281.575f, -223.2485f, 50.5497f, 35.504f, -1027080192);
									func_402(7, joaat("burrito"), -1264.351f, -245.3335f, 50.5499f, 214.0007f, -1027080192);
									func_402(10, joaat("habanero"), -1260.889f, -226.0429f, 50.5499f, 303.0007f, -1027080192);
									func_402(11, joaat("dubsta"), -1292.816f, -185.4189f, 50.5497f, 33.0002f, -1027080192);
									VEHICLE::SET_VEHICLE_LIVERY(Local_1724[6 /*2*/], 1);
									VEHICLE::SET_VEHICLE_LIVERY(Local_1724[5 /*2*/], 2);
									VEHICLE::SET_VEHICLE_LIVERY(Local_1724[7 /*2*/], 3);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[10 /*2*/], 0, 0, 0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[6 /*2*/], 3);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[7 /*2*/], 3);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1724[7 /*2*/], 0);
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 3:
									func_857(-1311.591f, -212.4394f, -1289.144f, -244.9437f, 50.5497f, 125f, 11, 4, 1, 2, -1, joaat("dubsta"), joaat("burrito"));
									if (GlobalFunc_188())
									{
										func_857(-1277.062f, -255.4843f, -1254.709f, -239.9274f, 50.5497f, 215f, 8, 2, 4, 5, -1, 0, 0);
										func_857(-1258.692f, -228.6362f, -1283.984f, -193.4677f, 50.5497f, 306.5f, 12, 3, 5, 4, 1, 0, 0);
										func_857(-1292.816f, -185.4186f, -1315.046f, -200.8566f, 50.5497f, 33f, 8, 3, 0, -1, -1, 0, 0);
										func_857(-1310.957f, -211.8995f, -1288.576f, -243.457f, 55.1017f, 125f, 11, 3, -1, -1, -1, 0, 0);
										func_857(-1277.062f, -255.4843f, -1254.709f, -239.9274f, 55.1017f, 215f, 8, 2, -1, -1, -1, 0, 0);
										func_857(-1258.692f, -228.6362f, -1283.984f, -193.4677f, 55.1017f, 306.5f, 12, 4, -1, -1, -1, 0, 0);
										func_857(-1292.816f, -185.4186f, -1315.046f, -200.8566f, 55.1017f, 33f, 8, 2, -1, -1, -1, 0, 0);
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
									else
									{
										Local_1990[iVar0 /*6*/].f_2 = 4;
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
									}
									break;
								
								case 4:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_857(-1277.062f, -255.4843f, -1254.709f, -239.9274f, 50.5497f, 215f, 8, 2, 4, 5, -1, 0, 0);
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
										Local_1990[iVar0 /*6*/].f_2 = 5;
									}
									break;
								
								case 5:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_857(-1258.692f, -228.6362f, -1283.984f, -193.4677f, 50.5497f, 306.5f, 12, 3, 5, 4, 1, 0, 0);
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
										Local_1990[iVar0 /*6*/].f_2 = 6;
									}
									break;
								
								case 6:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_857(-1292.816f, -185.4186f, -1315.046f, -200.8566f, 50.5497f, 33f, 8, 3, 0, -1, -1, 0, 0);
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
										Local_1990[iVar0 /*6*/].f_2 = 7;
									}
									break;
								
								case 7:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_857(-1310.957f, -211.8995f, -1288.576f, -243.457f, 55.1017f, 125f, 11, 3, -1, -1, -1, 0, 0);
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
										Local_1990[iVar0 /*6*/].f_2 = 8;
									}
									break;
								
								case 8:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_857(-1277.062f, -255.4843f, -1254.709f, -239.9274f, 55.1017f, 215f, 8, 2, -1, -1, -1, 0, 0);
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
										Local_1990[iVar0 /*6*/].f_2 = 9;
									}
									break;
								
								case 9:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_857(-1258.692f, -228.6362f, -1283.984f, -193.4677f, 55.1017f, 306.5f, 12, 4, -1, -1, -1, 0, 0);
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
										Local_1990[iVar0 /*6*/].f_2 = 10;
									}
									break;
								
								case 10:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_857(-1292.816f, -185.4186f, -1315.046f, -200.8566f, 55.1017f, 33f, 8, 2, -1, -1, -1, 0, 0);
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
									break;
							}
							break;
						
						case 38:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
									{
										Local_1990[iVar0 /*6*/].f_2 = 1;
									}
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (GlobalFunc_111())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
										{
											Local_1990[iVar0 /*6*/].f_1 = 0;
										}
									}
								}
								else
								{
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 39:
							break;
						
						case 40:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 0);
								}
								iLocal_4782 = 0;
								Local_1990[iVar0 /*6*/].f_2 = 1;
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
								{
									func_854(-1307.648f, -244.7984f, 145.025f, 0f, 0f, -50f, 1094713344);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0))
									{
										Local_1990[iVar0 /*6*/].f_2 = 2;
									}
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 2)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									func_854(ENTITY::GET_ENTITY_COORDS(Local_1724[2 /*2*/], 1) + Vector(120f, 0f, 0f), 0f, 0f, 0f, 1094713344);
								}
							}
							break;
						
						case 15:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									func_442(&Local_2193);
									func_441(&Local_2193, Local_1724[0 /*2*/], 0, 0);
									AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 0);
									GlobalFunc_139();
									break;
								
								case 0:
									func_530(&Local_2193, 0f, 9f);
									func_442(&Local_2193);
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (func_822(&Local_2193, -1275.146f, -277.1535f, 54f, 5f, -1082130432, -1, 0, 1))
									{
										func_530(&Local_2193, 0.3f, 6f);
										func_443(&Local_2193, -55.6696f, 1);
										Local_1990[iVar0 /*6*/].f_2 = 4;
									}
									break;
								
								case 2:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1309.66f, -241.7653f, 54f, ENTITY::GET_ENTITY_COORDS(Local_1724[0 /*2*/], 1), 1) < 7f)
										{
											func_530(&Local_2193, 0.3f, 1f);
										}
										if (func_822(&Local_2193, -1298.601f, -248.6288f, 54f, 4f, -1082130432, -1, 0, 1))
										{
											func_530(&Local_2193, 0.3f, 6f);
											Local_1990[iVar0 /*6*/].f_2 = 4;
										}
									}
									break;
								
								case 3:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1305.519f, -238.6272f, 54f, ENTITY::GET_ENTITY_COORDS(Local_1724[0 /*2*/], 1), 1) < 7f)
										{
											func_530(&Local_2193, 0.3f, 1f);
										}
										if (func_822(&Local_2193, -1309.157f, -240.8424f, 54f, 2f, -1082130432, -1, 0, 1))
										{
											func_530(&Local_2193, 0.3f, 0.7f);
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 4:
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1301.256f, -253.3784f, 54f, ENTITY::GET_ENTITY_COORDS(Local_1724[0 /*2*/], 1), 1) < 5f)
									{
										func_530(&Local_2193, 0.3f, 0.7f);
									}
									if (func_822(&Local_2193, -1301.256f, -253.3784f, 54f, 2f, -1082130432, -1, 0, 1))
									{
										func_530(&Local_2193, 0.3f, 0.7f);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 5:
									if (func_822(&Local_2193, -1309.157f, -240.8424f, 54f, 2f, -1082130432, -1, 0, 1))
									{
										func_530(&Local_2193, 0.3f, 0.7f);
										Local_1990[iVar0 /*6*/].f_2 = 4;
									}
									break;
							}
							break;
						
						case 41:
							func_854(Vector(57.9243f, -240.0043f, -1310.607f) + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)), 0f, 0f, -50f, 1094713344);
							break;
						
						case 16:
							if (bLocal_3162 == 1)
							{
								GlobalFunc_5077();
							}
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									bLocal_3162 = false;
									break;
								
								case 0:
									if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
									{
										if (bLocal_3162 == 1)
										{
											func_286(0, 0);
											bLocal_3162 = false;
											AUDIO::PLAY_SOUND_FRONTEND(-1, "Thermal_Off", "CAR_STEAL_2_SOUNDSET", 1);
											AUDIO::STOP_AUDIO_SCENE("CAR_2_USE_INFRARED");
										}
										else
										{
											bLocal_3162 = true;
											func_286(1, 0);
											AUDIO::START_AUDIO_SCENE("CAR_2_USE_INFRARED");
											AUDIO::PLAY_SOUND_FRONTEND(-1, "Thermal_On", "CAR_STEAL_2_SOUNDSET", 1);
										}
										Local_1990[iVar0 /*6*/].f_2++;
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
									}
									if (GlobalFunc_663("CH_INS30", 0, 0))
									{
										if (bLocal_3162 == 1)
										{
											HUD::CLEAR_PRINTS();
										}
									}
									break;
								
								case 1:
									if (GlobalFunc_663("CH_INS30", 0, 0))
									{
										if (bLocal_3162 == 1)
										{
											HUD::CLEAR_PRINTS();
										}
									}
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										Local_1990[iVar0 /*6*/].f_2 = 0;
									}
									break;
							}
							break;
						
						case 18:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 6000;
								Local_1990[iVar0 /*6*/].f_2 = 1;
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
								{
									func_851(4, "CS2_explain", 0, Local_1471[1 /*14*/], "Trevor", 2, Local_1471[2 /*14*/], "ChopperPilot", -1, 0, 0, 7, 0);
									Local_1990[iVar0 /*6*/].f_2 = 2;
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 2)
							{
								if (!GlobalFunc_111())
								{
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 22:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1471[3 /*14*/], 0);
									PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_1471[3 /*14*/], 0);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1471[3 /*14*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[3 /*14*/], 17, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[3 /*14*/], 6, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[3 /*14*/], 1, 0);
									Local_1990[iVar0 /*6*/].f_2 = 1;
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
								{
									Local_1990[iVar0 /*6*/].f_2 = 0;
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 99)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
								{
									PED::SET_PED_CAN_BE_TARGETTED(Local_1471[3 /*14*/], 1);
									PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1471[3 /*14*/], 1);
									PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_1471[3 /*14*/], 1);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1471[3 /*14*/], 1);
								}
							}
							break;
						
						case 23:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
							{
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									if (GlobalFunc_156(Local_1471[3 /*14*/], PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[3 /*14*/]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3136);
										if (ENTITY::DOES_ENTITY_EXIST(Local_1724[1 /*2*/]))
										{
											ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[1 /*2*/]));
										}
										STREAMING::REMOVE_ANIM_DICT("misscarsteal2car_stolen");
										STREAMING::REMOVE_ANIM_DICT("misscarsteal2chad_Garage");
										VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_1417);
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
								}
							}
							break;
						
						case 25:
							iVar1 = 0;
							while (iVar1 < iLocal_3895)
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3895[iVar1]));
								iVar1++;
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[5 /*2*/]));
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[6 /*2*/]));
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[7 /*2*/]));
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[9 /*2*/]));
							Local_1990[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 27:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1724[0 /*2*/], 198.4933f, -177.1115f, 53.29736f, 257.7989f, -198.7573f, 210.0792f, 115.9375f, 0, 1, 0))
									{
										func_530(&Local_2193, 0f, 1.5f);
									}
									else
									{
										func_530(&Local_2193, 0f, 3.5f);
									}
								}
								Var2 = { ENTITY::GET_ENTITY_COORDS(Local_1724[0 /*2*/], 1) };
								if (Var2.x < 205f)
								{
									if (func_822(&Local_2193, 155.1646f, -181.1793f, 160.3576f, 15f, -1082130432, -1, 0, 1))
									{
										func_521(&Local_2193, 247.38f, -186.19f, 135f, 7f, 6f, 0);
										Local_1990[iVar0 /*6*/].f_2 = 1;
									}
								}
								else
								{
									func_521(&Local_2193, 247.38f, -186.19f, 135f, 7f, 6f, 0);
									Local_1990[iVar0 /*6*/].f_2 = 1;
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1724[0 /*2*/], 198.4933f, -177.1115f, 53.29736f, 257.7989f, -198.7573f, 210.0792f, 115.9375f, 0, 1, 0))
									{
										func_530(&Local_2193, 0f, 1.5f);
									}
									else
									{
										func_530(&Local_2193, 0f, 3.5f);
									}
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 2)
							{
								Local_1990[iVar0 /*6*/].f_2 = 3;
								func_442(&Local_2193);
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 3)
							{
								if (!CAM::IS_SPHERE_VISIBLE(199.8876f, -157.8262f, 57.4081f, 10f))
								{
									func_530(&Local_2193, 0, 1109393408);
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 28:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								if (GlobalFunc_111())
								{
									MemCopy(&uVar5, {GlobalFunc_560()}, 4);
									if (MISC::ARE_STRINGS_EQUAL(&uVar5, "cs2_seeChad3"))
									{
										Local_1990[iVar0 /*6*/].f_2 = 1;
									}
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_527("CH_INS14", 6000, 1);
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 31:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
									{
										VEHICLE::SET_VEHICLE_LIGHTS(Local_1724[1 /*2*/], 2);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1724[1 /*2*/], 103, sLocal_1417, 1);
										VEHICLE::REQUEST_VEHICLE_RECORDING(100, "cs2");
									}
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[1 /*2*/]))
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 2:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[1 /*2*/]))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1724[1 /*2*/], 100, "cs2", 1);
											VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_1724[1 /*2*/]);
											Local_1990[iVar0 /*6*/].f_1 = 0;
										}
									}
									break;
							}
							break;
						
						case 32:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								if (Local_1990[iVar0 /*6*/].f_2 == 0)
								{
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1471[3 /*14*/]);
									}
									TASK::TASK_EXTEND_ROUTE(202.16f, -154.3f, 56.13f);
									TASK::TASK_EXTEND_ROUTE(202.16f, -154.3f, 56.13f);
									TASK::TASK_FOLLOW_POINT_ROUTE(Local_1471[3 /*14*/], 2f, 0);
									Local_1990[iVar0 /*6*/].f_2 = 1;
									Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 3000;
								}
								else if (Local_1990[iVar0 /*6*/].f_2 == 1)
								{
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
										{
											PED::SET_PED_INTO_VEHICLE(Local_1471[3 /*14*/], Local_1724[2 /*2*/], -1);
										}
										func_522(&Local_2193, Local_1471[3 /*14*/]);
										bLocal_2745 = true;
										iLocal_4645 = 0;
										func_863(39, 14, 0);
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
								}
							}
							break;
						
						case 33:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[2 /*2*/]))
								{
									VEHICLE::SET_VEHICLE_LIGHTS(Local_1724[2 /*2*/], 1);
									ENTITY::SET_ENTITY_COORDS(Local_1724[2 /*2*/], -1309.582f, -215.2148f, 50.5497f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_1724[2 /*2*/], 122.987f);
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							if (Local_1990[iVar0 /*6*/].f_2 == 99)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_1724[2 /*2*/], 0);
								}
							}
							break;
						
						case 34:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								func_530(&Local_2193, 0f, (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], 0) / 5f));
								if (ENTITY::IS_ENTITY_AT_COORD(Local_1724[2 /*2*/], 21.5236f, -217.2817f, 53.0341f, 150f, 150f, 400f, 0, 1, 0))
								{
									if (Local_1990[iVar0 /*6*/].f_2 == 0)
									{
										Local_1990[iVar0 /*6*/].f_2 = 1;
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(Local_1724[2 /*2*/], -269.0054f, -103.5025f, 47.5659f, 200f, 200f, 400f, 0, 1, 0))
								{
									if (Local_1990[iVar0 /*6*/].f_2 < 4)
									{
										Local_1990[iVar0 /*6*/].f_2 = 4;
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(Local_1724[2 /*2*/], -1110.093f, -264.0582f, 40.8865f, 100f, 100f, 400f, 0, 1, 0))
								{
									if (Local_1990[iVar0 /*6*/].f_2 < 7)
									{
										Local_1990[iVar0 /*6*/].f_2 = 7;
									}
								}
							}
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 1:
									if (CAM::IS_SPHERE_VISIBLE(21.5236f, -217.2817f, 53.0341f, 50f))
									{
										Local_1990[iVar0 /*6*/].f_2 = 2;
									}
									break;
								
								case 2:
									if (func_822(&Local_2193, 10.4487f, -206.1065f, -1f, 25f, -1082130432, -1, 0, 1))
									{
										Local_1990[iVar0 /*6*/].f_2 = 3;
									}
									break;
								
								case 4:
									if (CAM::IS_SPHERE_VISIBLE(-269.0054f, -103.5025f, 47.5659f, 50f))
									{
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 5:
									if (func_822(&Local_2193, -281.453f, -137.3323f, 205.2054f, 15f, -1082130432, -1, 0, 1))
									{
										Local_1990[iVar0 /*6*/].f_2 = 6;
									}
									break;
								
								case 7:
									func_521(&Local_2193, -1157.736f, -312.993f, 170.3401f, 10f, 1086324736, 1);
									Local_1990[iVar0 /*6*/].f_2++;
									break;
							}
							break;
						
						case 42:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								func_846(1403.3f, -2059.55f, 52f, 32.6853f, 1, 1, 1, 0, 0, 1, 1);
								Local_1990[iVar0 /*6*/].f_2 = 1;
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, 1394.17f, -2064.981f, 50.9997f, 65.3178f, 1, 1))
								{
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 43:
							fLocal_3317 = 1f;
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								fLocal_3317 = 0.7f;
								Local_1990[iVar0 /*6*/].f_2 = 1;
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (iLocal_4645 > 15000)
								{
									fLocal_3317 = (fLocal_3317 + (SYSTEM::TIMESTEP() * 0.01f));
									if (fLocal_3317 >= 1.25f)
									{
										fLocal_3317 = 1.25f;
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
								}
							}
							break;
						
						case 44:
							if (Local_1990[iVar0 /*6*/].f_2 == 99)
							{
								func_845(5);
								STREAMING::CLEAR_FOCUS();
							}
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										STREAMING::SET_FOCUS_ENTITY(Local_1471[3 /*14*/]);
									}
									func_845(3);
									Local_1990[iVar0 /*6*/].f_2 = 10;
									break;
								
								case 1:
									Local_1990[iVar0 /*6*/].f_2 = 3;
									break;
								
								case 2:
									fLocal_3932 = (fLocal_3932 - (0.15f * SYSTEM::TIMESTEP()));
									if (fLocal_3932 <= 0f)
									{
										fLocal_3932 = 0f;
										func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 57.8f, 0, fLocal_3932);
										STREAMING::CLEAR_FOCUS();
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
									else
									{
										func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 57.8f, 0, fLocal_3932);
									}
									break;
								
								case 10:
									if (iLocal_1419 == 6)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[2 /*2*/]))
											{
												if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(Local_1724[2 /*2*/]) == VEHICLE::GET_VEHICLE_RECORDING_ID(401, "cs2"))
												{
													func_845(4);
													STREAMING::CLEAR_FOCUS();
													Local_1990[iVar0 /*6*/].f_1 = 0;
												}
											}
										}
									}
									break;
							}
							break;
						
						case 45:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[0 /*2*/]))
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1724[0 /*2*/]);
										}
									}
									break;
								
								case 0:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
										{
											ENTITY::SET_ENTITY_VELOCITY(Local_1724[0 /*2*/], 0f, 15f, 0f);
											TASK::TASK_HELI_MISSION(Local_1471[2 /*14*/], Local_1724[0 /*2*/], 0, 0, 1359.799f, -2074.86f, 74.829f, 4, 15f, 10f, -1f, 0, 20, -1082130432, 0);
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
							}
							break;
						
						case 46:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								Local_1990[iVar0 /*6*/].f_3 = ENTITY::GET_ENTITY_HEALTH(Local_1471[3 /*14*/]);
								Local_1990[iVar0 /*6*/].f_2 = 1;
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
								{
									if (ENTITY::GET_ENTITY_HEALTH(Local_1471[3 /*14*/]) < Local_1990[iVar0 /*6*/].f_3)
									{
										TASK::CLEAR_PED_TASKS(Local_1471[3 /*14*/]);
										func_480();
										TASK::TASK_COWER(0, -1);
										TASK::TASK_PLAY_ANIM(0, "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 2f, -8f, -1, 49, 0, 0, 0, 0);
										func_479(Local_1471[3 /*14*/], 0);
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
									if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_1471[3 /*14*/]))
									{
										if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_1471[3 /*14*/], PLAYER::PLAYER_PED_ID()))
										{
											TASK::CLEAR_PED_TASKS(Local_1471[3 /*14*/]);
											TASK::TASK_COWER(Local_1471[3 /*14*/], -1);
											Local_1990[iVar0 /*6*/].f_1 = 0;
										}
									}
								}
								else
								{
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 47:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
								{
									if (GlobalFunc_156(Local_1724[2 /*2*/], PLAYER::PLAYER_PED_ID(), 0) > 400f)
									{
										if (!GlobalFunc_111())
										{
											func_844("CH_F20");
										}
									}
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 1)
							{
								Var9 = { GlobalFunc_560() };
								if (MISC::ARE_STRINGS_EQUAL(&Var9, "cs2_lostcar"))
								{
									Local_1990[iVar0 /*6*/].f_2 = 2;
								}
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 2)
							{
								if (!GlobalFunc_111())
								{
									func_844("CH_F20");
								}
							}
							break;
						
						case 48:
							if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1471[3 /*14*/], 0))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1471[3 /*14*/], 1);
								}
								else
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1471[3 /*14*/], 0);
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 49:
							Local_1990[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 50:
							if (func_533(2))
							{
								if (!GlobalFunc_2517(-29.8705f, -86.0999f, 57.4479f, 0f, 0f, 1f, 1f))
								{
									Local_1990[iVar0 /*6*/].f_3 = (Local_1990[iVar0 /*6*/].f_3 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
									if (Local_1990[iVar0 /*6*/].f_3 > 5000)
									{
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
								}
							}
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									if (ENTITY::DOES_ENTITY_EXIST(Local_1724[4 /*2*/]))
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[4 /*2*/]));
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[5 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[5 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[5 /*14*/]));
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[6 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[6 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[6 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[6 /*14*/]));
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3103[0]))
									{
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_3103[0]));
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3103[1]))
									{
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_3103[1]));
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3103[2]))
									{
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_3103[2]));
									}
									Local_1990[iVar0 /*6*/].f_1 = 0;
									break;
								
								case 0:
									Local_1990[iVar0 /*6*/].f_2 = 333;
									break;
								
								case 333:
									Local_1990[iVar0 /*6*/].f_2 = 334;
									break;
								
								case 334:
									func_837(0);
									break;
							}
							break;
						
						case 52:
							if (func_533(2))
							{
								if (!GlobalFunc_2517(-13.6117f, -34.6633f, 74.2783f, 0f, 0f, 1f, 1f))
								{
									Local_1990[iVar0 /*6*/].f_3 = (Local_1990[iVar0 /*6*/].f_3 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
									if (Local_1990[iVar0 /*6*/].f_3 > 5000)
									{
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
								}
							}
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[7 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[7 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[7 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[7 /*14*/]));
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[8 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[8 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[8 /*14*/]));
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[9 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[9 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[9 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[9 /*14*/]));
										}
									}
									Local_1990[iVar0 /*6*/].f_1 = 0;
									break;
								
								case 0:
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (((STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beach_02")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_janitor"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_hooker_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2PERVERT"))
									{
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 2:
									func_837(1);
									break;
							}
							break;
						
						case 53:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[10 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[10 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[10 /*14*/], 1);
										}
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[10 /*14*/]));
									}
									Local_1990[iVar0 /*6*/].f_1 = 0;
									break;
								
								case 0:
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if ((STREAMING::HAS_MODEL_LOADED(iLocal_3136) && STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_hooker_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2CHAD_GOODBYE"))
									{
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 2:
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
									{
										if (func_861(&Local_2193, Local_1471[3 /*14*/]))
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									if (func_837(3))
									{
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
									break;
								
								case 3:
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
									{
									}
									if (func_837(3))
									{
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
									break;
								
								case 4:
									if (func_837(3))
									{
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
									break;
								
								case 5:
									if (func_837(3))
									{
										Local_1990[iVar0 /*6*/].f_2 = 99;
									}
									break;
							}
							break;
						
						case 54:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[11 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[11 /*14*/], 1);
										}
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[11 /*14*/]));
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[12 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[12 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[12 /*14*/], 1);
										}
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[12 /*14*/]));
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[13 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[13 /*14*/]))
										{
											PED::SET_PED_KEEP_TASK(Local_1471[13 /*14*/], 1);
										}
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[13 /*14*/]));
									}
									Local_1990[iVar0 /*6*/].f_1 = 0;
									break;
								
								case 0:
									if (((STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_hooker_02")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_og_boss_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beach_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2PIMPSEX"))
									{
										Local_1990[iVar0 /*6*/].f_2 = 2;
									}
									break;
								
								case 2:
									func_837(2);
									break;
							}
							break;
						
						case 55:
							if (Local_1990[iVar0 /*6*/].f_2 >= 1)
							{
							}
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									STREAMING::REMOVE_ANIM_DICT("misscarsteal2CHAD_HOLDUP");
									Local_1990[iVar0 /*6*/].f_1 = 0;
									break;
								
								case 0:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1471[3 /*14*/]))
										{
											func_845(1);
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 1:
									STREAMING::REQUEST_ANIM_DICT("misscarsteal2CHAD_HOLDUP");
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 2:
									if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2CHAD_HOLDUP"))
									{
										func_863(87, 14, 0);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 3:
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1471[3 /*14*/]))
									{
										if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1471[3 /*14*/]) >= 31)
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									else
									{
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 4:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1471[3 /*14*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[3 /*14*/], -1689270312) != 1)
											{
												TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1471[3 /*14*/], "CS2_01", 28, 8, -1);
											}
											Local_1990[iVar0 /*6*/].f_2++;
										}
										else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[3 /*14*/], 1435919172) == 1)
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1471[3 /*14*/]);
										}
										if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
										{
											STREAMING::SET_FOCUS_ENTITY(Local_1471[3 /*14*/]);
										}
									}
									break;
								
								case 5:
									Var15 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 198.93f, -152.54f, 56.18f, 0f, 0f, -20.5f, 0f, 2) };
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 6:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										Var15 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 198.93f, -152.54f, 56.18f, 0f, 0f, -20.5f, 0f, 2) };
										if (ENTITY::IS_ENTITY_AT_COORD(Local_1471[3 /*14*/], Var15, 0.3f, 0.3f, 1f, 0, 1, 0))
										{
											uLocal_3109 = PED::CREATE_SYNCHRONIZED_SCENE(198.93f, -152.54f, 56.18f, 0f, 0f, -20.5f, 2);
											TASK::TASK_PLAY_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 1.5f, -4f, -1, 16394, 0, 0, 0, 0);
											Local_1990[iVar0 /*6*/].f_2++;
											Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
										}
									}
									break;
								
								case 7:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
										{
											ENTITY::FREEZE_ENTITY_POSITION(Local_1724[1 /*2*/], 0);
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[1 /*2*/]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1724[1 /*2*/]);
											}
											VEHICLE::SET_VEHICLE_LIGHTS(Local_1724[1 /*2*/], 2);
											ENTITY::SET_ENTITY_LOD_DIST(Local_1724[1 /*2*/], 400);
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1724[1 /*2*/], 103, sLocal_1417, 1);
											Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 500;
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 8:
									func_863(44, 14, 0);
									func_285(66, 1, -1);
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 9:
									if (!ENTITY::IS_ENTITY_DEAD(Local_1724[1 /*2*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3109))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3109) >= 0.401f)
											{
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
										else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 3))
										{
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad") > 0.401f)
											{
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									break;
								
								case 10:
									if (!ENTITY::IS_ENTITY_DEAD(Local_1724[1 /*2*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										uLocal_3110 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(Local_1724[1 /*2*/], 1), ENTITY::GET_ENTITY_ROTATION(Local_1724[1 /*2*/], 2), 2);
										AUDIO::STOP_AUDIO_SCENE("CAR_2_FOLLOW_CHAD_ON_FOOT");
										AUDIO::START_AUDIO_SCENE("CAR_2_FRANKLIN_ARRIVES");
										if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1724[1 /*2*/]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1724[1 /*2*/]);
											}
											ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1471[4 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_1724[1 /*2*/], 1) + Vector(2f, 0f, 0f), 0, 0, 1);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[4 /*14*/], uLocal_3110, "misscarsteal2CHAD_HOLDUP", "chad_holdup_franklin", 1000f, -1000f, 0, 0, 1148846080, 0);
											WEAPON::GIVE_WEAPON_TO_PED(Local_1471[4 /*14*/], joaat("weapon_pistol"), 50, 1, 1);
											ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1724[1 /*2*/], iLocal_3110, "chad_holdup_buffalo", "misscarsteal2CHAD_HOLDUP", 1000f, 1090519040, 0, 1148846080);
											PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3110, 0.371f);
										}
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 11:
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3109))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3109) >= 0.488f)
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									else if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 3))
										{
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad") > 0.504f)
											{
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									break;
								
								case 12:
									if (func_235(4, "CAR_2_IG_8", 3, Local_1471[4 /*14*/], "Franklin", 4, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, 8))
									{
										func_212(4, 8);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 13:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3110))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3110) >= 0.855f)
											{
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
										else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 3))
										{
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad") > 0.855f)
											{
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									break;
								
								case 14:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										func_405(202.7272f, -149.7968f, 56.176f, 160f);
										PED::SET_PED_INTO_VEHICLE(Local_1471[3 /*14*/], Local_1724[2 /*2*/], -1);
										if (GlobalFunc_7050() < 2)
										{
											func_522(&Local_2193, Local_1471[3 /*14*/]);
										}
										bLocal_2745 = true;
										iLocal_4645 = 0;
										AUDIO::STOP_AUDIO_SCENE("CAR_2_FRANKLIN_ARRIVES");
										AUDIO::START_AUDIO_SCENE("CAR_2_CAR_CHASE_START");
										AUDIO::START_AUDIO_SCENE("CAR_2_Z_TYPE_ENGINE_BOOST");
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1724[2 /*2*/], "CAR_2_Z-TYPE", 0);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 15:
									if (!PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3110))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3110) >= 1f)
											{
												PED::SET_PED_INTO_VEHICLE(Local_1471[4 /*14*/], Local_1724[1 /*2*/], -1);
												Local_1990[iVar0 /*6*/].f_2 = 99;
											}
										}
									}
									break;
							}
							break;
						
						case 59:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
							{
								if (VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1724[2 /*2*/]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_1724[2 /*2*/], 1);
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 64:
							if (Local_1990[iVar0 /*6*/].f_2 == 99)
							{
								HUD::CLEAR_PRINTS();
							}
							else if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								GlobalFunc_527("CH_INS42", 7500, 1);
							}
							break;
						
						case 65:
							iLocal_3934 = 0;
							iVar1 = 5;
							while (iVar1 <= 15)
							{
								if (func_834(iVar1))
								{
									if (func_861(&Local_2193, Local_1471[iVar1 /*14*/]))
									{
										if (func_59(&Local_2193, Local_1471[iVar1 /*14*/]))
										{
											iLocal_3934 = iVar1;
										}
									}
								}
								iVar1++;
							}
							if (iLocal_3934 != 0 && iLocal_3935 == 0)
							{
								iLocal_3936 = MISC::GET_GAME_TIMER() + 3000;
								iLocal_3935 = iLocal_3934;
							}
							if (iLocal_3936 != 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_3936)
								{
									if (func_861(&Local_2193, Local_1471[iLocal_3935 /*14*/]))
									{
										func_522(&Local_2193, Local_1471[iLocal_3934 /*14*/]);
									}
									iLocal_3935 = 0;
									iLocal_3936 = 0;
								}
							}
							break;
						
						case 66:
							if (Local_1990[iVar0 /*6*/].f_2 == 99)
							{
								func_442(&Local_2193);
							}
							else
							{
								Local_1990[iVar0 /*6*/].f_2 = 0;
								if (CAM::IS_SPHERE_VISIBLE(-13.6185f, -34.6559f, 74.1984f, 15f))
								{
									Local_1990[iVar0 /*6*/].f_2 = 2;
								}
								if (CAM::IS_SPHERE_VISIBLE(-31.0612f, -87.8128f, 57.191f, 10f))
								{
									Local_1990[iVar0 /*6*/].f_2 = 1;
								}
								if (Local_1990[iVar0 /*6*/].f_2 == 0)
								{
									if (Local_1990[iVar0 /*6*/].f_3 != 0)
									{
										func_442(&Local_2193);
										Local_1990[iVar0 /*6*/].f_3 = 0;
									}
								}
								else if (Local_1990[iVar0 /*6*/].f_2 == 1)
								{
									if (Local_1990[iVar0 /*6*/].f_3 != 1)
									{
										func_521(&Local_2193, -0.9629f, -152.3349f, 180.6798f, 10f, 1086324736, 1);
										Local_1990[iVar0 /*6*/].f_3 = 1;
									}
								}
								else if (Local_1990[iVar0 /*6*/].f_3 != 2)
								{
									Local_1990[iVar0 /*6*/].f_3 = 2;
									func_521(&Local_2193, 5.2097f, -122.533f, 172.3606f, 10f, 1086324736, 1);
								}
							}
							break;
						
						case 67:
							if (Local_1990[iVar0 /*6*/].f_2 == 99)
							{
								func_442(&Local_2193);
							}
							else
							{
								Local_1990[iVar0 /*6*/].f_2 = 0;
								if ((CAM::IS_SPHERE_VISIBLE(205.7967f, -110.9667f, 69.9306f, 20f) || CAM::IS_SPHERE_VISIBLE(182.789f, -157.174f, 58.247f, 25f)) || CAM::IS_SPHERE_VISIBLE(209.1109f, -148.8647f, 61.6233f, 25f))
								{
									Local_1990[iVar0 /*6*/].f_2 = 1;
								}
								if (Local_1990[iVar0 /*6*/].f_2 == 0)
								{
									if (Local_1990[iVar0 /*6*/].f_3 != 0)
									{
										func_442(&Local_2193);
										Local_1990[iVar0 /*6*/].f_3 = 0;
									}
								}
								else if (Local_1990[iVar0 /*6*/].f_2 == 1)
								{
									if (Local_1990[iVar0 /*6*/].f_3 != 1)
									{
										func_521(&Local_2193, 165.0758f, -118.7167f, 172.5288f, 10f, 1086324736, 1);
										Local_1990[iVar0 /*6*/].f_3 = 1;
									}
								}
							}
							break;
						
						case 68:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1471[11 /*14*/]))
							{
								if (func_59(&Local_2193, Local_1471[11 /*14*/]))
								{
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							else
							{
								Local_1990[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 69:
							if (Local_1990[iVar0 /*6*/].f_2 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1724[2 /*2*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
									{
										VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_1724[2 /*2*/]);
										Local_1990[iVar0 /*6*/].f_2 = 1;
									}
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1724[2 /*2*/]))
							{
								Local_1990[iVar0 /*6*/].f_2 = 0;
							}
							break;
						
						case 70:
							if (Local_1471[1 /*14*/] == 0 || !ENTITY::DOES_ENTITY_EXIST(Local_1471[1 /*14*/]))
							{
								if (GlobalFunc_4917(2) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
								{
									Local_1471[1 /*14*/] = PLAYER::PLAYER_PED_ID();
								}
							}
							if (Local_1471[4 /*14*/] == 0 || !ENTITY::DOES_ENTITY_EXIST(Local_1471[4 /*14*/]))
							{
								if (GlobalFunc_4917(1) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
								{
									Local_1471[4 /*14*/] = PLAYER::PLAYER_PED_ID();
								}
							}
							break;
						
						case 71:
							if (func_832(1390.733f, -2063.394f, 50.9983f, 128f, 0))
							{
								Local_1990[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 73:
							if (iLocal_1419 != 7 || iLocal_2191 == 2)
							{
								if (GlobalFunc_663("CH_INS39", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								Local_1990[iVar0 /*6*/].f_1 = 0;
							}
							if (Local_1990[iVar0 /*6*/].f_1)
							{
								if (Local_1990[iVar0 /*6*/].f_2 == 0)
								{
									if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_527("CH_INS39", 7500, 1);
										Local_1990[iVar0 /*6*/].f_2 = 1;
									}
								}
							}
							break;
						
						case 74:
							if (Local_1990[iVar0 /*6*/].f_1)
							{
								switch (Local_1990[iVar0 /*6*/].f_2)
								{
									case 0:
										GlobalFunc_159("CH_HLP01", -1);
										Local_1990[iVar0 /*6*/].f_2 = 1;
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 20000;
										break;
									
									case 1:
										if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
										{
											GlobalFunc_159("CH_HLP01", -1);
											Local_1990[iVar0 /*6*/].f_1 = 0;
										}
										if (PAD::IS_CONTROL_PRESSED(2, 227))
										{
											Local_1990[iVar0 /*6*/].f_1 = 0;
										}
										break;
								}
								if (iLocal_1419 >= 6)
								{
									Local_1990[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
						
						case 75:
							iVar18 = 0;
							if (iLocal_1419 == 4)
							{
								if (func_217(&Local_2193, &iVar18))
								{
									if (iVar18 == Local_1471[6 /*14*/] || iVar18 == Local_1471[5 /*14*/])
									{
										if (Local_1990[iVar0 /*6*/].f_2 != 3)
										{
											Local_1990[iVar0 /*6*/].f_2 = 1;
										}
									}
									else if (Local_1990[iVar0 /*6*/].f_2 != 4)
									{
										Local_1990[iVar0 /*6*/].f_2 = 2;
									}
								}
								switch (Local_1990[iVar0 /*6*/].f_2)
								{
									case 1:
										func_831(0, -28.232f, -89.2847f, 56.8547f, -27.6147f, -88.95f, 56.8797f, -27.5647f, -88.8999f, 58.6297f, -28.2629f, -89.26f, 58.6297f);
										func_831(1, -28.6441f, -104.0011f, 64.2778f, -10.0603f, -110.8698f, 64.2778f, -2.0177f, -88.4428f, 64.2778f, -20.5835f, -81.8591f, 64.2778f);
										func_831(2, -40.2599f, -98.5964f, 56.7374f, -34.2282f, -82.2685f, 56.253f, -34.3367f, -82.2011f, 62.7623f, -40.4784f, -98.5622f, 63.1072f);
										func_831(3, -28.8646f, -88.6101f, 56.9044f, -28.8646f, -88.6101f, 58.6794f, -28.5948f, -87.937f, 58.6542f, -28.595f, -87.937f, 56.9542f);
										func_831(4, -25.2983f, -84.227f, 58.9288f, -28.796f, -87.7316f, 58.929f, -27.4239f, -89.1142f, 58.929f, -23.9171f, -85.5873f, 58.929f);
										func_831(5, -24.8034f, -83.7998f, 56.5789f, -28.7721f, -87.774f, 56.5792f, -28.7721f, -87.774f, 58.9792f, -25.2034f, -84.1998f, 58.9289f);
										Local_1990[iVar0 /*6*/].f_2 = 3;
										break;
									
									case 2:
										func_831(0, -8.948f, -52.3802f, 78.6554f, -1.336f, -55.0471f, 80.4048f, 1.6459f, -46.7435f, 80.399f, -5.9165f, -43.9649f, 78.6554f);
										func_831(1, -5.5538f, -43.9854f, 78.2118f, 9.5382f, -49.4824f, 78.2118f, 12.9347f, -39.8749f, 78.2118f, -1.4279f, -32.9156f, 78.2118f);
										func_831(2, -3.42f, -30.8691f, 77.1564f, 6.6288f, -34.5387f, 77.1564f, 16.0751f, -9.0404f, 77.4075f, 5.8839f, -5.2851f, 77.4124f);
										func_831(3, -2.1643f, -22.0938f, 77.0106f, -5.1205f, -30.2703f, 77.0106f, -3.4104f, -30.8594f, 77.1564f, -0.5185f, -22.9861f, 77.3823f);
										func_831(4, -19.4109f, -42.2933f, 75.9532f, -13.2283f, -25.0136f, 75.9532f, -36.1206f, -16.5541f, 75.9532f, -42.801f, -33.4459f, 76.4495f);
										func_831(5, -4.0202f, -18.9672f, 82.5066f, 1.7875f, -2.3476f, 82.5066f, -3.8792f, -0.4543f, 82.5066f, -10.4238f, -16.7885f, 82.5066f);
										func_830(&Local_2193, 0, 9.469584f, -35.12326f, 95.20967f, 3.75f);
										func_830(&Local_2193, 1, -8.53863f, -21.22476f, 80.7339f, 3.375f);
										func_830(&Local_2193, 2, -43.04282f, -39.19101f, 99.5657f, 3.6875f);
										Local_1990[iVar0 /*6*/].f_2 = 4;
										break;
								}
							}
							else
							{
								if (func_217(&Local_2193, &iVar18))
								{
									if ((iVar18 == Local_1471[11 /*14*/] || iVar18 == Local_1471[12 /*14*/]) || iVar18 == Local_1471[13 /*14*/])
									{
										if (Local_1990[iVar0 /*6*/].f_2 != 6)
										{
											Local_1990[iVar0 /*6*/].f_2 = 5;
										}
									}
									else if (func_59(&Local_2193, Local_1471[3 /*14*/]))
									{
										if (Local_1990[iVar0 /*6*/].f_2 != 10)
										{
											Local_1990[iVar0 /*6*/].f_2 = 9;
										}
									}
									else if (Local_1990[iVar0 /*6*/].f_2 != 8)
									{
										Local_1990[iVar0 /*6*/].f_2 = 7;
									}
								}
								switch (Local_1990[iVar0 /*6*/].f_2)
								{
									case 5:
										func_831(0, 200.6473f, -168.1464f, 55.3268f, 182.4492f, -161.5087f, 55.3836f, 182.4593f, -161.5123f, 62.172f, 200.6783f, -168.1942f, 62.1804f);
										func_831(1, 181.6328f, -163.3893f, 62.1529f, 181.6413f, -163.353f, 55.3168f, 175.6814f, -161.2399f, 55.4279f, 181.9644f, -163.5368f, 62.1804f);
										func_831(2, 188.7882f, -160.1965f, 55.3177f, 187.6117f, -163.3776f, 55.3177f, 187.6955f, -163.3199f, 59.7359f, 188.8773f, -160.1298f, 59.7265f);
										func_831(3, 182.0581f, -146.8758f, 56.5077f, 200.6405f, -153.1321f, 56.5318f, 200.1214f, -152.448f, 72.169f, 182.3946f, -146.414f, 72.3024f);
										func_831(4, 182.3946f, -146.414f, 72.3024f, 200.584f, -152.8908f, 72.7951f, 206.1236f, -137.4284f, 72.7951f, 186.9452f, -130.9248f, 72.3515f);
										func_831(5, 171.8139f, -174.889f, 65.9972f, 182.9264f, -167.7773f, 66.0955f, 183.179f, -167.6078f, 71.3906f, 171.6981f, -174.9631f, 71.1046f);
										Local_1990[iVar0 /*6*/].f_2 = 6;
										break;
									
									case 7:
										Local_1990[iVar0 /*6*/].f_2 = 8;
										break;
									
									case 9:
										func_831(0, 216.37f, -123.66f, 70.79f, 210.93f, -121.62f, 70.76f, 204.26f, -134.66f, 70.78f, 211.44f, -137.29f, 70.78f);
										func_831(1, 216.55f, -126.74f, 69.39f, 215.58f, -126.21f, 70.58f, 212.17f, -134.51f, 66.84f, 213.49f, -134.99f, 66.96f);
										Local_1990[iVar0 /*6*/].f_2 = 10;
										break;
									}
							}
							break;
						
						case 76:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									if (func_235(4, "CS2_gotChad", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 1:
									if (!func_533(56))
									{
										if (!GlobalFunc_5664("CS2_gotChad"))
										{
											HUD::CLEAR_PRINTS();
											if (func_235(4, "CS2_gotChad1", 3, Local_1471[3 /*14*/], "Chad", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_1990[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
									break;
							}
							if (func_533(56))
							{
								Local_1990[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 78:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									if (!func_59(&Local_2193, Local_1471[4 /*14*/]))
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											GlobalFunc_159("CH_INS4", -1);
											Local_1990[iVar0 /*6*/].f_2 = 1;
										}
									}
									else
									{
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
									break;
								
								case 1:
									if (func_59(&Local_2193, Local_1471[4 /*14*/]))
									{
										if (GlobalFunc_74("CH_INS4"))
										{
											HUD::CLEAR_HELP(1);
											Local_1990[iVar0 /*6*/].f_1 = 0;
										}
										else
										{
											Local_1990[iVar0 /*6*/].f_1 = 0;
										}
									}
									break;
							}
							break;
						
						case joaat("mpsv_lp0_31"):
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									TASK::REMOVE_WAYPOINT_RECORDING("cs2_06");
									TASK::REMOVE_WAYPOINT_RECORDING("cs2_08");
									TASK::REMOVE_WAYPOINT_RECORDING("cs2_09");
									break;
								
								case 0:
									TASK::REQUEST_WAYPOINT_RECORDING("cs2_06");
									TASK::REQUEST_WAYPOINT_RECORDING("cs2_08");
									TASK::REQUEST_WAYPOINT_RECORDING("cs2_09");
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cs2_06") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cs2_08")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cs2_09"))
									{
										TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("cs2_06", 1, 0.5f, 1f);
										TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("cs2_08", 1, 0.5f, 1f);
										TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("cs2_09", 1, 0.5f, 1f);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
							}
							break;
						
						case 80:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									func_242(0, 15, 1);
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 0, 1);
									break;
								
								case 0:
									VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 0, 1);
									VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(50.63343f, -212.0074f, -1284.524f) - Vector(14f, 54.75f, 39f), Vector(50.63343f, -212.0074f, -1284.524f) + Vector(14f, 54.75f, 39f), 0, 1);
									iLocal_3941 = VEHICLE::GET_CLOSEST_VEHICLE(145.7978f, -188.0687f, 54.0219f, 1000f, 0, 4);
									iLocal_3942 = 0;
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
									{
										iLocal_3942++;
										if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f))
										{
											MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f, 1, 0, 0, 0);
										}
									}
									iLocal_3941 = VEHICLE::GET_CLOSEST_VEHICLE(200.1302f, -53.9908f, 67.8874f, 1000f, 0, 4);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
									{
										iLocal_3942++;
										if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f))
										{
											MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f, 1, 0, 0, 0);
										}
									}
									iLocal_3941 = VEHICLE::GET_CLOSEST_VEHICLE(276.3881f, -84.4989f, 69.6961f, 1000f, 0, 4);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
									{
										iLocal_3942++;
										if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f))
										{
											MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f, 1, 0, 0, 0);
										}
									}
									iLocal_3941 = VEHICLE::GET_CLOSEST_VEHICLE(228.0034f, -221.5665f, 53.3967f, 1000f, 0, 4);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3941))
									{
										iLocal_3942++;
										if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f))
										{
											MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_3941, 0), 10f, 1, 0, 0, 0);
										}
									}
									if (iLocal_3942 == 0 || iLocal_1419 == 6)
									{
										func_829(0, 83.44685f, -254.7585f, 44.38368f, 157.4013f, -45.13038f, 77.73179f, 239.63f);
										func_829(1, -48.49192f, -238.5476f, 34.4244f, 7.273878f, -90.35258f, 68.34261f, 202.4375f);
										func_829(2, -659.6434f, -260.6053f, 24.28761f, -441.7869f, -147.8296f, 51.77135f, 136.25f);
										func_829(3, -220.6721f, 111.0428f, 30.80496f, -282.1257f, -163.0658f, 105.5331f, 37.875f);
										func_829(4, -473.9402f, -15.62333f, 33.46295f, -470.7483f, 117.273f, 77.99986f, 185.625f);
										func_829(5, -88.16402f, -105.6206f, 44.24686f, -386.207f, -2.748743f, 60.81233f, 37.25f);
										func_829(6, -461.7865f, -60.15834f, 34.42755f, -288.6074f, -106.3431f, 70.04803f, 113.75f);
										func_829(7, -547.2716f, -160.3802f, 22.27077f, -647.417f, 32.62046f, 62.94455f, 194.75f);
										func_829(8, -769.8672f, -83.20885f, 21.51693f, -707.2591f, -49.81984f, 61.39439f, 73f);
										func_829(9, -756.9916f, 38.10073f, 30.29597f, -635.0533f, 68.89498f, 78.63374f, 112.3125f);
										func_829(10, -766.2875f, -101.407f, 21.63374f, -831.0886f, 4.667232f, 49.37119f, 17.75f);
										func_829(11, -1015.547f, -185.5724f, 21.74994f, -777.2316f, -60.65121f, 44.7104f, 83.5f);
										func_829(12, -809.4197f, -311.399f, 20.87518f, -1320.397f, -53.60245f, 55.81704f, 83.5f);
										func_829(13, -869.2797f, -163.0382f, 21.76423f, -976.0678f, -215.7058f, 44.71526f, 13f);
										func_829(14, -979.9201f, -193.3571f, 21.56952f, -1287.617f, -351.4812f, 48.3651f, 219.25f);
										func_242(0, 15, 0);
										Local_1990[iVar0 /*6*/].f_2 = 1;
									}
									break;
								
								case 1:
									if (iLocal_1419 == 6)
									{
										Local_1990[iVar0 /*6*/].f_2 = 2;
									}
									break;
								
								case 2:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
									{
										iVar19 = 0;
										while (iVar19 < Local_4646)
										{
											if (Local_4646[iVar19 /*9*/].f_7)
											{
												if (!Local_4646[iVar19 /*9*/].f_8)
												{
													if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1724[1 /*2*/], Local_4646[iVar19 /*9*/], Local_4646[iVar19 /*9*/].f_3, Local_4646[iVar19 /*9*/].f_6, 0, 1, 0))
													{
														Local_4646[iVar19 /*9*/].f_8 = 1;
													}
												}
												else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1724[1 /*2*/], Local_4646[iVar19 /*9*/], Local_4646[iVar19 /*9*/].f_3, Local_4646[iVar19 /*9*/].f_6, 0, 1, 0))
												{
													Local_4646[iVar19 /*9*/].f_8 = 1;
													Local_4646[iVar19 /*9*/].f_7 = 0;
													func_242(iVar19, iVar19, 1);
												}
											}
											iVar19++;
										}
									}
									break;
							}
							break;
						
						case 82:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									STREAMING::REQUEST_MODEL(iLocal_3135);
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (STREAMING::HAS_MODEL_LOADED(iLocal_3135))
									{
										func_477(0);
										Local_1990[iVar0 /*6*/].f_1 = 0;
									}
									break;
							}
							break;
						
						case 84:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[14 /*14*/]));
									break;
								
								case 0:
									STREAMING::REQUEST_ANIM_DICT("misscarsteal2_bum");
									func_513(4, 209.65f, -149.125f, 60.612f);
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2_bum") && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_og_boss_01")))
									{
										Local_1471[14 /*14*/] = PED::CREATE_PED(26, joaat("a_m_m_og_boss_01"), 209.65f, -149.125f, 60.612f, 0f, 1, 1);
										Local_1471[14 /*14*/].f_4 = PED::CREATE_SYNCHRONIZED_SCENE(209.65f, -149.125f, 60.612f, 0f, 0f, -103.68f, 2);
										PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[14 /*14*/]);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[14 /*14*/], 0, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[14 /*14*/], 3, 1, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[14 /*14*/], 4, 0, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[14 /*14*/], 8, 0, 0, 0);
										PED::SET_PED_PROP_INDEX(Local_1471[14 /*14*/], 0, 1, 0, false);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[14 /*14*/], Local_1471[14 /*14*/].f_4, "misscarsteal2_bum", "base", 1000f, -8f, 0, 0, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_1471[14 /*14*/].f_4, 1);
										Local_1990[iVar0 /*6*/].f_2++;
										StringCopy(&Local_3961, "START", 24);
									}
									break;
								
								case 2:
									if (!PED::IS_PED_INJURED(Local_1471[14 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (GlobalFunc_156(Local_1471[3 /*14*/], Local_1471[14 /*14*/], 1) < 6f)
										{
											TASK::TASK_LOOK_AT_ENTITY(Local_1471[3 /*14*/], Local_1471[14 /*14*/], 4000, 0, 2);
											Local_1990[iVar0 /*6*/].f_2++;
										}
										else if (GlobalFunc_156(Local_1471[3 /*14*/], Local_1471[14 /*14*/], 1) > 20f)
										{
											if (iLocal_3938 == 4)
											{
												if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
												{
													if (!func_44("LisBum"))
													{
														if (!MISC::ARE_STRINGS_EQUAL(&Local_3961, "NULL"))
														{
															if (MISC::ARE_STRINGS_EQUAL(&Local_3961, "START"))
															{
																if (func_235(2, "LisBum", 8, Local_1471[14 /*14*/], "cs2_bum", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
																{
																}
															}
															else if (func_26(2, "LisBum", &Local_3961, 8, Local_1471[14 /*14*/], "cs2_bum", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
															{
															}
														}
													}
													else
													{
														Local_3961 = { GlobalFunc_514() };
													}
												}
											}
											else if (func_44("LisBum"))
											{
												if (iLocal_1424 == 2)
												{
													GlobalFunc_4956();
												}
												Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
											}
										}
									}
									break;
								
								case 3:
									if (!PED::IS_PED_INJURED(Local_1471[14 /*14*/]))
									{
										if (iLocal_3938 == 4 && GlobalFunc_156(Local_1471[3 /*14*/], Local_1471[14 /*14*/], 1) < 6f)
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
										else if (GlobalFunc_156(Local_1471[3 /*14*/], Local_1471[14 /*14*/], 1) < 3f)
										{
											Local_1990[iVar0 /*6*/].f_2 = 5;
										}
									}
									break;
								
								case 4:
									if (iLocal_3938 == 4)
									{
										if (func_235(2, "LisChadBum", 3, Local_1471[3 /*14*/], "CHAD", 8, Local_1471[14 /*14*/], "cs2_bum", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 5:
									if (iLocal_3938 != 4 && func_44("LisChadBum"))
									{
										if (iLocal_1424 == 2)
										{
											func_158(0);
										}
									}
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[14 /*14*/]))
									{
										if (GlobalFunc_156(Local_1471[3 /*14*/], Local_1471[14 /*14*/], 1) < 4f)
										{
											Local_1990[iVar0 /*6*/].f_3 = PED::CREATE_SYNCHRONIZED_SCENE(209.65f, -149.125f, 60.612f, 0f, 0f, -103.68f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[14 /*14*/], Local_1990[iVar0 /*6*/].f_3, "misscarsteal2_bum", "exit", 8f, -8f, 0, 0, 1148846080, 0);
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 6:
									if (!PED::IS_PED_INJURED(Local_1471[14 /*14*/]))
									{
										if (iLocal_3938 != 4 && func_44("LisChadBum"))
										{
											if (iLocal_1424 == 2)
											{
												func_158(0);
											}
										}
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1990[iVar0 /*6*/].f_3) == 1f)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1471[14 /*14*/], 1);
											TASK::TASK_WANDER_STANDARD(Local_1471[14 /*14*/], 1193033728, 0);
											PED::SET_PED_KEEP_TASK(Local_1471[14 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[14 /*14*/]));
											STREAMING::REMOVE_ANIM_DICT("misscarsteal2_bum");
										}
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
							}
							break;
						
						case 85:
							if (Local_1990[iVar0 /*6*/].f_2 < 10 && Local_1990[iVar0 /*6*/].f_2 > 1)
							{
								if (func_861(&Local_2193, Local_1471[3 /*14*/]))
								{
									if (func_59(&Local_2193, Local_1471[3 /*14*/]))
									{
										Local_1990[iVar0 /*6*/].f_2 = 10;
									}
								}
							}
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 99:
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[15 /*14*/]));
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[16 /*14*/]));
									break;
								
								case 0:
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (STREAMING::HAS_MODEL_LOADED(joaat("a_c_rottweiler")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beach_02")))
									{
										Local_1471[15 /*14*/] = PED::CREATE_PED(26, joaat("a_m_y_beach_02"), 228.4758f, -115.521f, 68.8577f, 83.98f, 1, 1);
										PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[15 /*14*/]);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[15 /*14*/], 0, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[15 /*14*/], 3, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[15 /*14*/], 4, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1471[15 /*14*/], 8, 0, 0, 0);
										PED::SET_PED_PROP_INDEX(Local_1471[15 /*14*/], 0, 1, 2, false);
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[15 /*14*/], "WORLD_HUMAN_STAND_MOBILE_UPRIGHT", 0, 0);
										Local_1471[16 /*14*/] = PED::CREATE_PED(26, joaat("a_c_rottweiler"), 225.5398f, -114.8174f, 68.7156f, 253f, 1, 1);
										PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[16 /*14*/]);
										func_480();
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_DOG_SITTING_RETRIEVER", 10000, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 222.7919f, -102.9722f, 68.7838f, 2f, 20000, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[15 /*14*/], 2000);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_DOG_SITTING_RETRIEVER", 5000, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 225.5398f, -114.8174f, 68.7156f, 2f, 20000, 1048576000, 0, 1193033728);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_DOG_SITTING_RETRIEVER", 10000, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 224.4595f, -108.3759f, 68.8405f, 2f, 20000, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[15 /*14*/], 2000);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_DOG_SITTING_RETRIEVER", 5000, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 225.5398f, -114.8174f, 68.7156f, 2f, 20000, 1048576000, 0, 1193033728);
										func_479(Local_1471[16 /*14*/], 1);
										func_513(5, 228.4758f, -115.521f, 68.8577f);
										Local_1990[iVar0 /*6*/].f_2++;
										Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 10000;
									}
									break;
								
								case 2:
									if (!PED::IS_PED_INJURED(Local_1471[15 /*14*/]))
									{
										if (iLocal_3938 == 5)
										{
											if (func_235(2, "LisDogMan", 8, Local_1471[15 /*14*/], "cs2_dogMan", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									break;
								
								case 3:
									if (func_44("LisDogMan"))
									{
										if (iLocal_3938 != 5)
										{
											if (iLocal_1424 == 2)
											{
												cLocal_3943 = { GlobalFunc_514() };
												StringCopy(&Local_3949, "LisDogMan", 24);
												GlobalFunc_4956();
												Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2500;
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									else
									{
										TASK::CLEAR_PED_TASKS(Local_1471[15 /*14*/]);
										Local_1990[iVar0 /*6*/].f_2 = 5;
									}
									break;
								
								case 4:
									if (!PED::IS_PED_INJURED(Local_1471[15 /*14*/]))
									{
										if (iLocal_3938 == 5)
										{
											if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
											{
												if (!MISC::ARE_STRINGS_EQUAL(&cLocal_3943, "NULL"))
												{
													if (MISC::ARE_STRINGS_EQUAL(&Local_3949, "LisDogMan"))
													{
														if (func_26(2, "LisDogMan", &cLocal_3943, 8, Local_1471[15 /*14*/], "cs2_dogMan", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
														{
															Local_1990[iVar0 /*6*/].f_2 = 3;
														}
													}
												}
												else
												{
													TASK::TASK_USE_MOBILE_PHONE(Local_1471[15 /*14*/], 0, 1);
													Local_1990[iVar0 /*6*/].f_2 = 5;
												}
											}
										}
										else
										{
											TASK::TASK_USE_MOBILE_PHONE(Local_1471[15 /*14*/], 0, 1);
											Local_1990[iVar0 /*6*/].f_2 = 5;
										}
									}
									break;
								
								case 5:
									if (!PED::IS_PED_INJURED(Local_1471[15 /*14*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_1471[15 /*14*/], 936589729) == 7)
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_1471[15 /*14*/], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
											Local_1990[iVar0 /*6*/].f_2 = 6;
										}
									}
									break;
								
								case 10:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1471[3 /*14*/], 211.1137f, -114.1319f, 64.81137f, 224.6205f, -119.2306f, 73.2131f, 6.875f, 0, 1, 0))
										{
											if (!PED::IS_PED_INJURED(Local_1471[16 /*14*/]))
											{
												TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_1471[16 /*14*/], Local_1471[3 /*14*/], -3f, 5f, 0f, 2f, -1, 0.1f, 1);
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									break;
								
								case 11:
									if (!PED::IS_PED_INJURED(Local_1471[16 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if (GlobalFunc_156(Local_1471[16 /*14*/], Local_1471[3 /*14*/], 1) < 5f)
										{
											func_513(5, ENTITY::GET_ENTITY_COORDS(Local_1471[3 /*14*/], 1));
											func_828(3);
											func_483(2, 35, 2);
											func_480();
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[3 /*14*/], 1500);
											TASK::TASK_PLAY_ANIM(0, "CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a", "idle_a", 8f, -8f, 3200, 0, 0, 0, 0, 0);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[3 /*14*/], 1500);
											TASK::TASK_PLAY_ANIM(0, "CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a", "idle_a", 8f, -8f, 3500, 0, 0, 0, 0, 0);
											func_479(Local_1471[16 /*14*/], 0);
											Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER();
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 12:
									if (!PED::IS_PED_INJURED(Local_1471[16 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) < 1000)
										{
											if (iLocal_3938 == 5)
											{
												if (func_515(2, "LisChadDog", "LisChadDog_1", 8, Local_1471[15 /*14*/], "cs2_dogMan", 3, Local_1471[3 /*14*/], "chad", -1, 0, 0, -1, 0, 0, 7))
												{
													TASK::TASK_LOOK_AT_ENTITY(Local_1471[3 /*14*/], Local_1471[16 /*14*/], 5000, 0, 2);
													Local_1990[iVar0 /*6*/].f_2++;
												}
											}
										}
										else
										{
											TASK::TASK_LOOK_AT_ENTITY(Local_1471[3 /*14*/], Local_1471[16 /*14*/], 5000, 0, 2);
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 13:
									if ((!PED::IS_PED_INJURED(Local_1471[16 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[3 /*14*/])) && !PED::IS_PED_INJURED(Local_1471[15 /*14*/]))
									{
										if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) > 4000)
										{
											if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) < 5000)
											{
												if (iLocal_3938 == 5)
												{
													if (func_515(2, "LisChadDog", "LisChadDog_2", 8, Local_1471[15 /*14*/], "cs2_dogMan", 3, Local_1471[3 /*14*/], "chad", -1, 0, 0, -1, 0, 0, 7))
													{
														TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1471[3 /*14*/], Local_1471[16 /*14*/], 5000);
														Local_1990[iVar0 /*6*/].f_2++;
													}
												}
											}
											else
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1471[3 /*14*/], Local_1471[16 /*14*/], 5000);
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									break;
								
								case 14:
									if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) > 7000)
									{
										if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) < 8000)
										{
											if (iLocal_3938 == 5)
											{
												if (func_515(2, "LisChadDog", "LisChadDog_3", 8, Local_1471[15 /*14*/], "cs2_dogMan", 3, Local_1471[3 /*14*/], "chad", -1, 0, 0, -1, 0, 0, 7))
												{
													Local_1990[iVar0 /*6*/].f_2++;
												}
											}
										}
										else
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
								
								case 15:
									if (!PED::IS_PED_INJURED(Local_1471[16 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[15 /*14*/]))
									{
										func_480();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 232.5028f, -103.9169f, 69.0993f, 1f, -1, 0.25f, 1, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 232.1583f, -81.7946f, 68.6269f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										func_479(Local_1471[15 /*14*/], 0);
										Local_1990[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 16:
									if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
									{
										if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) > 10000)
										{
											if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) < 11000)
											{
												if (iLocal_3938 == 5)
												{
													if (func_515(2, "LisChadDog", "LisChadDog_4", 8, Local_1471[15 /*14*/], "cs2_dogMan", 3, Local_1471[3 /*14*/], "chad", -1, 0, 0, -1, 0, 0, 7))
													{
														func_480();
														TASK::TASK_PAUSE(0, 250);
														if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1471[3 /*14*/], 228.9987f, -119.6371f, 73.21883f, 205.348f, -111.0208f, 67.255f, 6.0625f, 0, 1, 0))
														{
															TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "CS2_01", 0, 2, -1);
														}
														else
														{
															TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "CS2_01", 0, 8, -1);
														}
														func_479(Local_1471[3 /*14*/], 0);
														func_480();
														TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2197.307f, -2648.153f, -59.3432f, 2f, -1, 1048576000, 0, 1193033728);
														TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Local_1471[15 /*14*/], 3f, 1f, 0f, 2f, -1, 0.1f, 1);
														func_479(Local_1471[16 /*14*/], 0);
														Local_1990[iVar0 /*6*/].f_2++;
													}
												}
											}
											else
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1471[3 /*14*/], 228.9987f, -119.6371f, 73.21883f, 205.348f, -111.0208f, 67.255f, 6.0625f, 0, 1, 0))
												{
													TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1471[3 /*14*/], "CS2_01", 0, 2, -1);
												}
												else
												{
													TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1471[3 /*14*/], "CS2_01", 0, 8, -1);
												}
												func_480();
												TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Local_1471[15 /*14*/], 3f, 1f, 0f, 2f, -1, 0.1f, 1);
												func_479(Local_1471[16 /*14*/], 0);
												Local_1990[iVar0 /*6*/].f_2++;
											}
										}
									}
									break;
								
								case 17:
									if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) > 13000)
									{
										if ((MISC::GET_GAME_TIMER() - Local_1990[iVar0 /*6*/].f_3) < 14000)
										{
											if (iLocal_3938 == 5)
											{
												if (func_515(2, "LisChadDog", "LisChadDog_5", 8, Local_1471[15 /*14*/], "cs2_dogMan", 3, Local_1471[3 /*14*/], "chad", -1, 0, 0, -1, 0, 0, 7))
												{
													Local_1990[iVar0 /*6*/].f_2++;
												}
											}
										}
										else
										{
											Local_1990[iVar0 /*6*/].f_2++;
										}
									}
									break;
							}
							break;
						
						case 87:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									func_513(6, 201.4053f, -154.2533f, 57.8284f);
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (iLocal_3938 == 6)
									{
										if (!PED::IS_PED_INJURED(Local_1471[3 /*14*/]))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad", 3))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad") > 0.103f)
												{
													if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1471[3 /*14*/], "misscarsteal2CHAD_HOLDUP", "chad_holdup_chad") < 0.112f)
													{
														uVar20 = AUDIO::GET_SOUND_ID();
														AUDIO::PLAY_SOUND(uVar20, "Garage_Open", "CAR_STEAL_2_SOUNDSET", 0, 0, 1);
														Local_1990[iVar0 /*6*/].f_1 = 0;
													}
													else
													{
														Local_1990[iVar0 /*6*/].f_1 = 0;
													}
												}
											}
										}
									}
									break;
							}
							break;
						
						case 88:
							if (Local_2193.f_134 != 0 && Local_2193.f_134 != Local_1471[4 /*14*/])
							{
								func_212(2, 4);
								Local_1990[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 89:
							switch (Local_1990[iVar0 /*6*/].f_2)
							{
								case 0:
									func_813(&Local_2193, Local_1471[3 /*14*/], 1, 2, 1, 1, 1, 1, 0);
									func_812(&Local_2193, Local_1471[3 /*14*/], "CH_CHAD", 8);
									Local_1990[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
									Local_1990[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_1990[iVar0 /*6*/].f_3)
									{
										func_522(&Local_2193, Local_1471[3 /*14*/]);
									}
									break;
							}
							break;
						
						case 90:
							if (!bParam1)
							{
								if (iLocal_1419 == 2)
								{
									if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1372.874f, -2071.877f, 51.1031f, 1) > 130f)
									{
										func_844("CH_F10");
									}
								}
								if (iLocal_1419 < 12)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1724[0 /*2*/]))
									{
										if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
										{
											func_844("CH_F01");
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[1 /*14*/]))
									{
										if (PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
										{
											func_844("CH_F02");
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1724[2 /*2*/]))
									{
										if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
										{
											func_844("CH_F04");
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[2 /*14*/]))
									{
										if (PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
										{
											func_844("CH_F05");
										}
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
									{
										if (iLocal_1419 < 3)
										{
											if (ENTITY::GET_ENTITY_HEALTH(Local_1724[0 /*2*/]) < 500)
											{
												func_844("CH_F06");
											}
										}
									}
									if (iLocal_1419 != 1)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
										{
											if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
											{
												if (!PED::IS_PED_IN_VEHICLE(Local_1471[1 /*14*/], Local_1724[0 /*2*/], 0))
												{
													func_844("CH_F09");
												}
											}
										}
									}
									if (iLocal_1419 > 3)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
										{
											if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											{
												if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
												{
													Var21 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
													if (((Var21.x < -2000f || Var21.x > 2000f) || Var21.f_1 > 1365f) || Var21.f_1 < -3000f)
													{
														func_844("CH_F11");
													}
												}
											}
										}
									}
									if (iLocal_1419 == 1)
									{
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1471[4 /*14*/]))
									{
										if (PED::IS_PED_INJURED(Local_1471[4 /*14*/]))
										{
											func_844("CMN_FDIED");
										}
									}
								}
							}
							break;
						}
					}
			}
			iVar0++;
		}
	}
}

void func_828(int iParam0)//Position - 0x83DD8
{
	Local_4794[iParam0 /*3*/] = { 0f, 0f, 0f };
}

void func_829(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x83DEC
{
	Local_4646[iParam0 /*9*/] = { Param1 };
	Local_4646[iParam0 /*9*/].f_3 = { Param4 };
	Local_4646[iParam0 /*9*/].f_6 = fParam7;
	Local_4646[iParam0 /*9*/].f_7 = 0;
}

void func_830(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x83E25
{
	uParam0->f_46 = 1;
	uParam0->f_85[iParam1 /*5*/].f_4 = 1;
	uParam0->f_85[iParam1 /*5*/] = { Param2 };
	uParam0->f_85[iParam1 /*5*/].f_3 = fParam5;
}

void func_831(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10)//Position - 0x83E57
{
	Local_36[iParam0 /*13*/][0 /*3*/] = { Param1 };
	Local_36[iParam0 /*13*/][1 /*3*/] = { Param4 };
	Local_36[iParam0 /*13*/][2 /*3*/] = { Param7 };
	Local_36[iParam0 /*13*/][3 /*3*/] = { Param10 };
}

int func_832(struct<3> Param0, float fParam3, int iParam4)//Position - 0x83E9B
{
	if (iParam4 == 0)
	{
		if (func_833(&(Local_1471[4 /*14*/]), 1, Param0, fParam3, 1, 0, 0))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1471[4 /*14*/], 0);
			return 1;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1))
		{
			if (func_626(&(Local_1471[4 /*14*/]), 1, iParam4, -1, 1, 0, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1471[4 /*14*/], 0);
				return 1;
			}
		}
		else if (func_626(&(Local_1471[4 /*14*/]), 1, iParam4, 0, 1, 0, 0))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1471[4 /*14*/], 0);
			return 1;
		}
	}
	return 0;
}

int func_833(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x83F30
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8386(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11318(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11333(*iParam0, bParam8);
			GlobalFunc_516(*iParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_834(int iParam0)//Position - 0x83FCF
{
	if (!PED::IS_PED_INJURED(Local_1471[iParam0 /*14*/]))
	{
		return 1;
	}
	return 0;
}



int func_837(int iParam0)//Position - 0x8403E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Local_2768[iVar0 /*81*/].f_76 != 0)
	{
		if (Local_2768[iVar0 /*81*/].f_79 < 33)
		{
			if ((MISC::GET_GAME_TIMER() - Local_2768[iVar0 /*81*/].f_76) > Local_2768[iVar0 /*81*/].f_9[Local_2768[iVar0 /*81*/].f_79 /*2*/].f_1 || (iParam0 == 3 && iLocal_1400))
			{
				if ((MISC::GET_GAME_TIMER() - Local_2768[iVar0 /*81*/].f_76) < Local_2768[iVar0 /*81*/].f_9[Local_2768[iVar0 /*81*/].f_79 /*2*/].f_1 + 1000 || (iParam0 == 3 && iLocal_1400))
				{
					if (func_838(&(Local_2768[iVar0 /*81*/]), iParam0, 0))
					{
						return 1;
					}
				}
				else if (func_838(&(Local_2768[iVar0 /*81*/]), iParam0, 1))
				{
					return 1;
				}
			}
		}
	}
	else if (func_838(&(Local_2768[iVar0 /*81*/]), iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_838(var uParam0, int iParam1, bool bParam2)//Position - 0x84122
{
	struct<3> Var0;
	struct<3> Var6;
	struct<3> Var12;
	struct<3> Var18;
	int iVar24;
	
	if (bLocal_3115)
	{
		bParam2 = true;
	}
	if ((uParam0->f_79 != 0 && uParam0->f_9[uParam0->f_79 /*2*/] != 0) || uParam0->f_79 == 0)
	{
		switch (iParam1)
		{
			case 0:
				switch (uParam0->f_9[uParam0->f_79 /*2*/])
				{
					case 0:
						uParam0->f_9[0 /*2*/] = 0;
						uParam0->f_9[1 /*2*/] = 1;
						uParam0->f_9[2 /*2*/] = 2;
						uParam0->f_9[2 /*2*/].f_1 = 2000;
						uParam0->f_9[3 /*2*/] = 2;
						uParam0->f_9[3 /*2*/].f_1 = 5000;
						uParam0->f_9[4 /*2*/] = 3;
						uParam0->f_9[4 /*2*/].f_1 = 6000;
						uParam0->f_9[5 /*2*/] = 2;
						uParam0->f_9[5 /*2*/].f_1 = 8000;
						uParam0->f_9[6 /*2*/] = 2;
						uParam0->f_9[6 /*2*/].f_1 = 13000;
						uParam0->f_9[7 /*2*/] = 2;
						uParam0->f_9[7 /*2*/].f_1 = 18000;
						uParam0->f_9[8 /*2*/] = 2;
						uParam0->f_9[8 /*2*/].f_1 = 25057;
						uParam0->f_9[9 /*2*/] = 2;
						uParam0->f_9[9 /*2*/].f_1 = 30000;
						uParam0->f_9[10 /*2*/] = 2;
						uParam0->f_9[10 /*2*/].f_1 = 33300;
						uParam0->f_9[11 /*2*/] = 3;
						uParam0->f_9[11 /*2*/].f_1 = 34000;
						uParam0->f_9[12 /*2*/] = 3;
						uParam0->f_9[12 /*2*/].f_1 = 40000;
						uParam0->f_9[13 /*2*/] = 3;
						uParam0->f_9[13 /*2*/].f_1 = 40000;
						uParam0->f_9[14 /*2*/] = 2;
						uParam0->f_9[14 /*2*/].f_1 = 40000;
						Local_1724[4 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("boxville2"), -25.62597f, -85.98064f, 57.14539f, -45f, 1, 1);
						Local_1471[5 /*14*/] = PED::CREATE_PED(26, joaat("s_m_m_janitor"), -29.4751f, -90.5675f, 56.2545f, 140f, 1, 1);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[5 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[5 /*14*/], 9, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_1471[5 /*14*/], 0, 0, 0, false);
						func_843(&Local_2193, &(Local_2674[0 /*11*/]));
						func_813(&Local_2193, Local_1471[5 /*14*/], 1, 3, 0, 1, 1, 1, 0);
						func_812(&Local_2193, Local_1471[5 /*14*/], "CH_NAME1", 8);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[4 /*2*/], 2, 0, 0);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[4 /*2*/], 3, 0, 0);
						uParam0->f_3 = { -28.85f, -87.939f, 56.622f };
						uParam0->f_6 = { 0f, 0f, 45f };
						uParam0->f_80 = func_513(0, uParam0->f_3);
						(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(-28.85f, -87.939f, 56.622f, 0f, 0f, 45f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED((*uParam0)[0], 1);
						if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[5 /*14*/], (*uParam0)[0], "misscarsteal2MUGGING", "mugging_outro_mugger", 1000f, -0.5f, 0, 0, 1148846080, 0);
						}
						uParam0->f_79++;
						break;
					
					case 1:
						if (func_842(*uParam0))
						{
							uParam0->f_76 = MISC::GET_GAME_TIMER();
							uParam0->f_79++;
						}
						break;
					
					case 2:
						if (bParam2)
						{
							uParam0->f_78++;
							uParam0->f_79++;
						}
						else if (func_841(uParam0))
						{
							if (uParam0->f_78 == 8)
							{
								if (func_235(2, "cs2_pub", 5, Local_1471[5 /*14*/], "cs2_courier", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									uParam0->f_78++;
									uParam0->f_79++;
								}
							}
							else
							{
								StringCopy(&Var0, "CAR_2_IG_4_", 24);
								StringIntConCat(&Var0, uParam0->f_78 + 1, 24);
								if (func_515(2, "CAR_2_IG_4", &Var0, 5, Local_1471[5 /*14*/], "cs2_courier", -1, 0, 0, -1, 0, 0, -1, 0, 0, 7))
								{
									uParam0->f_78++;
									uParam0->f_79++;
								}
							}
						}
						else
						{
							uParam0->f_78++;
							uParam0->f_79++;
						}
						break;
					
					case 3:
						if (bParam2)
						{
							uParam0->f_78++;
							uParam0->f_77++;
						}
						else
						{
							switch (uParam0->f_77)
							{
								case 0:
									(*uParam0)[1] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
									if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[5 /*14*/], (*uParam0)[1], "misscarsteal2MUGGING", "mugging_action_mugger", 0.5f, -0.5f, 0, 0, 1148846080, 0);
									}
									PED::SET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[1], 0f);
									iLocal_3103[1] = OBJECT::CREATE_OBJECT(joaat("prop_cs_package_01"), -28.85f, -87.939f, 56.622f, 1, 1, 0);
									iLocal_3103[2] = OBJECT::CREATE_OBJECT(joaat("prop_cs_package_01"), -28.85f, -87.939f, 57.622f, 1, 1, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_3103[1], 0, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_3103[2], 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3103[1], (*uParam0)[1], "mugging_action_box1", "misscarsteal2MUGGING", 1000f, 1090519040, 0, 1148846080);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3103[2], (*uParam0)[1], "mugging_action_box2", "misscarsteal2MUGGING", 1000f, 1090519040, 0, 1148846080);
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-22.50926f, -110.7883f, 54.81747f, -32.3041f, -135.4211f, 64.82446f, 29.375f, 0, 0, 1);
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(19.84602f, -142.1864f, 53.80252f, 65.39187f, -160.8914f, 62.86219f, 29.375f, 0, 0, 1);
									uParam0->f_79++;
									uParam0->f_77++;
									break;
								
								case 1:
									func_840(uParam0);
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[1]) > 0.99f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[1]))
									{
										(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(-28.85f, -87.939f, 56.622f, 0f, 0f, 45f, 2);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED((*uParam0)[0], 1);
										if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
										{
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[5 /*14*/], (*uParam0)[0], "misscarsteal2MUGGING", "mugging_outro_mugger", 1000f, -0.5f, 0, 0, 1148846080, 0);
										}
										uParam0->f_79++;
										uParam0->f_77++;
									}
									if (func_59(&Local_2193, Local_1471[5 /*14*/]) || !func_861(&Local_2193, Local_1471[5 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
										{
											func_480();
											TASK::TASK_ACHIEVE_HEADING(0, 139f, 0);
											TASK::TASK_GO_STRAIGHT_TO_COORD(0, -47.9225f, -135.5877f, 56.6118f, 1f, -1, 1193033728, 1056964608);
											TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
											func_479(Local_1471[5 /*14*/], 0);
											uParam0->f_79++;
											uParam0->f_77++;
										}
									}
									break;
								
								case 2:
									func_840(uParam0);
									if (func_59(&Local_2193, Local_1471[5 /*14*/]) || !func_861(&Local_2193, Local_1471[5 /*14*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1471[5 /*14*/]))
										{
											func_480();
											TASK::TASK_ACHIEVE_HEADING(0, 139f, 0);
											TASK::TASK_GO_STRAIGHT_TO_COORD(0, -47.9225f, -135.5877f, 56.6118f, 1f, -1, 1193033728, 1056964608);
											TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
											func_479(Local_1471[5 /*14*/], 0);
											uParam0->f_79++;
											uParam0->f_77++;
										}
									}
									break;
								}
						}
						break;
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[0]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[0]) >= 0.436f)
					{
						(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
						if ((!PED::IS_PED_INJURED(Local_1471[7 /*14*/]) && !PED::IS_PED_INJURED(Local_1471[8 /*14*/])) && !PED::IS_PED_INJURED(Local_1471[9 /*14*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[7 /*14*/], (*uParam0)[0], "misscarsteal2PERVERT", "pervert_husband", 0.4f, -0.4f, 0, 0, 0.4f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[8 /*14*/], (*uParam0)[0], "misscarsteal2PERVERT", "pervert_perv", 0.4f, -0.4f, 0, 0, 0.4f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[9 /*14*/], (*uParam0)[0], "misscarsteal2PERVERT", "pervert_wife", 0.4f, -0.4f, 0, 0, 0.4f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[0], 0.11f);
						}
					}
				}
				switch (uParam0->f_9[uParam0->f_79 /*2*/])
				{
					case 0:
						uParam0->f_9[0 /*2*/] = 0;
						uParam0->f_9[1 /*2*/] = 1;
						uParam0->f_9[2 /*2*/] = 3;
						uParam0->f_9[2 /*2*/].f_1 = 0;
						uParam0->f_9[3 /*2*/] = 3;
						uParam0->f_9[3 /*2*/].f_1 = 0;
						Local_1471[7 /*14*/] = PED::CREATE_PED(26, joaat("a_m_y_beach_02"), -9.518f, -31.102f, 68.097f, 140f, 1, 1);
						Local_1471[8 /*14*/] = PED::CREATE_PED(26, joaat("s_m_m_janitor"), -9.518f, -31.102f, 68.097f, 140f, 1, 1);
						Local_1471[9 /*14*/] = PED::CREATE_PED(26, joaat("s_f_y_hooker_01"), -9.518f, -31.102f, 68.097f, 140f, 1, 1);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[7 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 4, 1, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 8, 1, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_1471[7 /*14*/], 1, 0, 0, false);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[9 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[9 /*14*/], 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[9 /*14*/], 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[9 /*14*/], 3, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[9 /*14*/], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[9 /*14*/], 8, 0, 1, 0);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[8 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[8 /*14*/], 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[8 /*14*/], 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[8 /*14*/], 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[8 /*14*/], 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[8 /*14*/], 9, 0, 0, 0);
						func_843(&Local_2193, &(Local_2674[1 /*11*/]));
						func_843(&Local_2193, &(Local_2674[2 /*11*/]));
						func_843(&Local_2193, &(Local_2674[3 /*11*/]));
						func_813(&Local_2193, Local_1471[9 /*14*/], 1, 3, 0, 1, 1, 1, 0);
						func_812(&Local_2193, Local_1471[9 /*14*/], "CH_NAME5", 4);
						func_813(&Local_2193, Local_1471[8 /*14*/], 1, 3, 0, 1, 1, 1, 0);
						func_812(&Local_2193, Local_1471[8 /*14*/], "CH_GREG", 6);
						func_813(&Local_2193, Local_1471[7 /*14*/], 1, 3, 0, 1, 1, 1, 0);
						func_812(&Local_2193, Local_1471[7 /*14*/], "CH_NAME3", 4);
						uParam0->f_3 = { -9.518f, -31.102f, 68.097f };
						uParam0->f_6 = { 0f, 0f, 69.25f };
						uParam0->f_80 = func_513(1, uParam0->f_3);
						(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[7 /*14*/], (*uParam0)[0], "misscarsteal2PERVERT", "pervert_husband", 0.4f, -0.4f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[8 /*14*/], (*uParam0)[0], "misscarsteal2PERVERT", "pervert_perv", 0.4f, -0.4f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[9 /*14*/], (*uParam0)[0], "misscarsteal2PERVERT", "pervert_wife", 0.4f, -0.4f, 0, 0, 1148846080, 0);
						uParam0->f_79++;
						break;
					
					case 1:
						if (func_842(*uParam0))
						{
							uParam0->f_76 = MISC::GET_GAME_TIMER();
							uParam0->f_79++;
						}
						break;
					
					case 2:
						break;
					
					case 3:
						switch (uParam0->f_77)
						{
							case 0:
								if (uParam0->f_78 < 20)
								{
									if (func_841(uParam0))
									{
										StringCopy(&Var6, "IG_5_a_", 24);
										StringIntConCat(&Var6, uParam0->f_78 + 1, 24);
										if (func_515(2, "IG_5_a", &Var6, 4, Local_1471[7 /*14*/], "cs2_roof_husband", 5, Local_1471[8 /*14*/], "cs2_roof_pervert", 6, Local_1471[9 /*14*/], "cs2_roof_wife", -1, 0, 0, 7))
										{
											uParam0->f_78++;
										}
									}
								}
								else
								{
									uParam0->f_78 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
									uParam0->f_79++;
									uParam0->f_77++;
								}
								break;
							
							case 1:
								if (func_841(uParam0))
								{
									switch (uParam0->f_78)
									{
										case 0:
											if (func_235(2, "IG_5_b", 4, Local_1471[7 /*14*/], "cs2_roof_husband", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												uParam0->f_78 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												uParam0->f_77++;
												uParam0->f_9[0 /*2*/].f_1 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											}
											break;
										
										case 1:
											if (func_235(2, "IG_5_c", 5, Local_1471[8 /*14*/], "cs2_roof_pervert", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												uParam0->f_77++;
												uParam0->f_78 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												uParam0->f_9[0 /*2*/].f_1 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											}
											break;
										
										case 2:
											if (func_235(2, "IG_5_d", 6, Local_1471[9 /*14*/], "cs2_roof_wife", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												uParam0->f_77++;
												uParam0->f_78 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												uParam0->f_9[0 /*2*/].f_1 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
											}
											break;
										}
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > uParam0->f_9[0 /*2*/].f_1)
								{
									uParam0->f_77 = 1;
								}
								break;
						}
						break;
				}
				break;
			
			case 2:
				switch (uParam0->f_9[uParam0->f_79 /*2*/])
				{
					case 5:
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[11 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[11 /*14*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[12 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[12 /*14*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[13 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[13 /*14*/]));
						}
						Local_1471[11 /*14*/] = PED::CREATE_PED(26, joaat("a_m_m_og_boss_01"), 180.0352f, -153.7189f, 55.2982f, 73.5737f, 1, 1);
						Local_1471[12 /*14*/] = PED::CREATE_PED(26, joaat("a_m_m_bevhills_02"), 188.5162f, -157.9683f, 55.3856f, 203.2963f, 1, 1);
						Local_1471[13 /*14*/] = PED::CREATE_PED(26, joaat("s_f_y_hooker_01"), 189.1093f, -159.2958f, 55.3431f, 359.9998f, 1, 1);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[11 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 0, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 3, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 8, 0, 0, 0);
						(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[11 /*14*/], (*uParam0)[0], "misscarsteal2PIMPSEX", "pimpsex_pimp", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[12 /*14*/], (*uParam0)[0], "misscarsteal2PIMPSEX", "pimpsex_punter", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[13 /*14*/], (*uParam0)[0], "misscarsteal2PIMPSEX", "pimpsex_hooker", 1000f, -1000f, 0, 0, 1148846080, 0);
						uParam0->f_79++;
						break;
					
					case 0:
						uParam0->f_9[0 /*2*/] = 0;
						uParam0->f_9[1 /*2*/] = 1;
						func_839(uParam0, 2, 100);
						func_839(uParam0, 2, 6800);
						func_839(uParam0, 3, 10000);
						func_839(uParam0, 2, 12126);
						func_839(uParam0, 2, 15824);
						func_839(uParam0, 2, 18920);
						func_839(uParam0, 2, 25570);
						func_839(uParam0, 3, 28014);
						func_839(uParam0, 2, 29714);
						func_839(uParam0, 3, 31041);
						func_839(uParam0, 2, 33706);
						func_839(uParam0, 2, 35577);
						func_839(uParam0, 2, 40437);
						func_839(uParam0, 2, 45579);
						func_839(uParam0, 3, 46000);
						func_839(uParam0, 2, 49139);
						func_839(uParam0, 3, 51600);
						func_839(uParam0, 2, 54318);
						func_839(uParam0, 2, 58432);
						func_839(uParam0, 2, 61640);
						func_839(uParam0, 3, 64000);
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[11 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[11 /*14*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[12 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[11 /*14*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[13 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[11 /*14*/]));
						}
						Local_1471[11 /*14*/] = PED::CREATE_PED(26, joaat("a_m_m_og_boss_01"), 180.0352f, -153.7189f, 55.2982f, 73.5737f, 1, 1);
						Local_1471[12 /*14*/] = PED::CREATE_PED(26, joaat("a_m_y_beach_02"), 188.5162f, -157.9683f, 55.3856f, 203.2963f, 1, 1);
						Local_1471[13 /*14*/] = PED::CREATE_PED(26, joaat("s_f_y_hooker_02"), 189.1093f, -159.2958f, 55.3431f, 359.9998f, 1, 1);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[11 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 4, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[11 /*14*/], 8, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_1471[11 /*14*/], 1, 0, 0, false);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[12 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[12 /*14*/], 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[12 /*14*/], 3, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[12 /*14*/], 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[12 /*14*/], 8, 1, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_1471[12 /*14*/], 1, 1, 1, false);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[13 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[13 /*14*/], 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[13 /*14*/], 2, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[13 /*14*/], 3, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[13 /*14*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[13 /*14*/], 8, 0, 0, 0);
						uParam0->f_3 = { 189.08f, -159.296f, 55.33f };
						uParam0->f_6 = { 0f, 0f, -15.39f };
						(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
						uParam0->f_80 = func_513(2, uParam0->f_3);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[11 /*14*/], (*uParam0)[0], "misscarsteal2PIMPSEX", "pimpsex_pimp", 1000f, -1f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[12 /*14*/], (*uParam0)[0], "misscarsteal2PIMPSEX", "pimpsex_punter", 1000f, -1f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[13 /*14*/], (*uParam0)[0], "misscarsteal2PIMPSEX", "pimpsex_hooker", 1000f, -1f, 0, 0, 1148846080, 0);
						func_863(68, 14, 0);
						uParam0->f_79++;
						break;
					
					case 1:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[0]))
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[0], 0.2f);
						}
						if (func_842(*uParam0))
						{
							uParam0->f_76 = MISC::GET_GAME_TIMER();
							uParam0->f_79++;
						}
						break;
					
					case 2:
						if (bParam2)
						{
							uParam0->f_78++;
							uParam0->f_79++;
						}
						else if (func_841(uParam0))
						{
							StringCopy(&Var12, "CAR_2_IG_6_", 24);
							if (uParam0->f_78 <= 2)
							{
								StringIntConCat(&Var12, uParam0->f_78 + 1, 24);
							}
							else if (uParam0->f_78 <= 10)
							{
								StringIntConCat(&Var12, uParam0->f_78 + 2, 24);
							}
							else
							{
								StringIntConCat(&Var12, uParam0->f_78 + 4, 24);
							}
							if (func_515(2, "CAR_2_IG_6", &Var12, 4, Local_1471[12 /*14*/], "cs2_punter", 5, Local_1471[11 /*14*/], "cs2_pimp", 6, Local_1471[13 /*14*/], "cs2_whore", -1, 0, 0, 7))
							{
								uParam0->f_78++;
								uParam0->f_79++;
							}
						}
						else
						{
							uParam0->f_78++;
							uParam0->f_79++;
						}
						break;
					
					case 4:
						if (uParam0->f_78 >= 0)
						{
							uParam0->f_78 = -1;
						}
						if (uParam0->f_78 > -12)
						{
							if (func_841(uParam0))
							{
								if (func_235(2, "IG_6_a", 5, Local_1471[11 /*14*/], "cs2_pimp", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									uParam0->f_76 += 4000;
									uParam0->f_78 = (uParam0->f_78 - 1);
								}
							}
							else
							{
								func_840(uParam0);
							}
						}
						break;
					
					case 3:
						switch (uParam0->f_77)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_1471[11 /*14*/], joaat("weapon_pistol"), 10, 1, 1);
								}
								uParam0->f_79++;
								uParam0->f_77++;
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
								{
									if (func_841(uParam0))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Pimp_Gunshot_Mic", Local_1471[11 /*14*/], "CAR_STEAL_2_SOUNDSET", 0, 0);
										GlobalFunc_4956();
									}
									else
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Pimp_Gunshot", Local_1471[11 /*14*/], "CAR_STEAL_2_SOUNDSET", 0, 0);
									}
									uParam0->f_79++;
									uParam0->f_77++;
								}
								break;
							
							case 2:
								if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_1471[11 /*14*/], joaat("weapon_unarmed"), 1);
								}
								uParam0->f_79++;
								uParam0->f_77++;
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_1471[11 /*14*/], joaat("weapon_pistol"), 1);
								}
								PATHFIND::ADD_NAVMESH_REQUIRED_REGION(187f, -156f, 20f);
								uParam0->f_79++;
								uParam0->f_77++;
								break;
							
							case 4:
								if (!PED::IS_PED_INJURED(Local_1471[11 /*14*/]))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_1471[11 /*14*/], joaat("weapon_unarmed"), 1);
									func_480();
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[13 /*14*/], 13000);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 176.4232f, -153.2906f, 55.2087f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 0);
									func_479(Local_1471[11 /*14*/], 0);
									if (!PED::IS_PED_INJURED(Local_1471[13 /*14*/]))
									{
										func_480();
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1471[13 /*14*/], 6000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 231.9157f, -173.5117f, 55.9517f, 1f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_PROSTITUTE_LOW_CLASS", 0, 0);
										func_479(Local_1471[13 /*14*/], 0);
									}
								}
								uParam0->f_79++;
								uParam0->f_77++;
								break;
							
							case 5:
								uParam0->f_79++;
								uParam0->f_77++;
								break;
						}
						break;
				}
				break;
			
			case 3:
				switch (uParam0->f_9[uParam0->f_79 /*2*/])
				{
					case 5:
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[3 /*14*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[10 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[10 /*14*/]));
						}
						func_288(3, iLocal_3136, 205.723f, -110.766f, 67.755f, 140f, 0, -1, 8, 0, 0, 0);
						AUDIO::STOP_PED_SPEAKING(Local_1471[3 /*14*/], 1);
						Local_1471[10 /*14*/] = PED::CREATE_PED(26, joaat("s_f_y_hooker_01"), 205.723f, -110.766f, 67.755f, 140f, 1, 1);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[10 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 0, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 4, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 8, 2, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1471[3 /*14*/], 0);
						(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
						(*uParam0)[1] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
						PED::SET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[0], 0.04f);
						uParam0->f_79++;
						uParam0->f_76 = MISC::GET_GAME_TIMER();
						uParam0->f_77 = 0;
						break;
					
					case 0:
						uParam0->f_9[0 /*2*/] = 0;
						uParam0->f_9[1 /*2*/] = 1;
						func_839(uParam0, 2, 2500);
						func_839(uParam0, 2, 6200);
						func_839(uParam0, 2, 8000);
						func_839(uParam0, 2, 10000);
						func_839(uParam0, 3, 11500);
						func_839(uParam0, 2, 14000);
						func_839(uParam0, 3, 16500);
						func_839(uParam0, 2, 18000);
						func_839(uParam0, 3, 18000);
						func_839(uParam0, 2, 22500);
						func_839(uParam0, 2, 28300);
						func_839(uParam0, 2, 32000);
						func_839(uParam0, 3, 33500);
						func_839(uParam0, 3, 35000);
						func_839(uParam0, 2, 36500);
						func_839(uParam0, 3, 41000);
						func_839(uParam0, 2, 43300);
						func_839(uParam0, 2, 48900);
						func_839(uParam0, 2, 51500);
						func_839(uParam0, 3, 51500);
						func_839(uParam0, 2, 56000);
						func_839(uParam0, 2, 58500);
						func_839(uParam0, 2, 60500);
						func_839(uParam0, 2, 62000);
						func_839(uParam0, 3, 65500);
						func_839(uParam0, 3, 67700);
						func_839(uParam0, 2, 66700);
						func_839(uParam0, 2, 70500);
						func_839(uParam0, 2, 71500);
						func_839(uParam0, 2, 76000);
						func_839(uParam0, 2, 77500);
						func_839(uParam0, 2, 78800);
						func_839(uParam0, 3, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[3 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[3 /*14*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1471[10 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1471[10 /*14*/]));
						}
						func_288(3, iLocal_3136, 205.723f, -110.766f, 67.755f, 140f, 0, -1, 8, 0, 0, 0);
						AUDIO::STOP_PED_SPEAKING(Local_1471[3 /*14*/], 1);
						Local_1471[10 /*14*/] = PED::CREATE_PED(26, joaat("s_f_y_hooker_01"), 205.723f, -110.766f, 67.755f, 140f, 1, 1);
						PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[10 /*14*/]);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 0, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 4, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1471[10 /*14*/], 8, 2, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1471[3 /*14*/], 0);
						uParam0->f_3 = { 205.723f, -110.766f, 67.755f };
						uParam0->f_6 = { 0f, 0f, -39.43f };
						(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_3, uParam0->f_6, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED((*uParam0)[0], 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "chad_idle_chad", 1000f, -0.4f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[10 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "chad_idle_girl", 1000f, -0.4f, 0, 0, 1148846080, 0);
						uParam0->f_80 = func_513(3, uParam0->f_3);
						uParam0->f_76 = MISC::GET_GAME_TIMER();
						uParam0->f_79++;
						if (iLocal_1400)
						{
							(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(205.723f, -110.766f, 67.755f, 0f, 0f, -39.43f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "Chad_Dip_chad", 4f, -4f, 0, 0, 4f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[10 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "Chad_Dip_girl", 4f, -4f, 0, 0, 4f, 0);
							uParam0->f_76 = (MISC::GET_GAME_TIMER() - uParam0->f_9[uParam0->f_79 /*2*/].f_1);
							uParam0->f_79 = 27;
							uParam0->f_77 = 9;
						}
						break;
					
					case 1:
						if (func_57(59))
						{
							uParam0->f_79++;
							uParam0->f_77 = 0;
							uParam0->f_76 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 2:
						if (bParam2)
						{
							uParam0->f_78++;
							uParam0->f_79++;
						}
						else if (func_841(uParam0))
						{
							StringCopy(&Var18, "CAR_2_IG_7_", 24);
							if (uParam0->f_78 < 9)
							{
								iVar24 = uParam0->f_78 * 2 + 1;
							}
							else if (uParam0->f_78 > 8 && uParam0->f_78 < 12)
							{
								iVar24 = uParam0->f_78 * 2;
							}
							else if (uParam0->f_78 == 12)
							{
								iVar24 = 23;
							}
							else if (uParam0->f_78 == 13)
							{
								iVar24 = 24;
							}
							else if (uParam0->f_78 == 14)
							{
								iVar24 = 26;
							}
							else
							{
								iVar24 = (uParam0->f_78 * 2 - 3);
							}
							StringIntConCat(&Var18, iVar24, 24);
							if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() != iVar24)
							{
								if (iLocal_1424 == 2)
								{
								}
							}
							if (func_515(2, "CAR_2_IG_7", &Var18, 3, Local_1471[3 /*14*/], "Chad", 4, Local_1471[10 /*14*/], "cs2_girlfriend", -1, 0, 0, -1, 0, 0, 7))
							{
								uParam0->f_78++;
								uParam0->f_79++;
							}
						}
						else
						{
							uParam0->f_78++;
							uParam0->f_79++;
						}
						break;
					
					case 3:
						switch (uParam0->f_77)
						{
							case 0:
							case 4:
								(*uParam0)[1] = PED::CREATE_SYNCHRONIZED_SCENE(205.723f, -110.766f, 67.755f, 0f, 0f, -39.43f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], (*uParam0)[1], "misscarsteal2CHAD_GOODBYE", "Chad_Pullback_chad", 4f, -4f, 0, 0, 4f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[10 /*14*/], (*uParam0)[1], "misscarsteal2CHAD_GOODBYE", "Chad_Pullback_girl", 4f, -4f, 0, 0, 4f, 0);
								uParam0->f_79++;
								uParam0->f_77++;
								break;
							
							case 1:
							case 3:
							case 5:
							case 7:
								if (func_59(&Local_2193, Local_1471[3 /*14*/]) || !func_861(&Local_2193, Local_1471[3 /*14*/]))
								{
									uParam0->f_79 = 27;
									uParam0->f_77 = 8;
									uParam0->f_76 = (MISC::GET_GAME_TIMER() - uParam0->f_9[uParam0->f_79 /*2*/].f_1);
								}
								else
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[0]))
									{
										(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(205.723f, -110.766f, 67.755f, 0f, 0f, -39.43f, 2);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED((*uParam0)[0], 1);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "chad_idle_chad", 4f, -4f, 0, 0, 4f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[10 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "chad_idle_girl", 4f, -4f, 0, 0, 4f, 0);
									}
									uParam0->f_79++;
									uParam0->f_77++;
								}
								break;
							
							case 2:
							case 6:
								(*uParam0)[1] = PED::CREATE_SYNCHRONIZED_SCENE(205.723f, -110.766f, 67.755f, 0f, 0f, -39.43f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], (*uParam0)[1], "misscarsteal2CHAD_GOODBYE", "Chad_Armsaround_chad", 4f, -4f, 0, 0, 4f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[10 /*14*/], (*uParam0)[1], "misscarsteal2CHAD_GOODBYE", "Chad_Armsaround_girl", 4f, -4f, 0, 0, 4f, 0);
								uParam0->f_79++;
								uParam0->f_77++;
								break;
							
							case 8:
								if (func_59(&Local_2193, Local_1471[3 /*14*/]) || !func_861(&Local_2193, Local_1471[3 /*14*/]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[0]))
									{
										(*uParam0)[1] = PED::CREATE_SYNCHRONIZED_SCENE(205.723f, -110.766f, 67.755f, 0f, 0f, -39.43f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], (*uParam0)[1], "misscarsteal2CHAD_GOODBYE", "Chad_Dip_chad", 4f, -4f, 0, 0, 4f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[10 /*14*/], (*uParam0)[1], "misscarsteal2CHAD_GOODBYE", "Chad_Dip_girl", 4f, -4f, 0, 0, 4f, 0);
										uParam0->f_77++;
									}
									else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[1]) && PED::GET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[1]) >= 0.99f)
									{
										(*uParam0)[0] = PED::CREATE_SYNCHRONIZED_SCENE(205.723f, -110.766f, 67.755f, 0f, 0f, -39.43f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[3 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "Chad_Dip_chad", 4f, -4f, 0, 0, 4f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1471[10 /*14*/], (*uParam0)[0], "misscarsteal2CHAD_GOODBYE", "Chad_Dip_girl", 4f, -4f, 0, 0, 4f, 0);
										uParam0->f_77++;
									}
								}
								break;
							
							case 9:
								if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[1]) && PED::GET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[1]) > 0.97f) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[0]) && PED::GET_SYNCHRONIZED_SCENE_PHASE((*uParam0)[0]) > 0.97f))
								{
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 224.1202f, -119.9946f, 68.6437f, 1f, 20000, 0.5f, 1, 1193033728);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "CS2_01", 0, 8, -1);
									func_479(Local_1471[3 /*14*/], 0);
									func_480();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 195.4088f, -96.7522f, 66.7088f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
									func_479(Local_1471[10 /*14*/], 0);
									func_826(67);
									func_863(55, 14, 0);
									func_863(27, 7, 0);
									func_863(80, 7, 0);
									return 1;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return 0;
}

void func_839(var uParam0, int iParam1, int iParam2)//Position - 0x862B7
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 32)
	{
		if (uParam0->f_9[iVar0 /*2*/] == 0)
		{
			uParam0->f_9[iVar0 /*2*/] = iParam1;
			uParam0->f_9[iVar0 /*2*/].f_1 = iParam2;
			iVar0 = 33;
		}
		iVar0++;
	}
}

void func_840(var uParam0)//Position - 0x862F8
{
	uParam0->f_76 = (uParam0->f_76 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
}

int func_841(var uParam0)//Position - 0x86317
{
	if (iLocal_3938 != -1)
	{
		if (uParam0->f_80 != -1)
		{
			if (uParam0->f_80 == iLocal_3938)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_842(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)//Position - 0x8633D
{
	if (GlobalFunc_742(Param0.f_3, 10f, 300f) && Local_2193.f_40 < 12f)
	{
		return 1;
	}
	return 0;
}

void func_843(var uParam0, var uParam1)//Position - 0x86371
{
	if (uParam1->f_5 >= 0 && uParam1->f_5 < 5)
	{
		uParam0->f_242[uParam1->f_5 /*11*/].f_5 = -1;
		uParam0->f_242[uParam1->f_5 /*11*/].f_4 = 0;
		uParam0->f_242[uParam1->f_5 /*11*/].f_3 = 0;
		uParam0->f_242[uParam1->f_5 /*11*/] = { 0f, 0f, 0f };
		uParam1->f_5 = -1;
		uParam0->f_241 = (uParam0->f_241 - 1);
	}
}

void func_844(char* sParam0)//Position - 0x863D2
{
	bLocal_3975 = true;
	sLocal_3976 = sParam0;
}

void func_845(int iParam0)//Position - 0x863E3
{
	iLocal_3968 = iParam0;
}

void func_846(struct<3> Param0, float fParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x863F0
{
	struct<3> Var0;
	
	Var0 = { func_849(bParam7) };
	func_847(Var0, Param0, fParam3, 50f, 50f, 50f, bParam4, iParam5, bParam6, bParam8, bParam9, iParam10, 1, 1);
}

void func_847(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15, int iParam16, int iParam17)//Position - 0x8642D
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	
	if (bParam14)
	{
		bParam14 = false;
	}
	iVar9 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(iVar9, 1) };
			iVar8 = ENTITY::GET_ENTITY_MODEL(iVar9);
			bVar1 = true;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar8))
			{
				if (iParam15 == 0)
				{
					bVar1 = false;
				}
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar8))
			{
				if (iParam16 == 0)
				{
					bVar1 = false;
				}
			}
			if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar8))
			{
				if (iParam17 == 0)
				{
					bVar1 = false;
				}
			}
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar9), &Var10, &Var13);
			if ((Var13.x - Var10.x) > Param7.x)
			{
				bVar1 = false;
			}
			else if ((Var13.f_1 - Var10.f_1) > Param7.f_1)
			{
				bVar1 = false;
			}
			else if ((Var13.f_2 - Var10.f_2) > Param7.f_2)
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				if (bParam10)
				{
					if (func_848(iParam11))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar9, 1) || !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar9))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar9, 1, 1);
							}
							VEHICLE::DELETE_VEHICLE(&iVar9);
						}
					}
					else
					{
						iVar0 = 1;
					}
				}
				else
				{
					iVar0 = 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar9, joaat("taxi")))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar9, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar9, -1) != 0)
						{
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar9, 1) || !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar9))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar9, 1, 0);
							}
							VEHICLE::DELETE_VEHICLE(&iVar9);
							iVar0 = 0;
						}
					}
				}
				if (bParam13)
				{
					if (GlobalFunc_4929(iVar9, GlobalFunc_8315(), 1))
					{
						iVar0 = 0;
					}
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		if (SYSTEM::VDIST2(Var5, Param0) < (30f * 30f))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar9))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar9, 1) || !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar9))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar9, 1, 1);
				}
				MISC::CLEAR_AREA(Param3, 6f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(iVar9, Param3, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iVar9, fParam6);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar9, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar9);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar9, 0, 1);
			}
			else
			{
				MISC::CLEAR_AREA(Param3, 6f, 1, 0, 0, 0);
			}
		}
	}
	if (bParam12)
	{
		MISC::CLEAR_AREA(Param0, 6f, 1, 0, 0, 0);
	}
}

int func_848(int iParam0)//Position - 0x8667C
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (GlobalFunc_86(iVar0))
			{
				if (iParam0 == 1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
						return 0;
					}
				}
				else if (iParam0 == 2)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
						return 0;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
				{
					return 1;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 50f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_849(bool bParam0)//Position - 0x8671C
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
	iVar1 = Global_81155[iVar0 /*34*/].f_10;
	if (iVar1 != 262)
	{
		if (bParam0)
		{
			return GlobalFunc_2247(iVar1, GlobalFunc_8315());
		}
		else
		{
			return GlobalFunc_2247(iVar1, 0);
		}
	}
	return 0f, 0f, 0f;
}


void func_851(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12)//Position - 0x867A3
{
	if (func_512(iParam2) != iParam3 || iParam3 == 0)
	{
		if (!func_40(iParam2, iParam3, sParam4))
		{
			return;
		}
	}
	if (iParam5 != -1)
	{
		if (func_512(iParam5) != iParam6 || iParam6 == 0)
		{
			if (!func_40(iParam5, iParam6, sParam7))
			{
				return;
			}
		}
	}
	if (iParam8 != -1)
	{
		if (func_512(iParam8) != iParam9 || iParam9 == 0)
		{
			if (!func_40(iParam8, iParam9, sParam10))
			{
				return;
			}
		}
	}
	if (iLocal_1424 < iParam0)
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4956();
			iLocal_1424 = 0;
		}
	}
	iLocal_1424 = iParam0;
	GlobalFunc_5157(&Local_1759, sLocal_1924, sParam1, iParam11, iParam12, 0);
}



void func_854(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x868A2
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	var uVar10;
	struct<3> Var11;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
	{
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1724[0 /*2*/], 1) };
		Var3 = { Param0 - Var0 };
		fVar6 = GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var0, 1) / 12f), (fParam6 * -1f), fParam6);
		fLocal_4816 = (fLocal_4816 + ((fVar6 - fLocal_4816) * SYSTEM::TIMESTEP()));
		Var3 = { GlobalFunc_903(Var3, fLocal_4816) };
		ENTITY::SET_ENTITY_VELOCITY(Local_1724[0 /*2*/], Var3);
		if (GlobalFunc_105(Param3))
		{
			uVar10 = MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.f_1);
			Var11 = { 0f, 0f, uVar10 };
			Var7 = { Var11 - ENTITY::GET_ENTITY_ROTATION(Local_1724[0 /*2*/], 2) };
			if (Var7.x < -180f)
			{
				Var7.x = (Var7.x + 360f);
			}
			if (Var7.x > 180f)
			{
				Var7.x = (Var7.x - 360f);
			}
			if (Var7.f_1 < -180f)
			{
				Var7.f_1 = (Var7.f_1 + 360f);
			}
			if (Var7.f_1 > 180f)
			{
				Var7.f_1 = (Var7.f_1 - 360f);
			}
			if (Var7.f_2 < -180f)
			{
				Var7.f_2 = (Var7.f_2 + 360f);
			}
			if (Var7.f_2 > 180f)
			{
				Var7.f_2 = (Var7.f_2 - 360f);
			}
			ENTITY::SET_ENTITY_ROTATION(Local_1724[0 /*2*/], ENTITY::GET_ENTITY_ROTATION(Local_1724[0 /*2*/], 2) + Var7 * FtoV(SYSTEM::TIMESTEP()), 2, 1);
		}
		else
		{
			Var7 = { Param3 - ENTITY::GET_ENTITY_ROTATION(Local_1724[0 /*2*/], 2) };
			if (Var7.x < -180f)
			{
				Var7.x = (Var7.x + 360f);
			}
			if (Var7.x > 180f)
			{
				Var7.x = (Var7.x - 360f);
			}
			if (Var7.f_1 < -180f)
			{
				Var7.f_1 = (Var7.f_1 + 360f);
			}
			if (Var7.f_1 > 180f)
			{
				Var7.f_1 = (Var7.f_1 - 360f);
			}
			if (Var7.f_2 < -180f)
			{
				Var7.f_2 = (Var7.f_2 + 360f);
			}
			if (Var7.f_2 > 180f)
			{
				Var7.f_2 = (Var7.f_2 - 360f);
			}
			ENTITY::SET_ENTITY_ROTATION(Local_1724[0 /*2*/], ENTITY::GET_ENTITY_ROTATION(Local_1724[0 /*2*/], 2) + Var7 * FtoV(SYSTEM::TIMESTEP()), 2, 1);
		}
	}
}



void func_857(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x86B31
{
	int iVar0;
	int iVar1[12];
	int iVar14;
	int iVar15;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 <= (iParam7 - 1))
	{
		iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam6);
		if (iVar1[iVar16] == 1)
		{
			iVar15 = 1;
		}
		if (iParam8 != -1)
		{
			if (iVar16 == iParam8)
			{
				iVar15 = 1;
			}
		}
		if (iParam9 != -1)
		{
			if (iVar16 == iParam9)
			{
				iVar15 = 1;
			}
		}
		if (iParam10 != -1)
		{
			if (iVar16 == iParam10)
			{
				iVar15 = 1;
			}
		}
		while (iVar15 == 1)
		{
			iVar16++;
			iVar15 = 0;
			if (iVar16 >= iParam6)
			{
				iVar16 = 0;
			}
			if (iParam8 != -1)
			{
				if (iVar16 == iParam8)
				{
					iVar15 = 1;
				}
			}
			if (iParam9 != -1)
			{
				if (iVar16 == iParam9)
				{
					iVar15 = 1;
				}
			}
			if (iParam10 != -1)
			{
				if (iVar16 == iParam10)
				{
					iVar15 = 1;
				}
			}
			if (iVar15 == 0)
			{
				if (iVar1[iVar16] == 1)
				{
					iVar15 = 1;
				}
			}
		}
		iVar1[iVar16] = 1;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				iVar14 = joaat("burrito");
				break;
			
			case 1:
				iVar14 = joaat("dominator");
				break;
			
			case 2:
				iVar14 = joaat("habanero");
				break;
			
			case 3:
				iVar14 = joaat("dubsta");
				break;
		}
		if (iParam11 == iVar14 || iParam12 == iVar14)
		{
			iVar14 = joaat("habanero");
		}
		iLocal_3895[iLocal_3931] = VEHICLE::CREATE_VEHICLE(iVar14, (fParam0 + (((fParam2 - fParam0) / SYSTEM::TO_FLOAT((iParam6 - 1))) * SYSTEM::TO_FLOAT(iVar16))), (fParam1 + (((fParam3 - fParam1) / SYSTEM::TO_FLOAT((iParam6 - 1))) * SYSTEM::TO_FLOAT(iVar16))), fParam4, fParam5, 1, 1);
		iLocal_3931++;
		iVar0++;
	}
}

void func_858(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x86CB1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_298)
	{
		if (iVar0 < 10)
		{
			if (uParam0->f_298[iVar0 /*11*/] == iParam1)
			{
				iVar1 = iVar0;
				iVar0 = uParam0->f_298;
			}
		}
		iVar0++;
	}
	MISC::SET_BIT(&(uParam0->f_298[iVar1 /*11*/].f_2), 6);
	MISC::SET_BIT(&(uParam0->f_298[iVar1 /*11*/].f_5), iParam2 + 24);
	if (iParam3 != -1)
	{
		MISC::SET_BIT(&(uParam0->f_298[iVar1 /*11*/].f_5), iParam3 + 24);
	}
	if (iParam4 != -1)
	{
		MISC::SET_BIT(&(uParam0->f_298[iVar1 /*11*/].f_5), iParam4 + 24);
	}
	if (iParam5 != -1)
	{
		MISC::SET_BIT(&(uParam0->f_298[iVar1 /*11*/].f_5), iParam5 + 24);
	}
}

void func_859(var uParam0)//Position - 0x86D5D
{
	uParam0->f_127 = 0;
}


int func_861(var uParam0, int iParam1)//Position - 0x86D8A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_298)
	{
		if (uParam0->f_298[iVar0 /*11*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_862(int iParam0)//Position - 0x86DBB
{
	if (!iLocal_1457 && iLocal_1456 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_863(int iParam0, int iParam1, int iParam2)//Position - 0x86DDA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1990[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_1990[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1990[iVar0 /*6*/].f_1 == 0)
		{
			Local_1990[iVar0 /*6*/].f_1 = 1;
			Local_1990[iVar0 /*6*/] = iParam0;
			Local_1990[iVar0 /*6*/].f_2 = 0;
			Local_1990[iVar0 /*6*/].f_4 = iParam2;
			Local_1990[iVar0 /*6*/].f_5 = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_864(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x86E6A
{
	bool bVar0;
	
	if (iParam0 == 1)
	{
		func_876(0);
		if (iParam1 != 16)
		{
			iLocal_1419 = iParam1;
		}
		iLocal_1753 = iParam2;
		switch (iLocal_1419)
		{
			case 0:
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				func_875(0);
				if (bLocal_2746)
				{
					func_871(2);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 424.567f, -979.8093f, 29.7108f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 256.3022f);
				}
				else
				{
					func_871(1);
				}
				GlobalFunc_7632(0);
				break;
			
			case 1:
				if (iLocal_1753 == 1)
				{
					if (bParam3)
					{
						GlobalFunc_5116(461.877f, -984.3531f, 42.692f, 81.1471f, 1, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 461.877f, -984.3531f, 42.692f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 81.1471f);
						STREAMING::LOAD_SCENE(461.877f, -984.3531f, 42.692f);
					}
					unk_0x67D02A194A2FC2BD("heli_cam");
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
					func_871(2);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 239, 1);
					func_863(71, 14, 0);
					func_863(79, 3, 0);
					GlobalFunc_761(2);
					func_875(1);
					GlobalFunc_7632(0);
					func_223(0, 1, 1);
					func_223(1, 2, 1);
					func_223(2, 3, 1);
					func_514(0, 1, 1);
					func_514(1, 3, 1);
					func_514(2, 4, 1);
					func_514(4, 10, 1);
					func_514(6, 5, 1);
					func_514(7, 12, 1);
					func_514(8, 8, 1);
					func_476(2, 3, 1);
					func_476(3, 5, 1);
					func_476(6, 9, 1);
					func_476(9, 13, 1);
					func_476(0, 1, 0);
					while (!func_491(5, 7) || !func_491(0, 1))
					{
						func_233(5, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
						func_233(0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0);
						GlobalFunc_761(0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
					iLocal_1753 = 2;
				}
				else
				{
					if (bParam3)
					{
						GlobalFunc_5116(422.6565f, -978.2415f, 29.7089f, 252f, 1, 0);
						CLOCK::SET_CLOCK_TIME(21, 0, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 422.6565f, -978.2415f, 29.7089f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 252f);
						STREAMING::LOAD_SCENE(422.6565f, -978.2415f, 29.7089f);
						GlobalFunc_761(1);
					}
					MISC::CLEAR_AREA(441.0267f, -978.204f, 29.6895f, 2f, 1, 0, 0, 0);
					MISC::CLEAR_AREA(440.2506f, -975.6328f, 29.6895f, 2f, 1, 0, 0, 0);
					MISC::CLEAR_AREA(454.1487f, -979.894f, 29.6896f, 2f, 1, 0, 0, 0);
					MISC::CLEAR_AREA(450.2071f, -992.9072f, 29.6896f, 2f, 1, 0, 0, 0);
					if (!PED::IS_PED_INJURED(Local_1471[8 /*14*/]))
					{
					}
					func_871(2);
					GlobalFunc_7632(0);
				}
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				func_875(1);
				while (!func_491(0, 1))
				{
					func_233(0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0);
					GlobalFunc_761(0);
				}
				break;
			
			case 2:
				func_871(1);
				if (bParam3)
				{
					GlobalFunc_5116(1390.597f, -2058.056f, 51.0442f, 129.5256f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1390.597f, -2058.056f, 51.0442f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 129.5256f);
					STREAMING::LOAD_SCENE(1390.597f, -2058.056f, 51.0442f);
					GlobalFunc_761(1);
				}
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				func_875(0);
				GlobalFunc_7632(0);
				while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, 1388.03f, -2067.391f, 50.9981f, 0f, 1, 1))
				{
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 3:
				func_875(3);
				func_212(1, 2);
				func_871(2);
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1374.216f, -2074.334f, 58.9988f, 28.3f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[0 /*2*/], 2);
				while (!func_832(1380.817f, -2065.991f, 50.9988f, 128f, 0))
				{
					SYSTEM::WAIT(0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1724[0 /*2*/]))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], -1);
					}
				}
				HUD::CLEAR_PRINTS();
				while (!func_441(&Local_2193, Local_1724[0 /*2*/], 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 1);
				GlobalFunc_138();
				while (!Local_2193.f_35)
				{
					func_814(&Local_2193, 0);
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1724[1 /*2*/]))
				{
					while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, 1388.03f, -2067.391f, 50.9981f, 0f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
				}
				func_814(&Local_2193, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 0);
				}
				Local_2193.f_6 = 1;
				Local_2193.f_18 = 100f;
				func_867(&Local_2193, -212.215f, 639.5228f, 191.7123f);
				iLocal_1753 = 999;
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 4:
				if (bParam3)
				{
					GlobalFunc_5116(131.4066f, -341.6778f, 177.6481f, 60f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 131.4066f, -341.6778f, 177.6481f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 60f);
					STREAMING::LOAD_SCENE(131.4066f, -341.6778f, 177.6481f);
					GlobalFunc_761(1);
				}
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				func_875(4);
				func_212(3, 2);
				func_871(2);
				if (GlobalFunc_116(0))
				{
					GlobalFunc_6685(0);
				}
				Local_2193.f_18 = 100f;
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 131.4066f, -341.6778f, 177.6481f, 60f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], -1);
				}
				if (!func_808(&Local_2193))
				{
					func_441(&Local_2193, Local_1724[0 /*2*/], 1, 0);
					GlobalFunc_138();
				}
				AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 1);
				while (!Local_2193.f_35)
				{
					func_814(&Local_2193, 0);
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				Local_2193.f_6 = 1;
				if (HUD::DOES_BLIP_EXIST(Local_1471[1 /*14*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_1471[1 /*14*/].f_1));
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_3933))
				{
					HUD::REMOVE_BLIP(&uLocal_3933);
				}
				func_867(&Local_2193, -23.5265f, -44.4256f, 87.3915f);
				func_863(2, 14, 0);
				func_863(75, 6, 0);
				while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, -93.4581f, -66.9989f, 55.8005f, 345.5313f, 1, 1))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[1 /*2*/], 1);
				}
				while (!func_832(Local_1468, 0f, Local_1724[1 /*2*/]))
				{
					SYSTEM::WAIT(0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1724[0 /*2*/]))
				{
					func_867(&Local_2193, 200.292f, -156.3387f, 58.0269f);
				}
				iLocal_1753 = 9;
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 5:
				if (bParam3)
				{
					GlobalFunc_5116(82.3613f, -72.5265f, 233.7927f, -114.3f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 82.3613f, -72.5265f, 233.7927f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 60f);
					STREAMING::LOAD_SCENE(82.3613f, -72.5265f, 233.7927f);
					GlobalFunc_761(1);
				}
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				func_875(5);
				func_871(2);
				func_863(75, 6, 0);
				if (GlobalFunc_116(0))
				{
					GlobalFunc_6685(0);
				}
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 82.3613f, -72.5265f, 233.7927f, -114.3f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], -1);
				}
				if (!func_808(&Local_2193))
				{
					func_441(&Local_2193, Local_1724[0 /*2*/], 1, 0);
					GlobalFunc_138();
				}
				AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 1);
				while (!Local_2193.f_35)
				{
					func_814(&Local_2193, 0);
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				Local_2193.f_6 = 1;
				GlobalFunc_164("CH_INS12C", 6000, 1);
				func_867(&Local_2193, 215.9081f, -130.7865f, 63.6567f);
				while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, -93.4581f, -66.9989f, 55.8005f, 345.5313f, 1, 1))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[1 /*2*/], 1);
				}
				while (!func_832(Local_1468, 0f, Local_1724[1 /*2*/]))
				{
					SYSTEM::WAIT(0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1724[0 /*2*/]))
				{
					func_867(&Local_2193, 200.292f, -156.3387f, 58.0269f);
				}
				func_863(6, 14, 0);
				func_532(6, 2);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				AUDIO::START_AUDIO_SCENE("CAR_2_SCAN_THE_SUSPECTS");
				func_212(5, 4);
				break;
			
			case 6:
				if (bParam3)
				{
					GlobalFunc_5116(247.4768f, -190.9185f, 150.9918f, 130.3f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 247.4768f, -190.9185f, 150.9918f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 130.3f);
					STREAMING::LOAD_SCENE(247.4768f, -190.9185f, 150.9918f);
					GlobalFunc_761(1);
				}
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				Local_2193.f_42 = 1;
				AUDIO::START_AUDIO_SCENE("CAR_2_CAR_CHASE_START");
				AUDIO::START_AUDIO_SCENE("CAR_2_Z_TYPE_ENGINE_BOOST");
				func_875(8);
				func_212(7, 8);
				STREAMING::REQUEST_MODEL(iLocal_3136);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_3136))
				{
					GlobalFunc_761(0);
				}
				func_871(2);
				func_863(27, 14, 0);
				func_863(80, 7, 0);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 0, 1);
				Local_1724[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 247.4768f, -190.9185f, 150.9918f, 130.3f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], -1);
				}
				if (!func_808(&Local_2193))
				{
					func_441(&Local_2193, Local_1724[0 /*2*/], 1, 0);
					GlobalFunc_138();
					Local_2193.f_10 = 0f;
				}
				AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 1);
				while (!Local_2193.f_35)
				{
					func_814(&Local_2193, 0);
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				func_405(202.7272f, -149.7968f, 56.176f, 160f);
				while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, 187.2789f, -153.2764f, 55.6541f, 254.3027f, 1, 1))
				{
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[1 /*2*/], 1);
				}
				while (!func_832(Local_1468, 0f, Local_1724[1 /*2*/]))
				{
					GlobalFunc_761(0);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1724[2 /*2*/], "CAR_2_Z-TYPE", 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_1724[0 /*2*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1724[0 /*2*/], 247.4768f, -190.9185f, 150.9918f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_1724[0 /*2*/], 90f);
					func_867(&Local_2193, 212.3564f, -180.0367f, 63.68f);
				}
				func_401(3, iLocal_3136, Local_1724[2 /*2*/], -1, 0, 0);
				Local_2193.f_6 = 1;
				func_826(27);
				bLocal_2745 = true;
				while (iLocal_4818 == 0)
				{
					func_811();
					GlobalFunc_761(0);
				}
				iLocal_4645 = 0;
				func_863(89, 14, 0);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 7:
				AUDIO::START_AUDIO_SCENE("CAR_2_CAR_ENTERS_GARAGE");
				func_875(9);
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				func_212(9, 14);
				func_871(2);
				STREAMING::REQUEST_MODEL(iLocal_3136);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 0, 1);
				func_402(0, joaat("polmav"), -1199.808f, -295.1306f, 142.2804f, 90.3f, -1027080192);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], -1);
				}
				if (!func_808(&Local_2193))
				{
					func_441(&Local_2193, Local_1724[0 /*2*/], 1, 0);
					GlobalFunc_138();
				}
				AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 1);
				while (!Local_2193.f_35)
				{
					func_814(&Local_2193, 0);
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(50.63343f, -212.0074f, -1284.524f) - Vector(14f, 54.75f, 39f), Vector(50.63343f, -212.0074f, -1284.524f) + Vector(14f, 54.75f, 39f), 0, 1);
				func_405(-1309.563f, -215.238f, 50.993f, 123.0209f);
				while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, -1275.874f, -222.6858f, 50.5496f, 218f, 1, 1))
				{
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[1 /*2*/], 1);
				}
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_3136))
				{
					GlobalFunc_761(0);
				}
				func_288(3, iLocal_3136, Local_1468, 0f, Local_1724[2 /*2*/], -1, 8, 0, 0, 0);
				AUDIO::STOP_PED_SPEAKING(Local_1471[3 /*14*/], 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
				{
					func_867(&Local_2193, ENTITY::GET_ENTITY_COORDS(Local_1724[2 /*2*/], 1));
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					while (!func_626(&(Local_1471[4 /*14*/]), 1, Local_1724[1 /*2*/], -1, 1, 0, 0))
					{
						GlobalFunc_761(0);
					}
				}
				func_863(14, 10, 0);
				while (!func_533(14))
				{
					func_827(14, 0);
					GlobalFunc_761(0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_1471[3 /*14*/].f_1))
				{
				}
				iLocal_1753 = 0;
				Local_2193.f_6 = 1;
				break;
			
			case 8:
				AUDIO::START_AUDIO_SCENE("CAR_2_CAR_ENTERS_GARAGE");
				func_875(9);
				func_212(9, 14);
				func_871(2);
				STREAMING::REQUEST_MODEL(iLocal_3136);
				unk_0x67D02A194A2FC2BD("heli_cam");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
				func_402(0, joaat("polmav"), -1301.256f, -253.3784f, 54f, -49.3f, -1027080192);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], -1);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 0, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(50.63343f, -212.0074f, -1284.524f) - Vector(14f, 54.75f, 39f), Vector(50.63343f, -212.0074f, -1284.524f) + Vector(14f, 54.75f, 39f), 0, 1);
				if (!func_808(&Local_2193))
				{
					func_441(&Local_2193, Local_1724[0 /*2*/], 1, 0);
					GlobalFunc_138();
				}
				AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 1);
				while (!Local_2193.f_35)
				{
					func_814(&Local_2193, 0);
					GlobalFunc_761(0);
				}
				func_530(&Local_2193, 0.3f, 0.7f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1724[0 /*2*/], -1301.256f, -253.3784f, 54f, 1, 0, 0, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				func_405(-1309.563f, -215.238f, 50.993f, 123.0209f);
				while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, -1275.874f, -222.6858f, 50.5496f, 218f, 1, 1))
				{
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[1 /*2*/], 1);
				}
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_3136))
				{
					GlobalFunc_761(0);
				}
				func_288(3, iLocal_3136, Local_1468, 0f, Local_1724[2 /*2*/], -1, 8, 0, 0, 0);
				AUDIO::STOP_PED_SPEAKING(Local_1471[3 /*14*/], 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
				{
					func_867(&Local_2193, -1308.41f, -217.4297f, 52.3787f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
				{
					while (!func_833(&(Local_1471[4 /*14*/]), 1, -1274.709f, -216.8189f, 50.5498f, 142.5829f, 1, 0, 0))
					{
						GlobalFunc_761(0);
					}
				}
				func_863(14, 10, 0);
				while (!func_533(14))
				{
					func_827(14, 0);
					GlobalFunc_761(0);
				}
				iLocal_1753 = 0;
				Local_2193.f_6 = 1;
				func_476(0, 42, 1);
				func_476(3, 48, 0);
				func_483(3, 48, 2);
				func_482(68, 102);
				func_285(69, 1, -1);
				func_285(70, 1, -1);
				func_285(71, 1, -1);
				func_285(72, 1, -1);
				func_285(73, 1, -1);
				func_285(74, 1, -1);
				func_285(75, 1, -1);
				func_285(81, 1, -1);
				func_285(82, 1, -1);
				func_285(83, 1, -1);
				func_285(84, 1, -1);
				func_285(92, 1, -1);
				func_223(0, 12, 1);
				func_223(1, 13, 1);
				func_514(0, 36, 1);
				func_514(1, 37, 1);
				func_514(2, 38, 1);
				func_514(3, 39, 1);
				func_514(4, 40, 1);
				func_514(5, 41, 1);
				func_514(13, 42, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1724[0 /*2*/], -1301.256f, -253.3784f, 54f, 1, 0, 0, 1);
				}
				func_863(16, 14, 0);
				func_863(15, 14, 0);
				func_532(15, 4);
				func_827(15, 0);
				func_442(&Local_2193);
				func_443(&Local_2193, -55.6696f, 1);
				break;
			
			case 9:
				if (bParam3)
				{
					GlobalFunc_5116(-1300.433f, -211.6004f, 50.6831f, 125f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1300.433f, -211.6004f, 50.6831f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 125.4926f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					STREAMING::LOAD_SCENE(-1300.433f, -211.6004f, 50.6831f);
					GlobalFunc_761(1);
				}
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(50.63343f, -212.0074f, -1284.524f) - Vector(14f, 54.75f, 39f), Vector(50.63343f, -212.0074f, -1284.524f) + Vector(14f, 54.75f, 39f), 0, 1);
				func_875(9);
				STREAMING::REQUEST_MODEL(iLocal_3135);
				STREAMING::REQUEST_MODEL(iLocal_3136);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_3135) || !STREAMING::HAS_MODEL_LOADED(iLocal_3136))
				{
					GlobalFunc_761(0);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, 0, 1);
				func_212(12, 14);
				func_871(1);
				func_402(0, joaat("polmav"), -1318.848f, -231.4252f, 57.5876f, -62.3f, -1027080192);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 1);
				func_405(-1309.582f, -215.2148f, 50.5497f, 123.0209f);
				func_288(3, iLocal_3136, Local_1468, 0f, Local_1724[2 /*2*/], -1, 8, 0, 0, 0);
				AUDIO::STOP_PED_SPEAKING(Local_1471[3 /*14*/], 1);
				func_477(0);
				while (!func_866(Local_1468, 0f, Local_1724[0 /*2*/], 0))
				{
					GlobalFunc_761(0);
				}
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 25, 1, 1);
				GlobalFunc_11257(Local_1471[1 /*14*/], 14, 45, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				func_233(11, 57, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_863(14, 10, 0);
				while (!func_533(14))
				{
					func_827(14, 0);
					GlobalFunc_761(0);
				}
				iLocal_4782 = 1;
				iLocal_1753 = 0;
				ENTITY::FREEZE_ENTITY_POSITION(Local_1724[2 /*2*/], 1);
				while (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3111))
				{
					func_233(11, 57, 0, 0, 0, 1, 0, 1, 0, 1, 0);
					GlobalFunc_761(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 0);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1724[2 /*2*/], 0);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1724[2 /*2*/], 0, 1, 1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3111))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3111, 0.06f);
				}
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(PLAYER::PLAYER_PED_ID(), -1302.113f, -212.903f, 50.55f, -1307.968f, -216.917f, 51.9251f, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
				GlobalFunc_7632(0);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 10:
				if (bParam3)
				{
					GlobalFunc_5116(-1320.848f, -231.4252f, 57.4876f, 125f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1320.848f, -231.4252f, 57.4876f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 125.4926f);
					STREAMING::LOAD_SCENE(-1320.848f, -231.4252f, 57.4876f);
					GlobalFunc_761(1);
				}
				func_875(9);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(50.63343f, -212.0074f, -1284.524f) - Vector(14f, 54.75f, 39f), Vector(50.63343f, -212.0074f, -1284.524f) + Vector(14f, 54.75f, 39f), 0, 1);
				func_871(1);
				STREAMING::REQUEST_MODEL(iLocal_3135);
				STREAMING::REQUEST_MODEL(iLocal_3136);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_3135) || !STREAMING::HAS_MODEL_LOADED(iLocal_3136))
				{
					GlobalFunc_761(0);
				}
				func_402(0, joaat("polmav"), -1318.848f, -231.4252f, 57.4876f, -62.3f, -1027080192);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[0 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1724[0 /*2*/], 0);
				while (!func_866(Local_1468, 0f, Local_1724[0 /*2*/], 0))
				{
					GlobalFunc_761(0);
				}
				func_477(0);
				func_405(-1309.127f, -215.1889f, 50.5497f, 125f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 1);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], -1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				STREAMING::REQUEST_MODEL(iLocal_3136);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_3136))
				{
					GlobalFunc_761(0);
				}
				if (Global_86804 == 1)
				{
					func_287(3, iLocal_3136, -1309.185f, -217.6889f, 50.5497f, 328f, 4, 0, 0);
				}
				func_863(14, 14, 0);
				while (!GlobalFunc_10155(&(Local_1724[1 /*2*/]), 1, -1275.874f, -222.6858f, 50.5496f, 218f, 1, 1) || !func_533(14))
				{
					func_827(14, 0);
					SYSTEM::WAIT(0);
				}
				func_212(13, 0);
				iLocal_4782 = 1;
				iLocal_1753 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1724[0 /*2*/], 0);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1724[0 /*2*/]);
				}
				GlobalFunc_7632(0);
				func_482(103, 138);
				func_223(0, 17, 1);
				func_476(11, 57, 1);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 11:
				if (bParam3)
				{
					GlobalFunc_5116(-918.253f, -2698.229f, 12.7509f, 152.7001f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -918.253f, -2698.229f, 12.7509f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 152.7001f);
					STREAMING::LOAD_SCENE(-918.253f, -2698.229f, 12.7509f);
					GlobalFunc_761(1);
				}
				func_875(11);
				func_871(1);
				func_405(-918.253f, -2698.229f, 12.7509f, 152.7001f);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[2 /*2*/], -1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				func_212(13, 0);
				GlobalFunc_7632(0);
				func_482(103, 138);
				func_223(0, 17, 1);
				func_476(11, 57, 1);
				func_476(1, 69, 1);
				func_476(2, 70, 1);
				func_476(8, 66, 1);
				func_476(9, 65, 1);
				func_476(10, 64, 1);
				func_476(11, 57, 1);
				func_476(14, 74, 1);
				func_476(16, 76, 1);
				func_514(7, 75, 1);
				func_514(0, 66, 1);
				func_514(1, 65, 1);
				func_514(2, 67, 1);
				func_514(13, 68, 1);
				func_514(3, 69, 1);
				func_514(8, 73, 1);
				func_514(5, 71, 1);
				func_514(6, 72, 1);
				func_514(9, 61, 1);
				func_514(10, 62, 1);
				func_514(11, 63, 1);
				func_514(12, 76, 1);
				func_285(115, 1, -1);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 12:
				if (bParam3)
				{
					GlobalFunc_5116(-991.8787f, -3006.246f, 12.9449f, 125f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -991.8787f, -3006.246f, 12.9449f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 125.4926f);
					STREAMING::LOAD_SCENE(-991.8787f, -3006.246f, 12.9449f);
					GlobalFunc_761(1);
				}
				func_875(12);
				func_871(1);
				func_405(-991.8787f, -3006.246f, 12.9449f, 125f);
				func_233(3, 71, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				while (!func_491(3, 71))
				{
					func_233(3, 71, 0, 0, 0, 1, 0, 1, 0, 1, 0);
					GlobalFunc_761(0);
				}
				GlobalFunc_7632(0);
				bVar0 = true;
				GlobalFunc_2427(2, 1);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 13:
				if (bParam3)
				{
					GlobalFunc_5116(-991.8787f, -3006.246f, 12.9449f, 15f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -991.8787f, -3006.246f, 12.9449f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 15.4926f);
					STREAMING::LOAD_SCENE(-991.8787f, -3006.246f, 12.9449f);
					GlobalFunc_761(1);
				}
				func_875(12);
				func_871(1);
				Local_1724[5 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -981.02f, -3011.31f, 14.55f, 59.25f, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1724[5 /*2*/], 2);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1724[5 /*2*/], 1);
				Local_1724[4 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -984.58f, -2998.8f, 13.58f, 22.68f, 1, 1);
				Local_1724[12 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -992.74f, -3031.48f, 13.58f, 18.53f, 1, 1);
				Local_1724[13 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -990.95f, -2997.46f, 13.56f, 24.38f, 1, 1);
				while (!GlobalFunc_6790(&iLocal_2747, 29, Local_1724[5 /*2*/], 2, 1) || !GlobalFunc_6790(&(Local_1471[8 /*14*/]), 45, Local_1724[5 /*2*/], 1, 1))
				{
					SYSTEM::WAIT(0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2747, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[8 /*14*/], 1);
				Local_1471[6 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_1724[5 /*2*/], 26, joaat("s_m_y_devinsec_01"), 5, 1, 1);
				Local_1471[7 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_1724[5 /*2*/], 26, joaat("s_m_y_devinsec_01"), 7, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[6 /*14*/], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[7 /*14*/], 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[6 /*14*/]);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[6 /*14*/], 11, 0, 0, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[7 /*14*/]);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1471[7 /*14*/], 11, 0, 0, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_2747);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 10, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2747, 11, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(Local_1471[8 /*14*/], 1, 0, 0, false);
				Local_1471[9 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_1724[5 /*2*/], 26, joaat("s_m_m_pilot_01"), -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[9 /*14*/], 1);
				GlobalFunc_2427(2, 1);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
			
			case 14:
				if (bParam3)
				{
					GlobalFunc_5116(-960.024f, -2757.613f, 12.9018f, 56f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -960.024f, -2757.613f, 12.9018f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 56.4926f);
					STREAMING::LOAD_SCENE(-960.024f, -2757.613f, 12.9018f);
					GlobalFunc_761(1);
				}
				func_875(13);
				func_871(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				GlobalFunc_7632(0);
				if (bParam3)
				{
					GlobalFunc_5108(0, -1, 1);
				}
				break;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		SYSTEM::WAIT(0);
		if (!bVar0)
		{
			func_495(0);
		}
	}
}


int func_866(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x88E1D
{
	if (iParam4 == 0)
	{
		if (!func_833(&(Local_1471[1 /*14*/]), 2, Param0, fParam3, 1, 0, 0))
		{
			return 0;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, iParam5))
		{
			if (!func_626(&(Local_1471[1 /*14*/]), 2, iParam4, iParam5, 1, 0, 0))
			{
				return 0;
			}
		}
		else if (!func_626(&(Local_1471[1 /*14*/]), 2, iParam4, 0, 1, 0, 0))
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1471[1 /*14*/]);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1471[1 /*14*/], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1471[1 /*14*/], 3, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1471[1 /*14*/], 1);
		return 1;
	}
	return 0;
}

void func_867(var uParam0, struct<3> Param1)//Position - 0x88ED4
{
	uParam0->f_124 = { Param1 };
	CAM::POINT_CAM_AT_COORD(uParam0->f_32, uParam0->f_124);
	uParam0->f_238 = { Param1 };
}




void func_871(int iParam0)//Position - 0x89080
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1471)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1471[iVar0 /*14*/]))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_1471[iVar0 /*14*/]) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
			{
				Local_1471[iVar0 /*14*/] = 0;
			}
		}
		iVar0++;
	}
	switch (iParam0)
	{
		case 1:
			while (!func_872(1, 1))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 0:
			while (!func_872(0, 1))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 2:
			while (!func_872(2, 1))
			{
				SYSTEM::WAIT(0);
			}
			break;
	}
}

int func_872(int iParam0, bool bParam1)//Position - 0x89120
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
		func_626(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_833(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_542(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



void func_875(int iParam0)//Position - 0x892D8
{
	iLocal_1457 = 1;
	iLocal_1456 = iParam0;
	func_805(iParam0);
	while (iLocal_1457)
	{
		func_806();
		GlobalFunc_761(0);
	}
}

void func_876(int iParam0)//Position - 0x89302
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(1);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		GlobalFunc_761(0);
	}
	TASK::SET_SCENARIO_GROUP_ENABLED("MP_POLICE", 1);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(1);
	}
	while (!AUDIO::TRIGGER_MUSIC_EVENT("CAR2_MISSION_FAIL"))
	{
		GlobalFunc_761(0);
	}
	GlobalFunc_73(0);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	STREAMING::CLEAR_FOCUS();
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_3116))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_3116);
	}
	iLocal_3940 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_HELI_FILTERING"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_HELI_FILTERING");
	}
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	ENTITY::REMOVE_MODEL_HIDE(-111.8944f, -188.65f, 46.02f, 1f, joaat("prop_tree_birch_04"), 0);
	ENTITY::REMOVE_MODEL_HIDE(-109.937f, -179.954f, 47.62f, 1f, joaat("prop_tree_birch_04"), 0);
	ENTITY::REMOVE_MODEL_HIDE(-108.3848f, -171.323f, 49.34f, 1f, joaat("prop_tree_birch_04"), 0);
	if (func_808(&Local_2193))
	{
		func_441(&Local_2193, Local_1724[0 /*2*/], 0, 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if ((iParam0 == 3 || iParam0 == 1) || iParam0 == 2)
	{
		GlobalFunc_7632(0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(46.3507f, -100.4234f, -290.3812f) - Vector(10f, 10f, 10f), Vector(46.3507f, -100.4234f, -290.3812f) + Vector(10f, 10f, 10f), 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-48.34601f, -109.0318f, 82.54919f, 195.5508f, -197.2838f, -38.86471f, 155.8125f, 0, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(50.63343f, -212.0074f, -1284.524f) - Vector(14f, 54.75f, 39f), Vector(50.63343f, -212.0074f, -1284.524f) + Vector(14f, 54.75f, 39f), 1, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(1413.366f, -2037.311f, 49.11167f, 1345.929f, -2093.547f, 57.62325f, 96.5f, 0, 1, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(514.6334f, -1321.992f, 25.63152f, 502.8224f, -1297.021f, 37.44407f, 19.3125f, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(21.69487f, -3006.615f, -961.9077f) - Vector(11.125f, 41.5f, 41.1875f), Vector(21.69487f, -3006.615f, -961.9077f) + Vector(11.125f, 41.5f, 41.1875f), 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1382.831f, -2064.169f, 56.18571f, 41.25f, 44.75f, 5.75f, 1, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PATHFIND::SET_PED_PATHS_IN_AREA(1382.831f, -2064.169f, 56.18571f, 41.25f, 44.75f, 5.75f, 1, 0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		GlobalFunc_9132(0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[2 /*2*/], 0))
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1724[2 /*2*/], 1);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[1 /*2*/], 0))
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1724[1 /*2*/], 1);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blimp"), 0);
	}
	Local_2193.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1471)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1471[iVar0 /*14*/]))
		{
			if (Local_1471[iVar0 /*14*/] != PLAYER::PLAYER_PED_ID())
			{
				if (iParam0 == 1 || iParam0 == 0)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1471[iVar0 /*14*/], 1, 0);
					PED::DELETE_PED(&(Local_1471[iVar0 /*14*/]));
				}
				else if (!PED::IS_PED_INJURED(Local_1471[iVar0 /*14*/]))
				{
					if (!PED::IS_PED_A_PLAYER(Local_1471[iVar0 /*14*/]))
					{
						if (iVar0 == 2)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
							{
								uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_1724[0 /*2*/], 0);
								if (!PED::IS_PED_INJURED(uVar1))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1471[2 /*14*/], 100);
								}
								else if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
								{
									TASK::TASK_HELI_MISSION(Local_1471[2 /*14*/], Local_1724[0 /*2*/], 0, 0, -1372.441f, -738.7798f, 177.5559f, 4, 20f, 10f, -1f, 150, 150, -1082130432, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
									{
										TASK::TASK_PAUSE(PLAYER::PLAYER_PED_ID(), 4000);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_1471[2 /*14*/]))
							{
								PED::SET_PED_KEEP_TASK(Local_1471[2 /*14*/], 1);
							}
						}
						if (iVar0 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[0 /*2*/], 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[0 /*2*/], 0))
									{
										if (!PED::IS_PED_INJURED(Local_1471[1 /*14*/]))
										{
											if (PED::IS_PED_IN_VEHICLE(Local_1471[1 /*14*/], Local_1724[0 /*2*/], 0))
											{
												func_480();
												TASK::TASK_HELI_MISSION(0, Local_1724[0 /*2*/], 0, 0, -1372.441f, -738.7798f, 177.5559f, 4, 20f, 10f, -1f, 150, 150, -1082130432, 0);
												func_479(Local_1471[1 /*14*/], 0);
												PED::SET_PED_KEEP_TASK(Local_1471[1 /*14*/], 1);
											}
										}
									}
								}
							}
						}
						if (iParam0 == 3 && iVar0 != 5)
						{
							PED::DELETE_PED(&(Local_1471[iVar0 /*14*/]));
						}
						else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1471[iVar0 /*14*/]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1471[iVar0 /*14*/]));
						}
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2748)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2748[iVar0]))
		{
			if (iLocal_2748[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				if (iParam0 == 1 || iParam0 == 0)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2748[iVar0], 1, 0);
					PED::DELETE_PED(&(iLocal_2748[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_3939))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3939);
	}
	if (GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_583(17, PLAYER::PLAYER_PED_ID(), 0);
	}
	if (GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_583(16, PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iParam0 != 2 && iParam0 != 3)
	{
		if (GlobalFunc_1432() == joaat("player_two"))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 392.463f, -969.8661f, 28.4456f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 263.8383f);
		}
		else if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 0, 0))
		{
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1724)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1724[iVar0 /*2*/]))
		{
			if (iVar0 == 2)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1724[iVar0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1724[iVar0 /*2*/], 1, 1);
				}
				if (iParam0 == 2)
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[iVar0 /*2*/]));
				}
				else
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[iVar0 /*2*/], 0))
					{
						Var2 = { 0f, 0f, 0f };
						if (PATHFIND::GET_SAFE_COORD_FOR_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, &Var2, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
						}
					}
					VEHICLE::DELETE_VEHICLE(&(Local_1724[iVar0 /*2*/]));
				}
			}
			else if (iParam0 == 1 || iParam0 == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1724[iVar0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1724[iVar0 /*2*/]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1724[iVar0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1724[iVar0 /*2*/], 1, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[iVar0 /*2*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_1724[iVar0 /*2*/]));
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1724[iVar0 /*2*/], 0))
			{
				if (iParam0 == 3 && iVar0 == 5)
				{
					VEHICLE::DELETE_VEHICLE(&(Local_1724[iVar0 /*2*/]));
				}
				else
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1724[iVar0 /*2*/]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1724[iVar0 /*2*/], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1724[iVar0 /*2*/], 1, 0);
					}
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_1724[iVar0 /*2*/], 1);
					VEHICLE::SET_VEHICLE_GRAVITY(Local_1724[iVar0 /*2*/], 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1724[iVar0 /*2*/], 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1724[iVar0 /*2*/], 0);
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_1724[iVar0 /*2*/], 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1724[iVar0 /*2*/]));
				}
			}
		}
		iVar0++;
	}
	if (iLocal_3931 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_3895)
		{
			if (iParam0 == 1 || iParam0 == 0)
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_3895[iVar0]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3895[iVar0]));
			}
			iVar0++;
		}
	}
	iLocal_3931 = 0;
	func_880(1);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_3129))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_3129);
	}
	func_879(&Local_2193);
	func_218(&Local_2193);
	func_441(&Local_2193, Local_1724[3 /*2*/], 0, 0);
	AUDIO::SET_AUDIO_FLAG("AllowPoliceScannerWhenPlayerHasNoControl", 0);
	GlobalFunc_139();
	func_843(&Local_2193, &(Local_2674[0 /*11*/]));
	func_843(&Local_2193, &(Local_2674[1 /*11*/]));
	func_843(&Local_2193, &(Local_2674[2 /*11*/]));
	func_843(&Local_2193, &(Local_2674[3 /*11*/]));
	GlobalFunc_5652(&uLocal_3137, 1, 0);
	GlobalFunc_7139(&uLocal_3137, 0);
	func_442(&Local_2193);
	iLocal_1423 = 0;
	iLocal_1422 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2747))
	{
		if (iParam0 == 2 || iParam0 == 0)
		{
			PED::DELETE_PED(&iLocal_2747);
		}
		else if (!PED::IS_PED_INJURED(iLocal_2747))
		{
			PED::SET_PED_KEEP_TASK(iLocal_2747, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2747);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_3103)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3103[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_3103[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3107);
	}
	if (iParam0 != 0)
	{
	}
	if (INTERIOR::IS_VALID_INTERIOR(uLocal_3093))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3093);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1397))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1397);
	}
	func_878();
	iLocal_4819 = 0;
	iLocal_4820 = 0;
	iLocal_4826 = 0;
	bLocal_2745 = false;
	func_530(&Local_2193, 0, 1109393408);
	func_286(0, 1);
	bLocal_3162 = false;
	STREAMING::CLEAR_FOCUS();
	iLocal_4782 = 0;
	iLocal_3131 = 0;
	iLocal_3132 = 0;
	iLocal_3133 = 0;
	iLocal_3134 = 0;
	iLocal_3934 = 0;
	iLocal_3935 = 0;
	iLocal_3936 = 0;
	Local_2193.f_10 = 0f;
	Local_2193.f_68 = 0f;
	iLocal_3999 = 0;
	StringCopy(&Local_3949, "", 24);
	StringCopy(&cLocal_3943, "", 24);
	iVar0 = 0;
	while (iVar0 < Local_3318)
	{
		Local_3318[iVar0 /*8*/].f_4 = 0;
		Local_3318[iVar0 /*8*/].f_5 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_3318[iVar0 /*8*/].f_1))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_3318[iVar0 /*8*/].f_1))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_3318[iVar0 /*8*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_4783)
	{
		Local_4783[iVar0 /*5*/] = 0;
		Local_4783[iVar0 /*5*/].f_4 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_2768)
	{
		Local_2768[iVar0 /*81*/].f_77 = 0;
		Local_2768[iVar0 /*81*/].f_76 = 0;
		Local_2768[iVar0 /*81*/].f_78 = 0;
		Local_2768[iVar0 /*81*/].f_79 = 0;
		Local_2768[iVar0 /*81*/].f_80 = -1;
		iVar0++;
	}
	bLocal_3115 = false;
	iVar0 = 0;
	while (iVar0 < Local_4794.x)
	{
		Local_4794[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3933))
	{
		HUD::REMOVE_BLIP(&uLocal_3933);
	}
	if (iParam0 != 3 && iParam0 != 2)
	{
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, 1, 0, 0, 0);
	}
	iLocal_2191 = 0;
	func_877(69, 0);
	func_827(91, 1);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_3116))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_3116);
	}
	func_158(0);
	GlobalFunc_4935();
	StringCopy(&Local_4302, "", 24);
	StringCopy(&Local_4296, "", 24);
	iLocal_1424 = 0;
	func_801();
	func_800(0);
	func_799();
	func_798();
	func_797();
	iLocal_2743 = 0;
	iLocal_2744 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_HELI_CAM_TUTORIAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_HELI_CAM_TUTORIAL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_SCAN_FRANKLIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_SCAN_FRANKLIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_SCANNING_TARGET"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_SCANNING_TARGET");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_SCAN_THE_SUSPECTS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_SCAN_THE_SUSPECTS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_USE_MICROPHONE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_USE_MICROPHONE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_FOLLOW_CHAD_ON_FOOT"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_FOLLOW_CHAD_ON_FOOT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_FRANKLIN_ARRIVES"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_FRANKLIN_ARRIVES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_CAR_CHASE_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_CHASE_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_Z_TYPE_ENGINE_BOOST"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_Z_TYPE_ENGINE_BOOST");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_CAR_CHASE_CONTINUED"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_CHASE_CONTINUED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_CAR_IN_SIGHT"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_IN_SIGHT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_CAR_ENTERS_GARAGE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_CAR_ENTERS_GARAGE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_USE_INFRARED"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_USE_INFRARED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_STEAL_THE_CAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_STEAL_THE_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_2_DRIVE_BACK_TO_GARAGE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_2_DRIVE_BACK_TO_GARAGE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("Car_Steal_2_Chase_Skids_01"))
	{
		AUDIO::STOP_AUDIO_SCENE("Car_Steal_2_Chase_Skids_01");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("Car_Steal_2_Chase_Skids_02"))
	{
		AUDIO::STOP_AUDIO_SCENE("Car_Steal_2_Chase_Skids_02");
	}
}

void func_877(int iParam0, int iParam1)//Position - 0x89FC1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1990)
	{
		if (Local_1990[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_1990[iVar0 /*6*/] == iParam0)
			{
				Local_1990[iVar0 /*6*/].f_2 = iParam1;
			}
		}
		iVar0++;
	}
}

void func_878()//Position - 0x8A001
{
	var uVar0;
	int iVar1;
	
	iLocal_3970 = 0;
	iVar1 = 0;
	while (iVar1 < 17)
	{
		uVar0 = func_213(iVar1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			AUDIO::CANCEL_MUSIC_EVENT(sVar0);
		}
		iVar1++;
	}
}

void func_879(var uParam0)//Position - 0x8A039
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_127 - 1))
	{
		uParam0->f_298[iVar0 /*11*/] = 0;
		uParam0->f_298[iVar0 /*11*/].f_1 = 0;
		uParam0->f_298[iVar0 /*11*/].f_3 = 0f;
		uParam0->f_298[iVar0 /*11*/].f_5 = 0;
		uParam0->f_298[iVar0 /*11*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_433)
	{
		StringCopy(&(uParam0->f_433[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	uParam0->f_127 = 0;
}

void func_880(int iParam0)//Position - 0x8A0BB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1990[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_1990[iVar0 /*6*/].f_4 == 0 || (Local_1990[iVar0 /*6*/].f_4 == 1 && iParam0 == 0))
			{
				Local_1990[iVar0 /*6*/].f_2 = 99;
				Local_1990[iVar0 /*6*/].f_3 = 0;
			}
		}
		iVar0++;
	}
}




void func_884()//Position - 0x8A17E
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_3967 == 0)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("CARSTEAL2 HELICAM");
			iLocal_3967 = 1;
		}
	}
}












void func_896()//Position - 0x8BE23
{
	func_901();
	sLocal_1417 = "CS2";
	sLocal_1924 = "CST2AUD";
	iLocal_3136 = joaat("u_m_y_fibmugger_01");
	iLocal_3135 = joaat("s_m_y_pilot_01");
	func_899();
	func_898(0, 0, 0, 2000, 400, "cs2_chase1", 0, 0, 0, 0);
	func_898(1, 0, 0, 11000, 400, "cs2_tmp18", 1, 0, 1, 0);
	func_898(2, 0, 0, 16000, 400, "cs2_tmp18", 2, 0, 1, 0);
	func_898(3, 18302, 22807, 2000, 401, "cs2_tmp18", 3, 1, 0, 1);
	func_898(4, 20000, 0, 0, 0, "cs2_chase2", 0, 0, 0, 0);
	func_898(5, 37168, 42022, 2871, 402, "cs2_tmp18", 6, 1, 0, 1);
	func_898(6, 46000, 0, 0, 0, "cs2_chase3", 0, 0, 0, 0);
	func_898(7, 55000, 0, 0, 0, "cs2_chase5", 0, 0, 1, 0);
	func_898(8, 59000, 63008, 17736, 402, "cs2_tmp18", 9, 1, 0, 1);
	func_898(9, 63519, 0, 0, 0, "cs2_frksee", 0, 0, 0, 0);
	func_898(10, 71500, 0, 0, 0, "cs2_anger", 0, 0, 0, 0);
	func_898(11, 73870, 79000, 36056, 402, "cs2_tmp18", 11, 1, 0, 1);
	func_898(12, 80000, 0, 0, 0, "cs2_hurry", 0, 0, 1, 0);
	func_898(13, 83101, 85543, 46911, 402, "cs2_tmp18", 12, 1, 0, 1);
	func_898(14, 91000, 0, 0, 0, "cs2_chase4", 0, 0, 1, 0);
	func_898(15, 91000, 94000, 57965, 402, "cs2_tmp18", 13, 1, 0, 1);
	func_898(16, 0, 0, 65698, 402, "cs2_atend", 0, 0, 1, 0);
	func_897(0, 1, 3);
	func_897(1, 2, 13);
	func_897(2, 2, 3);
	func_897(3, 4, 6);
	func_897(4, 5, 8);
	func_897(5, 5, 11);
	func_897(6, 5, 13);
	func_897(7, 9, 11);
	func_897(8, 11, 13);
	func_897(9, 7, 10);
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == GlobalFunc_4917(2))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		bLocal_2746 = true;
	}
	else
	{
		bLocal_2746 = false;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	}
	if (bLocal_2746 == 1)
	{
		func_875(1);
	}
	else
	{
		func_875(0);
	}
	Local_4783[0 /*5*/] = 0;
	Local_4783[0 /*5*/].f_1 = { -29.6222f, -87.8161f, 56.3652f };
	Local_4783[0 /*5*/].f_4 = -1;
	Local_4783[1 /*5*/] = 0;
	Local_4783[1 /*5*/].f_1 = { 206.3808f, -110.3547f, 67.8803f };
	Local_4783[1 /*5*/].f_4 = -1;
}

void func_897(int iParam0, int iParam1, int iParam2)//Position - 0x8C0D7
{
	Local_1425[iParam0 /*3*/] = iParam1;
	Local_1425[iParam0 /*3*/].f_1 = iParam2;
}

void func_898(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x8C0F3
{
	Local_3163[iParam0 /*9*/] = iParam1;
	Local_3163[iParam0 /*9*/].f_1 = iParam2;
	Local_3163[iParam0 /*9*/].f_2 = iParam3;
	Local_3163[iParam0 /*9*/].f_3 = iParam4;
	Local_3163[iParam0 /*9*/].f_4 = sParam5;
	Local_3163[iParam0 /*9*/].f_5 = iParam6;
	Local_3163[iParam0 /*9*/].f_6 = iParam7;
	Local_3163[iParam0 /*9*/].f_7 = iParam8;
	Local_3163[iParam0 /*9*/].f_8 = iParam9;
}

void func_899()//Position - 0x8C15C
{
	func_900(400, 0, joaat("ztype"), 1, 0);
	func_900(401, 25200, joaat("ztype"), 1, 0);
	func_900(402, 44199, joaat("ztype"), 1, 0);
	func_900(3, 1495, joaat("futo"), 0, 0);
	func_900(4, 1500, joaat("sentinel"), 0, 0);
	func_900(5, 2000, joaat("bison"), 0, 0);
	func_900(6, 1517, joaat("baller"), 0, 0);
	func_900(7, 0, joaat("sentinel"), 0, 0);
	func_900(8, 3494, joaat("sentinel"), 0, 0);
	func_900(9, 4555, joaat("gresley"), 0, 0);
	func_900(10, 7849, joaat("bison"), 0, 0);
	func_900(11, 4765, joaat("boxville2"), 0, 0);
	func_900(12, 12735, joaat("sentinel"), 0, 0);
	func_900(13, 11335, joaat("baller"), 0, 0);
	func_900(14, 12165, joaat("bison"), 0, 0);
	func_900(15, 10775, joaat("bus"), 0, 0);
	func_900(16, 770, joaat("sentinel"), 0, 0);
	func_900(17, 4245, joaat("gresley"), 0, 0);
	func_900(18, 9620, joaat("futo"), 0, 0);
	func_900(19, 12525, joaat("bison"), 0, 0);
	func_900(20, 16675, joaat("sentinel"), 0, 0);
	func_900(21, 5000, joaat("gresley"), 0, 0);
	func_900(22, 6986, joaat("futo"), 0, 0);
	func_900(23, 5535, joaat("sentinel"), 0, 0);
	func_900(24, 31515, joaat("sentinel"), 0, 0);
	func_900(25, 33480, joaat("futo"), 0, 0);
	func_900(26, 26530, joaat("bus"), 0, 0);
	func_900(27, 29065, joaat("gresley"), 0, 0);
	func_900(28, 28000, joaat("baller"), 0, 0);
	func_900(29, 29708, joaat("boxville2"), 0, 0);
	func_900(30, 32755, joaat("sentinel"), 0, 0);
	func_900(31, 49000, joaat("sentinel"), 0, 0);
	func_900(32, 26918, joaat("benson"), 0, 0);
	func_900(33, 40450, joaat("futo"), 0, 0);
	func_900(34, 43000, joaat("granger"), 0, 0);
	func_900(35, 41520, joaat("sentinel"), 0, 0);
	func_900(36, 45560, joaat("sentinel"), 0, 0);
	func_900(37, 34500, joaat("sentinel"), 0, 0);
	func_900(39, 52835, joaat("benson"), 0, 0);
	func_900(40, 51905, joaat("sentinel"), 0, 0);
	func_900(41, 51850, joaat("granger"), 0, 0);
	func_900(42, 51000, joaat("granger"), 0, 0);
	func_900(43, 54000, joaat("boxville2"), 0, 0);
	func_900(44, 54250, joaat("baller"), 0, 0);
	func_900(45, 54750, joaat("futo"), 0, 0);
	func_900(46, 51600, joaat("sentinel"), 0, 0);
	func_900(47, 53320, joaat("benson"), 0, 0);
	func_900(48, 53390, joaat("sentinel"), 0, 0);
	func_900(49, 65630, joaat("bus"), 0, 0);
	func_900(50, 65475, joaat("bus"), 0, 0);
	func_900(51, 65100, joaat("gresley"), 0, 0);
	func_900(52, 65895, joaat("sentinel"), 0, 0);
	func_900(53, 64880, joaat("baller"), 0, 0);
	func_900(54, 65720, joaat("baller"), 0, 0);
	func_900(55, 65950, joaat("futo"), 0, 0);
	func_900(56, 65785, joaat("boxville2"), 0, 0);
	func_900(57, 71795, joaat("granger"), 0, 0);
	func_900(58, 69245, joaat("sentinel"), 0, 0);
	func_900(59, 75870, joaat("sentinel"), 0, 0);
	func_900(60, 78885, joaat("bus"), 0, 0);
	func_900(61, 78480, joaat("baller"), 0, 0);
	func_900(62, 80050, joaat("baller"), 0, 0);
	func_900(63, 79685, joaat("futo"), 0, 0);
	func_900(64, 76030, joaat("bus"), 0, 0);
	func_900(65, 76463, joaat("gresley"), 0, 0);
	func_900(66, 77085, joaat("futo"), 0, 0);
	func_900(67, 80240, joaat("futo"), 0, 0);
	func_900(68, 94190, joaat("sentinel"), 0, 0);
	func_900(69, 89525, joaat("bus"), 0, 0);
	func_900(70, 89525, joaat("bison"), 0, 0);
	func_900(71, 94110, joaat("boxville2"), 0, 0);
	func_900(100, 6500, joaat("buffalo2"), 0, 1);
}

void func_900(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8C607
{
	Local_3318[iLocal_4817 /*8*/] = iParam2;
	Local_3318[iLocal_4817 /*8*/].f_2 = iParam1;
	Local_3318[iLocal_4817 /*8*/].f_6 = iParam3;
	Local_3318[iLocal_4817 /*8*/].f_7 = iParam4;
	Local_3318[iLocal_4817 /*8*/].f_3 = iParam0;
	iLocal_4817++;
}

void func_901()//Position - 0x8C651
{
	Local_1468 = { Local_1468 };
	PED::ADD_RELATIONSHIP_GROUP("MYFRIEND", &iLocal_1754);
	PED::ADD_RELATIONSHIP_GROUP("FOE", &iLocal_1755);
	PED::ADD_RELATIONSHIP_GROUP("WARY", &iLocal_1757);
	PED::ADD_RELATIONSHIP_GROUP("IGNORE", &iLocal_1756);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1754, iLocal_1755);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1755, iLocal_1754);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1754, iLocal_1756);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1755, iLocal_1756);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1755, iLocal_1757);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1756, iLocal_1754);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1756, iLocal_1755);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1757, iLocal_1754);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1757, iLocal_1756);
}

void func_902(int iParam0)//Position - 0x8C6FA
{
	func_876(iParam0);
	func_903();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_903()//Position - 0x8C710
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_3967 == 1)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_3967 = 0;
		}
	}
}




