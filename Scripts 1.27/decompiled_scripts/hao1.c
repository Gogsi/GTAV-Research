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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	struct<3> Local_80 = { 0, 0, 0 } ;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<3> Local_95 = { 0, 0, 0 } ;
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
	var uLocal_112 = 8;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 2;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 8;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 8;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	float fLocal_142 = 0f;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 3;
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
	var uLocal_193 = 4;
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
	var uLocal_258 = 2;
	var uLocal_259 = 0;
	var uLocal_260 = 4;
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
	var uLocal_326 = 4;
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
	var uLocal_397 = 12;
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
	var uLocal_578 = 3;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	var uLocal_588 = 0;
	int iLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	struct<6> Local_606 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<12> Local_612 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	struct<250> Local_624 = { 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	struct<18> Local_877[15];
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	float fLocal_1159 = 0f;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	int iLocal_1162 = 0;
	int iLocal_1163[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_1172 = { 0, 0, 0 } ;
	struct<3> Local_1175 = { 0, 0, 0 } ;
	struct<3> Local_1178 = { 0, 0, 0 } ;
	struct<3> Local_1181 = { 0, 0, 0 } ;
	struct<3> Local_1184 = { 0, 0, 0 } ;
	struct<3> Local_1187 = { 0, 0, 0 } ;
	struct<3> Local_1190 = { 0, 0, 0 } ;
	struct<3> Local_1193 = { 0, 0, 0 } ;
	struct<3> Local_1196 = { 0, 0, 0 } ;
	struct<3> Local_1199 = { 0, 0, 0 } ;
	struct<3> Local_1202 = { 0, 0, 0 } ;
	struct<3> Local_1205 = { 0, 0, 0 } ;
	struct<3> Local_1208 = { 0, 0, 0 } ;
	struct<3> Local_1211 = { 0, 0, 0 } ;
	struct<3> Local_1214 = { 0, 0, 0 } ;
	struct<3> Local_1217 = { 0, 0, 0 } ;
	struct<3> Local_1220 = { 0, 0, 0 } ;
	struct<3> Local_1223 = { 0, 0, 0 } ;
	int iLocal_1226 = 0;
	var uLocal_1227 = 0;
	int iLocal_1228 = 0;
	var uLocal_1229 = 0;
	int iLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 4200;
	var uLocal_1233 = 3600;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 8;
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
	var uLocal_1247 = 8;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 4;
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
	var uLocal_1266 = 4;
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
	var uLocal_1281 = 4;
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
	var uLocal_1296 = 4;
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
	var uLocal_1311 = 4;
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
	var uLocal_1326 = 4;
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
	var uLocal_1341 = 4;
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
	var uLocal_1356 = 4;
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
	var uLocal_1369 = 8;
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
	var uLocal_1394 = 8;
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
	var uLocal_1420 = 2;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	char* sLocal_1429 = NULL;
	struct<3> Local_1430 = { 0, 0, 0 } ;
	struct<3> Local_1433 = { 0, 0, 0 } ;
	struct<3> Local_1436 = { 0, 0, 0 } ;
	float fLocal_1439 = 0f;
	struct<3> Local_1440 = { 0, 0, 0 } ;
	int iLocal_1443 = 0;
	int iLocal_1444 = 0;
	var uLocal_1445 = 0;
	struct<3> Local_1446 = { 0, 0, 0 } ;
	float fLocal_1449 = 0f;
	struct<3> Local_1450 = { 0, 0, 0 } ;
	float fLocal_1453 = 0f;
	int iLocal_1454 = 0;
	int iLocal_1455 = 0;
	char* sLocal_1456 = NULL;
	var uLocal_1457 = 0;
	struct<3> Local_1458 = { 0, 0, 0 } ;
	struct<3> Local_1461 = { 0, 0, 0 } ;
	float fLocal_1464 = 0f;
	var uLocal_1465 = 0;
	int iLocal_1466 = 0;
	int iLocal_1467 = 0;
	var uLocal_1468 = 16;
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
	int iLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	struct<61> Local_1639 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1700 = 0;
	int iLocal_1701 = 0;
	int iLocal_1702 = 0;
	char* sLocal_1703 = NULL;
	var uLocal_1704 = 0;
	struct<3> Local_1705 = { 0, 0, 0 } ;
	struct<3> Local_1708 = { 0, 0, 0 } ;
	struct<3> Local_1711 = { 0, 0, 0 } ;
	struct<3> Local_1714 = { 0, 0, 0 } ;
	struct<3> Local_1717 = { 0, 0, 0 } ;
	float fLocal_1720 = 0f;
	struct<3> Local_1721 = { 0, 0, 0 } ;
	float fLocal_1724 = 0f;
	struct<3> Local_1725 = { 0, 0, 0 } ;
	struct<3> Local_1728 = { 0, 0, 0 } ;
	float fLocal_1731 = 0f;
	struct<3> Local_1732 = { 0, 0, 0 } ;
	struct<3> Local_1735 = { 0, 0, 0 } ;
	float fLocal_1738 = 0f;
	struct<3> Local_1739 = { 0, 0, 0 } ;
	struct<3> Local_1742 = { 0, 0, 0 } ;
	float fLocal_1745 = 0f;
	struct<3> Local_1746 = { 0, 0, 0 } ;
	struct<3> Local_1749 = { 0, 0, 0 } ;
	float fLocal_1752 = 0f;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	float fLocal_1755 = 0f;
	var uLocal_1756 = 0;
	struct<3> Local_1757 = { 0, 0, 0 } ;
	struct<3> Local_1760 = { 0, 0, 0 } ;
	float fLocal_1763 = 0f;
	var uLocal_1764 = 0;
	char* sLocal_1765 = NULL;
	int iLocal_1766 = 0;
	var uLocal_1767 = 0;
	int iLocal_1768 = 0;
	bool bLocal_1769 = 0;
	int iLocal_1770 = 0;
	bool bLocal_1771 = 0;
	int iLocal_1772 = 0;
	int iLocal_1773 = 0;
	int iLocal_1774 = 0;
	int iLocal_1775 = 0;
	bool bLocal_1776 = 0;
	int iLocal_1777 = 0;
	int iLocal_1778 = 0;
	int iLocal_1779 = 0;
	int iLocal_1780 = 0;
	int iLocal_1781 = 0;
	struct<3> Local_1782 = { 0, 0, 0 } ;
	struct<3> Local_1785 = { 0, 0, 0 } ;
	float fLocal_1788 = 0f;
	struct<3> Local_1789 = { 0, 0, 0 } ;
	struct<3> Local_1792 = { 0, 0, 0 } ;
	float fLocal_1795 = 0f;
	struct<3> Local_1796 = { 0, 0, 0 } ;
	struct<3> Local_1799 = { 0, 0, 0 } ;
	float fLocal_1802 = 0f;
	int iLocal_1803 = 0;
	var uLocal_1804 = 16;
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
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_79 = GlobalFunc_4946(53);
	iLocal_86 = 1;
	iLocal_87 = 65;
	iLocal_88 = 49;
	iLocal_89 = 64;
	Local_95 = { 500f, 500f, 500f };
	fLocal_142 = ((0.05f + 0.275f) - 0.01f);
	iLocal_586 = -1;
	iLocal_587 = -1;
	iLocal_589 = 1;
	iLocal_604 = -1;
	iLocal_1152 = -1;
	iLocal_1153 = -1;
	iLocal_1160 = -1;
	uLocal_1227 = AUDIO::GET_SOUND_ID();
	sLocal_1429 = "random@street_race";
	iLocal_1443 = 1;
	iLocal_1444 = 1;
	iLocal_1454 = -1;
	Local_1458 = { 0f, 0f, 0f };
	Local_1461 = { 0f, 0f, 0f };
	fLocal_1464 = 0f;
	uLocal_1637 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_1638 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_1703 = "hao1_Hao";
	Local_1705 = { -144.9697f, -1550.709f, 33.48785f };
	Local_1708 = { -59.64f, -1808.68f, 26.76f };
	Local_1711 = { -66.36402f, -1812.87f, 23.7651f };
	Local_1714 = { -46.69002f, -1790.171f, 29.89348f };
	Local_1717 = { -79.29f, -1264.51f, 28.74f };
	fLocal_1720 = 270.3906f;
	Local_1721 = { -72.4774f, -1262.76f, 27.989f };
	fLocal_1724 = 349.5845f;
	Local_1725 = { -80.26438f, -1262.475f, 27.01488f };
	Local_1728 = { -64.89045f, -1262.256f, 30.03148f };
	fLocal_1731 = 11f;
	Local_1732 = { -115.6628f, -1261.453f, 27.1562f };
	Local_1735 = { -85.77514f, -1260.508f, 30.29771f };
	fLocal_1738 = 8f;
	Local_1739 = { -91.50914f, -1267.9f, 27.14873f };
	Local_1742 = { -91.27182f, -1278.836f, 29.15185f };
	fLocal_1745 = 9f;
	Local_1746 = { -99.9222f, -1101.088f, 23.9075f };
	Local_1749 = { -109.291f, -1385.995f, 30.31357f };
	fLocal_1752 = 40f;
	fLocal_1755 = 0f;
	Local_1757 = { -137.7f, -1551f, 35.3f };
	Local_1760 = { -144.1f, -1558.7f, 33.6f };
	fLocal_1763 = 6f;
	sLocal_1765 = "special_ped@hao@base";
	iLocal_1768 = 1;
	bLocal_1769 = true;
	iLocal_1770 = 1;
	iLocal_1772 = 1;
	iLocal_1773 = 1;
	iLocal_1774 = 1;
	iLocal_1775 = 1;
	iLocal_1777 = 1;
	Local_1782 = { -189.5714f, -1613.517f, 31.75359f };
	Local_1785 = { -131.6942f, -1538.062f, 34.25936f };
	fLocal_1788 = 20f;
	Local_1789 = { -254.9687f, -1422.749f, 20.33752f };
	Local_1792 = { 75.87347f, -1692.709f, 38.14151f };
	fLocal_1795 = 500f;
	Local_1796 = { -134.4424f, -1532.814f, 34.24104f };
	Local_1799 = { -225.4203f, -1456.149f, 29.32193f };
	fLocal_1802 = 5f;
	Local_1639 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_1639);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_640();
	}
	GlobalFunc_5226(24);
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_631(&Local_1639))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_1639, 0, 1);
		Global_68490 = 0;
	}
	if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bTriggeredHao1 == 0)
	{
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bTriggeredHao1 = 1;
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_SW", 0);
		func_614(Local_1639.f_9, 0, 0, 0, 0, 0);
		SYSTEM::WAIT(0);
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_1700)
			{
				case 0:
					func_566();
					break;
				
				case 1:
					func_565();
					break;
				
				case 2:
					func_543();
					break;
				
				case 3:
					func_509();
					break;
				
				case 4:
					func_482();
					break;
				
				case 5:
					func_479();
					break;
				
				case 6:
					func_459();
					break;
				
				case 7:
					func_366();
					break;
				
				case 8:
					func_266();
					break;
				
				case 9:
					func_34();
					break;
				
				case 10:
					func_26();
					break;
				}
		}
		func_12();
		func_1();
	}
}

void func_1()//Position - 0x470
{
	int iVar0;
	
	if ((iLocal_1700 == 3 || iLocal_1700 == 4) || iLocal_1700 == 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < Local_624.f_249)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_3) && ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_6))
			{
				if (PED::IS_PED_INJURED(Local_877[iVar0 /*18*/].f_3) || !GlobalFunc_4947(Local_877[iVar0 /*18*/].f_6))
				{
					iLocal_1700 = 10;
					iLocal_1701 = 0;
					iLocal_600 = 5;
					iLocal_599 = 1;
				}
				else if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_877[iVar0 /*18*/].f_3, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_8324(Local_877[iVar0 /*18*/].f_3, 1, 0, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_877[iVar0 /*18*/].f_6, PLAYER::PLAYER_PED_ID(), 1)) || (PED::IS_PED_BEING_JACKED(Local_877[iVar0 /*18*/].f_3) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))) || GlobalFunc_7191(Local_877[iVar0 /*18*/].f_6)) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_877[iVar0 /*18*/].f_6)))
				{
					iLocal_1700 = 10;
					iLocal_1701 = 0;
					iLocal_600 = 5;
					iLocal_599 = 1;
				}
			}
			iVar0++;
		}
	}
}











void func_12()//Position - 0xA4D
{
	if (iLocal_1700 != 10 && iLocal_1700 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1639.f_28[0]))
		{
			if (PED::IS_PED_INJURED(Local_1639.f_28[0]))
			{
				iLocal_1700 = 10;
				iLocal_1701 = 0;
				iLocal_1702 = 2;
			}
			else if (func_14(Local_1639.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || (PED::IS_PED_BEING_JACKED(Local_1639.f_28[0]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())))
			{
				iLocal_1700 = 10;
				iLocal_1701 = 0;
				iLocal_1702 = 1;
			}
		}
		if (((iLocal_1700 == 3 || iLocal_1700 == 4) || iLocal_1700 == 5) && GlobalFunc_4947(Local_1639.f_35[0]))
		{
			if (GlobalFunc_6451(Local_1639.f_35[0], &uLocal_1754, &uLocal_1756, &uLocal_1753, &fLocal_1755, 5, 1082130432) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1639.f_35[0], 1))
			{
				iLocal_1700 = 10;
				iLocal_1701 = 0;
				iLocal_1702 = 1;
			}
		}
		else if (GlobalFunc_4947(Local_1639.f_35[0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1639.f_35[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1639.f_35[0]);
			}
		}
	}
}


int func_14(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xC37
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_15(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, float fParam1)//Position - 0xCF2
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_16(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_16(int iParam0, float fParam1)//Position - 0xD68
{
	return func_17(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_17(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD80
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_23(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_20();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_20()//Position - 0x1032
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_23(int iParam0, int iParam1)//Position - 0x1128
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



void func_26()//Position - 0x11D6
{
	char* sVar0;
	
	switch (iLocal_1701)
	{
		case 0:
			func_31(1);
			GlobalFunc_571(1, 844);
			AUDIO::STOP_AUDIO_SCENE("STREET_RACE_DURING_RACE");
			if (ENTITY::DOES_ENTITY_EXIST(Local_1639.f_28[0]))
			{
				if (PED::IS_PED_INJURED(Local_1639.f_28[0]))
				{
					iLocal_1702 = 2;
				}
			}
			if (iLocal_600 == 5)
			{
				switch (iLocal_599)
				{
					case 1:
						sVar0 = "RACES_R_INJ";
						break;
					
					case 2:
						sVar0 = "RACES_R_DEAD";
						break;
					
					case 3:
						sVar0 = "RACES_WRECK";
						break;
					
					case 4:
						sVar0 = "RACES_ABAND";
						break;
					
					case 5:
						sVar0 = "RACES_MISS";
						break;
					
					case 6:
						sVar0 = "RACES_COPS";
						break;
				}
			}
			else
			{
				switch (iLocal_1702)
				{
					case 0:
						break;
					
					case 2:
						sVar0 = "HAO1_FAIL1";
						break;
					
					case 1:
						sVar0 = "HAO1_FAIL2";
						break;
					
					case 3:
						sVar0 = "HAO1_FAIL3";
						break;
					}
			}
			if (iLocal_1702 == 0 && iLocal_599 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sVar0, 1);
			}
			iLocal_1701 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_640();
			}
			break;
	}
}





void func_31(int iParam0)//Position - 0x1419
{
	int iVar0;
	
	func_33();
	if (iParam0 == 1 && HUD::DOES_BLIP_EXIST(Local_80.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_80.f_1));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		GlobalFunc_846(&(Local_877[iVar0 /*18*/].f_7));
		iVar0++;
	}
}


void func_33()//Position - 0x1489
{
	if (HUD::DOES_BLIP_EXIST(iLocal_1154))
	{
		HUD::REMOVE_BLIP(&iLocal_1154);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_1155))
	{
		HUD::REMOVE_BLIP(&iLocal_1155);
	}
	if (iLocal_1156 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(iLocal_1156);
	}
}

void func_34()//Position - 0x14C1
{
	switch (iLocal_1701)
	{
		case 0:
			func_264(0);
			func_263();
			func_31(1);
			if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				func_65();
			}
			else
			{
				iLocal_1701 = 1;
			}
			break;
		
		case 1:
			iLocal_1778 = MISC::GET_GAME_TIMER() + 2000;
			iLocal_1701 = 3;
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() > iLocal_1778)
			{
				if (GlobalFunc_7168(1324777792, 3, 2, 53, 1000, 5000, -1, 14, -1, 0, 1))
				{
					GlobalFunc_10829(1, 1, 200, 1, 1);
					func_65();
				}
			}
			break;
	}
}































void func_65()//Position - 0x2794
{
	GlobalFunc_7610(140, 0, 0);
	func_258(843, Local_612.f_10);
	GlobalFunc_2196(0, 8, 1);
	MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 0);
	MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 1);
	func_66(106, 1);
	func_640();
}

void func_66(int iParam0, bool bParam1)//Position - 0x27DF
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
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2832(&uVar1, GlobalFunc_8310());
	func_87();
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





















void func_87()//Position - 0x32ED
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
					func_88(iVar1, 14, iVar2);
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

int func_88(int iParam0, int iParam1, int iParam2)//Position - 0x33AE
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
				func_88(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_88(iParam0, 14, uVar20[iVar18]))
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
		GlobalFunc_11274(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11274(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}










































































































































































void func_258(int iParam0, var uParam1)//Position - 0x26960
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (Global_66846[iVar0 /*9*/] == iParam0)
		{
			Global_66846[iVar0 /*9*/].f_1 = uParam1;
			return;
		}
		iVar0++;
	}
}





void func_263()//Position - 0x271CD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		GlobalFunc_846(&(Local_877[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

void func_264(int iParam0)//Position - 0x271F5
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 < Local_624.f_249)
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_877[iVar0 /*18*/].f_5, 0);
		}
		if (iParam0 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_3))
			{
				PED::DELETE_PED(&(Local_877[iVar0 /*18*/].f_3));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_6))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_877[iVar0 /*18*/].f_6));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_877[iVar0 /*18*/].f_3))
				{
					PED::SET_PED_KEEP_TASK(Local_877[iVar0 /*18*/].f_3, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_877[iVar0 /*18*/].f_6))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_877[iVar0 /*18*/].f_3, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_877[iVar0 /*18*/].f_6, 0);
						if (Local_606 == 8)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_877[iVar0 /*18*/].f_6, 380.1007f, -3498.078f, -29.3627f, 20f, 0, ENTITY::GET_ENTITY_MODEL(Local_877[iVar0 /*18*/].f_6), 786603, 10f, 5f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_877[iVar0 /*18*/].f_6, 20f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_877[iVar0 /*18*/].f_3, uVar1);
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_877[iVar0 /*18*/].f_3, Local_877[iVar0 /*18*/].f_6, 20f, 786603);
						}
					}
				}
				GlobalFunc_2297(&(Local_877[iVar0 /*18*/].f_3), 1, 0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_877[iVar0 /*18*/].f_6))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_877[iVar0 /*18*/].f_6, 0);
					VEHICLE::SET_VEHICLE_STRONG(Local_877[iVar0 /*18*/].f_6, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_877[iVar0 /*18*/].f_6, 0);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_877[iVar0 /*18*/].f_6, true);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_877[iVar0 /*18*/].f_6));
			}
		}
		iVar0++;
	}
}


void func_266()//Position - 0x27434
{
	if (Local_612.f_8 == 1 && Local_612.f_6 < 3)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	}
	HUD::_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME();
	GlobalFunc_187();
	switch (iLocal_1701)
	{
		case 0:
			AUDIO::STOP_SOUND(uLocal_1227);
			iLocal_602 = 0;
			iLocal_1467 = -1;
			GlobalFunc_159("HAO1_LAP_HELP", -1);
			iLocal_1150 = Local_612.f_11;
			iLocal_1151 = MISC::GET_GAME_TIMER() + 7500;
			func_354(1);
			GlobalFunc_6452(1, 0);
			GlobalFunc_6452(7, 0);
			iLocal_1775 = 1;
			iLocal_1774 = 1;
			func_351();
			iLocal_1780 = 0;
			iLocal_1781 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_1803 = 0;
			GlobalFunc_574(844, 0);
			iLocal_1701 = 1;
			break;
		
		case 1:
			func_331(1, 1);
			func_330();
			func_313();
			func_307();
			func_306();
			func_305();
			func_303();
			if (iLocal_605 > MISC::GET_GAME_TIMER())
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
			if (func_302() && Local_612.f_11 > 1)
			{
				iLocal_1702 = 3;
				iLocal_1700 = 10;
				iLocal_1701 = 0;
				return;
			}
			func_299();
			func_298();
			func_284();
			if (func_269() && func_354(1))
			{
				iLocal_1701 = 3;
				AUDIO::STOP_AUDIO_SCENE("STREET_RACE_DURING_RACE");
				AUDIO::START_AUDIO_SCENE("STREET_RACE_OUTRO");
			}
			break;
		
		case 3:
			RECORDING::_0x293220DA1B46CEBC(10f, 2f, 4);
			if (Local_612.f_11 == 1)
			{
				GlobalFunc_571(1, 844);
				iLocal_1700 = 9;
			}
			else
			{
				iLocal_1702 = 3;
				iLocal_1700 = 10;
			}
			iLocal_1701 = 0;
			break;
	}
	func_268();
	func_267();
}

void func_267()//Position - 0x275AD
{
	if (iLocal_600 == 5)
	{
		iLocal_1700 = 10;
		iLocal_1701 = 0;
	}
}

void func_268()//Position - 0x275C5
{
	switch (iLocal_603)
	{
		case 0:
			if (iLocal_604 > 0)
			{
				if (MISC::GET_GAME_TIMER() < iLocal_604)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 71))
					{
						if (GlobalFunc_4947(Local_80.x) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x))
						{
							if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Local_80.x)))
							{
								AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_80.x, 1);
							}
							GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, 0);
							iLocal_604 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_603 = 1;
						}
					}
				}
				else
				{
					iLocal_603 = 2;
				}
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > iLocal_604)
			{
				if (GlobalFunc_4947(Local_80.x) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Local_80.x)))
					{
						AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_80.x, 0);
					}
					iLocal_603 = 2;
				}
			}
			else if (GlobalFunc_4947(Local_80.x) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_80.x, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			break;
	}
}

