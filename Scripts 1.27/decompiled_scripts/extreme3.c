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
	struct<3> Local_21 = { 0, 0, 0 } ;
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
	int iLocal_35 = 0;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
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
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 150;
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
	var uLocal_266 = 150;
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
	var uLocal_417 = 150;
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
	var uLocal_568 = 150;
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
	var uLocal_719 = 150;
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
	var uLocal_874 = 25;
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
	var uLocal_900 = 25;
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
	var uLocal_926 = 25;
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
	var uLocal_952 = 25;
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
	var uLocal_978 = 25;
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
	var uLocal_1004 = 25;
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
	var uLocal_1030 = 50;
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
	var uLocal_1080 = 0;
	var uLocal_1081 = 50;
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
	var uLocal_1132 = 50;
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
	var uLocal_1183 = 50;
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
	float fLocal_1234 = 0f;
	float fLocal_1235 = 0f;
	var uLocal_1236 = 0;
	float fLocal_1237 = 0f;
	float fLocal_1238 = 0f;
	float fLocal_1239 = 0f;
	float fLocal_1240 = 0f;
	var uLocal_1241 = 0;
	float fLocal_1242 = 0f;
	float fLocal_1243 = 0f;
	float fLocal_1244 = 0f;
	float fLocal_1245 = 0f;
	float fLocal_1246 = 0f;
	float fLocal_1247 = 0f;
	float fLocal_1248 = 0f;
	float fLocal_1249 = 0f;
	float fLocal_1250 = 0f;
	float fLocal_1251 = 0f;
	float fLocal_1252 = 0f;
	float fLocal_1253 = 0f;
	float fLocal_1254 = 0f;
	var uLocal_1255 = 150;
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
	var uLocal_1406 = 150;
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
	var uLocal_1557 = 150;
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
	var uLocal_1708 = 25;
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
	var uLocal_1734 = 25;
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
	var uLocal_1760 = 25;
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
	var uLocal_1786 = 50;
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
	int iLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	int iLocal_1848 = 0;
	int iLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 150;
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
	var uLocal_2305 = 50;
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
	var uLocal_2456 = 25;
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
	var uLocal_2491 = 0;
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
	var uLocal_2537 = 0;
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
	var uLocal_2576 = 150;
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
	var uLocal_2687 = 0;
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
	var uLocal_2727 = 50;
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
	var uLocal_2778 = 25;
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
	var uLocal_2807 = 150;
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
	var uLocal_2863 = 0;
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
	var uLocal_2879 = 0;
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
	var uLocal_2918 = 0;
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
	var uLocal_2958 = 8;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 50;
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
	var uLocal_3018 = 25;
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
	var uLocal_3044 = 6;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 8;
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
	var uLocal_3065 = -1;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 1000;
	var uLocal_3073 = 1000;
	var uLocal_3074 = 0;
	struct<61> Local_3075 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3136 = 0;
	int iLocal_3137 = 0;
	int iLocal_3138 = 0;
	int iLocal_3139 = 0;
	char* sLocal_3140 = NULL;
	int iLocal_3141 = 0;
	var uLocal_3142 = 0;
	struct<3> Local_3143 = { 0, 0, 0 } ;
	var uLocal_3146 = 16;
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
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
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
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
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
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	int iLocal_3311 = 0;
	int iLocal_3312 = 0;
	int iLocal_3313 = 0;
	int iLocal_3314 = 0;
	int iLocal_3315 = 0;
	int iLocal_3316 = 0;
	int iLocal_3317 = 0;
	int iLocal_3318 = 0;
	struct<6> Local_3319 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	int iLocal_3328 = 0;
	int iLocal_3329 = 0;
	int iLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	struct<3> Local_3334 = { 0, 0, 0 } ;
	struct<3> Local_3337 = { 0, 0, 0 } ;
	struct<3> Local_3340 = { 0, 0, 0 } ;
	struct<3> Local_3343 = { 0, 0, 0 } ;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	var uLocal_3349 = 0;
	int iLocal_3350 = 0;
	float fLocal_3351 = 0f;
	var uLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	struct<3> Local_3355 = { 0, 0, 0 } ;
	struct<3> Local_3358 = { 0, 0, 0 } ;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364 = 0;
	int iLocal_3365 = 0;
	int iLocal_3366 = 0;
	int iLocal_3367 = 0;
	int iLocal_3368 = 0;
	int iLocal_3369 = 0;
	int iLocal_3370 = 0;
	int iLocal_3371 = 0;
	int iLocal_3372 = 0;
	int iLocal_3373 = 0;
	struct<3> Local_3374 = { 0, 0, 0 } ;
	struct<3> Local_3377 = { 0, 0, 0 } ;
	struct<3> Local_3380 = { 0, 0, 0 } ;
	struct<3> Local_3383 = { 0, 0, 0 } ;
	var uLocal_3386 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(52);
	iLocal_80 = joaat("a_c_retriever");
	iLocal_84 = 1;
	iLocal_91 = 1;
	iLocal_113 = 1;
	fLocal_1234 = 120f;
	fLocal_1235 = 0f;
	fLocal_1237 = 1f;
	fLocal_1238 = 0f;
	fLocal_1239 = 1f;
	fLocal_1240 = 30f;
	fLocal_1242 = 1f;
	fLocal_1243 = 5f;
	fLocal_1244 = 1f;
	fLocal_1245 = 1f;
	fLocal_1246 = 100f;
	fLocal_1247 = 100f;
	fLocal_1248 = 0f;
	fLocal_1249 = 7000f;
	fLocal_1250 = 0f;
	fLocal_1251 = 0f;
	fLocal_1252 = 0.3f;
	fLocal_1253 = 0.5f;
	fLocal_1254 = 50f;
	iLocal_1840 = -1;
	iLocal_1848 = -1;
	iLocal_1849 = -1;
	iLocal_3136 = 1;
	Local_3143 = { -75.08253f, -818.7828f, 325.3655f };
	Local_3334 = { -65.41612f, -809.7639f, 321.3f };
	Local_3337 = { -65.17508f, -810.62f, 321.3f };
	Local_3340 = { 126.8733f, -569.9907f, 42.5572f };
	Local_3343 = { 96.8964f, -650.2531f, 43.2203f };
	Local_3355 = { 521.8232f, -177.8401f, 53.94751f };
	Local_3358 = { 519.8843f, -176.2493f, 55f };
	Local_3374 = { -0.379716f, -2.29171f, 1.42498f };
	Local_3377 = { 0f, 0f, -20f };
	Local_3380 = { 0f, -1f, 1.42498f };
	Local_3383 = { 0f, 0f, 160f };
	Local_3075 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_3075);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10102(1);
		func_608();
	}
	GlobalFunc_9621(52, 1, 0);
	func_604();
	if (GlobalFunc_199())
	{
		func_594(&Local_3075, 1, 1, 0);
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_3337, -50f, 1, 0);
				func_582(0);
				break;
			
			case 1:
				GlobalFunc_4972(Local_3337, -50f, 1, 0);
				func_582(1);
				break;
			
			case 2:
				GlobalFunc_4972(Local_3340, 115.2982f, 1, 0);
				func_582(2);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_TR", 0);
		func_566(Local_3075.f_9, 0, 0, 0, 0, 0);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 222, 1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		}
		switch (iLocal_3136)
		{
			case 1:
				func_519();
				break;
			
			case 2:
				func_510();
				break;
			
			case 3:
				func_472();
				break;
			
			case 4:
				func_289();
				break;
			
			case 5:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x307
{
	switch (iLocal_3138)
	{
		case 0:
			func_288();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_286();
			GlobalFunc_4956();
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME3_FAIL");
			switch (iLocal_3139)
			{
				case 0:
					break;
				
				case 1:
					sLocal_3140 = "EXT3_F1";
					break;
				
				case 2:
					sLocal_3140 = "EXT3_F2";
					break;
				
				case 3:
					sLocal_3140 = "EXT3_F3";
					break;
				
				case 4:
					sLocal_3140 = "EXT3_F4";
					break;
				
				case 5:
					sLocal_3140 = "EXT3_F5";
					break;
				
				case 6:
					sLocal_3140 = "EXT3_F6";
					break;
			}
			if (iLocal_3139 == 0)
			{
				GlobalFunc_10102(1);
			}
			else
			{
				GlobalFunc_10700(sLocal_3140, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_279();
				func_5(0);
				GlobalFunc_69(&iLocal_3329);
				GlobalFunc_69(&iLocal_3350);
				GlobalFunc_7108(&iLocal_3348);
				func_608();
			}
			break;
	}
}




void func_5(int iParam0)//Position - 0x4F6
{
	if (iParam0 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
		}
		if (iLocal_3371 == 0)
		{
			GlobalFunc_11327(PLAYER::PLAYER_PED_ID(), 0);
			GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_5128(1);
			GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			iLocal_3371 = 1;
		}
	}
	else
	{
		func_255(PLAYER::PLAYER_PED_ID(), 14, 158);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_11326(PLAYER::PLAYER_PED_ID());
			GlobalFunc_5905(1, uLocal_3142);
			iLocal_3371 = 0;
		}
	}
}


























































































































































































































































int func_255(int iParam0, int iParam1, int iParam2)//Position - 0x45677
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_255(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_255(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		GlobalFunc_11272(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11272(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}
























void func_279()//Position - 0x49067
{
	if (!GlobalFunc_663("EXT3_01", 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(1);
	if (iLocal_3137 == 0)
	{
		iLocal_3136++;
	}
	else
	{
		iLocal_3136 = iLocal_3137;
	}
	iLocal_3137 = 0;
	iLocal_3138 = 0;
}







void func_286()//Position - 0x49177
{
	GlobalFunc_846(&uLocal_3349);
}


void func_288()//Position - 0x491A6
{
	iLocal_3141 = 0;
	iLocal_3138 = 1;
}

void func_289()//Position - 0x491B6
{
	if (GlobalFunc_115(iLocal_3354))
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3354);
		if (VEHICLE::IS_VEHICLE_HIGH_DETAIL(iLocal_3354))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_3354, 1);
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f, 0.25f);
	switch (iLocal_3138)
	{
		case 0:
			func_288();
			func_414(2, "Outro", 1, 0, 0, 1);
			iLocal_3325 = 0;
			iLocal_3328 = 0;
			func_413(4, 1);
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
			}
			iLocal_3372 = 0;
			iLocal_3373 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			switch (iLocal_3325)
			{
				case 0:
					func_412();
					func_410();
					func_395();
					if (GlobalFunc_115(iLocal_3348))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3348))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3348, 0.35f);
						}
						if (!CAM::DOES_CAM_EXIST(uLocal_3326))
						{
							uLocal_3326 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
							CAM::ATTACH_CAM_TO_ENTITY(uLocal_3326, iLocal_3348, -4.7308f, 20.6208f, 6.3419f, 1);
							CAM::POINT_CAM_AT_ENTITY(uLocal_3326, iLocal_3348, -4.0898f, 17.7773f, 5.632f, 1);
							CAM::SET_CAM_FOV(uLocal_3326, 33.4911f);
							CAM::SHAKE_CAM(uLocal_3326, "HAND_SHAKE", 0.5f);
							func_392(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
							RECORDING::_0x48621C9FCA3EBD28(1);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							if (!CAM::DOES_CAM_EXIST(uLocal_3327))
							{
								uLocal_3327 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
								CAM::ATTACH_CAM_TO_ENTITY(uLocal_3327, iLocal_3348, -12.5501f, -4.3722f, 5.6236f, 1);
								CAM::POINT_CAM_AT_ENTITY(uLocal_3327, iLocal_3348, -9.8242f, -3.8605f, 4.4802f, 1);
								CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3327, uLocal_3326, 15000, 1, 1);
							}
							MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3348, 0f, 50f, 0f), 50f, 0, 0, 0, 0, 0);
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3348))
								{
									ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3348, 0, Local_3374, Local_3377, 0, 0, 0, 0, 2, 1);
							}
							if (GlobalFunc_115(iLocal_3329) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_3329, iLocal_3348))
							{
								ENTITY::DETACH_ENTITY(iLocal_3329, 0, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3329, iLocal_3348, 0, Local_3380, Local_3383, 0, 0, 0, 0, 2, 1);
							}
							if (!STREAMING::STREAMVOL_IS_VALID(uLocal_3386))
							{
								uLocal_3386 = STREAMING::STREAMVOL_CREATE_SPHERE(516.254f, -163.8118f, 57.1199f, 50f, 12, 127);
							}
						}
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), -2017877118))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmextreme3", "idle", 1000f, -8f, -1, 9, 0, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						if ((GlobalFunc_115(iLocal_3329) && !GlobalFunc_6695(iLocal_3329, -2017877118)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_3329, iLocal_3348))
						{
							TASK::TASK_PLAY_ANIM(iLocal_3329, "rcmextreme3", "idle", 1000f, -8f, -1, 9, 0.5f, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3329, 0, 0);
						}
						GlobalFunc_79(500, 0);
						if ((iLocal_3317 == 1 && !GlobalFunc_111()) || (MISC::GET_GAME_TIMER() - iLocal_3373) > 15000)
						{
							GlobalFunc_4956();
							if (iLocal_3330 != 2 && func_387())
							{
								iLocal_3330 = 2;
							}
							if (GlobalFunc_115(iLocal_3348))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3348))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3348);
								}
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3348, 501, "Ext3_Truck", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3348, 6000f);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3348);
							}
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_3326))
							{
								CAM::DESTROY_CAM(uLocal_3326, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_3327))
							{
								CAM::DESTROY_CAM(uLocal_3327, 0);
							}
							uLocal_3326 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
							CAM::SET_CAM_PARAMS(uLocal_3326, 516.254f, -163.8118f, 57.1199f, 1.5934f, 0f, -123.545f, 41.3162f, 0, 0, 0, 2);
							CAM::SET_CAM_PARAMS(uLocal_3326, 515.1053f, -167.2159f, 57.1385f, 0.5677f, 0f, -116.9788f, 41.3162f, 7000, 0, 0, 2);
							CAM::SHAKE_CAM(uLocal_3326, "HAND_SHAKE", 0.5f);
							func_5(0);
							if (GlobalFunc_115(iLocal_3329))
							{
								if (iLocal_3330 == 2 && GlobalFunc_115(iLocal_3348))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3329);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3329, iLocal_3348, 0, Local_3380, Local_3383, 0, 0, 0, 0, 2, 1);
									TASK::TASK_PLAY_ANIM(iLocal_3329, "rcmextreme3", "idle", 1000f, -8f, -1, 9, 0.5f, 0, 0, 0);
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3329, 0, 0);
							}
							iLocal_3325++;
						}
					}
					break;
				
				case 1:
					if (iLocal_3372 == 0)
					{
						iLocal_3372 = 1;
						if (iLocal_3330 == 2)
						{
							CUTSCENE::REQUEST_CUTSCENE("ES_3_MCS_1", 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE("ES_3_MCS_2", 8);
						}
					}
					else if (GlobalFunc_115(iLocal_3348))
					{
						if ((GlobalFunc_4926(1000) && GlobalFunc_109()) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3348))
						{
							iLocal_3325++;
						}
						else
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3348, 1f);
						}
					}
					break;
				
				case 2:
					if (GlobalFunc_7638(1, 1093140480, 0))
					{
						if (STREAMING::STREAMVOL_IS_VALID(uLocal_3386))
						{
							STREAMING::STREAMVOL_DELETE(uLocal_3386);
						}
						if (GlobalFunc_115(iLocal_3348))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3348))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3348);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3348, "DOM_Flatbed_truck", 0, iLocal_3346, 0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3348, 0, 1);
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3348))
							{
								ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (GlobalFunc_115(iLocal_3329))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_3329, iLocal_3348))
								{
									ENTITY::DETACH_ENTITY(iLocal_3329, 0, 0);
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3329, "Dom", 0, GlobalFunc_4946(52), 0);
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_3325++;
					}
					break;
				
				case 3:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!GlobalFunc_115(iLocal_3354))
						{
							iLocal_3354 = VEHICLE::CREATE_VEHICLE(iLocal_3353, Local_3355, 14.91418f, 1, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3354);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3353);
						}
						GlobalFunc_69(&iLocal_3350);
						if (CAM::DOES_CAM_EXIST(uLocal_3326))
						{
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							CAM::DESTROY_ALL_CAMS(0);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3329) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0)))
						{
							iLocal_3329 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3329, 1, 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3348) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", 0)))
						{
							iLocal_3348 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3348, 1, 1);
							VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_3348, uLocal_3352);
						}
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
						{
							iLocal_3328 = 1;
							if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
							{
								GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 525.9053f, -173.6703f, 53.9032f, 143.0017f, 0, 1);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							}
						}
						if (iLocal_3328 == 0)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						}
						if (GlobalFunc_115(iLocal_3329) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dom", 0))
						{
							GlobalFunc_5705(iLocal_3329, Local_3358, -172.4602f, 1, 1);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_3329, 8, 2, 0, 0);
							if (GlobalFunc_115(iLocal_3354))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3354, 0);
								PED::SET_PED_KEEP_TASK(iLocal_3329, 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3333);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_3354, 20000, -1, 1f, 1, 0);
								TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_3354, 30f, 786469);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3333);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3329, uLocal_3333);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3333);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3329, 0);
							}
							else
							{
								TASK::TASK_WANDER_STANDARD(iLocal_3329, 1193033728, 0);
							}
						}
					}
					else
					{
						func_368(1, 1, 1, 1);
						iLocal_3138 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_279();
			GlobalFunc_79(500, 1);
			GlobalFunc_190(&iLocal_3348);
			GlobalFunc_190(&iLocal_3354);
			GlobalFunc_2297(&iLocal_3329, 1, 0, 1);
			func_290();
			break;
	}
}