int func_269()//Position - 0x276B9
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			iLocal_599 = 6;
			iLocal_600 = 5;
			iLocal_601 = 0;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.x))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_80.x, 0) && !func_283())
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, 0))
			{
				func_281();
				func_272();
				return 1;
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_599 = 4;
				iLocal_600 = 5;
				iLocal_601 = 0;
			}
			else
			{
				func_31(0);
				if (GlobalFunc_74("RACES_RHELP") && MISC::GET_GAME_TIMER() > iLocal_1425)
				{
					HUD::CLEAR_HELP(1);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_80.f_1) && !(Local_606.f_1 == 2 && (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 0, 1000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 1, 1000))))
				{
					Local_80.f_1 = HUD::ADD_BLIP_FOR_ENTITY(Local_80.x);
					HUD::SET_BLIP_AS_FRIENDLY(Local_80.f_1, 1);
					HUD::SET_BLIP_SCALE(Local_80.f_1, 1f);
					if (Local_606.f_1 == 3)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MGSR_FELL_OFF");
					}
					if (Local_80.f_2 == 0)
					{
						Local_80.f_2 = 1;
						switch (Local_606.f_1)
						{
							case 1:
								GlobalFunc_164("BIKE_BACK", 7500, 1);
								break;
							
							case 2:
								GlobalFunc_164("CAR_BACK", 7500, 1);
								break;
							
							case 3:
								GlobalFunc_164("SEA_BACK", 7500, 1);
								break;
							}
						}
					}
			}
		}
		else
		{
			func_281();
			iLocal_599 = 3;
			iLocal_600 = 5;
			iLocal_601 = 0;
		}
	}
	return 0;
}



void func_272()//Position - 0x2785A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 272, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iLocal_1466 = 1;
				iLocal_602 = 3;
			}
			if (!GlobalFunc_74("RACES_RHELP"))
			{
				if (!func_280())
				{
					GlobalFunc_Display_Help_Text("RACES_RHELP");
					iLocal_1425 = MISC::GET_GAME_TIMER() + 1000;
				}
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 3, 60000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 0, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 1, 3000))
				{
					GlobalFunc_Display_Help_Text("RACES_RHELP");
					iLocal_1425 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1425)
			{
				if ((((func_280() || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 3, 60000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 0, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 1, 3000))
				{
					HUD::CLEAR_HELP(1);
				}
			}
		}
	}
	if ((PAD::IS_CONTROL_PRESSED(0, 75) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75)) || iLocal_1466 == 1)
	{
		switch (iLocal_602)
		{
			case 0:
				iLocal_1467 = MISC::GET_GAME_TIMER();
				iLocal_602 = 1;
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_1467) > 500)
				{
					iLocal_1467 = MISC::GET_GAME_TIMER();
					iLocal_602 = 2;
				}
				break;
			
			case 2:
				GlobalFunc_5824((MISC::GET_GAME_TIMER() - iLocal_1467), 1500, "RACES_RMETER", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_1467) >= 400)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_1467) >= 1500)
				{
					iLocal_602 = 3;
				}
				break;
			
			case 3:
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_80.x))
				{
					if (Local_612.f_6 > 0)
					{
						Var8 = { Local_624[(Local_612.f_6 - 1) /*3*/] };
					}
					else
					{
						Var8 = { Local_624.f_181[Local_624.f_249 /*3*/] };
					}
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1456, Var8, &iVar0);
					iVar1 = iVar0 + 1;
					if (iVar1 >= iLocal_1633)
					{
						iVar1 = 0;
					}
					TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, iVar0, &Var2);
					TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, iVar1, &Var5);
					if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var2, 5f) || GlobalFunc_713(Local_80.x, Var2, 1) < 5f)
					{
						ENTITY::SET_ENTITY_COORDS(Local_80.x, Var2, 1, 0, 0, 1);
						GlobalFunc_5971(Local_80.x, Var5);
						VEHICLE::SET_VEHICLE_FIXED(Local_80.x);
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, -1);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (GlobalFunc_74("RACES_RHELP"))
						{
							HUD::CLEAR_HELP(1);
						}
						iLocal_602 = 4;
					}
				}
				break;
			
			case 4:
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (!PAD::IS_CONTROL_PRESSED(0, 75) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
				{
					PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
					iLocal_1467 = -1;
					iLocal_1466 = 0;
					iLocal_602 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_1467 = -1;
		iLocal_1466 = 0;
		iLocal_602 = 0;
	}
}








int func_280()//Position - 0x27DA5
{
	if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
	{
		if (Local_606.f_1 == 2 || Local_606.f_1 == 1)
		{
			return 0;
		}
		else if (iLocal_1454 >= 0)
		{
			iLocal_1454 = -1;
		}
	}
	else if (Local_606.f_1 == 3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			iLocal_1454 = -1;
			return 1;
		}
		if (iLocal_1454 < 0)
		{
			iLocal_1454 = MISC::GET_GAME_TIMER() + 2000;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_1454)
		{
			return 0;
		}
	}
	return 1;
}

void func_281()//Position - 0x27E2D
{
	if (HUD::DOES_BLIP_EXIST(Local_80.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_80.f_1));
		if (Local_606.f_1 == 3)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MGSR_BACK_ON");
		}
	}
	if ((GlobalFunc_4406("CAR_BACK", 0, 0) || GlobalFunc_4406("BIKE_BACK", 0, 0)) || GlobalFunc_4406("SEA_BACK", 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
}


int func_283()//Position - 0x27EA9
{
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, 0) && Local_606.f_1 == 2)
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 0, 1000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_80.x, 1, 1000))
		{
			return 1;
		}
	}
	return 0;
}

void func_284()//Position - 0x27EEE
{
	if (MISC::GET_GAME_TIMER() > iLocal_1781)
	{
		if ((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0])) && GlobalFunc_155(Local_1639.f_28[0], PLAYER::PLAYER_PED_ID(), 15f))
		{
			if (GlobalFunc_10607(&uLocal_1804, "HAO1AU", "HAO1_HSPC", 8, 0, 0, 0))
			{
				iLocal_1781 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}














void func_298()//Position - 0x28611
{
	if (MISC::GET_GAME_TIMER() > iLocal_1780)
	{
		if ((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0])) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1639.f_28[0], PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_10607(&uLocal_1804, "HAO1AU", "HAO1_HRAM", 8, 0, 0, 0))
			{
				iLocal_1780 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_299()//Position - 0x28675
{
	if (MISC::GET_GAME_TIMER() > iLocal_1803)
	{
		if (func_301())
		{
			GlobalFunc_565(845, 1, 0);
			iLocal_1803 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
}


int func_301()//Position - 0x2874B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		if (GlobalFunc_4947(Local_877[iVar0 /*18*/].f_6))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_80.x, Local_877[iVar0 /*18*/].f_6))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_302()//Position - 0x28792
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		if (Local_877[iVar0 /*18*/].f_9 > Local_624.f_247)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_303()//Position - 0x287C8
{
	if (Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.bSpecialAbilityHelp == 0)
	{
		if ((Local_612.f_6 >= 4 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && GlobalFunc_Is_Mission_Retry())
		{
			if (func_304() > 0)
			{
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					GlobalFunc_159("HAO1_ABILITY_HELP_KM", -1);
				}
				else
				{
					GlobalFunc_159("HAO1_ABILITY_HELP", -1);
				}
			}
			Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.bSpecialAbilityHelp = 1;
		}
	}
}

int func_304()//Position - 0x28829
{
	var uVar0;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

void func_305()//Position - 0x2887E
{
	if ((iLocal_1774 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iSlipstreamHelpCount < 3)
	{
		GlobalFunc_159("FM_IHELP_SLP", -1);
		iLocal_1774 = 0;
		Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iSlipstreamHelpCount++;
	}
}

void func_306()//Position - 0x288C7
{
	if (iLocal_1775 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (Local_612.f_11 <= 3)
		{
			GlobalFunc_159("HAO1_LOOK_HELP", -1);
			iLocal_1775 = 0;
		}
	}
}

void func_307()//Position - 0x288F5
{
	if (GlobalFunc_8315() == 1)
	{
		if (Local_612.f_11 < iLocal_1150)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_1151 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, 0))
			{
				GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "FRANKLIN_NORMAL", 10);
				iLocal_1150 = Local_612.f_11;
				iLocal_1151 = MISC::GET_GAME_TIMER() + 7500;
			}
			else
			{
				iLocal_1150 = Local_612.f_11;
			}
		}
		else if (Local_612.f_11 > iLocal_1150)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_1151 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, 0))
			{
				GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "FRANKLIN_NORMAL", 10);
				iLocal_1150 = Local_612.f_11;
				iLocal_1151 = MISC::GET_GAME_TIMER() + 7500;
			}
			else
			{
				iLocal_1150 = Local_612.f_11;
			}
		}
		if (GlobalFunc_4947(Local_80.x))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_1151 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, 0))
			{
				if (func_301())
				{
					GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_CRASH", "FRANKLIN_NORMAL", 10);
					iLocal_1151 = MISC::GET_GAME_TIMER() + 7500;
				}
			}
		}
	}
	if (Local_606.f_1 != 3)
	{
		if (GlobalFunc_630(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_1152 < 0)
			{
				iLocal_1152 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000));
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1152)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1153, "DISTANT_RACERS", Local_877[func_308() /*18*/].f_6, "ROAD_RACE_SOUNDSET", 0, 0);
				iLocal_1152 = -1;
			}
		}
		else if (iLocal_1152 > 0)
		{
			iLocal_1152 = -1;
		}
	}
}

int func_308()//Position - 0x28A61
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		if (GlobalFunc_4947(Local_877[iVar0 /*18*/].f_6))
		{
			fVar1 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_877[iVar0 /*18*/].f_6, 1);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}





void func_313()//Position - 0x28D62
{
	if ((((Local_606 == 5 || Local_606 == 6) || Local_606 == 7) || Local_606 == 8) || Local_606 == 1)
	{
		GlobalFunc_1470();
		func_328((MISC::GET_GAME_TIMER() - Local_612.f_5), 0, "", Local_612.f_11, Local_624.f_249 + 1, "", 0, 1, Local_612.f_6, Local_612.f_7, "", 1, 1, -1, "", -1f, 1, -1f, iLocal_586, 0, -1, -1, 0);
	}
	else
	{
		func_327();
		GlobalFunc_449(1, -1);
		if (PAD::IS_CONTROL_PRESSED(0, 20))
		{
			if (!Global_1573535)
			{
				Global_1573535 = 1;
			}
		}
		else if (Global_1573535)
		{
			Global_1573535 = 0;
		}
		GlobalFunc_1470();
		func_314((MISC::GET_GAME_TIMER() - Local_612.f_5), 0, "", Local_612.f_8, Local_624.f_247, "", Local_612.f_11, Local_624.f_249 + 1, "", 0, 1, Local_612.f_6, Local_612.f_7, "", 1, -1, -1, "", 6, Local_612.f_10, "", (MISC::GET_GAME_TIMER() - Local_612.f_9), "", 0, 1, -1, "", -1f, 1, 1, -1f, iLocal_586, 0, -1, -1, 0, 0);
	}
}

void func_314(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, char* sParam17, int iParam18, int iParam19, char* sParam20, int iParam21, char* sParam22, int iParam23, bool bParam24, int iParam25, char* sParam26, float fParam27, int iParam28, int iParam29, float fParam30, int iParam31, bool bParam32, int iParam33, int iParam34, char* sParam35, bool bParam36)//Position - 0x28E85
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	char* sVar11;
	
	if (bParam24)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam34 != -1)
	{
		GlobalFunc_5277(iParam34, "TIMER_CHALLTIME", iParam9, iVar0, iParam25, 0, 10, 0, 1, 0, 0, 0, 0, 0);
	}
	if ((Global_1312323 == 1 || Global_1312330 == 1) || Global_1312319.f_3 == 1)
	{
		if (Global_1312323 == 1)
		{
			GlobalFunc_5234(1, "HUD_SPIKES", -1, 1, 9, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, 1, 0);
		}
		else if (Global_1312330 == 1)
		{
			GlobalFunc_5234(1, "HUD_ROCKET", -1, 1, 9, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, 2, 0);
		}
		else if (Global_1312319.f_3 == 1)
		{
			GlobalFunc_5234(1, "HUD_BOOSTS", -1, 1, 9, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, 3, 0);
		}
	}
	if (fParam27 > -1f)
	{
		GlobalFunc_5234(0, "", iParam25, iParam28, 10, 0, sParam26, 1, fParam27, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam15 > -1)
	{
		sVar1 = sParam17;
		if (GlobalFunc_1561(sVar1))
		{
			sVar1 = "TIM_DAMAGE";
		}
		GlobalFunc_5824(iParam15, iParam16, sVar1, iParam18, iParam25, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
	}
	if (!bParam32 || GlobalFunc_1007())
	{
		if (iParam6 > -1 && iParam7 > 0)
		{
			sVar2 = sParam8;
			if (GlobalFunc_1561(sVar2))
			{
				sVar2 = "TIM_POSIT";
			}
			GlobalFunc_5853(iParam6, iParam7, sVar2, iParam10, iParam25, 7, 0, 0, 0);
		}
	}
	if (iParam3 > -1)
	{
		sVar3 = sParam5;
		if (GlobalFunc_1561(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam3 = iParam3;
		iParam4 = iParam4;
		if (Global_1573535)
		{
			if (GlobalFunc_519())
			{
				GlobalFunc_5852(iParam3, iParam4, sVar3, iParam25, 1, 8, 0, 0, 0, 0, 0);
			}
		}
	}
	if (iParam11 > -1 && iParam12 > -1)
	{
		sVar4 = sParam13;
		if (GlobalFunc_1561(sVar4))
		{
			sVar4 = "TIM_CHECKPOIN";
		}
		iParam14 = iParam14;
		if (Global_1573535)
		{
			GlobalFunc_5853(iParam11, iParam12, sVar4, iParam14, iParam25, 7, 0, 0, 0);
		}
	}
	if (fParam30 > -1f)
	{
		sVar5 = "TIM_DISTANCE";
		sVar6 = "FMMC_LENGTHM";
		GlobalFunc_5234(0, sVar5, -1, 1, 7, 0, sVar6, 1, fParam30, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam19 > -1)
	{
		sVar7 = sParam20;
		if (GlobalFunc_1561(sVar7))
		{
			sVar7 = "TIMER_BESLAP";
		}
	}
	if (((Global_1602437.f_25920 != 1 && Global_1602437.f_25920 != 3) && Global_1602437.f_25920 != 5) && Global_1602437.f_25920 != 7)
	{
		if (iParam21 > -1)
		{
			sVar8 = sParam22;
			if (GlobalFunc_1561(sVar8))
			{
				sVar8 = "TIMER_CURLAP";
			}
			GlobalFunc_5277(iParam21, sVar8, 0, 1, iParam25, iParam23, 6, 0, iParam29, 0, 0, 0, 0, 0);
		}
	}
	if (GlobalFunc_1561(sVar9))
	{
		sVar9 = GlobalFunc_2661(iParam1);
	}
	if (!bParam36)
	{
		if ((bParam32 || Global_1573535) || GlobalFunc_1663() == 2)
		{
			if (bParam32)
			{
				if (Global_1573535 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam35))
				{
					GlobalFunc_5277(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, 0, 0, 0);
				}
				else if (iParam31 <= 0)
				{
					GlobalFunc_5277(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_5277(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0);
				}
			}
			else if (GlobalFunc_1663() == 2 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam35))
			{
				GlobalFunc_5277(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, 0, 0, 0);
			}
			else if (iParam31 <= 0)
			{
				GlobalFunc_5277(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_5277(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0);
			}
		}
	}
	else if (Global_1573535 || GlobalFunc_1663() == 2)
	{
		if (iParam19 <= 0)
		{
			GlobalFunc_5277(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0);
		}
		else
		{
			GlobalFunc_5277(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0);
		}
	}
	sVar10 = sParam2;
	if (GlobalFunc_1561(sVar10))
	{
		sVar10 = "TIMER_TIME_RCE";
	}
	if (iParam0 > -1)
	{
		GlobalFunc_5277(iParam0, sVar10, iParam9, iVar0, iParam25, 0, 4, 0, 1, 0, 0, 0, 0, 0);
	}
	if (GlobalFunc_1561(sVar11))
	{
		sVar11 = "TIMER_CHALLTIME";
	}
	iParam33 = iParam33;
}













void func_327()//Position - 0x298C0
{
	switch (iLocal_1228)
	{
		case 1:
			uLocal_1229 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1229))
			{
				iLocal_1228 = 2;
			}
			break;
		
		case 2:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1229, "SHOW_SHARD_MIDSIZED_MESSAGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BM_LAP_STR");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("BM_LAP");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Local_612.f_8);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Local_624.f_247);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			iLocal_1230 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_1228 = 3;
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() < (iLocal_1230 - 500))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1229))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_1229, 255, 255, 255, 255, 0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				}
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1229, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_1228 = 4;
			}
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() < iLocal_1230)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1229))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_1229, 255, 255, 255, 255, 0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				}
			}
			else
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1229))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1229);
				}
				iLocal_1228 = 0;
			}
			break;
	}
}

void func_328(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, char* sParam22)//Position - 0x299F0
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	
	if (bParam12)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam21 != -1)
	{
		GlobalFunc_5277(iParam21, "TIMER_CHALLTIME", iParam6, iVar0, iParam13, 0, 10, 0, 1, 0, 0, 0, 0, 0);
	}
	if ((Global_1312323 == 1 || Global_1312330 == 1) || Global_1312319.f_3 == 1)
	{
		if (Global_1312323 == 1)
		{
			GlobalFunc_5234(1, "HUD_SPIKES", -1, 1, 9, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, 1, 0);
		}
		else if (Global_1312330 == 1)
		{
			GlobalFunc_5234(1, "HUD_ROCKET", -1, 1, 9, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, 2, 0);
		}
		else if (Global_1312319.f_3 == 1)
		{
			GlobalFunc_5234(1, "HUD_BOOSTS", -1, 1, 9, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, 3, 0);
		}
	}
	if (fParam15 > -1f)
	{
		GlobalFunc_5234(0, "", iParam13, iParam16, 8, 0, sParam14, 1, fParam15, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (!bParam19 || GlobalFunc_1007())
	{
		if (iParam3 > -1 && iParam4 > 0)
		{
			sVar1 = sParam5;
			if (GlobalFunc_1561(sVar1))
			{
				sVar1 = "TIM_POSIT";
			}
			GlobalFunc_5853(iParam3, iParam4, sVar1, iParam7, iParam13, 7, 0, 0, 0);
		}
	}
	if (iParam8 > -1 && iParam9 > -1)
	{
		sVar2 = sParam10;
		if (GlobalFunc_1561(sVar2))
		{
			sVar2 = "TIM_CHECKPOIN";
		}
		iParam11 = iParam11;
		if (Global_1573535)
		{
			GlobalFunc_5853(iParam8, iParam9, sVar2, iParam11, iParam13, 7, 0, 0, 0);
		}
	}
	if (fParam17 > -1f)
	{
		sVar3 = "TIM_DISTANCE";
		sVar4 = "FMMC_LENGTHM";
		GlobalFunc_5234(0, sVar3, -1, 1, 6, 0, sVar4, 1, fParam17, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	sVar5 = sParam2;
	if (GlobalFunc_1561(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE";
	}
	GlobalFunc_5277(iParam0, sVar5, iParam6, iVar0, iParam13, 0, 5, 0, 1, 0, 0, 0, 0, 0);
	if (GlobalFunc_1561(sVar6))
	{
		sVar6 = GlobalFunc_2661(iParam1);
	}
	if ((bParam19 || Global_1573535) || GlobalFunc_1663() == 2)
	{
		if (bParam19)
		{
			if (Global_1573535 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam22))
			{
				GlobalFunc_5277(iParam18, sParam22, iParam6, iVar0, iParam13, 0, 4, 1, 1, 0, 0, 0, 0, 0);
			}
			else if (iParam18 <= 0)
			{
				GlobalFunc_5277(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_5277(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 0, 0, 0);
			}
		}
		else if (GlobalFunc_1663() == 2 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam22))
		{
			GlobalFunc_5277(iParam18, sParam22, iParam6, iVar0, iParam13, 0, 4, 1, 1, 0, 0, 0, 0, 0);
		}
		else if (iParam18 <= 0)
		{
			GlobalFunc_5277(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 1, 0, 0);
		}
		else
		{
			GlobalFunc_5277(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 0, 0, 0);
		}
	}
	if (GlobalFunc_1561(sVar7))
	{
		sVar7 = "TIMER_CHALLTIME";
	}
	iParam20 = iParam20;
}


void func_330()//Position - 0x29CD8
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Local_612.f_11 = 1;
		iVar0 = Local_612.f_6;
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624[Local_612.f_6 /*3*/], 1);
		if (fVar1 > (fLocal_1159 + 100f))
		{
			iVar2 = Local_612.f_6 + 1;
			if (iVar2 >= Local_624.f_248)
			{
				iVar2 = 0;
			}
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624[iVar2 /*3*/], 1);
			fVar4 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_624[iVar2 /*3*/], Local_624[Local_612.f_6 /*3*/], 1) + 20f);
			if (fVar3 < fVar4)
			{
				iLocal_599 = 5;
			}
			else
			{
				iLocal_599 = 4;
			}
			iLocal_600 = 5;
			iLocal_601 = 0;
			return;
		}
		else if (fVar1 > (fLocal_1159 + 7.5f))
		{
			iVar5 = 0;
			fVar6 = 9999f;
			iVar5 = 0;
			while (iVar5 < Local_624.f_248)
			{
				if (iVar5 < Local_612.f_6)
				{
					fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624[iVar5 /*3*/], 1);
					if (fVar7 < fVar6)
					{
						fVar6 = fVar7;
						iVar0 = iVar5;
					}
				}
				iVar5++;
			}
		}
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < Local_624.f_249)
		{
			if (GlobalFunc_115(Local_877[iVar9 /*18*/].f_3))
			{
				if (Local_877[iVar9 /*18*/] == 3)
				{
					Local_612.f_11++;
				}
				else if (Local_877[iVar9 /*18*/].f_9 > Local_612.f_8)
				{
					Local_612.f_11++;
				}
				else if (Local_877[iVar9 /*18*/].f_9 == Local_612.f_8)
				{
					if (Local_877[iVar9 /*18*/].f_8 > iVar0)
					{
						Local_612.f_11++;
					}
					else if (Local_877[iVar9 /*18*/].f_8 == iVar0)
					{
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624[iVar0 /*3*/], 1);
						fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_877[iVar9 /*18*/].f_6, 1), Local_624[Local_877[iVar9 /*18*/].f_8 /*3*/], 1);
						if (fVar8 < fVar1)
						{
							Local_612.f_11++;
						}
					}
				}
			}
			iVar9++;
		}
	}
}

void func_331(int iParam0, int iParam1)//Position - 0x29EE8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		func_333(iVar0, iParam0, iParam1);
		iVar0++;
	}
	func_332();
}