void func_290()//Position - 0x49A23
{
	func_292(83, 1);
	GlobalFunc_2198(128, 1, 0);
	func_608();
}


void func_292(int iParam0, bool bParam1)//Position - 0x49B47
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_8949(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2365(&uVar1, GlobalFunc_8310());
	func_318();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}


























void func_318()//Position - 0x4AEDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10915(iVar1, 14, iVar2))
				{
					func_255(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}


















































void func_368(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x524B9
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}



















int func_387()//Position - 0x52BB0
{
	struct<3> Var0;
	
	if (iLocal_3330 == 2)
	{
		return 1;
	}
	if (GlobalFunc_115(iLocal_3329))
	{
		if (func_388(iLocal_3329))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_3348, ENTITY::GET_ENTITY_COORDS(iLocal_3329, 1)) };
		if ((((Var0.f_1 < 5f && Var0.f_1 > -8f) && Var0.x < 1.7f) && Var0.x > -1.7f) && Var0.f_2 < 4f)
		{
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0)//Position - 0x52C30
{
	struct<3> Var0;
	
	if (GlobalFunc_115(iParam0) && GlobalFunc_115(iLocal_3348))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_3348, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
		if (Var0.f_1 < 1f)
		{
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
			}
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
		}
	}
	return 0;
}




void func_392(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x52D19
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_395()//Position - 0x52F1E
{
	if (GlobalFunc_115(iLocal_3329))
	{
		switch (iLocal_3330)
		{
			case 0:
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_3329) == 1)
				{
					iLocal_3330 = 1;
				}
				break;
			
			case 1:
				if (func_409(iLocal_3329))
				{
					if (func_388(iLocal_3329))
					{
						func_408(iLocal_3329);
						iLocal_3330 = 2;
					}
					else
					{
						iLocal_3330 = 3;
						TASK::CLEAR_PED_TASKS(iLocal_3329);
						if (GlobalFunc_115(iLocal_3348))
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_3329, iLocal_3348, 20000, 1056964608, 1073741824, 1073741824, 0);
						}
					}
				}
				else
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_3369) > 250 && PED::GET_PED_PARACHUTE_STATE(iLocal_3329) == 2) && GlobalFunc_115(iLocal_3348))
					{
						TASK::SET_PARACHUTE_TASK_TARGET(iLocal_3329, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3348, 0f, 5f, 1f));
						iLocal_3369 = MISC::GET_GAME_TIMER();
					}
					func_397();
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_3329, 1), 30f, 1))
		{
			func_396(5);
		}
	}
}

void func_396(int iParam0)//Position - 0x53020
{
	if (iLocal_3141 == 0)
	{
		iLocal_3139 = iParam0;
		iLocal_3138 = 2;
		iLocal_3137 = 5;
	}
}

void func_397()//Position - 0x5303C
{
	if (((((((iLocal_3141 == 0 && iLocal_3318 == 0) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_115(iLocal_3329)) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0) && PED::GET_PED_PARACHUTE_STATE(iLocal_3329) == 0) && GlobalFunc_156(iLocal_3329, PLAYER::PLAYER_PED_ID(), 1) < 3f) && GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_MESS", 8, 0, 0, 0))
	{
		iLocal_3318 = 1;
	}
}











void func_408(int iParam0)//Position - 0x5371E
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((GlobalFunc_115(iParam0) && GlobalFunc_115(iLocal_3348)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_3348))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_3348, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
		Var3 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iLocal_3348, 0, Var0, Var3, 0, 0, 0, 0, 2, 1);
	}
}

int func_409(int iParam0)//Position - 0x5377F
{
	if (GlobalFunc_115(iParam0))
	{
		if ((!PED::IS_PED_RAGDOLL(iParam0) && !TASK::IS_PED_GETTING_UP(iParam0)) || (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iParam0) > 10f && !PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID())))
		{
			if (PED::GET_PED_PARACHUTE_STATE(iParam0) == 3 || (iParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_PARACHUTE_STATE(iParam0) == -1))
			{
				if (iLocal_3364 == -1 && iParam0 == PLAYER::PLAYER_PED_ID())
				{
					iLocal_3364 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iParam0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_410()//Position - 0x5380D
{
	if (iLocal_3141 == 0)
	{
		if (iLocal_3316 == 0)
		{
			if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_3329)) && !GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_3146, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				GlobalFunc_173(&uLocal_3146, 3, iLocal_3329, "DOM", 0, 1);
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_3329) == -1 && !func_387())
				{
					if (GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_NTRUCK", 8, 0, 0, 0))
					{
						iLocal_3316 = 1;
					}
				}
				else if (GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_YTRUCK", 8, 0, 0, 0))
				{
					iLocal_3316 = 1;
				}
			}
		}
		else if (iLocal_3317 == 0)
		{
			if (GlobalFunc_115(iLocal_3329) && !GlobalFunc_111())
			{
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_3329) == -1 && func_387())
				{
					if (GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_LAND", 8, 0, 0, 0))
					{
						iLocal_3317 = 1;
					}
				}
				else if (GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_LAND2", 8, 0, 0, 0))
				{
					iLocal_3317 = 1;
				}
			}
		}
	}
}