void func_332()//Position - 0x29F16
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::GET_GAME_TIMER() > iLocal_1161)
	{
		fVar1 = 1E+07f;
		iVar3 = 0;
		while (iVar3 <= (Local_624.f_249 - 1))
		{
			if (GlobalFunc_4947(Local_877[iVar3 /*18*/].f_6))
			{
				fVar0 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_877[iVar3 /*18*/].f_6, 1);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (Local_606.f_1 == 3)
		{
			if (iLocal_1160 > -1 && GlobalFunc_4947(Local_877[iLocal_1160 /*18*/].f_6))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_877[iLocal_1160 /*18*/].f_6, 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_877[iLocal_1160 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0);
			}
			if (GlobalFunc_4947(Local_877[iVar2 /*18*/].f_6))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_877[iVar2 /*18*/].f_6, "SEA_RACE_DURING_RACE_COLSEST_NPC", 0);
			}
		}
		else
		{
			if (iLocal_1160 > -1 && GlobalFunc_4947(Local_877[iLocal_1160 /*18*/].f_6))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_877[iLocal_1160 /*18*/].f_6, 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_877[iLocal_1160 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0);
			}
			if (GlobalFunc_4947(Local_877[iVar2 /*18*/].f_6))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_877[iVar2 /*18*/].f_6, "STREET_RACE_NPC_CLOSEST", 0);
			}
		}
		iLocal_1160 = iVar2;
		iLocal_1161 = MISC::GET_GAME_TIMER() + 2000;
	}
}

void func_333(int iParam0, var uParam1, int iParam2)//Position - 0x2A054
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	var uVar5;
	
	if (iParam0 >= 0 || iParam0 < Local_624.f_249)
	{
		if (func_349(iParam0))
		{
			func_346(iParam0, iParam2);
			if (!PED::IS_PED_IN_VEHICLE(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, 0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1), 3f))
				{
					func_345(iParam0);
				}
				else
				{
					func_344(iParam0);
				}
			}
			else if (func_343(iParam0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1), 3f))
				{
					func_345(iParam0);
				}
			}
			else
			{
				func_342(iParam0);
				func_341(iParam0);
				switch (Local_877[iParam0 /*18*/])
				{
					case 0:
						Local_877[iParam0 /*18*/].f_8 = 0;
						Local_877[iParam0 /*18*/].f_9 = 1;
						if (Local_606.f_1 == 2)
						{
							if (uParam1 || iParam0 != 6)
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, 30, iParam0 + 1 * 100);
							}
						}
						Local_877[iParam0 /*18*/] = 1;
						break;
					
					case 1:
						if (((MISC::GET_GAME_TIMER() - Local_612.f_5) > iParam0 + 1 * 100 || Local_606.f_1 != 2) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1456))
						{
							Local_877[iParam0 /*18*/].f_2 = func_340(iParam0);
							if ((((Local_606 == 0 || Local_606 == 1) || Local_606 == 2) || Local_606 == 3) || Local_606 == 4)
							{
								if ((iParam0 == 0 || iParam0 == 2) || iParam0 == 4)
								{
									iVar0 = 0;
								}
								else
								{
									iVar0 = 1;
								}
								Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_877[iVar0 /*18*/].f_6, 0f, 20f, 0f) };
								fVar4 = GlobalFunc_713(Local_877[iParam0 /*18*/].f_6, Var1, 1);
								TASK::OPEN_SEQUENCE_TASK(&uVar5);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_877[iParam0 /*18*/].f_6, Var1, Local_877[iParam0 /*18*/].f_2, 1, ENTITY::GET_ENTITY_MODEL(Local_877[iParam0 /*18*/].f_6), 17563684, 3f, fVar4);
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_877[iParam0 /*18*/].f_6, sLocal_1456, 786468, 0, 24, -1, Local_877[iParam0 /*18*/].f_2, iLocal_1149, 1073741824);
								TASK::CLOSE_SEQUENCE_TASK(uVar5);
								TASK::TASK_PERFORM_SEQUENCE(Local_877[iParam0 /*18*/].f_3, uVar5);
								TASK::CLEAR_SEQUENCE_TASK(&uVar5);
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, sLocal_1456, 786468, 0, 16, -1, Local_877[iParam0 /*18*/].f_2, iLocal_1149, 1073741824);
							}
							Local_877[iParam0 /*18*/] = 2;
						}
						break;
					
					case 2:
						if (func_339(iParam0) && Local_877[iParam0 /*18*/].f_15 != 1)
						{
							func_337(iParam0);
						}
						Local_877[iParam0 /*18*/].f_10 = 0;
						break;
					
					case 3:
						break;
					}
			}
			GlobalFunc_7248(&(Local_877[iParam0 /*18*/].f_7), Local_877[iParam0 /*18*/].f_6, 1, 1092616192, 1);
		}
	}
}




void func_337(int iParam0)//Position - 0x2A451
{
	int iVar0;
	
	if (Local_624.f_247 == 0)
	{
		iVar0 = (Local_624.f_248 - 2);
	}
	else
	{
		iVar0 = (Local_624.f_248 - 1);
	}
	if (Local_877[iParam0 /*18*/].f_8 == iVar0)
	{
		Local_877[iParam0 /*18*/].f_8 = 0;
		Local_877[iParam0 /*18*/].f_9++;
		if (Local_877[iParam0 /*18*/].f_9 > Local_624.f_247)
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, 30f, 786468);
		}
	}
	else
	{
		Local_877[iParam0 /*18*/].f_8++;
	}
	if (Local_877[iParam0 /*18*/] == 2)
	{
		func_338(iParam0);
	}
}

void func_338(int iParam0)//Position - 0x2A4FB
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_340(iParam0);
	fVar1 = GlobalFunc_156(Local_877[iParam0 /*18*/].f_6, PLAYER::PLAYER_PED_ID(), 1);
	if ((Local_877[iParam0 /*18*/].f_8 - 1) < Local_612.f_6)
	{
		if (fVar1 > 50f)
		{
			fVar0 = (fVar0 + (fVar0 * 1f));
		}
		else if (fVar1 > 25f)
		{
			fVar0 = (fVar0 + (fVar0 * 0.7f));
		}
		else
		{
			fVar0 = (fVar0 + (fVar0 * 0.3f));
		}
	}
	else if (fVar1 > 100f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.3f));
	}
	else if (fVar1 > 25f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.1f));
	}
	if (Local_877[iParam0 /*18*/].f_2 != fVar0)
	{
		Local_877[iParam0 /*18*/].f_2 = fVar0;
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_877[iParam0 /*18*/].f_3, fVar0);
	}
}

int func_339(int iParam0)//Position - 0x2A5D0
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_624[Local_877[iParam0 /*18*/].f_8 /*3*/], 0) <= 12f)
	{
		return 1;
	}
	iVar4 = 0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1456, ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1), &iVar3);
	iVar4 = 0;
	while (iVar4 < 5)
	{
		if ((iVar3 - iVar4) > 0)
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, (iVar3 - iVar4), &Var0);
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_624[Local_877[iParam0 /*18*/].f_8 /*3*/], 0) <= 12f)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

float func_340(int iParam0)//Position - 0x2A67C
{
	var uVar0;
	
	switch (Local_877[iParam0 /*18*/].f_1)
	{
		case 0:
			uVar0 = Local_624.f_250;
			break;
		
		case 1:
			uVar0 = Local_624.f_251;
			break;
		
		case 2:
			uVar0 = Local_624.f_252;
			break;
	}
	return uVar0;
}

void func_341(int iParam0)//Position - 0x2A6C4
{
	if (GlobalFunc_4947(Local_80.x) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (Local_877[iParam0 /*18*/].f_13)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_80.x, Local_877[iParam0 /*18*/].f_6))
			{
				Local_877[iParam0 /*18*/].f_13 = 0;
				Local_877[iParam0 /*18*/].f_14 = MISC::GET_GAME_TIMER() + 4000;
			}
		}
		else if (Local_877[iParam0 /*18*/].f_14 > MISC::GET_GAME_TIMER())
		{
			PED::SET_IK_TARGET(Local_877[iParam0 /*18*/].f_3, 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 150, 400);
		}
		else
		{
			Local_877[iParam0 /*18*/].f_13 = 1;
		}
	}
}

void func_342(int iParam0)//Position - 0x2A756
{
	struct<3> Var0;
	
	switch (Local_877[iParam0 /*18*/].f_11)
	{
		case 0:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1)) };
			if ((Var0.x > -2f && Var0.x < 2f) || iParam0 == 0)
			{
				Local_877[iParam0 /*18*/].f_12 = MISC::GET_GAME_TIMER() + 2000;
				Local_877[iParam0 /*18*/].f_11 = 1;
			}
			else
			{
				Local_877[iParam0 /*18*/].f_11 = 2;
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > Local_877[iParam0 /*18*/].f_12)
			{
				Local_877[iParam0 /*18*/].f_11 = 2;
			}
			else
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_877[iParam0 /*18*/].f_6, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			break;
	}
}

int func_343(int iParam0)//Position - 0x2A818
{
	if (Local_606.f_1 == 2)
	{
		if ((ENTITY::IS_ENTITY_UPSIDEDOWN(Local_877[iParam0 /*18*/].f_6) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_877[iParam0 /*18*/].f_6, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_877[iParam0 /*18*/].f_6, 1, 40000))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Local_877[iParam0 /*18*/].f_6))
	{
		if (Local_606.f_1 == 2 || Local_606.f_1 == 1)
		{
			return 1;
		}
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_877[iParam0 /*18*/].f_6, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_877[iParam0 /*18*/].f_6, 3, 30000))
	{
		return 1;
	}
	return 0;
}

void func_344(int iParam0)//Position - 0x2A8C7
{
	int iVar0;
	
	if (Local_877[iParam0 /*18*/].f_10 == 0)
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1456, ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1), &iVar0);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_1457);
		TASK::TASK_ENTER_VEHICLE(0, Local_877[iParam0 /*18*/].f_6, 10000, -1, 1073741824, 1, 0);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_877[iParam0 /*18*/].f_6, sLocal_1456, 786468, iVar0, 16, -1, (func_340(iParam0) * 2f), iLocal_1149, 1073741824);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_1457);
		TASK::TASK_PERFORM_SEQUENCE(Local_877[iParam0 /*18*/].f_3, uLocal_1457);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_1457);
		Local_877[iParam0 /*18*/].f_10 = 1;
	}
}

void func_345(int iParam0)//Position - 0x2A966
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1456, ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, iVar0, &Var1);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, iVar0 + 1, &Var4);
	if (!CAM::IS_SPHERE_VISIBLE(Var1, 3f))
	{
		if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var1, 5f) || GlobalFunc_713(Local_877[iParam0 /*18*/].f_6, Var1, 1) < 5f)
		{
			ENTITY::SET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, Var1, 1, 0, 0, 1);
			GlobalFunc_5971(Local_877[iParam0 /*18*/].f_6, Var4);
			if (!PED::IS_PED_IN_VEHICLE(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, -1);
			}
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, sLocal_1456, 786468, iVar0, 16, -1, (func_340(iParam0) * 2f), iLocal_1149, 1073741824);
			iLocal_605 = MISC::GET_GAME_TIMER() + 1500;
			iLocal_605 = iLocal_605;
		}
	}
}

void func_346(int iParam0, int iParam1)//Position - 0x2AA6E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (iParam1 && iParam0 == (Local_624.f_249 - 1))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 30f;
	}
	switch (Local_877[iParam0 /*18*/].f_15)
	{
		case 0:
			if (((func_348(iParam0, iParam1) && PED::IS_PED_IN_VEHICLE(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, 0)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_877[iParam0 /*18*/].f_6)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1456))
			{
				iVar1 = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(Local_877[iParam0 /*18*/].f_6);
				if (iVar1 < 1)
				{
					iVar1 = 1;
				}
				if (iVar1 < iLocal_1633)
				{
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar3 = 1;
				}
				if ((TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1456, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar2) && TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, iVar3, &Var5)) && TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, iVar2, &Var8))
				{
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var8, Var5, 1);
					if (((((fVar4 > 40f || Local_877[iParam0 /*18*/].f_9 < Local_612.f_8) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_877[iParam0 /*18*/].f_6, fVar0)) && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Var5, fVar0)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1), 5f)) && !CAM::IS_SPHERE_VISIBLE(Var5, 5f))
					{
						if (iParam1 && iParam0 == (Local_624.f_249 - 1))
						{
							Local_877[iParam0 /*18*/].f_17 = MISC::GET_GAME_TIMER() + 90;
						}
						else
						{
							Local_877[iParam0 /*18*/].f_17 = (MISC::GET_GAME_TIMER() + 100 + iParam0 * 10);
						}
						Local_877[iParam0 /*18*/].f_16 = iVar3;
						Local_877[iParam0 /*18*/].f_15 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (Local_877[iParam0 /*18*/].f_16 < iLocal_1633)
			{
				iVar11 = Local_877[iParam0 /*18*/].f_16 + 1;
			}
			else
			{
				iVar11 = 1;
			}
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, Local_877[iParam0 /*18*/].f_16, &Var12))
			{
				if (((((GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_877[iParam0 /*18*/].f_6, fVar0) || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Var12, fVar0)) || CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, 1), 5f)) || CAM::IS_SPHERE_VISIBLE(Var12, 5f)) || (Local_877[iParam0 /*18*/].f_9 == Local_612.f_8 && Local_877[iParam0 /*18*/].f_8 >= Local_612.f_6)) || Local_877[iParam0 /*18*/].f_9 > Local_612.f_8)
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, sLocal_1456, 786468, iVar11, 16, -1, func_340(iParam0), iLocal_1149, 1073741824);
					if (Local_606.f_1 == 3)
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_877[iParam0 /*18*/].f_6, (func_340(iParam0) * 0.25f));
					}
					else
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_877[iParam0 /*18*/].f_6, (func_340(iParam0) * 0.5f));
					}
					Local_877[iParam0 /*18*/].f_15 = 0;
				}
				else if (MISC::GET_GAME_TIMER() > Local_877[iParam0 /*18*/].f_17)
				{
					if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var12, 5f) || GlobalFunc_775(Local_877[iParam0 /*18*/].f_6, Var12, 5f))
					{
						if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_1456, iVar11, &Var15))
						{
							ENTITY::SET_ENTITY_COORDS(Local_877[iParam0 /*18*/].f_6, Var12, 1, 0, 0, 1);
							GlobalFunc_5971(Local_877[iParam0 /*18*/].f_6, Var15);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var12, Local_624[Local_877[iParam0 /*18*/].f_8 /*3*/], 0) <= (12f * 2f))
							{
								func_337(iParam0);
							}
							Local_877[iParam0 /*18*/].f_16 = iVar11;
							Local_877[iParam0 /*18*/].f_17 = (MISC::GET_GAME_TIMER() + 100 + iParam0 * 10);
							if (!PED::IS_PED_IN_VEHICLE(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_877[iParam0 /*18*/].f_3, Local_877[iParam0 /*18*/].f_6, -1);
							}
							iLocal_605 = MISC::GET_GAME_TIMER() + 1500;
							iLocal_605 = iLocal_605;
						}
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}


int func_348(int iParam0, int iParam1)//Position - 0x2AE90
{
	if (Local_877[iParam0 /*18*/].f_9 < Local_612.f_8)
	{
		return 1;
	}
	if (Local_877[iParam0 /*18*/].f_9 > Local_612.f_8)
	{
		return 0;
	}
	if (Local_877[iParam0 /*18*/].f_9 == Local_612.f_8 && Local_877[iParam0 /*18*/].f_8 >= Local_612.f_6)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	if (iParam1 && iParam0 != (Local_624.f_249 - 1))
	{
		return 1;
	}
	if ((iParam1 && iParam0 == (Local_624.f_249 - 1)) && Local_877[iParam0 /*18*/].f_8 > 1)
	{
		return 1;
	}
	return 0;
}

int func_349(int iParam0)//Position - 0x2AF37
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_877[iParam0 /*18*/].f_3))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_877[iParam0 /*18*/].f_3))
		{
			iLocal_599 = 2;
			iLocal_600 = 5;
			iLocal_601 = 0;
		}
		else if (PED::IS_PED_INJURED(Local_877[iParam0 /*18*/].f_3))
		{
			iLocal_599 = 2;
			iLocal_600 = 5;
			iLocal_601 = 0;
		}
		else if (GlobalFunc_8324(Local_877[iParam0 /*18*/].f_3, 1, 0, 0, 0))
		{
			iLocal_599 = 1;
			iLocal_600 = 5;
			iLocal_601 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_877[iParam0 /*18*/].f_6))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_877[iParam0 /*18*/].f_6))
		{
			iLocal_599 = 2;
			iLocal_600 = 5;
			iLocal_601 = 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_877[iParam0 /*18*/].f_6, PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_599 = 1;
			iLocal_600 = 5;
			iLocal_601 = 0;
		}
	}
	if (GlobalFunc_115(Local_877[iParam0 /*18*/].f_3) && GlobalFunc_115(Local_877[iParam0 /*18*/].f_6))
	{
		return 1;
	}
	return 0;
}


void func_351()//Position - 0x2B06E
{
	iLocal_1153 = AUDIO::GET_SOUND_ID();
	iLocal_1152 = -1;
}



int func_354(bool bParam0)//Position - 0x2B176
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_356(bParam0);
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624[Local_612.f_6 /*3*/], 1) <= 12f)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
			if (Local_612.f_6 == (Local_612.f_7 - 1))
			{
				iVar0 = (MISC::GET_GAME_TIMER() - Local_612.f_9);
				if (Local_612.f_10 < 0 || Local_612.f_10 > iVar0)
				{
					Local_612.f_10 = iVar0;
				}
				Local_612.f_9 = MISC::GET_GAME_TIMER();
				if (Local_612.f_8 == Local_624.f_247)
				{
					func_33();
					return 1;
				}
				else
				{
					Local_612.f_8++;
					Local_612.f_6 = 0;
					iLocal_1228 = 1;
				}
			}
			else
			{
				Local_612.f_6++;
			}
			func_355();
			func_33();
		}
	}
	return 0;
}

void func_355()//Position - 0x2B24B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fLocal_1159 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624[Local_612.f_6 /*3*/], 1);
	}
}

void func_356(bool bParam0)//Position - 0x2B27B
{
	int iVar0;
	
	iVar0 = Local_612.f_6 + 1;
	if (Local_606.f_5)
	{
		if (Local_612.f_6 == (Local_624.f_248 - 1))
		{
			func_358((Local_624.f_248 - 1), 1, bParam0);
		}
		else
		{
			func_358(Local_612.f_6, 0, bParam0);
			if (iVar0 == (Local_624.f_248 - 1))
			{
				func_357(Local_624[iVar0 /*3*/], 1);
			}
			else
			{
				func_357(Local_624[iVar0 /*3*/], 0);
			}
		}
	}
	else if (Local_612.f_6 == (Local_624.f_248 - 1))
	{
		if (Local_612.f_8 == Local_624.f_247)
		{
			func_358(Local_612.f_6, 1, bParam0);
		}
		else
		{
			func_358(Local_612.f_6, 0, bParam0);
			func_357(Local_624[0 /*3*/], 0);
		}
	}
	else
	{
		func_358(Local_612.f_6, 0, bParam0);
		if (iVar0 == (Local_624.f_248 - 1))
		{
			func_357(Local_624[iVar0 /*3*/], 1);
		}
		else
		{
			func_357(Local_624[iVar0 /*3*/], 0);
		}
	}
}

void func_357(struct<3> Param0, bool bParam3)//Position - 0x2B36C
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_1155))
	{
		iLocal_1155 = HUD::ADD_BLIP_FOR_COORD(Param0);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_1155, 0);
		if (!bParam3)
		{
			HUD::SET_BLIP_COLOUR(iLocal_1155, 5);
			HUD::SET_BLIP_SCALE(iLocal_1155, 0.7f);
		}
		else if (Local_612.f_8 == Local_624.f_247)
		{
			HUD::SET_BLIP_SPRITE(iLocal_1155, 38);
			HUD::SET_BLIP_SCALE(iLocal_1155, 1.2f);
		}
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1155, "BLIP_CPOINT");
	}
}

void func_358(int iParam0, bool bParam1, bool bParam2)//Position - 0x2B3DD
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	float fVar24;
	bool bVar25;
	
	iVar9 = func_363(iParam0);
	HUD::GET_HUD_COLOUR(13, &uVar0, &uVar1, &uVar2, &uVar3);
	HUD::GET_HUD_COLOUR(134, &uVar4, &uVar5, &uVar6, &uVar7);
	uVar3 = func_362(iParam0);
	if (HUD::DOES_BLIP_EXIST(iLocal_1154))
	{
		if (iLocal_1156 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_1156, uVar0, uVar1, uVar2, uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_1156, uVar4, uVar5, uVar6, iVar3);
		}
	}
	else
	{
		Var10 = { Local_624[iParam0 /*3*/] };
		Var19 = { Var10 };
		Var19.f_2 = (Var19.f_2 + 20f);
		bVar25 = false;
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var19, &fVar24))
		{
			if (fVar24 > (Var10.f_2 + 1f))
			{
				fVar22 = ((7.5f * 1f) * 0.66f);
				fVar23 = 2f;
				bVar25 = true;
			}
			else
			{
				fVar22 = (8.5f * 1.333f);
				fVar23 = 6f;
			}
		}
		else
		{
			fVar22 = (8.5f * 1.333f);
			fVar23 = 6f;
		}
		if (iParam0 == (Local_624.f_248 - 1))
		{
			Var13 = { Local_624[0 /*3*/] };
		}
		else
		{
			Var13 = { Local_624[iParam0 + 1 /*3*/] };
		}
		iVar8 = (iParam0 - 1);
		if (iVar8 < 0)
		{
			iVar8 = (Local_624.f_248 - 1);
		}
		Var16 = { Local_624[iVar8 /*3*/] };
		iLocal_1154 = HUD::ADD_BLIP_FOR_COORD(Var10);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_1154, 0);
		if (!bParam1)
		{
			HUD::SET_BLIP_COLOUR(iLocal_1154, 5);
			HUD::SET_BLIP_SCALE(iLocal_1154, 1.2f);
			HUD::SET_BLIP_PRIORITY(iLocal_1154, 9);
			if (bVar25)
			{
				switch (iVar9)
				{
					case 17:
					case 7:
						iVar9 = 12;
						break;
					
					case 16:
					case 6:
						iVar9 = 11;
						break;
					
					case 15:
					case 5:
						iVar9 = 10;
						break;
					}
			}
			iLocal_1156 = GRAPHICS::CREATE_CHECKPOINT(iVar9, Var10 + Vector(fVar23, 0f, 0f), Var13, fVar22, uVar0, uVar1, uVar2, iVar3, 0);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_1156, uVar4, uVar5, uVar6, iVar3);
			func_359(iLocal_1156, Var10);
		}
		else
		{
			HUD::SET_BLIP_SPRITE(iLocal_1154, 38);
			HUD::SET_BLIP_PRIORITY(iLocal_1154, 7);
			HUD::SET_BLIP_SCALE(iLocal_1154, 1.2f);
			iLocal_1156 = GRAPHICS::CREATE_CHECKPOINT(9, Var10 + Vector(fVar23, 0f, 0f), Var13, fVar22, uVar0, uVar1, uVar2, iVar3, 0);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_1156, uVar4, uVar5, uVar6, iVar3);
			func_359(iLocal_1156, Var10);
		}
		if (bParam2)
		{
			iVar9 = func_363(iVar8);
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &iLocal_1158);
			iLocal_1158 = 180;
			if (iLocal_1157 != 0)
			{
				GRAPHICS::DELETE_CHECKPOINT(iLocal_1157);
			}
			iLocal_1157 = GRAPHICS::CREATE_CHECKPOINT(iVar9, Var16 + Vector(fVar23, 0f, 0f), Var10, fVar22, uVar0, uVar1, uVar2, iLocal_1158, 0);
		}
		if (Local_606.f_1 == 3)
		{
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_1156, 16f, 16f, 100f);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_1157, 16f, 16f, 100f);
		}
		else
		{
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_1156, 9.5f, 9.5f, 100f);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_1157, 9.5f, 9.5f, 100f);
		}
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1154, "BLIP_CPOINT");
	}
	if (iLocal_1157 != 0)
	{
		iLocal_1158 = (iLocal_1158 - 25);
		if (iLocal_1158 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &iVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_1157, uVar0, uVar1, uVar2, iLocal_1158);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_1157);
		}
	}
}