void func_412()//Position - 0x539C7
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_115(iLocal_3348) && GlobalFunc_115(iLocal_3350))
	{
		iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3348, 0f, 10f, 0f), 5f, 0, 4);
		if (GlobalFunc_4940(iVar0) && iVar0 != iLocal_3348)
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (GlobalFunc_115(iVar1) && !GlobalFunc_6695(iVar1, 1805844857))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 1);
				TASK::TASK_SMART_FLEE_PED(iVar1, iLocal_3350, 300f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iVar1, 1);
			}
			GlobalFunc_2297(&iVar1, 1, 0, 1);
		}
		GlobalFunc_190(&iVar0);
	}
}

void func_413(int iParam0, int iParam1)//Position - 0x53A69
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_3346);
			STREAMING::REQUEST_MODEL(iLocal_3347);
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext3_Truck");
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_3346);
			STREAMING::REQUEST_MODEL(iLocal_3347);
			STREAMING::REQUEST_MODEL(iLocal_3353);
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext3_Truck");
			VEHICLE::REQUEST_VEHICLE_RECORDING(501, "Ext3_Truck");
			STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
			break;
	}
	if (iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 == 0)
		{
			switch (iParam0)
			{
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
					{
						iVar0 = 1;
					}
					break;
				
				case 2:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_3346) && STREAMING::HAS_MODEL_LOADED(iLocal_3347)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Ext3_Truck"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_3346, 1);
						iVar0 = 1;
					}
					break;
				
				case 4:
					if (((((STREAMING::HAS_MODEL_LOADED(iLocal_3346) && STREAMING::HAS_MODEL_LOADED(iLocal_3347)) && STREAMING::HAS_MODEL_LOADED(iLocal_3353)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Ext3_Truck")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Ext3_Truck")) && STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
					{
						iVar0 = 1;
					}
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_414(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x53BBB
{
	int iVar0;
	int iVar1;
	int iVar2;
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
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = GlobalFunc_5110(iVar1);
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_133(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		GlobalFunc_10970(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}


























































void func_472()//Position - 0x586CC
{
	switch (iLocal_3138)
	{
		case 0:
			func_288();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_3361 = 0;
			iLocal_3366 = 0;
			iLocal_3367 = MISC::GET_GAME_TIMER();
			iLocal_3368 = -1;
			iLocal_3365 = 1;
			iLocal_3315 = 0;
			iLocal_3316 = 0;
			iLocal_3317 = 0;
			iLocal_3318 = 0;
			break;
		
		case 1:
			func_395();
			func_508();
			func_412();
			func_486();
			if (iLocal_3368 == -1)
			{
				if (func_409(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_3368 = MISC::GET_GAME_TIMER();
					GlobalFunc_5105();
					if (iLocal_3364 == 0 || iLocal_3364 == 1)
					{
						GlobalFunc_553(761);
					}
				}
				else
				{
					func_482();
					func_477();
					if (GlobalFunc_74("EXT3_03") && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
					{
						HUD::CLEAR_HELP(1);
					}
					if (iLocal_3365 == 1 && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
					{
						GlobalFunc_571(0, -1);
						iLocal_3365 = 0;
					}
				}
			}
			else if (iLocal_3315 == 0)
			{
				if (func_388(PLAYER::PLAYER_PED_ID()))
				{
					if (PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						func_408(PLAYER::PLAYER_PED_ID());
						RECORDING::_0x293220DA1B46CEBC(5f, 2f, 3);
						func_413(4, 0);
					}
					func_474();
					if (GlobalFunc_115(iLocal_3329))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3329, 1);
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_3368) > 1000)
				{
					func_396(2);
				}
			}
			else if (!GlobalFunc_111())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME3_STOP");
				iLocal_3138 = 2;
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(15f, 3.5f, 1);
			func_279();
			GlobalFunc_846(&uLocal_3349);
			GlobalFunc_4948(&uLocal_3063, 0, 0);
			break;
	}
}


void func_474()//Position - 0x58950
{
	if (((iLocal_3141 == 0 && iLocal_3315 == 0) && !GlobalFunc_111()) && GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_COMM", 8, 0, 0, 0))
	{
		iLocal_3315 = 1;
	}
}



void func_477()//Position - 0x58A40
{
	if (iLocal_3141 == 0 && iLocal_3363 == 1)
	{
		if (iLocal_3312 == 0)
		{
			if (!GlobalFunc_111() && GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_SKYDIVE", 8, 1, 0, 0))
			{
				GlobalFunc_164("EXT3_01", 7500, 1);
				if (GlobalFunc_115(iLocal_3348))
				{
					uLocal_3349 = GlobalFunc_5743(iLocal_3348, 1, 5);
				}
				iLocal_3312 = 1;
			}
		}
		else if (iLocal_3313 == 0)
		{
			if (GlobalFunc_111())
			{
				Local_3319 = { GlobalFunc_514() };
				if (MISC::ARE_STRINGS_EQUAL(&Local_3319, "EXT_SKYDIVE_3"))
				{
					GlobalFunc_5105();
					iLocal_3313 = 1;
				}
			}
		}
		else if (iLocal_3314 == 0)
		{
			if (!GlobalFunc_111() && GlobalFunc_10626(&uLocal_3146, "EXT3AUD", "EXT_SKYDIVE", &Local_3319, 8, 0, 0))
			{
				iLocal_3314 = 1;
			}
		}
	}
}





void func_482()//Position - 0x58C5D
{
	if (GlobalFunc_115(iLocal_3348))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3348, 350f, 350f, 350f, 0, 0, 0))
		{
			func_396(2);
		}
		else if (iLocal_3366 == 0)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3348, 200f, 200f, 200f, 0, 0, 0))
			{
				iLocal_3366 = 1;
				GlobalFunc_164("EXT3_02", 7500, 1);
			}
		}
	}
}




void func_486()//Position - 0x58D76
{
	if (GlobalFunc_115(iLocal_3348) && iLocal_3361 == 0)
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
		{
			iLocal_3361 = 1;
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_3367) > 3000)
		{
			GlobalFunc_1("EXT3_03");
			iLocal_3361 = 1;
		}
	}
	else
	{
		if (GlobalFunc_74("EXT3_03") && PAD::IS_CONTROL_PRESSED(0, 21))
		{
			HUD::CLEAR_HELP(1);
		}
		func_487(&uLocal_3063, iLocal_3348, 0f, 15f, 0f, "EXT3_04", 0, 1, 1, 1);
	}
}

void func_487(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)//Position - 0x58DF7
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	uParam0->f_6 = 1;
	GlobalFunc_8323(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, iParam8, bParam9);
}





















void func_508()//Position - 0x59BF1
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	if (GlobalFunc_115(iLocal_3348))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3348))
		{
			if ((PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_3348, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				fVar3 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3348, 1);
				if (Var0.f_2 > 150f)
				{
					fVar6 = 0.35f;
				}
				else
				{
					fVar4 = MISC::ABSF((fVar3 / 100f));
					if (Var0.f_1 > 0f)
					{
						fVar5 = ((0.35f + fVar4) + 0.2f);
					}
					else
					{
						fVar5 = (0.35f - fVar4);
					}
					if (fVar5 < 0.15f)
					{
						fVar6 = 0.15f;
					}
					else if (fVar5 > 1f)
					{
						fVar6 = 1f;
					}
					else
					{
						fVar6 = fVar5;
					}
				}
				func_509(fVar6, 1008981770);
			}
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_3348, fLocal_3351);
		}
		else if (GlobalFunc_115(iLocal_3350) && !GlobalFunc_6695(iLocal_3350, -258271821))
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_3350, iLocal_3348, 30f, 786469);
		}
	}
	else
	{
		func_396(3);
	}
}

void func_509(float fParam0, float fParam1)//Position - 0x59D1C
{
	if (fParam0 > fLocal_3351)
	{
		fLocal_3351 = (fLocal_3351 + fParam1);
	}
	else if (fParam0 < fLocal_3351)
	{
		fLocal_3351 = (fLocal_3351 - fParam1);
	}
}

void func_510()//Position - 0x59D4B
{
	switch (iLocal_3138)
	{
		case 0:
			func_288();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			if (GlobalFunc_11095(PLAYER::PLAYER_PED_ID(), 8, -1) != 1)
			{
				GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), 1);
			}
			func_413(2, 1);
			func_518();
			func_513(0);
			iLocal_3311 = 0;
			iLocal_3312 = 0;
			iLocal_3313 = 0;
			iLocal_3314 = 0;
			iLocal_3369 = MISC::GET_GAME_TIMER();
			iLocal_3370 = MISC::GET_GAME_TIMER();
			iLocal_3362 = 0;
			iLocal_3363 = 0;
			iLocal_3364 = -1;
			GlobalFunc_79(500, 0);
			break;
		
		case 1:
			func_395();
			func_512();
			func_477();
			if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0)
			{
				iLocal_3138 = 2;
			}
			else if (iLocal_3363 == 0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_3370) > 60000)
				{
					func_396(4);
				}
				else
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && CAM::IS_SCREEN_FADED_IN())
					{
						GlobalFunc_1("EXT3_05");
					}
					if (iLocal_3362 == 0 && PAD::IS_CONTROL_PRESSED(2, 22))
					{
						iLocal_3362 = 1;
						GlobalFunc_5105();
					}
					if (iLocal_3362 == 1 && (MISC::GET_GAME_TIMER() - iLocal_3370) > 1000)
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						if (!GlobalFunc_199())
						{
							AUDIO::TRIGGER_MUSIC_EVENT("EXTREME3_START");
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3332);
						TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 4f, -1.5f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_FORCE_MOTION_STATE(0, -1161760501, 0);
						TASK::TASK_PARACHUTE(0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3332);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_3332);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3332);
						if (GlobalFunc_115(iLocal_3348))
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3348, 3000f);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_3348);
						}
						HUD::CLEAR_HELP(1);
						GlobalFunc_574(760, 1);
						iLocal_3363 = 1;
					}
				}
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(4f, 20f, 1);
			func_279();
			STREAMING::REMOVE_ANIM_DICT("rcmextreme3");
			break;
	}
}