void func_359(int iParam0, struct<3> Param1)//Position - 0x2B718
{
	int iVar0;
	struct<3> Var1[8];
	float fVar26;
	struct<3> Var27;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		Var1[iVar0 /*3*/] = { Param1 + GlobalFunc_2660(iVar0) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[iVar0 /*3*/], &fVar26);
		if (fVar26 < (Param1.f_2 - 2f) || fVar26 > (Param1.f_2 + 2f))
		{
			Var1[iVar0 /*3*/].f_2 = Param1.f_2;
		}
		else
		{
			Var1[iVar0 /*3*/].f_2 = fVar26;
		}
		iVar0++;
	}
	Var27 = { GlobalFunc_5851(&Var1) };
	GRAPHICS::_0xF51D36185993515D(iParam0, Param1 - Vector(0.3f, 0f, 0f), Var27);
}



int func_362(int iParam0)//Position - 0x2B8FE
{
	float fVar0;
	int iVar1;
	
	iVar1 = 240;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_624[iParam0 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
		if (fVar0 > 100f)
		{
			iVar1 = 240;
		}
		else
		{
			iVar1 = SYSTEM::ROUND((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_363(int iParam0)//Position - 0x2B951
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	Var0 = { Local_624[iParam0 /*3*/] };
	if (iParam0 + 1 == Local_624.f_248)
	{
		Var3 = { Local_624[0 /*3*/] };
	}
	else
	{
		Var3 = { Local_624[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		Var6 = { Local_624[(iParam0 - 1) /*3*/] };
	}
	Var9 = { Var6 - Var0 };
	Var12 = { Var3 - Var0 };
	fVar15 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.f_1, Var12.x, Var12.f_1);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
	if (fVar15 < fLocal_29)
	{
		return 7;
	}
	else if (fVar15 < fLocal_30)
	{
		return 6;
	}
	else if (fVar15 < fLocal_31)
	{
		return 5;
	}
	else
	{
		return 5;
	}
	return 5;
}



void func_366()//Position - 0x2BA3F
{
	int iVar0;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_456();
	GlobalFunc_187();
	switch (iLocal_1701)
	{
		case 0:
			GlobalFunc_846(&uLocal_1704);
			GlobalFunc_1092(&Local_612);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 1);
			GlobalFunc_Checkpoint8(1, "Race start", 1, 0, 0, 1);
			GlobalFunc_6452(1, 0);
			GlobalFunc_6452(7, 0);
			iLocal_1148 = 0;
			iLocal_1772 = 1;
			iLocal_604 = -1;
			iLocal_603 = 0;
			GlobalFunc_5312(&(Local_612.f_1), 8);
			GlobalFunc_5312(&(Local_612.f_1), 4);
			GlobalFunc_5312(&(Local_612.f_1), 2);
			GlobalFunc_5312(&(Local_612.f_1), 1);
			GlobalFunc_235(&(Local_612.f_2));
			if (GlobalFunc_4947(Local_80.x))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				VEHICLE::SET_VEHICLE_HANDBRAKE(Local_80.x, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_REACH_START", "FRANKLIN_NORMAL", 10);
			}
			iLocal_1701 = 1;
			break;
		
		case 1:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 1);
			if (GlobalFunc_1088(&Local_612))
			{
				func_354(0);
				if (func_380(&Local_612, 1, 0, 0, 3, 1, 0))
				{
					iLocal_1701 = 3;
				}
				if (bLocal_1771)
				{
					if (GlobalFunc_747(Local_612.f_1, 2))
					{
						func_378();
					}
				}
				if (GlobalFunc_747(Local_612.f_1, 8))
				{
					if (iLocal_604 < 0)
					{
						iLocal_604 = MISC::GET_GAME_TIMER() + 500;
					}
					if (iLocal_1148 == 0)
					{
						iLocal_1148 = 1;
						func_377();
						iVar0 = PLAYER::GET_PLAYER_INDEX();
						PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0);
						if (GlobalFunc_4947(Local_80.x))
						{
							VEHICLE::SET_VEHICLE_HANDBRAKE(Local_80.x, 0);
						}
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
						if (Local_606.f_1 == 3)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MGSR_START");
						}
						func_376();
					}
					func_331(0, 0);
				}
			}
			break;
		
		case 3:
			GlobalFunc_1246(&Local_612);
			func_354(0);
			func_367();
			iLocal_1700 = 8;
			iLocal_1701 = 0;
			break;
	}
	func_268();
}

void func_367()//Position - 0x2BBFB
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	GlobalFunc_2297(&iLocal_1426, 1, 0, 1);
	GlobalFunc_2297(&iLocal_1427, 1, 0, 1);
	GlobalFunc_2297(&iLocal_1428, 1, 0, 1);
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0);
	}
	if (Local_606.f_1 == 1 || Local_606.f_1 == 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1465, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_1458, Local_1461, fLocal_1464, 1);
	}
	GlobalFunc_8316(0, 1, 0, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	HUD::CLEAR_HELP(1);
}









void func_376()//Position - 0x2BE9C
{
	int iVar0;
	
	if (Local_606.f_1 == 3)
	{
		AUDIO::START_AUDIO_SCENE("SEA_RACE_DURING_RACE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("STREET_RACE_DURING_RACE");
	}
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		if (GlobalFunc_4947(Local_877[iVar0 /*18*/].f_6))
		{
			if (Local_606.f_1 == 3)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_877[iVar0 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0);
			}
			else
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_877[iVar0 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0);
			}
		}
		iVar0++;
	}
}

void func_377()//Position - 0x2BF1A
{
	Local_612.f_5 = MISC::GET_GAME_TIMER();
	Local_612.f_6 = 0;
	Local_612.f_8 = 1;
	Local_612.f_9 = MISC::GET_GAME_TIMER();
	Local_612.f_7 = Local_624.f_248;
	func_355();
}

void func_378()//Position - 0x2BF4E
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((iLocal_1772 && GlobalFunc_4947(Local_1639.f_35[0])) && GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]))
	{
		if (!GlobalFunc_775(Local_1639.f_35[0], Local_624.f_181[(Local_624.f_249 - 1) /*3*/], 10f))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1639.f_28[0]);
			VEHICLE::BRING_VEHICLE_TO_HALT(Local_1639.f_35[0], 0.1f, 1, 0);
			if (!PED::IS_PED_IN_VEHICLE(Local_1639.f_28[0], Local_1639.f_35[0], 0) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1639.f_35[0], -1))
			{
				PED::SET_PED_INTO_VEHICLE(Local_1639.f_28[0], Local_1639.f_35[0], -1);
			}
			Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_624.f_181[(Local_624.f_249 - 1) /*3*/], Local_624.f_230[(Local_624.f_249 - 1)], 0f, -5f, 0f) };
			Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_624.f_181[(Local_624.f_249 - 1) /*3*/], Local_624.f_230[(Local_624.f_249 - 1)], 0f, 2.3f, 0f) };
			ENTITY::SET_ENTITY_COORDS(Local_1639.f_35[0], Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1639.f_35[0], Local_624.f_230[(Local_624.f_249 - 1)]);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1639.f_35[0]);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1639.f_35[0], 5f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_1639.f_28[0], Local_1639.f_35[0], Var3, 5f, 0, ENTITY::GET_ENTITY_MODEL(Local_1639.f_35[0]), 17039360, 0.5f, 15f);
			iLocal_1772 = 0;
		}
	}
}


int func_380(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x2C0ED
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (!GlobalFunc_226(&(uParam0->f_2)))
	{
		GlobalFunc_6877(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	iVar3 = SYSTEM::FLOOR(GlobalFunc_5182(&(uParam0->f_2)));
	iVar4 = (iVar3 - iParam4);
	bVar5 = false;
	if (!GlobalFunc_747(uParam0->f_1, 8))
	{
		if (iVar4 >= -3 && !GlobalFunc_747(uParam0->f_1, 1))
		{
			GlobalFunc_5211(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_383(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !GlobalFunc_747(uParam0->f_1, 2))
		{
			GlobalFunc_5211(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_383(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_747(uParam0->f_1, 4))
		{
			GlobalFunc_5211(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_383(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_747(uParam0->f_1, 16))
		{
			if (MISC::ABSF((GlobalFunc_5182(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					GlobalFunc_5211(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !GlobalFunc_747(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
			}
			GlobalFunc_5211(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &uVar6, &uVar7, &uVar8, &uVar9);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			GlobalFunc_726("CNTDWN_GO");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar5 = true;
			}
		}
	}
	else if (iVar4 == 1)
	{
		bVar5 = true;
	}
	if ((iParam2 && GlobalFunc_1080()) || iVar3 > 5)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			GlobalFunc_235(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}



void func_383(var uParam0, int iParam1)//Position - 0x2C391
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(12, &uVar0, &uVar1, &uVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}









































































int func_456()//Position - 0x316DD
{
	int iVar0;
	int iVar1;
	
	if (Local_606.f_1 == 3)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1163[0]))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_1455)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1163[1], iLocal_1163[0], 500, 0, 1);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_1163[1], 1f);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_WATER_COME_UP", 0, 1);
				CAM::DESTROY_CAM(iLocal_1163[0], 0);
			}
			else
			{
				func_458(0);
			}
		}
		else if (CAM::DOES_CAM_EXIST(iLocal_1163[1]))
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_1163[1]))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1163[2], iLocal_1163[1], 3000, 0, 1);
				CAM::SHAKE_CAM(iLocal_1163[2], "HAND_SHAKE", 0.3f);
				CAM::DESTROY_CAM(iLocal_1163[1], 0);
			}
			else
			{
				func_458(1);
			}
		}
		else if (CAM::DOES_CAM_EXIST(iLocal_1163[2]))
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_1163[2]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_1163[3], 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1163[4], iLocal_1163[3], 5000, 3, 1);
				CAM::SHAKE_CAM(iLocal_1163[4], "HAND_SHAKE", 0.3f);
				CAM::DESTROY_CAM(iLocal_1163[2], 0);
				iLocal_1455 = MISC::GET_GAME_TIMER() + 2000;
			}
			else
			{
				func_458(1);
			}
		}
		else if (CAM::DOES_CAM_EXIST(iLocal_1163[4]))
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_1163[4]))
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_1163)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_1163[iVar0]))
					{
						CAM::DESTROY_CAM(iLocal_1163[iVar0], 0);
					}
					iVar0++;
				}
			}
			else
			{
				func_458(1);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_1455)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_1163[1]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_1163[1]))
		{
			if (iLocal_1455 < 0)
			{
				iLocal_1455 = MISC::GET_GAME_TIMER() + 1000;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1455)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1163[3], iLocal_1163[2], 4000, 0, 1);
				CAM::SHAKE_CAM(iLocal_1163[2], "HAND_SHAKE", 1f);
				CAM::SHAKE_CAM(iLocal_1163[3], "HAND_SHAKE", 1f);
				CAM::DESTROY_CAM(iLocal_1163[1], 0);
			}
		}
		else
		{
			func_458(0);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_1163[3]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_1163[3]))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1163[5], iLocal_1163[4], 4000, 0, 1);
			CAM::SHAKE_CAM(iLocal_1163[4], "HAND_SHAKE", 1f);
			CAM::SHAKE_CAM(iLocal_1163[5], "HAND_SHAKE", 1f);
			CAM::DESTROY_CAM(iLocal_1163[3], 0);
			if (Local_606 == 2 || Local_606 == 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_80.x))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_80.x, 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_80.x, Local_624.f_181[Local_624.f_249 /*3*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_80.x, Local_624.f_230[Local_624.f_249]);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_80.x);
					}
				}
			}
		}
		else
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_1426))
			{
				if (iLocal_1443)
				{
					if (GlobalFunc_10607(&uLocal_1468, "STR1AUD", "STR1_GIRL1", 8, 0, 0, 0))
					{
						iLocal_1443 = 0;
					}
				}
			}
			func_458(1);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_1163[5]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_1163[5]))
		{
			if (func_457())
			{
				CAM::SET_CAM_ACTIVE(iLocal_1163[6], 1);
			}
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1163[7], iLocal_1163[6], 3000, 3, 1);
			CAM::SHAKE_CAM(iLocal_1163[6], "HAND_SHAKE", 1f);
			CAM::SHAKE_CAM(iLocal_1163[7], "HAND_SHAKE", 1f);
			CAM::DESTROY_CAM(iLocal_1163[5], 0);
			return 1;
		}
		else
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_1428))
			{
				if (iLocal_1444)
				{
					if (GlobalFunc_10607(&uLocal_1468, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						iLocal_1444 = 0;
					}
				}
			}
			func_458(1);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_1163[7]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_1163[7]))
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_1163)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1163[iVar1]))
				{
					CAM::DESTROY_CAM(iLocal_1163[iVar1], 0);
				}
				iVar1++;
			}
		}
		else
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_1428))
			{
				if (iLocal_1444)
				{
					if (GlobalFunc_10607(&uLocal_1468, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						iLocal_1444 = 0;
					}
				}
			}
			func_458(1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_457()//Position - 0x31B2C
{
	int iVar0;
	
	if (GlobalFunc_4947(Local_80.x))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(Local_80.x);
		if (iVar0 == MISC::GET_HASH_KEY("MONSTER") || iVar0 == MISC::GET_HASH_KEY("MARSHALL"))
		{
			return 1;
		}
	}
	return 0;
}

void func_458(bool bParam0)//Position - 0x31B6B
{
	if (iLocal_1226 == 0)
	{
		if (Local_606.f_1 == 3)
		{
			if (AUDIO::LOAD_STREAM("INTRO_STREAM", "SEA_RACES_SOUNDSET"))
			{
				if (bParam0)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_1226 = 1;
				}
			}
		}
		else if (Local_606.f_1 == 1)
		{
			if (AUDIO::LOAD_STREAM("VESPUCCI_CANAL_INTRO", "ROAD_RACE_SOUNDSET"))
			{
				if (bParam0)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_1226 = 1;
				}
			}
		}
		else if (AUDIO::LOAD_STREAM("INTRO_STREAM", "ROAD_RACE_SOUNDSET"))
		{
			if (bParam0)
			{
				AUDIO::PLAY_STREAM_FRONTEND();
				iLocal_1226 = 1;
			}
		}
	}
}

void func_459()//Position - 0x31BEA
{
	int iVar0;
	int iVar1;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_1701)
	{
		case 0:
			GlobalFunc_846(&uLocal_1704);
			func_478();
			if (PLAYER::GET_PLAYERS_LAST_VEHICLE() != Local_1639.f_35[1])
			{
				GlobalFunc_7089(&(Local_1639.f_35[1]));
			}
			func_474();
			func_473();
			func_472();
			func_469();
			iLocal_1226 = 0;
			bLocal_1776 = false;
			GlobalFunc_79(500, 1);
			GlobalFunc_Checkpoint8(1, "Race start", 1, 0, 0, 1);
			iLocal_1701 = 1;
			break;
		
		case 1:
			if (func_456())
			{
				func_467(0.32f);
				iLocal_1700 = 7;
				iLocal_1701 = 0;
			}
			if (GlobalFunc_4926(1000))
			{
				GlobalFunc_2350(500, 1);
				bLocal_1776 = true;
				func_463();
				iVar0 = 0;
				while (iVar0 <= (Local_624.f_249 - 1))
				{
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_877[iVar0 /*18*/].f_3))
					{
						TASK::CLEAR_PED_TASKS(Local_877[iVar0 /*18*/].f_3);
					}
					if (GlobalFunc_4947(Local_877[iVar0 /*18*/].f_6))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_877[iVar0 /*18*/].f_6, 0.1f, 1, 0);
						GlobalFunc_6453(Local_877[iVar0 /*18*/].f_6, Local_624.f_181[iVar0 /*3*/]);
						ENTITY::SET_ENTITY_HEADING(Local_877[iVar0 /*18*/].f_6, Local_624.f_230[iVar0]);
					}
					iVar0++;
				}
				GlobalFunc_69(&iLocal_1427);
				GlobalFunc_69(&iLocal_1428);
				iLocal_1701 = 3;
			}
			break;
		
		case 3:
			func_463();
			func_467(0.27f);
			if (bLocal_1776)
			{
				func_463();
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				SYSTEM::WAIT(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_1163)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1163[iVar1]))
				{
					CAM::DESTROY_CAM(iLocal_1163[iVar1], 0);
				}
				iVar1++;
			}
			iLocal_1700 = 7;
			iLocal_1701 = 0;
			GlobalFunc_79(500, 1);
			break;
	}
}




void func_463()//Position - 0x31E58
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_80.x))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_80.x, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_80.x, Local_624.f_181[Local_624.f_249 /*3*/], 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_80.x, Local_624.f_230[Local_624.f_249]);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_80.x);
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_VISIBLE(Local_80.x, 1);
		}
	}
}




void func_467(int iParam0)//Position - 0x31F81
{
	var uVar0;
	
	if (Local_606.f_1 == 2)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_1426))
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_PLAY_ANIM(0, sLocal_1429, "grid_girl_race_start", 4f, -8f, -1, 8, iParam0, 0, 0, 0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_1440, 1f, 20000, 1193033728, 1056964608);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1426, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
}


void func_469()//Position - 0x32031
{
	var uVar0;
	struct<3> Var1;
	
	if (Local_606.f_1 == 2)
	{
		STREAMING::REQUEST_MODEL(joaat("a_f_y_genhot_01"));
		STREAMING::REQUEST_ANIM_DICT(sLocal_1429);
		func_471();
		while (!STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_genhot_01")))
		{
			SYSTEM::WAIT(0);
		}
		while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1429))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1426 = PED::CREATE_PED(25, joaat("a_f_y_genhot_01"), Local_1430, fLocal_1439, 1, 1);
		GlobalFunc_5971(iLocal_1426, Local_1440);
		iLocal_1427 = PED::CREATE_PED(25, joaat("a_f_y_genhot_01"), Local_1433, fLocal_1439, 1, 1);
		GlobalFunc_5971(iLocal_1427, Local_1440);
		iLocal_1428 = PED::CREATE_PED(25, joaat("a_f_y_genhot_01"), Local_1436, fLocal_1439, 1, 1);
		GlobalFunc_5971(iLocal_1428, Local_1440);
		TASK::TASK_PAUSE(iLocal_1426, -1);
		GlobalFunc_173(&uLocal_1468, 3, iLocal_1426, "GIRL1", 0, 1);
		iLocal_1443 = 1;
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1427, 0f, 20f, 0f) };
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_PLAY_ANIM(0, sLocal_1429, "grid_girl_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var1, 1f, 20000, 1193033728, 1056964608);
		TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_1427, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1428, 0f, 15f, 0f) };
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_PLAY_ANIM(0, sLocal_1429, "grid_girl_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var1, 1f, 20000, 1193033728, 1056964608);
		TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_1428, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		GlobalFunc_173(&uLocal_1468, 4, iLocal_1428, "GIRL2", 0, 1);
		iLocal_1444 = 1;
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_genhot_01"));
	}
}


void func_471()//Position - 0x3229C
{
	switch (Local_606)
	{
		case 0:
			Local_1430 = { -155.6468f, -1566.949f, 33.9936f };
			Local_1433 = { -153.63f, -1563.7f, 34.95f };
			Local_1436 = { -148.09f, -1557.66f, 34.75f };
			fLocal_1439 = -30.86f;
			Local_1440 = { -141.65f, -1550.75f, 33.46f };
			break;
		
		case 1:
			Local_1430 = { 367.6161f, 312.4572f, 102.5861f };
			Local_1433 = { 368.4547f, 312.2108f, 102.5678f };
			Local_1436 = { 375.17f, 310.64f, 103.44f };
			fLocal_1439 = -103.75f;
			Local_1440 = { 386.63f, 307.77f, 102.2f };
			break;
		
		case 2:
			Local_1430 = { -813.8033f, -2546.801f, 12.80013f };
			Local_1433 = { -814.4293f, -2547.748f, 12.80057f };
			Local_1436 = { -816.56f, -2554.45f, 13.77f };
			fLocal_1439 = 157.75f;
			Local_1440 = { -819.68f, -2562.68f, 12.75f };
			break;
		
		case 3:
			Local_1430 = { 777.3962f, -1148.09f, 28.05913f };
			Local_1433 = { 778.6312f, -1148.07f, 28.00819f };
			Local_1436 = { 787f, -1148.06f, 28.92f };
			fLocal_1439 = -89.3f;
			Local_1440 = { 795.3f, -1147.23f, 27.98f };
			break;
	}
}

void func_472()//Position - 0x32430
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1163)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1163[iVar0]))
		{
			CAM::DESTROY_CAM(iLocal_1163[iVar0], 0);
		}
		iVar0++;
	}
	if (Local_606.f_1 == 3)
	{
		iLocal_1163[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1172, Local_1175, 35f, 0, 2);
		CAM::SET_CAM_ACTIVE(iLocal_1163[0], 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 0, 0);
		iLocal_1163[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1220, Local_1223, 35f, 0, 2);
		iLocal_1163[2] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1178, Local_1181, 35f, 0, 2);
		iLocal_1163[3] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1184, Local_1187, 50f, 0, 2);
		iLocal_1163[4] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1190, Local_1193, 50f, 0, 2);
		iLocal_1455 = MISC::GET_GAME_TIMER() + 250;
	}
	else
	{
		if (Local_606 == 4)
		{
			iLocal_1163[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1172, Local_1175, 40f, 0, 2);
		}
		else
		{
			iLocal_1163[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::SET_CAM_FOV(iLocal_1163[0], 40f);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_1163[0], Local_80.x, Local_1172, 1);
			CAM::POINT_CAM_AT_ENTITY(iLocal_1163[0], Local_80.x, Local_1175, 1);
		}
		iLocal_1163[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		CAM::SET_CAM_FOV(iLocal_1163[1], 40f);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_1163[1], Local_80.x, Local_1178, 1);
		CAM::POINT_CAM_AT_ENTITY(iLocal_1163[1], Local_80.x, Local_1181, 1);
		CAM::SET_CAM_ACTIVE(iLocal_1163[0], 1);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1163[1], iLocal_1163[0], 3000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 0, 0);
		CAM::SHAKE_CAM(iLocal_1163[0], "ROAD_VIBRATION_SHAKE", 0.5f);
		CAM::SHAKE_CAM(iLocal_1163[1], "ROAD_VIBRATION_SHAKE", 0.5f);
		iLocal_1163[2] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1184, Local_1187, 40f, 0, 2);
		iLocal_1163[3] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1190, Local_1193, 40f, 0, 2);
		iLocal_1163[4] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1196, Local_1199, 40f, 0, 2);
		iLocal_1163[5] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1202, Local_1205, 40f, 0, 2);
		if (func_457())
		{
			iLocal_1163[6] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::SET_CAM_FOV(iLocal_1163[6], 50f);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_1163[6], Local_80.x, Local_1208, 1);
			CAM::POINT_CAM_AT_ENTITY(iLocal_1163[6], Local_80.x, Local_1211, 1);
			iLocal_1163[7] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::SET_CAM_FOV(iLocal_1163[7], 50f);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_1163[7], Local_80.x, Local_1214, 1);
			CAM::POINT_CAM_AT_ENTITY(iLocal_1163[7], Local_80.x, Local_1217, 1);
		}
		else
		{
			iLocal_1163[6] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1208, Local_1211, 50f, 0, 2);
			iLocal_1163[7] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1214, Local_1217, 50f, 0, 2);
		}
		iLocal_1455 = -1;
	}
}