void func_512()//Position - 0x59F7B
{
	if ((iLocal_3141 == 0 && iLocal_3311 == 0) && GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT_GEEUP", 8, 0, 0, 0))
	{
		iLocal_3311 = 1;
	}
}

void func_513(int iParam0)//Position - 0x59FB4
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!GlobalFunc_115(iLocal_3348))
	{
		GlobalFunc_2888(iLocal_3346);
		if (iParam0 == 1)
		{
			Var0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(501, "Ext3_Truck"), 6000f) };
			Var3 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(501, "Ext3_Truck"), 6000f) };
			iLocal_3348 = VEHICLE::CREATE_VEHICLE(iLocal_3346, Var0, Var3.f_2, 1, 1);
		}
		else
		{
			MISC::CLEAR_AREA_OF_VEHICLES(30.3356f, -795.6482f, 44.26f, 20f, 0, 0, 0, 0, 0);
			iLocal_3348 = VEHICLE::CREATE_VEHICLE(iLocal_3346, 30.3356f, -795.6482f, 44.26f, -20.62388f, 1, 1);
		}
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_3348, uLocal_3352);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3348, 1);
		if (!GlobalFunc_115(iLocal_3350))
		{
			iLocal_3350 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3348, 26, iLocal_3347, -1, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3347);
		}
		GlobalFunc_173(&uLocal_3146, 4, iLocal_3350, "EXT1HELIPILOT", 0, 1);
		if (iParam0 == 1)
		{
			while (!func_514(&iLocal_3329, 52, Local_3343, 347.5251f, "EXTREME LAUNCHER RC", 1))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (GlobalFunc_115(iLocal_3348))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3348, 1);
		if (iParam0 == 1 && GlobalFunc_115(iLocal_3329))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3329, 8, 2, 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3329, 1);
			if (iLocal_3330 == 2)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3329, iLocal_3348, 0, Local_3380, Local_3383, 0, 0, 0, 0, 2, 1);
			}
			else
			{
				TASK::TASK_GO_TO_ENTITY(iLocal_3329, iLocal_3348, 20000, 1056964608, 1073741824, 1073741824, 0);
			}
		}
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3348, 500, "Ext3_Truck", 1);
		if (iParam0 == 1)
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3348, 20000f);
		}
		else
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3348, 6000f);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_3348);
		}
		fLocal_3351 = 0.4f;
	}
}

int func_514(int iParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)//Position - 0x5A188
{
	if (GlobalFunc_6705(iParam0, iParam1, Param2, fParam5, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
				PED::SET_PED_MONEY(*iParam0, 0);
				if (iParam7 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*iParam0, 0);
				}
			}
			PED::SET_PED_NAME_DEBUG(*iParam0, sParam6);
		}
		return 1;
	}
	return 0;
}




void func_518()//Position - 0x5A2E1
{
	if (GlobalFunc_115(iLocal_3329))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_3331);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 8f, -8f, -1, 8, 0, 0, 0, 0);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 30.3356f, -795.6482f, 44.26f);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_3331);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_3329, uLocal_3331);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_3331);
		RECORDING::_0x293220DA1B46CEBC(3f, 5f, 1);
	}
}

void func_519()//Position - 0x5A34D
{
	func_564();
	switch (iLocal_3138)
	{
		case 0:
			func_288();
			GlobalFunc_9623("es_3_rcm", 1);
			iLocal_3325 = 0;
			break;
		
		case 1:
			if (func_562())
			{
				func_396(6);
			}
			else
			{
				switch (iLocal_3325)
				{
					case 0:
						GlobalFunc_8320();
						if (GlobalFunc_115(Local_3075.f_28[0]))
						{
							STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
							if (STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
							{
								GlobalFunc_173(&uLocal_3146, 0, Local_3075.f_28[0], "DOM", 0, 1);
								if (!GlobalFunc_111() && GlobalFunc_10618(&uLocal_3146, "EXT3AUD", "EXT3_RCM_LI2", 8, 0, 0, 0))
								{
									TASK::TASK_PLAY_ANIM(Local_3075.f_28[0], "rcmextreme3", "fidget_02", 8f, -8f, -1, 1, 0, 0, 0, 0);
									iLocal_3325++;
								}
							}
						}
						else
						{
							iLocal_3325 = 2;
						}
						break;
					
					case 1:
						GlobalFunc_8320();
						if ((!GlobalFunc_115(Local_3075.f_28[0]) || !GlobalFunc_111()) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3075.f_28[0], 1) < 1.5f)
						{
							GlobalFunc_4956();
							GlobalFunc_200(&uLocal_3146, 0);
							iLocal_3325++;
						}
						break;
					
					case 2:
						GlobalFunc_8320();
						if (GlobalFunc_7638(1, 1093140480, 0))
						{
							if (GlobalFunc_115(Local_3075.f_28[0]))
							{
								iLocal_3329 = Local_3075.f_28[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3329, 1, 1);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3329, "Dom", 0, GlobalFunc_4946(52), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3329, "Dom", 2, GlobalFunc_4946(52), 0);
							}
							GlobalFunc_9161();
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::_0x48621C9FCA3EBD28(1);
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							iLocal_3325++;
						}
						break;
					
					case 3:
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							GlobalFunc_9628(-63.85852f, -811.7701f, 320.2426f, -66.11872f, -809.2125f, 324.2427f, 5f, Local_3143, 0f, 1, 1, 1, 0, 0);
							GlobalFunc_10709(Local_3143, 0f, 0, 145);
							func_392(-68.69f, -810.56f, 325.35f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
							GlobalFunc_79(500, 0);
							func_527();
							iLocal_3325++;
						}
						break;
					
					case 4:
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (iLocal_3371 == 0 && CUTSCENE::GET_CUTSCENE_TIME() > 5500)
							{
								func_5(1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3329) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0)))
							{
								iLocal_3329 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0));
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3329, 1, 1);
							}
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
							{
								func_522();
							}
							if (GlobalFunc_115(iLocal_3329) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dom", 0))
							{
								func_521();
							}
						}
						else
						{
							func_5(1);
							func_368(1, 1, 1, 1);
							func_414(1, "Base jump", 0, 0, 0, 1);
							iLocal_3138 = 2;
						}
						break;
					}
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_279();
			GlobalFunc_4923(&Local_3075, 0, 1);
			break;
	}
}