void func_473()//Position - 0x32789
{
	if (GlobalFunc_4947(Local_1639.f_35[0]) && GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1639.f_28[0]);
		VEHICLE::BRING_VEHICLE_TO_HALT(Local_1639.f_35[0], 0.1f, 1, 0);
		if (!PED::IS_PED_IN_VEHICLE(Local_1639.f_28[0], Local_1639.f_35[0], 0) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1639.f_35[0], -1))
		{
			PED::SET_PED_INTO_VEHICLE(Local_1639.f_28[0], Local_1639.f_35[0], -1);
		}
		ENTITY::SET_ENTITY_COORDS(Local_1639.f_35[0], Local_624.f_181[(Local_624.f_249 - 1) /*3*/], 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_1639.f_35[0], Local_624.f_230[(Local_624.f_249 - 1)]);
	}
}

void func_474()//Position - 0x3284A
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	float fVar8;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_80.x))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_80.x, 0))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_80.x, -1))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, -1);
				}
				iVar0 = PLAYER::GET_PLAYER_INDEX();
				MISC::CLEAR_AREA(GlobalFunc_271(iVar0), 50f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(GlobalFunc_271(iVar0), 500f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_271(iVar0), 500f, 0);
				Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_624.f_181[Local_624.f_249 /*3*/], Local_624.f_230[Local_624.f_249], 0f, -15f, 1f) };
				GlobalFunc_4409(&Var1, 0);
				fVar4 = Local_624.f_230[Local_624.f_249];
				if (Local_606 == 2)
				{
					Var1 = { -825.03f, -2575.13f, 13.25f };
					fVar4 = 334.98f;
				}
				else if (Local_606 == 4)
				{
					Var1 = { -1093.493f, -1173.161f, 2.4978f };
				}
				else if (Local_606.f_1 == 3)
				{
					Var1 = { Local_624.f_181[Local_624.f_249 /*3*/] };
				}
				if (Local_606.f_1 == 1)
				{
					Var5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_624.f_181[Local_624.f_249 /*3*/], Local_624.f_230[Local_624.f_249], 0f, -1f, 0f) };
					fVar8 = 7f;
				}
				else
				{
					Var5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_624.f_181[Local_624.f_249 /*3*/], Local_624.f_230[Local_624.f_249], 0f, 2.3f, 0f) };
					fVar8 = 3f;
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_80.x, 1, 1);
				ENTITY::SET_ENTITY_HEADING(Local_80.x, fVar4);
				GlobalFunc_6453(Local_80.x, Var1);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_80.x, 1);
				VEHICLE::SET_VEHICLE_IS_RACING(Local_80.x, 1);
				if (Local_606.f_1 == 3)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_80.x);
					VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(Local_80.x, 0f);
					VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Local_80.x, 1);
					VEHICLE::_0xB28B1FE5BFADD7F5(Local_80.x, 1);
					if (VEHICLE::CAN_ANCHOR_BOAT_HERE(Local_80.x))
					{
						VEHICLE::SET_BOAT_ANCHOR(Local_80.x, 1);
					}
				}
				else
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_80.x, Var5, fVar8, 0, ENTITY::GET_ENTITY_MODEL(Local_80.x), 17039360, 0.5f, 15f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_80.x, fVar8);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_80.x);
				}
				ENTITY::SET_ENTITY_VISIBLE(Local_80.x, 1);
				VEHICLE::SET_VEHICLE_STRONG(Local_80.x, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_80.x, 1);
				if ((Local_606.f_1 == 3 && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
				}
			}
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
}




void func_478()//Position - 0x32B8C
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, false, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, false, 32);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
	}
	GlobalFunc_8316(1, 1, 0, 0);
	MISC::CLEAR_AREA(GlobalFunc_271(iVar0), 50f, 1, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(GlobalFunc_271(iVar0), 500f, 0, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_271(iVar0), 500f, 0);
	VEHICLE::SET_RANDOM_TRAINS(0);
	VEHICLE::DELETE_ALL_TRAINS();
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
}

void func_479()//Position - 0x32C26
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1705, 350f))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	switch (iLocal_1701)
	{
		case 0:
			GlobalFunc_846(&uLocal_1704);
			HUD::CLEAR_PRINTS();
			GlobalFunc_164("HAO1_6", 7500, 1);
			iLocal_1701 = 1;
			break;
		
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				iLocal_1701 = 3;
			}
			break;
		
		case 3:
			if (bLocal_1769)
			{
				if (func_480())
				{
					iLocal_1700 = 4;
					iLocal_1701 = 0;
				}
				else
				{
					iLocal_1700 = 3;
					iLocal_1701 = 0;
				}
			}
			else
			{
				iLocal_1700 = 4;
				iLocal_1701 = 0;
			}
			break;
	}
}