void func_521()//Position - 0x5A765
{
	if (!GlobalFunc_115(iLocal_3329))
	{
		while (!func_514(&iLocal_3329, 52, Local_3334, -75.63042f, "EXTREME LAUNCHER RC", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_115(iLocal_3329))
	{
		GlobalFunc_5705(iLocal_3329, Local_3334, -75.63042f, 0, 1);
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		if (STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			TASK::TASK_PLAY_ANIM(iLocal_3329, "rcmextreme3", "idle_frantic", 1000f, -8f, -1, 9, 0, 0, 0, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3329, 0, 0);
		GlobalFunc_173(&uLocal_3146, 3, iLocal_3329, "DOM", 0, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_3329, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3329, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3329, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_3329, joaat("gadget_parachute"), 1, 0, 0);
		PED::SET_PED_PARACHUTE_TINT_INDEX(iLocal_3329, 6);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3329, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_3329, 0, 0, 0, 1, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_3329, 8, 1, 0, 0);
		iLocal_3330 = 0;
	}
}

void func_522()//Position - 0x5A863
{
	GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_3337, -50f, 0, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
	if (STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
	{
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmextreme3", "idle_frantic", 1000f, -8f, -1, 9, 0, 0, 0, 0);
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	GlobalFunc_173(&uLocal_3146, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_7632(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
}





void func_527()//Position - 0x5AA5E
{
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8));
	STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(52));
}



































int func_562()//Position - 0x5DA55
{
	struct<3> Var0;
	
	if (iLocal_3325 < 3 && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (Var0.f_2 < 320f)
		{
			return 1;
		}
	}
	return 0;
}


void func_564()//Position - 0x5DAA7
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(Local_3075.f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", Local_3075.f_28[0], 0);
		}
		else if (GlobalFunc_115(iLocal_3329))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", iLocal_3329, 0);
		}
	}
}


void func_566(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x5DB11
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}
















void func_582(int iParam0)//Position - 0x5E552
{
	func_590(1, 1);
	iLocal_3141 = 1;
	func_5(0);
	func_588(1, 0);
	switch (iParam0)
	{
		case 0:
			iLocal_3137 = 1;
			break;
		
		case 1:
			func_527();
			func_413(1, 1);
			func_5(1);
			func_522();
			func_521();
			iLocal_3137 = 2;
			if (!GlobalFunc_188())
			{
				GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME3_RESTART1");
			break;
		
		case 2:
			func_413(4, 1);
			iLocal_3330 = 2;
			func_513(1);
			iLocal_3137 = 4;
			break;
		
		case 3:
			func_413(4, 1);
			iLocal_3330 = 3;
			func_513(1);
			iLocal_3137 = 4;
			break;
	}
	if (!GlobalFunc_188())
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 12, 5000, 0, 0);
	}
	GlobalFunc_4967(0, -1, 1);
	if (iParam0 == 2 || iParam0 == 3)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
			if (GlobalFunc_115(iLocal_3348))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3348, 0, Local_3374, Local_3377, 0, 0, 0, 0, 2, 1);
			}
		}
	}
	if (iParam0 == 1)
	{
		func_522();
	}
	func_583(1, 0, 1);
	iLocal_3138 = 2;
}

void func_583(int iParam0, int iParam1, int iParam2)//Position - 0x5E69F
{
	func_368(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}





void func_588(int iParam0, int iParam1)//Position - 0x5E828
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4956();
	GlobalFunc_4948(&uLocal_3063, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	func_589();
	GlobalFunc_200(&uLocal_3146, 0);
	GlobalFunc_200(&uLocal_3146, 1);
	GlobalFunc_200(&uLocal_3146, 3);
	func_286();
	if (GlobalFunc_115(iLocal_3329))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3329, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3329, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_3329, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (GlobalFunc_115(iLocal_3348))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3348, 0);
	}
	if (iParam0 == 1)
	{
		GlobalFunc_69(&iLocal_3329);
		GlobalFunc_69(&iLocal_3350);
		GlobalFunc_7108(&iLocal_3348);
		GlobalFunc_7108(&iLocal_3354);
	}
	else
	{
		GlobalFunc_2297(&iLocal_3329, 1, 0, 1);
		GlobalFunc_2297(&iLocal_3350, 1, 0, 1);
		GlobalFunc_190(&iLocal_3348);
		GlobalFunc_190(&iLocal_3354);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(52));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3346);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_3346, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3347);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3353);
	STREAMING::REMOVE_ANIM_DICT("rcmextreme3");
	VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Ext3_Truck");
	VEHICLE::REMOVE_VEHICLE_RECORDING(501, "Ext3_Truck");
	AUDIO::TRIGGER_MUSIC_EVENT("EXTREME3_STOP");
	func_594(&Local_3075, 0, 0, 0);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_3386))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_3386);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_7632(0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	}
}

void func_589()//Position - 0x5E976
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmextreme3", "idle_frantic", 3))
		{
			TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "rcmextreme3", "idle_frantic", -1056964608);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmextreme3", "jump_fall", 3))
		{
			TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "rcmextreme3", "jump_fall", -1056964608);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_590(bool bParam0, bool bParam1)//Position - 0x5E9F3
{
	if (bParam0)
	{
		func_591(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_392(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_591(bool bParam0, int iParam1, int iParam2)//Position - 0x5EA26
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_368(iParam1, iParam2, 1, 1);
		}
	}
}



void func_594(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5EB44
{
	GlobalFunc_7198(uParam0, iParam1);
	GlobalFunc_8623(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}










void func_604()//Position - 0x5ECE0
{
	iLocal_3139 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("EXT3", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_3346 = joaat("flatbed");
	iLocal_3347 = joaat("s_m_y_pilot_01");
	iLocal_3353 = joaat("buffalo");
	uLocal_3142 = GlobalFunc_5101(1);
	iLocal_3371 = 0;
}




void func_608()//Position - 0x5EF7F
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_588(0, 1);
	}
	func_594(&Local_3075, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}




