int func_480()//Position - 0x32CC6
{
	int iVar0;
	int iVar1;
	int iVar2[89];
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1162 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (GlobalFunc_4947(iLocal_1162))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_1162);
			if (GlobalFunc_540(iVar0))
			{
				return 0;
			}
			if (((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2"))
			{
				return 0;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 0;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("pranger");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = joaat("police");
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = joaat("boxville3");
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = joaat("blimp");
			iVar2[81] = joaat("blimp2");
			iVar2[82] = joaat("submersible");
			iVar2[83] = joaat("submersible2");
			iVar2[84] = joaat("blazer3");
			iVar2[85] = joaat("pony2");
			iVar2[86] = joaat("rumpo2");
			iVar2[87] = joaat("taxi");
			iVar2[88] = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}


void func_482()//Position - 0x331EF
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1705, 350f))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	if (iLocal_1773 && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1705, 300f))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_1705, 150f, 0, 0, 0, 0, 0);
		iLocal_1773 = 0;
	}
	func_503();
	switch (iLocal_1701)
	{
		case 0:
			GlobalFunc_846(&uLocal_1704);
			uLocal_1704 = GlobalFunc_2324(Local_1705, 5, 1);
			iLocal_1770 = 1;
			iLocal_1773 = 1;
			iLocal_1777 = 1;
			iLocal_1779 = 0;
			HUD::CLEAR_PRINTS();
			if (bLocal_1769)
			{
				GlobalFunc_164("HAO1_2", 7500, 1);
				bLocal_1769 = false;
			}
			iLocal_1701 = 1;
			break;
		
		case 1:
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1705, 1f, 1f, 2f, 1, 1, 0) || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1705, 4f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1757, Local_1760, fLocal_1763, 0, 1, 0))
			{
				if (func_480())
				{
					iLocal_1701 = 3;
				}
				else
				{
					if (iLocal_1770)
					{
						GlobalFunc_164("HAO1_3", 7500, 1);
						iLocal_1770 = 0;
					}
					func_501();
				}
			}
			else
			{
				func_501();
			}
			func_500();
			if (iLocal_1777 && GlobalFunc_4947(Local_1639.f_35[0]))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1639.f_35[0]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_1639.f_35[0]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_1639.f_35[0], Local_624.f_181[(Local_624.f_249 - 1) /*3*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1639.f_35[0], Local_624.f_230[(Local_624.f_249 - 1)]);
						iLocal_1777 = 0;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(iLocal_1162))
			{
				if (GlobalFunc_530(iLocal_1162, 3.5f, 1, 1056964608, 0, 1))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 2f, 4);
					Local_606 = 0;
					Local_606.f_1 = 2;
					func_489(1, 0);
					iLocal_1701 = 0;
					GlobalFunc_4956();
					if (func_486())
					{
						bLocal_1771 = true;
						if (GlobalFunc_1720())
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
						VEHICLE::SET_VEHICLE_IS_RACING(iLocal_1162, 1);
						iLocal_1700 = 7;
					}
					else
					{
						bLocal_1771 = false;
						iLocal_1700 = 6;
					}
				}
			}
			break;
	}
	func_484();
	func_483();
}

void func_483()//Position - 0x3342E
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]))
	{
		if (GlobalFunc_4947(Local_1639.f_35[0]))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1639.f_35[0]) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1703))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1703, ENTITY::GET_ENTITY_COORDS(Local_1639.f_28[0], 1), &iVar0))
				{
					if (iVar0 >= 54)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1639.f_35[0]);
						TASK::TASK_VEHICLE_TEMP_ACTION(Local_1639.f_28[0], Local_1639.f_35[0], 24, 500);
					}
				}
			}
		}
	}
}

void func_484()//Position - 0x334B4
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_1700 = 5;
		iLocal_1701 = 0;
	}
}


int func_486()//Position - 0x334E9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-168.4269f, -1582.631f, 33.9665f, 20f))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1757, Local_1760, fLocal_1763, 0, 1, 0))
	{
		return 0;
	}
	fVar0 = Local_624.f_230[Local_624.f_249];
	fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	while (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	while (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 20f && fVar2 > -20f)
	{
		return 1;
	}
	return 0;
}



void func_489(bool bParam0, int iParam1)//Position - 0x335C4
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.x))
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_1468, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			Local_80.x = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		}
		else
		{
			Local_80.x = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (GlobalFunc_4947(Local_80.x))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_80.x, -1);
			}
		}
	}
	iLocal_600 = 0;
	iLocal_601 = 0;
	iLocal_599 = 0;
	func_498(Local_606, &Local_624);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	func_496();
	if (bParam0)
	{
		func_495();
	}
	else
	{
		func_493();
	}
	func_492();
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(1);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f);
	if ((iParam1 && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Local_606.f_1 == 1 || Local_606.f_1 == 2)
		{
			uLocal_1465 = GlobalFunc_2662(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 60f);
			GlobalFunc_4410(Local_606, &Local_1458, &Local_1461, &fLocal_1464);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1458, Local_1461, fLocal_1464, 0, 0, 1);
		}
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	Local_80.f_2 = 0;
}



void func_492()//Position - 0x338E0
{
	switch (Local_606)
	{
		case 0:
			Local_1446 = { -168.6f, -1575.16f, 34.7f };
			fLocal_1449 = 141.57f;
			Local_1450 = { -170.0685f, -1573.866f, 34.307f };
			fLocal_1453 = 191.3066f;
			break;
		
		case 1:
			Local_1446 = { 353.12f, 321.39f, 103.65f };
			fLocal_1449 = 77.4f;
			Local_1450 = { 353.4853f, 323.3662f, 103.0862f };
			fLocal_1453 = 127.4f;
			break;
		
		case 2:
			Local_1446 = { -794.5402f, -2527.393f, 12.7891f };
			fLocal_1449 = 332.72f;
			Local_1450 = { -792.37f, -2527.87f, 13.83f };
			fLocal_1453 = 22.72f;
			break;
		
		case 3:
			Local_1446 = { 818.13f, -1161.54f, 28f };
			fLocal_1449 = 76.46f;
			Local_1450 = { 818.5804f, -1159.643f, 27.2778f };
			fLocal_1453 = 126.46f;
			break;
		
		case 4:
			Local_1446 = { -1025.28f, -1130.25f, 1.7f };
			fLocal_1449 = 305.27f;
			Local_1450 = { -1024.548f, -1131.254f, 1.1861f };
			fLocal_1453 = 355.27f;
			break;
	}
}

void func_493()//Position - 0x33A35
{
	switch (Local_606)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_877[0 /*18*/].f_5 = joaat("banshee");
			Local_877[1 /*18*/].f_5 = joaat("feltzer2");
			Local_877[2 /*18*/].f_5 = joaat("sentinel");
			Local_877[3 /*18*/].f_5 = joaat("banshee");
			Local_877[4 /*18*/].f_5 = joaat("feltzer2");
			Local_877[5 /*18*/].f_5 = joaat("sentinel");
			Local_877[6 /*18*/].f_5 = joaat("banshee");
			break;
		
		case 4:
			Local_877[0 /*18*/].f_5 = joaat("bati");
			Local_877[1 /*18*/].f_5 = joaat("bati");
			Local_877[2 /*18*/].f_5 = joaat("ruffian");
			Local_877[3 /*18*/].f_5 = joaat("ruffian");
			Local_877[4 /*18*/].f_5 = joaat("bati");
			Local_877[5 /*18*/].f_5 = joaat("ruffian");
			Local_877[6 /*18*/].f_5 = joaat("bati");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			Local_877[0 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[1 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[2 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[3 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[4 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[5 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[6 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[7 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[8 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[9 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[10 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[11 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[12 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[13 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			Local_877[14 /*18*/].f_5 = GlobalFunc_4411(Local_606.f_1);
			break;
	}
	switch (Local_606)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_877[0 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_877[1 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_877[2 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_877[3 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_877[4 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_877[5 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_877[6 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_877[7 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_877[8 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_877[9 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_877[10 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_877[11 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_877[12 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_877[13 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_877[14 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			break;
		
		case 4:
			Local_877[0 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_877[1 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_877[2 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_877[3 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_877[4 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_877[5 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_877[6 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_877[7 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_877[8 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_877[9 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_877[10 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_877[11 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_877[12 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_877[13 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_877[14 /*18*/].f_4 = joaat("a_m_y_motox_02");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			Local_877[0 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[1 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[2 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[3 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[4 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[5 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[6 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[7 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[8 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[9 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[10 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[11 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[12 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[13 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_877[14 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			break;
	}
}


void func_495()//Position - 0x33F26
{
	Local_877[0 /*18*/].f_5 = joaat("prairie");
	Local_877[1 /*18*/].f_5 = joaat("dominator");
	Local_877[2 /*18*/].f_5 = joaat("sentinel");
	Local_877[3 /*18*/].f_5 = joaat("prairie");
	Local_877[4 /*18*/].f_5 = joaat("dominator");
	Local_877[5 /*18*/].f_5 = joaat("sentinel");
	Local_877[6 /*18*/].f_5 = joaat("prairie");
	Local_877[0 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_877[1 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_877[2 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_877[3 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_877[4 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_877[5 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_877[6 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_877[7 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_877[8 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_877[9 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_877[10 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_877[11 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_877[12 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_877[13 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_877[14 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
}

void func_496()//Position - 0x34057
{
	if (Local_606.f_1 == 2)
	{
		if (func_497())
		{
			Local_1172 = { -0.7054f, 6.3148f, 2.0821f };
			Local_1175 = { 0.9495f, 3.9011f, 2.7419f };
			Local_1178 = { -0.567f, 2.6724f, 1.0077f };
			Local_1181 = { 0.094f, -0.2423f, 0.7483f };
		}
		else if (func_457())
		{
			Local_1172 = { -1.6831f, 6.0271f, 4.2228f };
			Local_1175 = { -0.0245f, 3.5705f, 4.6855f };
			Local_1178 = { -1.0281f, 4.6872f, 0.9868f };
			Local_1181 = { -0.185f, 1.8112f, 1.1221f };
		}
		else
		{
			Local_1172 = { -1.5802f, 5.8398f, 2.2274f };
			Local_1175 = { 0.197f, 3.5006f, 2.8356f };
			Local_1178 = { -0.6678f, 1.974f, 0.6876f };
			Local_1181 = { 0.144f, -0.9013f, 0.417f };
		}
	}
	switch (Local_606)
	{
		case 0:
			Local_1184 = { -159.2159f, -1564.125f, 34.6164f };
			Local_1187 = { -0.073293f, 0.055f, -119.2735f };
			Local_1190 = { -158.8115f, -1563.369f, 34.61729f };
			Local_1193 = { -0.073293f, 0.055f, -123.7305f };
			Local_1196 = { -156.8608f, -1565.342f, 35.70965f };
			Local_1199 = { -8.040299f, -0.0005f, -49.00647f };
			Local_1202 = { -155.1768f, -1567.141f, 35.70965f };
			Local_1205 = { -8.040299f, -0.0005f, -41.34629f };
			Local_1208 = { -142.3124f, -1550.574f, 34.58047f };
			Local_1211 = { -2.928405f, -0.000499f, 142.6203f };
			Local_1214 = { -141.3225f, -1546.89f, 34.7891f };
			Local_1217 = { -2.8368f, 0f, 139.8128f };
			break;
		
		case 1:
			Local_1184 = { 368.3612f, 317.4821f, 102.8912f };
			Local_1187 = { 4.9194f, 0.0225f, -176.9747f };
			Local_1190 = { 369.0639f, 317.4726f, 102.8941f };
			Local_1193 = { 5.042f, 0.0225f, 178.1396f };
			Local_1196 = { 367.0291f, 314.8014f, 104.37f };
			Local_1199 = { -7.4995f, 0.0233f, -111.5294f };
			Local_1202 = { 366.4452f, 312.9081f, 104.3692f };
			Local_1205 = { -7.4995f, 0.0233f, -100.7122f };
			Local_1208 = { 386.8919f, 308.6107f, 103.2039f };
			Local_1211 = { 0.3447f, 0.0472f, 82.1591f };
			Local_1214 = { 390.2213f, 309.4721f, 103.7617f };
			Local_1217 = { -4.3057f, 0.0299f, 76.2809f };
			break;
		
		case 2:
			Local_1184 = { -809.5582f, -2548.848f, 13.2619f };
			Local_1187 = { 6.3036f, 0.0031f, 78.738f };
			Local_1190 = { -809.6061f, -2549.241f, 13.2619f };
			Local_1193 = { 3.5967f, 0.0031f, 75.5951f };
			Local_1196 = { -811.1327f, -2544.394f, 14.5064f };
			Local_1199 = { -5.1571f, 0.0031f, 151.0646f };
			Local_1202 = { -812.3164f, -2543.757f, 14.5063f };
			Local_1205 = { -5.1571f, 0.0031f, 154.2332f };
			Local_1208 = { -819.8916f, -2564.119f, 13.8366f };
			Local_1211 = { -3.7349f, 0.0039f, -21.4233f };
			Local_1214 = { -819.4815f, -2566.388f, 14.1387f };
			Local_1217 = { -5.6248f, 0.0039f, -24.2558f };
			break;
		
		case 3:
			Local_1184 = { 776.7724f, -1143.73f, 28.3016f };
			Local_1187 = { 11.6472f, -0.0085f, -162.2849f };
			Local_1190 = { 778.136f, -1143.352f, 28.3014f };
			Local_1193 = { 10.4548f, -0.0085f, -170.727f };
			Local_1196 = { 775.2812f, -1146.74f, 29.6806f };
			Local_1199 = { -6.3919f, -0.0085f, -92.6672f };
			Local_1202 = { 775.3398f, -1148.591f, 29.6808f };
			Local_1205 = { -6.3919f, -0.0085f, -84.5603f };
			Local_1208 = { 795.929f, -1146.452f, 29.5086f };
			Local_1211 = { -2.946f, -0.0103f, 96.9974f };
			Local_1214 = { 799.178f, -1144.664f, 29.6776f };
			Local_1217 = { -3.7454f, -0.0103f, 96.6498f };
			break;
		
		case 4:
			Local_1172 = { -1081.793f, -1162.103f, 6.1895f };
			Local_1175 = { 9.5571f, 0.0247f, 143.3313f };
			Local_1178 = { -0.2995f, 1.6679f, 0.9952f };
			Local_1181 = { 0.7073f, -1.1228f, 0.5493f };
			Local_1184 = { -1059.43f, -1154.967f, 1.585626f };
			Local_1187 = { 5.101318f, 0.220638f, 46.04638f };
			Local_1190 = { -1060.099f, -1155.654f, 1.589301f };
			Local_1193 = { 5.101318f, 0.220639f, 55.21057f };
			Local_1196 = { -1057.833f, -1153.64f, 2.157057f };
			Local_1199 = { -1.541381f, 0.155416f, 92.08984f };
			Local_1202 = { -1058.799f, -1151.695f, 3.019048f };
			Local_1205 = { -8.483372f, 0.155417f, 120.0729f };
			Local_1208 = { -1073.324f, -1160.225f, 2.467393f };
			Local_1211 = { -9.078616f, 0.014872f, -56.52562f };
			Local_1214 = { -1074.407f, -1161.541f, 2.727543f };
			Local_1217 = { -9.078616f, 0.014872f, -56.52562f };
			break;
		
		case 5:
			Local_1172 = { 3071.705f, 680.4286f, -0.578093f };
			Local_1175 = { -14.99741f, 0f, 169.4703f };
			Local_1220 = { 3071.258f, 678.9485f, 3.839843f };
			Local_1223 = { -0.639399f, 0f, 168.9246f };
			Local_1178 = { 3070.761f, 677.4249f, 3.822088f };
			Local_1181 = { -0.639399f, 0f, 169.1743f };
			Local_1184 = { 3074.792f, 632.8167f, 2.242464f };
			Local_1187 = { 0.235991f, 0f, 58.90903f };
			Local_1190 = { 3072.679f, 629.8298f, 2.241469f };
			Local_1193 = { 0.235991f, 0f, 32.61848f };
			break;
		
		case 6:
			Local_1172 = { 3482.451f, 5171.12f, -2.622287f };
			Local_1175 = { -12.38926f, 0f, 26.13617f };
			Local_1220 = { 3481.747f, 5172.554f, 6.65429f };
			Local_1223 = { -9.870142f, 0f, 26.13616f };
			Local_1178 = { 3479.127f, 5173.103f, 6.487341f };
			Local_1181 = { -9.603036f, 0f, 21.92711f };
			Local_1184 = { 3457.328f, 5187.86f, 4.6358f };
			Local_1187 = { -24.8126f, 0.0397f, -41.5662f };
			Local_1190 = { 3456.51f, 5197.896f, 3.9627f };
			Local_1193 = { -23.4737f, 0.0397f, -128.4928f };
			break;
		
		case 7:
			Local_1172 = { 190.5428f, 3596.879f, 28.21027f };
			Local_1175 = { -16.6129f, -1E-06f, -17.12342f };
			Local_1220 = { 190.9281f, 3598.446f, 33.46021f };
			Local_1223 = { -6.51379f, 0f, -20.80637f };
			Local_1178 = { 189.0555f, 3599.194f, 33.45909f };
			Local_1181 = { -6.431107f, 0f, -24.99328f };
			Local_1184 = { 187.3536f, 3623.253f, 31.378f };
			Local_1187 = { 0.968793f, 0f, -171.1333f };
			Local_1190 = { 189.6363f, 3623.848f, 31.37059f };
			Local_1193 = { 0.968793f, 0f, 175.6184f };
			break;
		
		case 8:
			Local_1172 = { 617.7053f, -2150.886f, -6.053663f };
			Local_1175 = { -12.89488f, -2E-06f, -21.27229f };
			Local_1220 = { 616.8138f, -2149.222f, 1.441951f };
			Local_1223 = { 5.644659f, -2E-06f, -24.9429f };
			Local_1178 = { 615.142f, -2147.596f, 1.518046f };
			Local_1181 = { 3.451776f, -2E-06f, -29.07558f };
			Local_1184 = { 615.4761f, -2124.192f, 1.467611f };
			Local_1187 = { 0.143961f, 0f, -156.6226f };
			Local_1190 = { 617.9708f, -2122.319f, 1.464393f };
			Local_1193 = { 0.143961f, 0f, 179.0641f };
			break;
	}
	if (func_457())
	{
		Local_1208 = { -2.0797f, -1.409f, 1.3288f };
		Local_1211 = { -2.1875f, 1.5807f, 1.1049f };
		Local_1214 = { -0.6528f, -5.8087f, 2.317f };
		Local_1217 = { -0.7557f, -2.8423f, 1.8806f };
	}
}

int func_497()//Position - 0x34A00
{
	int iVar0;
	
	if (GlobalFunc_4947(Local_80.x))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(Local_80.x);
		if (((((((((((((((((((((((((((((((iVar0 == joaat("baller") || iVar0 == joaat("baller2")) || iVar0 == joaat("bison")) || iVar0 == joaat("bison2")) || iVar0 == joaat("bison3")) || iVar0 == joaat("bobcatxl")) || iVar0 == joaat("cavalcade")) || iVar0 == joaat("cavalcade2")) || iVar0 == joaat("crusader")) || iVar0 == joaat("dubsta")) || iVar0 == joaat("dubsta2")) || iVar0 == joaat("fq2")) || iVar0 == joaat("granger")) || iVar0 == joaat("gresley")) || iVar0 == joaat("landstalker")) || iVar0 == joaat("mesa")) || iVar0 == joaat("mesa2")) || iVar0 == joaat("mesa3")) || iVar0 == joaat("patriot")) || iVar0 == joaat("radi")) || iVar0 == joaat("rancherxl")) || iVar0 == joaat("rancherxl2")) || iVar0 == joaat("rebel")) || iVar0 == joaat("rocoto")) || iVar0 == joaat("sadler")) || iVar0 == joaat("sadler2")) || iVar0 == joaat("sandking")) || iVar0 == joaat("sandking2")) || iVar0 == joaat("seminole")) || iVar0 == joaat("superd")) || iVar0 == MISC::GET_HASH_KEY("huntley")) || iVar0 == MISC::GET_HASH_KEY("DUBSTA3"))
		{
			return 1;
		}
	}
	return 0;
}

void func_498(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x34BE3
{
	switch (iParam0)
	{
		case 0:
			uParam6->f_247 = 2;
			uParam6->f_250 = 30f;
			uParam6->f_251 = 38f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -151.94f, -1566.87f, 34.48f };
			uParam6->f_230[0] = 139.8f;
			uParam6->f_181[1 /*3*/] = { -155.98f, -1563.47f, 34.6f };
			uParam6->f_230[1] = 139.8f;
			uParam6->f_181[2 /*3*/] = { -146.4f, -1560.51f, 34.28f };
			uParam6->f_230[2] = 139.8f;
			uParam6->f_181[3 /*3*/] = { -150.53f, -1556.87f, 34.4f };
			uParam6->f_230[3] = 139.8f;
			uParam6->f_181[4 /*3*/] = { -141.15f, -1553.81f, 33.98f };
			uParam6->f_230[4] = 139.8f;
			uParam6->f_181[5 /*3*/] = { -144.97f, -1550.67f, 34.07f };
			uParam6->f_230[5] = 139.8f;
			uParam6->f_248 = 18;
			*(uParam6[0 /*3*/]) = { -177.4019f, -1594.644f, 33.4994f };
			*(uParam6[1 /*3*/]) = { -181.9884f, -1688.1f, 32.2323f };
			*(uParam6[2 /*3*/]) = { -68.2538f, -1793.952f, 26.8799f };
			*(uParam6[3 /*3*/]) = { 56.0836f, -1894.422f, 20.5566f };
			*(uParam6[4 /*3*/]) = { 102.9353f, -1868.229f, 23.1889f };
			*(uParam6[5 /*3*/]) = { 236.2683f, -1924.712f, 23.29643f };
			*(uParam6[6 /*3*/]) = { 287.2185f, -1884.079f, 25.9619f };
			*(uParam6[7 /*3*/]) = { 397.2169f, -1948.52f, 23.3175f };
			*(uParam6[8 /*3*/]) = { 552.7326f, -1879.798f, 24.4769f };
			*(uParam6[9 /*3*/]) = { 599.2975f, -1699.438f, 21.9581f };
			*(uParam6[10 /*3*/]) = { 603.7488f, -1595.439f, 25.5479f };
			*(uParam6[11 /*3*/]) = { 514.6337f, -1443.954f, 28.3433f };
			*(uParam6[12 /*3*/]) = { 471.4342f, -1433.925f, 28.34211f };
			*(uParam6[13 /*3*/]) = { 293.2f, -1521.2f, 28.3415f };
			*(uParam6[14 /*3*/]) = { 182.5014f, -1585.272f, 28.3099f };
			*(uParam6[15 /*3*/]) = { 16.9636f, -1465.682f, 29.5632f };
			*(uParam6[16 /*3*/]) = { -73.9895f, -1476.329f, 31.1385f };
			*(uParam6[17 /*3*/]) = { -155.8476f, -1566.98f, 34.00011f };
			break;
		
		case 1:
			uParam6->f_247 = 1;
			uParam6->f_250 = 30f;
			uParam6->f_251 = 38f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { 368.64f, 309.52f, 103.16f };
			uParam6->f_230[0] = 74.34f;
			uParam6->f_181[1 /*3*/] = { 370.33f, 314.66f, 103.07f };
			uParam6->f_230[1] = 74.34f;
			uParam6->f_181[2 /*3*/] = { 376.31f, 307.58f, 102.9f };
			uParam6->f_230[2] = 74.34f;
			uParam6->f_181[3 /*3*/] = { 377.5f, 313f, 103.04f };
			uParam6->f_230[3] = 74.34f;
			uParam6->f_181[4 /*3*/] = { 383.49f, 305.81f, 102.86f };
			uParam6->f_230[4] = 74.34f;
			uParam6->f_181[5 /*3*/] = { 385.23f, 311.22f, 102.77f };
			uParam6->f_230[5] = 74.34f;
			uParam6->f_248 = 60;
			*(uParam6[0 /*3*/]) = { 176.5163f, 368.2185f, 107.7932f };
			*(uParam6[1 /*3*/]) = { 74.6353f, 326.5884f, 111.1838f };
			*(uParam6[2 /*3*/]) = { 40.98252f, 278.1664f, 108.628f };
			*(uParam6[3 /*3*/]) = { -6.5086f, 269.1777f, 107.8002f };
			*(uParam6[4 /*3*/]) = { -157.2158f, 260.5422f, 92.9641f };
			*(uParam6[5 /*3*/]) = { -306.6567f, 264.1079f, 86.8654f };
			*(uParam6[6 /*3*/]) = { -510.8915f, 258.964f, 82.0697f };
			*(uParam6[7 /*3*/]) = { -677.1512f, 285.4961f, 81.0311f };
			*(uParam6[8 /*3*/]) = { -829.2744f, 291.7629f, 85.4059f };
			*(uParam6[9 /*3*/]) = { -854.5978f, 467.9413f, 86.39626f };
			*(uParam6[10 /*3*/]) = { -877.5402f, 535.0839f, 90.45716f };
			*(uParam6[11 /*3*/]) = { -1006.234f, 596.4271f, 101.8474f };
			*(uParam6[12 /*3*/]) = { -1211.74f, 545.4279f, 96.67117f };
			*(uParam6[13 /*3*/]) = { -1247.746f, 481.3893f, 92.658f };
			*(uParam6[14 /*3*/]) = { -1209.511f, 468.7086f, 88.8673f };
			*(uParam6[15 /*3*/]) = { -1096.542f, 456.5062f, 76.7926f };
			*(uParam6[16 /*3*/]) = { -1077.046f, 385.2891f, 68.0071f };
			*(uParam6[17 /*3*/]) = { -1081.664f, 292.3875f, 63.0137f };
			*(uParam6[18 /*3*/]) = { -1128.989f, 267.3287f, 64.9992f };
			*(uParam6[19 /*3*/]) = { -1274.646f, 228.7755f, 59.809f };
			*(uParam6[20 /*3*/]) = { -1408.295f, 193.1421f, 57.5883f };
			*(uParam6[21 /*3*/]) = { -1429.799f, -18.8745f, 51.4889f };
			*(uParam6[22 /*3*/]) = { -1466.38f, -91.9526f, 49.9463f };
			*(uParam6[23 /*3*/]) = { -1582.228f, -187.6987f, 54.6562f };
			*(uParam6[24 /*3*/]) = { -1633.187f, -302.6338f, 50.4393f };
			*(uParam6[25 /*3*/]) = { -1755.927f, -441.1943f, 41.2927f };
			*(uParam6[26 /*3*/]) = { -1675.621f, -568.3997f, 33.2031f };
			*(uParam6[27 /*3*/]) = { -1556.63f, -662.1553f, 27.9556f };
			*(uParam6[28 /*3*/]) = { -1441.304f, -761.7834f, 22.5293f };
			*(uParam6[29 /*3*/]) = { -1327.756f, -861.1824f, 15.5558f };
			*(uParam6[30 /*3*/]) = { -1254.9f, -1062.5f, 7.4798f };
			*(uParam6[31 /*3*/]) = { -1306.2f, -1091.1f, 6f };
			*(uParam6[32 /*3*/]) = { -1266.1f, -1265.2f, 3f };
			*(uParam6[33 /*3*/]) = { -1206.7f, -1251.5f, 6f };
			*(uParam6[34 /*3*/]) = { -1149.227f, -1305.18f, 4.164155f };
			*(uParam6[35 /*3*/]) = { -933.4516f, -1221.172f, 4.1712f };
			*(uParam6[36 /*3*/]) = { -804.6487f, -1141.681f, 8.1794f };
			*(uParam6[37 /*3*/]) = { -653.9498f, -1049.006f, 16.1054f };
			*(uParam6[38 /*3*/]) = { -635.1398f, -891.9207f, 23.9038f };
			*(uParam6[39 /*3*/]) = { -633.6005f, -739.1533f, 26.37f };
			*(uParam6[40 /*3*/]) = { -627.4288f, -582.9346f, 33.6256f };
			*(uParam6[41 /*3*/]) = { -625.0278f, -397.2912f, 33.7955f };
			*(uParam6[42 /*3*/]) = { -586.7f, -378.4f, 33.9005f };
			*(uParam6[43 /*3*/]) = { -437.4909f, -388.7413f, 32.1535f };
			*(uParam6[44 /*3*/]) = { -231.909f, -410.7465f, 29.6085f };
			*(uParam6[45 /*3*/]) = { -147.8854f, -373.2199f, 32.7875f };
			*(uParam6[46 /*3*/]) = { -115.0438f, -285.8302f, 40.5101f };
			*(uParam6[47 /*3*/]) = { -51.4044f, -257.3596f, 44.7924f };
			*(uParam6[48 /*3*/]) = { 85.9933f, -309.274f, 45.4642f };
			*(uParam6[49 /*3*/]) = { 225.0007f, -356.0629f, 43.2898f };
			*(uParam6[50 /*3*/]) = { 370.0895f, -402.5069f, 44.9239f };
			*(uParam6[51 /*3*/]) = { 481.0543f, -305.9488f, 45.6763f };
			*(uParam6[52 /*3*/]) = { 527.0013f, -220.0025f, 49.7887f };
			*(uParam6[53 /*3*/]) = { 546.5042f, -101.5203f, 64.26041f };
			*(uParam6[54 /*3*/]) = { 636.0579f, -57.7903f, 75.5052f };
			*(uParam6[55 /*3*/]) = { 703.7552f, 18.0953f, 83.1893f };
			*(uParam6[56 /*3*/]) = { 778.6013f, 128.2524f, 78.3677f };
			*(uParam6[57 /*3*/]) = { 751.6663f, 181.9566f, 81.9156f };
			*(uParam6[58 /*3*/]) = { 609.8065f, 232.9736f, 101.0741f };
			*(uParam6[59 /*3*/]) = { 369.29f, 312.41f, 103.24f };
			break;
		
		case 2:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -816.46f, -2547.3f, 13.5f };
			uParam6->f_230[0] = 341.07f;
			uParam6->f_181[1 /*3*/] = { -812.31f, -2549.09f, 13.33f };
			uParam6->f_230[1] = 341.07f;
			uParam6->f_181[2 /*3*/] = { -818.74f, -2553.95f, 13.38f };
			uParam6->f_230[2] = 341.07f;
			uParam6->f_181[3 /*3*/] = { -815.07f, -2555.46f, 13.41f };
			uParam6->f_230[3] = 341.07f;
			uParam6->f_181[4 /*3*/] = { -822.05f, -2559.68f, 13.49f };
			uParam6->f_230[4] = 341.07f;
			uParam6->f_181[5 /*3*/] = { -817.13f, -2562.07f, 13.34f };
			uParam6->f_230[5] = 341.07f;
			uParam6->f_248 = 30;
			*(uParam6[0 /*3*/]) = { -807.6469f, -2469.847f, 12.7351f };
			*(uParam6[1 /*3*/]) = { -846.8392f, -2324.698f, 16.9914f };
			*(uParam6[2 /*3*/]) = { -762.691f, -2198.874f, 14.9078f };
			*(uParam6[3 /*3*/]) = { -656.6849f, -2105.357f, 14.517f };
			*(uParam6[4 /*3*/]) = { -562.5864f, -2083.101f, 26.3678f };
			*(uParam6[5 /*3*/]) = { -336.5846f, -2111.548f, 22.7184f };
			*(uParam6[6 /*3*/]) = { -238.7528f, -2134.771f, 21.7367f };
			*(uParam6[7 /*3*/]) = { -18.5043f, -2050.755f, 18.0635f };
			*(uParam6[8 /*3*/]) = { 109.6071f, -2047.105f, 17.3701f };
			*(uParam6[9 /*3*/]) = { 162.2125f, -2017.698f, 17.2636f };
			*(uParam6[10 /*3*/]) = { 215.2578f, -1946.236f, 20.9418f };
			*(uParam6[11 /*3*/]) = { 200.6974f, -1907.024f, 22.7627f };
			*(uParam6[12 /*3*/]) = { 113.3993f, -1865.566f, 23.4617f };
			*(uParam6[13 /*3*/]) = { 68.2166f, -1891.056f, 20.7378f };
			*(uParam6[14 /*3*/]) = { -111.4028f, -1759.604f, 28.8334f };
			*(uParam6[15 /*3*/]) = { -242.8844f, -1813.055f, 28.7495f };
			*(uParam6[16 /*3*/]) = { -364.17f, -1821.922f, 21.5683f };
			*(uParam6[17 /*3*/]) = { -478.9611f, -1885.955f, 16.6741f };
			*(uParam6[18 /*3*/]) = { -598.0135f, -1999.651f, 16.4316f };
			*(uParam6[19 /*3*/]) = { -720.7257f, -2133.103f, 12.3082f };
			*(uParam6[20 /*3*/]) = { -777.2783f, -2181.116f, 14.8988f };
			*(uParam6[21 /*3*/]) = { -863.5436f, -2251.442f, 17.3272f };
			*(uParam6[22 /*3*/]) = { -948.965f, -2368.096f, 19.205f };
			*(uParam6[23 /*3*/]) = { -990.7916f, -2440.438f, 19.2041f };
			*(uParam6[24 /*3*/]) = { -1089.384f, -2613.615f, 19.2104f };
			*(uParam6[25 /*3*/]) = { -1084.455f, -2680.642f, 19.2111f };
			*(uParam6[26 /*3*/]) = { -996.711f, -2742.934f, 19.206f };
			*(uParam6[27 /*3*/]) = { -926.4546f, -2730.204f, 19.2052f };
			*(uParam6[28 /*3*/]) = { -874.8831f, -2665.625f, 18.6777f };
			*(uParam6[29 /*3*/]) = { -813.0546f, -2546.738f, 12.7888f };
			break;
		
		case 3:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { 780.54f, -1150.96f, 28.65f };
			uParam6->f_230[0] = 93.71f;
			uParam6->f_181[1 /*3*/] = { 780.24f, -1145.74f, 28.56f };
			uParam6->f_230[1] = 93.71f;
			uParam6->f_181[2 /*3*/] = { 787.47f, -1150.53f, 28.5f };
			uParam6->f_230[2] = 93.71f;
			uParam6->f_181[3 /*3*/] = { 787.19f, -1145.74f, 28.66f };
			uParam6->f_230[3] = 93.71f;
			uParam6->f_181[4 /*3*/] = { 794.1f, -1149.95f, 28.66f };
			uParam6->f_230[4] = 93.71f;
			uParam6->f_181[5 /*3*/] = { 793.58f, -1144.73f, 28.59f };
			uParam6->f_230[5] = 93.71f;
			uParam6->f_248 = 24;
			*(uParam6[0 /*3*/]) = { 660.2601f, -1154.407f, 40.641f };
			*(uParam6[1 /*3*/]) = { 571.5685f, -1178.696f, 41.2734f };
			*(uParam6[2 /*3*/]) = { 421.5113f, -1184.212f, 39.7127f };
			*(uParam6[3 /*3*/]) = { 268.5206f, -1176.572f, 37.1933f };
			*(uParam6[4 /*3*/]) = { 186.8177f, -1162.025f, 37.1079f };
			*(uParam6[5 /*3*/]) = { 71f, -1163.3f, 28.7f };
			*(uParam6[6 /*3*/]) = { 74.9529f, -1267.338f, 28.19373f };
			*(uParam6[7 /*3*/]) = { 244.1904f, -1226.699f, 37.3049f };
			*(uParam6[8 /*3*/]) = { 394.5264f, -1224.619f, 39.1224f };
			*(uParam6[9 /*3*/]) = { 519.6835f, -1228.254f, 40.9569f };
			*(uParam6[10 /*3*/]) = { 643.6398f, -1244.262f, 40.9174f };
			*(uParam6[11 /*3*/]) = { 765.5765f, -1242.766f, 25.9457f };
			*(uParam6[12 /*3*/]) = { 851.6f, -1254.2f, 26.9066f };
			*(uParam6[13 /*3*/]) = { 859.1f, -1326.3f, 37.0286f };
			*(uParam6[14 /*3*/]) = { 739.5747f, -1347.013f, 38.903f };
			*(uParam6[15 /*3*/]) = { 695.9282f, -1292.136f, 41.1269f };
			*(uParam6[16 /*3*/]) = { 729.7197f, -1235.624f, 43.9479f };
			*(uParam6[17 /*3*/]) = { 755.8483f, -1195.996f, 44.0202f };
			*(uParam6[18 /*3*/]) = { 724.6743f, -1156.984f, 43.7047f };
			*(uParam6[19 /*3*/]) = { 688.6f, -1101.7f, 40.8716f };
			*(uParam6[20 /*3*/]) = { 732.4061f, -1045.311f, 39.4973f };
			*(uParam6[21 /*3*/]) = { 815.3089f, -1042.096f, 41.2541f };
			*(uParam6[22 /*3*/]) = { 865.2093f, -1093.343f, 35.9246f };
			*(uParam6[23 /*3*/]) = { 777.4238f, -1148.405f, 28.07877f };
			break;
		
		case 4:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -1063.95f, -1153.21f, 1.52f };
			uParam6->f_230[0] = 299.67f;
			uParam6->f_181[1 /*3*/] = { -1062.53f, -1155.37f, 1.46f };
			uParam6->f_230[1] = 299.67f;
			uParam6->f_181[2 /*3*/] = { -1068.6f, -1155.54f, 1.61f };
			uParam6->f_230[2] = 299.67f;
			uParam6->f_181[3 /*3*/] = { -1066.89f, -1157.64f, 1.56f };
			uParam6->f_230[3] = 299.67f;
			uParam6->f_181[4 /*3*/] = { -1072.76f, -1158.02f, 1.53f };
			uParam6->f_230[4] = 299.67f;
			uParam6->f_181[5 /*3*/] = { -1072.01f, -1160.27f, 1.48f };
			uParam6->f_230[5] = 299.67f;
			uParam6->f_248 = 25;
			*(uParam6[0 /*3*/]) = { -925.4882f, -1072.804f, 1.1502f };
			*(uParam6[1 /*3*/]) = { -838.902f, -1020.697f, 12.2795f };
			*(uParam6[2 /*3*/]) = { -752.4019f, -968.1661f, 15.5933f };
			*(uParam6[3 /*3*/]) = { -660.0514f, -959.4323f, 20.3359f };
			*(uParam6[4 /*3*/]) = { -643.1226f, -996.0269f, 19.6655f };
			*(uParam6[5 /*3*/]) = { -755.0204f, -1100.572f, 9.7347f };
			*(uParam6[6 /*3*/]) = { -844.4481f, -1152.17f, 5.5481f };
			*(uParam6[7 /*3*/]) = { -934.6541f, -1204.102f, 4.1492f };
			*(uParam6[8 /*3*/]) = { -968.2922f, -1181.906f, 2.909f };
			*(uParam6[9 /*3*/]) = { -1023.329f, -1087.952f, 1.0397f };
			*(uParam6[10 /*3*/]) = { -1078.633f, -994.3664f, 1.2191f };
			*(uParam6[11 /*3*/]) = { -1170.782f, -837.8701f, 13.2119f };
			*(uParam6[12 /*3*/]) = { -1312.033f, -658.3402f, 25.5365f };
			*(uParam6[13 /*3*/]) = { -1375.911f, -560.5161f, 29.234f };
			*(uParam6[14 /*3*/]) = { -1446.224f, -460.4871f, 34.1264f };
			*(uParam6[15 /*3*/]) = { -1487.252f, -447.6395f, 34.594f };
			*(uParam6[16 /*3*/]) = { -1638.216f, -562.0701f, 32.4537f };
			*(uParam6[17 /*3*/]) = { -1625.822f, -610.9568f, 31.6803f };
			*(uParam6[18 /*3*/]) = { -1531.39f, -684.85f, 27.8725f };
			*(uParam6[19 /*3*/]) = { -1424.36f, -771.3326f, 21.8328f };
			*(uParam6[20 /*3*/]) = { -1300.448f, -901.4435f, 10.3951f };
			*(uParam6[21 /*3*/]) = { -1257.012f, -1048.034f, 7.5077f };
			*(uParam6[22 /*3*/]) = { -1211.112f, -1198.487f, 6.755771f };
			*(uParam6[23 /*3*/]) = { -1104.378f, -1177.508f, 1.2615f };
			*(uParam6[24 /*3*/]) = { -1062.986f, -1153.365f, 1.129525f };
			break;
		
		case 5:
			uParam6->f_247 = 1;
			uParam6->f_250 = 52f;
			uParam6->f_251 = 56f;
			uParam6->f_252 = 60f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 3058.771f, 637.4882f, 0f };
			uParam6->f_230[0] = 24f;
			uParam6->f_181[1 /*3*/] = { 3061.604f, 638.7496f, 0f };
			uParam6->f_230[1] = 24f;
			uParam6->f_181[2 /*3*/] = { 3064.437f, 640.0109f, 0f };
			uParam6->f_230[2] = 24f;
			uParam6->f_181[3 /*3*/] = { 3067.27f, 641.2722f, 0f };
			uParam6->f_230[3] = 24f;
			uParam6->f_181[4 /*3*/] = { 3061.63f, 631.067f, 0f };
			uParam6->f_230[4] = 24f;
			uParam6->f_181[5 /*3*/] = { 3064.463f, 632.3283f, 0f };
			uParam6->f_230[5] = 24f;
			uParam6->f_181[6 /*3*/] = { 3067.296f, 633.5896f, 0f };
			uParam6->f_230[6] = 24f;
			uParam6->f_181[7 /*3*/] = { 3070.129f, 634.851f, 0f };
			uParam6->f_230[7] = 24f;
			uParam6->f_248 = 19;
			*(uParam6[0 /*3*/]) = { 2978.929f, 778.0858f, 0f };
			*(uParam6[1 /*3*/]) = { 2925.586f, 840.1877f, 0f };
			*(uParam6[2 /*3*/]) = { 2913.896f, 1011.495f, 0f };
			*(uParam6[3 /*3*/]) = { 2903.343f, 1120.076f, 0f };
			*(uParam6[4 /*3*/]) = { 2944.478f, 1197.342f, 0f };
			*(uParam6[5 /*3*/]) = { 3020.189f, 1217.427f, 0f };
			*(uParam6[6 /*3*/]) = { 3107.794f, 1212.536f, 0f };
			*(uParam6[7 /*3*/]) = { 3164.754f, 1246.812f, 0f };
			*(uParam6[8 /*3*/]) = { 3185.532f, 1293.382f, 0f };
			*(uParam6[9 /*3*/]) = { 3122.885f, 1432.143f, 0f };
			*(uParam6[10 /*3*/]) = { 3021.7f, 1553.274f, 0f };
			*(uParam6[11 /*3*/]) = { 3014.559f, 1634.445f, 0f };
			*(uParam6[12 /*3*/]) = { 3045.481f, 1681.173f, 0f };
			*(uParam6[13 /*3*/]) = { 3104.443f, 1687.211f, 0f };
			*(uParam6[14 /*3*/]) = { 3147.714f, 1629.84f, 0f };
			*(uParam6[15 /*3*/]) = { 3119.681f, 1571.555f, 0f };
			*(uParam6[16 /*3*/]) = { 3005.006f, 1482.663f, 0f };
			*(uParam6[17 /*3*/]) = { 2973.872f, 1355.766f, 0f };
			*(uParam6[18 /*3*/]) = { 3014.149f, 1187.6f, 0f };
			break;
		
		case 6:
			uParam6->f_247 = 1;
			uParam6->f_250 = 62f;
			uParam6->f_251 = 66f;
			uParam6->f_252 = 70f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 3477.927f, 5203.865f, 0f };
			uParam6->f_230[0] = 227.2083f;
			uParam6->f_181[1 /*3*/] = { 3473.713f, 5199.313f, 0f };
			uParam6->f_230[1] = 227.2083f;
			uParam6->f_181[2 /*3*/] = { 3469.5f, 5194.762f, 0f };
			uParam6->f_230[2] = 227.2083f;
			uParam6->f_181[3 /*3*/] = { 3465.287f, 5190.21f, 0f };
			uParam6->f_230[3] = 227.2083f;
			uParam6->f_181[4 /*3*/] = { 3472.768f, 5208.64f, 0f };
			uParam6->f_230[4] = 227.2083f;
			uParam6->f_181[5 /*3*/] = { 3468.555f, 5204.088f, 0f };
			uParam6->f_230[5] = 227.2083f;
			uParam6->f_181[6 /*3*/] = { 3464.342f, 5199.537f, 0f };
			uParam6->f_230[6] = 227.2083f;
			uParam6->f_181[7 /*3*/] = { 3460.128f, 5194.985f, 0f };
			uParam6->f_230[7] = 227.2083f;
			uParam6->f_248 = 29;
			*(uParam6[0 /*3*/]) = { 3533.901f, 5140.196f, 0f };
			*(uParam6[1 /*3*/]) = { 3561.557f, 5013.942f, 0f };
			*(uParam6[2 /*3*/]) = { 3602.232f, 4928.896f, 0f };
			*(uParam6[3 /*3*/]) = { 3682.408f, 4853.424f, 0f };
			*(uParam6[4 /*3*/]) = { 3776.303f, 4862.4f, 0f };
			*(uParam6[5 /*3*/]) = { 3838.789f, 4851.96f, 0f };
			*(uParam6[6 /*3*/]) = { 3879.336f, 4777.732f, 0f };
			*(uParam6[7 /*3*/]) = { 3875.379f, 4684.574f, 0f };
			*(uParam6[8 /*3*/]) = { 4004.355f, 4513.158f, 0f };
			*(uParam6[9 /*3*/]) = { 4028.42f, 4457.351f, 0f };
			*(uParam6[10 /*3*/]) = { 4011.752f, 4363.838f, 0f };
			*(uParam6[11 /*3*/]) = { 3965.229f, 4321.524f, 0f };
			*(uParam6[12 /*3*/]) = { 3958.307f, 4269.164f, 0f };
			*(uParam6[13 /*3*/]) = { 4007.071f, 4201.311f, 0f };
			*(uParam6[14 /*3*/]) = { 4067.812f, 4155.95f, 0f };
			*(uParam6[15 /*3*/]) = { 4124.166f, 4158.292f, 0f };
			*(uParam6[16 /*3*/]) = { 4173.66f, 4207.495f, 0f };
			*(uParam6[17 /*3*/]) = { 4200.325f, 4325.868f, 0f };
			*(uParam6[18 /*3*/]) = { 4232.361f, 4458.968f, 0f };
			*(uParam6[19 /*3*/]) = { 4212.95f, 4519.744f, 0f };
			*(uParam6[20 /*3*/]) = { 4137.386f, 4562.076f, 0f };
			*(uParam6[21 /*3*/]) = { 3952.561f, 4561.69f, 0f };
			*(uParam6[22 /*3*/]) = { 3850.727f, 4674.479f, 0f };
			*(uParam6[23 /*3*/]) = { 3840.677f, 4729.697f, 0f };
			*(uParam6[24 /*3*/]) = { 3868.624f, 4810.973f, 0f };
			*(uParam6[25 /*3*/]) = { 3861.741f, 4847.778f, 0f };
			*(uParam6[26 /*3*/]) = { 3819.871f, 4912.847f, 0f };
			*(uParam6[27 /*3*/]) = { 3707.324f, 5047.796f, 0f };
			*(uParam6[28 /*3*/]) = { 3603.679f, 5125.124f, 0f };
			break;
		
		case 7:
			uParam6->f_247 = 1;
			uParam6->f_250 = 20f;
			uParam6->f_251 = 30f;
			uParam6->f_252 = 40f;
			uParam6->f_249 = 3;
			uParam6->f_181[0 /*3*/] = { 207.0846f, 3615.2f, 30.1f };
			uParam6->f_230[0] = -188f;
			uParam6->f_181[1 /*3*/] = { 200.9427f, 3616.063f, 30.1f };
			uParam6->f_230[1] = -188f;
			uParam6->f_181[2 /*3*/] = { 194.8008f, 3616.927f, 30.1f };
			uParam6->f_230[2] = -188f;
			uParam6->f_181[3 /*3*/] = { 188.6589f, 3617.79f, 30.1f };
			uParam6->f_230[3] = -188f;
			uParam6->f_248 = 14;
			*(uParam6[0 /*3*/]) = { 156.2047f, 3459.932f, 30f };
			*(uParam6[1 /*3*/]) = { 113.8073f, 3309.78f, 27.996f };
			*(uParam6[2 /*3*/]) = { 36.4057f, 3136.948f, 25.0106f };
			*(uParam6[3 /*3*/]) = { -128.4259f, 3113.228f, 20.7191f };
			*(uParam6[4 /*3*/]) = { -232.13f, 3004.532f, 16.8594f };
			*(uParam6[5 /*3*/]) = { -371.5406f, 3013.692f, 11.5494f };
			*(uParam6[6 /*3*/]) = { -479.2344f, 2908.703f, 12.1299f };
			*(uParam6[7 /*3*/]) = { -611.1117f, 2960.914f, 12.2048f };
			*(uParam6[8 /*3*/]) = { -740.982f, 2867.565f, 12.1505f };
			*(uParam6[9 /*3*/]) = { -863.817f, 2804.024f, 8.5818f };
			*(uParam6[10 /*3*/]) = { -1023.538f, 2833.889f, 2.927f };
			*(uParam6[11 /*3*/]) = { -1160.616f, 2766.003f, -1.4915f };
			*(uParam6[12 /*3*/]) = { -1278.023f, 2669.231f, -0.6163f };
			*(uParam6[13 /*3*/]) = { -1450.428f, 2625.473f, 0f };
			break;
		
		case 8:
			uParam6->f_247 = 1;
			uParam6->f_250 = 72f;
			uParam6->f_251 = 76f;
			uParam6->f_252 = 80f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 626.4072f, -2135.928f, 0f };
			uParam6->f_230[0] = 176f;
			uParam6->f_181[1 /*3*/] = { 623.3137f, -2135.712f, 0f };
			uParam6->f_230[1] = 176f;
			uParam6->f_181[2 /*3*/] = { 620.2201f, -2135.495f, 0f };
			uParam6->f_230[2] = 176f;
			uParam6->f_181[3 /*3*/] = { 617.1265f, -2135.279f, 0f };
			uParam6->f_230[3] = 176f;
			uParam6->f_181[4 /*3*/] = { 626.8975f, -2128.916f, 0f };
			uParam6->f_230[4] = 176f;
			uParam6->f_181[5 /*3*/] = { 623.804f, -2128.7f, 0f };
			uParam6->f_230[5] = 176f;
			uParam6->f_181[6 /*3*/] = { 620.7104f, -2128.483f, 0f };
			uParam6->f_230[6] = 176f;
			uParam6->f_181[7 /*3*/] = { 617.6168f, -2128.267f, 0f };
			uParam6->f_230[7] = 176f;
			uParam6->f_248 = 25;
			*(uParam6[0 /*3*/]) = { 628.2693f, -2361.573f, 0f };
			*(uParam6[1 /*3*/]) = { 624.4983f, -2472.271f, 0f };
			*(uParam6[2 /*3*/]) = { 656.1755f, -2551.063f, 0f };
			*(uParam6[3 /*3*/]) = { 707.1786f, -2577.509f, 0f };
			*(uParam6[4 /*3*/]) = { 821.6584f, -2613.453f, 0f };
			*(uParam6[5 /*3*/]) = { 913.3214f, -2662.629f, 0f };
			*(uParam6[6 /*3*/]) = { 992.793f, -2725.734f, 0f };
			*(uParam6[7 /*3*/]) = { 1010.991f, -2799.774f, 0f };
			*(uParam6[8 /*3*/]) = { 955.9268f, -2841.99f, 0f };
			*(uParam6[9 /*3*/]) = { 838.408f, -2820.556f, 0f };
			*(uParam6[10 /*3*/]) = { 788.3865f, -2739.525f, 0f };
			*(uParam6[11 /*3*/]) = { 781.0709f, -2635.677f, 0f };
			*(uParam6[12 /*3*/]) = { 707.1389f, -2600.342f, 0f };
			*(uParam6[13 /*3*/]) = { 581.391f, -2527.31f, -1f };
			*(uParam6[14 /*3*/]) = { 523.5403f, -2445.459f, 0f };
			*(uParam6[15 /*3*/]) = { 465.708f, -2385.965f, 0f };
			*(uParam6[16 /*3*/]) = { 409.5882f, -2270.467f, 0f };
			*(uParam6[17 /*3*/]) = { 323.1916f, -2259.304f, 0f };
			*(uParam6[18 /*3*/]) = { 271.27f, -2286.134f, 0f };
			*(uParam6[19 /*3*/]) = { 261.3279f, -2344.937f, 0f };
			*(uParam6[20 /*3*/]) = { 295.7343f, -2372.19f, 0f };
			*(uParam6[21 /*3*/]) = { 372.9001f, -2373.087f, 0f };
			*(uParam6[22 /*3*/]) = { 410.8412f, -2413.066f, 0f };
			*(uParam6[23 /*3*/]) = { 412.1277f, -2539.383f, 0f };
			*(uParam6[24 /*3*/]) = { 413.6328f, -2712.87f, 0f };
			break;
	}
}


void func_500()//Position - 0x36B80
{
	if (!func_480())
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_1766)
			{
				GlobalFunc_159("HAO1_4", -1);
				iLocal_1766 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (GlobalFunc_74("HAO1_4"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_501()//Position - 0x36BD4
{
	if (MISC::GET_GAME_TIMER() > iLocal_1779)
	{
		if (((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0])) && GlobalFunc_775(Local_1639.f_28[0], Local_624.f_181[(Local_624.f_249 - 1) /*3*/], 10f)) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1705, 25f))
		{
			if (GlobalFunc_10607(&uLocal_1804, "HAO1AU", "HAO1_HWAR", 8, 0, 0, 0))
			{
				iLocal_1779 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}


void func_503()//Position - 0x36C8F
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1705, 200f))
	{
		func_495();
		func_504(Local_1639.f_28[0], Local_1639.f_35[0]);
	}
}

void func_504(int iParam0, int iParam1)//Position - 0x36CC4
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	
	iVar0 = (Local_624.f_249 - 1);
	if ((GlobalFunc_IsPedNotInjuredOrDead(iParam0) && GlobalFunc_4947(iParam1)) && !ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_6))
	{
		Local_877[iVar0 /*18*/].f_6 = iParam1;
		Local_877[iVar0 /*18*/].f_5 = ENTITY::GET_ENTITY_MODEL(iParam1);
		Local_877[iVar0 /*18*/].f_3 = iParam0;
		Local_877[iVar0 /*18*/].f_4 = ENTITY::GET_ENTITY_MODEL(iParam0);
		func_508(iVar0);
	}
	func_507(1);
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		while (!ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_6))
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_877[iVar0 /*18*/].f_5))
			{
				Var1 = { Local_624.f_181[iVar0 /*3*/] };
				if (Local_606.f_1 == 3)
				{
					Var1.x = (Var1.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
					Var1.f_1 = (Var1.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
				}
				else
				{
					Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_624.f_181[iVar0 /*3*/], Local_624.f_230[iVar0], 0f, -3f, 0f) };
				}
				Local_877[iVar0 /*18*/].f_6 = VEHICLE::CREATE_VEHICLE(Local_877[iVar0 /*18*/].f_5, Var1, Local_624.f_230[iVar0], 1, 1);
				if (Local_606.f_1 == 3)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_877[iVar0 /*18*/].f_6);
					VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(Local_877[iVar0 /*18*/].f_6, 0f);
					VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Local_877[iVar0 /*18*/].f_6, 1);
					VEHICLE::_0xB28B1FE5BFADD7F5(Local_877[iVar0 /*18*/].f_6, 1);
					if (VEHICLE::CAN_ANCHOR_BOAT_HERE(Local_877[iVar0 /*18*/].f_6))
					{
						VEHICLE::SET_BOAT_ANCHOR(Local_877[iVar0 /*18*/].f_6, 1);
					}
					ENTITY::SET_ENTITY_DYNAMIC(Local_877[iVar0 /*18*/].f_6, 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_877[iVar0 /*18*/].f_6);
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_877[iVar0 /*18*/].f_5, 1);
			}
			SYSTEM::WAIT(0);
		}
		func_506();
		if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
		{
			Local_877[(Local_624.f_249 - 1) /*18*/].f_1 = 2;
		}
		while (!ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_3))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_877[iVar0 /*18*/].f_6) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_877[iVar0 /*18*/].f_6, 0)) && STREAMING::HAS_MODEL_LOADED(Local_877[iVar0 /*18*/].f_4))
			{
				Local_877[iVar0 /*18*/].f_3 = PED::CREATE_PED_INSIDE_VEHICLE(Local_877[iVar0 /*18*/].f_6, 26, Local_877[iVar0 /*18*/].f_4, -1, 1, 1);
				if (Local_606.f_1 != 3)
				{
					VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(Local_877[iVar0 /*18*/].f_6, 1);
					Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_624.f_181[iVar0 /*3*/], Local_624.f_230[iVar0], 0f, 2.3f, 0f) };
					if (iVar0 == 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar7);
						TASK::TASK_PAUSE(0, 2800);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_877[iVar0 /*18*/].f_6, Var4, 1.5f, 0, Local_877[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						TASK::CLOSE_SEQUENCE_TASK(uVar7);
						TASK::TASK_PERFORM_SEQUENCE(Local_877[iVar0 /*18*/].f_3, uVar7);
						TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					}
					else if (iVar0 == 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar7);
						TASK::TASK_PAUSE(0, 3300);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_877[iVar0 /*18*/].f_6, Var4, 1.2f, 0, Local_877[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						TASK::CLOSE_SEQUENCE_TASK(uVar7);
						TASK::TASK_PERFORM_SEQUENCE(Local_877[iVar0 /*18*/].f_3, uVar7);
						TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar7);
						TASK::TASK_PAUSE(0, (5500 + iVar0 * 100));
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_877[iVar0 /*18*/].f_6, Var4, 0.8f, 0, Local_877[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						TASK::CLOSE_SEQUENCE_TASK(uVar7);
						TASK::TASK_PERFORM_SEQUENCE(Local_877[iVar0 /*18*/].f_3, uVar7);
						TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					}
				}
				if (Local_606.f_1 == 1)
				{
					PED::GIVE_PED_HELMET(Local_877[iVar0 /*18*/].f_3, 1, 4096, -1);
				}
				func_505(iVar0);
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_877[iVar0 /*18*/].f_3))
				{
					func_508(iVar0);
				}
			}
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		Local_877[(Local_624.f_249 - 1) /*18*/].f_1 = 2;
	}
	func_507(0);
	switch (Local_606)
	{
		case 0:
			sLocal_1456 = "CityRace0_route1";
			break;
		
		case 1:
			sLocal_1456 = "CityRace1_route1";
			break;
		
		case 2:
			sLocal_1456 = "CityRace3_route1";
			break;
		
		case 3:
			sLocal_1456 = "CityRace4_route1";
			break;
		
		case 4:
			sLocal_1456 = "CityRace5_route1";
			break;
		
		case 5:
			sLocal_1456 = "SeaRace0_route1";
			break;
		
		case 6:
			sLocal_1456 = "SeaRace1_route1";
			break;
		
		case 7:
			sLocal_1456 = "SeaRace2_route1";
			break;
		
		case 8:
			sLocal_1456 = "SeaRace3_route1";
			break;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1456);
	while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1456))
	{
		SYSTEM::WAIT(0);
	}
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_1456, &iLocal_1633);
	iLocal_1633 = (iLocal_1633 - 1);
	if (Local_624.f_247 == 0)
	{
		iLocal_1149 = 0;
	}
	else
	{
		iLocal_1149 = 1;
	}
}

void func_505(int iParam0)//Position - 0x371A5
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_877[iParam0 /*18*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_877[iParam0 /*18*/].f_6))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_877[iParam0 /*18*/].f_6, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(Local_877[iParam0 /*18*/].f_6)));
		if (VEHICLE::GET_NUM_MOD_KITS(Local_877[iParam0 /*18*/].f_6) > 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(Local_877[iParam0 /*18*/].f_6, 0);
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 0) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 0)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 1) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 1, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 1)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 2) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 2)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 3) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 3, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 3)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 4) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 4, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 4)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 5) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 5, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 5)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 6) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 6, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 6)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 8) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 8, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 8)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 9) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 9, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 9)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 11) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 11, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 11)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 12) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 12, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 12)), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 13) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 13, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(Local_877[iParam0 /*18*/].f_6, 13)), false);
			}
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 18, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 17, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_877[iParam0 /*18*/].f_6, 22, true);
		}
	}
}

void func_506()//Position - 0x374BD
{
	if (Local_606 == 3)
	{
		Local_877[0 /*18*/].f_1 = 2;
		Local_877[1 /*18*/].f_1 = 2;
		Local_877[2 /*18*/].f_1 = 2;
		Local_877[3 /*18*/].f_1 = 1;
		Local_877[4 /*18*/].f_1 = 1;
		Local_877[5 /*18*/].f_1 = 0;
		Local_877[6 /*18*/].f_1 = 0;
	}
	else if (Local_606 == 7)
	{
		Local_877[0 /*18*/].f_1 = 2;
		Local_877[1 /*18*/].f_1 = 1;
		Local_877[2 /*18*/].f_1 = 0;
	}
	else
	{
		Local_877[0 /*18*/].f_1 = 2;
		Local_877[1 /*18*/].f_1 = 2;
		Local_877[2 /*18*/].f_1 = 1;
		Local_877[3 /*18*/].f_1 = 1;
		Local_877[4 /*18*/].f_1 = 0;
		Local_877[5 /*18*/].f_1 = 0;
		Local_877[6 /*18*/].f_1 = 0;
	}
}

void func_507(int iParam0)//Position - 0x37572
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_624.f_249 - 1))
		{
			if (Local_877[iVar0 /*18*/].f_4 == 0 || Local_877[iVar0 /*18*/].f_4 == 0)
			{
			}
			STREAMING::REQUEST_MODEL(Local_877[iVar0 /*18*/].f_4);
			STREAMING::REQUEST_MODEL(Local_877[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Local_624.f_249 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_877[iVar0 /*18*/].f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_877[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
}

void func_508(int iParam0)//Position - 0x37606
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_877[iParam0 /*18*/].f_3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_877[iParam0 /*18*/].f_3, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(Local_877[iParam0 /*18*/].f_6, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_877[iParam0 /*18*/].f_6, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_877[iParam0 /*18*/].f_6, 1, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_877[iParam0 /*18*/].f_3, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_877[iParam0 /*18*/].f_6, 1);
		VEHICLE::SET_VEHICLE_STRONG(Local_877[iParam0 /*18*/].f_6, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_877[iParam0 /*18*/].f_6, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_877[iParam0 /*18*/].f_6, false);
		PED::SET_PED_CONFIG_FLAG(Local_877[iParam0 /*18*/].f_3, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_877[iParam0 /*18*/].f_3, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_877[iParam0 /*18*/].f_3, 116, 0);
		PED::SET_PED_CONFIG_FLAG(Local_877[iParam0 /*18*/].f_3, 118, 0);
		PED::SET_PED_CONFIG_FLAG(Local_877[iParam0 /*18*/].f_3, 26, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_877[iParam0 /*18*/].f_6, 1);
		PED::SET_PED_DIES_IN_WATER(Local_877[iParam0 /*18*/].f_3, 0);
		if (Local_606.f_1 == 3)
		{
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_877[iParam0 /*18*/].f_6, 0);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_877[iParam0 /*18*/].f_3, 3);
		}
		Local_877[iParam0 /*18*/] = 0;
	}
}

void func_509()//Position - 0x37736
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1705, 350f))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	func_503();
	switch (iLocal_1701)
	{
		case 0:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1703);
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1703))
			{
				if (iLocal_1768)
				{
					GlobalFunc_8535();
					if ((GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && GlobalFunc_10607(&uLocal_1804, "HAO1AU", "HAO1_MCS1LO", 8, 0, 0, 0))
					{
						if (GlobalFunc_4947(Local_1639.f_35[0]))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1639.f_28[0], Local_1639.f_35[0], sLocal_1703, 786469, 0, 8, -1, -1082130432, 0, 1073741824);
						}
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_1711, Local_1714);
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_1705 - Vector(300f, 300f, 300f), Local_1705 + Vector(300f, 300f, 300f));
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_1711, Local_1714, 0, 1);
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_1705 - Vector(300f, 300f, 300f), Local_1705 + Vector(300f, 300f, 300f), 0, 1);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1782, Local_1785, fLocal_1788, 0, 0, 1);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1789, Local_1792, fLocal_1795, 0, 0, 1);
						GlobalFunc_10697(0f, 0f, 0f, 0f, 1, 1);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1796, Local_1799, fLocal_1802, 0, 0, 1);
						GlobalFunc_846(&uLocal_1704);
						HUD::CLEAR_PRINTS();
						iLocal_1701 = 1;
					}
				}
				else
				{
					iLocal_1701 = 2;
				}
			}
			break;
		
		case 1:
			GlobalFunc_8535();
			if (!GlobalFunc_111())
			{
				if (iLocal_1768)
				{
					GlobalFunc_164("HAO1_1", 7500, 1);
					iLocal_1768 = 0;
				}
				iLocal_1701 = 2;
			}
			break;
		
		case 2:
			if (!(GlobalFunc_4947(Local_1639.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1639.f_35[0], 1)))
			{
				if (func_480())
				{
					HUD::CLEAR_HELP(1);
					RECORDING::_0x293220DA1B46CEBC(4f, 4f, 3);
					iLocal_1701 = 3;
				}
				else
				{
					func_500();
				}
			}
			func_501();
			break;
		
		case 3:
			iLocal_1700 = 4;
			iLocal_1701 = 0;
			break;
	}
	func_484();
	func_483();
}


































void func_543()//Position - 0x3A328
{
	float fVar0;
	int iVar1;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_1701)
	{
		case 0:
			GlobalFunc_10538("hao_mcs_1", 0);
			if (GlobalFunc_7961(1, 1093140480, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1639.f_28[0], "Hao", 0, 0, 0);
				}
				if (GlobalFunc_4947(Local_1639.f_35[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1639.f_35[0], "hao_car", 0, 0, 0);
				}
				GlobalFunc_79(500, 0);
				GlobalFunc_9161();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				SYSTEM::WAIT(0);
				GlobalFunc_130(&(Local_1639.f_41[0]));
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				fVar0 = 0f;
				if (GlobalFunc_4947(iVar1))
				{
					fVar0 = ENTITY::GET_ENTITY_HEADING(iVar1);
				}
				if (fVar0 > 0f && fVar0 < 180f)
				{
					fLocal_1720 = 90.3906f;
				}
				else
				{
					fLocal_1720 = 270.3906f;
				}
				GlobalFunc_9805(Local_1725, Local_1728, fLocal_1731, Local_1717, fLocal_1720, GlobalFunc_625(), 1, 1, 1, 0, 0);
				GlobalFunc_9805(Local_1732, Local_1735, fLocal_1738, Local_1717, fLocal_1720, GlobalFunc_625(), 1, 1, 1, 0, 0);
				GlobalFunc_9805(Local_1739, Local_1742, fLocal_1745, Local_1717, fLocal_1720, GlobalFunc_625(), 1, 1, 1, 0, 0);
				if (iVar1 != Local_1639.f_35[1])
				{
					if (GlobalFunc_4947(Local_1639.f_35[1]))
					{
						GlobalFunc_6453(Local_1639.f_35[1], -91.07f, -1273.45f, 28.86f);
						ENTITY::SET_ENTITY_HEADING(Local_1639.f_35[1], 0.57f);
					}
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1746, Local_1749, fLocal_1752, 0, 0, 1);
				func_549(Local_1721, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_1701 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]) && GlobalFunc_4947(Local_1639.f_35[0]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Hao", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("hao_car", 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_1639.f_28[0], Local_1639.f_35[0], -1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_1639.f_35[0], 0, 1);
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -72.4639f, -1261.243f, 28.093f, 1, 0, 0, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_548(1, 1, 1, 1);
				iLocal_1701 = 3;
			}
			break;
		
		case 3:
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_4923(&Local_1639, 0, 1);
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_1746, Local_1749, fLocal_1752, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
			}
			iLocal_1768 = 1;
			bLocal_1769 = true;
			GlobalFunc_79(500, 1);
			iLocal_1700 = 3;
			iLocal_1701 = 0;
			GlobalFunc_8536(39, 1);
			GlobalFunc_2198(59, 0, 0);
			break;
	}
}





void func_548(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3A84A
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_549(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x3A8F1
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9154(0);
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
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_271(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
















void func_565()//Position - 0x3B4DD
{
	var uVar0;
	struct<3> Var1;
	
	GlobalFunc_8535();
	GlobalFunc_10538("hao_mcs_1", 0);
	switch (iLocal_1701)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_1765);
			if (((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1765) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0])) && GlobalFunc_4947(Local_1639.f_35[0]))
			{
				uVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1639.f_35[0], "chassis_dummy");
				Var1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_1639.f_35[0], uVar0) };
				uLocal_1764 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, ENTITY::GET_ENTITY_ROTATION(Local_1639.f_35[0], 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1764, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1764, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1764, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_1639.f_28[0], uLocal_1764, sLocal_1765, "hao_leadin", 8f, -8f, 9, 16, 1148846080, 0);
				TASK::TASK_LOOK_AT_ENTITY(Local_1639.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_1639.f_28[0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_1701 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1764))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1764) >= 0.9f)
				{
					iLocal_1701 = 3;
				}
			}
			else
			{
				iLocal_1701 = 3;
			}
			break;
		
		case 3:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			iLocal_1700 = 2;
			iLocal_1701 = 0;
			break;
	}
}

void func_566()//Position - 0x3B642
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	var uVar6;
	
	switch (iLocal_1701)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("HAO1", 0);
			sLocal_1456 = "CityRace0_route1";
			GlobalFunc_173(&uLocal_1804, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]))
			{
				GlobalFunc_173(&uLocal_1804, 3, Local_1639.f_28[0], "HAO", 0, 1);
				TASK::TASK_CLEAR_LOOK_AT(Local_1639.f_28[0]);
			}
			if (GlobalFunc_4947(Local_1639.f_35[0]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1639.f_35[0], 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_1639.f_35[0], 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1639.f_35[0], 3);
			}
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			STREAMING::SET_REDUCE_PED_MODEL_BUDGET(1);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(1);
			func_612(1);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1703);
			Local_606 = 0;
			Local_606.f_1 = 2;
			func_498(Local_606, &Local_624);
			func_495();
			GlobalFunc_563(1);
			iLocal_1701 = 1;
			break;
		
		case 1:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (GlobalFunc_Is_Mission_Retry())
				{
					iVar1 = GlobalFunc_Get_Mission_Fail_Checkpoint();
					if (Global_84544 == 1)
					{
						iVar1++;
					}
					switch (iVar1)
					{
						case 0:
							GlobalFunc_4972(-72.4774f, -1262.76f, 27.9891f, 119.6309f, 1, 0);
							uVar2 = GlobalFunc_104(24);
							if (GlobalFunc_4947(uVar2))
							{
								if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(uVar2, 1), 1, &Var3, &uVar6))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Var3, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iVar2, uVar6);
								}
							}
							GlobalFunc_10698(&iVar0, Local_1717, fLocal_1720, 0, 1, 0, 0, 1, joaat("buffalo"), 0, 145);
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]) && GlobalFunc_4947(Local_1639.f_35[0]))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1639.f_35[0], -1000f, 1);
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1639.f_28[0], -1000f, 1);
								SYSTEM::WAIT(0);
							}
							if ((GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]) && GlobalFunc_4947(Local_1639.f_35[0])) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1639.f_35[0], -1))
							{
								PED::SET_PED_INTO_VEHICLE(Local_1639.f_28[0], Local_1639.f_35[0], -1);
								GlobalFunc_6453(Local_1639.f_35[0], -89.0261f, -1260.996f, 28.2992f);
								ENTITY::SET_ENTITY_HEADING(Local_1639.f_35[0], 112.5636f);
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1639.f_35[0], 1, 1);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1639.f_35[0], 5f);
							}
							GlobalFunc_4967(0, -1, 1);
							func_569(1, 1, 1);
							iLocal_1701 = 3;
							iLocal_1700 = 2;
							break;
						
						case 1:
							GlobalFunc_4972(Local_1708, 1.31f, 1, 0);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_480())
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, 0.1f, 1, 0);
							}
							else
							{
								GlobalFunc_10698(&iVar0, Local_1708, 1.31f, 0, 1, 0, 0, 1, joaat("buffalo"), 0, 145);
								if (GlobalFunc_4947(iVar0))
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 1, 1);
								}
							}
							GlobalFunc_4967(iVar0, -1, 1);
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1639.f_28[0], "special_ped@hao@base", "hao_base", 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1639.f_28[0], -1000f, 1);
							}
							if (GlobalFunc_4947(Local_1639.f_35[0]) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1639.f_35[0], "special_ped@hao@base", "hao_base_penumbra", 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1639.f_35[0], -1000f, 1);
							}
							MISC::CLEAR_AREA_OF_VEHICLES(GlobalFunc_271(PLAYER::PLAYER_ID()), 500f, 0, 0, 0, 0, 0);
							Local_606 = 0;
							Local_606.f_1 = 2;
							func_489(1, 1);
							func_474();
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							func_478();
							while (func_568())
							{
								func_503();
							}
							func_473();
							func_567();
							if (!GlobalFunc_IsPedNotInjuredOrDead(Local_1639.f_28[0]))
							{
							}
							if (!GlobalFunc_4947(Local_1639.f_35[0]))
							{
							}
							iLocal_1701 = 3;
							iLocal_1700 = 6;
							break;
						
						case 2:
							GlobalFunc_4972(-29.86f, -1833.06f, 25.37f, 234.16f, 1, 0);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (GlobalFunc_4947(iVar0))
								{
								}
								else
								{
									GlobalFunc_10698(&iVar0, -29.86f, -1833.06f, 25.37f, 234.16f, 0, 0, 0, 0, 1, joaat("buffalo"), 0, 145);
								}
							}
							else
							{
								GlobalFunc_10698(&iVar0, -29.86f, -1833.06f, 25.37f, 234.16f, 0, 0, 0, 0, 1, joaat("buffalo"), 0, 145);
							}
							GlobalFunc_4967(iVar0, -1, 1);
							func_569(1, 1, 1);
							iLocal_1701 = 0;
							iLocal_1700 = 9;
							break;
						
						default:
							break;
					}
				}
				else
				{
					iLocal_1701 = 3;
				}
			}
			break;
		
		case 3:
			iLocal_1700 = 1;
			iLocal_1701 = 0;
			break;
	}
}

void func_567()//Position - 0x3BAFE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_877[iVar0 /*18*/].f_3) && GlobalFunc_4947(Local_877[iVar0 /*18*/].f_6))
		{
			TASK::CLEAR_PED_TASKS(Local_877[iVar0 /*18*/].f_3);
			VEHICLE::BRING_VEHICLE_TO_HALT(Local_877[iVar0 /*18*/].f_6, 0.1f, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Local_877[iVar0 /*18*/].f_6, Local_624.f_230[iVar0]);
			GlobalFunc_6453(Local_877[iVar0 /*18*/].f_6, Local_624.f_181[iVar0 /*3*/]);
		}
		iVar0++;
	}
}

int func_568()//Position - 0x3BB92
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_624.f_249 - 1))
	{
		if (!GlobalFunc_IsPedNotInjuredOrDead(Local_877[iVar0 /*18*/].f_3))
		{
			return 1;
		}
		if (!GlobalFunc_4947(Local_877[iVar0 /*18*/].f_6))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_569(int iParam0, int iParam1, int iParam2)//Position - 0x3BBDD
{
	func_548(0, 0, iParam2, 1);
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











































void func_612(int iParam0)//Position - 0x4066B
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("airbus"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("biff"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("coach"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("firetruk"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("flatbed"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pounder"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rubble"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tiptruck"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tiptruck2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tourbus"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), iParam0);
}


void func_614(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x40738
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

















int func_631(var uParam0)//Position - 0x41267
{
	int iVar0[4];
	int iVar5;
	var uVar6;
	char* sVar7;
	bool bVar8;
	var uVar9;
	struct<3> Var10;
	
	sVar7 = "special_ped@hao@base";
	iVar0[0] = uLocal_79;
	iVar0[1] = joaat("penumbra");
	iVar0[2] = joaat("prop_npc_phone");
	iVar0[3] = joaat("ruiner");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -72.13491f, -1256.712f, 27.68361f };
			uParam0->f_17[1 /*3*/] = { -72.18015f, -1267.587f, 29.24852f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 0;
			StringCopy(&(uParam0->f_9), "HAO_MCS_1", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar5]);
				iVar5++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar7);
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar7))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar8 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_8025(&(uParam0->f_28[0]), 53, -71.93684f, -1259.7f, 28.19359f, -177.55f, "HAO LAUNCHER RC - HAO", 1))
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_633(&(uParam0->f_35[0]), iVar0[1], -72.3226f, -1258.643f, 28.1915f, 90.8326f);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 38, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 91, 0);
				VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_35[0], 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 0, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 1, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 2, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 3, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 4, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 6, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 7, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 10, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 23, 20);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 0, 2, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 1, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 2, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 3, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 4, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 6, 0, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 7, 2, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 10, 0, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 23, 20, false);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 18, true);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 17, true);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 22, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				VEHICLE::ROLL_DOWN_WINDOW(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_35[0], 2);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0]);
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				func_633(&(uParam0->f_35[1]), iVar0[3], -91.07f, -1273.45f, 28.86f, 0.57f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 10);
			}
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[2], -71.93684f, -1259.078f, 28.19359f, -177.55f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
			}
			if (bVar8)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_IsPedNotInjuredOrDead(uParam0->f_28[0]) && GlobalFunc_4947(uParam0->f_35[0]))
			{
				uVar9 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_35[0], "chassis_dummy");
				Var10 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_35[0], uVar9) };
				uVar6 = PED::CREATE_SYNCHRONIZED_SCENE(Var10, ENTITY::GET_ENTITY_ROTATION(uParam0->f_35[0], 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar6, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar6, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uVar6, sVar7, "hao_base", 8f, -8f, 9, 16, 1148846080, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
			}
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar5]);
				iVar5++;
			}
			return 1;
			break;
	}
	return 0;
}


void func_633(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x416F5
{
	GlobalFunc_7089(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}







void func_640()//Position - 0x418DA
{
	GlobalFunc_53();
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_650(0);
	}
	GlobalFunc_563(0);
	func_641(&Local_1639, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_641(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x41909
{
	GlobalFunc_7198(uParam0, iParam1);
	GlobalFunc_8534(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}









void func_650(bool bParam0)//Position - 0x41A8D
{
	GlobalFunc_846(&uLocal_1704);
	if (GlobalFunc_4947(Local_1639.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1639.f_35[0], 1);
	}
	if (bParam0)
	{
		GlobalFunc_69(&(Local_1639.f_28[0]));
		GlobalFunc_7089(&(Local_1639.f_35[0]));
		GlobalFunc_7089(&(Local_1639.f_35[1]));
	}
	else
	{
		GlobalFunc_2297(&(Local_1639.f_28[0]), 1, 0, 1);
		GlobalFunc_131(&(Local_1639.f_35[0]));
		GlobalFunc_131(&(Local_1639.f_35[1]));
	}
	func_651(bParam0);
	GlobalFunc_8536(39, 0);
	GlobalFunc_2198(59, 1, 0);
	GlobalFunc_6452(1, 1);
	GlobalFunc_6452(7, 1);
	func_612(0);
	if (CAM::DOES_CAM_EXIST(uLocal_1767))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_CAM_ACTIVE(uLocal_1767, 0);
		CAM::DESTROY_CAM(uLocal_1767, 0);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1703);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_1711, Local_1714, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_1705 - Vector(300f, 300f, 300f), Local_1705 + Vector(300f, 300f, 300f), 1, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1782, Local_1785, fLocal_1788, 0, 1, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1796, Local_1799, fLocal_1802, 0, 1, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1789, Local_1792, fLocal_1795, 0, 1, 1);
	HUD::CLEAR_PRINTS();
}

void func_651(bool bParam0)//Position - 0x41BDE
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_655(&uLocal_1231, 1, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if ((Local_612.f_11 == 1 || Local_612.f_11 == 2) || Local_612.f_11 == 3)
	{
		func_654();
	}
	if (Local_612.f_11 == 1)
	{
		func_652();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_RANDOM_TRAINS(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 1, 1);
	func_31(1);
	func_264(bParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1456))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1456);
	}
	GlobalFunc_2297(&uLocal_1445, 1, 0, 1);
	GlobalFunc_2297(&iLocal_1426, 1, 0, 1);
	GlobalFunc_2297(&iLocal_1427, 1, 0, 1);
	GlobalFunc_2297(&iLocal_1428, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.x))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_80.x))
		{
			VEHICLE::SET_VEHICLE_STRONG(Local_80.x, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_80.x, 0);
			if ((Local_606.f_1 == 3 && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		GlobalFunc_131(&Local_80);
	}
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(0);
	Global_1573535 = 0;
	if (Local_606.f_1 == 3)
	{
		AUDIO::STOP_SOUND(uLocal_1227);
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
	else
	{
		AUDIO::STOP_STREAM();
	}
	if (Local_606.f_1 == 3)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MGSR_STOP");
	}
}

void func_652()//Position - 0x41D88
{
	switch (Local_606)
	{
		case 5:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon, 0))
			{
				GlobalFunc_2416(81, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon), 0);
				GlobalFunc_4907();
			}
			break;
		
		case 6:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon, 1))
			{
				GlobalFunc_2416(82, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon), 1);
				GlobalFunc_4907();
			}
			break;
		
		case 7:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon, 2))
			{
				GlobalFunc_2416(83, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon), 2);
				GlobalFunc_4907();
			}
			break;
		
		case 8:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon, 3))
			{
				GlobalFunc_2416(84, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon), 3);
				GlobalFunc_4907();
			}
			break;
		
		case 0:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, 0))
			{
				GlobalFunc_2416(85, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon), 0);
				GlobalFunc_4907();
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, 1))
			{
				GlobalFunc_2416(86, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon), 1);
				GlobalFunc_4907();
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, 2))
			{
				GlobalFunc_2416(87, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon), 2);
				GlobalFunc_4907();
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, 3))
			{
				GlobalFunc_2416(88, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon), 3);
				GlobalFunc_4907();
			}
			break;
		
		case 4:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, 4))
			{
				GlobalFunc_2416(89, 1);
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon), 4);
				GlobalFunc_4907();
			}
			break;
	}
}


void func_654()//Position - 0x41FFE
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = -1;
	switch (Local_606)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 1))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 1);
				bVar0 = true;
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 2) && Global_SAVE_DATA.eStreetRaceToUnlock != 2)
			{
				Global_SAVE_DATA.eStreetRaceToUnlock = 2;
				iVar1 = -527573502;
				bVar0 = true;
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 3) && Global_SAVE_DATA.eStreetRaceToUnlock != 3)
			{
				Global_SAVE_DATA.eStreetRaceToUnlock = 3;
				iVar1 = 277048894;
				bVar0 = true;
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 4) && Global_SAVE_DATA.eStreetRaceToUnlock != 4)
			{
				Global_SAVE_DATA.eStreetRaceToUnlock = 4;
				iVar1 = 477030223;
				bVar0 = true;
			}
			break;
		
		case 4:
			break;
	}
	if (bVar0)
	{
		if (iVar1 != -1)
		{
			GlobalFunc_7168(iVar1, 1, 2, 53, 2880000, 10000, -1, 189, -1, 0, 1);
		}
		GlobalFunc_4907();
	}
}

void func_655(var uParam0, bool bParam1, int iParam2)//Position - 0x42122
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (CAM::DOES_CAM_EXIST(uParam0->f_5[2]))
	{
		*uParam0 = 0;
		GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
		if (bParam1)
		{
			uParam0->f_5[3] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_138[3 /*3*/], uParam0->f_163[3 /*3*/], 25.3742f, 0, 2);
			CAM::SET_CAM_ACTIVE(uParam0->f_5[3], 1);
			uParam0->f_5[4] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_138[4 /*3*/], uParam0->f_163[4 /*3*/], 25.3742f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_5[4], uParam0->f_5[3], 600, 1, 1);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_5[3], 1f);
			CAM::SHAKE_CAM(uParam0->f_5[3], "HAND_SHAKE", 0.3f);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_5[4], 1f);
			CAM::SHAKE_CAM(uParam0->f_5[4], "HAND_SHAKE", 0.3f);
		}
		else
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -5f, 1f) };
			Var3 = { ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) };
			uParam0->f_5[3] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0 + Vector(20f, 0f, 0f), Var3 + Vector(0f, 0f, 55f), 50f, 0, 2);
			CAM::SET_CAM_ACTIVE(uParam0->f_5[3], 1);
			uParam0->f_5[4] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var3, 50f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_5[4], uParam0->f_5[3], 600, 1, 1);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_5[3], 1f);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_5[4], 1f);
			CAM::DESTROY_CAM(uParam0->f_5[2], 0);
			iParam2 = iParam2;
		}
		GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
	}
}






















