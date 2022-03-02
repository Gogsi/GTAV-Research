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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	int iLocal_59[5] = { 0, 0, 0, 0, 0 };
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<2> Local_75 = { 0, 0 } ;
	struct<2> Local_77[8];
	struct<2> Local_94 = { 0, 0 } ;
	struct<4> Local_96[8];
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	int iLocal_134 = 0;
	int iLocal_135[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	char[] cLocal_147[8] = 0;
	var uLocal_148 = 0;
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	char cLocal_155[24] = "";
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	char cLocal_161[24] = "";
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	char cLocal_167[24] = "";
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	char cLocal_173[24] = "";
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	char cLocal_179[24] = "";
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	struct<3> Local_185 = { 0, 0, 0 } ;
	struct<3> Local_188 = { 0, 0, 0 } ;
	char cLocal_191[24] = "";
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	char cLocal_197[32] = "";
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	char cLocal_205[32] = "";
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	char cLocal_213[32] = "";
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	struct<3> Local_221 = { 0, 0, 0 } ;
	struct<3> Local_224 = { 0, 0, 0 } ;
	char cLocal_227[24] = "";
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	char cLocal_233[24] = "";
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	char cLocal_239[24] = "";
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	char cLocal_245[24] = "";
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<3> Local_251 = { 0, 0, 0 } ;
	struct<3> Local_254 = { 0, 0, 0 } ;
	char cLocal_257[24] = "";
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	struct<3> Local_263 = { 0, 0, 0 } ;
	struct<3> Local_266 = { 0, 0, 0 } ;
	char cLocal_269[24] = "";
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	char cLocal_275[24] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	char cLocal_281[24] = "";
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	char cLocal_287[24] = "";
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	struct<3> Local_293 = { 0, 0, 0 } ;
	struct<3> Local_296 = { 0, 0, 0 } ;
	struct<3> Local_299 = { 0, 0, 0 } ;
	struct<3> Local_302 = { 0, 0, 0 } ;
	char cLocal_305[24] = "";
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	char cLocal_317[24] = "";
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	char cLocal_323[24] = "";
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	struct<3> Local_329 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	struct<3> Local_335 = { 0, 0, 0 } ;
	struct<3> Local_338 = { 0, 0, 0 } ;
	char cLocal_341[24] = "";
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	char cLocal_347[24] = "";
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	char cLocal_353[24] = "";
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
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
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	char* sLocal_381 = NULL;
	var uLocal_382 = 0;
	struct<3> Local_383 = { 0, 0, 0 } ;
	struct<3> Local_386 = { 0, 0, 0 } ;
	struct<3> Local_389 = { 0, 0, 0 } ;
	struct<3> Local_392 = { 0, 0, 0 } ;
	struct<3> Local_395 = { 0, 0, 0 } ;
	struct<3> Local_398 = { 0, 0, 0 } ;
	struct<3> Local_401 = { 0, 0, 0 } ;
	struct<3> Local_404 = { 0, 0, 0 } ;
	struct<3> Local_407 = { 0, 0, 0 } ;
	struct<3> Local_410 = { 0, 0, 0 } ;
	struct<3> Local_413 = { 0, 0, 0 } ;
	struct<3> Local_416 = { 0, 0, 0 } ;
	struct<3> Local_419 = { 0, 0, 0 } ;
	struct<3> Local_422 = { 0, 0, 0 } ;
	struct<3> Local_425 = { 0, 0, 0 } ;
	struct<3> Local_428 = { 0, 0, 0 } ;
	var uLocal_431 = 16;
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
	bool bLocal_597 = 0;
	struct<6> Local_598 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_604 = 0;
	var uLocal_605 = 1092616192;
	var uLocal_606 = 1101004800;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 3;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	var uLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	struct<20> Local_630[73];
	struct<88> Local_2091[20];
	var uLocal_3852[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_3864[20];
	var uLocal_3905[1] = { 0 };
	int iLocal_3907[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3916[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3935[6] = { 0, 0, 0, 0, 0, 0 };
	struct<6> Local_3942[40];
	struct<2> Local_4183 = { 0, 0 } ;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 21;
	var uLocal_4191 = 6;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	int iLocal_4195 = 0;
	int iLocal_4196 = 0;
	int iLocal_4197 = 0;
	int iLocal_4198 = 0;
	bool bLocal_4199 = 0;
	int iLocal_4200 = 0;
	int iLocal_4201 = 0;
	int iLocal_4202 = 0;
	int iLocal_4203 = 0;
	int iLocal_4204 = 0;
	int iLocal_4205 = 0;
	int iLocal_4206 = 0;
	struct<3> Local_4207 = { 0, 0, 0 } ;
	struct<3> Local_4210 = { 0, 0, 0 } ;
	struct<3> Local_4213 = { 0, 0, 0 } ;
	struct<3> Local_4216 = { 0, 0, 0 } ;
	int iLocal_4219 = 0;
	int iLocal_4220 = 0;
	int iLocal_4221 = 0;
	int iLocal_4222 = 0;
	int iLocal_4223 = 0;
	int iLocal_4224 = 0;
	int iLocal_4225 = 0;
	int iLocal_4226 = 0;
	int iLocal_4227 = 0;
	int iLocal_4228 = 0;
	int iLocal_4229 = 0;
	int iLocal_4230 = 0;
	var uLocal_4231 = 0;
	int iLocal_4232 = 0;
	bool bLocal_4233 = 0;
	int iLocal_4234 = 0;
	int iLocal_4235 = 0;
	int iLocal_4236 = 0;
	char cLocal_4237[24] = "";
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	struct<6> Local_4243 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_4249 = 0;
	int iLocal_4250 = 0;
	int iLocal_4251 = 0;
	int iLocal_4252 = 0;
	struct<5> Local_4253[38];
	struct<978> Local_4444 = { 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	struct<8> Local_5424[19];
	var uLocal_5577 = 6;
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
	var uLocal_5595 = 12;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 12;
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
	var uLocal_5621 = 12;
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
	var uLocal_5634 = 9;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 9;
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
	var uLocal_5661 = 0;
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
	var uLocal_5677 = 12;
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
	var uLocal_5690 = 12;
	var uLocal_5691 = 0;
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
	var uLocal_5703 = 12;
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
	var uLocal_5716 = 9;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 9;
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
	var uLocal_5748 = 0;
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
	var uLocal_5759 = 12;
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
	var uLocal_5772 = 12;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 12;
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
	var uLocal_5798 = 9;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 9;
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
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 12;
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
	var uLocal_5854 = 12;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 12;
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
	var uLocal_5880 = 9;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 9;
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
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 12;
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
	var uLocal_5936 = 12;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 12;
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
	var uLocal_5962 = 9;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 9;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
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
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 12;
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
	var uLocal_6018 = 12;
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
	var uLocal_6031 = 12;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
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
	var uLocal_6044 = 9;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 9;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	int iLocal_6070 = 0;
	int iLocal_6071 = 0;
	int iLocal_6072 = 0;
	int iLocal_6073 = 0;
	int iLocal_6074 = 0;
	bool bLocal_6075 = 0;
	int iLocal_6076 = 0;
	int iLocal_6077 = 0;
	int iLocal_6078 = 4;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 4;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 4;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 4;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 4;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 4;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 4;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	struct<21> Local_6122 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	int iLocal_6156 = 0;
	int iLocal_6157 = 0;
	int iLocal_6158 = 0;
	int iLocal_6159 = 0;
	int iLocal_6160 = 0;
	int iLocal_6161 = 0;
	int iLocal_6162 = 0;
	int iLocal_6163 = 0;
	int iLocal_6164 = 0;
	int iLocal_6165 = 0;
	int iLocal_6166 = 0;
	int iLocal_6167 = 0;
	bool bLocal_6168 = 0;
	int iLocal_6169 = 0;
	int iLocal_6170 = 0;
	int iLocal_6171 = 0;
	int iLocal_6172 = 0;
	int iLocal_6173 = 0;
	int iLocal_6174 = 0;
	int iLocal_6175 = 0;
	struct<7> Local_6176 = { 0, 0, 0, 0, 0, 5, 5 } ;
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
	var uLocal_6198 = 1015222895;
	var uLocal_6199 = 1021665346;
	var uLocal_6200 = 0;
	var uLocal_6201 = 255;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = -1;
	var uLocal_6211 = 996499522;
	var uLocal_6212 = 1002740646;
	var uLocal_6213 = 0;
	var uLocal_6214 = 60;
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
	var uLocal_6231 = 0;
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
	var uLocal_6261 = 0;
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
	var uLocal_6275 = 1016296636;
	var uLocal_6276 = 220;
	var uLocal_6277 = 255;
	var uLocal_6278 = 255;
	var uLocal_6279 = 255;
	var uLocal_6280 = 255;
	var uLocal_6281 = 255;
	var uLocal_6282 = 255;
	var uLocal_6283 = 4096;
	var uLocal_6284 = 40;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
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
	var uLocal_6318 = 0;
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
	var uLocal_6345 = 0;
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
	var uLocal_6375 = 0;
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
	var uLocal_6402 = 0;
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
	var uLocal_6432 = 0;
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
	var uLocal_6453 = 4;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 1065353216;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 1056964608;
	var uLocal_6463 = 1056964608;
	float fLocal_6464 = 0f;
	float fLocal_6465 = 0f;
	int iLocal_6466 = 0;
	int iLocal_6467 = 0;
	int iLocal_6468 = 0;
	int iLocal_6469 = 0;
	bool bLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	bool bLocal_6473 = 0;
	bool bLocal_6474 = 0;
	int iLocal_6475 = 0;
	int iLocal_6476 = 0;
	int iLocal_6477 = 0;
	int iLocal_6478 = 0;
	int iLocal_6479 = 0;
	int iLocal_6480 = 0;
	int iLocal_6481 = 0;
	int iLocal_6482 = 0;
	struct<3> Local_6483 = { 0, 0, 0 } ;
	struct<3> Local_6486 = { 0, 0, 0 } ;
	bool bLocal_6489 = 0;
	int iLocal_6490 = 0;
	int iLocal_6491 = 0;
	int iLocal_6492 = 0;
	int iLocal_6493 = 0;
	struct<5> Local_6494[26];
	struct<5> Local_6625[8];
	struct<16> Local_6666[24];
	int iLocal_7051[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_7072 = 0;
	int iLocal_7073 = 0;
	int iLocal_7074 = 0;
	int iLocal_7075 = 0;
	bool bLocal_7076 = 0;
	int iLocal_7077 = 0;
	int iLocal_7078 = 0;
	int iLocal_7079 = 0;
	int iLocal_7080 = 0;
	int iLocal_7081 = 0;
	int iLocal_7082 = 0;
	int iLocal_7083 = 0;
	bool bLocal_7084 = 0;
	int iLocal_7085[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_7096 = 0;
	int iLocal_7097 = 0;
	var uLocal_7098 = 2;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 2;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	int iLocal_7106 = 0;
	bool bLocal_7107 = 0;
	int iLocal_7108[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_7115 = 0;
	bool bLocal_7116 = 0;
	int iLocal_7117 = 0;
	int iLocal_7118 = 0;
	int iLocal_7119 = 0;
	struct<24> Local_7120 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_7144 = 0;
	struct<110> Local_7145 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1036831949, 1000593162, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, -1569615261, -1, 0 } ;
	struct<110> Local_7255 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1036831949, 1000593162, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, -1569615261, -1, 0 } ;
	struct<110> Local_7365 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1036831949, 1000593162, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, -1569615261, -1, 0 } ;
	struct<108> Local_7475 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1036831949, 1000593162, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, -1569615261 } ;
	var uLocal_7583 = -1;
	var uLocal_7584 = 0;
	struct<108> Local_7585 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1036831949, 1000593162, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, -1569615261 } ;
	var uLocal_7693 = -1;
	var uLocal_7694 = 0;
	struct<108> Local_7695 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1036831949, 1000593162, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, -1569615261 } ;
	var uLocal_7803 = -1;
	var uLocal_7804 = 0;
	int iLocal_7805 = 0;
	int iLocal_7806 = 0;
	struct<8> Local_7807[13];
	int iLocal_7912 = 0;
	int iLocal_7913 = 0;
	int iLocal_7914 = 0;
	struct<3> Local_7915[5];
	struct<3> Local_7931[5];
	struct<3> Local_7947[5];
	int iLocal_7963 = 0;
	int iLocal_7964 = 0;
	int iLocal_7965 = 0;
	int iLocal_7966 = 0;
	int iLocal_7967 = 0;
	int iLocal_7968 = 0;
	int iLocal_7969 = 0;
	int iLocal_7970 = 0;
	int iLocal_7971 = 0;
	var uLocal_7972 = 0;
	int iLocal_7973 = 0;
	int iLocal_7974 = 0;
	struct<4> Local_7975 = { 0, 0, 0, 0 } ;
	struct<4> Local_7979 = { 0, 0, 0, 0 } ;
	struct<4> Local_7983 = { 0, 0, 0, 0 } ;
	struct<4> Local_7987 = { 0, 0, 0, 0 } ;
	struct<4> Local_7991 = { 0, 0, 0, 0 } ;
	int iLocal_7995 = 0;
	int iLocal_7996 = 0;
	int iLocal_7997 = 0;
	int iLocal_7998 = 0;
	int iLocal_7999 = 0;
	var uLocal_8000[4] = { 0, 0, 0, 0 };
	int iLocal_8005 = 0;
	int iLocal_8006 = 0;
	int iLocal_8007 = 0;
	int iLocal_8008 = 0;
	int iLocal_8009 = 0;
	int iLocal_8010 = 0;
	int iLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = -1;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 1000;
	var uLocal_8022 = 1000;
	var uLocal_8023 = 0;
	bool bLocal_8024 = 0;
	var uLocal_8025[3] = { 0, 0, 0 };
	bool bLocal_8029 = 0;
	int iLocal_8030 = 0;
	int iLocal_8031 = 0;
	int iLocal_8032 = 0;
	int iLocal_8033 = 0;
	int iLocal_8034 = 0;
	int iLocal_8035 = 0;
	int iLocal_8036 = 0;
	int iLocal_8037 = 0;
	int iLocal_8038 = 0;
	int iLocal_8039 = 0;
	int iLocal_8040 = 0;
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
	fLocal_58 = 0f;
	fLocal_65 = 0f;
	fLocal_66 = 0f;
	fLocal_67 = 0f;
	fLocal_130 = 0.62f;
	fLocal_131 = 0.51f;
	fLocal_132 = 0.55f;
	fLocal_133 = 25f;
	StringCopy(&cLocal_147, "AH3BAUD", 8);
	Local_149 = { -0.9f, -1.6f, -0.3f };
	Local_152 = { 0f, -0.725f, 0f };
	StringCopy(&cLocal_155, "missheistfbi3b_ig1", 24);
	StringCopy(&cLocal_161, "Heli_Loop_Michael", 24);
	StringCopy(&cLocal_167, "Heli_Jump_Michael", 24);
	StringCopy(&cLocal_173, "missheistfbi3b_ig2", 24);
	StringCopy(&cLocal_179, "Door_TryOpen_Michael", 24);
	Local_185 = { 150.59f, -762.38f, 258.3f };
	Local_188 = { 0f, 0f, 159f };
	StringCopy(&cLocal_191, "missheistfbi3b_ig3", 24);
	StringCopy(&cLocal_197, "Corridor_KillSwat_Franklin", 32);
	StringCopy(&cLocal_205, "Corridor_KillSwat_Gunman", 32);
	StringCopy(&cLocal_213, "Corridor_KillSwat_Swat", 32);
	Local_221 = { 119.087f, -736.397f, 257.13f };
	Local_224 = { 0f, 0f, 159.75f };
	StringCopy(&cLocal_227, "missheistfbi3b_ig4", 24);
	StringCopy(&cLocal_233, "shoot_opendoor_michael", 24);
	StringCopy(&cLocal_239, "missheistfbi3b_ig5", 24);
	StringCopy(&cLocal_245, "stairs_opendoor_michael", 24);
	Local_251 = { 129.177f, -731.754f, 254.302f };
	Local_254 = { 0f, 0f, -20.16f };
	StringCopy(&cLocal_257, "missHeistfbi3B_IG6_v2", 24);
	Local_263 = { 150.936f, -729.071f, 249.166f };
	Local_266 = { 0f, 0f, 159.75f };
	StringCopy(&cLocal_269, "missah_3bmcs_6_p1_pilot", 24);
	StringCopy(&cLocal_275, "missheistfbi3b_ig7", 24);
	StringCopy(&cLocal_281, "lift_fibagent_loop", 24);
	StringCopy(&cLocal_287, "lift_fibagent_out", 24);
	Local_293 = { 137.201f, -733.135f, 249.15f };
	Local_296 = { 0f, 0f, -109.5f };
	Local_299 = { 130.83f, -739.857f, 249.159f };
	Local_302 = { 0f, 0f, -110.5f };
	StringCopy(&cLocal_305, "missheistfbi3b_ig9", 24);
	Local_311 = { 166.175f, -763.43f, 73.15f };
	Local_314 = { 0f, 0f, 159.656f };
	StringCopy(&cLocal_317, "missheistfbi3b_ig10", 24);
	StringCopy(&cLocal_323, "missbigscore2big_2", 24);
	Local_329 = { 151.26f, -765.84f, 258.058f };
	Local_332 = { -90f, 0f, -106.57f };
	Local_335 = { 134.7172f, -752.762f, 257.1572f };
	Local_338 = { 0f, 0f, 159.8552f };
	StringCopy(&cLocal_341, "agen3b_try_door", 24);
	StringCopy(&cLocal_347, "agenc3b_sw_0_frank", 24);
	StringCopy(&cLocal_353, "agenc3b_sw_0_goon", 24);
	iLocal_359 = joaat("maverick");
	iLocal_360 = joaat("buzzard");
	iLocal_361 = joaat("s_m_m_fiboffice_01");
	iLocal_362 = joaat("s_m_m_highsec_01");
	iLocal_363 = joaat("s_m_m_ciasec_01");
	iLocal_364 = joaat("s_m_y_swat_01");
	iLocal_365 = joaat("burrito3");
	iLocal_366 = joaat("rumpo");
	iLocal_367 = joaat("v_ilev_fib_debris");
	iLocal_368 = joaat("prop_phone_ing");
	iLocal_369 = joaat("s_m_y_pilot_01");
	iLocal_370 = joaat("s_m_m_pilot_02");
	iLocal_371 = joaat("prop_secdoor_01");
	iLocal_372 = joaat("weapon_carbinerifle");
	iLocal_373 = joaat("weapon_carbinerifle");
	iLocal_374 = joaat("weapon_combatpistol");
	StringCopy(&sLocal_381, "mwah", 8);
	Local_383 = { 718.3592f, -983.2876f, 23.1379f };
	Local_386 = { 2504.62f, -317.7861f, 91.9929f };
	Local_389 = { 2510.918f, -342.3889f, 117.1862f };
	Local_392 = { 1036.647f, -548.813f, 791.0118f };
	Local_395 = { 1036.647f, -548.813f, 1100f };
	Local_398 = { 139.7955f, -742.1393f, 261.8531f };
	Local_401 = { 122.9093f, -741.5135f, 261.8533f };
	Local_404 = { 143.7658f, -764.5782f, 261.8533f };
	Local_407 = { 150.269f, -761.6932f, 257.1522f };
	Local_410 = { 148.8185f, -751.3002f, 257.1518f };
	Local_413 = { 146.687f, -756.3611f, 257.1695f };
	Local_416 = { 67.5801f, -737.1165f, 43.2183f };
	Local_419 = { 7.6432f, 550.7535f, 174.6488f };
	Local_422 = { 723.41f, -966.83f, 35.86f };
	Local_425 = { 0f, 0f, 0f };
	Local_428 = { 136.0242f, -749.2471f, 138.7366f };
	iLocal_4232 = -1;
	iLocal_6172 = -1;
	fLocal_6465 = 1f;
	iLocal_6482 = 3;
	Local_6486 = { 0f, 0f, 0.25f };
	iLocal_6490 = -1;
	iLocal_6493 = -1;
	iLocal_7997 = -1;
	iLocal_7998 = -1;
	iLocal_7999 = -1;
	iLocal_8011 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_997(28);
	}
	MISC::SET_MISSION_FLAG(1);
	func_985();
	while (true)
	{
		GlobalFunc_6821(&Local_4444);
		GlobalFunc_5195(&uLocal_5577);
		if (GlobalFunc_111())
		{
			iLocal_4236 = -1;
		}
		else if (iLocal_4236 == -1)
		{
			iLocal_4236 = MISC::GET_GAME_TIMER();
		}
		RECORDING::_0x208784099002BC30("M_AH3B", 0);
		func_981();
		func_962();
		func_958(bLocal_6075);
		if (!bLocal_6075)
		{
			func_865();
			func_864();
		}
		func_371();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x511
{
	int iVar0;
	
	if (iLocal_628 && (GlobalFunc_145() || CAM::IS_SCREEN_FADED_OUT()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_6158 || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_6157)
		{
			GlobalFunc_5129(758.9724f, -980.9376f, 24.4333f, 88.2707f);
			GlobalFunc_5166(744.4968f, -985.3074f, 23.7293f, 279.2123f);
		}
		else
		{
			switch (iLocal_6071)
			{
				case 2:
				case 3:
					GlobalFunc_5129(758.9724f, -980.9376f, 24.4333f, 88.2707f);
					GlobalFunc_5166(744.4968f, -985.3074f, 23.7293f, 279.2123f);
					break;
				
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					GlobalFunc_5129(758.9724f, -980.9376f, 24.4333f, 88.2707f);
					GlobalFunc_5166(744.4968f, -985.3074f, 23.7293f, 279.2123f);
					break;
				}
		}
		func_2();
		iVar0 = 0;
		while (iVar0 < Local_5424)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_5424[iVar0 /*8*/]) && !Local_5424[iVar0 /*8*/].f_7)
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(Local_5424[iVar0 /*8*/]);
			}
			iVar0++;
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_2()//Position - 0x668
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	GlobalFunc_11318(PLAYER::PLAYER_PED_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		if (iLocal_4230 != -1)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
			{
				PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_4230);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
				PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_4230);
			}
			iLocal_4230 = -1;
		}
		else
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
		}
	}
	func_118();
	func_117();
	func_116();
	func_110(&Local_598, 0);
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	func_107(0);
	if (!PED::IS_PED_INJURED(func_106()))
	{
		func_80(func_106());
	}
	if (!PED::IS_PED_INJURED(func_79()))
	{
		func_80(func_79());
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	GlobalFunc_5155(1);
	iVar0 = 0;
	while (iVar0 < Local_630)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[iVar0 /*20*/]) && PLAYER::PLAYER_PED_ID() != Local_630[iVar0 /*20*/])
		{
			PED::DELETE_PED(&(Local_630[iVar0 /*20*/]));
		}
		GlobalFunc_703(&(Local_630[iVar0 /*20*/].f_3));
		if (Local_630[iVar0 /*20*/].f_2)
		{
			TASK::REMOVE_COVER_POINT(Local_630[iVar0 /*20*/].f_1);
			Local_630[iVar0 /*20*/].f_2 = 0;
		}
		Local_630[iVar0 /*20*/].f_4 = 0;
		Local_630[iVar0 /*20*/].f_5 = 0;
		Local_630[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_2091)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/]) && PLAYER::PLAYER_PED_ID() != Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/])
			{
				GlobalFunc_703(&(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_3));
				if (Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_2)
				{
					TASK::REMOVE_COVER_POINT(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_1);
					Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_2 = 0;
				}
				Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_4 = 0;
				Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_5 = 0;
				PED::DELETE_PED(&(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/]));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar0 /*88*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[iVar0 /*88*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[iVar0 /*88*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[iVar0 /*88*/]);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(Local_2091[iVar0 /*88*/]));
		}
		iVar0++;
	}
	if (iLocal_6469)
	{
		MISC::CLEAR_AREA(151.1505f, -762.697f, 257.152f, 5.125f, 1, 0, 0, 0);
		ENTITY::REMOVE_MODEL_HIDE(150.5931f, -762.3801f, 258.3018f, 1f, iLocal_371, 0);
	}
	if (bLocal_6470)
	{
		MISC::CLEAR_AREA(139.4704f, -745.9282f, 263.119f, 1f, 1, 0, 0, 0);
		GlobalFunc_7621(195, 0, 0, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_3905[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_3905[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3864[iVar0 /*2*/]))
		{
			if (Local_3864[iVar0 /*2*/].f_1)
			{
				OBJECT::DELETE_OBJECT(&(Local_3864[iVar0 /*2*/]));
			}
			else
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_3864[iVar0 /*2*/], 1) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[iVar0 /*2*/]));
				MISC::CLEAR_AREA(Var2, 0.5f, 1, 1, 0, 0);
			}
		}
		iVar0++;
	}
	MISC::CLEAR_AREA_OF_OBJECTS(151.29f, -766.31f, 258.05f, 2f, 0);
	iVar0 = 0;
	while (iVar0 < Local_3942)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3942[iVar0 /*6*/].f_5))
		{
			OBJECT::DELETE_OBJECT(&(Local_3942[iVar0 /*6*/].f_5));
		}
		Local_3942[iVar0 /*6*/].f_3 = joaat("v_ilev_fib_sprklr");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_3935)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[iVar0], 0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_627))
	{
		HUD::REMOVE_BLIP(&uLocal_627);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_3907)
	{
		if (iLocal_3907[iVar0] != 0)
		{
			AUDIO::STOP_SOUND(iLocal_3907[iVar0]);
		}
		iVar0++;
	}
	func_118();
	iLocal_4198 = 0;
	iLocal_7805 = 0;
	iLocal_7074 = 0;
	iLocal_7072 = 0;
	iLocal_7073 = 0;
	iLocal_6482 = 2;
	iLocal_6162 = 0;
	iLocal_6163 = 0;
	iLocal_6164 = 0;
	bLocal_6168 = false;
	iLocal_6169 = 0;
	iLocal_6170 = 0;
	iLocal_6166 = 0;
	iLocal_6167 = 0;
	bLocal_6489 = false;
	iLocal_6172 = -1;
	iLocal_6469 = 0;
	iLocal_8030 = 0;
	bLocal_8029 = false;
	iLocal_8031 = 0;
	iLocal_8011 = -1;
	iLocal_8032 = 0;
	func_64(&Local_7145);
	func_64(&Local_7255);
	func_64(&Local_7365);
	func_64(&Local_7475);
	func_64(&Local_7585);
	func_64(&Local_7695);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	GlobalFunc_8380(0, 1, 1, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_428, 137.8125f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_428, 137.8125f);
	MISC::CLEAR_AREA(Local_428, 137.8125f, 1, 0, 0, 0);
	if (GlobalFunc_701())
	{
		GlobalFunc_7632(0);
	}
	func_48(0);
	func_47(&Local_6176, 0, 1);
	if (uLocal_7098[0] != 0)
	{
		TASK::REMOVE_COVER_POINT(uLocal_7098[0]);
	}
	if (uLocal_7098[1] != 0)
	{
		TASK::REMOVE_COVER_POINT(uLocal_7098[1]);
	}
	uLocal_7098.f_3 = 0;
	if (uLocal_7102[0] != 0)
	{
		TASK::REMOVE_COVER_POINT(uLocal_7102[0]);
	}
	if (uLocal_7102[1] != 0)
	{
		TASK::REMOVE_COVER_POINT(uLocal_7102[1]);
	}
	uLocal_7102.f_3 = 0;
	func_46(0, 1, 0);
	func_43(0, 1);
	INTERIOR::REFRESH_INTERIOR(iLocal_6157);
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	iVar0 = 0;
	while (iVar0 < iLocal_7108)
	{
		if (iLocal_7108[iVar0] != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_7108[iVar0]);
			iLocal_7108[iVar0] = -1;
		}
		iVar0++;
	}
	CLOCK::PAUSE_CLOCK(0);
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		Local_6666[iVar0 /*16*/].f_14 = 0;
		Local_6666[iVar0 /*16*/].f_15 = 0;
		iVar0++;
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(6, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(12, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	GlobalFunc_8380(0, 1, 1, 0);
	func_42(0);
	Local_7979 = 0f;
	Local_7979.f_1 = 0f;
	Local_7979.f_2 = 0f;
	Local_7979.f_3 = -1;
	Local_7975 = 0f;
	Local_7975.f_1 = 0f;
	Local_7975.f_2 = 0f;
	Local_7975.f_3 = -1;
	Local_7983 = 0f;
	Local_7983.f_1 = 0f;
	Local_7983.f_2 = 0f;
	Local_7983.f_3 = -1;
	Local_7987 = 0f;
	Local_7987.f_1 = 0f;
	Local_7987.f_2 = 0f;
	Local_7987.f_3 = -1;
	Local_7991 = 0f;
	Local_7991.f_1 = 0f;
	Local_7991.f_2 = 0f;
	Local_7991.f_3 = -1;
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_7973))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_7973, 0);
	}
	iLocal_7996 = 0;
	iLocal_7997 = -1;
	iLocal_7998 = -1;
	iLocal_7999 = -1;
	if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	iLocal_7995 = 0;
	func_39();
	func_38();
	GlobalFunc_10639(158, 1);
	GlobalFunc_10639(159, 1);
	func_6(17, 1, 0f, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_8008, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(170.5563f, 550.574f, 4.020949f) - Vector(43.1875f, 32f, 153.125f), Vector(170.5563f, 550.574f, 4.020949f) + Vector(43.1875f, 32f, 153.125f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(291.468f, 735.8698f, 133.4667f, 197.1767f, 723.2543f, 201.0648f, 59.8125f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(234.1794f, 713.0812f, 180.1833f, 168.2049f, 547.5483f, 200.7424f, 59.8125f, 1);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	}
	GlobalFunc_7621(70, 1, 0, 1, 0);
	GlobalFunc_7621(71, 2, 0, 1, 0);
	GlobalFunc_7621(73, 1, 0, 1, 0);
	GlobalFunc_7621(72, 0, 0, 1, 0);
	GlobalFunc_7621(74, 0, 0, 1, 0);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	STREAMING::END_SRL();
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6157, "V_FIB03_door_light"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_6157, "V_FIB03_door_light");
	}
	GlobalFunc_695(1);
	GlobalFunc_4948(&uLocal_8012, 0, 0);
}




void func_6(int iParam0, bool bParam1, float fParam2, int iParam3)//Position - 0xF99
{
	if (iParam0 != -1 && Local_5424[iParam0 /*8*/] != 0)
	{
		if (iParam3 <= 0)
		{
			if (fParam2 != 100f)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_5424[iParam0 /*8*/], fParam2, 0, 1);
			}
			if (bParam1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iParam0 /*8*/], 1, 0, 1);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iParam0 /*8*/], 0, 0, 1);
			}
			Local_5424[iParam0 /*8*/].f_6 = 0;
			Local_5424[iParam0 /*8*/].f_5 = 0;
		}
		else if (fParam2 != 100f)
		{
			Local_5424[iParam0 /*8*/].f_1 = 1;
			Local_5424[iParam0 /*8*/].f_4 = bParam1;
			Local_5424[iParam0 /*8*/].f_2 = fParam2;
			Local_5424[iParam0 /*8*/].f_6 = MISC::GET_GAME_TIMER();
			Local_5424[iParam0 /*8*/].f_5 = iParam3;
			Local_5424[iParam0 /*8*/].f_3 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_5424[iParam0 /*8*/]);
		}
	}
}
































void func_38()//Position - 0x545C
{
	func_107(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
}

void func_39()//Position - 0x547D
{
	int iVar0;
	
	func_41(1);
	iVar0 = 0;
	while (iVar0 < Local_3942)
	{
		if (Local_3942[iVar0 /*6*/].f_3 != joaat("v_ilev_fib_sprklr") && !GlobalFunc_105(Local_3942[iVar0 /*6*/]))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_3942[iVar0 /*6*/], 0.25f, Local_3942[iVar0 /*6*/].f_3, 0))
			{
				ENTITY::REMOVE_MODEL_SWAP(Local_3942[iVar0 /*6*/], 0.25f, joaat("v_ilev_fib_sprklr"), Local_3942[iVar0 /*6*/].f_3, 0);
			}
		}
		Local_3942[iVar0 /*6*/].f_3 = joaat("v_ilev_fib_sprklr");
		iVar0++;
	}
}


void func_41(int iParam0)//Position - 0x553B
{
	Local_4253[iParam0 /*5*/] = 5;
	Local_4253[iParam0 /*5*/].f_2 = 0;
	Local_4253[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_4253[iParam0 /*5*/].f_3 = 0;
	Local_4253[iParam0 /*5*/].f_1 = 1;
}

void func_42(bool bParam0)//Position - 0x5576
{
	int iVar0;
	
	if (bParam0)
	{
		iLocal_7085[0] = TASK::ADD_COVER_POINT(119.9658f, -740.4022f, 249.152f, 161.4701f, 0, 2, 1, 1);
		iLocal_7085[1] = TASK::ADD_COVER_POINT(135.5736f, -742.7592f, 249.152f, 72.4091f, 1, 2, 1, 1);
		iLocal_7085[2] = TASK::ADD_COVER_POINT(122.1301f, -740.8215f, 253.1523f, 254.1523f, 0, 0, 1, 1);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_7085)
		{
			if (iLocal_7085[iVar0] != 0)
			{
				TASK::REMOVE_COVER_POINT(iLocal_7085[iVar0]);
				iLocal_7085[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

void func_43(bool bParam0, int iParam1)//Position - 0x561E
{
	if (bParam0)
	{
		if (!AUDIO::IS_ALARM_PLAYING("AGENCY_HEIST_FIB_TOWER_ALARMS"))
		{
			if (AUDIO::PREPARE_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS"))
			{
				AUDIO::START_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS", iParam1);
			}
		}
		if (!AUDIO::IS_ALARM_PLAYING("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER"))
		{
			if (AUDIO::PREPARE_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER"))
			{
				AUDIO::START_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER", iParam1);
			}
		}
	}
	else
	{
		if (AUDIO::IS_ALARM_PLAYING("AGENCY_HEIST_FIB_TOWER_ALARMS"))
		{
			func_44(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS", iParam1);
		}
		if (AUDIO::IS_ALARM_PLAYING("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER"))
		{
			func_44(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER", iParam1);
		}
	}
}

void func_44(var uParam0, char* sParam1, var uParam2)//Position - 0x56A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_925)
	{
		if (uParam0->f_925[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_925[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_925[iVar0 /*5*/].f_1)
				{
					AUDIO::STOP_ALARM(sParam1, uParam2);
					GlobalFunc_700(&(uParam0->f_925[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_925[iVar0 /*5*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}


void func_46(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5737
{
	if (bParam0)
	{
		if (!AUDIO::IS_ALARM_PLAYING("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B"))
		{
			if (AUDIO::PREPARE_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B"))
			{
				AUDIO::START_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B", bParam1);
			}
		}
		AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ALARM");
		if (bParam2)
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_prop_74_emr_3b")) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_prop_74_emr_3b_02")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[15 /*2*/]))
				{
					Local_3864[15 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_prop_74_emr_3b"), 135.058f, -748.2704f, 258.9249f, 1, 1, 0);
					Local_3864[15 /*2*/].f_1 = 1;
					ENTITY::SET_ENTITY_HEADING(Local_3864[15 /*2*/], -110.008f);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[16 /*2*/]))
				{
					Local_3864[16 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_prop_74_emr_3b_02"), 117.4667f, -740.8329f, 259.0079f, 1, 1, 0);
					Local_3864[16 /*2*/].f_1 = 1;
					ENTITY::SET_ENTITY_HEADING(Local_3864[16 /*2*/], 160f);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[17 /*2*/]))
				{
					Local_3864[17 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_prop_74_emr_3b_02"), 154.0723f, -759.2141f, 259.0079f, 1, 1, 0);
					Local_3864[17 /*2*/].f_1 = 1;
					ENTITY::SET_ENTITY_HEADING(Local_3864[17 /*2*/], -110f);
				}
			}
		}
	}
	else
	{
		if (AUDIO::IS_ALARM_PLAYING("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B"))
		{
			func_44(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B", bParam1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3864[15 /*2*/]))
		{
			if (bParam1)
			{
				OBJECT::DELETE_OBJECT(&(Local_3864[15 /*2*/]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[15 /*2*/]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3864[16 /*2*/]))
		{
			if (bParam1)
			{
				OBJECT::DELETE_OBJECT(&(Local_3864[16 /*2*/]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[16 /*2*/]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3864[17 /*2*/]))
		{
			if (bParam1)
			{
				OBJECT::DELETE_OBJECT(&(Local_3864[17 /*2*/]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[17 /*2*/]));
			}
		}
	}
}

void func_47(int iParam0, bool bParam1, int iParam2)//Position - 0x590D
{
	if (iLocal_59[1] != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
		{
			AUDIO::STOP_SOUND(iLocal_59[1]);
			iLocal_59[1] = -1;
		}
	}
	if (iLocal_59[0] != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
		{
			AUDIO::STOP_SOUND(iLocal_59[0]);
			iLocal_59[0] = -1;
		}
	}
	MISC::CLEAR_BIT(iParam0, 25);
	MISC::CLEAR_BIT(iParam0, 5);
	if (iParam2 == 1)
	{
		MISC::CLEAR_BIT(iParam0, 12);
		MISC::CLEAR_BIT(iParam0, 9);
		MISC::CLEAR_BIT(iParam0, 18);
		MISC::CLEAR_BIT(iParam0, 27);
		MISC::CLEAR_BIT(iParam0, 28);
	}
	iParam0->f_6 = iParam0->f_5;
	iLocal_71 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_70);
	}
	MISC::CLEAR_BIT(iParam0, 29);
}

void func_48(bool bParam0)//Position - 0x59BA
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Vector(113.7148f, -690.153f, 124.2386f) - Vector(87.5f, 250f, 250f) };
	Var3 = { Vector(113.7148f, -690.153f, 124.2386f) + Vector(87.5f, 250f, 250f) };
	if (bParam0)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(178.629f, -798.9003f, 29.81714f, 298.6315f, -481.3884f, 48.3732f, 38.875f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(5.683404f, -534.3476f, 32.35951f, 255.5503f, -546.4606f, 48.2927f, 18.9375f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(229.9666f, -618.4488f, 39.43451f, 119.9664f, -577.7656f, 48.68113f, 18.9375f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-28.65022f, -938.3979f, 27.67005f, 181.1161f, -353.3925f, 49.06233f, 40.25f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-203.869f, -676.7144f, 32.08789f, 19.47916f, -762.3703f, 49.25849f, 26.5f, 0, 0, 1);
		PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
		PATHFIND::SET_PED_PATHS_IN_AREA(Var0, Var3, 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var0, Var3);
		if (iLocal_8005 == 0)
		{
			iLocal_8005 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
		}
		MISC::CLEAR_AREA(124.2386f, -690.153f, 113.7148f, 250f, 0, 0, 0, 0);
	}
	else
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(178.629f, -798.9003f, 29.81714f, 298.6315f, -481.3884f, 48.3732f, 38.875f, 0, 1, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(5.683404f, -534.3476f, 32.35951f, 255.5503f, -546.4606f, 48.2927f, 18.9375f, 0, 1, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(229.9666f, -618.4488f, 39.43451f, 119.9664f, -577.7656f, 48.68113f, 18.9375f, 0, 1, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-28.65022f, -938.3979f, 27.67005f, 181.1161f, -353.3925f, 49.06233f, 40.25f, 0, 1, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-203.869f, -676.7144f, 32.08789f, 19.47916f, -762.3703f, 49.25849f, 26.5f, 0, 1, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var0, Var3, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, 1, 1);
		if (iLocal_8005 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_8005, 0);
		}
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(382.2456f, -510.3507f, 31.57948f, -30.6979f, -510.5435f, 40.22483f, 49.625f, 1);
}
















void func_64(var uParam0)//Position - 0x608D
{
	uParam0->f_97 = 0;
	uParam0->f_98 = 0;
	uParam0->f_99 = -1f;
	uParam0->f_100 = 0;
	uParam0->f_101 = 0;
	uParam0->f_102 = 0;
	uParam0->f_103 = 0f;
	uParam0->f_104 = 0;
	uParam0->f_105 = 0f;
	uParam0->f_106 = 0;
	uParam0->f_107 = joaat("weapon_unarmed");
	func_65(uParam0);
}

void func_65(var uParam0)//Position - 0x60D6
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_7));
	}
	func_67(uParam0, 0, joaat("weapon_unarmed"), 1, 1, 1);
	GlobalFunc_605(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_8));
	}
}


void func_67(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x6179
{
	if (uParam0->f_55)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
			{
				if (uParam0->f_75)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 118, true);
				}
				if (uParam0->f_76)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 208, false);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_3))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_3, 1, 1);
					if (bParam4)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_3);
					}
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			uParam0->f_62 = 0;
		}
		if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
		{
			if (!bParam1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
			}
		}
		if (bParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_8));
			}
		}
		if (iParam2 != joaat("weapon_unarmed"))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, iParam2, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iParam2, 1);
			}
		}
		if (bParam3)
		{
			GlobalFunc_606(uParam0);
		}
		uParam0->f_55 = 0;
	}
}












int func_79()//Position - 0xA61B
{
	return Local_630[1 /*20*/];
}

void func_80(int iParam0)//Position - 0xA629
{
	GlobalFunc_11318(iParam0);
	GlobalFunc_7694(iParam0, 1, 0);
	GlobalFunc_7709(iParam0);
	GlobalFunc_7693(iParam0);
	func_93(iParam0);
	func_92(iParam0);
	GlobalFunc_7707(iParam0);
}












void func_92(int iParam0)//Position - 0xDD6C
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		ENTITY::SET_ENTITY_VELOCITY(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/]);
	}
}

void func_93(int iParam0)//Position - 0xDDAA
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0] == 0f && GlobalFunc_100(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/], 0f, 0f, 0f))
		{
			return;
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/], 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0]);
	}
}













int func_106()//Position - 0xF472
{
	return Local_630[0 /*20*/];
}

void func_107(bool bParam0)//Position - 0xF480
{
	if (bParam0)
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
	}
	else
	{
		HUD::SET_TEXT_RENDER_ID(uLocal_6472);
		GRAPHICS::DRAW_RECT(0.426f, 0.366f, 0.925f, 0.723f, 0, 0, 0, 255, 0);
		HUD::SET_TEXT_RENDER_ID(uLocal_6471);
	}
}



void func_110(var uParam0, bool bParam1)//Position - 0xF539
{
	func_111(uParam0, bParam1, 0);
}

void func_111(var uParam0, bool bParam1, bool bParam2)//Position - 0xF54A
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	GlobalFunc_629(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
		}
		GlobalFunc_628(iVar0, uParam0);
		GlobalFunc_627(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && uParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	uParam0->f_21 = 0;
}





void func_116()//Position - 0xF7B6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_5424)
	{
		if (Local_5424[iVar0 /*8*/] != 0)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_5424[iVar0 /*8*/], 0f, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iVar0 /*8*/], 0, 0, 1);
		}
		Local_5424[iVar0 /*8*/].f_1 = 0;
		Local_5424[iVar0 /*8*/].f_5 = 0;
		Local_5424[iVar0 /*8*/].f_6 = 0;
		Local_5424[iVar0 /*8*/].f_2 = 0f;
		Local_5424[iVar0 /*8*/].f_4 = 0;
		Local_5424[iVar0 /*8*/].f_3 = 0f;
		iVar0++;
	}
}

void func_117()//Position - 0xF835
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (38 - 1))
	{
		func_41(iVar0);
		iVar0++;
	}
}

void func_118()//Position - 0xF858
{
	GlobalFunc_200(&uLocal_431, 0);
	GlobalFunc_200(&uLocal_431, 1);
	GlobalFunc_200(&uLocal_431, 2);
	GlobalFunc_200(&uLocal_431, 3);
	GlobalFunc_200(&uLocal_431, 4);
	GlobalFunc_200(&uLocal_431, 5);
}





























































































































































































































































void func_371()//Position - 0x53A5F
{
	switch (iLocal_6071)
	{
		case 0:
			func_837();
			break;
		
		case 1:
			func_768();
			break;
		
		case 2:
			func_761();
			break;
		
		case 3:
			func_742();
			break;
		
		case 4:
			func_701();
			break;
		
		case 5:
			func_684();
			break;
		
		case 6:
			func_678();
			break;
		
		case 7:
			func_672();
			break;
		
		case 8:
			func_660();
			break;
		
		case 9:
			func_607();
			break;
		
		case 10:
			func_599();
			break;
		
		case 11:
			func_448();
			break;
		
		case 12:
			func_372();
			break;
	}
}

void func_372()//Position - 0x53B18
{
	switch (iLocal_6072)
	{
		case 0:
			if (CUTSCENE::HAS_CUTSCENE_LOADED() && INTERIOR::IS_INTERIOR_READY(iLocal_6160))
			{
				if (func_447() != 0)
				{
					if (func_447() == func_106())
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_447(), "Michael", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_447(), "Franklin", 0, 0, 0);
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_FRANKLINS"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_GET_TO_FRANKLINS");
				}
				func_446(&Local_4444);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[0]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[0], 0);
				}
				GlobalFunc_4956();
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				iLocal_4223 = 0;
				iLocal_4222 = 0;
				GlobalFunc_8380(1, 1, 1, 0);
				iLocal_4198 = -1;
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_6072++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
				{
					PED::DELETE_PED(&(Local_630[3 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
				{
					PED::DELETE_PED(&(Local_630[4 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_2091[16 /*88*/]));
				}
				if (CAM::DOES_CAM_EXIST(uLocal_3852[0]))
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(uLocal_3852[0], 0);
				}
				GlobalFunc_5169(func_106());
				iLocal_6072++;
			}
			break;
		
		case 2:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_4223 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				GlobalFunc_11318(func_106());
				if (GlobalFunc_8315() != 0)
				{
					if (GlobalFunc_9019(&iLocal_6078, 0))
					{
						func_400(&iLocal_6078, 1, 1, 0);
					}
				}
				ENTITY::SET_ENTITY_COORDS(func_106(), 8.8201f, 541.1979f, 175.028f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_106(), 332.6756f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				TASK::TASK_GO_STRAIGHT_TO_COORD(func_106(), 9.922f, 543.4659f, 174.7219f, 1f, 20000, 1193033728, 1056964608);
				PED::FORCE_PED_MOTION_STATE(func_106(), -668482597, 0, 0, 0);
				GlobalFunc_5168(0, 6, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1201219326, 0f, 0, 1);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1201219326, 1, 0, 1);
				iLocal_4222 = 1;
			}
			if (iLocal_4222 && (iLocal_4223 || !ENTITY::DOES_ENTITY_EXIST(Local_630[1 /*20*/])))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[1 /*20*/]))
				{
					PED::DELETE_PED(&(Local_630[1 /*20*/]));
				}
				func_398(&Local_4444, iLocal_6160);
				GlobalFunc_8380(0, 1, 1, 0);
				func_373();
			}
			break;
	}
}

void func_373()//Position - 0x53DA3
{
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	GlobalFunc_706(3, 1000000);
	func_384(10, 0);
	func_378();
	GlobalFunc_5103(0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_378()//Position - 0x53F4A
{
	int iVar0;
	int iVar1;
	
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	func_38();
	func_111(&Local_598, 1, 0);
	func_383();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		if (iLocal_4230 != -1)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
			{
				PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_4230);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
				PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_4230);
			}
			iLocal_4230 = -1;
		}
		else
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
		}
	}
	iVar0 = 0;
	while (iVar0 <= (73 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[iVar0 /*20*/]) && PLAYER::PLAYER_PED_ID() != Local_630[iVar0 /*20*/])
		{
			if (!PED::IS_PED_INJURED(Local_630[iVar0 /*20*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[iVar0 /*20*/], 1);
				PED::SET_PED_KEEP_TASK(Local_630[iVar0 /*20*/], 1);
				PED::REMOVE_PED_FROM_GROUP(Local_630[iVar0 /*20*/]);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_630[iVar0 /*20*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/]) && PLAYER::PLAYER_PED_ID() != Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/])
			{
				GlobalFunc_703(&(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_3));
				if (Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_2)
				{
					TASK::REMOVE_COVER_POINT(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_1);
					Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_2 = 0;
				}
				Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_4 = 0;
				Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/].f_5 = 0;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[iVar0 /*88*/].f_1[iVar1 /*20*/]));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar0 /*88*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[iVar0 /*88*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[iVar0 /*88*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[iVar0 /*88*/]);
				}
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[iVar0 /*88*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_3905[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_3905[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (11 - 1))
	{
		if (CAM::DOES_CAM_EXIST(uLocal_3852[iVar0]))
		{
			CAM::DESTROY_CAM(uLocal_3852[iVar0], 0);
		}
		iVar0++;
	}
	CAM::DESTROY_ALL_CAMS(0);
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3864[iVar0 /*2*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[iVar0 /*2*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_3942)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3942[iVar0 /*6*/].f_5))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3942[iVar0 /*6*/].f_5));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_3935)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[iVar0], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_5424)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_5424[iVar0 /*8*/]) && !Local_5424[iVar0 /*8*/].f_7)
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(Local_5424[iVar0 /*8*/]);
		}
		iVar0++;
	}
	GlobalFunc_563(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(6, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(12, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	iVar0 = 0;
	while (iVar0 < iLocal_3907)
	{
		if (iLocal_3907[iVar0] != -1)
		{
			AUDIO::STOP_SOUND(iLocal_3907[iVar0]);
			AUDIO::RELEASE_SOUND_ID(iLocal_3907[iVar0]);
			iLocal_3907[iVar0] = -1;
		}
		iVar0++;
	}
	GlobalFunc_8380(0, 1, 1, 0);
	if (GlobalFunc_701())
	{
		GlobalFunc_7632(0);
	}
	if (iLocal_6469)
	{
		ENTITY::REMOVE_MODEL_HIDE(150.5931f, -762.3801f, 258.3018f, 1f, iLocal_371, 1);
		iLocal_6469 = 0;
	}
	if (bLocal_6470)
	{
		GlobalFunc_7621(195, 0, 0, 1, 0);
		bLocal_6470 = false;
	}
	GlobalFunc_7621(195, 0, 0, 1, 0);
	func_64(&Local_7145);
	func_64(&Local_7255);
	func_64(&Local_7365);
	func_64(&Local_7475);
	func_64(&Local_7585);
	func_64(&Local_7695);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_8007, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_8006, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_8000[0], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_8000[1], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_8000[2], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_8000[3], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_8008, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(170.5563f, 550.574f, 4.020949f) - Vector(43.1875f, 32f, 153.125f), Vector(170.5563f, 550.574f, 4.020949f) + Vector(43.1875f, 32f, 153.125f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(291.468f, 735.8698f, 133.4667f, 197.1767f, 723.2543f, 201.0648f, 59.8125f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(234.1794f, 713.0812f, 180.1833f, 168.2049f, 547.5483f, 200.7424f, 59.8125f, 1);
	GlobalFunc_705(&uLocal_5577);
	func_46(0, 0, 0);
	func_43(0, 0);
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	iVar0 = 0;
	while (iVar0 < iLocal_7108)
	{
		if (iLocal_7108[iVar0] != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_7108[iVar0]);
			iLocal_7108[iVar0] = -1;
		}
		iVar0++;
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	CLOCK::PAUSE_CLOCK(0);
	func_42(0);
	func_39();
	GlobalFunc_7621(27, 0, 0, 1, 1);
	GlobalFunc_5168(0, 6, 0);
	GlobalFunc_10639(50, 1);
	GlobalFunc_10639(158, 1);
	GlobalFunc_10639(159, 1);
	func_6(17, 1, 0f, 0);
	GlobalFunc_7621(70, 1, 0, 1, 1);
	GlobalFunc_7621(71, 2, 0, 1, 1);
	GlobalFunc_7621(73, 1, 0, 1, 1);
	GlobalFunc_7621(72, 0, 0, 1, 1);
	GlobalFunc_7621(74, 0, 0, 1, 1);
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	}
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	STREAMING::END_SRL();
	GlobalFunc_695(1);
	GlobalFunc_4948(&uLocal_8012, 0, 0);
}





void func_383()//Position - 0x548BE
{
	if (iLocal_8040)
	{
		PAD::_RESET_INPUT_MAPPING_SCHEME();
	}
}

int func_384(int iParam0, int iParam1)//Position - 0x548D0
{
	if (MISC::IS_BIT_SET(Global_89962.f_20, 17))
	{
		return 0;
	}
	return GlobalFunc_9022(iParam0, iParam1);
}














void func_398(var uParam0, int iParam1)//Position - 0x54B9F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				if (uParam0->f_763[iVar0 /*5*/].f_1)
				{
					INTERIOR::UNPIN_INTERIOR(iParam1);
					GlobalFunc_700(&(uParam0->f_763[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_763[iVar0 /*5*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}


int func_400(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x54C4A
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
	
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID())
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
			if ((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!iParam0->f_23)
		{
			GlobalFunc_9023(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = GlobalFunc_584(iParam0->f_7);
		GlobalFunc_9023((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
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
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		iParam0->f_5 = GlobalFunc_237(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = GlobalFunc_237(iVar2);
		iParam0->f_7 = 4;
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
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, true);
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
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}














































void func_446(var uParam0)//Position - 0x57925
{
	if (uParam0->f_855)
	{
		if (uParam0->f_855.f_1)
		{
			STREAMING::REMOVE_PTFX_ASSET();
			GlobalFunc_700(&(uParam0->f_855));
		}
		else
		{
			uParam0->f_855.f_2 = 1;
			uParam0->f_977 = 1;
		}
	}
}

int func_447()//Position - 0x5795D
{
	if (PLAYER::PLAYER_PED_ID() == func_106())
	{
		return func_79();
	}
	else if (PLAYER::PLAYER_PED_ID() == func_79())
	{
		return func_106();
	}
	return 0;
}

void func_448()//Position - 0x5798D
{
	struct<2> Var0;
	int iVar4;
	
	if (func_447() == func_106())
	{
		StringCopy(&Var0, "CMN_MLEAVE", 16);
	}
	else
	{
		StringCopy(&Var0, "CMN_FLEAVE", 16);
	}
	if (!PED::IS_PED_INJURED(func_447()))
	{
		func_598();
	}
	switch (iLocal_6072)
	{
		case 0:
			GlobalFunc_11046(10, "11. Escape to Franklin's", 1, 0, 0, 1);
			GlobalFunc_6812(3, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			func_65(&Local_7475);
			func_65(&Local_7585);
			func_65(&Local_7695);
			GlobalFunc_5174(&Local_4444, iLocal_361);
			GlobalFunc_5174(&Local_4444, iLocal_362);
			GlobalFunc_5174(&Local_4444, iLocal_363);
			GlobalFunc_52(0, 1);
			if (iLocal_7108[4] == -1)
			{
				iLocal_7108[4] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(15.65f, 542.705f, 176.25f, 2.075f, 2f, 2.6f, 23f, 0, 7);
			}
			PATHFIND::SET_ROADS_IN_AREA(Vector(170.5563f, 550.574f, 4.020949f) - Vector(43.1875f, 32f, 153.125f), Vector(170.5563f, 550.574f, 4.020949f) + Vector(43.1875f, 32f, 153.125f), 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(291.468f, 735.8698f, 133.4667f, 197.1767f, 723.2543f, 201.0648f, 59.8125f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(234.1794f, 713.0812f, 180.1833f, 168.2049f, 547.5483f, 200.7424f, 59.8125f, 0, 0, 1);
			iLocal_8008 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(179.0935f, 647.6159f, 83.87982f) - Vector(43.1875f, 155.25f, 216.9375f), Vector(179.0935f, 647.6159f, 83.87982f) + Vector(43.1875f, 155.25f, 216.9375f), 0, 1, 1, 1);
			func_535();
			GlobalFunc_5168(0, 6, 1);
			GlobalFunc_5168(1, 6, 1);
			iLocal_8033 = 0;
			iLocal_4198 = 0;
			iLocal_4234 = 0;
			iLocal_4235 = 0;
			iLocal_8038 = 0;
			iLocal_8039 = 0;
			iLocal_6072++;
			break;
		
		case 1:
			func_533();
			GlobalFunc_703(&(Local_630[func_532() /*20*/].f_3));
			GlobalFunc_703(&(Local_630[3 /*20*/].f_3));
			GlobalFunc_703(&(Local_630[4 /*20*/].f_3));
			GlobalFunc_703(&(Local_2091[16 /*88*/].f_82));
			GlobalFunc_703(&uLocal_627);
			func_493(&Local_598, Local_419, 6.664714f, 543.6946f, 173.9733f, 19.38906f, 550.2059f, 177.4378f, 6.25f, 1, Local_630[4 /*20*/], func_447(), Local_630[3 /*20*/], Local_2091[16 /*88*/], "A3B_ESCFIN", "A3B_CREWLB", &Var0, "A3B_CREWLB", "", "", "", 0, 1, 1, -1);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[16 /*88*/], 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_447()) && PED::IS_PED_IN_VEHICLE(func_447(), Local_2091[16 /*88*/], 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_447(), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && PED::IS_PED_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[3 /*20*/], 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]) && PED::IS_PED_IN_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/], 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[4 /*20*/], 0);
			}
			if ((((((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[16 /*88*/], 0) && ENTITY::DOES_ENTITY_EXIST(func_447())) && PED::IS_PED_IN_VEHICLE(func_447(), Local_2091[16 /*88*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/])) && PED::IS_PED_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/])) && PED::IS_PED_IN_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/], 0))
			{
				func_111(&Local_598, 1, 0);
				func_491(&uLocal_627, Local_419, 1);
				PED::SET_GROUP_SEPARATION_RANGE(GlobalFunc_468(), 50f);
				PED::SET_PED_AS_GROUP_MEMBER(func_447(), GlobalFunc_468());
				PED::SET_PED_AS_GROUP_MEMBER(Local_630[3 /*20*/], GlobalFunc_468());
				PED::SET_PED_AS_GROUP_MEMBER(Local_630[4 /*20*/], GlobalFunc_468());
				PED::SET_PED_CONFIG_FLAG(func_447(), 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_630[3 /*20*/], 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_630[4 /*20*/], 118, false);
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_490() == 0)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_3B_01", 0f);
				}
				iLocal_6072++;
			}
			break;
		
		case 2:
			func_533();
			if (ENTITY::DOES_ENTITY_EXIST(func_447()))
			{
				if (PED::GET_PED_GROUP_INDEX(func_447()) != GlobalFunc_468())
				{
					PED::SET_PED_AS_GROUP_MEMBER(func_447(), GlobalFunc_468());
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
			{
				if (PED::GET_PED_GROUP_INDEX(Local_630[3 /*20*/]) != GlobalFunc_468())
				{
					PED::SET_PED_AS_GROUP_MEMBER(Local_630[3 /*20*/], GlobalFunc_468());
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
			{
				if (PED::GET_PED_GROUP_INDEX(Local_630[4 /*20*/]) != GlobalFunc_468())
				{
					PED::SET_PED_AS_GROUP_MEMBER(Local_630[4 /*20*/], GlobalFunc_468());
				}
			}
			if (((ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_IN_GROUP(func_447())) || (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_IN_GROUP(Local_630[3 /*20*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]) && !PED::IS_PED_IN_GROUP(Local_630[4 /*20*/])))
			{
				if (!PED::IS_PED_IN_GROUP(func_447()))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), func_447(), 1) < 20f)
					{
						PED::SET_PED_AS_GROUP_MEMBER(func_447(), GlobalFunc_468());
						GlobalFunc_703(&(Local_630[func_532() /*20*/].f_3));
					}
					else
					{
						func_485(&(Local_630[func_532() /*20*/].f_3), Local_630[func_532() /*20*/], 0);
					}
				}
				if (!PED::IS_PED_IN_GROUP(Local_630[3 /*20*/]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_630[3 /*20*/], 1) < 20f)
					{
						PED::SET_PED_AS_GROUP_MEMBER(Local_630[3 /*20*/], GlobalFunc_468());
						GlobalFunc_703(&(Local_630[3 /*20*/].f_3));
					}
					else
					{
						func_485(&(Local_630[3 /*20*/].f_3), Local_630[3 /*20*/], 0);
					}
				}
				if (!PED::IS_PED_IN_GROUP(Local_630[4 /*20*/]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_630[4 /*20*/], 1) < 20f)
					{
						PED::SET_PED_AS_GROUP_MEMBER(Local_630[4 /*20*/], GlobalFunc_468());
						GlobalFunc_703(&(Local_630[4 /*20*/].f_3));
					}
					else
					{
						func_485(&(Local_630[4 /*20*/].f_3), Local_630[4 /*20*/], 0);
					}
				}
				if (!iLocal_8039)
				{
					GlobalFunc_164("A3B_CREWLB", 7500, 1);
					iLocal_8039 = 1;
				}
				GlobalFunc_703(&uLocal_627);
			}
			else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_8039 = 1;
				if (!iLocal_8038)
				{
					if (GlobalFunc_5171() && iLocal_4234 >= 3)
					{
						GlobalFunc_164("LOSE_WANTED", 7500, 1);
						iLocal_8038 = 1;
					}
				}
				GlobalFunc_703(&uLocal_627);
				func_485(&(Local_630[func_532() /*20*/].f_3), Local_630[func_532() /*20*/], 0);
				func_485(&(Local_630[3 /*20*/].f_3), Local_630[3 /*20*/], 0);
				func_485(&(Local_630[4 /*20*/].f_3), Local_630[4 /*20*/], 0);
			}
			else
			{
				if (iLocal_8038 || iLocal_8039)
				{
					iLocal_8038 = 0;
					iLocal_8039 = 0;
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_IN_VEHICLE(func_447(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)))
				{
					func_485(&(Local_630[func_532() /*20*/].f_3), Local_630[func_532() /*20*/], 0);
				}
				else
				{
					GlobalFunc_703(&(Local_630[func_532() /*20*/].f_3));
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_IN_VEHICLE(Local_630[3 /*20*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)))
				{
					func_485(&(Local_630[3 /*20*/].f_3), Local_630[3 /*20*/], 0);
				}
				else
				{
					GlobalFunc_703(&(Local_630[3 /*20*/].f_3));
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]) && !PED::IS_PED_IN_VEHICLE(Local_630[4 /*20*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)))
				{
					func_485(&(Local_630[4 /*20*/].f_3), Local_630[4 /*20*/], 0);
				}
				else
				{
					GlobalFunc_703(&(Local_630[4 /*20*/].f_3));
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_419, 1) < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE("AH_3B_EXT", 8);
						GlobalFunc_9024(&uLocal_5577, func_106(), "Michael", 0);
						GlobalFunc_711(&uLocal_5577, "Michael", 9, 0, 0, 0);
						GlobalFunc_711(&uLocal_5577, "Michael", 8, 0, 0, 0);
						GlobalFunc_711(&uLocal_5577, "Michael", 2, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/].f_13[2], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/][2], 0);
						GlobalFunc_711(&uLocal_5577, "Michael", 1, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/].f_13[1], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/][1], 0);
						GlobalFunc_9024(&uLocal_5577, func_79(), "Franklin", 0);
						GlobalFunc_711(&uLocal_5577, "Franklin", 9, 0, 0, 0);
						GlobalFunc_711(&uLocal_5577, "Franklin", 2, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/].f_13[2], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/][2], 0);
						GlobalFunc_711(&uLocal_5577, "Franklin", 1, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/].f_13[1], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/][1], 0);
					}
				}
				else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_419, 1) > 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (CUTSCENE::IS_CUTSCENE_ACTIVE() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 5.699973f, 544.4655f, 173.6758f, 16.31578f, 550.8316f, 178.2595f, 12.6875f, 0, 1, 0))
				{
					GlobalFunc_710(&Local_4444, iLocal_6160);
					func_111(&Local_598, 1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 0, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 0, -1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
					{
						PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 0, -1, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_447()))
					{
						PED::REMOVE_PED_FROM_GROUP(func_447());
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_630[3 /*20*/]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_630[4 /*20*/]);
					}
					AUDIO::STOP_SCRIPTED_CONVERSATION(1);
					func_476(8);
					iLocal_6072++;
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_627))
					{
						func_491(&uLocal_627, Local_419, 1);
					}
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_419, 0.1f, 0.1f, 2f, 1, 1, 0);
				}
			}
			if (!iLocal_8033)
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_416, 1) > 300f)
				{
					iLocal_8033 = 1;
				}
				if (!bLocal_8024)
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_COPS");
						bLocal_8024 = true;
					}
				}
			}
			if (iLocal_8033 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) != joaat("ambulance"))
				{
					if (bLocal_8024)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_LOST_COPS_VEH");
					}
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_LOST_COPS");
				}
				AUDIO::DISTANT_COP_CAR_SIRENS(0);
				bLocal_8024 = false;
			}
			if (((ENTITY::DOES_ENTITY_EXIST(Local_2091[4 /*88*/]) || ENTITY::DOES_ENTITY_EXIST(Local_2091[5 /*88*/])) || ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/])) || ENTITY::DOES_ENTITY_EXIST(Local_2091[13 /*88*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_416, 1) > 400f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[4 /*88*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[4 /*88*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[5 /*88*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[5 /*88*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[12 /*88*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[13 /*88*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[13 /*88*/]));
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
			{
				if (GlobalFunc_709(func_447(), 567490903, 1))
				{
					TASK::CLEAR_PED_TASKS(func_447());
				}
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 0.1f, 0, 1))
				{
					iLocal_6072++;
				}
			}
			else
			{
				iLocal_6072++;
			}
			if (iLocal_6072 > 3)
			{
				GlobalFunc_5156(3, iLocal_4195, 1);
				if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_630[3 /*20*/])) < 200f)
				{
					iVar4 = 2;
				}
				else
				{
					iVar4 = 1;
				}
				GlobalFunc_5156(3, iLocal_4196, iVar4);
				if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_630[4 /*20*/])) < 200f)
				{
					iVar4 = 2;
				}
				else
				{
					iVar4 = 1;
				}
				GlobalFunc_5156(3, iLocal_4197, iVar4);
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2091[16 /*88*/], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
				}
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() != Local_2091[16 /*88*/])
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[16 /*88*/]));
					Local_2091[16 /*88*/] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_2091[16 /*88*/], 1, 1);
				}
				func_111(&Local_598, 1, 0);
				func_491(&uLocal_627, 8.533f, 540.1049f, 175.0272f, 0);
				iLocal_4219 = 1;
				iLocal_4198 = 1;
				iLocal_4205 = 0;
				iLocal_4204 = 0;
				iLocal_4206 = 0;
				iLocal_4203 = 0;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 8.533f, 540.1049f, 175.0272f, 4f, 4f, 2f, 1, 1, 0))
			{
				func_491(&uLocal_627, 5.6705f, 532.1223f, 174.3446f, 0);
				iLocal_6072++;
			}
			else if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 5.6705f, 532.1223f, 174.3446f, 1f))
			{
				if (!GlobalFunc_709(func_447(), 242628503, 1) || iLocal_4219)
				{
					func_468(1);
					if (PED::IS_PED_IN_ANY_VEHICLE(func_447(), 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5.6705f, 532.1223f, 174.3446f, 1f, 20000, 0.25f, 0, 40000f);
					func_466(func_447(), 1);
					iLocal_4219 = 0;
				}
			}
			else if (!GlobalFunc_709(func_447(), -875674219, 1) || iLocal_4219)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_447(), PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_LOOK_AT_ENTITY(func_447(), PLAYER::PLAYER_PED_ID(), -1, 0, 3);
				iLocal_4219 = 0;
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 5.6705f, 532.1223f, 174.3446f, 4f, 4f, 2f, 0, 1, 0))
			{
				GlobalFunc_703(&uLocal_627);
				func_465(12);
			}
			else if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 5.6705f, 532.1223f, 174.3446f, 1f))
			{
				if (!GlobalFunc_709(func_447(), 242628503, 1) || iLocal_4219)
				{
					func_468(1);
					if (PED::IS_PED_IN_ANY_VEHICLE(func_447(), 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5.6705f, 532.1223f, 174.3446f, 1f, 20000, 0.25f, 0, 40000f);
					func_466(func_447(), 1);
					iLocal_4219 = 1;
				}
			}
			else if (!GlobalFunc_709(func_447(), -875674219, 1) || iLocal_4219)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_447(), PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_LOOK_AT_ENTITY(func_447(), PLAYER::PLAYER_PED_ID(), -1, 0, 3);
				iLocal_4219 = 0;
			}
			break;
	}
	switch (iLocal_4198)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[16 /*88*/], 0))
			{
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_2091[16 /*88*/] && GlobalFunc_156(Local_630[4 /*20*/], Local_2091[16 /*88*/], 1) < 100f)
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/], 0))
					{
						if (!GlobalFunc_709(Local_630[4 /*20*/], -1794415470, 1))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_2091[16 /*88*/], -1))
							{
								TASK::TASK_ENTER_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/], 20000, -1, 2f, 1, 0);
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/], 20000, 0, 2f, 1, 0);
							}
						}
					}
					else if (GlobalFunc_708(Local_630[4 /*20*/]) != -1)
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_2091[16 /*88*/], -1))
						{
							if (GlobalFunc_708(Local_630[4 /*20*/]) == 0)
							{
								if (!GlobalFunc_709(Local_630[4 /*20*/], 355471868, 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_630[4 /*20*/], Local_2091[16 /*88*/]);
								}
							}
							else if (!GlobalFunc_709(Local_630[4 /*20*/], 242628503, 1))
							{
								func_468(1);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_ENTER_VEHICLE(0, Local_2091[16 /*88*/], 20000, -1, 2f, 1, 0);
								func_466(Local_630[4 /*20*/], 1);
							}
						}
					}
					else if ((PED::IS_PED_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 0) && GlobalFunc_156(Local_2091[16 /*88*/], func_447(), 1) > 8f) && iLocal_4234 > 15)
					{
						if (!GlobalFunc_709(Local_630[4 /*20*/], -1273030092, 1))
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_630[4 /*20*/], Local_2091[16 /*88*/], Local_419, 8, 15f, 262291, 1000f, 10f, 0);
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 0))
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], -1794415470, 1))
						{
							TASK::TASK_ENTER_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 20000, -2, 2f, 1, 0);
						}
					}
				}
			}
			break;
	}
	if (iLocal_6072 > 1)
	{
		if (iLocal_4234 < 13)
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_419, 1) < 70f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 128.9917f, 572.45f, 187.7856f, -96.15159f, 537.561f, 148.5215f, 54.9375f, 0, 1, 0))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
				iLocal_4234 = 13;
			}
		}
		if (func_490() == 2)
		{
			switch (iLocal_4234)
			{
				case 0:
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4235 = -1;
						iLocal_4234++;
					}
					else if (((iLocal_8032 || iLocal_8031) || ((ENTITY::DOES_ENTITY_EXIST(Local_2091[18 /*88*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[18 /*88*/], 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2091[18 /*88*/], 25.29933f, -787.3418f, 41.94056f, 108.7338f, -560.709f, 48.66066f, 42.75f, 0, 1, 0))) || ((ENTITY::DOES_ENTITY_EXIST(Local_2091[18 /*88*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[18 /*88*/], 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2091[19 /*88*/], 25.29933f, -787.3418f, 41.94056f, 108.7338f, -560.709f, 48.66066f, 42.75f, 0, 1, 0)))
					{
						if (GlobalFunc_5170())
						{
							MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_PLAY", 0)}, 6);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4235 = 0;
								iLocal_4234++;
							}
						}
					}
					break;
				
				case 1:
					if ((iLocal_8033 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !bLocal_8024)
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234 = 4;
					}
					else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (GlobalFunc_5170())
						{
							func_449("AH_ONTOT", 0, &cLocal_4237, 0, 1, 1, 0);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
					}
					else
					{
						switch (iLocal_4235)
						{
							case 0:
								if (GlobalFunc_5170() && (iLocal_4196 != 1 || (iLocal_8031 && (MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)))
								{
									MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_COOL", 0)}, 6);
									if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
									{
										StringCopy(&cLocal_4237, "", 24);
										iLocal_4235++;
									}
								}
								break;
							}
					}
					break;
				
				case 2:
					if (iLocal_4235 == -1)
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
					else if (GlobalFunc_5170())
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_WANT", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
			}
		}
		else if (iLocal_4234 < 3)
		{
			iLocal_4234 = 3;
		}
		switch (iLocal_4234)
		{
			case 3:
				if ((iLocal_8033 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !bLocal_8024)
				{
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
				else if ((!PLAYER::ARE_PLAYER_STARS_GREYED_OUT(PLAYER::PLAYER_ID()) && GlobalFunc_5170()) && (MISC::GET_GAME_TIMER() - iLocal_4236) > 15000)
				{
					if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_LOSE", 0)}, 6);
								break;
							
							case 1:
								MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_LOSE", 0)}, 6);
								break;
							
							case 2:
								func_449("AH_SHOOT2", 0, &cLocal_4237, 1, 1, 1, 1);
								break;
							}
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
						}
					}
				}
				break;
			
			case 4:
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_CLEAR", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 5:
				if (func_490() == 2)
				{
					if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_WHERE", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
				}
				else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_MOAN", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 6:
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_TALK", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 7:
				if (GlobalFunc_5170())
				{
					MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_PAID", 0)}, 6);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 8:
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_TALK2", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 9:
				if (iLocal_4196 == 1)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SEG", 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
				}
				else
				{
					iLocal_4234++;
				}
				break;
			
			case 10:
				if (GlobalFunc_5170())
				{
					MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_PAID", 0)}, 6);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 11:
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_TALK3", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 12:
				break;
			
			case 13:
				if (GlobalFunc_5170())
				{
					MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_BYEM", 0)}, 6);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(8f, 5f, 4);
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 14:
				if (GlobalFunc_5170())
				{
					MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_BYE", 0)}, 6);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 15:
				if (!GlobalFunc_111())
				{
					iLocal_4234++;
				}
				break;
			
			case 16:
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_6160 || INTERIOR::GET_INTERIOR_FROM_ENTITY(func_447()) == iLocal_6160)
				{
					if (GlobalFunc_5170())
					{
						func_449("AH_HOUSE", 0, &cLocal_4237, 1, 1, 1, 1);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
				}
				break;
			}
	}
}

void func_449(char* sParam0, bool bParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5928C
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!bParam3)
		{
			if (PLAYER::PLAYER_PED_ID() == func_106())
			{
				if (bParam5)
				{
					iVar1[iVar0] = 0;
					iVar0++;
				}
			}
			else if (PLAYER::PLAYER_PED_ID() == func_79())
			{
				if (bParam6)
				{
					iVar1[iVar0] = 1;
					iVar0++;
				}
			}
		}
		if (bParam4)
		{
			if (func_447() == func_106())
			{
				if (bParam5)
				{
					iVar1[iVar0] = 0;
					iVar0++;
				}
			}
			else if (func_447() == func_79())
			{
				if (bParam6)
				{
					iVar1[iVar0] = 1;
					iVar0++;
				}
			}
		}
		if (bParam1)
		{
			iVar1[iVar0] = 3;
			iVar0++;
		}
		if (iVar0 > 0)
		{
			StringCopy(sParam2, sParam0, 24);
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
			switch (iVar1[iVar7])
			{
				case 0:
					StringConCat(sParam2, "_M", 24);
					break;
				
				case 1:
					StringConCat(sParam2, "_F", 24);
					break;
				
				case 3:
					MemCopy(sParam2, {func_459(iLocal_4196, sParam0, 0)}, 6);
					break;
				
				default:
					break;
			}
		}
	}
}










struct<4> func_459(int iParam0, char* sParam1, bool bParam2)//Position - 0x5999F
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	switch (iParam0)
	{
		case 5:
			StringConCat(&Var0, "_DJ", 16);
			break;
		
		case 4:
			StringConCat(&Var0, "_NR", 16);
			break;
		
		case 3:
			StringConCat(&Var0, "_HW", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_GM", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_KA", 16);
			break;
		
		case 11:
			StringConCat(&Var0, "_C", 16);
			break;
		
		case 10:
			StringConCat(&Var0, "_PM", 16);
			break;
		
		case 9:
			StringConCat(&Var0, "_KD", 16);
			break;
		
		case 8:
			StringConCat(&Var0, "_ET", 16);
			break;
		
		case 13:
			StringConCat(&Var0, "_TM", 16);
			break;
		
		case 6:
			StringConCat(&Var0, "_PH", 16);
			break;
		
		case 7:
			StringConCat(&Var0, "_CF", 16);
			break;
		
		case 12:
			StringConCat(&Var0, "_RL", 16);
			break;
	}
	if (bParam2)
	{
		switch (GlobalFunc_697(iParam0))
		{
			case 0:
				StringConCat(&Var0, "B", 16);
				break;
			
			case 1:
				StringConCat(&Var0, "M", 16);
				break;
			
			case 2:
				StringConCat(&Var0, "G", 16);
				break;
			}
	}
	return Var0;
}






void func_465(int iParam0)//Position - 0x59BD3
{
	if (iLocal_6070 == 0)
	{
		iLocal_6073 = iParam0;
		iLocal_6070 = 1;
	}
}

void func_466(int iParam0, bool bParam1)//Position - 0x59BEB
{
	func_467();
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_596);
	}
	if (bParam1)
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_596);
	}
}

void func_467()//Position - 0x59C16
{
	if (bLocal_597)
	{
		TASK::CLOSE_SEQUENCE_TASK(uLocal_596);
		bLocal_597 = false;
	}
}

void func_468(bool bParam0)//Position - 0x59C2F
{
	if (bParam0)
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_596);
	}
	if (!bLocal_597)
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_596);
		bLocal_597 = true;
	}
}








void func_476(int iParam0)//Position - 0x59F6F
{
	if (Local_4253[iParam0 /*5*/] != 4)
	{
		Local_4253[iParam0 /*5*/] = 4;
		Local_4253[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
		Local_4253[iParam0 /*5*/].f_3 = 0;
	}
}









void func_485(var uParam0, int iParam1, bool bParam2)//Position - 0x5A4A0
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!HUD::DOES_BLIP_EXIST(*uParam0))
		{
			*uParam0 = GlobalFunc_6797(iParam1, bParam2, 145);
		}
	}
}





int func_490()//Position - 0x5A633
{
	int iVar0;
	
	iVar0 = GlobalFunc_697(iLocal_4197);
	if (iVar0 == 1)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_491(var uParam0, struct<3> Param1, int iParam4)//Position - 0x5A64F
{
	GlobalFunc_703(uParam0);
	*uParam0 = GlobalFunc_5104(Param1, iParam4);
}


int func_493(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, var uParam12, int iParam13, var uParam14, int iParam15, char* sParam16, char* sParam17, char* sParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, bool bParam23, bool bParam24, bool bParam25, int iParam26)//Position - 0x5A696
{
	return func_494(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 5, uParam12, iParam13, uParam14, iParam15, sParam16, sParam17, sParam18, sParam19, sParam20, sParam21, bParam23, bParam24, sParam22, 1, 0, bParam25, iParam26, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}

int func_494(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x5A6E6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = uParam15;
	uParam0->f_17[1] = uParam16;
	uParam0->f_17[2] = uParam17;
	uParam0->f_16 = uParam15;
	GlobalFunc_647(uParam0);
	func_528(uParam0);
	GlobalFunc_502();
	if (GlobalFunc_7721(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		GlobalFunc_635(sParam20);
		GlobalFunc_635(sParam21);
		GlobalFunc_635(sParam22);
		GlobalFunc_635(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 23);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (GlobalFunc_5146(uParam0, iParam29))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				GlobalFunc_635(sParam24);
				GlobalFunc_635(sParam27);
				GlobalFunc_635("MORE_SEATS");
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						GlobalFunc_635(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(uParam0);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
						{
							HUD::REMOVE_BLIP(uParam0);
						}
						uParam0->f_5 = GlobalFunc_5104(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					else if (!GlobalFunc_537(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 2))
						{
							GlobalFunc_5145(uParam0, sParam19, 0);
							MISC::SET_BIT(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (MISC::IS_BIT_SET(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], GlobalFunc_468()) || !GlobalFunc_5144(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (GlobalFunc_5143(uParam0))
							{
								GlobalFunc_635(sParam19);
								GlobalFunc_635(sParam24);
								GlobalFunc_635(sParam20);
								GlobalFunc_635(sParam21);
								GlobalFunc_635(sParam22);
								GlobalFunc_635(sParam23);
								GlobalFunc_635("LOSE_WANTED");
								GlobalFunc_635("MORE_SEATS");
								GlobalFunc_635(sParam27);
								func_111(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22)))
				{
					GlobalFunc_635(sParam24);
					GlobalFunc_635(sParam27);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						GlobalFunc_635(sParam19);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								GlobalFunc_635(sParam19);
							}
							*uParam0 = GlobalFunc_6783(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
							if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_714(*uParam0, uParam0);
							}
						}
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
									{
										GlobalFunc_5145(uParam0, sParam27, 0);
										MISC::SET_BIT(&(uParam0->f_13), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam24, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
								if (!MISC::IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
									{
										GlobalFunc_5122(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					GlobalFunc_635(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(uParam0->f_17[iVar9]))
									{
										GlobalFunc_5122(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(uParam0->f_13), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								if (MISC::IS_BIT_SET(uParam0->f_13, 9))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
						{
							GlobalFunc_5145(uParam0, sParam24, 0);
							MISC::SET_BIT(&(uParam0->f_13), 3);
							MISC::CLEAR_BIT(&(uParam0->f_13), 4);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(uParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 0);
		}
		GlobalFunc_635(sParam19);
		GlobalFunc_635(sParam24);
		GlobalFunc_635(sParam27);
		GlobalFunc_635(sParam24);
		GlobalFunc_635("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			HUD::REMOVE_BLIP(uParam0);
		}
	}
	MISC::CLEAR_BIT(&(uParam0->f_13), 11);
	MISC::CLEAR_BIT(&(uParam0->f_13), 12);
	return 0;
}


































void func_528(var uParam0)//Position - 0x5CD46
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_13), 25);
	}
}




int func_532()//Position - 0x5CE94
{
	if (PLAYER::PLAYER_PED_ID() == func_106())
	{
		return 1;
	}
	else if (PLAYER::PLAYER_PED_ID() == func_79())
	{
		return 0;
	}
	return 1;
}

void func_533()//Position - 0x5CEBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_447()))
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !PLAYER::ARE_PLAYER_STARS_GREYED_OUT(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(func_447(), 2, 1);
			PED::SET_PED_RESET_FLAG(func_447(), 128, 0);
			PED::SET_PED_CONFIG_FLAG(func_447(), 174, false);
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(func_447(), 2, 0);
			PED::SET_PED_RESET_FLAG(func_447(), 128, 1);
			PED::SET_PED_CONFIG_FLAG(func_447(), 174, true);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(func_447(), iLocal_373, 0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(func_447(), iLocal_373, joaat("component_at_ar_supp")))
			{
				WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(func_447(), iLocal_373, joaat("component_at_ar_supp"));
			}
			func_534(&(Local_630[func_532() /*20*/]), 0);
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_447(), iLocal_373) <= 60)
			{
				WEAPON::SET_PED_AMMO(func_447(), iLocal_373, 600);
			}
			iVar0 = 0;
			WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(func_447(), &iVar0);
			if (iVar0 != iLocal_373)
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(func_447(), iLocal_373);
			}
		}
		PED::SET_PED_ACCURACY(func_447(), 40);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !PLAYER::ARE_PLAYER_STARS_GREYED_OUT(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 2, 1);
			PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 128, 0);
			PED::SET_PED_CONFIG_FLAG(Local_630[3 /*20*/], 174, false);
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 2, 0);
			PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 128, 1);
			PED::SET_PED_CONFIG_FLAG(Local_630[3 /*20*/], 174, true);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Local_630[3 /*20*/], iLocal_375, 0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(Local_630[3 /*20*/], iLocal_375, joaat("component_at_ar_supp")))
			{
				WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(Local_630[3 /*20*/], iLocal_375, joaat("component_at_ar_supp"));
			}
			func_534(&(Local_630[3 /*20*/]), 0);
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(Local_630[3 /*20*/], iLocal_375) <= 60)
			{
				WEAPON::SET_PED_AMMO(Local_630[3 /*20*/], iLocal_375, 600);
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Local_630[3 /*20*/], &iVar1);
			if (iVar1 != iLocal_375)
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_630[3 /*20*/], iLocal_375);
			}
		}
		PED::SET_PED_ACCURACY(Local_630[3 /*20*/], 40);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !PLAYER::ARE_PLAYER_STARS_GREYED_OUT(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[4 /*20*/], 2, 1);
			PED::SET_PED_RESET_FLAG(Local_630[4 /*20*/], 128, 0);
			PED::SET_PED_CONFIG_FLAG(Local_630[4 /*20*/], 174, false);
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[4 /*20*/], 2, 0);
			PED::SET_PED_RESET_FLAG(Local_630[4 /*20*/], 128, 1);
			PED::SET_PED_CONFIG_FLAG(Local_630[4 /*20*/], 174, true);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Local_630[4 /*20*/], iLocal_374, 0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(Local_630[4 /*20*/], iLocal_374, joaat("component_at_ar_supp")))
			{
				WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(Local_630[4 /*20*/], iLocal_374, joaat("component_at_ar_supp"));
			}
			func_534(&(Local_630[4 /*20*/]), 0);
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(Local_630[4 /*20*/], iLocal_374) <= 60)
			{
				WEAPON::SET_PED_AMMO(Local_630[4 /*20*/], iLocal_374, 600);
			}
			iVar2 = 0;
			WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Local_630[4 /*20*/], &iVar2);
			if (iVar2 != iLocal_375)
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_630[4 /*20*/], iLocal_374);
			}
		}
		PED::SET_PED_ACCURACY(Local_630[4 /*20*/], 40);
	}
}

void func_534(var uParam0, bool bParam1)//Position - 0x5D1D2
{
	if (bParam1)
	{
		uParam0->f_17 = 1;
	}
	else
	{
		uParam0->f_17 = 0;
	}
}

void func_535()//Position - 0x5D1EC
{
	if (ENTITY::DOES_ENTITY_EXIST(func_106()))
	{
		GlobalFunc_173(&uLocal_431, 0, func_106(), "MICHAEL", 0, 1);
		AUDIO::STOP_PED_SPEAKING(func_106(), 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_79()))
	{
		GlobalFunc_173(&uLocal_431, 1, func_79(), "FRANKLIN", 0, 1);
		AUDIO::STOP_PED_SPEAKING(func_79(), 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/]))
	{
		GlobalFunc_173(&uLocal_431, 2, Local_630[5 /*20*/], "PILOTAH3", 0, 1);
	}
	else
	{
		GlobalFunc_173(&uLocal_431, 2, 0, "PILOTAH3", 0, 1);
	}
	switch (iLocal_4195)
	{
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/]))
			{
				GlobalFunc_173(&uLocal_431, 3, Local_630[6 /*20*/], "LIEngineer", 0, 1);
			}
			else
			{
				GlobalFunc_173(&uLocal_431, 3, 0, "LIEngineer", 0, 1);
			}
			break;
		
		case 7:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/]))
			{
				GlobalFunc_173(&uLocal_431, 3, Local_630[6 /*20*/], "CHRISTIAN", 0, 1);
			}
			else
			{
				GlobalFunc_173(&uLocal_431, 3, 0, "CHRISTIAN", 0, 1);
			}
			break;
		
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/]))
			{
				GlobalFunc_173(&uLocal_431, 3, Local_630[6 /*20*/], "PAIGE", 0, 1);
			}
			else
			{
				GlobalFunc_173(&uLocal_431, 3, 0, "PAIGE", 0, 1);
			}
			break;
	}
	switch (iLocal_4197)
	{
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
			{
				GlobalFunc_173(&uLocal_431, 4, Local_630[4 /*20*/], "KARIM", 0, 1);
			}
			else
			{
				GlobalFunc_173(&uLocal_431, 4, 0, "KARIM", 0, 1);
			}
			break;
		
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
			{
				GlobalFunc_173(&uLocal_431, 4, Local_630[4 /*20*/], "EDDIE", 0, 1);
			}
			else
			{
				GlobalFunc_173(&uLocal_431, 4, 0, "EDDIE", 0, 1);
			}
			break;
		
		case 13:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
			{
				GlobalFunc_173(&uLocal_431, 4, Local_630[4 /*20*/], "TALINA", 0, 1);
			}
			else
			{
				GlobalFunc_173(&uLocal_431, 4, 0, "TALINA", 0, 1);
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
	{
		switch (iLocal_4196)
		{
			case 5:
				GlobalFunc_173(&uLocal_431, 5, Local_630[3 /*20*/], "DARYL", 0, 1);
				break;
			
			case 4:
				GlobalFunc_173(&uLocal_431, 5, Local_630[3 /*20*/], "NORM", 0, 1);
				break;
			
			case 3:
				GlobalFunc_173(&uLocal_431, 5, Local_630[3 /*20*/], "HUGH", 0, 1);
				break;
			
			case 11:
				GlobalFunc_173(&uLocal_431, 5, Local_630[3 /*20*/], "CHEF", 0, 1);
				break;
			
			case 1:
				GlobalFunc_173(&uLocal_431, 5, Local_630[3 /*20*/], "GUSTAVO", 0, 1);
				break;
			
			case 2:
				GlobalFunc_173(&uLocal_431, 5, Local_630[3 /*20*/], "KARL", 0, 1);
				break;
			
			case 10:
				GlobalFunc_173(&uLocal_431, 5, Local_630[3 /*20*/], "PACKIE", 0, 1);
				break;
			}
	}
}































































void func_598()//Position - 0x62EB1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		WEAPON::GET_CURRENT_PED_WEAPON(func_447(), &iVar1, 1);
		if (func_447() == func_106())
		{
			iVar0 = iLocal_372;
		}
		else if (func_447() == func_79())
		{
			iVar0 = iLocal_373;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(func_447(), iVar0, 0))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_447(), iVar0) != 0)
			{
				if (iVar1 != iVar0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_447(), iVar0, 1);
				}
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(func_447(), 0);
			if (iVar0 != 0)
			{
				if (iVar1 != iVar0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_447(), iVar0, 1);
				}
				bVar2 = true;
			}
		}
	}
}

void func_599()//Position - 0x62F4D
{
	int iVar0;
	bool bVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
	{
		PED::SET_PED_RESET_FLAG(func_447(), 283, 1);
		func_598();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
	{
		PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 283, 1);
	}
	if ((!Local_7475.f_97 && !Local_7585.f_97) && !Local_7695.f_97)
	{
		GlobalFunc_5175(&Local_4444, &cLocal_317);
		GlobalFunc_5174(&Local_4444, GlobalFunc_615());
		GlobalFunc_5155(1);
	}
	switch (iLocal_6072)
	{
		case 0:
			func_491(&uLocal_627, Local_416, 0);
			GlobalFunc_11046(9, "10. Get to the getaway vehicle", 0, 0, 0, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			func_535();
			func_43(0, 0);
			func_46(0, 0, 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_VEHICLE"))
			{
				AUDIO::START_AUDIO_SCENE("AH_3B_GET_TO_VEHICLE");
			}
			iLocal_4234 = 0;
			StringCopy(&cLocal_4237, "", 24);
			iLocal_8030 = 0;
			iLocal_8031 = 0;
			iLocal_4198 = 0;
			iLocal_4222 = 0;
			iLocal_4223 = 0;
			iLocal_4219 = 1;
			iLocal_4220 = 1;
			iLocal_6072++;
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				func_449("AH_GROUN", 0, &cLocal_4237, 1, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
					StringCopy(&cLocal_4237, "", 24);
					iLocal_6072++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5171())
			{
				GlobalFunc_164("A3B_ESCPKUP", 7500, 1);
				iLocal_6072++;
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(uLocal_627) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), HUD::GET_BLIP_COORDS(uLocal_627), 1) < 30f)
			{
				GlobalFunc_703(&uLocal_627);
				iLocal_6072++;
			}
			break;
		
		case 4:
			switch (iLocal_4234)
			{
				case 0:
					if (GlobalFunc_5170())
					{
						func_449("AH_AMB_1", 0, &cLocal_4237, 0, 1, 1, 1);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							iLocal_8030 = 1;
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 1:
					if (func_490() == 2)
					{
						if (GlobalFunc_5170())
						{
							MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_AMB", 0)}, 6);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
					}
					else if (GlobalFunc_5170())
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4197, "AH_NOT", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 2:
					iLocal_4234 = 0;
					iLocal_6072++;
					break;
			}
			break;
		
		case 5:
			if (bLocal_8029)
			{
				func_604(&(Local_2091[16 /*88*/].f_82), Local_2091[16 /*88*/], 0);
				iLocal_4234 = 0;
				iLocal_6072++;
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SWAT_KD", 8, 0, 0, 0))
								{
									iLocal_4234++;
								}
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_DISC_KD", 8, 0, 0, 0))
							{
								iLocal_4234++;
							}
						}
						break;
					}
			}
			break;
		
		case 6:
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[16 /*88*/]))
			{
				GlobalFunc_703(&(Local_2091[16 /*88*/].f_82));
				iLocal_6072++;
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (func_490() == 2)
						{
							if (GlobalFunc_5170())
							{
								func_449("AH_AMB_2", 0, &cLocal_4237, 0, 1, 1, 1);
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
						}
						else if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_TURNUP_KD", 8, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5171())
						{
							if (ENTITY::GET_ENTITY_MODEL(Local_2091[16 /*88*/]) == joaat("ambulance"))
							{
								GlobalFunc_164("A3B_ESCAMB1", 7500, 1);
							}
							else
							{
								GlobalFunc_164("A3B_ESCVAN1", 7500, 1);
							}
							iLocal_6072++;
						}
						break;
					}
			}
			if (iLocal_6072 > 6)
			{
				iLocal_4234 = 0;
			}
			break;
		
		case 7:
			if (func_603(8) && iLocal_6077 == 0)
			{
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[16 /*88*/], 1) || PED::IS_PED_IN_VEHICLE(func_447(), Local_2091[16 /*88*/], 1)) || GlobalFunc_156(func_447(), Local_2091[16 /*88*/], 1) < 5f)
				{
					func_476(8);
				}
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[16 /*88*/]))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_VEHICLE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_GET_TO_VEHICLE");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_FRANKLINS"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_GET_TO_FRANKLINS");
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_VAN_ENTERED_WANTED");
					bLocal_8024 = true;
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_VAN_ENTERED");
					bLocal_8024 = false;
				}
				MISC::CLEAR_AREA_OF_VEHICLES(Local_419, 20f, 0, 0, 0, 0, 0);
				GlobalFunc_703(&(Local_2091[16 /*88*/].f_82));
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				func_465(11);
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (func_490() == 2)
						{
							if (GlobalFunc_5170())
							{
								func_449("AH_AMB_3", 0, &cLocal_4237, 0, 1, 1, 1);
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
						}
						else if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_UDRV_KD", 8, 0, 0, 0))
							{
								iLocal_8030 = 1;
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 3000)
						{
							func_449("AH_DGI", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
	}
	switch (iLocal_4198)
	{
		case 0:
			if (Local_4253[36 /*5*/].f_1 > 2)
			{
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
			{
				func_449("AH_MOVEON", 1, &cLocal_4237, 0, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
				}
			}
			break;
		
		case 1:
			if ((!PED::IS_PED_INJURED(Local_630[67 /*20*/]) || !PED::IS_PED_INJURED(Local_630[68 /*20*/])) || !PED::IS_PED_INJURED(Local_630[69 /*20*/]))
			{
				if ((func_532() == 1 && !Local_7585.f_97) || (func_532() == 0 && !Local_7475.f_97))
				{
					if (!GlobalFunc_709(func_447(), 1120685857, 1) || iLocal_4219)
					{
						func_602(&(Local_630[func_532() /*20*/]), 121.4464f, -709.9032f, 46.077f, 3f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 105.33f, -725.83f, 46.08f, 21.25f, 0);
						iLocal_4219 = 0;
					}
				}
				if (!Local_7695.f_97)
				{
					if (!GlobalFunc_709(Local_630[3 /*20*/], 1120685857, 1) || iLocal_4220)
					{
						func_602(&(Local_630[3 /*20*/]), 130.2455f, -719.364f, 46.077f, 3f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 105.33f, -725.83f, 46.08f, 21.25f, 0);
						iLocal_4220 = 0;
					}
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			else
			{
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			break;
		
		case 2:
			if (Local_4253[36 /*5*/].f_1 > 3)
			{
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
			{
				func_449("AH_MOVEON", 1, &cLocal_4237, 0, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
				}
			}
			break;
		
		case 3:
			if ((!PED::IS_PED_INJURED(Local_630[70 /*20*/]) || !PED::IS_PED_INJURED(Local_630[71 /*20*/])) || !PED::IS_PED_INJURED(Local_630[72 /*20*/]))
			{
				if ((func_532() == 1 && !Local_7585.f_97) || (func_532() == 0 && !Local_7475.f_97))
				{
					if (!GlobalFunc_709(func_447(), 1120685857, 1) || iLocal_4219)
					{
						func_602(&(Local_630[func_532() /*20*/]), 98.6859f, -723.5784f, 46.077f, 3f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 101.24f, -740.07f, 44.76f, 21.25f, 0);
						iLocal_4219 = 0;
					}
				}
				if (!Local_7695.f_97)
				{
					if (!GlobalFunc_709(Local_630[3 /*20*/], 1120685857, 1) || iLocal_4220)
					{
						func_602(&(Local_630[3 /*20*/]), 111.4017f, -727.0502f, 46.077f, 3f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 101.24f, -740.07f, 44.76f, 21.25f, 0);
						iLocal_4220 = 0;
					}
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			else
			{
				func_600(&uLocal_7098, 95.7508f, -735.1851f, 44.7604f, 66.2413f, 1, 2, 1);
				func_600(&uLocal_7102, 101.1608f, -749.3187f, 44.7559f, 90.6467f, 1, 2, 1);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			break;
		
		case 4:
			if (iLocal_8030 && bLocal_8029)
			{
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				func_602(&(Local_630[func_532() /*20*/]), 95.7508f, -735.1851f, 44.7604f, 1f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
				func_602(&(Local_630[3 /*20*/]), 101.1608f, -749.3187f, 44.7559f, 1f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
				if (iLocal_8031 && (((((!PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[0 /*20*/]) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[2 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[0 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[2 /*20*/])))
				{
					if ((func_532() == 1 && !Local_7585.f_97) || (func_532() == 0 && !Local_7475.f_97))
					{
						if (!GlobalFunc_709(func_447(), 1120685857, 1) || iLocal_4219)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 62.23f, -734.86f, 43.07f, 45f, 0);
							iLocal_4219 = 0;
						}
					}
					if (!Local_7695.f_97)
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], 1120685857, 1) || iLocal_4220)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 62.23f, -734.86f, 43.07f, 45f, 0);
							iLocal_4220 = 0;
						}
					}
					if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
					{
						func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
						}
					}
				}
				else
				{
					if ((func_532() == 1 && !Local_7585.f_97) || (func_532() == 0 && !Local_7475.f_97))
					{
						if (!GlobalFunc_709(func_447(), -1716541277, 1) || iLocal_4219)
						{
							TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_447(), uLocal_7098[uLocal_7098.f_3], 65.5344f, -736.5551f, 45.4244f, -1, 0);
							iLocal_4219 = 0;
						}
					}
					if (!Local_7695.f_97)
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], -1716541277, 1) || iLocal_4220)
						{
							TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_630[3 /*20*/], uLocal_7102[uLocal_7102.f_3], 65.5344f, -736.5551f, 45.4244f, -1, 0);
							iLocal_4220 = 0;
						}
					}
				}
			}
			break;
		
		case 5:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iVar0 = 257;
				bVar1 = true;
			}
			else
			{
				iVar0 = 1;
				bVar1 = false;
			}
			if ((((func_532() == 1 && !Local_7585.f_97) || (func_532() == 0 && !Local_7475.f_97)) && ENTITY::DOES_ENTITY_EXIST(Local_630[func_532() /*20*/])) && !PED::IS_PED_INJURED(Local_630[func_532() /*20*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_630[func_532() /*20*/], Local_2091[16 /*88*/], 0))
				{
					if (bVar1)
					{
						if (!GlobalFunc_709(Local_630[func_532() /*20*/], -1442466670, 1) || iLocal_4219)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[func_532() /*20*/], 3, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[func_532() /*20*/], 100f, 0);
							iLocal_4219 = 0;
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_447(), 1), ENTITY::GET_ENTITY_COORDS(Local_2091[16 /*88*/], 1), 1) < 10f)
				{
					if (!GlobalFunc_709(func_447(), -1794415470, 1) || iLocal_4219)
					{
						TASK::TASK_ENTER_VEHICLE(func_447(), Local_2091[16 /*88*/], -1, 1, 2f, iVar0, 0);
						iLocal_4219 = 0;
					}
				}
				else
				{
					func_602(&(Local_630[func_532() /*20*/]), 0f, 0f, 0f, 0f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_630[func_532() /*20*/], Local_2091[16 /*88*/], 0f, 0f, 0f, 5f, 0);
					if (((((!PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[0 /*20*/]) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[2 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[0 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[2 /*20*/]))
					{
						if (!GlobalFunc_709(func_447(), 1120685857, 1) || iLocal_4219)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 62.23f, -734.86f, 43.07f, 100f, 0);
							iLocal_4219 = 0;
						}
					}
					else if (!GlobalFunc_709(func_447(), 713668775, 1) || iLocal_4219)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_447(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2091[16 /*88*/], 0f, -2f, 0f), 2f, 20000, 0.25f, 0, 40000f);
						iLocal_4219 = 0;
					}
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/])) && !Local_7695.f_97)
			{
				if (PED::IS_PED_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 0))
				{
					if (bVar1)
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], -1442466670, 1) || iLocal_4220)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 3, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[3 /*20*/], 100f, 0);
							iLocal_4220 = 0;
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), ENTITY::GET_ENTITY_COORDS(Local_2091[16 /*88*/], 1), 1) < 10f || !bVar1)
				{
					if (!GlobalFunc_709(Local_630[3 /*20*/], -1794415470, 1) || iLocal_4220)
					{
						TASK::TASK_ENTER_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], -1, 2, 2f, iVar0, 0);
						iLocal_4220 = 0;
					}
				}
				else
				{
					func_602(&(Local_630[3 /*20*/]), 0f, 0f, 0f, 0f, 1, 1, 1, 1, 1f, 0f, 0, 0, 0, 0);
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 0f, 0f, 0f, 5f, 0);
					if (((((!PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[0 /*20*/]) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[2 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[0 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[2 /*20*/]))
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], 1120685857, 1) || iLocal_4220)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 62.23f, -734.86f, 43.07f, 45f, 0);
							iLocal_4220 = 0;
						}
					}
					else if (!GlobalFunc_709(Local_630[3 /*20*/], 713668775, 1) || iLocal_4220)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[3 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2091[16 /*88*/], 0f, -2f, 0f), 2f, 20000, 0.25f, 0, 40000f);
						iLocal_4220 = 0;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]) && !PED::IS_PED_INJURED(Local_630[4 /*20*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/], 0))
				{
					if (GlobalFunc_708(Local_630[4 /*20*/]) == -1)
					{
						if (!GlobalFunc_709(Local_630[4 /*20*/], 355471868, 1))
						{
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_630[4 /*20*/], Local_2091[16 /*88*/]);
						}
					}
					else if (bVar1)
					{
						if (((((!PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[0 /*20*/]) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[18 /*88*/].f_1[2 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[0 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[1 /*20*/])) || !PED::IS_PED_INJURED(Local_2091[19 /*88*/].f_1[2 /*20*/]))
						{
							if (!GlobalFunc_709(Local_630[4 /*20*/], -1442466670, 1))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[4 /*20*/], 3, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[4 /*20*/], 100f, 0);
							}
						}
					}
				}
			}
			break;
	}
}

void func_600(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7)//Position - 0x6428F
{
	uParam0->f_3 = (1 - uParam0->f_3);
	func_601(uParam0[uParam0->f_3], Param1, fParam4, iParam5, iParam6, iParam7);
}

void func_601(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7)//Position - 0x642B9
{
	if (*uParam0 != 0)
	{
		TASK::REMOVE_COVER_POINT(*uParam0);
	}
	if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Param1))
	{
		*uParam0 = TASK::ADD_COVER_POINT(Param1, fParam4, iParam5, iParam6, iParam7, 0);
	}
}

void func_602(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11, bool bParam12, int iParam13, bool bParam14)//Position - 0x642EF
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam5);
		PED::SET_PED_COMBAT_RANGE(*uParam0, iParam6);
		PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, iParam7);
		PED::SET_COMBAT_FLOAT(*uParam0, 5, fParam9);
		PED::SET_COMBAT_FLOAT(*uParam0, 8, fParam10);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 51, iParam11);
		if (bParam12)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 188, bParam12);
		}
		PED::SET_PED_DIES_WHEN_INJURED(*uParam0, bParam12);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, iParam13);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 286, bParam14);
		if (!GlobalFunc_105(Param1) && fParam4 != 0f)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param1, fParam4, 1, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, iParam8);
	}
}

int func_603(int iParam0)//Position - 0x6439A
{
	if (Local_4253[iParam0 /*5*/] == 0 || Local_4253[iParam0 /*5*/] == 5)
	{
		return 0;
	}
	return 1;
}

void func_604(var uParam0, int iParam1, bool bParam2)//Position - 0x643C5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		GlobalFunc_703(uParam0);
		*uParam0 = GlobalFunc_6783(iParam1, bParam2, 0);
	}
}



void func_607()//Position - 0x64480
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
	{
		PED::SET_PED_RESET_FLAG(func_447(), 283, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
	{
		PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 283, 1);
	}
	if (!PED::IS_PED_INJURED(func_79()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(func_79(), joaat("gadget_parachute"), 0))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(func_79(), joaat("gadget_parachute"));
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(func_79());
		}
	}
	if (!PED::IS_PED_INJURED(func_106()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(func_106(), joaat("gadget_parachute"), 0))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(func_106(), joaat("gadget_parachute"));
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(func_106());
		}
	}
	switch (iLocal_6072)
	{
		case 0:
			iLocal_4234 = 0;
			if (!iLocal_4222)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					if (!ENTITY::IS_ENTITY_ATTACHED(func_106()))
					{
						ENTITY::FREEZE_ENTITY_POSITION(func_106(), 1);
					}
					WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(func_106(), 0);
					iLocal_4222 = 1;
				}
			}
			if (!iLocal_4223)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(func_79()))
					{
						ENTITY::FREEZE_ENTITY_POSITION(func_79(), 1);
					}
					GlobalFunc_11257(func_79(), 9, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(func_79(), 0);
					iLocal_4223 = 1;
				}
			}
			if (!iLocal_4225)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("gunman_selection_1", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_630[3 /*20*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_630[3 /*20*/], 1);
					}
					iLocal_4225 = 1;
				}
			}
			if (!iLocal_4226)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1) || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					iLocal_4226 = 1;
				}
			}
			if ((((iLocal_4222 && iLocal_4223) && iLocal_4225) && iLocal_4226) && GlobalFunc_6804(1))
			{
				GlobalFunc_703(&uLocal_627);
				GlobalFunc_11046(8, "9. Rappel out of building", 0, 0, 0, 1);
				func_476(1);
				GlobalFunc_5174(&Local_4444, joaat("v_ilev_fib_sprklr"));
				GlobalFunc_5174(&Local_4444, joaat("v_ilev_fib_sprklr_off"));
				GlobalFunc_5174(&Local_4444, joaat("v_ilev_fib_sprklr_on"));
				func_398(&Local_4444, iLocal_6158);
				func_398(&Local_4444, iLocal_6157);
				func_655(&Local_4444, "8_FIBStairs");
				func_655(&Local_4444, "off_stairs1");
				func_476(0);
				func_476(3);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_7973))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_7973, 0);
				}
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				}
				iLocal_7995 = 0;
				iLocal_7974 = 0;
				iLocal_4198 = 1;
				if (!ENTITY::IS_ENTITY_ATTACHED(func_106()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_106(), 0);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(func_79()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_79(), 0);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_630[3 /*20*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_630[3 /*20*/], 0);
				}
				iLocal_7912 = 0;
				func_654();
				func_653();
				func_649();
				if (PLAYER::PLAYER_PED_ID() == func_106())
				{
					GlobalFunc_5176(&Local_7145, 1, 0, 0, 0, -998637568, 1);
				}
				else if (PLAYER::PLAYER_PED_ID() == func_79())
				{
					GlobalFunc_5176(&Local_7255, 1, 0, 0, 0, -998637568, 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
				GlobalFunc_719(&Local_4444, &cLocal_305);
				func_48(1);
				func_42(0);
				func_645(33, 0);
				func_645(29, 0);
				func_645(31, 0);
				iLocal_4234 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_RAPPEL_STARTS");
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_RAPPEL_01"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_RAPPEL_01");
				}
				func_644(8);
				GlobalFunc_5174(&Local_4444, iLocal_362);
				GlobalFunc_8380(0, 1, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_4236 = MISC::GET_GAME_TIMER();
				iLocal_6072++;
			}
			break;
		
		case 1:
			if (!func_603(20))
			{
				if (!iLocal_7805 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("A3B_RPLHLP", -1);
					iLocal_7805 = 1;
				}
				func_654();
				func_649();
				if ((Local_7145.f_98 && PLAYER::PLAYER_PED_ID() == func_106()) || (Local_7255.f_98 && PLAYER::PLAYER_PED_ID() == func_79()))
				{
					func_645(20, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::CLEAR_HELP(1);
				}
			}
			if (!func_603(21))
			{
				func_653();
				if ((((Local_7145.f_98 && func_447() == func_106()) && Local_7255.f_10.f_2 < -171.317f) || ((Local_7255.f_98 && func_447() == func_79()) && Local_7145.f_10.f_2 < -171.317f)) && Local_7365.f_98)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_RAPPEL_01"))
					{
						AUDIO::STOP_AUDIO_SCENE("AH_3B_RAPPEL_01");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FIGHT_CHOPPER"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_FIGHT_CHOPPER");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_CHOPPER_APPEARS");
					func_645(21, 0);
					func_645(30, 0);
					GlobalFunc_719(&Local_4444, "missprologuewait_impatient");
				}
			}
			if (func_603(20) && func_643(21))
			{
				iLocal_6072++;
			}
			break;
		
		case 2:
			if (GlobalFunc_5171() && func_643(21))
			{
				GlobalFunc_718(&Local_4444, joaat("p_cs_15m_rope_s"));
				GlobalFunc_719(&Local_4444, &cLocal_317);
				AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("AH_3B_IG_10", 0);
				GlobalFunc_164("A3B_ATTHELI", 7500, 1);
				func_641(8);
				iLocal_6072++;
			}
			break;
		
		case 3:
			if (!HUD::DOES_BLIP_EXIST(Local_2091[2 /*88*/].f_82))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FIGHT_CHOPPER"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_FIGHT_CHOPPER");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_RAPPEL_POINT_02"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_GET_TO_RAPPEL_POINT_02");
				}
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[7], "Distant_Sirens_Fight", 68.4f, -779.1f, 47.8f, "FBI_HEIST_FINALE_CHOPPER", 0, 0, 0);
				HUD::CLEAR_PRINTS();
				iLocal_6072++;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
				{
					func_598();
					if (!GlobalFunc_709(func_447(), 1785177548, 1) && !GlobalFunc_709(func_447(), -2017877118, 1))
					{
						if (!GlobalFunc_709(func_447(), 780511057, 1))
						{
							if (!PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[1 /*20*/]))
							{
								iVar0 = Local_2091[2 /*88*/].f_1[1 /*20*/];
							}
							else if (!PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[2 /*20*/]))
							{
								iVar0 = Local_2091[2 /*88*/].f_1[2 /*20*/];
							}
							else
							{
								iVar0 = Local_2091[2 /*88*/].f_1[0 /*20*/];
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								TASK::TASK_COMBAT_PED(func_447(), iVar0, 67108864, 16);
							}
						}
						else
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), Local_7931[iLocal_7963 /*3*/], 3f, 0, 0);
							PED::SET_PED_ACCURACY(func_447(), 10);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
				{
					if (!GlobalFunc_709(Local_630[3 /*20*/], 1785177548, 1))
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], 780511057, 1))
						{
							if (!PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[1 /*20*/]))
							{
								iVar1 = Local_2091[2 /*88*/].f_1[1 /*20*/];
							}
							else if (!PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[2 /*20*/]))
							{
								iVar1 = Local_2091[2 /*88*/].f_1[2 /*20*/];
							}
							else
							{
								iVar1 = Local_2091[2 /*88*/].f_1[0 /*20*/];
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], iVar1, 67108864, 16);
							}
						}
						else
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], Local_7947[iLocal_7963 /*3*/], 3f, 0, 0);
							PED::SET_PED_ACCURACY(Local_630[3 /*20*/], 10);
						}
					}
				}
			}
			break;
		
		case 4:
			if (PLAYER::PLAYER_PED_ID() == func_106())
			{
				bVar4 = true;
			}
			else
			{
				bVar5 = true;
			}
			AUDIO::LOAD_STREAM("Rappel_Foley_02", "FBI_HEIST_RAID");
			if (ENTITY::DOES_ENTITY_EXIST(func_106()) && !PED::IS_PED_INJURED(func_106()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_106(), 150.2122f, -722.345f, 73.15553f, 147.9164f, -721.4997f, 75.28053f, 1.6875f, 0, 1, 0))
				{
					bVar2 = true;
				}
				else
				{
					if (bVar4)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_627))
						{
							if (!GlobalFunc_100(HUD::GET_BLIP_COORDS(uLocal_627), 149.01f, -722.1f, 73.16f))
							{
								HUD::SET_BLIP_COORDS(uLocal_627, 149.01f, -722.1f, 73.16f);
							}
						}
						else
						{
							func_491(&uLocal_627, 149.01f, -722.1f, 73.16f, 0);
						}
						ENTITY::IS_ENTITY_AT_COORD(func_106(), 149.01f, -722.1f, 73.16f, 0.1f, 0.1f, 2f, 1, 1, 0);
					}
					bVar2 = false;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_79()) && !PED::IS_PED_INJURED(func_79()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_79(), 156.6409f, -725.2678f, 73.15553f, 158.7159f, -726.5322f, 75.28053f, 1.6875f, 0, 1, 0))
				{
					bVar3 = true;
				}
				else
				{
					if (bVar5)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_627))
						{
							if (!GlobalFunc_100(HUD::GET_BLIP_COORDS(uLocal_627), 156.6409f, -725.2678f, 73.15553f))
							{
								HUD::SET_BLIP_COORDS(uLocal_627, 156.6409f, -725.2678f, 73.15553f);
							}
						}
						else
						{
							func_491(&uLocal_627, 156.6409f, -725.2678f, 73.15553f, 0);
						}
						ENTITY::IS_ENTITY_AT_COORD(func_79(), 156.6409f, -725.2678f, 73.15553f, 0.1f, 0.1f, 2f, 1, 1, 0);
					}
					bVar3 = false;
				}
			}
			if (((ENTITY::DOES_ENTITY_EXIST(func_106()) && !PED::IS_PED_INJURED(func_106())) && ENTITY::DOES_ENTITY_EXIST(func_79())) && !PED::IS_PED_INJURED(func_79()))
			{
				if (((((bVar2 && func_106() == PLAYER::PLAYER_PED_ID()) || (bVar3 && func_79() == PLAYER::PLAYER_PED_ID())) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_15m_rope_s"))) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_317)) && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("AH_3B_IG_10", 0))
				{
					if (func_106() == PLAYER::PLAYER_PED_ID())
					{
						uLocal_3852[10] = CAM::CREATE_CAMERA(964613260, 1);
						Local_3864[10 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_cs_15m_rope_s"), 149.35f, -721.591f, 74.266f, 1, 1, 0);
						uLocal_3916[11] = PED::CREATE_SYNCHRONIZED_SCENE(149.35f, -721.591f, 74.266f, 0f, 0f, 161f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_3916[11], &cLocal_317, "start_rappel_m_michael", 1000f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[10 /*2*/], uLocal_3916[11], "start_rappel_m_rope", &cLocal_317, 1000f, -8f, 0, 1148846080);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3852[10], uLocal_3916[11], "start_rappel_m_cam", &cLocal_317);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3864[10 /*2*/]);
					}
					else
					{
						uLocal_3852[10] = CAM::CREATE_CAMERA(964613260, 1);
						Local_3864[10 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_cs_15m_rope_s"), 157.975f, -725.503f, 74.266f, 1, 1, 0);
						uLocal_3916[11] = PED::CREATE_SYNCHRONIZED_SCENE(157.975f, -725.503f, 74.266f, 0f, 0f, 148.25f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_3916[11], &cLocal_317, "start_rappel_m_michael", 1000f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[10 /*2*/], uLocal_3916[11], "start_rappel_m_rope", &cLocal_317, 1000f, -8f, 0, 1148846080);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3852[10], uLocal_3916[11], "start_rappel_m_cam", &cLocal_317);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3864[10 /*2*/]);
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_RAPPEL_POINT_02"))
					{
						AUDIO::STOP_AUDIO_SCENE("AH_3B_GET_TO_RAPPEL_POINT_02");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_RAPPEL_02"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_RAPPEL_02");
					}
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_3916[11]);
					if (AUDIO::LOAD_STREAM("Rappel_Foley_02", "FBI_HEIST_RAID"))
					{
						AUDIO::PLAY_STREAM_FROM_PED(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_5174(&Local_4444, joaat("p_cs_15m_rope_s"));
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_644(8);
					GlobalFunc_703(&uLocal_627);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					GlobalFunc_8380(1, 1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					GlobalFunc_5175(&Local_4444, "missprologuewait_impatient");
					iLocal_6072++;
				}
				else
				{
					if (PLAYER::PLAYER_PED_ID() != func_106())
					{
						if (!bVar2)
						{
							if (!GlobalFunc_709(func_106(), 713668775, 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_106(), 165.6748f, -733.6248f, 74.1555f, 2f, 20000, 0.1f, 512, 312.1074f);
							}
						}
						else if (!GlobalFunc_709(func_106(), 242628503, 1))
						{
							func_468(1);
							TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_a", 4f, -4f, -1, 1024, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_b", 4f, -4f, -1, 1024, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_c", 4f, -4f, -1, 1024, 0, 0, 0, 0);
							TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
							func_466(func_106(), 1);
						}
					}
					if (PLAYER::PLAYER_PED_ID() != func_79())
					{
						if (!bVar3)
						{
							if (!GlobalFunc_709(func_79(), 713668775, 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_79(), 157.6914f, -725.8945f, 74.1555f, 2f, 20000, 0.1f, 512, 312.1074f);
							}
						}
						else if (!GlobalFunc_709(func_79(), 242628503, 1))
						{
							func_468(1);
							TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_c", 4f, -4f, -1, 1024, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_a", 4f, -4f, -1, 1024, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_b", 4f, -4f, -1, 1024, 0, 0, 0, 0);
							TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
							func_466(func_79(), 1);
						}
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 166.6625f, -734.6992f, 73.15553f, 164.9899f, -732.4046f, 75.28053f, 1.6875f, 0, 1, 0))
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], 713668775, 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[3 /*20*/], 165.6748f, -733.6248f, 74.1555f, 2f, 20000, 0.1f, 512, 312.1074f);
						}
					}
					else if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1))
					{
						func_468(1);
						TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_b", 4f, -4f, -1, 1024, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_c", 4f, -4f, -1, 1024, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "missprologuewait_impatient", "trevor_waiting_impatient_a", 4f, -4f, -1, 1024, 0, 0, 0, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
						func_466(Local_630[3 /*20*/], 1);
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[11]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[11]) == 1f)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3864[10 /*2*/], -1000f, 0);
				OBJECT::DELETE_OBJECT(&(Local_3864[10 /*2*/]));
				func_65(&Local_7145);
				func_65(&Local_7255);
				func_65(&Local_7365);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_634(&Local_7475, 0, 147.918f, -720.178f, 74.186f, 0f, 0f, 159.78f, -5.42f, (-27.1f + 1f), 27.1f, 1, 0, 0, func_106(), 1, 1, 40f, 15f, 1, 3, 0.39f);
				func_634(&Local_7585, 0, 158.368f, -724.7775f, 74.1858f, 0f, 0f, 149.534f, -5.42f, (-27.1f + 1f), 27.1f, 1, 0, 0, func_79(), 1, 1, 40f, 15f, 1, 3, 0.39f);
				GlobalFunc_717(&Local_7475, 1);
				GlobalFunc_717(&Local_7585, 1);
				func_632(&Local_7475, 1);
				func_631(&Local_7475, 0);
				func_630(&Local_7475, 1);
				func_632(&Local_7585, 1);
				func_631(&Local_7585, 0);
				func_630(&Local_7585, 1);
				Local_7475.f_58 = 1;
				Local_7475.f_13 = { 150.4321f, -719.2129f, 69.6497f };
				Local_7475.f_89 = 5;
				Local_7475.f_90 = 6;
				GlobalFunc_5154(&Local_7475, 0, 1, 1, 0);
				Local_7585.f_58 = 1;
				Local_7585.f_13 = { 150.4321f, -719.2129f, 69.6497f };
				Local_7585.f_89 = 5;
				Local_7585.f_90 = 6;
				GlobalFunc_5154(&Local_7585, 0, 1, 1, 0);
				Local_7585.f_97 = 1;
				Local_7475.f_97 = 1;
				GlobalFunc_616(&Local_7475, -82.865f, -4.735f, 1.3f, 5.4f, 70.625f, 2f, 1.82f, 0.04f, 3.95f, -2.89f, 1f, 35.64f);
				GlobalFunc_616(&Local_7585, -82.865f, -4.735f, 1.3f, 8.625f, 14.225f, 2f, 1.82f, 0.04f, 1.8f, -1.4f, 1f, 35.64f);
				CAM::SET_CAM_NEAR_DOF(Local_7475.f_4, 2f);
				CAM::SET_CAM_FAR_DOF(Local_7475.f_4, 18f);
				CAM::SET_CAM_DOF_STRENGTH(Local_7475.f_4, 0.2f);
				CAM::SET_CAM_NEAR_DOF(Local_7585.f_4, 2f);
				CAM::SET_CAM_FAR_DOF(Local_7585.f_4, 18f);
				CAM::SET_CAM_DOF_STRENGTH(Local_7585.f_4, 0.2f);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(2.1f);
				if (PLAYER::PLAYER_PED_ID() == func_106())
				{
					CAM::SET_CAM_ACTIVE(Local_7475.f_4, 1);
				}
				else
				{
					CAM::SET_CAM_ACTIVE(Local_7585.f_4, 1);
				}
				CAM::DESTROY_CAM(uLocal_3852[10], 0);
				func_634(&Local_7695, 0, 167.0205f, -732.682f, 74.1858f, 0f, 0f, 126.909f, -5.42f, (-27.1f + 1f), 27.1f, 0, 0, 0, Local_630[3 /*20*/], 1, 1, 40f, 15f, 1, 3, 0.445f);
				func_632(&Local_7695, 1);
				func_631(&Local_7695, 0);
				Local_7695.f_97 = 1;
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				GlobalFunc_8380(0, 1, 1, 0);
				func_609();
				AUDIO::STOP_STREAM();
				iLocal_6072++;
			}
			break;
		
		case 6:
			func_609();
			if (!Local_7475.f_97)
			{
				if (func_447() == func_106())
				{
					if (!GlobalFunc_709(func_106(), -1716541277, 1))
					{
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_106(), Local_630[0 /*20*/].f_1, 138.8757f, -718.3909f, 47.5149f, -1, 0);
					}
				}
			}
			if (!Local_7585.f_97)
			{
				if (func_447() == func_79())
				{
					if (!GlobalFunc_709(func_79(), -1716541277, 1))
					{
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_79(), Local_630[1 /*20*/].f_1, 149.1408f, -721.7725f, 47.5948f, -1, 0);
					}
				}
			}
			if (!Local_7695.f_97)
			{
				if (!GlobalFunc_709(Local_630[3 /*20*/], -1716541277, 1))
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_630[3 /*20*/], Local_630[3 /*20*/].f_1, 130.2284f, -719.3832f, 47.3941f, -1, 0);
				}
			}
			if ((!Local_7475.f_97 && !Local_7585.f_97) && !Local_7695.f_97)
			{
				func_641(8);
				func_645(36, 0);
				func_465(10);
			}
			break;
	}
	switch (iLocal_4234)
	{
		case 1:
			if (GlobalFunc_5170())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
				{
					iLocal_4234++;
				}
				else
				{
					func_608();
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SERVICES", 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 500)
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SERVICEM1", 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
			{
				MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_CHOP", 0)}, 6);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_MICSEEHEL", 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
			}
			break;
		
		case 6:
			if (func_603(30))
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_DOWN", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
			}
			else if ((func_447() == func_106() && Local_7145.f_10.f_2 > -165f) || (func_447() == func_79() && Local_7255.f_10.f_2 > -165f))
			{
				func_608();
			}
			break;
		
		case 7:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_NEEDSHOOT", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
			}
			break;
		
		case 8:
		case 9:
			if (iLocal_6072 > 3)
			{
				StringCopy(&cLocal_4237, "", 24);
				iLocal_4234 = 10;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 1500)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
				{
					if (iLocal_4234 == 8)
					{
						func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
						iLocal_4234++;
					}
					else
					{
						func_449("AH_COWER", 1, &cLocal_4237, 0, 1, 1, 1);
						iLocal_4234 = 8;
					}
				}
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 10:
			if (iLocal_6072 > 4)
			{
				StringCopy(&cLocal_4237, "", 24);
				iLocal_4234 = 12;
			}
			else if (GlobalFunc_5170())
			{
				func_449("AH_RESPOND", 0, &cLocal_4237, 1, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
			}
			break;
		
		case 11:
			if (iLocal_6072 > 4)
			{
				StringCopy(&cLocal_4237, "", 24);
				iLocal_4234++;
			}
			else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
			{
				func_449("AH_REPEL", 0, &cLocal_4237, 1, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
			}
			break;
		
		case 12:
			if (iLocal_6072 > 4)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_RIG", 8, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
						iLocal_4234++;
					}
				}
			}
			else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
			{
				func_449("AH_REPEL", 0, &cLocal_4237, 1, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
				}
			}
			break;
		
		case 13:
			func_608();
			break;
	}
}

void func_608()//Position - 0x65BF2
{
	if ((GlobalFunc_5170() && MISC::GET_GAME_TIMER() > iLocal_4250) && (MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
		{
			if (PLAYER::PLAYER_PED_ID() == func_106())
			{
				if (((((Local_7145 == 1 || Local_7145 == 2) || Local_7145 == 3) || Local_7475 == 1) || Local_7475 == 2) || Local_7475 == 3)
				{
					StringCopy(&cLocal_4237, "AH_MICJUMP", 24);
				}
				else
				{
					StringCopy(&cLocal_4237, "", 24);
				}
			}
			else if (((((Local_7255 == 1 || Local_7255 == 2) || Local_7255 == 3) || Local_7585 == 1) || Local_7585 == 2) || Local_7585 == 3)
			{
				StringCopy(&cLocal_4237, "AH_FRANJUMP", 24);
			}
			else
			{
				StringCopy(&cLocal_4237, "", 24);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
		{
			if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
			{
				iLocal_4250 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7000));
				StringCopy(&cLocal_4237, "", 24);
			}
		}
	}
}

void func_609()//Position - 0x65D1B
{
	if (Local_7475.f_97)
	{
		Local_7475.f_102 = 1;
		Local_7475.f_100 = 1;
		Local_7475.f_104 = 1;
		Local_7475.f_105 = -20f;
		Local_7475.f_106 = 1;
		Local_7475.f_107 = joaat("weapon_carbinerifle");
		if (PLAYER::PLAYER_PED_ID() == func_106())
		{
			Local_7475.f_101 = 0;
			Local_7475.f_98 = func_612(&Local_7475, &(Local_630[0 /*20*/]), 0);
		}
		else
		{
			Local_7475.f_101 = 1;
			Local_7475.f_103 = 46.077f;
			Local_7475.f_98 = func_612(&Local_7475, &(Local_630[0 /*20*/]), 0);
		}
		if (Local_7475.f_98)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_106(), 0);
			func_611(&(Local_630[0 /*20*/]), 144.6043f, -720.4959f, 46.077f, 71.7143f, 1, 2, 1);
			Local_7475.f_97 = 0;
			if (PLAYER::PLAYER_PED_ID() == func_106())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ON_GROUND");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_RAPPEL_02"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_RAPPEL_02");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_VEHICLE"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_GET_TO_VEHICLE");
				}
				CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 1, 0, 0);
				HUD::CLEAR_HELP(1);
			}
		}
		else if (PLAYER::PLAYER_PED_ID() == func_106())
		{
			if (!GlobalFunc_74("A3B_RPLHLP2") && Local_7475.f_56)
			{
				GlobalFunc_1("A3B_RPLHLP2");
			}
		}
	}
	if (Local_7585.f_97)
	{
		Local_7585.f_102 = 1;
		Local_7585.f_100 = 1;
		Local_7585.f_104 = 1;
		Local_7585.f_105 = -20f;
		Local_7585.f_106 = 1;
		Local_7585.f_107 = joaat("weapon_carbinerifle");
		if (PLAYER::PLAYER_PED_ID() == func_79())
		{
			Local_7585.f_101 = 0;
			Local_7585.f_98 = func_612(&Local_7585, &(Local_630[1 /*20*/]), 0);
		}
		else
		{
			Local_7585.f_101 = 1;
			Local_7585.f_103 = 46.077f;
			Local_7585.f_98 = func_612(&Local_7585, &(Local_630[1 /*20*/]), 0);
		}
		if (Local_7585.f_98)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_79(), 0);
			func_611(&(Local_630[1 /*20*/]), 153.2881f, -723.7296f, 46.077f, 69.0961f, 1, 2, 1);
			Local_7585.f_97 = 0;
			if (PLAYER::PLAYER_PED_ID() == func_79())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ON_GROUND");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_RAPPEL_02"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_RAPPEL_02");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_VEHICLE"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_GET_TO_VEHICLE");
				}
				CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 1, 0, 0);
				HUD::CLEAR_HELP(1);
			}
		}
		else if (PLAYER::PLAYER_PED_ID() == func_79())
		{
			if (!GlobalFunc_74("A3B_RPLHLP2") && Local_7475.f_56)
			{
				GlobalFunc_1("A3B_RPLHLP2");
			}
		}
	}
	if (Local_7695.f_97)
	{
		Local_7695.f_102 = 0;
		Local_7695.f_100 = 1;
		Local_7695.f_104 = 1;
		Local_7695.f_105 = -20f;
		Local_7695.f_106 = 1;
		Local_7695.f_107 = joaat("weapon_carbinerifle");
		Local_7695.f_101 = 1;
		Local_7695.f_103 = 46.077f;
		if (func_612(&Local_7695, &(Local_630[3 /*20*/]), 0))
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Local_630[3 /*20*/], 0);
			func_611(&(Local_630[3 /*20*/]), 134.3783f, -721.2941f, 46.077f, 70.2955f, 0, 2, 1);
			Local_7695.f_97 = 0;
			Local_7695.f_98 = 1;
		}
	}
}


void func_611(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7)//Position - 0x66032
{
	if (uParam0->f_2)
	{
		TASK::REMOVE_COVER_POINT(uParam0->f_1);
	}
	uParam0->f_1 = TASK::ADD_COVER_POINT(Param1, fParam4, iParam5, iParam6, iParam7, 0);
	uParam0->f_2 = 1;
}

int func_612(var uParam0, var uParam1, bool bParam2)//Position - 0x66063
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	fVar0 = (9f / 4f);
	fVar1 = -(9f / 2f);
	fVar2 = 0f;
	if (uParam0->f_10.f_2 <= uParam0->f_27)
	{
		GlobalFunc_602(uParam0, 0);
		func_631(uParam0, 0);
		func_632(uParam0, 0);
		if (uParam0->f_100)
		{
			if (uParam0->f_56)
			{
				func_626(uParam0, uParam0->f_107);
				func_619(uParam0, uParam0->f_101, uParam0->f_102);
				if (uParam0->f_74)
				{
					return 1;
				}
			}
			else if (*uParam0 == 0)
			{
				func_67(uParam0, 0, joaat("weapon_unarmed"), 1, 1, 1);
				return 1;
			}
		}
		else
		{
			func_619(uParam0, uParam0->f_101, uParam0->f_102);
			if (*uParam0 == 0)
			{
				return 1;
			}
		}
	}
	else
	{
		if (uParam0->f_104)
		{
			if (!uParam0->f_56)
			{
				fVar2 = uParam0->f_27;
				uParam0->f_27 = uParam0->f_105;
			}
		}
		if ((uParam0->f_104 && uParam0->f_10.f_2 <= (uParam0->f_105 + 0.25f)) && !uParam0->f_56)
		{
			GlobalFunc_602(uParam0, 0);
			uParam0->f_101 = 1;
			if (func_616(uParam0, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_8));
				}
			}
		}
		else
		{
			if (uParam0->f_101)
			{
				if (uParam0->f_56)
				{
					GlobalFunc_602(uParam0, 2);
				}
				else
				{
					func_615(uParam0, 0);
					Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam1, 1) };
					if (Var3.f_2 < (uParam0->f_103 + fVar1))
					{
						if (MISC::ABSF(uParam0->f_22) <= 0.3f)
						{
							GlobalFunc_602(uParam0, 0);
							func_631(uParam0, 0);
							func_632(uParam0, 0);
							uParam0->f_108 = -1;
						}
					}
					else if (uParam0->f_108 == -1)
					{
						uParam0->f_108 = (MISC::GET_GAME_TIMER() + uParam0->f_109);
					}
					else if (MISC::GET_GAME_TIMER() > uParam0->f_108)
					{
						if (Var3.f_2 < (uParam0->f_103 + fVar0))
						{
							GlobalFunc_602(uParam0, 2);
							func_631(uParam0, 0);
							func_632(uParam0, 1);
						}
						else
						{
							GlobalFunc_602(uParam0, 2);
							func_631(uParam0, 1);
							func_632(uParam0, 1);
						}
					}
				}
			}
			else
			{
				func_631(uParam0, !uParam0->f_106);
				func_632(uParam0, 1);
			}
			if (!uParam0->f_56)
			{
				if ((uParam0->f_10.f_2 - 9f) <= (uParam0->f_27 - 0.25f) || (uParam0->f_104 && (uParam0->f_10.f_2 - 9f) <= (uParam0->f_105 - 0.25f)))
				{
					if (uParam0->f_101)
					{
						GlobalFunc_602(uParam0, GlobalFunc_254(uParam0->f_1, 0, 2));
					}
					func_631(uParam0, 0);
					func_632(uParam0, 1);
				}
				else if ((uParam0->f_10.f_2 - 22.8f) <= (uParam0->f_27 - 0.25f) || (uParam0->f_104 && (uParam0->f_10.f_2 - 22.8f) <= (uParam0->f_105 - 0.25f)))
				{
					if (uParam0->f_101)
					{
						GlobalFunc_602(uParam0, GlobalFunc_254(uParam0->f_1, 0, 2));
					}
					func_615(uParam0, 1);
				}
			}
			if (uParam0->f_106)
			{
				func_631(uParam0, 0);
			}
			if (bParam2)
			{
				if (!uParam0->f_101)
				{
					uParam0->f_33 = 0.75f;
					uParam0->f_34 = 1f;
				}
				else
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(*uParam1, 1) };
					if (Var6.f_2 < uParam0->f_103)
					{
						uParam0->f_33 = GlobalFunc_253((uParam0->f_33 * (-SYSTEM::TIMESTEP() * 2f)), (0.75f - 0.15f), 0.75f);
						uParam0->f_34 = GlobalFunc_253((uParam0->f_34 * (-SYSTEM::TIMESTEP() * 2f)), (1f - 0.1f), 1f);
					}
					else
					{
						uParam0->f_33 = GlobalFunc_253((uParam0->f_33 * (SYSTEM::TIMESTEP() * 2f)), (0.75f + 0.15f), 0.75f);
						uParam0->f_34 = GlobalFunc_253((uParam0->f_34 * (SYSTEM::TIMESTEP() * 2f)), (1f + 0.1f), 1f);
					}
				}
			}
		}
		func_619(uParam0, uParam0->f_101, uParam0->f_102);
		if (fVar2 != 0f)
		{
			uParam0->f_27 = fVar2;
		}
	}
	return 0;
}



void func_615(var uParam0, int iParam1)//Position - 0x66458
{
	uParam0->f_67 = iParam1;
}

int func_616(var uParam0, bool bParam1)//Position - 0x66466
{
	if (*uParam0 == 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (bParam1 && !uParam0->f_56)
			{
				func_617(uParam0, 6, 0, 1, 1, 0, 0);
			}
			else if (uParam0->f_56 && !bParam1)
			{
				uParam0->f_56 = 0;
				func_617(uParam0, 0, 0, 1, 1, 0, 0);
			}
			return 1;
		}
	}
	return 0;
}

void func_617(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x664C4
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	if ((*uParam0 == iParam1 && !bParam3) && !bParam2)
	{
		return;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (bParam4)
		{
			fVar2 = 8f;
			fVar3 = -8f;
			if (bParam2)
			{
				fVar2 = 1000f;
			}
			if (bParam6)
			{
				fVar2 = 2f;
			}
			switch (iParam1)
			{
				case 0:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					if (uParam0->f_56)
					{
						sVar0 = "Rope_Idle";
					}
					else
					{
						sVar0 = "Rappel_Idle";
						sVar1 = "Rappel_Idle_prop";
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), sVar0, fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					uParam0->f_22 = 0f;
					if (!uParam0->f_56)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
						{
							if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
							{
								ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, sVar1, GlobalFunc_608(), fVar2, 1, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
						{
							ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, "Rappel_Walk_prop", GlobalFunc_608(), fVar2, 1, 0, 0, 0, 0);
						}
					}
					break;
				
				case 2:
					if (bParam2)
					{
						iVar4 = 131074;
					}
					else
					{
						iVar4 = 2;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
						{
							ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, "Rappel_Jump_a_prop", GlobalFunc_608(), fVar2, 0, 1, 0, 0, 0);
						}
					}
					GlobalFunc_5135(uParam0);
					uParam0->f_78 = 0;
					uParam0->f_24 = 0f;
					uParam0->f_26 = -1f;
					uParam0->f_25 = 24f;
					break;
				
				case 3:
					if (bParam2)
					{
						iVar4 = 131074;
					}
					else
					{
						iVar4 = 2;
					}
					if (uParam0->f_69)
					{
						if (!uParam0->f_79)
						{
							sVar0 = "rappel_jump_c";
							sVar1 = "Rappel_Jump_c_Prop";
						}
						else
						{
							sVar0 = "rappel_jump_a";
							sVar1 = "Rappel_Jump_a_Prop";
						}
					}
					else
					{
						sVar0 = "Rappel_Jump_a";
						sVar1 = "Rappel_Jump_a_prop";
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), sVar0, fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
						{
							ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, sVar1, GlobalFunc_608(), fVar2, 0, 1, 0, 0, 0);
						}
					}
					GlobalFunc_5135(uParam0);
					uParam0->f_78 = 0;
					uParam0->f_24 = 0f;
					uParam0->f_26 = -1f;
					uParam0->f_25 = 24f;
					uParam0->f_87 = MISC::GET_GAME_TIMER();
					break;
				
				case 4:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					GlobalFunc_5135(uParam0);
					uParam0->f_78 = 0;
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				
				case 5:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rope_Slide", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				
				case 6:
					if (bParam2)
					{
						iVar4 = 131074;
					}
					else
					{
						iVar4 = 2;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				
				case 7:
					if (bParam2)
					{
						iVar4 = 131072;
					}
					else
					{
						iVar4 = 0;
					}
					ENTITY::DETACH_ENTITY(uParam0->f_3, 1, 1);
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "land_action", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				}
		}
		if (bParam2)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, 0, 0);
		}
	}
	uParam0->f_88 = MISC::GET_GAME_TIMER();
	*uParam0 = iParam1;
}


void func_619(var uParam0, bool bParam1, bool bParam2)//Position - 0x668B2
{
	func_620(uParam0, bParam1, bParam2, 1, 1, 0);
	GlobalFunc_5154(uParam0, 0, 0, 0, 0);
}

void func_620(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x668D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	
	if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
	{
		PAD::_0x7F4724035FDCA1DD(0);
		PAD::_0x7F4724035FDCA1DD(2);
	}
	if (!bParam1 || bParam2)
	{
		GlobalFunc_612(&iVar0, &iVar1, &iVar2, &iVar3, 0);
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * 127f));
			iVar3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * 127f));
		}
	}
	if (bParam2)
	{
		GlobalFunc_5176(uParam0, 0, iVar2, iVar3, 1, -998637568, 1);
	}
	bVar5 = false;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !PED::IS_PED_INJURED(uParam0->f_3))
	{
		switch (*uParam0)
		{
			case 0:
				if (!uParam0->f_59)
				{
					if (!uParam0->f_56)
					{
						if (bParam1)
						{
							if (uParam0->f_1 == 1)
							{
								bVar5 = true;
							}
						}
						else if (iVar1 > 100)
						{
							bVar5 = true;
						}
						if (bVar5)
						{
							if (uParam0->f_10.f_2 > uParam0->f_27)
							{
								func_617(uParam0, 1, 0, 0, 1, 0, 0);
							}
						}
					}
					else
					{
						if (bParam1)
						{
							if (uParam0->f_1 == 2)
							{
								bVar5 = true;
							}
						}
						else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, GlobalFunc_611()) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, GlobalFunc_610()) && uParam0->f_68))
						{
							bVar5 = true;
						}
						if (bVar5)
						{
							if (!GlobalFunc_609(uParam0, 0) || uParam0->f_3 == PLAYER::PLAYER_PED_ID())
							{
								func_617(uParam0, 5, 0, 0, 1, 0, 0);
							}
						}
					}
				}
				break;
			
			case 1:
				if (bParam1)
				{
					if (uParam0->f_1 != 1)
					{
						bVar5 = true;
					}
				}
				else if (iVar1 < 100)
				{
					bVar5 = true;
				}
				bVar6 = false;
				if (uParam0->f_10.f_2 <= uParam0->f_27)
				{
					bVar5 = true;
					bVar6 = true;
				}
				if (bVar5)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk", 3))
					{
						fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk");
						if (fVar4 >= 0.96f && fVar4 <= 1f)
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, GlobalFunc_608(), "rappel_walk", 0.5f);
							func_617(uParam0, 0, 0, 0, 1, 0, 0);
						}
						else if (bVar6)
						{
							func_617(uParam0, 0, 0, 0, 1, 0f, 1);
						}
					}
					else
					{
						func_617(uParam0, 0, 0, 0, 1, 0, 0);
					}
				}
				break;
			
			case 4:
				if (uParam0->f_70)
				{
					uParam0->f_23 = (uParam0->f_23 - (3f * SYSTEM::TIMESTEP()));
				}
				else
				{
					uParam0->f_23 = (uParam0->f_23 + (3f * SYSTEM::TIMESTEP()));
				}
				uParam0->f_10 = (uParam0->f_10 + (uParam0->f_23 * SYSTEM::TIMESTEP()));
				if (uParam0->f_70)
				{
					if (uParam0->f_10 < 0f)
					{
						uParam0->f_10 = 0f;
						func_617(uParam0, 0, 0, 0, 1, 0, 0);
					}
				}
				else if (uParam0->f_10 > 0f)
				{
					uParam0->f_10 = 0f;
					func_617(uParam0, 0, 0, 0, 1, 0, 0);
				}
				break;
			
			case 2:
			case 3:
				bVar7 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c", 3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c", uParam0->f_33);
						fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c");
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_c_Prop", 3))
							{
								if (fVar4 >= 0f && fVar4 <= 1f)
								{
									ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_c_Prop", fVar4);
									ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_c_Prop", uParam0->f_33);
								}
							}
						}
						if (!uParam0->f_77)
						{
							if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
							{
								if (!uParam0->f_78)
								{
									if (fVar4 >= 0.82f)
									{
										if (!GlobalFunc_111())
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
											{
												AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
											}
										}
										uParam0->f_78 = 1;
									}
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, GlobalFunc_608(), "rappel_jump_a", uParam0->f_34);
						fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a");
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_A_Prop", 3))
							{
								if (fVar4 >= 0f && fVar4 <= 1f)
								{
									ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_A_Prop", fVar4);
									ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_A_Prop", uParam0->f_34);
								}
							}
						}
						if (!uParam0->f_77)
						{
							if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
							{
								if (!uParam0->f_78)
								{
									if (fVar4 >= 0.74f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
										{
											AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
										}
										uParam0->f_78 = 1;
									}
								}
							}
						}
					}
				}
				else if (MISC::GET_GAME_TIMER() >= uParam0->f_87 + 300 && iParam3)
				{
					bVar7 = true;
				}
				if (!bVar7)
				{
					if (fVar4 >= 0.99f)
					{
						bVar7 = true;
					}
					else
					{
						iVar8 = 0;
						if ((bParam1 && uParam0->f_1 != 0) || bParam5)
						{
							iVar8 = 1;
						}
						else if (uParam0->f_69)
						{
							if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()))
							{
								iVar8 = 1;
							}
						}
						else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_611()) || (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()) && uParam0->f_68))
						{
							iVar8 = 1;
						}
						else if (uParam0->f_67)
						{
							if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()))
							{
								iVar8 = 1;
							}
						}
						if ((iVar8 && fVar4 < 0.3f) && !(bParam1 && fVar4 > uParam0->f_32))
						{
							uParam0->f_24 = (fVar4 / 0.3f);
							if (uParam0->f_24 > 1f)
							{
								uParam0->f_24 = 1f;
							}
							else if (uParam0->f_24 < 0f)
							{
								uParam0->f_24 = 0f;
							}
						}
						else if (uParam0->f_26 < 0f)
						{
							if (iVar8 && !(bParam1 && fVar4 > uParam0->f_32))
							{
								uParam0->f_24 = 1f;
							}
							if (!uParam0->f_69)
							{
								uParam0->f_26 = (0.3f + ((0.65f - 0.3f) * uParam0->f_24));
								uParam0->f_25 = (4f + ((24f - 4f) * uParam0->f_24));
							}
							else
							{
								uParam0->f_26 = (0.3f + ((0.61f - 0.3f) * uParam0->f_24));
								uParam0->f_25 = (15f + ((30f - 15f) * uParam0->f_24));
							}
						}
						if (GlobalFunc_607(*uParam0, fVar4))
						{
							if (fVar4 <= uParam0->f_26 || (iVar8 && uParam0->f_26 < 0f))
							{
								if (uParam0->f_69)
								{
									uParam0->f_22 = (uParam0->f_22 + (25f * SYSTEM::TIMESTEP()));
								}
								else
								{
									uParam0->f_22 = (uParam0->f_22 + (8.5f * SYSTEM::TIMESTEP()));
								}
							}
							else
							{
								uParam0->f_22 = (uParam0->f_22 - (uParam0->f_25 * SYSTEM::TIMESTEP()));
							}
							if (!uParam0->f_69)
							{
								if (fVar4 <= uParam0->f_26 || uParam0->f_26 >= 0.65f)
								{
									fVar9 = 9f;
								}
								else
								{
									fVar9 = 4f;
								}
							}
							else
							{
								fVar9 = 13f;
							}
							if (uParam0->f_22 > fVar9)
							{
								uParam0->f_22 = fVar9;
							}
							else if (uParam0->f_22 < 0f)
							{
								uParam0->f_22 = 0f;
							}
							if (bParam5)
							{
								uParam0->f_22 = (uParam0->f_22 / 1.75f);
							}
						}
						else
						{
							uParam0->f_22 = 0f;
						}
					}
				}
				if (bVar7)
				{
					func_617(uParam0, 0, 0, 0, 1, 0, 0);
				}
				else if (*uParam0 == 2)
				{
					if (fVar4 <= 0.2f)
					{
						if (bParam1)
						{
							if (uParam0->f_1 == 2)
							{
								bVar5 = true;
							}
						}
						else if (iVar1 > 100)
						{
							bVar5 = true;
						}
						if (bVar5)
						{
							func_617(uParam0, 3, 0, 0, 0, 0, 0);
						}
					}
				}
				break;
			
			case 5:
				if (bParam1)
				{
					if (uParam0->f_1 == 2)
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (GlobalFunc_609(uParam0, 0))
				{
					bVar5 = false;
				}
				if (bVar5)
				{
					if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_611()) || bParam1)
					{
						uParam0->f_22 = (uParam0->f_22 + (2f * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 >= 6f)
						{
							uParam0->f_22 = 6f;
						}
					}
					else
					{
						fVar10 = uParam0->f_22;
						if (fVar10 < uParam0->f_29)
						{
							fVar10 = uParam0->f_29;
						}
						uParam0->f_22 = (uParam0->f_22 + (2f * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 >= fVar10)
						{
							uParam0->f_22 = fVar10;
						}
					}
				}
				else
				{
					uParam0->f_22 = (uParam0->f_22 - (5f * SYSTEM::TIMESTEP()));
					if (uParam0->f_22 <= 0f)
					{
						uParam0->f_22 = 0f;
						func_617(uParam0, 0, 0, 0, 1, 0, 0);
					}
				}
				break;
			
			case 6:
				bVar11 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope", 3))
				{
					fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope");
					if (fVar4 <= 0.74f && fVar4 >= 0.38f)
					{
						uParam0->f_22 = (uParam0->f_22 + ((2f * 2f) * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 >= uParam0->f_29)
						{
							uParam0->f_22 = uParam0->f_29;
						}
					}
					else
					{
						uParam0->f_22 = (uParam0->f_22 - (5f * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 <= 0f)
						{
							uParam0->f_22 = 0f;
						}
					}
					if (fVar4 >= 0.98f)
					{
						bVar11 = true;
					}
				}
				if (bVar11)
				{
					uParam0->f_56 = 1;
					func_617(uParam0, 0, 0, 0, 1, 0, 0);
				}
				break;
			
			case 7:
				bVar12 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "land_action", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "land_action") >= 0.64f)
					{
						bVar12 = true;
					}
				}
				else if (MISC::GET_GAME_TIMER() >= uParam0->f_88 + 500)
				{
					bVar12 = true;
				}
				if (bVar12)
				{
					func_67(uParam0, 0, uParam0->f_9, 1, 0, 1);
					uParam0->f_74 = 1;
				}
				break;
		}
		bVar5 = false;
		if (!uParam0->f_56)
		{
			iVar13 = 0;
			iVar14 = 0;
			if (bParam1)
			{
				if (uParam0->f_1 == 2)
				{
					bVar5 = true;
					iVar13 = uParam0->f_65;
				}
				else if (uParam0->f_1 == 3 || uParam0->f_1 == 4)
				{
					bVar5 = true;
					iVar14 = uParam0->f_66;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, GlobalFunc_611()) || (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()) && uParam0->f_68))
			{
				bVar5 = true;
			}
			else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()) && uParam0->f_65)
			{
				bVar5 = true;
				iVar13 = 1;
			}
			if (bVar5)
			{
				bVar15 = false;
				if (*uParam0 <= 1)
				{
					bVar15 = true;
				}
				else if (fVar4 > 0.76f)
				{
					if (bParam4)
					{
						bVar15 = true;
					}
				}
				if (bVar15)
				{
					if (((iVar1 > 100 || (bParam1 && uParam0->f_1 == 2)) || iVar13) || bParam5)
					{
						if (uParam0->f_64 || iVar13)
						{
							uParam0->f_69 = iVar13;
							if (uParam0->f_67)
							{
								uParam0->f_69 = 0;
							}
							func_617(uParam0, 3, 0, 1, 1, 0, 0);
						}
					}
					else if ((iVar0 > 100 || iVar0 < -100) || iVar14)
					{
						if (uParam0->f_66)
						{
							func_617(uParam0, 4, 0, 1, 1, 0, 0);
							if (iVar0 > 0 || uParam0->f_1 == 4)
							{
								uParam0->f_70 = 1;
								uParam0->f_23 = 2.8f;
							}
							else if (iVar0 < 0 || uParam0->f_1 == 3)
							{
								uParam0->f_70 = 0;
								uParam0->f_23 = -2.5f;
							}
						}
					}
					else
					{
						func_617(uParam0, 2, 0, 1, 1, 0, 0);
					}
				}
			}
		}
		if (uParam0->f_10.f_2 > uParam0->f_27)
		{
			if (*uParam0 != 1)
			{
				if (uParam0->f_10.f_2 <= (uParam0->f_27 + uParam0->f_28))
				{
					uParam0->f_22 = (uParam0->f_22 - (40f * SYSTEM::TIMESTEP()));
					if (uParam0->f_22 < 0f)
					{
						uParam0->f_22 = 0f;
					}
				}
				uParam0->f_10.f_2 = (uParam0->f_10.f_2 - (uParam0->f_22 * SYSTEM::TIMESTEP()));
			}
			else
			{
				Var16 = { PED::GET_PED_EXTRACTED_DISPLACEMENT(uParam0->f_3, 0) };
				uParam0->f_10.f_2 = (uParam0->f_10.f_2 + Var16.f_2);
			}
		}
		Var19 = { 0f, 0f, 0f };
		if (uParam0->f_56)
		{
			fVar22 = 1f;
		}
		else if (*uParam0 != 6)
		{
			fVar22 = 0f;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope", 3))
		{
			fVar22 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope");
		}
		if (fVar22 < 0f)
		{
			fVar22 = 0f;
		}
		Var19.x = (-0.0141535f + (-0.0004206f * fVar22));
		Var19.f_1 = (-0.385494f + (0.224849f * fVar22));
		if (*uParam0 != 7)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3, uParam0->f_6, 0, uParam0->f_10 + Var19, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
		}
		if (!bParam1)
		{
			if (!uParam0->f_63)
			{
				if (!uParam0->f_56)
				{
					GlobalFunc_159("RAPPEL_HELP", -1);
				}
				else
				{
					GlobalFunc_159("FREEROPE_HELP", -1);
				}
				uParam0->f_63 = 1;
			}
		}
	}
	else
	{
		func_67(uParam0, 0, joaat("weapon_unarmed"), 1, 1, 1);
	}
}






void func_626(var uParam0, var uParam1)//Position - 0x67689
{
	uParam0->f_9 = uParam1;
	func_617(uParam0, 7, 0, 0, 1, 0, 0);
}




void func_630(var uParam0, int iParam1)//Position - 0x67CFA
{
	uParam0->f_68 = iParam1;
}

void func_631(var uParam0, bool bParam1)//Position - 0x67D08
{
	uParam0->f_65 = bParam1;
}

void func_632(var uParam0, int iParam1)//Position - 0x67D16
{
	uParam0->f_64 = iParam1;
}


void func_634(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, float fParam8, float fParam9, float fParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, float fParam17, float fParam18, bool bParam19, int iParam20, int iParam21)//Position - 0x67D32
{
	func_637(uParam0, iParam1, Param2, Param5, fParam8, fParam9, bParam11, bParam12, bParam13, iParam14, bParam16, iParam20, iParam21, 1, bParam19);
	func_635(uParam0, fParam10, 1, bParam15, fParam17, fParam18);
}

void func_635(var uParam0, float fParam1, bool bParam2, bool bParam3, var uParam4, float fParam5)//Position - 0x67D6E
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	
	GlobalFunc_605(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		if (bParam2)
		{
			iVar1 = 4;
		}
		else
		{
			iVar1 = 1;
		}
		if (fParam5 < 0f)
		{
			fVar2 = fParam1;
		}
		else
		{
			fVar2 = fParam5;
		}
		uParam0->f_5 = PHYSICS::ADD_ROPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_6, 1), 0f, 90f, 0f, fVar2, iVar1, fVar2, 0.5f, 0.5f, 1, 0, 1, uParam4, 0, 0);
		GlobalFunc_604(uParam0, fParam1);
		if (bParam3)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_91)
			{
				PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_6, 0f, 0f, -(uParam0->f_31 * IntToFloat(iVar0))));
				iVar0++;
			}
			uParam0->f_59 = 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_91)
			{
				if (iVar0 == 0)
				{
					Var3 = { 0f, 0f, 0f };
				}
				else
				{
					if ((iVar0 % 2) == 0)
					{
						Var3.x = 1f;
					}
					else
					{
						Var3.x = -1f;
					}
					Var3.f_1 = 0f;
					Var3.f_2 = (IntToFloat(iVar0) * -0.02f);
				}
				PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_6, Var3));
				iVar0++;
			}
			uParam0->f_59 = 1;
		}
		uParam0->f_60 = 0;
		uParam0->f_58 = 0;
		uParam0->f_57 = 1;
	}
}


void func_637(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, var uParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, int iParam16, bool bParam17, bool bParam18)//Position - 0x67EC6
{
	if (!uParam0->f_55)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam13))
		{
			uParam0->f_3 = PLAYER::PLAYER_PED_ID();
		}
		else
		{
			uParam0->f_3 = iParam13;
		}
		uParam0->f_1 = 0;
		uParam0->f_2 = 1;
		GlobalFunc_616(uParam0, 1114703135, -1068624773, 1067030938, 1125515264, 1106247680, 1053609165, 1076677837, 1017370378, 1088421888, -1061158912, 1073741824, 1111490560);
		if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 118, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 208, true);
			uParam0->f_75 = 1;
			uParam0->f_76 = 1;
		}
		if (bParam17)
		{
			if (!bParam12)
			{
				GlobalFunc_5137(uParam0);
			}
		}
		GlobalFunc_5136(uParam0, iParam1, Param2, Param5);
		GlobalFunc_613(uParam0);
		uParam0->f_10 = { 0f, 0f, uParam8 };
		uParam0->f_27 = uParam9;
		uParam0->f_61 = 0;
		uParam0->f_62 = 0;
		uParam0->f_63 = 0;
		if (!bParam11)
		{
			uParam0->f_63 = 1;
		}
		uParam0->f_56 = bParam12;
		uParam0->f_64 = 1;
		uParam0->f_65 = 0;
		uParam0->f_66 = 0;
		uParam0->f_67 = 0;
		uParam0->f_71 = 0;
		uParam0->f_74 = 0;
		uParam0->f_29 = 3f;
		uParam0->f_32 = 1f;
		uParam0->f_33 = 0.75f;
		uParam0->f_34 = 1f;
		if (bParam14)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, joaat("weapon_unarmed"), 1);
		}
		func_617(uParam0, iParam15, 1, 0, 1, iParam16, 0);
		func_620(uParam0, 1, 0, 1, 1, 0);
		if (bParam10)
		{
			uParam0->f_37 = 0f;
			uParam0->f_38 = uParam0->f_37;
			uParam0->f_35 = 0f;
			uParam0->f_50 = 0f;
			GlobalFunc_5176(uParam0, 0, 0, 0, 0, -1000f, bParam18);
		}
		uParam0->f_55 = 1;
	}
}




void func_641(int iParam0)//Position - 0x68178
{
	if (Local_4253[iParam0 /*5*/] == 3)
	{
		Local_4253[iParam0 /*5*/] = 1;
	}
}


int func_643(int iParam0)//Position - 0x6823C
{
	if (Local_4253[iParam0 /*5*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_644(int iParam0)//Position - 0x68257
{
	if (Local_4253[iParam0 /*5*/] != 4 && Local_4253[iParam0 /*5*/] != 0)
	{
		Local_4253[iParam0 /*5*/] = 3;
	}
}

int func_645(int iParam0, int iParam1)//Position - 0x68281
{
	if ((Local_4253[iParam0 /*5*/] == 0 || Local_4253[iParam0 /*5*/] == 5) || (Local_4253[iParam0 /*5*/] == 2 && Local_4253[iParam0 /*5*/].f_1 == 1))
	{
		if (iParam1 > 0)
		{
			Local_4253[iParam0 /*5*/] = 2;
			Local_4253[iParam0 /*5*/].f_3 = iParam1;
		}
		else
		{
			Local_4253[iParam0 /*5*/] = 1;
			Local_4253[iParam0 /*5*/].f_3 = 0;
		}
		Local_4253[iParam0 /*5*/].f_2 = MISC::GET_GAME_TIMER();
		Local_4253[iParam0 /*5*/].f_1 = 1;
		return 1;
	}
	return 0;
}




void func_649()//Position - 0x6874C
{
	float fVar0;
	
	if (PLAYER::PLAYER_PED_ID() == func_106())
	{
		CAM::SET_CAM_ACTIVE(Local_7145.f_4, 1);
		if (Local_7145.f_10.f_2 > -80f)
		{
			GlobalFunc_616(&Local_7145, -240.88f, 8.495f, 2f, 11.625f, 56.515f, 1.25f, 6.535f, 0.04f, 7.855f, -7.2f, 1.75f, 30.105f);
			func_652(&Local_7145, Local_149);
		}
		else
		{
			fVar0 = GlobalFunc_253(MISC::ABSF(((Local_7145.f_10.f_2 - -80f) / (Local_7145.f_27 - -80f))), 0f, 1f);
			GlobalFunc_616(&Local_7145, GlobalFunc_551(-240.88f, -245.53f, fVar0), GlobalFunc_551(8.495f, 5.275f, fVar0), GlobalFunc_551(2f, 2f, fVar0), GlobalFunc_551(11.625f, 6.7f, fVar0), GlobalFunc_551(56.515f, 63.79f, fVar0), GlobalFunc_551(1.25f, 1.25f, fVar0), GlobalFunc_551(6.535f, 1.08f, fVar0), GlobalFunc_551(0.04f, 0.04f, fVar0), GlobalFunc_551(7.855f, 3.505f, fVar0), GlobalFunc_551(-7.2f, -1.55f, fVar0), GlobalFunc_551(1.75f, 1.75f, fVar0), GlobalFunc_551(30.105f, 40f, fVar0));
			func_652(&Local_7145, GlobalFunc_721(Local_149, Local_152, fVar0));
		}
	}
	else
	{
		CAM::SET_CAM_ACTIVE(Local_7255.f_4, 1);
		if (Local_7255.f_10.f_2 > -80f)
		{
			GlobalFunc_616(&Local_7255, -240.88f, 8.495f, 2f, 11.625f, 56.515f, 1.25f, 6.535f, 0.04f, 7.855f, -7.2f, 1.75f, 30.105f);
			func_652(&Local_7255, Local_149);
		}
		else
		{
			fVar0 = GlobalFunc_253(MISC::ABSF(((Local_7255.f_10.f_2 - -80f) / (Local_7255.f_27 - -80f))), 0f, 1f);
			GlobalFunc_616(&Local_7255, GlobalFunc_551(-240.88f, -245.53f, fVar0), GlobalFunc_551(8.495f, 5.275f, fVar0), GlobalFunc_551(2f, 2f, fVar0), GlobalFunc_551(11.625f, 6.7f, fVar0), GlobalFunc_551(56.515f, 63.79f, fVar0), GlobalFunc_551(1.25f, 1.25f, fVar0), GlobalFunc_551(6.535f, 1.08f, fVar0), GlobalFunc_551(0.04f, 0.04f, fVar0), GlobalFunc_551(7.855f, 3.505f, fVar0), GlobalFunc_551(-7.2f, -1.55f, fVar0), GlobalFunc_551(1.75f, 1.75f, fVar0), GlobalFunc_551(30.105f, 40f, fVar0));
			func_652(&Local_7255, GlobalFunc_721(Local_149, Local_152, fVar0));
		}
	}
	CAM::SET_USE_HI_DOF();
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
	GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(2.1f);
}



void func_652(var uParam0, struct<3> Param1)//Position - 0x68A64
{
	uParam0->f_52 = { Param1 };
}

void func_653()//Position - 0x68A76
{
	float fVar0;
	struct<3> Var1;
	
	if ((PLAYER::PLAYER_PED_ID() == func_106() && Local_7145.f_10.f_2 < -152f) || (PLAYER::PLAYER_PED_ID() == func_79() && Local_7255.f_10.f_2 < -152f))
	{
		fVar0 = 72f;
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar0 = Var1.f_2;
	}
	if (func_447() == func_106())
	{
		if (!Local_7145.f_97)
		{
			func_634(&Local_7145, 0, 164.243f, -762.049f, 250.62f, 0f, 0f, 71.145f, -10.809f, -175.843f, 177f, 0, 0, 0, func_106(), 1, 1, 40f, 162.6f, 1, 0, 0);
			func_631(&Local_7145, 1);
			func_632(&Local_7145, 1);
			Local_7145.f_97 = 1;
			Local_7145.f_102 = 0;
			Local_7145.f_100 = 0;
			Local_7145.f_104 = 0;
			Local_7145.f_106 = 0;
			Local_7145.f_109 = 250;
			Local_7145.f_107 = joaat("weapon_unarmed");
		}
		Local_7145.f_101 = 1;
		Local_7145.f_103 = fVar0;
		Local_7145.f_98 = func_612(&Local_7145, &(Local_630[0 /*20*/]), 0);
		if (Local_7145.f_10.f_2 < Local_7145.f_27)
		{
			Local_7145.f_10.f_2 = Local_7145.f_27;
		}
	}
	if (func_447() == func_79())
	{
		if (!Local_7255.f_97)
		{
			func_634(&Local_7255, 0, 164.74f, -760.694f, 250.77f, 0f, 0f, 69.395f, -10.809f, -176.637f, 177f, 0, 0, 0, func_79(), 1, 1, 40f, 162.6f, 1, 0, 0);
			func_631(&Local_7255, 1);
			func_632(&Local_7255, 1);
			Local_7255.f_97 = 1;
			Local_7255.f_102 = 0;
			Local_7255.f_100 = 0;
			Local_7255.f_104 = 0;
			Local_7255.f_106 = 0;
			Local_7255.f_109 = 250;
			Local_7255.f_107 = joaat("weapon_unarmed");
		}
		Local_7255.f_101 = 1;
		Local_7255.f_103 = fVar0;
		Local_7255.f_98 = func_612(&Local_7255, &(Local_630[1 /*20*/]), 0);
		if (Local_7255.f_10.f_2 < Local_7255.f_27)
		{
			Local_7255.f_10.f_2 = Local_7255.f_27;
		}
	}
	if (!Local_7365.f_97)
	{
		func_634(&Local_7365, 0, 163.774f, -763.28f, 250.82f, 0f, 0f, 69.395f, -14.823f, -176.682f, 177f, 0, 0, 0, Local_630[3 /*20*/], 1, 1, 40f, 162.6f, 1, 0, 0);
		func_631(&Local_7365, 1);
		func_632(&Local_7365, 1);
		Local_7365.f_97 = 1;
		Local_7365.f_101 = 1;
		Local_7365.f_102 = 0;
		Local_7365.f_100 = 0;
		Local_7365.f_104 = 0;
		Local_7365.f_106 = 0;
		Local_7365.f_109 = 750;
		Local_7365.f_107 = joaat("weapon_unarmed");
	}
	Local_7365.f_103 = fVar0;
	Local_7365.f_98 = func_612(&Local_7365, &(Local_630[3 /*20*/]), 0);
	if (Local_7365.f_10.f_2 < Local_7365.f_27)
	{
		Local_7365.f_10.f_2 = Local_7365.f_27;
	}
}

void func_654()//Position - 0x68D48
{
	if (PLAYER::PLAYER_PED_ID() == func_106())
	{
		if (!Local_7145.f_97)
		{
			func_634(&Local_7145, 0, 164.243f, -762.049f, 250.62f, 0f, 0f, 71.145f, -10.809f, -175.843f, 177f, 1, 0, 0, func_106(), 1, 1, 40f, 162.6f, 1, 0, 0);
			func_631(&Local_7145, 1);
			func_632(&Local_7145, 1);
			Local_7145.f_97 = 1;
			Local_7145.f_102 = 1;
			Local_7145.f_100 = 0;
			Local_7145.f_104 = 0;
			Local_7145.f_106 = 0;
			Local_7145.f_109 = 250;
			Local_7145.f_107 = joaat("weapon_unarmed");
		}
		Local_7145.f_101 = 0;
		Local_7145.f_98 = func_612(&Local_7145, &(Local_630[0 /*20*/]), 0);
		if (Local_7145.f_10.f_2 < Local_7145.f_27)
		{
			Local_7145.f_10.f_2 = Local_7145.f_27;
		}
		if (Local_7145.f_10.f_2 < -88.5f)
		{
			if (!iLocal_7912)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HALF_RAPPEL");
				iLocal_7912 = 1;
			}
		}
	}
	else if (PLAYER::PLAYER_PED_ID() == func_79())
	{
		if (!Local_7255.f_97)
		{
			func_634(&Local_7255, 0, 164.74f, -760.694f, 250.77f, 0f, 0f, 69.395f, -10.809f, -176.637f, 177f, 1, 0, 0, func_79(), 1, 1, 40f, 162.6f, 1, 0, 0);
			func_631(&Local_7255, 1);
			func_632(&Local_7255, 1);
			Local_7255.f_97 = 1;
			Local_7255.f_102 = 1;
			Local_7255.f_100 = 0;
			Local_7255.f_104 = 0;
			Local_7255.f_106 = 0;
			Local_7255.f_109 = 250;
			Local_7255.f_107 = joaat("weapon_unarmed");
		}
		Local_7255.f_101 = 0;
		Local_7255.f_98 = func_612(&Local_7255, &(Local_630[1 /*20*/]), 0);
		if (Local_7255.f_10.f_2 < Local_7255.f_27)
		{
			Local_7255.f_10.f_2 = Local_7255.f_27;
		}
		if (Local_7255.f_10.f_2 < -88.5f)
		{
			if (!iLocal_7912)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HALF_RAPPEL");
				iLocal_7912 = 1;
			}
		}
	}
	AUDIO::OVERRIDE_PLAYER_GROUND_MATERIAL(MISC::GET_HASH_KEY("AM_BASE_GLASS_STRONG"), 1);
}

void func_655(var uParam0, char* sParam1)//Position - 0x68F41
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_874)
	{
		if (uParam0->f_874[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_874[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_874[iVar0 /*5*/].f_1)
				{
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(sParam1);
					GlobalFunc_700(&(uParam0->f_874[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_874[iVar0 /*5*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}





void func_660()//Position - 0x6903B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
	{
		PED::SET_PED_RESET_FLAG(func_447(), 283, 1);
		func_598();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
	{
		PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 283, 1);
	}
	switch (iLocal_6072)
	{
		case 0:
			func_491(&uLocal_627, 142.5694f, -765.9665f, 249.1519f, 0);
			GlobalFunc_11046(7, "8. Burntout floor 2", 0, 0, 0, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			func_645(19, 0);
			PED::SET_PED_COMBAT_MOVEMENT(func_79(), 1);
			PED::SET_PED_COMBAT_RANGE(func_79(), 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_630[3 /*20*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_630[3 /*20*/], 1);
			iLocal_4222 = 0;
			iLocal_4223 = 0;
			iLocal_4225 = 0;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_645(25, 0);
			StringCopy(&cLocal_4237, "", 24);
			iLocal_4234 = 0;
			iLocal_6161 = 0;
			iLocal_4198 = 0;
			iLocal_6072++;
			break;
		
		case 1:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[5]) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("interrupt")))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (PLAYER::PLAYER_PED_ID() == func_106())
				{
					iLocal_4222 = 1;
				}
				else
				{
					iLocal_4223 = 1;
				}
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				GlobalFunc_5175(&Local_4444, "missheistfbi3b_ig6");
				iLocal_6072++;
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 146.7784f, -735.5237f, 249.1521f, 131.956f, -730.5193f, 252.9734f, 4.5625f, 0, 1, 0))
			{
				func_667(&(Local_630[50 /*20*/]), iLocal_362, 134.7801f, -743.9953f, 249.152f, 334.6092f, "postFall_1", iLocal_625, joaat("weapon_pumpshotgun"), 0, 5, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[50 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[50 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[50 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[50 /*20*/], 1);
				iLocal_6072++;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 138.8837f, -732.7797f, 249.1521f, 143.2183f, -734.3622f, 252.5273f, 4.875f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_630[50 /*20*/]))
				{
					func_602(&(Local_630[50 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 0f, 1, 0, 1, 1);
					func_468(1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 136.0926f, -744.327f, 249.152f, PLAYER::PLAYER_PED_ID(), 1f, 1, 1f, 4f, 1, 0, 0, -957453492, 20000);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0);
					func_466(Local_630[50 /*20*/], 1);
				}
				iLocal_6072++;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 135.2489f, -746.2418f, 249.152f, 136.5019f, -743.0078f, 251.652f, 3.75f, 0, 1, 0))
			{
				func_667(&(Local_630[51 /*20*/]), iLocal_362, 117.3914f, -750.505f, 249.1522f, 343.9231f, "Coms1st_1", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				func_667(&(Local_630[52 /*20*/]), iLocal_361, 126.4687f, -756.7318f, 249.1521f, 57.8205f, "Coms1st_2", iLocal_625, joaat("weapon_pumpshotgun"), 0, 2, -1, 0, 1, 1);
				func_602(&(Local_630[51 /*20*/]), 118.5374f, -741.2036f, 249.1521f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				func_602(&(Local_630[52 /*20*/]), 118.5398f, -752.3001f, 249.1522f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				func_666(&(Local_630[51 /*20*/]), 117.3914f, -750.505f, 249.1522f, 343.9231f, -1, 1, 2, 2, 0, 0f, 1, 1);
				func_666(&(Local_630[52 /*20*/]), 124.9857f, -756.764f, 249.1522f, 71.215f, -1, 0, 2, 1, 0, 0f, 1, 0);
				PED::_0x110F526AB784111F(Local_630[51 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[51 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[51 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[51 /*20*/], 1);
				PED::_0x110F526AB784111F(Local_630[52 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[52 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[52 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[52 /*20*/], 1);
				iLocal_6072++;
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 117.5734f, -743.9096f, 249.1522f, 120.3015f, -735.9928f, 251.8933f, 5.5625f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_630[51 /*20*/]))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[51 /*20*/], 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_630[51 /*20*/], 2);
					PED::SET_PED_CONFIG_FLAG(Local_630[51 /*20*/], 286, true);
					TASK::TASK_COMBAT_PED(Local_630[51 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				func_645(23, 0);
				iLocal_6072++;
			}
			break;
		
		case 6:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 117.7716f, -747.2835f, 249.1522f, 112.5058f, -745.6179f, 252.3674f, 3f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_630[52 /*20*/]))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[52 /*20*/], 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_630[52 /*20*/], 2);
					PED::SET_PED_CONFIG_FLAG(Local_630[52 /*20*/], 286, true);
					TASK::TASK_COMBAT_PED(Local_630[52 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iLocal_6072++;
			}
			break;
		
		case 7:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 124.639f, -756.0547f, 249.1521f, 122.3064f, -755.0397f, 251.4022f, 2.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_447(), 124.639f, -756.0547f, 249.1521f, 122.3064f, -755.0397f, 251.4022f, 2.25f, 0, 1, 0))
			{
				func_667(&(Local_630[55 /*20*/]), iLocal_361, 153.6167f, -763.6597f, 249.1519f, 72.7809f, "preFinalStair1", iLocal_625, joaat("weapon_smg"), 0, 5, -1, 0, 1, 1);
				func_602(&(Local_630[55 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 0f, 1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[55 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[55 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[55 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[55 /*20*/], 1);
				func_667(&(Local_630[56 /*20*/]), iLocal_361, 148.4886f, -769.8999f, 249.1519f, 341.649f, "preFinalStair2", iLocal_625, joaat("weapon_pistol"), 0, 5, 150, 0, 1, 1);
				func_602(&(Local_630[56 /*20*/]), 148.4886f, -769.8999f, 249.1519f, 1f, 1, 0, 1, 1, 1f, 0f, 0, 0, 0, 0);
				PED::_0x110F526AB784111F(Local_630[56 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[56 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[56 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[56 /*20*/], 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[56 /*20*/], 148.4886f, -769.8999f, 249.1519f, -1, 0, 0f, 1, 0, 0, 0);
				func_667(&(Local_630[57 /*20*/]), iLocal_361, 145.9628f, -770.7472f, 249.1519f, 255.583f, "preFinalStair3", iLocal_625, joaat("weapon_pumpshotgun"), 0, 2, 110, 0, 1, 1);
				func_602(&(Local_630[57 /*20*/]), 150.9992f, -772.7845f, 249.1519f, 1.5f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				PED::_0x110F526AB784111F(Local_630[57 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[57 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[57 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[57 /*20*/], 1);
				iLocal_6072++;
			}
			break;
		
		case 8:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 140.2719f, -757.6794f, 249.152f, 141.7488f, -753.51f, 251.5693f, 6.75f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_630[55 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[55 /*20*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0);
				}
				iLocal_6072++;
			}
			break;
		
		case 9:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 153.4296f, -760.3868f, 249.1519f, 157.3355f, -761.753f, 252.8427f, 5.0625f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_630[56 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[56 /*20*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0);
				}
				if (!PED::IS_PED_INJURED(Local_630[57 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[57 /*20*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0);
				}
				iLocal_6072++;
			}
			break;
		
		case 10:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 142.2694f, -767.0538f, 249.1519f, 142.9071f, -765.3488f, 251.4019f, 1.75f, 0, 1, 0))
			{
				GlobalFunc_718(&Local_4444, iLocal_367);
				GlobalFunc_7716(0, 1);
				CUTSCENE::REQUEST_CUTSCENE("ah_3b_mcs_7", 8);
				STREAMING::_0xF8155A7F03DDFC8E(1);
				if (func_532() == 1)
				{
					GlobalFunc_9024(&uLocal_5577, func_106(), "Michael", 0);
				}
				else if (func_532() == 0)
				{
					GlobalFunc_9024(&uLocal_5577, func_79(), "Franklin", 0);
				}
				GlobalFunc_9024(&uLocal_5577, Local_630[3 /*20*/], "gunman_selection_1", 0);
				func_491(&uLocal_627, 161.905f, -763.6213f, 245.1519f, 0);
				func_645(24, 0);
				iLocal_6072++;
			}
			break;
		
		case 11:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 142.5027f, -767.1843f, 245.1521f, 141.2271f, -770.819f, 248.2003f, 2.5f, 0, 1, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[8 /*2*/]) && STREAMING::HAS_MODEL_LOADED(iLocal_367))
				{
					Local_3864[8 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_367, 163.03f, -756.43f, 245.14f, 1, 1, 0);
					Local_3864[8 /*2*/].f_1 = 1;
					ENTITY::SET_ENTITY_HEADING(Local_3864[8 /*2*/], -1.92f);
					GlobalFunc_5174(&Local_4444, iLocal_367);
					AUDIO::DISTANT_COP_CAR_SIRENS(1);
					iLocal_6072++;
				}
			}
			break;
		
		case 12:
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 158.0708f, -759.9653f, 245.1522f, 163.7922f, -761.8114f, 248.0268f, 25.1875f, 0, 1, 0) && PED::IS_PED_INJURED(Local_630[58 /*20*/])) && PED::IS_PED_INJURED(Local_630[59 /*20*/])) && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (!GlobalFunc_5170())
				{
					GlobalFunc_5105();
				}
				else if (!GlobalFunc_111())
				{
					if (iLocal_4195 == 12)
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_MCS7", 1)}, 6);
					}
					else
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_MCS7", 0)}, 6);
					}
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						GlobalFunc_703(&uLocal_627);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[1 /*20*/], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[3 /*20*/], 1);
						if (PLAYER::PLAYER_PED_ID() == func_106())
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_79(), "Franklin", 0, 0, 2);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_106(), "Michael", 0, 0, 2);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[3 /*20*/], "gunman_selection_1", 0, 0, 2);
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_RAPPEL_CS");
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						GlobalFunc_8380(1, 1, 1, 0);
						CUTSCENE::START_CUTSCENE(2048);
						RECORDING::_0x48621C9FCA3EBD28(4);
						iLocal_4222 = 0;
						iLocal_4223 = 0;
						iLocal_4225 = 0;
						iLocal_4226 = 0;
						func_645(32, 0);
						StringCopy(&cLocal_4237, "", 24);
						func_465(9);
					}
				}
			}
			break;
	}
	switch (iLocal_4198)
	{
		case 0:
			if ((iLocal_4222 && iLocal_4223) && iLocal_4225)
			{
				if (func_603(8))
				{
					func_641(8);
				}
				GlobalFunc_5175(&Local_4444, &cLocal_257);
				iLocal_4234 = 0;
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), 147.0101f, -733.1375f, 249.1522f, 2f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 146.5043f, -734.926f, 249.1521f, 2f, 0, 0);
				if (func_447() == func_106() && !iLocal_4222)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[5]) || ENTITY::HAS_ANIM_EVENT_FIRED(func_106(), MISC::GET_HASH_KEY("interrupt")))
					{
						func_600(&uLocal_7098, 151.3366f, -728.9139f, 249.1526f, 63.076f, 1, 2, 1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_106(), 151.3366f, -728.9139f, 249.1526f, -1, 0, 0.5f, 1, 1, uLocal_7098[uLocal_7098.f_3], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(func_106(), 0);
						iLocal_4222 = 1;
						iLocal_4219 = 1;
					}
				}
				else if (func_447() == func_79() && !iLocal_4223)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[5]) || ENTITY::HAS_ANIM_EVENT_FIRED(func_79(), MISC::GET_HASH_KEY("interrupt")))
					{
						func_600(&uLocal_7098, 151.3366f, -728.9139f, 249.1526f, 63.076f, 1, 2, 1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_79(), 151.3366f, -728.9139f, 249.1526f, -1, 0, 0.5f, 1, 1, uLocal_7098[uLocal_7098.f_3], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 0);
						iLocal_4223 = 1;
						iLocal_4219 = 1;
					}
				}
				else if (!GlobalFunc_709(func_447(), -1959848946, 1))
				{
					if (iLocal_4219)
					{
						func_600(&uLocal_7098, 151.3366f, -728.9139f, 249.1526f, 63.076f, 1, 2, 1);
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_447(), uLocal_7098[uLocal_7098.f_3], 139.5157f, -733.0037f, 250.3622f, -1, 0);
						iLocal_4219 = 0;
					}
				}
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 144.4086f, -732.6505f, 249.1522f, 2.5f, 0, 0);
				if (!iLocal_4225)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[5]) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_630[3 /*20*/], MISC::GET_HASH_KEY("interrupt")))
					{
						func_601(&(uLocal_7102[uLocal_7102.f_3]), 144.876f, -732.1308f, 249.1522f, 66.7075f, 1, 2, 1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[3 /*20*/], 144.876f, -732.1308f, 249.1522f, -1, 0, 0.5f, 1, 1, uLocal_7102[uLocal_7102.f_3], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 0);
						iLocal_4225 = 1;
						iLocal_4220 = 1;
					}
					else if (iLocal_4234 == 0)
					{
						if (iLocal_4196 == 10)
						{
							iLocal_4234++;
						}
						else if (GlobalFunc_5170())
						{
							MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_SLIDE", 0)}, 6);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
					}
				}
				else if (!GlobalFunc_709(Local_630[3 /*20*/], -1959848946, 1))
				{
					if (iLocal_4220)
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], -1716541277, 1))
						{
							TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_630[3 /*20*/], uLocal_7102[uLocal_7102.f_3], 139.5157f, -733.0037f, 250.3622f, -1, 0);
							iLocal_4220 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (Local_630[49 /*20*/].f_19)
			{
				func_600(&uLocal_7102, 142.9039f, -732.4354f, 249.1522f, 63.1978f, 1, 2, 0);
				func_600(&uLocal_7098, 138.1126f, -734.5737f, 249.1521f, 163.632f, 1, 2, 1);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4234 = 0;
				iLocal_4198++;
			}
			else if (PED::IS_PED_IN_COMBAT(Local_630[49 /*20*/], 0) || Local_4253[18 /*5*/].f_1 > 3)
			{
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_PED(func_447(), Local_630[49 /*20*/], 0, 16);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], Local_630[49 /*20*/], 0, 16);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
			{
				func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
				}
			}
			break;
		
		case 2:
			if (((ENTITY::DOES_ENTITY_EXIST(Local_630[50 /*20*/]) && !PED::IS_PED_INJURED(Local_630[50 /*20*/])) && GlobalFunc_709(Local_630[50 /*20*/], 242628503, 1)) || Local_630[50 /*20*/].f_19)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 141.3472f, -733.1163f, 249.1521f, 1.5f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 138.1126f, -734.5737f, 249.1521f, 1.5f, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (iLocal_4219)
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_447(), uLocal_7098[uLocal_7098.f_3], 138.7686f, -737.5693f, 250.4563f, -1, 0);
					iLocal_4219 = 0;
				}
				if (iLocal_4220)
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_630[3 /*20*/], uLocal_7102[uLocal_7102.f_3], 138.7686f, -737.5693f, 250.4563f, -1, 0);
					iLocal_4220 = 0;
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 3:
			if (Local_630[50 /*20*/].f_19)
			{
				TASK::REMOVE_COVER_POINT(uLocal_7098[uLocal_7098.f_3]);
				func_600(&uLocal_7102, 136.2379f, -741.0781f, 249.152f, 74.5267f, 2, 2, 0);
				iLocal_4234 = 0;
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_PED(func_447(), Local_630[50 /*20*/], 0, 16);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], Local_630[50 /*20*/], 0, 16);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 4:
			if (func_661(19) && Local_4253[19 /*5*/].f_1 >= 3)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 135.7272f, -744.9222f, 249.1521f, 1.5f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 131.3241f, -743.5495f, 249.1521f, 1.5f, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (!GlobalFunc_709(func_447(), 242628503, 1) || iLocal_4219)
				{
					func_468(1);
					if (PED::IS_PED_IN_COVER(func_447(), 1))
					{
						TASK::TASK_EXIT_COVER(0, 2, 135.9303f, -742.9735f, 250.6711f);
					}
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 136.2379f, -741.0781f, 249.152f, 2f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 138.3504f, -742.0092f, 249.2518f, 135.9303f, -742.9735f, 250.6711f, 2f, 0, 0.5f, 2f, 1, 512, 0, -957453492);
						iVar0 = 1;
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, 135.9303f, -742.9735f, 250.6711f, -1, iVar0, 0);
					func_466(func_447(), 1);
					iLocal_4219 = 0;
				}
				if (iLocal_4220)
				{
					func_468(1);
					if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 1))
					{
						TASK::TASK_EXIT_COVER(0, 2, 135.561f, -743.4017f, 250.4345f);
					}
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 136.2379f, -741.0781f, 249.152f, 2f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 136.2379f, -741.0781f, 249.152f, 135.561f, -743.4017f, 250.4345f, 2f, 0, 1f, 2f, 1, 0, 0, -957453492);
					}
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 131.0666f, -742.8386f, 250.6242f, -1, 0);
					func_466(Local_630[3 /*20*/], 1);
					iLocal_4220 = 0;
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 5:
			if (Local_630[65 /*20*/].f_19 && Local_630[66 /*20*/].f_19)
			{
				func_600(&uLocal_7098, 123.1685f, -741.6398f, 249.152f, 159.9832f, 2, 2, 0);
				TASK::REMOVE_COVER_POINT(uLocal_7102[uLocal_7102.f_3]);
				iLocal_4234 = 0;
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (!GlobalFunc_709(func_447(), 1120685857, 1))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 121.9407f, -739.3134f, 249.152f, 4f, 0);
				}
				if (!GlobalFunc_709(Local_630[3 /*20*/], 1120685857, 1))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 121.9407f, -739.3134f, 249.152f, 4f, 0);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 6:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_630[51 /*20*/]) && ((PED::IS_PED_INJURED(Local_630[51 /*20*/]) || PED::IS_PED_SHOOTING(Local_630[51 /*20*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[51 /*20*/]))) || Local_630[51 /*20*/].f_19)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 119.9149f, -742.9847f, 249.1522f, 1.5f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 116.9745f, -742.2205f, 249.1522f, 1.5f, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (iLocal_4219)
				{
					func_468(1);
					if (PED::IS_PED_IN_COVER(func_447(), 1))
					{
						TASK::TASK_EXIT_COVER(0, 2, 119.4113f, -739.8093f, 250.453f);
					}
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 123.1685f, -741.6398f, 249.152f, 3f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 123.1685f, -741.6398f, 249.152f, 119.4113f, -739.8093f, 250.453f, 2f, 0, 2f, 0.5f, 1, 0, 0, -957453492);
					}
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7098[uLocal_7098.f_3], 118.2874f, -742.6687f, 250.3579f, -1, 0);
					func_466(func_447(), 1);
					iLocal_4219 = 0;
				}
				if (iLocal_4220)
				{
					func_468(1);
					if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 1))
					{
						TASK::TASK_EXIT_COVER(0, 2, 119.4113f, -739.8093f, 250.453f);
					}
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 122.0048f, -737.8095f, 249.152f, 2f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 122.0048f, -737.8095f, 249.152f, 119.4113f, -739.8093f, 250.453f, 2f, 0, 0.5f, 1.5f, 1, 0, 0, -957453492);
						iVar0 = 1;
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, 119.4113f, -739.8093f, 250.453f, -1, iVar0, 0);
					func_466(Local_630[3 /*20*/], 1);
					iLocal_4220 = 0;
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 7:
			if (Local_630[51 /*20*/].f_19)
			{
				func_600(&uLocal_7098, 117.5014f, -747.2892f, 249.1522f, 249.4468f, 0, 2, 0);
				iLocal_4234 = 0;
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				PED::SET_PED_RESET_FLAG(Local_630[51 /*20*/], 282, 1);
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_PED(func_447(), Local_630[51 /*20*/], 0, 16);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], Local_630[51 /*20*/], 0, 16);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 8:
			if ((((!ENTITY::DOES_ENTITY_EXIST(Local_630[52 /*20*/]) || PED::IS_PED_INJURED(Local_630[52 /*20*/])) || Local_630[52 /*20*/].f_19) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[52 /*20*/])) || PED::IS_PED_SHOOTING(Local_630[52 /*20*/]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 117.5887f, -752.5247f, 249.1522f, 1.5f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 114.4728f, -748.7062f, 249.1522f, 1.5f, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (iLocal_4219)
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_447(), uLocal_7098[uLocal_7098.f_3], 121.2903f, -752.4714f, 250.2806f, -1, 0);
					iLocal_4219 = 0;
				}
				if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1) || iLocal_4220)
				{
					func_468(1);
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 114.1068f, -749.8569f, 249.1522f, 1f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 114.1068f, -749.8569f, 249.1522f, 124.2414f, -755.4163f, 250.617f, 2f, 0, 0.2f, 2.5f, 1, 0, 0, -957453492);
						iVar0 = 1;
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, 124.2414f, -755.4163f, 250.617f, -1, iVar0, 0);
					func_466(Local_630[3 /*20*/], 1);
					iLocal_4220 = 0;
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 9:
			if (Local_630[52 /*20*/].f_19)
			{
				func_600(&uLocal_7098, 124.8241f, -754.5803f, 249.1522f, 250.7867f, 0, 2, 1);
				iLocal_4234 = 0;
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_PED(func_447(), Local_630[52 /*20*/], 0, 16);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], Local_630[52 /*20*/], 0, 16);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 10:
			if (((Local_630[53 /*20*/].f_19 || (ENTITY::DOES_ENTITY_EXIST(Local_630[53 /*20*/]) && ((PED::IS_PED_INJURED(Local_630[53 /*20*/]) || PED::IS_PED_SHOOTING(Local_630[53 /*20*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[53 /*20*/])))) || Local_630[54 /*20*/].f_19) || (ENTITY::DOES_ENTITY_EXIST(Local_630[54 /*20*/]) && ((PED::IS_PED_INJURED(Local_630[54 /*20*/]) || PED::IS_PED_SHOOTING(Local_630[54 /*20*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[54 /*20*/]))))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 124.8241f, -754.5803f, 249.1522f, 1.5f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 120.6721f, -754.4247f, 249.1522f, 1f, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				if (iLocal_4219)
				{
					func_468(1);
					if (PED::IS_PED_IN_COVER(func_447(), 1))
					{
						TASK::TASK_EXIT_COVER(0, 2, 125.1018f, -755.8192f, 250.6866f);
					}
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 124.8241f, -754.5803f, 249.1522f, 3f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 124.8241f, -754.5803f, 249.1522f, 125.1018f, -755.8192f, 250.6866f, 2f, 0, 2f, 0.5f, 1, 0, 0, -957453492);
					}
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7098[uLocal_7098.f_3], 127.4873f, -756.7517f, 250.5525f, -1, 0);
					func_466(func_447(), 1);
					iLocal_4219 = 0;
				}
				if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1) || iLocal_4220)
				{
					func_468(1);
					if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 1))
					{
						TASK::TASK_EXIT_COVER(0, 2, 126.6842f, -756.2921f, 250.6685f);
					}
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 121.0429f, -755.6022f, 249.1522f, 3f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 121.0429f, -755.6022f, 249.1522f, 126.6842f, -756.2921f, 250.6685f, 2f, 0, 2f, 0.5f, 1, 0, 0, -957453492);
						iVar0 = 1;
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, 126.6842f, -756.2921f, 250.6685f, -1, iVar0, 0);
					func_466(Local_630[3 /*20*/], 1);
					iLocal_4220 = 0;
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 11:
			if (Local_630[54 /*20*/].f_19 && Local_630[53 /*20*/].f_19)
			{
				TASK::REMOVE_COVER_POINT(uLocal_7098[uLocal_7098.f_3]);
				func_600(&uLocal_7102, 137.1121f, -757.1174f, 249.1519f, 342.2234f, 2, 2, 0);
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 139.2458f, -758.1196f, 250.6395f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 132.527f, -759.2299f, 249.1519f, 2f))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 132.527f, -759.2299f, 249.1519f, 139.2458f, -758.1196f, 250.6395f, 2f, 0, 0.5f, 1f, 1, 0, 0, -957453492);
					iVar0 = 1;
				}
				TASK::TASK_AIM_GUN_AT_COORD(0, 139.2458f, -758.1196f, 250.6395f, -1, iVar0, 0);
				func_466(func_447(), 1);
				func_468(1);
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 137.1121f, -757.1174f, 249.1519f, 3f))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 137.1121f, -757.1174f, 249.1519f, 141.4854f, -757.6714f, 250.3407f, 2f, 0, 2f, 0.5f, 1, 0, 0, -957453492);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 140.9996f, -756.3683f, 250.1622f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
				iLocal_4234 = 0;
				iLocal_4219 = 0;
				iLocal_4220 = 0;
				iLocal_4198++;
			}
			else
			{
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 137.184f, -758.6304f, 250.4749f, 5f, 0);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 137.184f, -758.6304f, 250.4749f, 5f, 0);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 12:
			if (PED::IS_PED_IN_COMBAT(Local_630[55 /*20*/], 0) || Local_630[55 /*20*/].f_19)
			{
				func_600(&uLocal_7102, 144.7374f, -758.4955f, 249.3018f, 254.182f, 1, 2, 1);
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 152.602f, -760.4814f, 250.5413f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 144.2511f, -755.1204f, 249.1521f, 2f))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 144.2511f, -755.1204f, 249.1521f, 152.602f, -760.4814f, 250.5413f, 2f, 0, 0.5f, 1f, 1, 0, 0, -957453492);
					iVar0 = 1;
				}
				TASK::TASK_AIM_GUN_AT_COORD(0, 152.602f, -760.4814f, 250.5413f, -1, iVar0, 0);
				func_466(func_447(), 1);
				iLocal_4219 = 0;
				func_468(1);
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 144.7374f, -758.4955f, 249.3018f, 3f))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 144.7374f, -758.4955f, 249.3018f, 153.9947f, -760.696f, 250.5582f, 2f, 0, 2f, 0.5f, 1, 0, 0, -957453492);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 153.9947f, -760.696f, 250.5582f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
				iLocal_4220 = 0;
				iLocal_4234 = 0;
				iLocal_4198++;
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 13:
			if (Local_630[55 /*20*/].f_19 || (ENTITY::DOES_ENTITY_EXIST(Local_630[55 /*20*/]) && (PED::IS_PED_SHOOTING(Local_630[55 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[55 /*20*/]))))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 141.8383f, -754.6273f, 249.152f, 1.5f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 144.7374f, -758.4955f, 249.3018f, 1f, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 14:
			if (Local_630[55 /*20*/].f_19)
			{
				func_600(&uLocal_7102, 152.5575f, -761.7089f, 249.1519f, 158.6884f, 1, 2, 0);
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 154.6f, -762.7058f, 250.6459f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 155.9827f, -761.1984f, 249.152f, 1f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 155.9827f, -761.1984f, 249.152f, 2f, 20000, 0.25f, 0, 40000f);
				}
				TASK::TASK_AIM_GUN_AT_COORD(0, 154.6f, -762.7058f, 250.6459f, -1, 0, 0);
				func_466(func_447(), 1);
				iLocal_4219 = 0;
				func_468(1);
				if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 153.9947f, -760.696f, 250.5582f);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 151.335f, -767.8516f, 250.8267f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
				iLocal_4220 = 0;
				iLocal_4234 = 0;
				iLocal_4198++;
			}
			else
			{
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_PED(func_447(), Local_630[55 /*20*/], 0, 16);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], Local_630[55 /*20*/], 0, 16);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 15:
			if (((PED::IS_PED_IN_COMBAT(Local_630[56 /*20*/], 0) || PED::IS_PED_IN_COMBAT(Local_630[57 /*20*/], 0)) || Local_630[56 /*20*/].f_19) || Local_630[57 /*20*/].f_19)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 154.2395f, -765.4312f, 249.1519f, 1f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 151.6309f, -765.1901f, 249.1519f, 1f, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 16:
			if (Local_630[56 /*20*/].f_19 && Local_630[57 /*20*/].f_19)
			{
				func_600(&uLocal_7098, 142.9844f, -768.0378f, 249.1519f, 344.5135f, 1, 2, 1);
				func_600(&uLocal_7102, 140.8836f, -767.2733f, 249.1519f, 339.8291f, 0, 2, 1);
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 142.9844f, -768.0378f, 249.1519f, 3f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.9844f, -768.0378f, 249.1519f, 2f, 20000, 2f, 0, 40000f);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7098[uLocal_7098.f_3], 142.9097f, -765.1097f, 250.6145f, -1, 0);
				func_466(func_447(), 1);
				iLocal_4219 = 0;
				func_468(1);
				if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 140.8836f, -767.2733f, 249.1519f, 3f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 140.8836f, -767.2733f, 249.1519f, 2f, 20000, 2f, 0, 40000f);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 142.9097f, -765.1097f, 250.6145f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
				iLocal_4220 = 0;
				iLocal_4234 = 0;
				iLocal_4198++;
			}
			else
			{
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 0);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 0);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 17:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_630[58 /*20*/]) || Local_630[58 /*20*/].f_19) && (ENTITY::DOES_ENTITY_EXIST(Local_630[59 /*20*/]) || Local_630[59 /*20*/].f_19))
			{
				func_600(&uLocal_7098, 146.7832f, -770.0289f, 245.152f, 252.923f, 0, 2, 1);
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 146.938f, -771.2317f, 246.5175f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 146.7832f, -770.0289f, 245.152f, 3f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 146.7832f, -770.0289f, 245.152f, 2f, 20000, 2f, 0, 40000f);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7098[uLocal_7098.f_3], 150.1991f, -771.1047f, 246.6587f, -1, 0);
				func_466(func_447(), 1);
				iLocal_4219 = 0;
				iLocal_4220 = 1;
				SYSTEM::SETTIMERA(0);
				iLocal_4234 = 0;
				iLocal_4198++;
			}
			else
			{
				bLocal_4199 = false;
				if (PED::IS_PED_IN_COVER(func_447(), 0))
				{
					bLocal_4199 = true;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 151.8019f, -761.8623f, 249.1994f, 156.6844f, -763.5421f, 251.8567f, 4.8125f, 0, 1, 0))
				{
					PED::SET_PED_CAPSULE(Local_630[3 /*20*/], 0.325f);
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (bLocal_4199)
						{
							if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
							{
								func_449("AH_DOWNST", 0, &cLocal_4237, 1, 1, 1, 1);
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
						}
						break;
					
					case 2:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 3:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_DOWNST", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234 = (iLocal_4234 - 1);
							}
						}
						break;
					}
			}
			break;
		
		case 18:
			if ((Local_630[58 /*20*/].f_19 && (ENTITY::DOES_ENTITY_EXIST(Local_630[58 /*20*/]) || (PED::IS_PED_SHOOTING(Local_630[58 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[58 /*20*/])))) || (Local_630[59 /*20*/].f_19 && (ENTITY::DOES_ENTITY_EXIST(Local_630[58 /*20*/]) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[59 /*20*/]) || PED::IS_PED_SHOOTING(Local_630[59 /*20*/])))))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), 148.4145f, -769.9975f, 245.152f, 2f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 151.8461f, -772.6965f, 245.152f, 2f, 0, 0);
				iLocal_4198++;
			}
			else
			{
				if (SYSTEM::TIMERA() > 1000)
				{
					if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1) || iLocal_4220)
					{
						func_468(1);
						if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 1))
						{
							TASK::TASK_EXIT_COVER(0, 3, 146.938f, -771.2317f, 246.5175f);
						}
						if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 142.1409f, -770.7808f, 245.152f, 3f))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.1409f, -770.7808f, 245.152f, 2f, 20000, 2f, 0, 40000f);
						}
						TASK::TASK_AIM_GUN_AT_COORD(0, 146.938f, -771.2317f, 246.5175f, -1, 0, 0);
						func_466(Local_630[3 /*20*/], 1);
						iLocal_4220 = 0;
					}
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
		
		case 19:
			if (Local_630[58 /*20*/].f_19 && Local_630[59 /*20*/].f_19)
			{
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 154.2747f, -761.4401f, 245.1521f, 3f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 154.2747f, -761.4401f, 245.1521f, 2f, 20000, 2f, 0, 40000f);
				}
				TASK::TASK_AIM_GUN_AT_COORD(0, 161.1281f, -762.9623f, 246.3683f, -1, 0, 0);
				func_466(func_447(), 1);
				iLocal_4219 = 0;
				func_468(1);
				if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 1))
				{
					TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
				}
				if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 152.8098f, -764.4324f, 245.152f, 3f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 152.8098f, -764.4324f, 245.152f, 2f, 20000, 2f, 0, 40000f);
				}
				TASK::TASK_AIM_GUN_AT_COORD(0, 161.1281f, -762.9623f, 246.3683f, -1, 0, 0);
				func_466(Local_630[3 /*20*/], 1);
				iLocal_4219 = 0;
				iLocal_4234 = 0;
				iLocal_4198++;
			}
			else
			{
				if (!PED::IS_PED_IN_COMBAT(func_447(), 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 154.1767f, -762.4851f, 245.1521f, 5f, 0);
				}
				if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 154.1767f, -762.4851f, 245.1521f, 5f, 0);
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
		
		case 20:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_4198++;
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
						{
							func_449("AH_MOVEON", 1, &cLocal_4237, 0, 0, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170())
						{
							if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(func_106()) == 594096310)
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_OPENING_M", 8, 0, 0, 0))
								{
									iLocal_4234++;
								}
							}
							else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(func_79()) == 594096310)
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_OPENING_F", 8, 0, 0, 0))
								{
									iLocal_4234++;
								}
							}
						}
						break;
					
					case 2:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
						{
							func_449("AH_POINT", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
							}
						}
						break;
					}
			}
			break;
	}
	switch (iLocal_6161)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_CONTINUED_DOWN_RUBBLE"))
			{
				AUDIO::START_AUDIO_SCENE("AH_3B_ESCAPE_CONTINUED_DOWN_RUBBLE");
			}
			iLocal_6161++;
			break;
		
		case 1:
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_FIB02_str_IT"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_CONTINUED_DOWN_RUBBLE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_ESCAPE_CONTINUED_DOWN_RUBBLE");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_CONTINUED_STAIRWELL_02"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_ESCAPE_CONTINUED_STAIRWELL_02");
				}
				iLocal_6161++;
			}
			break;
		
		case 2:
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_FIB02_IT1_post"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_CONTINUED_STAIRWELL_02"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_ESCAPE_CONTINUED_STAIRWELL_02");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_TO_RAPPEL_POINT"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_ESCAPE_TO_RAPPEL_POINT");
				}
				iLocal_6161++;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_TO_RAPPEL_POINT"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_ESCAPE_TO_RAPPEL_POINT");
				}
				iLocal_6161++;
			}
			break;
	}
}

int func_661(int iParam0)//Position - 0x6C44A
{
	if (func_603(iParam0) && !func_643(iParam0))
	{
		return 1;
	}
	return 0;
}





void func_666(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, int iParam11, int iParam12)//Position - 0x6C516
{
	func_611(uParam0, Param1, fParam4, iParam6, iParam7, iParam8);
	if (bLocal_597)
	{
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param1, iParam5, iParam9, fParam10, iParam11, iParam12, uParam0->f_1, 0);
	}
	else
	{
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*uParam0, Param1, iParam5, iParam9, fParam10, iParam11, iParam12, uParam0->f_1, 0);
	}
}

void func_667(var uParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14)//Position - 0x6C56B
{
	*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
	func_668(uParam0, sParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14);
	if (iParam1 == iLocal_363)
	{
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 2, 0, 0);
	}
	else if (iParam1 == iLocal_364)
	{
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 0, 1, 0);
	}
}

void func_668(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9)//Position - 0x6C5C9
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam2);
	if (iParam3 != 0 && iParam3 != joaat("weapon_unarmed"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, iParam3, -1, 1, 1);
	}
	if (iParam4 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(*uParam0, iParam3, iParam4);
	}
	func_534(uParam0, bParam8);
	if (iParam6 != -1)
	{
		ENTITY::SET_ENTITY_HEALTH(*uParam0, iParam6);
	}
	if (iParam7 != -1)
	{
		PED::SET_PED_ARMOUR(*uParam0, iParam7);
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_ACCURACY(*uParam0, iParam5);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	PED::SET_PED_NAME_DEBUG(*uParam0, uParam1);
	if (bParam9)
	{
		PED::SET_PED_USING_ACTION_MODE(*uParam0, 1, -1, "DEFAULT_ACTION");
	}
	func_671(uParam0, 1);
	GlobalFunc_722(*uParam0, 564);
	GlobalFunc_593(*uParam0, 0);
}



void func_671(var uParam0, int iParam1)//Position - 0x6C778
{
	uParam0->f_6 = iParam1;
}

void func_672()//Position - 0x6C786
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
	{
		PED::SET_PED_RESET_FLAG(func_447(), 283, 1);
		func_598();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
	{
		PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 283, 1);
	}
	if (iLocal_6072 >= 3 && iLocal_6072 < 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[18 /*2*/]))
		{
			GlobalFunc_718(&Local_4444, joaat("p_crahsed_heli_s"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("p_crahsed_heli_s")))
			{
				CUTSCENE::REQUEST_CUTSCENE("AH_3B_MCS_6_P1", 8);
				Local_3864[18 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_crahsed_heli_s"), 152.9895f, -737.3665f, 252.8275f, 1, 1, 0);
				GlobalFunc_5174(&Local_4444, joaat("p_crahsed_heli_s"));
				ENTITY::SET_ENTITY_ROTATION(Local_3864[18 /*2*/], 2.4f, 6.825f, 144.073f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3864[18 /*2*/], 1);
				ENTITY::SET_ENTITY_COLLISION(Local_3864[18 /*2*/], 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3864[18 /*2*/], 1);
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/]))
		{
			GlobalFunc_718(&Local_4444, iLocal_369);
			GlobalFunc_719(&Local_4444, &cLocal_269);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_369) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_269))
			{
				func_667(&(Local_630[5 /*20*/]), iLocal_369, 152.9895f, -737.3665f, 252.8275f, 0f, "PILOT", iLocal_623, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_630[5 /*20*/], 1);
				uLocal_3916[13] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3916[13], Local_3864[18 /*2*/], -1);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[5 /*20*/], uLocal_3916[13], &cLocal_269, "ah_3b_mcs_6_p1_pilot", 1000f, -1000f, 4, 0, 1148846080, 0);
			}
		}
		if (!iLocal_8010)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", Local_630[0 /*20*/], 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", Local_630[1 /*20*/], 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("gunman_selection_1", Local_630[3 /*20*/], 0);
				iLocal_8010 = 1;
			}
		}
	}
	switch (iLocal_6072)
	{
		case 0:
			func_645(0, 0);
			func_645(37, 0);
			func_645(22, 0);
			func_645(3, 0);
			GlobalFunc_724(&Local_4444, "SIREN_DISTANT");
			if (ENTITY::DOES_ENTITY_EXIST(Local_3864[19 /*2*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_3864[19 /*2*/]));
			}
			GlobalFunc_5175(&Local_4444, "missheistfbi3bleadinoutah_3b_mcs_2");
			func_676(7);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			if (iLocal_7108[2] == -1)
			{
				iLocal_7108[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(123.521f, -739.488f, 253.666f, 0.975f, 3.475f, 1.275f, GlobalFunc_723(-9.949f), 0, 7);
			}
			iLocal_4234 = 0;
			iLocal_8010 = 0;
			iLocal_4198 = 0;
			iLocal_6161 = 0;
			iLocal_6072++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 117.7599f, -736.0229f, 253.1524f, 121.7889f, -724.48f, 255.9336f, 5.8125f, 0, 1, 0))
			{
				func_491(&uLocal_627, 150.776f, -742.2473f, 253.1521f, 0);
				iLocal_4198 = 1;
				iLocal_6072++;
			}
			else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
			{
				func_449("AH_MOVEON", 1, &cLocal_4237, 1, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == -657647164)
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[5], "Distant_Sirens_Rubble", 224.5f, -627f, 240.3f, "FBI_HEIST_FINALE_CHOPPER", 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ENTERED_BURN");
				iLocal_6072++;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 150.88f, -747.85f, 253.15f, 1) <= 10f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HELI_FALLS");
				iLocal_6072++;
			}
			break;
		
		case 4:
			if ((CUTSCENE::HAS_CUTSCENE_LOADED() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 145.1618f, -742.9133f, 253.2358f, 154.8595f, -746.2037f, 256.5214f, 4.375f, 0, 1, 0)) && func_643(22))
			{
				GlobalFunc_703(&uLocal_627);
				func_644(8);
				GlobalFunc_719(&Local_4444, &cLocal_275);
				GlobalFunc_719(&Local_4444, &cLocal_257);
				Local_3864[12 /*2*/] = func_674(func_106(), iLocal_372, 1, 0, 0, 0, 0);
				Local_3864[13 /*2*/] = func_674(func_79(), iLocal_373, 1, 0, 0, 0, 0);
				Local_3864[14 /*2*/] = func_674(Local_630[3 /*20*/], joaat("weapon_carbinerifle"), 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[12 /*2*/], "Michaels_2_Handedweapon", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[13 /*2*/], "Franklins_weapon", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[14 /*2*/], "HC_Gunman_2_Handedweapon", 0, 0, 0);
				if (func_447() == func_79())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_79(), "Franklin", 0, 0, 2);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_106(), "Michael", 0, 0, 2);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[3 /*20*/], "gunman_selection_1", 0, 0, 2);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[5 /*20*/], "heli_pilot", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[18 /*2*/], "Crashed_Heli", 1, 0, 0);
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_4222 = 0;
				iLocal_4223 = 0;
				iLocal_4225 = 0;
				iLocal_4234 = -1;
				iLocal_6072++;
			}
			break;
		
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_5175(&Local_4444, &cLocal_323);
				MISC::CLEAR_AREA_OF_PROJECTILES(148.76f, -746.41f, 253.29f, 16f, 0);
				func_534(&(Local_630[0 /*20*/]), 0);
				func_534(&(Local_630[1 /*20*/]), 0);
				func_534(&(Local_630[3 /*20*/]), 0);
				iLocal_6072++;
			}
			break;
		
		case 6:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (!iLocal_7996 && CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 8800)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_agency_heli_slide_dust", Local_3864[18 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
					iLocal_7996 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_3852[0]))
				{
					CAM::DESTROY_CAM(uLocal_3852[0], 0);
				}
				uLocal_3852[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 155.595f, -734.0129f, 250.163f, 23.46668f, -6.759744f, 125.7266f, 50.01455f, 1, 2);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3852[0], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 1);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				func_644(8);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[5]))
				{
					uLocal_3916[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_263, Local_266, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[5], 0);
				}
				if (PLAYER::PLAYER_PED_ID() == func_106())
				{
					sVar0 = "Rubble_Slide_Alt_Michael";
				}
				else
				{
					sVar0 = "Rubble_Slide_Michael";
				}
				TASK::TASK_SYNCHRONIZED_SCENE(func_106(), uLocal_3916[5], &cLocal_257, sVar0, 1000f, -8f, 0, 0, 1148846080, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(func_106(), 1);
				func_534(&(Local_630[0 /*20*/]), 1);
				iLocal_4222 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[5]))
				{
					uLocal_3916[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_263, Local_266, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[5], 0);
				}
				if (PLAYER::PLAYER_PED_ID() == func_106())
				{
					sVar0 = "Rubble_Slide_Alt_Franklin";
				}
				else
				{
					sVar0 = "Rubble_Slide_Franklin";
				}
				TASK::TASK_SYNCHRONIZED_SCENE(func_79(), uLocal_3916[5], &cLocal_257, sVar0, 1000f, -8f, 0, 0, 1148846080, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 1);
				func_534(&(Local_630[1 /*20*/]), 1);
				iLocal_4223 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("gunman_selection_1", 0))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[5]))
				{
					uLocal_3916[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_263, Local_266, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[5], 0);
				}
				if (PLAYER::PLAYER_PED_ID() == func_106())
				{
					sVar0 = "Rubble_Slide_Alt_Gunman";
				}
				else
				{
					sVar0 = "Rubble_Slide_Gunman";
				}
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[3 /*20*/], uLocal_3916[5], &cLocal_257, sVar0, 1000f, -8f, 0, 0, 1148846080, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[3 /*20*/], 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 1);
				func_534(&(Local_630[3 /*20*/]), 1);
				iLocal_4225 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_2_Handedweapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_3864[12 /*2*/], func_106());
				WEAPON::SET_CURRENT_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"), 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_3864[13 /*2*/], func_79());
				WEAPON::SET_CURRENT_PED_WEAPON(func_79(), joaat("weapon_carbinerifle"), 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("HC_Gunman_2_Handedweapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_3864[14 /*2*/], Local_630[3 /*20*/]);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
			}
			if ((iLocal_4222 || iLocal_4223) || iLocal_4225)
			{
				if (!func_603(18))
				{
					func_645(18, 0);
				}
			}
			if (((((iLocal_4222 && iLocal_4223) && iLocal_4225) && CAM::DOES_CAM_EXIST(uLocal_3852[0])) && CAM::IS_CAM_ACTIVE(uLocal_3852[0])) && CAM::IS_CAM_RENDERING(uLocal_3852[0]))
			{
				CAM::RENDER_SCRIPT_CAMS(false, 1, 2000, 1, 0, 0);
				CAM::DESTROY_CAM(uLocal_3852[0], 0);
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_AFTER_HELI_CS");
				GlobalFunc_8380(0, 1, 1, 0);
				func_465(8);
			}
			break;
	}
	if (iLocal_6071 == 7)
	{
		switch (iLocal_4198)
		{
			case 1:
				func_600(&uLocal_7098, 119.2467f, -742.4992f, 253.1635f, 239.8784f, 1, 0, 1);
				func_600(&uLocal_7102, 121.0577f, -737.6027f, 253.2061f, 249.9036f, 0, 2, 1);
				func_602(&(Local_630[func_673() /*20*/]), 122.3957f, -740.798f, 253.1523f, 1f, 1, 1, 1, 1, 0f, 0f, 0, 0, 0, 0);
				func_602(&(Local_630[func_532() /*20*/]), 119.2467f, -742.4992f, 253.1635f, 1f, 1, 1, 1, 1, 0f, 0f, 0, 0, 0, 0);
				func_602(&(Local_630[3 /*20*/]), 121.0577f, -737.6027f, 253.2061f, 1f, 1, 1, 1, 1, 0f, 0f, 0, 0, 0, 0);
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4198++;
				break;
			
			case 2:
				if ((((!PED::IS_PED_INJURED(Local_630[44 /*20*/]) || !PED::IS_PED_INJURED(Local_630[45 /*20*/])) || !PED::IS_PED_INJURED(Local_630[46 /*20*/])) || !PED::IS_PED_INJURED(Local_630[47 /*20*/])) || !PED::IS_PED_INJURED(Local_630[48 /*20*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_447(), 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0))
					{
						PED::SET_COMBAT_FLOAT(func_447(), 5, 1f);
					}
					if (!GlobalFunc_709(func_447(), 1120685857, 1) || iLocal_4219)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(func_447(), 131.4281f, -744.4481f, 254.6485f, 50f, 0);
						iLocal_4219 = 0;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0))
					{
						PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 5, 1f);
					}
					if (!GlobalFunc_709(Local_630[3 /*20*/], 1120685857, 1) || iLocal_4220)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[3 /*20*/], 131.4281f, -744.4481f, 254.6485f, 50f, 0);
						iLocal_4220 = 0;
					}
				}
				else
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(func_447(), 0);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[3 /*20*/], 0);
					iLocal_4219 = 1;
					iLocal_4220 = 1;
					iLocal_4198++;
				}
				break;
			
			case 3:
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					GlobalFunc_719(&Local_4444, &cLocal_323);
					bLocal_4199 = false;
					if (!GlobalFunc_709(func_447(), 713668775, 1) || iLocal_4219)
					{
						if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 150.778f, -750.3884f, 253.2518f, 1f))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_447(), 150.778f, -750.3884f, 253.2518f, 2f, 20000, 0.25f, 512, 1.4974f);
						}
						else if (!GlobalFunc_709(func_447(), 242628503, 1))
						{
							func_468(1);
							TASK::TASK_ACHIEVE_HEADING(0, 1.4974f, 0);
							TASK::TASK_PLAY_ANIM(0, &cLocal_323, "idle_b", 4f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, &cLocal_323, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
							func_466(func_447(), 1);
						}
						iLocal_4219 = 0;
					}
					else if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 149.4686f, -748.3608f, 253.1521f, 2f))
					{
						bLocal_4199 = true;
					}
					iLocal_4200 = 0;
					if (!GlobalFunc_709(Local_630[3 /*20*/], 713668775, 1) || iLocal_4220)
					{
						if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 149.4686f, -748.3608f, 253.1521f, 1f))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[3 /*20*/], 149.4686f, -748.3608f, 253.1521f, 2f, 20000, 0.25f, 512, 355.1978f);
						}
						iLocal_4220 = 0;
					}
					else if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 149.4686f, -748.3608f, 253.1521f, 2f))
					{
						iLocal_4200 = 1;
					}
				}
				else
				{
					iLocal_4219 = 1;
					iLocal_4220 = 1;
					iLocal_4198++;
				}
				break;
		}
		switch (iLocal_4234)
		{
			case 0:
				if (iLocal_4198 > 1)
				{
					iLocal_4234++;
				}
				else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
				{
					func_449("AH_MOVEON", 1, &cLocal_4237, 1, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
				break;
			
			case 1:
				if (iLocal_4198 > 2)
				{
					iLocal_4234++;
				}
				else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 3500)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
				{
					func_449("AH_MOVEON", 1, &cLocal_4237, 1, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
				}
				break;
			
			case 3:
				if (bLocal_4199)
				{
					iLocal_4234++;
				}
				else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
				{
					func_449("AH_MOVEON", 1, &cLocal_4237, 1, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
				break;
			
			case 4:
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 5000)
				{
					func_449("AH_CRASH", 0, &cLocal_4237, 1, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
				break;
		}
		switch (iLocal_6161)
		{
			case 0:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_POST_STAIRWELL"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_ESCAPE_POST_STAIRWELL");
				}
				iLocal_6161++;
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_POST_STAIRWELL"))
					{
						AUDIO::STOP_AUDIO_SCENE("AH_3B_ESCAPE_POST_STAIRWELL");
					}
					iLocal_6161++;
				}
				break;
			}
	}
}

int func_673()//Position - 0x6D7C1
{
	if (PLAYER::PLAYER_PED_ID() == func_106())
	{
		return 0;
	}
	else if (PLAYER::PLAYER_PED_ID() == func_79())
	{
		return 1;
	}
	return 1;
}

int func_674(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6D7EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar3 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				WEAPON::GET_MAX_AMMO(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	iVar1 = WEAPON::CREATE_WEAPON_OBJECT(iVar2, iVar3, Var5, iVar0, 1065353216, 0);
	while (GlobalFunc_4980(iVar2, iVar8) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, GlobalFunc_4980(iVar2, iVar8)))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar1, GlobalFunc_4980(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar2, 0))
		{
			WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar1, WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iVar2));
		}
	}
	return iVar1;
}


void func_676(int iParam0)//Position - 0x6D909
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0:
			bVar0 = false;
			break;
		
		case 1:
			bVar0 = false;
			break;
		
		case 2:
			bVar0 = false;
			break;
		
		case 3:
			bVar0 = false;
			break;
		
		case 4:
			bVar0 = false;
			break;
		
		case 5:
			bVar0 = false;
			break;
		
		case 6:
			bVar0 = false;
			break;
		
		case 7:
			bVar0 = true;
			break;
		
		case 8:
			bVar0 = true;
			break;
		
		case 9:
			bVar0 = true;
			break;
		
		case 10:
			bVar0 = true;
			break;
		
		case 11:
			bVar0 = true;
			break;
		
		case 12:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		GlobalFunc_7621(27, 1, 0, 1, 1);
		GlobalFunc_7621(26, 1, 0, 1, 1);
		GlobalFunc_7621(36, 1, 0, 1, 1);
		GlobalFunc_7621(29, 1, 0, 1, 1);
		GlobalFunc_7621(30, 1, 0, 1, 1);
		GlobalFunc_7621(31, 1, 0, 1, 1);
	}
	else
	{
		GlobalFunc_7621(27, 0, 0, 1, 1);
		GlobalFunc_7621(26, 0, 0, 1, 1);
		GlobalFunc_7621(36, 0, 0, 1, 1);
		GlobalFunc_7621(28, 0, 0, 1, 1);
		GlobalFunc_7621(29, 0, 0, 1, 1);
		GlobalFunc_7621(30, 0, 0, 1, 1);
		GlobalFunc_7621(31, 0, 0, 1, 1);
	}
}


void func_678()//Position - 0x6DB07
{
	float fVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(func_447(), 35, 1);
		func_598();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 35, 1);
		PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 283, 1);
	}
	switch (iLocal_6072)
	{
		case 0:
			GlobalFunc_11046(6, "6. Stairwell", 0, 0, 0, 1);
			func_6(6, 1, 0f, 0);
			func_6(7, 1, 0f, 0);
			func_6(8, 1, 0f, 0);
			func_6(0, 1, 0f, 0);
			func_6(1, 1, 0f, 0);
			func_6(5, 1, 0f, 0);
			func_476(9);
			func_476(10);
			func_476(11);
			func_683();
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(func_106(), 0);
			PED::SET_PED_CONFIG_FLAG(func_106(), 208, false);
			GlobalFunc_5177(&Local_4444, "FBI_HEIST_3B_SHOOTOUT");
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[0]))
			{
				iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
			}
			TASK::ADD_COVER_BLOCKING_AREA(Vector(254.0271f, -731.1529f, 128.5862f) - Vector(1f, 0.8125f, 0.5625f), Vector(254.0271f, -731.1529f, 128.5862f) + Vector(1f, 0.8125f, 0.5625f), 1, 1, 1, 1);
			RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
			StringCopy(&cLocal_4237, "", 24);
			iLocal_4234 = 0;
			iLocal_6161 = 0;
			iLocal_6072++;
			break;
		
		case 1:
			if (GlobalFunc_5171())
			{
				GlobalFunc_164("A3B_ESCAPE", 7500, 1);
				func_491(&uLocal_627, 117.8241f, -735.6005f, 257.1526f, 0);
				iLocal_6072++;
			}
			break;
		
		case 2:
			if (func_643(15))
			{
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				func_645(16, 0);
				func_681(&Local_4444, "8_FIBStairs");
				func_681(&Local_4444, "off_stairs1");
				iLocal_6072++;
			}
			break;
		
		case 3:
			if (func_643(16))
			{
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				func_645(17, 0);
				GlobalFunc_710(&Local_4444, iLocal_6158);
				GlobalFunc_710(&Local_4444, iLocal_6157);
				func_645(1, 0);
				iLocal_8011 = 1;
				iLocal_6072++;
			}
			break;
		
		case 4:
			if (func_643(17))
			{
				func_491(&uLocal_627, 118.1325f, -735.3059f, 253.1525f, 0);
				GlobalFunc_718(&Local_4444, iLocal_362);
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[3 /*20*/], 0);
				func_468(1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 117.588f, -732.5183f, 253.1525f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_COORD(0, 117.4079f, -735.4523f, 254.5799f, -1, 1, 0);
				func_466(Local_630[3 /*20*/], 1);
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 0))
				{
					TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 119.8656f, -731.6858f, 253.1522f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_COORD(0, 118.0035f, -735.9307f, 254.6266f, -1, 1, 0);
				func_466(func_447(), 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_447(), 35, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 35, 0);
				iLocal_6072++;
			}
			break;
		
		case 5:
			if (GlobalFunc_5170())
			{
				func_449("AH_MOVEON", 1, &cLocal_4237, 0, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					func_465(7);
				}
			}
			break;
	}
	switch (iLocal_6161)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_START"))
			{
				AUDIO::START_AUDIO_SCENE("AH_3B_ESCAPE_START");
			}
			iLocal_6161++;
			break;
		
		case 1:
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_FIB04_st2"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_START"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_ESCAPE_START");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_STAIRWELL_01"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_ESCAPE_STAIRWELL_01");
				}
				iLocal_6161++;
			}
			break;
		
		case 2:
			func_679(7, &iVar1, &fVar0);
			if (MISC::ABSF(fVar0) >= 0.25f)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_STAIRWELL_01"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_ESCAPE_STAIRWELL_01");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ESCAPE_POST_STAIRWELL"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_ESCAPE_POST_STAIRWELL");
				}
				iLocal_6161++;
			}
			break;
	}
}

void func_679(int iParam0, int iParam1, float fParam2)//Position - 0x6DF69
{
	int iVar0;
	
	if (iParam0 != -1 && Local_5424[iParam0 /*8*/] != 0)
	{
		*fParam2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_5424[iParam0 /*8*/]);
		iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Local_5424[iParam0 /*8*/]);
		*iParam1 = GlobalFunc_725(iVar0);
	}
}


int func_681(var uParam0, char* sParam1)//Position - 0x6DFD5
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_874)
	{
		if (uParam0->f_874[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_874[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_874[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_874[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE(sParam1);
		uParam0->f_874[iVar1 /*5*/] = 1;
		uParam0->f_874[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_874[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}


void func_683()//Position - 0x6E116
{
	func_6(9, 1, -1f, 0);
	func_6(10, 1, -1f, 0);
	func_6(11, 1, 1f, 0);
	func_6(12, 1, 1f, 0);
	func_6(13, 1, -1f, 0);
	func_6(14, 1, 1f, 0);
	func_6(15, 1, -1f, 0);
}

void func_684()//Position - 0x6E15D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
	{
		PED::SET_PED_RESET_FLAG(func_447(), 283, 1);
		func_598();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
	{
		PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 283, 1);
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(func_106(), "facials@blend_out@ah_3b_mcs_4@michael@", "ah_3b_mcs_4_face", 3))
	{
		GlobalFunc_5175(&Local_4444, "facials@blend_out@ah_3b_mcs_4@michael@");
	}
	switch (iLocal_6072)
	{
		case 0:
			iLocal_4202 = 0;
			bLocal_6473 = true;
			bLocal_6474 = true;
			iLocal_7074 = 0;
			iLocal_7075 = -1;
			bLocal_7076 = false;
			bLocal_7107 = false;
			func_698(0, 0, 1, 0, 0, 0);
			func_645(8, 0);
			GlobalFunc_702(0, 0, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ENEMIES_ARRIVE"))
			{
				AUDIO::START_AUDIO_SCENE("AH_3B_ENEMIES_ARRIVE");
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			GlobalFunc_11046(5, "5. Downloading shootout", 0, 0, 0, 1);
			func_6(16, 1, 1f, 0);
			func_42(1);
			StringCopy(&cLocal_4237, "", 24);
			iLocal_4234 = 0;
			iLocal_4249 = 0;
			if (iLocal_7108[0] == -1)
			{
				iLocal_7108[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(148.558f, -744.107f, 258.19f, 10.725f, 2.55f, 2.175f, GlobalFunc_723(69.267f), 0, 7);
			}
			if (iLocal_7108[1] == -1)
			{
				iLocal_7108[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(144.094f, -757.919f, 258.219f, 2.175f, 2.55f, 2.175f, GlobalFunc_723(69.267f), 0, 7);
			}
			iLocal_6072++;
			break;
		
		case 1:
			if (iLocal_6077 == 0 && STREAMING::HAS_MODEL_LOADED(iLocal_361))
			{
				func_645(10, 0);
				func_645(11, 0);
				func_645(9, 0);
				iVar0 = 0;
				while (iVar0 < iLocal_7051)
				{
					iLocal_7051[iVar0] = -1;
					iVar0++;
				}
				iLocal_6072++;
			}
			break;
		
		case 2:
			func_679(0, &bVar4, &fVar1);
			func_679(1, &bVar4, &fVar2);
			func_679(4, &bVar4, &fVar3);
			GlobalFunc_728(bVar4);
			if ((((MISC::ABSF(fVar1) > 0.5f || MISC::ABSF(fVar2) > 0.5f) || MISC::ABSF(fVar3) > 0.5f) || PED::IS_PED_SHOOTING(func_447())) || PED::IS_PED_SHOOTING(Local_630[3 /*20*/]))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ENEMIES_ARRIVE");
				iLocal_6072++;
			}
			break;
		
		case 3:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_TAKE", 8, 0, 0, 0))
				{
					iLocal_6072++;
				}
			}
			break;
		
		case 4:
			switch (iLocal_4234)
			{
				case 0:
					if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
					{
						GlobalFunc_5179("AH3b_AJAA", "FBI2AGENT2", 117.272f, -739.3178f, 258.6033f, 10);
						iLocal_4234++;
					}
					break;
				
				case 1:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_HOLDIN_M", 8, 0, 0, 0))
						{
							iLocal_6072++;
						}
					}
					break;
			}
			break;
		
		case 5:
			if (GlobalFunc_5171())
			{
				GlobalFunc_164("A3B_HLDOFF", 7500, 1);
				GlobalFunc_5105();
				iLocal_7106 = 0;
				bLocal_7076 = true;
				iLocal_4234 = 0;
				iLocal_7118 = -1;
				iLocal_6072++;
			}
			break;
		
		case 6:
			switch (iLocal_4234)
			{
				case 0:
					if (GlobalFunc_5170() && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_MICRADCP", 8, 0, 0, 0))
					{
						func_645(27, 0);
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
					break;
				
				case 1:
					if (GlobalFunc_5170() && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PILOTAP", 8, 0, 0, 0))
					{
						iLocal_4234++;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						bLocal_7076 = false;
						iLocal_4234++;
					}
					break;
				
				case 3:
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[1 /*88*/]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2091[1 /*88*/]) > 14000f)
					{
						bLocal_7076 = true;
						GlobalFunc_5105();
						iLocal_4234++;
					}
					break;
				
				case 4:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_FRANKSEE", 8, 0, 0, 0))
						{
							iLocal_4234++;
						}
					}
					break;
				
				case 5:
					if (GlobalFunc_5170() && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_MICSEE", 8, 0, 0, 0))
					{
						iLocal_4234++;
					}
					break;
				
				case 6:
					if (GlobalFunc_5170() && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PILOTHOV1", 8, 0, 0, 0))
					{
						iLocal_4234++;
					}
					break;
				
				case 7:
					if (!GlobalFunc_111())
					{
						bLocal_7076 = false;
						iLocal_4250 = MISC::GET_GAME_TIMER();
						iLocal_4234++;
					}
					break;
				
				case 8:
					if ((MISC::GET_GAME_TIMER() - iLocal_4250) > 7000)
					{
						if (iLocal_7074 <= 3)
						{
							bLocal_7076 = false;
							iLocal_4234 = 13;
						}
						else
						{
							bLocal_7076 = true;
							iLocal_4234++;
						}
					}
					break;
				
				case 9:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PROGa", 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 10:
					if (GlobalFunc_5170())
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_STILL", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 11:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PROGc", 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 12:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PILOTHOV2", 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 13:
					if (!GlobalFunc_111())
					{
						bLocal_7076 = false;
						iLocal_4250 = MISC::GET_GAME_TIMER();
						iLocal_4234++;
					}
					break;
			}
			if (fLocal_6464 >= 0.4f && fLocal_6464 <= 0.47f)
			{
				fVar5 = ((fLocal_6464 - 0.4f) / (0.47f - 0.4f));
				fLocal_6465 = GlobalFunc_551(1f, 0.05f, fVar5);
			}
			if (iLocal_7074 == 0)
			{
				func_476(11);
				if (iLocal_7118 == -1)
				{
					iLocal_7118 = MISC::GET_GAME_TIMER();
				}
				if ((((iLocal_4234 > 6 && iLocal_4234 < 9) || iLocal_4234 > 12) && (MISC::GET_GAME_TIMER() - iLocal_7118) > 2000) && (MISC::GET_GAME_TIMER() - iLocal_4250) > 2000)
				{
					iLocal_7106 = 1;
					iLocal_6072++;
				}
			}
			break;
		
		case 7:
			if (func_643(27))
			{
				func_645(13, 0);
				GlobalFunc_5105();
				bLocal_7076 = true;
				StringCopy(&cLocal_4237, "", 24);
				iLocal_4234 = 0;
				iLocal_7097 = -1;
				iLocal_6072++;
			}
			break;
		
		case 8:
			if (AUDIO::PREPARE_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS") && AUDIO::PREPARE_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER"))
			{
				func_43(1, 0);
			}
			switch (iLocal_4234)
			{
				case 0:
					if (GlobalFunc_5170())
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_GONE", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_5170() && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_FRANREACT", 8, 0, 0, 0))
					{
						iLocal_4234++;
					}
					break;
				
				case 2:
					if (GlobalFunc_5170() && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_BACKUP", 8, 0, 0, 0))
					{
						bLocal_7076 = false;
						iLocal_4234++;
					}
					break;
				
				case 3:
					if (bLocal_7107)
					{
						bLocal_7076 = true;
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_GASS_F", 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
					}
					break;
				
				case 4:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_GASS_M", 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 5:
					if (GlobalFunc_5170())
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_FIRE", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4234++;
						}
					}
					break;
				
				case 6:
					if (!GlobalFunc_111())
					{
						bLocal_7076 = false;
						iLocal_4234++;
					}
					break;
				
				case 7:
					if (fLocal_6464 == 1f)
					{
						CUTSCENE::REQUEST_CUTSCENE("AH_3B_MCS_5", 8);
						AUDIO::PREPARE_MUSIC_EVENT("AH3B_DATA_FINISHED");
						GlobalFunc_9024(&uLocal_5577, func_106(), "Michael", 0);
						bLocal_7076 = true;
						iLocal_4250 = MISC::GET_GAME_TIMER() + 1000;
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4234++;
					}
					break;
				
				case 8:
					if (MISC::GET_GAME_TIMER() > iLocal_4250)
					{
						if (GlobalFunc_5170())
						{
							MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_DONE", 0)}, 6);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
					}
					break;
				
				case 9:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_REACT", 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4250 = MISC::GET_GAME_TIMER();
							iLocal_4234++;
						}
					}
					break;
				
				case 10:
					if (iLocal_7074 <= 2)
					{
						iLocal_7097 = 0;
					}
					else if (iLocal_7074 <= 3)
					{
						iLocal_7097 = 2;
					}
					else
					{
						iLocal_7097 = iLocal_7074;
					}
					iLocal_7096 = iLocal_7074;
					StringCopy(&cLocal_4237, "", 24);
					if (iLocal_7097 > 0)
					{
						iLocal_4234++;
					}
					else
					{
						iLocal_4234 = 13;
					}
					break;
				
				case 11:
					if ((iLocal_7096 - iLocal_7074) < iLocal_7097)
					{
						if (GlobalFunc_5170())
						{
							func_449("AH_CLENMY", 0, &cLocal_4237, 1, 1, 1, 1);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								iLocal_4234++;
							}
						}
					}
					break;
				
				case 12:
					if ((iLocal_7096 - iLocal_7074) < iLocal_7097)
					{
						if (GlobalFunc_5171())
						{
							GlobalFunc_164("A3B_KILLFIB", 7500, 1);
							iLocal_4234++;
						}
					}
					break;
			}
			if (iLocal_4234 >= 6 && fLocal_6464 != 1f)
			{
				if (iLocal_7074 <= 3)
				{
					fVar6 = (1f - fLocal_6464);
					fLocal_6465 = GlobalFunc_551(1f, 3f, fVar6);
				}
			}
			if (((((((iLocal_4234 >= 11 && (iLocal_7096 - iLocal_7074) >= iLocal_7097) && (MISC::GET_GAME_TIMER() - iLocal_7075) > 2000) && (MISC::GET_GAME_TIMER() - iLocal_4250) > 2000) && CUTSCENE::HAS_CUTSCENE_LOADED()) && iLocal_6077 == 0) && !GlobalFunc_111()) && AUDIO::PREPARE_MUSIC_EVENT("AH3B_DATA_FINISHED"))
			{
				GlobalFunc_703(&(Local_630[0 /*20*/].f_3));
				iLocal_6466 = 0;
				bLocal_6474 = false;
				bLocal_6473 = false;
				ENTITY::SET_ENTITY_INVINCIBLE(func_106(), 0);
				ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 0);
				GlobalFunc_727(&Local_4444, &cLocal_347);
				GlobalFunc_727(&Local_4444, &cLocal_353);
				GlobalFunc_719(&Local_4444, &cLocal_191);
				HUD::CLEAR_HELP(1);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[6]))
				{
					CAM::DESTROY_CAM(uLocal_3852[6], 0);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_DATA_FINISHED");
				WEAPON::SET_CURRENT_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"), 1);
				Local_3864[12 /*2*/] = WEAPON::GET_WEAPON_OBJECT_FROM_PED(func_106(), 1);
				if (PLAYER::PLAYER_PED_ID() != func_106())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_106(), "Michael", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[12 /*2*/], "Michaels_2_Handedweapon", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[5 /*2*/], "Michaels_phone", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[2 /*2*/], "AH_monitor", 0, 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SHOOTOUT_CONTINUED"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_SHOOTOUT_CONTINUED");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SHOOTOUT_SMOKE_BOMBS"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_SHOOTOUT_SMOKE_BOMBS");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_COMPUTER_FOCUS_CAM"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_COMPUTER_FOCUS_CAM");
				}
				GlobalFunc_8380(1, 1, 1, 0);
				iLocal_4226 = 0;
				iLocal_4222 = 0;
				iLocal_4223 = 0;
				iLocal_4225 = 0;
				if (PLAYER::PLAYER_PED_ID() != func_106())
				{
					if (GlobalFunc_9019(&iLocal_6078, 0))
					{
						func_400(&iLocal_6078, 1, 1, 1);
					}
					CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(func_79());
					PED::SET_PED_RESET_FLAG(func_79(), 381, 1);
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
				iLocal_6072++;
			}
			break;
		
		case 9:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::_0x5A43C76F7FC7BA5F();
				ENTITY::SET_ENTITY_COORDS(func_79(), 148.3118f, -751.8849f, 257.1696f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_79(), 70.3502f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_79(), 148.3118f, -751.8849f, 257.1696f, -1, 0, 0f, 1, 1, 0, 0);
				func_6(0, 1, 0f, 0);
				func_6(1, 1, 0f, 0);
				iVar7 = 10;
				while (iVar7 <= 33)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[iVar7 /*20*/]))
					{
						PED::DELETE_PED(&(Local_630[iVar7 /*20*/]));
					}
					iVar7++;
				}
				iLocal_6072++;
			}
			break;
		
		case 10:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::_0x5A43C76F7FC7BA5F();
				if ((CUTSCENE::GET_CUTSCENE_TIME() >= 5300 && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_347)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_353))
				{
					TASK::CLEAR_PED_TASKS(func_79());
					TASK::CLEAR_PED_TASKS(Local_630[3 /*20*/]);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_347, 1, &Var8);
					ENTITY::SET_ENTITY_COORDS(func_79(), Var8, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_79(), 74.7167f);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_PED_AMMO(func_79(), iLocal_373, 240);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					WEAPON::SET_PED_AMMO(Local_630[3 /*20*/], iLocal_373, -1);
					func_645(15, 0);
					iLocal_6072++;
				}
				else if (CUTSCENE::GET_CUTSCENE_TIME() >= 1200)
				{
					func_692(0, 1);
				}
				else
				{
					func_692(0, 0);
				}
			}
			break;
		
		case 11:
			CAM::_0x5A43C76F7FC7BA5F();
			if (!iLocal_4226)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					iLocal_4226 = 1;
				}
			}
			if (iLocal_4226)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(func_106());
			}
			if (!iLocal_4223)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("AH_Monitor", 0))
				{
					iLocal_4223 = 1;
				}
			}
			if (!iLocal_4225)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_2_Handedweapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_3864[12 /*2*/], func_106());
					iLocal_4225 = 1;
				}
			}
			if (!iLocal_4222)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"), 1);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0, 1, 0);
					iLocal_4222 = 1;
				}
			}
			if (((iLocal_4222 && iLocal_4226) && iLocal_4223) && iLocal_4225)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[2 /*2*/]));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[3 /*2*/]));
				GlobalFunc_5178(&Local_4444, &uLocal_70);
				func_47(&Local_6176, 0, 1);
				GlobalFunc_8380(0, 1, 1, 0);
				func_465(6);
			}
			break;
		
		case -1:
			CAM::DESTROY_CAM(uLocal_3852[6], 0);
			if (!PED::IS_PED_INJURED(Local_630[3 /*20*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 0);
			}
			break;
	}
	if (iLocal_6072 != -1)
	{
		func_688(0);
		if (bLocal_6473)
		{
			func_687();
			func_686();
			PED::SET_PED_CONFIG_FLAG(func_106(), 131, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(func_106(), 131, false);
		}
		if (bLocal_6474)
		{
			func_685();
			if (((!bLocal_7076 && iLocal_6072 > 5) && (iLocal_7117 == 0 || iLocal_7117 == 99)) && GlobalFunc_5170())
			{
				if (MISC::GET_GAME_TIMER() > iLocal_7083)
				{
					iVar17 = 10;
					while (iVar17 <= 38)
					{
						if ((Local_630[iVar17 /*20*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_630[iVar17 /*20*/])) && !PED::IS_PED_INJURED(Local_630[iVar17 /*20*/]))
						{
							if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_630[iVar17 /*20*/]) == 166731292)
							{
								iVar11++;
							}
							else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_630[iVar17 /*20*/]) == 404929153)
							{
								iVar12++;
							}
							else if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_630[iVar17 /*20*/]) == 843177456 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_630[iVar17 /*20*/]) == 1964603929) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_630[iVar17 /*20*/]) == -2068244132)
							{
								iVar13++;
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[iVar17 /*20*/], 123.5667f, -751.8563f, 261.8514f, 128.1673f, -739.2736f, 264.5893f, 6.1875f, 0, 1, 0))
							{
								iVar16++;
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[iVar17 /*20*/], 125.191f, -755.0689f, 261.6053f, 138.0439f, -760.0117f, 264.5614f, 6.1875f, 0, 1, 0))
							{
								iVar14++;
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[iVar17 /*20*/], 144.1253f, -742.8289f, 261.5996f, 131.9418f, -738.0443f, 264.5887f, 6.1875f, 0, 1, 0))
							{
								iVar15++;
							}
						}
						iVar17++;
					}
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
				{
					switch (iLocal_4249)
					{
						case 0:
							if ((MISC::GET_GAME_TIMER() - iLocal_4236) < 2000)
							{
								if (iLocal_7074 > 0)
								{
									iVar18 = -1;
									if (bLocal_7084)
									{
										if ((iVar11 - iLocal_7077) > iVar20)
										{
											iVar20 = (iVar11 - iLocal_7077);
											iVar18 = 0;
										}
										if ((iVar12 - iLocal_7078) > iVar20)
										{
											iVar20 = (iVar12 - iLocal_7078);
											iVar18 = 1;
										}
										if ((iVar13 - iLocal_7079) > iVar20)
										{
											iVar20 = (iVar13 - iLocal_7079);
											iVar18 = 2;
										}
										if ((iVar16 - iLocal_7082) > iVar20)
										{
											iVar20 = (iVar16 - iLocal_7082);
											iVar18 = 3;
										}
										if ((iVar14 - iLocal_7080) > iVar20)
										{
											iVar20 = (iVar14 - iLocal_7080);
											iVar18 = 4;
										}
										if ((iVar15 - iLocal_7081) > iVar20)
										{
											iVar20 = (iVar15 - iLocal_7081);
											iVar18 = 5;
										}
									}
									if (!bLocal_7084 || iVar20 == 0)
									{
										if (iVar11 > iVar19)
										{
											iVar19 = iVar11;
											iVar18 = 0;
										}
										if (iVar12 > iVar19)
										{
											iVar19 = iVar12;
											iVar18 = 1;
										}
										if (iVar13 > iVar19)
										{
											iVar19 = iVar13;
											iVar18 = 2;
										}
										if (iVar16 > iVar19)
										{
											iVar19 = iVar16;
											iVar18 = 3;
										}
										if (iVar14 > iVar19)
										{
											iVar19 = iVar14;
											iVar18 = 4;
										}
										if (iVar15 > iVar19)
										{
											iVar19 = iVar15;
											iVar18 = 5;
										}
									}
									switch (iVar18)
									{
										case 0:
											func_449("AH_LEFT", 0, &cLocal_4237, 0, 1, 1, 1);
											break;
										
										case 1:
											func_449("AH_RIGHT", 0, &cLocal_4237, 0, 1, 1, 1);
											break;
										
										case 2:
											func_449("AH_FLOOD", 0, &cLocal_4237, 0, 1, 1, 1);
											break;
										
										case 3:
										case 4:
										case 5:
											if (!iLocal_7115)
											{
												func_449("AH_ROOF", 0, &cLocal_4237, 0, 1, 1, 0);
												iLocal_7115 = 1;
											}
											else
											{
												switch (iVar18)
												{
													case 3:
														func_449("AH_ROOF_C", 0, &cLocal_4237, 0, 1, 1, 1);
														break;
													
													case 4:
														func_449("AH_ROOF_L", 0, &cLocal_4237, 0, 1, 1, 1);
														break;
													
													case 5:
														func_449("AH_ROOF_R", 0, &cLocal_4237, 0, 1, 1, 1);
														break;
													}
											}
											break;
										
										default:
											StringCopy(&cLocal_4237, "", 24);
											break;
									}
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
									{
										bLocal_7084 = !bLocal_7084;
										iLocal_4249++;
									}
								}
							}
							else
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4249++;
							}
							break;
						
						case 1:
							if (((iLocal_6482 == 1 && PLAYER::PLAYER_PED_ID() == func_106()) || iLocal_7074 == 0) && fLocal_6464 < 1f)
							{
								StringCopy(&cLocal_4237, "AH_WAITING", 24);
							}
							else if (iLocal_7074 > 0)
							{
								func_449("AH_ATT", 1, &cLocal_4237, 0, 1, 1, 1);
							}
							else
							{
								StringCopy(&cLocal_4237, "", 24);
							}
							iLocal_4249++;
							break;
						}
				}
				if (iLocal_4249 > 1)
				{
					iLocal_4249 = 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_7083)
				{
					iLocal_7077 = iVar11;
					iLocal_7078 = iVar12;
					iLocal_7079 = iVar13;
					iLocal_7082 = iVar16;
					iLocal_7080 = iVar14;
					iLocal_7081 = iVar15;
					iLocal_7083 = MISC::GET_GAME_TIMER() + 3000;
				}
			}
			iVar22 = 10;
			while (iVar22 <= 38)
			{
				if ((Local_630[iVar22 /*20*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_630[iVar22 /*20*/])) && !PED::IS_PED_INJURED(Local_630[iVar22 /*20*/]))
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_630[iVar22 /*20*/]) == -1248908639)
					{
						bVar21 = true;
					}
				}
				iVar22++;
			}
			if (bVar21)
			{
				PED::SET_PED_CONFIG_FLAG(func_447(), 119, true);
				PED::SET_PED_CONFIG_FLAG(Local_630[3 /*20*/], 119, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(func_447(), 119, false);
				PED::SET_PED_CONFIG_FLAG(Local_630[3 /*20*/], 119, false);
			}
		}
	}
}

void func_685()//Position - 0x6F660
{
	if (!PED::IS_PED_INJURED(func_447()))
	{
		if (func_447() == func_106())
		{
			if (GlobalFunc_709(func_106(), -1959848946, 1))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_106(), Local_407, -1, 0, 0f, 1, 0, Local_630[0 /*20*/].f_1, 1);
			}
		}
		if (func_447() == func_79())
		{
			if (iLocal_7074 > 0)
			{
				if (!PED::IS_PED_IN_COMBAT(func_79(), 0))
				{
					func_602(&(Local_630[1 /*20*/]), Local_410, 1f, 1, 1, 1, 1, 0f, 0f, 0, 0, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_79(), 50f, 0);
				}
			}
			else if (!GlobalFunc_709(func_79(), -1716541277, 1) && !GlobalFunc_709(func_79(), -1959848946, 1))
			{
				func_602(&(Local_630[1 /*20*/]), Local_410, 1f, 1, 1, 1, 1, 0f, 0f, 0, 0, 0, 0);
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_79(), Local_630[1 /*20*/].f_1, 144.7441f, -750.0186f, 258.502f, -1, 0);
			}
		}
	}
	if (iLocal_7074 > 0)
	{
		if (!PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], 0))
		{
			func_602(&(Local_630[3 /*20*/]), Local_413, 1f, 1, 1, 1, 1, 0f, 0f, 0, 0, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[3 /*20*/], 50f, 0);
		}
	}
	else if (!GlobalFunc_709(Local_630[3 /*20*/], -1716541277, 1) && !GlobalFunc_709(Local_630[3 /*20*/], -1959848946, 1))
	{
		func_602(&(Local_630[3 /*20*/]), Local_413, 1f, 1, 1, 1, 1, 0f, 0f, 0, 0, 0, 0);
		TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_630[3 /*20*/], Local_630[3 /*20*/].f_1, 141.8358f, -754.4357f, 258.6976f, -1, 0);
	}
}

void func_686()//Position - 0x6F800
{
	float fVar0;
	
	if (PLAYER::PLAYER_PED_ID() == func_106() && ((PED::IS_PED_IN_COVER(func_106(), 0) || PED::IS_PED_GOING_INTO_COVER(func_106())) || PED::IS_PED_AIMING_FROM_COVER(func_106())))
	{
		if (PED::IS_PED_AIMING_FROM_COVER(func_106()))
		{
			if (iLocal_6492 != 1)
			{
				iLocal_6492 = 1;
				iLocal_6491 = MISC::GET_GAME_TIMER();
			}
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 1);
		}
		else if (iLocal_6492 != -1)
		{
			iLocal_6492 = -1;
			iLocal_6491 = MISC::GET_GAME_TIMER();
		}
		fVar0 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_6491)) / 500f), 0f, 1f);
		if (iLocal_6492 == -1)
		{
			fVar0 = (1f - fVar0);
		}
		CAM::_CLAMP_GAMEPLAY_CAM_YAW(GlobalFunc_551(64.665f, 17.185f, fVar0), GlobalFunc_551(98.325f, 99.375f, fVar0));
		CAM::_CLAMP_GAMEPLAY_CAM_PITCH(GlobalFunc_551(-7.2f, -18.85f, fVar0), GlobalFunc_551(12.96f, 22.685f, fVar0));
		CAM::_ANIMATE_GAMEPLAY_CAM_ZOOM(GlobalFunc_551(0.9f, 0.9f, fVar0), GlobalFunc_551(1.2f, 1.2f, fVar0));
	}
}

void func_687()//Position - 0x6F909
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	
	iVar0 = 0;
	iVar1 = 45;
	iVar2 = WEAPON::GET_AMMO_IN_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"));
	if (iVar2 <= 30)
	{
		WEAPON::SET_PED_AMMO(func_106(), joaat("weapon_carbinerifle"), 100);
	}
	if (PLAYER::PLAYER_PED_ID() != func_106() || iLocal_6077 != 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && GlobalFunc_74("A3B_HLPFPS"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(func_106(), 229);
	PED::SET_PED_CONFIG_FLAG(func_106(), 208, true);
	if ((!PED::IS_PED_IN_COVER(func_106(), 0) && !PED::IS_PED_GOING_INTO_COVER(func_106())) && !PED::IS_PED_AIMING_FROM_COVER(func_106()))
	{
		if (func_106() == PLAYER::PLAYER_PED_ID())
		{
			if (iLocal_6077 != 2)
			{
				if (!GlobalFunc_709(func_106(), -1716541277, 1) && !GlobalFunc_709(func_106(), -1959848946, 1))
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_106(), Local_407, -1, 1, 0f, 1, 0, Local_630[0 /*20*/].f_1, 1);
				}
			}
		}
		else if (!GlobalFunc_709(func_106(), -1716541277, 1) && !GlobalFunc_709(func_106(), -1959848946, 1))
		{
			TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_106(), Local_630[0 /*20*/].f_1, 142.6137f, -757.5621f, 258.5244f, -1, 1);
		}
	}
	else if (func_106() != PLAYER::PLAYER_PED_ID())
	{
		if (!PED::IS_PED_IN_COMBAT(func_106(), 0))
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_106(), 70f, 0);
		}
	}
	if ((((PLAYER::PLAYER_PED_ID() == func_106() || (iLocal_6077 != 0 && iLocal_6078.f_7 == 0)) && !CAM::DOES_CAM_EXIST(uLocal_3852[7])) && !CAM::DOES_CAM_EXIST(uLocal_3852[8])) && !CAM::DOES_CAM_EXIST(uLocal_3852[9]))
	{
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6157, "V_FIB03_door_light"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_6157, "V_FIB03_door_light");
		}
		if (PAD::GET_DISABLED_CONTROL_NORMAL(0, 30) <= 0.5f)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		if (GlobalFunc_116(0))
		{
			GlobalFunc_6685(0);
		}
		if (iLocal_6482 != 3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			Var3 = { 0f, 0f, 0f };
		}
		else
		{
			Var3 = { PAD::GET_CONTROL_NORMAL(2, 197), 0f, -PAD::GET_CONTROL_NORMAL(0, 198) };
		}
		iVar12 = iLocal_6482;
		switch (iLocal_6482)
		{
			case 0:
				if (!CAM::_0x705A276EBFF3133D())
				{
					iLocal_6482 = 1;
				}
				break;
			
			case 1:
				if (!PAD::IS_CONTROL_PRESSED(iVar0, iVar1) || iLocal_6077 != 0)
				{
					CAM::RENDER_SCRIPT_CAMS(false, 1, 400, 1, 0, 0);
					CAM::_0x661B5C8654ADD825(uLocal_3852[6], 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_COMPUTER_FOCUS_CAM"))
					{
						AUDIO::STOP_AUDIO_SCENE("AH_3B_COMPUTER_FOCUS_CAM");
					}
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[6], 0.2f);
					iLocal_6482 = 2;
				}
				else
				{
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[6], 0f);
					if (bLocal_6489 == 0 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
						bLocal_6489 = true;
					}
					Var3.x = (Var3.x * 0.15f);
					Var3.f_2 = (Var3.f_2 * 0.1f);
					if (Var3.x != 0f || Var3.f_2 != 0f)
					{
						Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_3864[2 /*2*/], 1), 186.2489f, Var3 + Local_6486) };
					}
					else
					{
						Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_3864[2 /*2*/], 1), 186.2489f, Local_6486) };
					}
					if (GlobalFunc_537(Local_6483, Var6, 0.01f))
					{
						Var9 = { Var6 };
					}
					else
					{
						Var9 = { GlobalFunc_721(Local_6483, Var6, (8f * MISC::GET_FRAME_TIME())) };
					}
					CAM::POINT_CAM_AT_COORD(uLocal_3852[6], Var9);
					Local_6483 = { Var9 };
				}
				break;
			
			case 2:
				if (!CAM::_0x3044240D2E0FA842())
				{
					iLocal_6482 = 3;
				}
				break;
			
			case 3:
				if ((PAD::IS_CONTROL_PRESSED(iVar0, iVar1) && iLocal_6077 == 0) && (!iLocal_7106 || func_643(27)))
				{
					if (iLocal_6490 == -1)
					{
						iLocal_6490 = MISC::GET_GAME_TIMER() + 150;
					}
					if (MISC::GET_GAME_TIMER() > iLocal_6490)
					{
						CAM::SET_CAM_ACTIVE(uLocal_3852[6], 1);
						CAM::_0x661B5C8654ADD825(uLocal_3852[6], 1);
						CAM::RENDER_SCRIPT_CAMS(true, 1, 400, 1, 0, 0);
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_COMPUTER_FOCUS_CAM"))
						{
							AUDIO::START_AUDIO_SCENE("AH_3B_COMPUTER_FOCUS_CAM");
						}
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[6], 0.2f);
						iLocal_6482 = 0;
					}
				}
				else
				{
					iLocal_6490 = -1;
					if ((iLocal_6077 == 0 && !bLocal_6489) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_1("A3B_HLPFPS");
					}
				}
				break;
		}
		if (iVar12 != iLocal_6482)
		{
			iLocal_6493 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_COMPUTER_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("AH_3B_COMPUTER_FOCUS_CAM");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6157, "V_FIB03_door_light"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_6157, "V_FIB03_door_light");
		}
	}
}

void func_688(bool bParam0)//Position - 0x6FE08
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	if (iLocal_6466)
	{
		if (!iLocal_6467)
		{
			fVar0 = ((1000f / 120000f) * fLocal_6465);
			fLocal_6464 = (fLocal_6464 + (SYSTEM::TIMESTEP() * fVar0));
			fLocal_6464 = GlobalFunc_253(fLocal_6464, 0f, 1f);
			iVar1 = GlobalFunc_254(SYSTEM::ROUND((fLocal_6464 * 100f)), 0, 100);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_PROGRESS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if ((MISC::GET_GAME_TIMER() - iLocal_6479) > 1500)
			{
				iVar2 = SYSTEM::ROUND(((1f - fLocal_6464) / fVar0));
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_TIME");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
				GlobalFunc_726("A3B_DLTIME");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_6479 = MISC::GET_GAME_TIMER();
			}
			if (fLocal_6464 >= (IntToFloat(iLocal_6475) * (1f / 26f)))
			{
				if (iLocal_6475 <= 12)
				{
					StringCopy(&Var3, "A3B_DL", 24);
					StringIntConCat(&Var3, iLocal_6475, 24);
				}
				else
				{
					StringCopy(&Var3, "A3B_DEL", 24);
					StringIntConCat(&Var3, (iLocal_6475 - 13), 24);
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_MESSAGE");
				GlobalFunc_726(&Var3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_6475++;
				if (iLocal_6475 >= 26)
				{
					iLocal_6475 = 0;
				}
			}
		}
		func_692(bParam0, 0);
		if (!iLocal_6467 && fLocal_6464 == 1f)
		{
			func_689();
		}
	}
}

void func_689()//Position - 0x6FF47
{
	AUDIO::STOP_SOUND(iLocal_3907[0]);
	AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[1], "HACKING_DOWNLOADED", ENTITY::GET_ENTITY_COORDS(Local_3864[2 /*2*/], 1), 0, 0, 0, 0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_PROGRESS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_MESSAGE");
	GlobalFunc_726("A3B_DLCOMP");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_TIME");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_6467 = 1;
}



void func_692(bool bParam0, bool bParam1)//Position - 0x70055
{
	if (func_694(0))
	{
		if (!MISC::IS_BIT_SET(Local_6176, 29))
		{
			func_693(&Local_6176, 0);
		}
		if (bParam0)
		{
			if (bParam1)
			{
				func_107(1);
			}
			else if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_70, 255, 255, 255, 255, 0);
			}
		}
		else if (bParam1)
		{
			func_107(0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_3864[2 /*2*/]))
		{
			HUD::SET_TEXT_RENDER_ID(uLocal_6472);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_70, 0.426f, 0.366f, 0.925f, 0.723f, 255, 255, 255, 255, 0);
			HUD::SET_TEXT_RENDER_ID(uLocal_6471);
		}
	}
}

void func_693(int iParam0, int iParam1)//Position - 0x700F8
{
	if (!MISC::IS_BIT_SET(*iParam0, 29))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
		if (GRAPHICS::GET_IS_WIDESCREEN())
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LABELS");
		GlobalFunc_726("H_ICON_1");
		if (iParam1 == 0)
		{
			GlobalFunc_726("H_ICON_2a");
		}
		else
		{
			GlobalFunc_726("H_ICON_2");
		}
		GlobalFunc_726("H_ICON_3");
		GlobalFunc_726("H_ICON_4");
		GlobalFunc_726("H_ICON_5");
		GlobalFunc_726("H_ICON_6");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(iParam0, 29);
	}
}

int func_694(bool bParam0)//Position - 0x701DF
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_70) && (!bParam0 || (((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}




void func_698(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x70340
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[1 /*20*/]))
	{
		iLocal_6078[1] = Local_630[1 /*20*/];
		GlobalFunc_729(&iLocal_6078, 1, iParam1);
		func_699(&iLocal_6078, 1, iParam4);
	}
	else
	{
		GlobalFunc_729(&iLocal_6078, 1, 1);
	}
	if (iParam2 && iParam5)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[0 /*20*/]))
	{
		iLocal_6078[0] = Local_630[0 /*20*/];
		GlobalFunc_729(&iLocal_6078, 0, iParam0);
		func_699(&iLocal_6078, 0, iParam3);
	}
	else
	{
		GlobalFunc_729(&iLocal_6078, 0, 1);
	}
}

void func_699(var uParam0, int iParam1, var uParam2)//Position - 0x703C6
{
	if (iParam1 != 4)
	{
		uParam0->f_8[iParam1] = uParam2;
	}
}


void func_701()//Position - 0x703F6
{
	float fVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (iLocal_6072 > 1 && !iLocal_6477)
	{
		if (iLocal_6478 == -1)
		{
			iLocal_6478 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_6478) > 1500)
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3864[2 /*2*/]);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3864[2 /*2*/], 0);
			iLocal_6477 = 1;
		}
	}
	if (iLocal_6072 >= 1 && iLocal_6072 <= 5)
	{
		func_692(0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
	{
		PED::SET_PED_RESET_FLAG(func_447(), 283, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
	{
		PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 283, 1);
	}
	switch (iLocal_6072)
	{
		case 0:
			if (iLocal_7108[5] != -1)
			{
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_7108[5]);
				iLocal_7108[5] = -1;
			}
			AUDIO::TRIGGER_MUSIC_EVENT("AH3B_INSIDE_BUILDING");
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[0], 0);
			}
			CUTSCENE::REQUEST_CUTSCENE("AH_3B_MCS_3", 8);
			GlobalFunc_9024(&uLocal_5577, func_106(), "Michael", 0);
			WEAPON::GIVE_WEAPON_TO_PED(func_106(), joaat("weapon_stickybomb"), 1, 0, 0);
			WEAPON::SET_PED_AMMO(func_106(), joaat("weapon_stickybomb"), 3);
			func_6(0, 1, 0f, 0);
			func_6(1, 1, 0f, 0);
			func_6(4, 1, 0f, 0);
			func_6(2, 1, 0f, 0);
			func_6(3, 1, 0f, 0);
			func_6(5, 1, 0f, 0);
			GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
			GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
			GlobalFunc_734(&Local_4444);
			func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
			GlobalFunc_719(&Local_4444, "missheist_agency3amcs_2");
			GlobalFunc_733(&Local_4444, "Hacking_PC", &uLocal_70, 1);
			func_738(0);
			if (!bLocal_6470)
			{
				GlobalFunc_7621(195, 2, 0, 1, 0);
			}
			iLocal_4234 = 0;
			iLocal_4235 = 0;
			iLocal_6175 = 0;
			iLocal_4222 = 0;
			iLocal_4226 = 0;
			iLocal_6466 = 0;
			iLocal_6477 = 0;
			iLocal_6476 = -1;
			iLocal_6478 = -1;
			func_645(14, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3864[2 /*2*/], 1);
			iLocal_4234 = 0;
			iLocal_4235 = 0;
			bLocal_7076 = true;
			GlobalFunc_11046(4, "4. Hack the computer", 0, 0, 0, 1);
			MISC::CLEAR_AREA_OF_OBJECTS(151.4373f, -766.3517f, 258.05f, 3f, 2);
			iLocal_6072++;
			break;
		
		case 1:
			fVar0 = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Local_3864[4 /*2*/], 1);
			if (fVar0 < 1f && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3amcs_2"))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3b_linger_smoke", 151.26f, -762.57f, 258.25f, 0f, 0f, 0f, 1f, 0, 0, 0);
				iLocal_3935[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency_door_haze", 151.26f, -762.57f, 258.2f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
				PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				GlobalFunc_164("A3B_HACK", 7500, 1);
				if (HUD::DOES_BLIP_EXIST(uLocal_627))
				{
					HUD::REMOVE_BLIP(&uLocal_627);
				}
				uLocal_627 = GlobalFunc_6799(Local_3864[2 /*2*/]);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_627, "A3B_COMP");
				uLocal_3916[16] = PED::CREATE_SYNCHRONIZED_SCENE(155.209f, -765.206f, 257.205f, 0f, 0f, -110f, 2);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[4 /*2*/], uLocal_3916[16], "explode_doc_door_3b", "missheist_agency3amcs_2", 1000f, -1000f, 4, 1148846080);
				func_476(14);
				GlobalFunc_4956();
				iLocal_6480 = MISC::GET_GAME_TIMER() + 2500;
				StringCopy(&cLocal_4237, "", 24);
				iLocal_6072++;
			}
			else
			{
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_IAMIN", 8, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170())
						{
							if (iLocal_4195 == 12)
							{
								MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SERLO", 1)}, 6);
							}
							else
							{
								MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SERLO", 0)}, 6);
							}
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								func_491(&uLocal_627, 151.2583f, -762.6251f, 257.3701f, 0);
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 2:
						if (GlobalFunc_5171())
						{
							GlobalFunc_164("A3B_ACCESS", 7500, 1);
							bLocal_7076 = false;
							iLocal_4234++;
						}
						break;
				}
				if (func_736(func_106()) == 0)
				{
					if (((!MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(112.9159f, -741.613f, 257.1525f, 158.8239f, -757.6278f, 261.177f, 29.5f, joaat("weapon_stickybomb"), 1) && !MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(112.9159f, -741.613f, 257.1525f, 158.8239f, -757.6278f, 261.177f, 29.5f, joaat("weapon_rpg"), 1)) && !MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(112.9159f, -741.613f, 257.1525f, 158.8239f, -757.6278f, 261.177f, 29.5f, joaat("weapon_grenade"), 1)) && !MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(112.9159f, -741.613f, 257.1525f, 158.8239f, -757.6278f, 261.177f, 29.5f, joaat("weapon_grenadelauncher"), 1))
					{
						if (iLocal_6476 == -1)
						{
							iLocal_6476 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_6476) > 2500)
						{
							func_997(25);
						}
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[16]))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[16], 1f);
				GlobalFunc_5175(&Local_4444, "missheist_agency3amcs_2");
			}
			if ((((((ENTITY::DOES_ENTITY_EXIST(Local_3864[2 /*2*/]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_3864[2 /*2*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_106(), 151.3484f, -762.1386f, 257.152f, 150.4558f, -764.5777f, 259.527f, 2.3125f, 0, 1, 0)) && CUTSCENE::HAS_CUTSCENE_LOADED()) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_prop_74_emr_3b"))) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_prop_74_emr_3b_02"))) && AUDIO::PREPARE_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B"))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				else
				{
					if (iLocal_4195 == 12)
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_MCS3", 1)}, 6);
					}
					else
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_MCS3", 0)}, 6);
					}
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						GlobalFunc_703(&uLocal_627);
						GlobalFunc_8380(1, 1, 1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michaels_phone", 2, iLocal_368, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[2 /*2*/], "AH_monitor", 0, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_BREAK_SERVER_ROOM_DOOR"))
						{
							AUDIO::STOP_AUDIO_SCENE("AH_3B_BREAK_SERVER_ROOM_DOOR");
						}
						if (!iLocal_6175)
						{
							func_46(1, 0, 1);
							GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
							GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
							iLocal_6175 = 1;
						}
						RECORDING::_0x293220DA1B46CEBC(6f, 0f, 4);
						CUTSCENE::START_CUTSCENE(2048);
						RECORDING::_0x48621C9FCA3EBD28(4);
						func_476(26);
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4222 = 0;
						iLocal_4226 = 0;
						iLocal_6072++;
					}
				}
			}
			if (!iLocal_6175)
			{
				if (((MISC::GET_GAME_TIMER() > iLocal_6480 && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_prop_74_emr_3b"))) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_prop_74_emr_3b_02"))) && AUDIO::PREPARE_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B"))
				{
					func_46(1, 0, 1);
					iLocal_6175 = 1;
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA_OF_PROJECTILES(151.3086f, -766.1226f, 258.0522f, 10f, 0);
				iLocal_6072++;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[5 /*2*/]))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_phone", iLocal_368);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						Local_3864[5 /*2*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_4226 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				MISC::SET_BIT(&Local_6176, 0);
				func_718(&Local_6176, 5, 5, 50, 10, 8, 0, 0, 0, 0, 1, 1, 0, 0, 60000, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				GlobalFunc_8380(0, 1, 0, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3864[5 /*2*/], Local_329, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_3864[5 /*2*/], Local_332, 2, 1);
				func_715(0, 1, 1);
				func_715(1, 1, 1);
				func_715(3, 1, 1);
				WEAPON::SET_AMMO_IN_CLIP(func_106(), joaat("weapon_carbinerifle"), WEAPON::GET_WEAPON_CLIP_SIZE(joaat("weapon_carbinerifle")));
				TASK::CLEAR_PED_TASKS(func_79());
				TASK::CLEAR_PED_TASKS(Local_630[3 /*20*/]);
				GlobalFunc_574(574, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_HACKING_MG"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_HACKING_MG");
				}
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ON_PC");
				iLocal_4234 = 0;
				iLocal_4235 = 0;
				iLocal_4222 = 1;
			}
			if (iLocal_4222)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
				iLocal_6468 = Local_6176.f_6;
				iLocal_6481 = 1;
				iLocal_6072++;
			}
			break;
		
		case 5:
			if ((func_713(&Local_6176, 0) && func_712(&Local_6176, 0)) && func_709(&Local_6176, 0))
			{
				if (!GlobalFunc_111() && fLocal_6464 > 0.03f)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if (!GlobalFunc_5170())
						{
							GlobalFunc_5105();
						}
						else if (!GlobalFunc_111())
						{
							if (iLocal_4195 == 12)
							{
								MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_MCS4", 1)}, 6);
							}
							else
							{
								MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_MCS4", 0)}, 6);
							}
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
							{
								if (MISC::IS_MINIGAME_IN_PROGRESS())
								{
									MISC::SET_MINIGAME_IN_PROGRESS(0);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								GlobalFunc_718(&Local_4444, iLocal_361);
								GlobalFunc_718(&Local_4444, iLocal_362);
								GlobalFunc_718(&Local_4444, iLocal_363);
								GlobalFunc_718(&Local_4444, iLocal_364);
								GlobalFunc_724(&Local_4444, "FBI_HEIST_3B_SHOOTOUT");
								GlobalFunc_719(&Local_4444, "facials@blend_out@ah_3b_mcs_4@michael@");
								HUD::CLEAR_HELP(1);
								MISC::CLEAR_AREA(150.19f, -762.98f, 257.15f, 3.25f, 1, 0, 0, 0);
								AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HACKED_PC");
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_HACKING_MG"))
								{
									AUDIO::STOP_AUDIO_SCENE("AH_3B_HACKING_MG");
								}
								func_708();
								ENTITY::SET_ENTITY_COORDS(func_79(), Local_410, 1, 0, 0, 1);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_79(), Local_410, -1, 0, 0f, 1, 1, Local_630[1 /*20*/].f_1, 0);
								ENTITY::SET_ENTITY_COORDS(Local_630[3 /*20*/], Local_413, 1, 0, 0, 1);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[3 /*20*/], Local_413, -1, 0, 0f, 1, 0, Local_630[3 /*20*/].f_1, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[5 /*2*/], "Michaels_phone", 0, 0, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[2 /*2*/], "AH_monitor", 0, 0, 0);
								WEAPON::SET_CURRENT_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"), 1);
								Local_3864[12 /*2*/] = WEAPON::GET_WEAPON_OBJECT_FROM_PED(func_106(), 1);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[12 /*2*/], "Michaels_2_Handedweapon", 0, 0, 0);
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[3]))
								{
									GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[3], 0);
								}
								func_476(26);
								iLocal_4222 = 0;
								iLocal_4226 = 0;
								CUTSCENE::START_CUTSCENE(2048);
								RECORDING::_0x48621C9FCA3EBD28(4);
								iLocal_6072++;
							}
						}
					}
				}
				func_688(1);
			}
			else
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REQUEST_CUTSCENE("AH_3B_MCS_4", 8);
				}
				if (!func_713(&Local_6176, 0))
				{
					func_718(&Local_6176, 5, 5, 50, 10, 8, 0, 0, 0, 0, 1, 1, 0, 1, 60000, 0);
				}
				else if (!func_712(&Local_6176, 0))
				{
					func_718(&Local_6176, 5, 5, 77, 10, 8, 0, 0, 0, 0, 1, 1, 0, 1, 60000, 0);
				}
				else if (!func_709(&Local_6176, 0))
				{
					func_718(&Local_6176, 5, 5, 70, 10, 8, 0, 0, 0, 0, 1, 1, 0, 1, 60000, 0);
					if (func_709(&Local_6176, 0))
					{
						iLocal_4234 = 0;
						func_707();
						func_688(1);
						GlobalFunc_571(0, -1);
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[0], "HACKING_DOWNLOADING", ENTITY::GET_ENTITY_COORDS(Local_3864[2 /*2*/], 1), 0, 0, 0, 0);
					}
				}
				iVar2 = iLocal_71;
				if (!func_709(&Local_6176, 0))
				{
					switch (iLocal_4234)
					{
						case 0:
							GlobalFunc_5105();
							iLocal_4235 = 0;
							iLocal_4234++;
							break;
						
						case 1:
							if (iVar2 == 2)
							{
								if (GlobalFunc_5170())
								{
									if (iLocal_4235 == 0)
									{
										if (iLocal_4195 == 12)
										{
											cVar3 = { func_459(iLocal_4195, "AH_COMPa", 1) };
										}
										else
										{
											cVar3 = { func_459(iLocal_4195, "AH_COMPa", 0) };
										}
										if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
										{
											iLocal_4235++;
										}
									}
								}
							}
							else if (iVar2 == 3)
							{
								GlobalFunc_5105();
								iLocal_4235 = 0;
								iLocal_4234++;
							}
							break;
						
						case 2:
							if (iVar2 == 3)
							{
								if (GlobalFunc_5170())
								{
									if (iLocal_4235 == 0)
									{
										if (iLocal_4195 == 12)
										{
											cVar3 = { func_459(iLocal_4195, "AH_COMPb", 1) };
										}
										else
										{
											cVar3 = { func_459(iLocal_4195, "AH_COMPb", 0) };
										}
										if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
										{
											iLocal_4235++;
										}
									}
								}
							}
							else if (iVar2 == 4)
							{
								GlobalFunc_5105();
								iLocal_4235 = 0;
								iLocal_4234++;
							}
							break;
						
						case 3:
							if (iVar2 == 4)
							{
								if (GlobalFunc_5170())
								{
									switch (iLocal_4235)
									{
										case 0:
											if (iLocal_4195 == 12)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HACKa", 1) };
											}
											else
											{
												cVar3 = { func_459(iLocal_4195, "AH_HACKa", 0) };
											}
											if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
											{
												iLocal_4235++;
											}
											break;
										
										case 1:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HACKb", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 2:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HACKc", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										}
								}
							}
							else if (iVar2 == 5)
							{
								GlobalFunc_5105();
								iLocal_4235 = 0;
								iLocal_4234++;
							}
							break;
						
						case 4:
							if (iVar2 == 5)
							{
								if (GlobalFunc_5170())
								{
									switch (iLocal_4235)
									{
										case 0:
											if (iLocal_4195 == 12)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HELPa", 1) };
											}
											else
											{
												cVar3 = { func_459(iLocal_4195, "AH_HELPa", 0) };
											}
											if (func_705(&cVar3))
											{
												if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
												{
													iLocal_4235++;
												}
											}
											else
											{
												iLocal_4235++;
											}
											break;
										
										case 1:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												if (iLocal_4195 == 12)
												{
													cVar3 = { func_459(iLocal_4195, "AH_HELPb", 1) };
												}
												else
												{
													cVar3 = { func_459(iLocal_4195, "AH_HELPb", 0) };
												}
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 2:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HELPc", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 3:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HELPd", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
											}
											break;
										
										case 4:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HELPe", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 5:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 4000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_HELPf", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										}
								}
							}
							else if (iVar2 != 5)
							{
								if (func_713(&Local_6176, 0))
								{
									GlobalFunc_5105();
									iLocal_4235 = 0;
									iLocal_4234++;
								}
							}
							break;
						
						case 5:
							if (((iVar2 == 4 || iVar2 == 3) || iVar2 == 2) || iVar2 == 7)
							{
								if (GlobalFunc_5170())
								{
									switch (iLocal_4235)
									{
										case 0:
											if (iLocal_4195 == 12)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTa", 1) };
											}
											else
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTa", 0) };
											}
											if (func_705(&cVar3))
											{
												if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
												{
													iLocal_4235++;
												}
											}
											else
											{
												iLocal_4235++;
											}
											break;
										
										case 1:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
											{
												if (iLocal_4195 == 12)
												{
													cVar3 = { func_459(iLocal_4195, "AH_BRUTb", 1) };
												}
												else
												{
													cVar3 = { func_459(iLocal_4195, "AH_BRUTb", 0) };
												}
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										}
								}
							}
							else if (iVar2 == 6)
							{
								GlobalFunc_5105();
								iLocal_4235 = 0;
								iLocal_4234++;
							}
							break;
						
						case 6:
							if (iVar2 == 6)
							{
								if (GlobalFunc_5170())
								{
									switch (iLocal_4235)
									{
										case 0:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												if (iLocal_4195 == 12)
												{
													cVar3 = { func_459(iLocal_4195, "AH_BRUTc", 1) };
												}
												else
												{
													cVar3 = { func_459(iLocal_4195, "AH_BRUTc", 0) };
												}
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 1:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTd", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 2:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTe", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 3:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTf", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 4:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTg", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 5:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTh", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 6:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTi", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 7:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTj", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 8:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTk", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 9:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_BRUTl", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										}
								}
							}
							else if (iVar2 != 6)
							{
								if (func_712(&Local_6176, 0))
								{
									GlobalFunc_5105();
									iLocal_4235 = 0;
									iLocal_4234++;
								}
							}
							break;
						
						case 7:
							if (((iVar2 == 4 || iVar2 == 3) || iVar2 == 2) || iVar2 == 7)
							{
								if (GlobalFunc_5170())
								{
									switch (iLocal_4235)
									{
										case 0:
											if (iLocal_4195 == 12)
											{
												cVar3 = { func_459(iLocal_4195, "AH_DWNa", 1) };
											}
											else
											{
												cVar3 = { func_459(iLocal_4195, "AH_DWNa", 0) };
											}
											if (func_705(&cVar3))
											{
												if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
												{
													iLocal_4235++;
												}
											}
											else
											{
												iLocal_4235++;
											}
											break;
										
										case 1:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_DWNb", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										
										case 2:
											if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
											{
												cVar3 = { func_459(iLocal_4195, "AH_DWNc", 0) };
												if (func_705(&cVar3))
												{
													if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar3, 8, 0, 0, 0))
													{
														iLocal_4235++;
													}
												}
												else
												{
													iLocal_4235++;
												}
											}
											break;
										}
								}
							}
							else if (iVar2 == 8)
							{
								GlobalFunc_5105();
								iLocal_4235 = 0;
								iLocal_4234++;
							}
							break;
						}
				}
				if (Local_6176.f_6 != iLocal_6468)
				{
					bVar7 = true;
					iLocal_6468 = Local_6176.f_6;
				}
				if (iLocal_6481)
				{
					if (MISC::IS_BIT_SET(Local_6176, 23))
					{
						iLocal_6481 = 0;
						bVar7 = true;
					}
				}
				else if (!MISC::IS_BIT_SET(Local_6176, 23))
				{
					iLocal_6481 = 1;
				}
				if (bVar7)
				{
					iVar8 = 0;
					while (iVar8 < Global_66845)
					{
						if (Global_66846[iVar8 /*9*/] == 573)
						{
							if (iVar9 == 0)
							{
								iVar9 = Global_66846[iVar8 /*9*/].f_1;
							}
						}
						iVar8++;
					}
					GlobalFunc_565(573, 1, 0);
				}
			}
			break;
		
		case 6:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_6492 = -1;
				iLocal_6491 = 0;
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
				iLocal_4226 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_2_Handedweapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_3864[12 /*2*/]), func_106());
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_phone", 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3864[5 /*2*/], Local_329, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_3864[5 /*2*/], Local_332, 2, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"), 1);
				TASK::TASK_PLAY_ANIM(func_106(), "facials@blend_out@ah_3b_mcs_4@michael@", "ah_3b_mcs_4_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
				func_703(0);
				iLocal_4222 = 1;
			}
			if (iLocal_4226 && iLocal_4222)
			{
				func_465(5);
			}
			func_688(0);
			break;
	}
	if (iLocal_6072 >= 6 || iLocal_6072 == -1)
	{
		if (iLocal_4222)
		{
			func_687();
			PED::SET_PED_CONFIG_FLAG(func_106(), 131, true);
		}
		if (iLocal_4226 && !iLocal_4222)
		{
			GlobalFunc_730(70.111f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.8101f, 1065353216);
		}
		if (iLocal_4226 || iLocal_4222)
		{
			func_686();
		}
	}
}


void func_703(bool bParam0)//Position - 0x71CDC
{
	if (WEAPON::HAS_PED_GOT_WEAPON(func_106(), iLocal_372, 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(func_106(), iLocal_372, 0);
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_106(), iLocal_372) < 240)
		{
			WEAPON::SET_PED_AMMO(func_106(), iLocal_372, 240);
		}
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(func_106(), iLocal_372, 240, 1, 1);
	}
	if (bParam0)
	{
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_106(), Local_407, 1000, 1, 0.5f, 1, 0, Local_630[0 /*20*/].f_1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(func_106(), Local_407, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(func_106(), 339.1769f);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_106(), Local_407, 1000, 1, 0f, 1, 0, Local_630[0 /*20*/].f_1, 0);
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_106(), 1, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_106(), 150.5477f, -761.1173f, 257.1522f, 1.5f, 0, 0);
	uLocal_3852[6] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 150.9026f, -762.486f, 258.6959f, -5.6055f, -3.5952f, -172.9336f, 10f, 0, 2);
	CAM::SHAKE_CAM(uLocal_3852[6], "HAND_SHAKE", 0.1f);
	Local_6483 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3864[2 /*2*/], Local_6486) };
	CAM::POINT_CAM_AT_COORD(uLocal_3852[6], Local_6483);
	iLocal_6482 = 3;
}


int func_705(char* sParam0)//Position - 0x71ED3
{
	char cVar0[24];
	
	StringCopy(&cVar0, sParam0, 24);
	StringConCat(&cVar0, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		return 1;
	}
	return 0;
}


void func_707()//Position - 0x71F92
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "OPEN_LOADING_PROGRESS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_PROGRESS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_LOADING_TIME");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(120000);
	GlobalFunc_726("A3B_DLTIME");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_6466 = 1;
	iLocal_6467 = 0;
	fLocal_6464 = 0f;
	fLocal_6465 = 1f;
	iLocal_6475 = 0;
}

void func_708()//Position - 0x71FFE
{
	func_611(&(Local_630[0 /*20*/]), Local_407, 69.915f, 0, 2, 1);
	func_611(&(Local_630[1 /*20*/]), Local_410, 69.915f, 1, 0, 1);
	func_611(&(Local_630[3 /*20*/]), Local_413, 69.915f, 0, 0, 1);
}

int func_709(int iParam0, bool bParam1)//Position - 0x7204B
{
	if (MISC::IS_BIT_SET(*iParam0, 28))
	{
		if (bParam1)
		{
			func_710(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_710(int iParam0, bool bParam1, bool bParam2)//Position - 0x72078
{
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::SET_BIT(iParam0, 12);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	if (bParam2)
	{
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	HUD::CLEAR_HELP(1);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::DESTROY_CAM(uLocal_68, 0);
	GlobalFunc_7632(0);
	GlobalFunc_731();
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_47(iParam0, 1, 1);
	GlobalFunc_702(0, 1, 1);
}


int func_712(int iParam0, bool bParam1)//Position - 0x72120
{
	if (MISC::IS_BIT_SET(*iParam0, 9))
	{
		if (bParam1)
		{
			func_710(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_713(int iParam0, bool bParam1)//Position - 0x7214D
{
	if (MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (bParam1)
		{
			func_710(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_715(int iParam0, bool bParam1, int iParam2)//Position - 0x721C4
{
	switch (iParam0)
	{
		case 0:
			func_717(Local_630[0 /*20*/], iLocal_372, 240, iParam2);
			func_716(Local_630[0 /*20*/], iLocal_372, joaat("component_at_ar_flsh"));
			if (bParam1)
			{
				func_716(Local_630[0 /*20*/], iLocal_372, joaat("component_at_ar_supp"));
			}
			break;
		
		case 1:
			func_717(Local_630[1 /*20*/], iLocal_373, 240, iParam2);
			func_716(Local_630[1 /*20*/], iLocal_373, joaat("component_at_ar_flsh"));
			if (bParam1)
			{
				func_716(Local_630[1 /*20*/], iLocal_373, joaat("component_at_ar_supp"));
			}
			break;
		
		case 3:
			func_717(Local_630[3 /*20*/], iLocal_375, -1, iParam2);
			func_716(Local_630[3 /*20*/], iLocal_375, iLocal_376);
			func_716(Local_630[3 /*20*/], iLocal_375, iLocal_378);
			func_716(Local_630[3 /*20*/], iLocal_375, iLocal_379);
			func_716(Local_630[3 /*20*/], iLocal_375, iLocal_380);
			if (bParam1)
			{
				func_716(Local_630[3 /*20*/], iLocal_375, iLocal_377);
			}
			break;
		
		case 4:
			func_717(Local_630[4 /*20*/], iLocal_374, -1, iParam2);
			break;
	}
}

void func_716(int iParam0, int iParam1, int iParam2)//Position - 0x722E0
{
	if (iParam2 != 0)
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, iParam2))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, iParam2);
		}
	}
}

void func_717(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x72306
{
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, 0);
		WEAPON::SET_PED_AMMO(iParam0, iParam1, iParam2);
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, iParam3, iParam3);
	}
}

void func_718(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)//Position - 0x7233E
{
	if (MISC::IS_BIT_SET(*iParam0, 0))
	{
		func_719(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15);
	}
}

void func_719(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16)//Position - 0x72376
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar16;
	
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	GlobalFunc_732(1);
	GlobalFunc_449(4, -1);
	GlobalFunc_7629();
	if (func_694(bParam16))
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_70, 255, 255, 255, 0, 0);
			}
		}
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			iParam0->f_284 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
			iParam0->f_285 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
			if (iParam0->f_286 != iParam0->f_284 || iParam0->f_287 != iParam0->f_285)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_284);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_285);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iParam0->f_286 = iParam0->f_284;
			iParam0->f_287 = iParam0->f_285;
		}
		else
		{
			GlobalFunc_612(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((SYSTEM::TO_FLOAT(iVar2) * 8f) * SYSTEM::TIMESTEP());
			fVar7 = ((SYSTEM::TO_FLOAT(iVar3) * 8f) * SYSTEM::TIMESTEP());
			if (iLocal_71 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "MOVE_CURSOR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
		if (iLocal_71 > 4)
		{
			if (PAD::_IS_USING_KEYBOARD_2(2))
			{
				iParam0->f_284 = PAD::GET_CONTROL_NORMAL(2, 239);
				iParam0->f_285 = PAD::GET_CONTROL_NORMAL(2, 240);
				if (MISC::IS_ORBIS_VERSION())
				{
					if (iParam0->f_286 != iParam0->f_284)
					{
						if (iParam0->f_284 < 0.49f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (iParam0->f_284 > 0.51f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				}
				iParam0->f_286 = iParam0->f_284;
				iParam0->f_287 = iParam0->f_285;
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				fVar8 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 1);
				fVar9 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 2);
				bVar10 = false;
				fLocal_58 = (fLocal_58 + SYSTEM::TIMESTEP());
				fLocal_65 = (fLocal_65 + fVar8);
				fLocal_66 = (fLocal_66 + fVar9);
				fLocal_67 = (fLocal_67 + 1f);
				if (fLocal_58 > 0.15f)
				{
					fLocal_58 = 0f;
					fLocal_65 = (fLocal_65 / fLocal_67);
					fLocal_66 = (fLocal_66 / fLocal_67);
					if (MISC::ABSF(fLocal_66) < 0.2f)
					{
						if (fLocal_65 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_65 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (MISC::ABSF(fLocal_65) < 0.2f)
					{
						if (fLocal_66 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_66 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (bVar10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_65 = 0f;
					fLocal_66 = 0f;
					fLocal_67 = 0f;
				}
			}
			GlobalFunc_255(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (MISC::ABSI(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_14))
						{
							if (iLocal_71 != 8)
							{
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_14, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 195) || PAD::IS_CONTROL_JUST_PRESSED(2, 196)) || PAD::IS_CONTROL_PRESSED(2, 195)) || PAD::IS_CONTROL_PRESSED(2, 196))
			{
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 32) || PAD::IS_CONTROL_JUST_PRESSED(2, 172))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 33) || PAD::IS_CONTROL_JUST_PRESSED(2, 173))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 34) || PAD::IS_CONTROL_JUST_PRESSED(2, 174))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 35) || PAD::IS_CONTROL_JUST_PRESSED(2, 175))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (bParam12)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
				uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_69);
				if (iVar0 == 6)
				{
					func_731(iParam0);
				}
			}
		}
		func_730();
	}
	if (iLocal_71 == 5 || iLocal_71 == 6)
	{
		if (iLocal_55)
		{
			func_729((iParam15 - (MISC::GET_GAME_TIMER() - iLocal_54)), &iLocal_51, &iLocal_52, &iLocal_53);
			if ((iLocal_51 >= 0 && iLocal_52 >= 0) && iLocal_53 >= 0)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_51), SYSTEM::TO_FLOAT(iLocal_52), SYSTEM::TO_FLOAT(iLocal_53), -1082130432, -1082130432);
			}
			else
			{
				iLocal_51 = 0;
				iLocal_52 = 0;
				iLocal_53 = 0;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_51), SYSTEM::TO_FLOAT(iLocal_52), SYSTEM::TO_FLOAT(iLocal_53), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_71 == 5)
	{
		if (GlobalFunc_588(&iLocal_72, (10000 / iParam4)))
		{
			if (iParam0->f_8 > 20f)
			{
				iParam0->f_8 = (iParam0->f_8 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_SPEED", iParam0->f_8, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_72 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_71 == 6)
	{
		if (GlobalFunc_588(&iLocal_72, (10000 / iParam4)))
		{
			if (iParam0->f_8 > 20f)
			{
				iParam0->f_8 = (iParam0->f_8 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 0f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 1f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 2f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 3f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 4f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 5f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 6f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 7f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
				iLocal_72 = MISC::GET_GAME_TIMER();
			}
		}
	}
	switch (iLocal_71)
	{
		case 0:
			if (!MISC::IS_BIT_SET(*iParam0, 29))
			{
				func_693(iParam0, iParam14);
			}
			func_738(1);
			GRAPHICS::_0x9B079E5221D984D3(1);
			iParam0->f_14 = AUDIO::GET_SOUND_ID();
			iLocal_145 = 0;
			iLocal_146 = 0;
			iParam0->f_17 = 0;
			iLocal_71++;
			break;
		
		case 1:
			iLocal_59[0] = -1;
			iLocal_59[1] = -1;
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), SYSTEM::TO_FLOAT(iParam2), -1082130432, -1082130432, -1082130432);
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			iParam0->f_6 = iParam1;
			iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
			MISC::CLEAR_BIT(iParam0, 1);
			fLocal_65 = 0f;
			fLocal_66 = 0f;
			fLocal_67 = 0f;
			iLocal_59[0] = AUDIO::GET_SOUND_ID();
			iLocal_59[1] = AUDIO::GET_SOUND_ID();
			GlobalFunc_702(1, 0, 1);
			if (iParam0->f_16)
			{
				iLocal_71 = 8;
			}
			else
			{
				iLocal_71++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_56 == 0)
				{
					if (!GlobalFunc_74("H_EXIT_PROMPT"))
					{
						if (!GlobalFunc_74("HACKOBJ1"))
						{
							GlobalFunc_1("HACKOBJ1");
							iLocal_56 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (PAD::_IS_USING_KEYBOARD_2(2))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
						uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
					uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_69);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (GlobalFunc_74("H_EXIT_PROMPT"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					iLocal_56 = 0;
					iLocal_71++;
				}
			}
			if (iLocal_74 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_727(0, "");
					}
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_69);
				if (iVar0 == 80)
				{
					if (iLocal_74 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
						func_727(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_71 == 3)
				{
					if (iLocal_56 == 0)
					{
						if (!GlobalFunc_74("HACKOBJ2"))
						{
							GlobalFunc_1("HACKOBJ2");
							iLocal_56 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
							uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
						uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_74 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_BACK");
							uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							if (iParam7 == 1)
							{
								if (GlobalFunc_74("HACKOBJ2"))
								{
									HUD::CLEAR_HELP(1);
								}
								GlobalFunc_1("H_EXIT_PROMPT");
								iLocal_56 = 0;
								iLocal_71 = (iLocal_71 - 1);
							}
						}
					}
				}
			}
			if (iLocal_74 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_727(0, "");
					}
				}
			}
			if (iLocal_74 == 0)
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_69);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_74 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
					func_727(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_56 = 0;
				iLocal_71++;
			}
			break;
		
		case 4:
			if (iLocal_59[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
				{
					AUDIO::STOP_SOUND(iLocal_59[1]);
					iLocal_59[1] = -1;
				}
			}
			if (iLocal_59[0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
				{
					AUDIO::STOP_SOUND(iLocal_59[0]);
					iLocal_59[0] = -1;
				}
			}
			if (iLocal_59[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
				{
					AUDIO::STOP_SOUND(iLocal_59[1]);
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_71 == 4)
				{
					if (iParam9 == 1)
					{
						if (!MISC::IS_BIT_SET(*iParam0, 5))
						{
							if (iLocal_56 == 0)
							{
								if (!GlobalFunc_74("HACKOBJ5"))
								{
									GlobalFunc_1("HACKOBJ5");
									iLocal_56 = 1;
								}
							}
						}
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 18))
					{
						if (iLocal_56 == 0)
						{
							if (!GlobalFunc_74("HACKOBJ3"))
							{
								GlobalFunc_1("HACKOBJ3");
								iLocal_56 = 1;
							}
						}
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 5))
					{
						if (iLocal_56 == 0)
						{
							if (!GlobalFunc_74("HACKOBJ5"))
							{
								GlobalFunc_1("HACKOBJ5");
								iLocal_56 = 1;
							}
						}
					}
					else if (iLocal_56 == 1)
					{
						if (GlobalFunc_74("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(1);
							iLocal_56 = 0;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_74 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
					{
						if (PAD::_IS_USING_KEYBOARD_2(2))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
								uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							}
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
							uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
				}
			}
			if (iLocal_74 == 0)
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_BACK");
						uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						if (iParam7 == 1)
						{
							if (GlobalFunc_74("HACKOBJ5") || GlobalFunc_74("HACKOBJ3"))
							{
								HUD::CLEAR_HELP(1);
							}
							iLocal_56 = 0;
							iLocal_71 = (iLocal_71 - 1);
						}
					}
				}
			}
			if (iLocal_74 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_727(0, "");
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_69);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_74 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
					func_727(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 1)
					{
						iLocal_72 = MISC::GET_GAME_TIMER();
						iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_SPEED", iParam0->f_8, -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_54 = MISC::GET_GAME_TIMER();
						iLocal_55 = 1;
						iLocal_56 = 0;
						iLocal_59[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_59[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_71++;
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 18))
					{
						iLocal_72 = MISC::GET_GAME_TIMER();
						iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_SPEED", iParam0->f_8, -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_54 = MISC::GET_GAME_TIMER();
						iLocal_55 = 1;
						iLocal_56 = 0;
						iLocal_59[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_59[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_71++;
					}
					else
					{
						if (iLocal_74 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_727(0, "");
								}
							}
						}
						if (iLocal_74 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && MISC::IS_BIT_SET(*iParam0, 9))
							{
								func_727(1, "TRYDL");
							}
							else
							{
								func_727(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_74 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_727(0, "");
							}
						}
					}
					if (iLocal_74 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && MISC::IS_BIT_SET(*iParam0, 9))
						{
							func_727(1, "TRYDL");
						}
						else
						{
							func_727(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (iParam8 == 0)
				{
					if (iParam9 == 1)
					{
						iLocal_72 = MISC::GET_GAME_TIMER();
						iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 0f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 1f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 2f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 3f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 4f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 5f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 6f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 7f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_54 = MISC::GET_GAME_TIMER();
						iLocal_55 = 1;
						iLocal_56 = 0;
						iLocal_59[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_726(iParam0);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(uLocal_70, "SET_ROULETTE_WORD", iParam0->f_13, 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_59[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_71 = 6;
					}
					else if ((!bParam11 || MISC::IS_BIT_SET(*iParam0, 18)) && !MISC::IS_BIT_SET(*iParam0, 9))
					{
						iLocal_72 = MISC::GET_GAME_TIMER();
						iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 0f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 1f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 2f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 3f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 4f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 5f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 6f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_COLUMN_SPEED", 7f, iParam0->f_8, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_54 = MISC::GET_GAME_TIMER();
						iLocal_55 = 1;
						iLocal_56 = 0;
						iLocal_59[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_726(iParam0);
						}
						if (GlobalFunc_74("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(1);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(uLocal_70, "SET_ROULETTE_WORD", iParam0->f_13, 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_59[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_71 = 6;
					}
					else
					{
						if (iLocal_74 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_727(0, "");
								}
							}
						}
						if (iLocal_74 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && MISC::IS_BIT_SET(*iParam0, 18))
							{
								func_727(1, "TRYDL");
							}
							else
							{
								func_727(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_74 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_727(0, "");
							}
						}
					}
					if (iLocal_74 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && MISC::IS_BIT_SET(*iParam0, 18))
						{
							func_727(1, "TRYDL");
						}
						else
						{
							func_727(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (MISC::IS_BIT_SET(*iParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (MISC::IS_BIT_SET(*iParam0, 18) && MISC::IS_BIT_SET(*iParam0, 9))
						{
							if (!MISC::IS_BIT_SET(*iParam0, 28))
							{
								MISC::SET_BIT(iParam0, 28);
								iLocal_71 = 8;
							}
						}
						else
						{
							if (iLocal_74 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_73) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
									{
										func_727(0, "");
									}
								}
							}
							if (iLocal_74 == 0)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
								if (MISC::IS_BIT_SET(*iParam0, 18))
								{
									func_727(1, "TRYBRUTE");
								}
								else
								{
									func_727(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_56 == 0)
				{
					GlobalFunc_159("H_USE_PC6", -1);
					iLocal_56 = 1;
				}
				else if (iLocal_57 == 1)
				{
					GlobalFunc_159("H_USE_PC7", -1);
					iLocal_57 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iParam0->f_6 = iParam1;
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_70, "CLOSE_APP");
						if (iLocal_59[1] != -1)
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
							{
								AUDIO::STOP_SOUND(iLocal_59[1]);
								iLocal_59[1] = -1;
							}
						}
						if (iLocal_59[0] != -1)
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
							{
								AUDIO::STOP_SOUND(iLocal_59[0]);
								iLocal_59[0] = -1;
							}
						}
						iLocal_71 = 4;
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
							uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
						uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_69);
				}
			}
			if (iVar0 == 85)
			{
				if (iParam0->f_6 > 1)
				{
					iParam0->f_6 = (iParam0->f_6 - 1);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_6), -1082130432, -1082130432, -1082130432, -1082130432);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
					{
						AUDIO::STOP_SOUND(iLocal_59[0]);
					}
					MISC::SET_BIT(iParam0, 25);
					iLocal_55 = 0;
					iLocal_57 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				iParam0->f_6 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_54 = MISC::GET_GAME_TIMER();
				iLocal_59[0] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_59[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				MISC::SET_BIT(iParam0, 25);
				iLocal_55 = 1;
			}
			if (iVar0 == 91)
			{
				iParam0->f_6 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_70, "CLOSE_APP");
				if (iLocal_59[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
					{
						AUDIO::STOP_SOUND(iLocal_59[0]);
						iLocal_59[0] = -1;
					}
				}
				MISC::SET_BIT(iParam0, 25);
				iLocal_71 = 4;
			}
			if (iLocal_55 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_54));
				if (iVar1 < 1)
				{
					MISC::SET_BIT(iParam0, 25);
					iParam0->f_6 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_54 = MISC::GET_GAME_TIMER();
					iLocal_55 = 0;
					iLocal_57 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_59[0] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
						{
							AUDIO::STOP_SOUND(iLocal_59[0]);
							iLocal_59[0] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_72 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 18);
				iLocal_55 = 0;
				iLocal_56 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_59[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
					{
						AUDIO::STOP_SOUND(iLocal_59[0]);
						iLocal_59[0] = -1;
					}
				}
				iLocal_71 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_56 == 0)
				{
					GlobalFunc_159("H_USE_PC8", -1);
					iLocal_56 = 1;
				}
				else if (iLocal_57 == 1)
				{
					GlobalFunc_159("H_USE_PC9", -1);
					iLocal_57 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iParam0->f_6 = iParam1;
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_70, "CLOSE_APP");
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[0]))
						{
							AUDIO::STOP_SOUND(iLocal_59[0]);
						}
						iLocal_71 = 4;
					}
				}
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
							uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_INPUT_EVENT_SELECT");
						uLocal_69 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_69))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_69);
				}
			}
			if (iVar0 == 86)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, 1);
			}
			if (MISC::IS_BIT_SET(*iParam0, 23))
			{
				if (GlobalFunc_588(&(iParam0->f_9), 500))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_70, "RESET_ROULETTE");
					MISC::CLEAR_BIT(iParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (iParam0->f_6 > 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_70, "STOP_ROULETTE");
					iParam0->f_9 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(iParam0, 23);
					MISC::SET_BIT(iParam0, 31);
					if (GlobalFunc_3() == 0)
					{
						iParam0->f_6 = (iParam0->f_6 - 1);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_6), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(iParam0, 25);
					MISC::SET_BIT(iParam0, 31);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					iParam0->f_6 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_54 = MISC::GET_GAME_TIMER();
					if (iLocal_59[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
						{
							AUDIO::STOP_SOUND(iLocal_59[1]);
							iLocal_59[1] = -1;
						}
					}
					if (GlobalFunc_3() == 0)
					{
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_55 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_54));
				if (iVar1 < 1)
				{
					iParam0->f_6 = iParam1;
					MISC::SET_BIT(iParam0, 25);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_54 = MISC::GET_GAME_TIMER();
					iLocal_55 = 0;
					iLocal_57 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					HUD::CLEAR_HELP(1);
					if (iLocal_59[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
						{
							AUDIO::STOP_SOUND(iLocal_59[1]);
							iLocal_59[1] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				iParam0->f_6 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_70, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				iParam0->f_8 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_54 = MISC::GET_GAME_TIMER();
				iLocal_59[1] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_59[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_55 = 1;
			}
			if (iVar0 == 89)
			{
				iParam0->f_6 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_70, "CLOSE_APP");
				if (iLocal_59[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
					{
						AUDIO::STOP_SOUND(iLocal_59[1]);
						iLocal_59[1] = -1;
					}
				}
				iLocal_71 = 4;
			}
			if (iVar0 == 86)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_72 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 9);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_59[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59[1]))
					{
						AUDIO::STOP_SOUND(iLocal_59[1]);
						iLocal_59[1] = -1;
					}
				}
				iLocal_71 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (MISC::IS_BIT_SET(*iParam0, 9) && MISC::IS_BIT_SET(*iParam0, 18))
				{
					if (iLocal_145 == 0)
					{
						if (!GlobalFunc_74("HACKOBJ7"))
						{
							GlobalFunc_1("HACKOBJ7");
							iLocal_145 = 1;
						}
					}
				}
				if (((GlobalFunc_74("H_USE_PC6") || GlobalFunc_74("H_USE_PC7")) || GlobalFunc_74("H_USE_PC8")) || GlobalFunc_74("H_USE_PC9"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if ((MISC::IS_BIT_SET(*iParam0, 9) && MISC::IS_BIT_SET(*iParam0, 18)) && (!bParam13 || (bParam13 && MISC::IS_BIT_SET(*iParam0, 28))))
			{
				if (GlobalFunc_74("HACKOBJ7"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!iLocal_146)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "unlocked_bleep", PLAYER::PLAYER_PED_ID(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_146 = 1;
				}
				if (GlobalFunc_588(&iLocal_72, 3000))
				{
					MISC::CLEAR_BIT(iParam0, 0);
					MISC::SET_BIT(iParam0, 12);
					GRAPHICS::_0x9B079E5221D984D3(0);
				}
			}
			else
			{
				if (((bParam13 && !MISC::IS_BIT_SET(*iParam0, 27)) && MISC::IS_BIT_SET(*iParam0, 9)) && MISC::IS_BIT_SET(*iParam0, 18))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "OPEN_DOWNLOAD");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(iParam0, 27);
				}
				if (GlobalFunc_588(&iLocal_72, 2000))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_70, "CLOSE_APP");
					iLocal_71 = 4;
				}
			}
			break;
		
		case 8:
			func_720(iParam0);
			break;
	}
}

void func_720(int iParam0)//Position - 0x74314
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0->f_17 > 0)
	{
		if (MISC::IS_BIT_SET(*iParam0, 22))
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_75, Local_75.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_96[0 /*4*/] == 1 && Local_96[1 /*4*/] == 1) && Local_96[2 /*4*/] == 1) && Local_96[3 /*4*/] == 1) && Local_96[4 /*4*/] == 1) && Local_96[5 /*4*/] == 1) && Local_96[6 /*4*/] == 1) && Local_96[7 /*4*/] == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (GlobalFunc_74("H1_HNG"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (GlobalFunc_74("H1_HNG_KM"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		MISC::SET_BIT(iParam0, 26);
	}
	else if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (!GlobalFunc_74("H1_HNG_KM"))
		{
			GlobalFunc_1("H1_HNG_KM");
		}
	}
	else if (!GlobalFunc_74("H1_HNG"))
	{
		GlobalFunc_1("H1_HNG");
	}
	switch (iParam0->f_17)
	{
		case 0:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("hackingNG", 0);
			MISC::CLEAR_BIT(iParam0, 22);
			func_725();
			iLocal_134 = MISC::GET_GAME_TIMER();
			Local_94 = 0;
			MISC::CLEAR_BIT(&iLocal_144, 0);
			MISC::CLEAR_BIT(&iLocal_144, 1);
			MISC::CLEAR_BIT(&iLocal_144, 2);
			MISC::CLEAR_BIT(&iLocal_144, 3);
			MISC::CLEAR_BIT(&iLocal_144, 4);
			MISC::CLEAR_BIT(&iLocal_144, 5);
			MISC::CLEAR_BIT(&iLocal_144, 6);
			MISC::CLEAR_BIT(&iLocal_144, 7);
			iParam0->f_17++;
			break;
		
		case 1:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				MISC::SET_BIT(iParam0, 22);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_70, "SET_CURSOR_VISIBILITY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iParam0->f_17++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_96[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_96[iVar0 /*4*/].f_2 < 1f)
					{
						Local_96[iVar0 /*4*/].f_2 = (Local_96[iVar0 /*4*/].f_2 + ((Local_96[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_133));
					}
					else
					{
						Local_96[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_96[iVar0 /*4*/].f_2 > 0f)
				{
					Local_96[iVar0 /*4*/].f_2 = (Local_96[iVar0 /*4*/].f_2 - ((Local_96[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_133));
				}
				else
				{
					Local_96[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_96[iVar0 /*4*/] == 0)
				{
					Local_77[iVar0 /*2*/].f_1 = GlobalFunc_5180(0.744f, 0.4f, Local_96[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_96[iVar0 /*4*/] == 0)
				{
					if (Local_94 == iVar0)
					{
						if (!MISC::IS_BIT_SET(iLocal_144, iVar0))
						{
							iLocal_135[iVar0] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_135[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							MISC::SET_BIT(&iLocal_144, iVar0);
						}
						else
						{
							if (Local_96[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_129 = (2f * (1f - Local_96[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_129 = (2f * Local_96[iVar0 /*4*/].f_2);
							}
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_135[iVar0], "PinMovementY", fLocal_129);
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_144, iVar0))
				{
					AUDIO::STOP_SOUND(iLocal_135[iVar0]);
					MISC::CLEAR_BIT(&iLocal_144, iVar0);
				}
				iVar0++;
			}
			if (func_722(Local_94))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				if (GlobalFunc_588(&iLocal_134, 300))
				{
					if (func_721(Local_94))
					{
						Local_96[Local_94 /*4*/] = 1;
						Local_77[Local_94 /*2*/].f_1 = 0.572f;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_94 != 7)
						{
							Local_94++;
						}
					}
					else
					{
						if (Local_94 != 0)
						{
							if (MISC::IS_BIT_SET(iLocal_144, Local_94))
							{
								AUDIO::STOP_SOUND(iLocal_135[Local_94]);
								MISC::CLEAR_BIT(&iLocal_144, Local_94);
							}
							Local_96[(Local_94 - 1) /*4*/] = 0;
							Local_94 = (Local_94 - 1);
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							GRAPHICS::DRAW_RECT(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_134 = MISC::GET_GAME_TIMER();
						PAD::SET_PAD_SHAKE(0, 100, 100);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_94.f_1 = 1;
					}
				}
				else
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_75, Local_75.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_134 = MISC::GET_GAME_TIMER();
					PAD::SET_PAD_SHAKE(0, 100, 100);
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (Local_94 == 0)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[0 /*2*/], Local_77[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[0 /*2*/], Local_77[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_94 == 1)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[1 /*2*/], Local_77[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[1 /*2*/], Local_77[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_94 == 2)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[2 /*2*/], Local_77[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[2 /*2*/], Local_77[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_94 == 3)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[3 /*2*/], Local_77[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[3 /*2*/], Local_77[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_94 == 4)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[4 /*2*/], Local_77[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[4 /*2*/], Local_77[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_94 == 5)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[5 /*2*/], Local_77[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[5 /*2*/], Local_77[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_94 == 6)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[6 /*2*/], Local_77[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[6 /*2*/], Local_77[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_94 == 7)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_77[7 /*2*/], Local_77[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_77[7 /*2*/], Local_77[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
			}
			break;
	}
}

int func_721(int iParam0)//Position - 0x74AAE
{
	if (Local_77[iParam0 /*2*/].f_1 >= fLocal_131 && Local_77[iParam0 /*2*/].f_1 <= fLocal_130)
	{
		return 1;
	}
	return 0;
}

int func_722(int iParam0)//Position - 0x74AD9
{
	if (Local_77[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}



void func_725()//Position - 0x74B36
{
	fLocal_130 = 0.6f;
	fLocal_131 = 0.53f;
	Local_96[0 /*4*/].f_1 = (0.02f * fLocal_132);
	Local_96[1 /*4*/].f_1 = (0.025f * fLocal_132);
	Local_96[2 /*4*/].f_1 = (0.03f * fLocal_132);
	Local_96[3 /*4*/].f_1 = (0.035f * fLocal_132);
	Local_96[4 /*4*/].f_1 = (0.04f * fLocal_132);
	Local_96[5 /*4*/].f_1 = (0.045f * fLocal_132);
	Local_96[6 /*4*/].f_1 = (0.048f * fLocal_132);
	Local_96[7 /*4*/].f_1 = (0.05f * fLocal_132);
	Local_96[0 /*4*/] = 0;
	Local_96[1 /*4*/] = 0;
	Local_96[2 /*4*/] = 0;
	Local_96[3 /*4*/] = 0;
	Local_96[4 /*4*/] = 0;
	Local_96[5 /*4*/] = 0;
	Local_96[6 /*4*/] = 0;
	Local_96[7 /*4*/] = 0;
	Local_75 = 0.5f;
	Local_75.f_1 = 0.5f;
	Local_77[0 /*2*/] = 0.35f;
	Local_77[0 /*2*/].f_1 = 0.4f;
	Local_77[1 /*2*/] = 0.39f;
	Local_77[1 /*2*/].f_1 = 0.4f;
	Local_77[2 /*2*/] = 0.43f;
	Local_77[2 /*2*/].f_1 = 0.4f;
	Local_77[3 /*2*/] = 0.47f;
	Local_77[3 /*2*/].f_1 = 0.4f;
	Local_77[4 /*2*/] = 0.51f;
	Local_77[4 /*2*/].f_1 = 0.74f;
	Local_77[5 /*2*/] = 0.55f;
	Local_77[5 /*2*/].f_1 = 0.74f;
	Local_77[6 /*2*/] = 0.59f;
	Local_77[6 /*2*/].f_1 = 0.74f;
	Local_77[7 /*2*/] = 0.63f;
	Local_77[7 /*2*/].f_1 = 0.74f;
}

void func_726(int iParam0)//Position - 0x74CB4
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iVar0 == 0)
	{
		iParam0->f_13 = "PASSWORD";
	}
	else if (iVar0 == 1)
	{
		iParam0->f_13 = "PETSNAME";
	}
	else if (iVar0 == 2)
	{
		iParam0->f_13 = "DYNAMITE";
	}
	else if (iVar0 == 3)
	{
		iParam0->f_13 = "BACKDOOR";
	}
	else if (iVar0 == 4)
	{
		iParam0->f_13 = "MORPHEUS";
	}
	else if (iVar0 == 5)
	{
		iParam0->f_13 = "CREAMPIE";
	}
	else if (iVar0 == 6)
	{
		iParam0->f_13 = "WORMSIGN";
	}
	else if (iVar0 == 7)
	{
		iParam0->f_13 = "UNLOCKED";
	}
	else if (iVar0 == 8)
	{
		iParam0->f_13 = "BLUEBOOK";
	}
	else if (iVar0 == 9)
	{
		iParam0->f_13 = "DECIPHER";
	}
	else if (iVar0 == 10)
	{
		iParam0->f_13 = "JUNKYARD";
	}
	else
	{
		iParam0->f_13 = "PASSWORD";
	}
}

void func_727(bool bParam0, char* sParam1)//Position - 0x74D97
{
	if (bParam0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_73 = MISC::GET_GAME_TIMER();
		iLocal_74 = 1;
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_70, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_74 = 0;
	}
}


void func_729(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x74E05
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_730()//Position - 0x74E42
{
	if (iLocal_71 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_731(int iParam0)//Position - 0x74E73
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	HUD::CLEAR_HELP(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::DESTROY_CAM(uLocal_68, 0);
	GlobalFunc_7632(0);
	GlobalFunc_731();
	MISC::SET_BIT(uParam0, 1);
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_47(iParam0, 1, 0);
	GlobalFunc_702(0, 1, 1);
}





int func_736(int iParam0)//Position - 0x75041
{
	int iVar0;
	
	iVar0 = 0;
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_stickybomb"), 0))
	{
		iVar0 = (iVar0 + WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_stickybomb")));
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_rpg"), 0))
	{
		iVar0 = (iVar0 + WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_rpg")));
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_grenade"), 0))
	{
		iVar0 = (iVar0 + WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_grenade")));
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_grenadelauncher"), 0))
	{
		iVar0 = (iVar0 + WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_grenadelauncher")));
	}
	return iVar0;
}


void func_738(bool bParam0)//Position - 0x750DA
{
	if (bParam0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", 0);
	}
	uLocal_70 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_INTERACTIVE("Hacking_PC");
}


int func_740(var uParam0, char* sParam1)//Position - 0x75225
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_925)
	{
		if (uParam0->f_925[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_925[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_925[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_925[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		AUDIO::PREPARE_ALARM(sParam1);
		uParam0->f_925[iVar1 /*5*/] = 1;
		uParam0->f_925[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_925[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}


void func_742()//Position - 0x75321
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	if (iLocal_6072 < 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
	}
	switch (iLocal_6072)
	{
		case 0:
			GlobalFunc_736(&Local_4444, joaat("gadget_parachute"), 31, 0);
			if (!iLocal_4226)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_6163 = -1;
					iLocal_6162 = 0;
					iLocal_4226 = 1;
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_Heli", 0))
			{
			}
			if (!iLocal_4222)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (iLocal_7108[5] == -1)
					{
						iLocal_7108[5] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(135.997f, -749.31f, -20.1f, 17.55f, 14.15f, 5.35f, GlobalFunc_723(-20.1f), 0, 7);
					}
					TASK::TASK_HELI_MISSION(Local_630[5 /*20*/], Local_2091[1 /*88*/], 0, 0, Local_395, 4, 0f, 0f, 182.1244f, SYSTEM::ROUND(Local_395.f_2), 0, -1f, 0);
					VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_2091[1 /*88*/], 0.2f);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_106(), Local_2091[1 /*88*/], 0);
					uLocal_3916[0] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3916[0], Local_2091[1 /*88*/], -1);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						fVar0 = 1000f;
					}
					else
					{
						fVar0 = 4f;
					}
					TASK::TASK_SYNCHRONIZED_SCENE(func_106(), uLocal_3916[0], &cLocal_155, &cLocal_161, fVar0, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_3916[0], 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					iLocal_4222 = 1;
				}
			}
			if ((iLocal_4222 && iLocal_4226) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("gadget_parachute")))
			{
				GlobalFunc_11046(3, "3. Skydive onto rooftop", 0, 0, 0, 1);
				GlobalFunc_7632(1);
				GlobalFunc_11257(func_106(), 9, GlobalFunc_4915(func_106(), 5, 0, 9), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				func_645(7, 0);
				func_491(&uLocal_627, Local_398, 0);
				HUD::CLEAR_HELP(1);
				PED::REMOVE_PED_FROM_GROUP(func_447());
				PED::REMOVE_PED_FROM_GROUP(Local_630[3 /*20*/]);
				PED::REMOVE_PED_FROM_GROUP(Local_630[5 /*20*/]);
				if (!WEAPON::HAS_PED_GOT_WEAPON(func_106(), joaat("gadget_parachute"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_106(), joaat("gadget_parachute"), 1, 1, 0);
				}
				else
				{
					PED::GET_PED_PARACHUTE_TINT_INDEX(func_106(), &iLocal_4230);
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(func_79(), joaat("gadget_parachute"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_79(), joaat("gadget_parachute"), 1, 1, 0);
				}
				else
				{
					PED::GET_PED_PARACHUTE_TINT_INDEX(func_79(), &uLocal_4231);
				}
				PED::SET_PED_PARACHUTE_TINT_INDEX(func_79(), 7);
				PED::SET_PED_PARACHUTE_TINT_INDEX(func_106(), 3);
				WEAPON::GIVE_WEAPON_TO_PED(Local_630[3 /*20*/], joaat("gadget_parachute"), 1, 1, 0);
				switch (GlobalFunc_697(iLocal_4196))
				{
					case 0:
						PED::SET_PED_PARACHUTE_TINT_INDEX(Local_630[3 /*20*/], 0);
						break;
					
					case 1:
						PED::SET_PED_PARACHUTE_TINT_INDEX(Local_630[3 /*20*/], 6);
						break;
					
					case 2:
						PED::SET_PED_PARACHUTE_TINT_INDEX(Local_630[3 /*20*/], 6);
						break;
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_630[5 /*20*/]);
				PED::SET_PED_INTO_VEHICLE(Local_630[5 /*20*/], Local_2091[1 /*88*/], -1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[1 /*88*/]);
				func_645(6, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				MISC::ENABLE_DISPATCH_SERVICE(5, 0);
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SKYDIVE_PREPARE"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_SKYDIVE_PREPARE");
				}
				func_535();
				iLocal_4234 = 0;
				iLocal_6165 = 0;
				iLocal_4206 = 0;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_6072++;
			}
			break;
		
		case 1:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 224))
			{
				iLocal_6165 = 1;
			}
			if (iLocal_6165 && WEAPON::HAS_PED_GOT_WEAPON(func_106(), joaat("gadget_parachute"), 0))
			{
				if (!GlobalFunc_5170())
				{
					GlobalFunc_4956();
				}
				else if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_NOISES", 8, 0, 0, 0))
				{
					func_645(5, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_106(), Local_2091[1 /*88*/], 0);
					uLocal_3916[0] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3916[0], Local_2091[1 /*88*/], -1);
					TASK::TASK_SYNCHRONIZED_SCENE(func_106(), uLocal_3916[0], &cLocal_155, &cLocal_167, 4f, -1000f, 133, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[0], 0);
					GlobalFunc_710(&Local_4444, iLocal_6157);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SKYDIVE_PREPARE"))
					{
						AUDIO::STOP_AUDIO_SCENE("AH_3B_SKYDIVE_PREPARE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SKYDIVE_FREEFALL"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_SKYDIVE_FREEFALL");
					}
					iLocal_6162 = 2;
					HUD::CLEAR_HELP(1);
					RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
					iLocal_6072++;
				}
			}
			else
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_1("A3B_JHELP");
				}
				switch (iLocal_4234)
				{
					case 0:
						if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 10000)
						{
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_ENCOURAGE", 8, 0, 0, 0))
								{
									iLocal_4234++;
								}
							}
						}
						break;
					
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 10000)
						{
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_WAIT2", 8, 0, 0, 0))
								{
									iLocal_4234 = 0;
								}
							}
						}
						break;
					}
			}
			break;
		
		case 2:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[0]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[0]) == 1f)
			{
				CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_CAMERA", 3000);
				TASK::TASK_SKY_DIVE(func_106(), 0);
				PED::FORCE_PED_MOTION_STATE(func_106(), -1161760501, 0, 1, 0);
				AUDIO::_0x70B8EC8FC108A634(0, 300362576);
				iLocal_6072++;
			}
			break;
		
		case 3:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(func_106()) && !CAM::_0x3044240D2E0FA842())
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_4251 = MISC::GET_GAME_TIMER() + 300;
				}
				else
				{
					iLocal_4251 = 0;
				}
				iLocal_6072++;
			}
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() > iLocal_4251)
			{
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				GlobalFunc_8380(0, 1, 1, 0);
				GlobalFunc_7632(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2091[1 /*88*/], 0);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[3]))
				{
					CAM::DESTROY_CAM(uLocal_3852[3], 0);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_3852[4]))
				{
					CAM::DESTROY_CAM(uLocal_3852[4], 0);
				}
				GlobalFunc_574(571, 0);
				GlobalFunc_5175(&Local_4444, &cLocal_155);
				GlobalFunc_164("A3B_BAIL", 7500, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_JUMPED");
				AUDIO::PREPARE_MUSIC_EVENT("AH3B_LANDED");
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-80.927f, 1065353216);
				}
				else
				{
					GlobalFunc_159("A3B_PARAHLP2", -1);
				}
				iLocal_4234 = 0;
				iLocal_6072++;
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
			}
			break;
		
		case 5:
			if (bLocal_6168)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_LANDED");
				GlobalFunc_4956();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SKYDIVE_PARACHUTE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_SKYDIVE_PARACHUTE");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FOCUS_ON_LANDING_ZONE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_FOCUS_ON_LANDING_ZONE");
				}
				RECORDING::_0x293220DA1B46CEBC(8f, 4f, 4);
				GlobalFunc_4948(&uLocal_8012, 0, 0);
				iLocal_6072++;
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_2091[1 /*88*/], 1) > 100f)
				{
					AUDIO::STOP_SOUND(iLocal_3907[4]);
				}
				switch (iLocal_4234)
				{
					case 0:
						if (GlobalFunc_697(iLocal_4196) != 0)
						{
							iLocal_4234 = -1;
						}
						else if (PED::GET_PED_PARACHUTE_STATE(Local_630[3 /*20*/]) == 2)
						{
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_CHUTE", 7, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_5170())
						{
							MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_CHUTE", 0)}, 6);
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 7, 0, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								iLocal_4234++;
							}
						}
						break;
					
					case 2:
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_CHUTE_FRK", 7, 0, 0, 0))
							{
								iLocal_4234 = -1;
							}
						}
						break;
				}
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_398, 1);
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (fVar1 < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE("AH_3B_MCS_2", 8);
						GlobalFunc_9024(&uLocal_5577, func_79(), "Franklin", 0);
						GlobalFunc_9024(&uLocal_5577, Local_630[3 /*20*/], "gunman_selection_1", 0);
						GlobalFunc_711(&uLocal_5577, "gunman_selection_1", 6, 1, 0, 0);
					}
				}
				else if (fVar1 > 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					GlobalFunc_705(&uLocal_5577);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FOCUS_ON_LANDING_ZONE"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_FOCUS_ON_LANDING_ZONE");
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FOCUS_ON_LANDING_ZONE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_FOCUS_ON_LANDING_ZONE");
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_LANDS", 8, 0, 0, 0))
				{
					iLocal_6072++;
				}
			}
			break;
		
		case 7:
			if (!GlobalFunc_111())
			{
				SYSTEM::SETTIMERB(0);
				iLocal_6072++;
			}
			break;
		
		case 8:
			if ((((((((((bLocal_6168 && !PED::IS_PED_CLIMBING(func_106())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_106(), 152.378f, -755.4801f, 261.6607f, 120.1506f, -743.1265f, 264.4149f, 27.75f, 0, 1, 0)) && iLocal_6169) && !PED::IS_PED_CLIMBING(func_79())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_79(), 140.7351f, -736.5676f, 261.6429f, 136.52f, -748.4271f, 267.6551f, 27.75f, 0, 1, 0)) && iLocal_6170) && !PED::IS_PED_CLIMBING(Local_630[3 /*20*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 140.7351f, -736.5676f, 261.6429f, 136.52f, -748.4271f, 267.6551f, 27.75f, 0, 1, 0)) && CUTSCENE::HAS_CUTSCENE_LOADED()) && SYSTEM::TIMERB() > 2000)
			{
				GlobalFunc_727(&Local_4444, &cLocal_341);
				GlobalFunc_719(&Local_4444, &cLocal_173);
				GlobalFunc_719(&Local_4444, "missheistfbi3bleadinoutah_3b_mcs_2");
				GlobalFunc_736(&Local_4444, joaat("weapon_stickybomb"), 31, 0);
				func_759();
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_630[1 /*20*/], 0);
				PED::SET_PED_LOD_MULTIPLIER(Local_630[1 /*20*/], 1f);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_630[3 /*20*/], 0);
				PED::SET_PED_LOD_MULTIPLIER(Local_630[3 /*20*/], 1f);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_79(), "Franklin", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[3 /*20*/], "gunman_selection_1", 0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(Local_630[1 /*20*/], 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(Local_630[3 /*20*/], 0, "DEFAULT_ACTION");
				TASK::TASK_CLEAR_LOOK_AT(Local_630[1 /*20*/]);
				TASK::TASK_CLEAR_LOOK_AT(Local_630[3 /*20*/]);
				MISC::CLEAR_AREA_OF_PROJECTILES(138.9f, -740.16f, 263.24f, 50f, 0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_6072++;
			}
			break;
		
		case 9:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA_OF_OBJECTS(136.09f, -749.35f, 265.61f, 40f, 0);
				GlobalFunc_703(&uLocal_627);
				iLocal_6072++;
			}
			break;
		
		case 10:
			if ((!ENTITY::DOES_ENTITY_EXIST(Local_3864[4 /*2*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_3864[2 /*2*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_3864[3 /*2*/]))
			{
				func_758(0, 1, 1);
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 14778)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ON_FLOOR");
				iLocal_4222 = 0;
				iLocal_4223 = 0;
				iLocal_4225 = 0;
				if (!bLocal_6470)
				{
					GlobalFunc_7621(195, 2, 0, 1, 0);
					bLocal_6470 = true;
				}
				iLocal_6072++;
			}
			break;
		
		case 11:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 5f, 4);
				iLocal_4226 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				iLocal_4223 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("gunman_selection_1", 0))
			{
				iLocal_4225 = 1;
			}
			if (iLocal_4223 && iLocal_4225)
			{
				if (!func_603(26))
				{
					func_645(26, 0);
				}
			}
			if (iLocal_4226 && !iLocal_4222)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(func_106(), joaat("gadget_parachute"));
				PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(func_106());
				func_715(0, 1, 0);
				func_534(&(Local_630[0 /*20*/]), 1);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[0]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[0], 0);
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_BREAK_SERVER_ROOM_DOOR"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_BREAK_SERVER_ROOM_DOOR");
				}
				GlobalFunc_8380(0, 1, 1, 0);
				iLocal_4222 = 1;
			}
			if ((iLocal_4222 && iLocal_4223) && iLocal_4225)
			{
				func_465(4);
			}
			break;
		
		case -1:
			ENTITY::SET_ENTITY_INVINCIBLE(Local_630[1 /*20*/], 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 0);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			break;
	}
	if (iLocal_4226)
	{
		switch (iLocal_6162)
		{
			case 0:
				if (iLocal_6163 == -1 || (MISC::GET_GAME_TIMER() - iLocal_6163) >= iLocal_6164)
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_3852[3]))
					{
						uLocal_3852[3] = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_DEBUG_NAME(uLocal_3852[3], "HELI_JUMP_PAN_1");
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_3852[3], Local_2091[1 /*88*/], 3.5822f, 5.3029f, -0.6527f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_3852[3], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3852[3], 20f);
					}
					if (!CAM::DOES_CAM_EXIST(uLocal_3852[4]))
					{
						uLocal_3852[4] = CAM::CREATE_CAMERA(26379945, 0);
						CAM::SET_CAM_DEBUG_NAME(uLocal_3852[4], "HELI_JUMP_PAN_2");
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_3852[4], Local_2091[1 /*88*/], 3.2847f, 5.4571f, -0.4892f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_3852[4], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3852[4], 20f);
					}
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3852[4], uLocal_3852[3], 7000, 1, 1);
					if (!CAM::IS_SCRIPT_GLOBAL_SHAKING())
					{
						CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 1f);
					}
					iLocal_6163 = MISC::GET_GAME_TIMER();
					iLocal_6164 = 7000;
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					iLocal_6162++;
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_6163) >= iLocal_6164)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3852[3], uLocal_3852[4], 7000, 1, 1);
					iLocal_6163 = MISC::GET_GAME_TIMER();
					iLocal_6164 = 7000;
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					iLocal_6162 = (iLocal_6162 - 1);
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[0]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[0]) >= 0.3f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_CAMERA", 0);
					CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 0, 0, 0);
					if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
					{
						CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
					}
					iLocal_6163 = MISC::GET_GAME_TIMER();
					iLocal_6162++;
				}
				break;
			
			case 3:
				CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_CAMERA", 0);
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_6162++;
				}
				break;
			
			case 4:
				if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					GlobalFunc_4948(&uLocal_8012, 0, 0);
					iLocal_6162++;
				}
				else if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						GlobalFunc_4948(&uLocal_8012, 0, 0);
						if (GlobalFunc_74("A3B_PARAHLP2"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					else
					{
						func_743(&uLocal_8012, Local_398, "", 1213015174, 0, 0, 1);
					}
				}
				break;
			
			case 5:
				if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						GlobalFunc_4948(&uLocal_8012, 0, 0);
						if (GlobalFunc_74("A3B_PARAHLP2"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					else
					{
						func_743(&uLocal_8012, Local_398, 0, 0, 1, 1, 1);
					}
				}
				break;
		}
		if ((CAM::DOES_CAM_EXIST(uLocal_3852[3]) && CAM::IS_CAM_ACTIVE(uLocal_3852[3])) || (CAM::DOES_CAM_EXIST(uLocal_3852[4]) && CAM::IS_CAM_ACTIVE(uLocal_3852[4])))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(func_106(), 1) };
	if ((iLocal_6072 > 0 && ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/])) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(Local_2091[1 /*88*/], 1), 1) >= 300f)
	{
		PED::DELETE_PED(&(Local_630[5 /*20*/]));
		VEHICLE::DELETE_VEHICLE(&(Local_2091[1 /*88*/]));
	}
}

void func_743(var uParam0, struct<3> Param1, char* sParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x763D3
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam4;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (GlobalFunc_74(iVar0))
	{
		GlobalFunc_163();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GlobalFunc_7635(uParam0, bParam6, bParam8, 0))
		{
			GlobalFunc_735(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (GlobalFunc_6696(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
					{
						if (!GlobalFunc_74(iVar0))
						{
							GlobalFunc_159(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								GlobalFunc_158(1);
							}
						}
					}
				}
			}
		}
		else if (GlobalFunc_6696(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
				{
					if (!GlobalFunc_74(iVar0))
					{
						GlobalFunc_159(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							GlobalFunc_158(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (GlobalFunc_74(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					GlobalFunc_4948(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					GlobalFunc_4948(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					GlobalFunc_4948(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					GlobalFunc_4948(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					GlobalFunc_4948(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				GlobalFunc_4948(uParam0, iVar0, 1);
			}
		}
		if (!GlobalFunc_7635(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !GlobalFunc_157(uParam0))
			{
				GlobalFunc_4952(uParam0);
			}
		}
	}
}















int func_758(bool bParam0, bool bParam1, bool bParam2)//Position - 0x76FD8
{
	int iVar0;
	
	iVar0 = 1;
	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[2 /*2*/]))
		{
			GlobalFunc_718(&Local_4444, joaat("prop_monitor_01b"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_monitor_01b")) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(151.31f, -765.49f, 258.05f, 1f, joaat("prop_monitor_01b"), 0))
			{
				Local_3864[2 /*2*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(151.31f, -765.49f, 258.05f, 1f, joaat("prop_monitor_01b"), 1, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3864[2 /*2*/], 1);
				if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
				{
					HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
				}
				if (!HUD::IS_NAMED_RENDERTARGET_LINKED(joaat("prop_monitor_01b")))
				{
					HUD::LINK_NAMED_RENDERTARGET(joaat("prop_monitor_01b"));
				}
				uLocal_6472 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
				uLocal_6471 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
				GlobalFunc_5174(&Local_4444, joaat("prop_monitor_01b"));
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[3 /*2*/]))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(150.2778f, -766.1879f, 257.1537f, 1f, joaat("v_corp_offchair"), 0))
			{
				Local_3864[3 /*2*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(150.2778f, -766.1879f, 257.1537f, 1f, joaat("v_corp_offchair"), 1, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3864[3 /*2*/], 1);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(150.5931f, -762.3801f, 258.3018f, 1f, iLocal_371, 0))
	{
		if (bParam0)
		{
			if (!iLocal_6469)
			{
				ENTITY::CREATE_MODEL_HIDE(150.5931f, -762.3801f, 258.3018f, 1f, iLocal_371, 1);
				iLocal_6469 = 1;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[4 /*2*/]))
		{
			Local_3864[4 /*2*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(150.5931f, -762.3801f, 258.3018f, 1f, iLocal_371, 1, 0, 1);
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_759()//Position - 0x7718A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 5;
	if (iLocal_375 == joaat("weapon_carbinerifle"))
	{
		if (iLocal_380 != 0)
		{
			iVar0 |= 8;
		}
		if (iLocal_379 != 0)
		{
			iVar0 |= 2;
		}
		if (iLocal_378 != 0)
		{
			iVar0 |= 16;
		}
	}
	else
	{
		if (iLocal_376 != 0)
		{
			iVar1 |= 1;
		}
		if (iLocal_377 != 0)
		{
			iVar1 |= 4;
		}
		if (iLocal_380 != 0)
		{
			iVar1 |= 8;
		}
		if (iLocal_379 != 0)
		{
			iVar1 |= 2;
		}
		if (iLocal_378 != 0)
		{
			iVar1 |= 16;
		}
		GlobalFunc_736(&Local_4444, iLocal_375, 31, iVar1);
	}
	GlobalFunc_736(&Local_4444, joaat("weapon_carbinerifle"), 31, iVar0);
}


void func_761()//Position - 0x7735A
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	struct<3> Var9;
	
	switch (iLocal_6072)
	{
		case 0:
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[0 /*88*/]));
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2091[1 /*88*/], 0);
			GlobalFunc_734(&Local_4444);
			func_535();
			TASK::TASK_CLEAR_LOOK_AT(func_79());
			TASK::TASK_CLEAR_LOOK_AT(Local_630[3 /*20*/]);
			TASK::TASK_CLEAR_LOOK_AT(Local_630[5 /*20*/]);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FLY_TO_JUMP_ZONE"))
			{
				AUDIO::START_AUDIO_SCENE("AH_3B_FLY_TO_JUMP_ZONE");
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			GlobalFunc_695(0);
			GlobalFunc_11046(2, "2. Fly heli to jump zone", 0, 0, 0, 1);
			iLocal_4234 = 0;
			iLocal_8009 = 0;
			iLocal_6072++;
			break;
		
		case 1:
			if (GlobalFunc_5171())
			{
				iLocal_6072++;
			}
			break;
		
		case 2:
			if (func_766(&Local_598, Local_392, 160f, 160f, 160f, 0, Local_630[1 /*20*/], Local_630[3 /*20*/], Local_630[5 /*20*/], Local_2091[1 /*88*/], "A3B_JUMP", "", "", "", "A3B_CREWLB", "CMN_GENGETINHE", "CMN_GENGETBCKHE", 0, 1, 1, -1))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FOCUS_ON_JUMP_ZONE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_FOCUS_ON_JUMP_ZONE");
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				GlobalFunc_4948(&uLocal_8012, 0, 0);
				GlobalFunc_5105();
				RECORDING::_0x293220DA1B46CEBC(10f, 0f, 4);
				iLocal_6072++;
			}
			else
			{
				func_765(&uLocal_8012, Local_392, 0, 0, 1, 1, 1);
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FOCUS_ON_JUMP_ZONE"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_FOCUS_ON_JUMP_ZONE");
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FOCUS_ON_JUMP_ZONE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_FOCUS_ON_JUMP_ZONE");
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_392, 1);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (fVar0 < 400f)
				{
					CUTSCENE::REQUEST_CUTSCENE("AH_3B_MCS_1", 8);
					GlobalFunc_9024(&uLocal_5577, func_79(), "Franklin", 0);
					GlobalFunc_9024(&uLocal_5577, Local_630[5 /*20*/], "Driver_selection", 0);
					GlobalFunc_9024(&uLocal_5577, Local_630[3 /*20*/], "gunman_selection_1", 0);
					GlobalFunc_711(&uLocal_5577, "gunman_selection_1", 6, 1, 0, 0);
				}
			}
			else if (fVar0 > 600f)
			{
				CUTSCENE::REMOVE_CUTSCENE();
				GlobalFunc_705(&uLocal_5577);
			}
			if (HUD::DOES_BLIP_EXIST(Local_598.f_5))
			{
				iVar4 = 75;
				if (fVar0 <= 500f)
				{
					iVar4 = GlobalFunc_254(SYSTEM::ROUND((IntToFloat(iVar4) * SYSTEM::POW((fVar0 / 500f), 2f))), 0, 75);
				}
				HUD::GET_HUD_COLOUR(12, &uVar5, &uVar6, &uVar7, &uVar8);
				GRAPHICS::DRAW_MARKER(6, Local_392, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_392, 0f, 0f, 0f, 50f, 50f, 50f, uVar5, uVar6, uVar7, iVar4, 0, 0, 2, 0, 0, 0, 0);
			}
			if (!iLocal_8009)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[1 /*88*/], 1))
				{
					if (GlobalFunc_5170())
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_630[5 /*20*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_630[5 /*20*/]))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 3000)
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_MMACW", 8, 0, 0, 0))
								{
								}
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 8000)
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_MDGI", 8, 0, 0, 0))
							{
							}
						}
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[1 /*88*/], 0)) && ENTITY::IS_ENTITY_IN_AIR(Local_2091[1 /*88*/]))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HELI_LIFT_OFF");
					StringCopy(&Local_4243, "", 24);
					StringCopy(&cLocal_4237, "", 24);
					iLocal_8009 = 1;
				}
			}
			else
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[0]) && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[1 /*88*/], 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_4243))
					{
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10626(&uLocal_431, &cLocal_147, &cLocal_4237, &Local_4243, 8, 0, 0))
							{
								StringCopy(&cLocal_4237, "", 24);
								StringCopy(&Local_4243, "", 24);
							}
						}
					}
					else
					{
						switch (iLocal_4234)
						{
							case 0:
								if (HUD::DOES_BLIP_EXIST(Local_598.f_5))
								{
									iLocal_4234++;
								}
								break;
							
							case 1:
								if (GlobalFunc_5170())
								{
									if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_JUMP", 8, 0, 0, 0))
									{
										iLocal_4234++;
									}
								}
								break;
							
							case 2:
								if ((MISC::GET_GAME_TIMER() - iLocal_4236) >= 5000)
								{
									if (GlobalFunc_5170())
									{
										if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_CHAT2", 8, 0, 0, 0))
										{
											iLocal_4234++;
										}
									}
								}
								break;
							
							case 3:
								if (GlobalFunc_5170())
								{
									MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_REPLY1", 0)}, 6);
									if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
									{
										StringCopy(&cLocal_4237, "", 24);
										iLocal_4234++;
									}
								}
								break;
							
							case 4:
								if (GlobalFunc_5170())
								{
									if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 172.1931f, -745.5575f, 60.82772f, 0) < 1438.83f)
									{
										if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_BURN", 8, 0, 0, 0))
										{
											iLocal_4234++;
										}
									}
									else
									{
										iLocal_4234 = 6;
									}
								}
								break;
							
							case 5:
								if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 1000)
								{
									iLocal_4234++;
								}
								break;
							
							case 6:
								if (GlobalFunc_5170())
								{
									if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_CHAT2_P2", 8, 0, 0, 0))
									{
										iLocal_4234++;
									}
								}
								break;
							
							case 7:
								if (GlobalFunc_5170())
								{
									MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_RESP1", 0)}, 6);
									if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
									{
										StringCopy(&cLocal_4237, "", 24);
										iLocal_4234++;
									}
								}
								break;
							
							case 8:
								if (GlobalFunc_5170())
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_4236) >= 10000)
									{
										if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_392, 0) > 200f)
										{
											StringCopy(&cLocal_4237, "AH_PIL_KPCL", 24);
											iLocal_4234++;
										}
										else
										{
											Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
											if (Var9.f_2 < (Local_392.f_2 - 200f))
											{
												StringCopy(&cLocal_4237, "AH_PIL_CLIMB", 24);
												iLocal_4234++;
											}
										}
									}
								}
								break;
							
							case 9:
								if (GlobalFunc_5170())
								{
									if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
									{
										StringCopy(&cLocal_4237, "", 24);
										iLocal_4234++;
									}
								}
								break;
							
							case 10:
								if (!GlobalFunc_111())
								{
									iLocal_4234 = 8;
								}
								break;
							}
					}
				}
				else if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					cLocal_4237 = { GlobalFunc_560() };
					Local_4243 = { GlobalFunc_514() };
					GlobalFunc_4956();
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::HAS_CUTSCENE_LOADED() && !GlobalFunc_111())
			{
				GlobalFunc_719(&Local_4444, &cLocal_155);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2091[1 /*88*/], "Michaels_Heli", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[1 /*20*/], "Franklin", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[3 /*20*/], "gunman_selection_1", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[5 /*20*/], "Driver_selection", 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HELI_CS");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_FLY_TO_JUMP_ZONE"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_FLY_TO_JUMP_ZONE");
				}
				AUDIO::_0x70B8EC8FC108A634(1, 300362576);
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3907[4], "BASEJUMPS_CHOPPER_WIND_WAIT", Local_2091[1 /*88*/], 0, 0, 0);
				GlobalFunc_4956();
				iLocal_4226 = 0;
				iLocal_4222 = 0;
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_2091[1 /*88*/], 1, 0, 0);
				func_465(3);
			}
			break;
		
		case -1:
			break;
	}
}




void func_765(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x77C78
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_743(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

bool func_766(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x77CAE
{
	return func_494(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, uParam9, uParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}


void func_768()//Position - 0x77D04
{
	struct<2> Var0;
	int iVar4;
	
	switch (iLocal_6072)
	{
		case 0:
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
			GlobalFunc_744(&Local_598, Local_2091[0 /*88*/]);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 0, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 0, 1, 0);
			GlobalFunc_10639(158, 1);
			GlobalFunc_10639(158, 1);
			func_6(17, 1, 0f, 0);
			GlobalFunc_11046(1, "1. Go to Helipad", 0, 0, 0, 1);
			func_535();
			GlobalFunc_173(&uLocal_431, 3, Local_630[2 /*20*/], "Lester", 0, 1);
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_4234 = 0;
			iLocal_6072++;
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH3B_INTb", 8, 0, 0, 0))
				{
					iLocal_6072++;
				}
			}
			break;
		
		case 2:
			if (func_447() == func_106())
			{
				StringCopy(&Var0, "CMN_MLEAVE", 16);
			}
			else
			{
				StringCopy(&Var0, "CMN_FLEAVE", 16);
			}
			if (func_834(&Local_598, Local_386, 6f, 6f, 2f, 1, func_447(), "A3B_HELI1", &Var0, 0, 1, 1, -1))
			{
				GlobalFunc_5105();
				GlobalFunc_11047(func_106(), 12);
				GlobalFunc_11047(func_79(), 5);
				GlobalFunc_10927(func_79(), 8, 1);
				RECORDING::_0x293220DA1B46CEBC(10f, 0f, 4);
				iLocal_6072++;
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(func_447(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_FACILITY"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_GET_TO_FACILITY");
					}
					switch (iLocal_4234)
					{
						case 0:
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_GO", 8, 0, 0, 0))
								{
									iLocal_4234++;
								}
							}
							break;
						
						case 1:
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_GOING", 8, 0, 0, 0))
								{
									iLocal_4234++;
								}
							}
							break;
						
						case 2:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2557.088f, -459.128f, 107.91f, 2601.63f, -596.8065f, 61.7281f, 104.3125f, 0, 1, 0))
							{
								GlobalFunc_5105();
								iLocal_4234++;
							}
							break;
						
						case 3:
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_RADin", 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
							break;
						
						case 4:
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_RADa", 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
							break;
						
						case 5:
							MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_RADb", 0)}, 6);
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
							break;
						
						case 6:
							MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_RADb", 0)}, 6);
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
							break;
						
						case 7:
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_RADc", 8, 0, 0, 0))
								{
									iLocal_4234++;
								}
							}
							break;
						
						case 8:
							MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_RADd", 0)}, 6);
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4234++;
								}
							}
							break;
						
						case 9:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_386, 1) < 30.5f)
							{
								if (GlobalFunc_5170())
								{
									if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_ARR_F", 8, 0, 0, 0))
									{
										iLocal_4234++;
									}
								}
							}
							break;
					}
					if (iLocal_4234 > 0)
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (iLocal_4234 > 0 && iLocal_4234 <= 2)
				{
					if (GlobalFunc_111() && !GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
				if (!bLocal_4233)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_386, 0) < 500f)
					{
						GlobalFunc_718(&Local_4444, iLocal_359);
						GlobalFunc_718(&Local_4444, iLocal_365);
						GlobalFunc_718(&Local_4444, iLocal_366);
						GlobalFunc_718(&Local_4444, iLocal_369);
						GlobalFunc_718(&Local_4444, joaat("s_m_m_security_01"));
						GlobalFunc_719(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@base");
						GlobalFunc_719(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@idle_a");
						GlobalFunc_719(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@idle_b");
						if ((((STREAMING::HAS_MODEL_LOADED(iLocal_359) && STREAMING::HAS_MODEL_LOADED(iLocal_365)) && STREAMING::HAS_MODEL_LOADED(iLocal_366)) && STREAMING::HAS_MODEL_LOADED(iLocal_369)) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]))
							{
								Local_2091[1 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_359, Local_389, 116.221f, 1, 1);
								GlobalFunc_743(Local_2091[1 /*88*/], 0);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[1 /*88*/], 0);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2091[1 /*88*/]);
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_2091[1 /*88*/], 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2091[1 /*88*/], 0);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2091[1 /*88*/], 10);
								iLocal_4202 = 1;
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/]))
							{
								func_667(&(Local_630[5 /*20*/]), iLocal_369, 2514.492f, -315.0782f, 91.9927f, 96.119f, "CREA_PILOT", iLocal_623, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
								PED::SET_PED_COMPONENT_VARIATION(Local_630[5 /*20*/], 9, 0, 0, 0);
								GlobalFunc_5174(&Local_4444, iLocal_369);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[5 /*20*/], 1);
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_630[5 /*20*/], 1);
								iLocal_4201 = 1;
								iLocal_4206 = 1;
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
							{
								if (func_826(&(Local_630[3 /*20*/]), 3, 2510.989f, -319.4904f, 91.9927f, 46.8987f, 8, 40, 0, 1, 0, 0))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_630[3 /*20*/], 2, 1, 0, 0);
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_630[3 /*20*/], 1);
									iLocal_4205 = 1;
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_2091[17 /*88*/]))
							{
								Local_2091[17 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_366, 2481.19f, -317.24f, 93.01f, 299.55f, 1, 1);
								GlobalFunc_743(Local_2091[17 /*88*/], 3);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[17 /*88*/], 0);
								VEHICLE::SET_VEHICLE_LIVERY(Local_2091[17 /*88*/], 0);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2091[17 /*88*/]);
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[17 /*88*/], 1, 0);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[17 /*88*/], 3);
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_2091[17 /*88*/], 1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
							{
								Local_2091[16 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_365, 2482.57f, -324.4f, 92.81f, 323.19f, 1, 1);
								GlobalFunc_743(Local_2091[16 /*88*/], 1);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[16 /*88*/], 2);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2091[16 /*88*/]);
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[16 /*88*/], 1, 0);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[16 /*88*/], 3);
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_2091[16 /*88*/], 1);
								iLocal_4203 = 1;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_2091[17 /*88*/]))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/]))
								{
									if (func_806(&(Local_630[6 /*20*/]), 2, &(Local_2091[17 /*88*/]), -1, 8, 40, 0, 1, 0, 0))
									{
										PED::SET_PED_COMPONENT_VARIATION(Local_630[6 /*20*/], 2, 1, 0, 0);
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
								{
									if (func_806(&(Local_630[4 /*20*/]), 4, &(Local_2091[16 /*88*/]), -1, 8, 40, 0, 1, 0, 0))
									{
										PED::SET_PED_COMPONENT_VARIATION(Local_630[4 /*20*/], 2, 1, 0, 0);
										iLocal_4204 = 0;
									}
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_630[7 /*20*/]))
							{
								Local_630[7 /*20*/] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 2560.93f, -601.21f, 63.77f, 0f, 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[7 /*20*/], 5, 1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_630[8 /*20*/]))
							{
								Local_630[8 /*20*/] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 2575.16f, -290f, 92.08f, 0f, 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[8 /*20*/], 5, 1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_630[9 /*20*/]))
							{
								Local_630[9 /*20*/] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 2492.97f, -309.24f, 91.99f, 0f, 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[9 /*20*/], 5, 1);
							}
							if (((((((((ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]) && ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/])) && ENTITY::DOES_ENTITY_EXIST(Local_2091[17 /*88*/])) && ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_630[7 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_630[8 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_630[9 /*20*/]))
							{
								func_535();
								bLocal_4233 = true;
							}
						}
					}
				}
				else if (bLocal_4233)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_386, 0) > 550f)
					{
						GlobalFunc_5174(&Local_4444, iLocal_359);
						GlobalFunc_5174(&Local_4444, iLocal_365);
						GlobalFunc_5174(&Local_4444, iLocal_366);
						GlobalFunc_5174(&Local_4444, iLocal_369);
						GlobalFunc_5175(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@base");
						GlobalFunc_5175(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@idle_a");
						GlobalFunc_5175(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@idle_b");
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/]))
						{
							PED::DELETE_PED(&(Local_630[5 /*20*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]))
						{
							PED::DELETE_PED(&(Local_630[3 /*20*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/]))
						{
							PED::DELETE_PED(&(Local_630[6 /*20*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
						{
							PED::DELETE_PED(&(Local_630[4 /*20*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[7 /*20*/]))
						{
							PED::DELETE_PED(&(Local_630[7 /*20*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[8 /*20*/]))
						{
							PED::DELETE_PED(&(Local_630[8 /*20*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[9 /*20*/]))
						{
							PED::DELETE_PED(&(Local_630[9 /*20*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_2091[1 /*88*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2091[17 /*88*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_2091[17 /*88*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_2091[16 /*88*/]));
						}
						bLocal_4233 = false;
					}
					else if ((STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_leaning@male@wall@back@foot_up@base") && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_leaning@male@wall@back@foot_up@idle_b"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/]) && !PED::IS_PED_INJURED(Local_630[5 /*20*/]))
						{
							if (GlobalFunc_156(Local_630[5 /*20*/], PLAYER::PLAYER_PED_ID(), 1) < 20f)
							{
								if (!GlobalFunc_709(Local_630[5 /*20*/], 150319005, 1))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_630[5 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
							}
							else if (GlobalFunc_709(Local_630[5 /*20*/], 150319005, 1))
							{
								TASK::TASK_CLEAR_LOOK_AT(Local_630[5 /*20*/]);
							}
							switch (Local_630[5 /*20*/].f_4)
							{
								case 0:
									TASK::TASK_START_SCENARIO_AT_POSITION(Local_630[5 /*20*/], "WORLD_HUMAN_GUARD_STAND", 2514.492f, -315.0782f, 91.9927f, 96.119f, -1, 0, 1);
									Local_630[5 /*20*/].f_4++;
									break;
								
								case 1:
									if (!GlobalFunc_709(Local_630[5 /*20*/], -1098463898, 1))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_630[5 /*20*/], PLAYER::PLAYER_PED_ID(), 5000);
										Local_630[5 /*20*/].f_4++;
									}
									break;
								
								case 2:
									if (!GlobalFunc_709(Local_630[5 /*20*/], -875674219, 1) && !GlobalFunc_709(Local_630[5 /*20*/], 713668775, 1))
									{
										if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[5 /*20*/], 1), 2514.492f, -315.0782f, 91.9927f, 1f))
										{
											Local_630[5 /*20*/].f_4++;
										}
										else
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[5 /*20*/], 2514.492f, -315.0782f, 91.9927f, 1f, 20000, 0.2f, 0, 41.9451f);
										}
									}
									break;
								
								case 3:
									if (ENTITY::IS_ENTITY_OCCLUDED(Local_630[5 /*20*/]) && !GlobalFunc_742(2514.492f, -315.0782f, 91.9927f, 2f, 100f))
									{
										Local_630[5 /*20*/].f_4 = 0;
									}
									break;
								}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
						{
							if (GlobalFunc_156(Local_630[3 /*20*/], PLAYER::PLAYER_PED_ID(), 1) < 20f)
							{
								if (!GlobalFunc_709(Local_630[3 /*20*/], 150319005, 1))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_630[3 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
							}
							else if (GlobalFunc_709(Local_630[3 /*20*/], 150319005, 1))
							{
								TASK::TASK_CLEAR_LOOK_AT(Local_630[3 /*20*/]);
							}
							switch (Local_630[3 /*20*/].f_4)
							{
								case 0:
									func_468(1);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@base", "base", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, 2000, 1025, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, -1, 1024, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@base", "base", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, 1000, 1025, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_c", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, -1, 1024, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@base", "base", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, 3000, 1025, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@idle_b", "idle_d", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, -1, 1024, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@base", "base", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, 2000, 1025, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_c", 2511.3f, -319.2517f, 91.9927f, 0f, 0f, 41.9451f, 8f, -8f, -1, 1024, 0, 2, 0);
									TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
									func_466(Local_630[3 /*20*/], 1);
									Local_630[3 /*20*/].f_4++;
									break;
								
								case 1:
									if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_630[3 /*20*/], PLAYER::PLAYER_PED_ID(), 5000);
										Local_630[3 /*20*/].f_4++;
									}
									break;
								
								case 2:
									if (!GlobalFunc_709(Local_630[3 /*20*/], -875674219, 1) && !GlobalFunc_709(Local_630[3 /*20*/], 713668775, 1))
									{
										if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 2511.3f, -319.2517f, 91.9927f, 1f))
										{
											Local_630[3 /*20*/].f_4++;
										}
										else
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[3 /*20*/], 2511.3f, -319.2517f, 91.9927f, 1f, 20000, 0.2f, 0, 41.9451f);
										}
									}
									break;
								
								case 3:
									if (ENTITY::IS_ENTITY_OCCLUDED(Local_630[3 /*20*/]) && !GlobalFunc_742(2511.3f, -319.2517f, 91.9927f, 2f, 100f))
									{
										Local_630[3 /*20*/].f_4 = 0;
									}
									break;
								}
							}
						}
				}
				if (bLocal_4233)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[7 /*20*/]) && !PED::IS_PED_INJURED(Local_630[7 /*20*/]))
					{
						if (Local_630[7 /*20*/].f_4 == 0)
						{
							if (!GlobalFunc_709(Local_630[7 /*20*/], 1647992574, 1))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2560.93f, -601.21f, 63.77f, 1f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_630[7 /*20*/], 2560.93f, -601.21f, 63.77f, 1f, -1);
									Local_630[7 /*20*/].f_4++;
								}
							}
						}
						else if (Local_630[7 /*20*/].f_4 == 1)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_630[7 /*20*/], 1) < 10f)
							{
								GlobalFunc_5122(Local_630[7 /*20*/], "GENERIC_HI", 3);
								Local_630[7 /*20*/].f_4++;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[8 /*20*/]) && !PED::IS_PED_INJURED(Local_630[8 /*20*/]))
					{
						if (Local_630[8 /*20*/].f_4 == 0)
						{
							if (!GlobalFunc_709(Local_630[8 /*20*/], 1647992574, 1))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2575.16f, -290f, 92.08f, 1f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_630[8 /*20*/], 2575.16f, -290f, 92.08f, 1f, -1);
									Local_630[8 /*20*/].f_4++;
								}
							}
						}
						else if (Local_630[8 /*20*/].f_4 == 1)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_630[8 /*20*/], 1) < 10f)
							{
								GlobalFunc_5122(Local_630[8 /*20*/], "GENERIC_HI", 3);
								Local_630[8 /*20*/].f_4++;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[9 /*20*/]) && !PED::IS_PED_INJURED(Local_630[9 /*20*/]))
					{
						if (Local_630[9 /*20*/].f_4 == 0)
						{
							if (!GlobalFunc_709(Local_630[9 /*20*/], 1647992574, 1))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2492.97f, -309.24f, 91.99f, 1f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_630[9 /*20*/], 2492.97f, -309.24f, 91.99f, 1f, -1);
									Local_630[9 /*20*/].f_4++;
								}
							}
						}
						else if (Local_630[9 /*20*/].f_4 == 1)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_630[9 /*20*/], 1) < 10f)
							{
								GlobalFunc_5122(Local_630[9 /*20*/], "GENERIC_HI", 3);
								Local_630[9 /*20*/].f_4++;
							}
						}
					}
				}
				else
				{
					Local_630[7 /*20*/].f_4 = 0;
					Local_630[8 /*20*/].f_4 = 0;
					Local_630[9 /*20*/].f_4 = 0;
				}
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 7f, 1, 0f, 0, 1) || ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					GlobalFunc_4956();
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					TASK::TASK_LEAVE_ANY_VEHICLE(func_447(), 500, 0);
					iLocal_6072++;
				}
			}
			else
			{
				GlobalFunc_4956();
				iLocal_6072++;
			}
			if (iLocal_6072 == 4)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			break;
		
		case 4:
			if (!PED::IS_PED_IN_ANY_VEHICLE(func_106(), 1) && !PED::IS_PED_IN_ANY_VEHICLE(func_79(), 1))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
				else if (GlobalFunc_5170())
				{
					if (CLOCK::GET_CLOCK_HOURS() > 4 && CLOCK::GET_CLOCK_HOURS() < 23)
					{
						iLocal_4251 = -1;
						StringCopy(&cLocal_4237, "AH_MMGPT", 24);
					}
					else
					{
						iLocal_4251 = MISC::GET_GAME_TIMER() + 1000;
						StringCopy(&cLocal_4237, "AH_MMGPW", 24);
					}
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						uLocal_3852[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2504.2f, -290.1f, 96.9f, 9.2f, 0f, -169.6f, 47.6f, 1, 2);
						CAM::SHAKE_CAM(uLocal_3852[1], "HAND_SHAKE", 0.3f);
						uLocal_3852[2] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2503.9f, -288.8f, 112.8f, -0.2f, 0f, -169.6f, 47.6f, 0, 2);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3852[2], uLocal_3852[1], 8000, 1, 1);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_GET_TO_FACILITY"))
						{
							AUDIO::STOP_AUDIO_SCENE("AH_3B_GET_TO_FACILITY");
						}
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(404057594, 1f, 1, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1417472813, -1f, 1, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(404057594, 1, 1, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1417472813, 1, 1, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_630[3 /*20*/]);
						ENTITY::SET_ENTITY_COORDS(Local_630[3 /*20*/], 2511.324f, -317.7578f, 91.9929f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_630[3 /*20*/], 234.4961f);
						TASK::TASK_GO_STRAIGHT_TO_COORD(Local_630[3 /*20*/], 2520.5f, -327.0908f, 91.998f, 1f, 20000, 1193033728, 1056964608);
						PED::FORCE_PED_MOTION_STATE(Local_630[3 /*20*/], -668482597, 0, 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_630[5 /*20*/]);
						ENTITY::SET_ENTITY_COORDS(Local_630[5 /*20*/], 2511.934f, -315.1837f, 91.9929f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_630[5 /*20*/], 162.0331f);
						TASK::TASK_GO_STRAIGHT_TO_COORD(Local_630[5 /*20*/], 2521.02f, -325.2653f, 91.998f, 1f, 20000, 1193033728, 1056964608);
						PED::FORCE_PED_MOTION_STATE(Local_630[5 /*20*/], -668482597, 0, 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_106());
						ENTITY::SET_ENTITY_COORDS(func_106(), 2509.384f, -314.5894f, 91.9926f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(func_106(), 229.0784f);
						TASK::TASK_GO_STRAIGHT_TO_COORD(func_106(), 2516.558f, -322.3859f, 91.9979f, 1f, 20000, 1193033728, 1056964608);
						PED::FORCE_PED_MOTION_STATE(func_106(), -668482597, 0, 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_79());
						ENTITY::SET_ENTITY_COORDS(func_79(), 2510.815f, -316.4493f, 91.9926f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(func_79(), 227.7634f);
						TASK::TASK_GO_STRAIGHT_TO_COORD(func_79(), 2516.558f, -322.3859f, 91.9979f, 1f, 20000, 1193033728, 1056964608);
						PED::FORCE_PED_MOTION_STATE(func_79(), -668482597, 0, 0, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(2504.07f, -313.17f, 91.99f, 26f, 0);
						FIRE::STOP_FIRE_IN_RANGE(2504.07f, -313.17f, 91.99f, 26f);
						ENTITY::SET_ENTITY_INVINCIBLE(func_106(), 1);
						ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_630[5 /*20*/], 1);
						GlobalFunc_9807(2507.712f, -315.1311f, 91.99286f, 2511.952f, -319.1571f, 98.18602f, 12.875f, 2503.375f, -317.5417f, 91.9929f, 261.3922f, 1, 1, 1, 0, 0);
						MISC::CLEAR_AREA(2511.9f, -319.02f, 92.12f, 7.5f, 1, 0, 0, 0);
						GlobalFunc_5184(&Local_4444, 2505.274f, -338.8715f, 116.6902f, 150f, 0);
						iLocal_6072++;
					}
				}
			}
			break;
		
		case 5:
			if (((!CAM::IS_CAM_INTERPOLATING(uLocal_3852[1]) && !CAM::IS_CAM_INTERPOLATING(uLocal_3852[2])) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_106())) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_79()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2510.31f, -336.4757f, 114.69f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_COORDS(func_447(), 2511.16f, -336.9917f, 114.69f, 1, 0, 0, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(404057594, 0f, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1417472813, 0f, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(404057594, 1, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1417472813, 1, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1986432421, 1f, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986432421, 1, 1, 1);
				PED::SET_PED_PROP_INDEX(Local_630[5 /*20*/], 0, 0, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_630[3 /*20*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_630[4 /*20*/], 2, 0, 0, 0);
				GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_11257(func_79(), 12, 5, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_106());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_79());
				iLocal_6072++;
			}
			break;
		
		case 6:
			if (iLocal_4251 == -1)
			{
				Local_4183.f_1 = GlobalFunc_7719();
				if (func_772(70, &Local_4183, 1, 1, 0, 1, 0))
				{
					iVar4 = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_4251)
			{
				iVar4 = 1;
			}
			if ((((iVar4 && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_106())) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_79())) && GlobalFunc_5170()) && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				if (GlobalFunc_8315() != 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_4252 = MISC::GET_GAME_TIMER() + 300;
				iLocal_6072++;
			}
			break;
		
		case 7:
			if (MISC::GET_GAME_TIMER() > iLocal_4252)
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PCGI", 8, 0, 0, 0))
				{
					if (GlobalFunc_8315() != 0)
					{
						func_698(0, 1, 1, 0, 0, 0);
						GlobalFunc_9019(&iLocal_6078, 0);
						func_400(&iLocal_6078, 1, 0, 1);
					}
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2091[1 /*88*/], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2091[1 /*88*/], 1);
					ENTITY::SET_ENTITY_COORDS(func_106(), 2506.853f, -337.4291f, 115.29f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_106(), 135.1543f);
					PED::FORCE_PED_MOTION_STATE(func_106(), -668482597, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_106(), 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0, 1, 0);
					ENTITY::SET_ENTITY_COORDS(func_79(), 2505.147f, -340.5014f, 117.0245f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_79(), 266.4603f);
					TASK::TASK_ENTER_VEHICLE(func_79(), Local_2091[1 /*88*/], 20000, 2, 1f, 1, 0);
					PED::FORCE_PED_MOTION_STATE(func_79(), -668482597, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_79(), 0, 0);
					PED::SET_PED_INTO_VEHICLE(Local_630[5 /*20*/], Local_2091[1 /*88*/], 0);
					PED::SET_PED_INTO_VEHICLE(Local_630[3 /*20*/], Local_2091[1 /*88*/], 1);
					TASK::TASK_LOOK_AT_ENTITY(Local_630[3 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_630[5 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_630[1 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/]))
					{
						PED::DELETE_PED(&(Local_630[6 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]))
					{
						PED::DELETE_PED(&(Local_630[4 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[17 /*88*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_2091[17 /*88*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_2091[16 /*88*/]));
					}
					ENTITY::SET_ENTITY_INVINCIBLE(func_106(), 0);
					ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_630[5 /*20*/], 0);
					GlobalFunc_5174(&Local_4444, iLocal_359);
					GlobalFunc_5174(&Local_4444, iLocal_365);
					GlobalFunc_5174(&Local_4444, iLocal_366);
					GlobalFunc_5174(&Local_4444, iLocal_369);
					GlobalFunc_5175(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@base");
					GlobalFunc_5175(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@idle_a");
					GlobalFunc_5175(&Local_4444, "amb@world_human_leaning@male@wall@back@foot_up@idle_b");
					GlobalFunc_5181(&Local_4444);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(164.9536f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-27.9584f, 1065353216);
					}
					func_645(2, 0);
					if (iLocal_4251 == -1)
					{
						GlobalFunc_9025(&Local_4183, 0, 0, 0, 0, 1, 0, 1);
					}
					else
					{
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					}
					CAM::DESTROY_CAM(uLocal_3852[1], 0);
					CAM::DESTROY_CAM(uLocal_3852[2], 0);
					iLocal_4251 = MISC::GET_GAME_TIMER();
					iLocal_6072++;
				}
			}
			break;
		
		case 8:
			if ((MISC::GET_GAME_TIMER() - iLocal_4251) > 1000)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986432421, 0, 1, 1);
				func_6(17, 1, 0f, 500);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				func_465(2);
			}
			break;
		
		case -1:
			GlobalFunc_703(&uLocal_627);
			break;
	}
	if (iLocal_6072 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[2 /*20*/]))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(func_106()) != iLocal_6156 && INTERIOR::GET_INTERIOR_FROM_ENTITY(func_79()) != iLocal_6156)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 1, 1, 0);
				}
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 1, 1, 0);
				}
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) == 1 && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) == 1)
				{
					if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-826072862)) < 0.05f && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(763780711)) < 0.05f)
					{
						PED::DELETE_PED(&(Local_630[2 /*20*/]));
						OBJECT::DELETE_OBJECT(&(Local_3864[1 /*2*/]));
						OBJECT::DELETE_OBJECT(&(Local_3864[0 /*2*/]));
						GlobalFunc_5175(&Local_4444, "missheistfbi3bleadinoutah_3b_int");
					}
				}
			}
			else
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) != 0)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 0, 1, 0);
				}
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) != 0)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 0, 1, 0);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[2 /*20*/]) && !PED::IS_PED_INJURED(Local_630[2 /*20*/]))
		{
			if ((!GlobalFunc_709(Local_630[2 /*20*/], -2017877118, 1) || PED::IS_PED_RAGDOLL(Local_630[2 /*20*/])) || PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_630[2 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_3864[1 /*2*/]))
				{
					ENTITY::DETACH_ENTITY(Local_3864[1 /*2*/], 1, 1);
				}
				if (ENTITY::IS_ENTITY_ATTACHED(Local_3864[0 /*2*/]))
				{
					ENTITY::DETACH_ENTITY(Local_3864[0 /*2*/], 1, 1);
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED(Local_3864[1 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_3864[0 /*2*/]))
			{
				if (!GlobalFunc_709(Local_630[2 /*20*/], -875674219, 1))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_630[2 /*20*/], PLAYER::PLAYER_PED_ID(), -1);
					TASK::TASK_LOOK_AT_ENTITY(Local_630[2 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			if (iLocal_6072 > 1)
			{
				if (((!PED::IS_PED_RAGDOLL(Local_630[2 /*20*/]) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_630[2 /*20*/])) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_6156) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_630[2 /*20*/], 1) < 7.5f)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 20000)
					{
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_BACK", 8, 0, 0, 0))
							{
							}
						}
					}
				}
			}
		}
	}
}




bool func_772(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x79D3D
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_773(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_773(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x79D6B
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
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
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			if (func_776(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
		else if (func_776(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
					func_776(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
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



int func_776(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x7A598
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
			func_783((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
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
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, fParam8);
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







void func_783(float fParam0)//Position - 0x7A8D3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (GlobalFunc_226(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_5)))
		{
			func_784(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (GlobalFunc_226(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iVar1 /*3*/])))
		{
			func_784(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_784(var uParam0, float fParam1)//Position - 0x7A964
{
	if (GlobalFunc_226(uParam0))
	{
		GlobalFunc_5167(uParam0, (GlobalFunc_5182(uParam0) + fParam1));
	}
}






















int func_806(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x7C939
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((!ENTITY::DOES_ENTITY_EXIST(*uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam2, iParam3))
	{
		iVar0 = 0;
		if (iParam1 <= 1)
		{
			switch (iParam1)
			{
				case 0:
					iVar2 = 0;
					if (iParam4 == 8)
					{
						iVar1 = 12;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				
				case 1:
					iVar2 = 1;
					if (iParam4 == 8)
					{
						iVar1 = 5;
					}
					else
					{
						iVar1 = 0;
					}
					break;
			}
			if (bParam6)
			{
				while (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0) && !GlobalFunc_11337(uParam0, iVar2, *uParam2, iParam3, bParam7, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_11257(*uParam0, 12, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			else if (GlobalFunc_11337(uParam0, iVar2, *uParam2, iParam3, bParam7, 0, 0))
			{
				GlobalFunc_11257(*uParam0, 12, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else
		{
			switch (iParam1)
			{
				case 2:
					iVar3 = iLocal_4195;
					break;
				
				case 3:
					iVar3 = iLocal_4196;
					break;
				
				case 4:
					iVar3 = iLocal_4197;
					break;
			}
			iVar0 = GlobalFunc_623(iVar3);
			GlobalFunc_718(&Local_4444, iVar0);
			if (bParam6)
			{
				while (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
				{
					*uParam0 = func_808(iVar3, *uParam2, iParam3, iParam4, 1);
				}
			}
			else if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				*uParam0 = func_808(iVar3, *uParam2, iParam3, iParam4, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			func_807(uParam0, iParam5, bParam8, bParam9);
			if (bParam7 && iVar0 != 0)
			{
				GlobalFunc_5174(&Local_4444, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_807(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7CAF2
{
	if (bParam2)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_3))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_3));
		}
		func_485(&(uParam0->f_3), *uParam0, 0);
	}
	PED::SET_PED_ACCURACY(*uParam0, iParam1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, 0);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 35, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 36, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 188, true);
	if (bParam3)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_624);
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_623);
	}
}

int func_808(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7CB93
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 26, Global_86242[iParam0 /*5*/].f_4, iParam2, 1, 1);
	GlobalFunc_6803(iVar0, iParam0, iParam3, bParam4);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
	if (GlobalFunc_595(iParam0) == 1)
	{
		PED::SET_PED_MAX_HEALTH(iVar0, GlobalFunc_6802(iParam0, 0));
		PED::SET_PED_ACCURACY(iVar0, GlobalFunc_6802(iParam0, 1));
		PED::SET_PED_SHOOT_RATE(iVar0, GlobalFunc_6802(iParam0, 2));
	}
	else
	{
		PED::SET_PED_MAX_HEALTH(iVar0, 100);
		PED::SET_PED_ACCURACY(iVar0, 25);
		PED::SET_PED_SHOOT_RATE(iVar0, 40);
	}
	return iVar0;
}


















int func_826(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x7E295
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 0;
		if (iParam1 <= 1)
		{
			switch (iParam1)
			{
				case 0:
					iVar2 = 0;
					if (iParam6 == 8)
					{
						iVar1 = 12;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				
				case 1:
					iVar2 = 1;
					if (iParam6 == 8)
					{
						iVar1 = 5;
					}
					else
					{
						iVar1 = 0;
					}
					break;
			}
			if (bParam8)
			{
				while (!GlobalFunc_11338(uParam0, iVar2, Param2, fParam5, bParam9, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (iVar1 != 0 && iVar1 != 0)
				{
					GlobalFunc_11257(*uParam0, 12, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			else if (GlobalFunc_11338(uParam0, iVar2, Param2, fParam5, bParam9, 0, 0))
			{
				if (iVar1 != 0 && iVar1 != 0)
				{
					GlobalFunc_11257(*uParam0, 12, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
		}
		else
		{
			switch (iParam1)
			{
				case 2:
					iVar3 = iLocal_4195;
					break;
				
				case 3:
					iVar3 = iLocal_4196;
					break;
				
				case 4:
					iVar3 = iLocal_4197;
					break;
			}
			iVar0 = GlobalFunc_623(iVar3);
			GlobalFunc_718(&Local_4444, iVar0);
			if (bParam8)
			{
				while (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					SYSTEM::WAIT(0);
				}
				*uParam0 = GlobalFunc_7722(iVar3, Param2, fParam5, iParam6, 1);
			}
			else if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				*uParam0 = GlobalFunc_7722(iVar3, Param2, fParam5, iParam6, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			func_807(uParam0, iParam7, bParam10, bParam11);
			if (bParam9 && iVar0 != 0)
			{
				GlobalFunc_5174(&Local_4444, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}








bool func_834(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x7E717
{
	return func_835(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14);
}

int func_835(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x7E745
{
	return func_494(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, uParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}


void func_837()//Position - 0x7E7B8
{
	int iVar0;
	
	switch (iLocal_6072)
	{
		case 0:
			if (CUTSCENE::HAS_CUTSCENE_LOADED() && !GlobalFunc_111())
			{
				GlobalFunc_8380(1, 1, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					Local_630[2 /*20*/] = Global_86864.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_630[2 /*20*/], 1, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[2 /*20*/], "Lester", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lester", 2, joaat("ig_lestercrest"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
				{
					Local_3864[0 /*2*/] = Global_86864.f_28[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_3864[0 /*2*/], 1, 1);
					if (ENTITY::IS_ENTITY_ATTACHED(Local_3864[0 /*2*/]))
					{
						ENTITY::DETACH_ENTITY(Local_3864[0 /*2*/], 1, 1);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[0 /*2*/], "WalkingStick_Lester", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
				{
					Local_3864[1 /*2*/] = Global_86864.f_28[1];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_3864[1 /*2*/], 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3864[1 /*2*/], 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3864[1 /*2*/], "Lesters_Crate", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lesters_Crate", 2, joaat("prop_cs_lester_crate"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
				{
					Local_2091[0 /*88*/] = Global_86864[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_2091[0 /*88*/], 1, 1);
				}
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
				{
					Local_630[0 /*20*/] = PLAYER::PLAYER_PED_ID();
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklin", 2, GlobalFunc_4917(1), 0);
				}
				else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
				{
					Local_630[1 /*20*/] = PLAYER::PLAYER_PED_ID();
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
					{
						Local_630[0 /*20*/] = Global_86864.f_9[1];
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_630[0 /*20*/], 1, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_630[0 /*20*/], "Michael", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michael", 2, GlobalFunc_4917(0), 0);
					}
				}
				iLocal_4222 = 0;
				iLocal_4223 = 0;
				iLocal_4224 = 0;
				iLocal_4226 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 1, 0, 0);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				GlobalFunc_562(70);
				GlobalFunc_719(&Local_4444, "missheistfbi3bleadinoutah_3b_int");
				iLocal_6072++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				GlobalFunc_6791(0, 0);
				GlobalFunc_9807(750.6955f, -983.9153f, 22.78012f, 712.4413f, -984.4501f, 26.99836f, 16.5625f, 727.6439f, -987.9505f, 23.1625f, 277.8401f, 1, 1, 1, 0, 0);
				MISC::CLEAR_AREA(715.3816f, -964.8571f, 29.39526f, 15.0625f, 1, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[0 /*88*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[0 /*88*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_2091[0 /*88*/], Local_383, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_2091[0 /*88*/], 270.6242f);
				}
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				iLocal_6072++;
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(func_106()))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					Local_630[0 /*20*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(func_79()))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					Local_630[1 /*20*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_630[2 /*20*/]))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					Local_630[2 /*20*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[0 /*2*/]))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					Local_3864[0 /*2*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[1 /*2*/]))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lesters_Crate", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					Local_3864[1 /*2*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_2091[0 /*88*/]))
			{
				if (GlobalFunc_9808(&(Local_2091[0 /*88*/]), 0, Local_383, 270.6242f, 1, 0))
				{
				}
			}
			if (((((ENTITY::DOES_ENTITY_EXIST(func_106()) && ENTITY::DOES_ENTITY_EXIST(func_79())) && ENTITY::DOES_ENTITY_EXIST(Local_630[2 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_2091[0 /*88*/])) && ENTITY::DOES_ENTITY_EXIST(Local_3864[0 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_3864[1 /*2*/]))
			{
				iLocal_6078[1] = func_79();
				iLocal_6078[0] = func_106();
				iLocal_6072++;
			}
			break;
		
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_630[2 /*20*/], iLocal_623);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3864[1 /*2*/], Local_630[2 /*20*/], PED::GET_PED_BONE_INDEX(Local_630[2 /*20*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3864[0 /*2*/], Local_630[2 /*20*/], PED::GET_PED_BONE_INDEX(Local_630[2 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_630[2 /*20*/], "missheistfbi3bleadinoutah_3b_int", "_leadout_b_lester", 713.033f, -964.717f, 30.399f, 0f, 0f, 42f, 1000f, -8f, -1, 262145, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[2 /*20*/], 0, 0);
				iLocal_4224 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				ENTITY::SET_ENTITY_COORDS(func_106(), 718.1644f, -965.1974f, 29.3956f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_106(), 182.4597f);
				if (PLAYER::PLAYER_PED_ID() == func_106())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
				else
				{
					TASK::TASK_ENTER_VEHICLE(func_106(), Local_2091[0 /*88*/], 20000, 0, 1f, 1, 0);
				}
				PED::FORCE_PED_MOTION_STATE(func_106(), -668482597, 0, 1, 0);
				iLocal_4222 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				ENTITY::SET_ENTITY_COORDS(func_79(), 716.7049f, -964.2289f, 29.3956f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_79(), 182.7453f);
				PED::FORCE_PED_MOTION_STATE(func_79(), -1871534317, 0, 1, 0);
				if (PLAYER::PLAYER_PED_ID() == func_79())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				else
				{
					TASK::TASK_ENTER_VEHICLE(func_79(), Local_2091[0 /*88*/], 20000, 0, 1f, 1, 0);
				}
				iLocal_4223 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				iLocal_4226 = 1;
			}
			if (((((((iLocal_4222 && iLocal_4223) && iLocal_4224) && iLocal_4226) && STREAMING::HAS_ANIM_DICT_LOADED("missheistfbi3bleadinoutah_3b_int")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_8380(0, 1, 1, 0);
				func_465(1);
			}
			break;
	}
}



























void func_864()//Position - 0x82FF2
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		if (Local_5424[iVar0 /*8*/] != 0 && Local_5424[iVar0 /*8*/].f_1)
		{
			bVar1 = false;
			fVar2 = 0f;
			func_679(iVar0, &bVar1, &fVar2);
			if (bVar1 != Local_5424[iVar0 /*8*/].f_4 || fVar2 != Local_5424[iVar0 /*8*/].f_2)
			{
				if (Local_5424[iVar0 /*8*/].f_5 > 0 && Local_5424[iVar0 /*8*/].f_6 > 0)
				{
					fVar3 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - Local_5424[iVar0 /*8*/].f_6)) / SYSTEM::TO_FLOAT(Local_5424[iVar0 /*8*/].f_5)), 0f, 1f);
					if (fVar3 != 1f)
					{
						fVar2 = (Local_5424[iVar0 /*8*/].f_3 + (fVar3 * (Local_5424[iVar0 /*8*/].f_2 - Local_5424[iVar0 /*8*/].f_3)));
						bVar1 = true;
					}
					else
					{
						bVar1 = Local_5424[iVar0 /*8*/].f_4;
						fVar2 = Local_5424[iVar0 /*8*/].f_2;
						Local_5424[iVar0 /*8*/].f_1 = 0;
						Local_5424[iVar0 /*8*/].f_5 = 0;
						Local_5424[iVar0 /*8*/].f_6 = 0;
						Local_5424[iVar0 /*8*/].f_1 = 0;
					}
				}
				else
				{
					if (Local_5424[iVar0 /*8*/].f_4)
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
					fVar2 = Local_5424[iVar0 /*8*/].f_2;
					Local_5424[iVar0 /*8*/].f_5 = 0;
					Local_5424[iVar0 /*8*/].f_6 = 0;
					Local_5424[iVar0 /*8*/].f_1 = 0;
				}
				if (fVar2 != 100f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_5424[iVar0 /*8*/], fVar2, 0, 1);
				}
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iVar0 /*8*/], 1, 0, 1);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iVar0 /*8*/], 0, 0, 1);
				}
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_5424[iVar0 /*8*/], fVar2, 0, 1);
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iVar0 /*8*/], 1, 0, 1);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iVar0 /*8*/], 0, 0, 1);
				}
				Local_5424[iVar0 /*8*/].f_5 = 0;
				Local_5424[iVar0 /*8*/].f_6 = 0;
				Local_5424[iVar0 /*8*/].f_1 = 0;
			}
		}
		iVar0++;
	}
}

void func_865()//Position - 0x831DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (38 - 1))
	{
		switch (Local_4253[iVar0 /*5*/])
		{
			case 1:
				switch (iVar0)
				{
					case 0:
						func_957();
						break;
					
					case 1:
						func_956();
						break;
					
					case 3:
						func_954();
						break;
					
					case 4:
						func_952();
						break;
					
					case 35:
						func_949();
						break;
					
					case 5:
						func_947();
						break;
					
					case 6:
						func_946();
						break;
					
					case 7:
						func_945();
						break;
					
					case 2:
						func_944();
						break;
					
					case 8:
						func_913();
						break;
					
					case 12:
						func_912();
						break;
					
					case 10:
						func_911();
						break;
					
					case 11:
						func_909();
						break;
					
					case 9:
						func_908();
						break;
					
					case 13:
						func_907();
						break;
					
					case 14:
						func_906();
						break;
					
					case 15:
						func_904();
						break;
					
					case 16:
						func_903();
						break;
					
					case 17:
						func_901();
						break;
					
					case 18:
						func_900();
						break;
					
					case 19:
						func_899();
						break;
					
					case 20:
						func_898();
						break;
					
					case 21:
						func_896();
						break;
					
					case 22:
						func_895();
						break;
					
					case 23:
						func_894();
						break;
					
					case 24:
						func_893();
						break;
					
					case 25:
						func_892();
						break;
					
					case 26:
						func_890();
						break;
					
					case 27:
						func_883();
						break;
					
					case 28:
						func_882();
						break;
					
					case 29:
						func_881();
						break;
					
					case 30:
						func_878();
						break;
					
					case 31:
						func_877();
						break;
					
					case 32:
						func_875();
						break;
					
					case 33:
						func_874();
						break;
					
					case 34:
						func_869();
						break;
					
					case 36:
						func_868();
						break;
					
					case 37:
						func_866();
						break;
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - Local_4253[iVar0 /*5*/].f_2) > Local_4253[iVar0 /*5*/].f_3)
				{
					Local_4253[iVar0 /*5*/] = 1;
					Local_4253[iVar0 /*5*/].f_3 = 0;
				}
				break;
			
			case 5:
				if ((MISC::GET_GAME_TIMER() - Local_4253[iVar0 /*5*/].f_4) > 10000)
				{
					Local_4253[iVar0 /*5*/] = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_866()//Position - 0x8345E
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_644(37);
	}
	else
	{
		func_641(37);
		switch (Local_4253[37 /*5*/].f_1)
		{
			case 1:
				bLocal_7076 = true;
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SPKa", 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						Local_4253[37 /*5*/].f_1++;
					}
				}
				break;
			
			case 2:
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
				{
					switch (iLocal_4195)
					{
						case 12:
							switch (GlobalFunc_697(iLocal_4195))
							{
								case 0:
									MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SPKb", 1)}, 6);
									bLocal_7116 = false;
									break;
								
								case 2:
									MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SPKb", 1)}, 6);
									bLocal_7116 = true;
									break;
								
								case 1:
									MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SPKb", 0)}, 6);
									if (GlobalFunc_745())
									{
										StringConCat(&cLocal_4237, "M", 24);
										bLocal_7116 = false;
									}
									else
									{
										StringConCat(&cLocal_4237, "G", 24);
										bLocal_7116 = true;
									}
									break;
							}
							break;
						
						case 7:
							switch (GlobalFunc_697(iLocal_4195))
							{
								case 0:
									MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SPKb", 1)}, 6);
									bLocal_7116 = false;
									break;
								
								case 2:
									MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SPKb", 1)}, 6);
									bLocal_7116 = true;
									break;
								
								case 1:
									MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SPKb", 0)}, 6);
									if (GlobalFunc_745())
									{
										StringConCat(&cLocal_4237, "B", 24);
										bLocal_7116 = false;
									}
									else
									{
										StringConCat(&cLocal_4237, "M", 24);
										bLocal_7116 = true;
									}
									break;
							}
							break;
						
						case 6:
							MemCopy(&cLocal_4237, {func_459(iLocal_4195, "AH_SPKb", 0)}, 6);
							bLocal_7116 = true;
							break;
						}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4237))
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 1313459445)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
						StringCopy(&cLocal_4237, "", 24);
						Local_4253[37 /*5*/].f_1++;
					}
					else if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							if (bLocal_7116)
							{
								iLocal_8011 = 0;
							}
							Local_4253[37 /*5*/].f_1++;
						}
					}
				}
				break;
			
			case 3:
				if (GlobalFunc_111())
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 1313459445)
					{
						GlobalFunc_5105();
					}
				}
				if (!GlobalFunc_111())
				{
					bLocal_7076 = false;
					Global_89962.f_12[0] = iLocal_8011 + 1;
					func_476(37);
				}
				break;
			}
	}
}


void func_868()//Position - 0x83727
{
	switch (Local_4253[36 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_361);
			GlobalFunc_718(&Local_4444, iLocal_363);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_MODEL_LOADED(iLocal_363))
			{
				func_667(&(Local_630[67 /*20*/]), iLocal_363, 118.9352f, -723.0794f, 46.077f, 255.1964f, "GND_PRE_1", iLocal_625, joaat("weapon_pistol"), joaat("component_at_pi_flsh"), 5, -1, 0, 1, 1);
				func_602(&(Local_630[67 /*20*/]), 118.9352f, -723.0794f, 46.077f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[67 /*20*/], 118.9352f, -723.0794f, 46.077f, -1, 0, 0f, 1, 1, 0, 0);
				func_667(&(Local_630[68 /*20*/]), iLocal_361, 94.9189f, -735.4648f, 44.7587f, 335.377f, "GND_PRE_2", iLocal_625, joaat("weapon_pistol"), joaat("component_at_pi_flsh"), 5, -1, 0, 1, 1);
				func_602(&(Local_630[68 /*20*/]), 100.5248f, -731.0294f, 45.4243f, 3f, 1, 1, 1, 1, 1f, 0f, 1, 0, 1, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[68 /*20*/], 94.9189f, -735.4648f, 44.7587f, -1, 0, 0f, 1, 0, 0, 0);
				func_667(&(Local_630[69 /*20*/]), iLocal_363, 91.8254f, -727.5392f, 45.678f, 330.9851f, "GND_PRE_3", iLocal_625, joaat("weapon_pistol"), joaat("component_at_pi_flsh"), 5, -1, 0, 1, 1);
				func_602(&(Local_630[69 /*20*/]), 99.1726f, -722.4755f, 46.077f, 2.5f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_630[69 /*20*/], joaat("weapon_pistol"), joaat("component_at_pi_flsh"));
				Local_4253[36 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if (((((PED::IS_PED_INJURED(Local_630[67 /*20*/]) || PED::IS_PED_INJURED(Local_630[68 /*20*/])) || PED::IS_PED_INJURED(Local_630[69 /*20*/])) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 142.9333f, -693.6667f, 46.07695f, 122.3242f, -723.9261f, 53.55556f, 23.625f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_447(), 142.9333f, -693.6667f, 46.07695f, 122.3242f, -723.9261f, 53.55556f, 23.625f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 142.9333f, -693.6667f, 46.07695f, 122.3242f, -723.9261f, 53.55556f, 23.625f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[67 /*20*/]) && !PED::IS_PED_INJURED(Local_630[67 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[67 /*20*/], 100f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[68 /*20*/]) && !PED::IS_PED_INJURED(Local_630[68 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[68 /*20*/], 100f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[69 /*20*/]) && !PED::IS_PED_INJURED(Local_630[69 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[69 /*20*/], 100f, 0);
				}
				func_667(&(Local_630[70 /*20*/]), iLocal_361, 104.7831f, -750.0425f, 44.7563f, 1.9668f, "GND_ENT_1", iLocal_625, joaat("weapon_pistol"), joaat("component_at_pi_flsh"), 5, -1, 0, 1, 1);
				func_602(&(Local_630[70 /*20*/]), 105.8129f, -740.6666f, 44.7569f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[70 /*20*/], 104.7831f, -750.0425f, 44.7563f, -1, 0, 0f, 1, 1, 0, 0);
				func_667(&(Local_630[71 /*20*/]), iLocal_361, 100.6031f, -750.236f, 44.7558f, 5.1231f, "GND_ENT_2", iLocal_625, joaat("weapon_pistol"), joaat("component_at_pi_flsh"), 5, -1, 0, 1, 1);
				func_602(&(Local_630[71 /*20*/]), 100.6031f, -750.236f, 44.7558f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[71 /*20*/], 100.6031f, -750.236f, 44.7558f, -1, 0, 0f, 1, 0, 0, 0);
				func_667(&(Local_630[72 /*20*/]), iLocal_363, 105.9348f, -740.6089f, 44.7569f, 343.1414f, "GND_ENT_3", iLocal_625, joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"), 5, -1, 0, 1, 1);
				func_602(&(Local_630[72 /*20*/]), 101.8979f, -739.2158f, 44.7563f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[72 /*20*/], 105.9348f, -740.6089f, 44.7569f, -1, 0, 0f, 1, 0, 0, 0);
				GlobalFunc_5174(&Local_4444, iLocal_361);
				GlobalFunc_5174(&Local_4444, iLocal_363);
				Local_4253[36 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (((((PED::IS_PED_INJURED(Local_630[70 /*20*/]) || PED::IS_PED_INJURED(Local_630[71 /*20*/])) || PED::IS_PED_INJURED(Local_630[72 /*20*/])) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 90.7186f, -710.7856f, 42.5586f, 118.5034f, -726.8253f, 53.05956f, 7.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_447(), 90.7186f, -710.7856f, 42.5586f, 118.5034f, -726.8253f, 53.05956f, 7.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 90.7186f, -710.7856f, 42.5586f, 118.5034f, -726.8253f, 53.05956f, 7.6875f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[70 /*20*/]) && !PED::IS_PED_INJURED(Local_630[70 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[70 /*20*/], 100f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[71 /*20*/]) && !PED::IS_PED_INJURED(Local_630[71 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[71 /*20*/], 100f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[72 /*20*/]) && !PED::IS_PED_INJURED(Local_630[72 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[72 /*20*/], 100f, 0);
				}
				Local_4253[36 /*5*/].f_1++;
			}
			break;
	}
}

void func_869()//Position - 0x83D82
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	bool bVar12;
	
	if (Local_4253[34 /*5*/].f_1 > 1)
	{
		iVar1 = 18;
		while (iVar1 <= 19)
		{
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/]))
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/].f_4 == 0)
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[iVar1 /*88*/], 0) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[iVar1 /*88*/]))
							{
								if (!GlobalFunc_709(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], -1442466670, 1))
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 1000f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 0);
									Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/].f_4++;
								}
							}
						}
					}
					else
					{
						iVar3 = 0;
						WEAPON::GET_CURRENT_PED_WEAPON(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], &iVar3, 1);
						iVar4 = WEAPON::GET_BEST_PED_WEAPON(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 0);
						if (iVar3 != iVar4)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], iVar4, 1);
						}
						iVar5 = -1;
						switch (iVar1)
						{
							case 18:
								switch (iVar2)
								{
									case 0:
										iVar5 = 0;
										Var6 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(uLocal_8025[iVar5]) };
										Var9 = { 0f, 0f, 0f };
										break;
									
									case 1:
										iVar5 = 1;
										Var6 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(uLocal_8025[iVar5]) };
										Var9 = { 0f, 0f, 0f };
										break;
									
									case 2:
										Var6 = { 96.1398f, -748.001f, 44.7554f };
										Var9 = { 110.7882f, -745.1479f, 45.7479f };
										break;
								}
								break;
							
							case 19:
								switch (iVar2)
								{
									case 0:
										Var6 = { 96.3826f, -737.609f, 44.7563f };
										Var9 = { 106.9883f, -746.0746f, 45.8189f };
										break;
									
									case 1:
										iVar5 = 2;
										Var6 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(uLocal_8025[iVar5]) };
										Var9 = { 0f, 0f, 0f };
										break;
									
									case 2:
										Var6 = { 98.9794f, -743.594f, 44.7559f };
										Var9 = { 106.7507f, -744.8083f, 45.8343f };
										break;
								}
								break;
						}
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[iVar1 /*88*/], 0) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[iVar1 /*88*/]))
						{
							if (!GlobalFunc_105(Var6))
							{
								PED::SET_PED_USING_ACTION_MODE(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 1, -1, 0);
								if (iVar5 != -1)
								{
									if (!GlobalFunc_709(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 242628503, 1))
									{
										func_468(1);
										if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 0))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
										}
										TASK::TASK_SWAP_WEAPON(0, 1);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 2f, -1, 15f, 0, 40000f);
										TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_8025[iVar5], 117.0291f, -751.6413f, 47.0793f, -1, 0);
										func_466(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 1);
									}
								}
								else if (!GlobalFunc_105(Var9))
								{
									if (!GlobalFunc_709(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 242628503, 1))
									{
										func_468(1);
										if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 0))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
										}
										TASK::TASK_SWAP_WEAPON(0, 1);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 2f, -1, 0.25f, 0, 40000f);
										TASK::TASK_AIM_GUN_AT_COORD(0, Var9, -1, 0, 1);
										func_466(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 1);
									}
								}
							}
						}
					}
					iVar0++;
				}
				iVar2++;
			}
			iVar1++;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (!iLocal_8034)
			{
				iVar1 = 18;
				while (iVar1 <= 19)
				{
					iVar2 = 0;
					while (iVar2 <= 2)
					{
						if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], func_106(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], func_79(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], Local_630[3 /*20*/], 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], Local_630[4 /*20*/], 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], 124))
						{
							bVar12 = true;
						}
						iVar2++;
					}
					iVar1++;
				}
				iVar1 = 18;
				while (iVar1 <= 19)
				{
					iVar2 = 0;
					while (iVar2 <= 2)
					{
						if (!bVar12)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/]))
							{
								if (((PED::CAN_PED_SEE_HATED_PED(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], func_106()) || PED::CAN_PED_SEE_HATED_PED(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], func_79())) || PED::CAN_PED_SEE_HATED_PED(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], Local_630[3 /*20*/])) || ((ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]) && !PED::IS_PED_INJURED(Local_630[4 /*20*/])) && PED::CAN_PED_SEE_HATED_PED(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], Local_630[4 /*20*/])))
								{
									if (((((ENTITY::GET_ENTITY_MODEL(Local_2091[16 /*88*/]) != joaat("ambulance") || GlobalFunc_156(Local_2091[iVar1 /*88*/].f_1[iVar2 /*20*/], Local_2091[16 /*88*/], 1) < 10f) || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[16 /*88*/])) || !PED::IS_PED_SITTING_IN_VEHICLE(func_447(), Local_2091[16 /*88*/])) || !PED::IS_PED_SITTING_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/])) || !PED::IS_PED_SITTING_IN_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/]))
									{
										bVar12 = true;
									}
									iLocal_8032 = 1;
								}
							}
						}
						iVar2++;
					}
					iVar1++;
				}
				if (bVar12)
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(4);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PED::SET_CREATE_RANDOM_COPS(0);
					MISC::ENABLE_DISPATCH_SERVICE(3, 0);
					MISC::ENABLE_DISPATCH_SERVICE(1, 0);
					MISC::ENABLE_DISPATCH_SERVICE(8, 0);
					MISC::ENABLE_DISPATCH_SERVICE(6, 0);
					MISC::ENABLE_DISPATCH_SERVICE(4, 0);
					MISC::ENABLE_DISPATCH_SERVICE(12, 0);
					MISC::ENABLE_DISPATCH_SERVICE(5, 0);
					func_671(&(Local_2091[18 /*88*/].f_1[0 /*20*/]), 0);
					func_671(&(Local_2091[18 /*88*/].f_1[1 /*20*/]), 0);
					func_671(&(Local_2091[18 /*88*/].f_1[2 /*20*/]), 0);
					GlobalFunc_589(&(Local_2091[18 /*88*/].f_1[0 /*20*/].f_7));
					GlobalFunc_589(&(Local_2091[18 /*88*/].f_1[1 /*20*/].f_7));
					GlobalFunc_589(&(Local_2091[18 /*88*/].f_1[2 /*20*/].f_7));
					func_671(&(Local_2091[19 /*88*/].f_1[0 /*20*/]), 0);
					func_671(&(Local_2091[19 /*88*/].f_1[1 /*20*/]), 0);
					func_671(&(Local_2091[19 /*88*/].f_1[2 /*20*/]), 0);
					GlobalFunc_589(&(Local_2091[19 /*88*/].f_1[0 /*20*/].f_7));
					GlobalFunc_589(&(Local_2091[19 /*88*/].f_1[1 /*20*/].f_7));
					GlobalFunc_589(&(Local_2091[19 /*88*/].f_1[2 /*20*/].f_7));
					iLocal_8034 = 1;
				}
			}
		}
		else if (iLocal_8034)
		{
			if ((((PED::IS_PED_IN_VEHICLE(func_106(), Local_2091[16 /*88*/], 1) && PED::IS_PED_IN_VEHICLE(func_79(), Local_2091[16 /*88*/], 1)) && PED::IS_PED_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/], 1)) && PED::IS_PED_IN_VEHICLE(Local_630[4 /*20*/], Local_2091[16 /*88*/], 1)) || ((bLocal_8029 && (MISC::GET_GAME_TIMER() - iLocal_8035) > 15000) && (iVar0 <= 2 || (MISC::GET_GAME_TIMER() - iLocal_8035) > 30000)))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
				PED::SET_CREATE_RANDOM_COPS(1);
				MISC::ENABLE_DISPATCH_SERVICE(3, 1);
				MISC::ENABLE_DISPATCH_SERVICE(1, 1);
				MISC::ENABLE_DISPATCH_SERVICE(8, 1);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				MISC::ENABLE_DISPATCH_SERVICE(6, 1);
				MISC::ENABLE_DISPATCH_SERVICE(4, 1);
				MISC::ENABLE_DISPATCH_SERVICE(12, 1);
				MISC::ENABLE_DISPATCH_SERVICE(5, 1);
				iLocal_8034 = 0;
				func_645(35, 0);
			}
		}
		else
		{
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		}
	}
	switch (Local_4253[34 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, joaat("fbi2"));
			GlobalFunc_718(&Local_4444, iLocal_364);
			GlobalFunc_746(&Local_4444, 9, &sLocal_381);
			GlobalFunc_746(&Local_4444, 202, &sLocal_381);
			if (((STREAMING::HAS_MODEL_LOADED(joaat("fbi2")) && STREAMING::HAS_MODEL_LOADED(iLocal_364)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, &sLocal_381))
			{
				AUDIO::DISTANT_COP_CAR_SIRENS(1);
				Local_2091[18 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), 150.8472f, -585.8458f, 42.9832f, 69.1685f, 1, 1);
				VEHICLE::SET_VEHICLE_SIREN(Local_2091[18 /*88*/], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[18 /*88*/], 9, &sLocal_381, 1);
				func_871(&(Local_2091[18 /*88*/].f_1[0 /*20*/]), iLocal_364, &(Local_2091[18 /*88*/]), -1, "SWATCar1_DVR", iLocal_625, joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"), 5, -1, 0, 1, 1);
				func_871(&(Local_2091[18 /*88*/].f_1[1 /*20*/]), iLocal_364, &(Local_2091[18 /*88*/]), 3, "SWATCar1_LFT", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 10, -1, 0, 1, 1);
				func_871(&(Local_2091[18 /*88*/].f_1[2 /*20*/]), iLocal_364, &(Local_2091[18 /*88*/]), 4, "SWATCar1_RGT", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 10, -1, 0, 1, 1);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_2091[18 /*88*/].f_1[1 /*20*/], joaat("weapon_smg"));
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_2091[18 /*88*/].f_1[2 /*20*/], joaat("weapon_smg"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2091[18 /*88*/].f_1[0 /*20*/], 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2091[18 /*88*/].f_1[1 /*20*/], 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2091[18 /*88*/].f_1[2 /*20*/], 1, 0);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2091[18 /*88*/].f_1[0 /*20*/], 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2091[18 /*88*/].f_1[1 /*20*/], 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2091[18 /*88*/].f_1[2 /*20*/], 1);
				Local_2091[19 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), -163.4651f, -700.3435f, 36.1855f, 254.9485f, 1, 1);
				VEHICLE::SET_VEHICLE_SIREN(Local_2091[19 /*88*/], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[19 /*88*/], 202, &sLocal_381, 1);
				func_871(&(Local_2091[19 /*88*/].f_1[0 /*20*/]), iLocal_364, &(Local_2091[19 /*88*/]), -1, "SWATCar2_DVR", iLocal_625, joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"), 5, -1, 0, 1, 1);
				func_871(&(Local_2091[19 /*88*/].f_1[1 /*20*/]), iLocal_364, &(Local_2091[19 /*88*/]), 3, "SWATCar2_LFT", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 10, -1, 0, 1, 1);
				func_871(&(Local_2091[19 /*88*/].f_1[2 /*20*/]), iLocal_364, &(Local_2091[19 /*88*/]), 4, "SWATCar2_RGT", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 10, -1, 0, 1, 1);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_2091[19 /*88*/].f_1[1 /*20*/], joaat("weapon_smg"));
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_2091[19 /*88*/].f_1[2 /*20*/], joaat("weapon_smg"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2091[19 /*88*/].f_1[0 /*20*/], 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2091[19 /*88*/].f_1[1 /*20*/], 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2091[19 /*88*/].f_1[2 /*20*/], 1, 0);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2091[19 /*88*/].f_1[0 /*20*/], 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2091[19 /*88*/].f_1[1 /*20*/], 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2091[19 /*88*/].f_1[2 /*20*/], 1);
				if (uLocal_8025[0] == 0)
				{
					uLocal_8025[0] = TASK::ADD_COVER_POINT(99.9129f, -737.7625f, 44.7573f, 249.7556f, 0, 1, 1, 0);
				}
				if (uLocal_8025[1] == 0)
				{
					uLocal_8025[1] = TASK::ADD_COVER_POINT(98.1113f, -749.4194f, 44.7555f, 271.8575f, 1, 1, 1, 0);
				}
				if (uLocal_8025[2] == 0)
				{
					uLocal_8025[2] = TASK::ADD_COVER_POINT(105.5926f, -739.6732f, 44.7569f, 247.3052f, 0, 1, 1, 0);
				}
				GlobalFunc_5174(&Local_4444, joaat("fbi2"));
				GlobalFunc_5174(&Local_4444, iLocal_364);
				iLocal_8034 = 0;
				Local_4253[34 /*5*/].f_2 = MISC::GET_GAME_TIMER();
				Local_4253[34 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[18 /*88*/], 0) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[18 /*88*/])) && (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[19 /*88*/], 0) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[19 /*88*/])))
			{
				iLocal_8031 = 1;
				GlobalFunc_5185(&Local_4444, 9, &sLocal_381);
				GlobalFunc_5185(&Local_4444, 202, &sLocal_381);
				Local_4253[34 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_416, 1) > 500f || (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_416, 1) > 300f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[18 /*88*/].f_1[0 /*20*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[18 /*88*/].f_1[0 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[18 /*88*/].f_1[1 /*20*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[18 /*88*/].f_1[1 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[18 /*88*/].f_1[2 /*20*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[18 /*88*/].f_1[2 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[19 /*88*/].f_1[0 /*20*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[19 /*88*/].f_1[0 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[19 /*88*/].f_1[1 /*20*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[19 /*88*/].f_1[1 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[19 /*88*/].f_1[2 /*20*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[19 /*88*/].f_1[2 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[18 /*88*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[18 /*88*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[19 /*88*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[19 /*88*/]));
				}
				func_476(34);
			}
			break;
	}
}


void func_871(var uParam0, int iParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)//Position - 0x84C6E
{
	*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam2, 26, iParam1, iParam3, 1, 1);
	func_668(uParam0, sParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, bParam11, bParam12);
}



void func_874()//Position - 0x84E01
{
	if (func_490() == 2)
	{
		switch (Local_4253[33 /*5*/].f_1)
		{
			case 1:
				if (iLocal_6071 == 10)
				{
					bLocal_8029 = true;
					iLocal_4203 = 1;
					Local_4253[33 /*5*/].f_1 = 6;
				}
				else if (iLocal_6072 >= 6)
				{
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 2:
				GlobalFunc_718(&Local_4444, joaat("ambulance"));
				GlobalFunc_746(&Local_4444, 15, &sLocal_381);
				if (STREAMING::HAS_MODEL_LOADED(joaat("ambulance")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, &sLocal_381))
				{
					Local_2091[16 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 293.6366f, -589.3726f, 42.1395f, 339.5197f, 1, 1);
					GlobalFunc_743(Local_2091[16 /*88*/], 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2091[16 /*88*/], 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2091[16 /*88*/], 0);
					VEHICLE::SET_VEHICLE_STRONG(Local_2091[16 /*88*/], 1);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[16 /*88*/], 2);
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[16 /*88*/], 1);
					GlobalFunc_5174(&Local_4444, joaat("ambulance"));
					iLocal_4203 = 1;
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 3:
				if (func_806(&(Local_630[4 /*20*/]), 4, &(Local_2091[16 /*88*/]), -1, 8, 5, 0, 1, 0, 1))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[16 /*88*/], 15, &sLocal_381, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2091[16 /*88*/], 13259f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[16 /*88*/], 1);
					func_535();
					func_715(4, 0, 1);
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 4:
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[16 /*88*/]))
					{
						GlobalFunc_5185(&Local_4444, 15, &sLocal_381);
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_630[4 /*20*/], Local_2091[16 /*88*/]);
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_VAN_READY");
						iLocal_8035 = MISC::GET_GAME_TIMER();
						bLocal_8029 = true;
						Local_4253[33 /*5*/].f_1++;
					}
				}
				break;
			
			case 5:
				if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_2091[16 /*88*/], 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_2091[16 /*88*/], 0) == Local_630[4 /*20*/]) && !GlobalFunc_709(Local_630[4 /*20*/], 355471868, 1))
				{
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 6:
				if (iLocal_8030)
				{
					Local_4253[33 /*5*/].f_2 = MISC::GET_GAME_TIMER();
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 7:
				if (((PED::IS_PED_SITTING_IN_VEHICLE(func_106(), Local_2091[16 /*88*/]) && PED::IS_PED_SITTING_IN_VEHICLE(func_79(), Local_2091[16 /*88*/])) && PED::IS_PED_SITTING_IN_VEHICLE(Local_630[3 /*20*/], Local_2091[16 /*88*/])) || (MISC::GET_GAME_TIMER() - Local_4253[33 /*5*/].f_2) > 30000)
				{
					func_645(34, 0);
					func_476(33);
				}
				break;
		}
	}
	else if (func_490() == 0)
	{
		switch (Local_4253[33 /*5*/].f_1)
		{
			case 1:
				if (iLocal_8030)
				{
					func_645(34, 0);
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 2:
				if (iLocal_8031)
				{
					GlobalFunc_746(&Local_4444, 8, &sLocal_381);
					GlobalFunc_718(&Local_4444, iLocal_365);
					Local_4253[33 /*5*/].f_2 = MISC::GET_GAME_TIMER();
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - Local_4253[33 /*5*/].f_2) > 7000)
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_365) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, &sLocal_381))
					{
						Local_2091[16 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_365, -8.0629f, -740.6199f, 43.1547f, 250.6042f, 1, 1);
						GlobalFunc_743(Local_2091[16 /*88*/], 1);
						VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(Local_2091[16 /*88*/], 0.2f);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2091[16 /*88*/], 1);
						VEHICLE::SET_VEHICLE_STRONG(Local_2091[16 /*88*/], 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2091[16 /*88*/], 0);
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[16 /*88*/], 2);
						ENTITY::SET_ENTITY_PROOFS(Local_2091[16 /*88*/], 0, 1, 1, 1, 0, 0, 0, 0);
						GlobalFunc_5174(&Local_4444, iLocal_365);
						iLocal_4203 = 1;
						Local_4253[33 /*5*/].f_1++;
					}
				}
				break;
			
			case 4:
				if (func_806(&(Local_630[4 /*20*/]), 4, &(Local_2091[16 /*88*/]), -1, 8, 5, 0, 1, 0, 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[16 /*88*/], 8, &sLocal_381, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_630[4 /*20*/], 1);
					func_715(4, 0, 1);
					func_535();
					Local_4253[33 /*5*/].f_1++;
				}
				break;
			
			case 5:
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[16 /*88*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[16 /*88*/]))
					{
						GlobalFunc_5185(&Local_4444, 8, &sLocal_381);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_630[4 /*20*/], 0);
						ENTITY::SET_ENTITY_PROOFS(Local_2091[16 /*88*/], 0, 0, 0, 0, 0, 0, 0, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_VAN_READY");
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_630[4 /*20*/], Local_2091[16 /*88*/]);
						iLocal_8035 = MISC::GET_GAME_TIMER();
						bLocal_8029 = true;
						Local_4253[33 /*5*/].f_1++;
					}
				}
				break;
			
			case 6:
				if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_2091[16 /*88*/], 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_2091[16 /*88*/], 0) == Local_630[4 /*20*/]) && !GlobalFunc_709(Local_630[4 /*20*/], 355471868, 1))
				{
					func_476(33);
				}
				break;
			}
	}
}

void func_875()//Position - 0x853A1
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	switch (Local_4253[32 /*5*/].f_1)
	{
		case 1:
			MISC::CLEAR_AREA_OF_VEHICLES(267.7761f, -561.659f, 49.8593f, 5000f, 0, 0, 0, 0, 0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			Local_4253[32 /*5*/].f_1++;
			break;
		
		case 2:
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_718(&Local_4444, joaat("police3"));
				GlobalFunc_718(&Local_4444, joaat("firetruk"));
				GlobalFunc_718(&Local_4444, joaat("ambulance"));
				if (func_490() == 2)
				{
					GlobalFunc_746(&Local_4444, 23, &sLocal_381);
					func_876(&(Local_7807[12 /*8*/]), 16, joaat("ambulance"), 23, 13500, 0);
				}
				else
				{
					Local_7807[12 /*8*/].f_7 = 1;
				}
				GlobalFunc_746(&Local_4444, 1, &sLocal_381);
				GlobalFunc_746(&Local_4444, 3, &sLocal_381);
				GlobalFunc_746(&Local_4444, 5, &sLocal_381);
				GlobalFunc_746(&Local_4444, 6, &sLocal_381);
				GlobalFunc_746(&Local_4444, 7, &sLocal_381);
				GlobalFunc_746(&Local_4444, 10, &sLocal_381);
				GlobalFunc_746(&Local_4444, 17, &sLocal_381);
				GlobalFunc_746(&Local_4444, 18, &sLocal_381);
				GlobalFunc_746(&Local_4444, 19, &sLocal_381);
				GlobalFunc_746(&Local_4444, 20, &sLocal_381);
				GlobalFunc_746(&Local_4444, 21, &sLocal_381);
				GlobalFunc_746(&Local_4444, 22, &sLocal_381);
				func_876(&(Local_7807[0 /*8*/]), 4, joaat("police3"), 1, 0, 0);
				func_876(&(Local_7807[1 /*8*/]), 5, joaat("police3"), 3, 0, 0);
				func_876(&(Local_7807[2 /*8*/]), 6, joaat("police3"), 5, 0, 0);
				func_876(&(Local_7807[3 /*8*/]), 7, joaat("police3"), 6, 0, 0);
				func_876(&(Local_7807[4 /*8*/]), 8, joaat("police3"), 7, 0, 0);
				func_876(&(Local_7807[5 /*8*/]), 9, joaat("police3"), 10, 0, 0);
				func_876(&(Local_7807[6 /*8*/]), 10, joaat("police3"), 17, 4000, 0);
				func_876(&(Local_7807[7 /*8*/]), 11, joaat("police3"), 18, 3000, 0);
				func_876(&(Local_7807[8 /*8*/]), 12, joaat("firetruk"), 19, 0, 0);
				func_876(&(Local_7807[9 /*8*/]), 13, joaat("firetruk"), 20, 2000, 0);
				func_876(&(Local_7807[10 /*8*/]), 14, joaat("ambulance"), 21, 5000, 4000);
				func_876(&(Local_7807[11 /*8*/]), 15, joaat("ambulance"), 22, 5000, 3000);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				AUDIO::LOAD_STREAM("Distant_Sirens_Rappel", "FBI_HEIST_FINALE_CHOPPER");
				if ((((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("firetruk"))) && STREAMING::HAS_MODEL_LOADED(joaat("ambulance"))) && (func_490() != 2 || VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, &sLocal_381))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, &sLocal_381)) && AUDIO::LOAD_STREAM("Distant_Sirens_Rappel", "FBI_HEIST_FINALE_CHOPPER"))
				{
					AUDIO::PLAY_STREAM_FROM_POSITION(224.5f, -627f, 240.3f);
					iLocal_7806 = MISC::GET_GAME_TIMER();
					Local_4253[32 /*5*/].f_1++;
				}
			}
			break;
		
		case 3:
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Local_7807)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2091[Local_7807[iVar1 /*8*/] /*88*/]) && !Local_7807[iVar1 /*8*/].f_7)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_7806) > Local_7807[iVar1 /*8*/].f_3)
					{
						Var2 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_7807[iVar1 /*8*/].f_2, 0f, &sLocal_381) };
						Var5 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Local_7807[iVar1 /*8*/].f_2, 0f, &sLocal_381) };
						Local_2091[Local_7807[iVar1 /*8*/] /*88*/] = VEHICLE::CREATE_VEHICLE(Local_7807[iVar1 /*8*/].f_1, Var2, Var5.f_2, 1, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], 2);
						VEHICLE::SET_VEHICLE_SIREN(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], 1);
						VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], 1);
						ENTITY::SET_ENTITY_LOD_DIST(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], 5000);
						VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], 10f);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], Local_7807[iVar1 /*8*/].f_2, &sLocal_381, 1);
						Local_7807[iVar1 /*8*/].f_7 = 1;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_2091[Local_7807[iVar1 /*8*/] /*88*/]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], 148.023f, -588.0789f, 48.81202f, 8f, 15.375f, 6.8125f, 0, 1, 0))
					{
						GlobalFunc_5185(&Local_4444, Local_7807[iVar1 /*8*/].f_2, &sLocal_381);
						VEHICLE::DELETE_VEHICLE(&(Local_2091[Local_7807[iVar1 /*8*/] /*88*/]));
					}
					else if (Local_7807[iVar1 /*8*/] == 14 || Local_7807[iVar1 /*8*/] == 15)
					{
						switch (Local_7807[iVar1 /*8*/].f_6)
						{
							case 0:
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2091[Local_7807[iVar1 /*8*/] /*88*/], 292.1405f, -566.4926f, 41.51077f, 273.1988f, -613.0173f, 46.31108f, 9.875f, 0, 1, 0) && VEHICLE::IS_VEHICLE_STOPPED(Local_2091[Local_7807[iVar1 /*8*/] /*88*/]))
								{
									VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_2091[Local_7807[iVar1 /*8*/] /*88*/]);
									Local_7807[iVar1 /*8*/].f_5 = (MISC::GET_GAME_TIMER() + Local_7807[iVar1 /*8*/].f_4);
									Local_7807[iVar1 /*8*/].f_6++;
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_7807[iVar1 /*8*/].f_5)
								{
									VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_2091[Local_7807[iVar1 /*8*/] /*88*/]);
									Local_7807[iVar1 /*8*/].f_6++;
								}
								break;
							}
						}
				}
				if (!Local_7807[iVar1 /*8*/].f_7 || ENTITY::DOES_ENTITY_EXIST(Local_2091[Local_7807[iVar1 /*8*/] /*88*/]))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (bVar0)
			{
				Local_4253[32 /*5*/].f_1++;
			}
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			GlobalFunc_746(&Local_4444, 11, &sLocal_381);
			GlobalFunc_746(&Local_4444, 12, &sLocal_381);
			GlobalFunc_746(&Local_4444, 14, &sLocal_381);
			GlobalFunc_746(&Local_4444, 16, &sLocal_381);
			if (((((iLocal_6072 >= 6 && STREAMING::HAS_MODEL_LOADED(joaat("firetruk"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, &sLocal_381))
			{
				Local_2091[4 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 200.0189f, -735.524f, 32.9126f, 340.4122f, 1, 1);
				Local_2091[5 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 205.0903f, -740.0325f, 32.7917f, 335.085f, 1, 1);
				Local_2091[4 /*88*/].f_1[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[4 /*88*/], 26, joaat("s_m_y_cop_01"), -1, 1, 1);
				Local_2091[5 /*88*/].f_1[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[5 /*88*/], 26, joaat("s_m_y_cop_01"), -1, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_2091[4 /*88*/].f_1[0 /*20*/], joaat("weapon_pistol"), 120, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_2091[5 /*88*/].f_1[0 /*20*/], joaat("weapon_pistol"), 120, 1, 1);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_2091[4 /*88*/].f_1[0 /*20*/], joaat("weapon_pistol"), joaat("component_at_pi_flsh"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_2091[5 /*88*/].f_1[0 /*20*/], joaat("weapon_pistol"), joaat("component_at_pi_flsh"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2091[4 /*88*/].f_1[0 /*20*/], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2091[5 /*88*/].f_1[0 /*20*/], 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_2091[4 /*88*/].f_1[0 /*20*/], 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_2091[5 /*88*/].f_1[0 /*20*/], 1);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[4 /*88*/], 2);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[5 /*88*/], 2);
				VEHICLE::SET_VEHICLE_SIREN(Local_2091[4 /*88*/], 1);
				VEHICLE::SET_VEHICLE_SIREN(Local_2091[5 /*88*/], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[4 /*88*/], 11, &sLocal_381, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[5 /*88*/], 12, &sLocal_381, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2091[4 /*88*/], 9035f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[4 /*88*/], 1);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[5 /*88*/], 1);
				Local_2091[12 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -42.9874f, -1008.37f, 28.0347f, 343.6827f, 1, 1);
				Local_2091[12 /*88*/].f_1[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[12 /*88*/], 26, joaat("s_m_y_fireman_01"), -1, 1, 1);
				Local_2091[12 /*88*/].f_1[1 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[12 /*88*/], 26, joaat("s_m_y_fireman_01"), 0, 1, 1);
				Local_2091[12 /*88*/].f_1[2 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[12 /*88*/], 26, joaat("s_m_y_fireman_01"), 1, 1, 1);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[12 /*88*/], 2);
				VEHICLE::SET_VEHICLE_SIREN(Local_2091[12 /*88*/], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[12 /*88*/], 14, &sLocal_381, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2091[12 /*88*/], 11689f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[12 /*88*/], 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_2091[12 /*88*/].f_1[0 /*20*/], 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_2091[12 /*88*/].f_1[1 /*20*/], 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_2091[12 /*88*/].f_1[2 /*20*/], 1);
				Local_2091[13 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), 121.2887f, -564.5789f, 42.4048f, 162.8673f, 1, 1);
				Local_2091[13 /*88*/].f_1[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[13 /*88*/], 26, joaat("s_m_y_fireman_01"), -1, 1, 1);
				Local_2091[13 /*88*/].f_1[1 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[13 /*88*/], 26, joaat("s_m_y_fireman_01"), 0, 1, 1);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_2091[13 /*88*/], 2);
				VEHICLE::SET_VEHICLE_SIREN(Local_2091[13 /*88*/], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[13 /*88*/], 16, &sLocal_381, 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_2091[13 /*88*/].f_1[0 /*20*/], 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_2091[13 /*88*/].f_1[1 /*20*/], 1);
				if (func_490() != 2)
				{
					GlobalFunc_5174(&Local_4444, joaat("ambulance"));
				}
				GlobalFunc_5174(&Local_4444, joaat("police3"));
				GlobalFunc_5174(&Local_4444, joaat("firetruk"));
				Local_4253[32 /*5*/].f_1++;
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[4 /*88*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[4 /*88*/]))
				{
					GlobalFunc_5185(&Local_4444, 11, &sLocal_381);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[4 /*88*/].f_1[0 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[4 /*88*/].f_1[0 /*20*/]))
					{
						switch (Local_2091[4 /*88*/].f_1[0 /*20*/].f_4)
						{
							case 0:
								if (!GlobalFunc_709(Local_2091[4 /*88*/].f_1[0 /*20*/], 242628503, 1))
								{
									PED::SET_PED_USING_ACTION_MODE(Local_2091[4 /*88*/].f_1[0 /*20*/], 1, -1, "DEFAULT_ACTION");
									func_468(1);
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[4 /*88*/].f_1[0 /*20*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									}
									TASK::TASK_SWAP_WEAPON(0, 1);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 153.3248f, -673.2049f, 41.0273f, 2f, -1, 0.25f, 0, 257.537f);
									TASK::TASK_AIM_GUN_AT_COORD(0, 166.6879f, -674.2803f, 42.9926f, -1, 0, 0);
									func_466(Local_2091[4 /*88*/].f_1[0 /*20*/], 1);
								}
								break;
							}
						}
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[5 /*88*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[5 /*88*/]))
				{
					GlobalFunc_5185(&Local_4444, 12, &sLocal_381);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[5 /*88*/].f_1[0 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[5 /*88*/].f_1[0 /*20*/]))
					{
						switch (Local_2091[5 /*88*/].f_1[0 /*20*/].f_4)
						{
							case 0:
								if (!GlobalFunc_709(Local_2091[5 /*88*/].f_1[0 /*20*/], 242628503, 1))
								{
									PED::SET_PED_USING_ACTION_MODE(Local_2091[5 /*88*/].f_1[0 /*20*/], 1, -1, "DEFAULT_ACTION");
									func_468(1);
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[5 /*88*/].f_1[0 /*20*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									}
									TASK::TASK_SWAP_WEAPON(0, 1);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 157.0855f, -683.5394f, 41.0273f, 2f, -1, 0.25f, 0, 315.1326f);
									TASK::TASK_AIM_GUN_AT_COORD(0, 166.6879f, -674.2803f, 42.9926f, -1, 0, 0);
									func_466(Local_2091[5 /*88*/].f_1[0 /*20*/], 1);
								}
								break;
							}
						}
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[12 /*88*/]))
				{
					GlobalFunc_5185(&Local_4444, 14, &sLocal_381);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/].f_1[0 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[12 /*88*/].f_1[0 /*20*/]))
					{
						switch (Local_2091[12 /*88*/].f_1[0 /*20*/].f_4)
						{
							case 0:
								if (!GlobalFunc_709(Local_2091[12 /*88*/].f_1[0 /*20*/], 242628503, 1))
								{
									func_468(1);
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[12 /*88*/].f_1[0 /*20*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 167.7315f, -678.7234f, 42.143f, 2f, -1, 0.25f, 0, 355.4801f);
									TASK::TASK_STAND_STILL(0, -1);
									func_466(Local_2091[12 /*88*/].f_1[0 /*20*/], 1);
								}
								break;
							}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/].f_1[1 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[12 /*88*/].f_1[1 /*20*/]))
					{
						switch (Local_2091[12 /*88*/].f_1[1 /*20*/].f_4)
						{
							case 0:
								if (!GlobalFunc_709(Local_2091[12 /*88*/].f_1[1 /*20*/], 242628503, 1))
								{
									func_468(1);
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[12 /*88*/].f_1[1 /*20*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 164.1439f, -674.0157f, 42.2516f, 2f, -1, 0.25f, 0, 269.737f);
									TASK::TASK_STAND_STILL(0, -1);
									func_466(Local_2091[12 /*88*/].f_1[1 /*20*/], 1);
								}
								break;
							}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/].f_1[2 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[12 /*88*/].f_1[2 /*20*/]))
					{
						switch (Local_2091[12 /*88*/].f_1[2 /*20*/].f_4)
						{
							case 0:
								if (!GlobalFunc_709(Local_2091[12 /*88*/].f_1[2 /*20*/], 242628503, 1))
								{
									func_468(1);
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[12 /*88*/].f_1[2 /*20*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 167.0532f, -670.3171f, 42.143f, 2f, -1, 0.25f, 0, 227.9952f);
									TASK::TASK_STAND_STILL(0, -1);
									func_466(Local_2091[12 /*88*/].f_1[2 /*20*/], 1);
								}
								break;
							}
						}
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[13 /*88*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[13 /*88*/]))
				{
					GlobalFunc_5185(&Local_4444, 16, &sLocal_381);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[13 /*88*/].f_1[0 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[13 /*88*/].f_1[0 /*20*/]))
					{
						switch (Local_2091[13 /*88*/].f_1[0 /*20*/].f_4)
						{
							case 0:
								if (!GlobalFunc_709(Local_2091[13 /*88*/].f_1[0 /*20*/], 242628503, 1))
								{
									func_468(1);
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[13 /*88*/].f_1[0 /*20*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 158.5242f, -676.4426f, 41.0273f, 2f, -1, 0.25f, 0, 285.7014f);
									TASK::TASK_STAND_STILL(0, -1);
									func_466(Local_2091[13 /*88*/].f_1[0 /*20*/], 1);
								}
								break;
							}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[13 /*88*/].f_1[1 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[13 /*88*/].f_1[1 /*20*/]))
					{
						switch (Local_2091[13 /*88*/].f_1[1 /*20*/].f_4)
						{
							case 0:
								if (!GlobalFunc_709(Local_2091[13 /*88*/].f_1[1 /*20*/], 242628503, 1))
								{
									func_468(1);
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2091[13 /*88*/].f_1[1 /*20*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 163.4239f, -668.7816f, 42.143f, 2f, -1, 0.25f, 0, 226.5554f);
									TASK::TASK_STAND_STILL(0, -1);
									func_466(Local_2091[13 /*88*/].f_1[1 /*20*/], 1);
								}
								break;
							}
						}
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[4 /*88*/].f_1[0 /*20*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_416, 1) > 300f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[4 /*88*/].f_1[0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2091[4 /*88*/].f_1[0 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[5 /*88*/].f_1[0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2091[5 /*88*/].f_1[0 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/].f_1[0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2091[12 /*88*/].f_1[0 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/].f_1[1 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2091[12 /*88*/].f_1[1 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/].f_1[2 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2091[12 /*88*/].f_1[2 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[13 /*88*/].f_1[0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2091[13 /*88*/].f_1[0 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[13 /*88*/].f_1[1 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2091[13 /*88*/].f_1[1 /*20*/]));
					}
					func_476(32);
				}
			}
			break;
	}
}

void func_876(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8654E
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
}

void func_877()//Position - 0x86582
{
	if (Local_4253[31 /*5*/].f_1 >= 2 && (((!ENTITY::DOES_ENTITY_EXIST(Local_2091[3 /*88*/].f_1[0 /*20*/]) || PED::IS_PED_INJURED(Local_2091[3 /*88*/].f_1[0 /*20*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_2091[3 /*88*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[3 /*88*/], 0)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2091[3 /*88*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2091[3 /*88*/]))
			{
				VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(Local_2091[3 /*88*/], 0, 1);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[3 /*88*/]));
		}
		AUDIO::TRIGGER_MUSIC_EVENT("AH3B_CHOPPER_DEAD");
		func_476(31);
	}
	else
	{
		switch (Local_4253[31 /*5*/].f_1)
		{
			case 1:
				GlobalFunc_718(&Local_4444, iLocal_370);
				GlobalFunc_718(&Local_4444, joaat("frogger"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")) && STREAMING::HAS_MODEL_LOADED(iLocal_370))
				{
					Local_2091[3 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger"), 298.5472f, -819.3707f, 141.6706f, 31.7617f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[3 /*88*/], 4);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[3 /*88*/], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[3 /*88*/]);
					VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_2091[3 /*88*/], 0.3f);
					GlobalFunc_5174(&Local_4444, joaat("frogger"));
					Local_2091[3 /*88*/].f_1[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2091[3 /*88*/], 26, iLocal_370, -1, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2091[3 /*88*/].f_1[0 /*20*/], 1);
					GlobalFunc_5174(&Local_4444, iLocal_370);
					Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 0;
					Local_4253[31 /*5*/].f_1++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_2091[3 /*88*/], 1), 245.2933f, -644.2856f, 95f) <= 10f)
				{
					Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 0;
					Local_4253[31 /*5*/].f_1++;
				}
				else if (!GlobalFunc_709(Local_2091[3 /*88*/].f_1[0 /*20*/], -1273030092, 1) || Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 == 0)
				{
					TASK::TASK_HELI_MISSION(Local_2091[3 /*88*/].f_1[0 /*20*/], Local_2091[3 /*88*/], 0, 0, 245.2933f, -644.2856f, 94.4383f, 4, 50f, 8f, 109.9122f, 95, 20, -1f, 0);
					Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 1;
				}
				break;
			
			case 3:
			case 4:
				if (func_643(30))
				{
					Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 0;
					Local_4253[31 /*5*/].f_1++;
				}
				else if (Local_4253[31 /*5*/].f_1 == 3)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_2091[3 /*88*/], 1), 214.1013f, -622.1078f, 95f) <= 10f)
					{
						Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 0;
						Local_4253[31 /*5*/].f_1++;
					}
					else if (!GlobalFunc_709(Local_2091[3 /*88*/].f_1[0 /*20*/], -1273030092, 1) || Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 == 0)
					{
						TASK::TASK_HELI_MISSION(Local_2091[3 /*88*/].f_1[0 /*20*/], Local_2091[3 /*88*/], 0, 0, 214.1013f, -622.1078f, 95f, 4, 15f, 8f, 94.8032f, 95, 20, -1f, 0);
						Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 1;
					}
				}
				else if (Local_4253[31 /*5*/].f_1 == 4)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_2091[3 /*88*/], 1), 245.2933f, -644.2856f, 95f) <= 10f)
					{
						Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 0;
						Local_4253[31 /*5*/].f_1 = (Local_4253[31 /*5*/].f_1 - 1);
					}
					else if (!GlobalFunc_709(Local_2091[3 /*88*/].f_1[0 /*20*/], -1273030092, 1) || Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 == 0)
					{
						TASK::TASK_HELI_MISSION(Local_2091[3 /*88*/].f_1[0 /*20*/], Local_2091[3 /*88*/], 0, 0, 245.2933f, -644.2856f, 95f, 4, 15f, 8f, 109.9122f, 95, 20, -1f, 0);
						Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 1;
					}
				}
				break;
			
			case 5:
				if (!GlobalFunc_709(Local_2091[3 /*88*/].f_1[0 /*20*/], -1273030092, 1) || Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 == 0)
				{
					TASK::TASK_HELI_MISSION(Local_2091[3 /*88*/].f_1[0 /*20*/], Local_2091[3 /*88*/], 0, 0, 176.3758f, -693.5321f, 94.1927f, 4, 30f, 8f, 84.0092f, 130, 20, -1f, 0);
					Local_2091[3 /*88*/].f_1[0 /*20*/].f_4 = 1;
				}
				break;
			
			case 6:
				break;
		}
		if (((ENTITY::DOES_ENTITY_EXIST(Local_2091[3 /*88*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[3 /*88*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_2091[3 /*88*/].f_1[0 /*20*/])) && !PED::IS_PED_INJURED(Local_2091[3 /*88*/].f_1[0 /*20*/]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_2091[3 /*88*/].f_1[0 /*20*/], -1273030092) == 1)
			{
				if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(Local_2091[3 /*88*/]))
				{
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_2091[3 /*88*/], 1, 1);
				}
				if (!TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Local_2091[3 /*88*/].f_1[0 /*20*/]))
				{
					TASK::CONTROL_MOUNTED_WEAPON(Local_2091[3 /*88*/].f_1[0 /*20*/]);
				}
				switch (Local_4253[31 /*5*/].f_1)
				{
					case 2:
					case 3:
					case 4:
						if ((func_603(30) && ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[2 /*88*/], 0))
						{
							TASK::SET_MOUNTED_WEAPON_TARGET(Local_2091[3 /*88*/].f_1[0 /*20*/], 0, 0, ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1));
						}
						else
						{
							TASK::SET_MOUNTED_WEAPON_TARGET(Local_2091[3 /*88*/].f_1[0 /*20*/], 0, 0, 187.76f, -672.66f, 41.41f);
						}
						break;
					
					case 5:
						if (func_661(32) && Local_4253[32 /*5*/].f_1 == 4)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2091[12 /*88*/]))
							{
								TASK::SET_MOUNTED_WEAPON_TARGET(Local_2091[3 /*88*/].f_1[0 /*20*/], 0, 0, ENTITY::GET_ENTITY_COORDS(Local_2091[12 /*88*/].f_1[0 /*20*/], 1));
							}
						}
						else
						{
							TASK::SET_MOUNTED_WEAPON_TARGET(Local_2091[3 /*88*/].f_1[0 /*20*/], 0, 0, 187.76f, -672.66f, 41.41f);
						}
						break;
					
					case 6:
						break;
					}
				}
			}
	}
}

void func_878()//Position - 0x86C12
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7[2];
	float fVar10[2];
	float fVar13;
	struct<3> Var14;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	struct<3> Var40;
	struct<3> Var43;
	float fVar46;
	
	if (Local_4253[30 /*5*/].f_1 >= 2 && (((!ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[0 /*20*/]) || PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[0 /*20*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[2 /*88*/], 0)))
	{
		if (HUD::DOES_BLIP_EXIST(Local_2091[2 /*88*/].f_82))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2091[2 /*88*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[2 /*88*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[2 /*88*/]);
				}
				VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(Local_2091[2 /*88*/], 0, 1);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Chopper_Goes_Down", Local_2091[2 /*88*/], "FBI_HEIST_FIGHT_CHOPPER_SOUNDS", 0, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Chopper_Destroyed", Local_2091[2 /*88*/], "FBI_HEIST_FIGHT_CHOPPER_SOUNDS", 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[2 /*88*/]));
				}
				func_476(30);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("AH3B_CHOPPER_DEAD");
			GlobalFunc_703(&(Local_2091[2 /*88*/].f_82));
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_2091[2 /*88*/]))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Chopper_Destroyed", Local_2091[2 /*88*/], "FBI_HEIST_FIGHT_CHOPPER_SOUNDS", 0, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2091[2 /*88*/]));
			func_476(30);
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1) };
			Var0.f_2 = 0f;
			Var3 = { GlobalFunc_107(Var0 - Vector(0f, -749.3968f, 135.0158f)) };
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_2091[2 /*88*/], 0, Var3 * Vector(10f, 10f, 10f), 0, 0, 1, 0);
		}
		GlobalFunc_5185(&Local_4444, 4, &sLocal_381);
	}
	else
	{
		if (Local_4253[30 /*5*/].f_1 >= 4)
		{
			iVar6 = TASK::GET_SCRIPT_TASK_STATUS(Local_2091[2 /*88*/].f_1[0 /*20*/], -1273030092);
			if (iVar6 == 1)
			{
				if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_2091[2 /*88*/].f_1[0 /*20*/]))
				{
					TASK::TASK_DRIVE_BY(Local_2091[2 /*88*/].f_1[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 2000f, 100, 1, -1857128337);
				}
			}
		}
		switch (Local_4253[30 /*5*/].f_1)
		{
			case 1:
				GlobalFunc_718(&Local_4444, iLocal_360);
				GlobalFunc_718(&Local_4444, iLocal_370);
				GlobalFunc_718(&Local_4444, iLocal_364);
				GlobalFunc_746(&Local_4444, 4, &sLocal_381);
				GlobalFunc_727(&Local_4444, "ah3b_heli_bullets");
				if ((((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_360)) && STREAMING::HAS_MODEL_LOADED(iLocal_364)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, &sLocal_381)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("ah3b_heli_bullets"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_2091[2 /*88*/], 100.1619f, -723.7661f, 79.8182f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_2091[2 /*88*/], -72.0956f);
					}
					else
					{
						Local_2091[2 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_360, 100.1619f, -723.7661f, 79.8182f, -72.0956f, 1, 1);
					}
					func_476(29);
					if (!ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[0 /*20*/]))
					{
						func_871(&(Local_2091[2 /*88*/].f_1[0 /*20*/]), iLocal_370, &(Local_2091[2 /*88*/]), -1, "ATT_PILOT", iLocal_625, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
					}
					func_671(&(Local_2091[2 /*88*/].f_1[0 /*20*/]), 0);
					func_871(&(Local_2091[2 /*88*/].f_1[1 /*20*/]), iLocal_364, &(Local_2091[2 /*88*/]), 1, "ATT_GUNNER_L", iLocal_625, joaat("weapon_carbinerifle"), joaat("component_at_scope_medium"), 5, -1, 0, 1, 1);
					func_871(&(Local_2091[2 /*88*/].f_1[2 /*20*/]), iLocal_364, &(Local_2091[2 /*88*/]), 2, "ATT_GUNNER_R", iLocal_625, joaat("weapon_carbinerifle"), joaat("component_at_scope_medium"), 5, -1, 0, 1, 1);
					Local_2091[2 /*88*/].f_1[0 /*20*/].f_6 = 0;
					Local_2091[2 /*88*/].f_1[1 /*20*/].f_6 = 0;
					Local_2091[2 /*88*/].f_1[2 /*20*/].f_6 = 0;
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2091[2 /*88*/], "AH_3B_ENEMY_CHOPPER_GROUP", 0f);
					PED::SET_PED_PROP_INDEX(Local_2091[2 /*88*/].f_1[0 /*20*/], 0, 0, 0, false);
					PED::SET_PED_COMPONENT_VARIATION(Local_2091[2 /*88*/].f_1[0 /*20*/], 9, 1, 0, 0);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[2 /*88*/]);
					TASK::CONTROL_MOUNTED_WEAPON(Local_2091[2 /*88*/].f_1[0 /*20*/]);
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_2091[2 /*88*/].f_1[0 /*20*/], joaat("vehicle_weapon_player_buzzard"));
					PED::SET_PED_CAN_BE_TARGETTED(Local_2091[2 /*88*/].f_1[0 /*20*/], 0);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_2091[2 /*88*/], 1);
					VEHICLE::_0x4D9D109F63FEE1D4(Local_2091[2 /*88*/], 1);
					GlobalFunc_5174(&Local_4444, iLocal_360);
					GlobalFunc_5174(&Local_4444, iLocal_370);
					GlobalFunc_5174(&Local_4444, iLocal_364);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_2091[2 /*88*/].f_1[0 /*20*/], 0);
					PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 29, false);
					PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 208, true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[2 /*88*/], 4, &sLocal_381, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2091[2 /*88*/], 2000f);
					VEHICLE::_0xFAF2A78061FD9EF4(Local_2091[2 /*88*/], 0f, 0f, 2f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[2 /*88*/], 1);
					func_604(&(Local_2091[2 /*88*/].f_82), Local_2091[2 /*88*/], 1);
					func_880(30, 0);
				}
				break;
			
			case 2:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[2 /*88*/]) && !PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[0 /*20*/]))
				{
					fVar13 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2091[2 /*88*/]);
					if (fVar13 >= 11028.56f)
					{
						func_880(30, 0);
					}
					else if (fVar13 > 3908.487f)
					{
						Var14 = { 0f, 0f, 1f };
						TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("ah3b_heli_bullets", &iVar23);
						iVar24 = (iVar23 - 1);
						fVar17 = (11028.56f - 3908.487f);
						fVar18 = (fVar17 / IntToFloat(iVar24));
						fVar19 = (fVar13 - 3908.487f);
						iVar25 = GlobalFunc_254(SYSTEM::CEIL((fVar19 / fVar18)), 1, (iVar23 - 1));
						fVar21 = (IntToFloat((iVar25 - 1)) * fVar18);
						fVar22 = (IntToFloat(iVar25) * fVar18);
						fVar20 = GlobalFunc_253(((fVar19 - fVar21) / (fVar22 - fVar21)), 0f, 1f);
						if (TASK::WAYPOINT_RECORDING_GET_COORD("ah3b_heli_bullets", (iVar25 - 1), &Var29) && TASK::WAYPOINT_RECORDING_GET_COORD("ah3b_heli_bullets", iVar25, &Var32))
						{
							Var26 = { GlobalFunc_721(Var29, Var32, fVar20) + Var14 };
						}
						else
						{
							Var26 = { 0f, 0f, 0f };
						}
						if (!GlobalFunc_105(Var26))
						{
							if (!GlobalFunc_709(Local_2091[2 /*88*/].f_1[0 /*20*/], 2104565373, 1))
							{
								PED::SET_PED_ACCURACY(Local_2091[2 /*88*/].f_1[0 /*20*/], 20);
								PED::SET_PED_FIRING_PATTERN(Local_2091[2 /*88*/].f_1[0 /*20*/], -957453492);
								PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2091[2 /*88*/].f_1[0 /*20*/], 1);
								TASK::TASK_DRIVE_BY(Local_2091[2 /*88*/].f_1[0 /*20*/], 0, 0, Var26, 1000f, 100, 0, -957453492);
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2091[2 /*88*/].f_1[0 /*20*/], 2104565373) == 1)
							{
								TASK::SET_DRIVEBY_TASK_TARGET(Local_2091[2 /*88*/].f_1[0 /*20*/], 0, 0, Var26);
							}
						}
					}
				}
				else
				{
					func_880(30, 0);
				}
				break;
			
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[2 /*88*/], 0) && !PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[0 /*20*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[2 /*88*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[2 /*88*/]);
					}
					TASK::CLEAR_PED_TASKS(Local_2091[2 /*88*/].f_1[0 /*20*/]);
					PED::SET_PED_FIRING_PATTERN(Local_2091[2 /*88*/].f_1[0 /*20*/], -1857128337);
					PED::SET_PED_ACCURACY(Local_2091[2 /*88*/].f_1[0 /*20*/], 5);
					PED::SET_PED_SHOOT_RATE(Local_2091[2 /*88*/].f_1[0 /*20*/], 100);
					GlobalFunc_5185(&Local_4444, 4, &sLocal_381);
					GlobalFunc_5186(&Local_4444, "ah3b_heli_bullets");
					iLocal_7913 = 1;
					iLocal_7914 = 1;
					Local_4253[30 /*5*/].f_1++;
				}
				break;
			
			case 4:
				if (MISC::GET_GAME_TIMER() > iLocal_7965)
				{
					fVar35 = 1E+09f;
					fVar36 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
					if (fVar36 < fVar35)
					{
						fVar35 = fVar36;
						iLocal_7970 = PLAYER::PLAYER_PED_ID();
					}
					fVar36 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1), ENTITY::GET_ENTITY_COORDS(func_447(), 1));
					if (fVar36 < fVar35)
					{
						fVar35 = fVar36;
						iLocal_7970 = func_447();
					}
					fVar36 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1), ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1));
					if (fVar36 < fVar35)
					{
						fVar35 = fVar36;
						iLocal_7970 = Local_630[3 /*20*/];
					}
					iLocal_7965 = MISC::GET_GAME_TIMER() + 7000;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[1 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[1 /*20*/]))
				{
					if (!GlobalFunc_709(Local_2091[2 /*88*/].f_1[1 /*20*/], 780511057, 1))
					{
						TASK::TASK_COMBAT_PED(Local_2091[2 /*88*/].f_1[1 /*20*/], iLocal_7970, 0, 16);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[2 /*20*/]) && !PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[2 /*20*/]))
				{
					if (!GlobalFunc_709(Local_2091[2 /*88*/].f_1[2 /*20*/], 780511057, 1))
					{
						TASK::TASK_COMBAT_PED(Local_2091[2 /*88*/].f_1[2 /*20*/], iLocal_7970, 0, 16);
					}
				}
				if (iLocal_7913 != 2)
				{
					iVar38 = ENTITY::GET_ENTITY_HEALTH(Local_2091[2 /*88*/].f_1[0 /*20*/]);
					if (iVar38 < iLocal_7968)
					{
						iLocal_7966 = (iLocal_7966 + (iLocal_7968 - iVar38));
					}
					iLocal_7968 = iVar38;
					iVar38 = ENTITY::GET_ENTITY_HEALTH(Local_2091[2 /*88*/]);
					if (iVar38 < iLocal_7969)
					{
						iLocal_7967 = (iLocal_7967 + (iLocal_7969 - iVar38));
					}
					iLocal_7969 = iVar38;
				}
				else
				{
					iLocal_7966 = 0;
					iLocal_7967 = 0;
					iLocal_7968 = ENTITY::GET_ENTITY_HEALTH(Local_2091[2 /*88*/].f_1[0 /*20*/]);
					iLocal_7969 = ENTITY::GET_ENTITY_HEALTH(Local_2091[2 /*88*/]);
				}
				iLocal_7914 = iLocal_7913;
				if (iLocal_7913 != 2 && (((iLocal_7966 > 25 || iLocal_7967 > 50) || (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[1 /*20*/]) && PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[1 /*20*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[2 /*20*/]) && PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[2 /*20*/]))))
				{
					iLocal_7966 = 0;
					iLocal_7967 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[1 /*20*/]) && PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[1 /*20*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[2 /*88*/].f_1[1 /*20*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2091[2 /*88*/].f_1[2 /*20*/]) && PED::IS_PED_INJURED(Local_2091[2 /*88*/].f_1[2 /*20*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[2 /*88*/].f_1[2 /*20*/]));
					}
					if (GlobalFunc_745())
					{
						if (iLocal_7963 + 1 < Local_7915.x)
						{
							iLocal_7963 += 2;
						}
						else
						{
							iLocal_7963 = (iLocal_7963 - 2);
						}
					}
					else if ((iLocal_7963 - 1) >= 0)
					{
						iLocal_7963 = (iLocal_7963 - 2);
					}
					else
					{
						iLocal_7963 += 2;
					}
					iLocal_7963 = GlobalFunc_254(iLocal_7963, 0, (Local_7915.x - 1));
					iLocal_7964 = MISC::GET_GAME_TIMER();
					iLocal_7913 = 2;
				}
				else
				{
					switch (iLocal_7913)
					{
						case 2:
							if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1), Local_7915[iLocal_7963 /*3*/], 5f))
							{
								iLocal_7964 = MISC::GET_GAME_TIMER();
								iLocal_7913 = 0;
							}
							break;
						
						case 1:
							if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1), Local_7915[iLocal_7963 /*3*/], 5f))
							{
								iLocal_7964 = MISC::GET_GAME_TIMER();
								iLocal_7913 = 0;
							}
							break;
						
						case 0:
							if ((MISC::GET_GAME_TIMER() - iLocal_7964) > 5000)
							{
								iVar7[0] = -1;
								fVar10[0] = -1f;
								iVar37 = 0;
								while (iVar37 < Local_7915.x)
								{
									if (iVar37 != iLocal_7963)
									{
										fVar39 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_7970, 1), Local_7915[iVar37 /*3*/]);
										if ((iVar7[0] == -1 || fVar10[0] == -1f) || fVar39 < fVar10[0])
										{
											fVar10[0] = fVar39;
											iVar7[0] = iVar37;
										}
									}
									iVar37++;
								}
								if (iVar7[0] != -1)
								{
									iLocal_7963 = iVar7[0];
								}
								iLocal_7964 = MISC::GET_GAME_TIMER();
								iLocal_7913 = 1;
							}
							break;
						}
				}
				switch (iLocal_7913)
				{
					case 2:
						if (!GlobalFunc_709(Local_2091[2 /*88*/].f_1[0 /*20*/], -1273030092, 1) || iLocal_7914 != iLocal_7913)
						{
							TASK::TASK_HELI_MISSION(Local_2091[2 /*88*/].f_1[0 /*20*/], Local_2091[2 /*88*/], 0, 0, Local_7915[iLocal_7963 /*3*/], 4, 40f, 5f, -1f, 80, 20, -1f, 0);
						}
						if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_2091[2 /*88*/].f_1[0 /*20*/]))
						{
							TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_2091[2 /*88*/].f_1[0 /*20*/]);
						}
						break;
					
					case 1:
						if ((!GlobalFunc_709(Local_2091[2 /*88*/].f_1[0 /*20*/], -1273030092, 1) || iLocal_7914 != iLocal_7913) || !PED::IS_PED_FACING_PED(Local_2091[2 /*88*/].f_1[0 /*20*/], iLocal_7970, 60f))
						{
							Var40 = { ENTITY::GET_ENTITY_COORDS(iLocal_7970, 1) };
							Var43 = { ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1) };
							fVar46 = MISC::GET_HEADING_FROM_VECTOR_2D((Var40.x - Var43.x), (Var40.f_1 - Var43.f_1));
							TASK::TASK_HELI_MISSION(Local_2091[2 /*88*/].f_1[0 /*20*/], Local_2091[2 /*88*/], 0, 0, Local_7915[iLocal_7963 /*3*/], 4, 30f, 5f, fVar46, 80, 20, -1f, 0);
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2091[2 /*88*/].f_1[0 /*20*/], -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_2091[2 /*88*/].f_1[0 /*20*/]))
						{
							TASK::CONTROL_MOUNTED_WEAPON(Local_2091[2 /*88*/].f_1[0 /*20*/]);
							WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_2091[2 /*88*/].f_1[0 /*20*/], joaat("vehicle_weapon_player_buzzard"));
							TASK::TASK_DRIVE_BY(Local_2091[2 /*88*/].f_1[0 /*20*/], iLocal_7970, 0, 0f, 0f, 0f, 1000f, 100, 1, -1857128337);
						}
						break;
					
					case 0:
						if ((!GlobalFunc_709(Local_2091[2 /*88*/].f_1[0 /*20*/], -1273030092, 1) || iLocal_7914 != iLocal_7913) || !PED::IS_PED_FACING_PED(Local_2091[2 /*88*/].f_1[0 /*20*/], iLocal_7970, 60f))
						{
							Var40 = { ENTITY::GET_ENTITY_COORDS(iLocal_7970, 1) };
							Var43 = { ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1) };
							fVar46 = MISC::GET_HEADING_FROM_VECTOR_2D((Var40.x - Var43.x), (Var40.f_1 - Var43.f_1));
							TASK::TASK_HELI_MISSION(Local_2091[2 /*88*/].f_1[0 /*20*/], Local_2091[2 /*88*/], 0, 0, Local_7915[iLocal_7963 /*3*/], 4, 30f, 5f, fVar46, 80, 20, -1f, 0);
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2091[2 /*88*/].f_1[0 /*20*/], -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_2091[2 /*88*/].f_1[0 /*20*/]))
						{
							TASK::CONTROL_MOUNTED_WEAPON(Local_2091[2 /*88*/].f_1[0 /*20*/]);
							WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_2091[2 /*88*/].f_1[0 /*20*/], joaat("vehicle_weapon_player_buzzard"));
							TASK::TASK_DRIVE_BY(Local_2091[2 /*88*/].f_1[0 /*20*/], iLocal_7970, 0, 0f, 0f, 0f, 1000f, 100, 1, -1857128337);
						}
						break;
				}
				break;
			}
	}
	if (func_643(30))
	{
		GlobalFunc_5174(&Local_4444, iLocal_360);
		GlobalFunc_5174(&Local_4444, iLocal_370);
	}
}


void func_880(int iParam0, int iParam1)//Position - 0x87B55
{
	if (iParam1 > 0)
	{
		Local_4253[iParam0 /*5*/] = 2;
		Local_4253[iParam0 /*5*/].f_2 = MISC::GET_GAME_TIMER();
		Local_4253[iParam0 /*5*/].f_3 = iParam1;
	}
	Local_4253[iParam0 /*5*/].f_1++;
}

void func_881()//Position - 0x87B97
{
	switch (Local_4253[29 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_360);
			GlobalFunc_718(&Local_4444, iLocal_370);
			GlobalFunc_746(&Local_4444, 2, &sLocal_381);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_360)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, &sLocal_381))
			{
				Local_2091[2 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_360, 139.0329f, -789.1915f, 151.4856f, 0f, 1, 1);
				func_871(&(Local_2091[2 /*88*/].f_1[0 /*20*/]), iLocal_370, &(Local_2091[2 /*88*/]), -1, "CREW_PILOT", iLocal_625, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
				func_671(&(Local_2091[2 /*88*/].f_1[0 /*20*/]), 0);
				PED::SET_PED_PROP_INDEX(Local_2091[2 /*88*/].f_1[0 /*20*/], 0, 0, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_2091[2 /*88*/].f_1[0 /*20*/], 9, 1, 0, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_2091[2 /*88*/].f_1[0 /*20*/], 0);
				PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 116, false);
				PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 29, false);
				PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_2091[2 /*88*/].f_1[0 /*20*/], 208, true);
				GlobalFunc_5174(&Local_4444, iLocal_360);
				GlobalFunc_5174(&Local_4444, iLocal_370);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[2 /*88*/], 2, &sLocal_381, 1);
				VEHICLE::SET_PLAYBACK_SPEED(Local_2091[2 /*88*/], 0.75f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2091[2 /*88*/], 5000f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[2 /*88*/]);
				func_880(29, 0);
			}
			break;
		
		case 2:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[2 /*88*/]))
			{
				VEHICLE::_0xFAF2A78061FD9EF4(Local_2091[2 /*88*/], 0f, 0f, 50f);
			}
			else
			{
				PED::DELETE_PED(&(Local_2091[2 /*88*/].f_1[0 /*20*/]));
				VEHICLE::DELETE_VEHICLE(&(Local_2091[2 /*88*/]));
				GlobalFunc_5185(&Local_4444, 2, &sLocal_381);
				func_476(29);
			}
			break;
	}
}

void func_882()//Position - 0x87D7B
{
	struct<3> Var0;
	struct<3> Var3;
	
	switch (Local_4253[28 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_RPG")));
			GlobalFunc_734(&Local_4444);
			if ((STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_RPG"))) && STREAMING::HAS_PTFX_ASSET_LOADED()) && ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]))
			{
				Local_7120.f_5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2091[2 /*88*/], 1.7354f, -1.8334f, -0.4724f) };
				Local_7120 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_RPG")), Local_7120.f_5, 1, 1, 0);
				Local_7120.f_1 = Local_2091[1 /*88*/];
				Local_7120.f_11 = { 0.0453f, -7.5946f, 1.6338f };
				Local_7120.f_18 = 0;
				Local_7120.f_19 = 0;
				Local_7120.f_20 = 0;
				Local_7120.f_17 = 40f;
				Local_7120.f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_agency3b_proj_rpg_trail", Local_7120, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
				ENTITY::SET_ENTITY_LOD_DIST(Local_7120, 500);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_7120, Local_2091[2 /*88*/], 0);
				ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_7120, 1);
				GlobalFunc_5174(&Local_4444, WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_RPG")));
				Local_4253[28 /*5*/].f_1++;
			}
			break;
	}
	if (Local_4253[28 /*5*/].f_1 >= 2 && ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_7120))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_7120, 1) };
			if (!Local_7120.f_18 && !ENTITY::IS_ENTITY_DEAD(Local_7120.f_1))
			{
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7120.f_1, Local_7120.f_11) };
				Local_7120.f_2 = { Var3 - Var0 / FtoV(SYSTEM::VMAG(Var3 - Var0)) };
				if (SYSTEM::VDIST2(Var0, Var3) < 25f)
				{
					Local_7120.f_18 = 1;
					Local_7120.f_21 = MISC::GET_GAME_TIMER();
				}
				Local_7120.f_14 = { Local_7120.f_2 * Vector(Local_7120.f_17, Local_7120.f_17, Local_7120.f_17) };
				if (Local_7120.f_19)
				{
					Local_7120.f_14 = { Local_7120.f_14 + ENTITY::GET_ENTITY_VELOCITY(Local_7120.f_1) };
				}
			}
			Local_7120.f_8 = { 0f, 0f, 0f };
			Local_7120.f_8 = MISC::ATAN2(Local_7120.f_2.f_2, SYSTEM::VMAG(Local_7120.f_2, Local_7120.f_2.f_1, 0f));
			Local_7120.f_8.f_2 = (MISC::ATAN2(Local_7120.f_2.f_1, Local_7120.f_2) - 90f);
			ENTITY::SET_ENTITY_VELOCITY(Local_7120, Local_7120.f_14);
			ENTITY::SET_ENTITY_ROTATION(Local_7120, Local_7120.f_8, 2, 1);
			if ((Local_7120.f_18 && (MISC::GET_GAME_TIMER() - Local_7120.f_21) > 3000) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_7120))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_7120.f_1))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_7120, Local_7120.f_1))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_7120.f_1, 1);
					}
				}
				FIRE::ADD_EXPLOSION(Var0, 4, 1f, 1, 0, 1065353216);
				FIRE::ADD_EXPLOSION(129.716f, -744.668f, 263.7435f, 4, 1f, 0, 1, 0f);
				iLocal_3935[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_agency3b_shot_chopper", Local_2091[1 /*88*/], 0.0453f, -7.5946f, 1.6338f, 0f, 0f, 0f, 1f, 0, 0, 0);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_7120.f_23))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_7120.f_23, 0);
					Local_7120.f_23 = 0;
				}
				OBJECT::DELETE_OBJECT(&Local_7120);
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HELI_HIT");
				func_476(28);
			}
		}
	}
}

void func_883()//Position - 0x880C8
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	
	if (iLocal_7117 > 1 && iLocal_7117 < 9)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (GlobalFunc_4926(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_7117 != 99)
		{
			iLocal_7117 = 99;
			iLocal_7119 = 99;
			func_476(28);
			AUDIO::STOP_STREAM();
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			STREAMING::END_SRL();
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
			{
				CAM::DESTROY_CAM(uLocal_3852[7], 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_3852[8]))
			{
				CAM::DESTROY_CAM(uLocal_3852[8], 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_3852[9]))
			{
				CAM::DESTROY_CAM(uLocal_3852[9], 0);
			}
			GlobalFunc_5184(&Local_4444, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 0);
			Local_4253[27 /*5*/].f_1 = 4;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[1 /*88*/]))
	{
		fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2091[1 /*88*/]);
	}
	switch (Local_4253[27 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_359);
			GlobalFunc_718(&Local_4444, iLocal_369);
			GlobalFunc_746(&Local_4444, 101, &sLocal_381);
			GlobalFunc_746(&Local_4444, 201, &sLocal_381);
			iLocal_7117 = 0;
			iLocal_7119 = -1;
			iLocal_7106 = 0;
			iLocal_7144 = 0;
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_359) && STREAMING::HAS_MODEL_LOADED(iLocal_369)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, &sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, &sLocal_381))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/]))
					{
						PED::DELETE_PED(&(Local_630[5 /*20*/]));
					}
					VEHICLE::DELETE_VEHICLE(&(Local_2091[1 /*88*/]));
				}
				Local_2091[1 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_359, 230.8776f, -680.0508f, 286.7156f, 320.1096f, 1, 1);
				GlobalFunc_743(Local_2091[1 /*88*/], 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2091[1 /*88*/], 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[1 /*88*/], 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_2091[1 /*88*/], 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2091[1 /*88*/], 1);
				func_871(&(Local_630[5 /*20*/]), iLocal_369, &(Local_2091[1 /*88*/]), -1, "CREA_PILOT", iLocal_624, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_630[5 /*20*/], 9, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(Local_630[5 /*20*/], 0, 0, 0, false);
				GlobalFunc_5174(&Local_4444, iLocal_369);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2091[1 /*88*/], 0);
				PED::SET_PED_CONFIG_FLAG(Local_630[5 /*20*/], 116, false);
				PED::SET_PED_CONFIG_FLAG(Local_630[5 /*20*/], 29, false);
				PED::SET_PED_CONFIG_FLAG(Local_630[5 /*20*/], 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_630[5 /*20*/], 208, true);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/], 101, &sLocal_381, 1);
				func_535();
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[1 /*88*/]);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_4201 = 1;
				iLocal_7118 = -1;
				Local_2091[1 /*88*/].f_1[0 /*20*/].f_4 = 0;
				iLocal_7119 = 0;
				func_880(27, 0);
			}
			break;
		
		case 2:
			GlobalFunc_718(&Local_4444, iLocal_360);
			GlobalFunc_718(&Local_4444, iLocal_370);
			GlobalFunc_718(&Local_4444, WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_RPG")));
			GlobalFunc_718(&Local_4444, joaat("prop_ld_test_01"));
			GlobalFunc_746(&Local_4444, 102, &sLocal_381);
			GlobalFunc_746(&Local_4444, 203, &sLocal_381);
			GlobalFunc_746(&Local_4444, 103, &sLocal_381);
			GlobalFunc_746(&Local_4444, 104, &sLocal_381);
			GlobalFunc_719(&Local_4444, "missheistfbi3b_helicrash");
			GlobalFunc_734(&Local_4444);
			GlobalFunc_724(&Local_4444, "FBI_Heist_Finale_Heli_Crash");
			AUDIO::PREPARE_MUSIC_EVENT("AH3B_HELI_SHOOTS_HELI");
			AUDIO::LOAD_STREAM("THE_AGENCY_HEIST_HELICOPTER_SHOT_DOWN_MASTER", 0);
			STREAMING::PREFETCH_SRL("ah3bHeliCrash");
			func_880(27, 0);
			break;
		
		case 3:
			switch (Local_2091[1 /*88*/].f_1[0 /*20*/].f_4)
			{
				case 0:
					if (fVar0 >= 23785.89f && func_889(&(Local_2091[1 /*88*/]), 0.4f, 2000))
					{
						Local_2091[1 /*88*/].f_1[0 /*20*/].f_4++;
					}
					break;
				
				case 1:
					if (fVar0 >= 28438.89f)
					{
						Local_2091[1 /*88*/].f_1[0 /*20*/].f_4++;
					}
					break;
				
				case 2:
					if (func_889(&(Local_2091[1 /*88*/]), -0.4f, 1000))
					{
						Local_2091[1 /*88*/].f_1[0 /*20*/].f_4++;
					}
					break;
				
				case 3:
					if (fVar0 <= 23785.89f)
					{
						Local_2091[1 /*88*/].f_1[0 /*20*/].f_4++;
					}
					break;
				
				case 4:
					if (func_889(&(Local_2091[1 /*88*/]), 0.4f, 1000))
					{
						Local_2091[1 /*88*/].f_1[0 /*20*/].f_4 = 1;
					}
					break;
			}
			if (iLocal_7106)
			{
				iVar1 = 1;
				if (!(MISC::GET_GAME_TIMER() - iLocal_7118) >= 3000)
				{
					iVar1 = 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_360))
				{
					iVar1 = 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_370))
				{
					iVar1 = 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
				{
					iVar1 = 0;
				}
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, &sLocal_381))
				{
					iVar1 = 0;
				}
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, &sLocal_381))
				{
					iVar1 = 0;
				}
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, &sLocal_381))
				{
					iVar1 = 0;
				}
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, &sLocal_381))
				{
					iVar1 = 0;
				}
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, &sLocal_381))
				{
					iVar1 = 0;
				}
				if (!AUDIO::LOAD_STREAM("THE_AGENCY_HEIST_HELICOPTER_SHOT_DOWN_MASTER", 0))
				{
					iVar1 = 0;
				}
				if (!STREAMING::HAS_ANIM_DICT_LOADED("missheistfbi3b_helicrash"))
				{
					iVar1 = 0;
				}
				if (!STREAMING::IS_SRL_LOADED())
				{
					iVar1 = 0;
				}
				if (((iVar1 && iLocal_6482 != 0) && iLocal_6482 != 2) && (iLocal_6493 == -1 || (MISC::GET_GAME_TIMER() - iLocal_6493) > 2000))
				{
					iLocal_4201 = 0;
					fLocal_6465 = 0f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(func_106(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 1);
					HUD::CLEAR_HELP(1);
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					iLocal_7117 = 1;
					STREAMING::_0xEF39EE20C537E98C(151.0806f, -755.261f, 259.3411f, Vector(258.6601f, -753.5327f, 145.9581f) - Vector(259.3411f, -755.261f, 151.0806f));
					GlobalFunc_4956();
					func_880(27, 0);
				}
			}
			break;
		
		case 4:
			VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(1500f);
			if (iLocal_7117 == 99 || CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADED_OUT() || (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_HELICOPTER_MISSILE_CUTSCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("AH_3B_HELICOPTER_MISSILE_CUTSCENE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SHOOTOUT_CONTINUED"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_SHOOTOUT_CONTINUED");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HELI_CRASHED");
					if (!func_603(12))
					{
						func_645(12, 0);
					}
					GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Local_2091[1 /*88*/], 0);
					PED::DELETE_PED(&(Local_630[5 /*20*/]));
					func_888(&(Local_2091[1 /*88*/]));
					func_888(&(Local_2091[2 /*88*/]));
					if (ENTITY::DOES_ENTITY_EXIST(Local_7120))
					{
						OBJECT::DELETE_OBJECT(&Local_7120);
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_7120.f_23))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_7120.f_23, 0);
					}
					func_476(28);
					if (!iLocal_7144)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 129.6f, -750.79f, 263f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 130.13f, -742.39f, 261.7f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 134.4f, -748.22f, 265.28f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 141.66f, -756.8f, 261.96f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_glass", 130.6f, -743.95f, 262.49f, 0f, 0f, 0f, 1f, 0, 0, 0);
						CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.2f);
						iLocal_7144 = 1;
					}
					if (!PED::IS_PED_IN_COVER(func_106(), 0))
					{
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_106(), Local_407, -1, 0, 0f, 1, 0, Local_630[0 /*20*/].f_1, 1);
					}
					else if (PED::IS_PED_IN_COVER_FACING_LEFT(func_106()))
					{
					}
					if (PLAYER::PLAYER_PED_ID() == func_106())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					else
					{
						func_887(121.1928f, -744.1429f, 258.8839f);
					}
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_3907[3], "Heli_Crash", "FBI_HEIST_FINALE_CHOPPER", 1);
					fLocal_6465 = 1f;
					fLocal_6464 = 0.67f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(func_106(), 0);
					ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 0);
					GlobalFunc_5185(&Local_4444, 101, &sLocal_381);
					GlobalFunc_5185(&Local_4444, 201, &sLocal_381);
					GlobalFunc_5185(&Local_4444, 102, &sLocal_381);
					GlobalFunc_5185(&Local_4444, 203, &sLocal_381);
					GlobalFunc_5185(&Local_4444, 103, &sLocal_381);
					GlobalFunc_5185(&Local_4444, 104, &sLocal_381);
					GlobalFunc_5174(&Local_4444, iLocal_359);
					GlobalFunc_5174(&Local_4444, iLocal_360);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
					{
						CAM::DESTROY_CAM(uLocal_3852[7], 0);
					}
					if (CAM::DOES_CAM_EXIST(uLocal_3852[8]))
					{
						CAM::DESTROY_CAM(uLocal_3852[8], 0);
					}
					if (CAM::DOES_CAM_EXIST(uLocal_3852[9]))
					{
						CAM::DESTROY_CAM(uLocal_3852[9], 0);
					}
					func_641(8);
					GlobalFunc_8380(0, 1, 1, 0);
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						GlobalFunc_5181(&Local_4444);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
					STREAMING::END_SRL();
					GlobalFunc_4956();
					func_880(27, 3000);
				}
			}
			break;
		
		case 5:
			iLocal_8011 = 1;
			func_476(27);
			break;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(Local_2091[1 /*88*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[1 /*88*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/])) && !PED::IS_PED_INJURED(Local_630[5 /*20*/]))
	{
		if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(Local_2091[1 /*88*/]))
		{
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_2091[1 /*88*/], 1, 1);
		}
		if (iLocal_7117 == 0)
		{
			Var2 = { 143.2218f, -752.327f, 257.8933f };
		}
		else
		{
			switch (iLocal_7117)
			{
				case 1:
				case 2:
					if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_7118)) <= 2000f)
					{
						Var5 = { 128.6734f, -758.374f, 262.0997f };
						Var8 = { CAM::GET_CAM_COORD(uLocal_3852[7]) + Vector(3f, 0f, 0f) };
						Var11 = { 143.2218f, -752.327f, 257.8933f };
						fVar14 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_7118)) / 2000f), 0f, 1f);
						Var2 = { func_886(Var5, Var8, Var11, fVar14) };
					}
					else
					{
						Var5 = { 143.2218f, -752.327f, 257.8933f };
						Var8 = { 134.9645f, -753.0084f, 257.6666f };
						fVar14 = GlobalFunc_253(((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_7118)) - 2000f) / 2000f), 0f, 1f);
						Var2 = { GlobalFunc_5119(Var5, Var8, fVar14) };
					}
					break;
				
				case 3:
				case 4:
				case 5:
					Var2 = { 143.2218f, -752.327f, 257.8933f };
					break;
				
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2091[1 /*88*/], -2.5f, 10f, -5f) };
					break;
				}
		}
		if (!GlobalFunc_105(Var2))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_630[5 /*20*/], Local_2091[1 /*88*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(Local_2091[1 /*88*/]))
				{
					if (!TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Local_630[5 /*20*/]))
					{
						TASK::CONTROL_MOUNTED_WEAPON(Local_630[5 /*20*/]);
					}
					if (TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Local_630[5 /*20*/]))
					{
						TASK::SET_MOUNTED_WEAPON_TARGET(Local_630[5 /*20*/], 0, 0, Var2);
					}
				}
			}
		}
	}
	switch (iLocal_7117)
	{
		case 1:
			if (AUDIO::PREPARE_MUSIC_EVENT("AH3B_HELI_SHOOTS_HELI"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HELI_SHOOTS_HELI");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_ENEMIES_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("AH_3B_ENEMIES_ARRIVE");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_HELICOPTER_MISSILE_CUTSCENE"))
			{
				AUDIO::START_AUDIO_SCENE("AH_3B_HELICOPTER_MISSILE_CUTSCENE");
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[1 /*88*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/]);
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/], 201, &sLocal_381, 1);
			func_889(&(Local_2091[1 /*88*/]), 1f, 0);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[1 /*88*/], 1);
			Local_2091[2 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_360, 432.7757f, -813.2988f, 297.8762f, 77.7276f, 1, 1);
			func_871(&(Local_2091[2 /*88*/].f_1[0 /*20*/]), iLocal_370, &(Local_2091[2 /*88*/]), -1, "CREW_PILOT", iLocal_625, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
			PED::SET_PED_PROP_INDEX(Local_2091[2 /*88*/].f_1[0 /*20*/], 0, 0, 0, false);
			PED::SET_PED_COMPONENT_VARIATION(Local_2091[2 /*88*/].f_1[0 /*20*/], 9, 1, 0, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[2 /*88*/], 103, &sLocal_381, 1);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[2 /*88*/], 1);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[2 /*88*/]);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_2091[1 /*88*/], 1);
			GlobalFunc_5174(&Local_4444, iLocal_360);
			GlobalFunc_5174(&Local_4444, iLocal_370);
			GlobalFunc_173(&uLocal_431, 6, Local_2091[2 /*88*/].f_1[0 /*20*/], "FIBPILOT", 0, 1);
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Local_2091[1 /*88*/], 1);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
			{
				CAM::DESTROY_CAM(uLocal_3852[7], 0);
			}
			uLocal_3852[7] = CAM::CREATE_CAMERA(964613260, 1);
			uLocal_3916[15] = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(Local_2091[1 /*88*/], 1), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_2091[1 /*88*/]), 2);
			CAM::SET_CAM_NEAR_CLIP(uLocal_3852[7], 0.001f);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3852[7], uLocal_3916[15], "establish_camera_cam", "missheistfbi3b_helicrash");
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[15], 0.5348f);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			GlobalFunc_8380(1, 1, 1, 0);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			func_644(8);
			AUDIO::PLAY_STREAM_FRONTEND();
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
			STREAMING::BEGIN_SRL();
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			iLocal_7118 = MISC::GET_GAME_TIMER();
			iLocal_7117++;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 4000)
			{
				func_884(Local_2091[2 /*88*/], 3500f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[2 /*88*/], 1);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
				{
					CAM::DESTROY_CAM(uLocal_3852[7], 0);
				}
				uLocal_3852[7] = CAM::CREATE_CAMERA(964613260, 1);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[7], 0.15f);
				uLocal_3916[15] = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(Local_2091[2 /*88*/], 1), ENTITY::GET_ENTITY_ROTATION(Local_2091[2 /*88*/], 2), 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3852[7], uLocal_3916[15], "ah3b_attackheli_cam2", "missheistfbi3b_helicrash");
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iLocal_7117++;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 5000)
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				func_645(28, 0);
				iLocal_7117++;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 7500)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[1 /*88*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/]);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/], 102, &sLocal_381, 1);
				func_889(&(Local_2091[1 /*88*/]), 1f, 0);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[1 /*88*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_7120, 83.3058f, -748.7635f, 271f, 1, 0, 0, 1);
				Local_7120.f_17 = 60f;
				if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
				{
					CAM::DESTROY_CAM(uLocal_3852[7], 0);
				}
				uLocal_3852[7] = CAM::CREATE_CAMERA(964613260, 1);
				uLocal_3916[15] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3916[15], Local_2091[1 /*88*/], -1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3852[7], uLocal_3916[15], "reaction_camera_cam", "missheistfbi3b_helicrash");
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[15], 0.0242f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[7], 0.15f);
				uLocal_3916[14] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3916[14], Local_2091[1 /*88*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_2091[1 /*88*/], "seat_dside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[5 /*20*/], uLocal_3916[14], "missheistfbi3b_helicrash", "heli_crash", 1000f, -1000f, 4, 0, 1148846080, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[1 /*88*/], 1, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[1 /*88*/]);
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iLocal_7117++;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 9166)
			{
				func_884(Local_2091[1 /*88*/], 1950f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[1 /*88*/], 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_630[5 /*20*/]);
				PED::SET_PED_INTO_VEHICLE(Local_630[5 /*20*/], Local_2091[1 /*88*/], -1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[1 /*88*/], 1, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[1 /*88*/]);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
				{
					CAM::DESTROY_CAM(uLocal_3852[7], 0);
				}
				uLocal_3852[7] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 123.6368f, -750.2817f, 359.1005f, -89.4995f, 0f, -20.2171f, 15.3997f, 1, 2);
				CAM::SET_CAM_DOF_PLANES(uLocal_3852[7], 0f, 0f, 100.5f, 670f);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[8]))
				{
					CAM::DESTROY_CAM(uLocal_3852[8], 0);
				}
				uLocal_3852[8] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 159.3979f, -737.8659f, 359.31f, -89.4995f, 0f, -20.2171f, 15.3997f, 0, 2);
				CAM::SET_CAM_DOF_PLANES(uLocal_3852[8], 0f, 0f, 100.5f, 670f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3852[8], uLocal_3852[7], 8000, 0, 1);
				CAM::SET_USE_HI_DOF();
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(3.064f);
				iLocal_7117++;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 13166)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
				{
					CAM::DESTROY_CAM(uLocal_3852[7], 0);
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				uLocal_3852[7] = CAM::CREATE_CAMERA(964613260, 1);
				uLocal_3916[15] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3916[15], Local_2091[1 /*88*/], -1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3852[7], uLocal_3916[15], "spinning_camera_cam", "missheistfbi3b_helicrash");
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[7], 0.1f);
				uLocal_3916[14] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3916[14], Local_2091[1 /*88*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_2091[1 /*88*/], "seat_dside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[5 /*20*/], uLocal_3916[14], "missheistfbi3b_helicrash", "heli_crash", 1000f, -1000f, 4, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[14], 0.2756f);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[1 /*88*/], 1, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2091[1 /*88*/]);
				iLocal_7117++;
			}
			else
			{
				CAM::SET_USE_HI_DOF();
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(3.064f);
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 14666)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[1 /*88*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/]);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/], 203, &sLocal_381, 1);
				func_889(&(Local_2091[1 /*88*/]), 1f, 0);
				func_884(Local_2091[1 /*88*/], 3000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2091[1 /*88*/], 1);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
				{
					CAM::DESTROY_CAM(uLocal_3852[7], 0);
				}
				uLocal_3852[7] = CAM::CREATE_CAMERA(26379945, 1);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3852[7], Local_2091[1 /*88*/], Vector(267.7104f, -695.2065f, 219.1373f) - Vector(253.4843f, -662.5891f, 214.4779f), 0);
				CAM::SET_CAM_FOV(uLocal_3852[7], 19.9962f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[7], 0f);
				CAM::SHAKE_CAM(uLocal_3852[7], "HAND_SHAKE", 1f);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[8]))
				{
					CAM::DESTROY_CAM(uLocal_3852[8], 0);
				}
				uLocal_3852[8] = CAM::CREATE_CAMERA(26379945, 1);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3852[8], Local_2091[1 /*88*/], Vector(252.6958f, -655.9583f, 229.5684f) - Vector(249.155f, -677.4445f, 202.1229f), 0);
				CAM::SET_CAM_FOV(uLocal_3852[8], 19.9962f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[8], 0f);
				CAM::SHAKE_CAM(uLocal_3852[8], "HAND_SHAKE", 1f);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[9]))
				{
					CAM::DESTROY_CAM(uLocal_3852[9], 0);
				}
				uLocal_3852[9] = CAM::CREATE_CAMERA(-119532588, 0);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_3852[9], uLocal_3852[7], 0, 3);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_3852[9], uLocal_3852[8], 1000, 3);
				CAM::SET_CAM_SPLINE_DURATION(uLocal_3852[9], 5000);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_3852[9], 0);
				CAM::SHAKE_CAM(uLocal_3852[9], "HAND_SHAKE", 1f);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3852[9], Local_2091[1 /*88*/], 0f, 0f, 0f, 1);
				CAM::SET_CAM_ACTIVE(uLocal_3852[9], 1);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[9], 0f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(186.7041f, -643.1097f, 247.5317f, 500f);
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				Var15 = { ENTITY::GET_ENTITY_ROTATION(Local_2091[1 /*88*/], 2) };
				Var15.f_2 = (Var15.f_2 + GlobalFunc_551(0f, -80.2658f, (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_7118)) / 6000f)));
				ENTITY::SET_ENTITY_ROTATION(Local_2091[1 /*88*/], Var15, 2, 1);
				iLocal_7117++;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			}
			break;
		
		case 8:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 17500)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2091[1 /*88*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2091[1 /*88*/]);
				}
				ENTITY::SET_ENTITY_COLLISION(Local_2091[1 /*88*/], 0, 0);
				if (CAM::DOES_CAM_EXIST(uLocal_3852[7]))
				{
					CAM::DESTROY_CAM(uLocal_3852[7], 0);
				}
				uLocal_3852[7] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 156.2f, -732.9f, 280.6f, -81.1f, 0f, -3.1f, 34f, 1, 2);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[7], 0f);
				CAM::SET_CAM_DOF_PLANES(uLocal_3852[7], 0f, 0f, 100.5f, 670f);
				CAM::SHAKE_CAM(uLocal_3852[7], "HAND_SHAKE", 1f);
				CAM::SET_USE_HI_DOF();
				CAM::DESTROY_CAM(uLocal_3852[8], 0);
				CAM::DESTROY_CAM(uLocal_3852[9], 0);
				uLocal_3916[14] = PED::CREATE_SYNCHRONIZED_SCENE(156.591f, -731.486f, 249.211f, 0f, 0f, 6.84f, 2);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_2091[1 /*88*/], uLocal_3916[14], "heli_hits_building", "missheistfbi3b_helicrash", 1000f, -1000f, 0, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[14], 0.15f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_3916[14], 0.8f);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_2091[1 /*88*/]);
				GlobalFunc_4956();
				func_645(12, 0);
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iLocal_7117++;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[7], 0.15f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[8], 0.15f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3852[9], 0.15f);
				Var18 = { ENTITY::GET_ENTITY_ROTATION(Local_2091[1 /*88*/], 2) };
				Var18.f_2 = (Var18.f_2 + GlobalFunc_551(0f, -80.2658f, (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_7118)) / 6000f)));
				ENTITY::SET_ENTITY_ROTATION(Local_2091[1 /*88*/], Var18, 2, 1);
			}
			break;
		
		case 9:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 17750)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3b_heli_expl", 154.68f, -730.11f, 252.5f, -90f, 0f, -28.9f, 1f, 0, 0, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3b_heli_exp_trail", 154.68f, -730.11f, 252.49f, -90f, 0f, -28.9f, 1f, 0, 0, 0);
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				CAM::SET_USE_HI_DOF();
				iLocal_7117++;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				CAM::SET_USE_HI_DOF();
			}
			break;
		
		case 10:
			if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 18500)
			{
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
				STREAMING::END_SRL();
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iLocal_7117 = 99;
				iLocal_7119 = 99;
			}
			else
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				CAM::SET_USE_HI_DOF();
				if ((MISC::GET_GAME_TIMER() - iLocal_7118) >= 18170)
				{
					if (!iLocal_7144)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 129.6f, -750.79f, 263f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 130.13f, -742.39f, 261.7f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 134.4f, -748.22f, 265.28f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_silt", 141.66f, -756.8f, 261.96f, 0f, 0f, 0f, 1f, 0, 0, 0);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency_atrium_glass", 130.6f, -743.95f, 262.49f, 0f, 0f, 0f, 1f, 0, 0, 0);
						CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.2f);
						iLocal_7144 = 1;
					}
				}
			}
			break;
	}
	if (iLocal_7117 > 0 && iLocal_7117 < 99)
	{
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_7118)));
	}
	switch (iLocal_7119)
	{
		case 0:
			if ((iLocal_7117 > 1 && GlobalFunc_5170()) && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SPOTTED", 8, 0, 0, 0))
			{
				iLocal_7119++;
			}
			break;
		
		case 1:
			if ((iLocal_7117 > 2 && GlobalFunc_5170()) && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_FLIPSWIT", 8, 0, 0, 0))
			{
				iLocal_7119++;
			}
			break;
		
		case 2:
			if ((iLocal_7117 > 4 && GlobalFunc_5170()) && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_INCOMING", 8, 0, 0, 0))
			{
				iLocal_7119++;
			}
			break;
		
		case 3:
			if ((iLocal_7117 > 5 && GlobalFunc_5170()) && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PILOTHIT", 8, 0, 0, 0))
			{
				iLocal_7119++;
			}
			break;
		
		case 4:
			if ((iLocal_7117 > 6 && GlobalFunc_5170()) && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_NOCONTROL", 8, 0, 0, 0))
			{
				iLocal_7119++;
			}
			break;
		
		case 5:
			if ((iLocal_7117 > 7 && GlobalFunc_5170()) && GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_UHOH", 8, 0, 0, 0))
			{
				iLocal_7119++;
			}
			break;
	}
}

void func_884(int iParam0, float fParam1)//Position - 0x89B89
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0, (fParam1 - fVar0));
		}
	}
}


Vector3 func_886(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x89BF7
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { GlobalFunc_721(Param0, Param3, fParam9) };
	Var3 = { GlobalFunc_721(Param3, Param6, fParam9) };
	return GlobalFunc_721(Var0, Var3, fParam9);
}

void func_887(struct<3> Param0)//Position - 0x89C31
{
	struct<3> Var0;
	
	Var0 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	GlobalFunc_730(MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1));
}

void func_888(var uParam0)//Position - 0x89C59
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iVar0 /*20*/]) && PED::IS_PED_IN_VEHICLE(uParam0->f_1[iVar0 /*20*/], *uParam0, 0))
			{
				PED::DELETE_PED(&(uParam0->f_1[iVar0 /*20*/]));
			}
			iVar0++;
		}
		iVar1 = -1;
		while (iVar1 <= 2)
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
			{
				PED::DELETE_PED(&iVar2);
			}
			iVar1++;
		}
		VEHICLE::DELETE_VEHICLE(uParam0);
	}
}

int func_889(var uParam0, float fParam1, int iParam2)//Position - 0x89CEA
{
	float fVar0;
	
	if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_84 != fParam1 || uParam0->f_87 != iParam2)
	{
		uParam0->f_86 = MISC::GET_GAME_TIMER();
		uParam0->f_84 = fParam1;
		uParam0->f_83 = uParam0->f_85;
		uParam0->f_87 = iParam2;
	}
	if (uParam0->f_85 == uParam0->f_84)
	{
		return 1;
	}
	fVar0 = (MISC::ABSF((uParam0->f_84 - uParam0->f_83)) * GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - uParam0->f_86)) / SYSTEM::TO_FLOAT(uParam0->f_87)), 0f, 1f));
	if (uParam0->f_84 < uParam0->f_83)
	{
		uParam0->f_85 = GlobalFunc_253((uParam0->f_85 - fVar0), uParam0->f_84, uParam0->f_83);
		VEHICLE::SET_PLAYBACK_SPEED(*uParam0, uParam0->f_85);
	}
	else
	{
		uParam0->f_85 = GlobalFunc_253((uParam0->f_85 + fVar0), uParam0->f_83, uParam0->f_84);
		VEHICLE::SET_PLAYBACK_SPEED(*uParam0, uParam0->f_85);
	}
	if (uParam0->f_85 != fParam1)
	{
		return 0;
	}
	return 1;
}

void func_890()//Position - 0x89DD5
{
	switch (Local_4253[26 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_719(&Local_4444, "missheistfbi3bleadinoutah_3b_mcs_2");
			GlobalFunc_719(&Local_4444, &cLocal_323);
			GlobalFunc_718(&Local_4444, joaat("p_ld_heist_bag_s"));
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistfbi3bleadinoutah_3b_mcs_2") && STREAMING::HAS_MODEL_LOADED(joaat("p_ld_heist_bag_s")))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(func_79(), joaat("gadget_parachute"));
				PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(func_79());
				WEAPON::REMOVE_WEAPON_FROM_PED(Local_630[3 /*20*/], joaat("gadget_parachute"));
				PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(Local_630[3 /*20*/]);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_630[1 /*20*/], joaat("weapon_unarmed"), 1);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], joaat("weapon_unarmed"), 1);
				PED::SET_PED_CONFIG_FLAG(Local_630[1 /*20*/], 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_630[3 /*20*/], 118, false);
				Local_3864[19 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s"), 137.111f, -748.9485f, 257.1519f, 1, 1, 0);
				Local_3864[13 /*2*/] = WEAPON::CREATE_WEAPON_OBJECT(iLocal_373, 240, 137.111f, -748.9485f, 257.1519f, 0, 1065353216, 0);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Local_3864[13 /*2*/], joaat("component_at_ar_flsh"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Local_3864[13 /*2*/], joaat("component_at_ar_supp"));
				Local_3864[14 /*2*/] = WEAPON::CREATE_WEAPON_OBJECT(iLocal_375, -1, 137.111f, -748.9485f, 257.1519f, 0, 1065353216, 0);
				if (iLocal_376 != 0)
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Local_3864[14 /*2*/], iLocal_376);
				}
				if (iLocal_377 != 0)
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Local_3864[14 /*2*/], iLocal_377);
				}
				if (iLocal_380 != 0)
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Local_3864[14 /*2*/], iLocal_380);
				}
				if (iLocal_379 != 0)
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Local_3864[14 /*2*/], iLocal_379);
				}
				if (iLocal_378 != 0)
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Local_3864[14 /*2*/], iLocal_378);
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_79());
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_630[3 /*20*/]);
				uLocal_3916[12] = PED::CREATE_SYNCHRONIZED_SCENE(Local_335, Local_338, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_79(), uLocal_3916[12], "missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_fra", 1000f, -8f, 29, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[3 /*20*/], uLocal_3916[12], "missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_hench", 1000f, -8f, 29, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[13 /*2*/], uLocal_3916[12], "_leadout_gun_F", "missheistfbi3bleadinoutah_3b_mcs_2", 1000f, -8f, 5, 1148846080);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[14 /*2*/], uLocal_3916[12], "_leadout_gun_H", "missheistfbi3bleadinoutah_3b_mcs_2", 1000f, -8f, 5, 1148846080);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[19 /*2*/], uLocal_3916[12], "_leadout_bag", "missheistfbi3bleadinoutah_3b_mcs_2", 1000f, -8f, 5, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[12], 1);
				Local_4207 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_fra", 134.7172f, -752.762f, 257.1572f, 0f, 0f, 159.8552f, 1f, 2) };
				Local_4210 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_hench", 134.7172f, -752.762f, 257.1572f, 0f, 0f, 159.8552f, 1f, 2) };
				Local_4213 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_fra", 134.7172f, -752.762f, 257.1572f, 0f, 0f, 159.8552f, 1f, 2) };
				Local_4216 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_hench", 134.7172f, -752.762f, 257.1572f, 0f, 0f, 159.8552f, 1f, 2) };
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_3916[12], 0f);
				}
				Local_4253[26 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_3916[12], 1f);
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[12]) >= 0.6f || ENTITY::HAS_ANIM_EVENT_FIRED(Local_630[3 /*20*/], MISC::GET_HASH_KEY("CREATE")))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_3864[14 /*2*/], Local_630[3 /*20*/]);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
				func_534(&(Local_630[3 /*20*/]), 1);
				Local_4253[26 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[12]) >= 0.707f || ENTITY::HAS_ANIM_EVENT_FIRED(Local_630[1 /*20*/], MISC::GET_HASH_KEY("CREATE")))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_3864[13 /*2*/], Local_630[1 /*20*/]);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_630[1 /*20*/], joaat("weapon_carbinerifle"), 1);
				func_534(&(Local_630[1 /*20*/]), 1);
				func_891(&Local_4444, joaat("weapon_carbinerifle"));
				func_891(&Local_4444, iLocal_375);
				Local_4253[26 /*5*/].f_1++;
			}
			break;
		
		case 4:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[12]) || (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[12]) == 1f && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_323)))
			{
				PED::SET_PED_CONFIG_FLAG(Local_630[1 /*20*/], 118, true);
				PED::SET_PED_CONFIG_FLAG(Local_630[3 /*20*/], 118, true);
				if (!PED::IS_PED_INJURED(Local_630[1 /*20*/]))
				{
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_79(), 1), Local_4207, 0.5f))
					{
						if (!GlobalFunc_709(Local_630[1 /*20*/], 713668775, 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[1 /*20*/], Local_4207, 2f, -1, 0.1f, 512, Local_4213.f_2);
						}
					}
					else if (!GlobalFunc_709(Local_630[1 /*20*/], 242628503, 1))
					{
						func_468(1);
						TASK::TASK_ACHIEVE_HEADING(0, Local_4213.f_2, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "idle_f", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "base", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "idle_b", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "base", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "idle_a", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "base", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
						func_466(Local_630[1 /*20*/], 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_630[1 /*20*/], func_106(), -1, 0, 2);
					}
				}
				if (!PED::IS_PED_INJURED(Local_630[3 /*20*/]))
				{
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), Local_4210, 1f))
					{
						if (!GlobalFunc_709(Local_630[3 /*20*/], 713668775, 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[3 /*20*/], Local_4210, 2f, -1, 0.1f, 512, Local_4216.f_2);
						}
					}
					else if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1))
					{
						func_468(1);
						TASK::TASK_ACHIEVE_HEADING(0, Local_4216.f_2, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "base", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "idle_c", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "base", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "idle_e", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "base", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, &cLocal_323, "idle_f", 8f, -8f, -1, 262144, 0, 0, 0, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
						func_466(Local_630[3 /*20*/], 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_630[3 /*20*/], func_106(), -1, 0, 2);
					}
				}
				uLocal_3916[12] = PED::CREATE_SYNCHRONIZED_SCENE(Local_335, Local_338, 2);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[19 /*2*/], uLocal_3916[12], "_leadout_bag", "missheistfbi3bleadinoutah_3b_mcs_2", 1000f, 8f, 0, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[12], 1);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[12], 0.9f);
			}
			break;
	}
	if (Local_4253[26 /*5*/].f_1 > 1 && Local_4253[26 /*5*/].f_1 < 4)
	{
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(func_79(), "missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_fra", 2) || PED::IS_PED_RAGDOLL(func_79())) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_630[3 /*20*/], "missheistfbi3bleadinoutah_3b_mcs_2", "_leadout_hench", 2)) || PED::IS_PED_RAGDOLL(Local_630[3 /*20*/]))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(func_79()) != iLocal_6157)
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_630[1 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_630[1 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_997(2);
				}
			}
			else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_630[3 /*20*/]) != iLocal_6157)
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_630[3 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_630[3 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_997(4);
				}
			}
			else
			{
				iLocal_4235 = 2;
			}
		}
	}
	if (!bLocal_7076)
	{
		switch (iLocal_4235)
		{
			case 0:
				if (Local_4253[26 /*5*/].f_1 >= 3)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_697(iLocal_4196) == 0)
						{
							StringCopy(&cLocal_4237, "AH_FBILAN", 24);
						}
						else
						{
							StringCopy(&cLocal_4237, "AH_GIVEGUN", 24);
						}
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_4235++;
						}
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_5170())
				{
					MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_FBILAN", 0)}, 6);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
						iLocal_4235++;
					}
				}
				break;
			}
	}
}

void func_891(var uParam0, int iParam1)//Position - 0x8A7A7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_202)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			if (uParam0->f_202[iVar0 /*7*/].f_4 == iParam1)
			{
				if (uParam0->f_202[iVar0 /*7*/].f_1)
				{
					WEAPON::REMOVE_WEAPON_ASSET(iParam1);
					GlobalFunc_700(&(uParam0->f_202[iVar0 /*7*/]));
					return;
				}
				else
				{
					uParam0->f_202[iVar0 /*7*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_892()//Position - 0x8A817
{
	switch (Local_4253[25 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_361);
			GlobalFunc_718(&Local_4444, iLocal_362);
			GlobalFunc_719(&Local_4444, "dead");
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_MODEL_LOADED(iLocal_362)) && STREAMING::HAS_ANIM_DICT_LOADED("dead"))
			{
				func_667(&(Local_630[60 /*20*/]), iLocal_361, 122.036f, -751.384f, 250.154f, 46.25f, "DEAD_PED_1", iLocal_625, 0, 0, 1, 101, 0, 1, 1);
				func_667(&(Local_630[61 /*20*/]), iLocal_362, 148.575f, -759.537f, 250.137f, -92.16f, "DEAD_PED_2", iLocal_625, 0, 0, 1, 101, 0, 1, 1);
				func_667(&(Local_630[62 /*20*/]), iLocal_361, 143.1f, -770.1f, 246.2f, -92.16f, "DEAD_PED_3", iLocal_625, 0, 0, 1, 101, 0, 1, 1);
				Local_630[60 /*20*/].f_18 = 1;
				Local_630[61 /*20*/].f_18 = 1;
				Local_630[62 /*20*/].f_18 = 1;
				PED::SET_PED_CAN_BE_TARGETTED(Local_630[60 /*20*/], 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_630[61 /*20*/], 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_630[62 /*20*/], 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_630[60 /*20*/], "dead", "dead_d", 122.036f, -751.384f, 250.154f, 0f, 0f, 46.25f, 1000f, -1000f, -1, 2097152, 0, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_630[61 /*20*/], "dead", "dead_g", 148.575f, -759.537f, 250.137f, 0f, 0f, -92.16f, 1000f, -1000f, -1, 2097152, 0, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_630[62 /*20*/], "dead", "dead_e", 143.1f, -770.1f, 246.2f, 0f, 0f, -92.16f, 1000f, -1000f, -1, 2097152, 0, 2, 0);
				GlobalFunc_5175(&Local_4444, "dead");
				Local_4253[25 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if (iLocal_6071 >= 9)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[60 /*20*/]))
				{
					PED::DELETE_PED(&(Local_630[60 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[61 /*20*/]))
				{
					PED::DELETE_PED(&(Local_630[61 /*20*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[62 /*20*/]))
				{
					PED::DELETE_PED(&(Local_630[62 /*20*/]));
				}
				func_476(25);
			}
			break;
	}
}

void func_893()//Position - 0x8AA8E
{
	switch (Local_4253[24 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_361);
			GlobalFunc_718(&Local_4444, iLocal_363);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_MODEL_LOADED(iLocal_363))
			{
				func_667(&(Local_630[58 /*20*/]), iLocal_361, 151.9832f, -763.7991f, 245.1521f, 159.3465f, "EndRappel_1", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[58 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[58 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[58 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[58 /*20*/], 1);
				func_611(&(Local_630[58 /*20*/]), 152.1283f, -763.8553f, 245.1521f, 158.2168f, 1, 2, 0);
				func_602(&(Local_630[58 /*20*/]), 152.1283f, -763.8553f, 245.1521f, 1f, 1, 0, 1, 1, 1f, 0f, 0, 0, 0, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[58 /*20*/], 152.1283f, -763.8553f, 245.1521f, -1, 0, 0f, 1, 1, 0, 0);
				func_667(&(Local_630[59 /*20*/]), iLocal_363, 155.089f, -764.941f, 245.1521f, 161.274f, "EndRappel_2", iLocal_625, joaat("weapon_smg"), 0, 5, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[59 /*20*/], 0.2f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[59 /*20*/], 0.65f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[59 /*20*/], 74, 69, 60);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[59 /*20*/], 1);
				func_611(&(Local_630[59 /*20*/]), 155.0786f, -764.937f, 245.1521f, 158.1851f, 0, 2, 0);
				func_602(&(Local_630[59 /*20*/]), 155.0786f, -764.937f, 245.1521f, 1f, 1, 0, 1, 1, 1f, 0f, 0, 0, 0, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[59 /*20*/], 155.0786f, -764.937f, 245.1521f, -1, 0, 0f, 1, 0, 0, 0);
				Local_4253[24 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 146.7082f, -771.0422f, 245.152f, 152.8385f, -772.9393f, 248.0506f, 7f, 0, 1, 0))
			{
				Local_4253[24 /*5*/].f_2 = MISC::GET_GAME_TIMER() + 6000;
				Local_4253[24 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_630[58 /*20*/]))
			{
				switch (Local_630[58 /*20*/].f_4)
				{
					case 0:
						TASK::TASK_COMBAT_PED(Local_630[58 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_630[58 /*20*/].f_4++;
						break;
					
					case 1:
						if (PED::IS_PED_INJURED(Local_630[59 /*20*/]))
						{
							func_602(&(Local_630[58 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 0f, 1, 0, 1, 1);
							Local_630[59 /*20*/].f_4++;
						}
						break;
					}
			}
			if (!PED::IS_PED_INJURED(Local_630[59 /*20*/]))
			{
				switch (Local_630[59 /*20*/].f_4)
				{
					case 0:
						TASK::TASK_COMBAT_PED(Local_630[59 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_630[59 /*20*/].f_4++;
						break;
					
					case 1:
						if (PED::IS_PED_INJURED(Local_630[58 /*20*/]) || MISC::GET_GAME_TIMER() > Local_4253[24 /*5*/].f_2)
						{
							func_602(&(Local_630[59 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 0f, 1, 0, 1, 1);
							Local_630[59 /*20*/].f_4++;
						}
						break;
					}
			}
			if (PED::IS_PED_INJURED(Local_630[58 /*20*/]) && PED::IS_PED_INJURED(Local_630[59 /*20*/]))
			{
				func_476(24);
			}
			break;
	}
}

void func_894()//Position - 0x8AE54
{
	switch (Local_4253[23 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_361);
			GlobalFunc_718(&Local_4444, iLocal_362);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_MODEL_LOADED(iLocal_362))
			{
				func_667(&(Local_630[53 /*20*/]), iLocal_362, 135.0431f, -756.7064f, 249.152f, 73.7667f, "Coms2nd_1", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[53 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[53 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[53 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[53 /*20*/], 1);
				func_667(&(Local_630[54 /*20*/]), iLocal_361, 140.5883f, -757.47f, 249.152f, 65.53f, "Coms2nd_2", iLocal_625, joaat("weapon_pumpshotgun"), 0, 2, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[54 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[54 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[54 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[54 /*20*/], 1);
				func_666(&(Local_630[53 /*20*/]), 135.0431f, -756.7064f, 249.152f, 73.766f, -1, 1, 2, 2, 0, 0f, 1, 1);
				GlobalFunc_5174(&Local_4444, iLocal_362);
				Local_4253[23 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 124.639f, -756.0547f, 249.1521f, 122.3064f, -755.0397f, 251.4022f, 2.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_447(), 124.639f, -756.0547f, 249.1521f, 122.3064f, -755.0397f, 251.4022f, 2.25f, 0, 1, 0))
			{
				Local_4253[23 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[53 /*20*/]) && !PED::IS_PED_INJURED(Local_630[53 /*20*/]))
			{
				switch (Local_630[53 /*20*/].f_4)
				{
					case 0:
						func_602(&(Local_630[53 /*20*/]), 135.0431f, -756.7064f, 249.152f, 1f, 1, 0, 1, 1, 1f, 0f, 0, 0, 0, 0);
						TASK::TASK_COMBAT_PED(Local_630[53 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_630[53 /*20*/].f_4++;
						break;
					
					case 1:
						if (!ENTITY::DOES_ENTITY_EXIST(Local_630[54 /*20*/]) || PED::IS_PED_INJURED(Local_630[54 /*20*/]))
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[53 /*20*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_630[53 /*20*/], 2);
							PED::SET_PED_CONFIG_FLAG(Local_630[53 /*20*/], 286, true);
							Local_630[53 /*20*/].f_4++;
						}
						break;
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[54 /*20*/]) && !PED::IS_PED_INJURED(Local_630[54 /*20*/]))
			{
				switch (Local_630[54 /*20*/].f_4)
				{
					case 0:
						func_602(&(Local_630[54 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 0f, 1, 0, 1, 1);
						TASK::TASK_COMBAT_PED(Local_630[54 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_630[54 /*20*/].f_4++;
						break;
					}
			}
			if (PED::IS_PED_INJURED(Local_630[53 /*20*/]) && PED::IS_PED_INJURED(Local_630[54 /*20*/]))
			{
				func_476(23);
			}
			break;
	}
}

void func_895()//Position - 0x8B1C5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_4253[22 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_361);
			GlobalFunc_718(&Local_4444, iLocal_362);
			GlobalFunc_718(&Local_4444, iLocal_363);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_MODEL_LOADED(iLocal_362)) && STREAMING::HAS_MODEL_LOADED(iLocal_363))
			{
				func_667(&(Local_630[44 /*20*/]), iLocal_361, 130.2159f, -746.9586f, 253.1523f, 49.3587f, "b4HeliFall1", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				func_602(&(Local_630[44 /*20*/]), 130.2159f, -746.9586f, 253.1523f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				PED::_0x110F526AB784111F(Local_630[44 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[44 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[44 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[44 /*20*/], 1);
				func_667(&(Local_630[45 /*20*/]), iLocal_362, 131.2902f, -745.9695f, 253.1988f, 42.4347f, "b4HeliFall2", iLocal_625, joaat("weapon_smg"), 0, 5, -1, 0, 1, 1);
				func_602(&(Local_630[45 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 0f, 1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[45 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[45 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[45 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[45 /*20*/], 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[45 /*20*/], 131.2902f, -745.9695f, 253.1988f, -1, 0, 0f, 1, 0, 0, 0);
				func_667(&(Local_630[46 /*20*/]), iLocal_363, 139.7227f, -744.6555f, 253.1821f, 73.4282f, "b4HeliFall3", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				func_602(&(Local_630[46 /*20*/]), 139.7227f, -744.6555f, 253.1821f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				PED::_0x110F526AB784111F(Local_630[46 /*20*/], 0.2f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[46 /*20*/], 0.65f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[46 /*20*/], 74, 69, 60);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[46 /*20*/], 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[46 /*20*/], 139.7227f, -744.6555f, 253.1821f, -1, 0, 0f, 1, 1, 0, 0);
				func_667(&(Local_630[47 /*20*/]), iLocal_362, 149.8246f, -748.4926f, 253.1521f, 117.3324f, "b4HeliFall4", iLocal_625, joaat("weapon_pumpshotgun"), 0, 1, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[47 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[47 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[47 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[47 /*20*/], 1);
				func_602(&(Local_630[47 /*20*/]), 0f, 0f, 0f, 0f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
				func_667(&(Local_630[48 /*20*/]), iLocal_361, 153.2197f, -741.2181f, 253.1521f, 161.2965f, "b4HeliFall5", iLocal_625, joaat("weapon_smg"), 0, 5, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[48 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[48 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[48 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[48 /*20*/], 1);
				func_602(&(Local_630[48 /*20*/]), 148.494f, -750.9575f, 253.1711f, 1f, 1, 0, 1, 1, 1f, 0f, 0, 0, 0, 0);
				Local_4253[22 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_447(), 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_630[44 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[44 /*20*/], 118.7768f, -739.879f, 253.1525f, 30f, 0);
				}
				if (!PED::IS_PED_INJURED(Local_630[45 /*20*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_630[45 /*20*/], 286, true);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[45 /*20*/], 118.7768f, -739.879f, 253.1525f, 30f, 0);
				}
				if (!PED::IS_PED_INJURED(Local_630[46 /*20*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[46 /*20*/], 118.7768f, -739.879f, 253.1525f, 30f, 0);
				}
				Local_4253[22 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[47 /*20*/]) && !PED::IS_PED_INJURED(Local_630[47 /*20*/]))
			{
				switch (Local_630[47 /*20*/].f_4)
				{
					case 0:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == -657647164)
						{
							PED::SET_PED_CONFIG_FLAG(Local_630[47 /*20*/], 286, true);
							PED::SET_PED_COMBAT_MOVEMENT(Local_630[47 /*20*/], 2);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[47 /*20*/], 118.7768f, -739.879f, 253.1525f, 30f, 0);
							Local_630[47 /*20*/].f_4++;
						}
						break;
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[48 /*20*/]) && !PED::IS_PED_INJURED(Local_630[48 /*20*/]))
			{
				switch (Local_630[48 /*20*/].f_4)
				{
					case 0:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 116.3234f, -740.0806f, 253.1525f, 117.8801f, -735.8244f, 256.4713f, 6.1875f, 0, 1, 0) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == -657647164)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[48 /*20*/], 118.7768f, -739.879f, 253.1525f, 30f, 0);
							Local_630[48 /*20*/].f_4++;
						}
						break;
					
					case 1:
						if (!ENTITY::DOES_ENTITY_EXIST(Local_630[44 /*20*/]) || PED::IS_PED_INJURED(Local_630[44 /*20*/]))
						{
							iVar0++;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_630[45 /*20*/]) || PED::IS_PED_INJURED(Local_630[45 /*20*/]))
						{
							iVar0++;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_630[46 /*20*/]) || PED::IS_PED_INJURED(Local_630[46 /*20*/]))
						{
							iVar0++;
						}
						if (iVar0 >= 2)
						{
							func_602(&(Local_630[48 /*20*/]), 131.2356f, -745.8246f, 253.2033f, 1f, 1, 0, 1, 1, 1f, 0f, 1, 0, 1, 0);
							Local_630[48 /*20*/].f_4++;
						}
						break;
					}
			}
			if (iLocal_7108[3] == -1)
			{
				bVar1 = true;
				iVar2 = 44;
				while (iVar2 <= 48)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[iVar2 /*20*/]) && !PED::IS_PED_INJURED(Local_630[iVar2 /*20*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[iVar2 /*20*/], 150.9476f, -747.7098f, 253.1521f, 154.2394f, -739.6359f, 256.6519f, 11.5f, 0, 1, 0))
						{
							bVar1 = false;
						}
					}
					iVar2++;
				}
				if (bVar1)
				{
					iLocal_7108[3] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(150.7804f, -747.6115f, 254.1521f, 1f, 1f, 1f, 0f, 0, 7);
				}
			}
			if (((((!ENTITY::DOES_ENTITY_EXIST(Local_630[44 /*20*/]) || PED::IS_PED_INJURED(Local_630[44 /*20*/])) && (!ENTITY::DOES_ENTITY_EXIST(Local_630[45 /*20*/]) || PED::IS_PED_INJURED(Local_630[45 /*20*/]))) && (!ENTITY::DOES_ENTITY_EXIST(Local_630[46 /*20*/]) || PED::IS_PED_INJURED(Local_630[46 /*20*/]))) && (!ENTITY::DOES_ENTITY_EXIST(Local_630[47 /*20*/]) || PED::IS_PED_INJURED(Local_630[47 /*20*/]))) && (!ENTITY::DOES_ENTITY_EXIST(Local_630[48 /*20*/]) || PED::IS_PED_INJURED(Local_630[48 /*20*/])))
			{
				if (iLocal_7108[3] != -1)
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_7108[3]);
					iLocal_7108[3] = -1;
				}
				func_476(22);
			}
			break;
	}
}

void func_896()//Position - 0x8BA32
{
	switch (Local_4253[21 /*5*/].f_1)
	{
		case 1:
			if (func_447() == func_106())
			{
				func_67(&Local_7145, 0, joaat("weapon_unarmed"), 1, 1, 0);
			}
			else
			{
				func_67(&Local_7255, 0, joaat("weapon_unarmed"), 1, 1, 0);
			}
			func_67(&Local_7365, 0, joaat("weapon_unarmed"), 1, 1, 0);
			uLocal_3916[10] = PED::CREATE_SYNCHRONIZED_SCENE(Local_311, Local_314, 2);
			if (func_447() == func_106())
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_106(), uLocal_3916[10], &cLocal_305, "Rappel_Dismount_Alt_Michael", 1.5f, -4f, 5, 0, 1.5f, 0);
				ENTITY::PLAY_ENTITY_ANIM(Local_7145.f_8, "Rappel_Dismount_Alt_Michael_Prop", &cLocal_305, 1.5f, 0, 1, 0, 0, 0);
				iLocal_4222 = 0;
				iLocal_4227 = 0;
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_79(), uLocal_3916[10], &cLocal_305, "Rappel_Dismount_Franklin", 1.5f, -4f, 5, 0, 1.5f, 0);
				ENTITY::PLAY_ENTITY_ANIM(Local_7255.f_8, "Rappel_Dismount_Franklin_Prop", &cLocal_305, 1.5f, 0, 1, 0, 0, 0);
				iLocal_4228 = 0;
				iLocal_4223 = 0;
			}
			TASK::TASK_SYNCHRONIZED_SCENE(Local_630[3 /*20*/], uLocal_3916[10], &cLocal_305, "Rappel_Dismount_Gunman", 1.5f, -4f, 5, 0, 1.5f, 0);
			ENTITY::PLAY_ENTITY_ANIM(Local_7365.f_8, "Rappel_Dismount_Gunman_Prop", &cLocal_305, 1.5f, 0, 1, 0, 0, 0);
			Local_4253[21 /*5*/].f_1++;
			break;
		
		case 2:
			if (func_447() == func_106())
			{
				if (Local_7145.f_97)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_106(), &cLocal_305, "Rappel_Dismount_Alt_Michael", 3))
					{
						GlobalFunc_5154(&Local_7145, 0, 0, 0, 0);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[10]) >= 0.048f)
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_7145.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_7145.f_8, 1, 1);
							}
							ENTITY::FREEZE_ENTITY_POSITION(Local_7145.f_8, 1);
							Local_7145.f_97 = 0;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_106(), &cLocal_305, "Rappel_Dismount_Alt_Michael", 3))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(func_106(), MISC::GET_HASH_KEY("interrupt")))
					{
						Local_4207 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_305, "Rappel_Dismount_Alt_Michael", Local_311, Local_314, 1f, 2)) };
						func_611(&(Local_630[0 /*20*/]), Local_4207, 250.8777f, 2, 0, 0);
						func_602(&(Local_630[0 /*20*/]), Local_4207, 2f, 1, 2, 1, 1, 0.5f, 0f, 0, 0, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"), 1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_106(), TASK::GET_SCRIPTED_COVER_POINT_COORDS(Local_630[0 /*20*/].f_1), -1, 0, 0.25f, 1, 1, Local_630[0 /*20*/].f_1, 0);
					}
				}
			}
			if (func_447() == func_79())
			{
				if (Local_7255.f_97)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_79(), &cLocal_305, "Rappel_Dismount_Franklin", 3))
					{
						GlobalFunc_5154(&Local_7255, 0, 0, 0, 0);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[10]) >= 0.048f)
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_7255.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_7255.f_8, 1, 1);
							}
							ENTITY::FREEZE_ENTITY_POSITION(Local_7255.f_8, 1);
							Local_7255.f_97 = 0;
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_79(), &cLocal_305, "Rappel_Dismount_Alt_Franklin", 3))
					{
						GlobalFunc_5154(&Local_7255, 0, 0, 0, 0);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[10]) >= 0.209f)
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_7255.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_7255.f_8, 1, 1);
							}
							ENTITY::FREEZE_ENTITY_POSITION(Local_7255.f_8, 1);
							Local_7255.f_97 = 0;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_79(), &cLocal_305, "Rappel_Dismount_Franklin", 3))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(func_79(), MISC::GET_HASH_KEY("interrupt")))
					{
						Local_4207 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_305, "Rappel_Dismount_Franklin", Local_311, Local_314, 1f, 2)) };
						func_611(&(Local_630[1 /*20*/]), Local_4207, 254.8745f, 3, 0, 0);
						func_602(&(Local_630[1 /*20*/]), Local_4207, 2f, 1, 2, 1, 1, 0.5f, 0f, 0, 0, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(func_79(), joaat("weapon_carbinerifle"), 1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_79(), TASK::GET_SCRIPTED_COVER_POINT_COORDS(Local_630[1 /*20*/].f_1), -1, 0, 0.25f, 1, 1, Local_630[1 /*20*/].f_1, 0);
					}
				}
			}
			if (Local_7365.f_97)
			{
				GlobalFunc_5154(&Local_7365, 0, 0, 0, 0);
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[10]) >= 0.082f)
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_7365.f_8))
					{
						ENTITY::DETACH_ENTITY(Local_7365.f_8, 1, 1);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_7365.f_8, 1);
					Local_7365.f_97 = 0;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_630[3 /*20*/], &cLocal_305, "Rappel_Dismount_Gunman", 3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_630[3 /*20*/], MISC::GET_HASH_KEY("interrupt")))
				{
					Local_4210 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_305, "Rappel_Dismount_Gunman", Local_311, Local_314, 1f, 2)) };
					func_611(&(Local_630[3 /*20*/]), Local_4210, 250.8777f, 2, 0, 0);
					func_602(&(Local_630[3 /*20*/]), Local_4210, 2f, 1, 2, 1, 1, 0.5f, 0f, 0, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[3 /*20*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(Local_630[3 /*20*/].f_1), -1, 0, 0.5f, 1, 1, Local_630[3 /*20*/].f_1, 0);
				}
			}
			if (((func_447() == func_106() && !GlobalFunc_709(func_106(), 1785177548, 1)) && !GlobalFunc_709(func_106(), -2017877118, 1)) || (((func_447() == func_79() && !GlobalFunc_709(func_79(), 1785177548, 1)) && !GlobalFunc_709(func_79(), -2017877118, 1)) && !GlobalFunc_709(Local_630[3 /*20*/], 1785177548, 1)))
			{
				GlobalFunc_5175(&Local_4444, &cLocal_305);
				func_476(21);
			}
			break;
	}
}

Vector3 func_897(struct<3> Param0)//Position - 0x8BFEC
{
	var uVar0;
	
	MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &uVar0);
	Param0.f_2 = uVar0;
	return Param0;
}

void func_898()//Position - 0x8C00B
{
	switch (Local_4253[20 /*5*/].f_1)
	{
		case 1:
			if (PLAYER::PLAYER_PED_ID() == func_106())
			{
				func_67(&Local_7145, 1, joaat("weapon_unarmed"), 1, 1, 0);
			}
			else
			{
				func_67(&Local_7255, 1, joaat("weapon_unarmed"), 1, 1, 0);
			}
			uLocal_3916[9] = PED::CREATE_SYNCHRONIZED_SCENE(Local_311, Local_314, 2);
			if (PLAYER::PLAYER_PED_ID() == func_106())
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_106(), uLocal_3916[9], &cLocal_305, "Rappel_Dismount_Michael", 1.5f, -4f, 5, 0, 1.5f, 0);
				ENTITY::PLAY_ENTITY_ANIM(Local_7145.f_8, "Rappel_Dismount_Michael_Prop", &cLocal_305, 1.5f, 0, 1, 0, 0, 0);
				iLocal_4222 = 0;
				iLocal_4227 = 0;
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_79(), uLocal_3916[9], &cLocal_305, "Rappel_Dismount_Alt_Franklin", 1.5f, -4f, 5, 0, 1.5f, 0);
				ENTITY::PLAY_ENTITY_ANIM(Local_7255.f_8, "Rappel_Dismount_Alt_Franklin_Prop", &cLocal_305, 1.5f, 0, 1, 0, 0, 0);
				iLocal_4228 = 0;
				iLocal_4223 = 0;
			}
			RECORDING::_0x293220DA1B46CEBC(5f, 13f, 4);
			Local_4253[20 /*5*/].f_1++;
			break;
		
		case 2:
			if (PLAYER::PLAYER_PED_ID() == func_106())
			{
				if (Local_7145.f_97)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_106(), &cLocal_305, "Rappel_Dismount_Michael", 3))
					{
						GlobalFunc_5154(&Local_7145, 0, 0, 0, 0);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[9]) >= 0.059f)
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_7145.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_7145.f_8, 1, 1);
							}
							ENTITY::FREEZE_ENTITY_POSITION(Local_7145.f_8, 1);
							Local_7145.f_97 = 0;
						}
					}
				}
				else
				{
					if (PLAYER::PLAYER_PED_ID() == func_106())
					{
						AUDIO::OVERRIDE_PLAYER_GROUND_MATERIAL(MISC::GET_HASH_KEY("AM_BASE_GLASS_STRONG"), 0);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_106(), &cLocal_305, "Rappel_Dismount_Michael", 3))
					{
						if (!iLocal_4227)
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_106(), MISC::GET_HASH_KEY("WeaponAppear")))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(func_106(), joaat("weapon_carbinerifle"), 1);
								iLocal_4227 = 1;
							}
						}
						if (!iLocal_4222)
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_106(), MISC::GET_HASH_KEY("interrupt")))
							{
								iLocal_4222 = 1;
							}
						}
						if (iLocal_4222)
						{
							if ((((PAD::GET_CONTROL_NORMAL(0, 31) != 0f || PAD::GET_CONTROL_NORMAL(0, 30) != 0f) || PAD::IS_CONTROL_PRESSED(0, 25)) || PAD::IS_CONTROL_PRESSED(0, 24)) || PAD::IS_CONTROL_PRESSED(0, 257))
							{
								TASK::CLEAR_PED_TASKS(func_106());
							}
						}
					}
				}
			}
			else if (Local_7255.f_97)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_79(), &cLocal_305, "Rappel_Dismount_Alt_Franklin", 3))
				{
					GlobalFunc_5154(&Local_7255, 0, 0, 0, 0);
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[9]) >= 0.209f)
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_7255.f_8))
						{
							ENTITY::DETACH_ENTITY(Local_7255.f_8, 1, 1);
						}
						ENTITY::FREEZE_ENTITY_POSITION(Local_7255.f_8, 1);
						Local_7255.f_97 = 0;
					}
				}
			}
			else
			{
				if (PLAYER::PLAYER_PED_ID() == func_79())
				{
					AUDIO::OVERRIDE_PLAYER_GROUND_MATERIAL(MISC::GET_HASH_KEY("AM_BASE_GLASS_STRONG"), 0);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_79(), &cLocal_305, "Rappel_Dismount_Alt_Franklin", 3))
				{
					if (!iLocal_4228)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(func_79(), MISC::GET_HASH_KEY("WeaponAppear")))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(func_79(), joaat("weapon_carbinerifle"), 1);
							iLocal_4228 = 1;
						}
					}
					if (!iLocal_4223)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(func_79(), MISC::GET_HASH_KEY("interrupt")))
						{
							iLocal_4223 = 1;
						}
					}
					if (iLocal_4223)
					{
						if ((((PAD::GET_CONTROL_NORMAL(0, 31) != 0f || PAD::GET_CONTROL_NORMAL(0, 30) != 0f) || PAD::IS_CONTROL_PRESSED(0, 25)) || PAD::IS_CONTROL_PRESSED(0, 24)) || PAD::IS_CONTROL_PRESSED(0, 257))
						{
							TASK::CLEAR_PED_TASKS(func_79());
						}
					}
				}
			}
			break;
	}
	if (Local_4253[20 /*5*/].f_1 == 2)
	{
		if ((PLAYER::PLAYER_PED_ID() == func_106() && !iLocal_4222) || (PLAYER::PLAYER_PED_ID() == func_79() && !iLocal_4223))
		{
			if (!CAM::_0x3044240D2E0FA842())
			{
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 1, 0, 0);
			}
			if (CAM::_0x3044240D2E0FA842())
			{
				GlobalFunc_730(339.1674f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			}
		}
		if (((PLAYER::PLAYER_PED_ID() == func_106() && !GlobalFunc_709(func_106(), 1785177548, 1)) && !GlobalFunc_709(func_106(), -2017877118, 1)) || ((PLAYER::PLAYER_PED_ID() == func_79() && !GlobalFunc_709(func_79(), 1785177548, 1)) && !GlobalFunc_709(func_79(), -2017877118, 1)))
		{
			func_476(20);
		}
	}
}

void func_899()//Position - 0x8C4A3
{
	var uVar0;
	
	if (Local_4253[19 /*5*/].f_1 > 3)
	{
		if ((Local_630[64 /*20*/].f_4 != 77 && ENTITY::DOES_ENTITY_EXIST(Local_630[64 /*20*/])) && ((PED::IS_PED_INJURED(Local_630[64 /*20*/]) || ENTITY::GET_ENTITY_HEALTH(Local_630[64 /*20*/]) < 200) || Local_630[63 /*20*/].f_4 == 77))
		{
			if (!PED::IS_PED_INJURED(Local_630[64 /*20*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_630[64 /*20*/], 0);
			}
			Local_630[64 /*20*/].f_4 = 77;
			if (Local_4253[19 /*5*/].f_1 < 3)
			{
				Local_4253[19 /*5*/].f_1 = 3;
			}
		}
		if (Local_630[63 /*20*/].f_4 != 77)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_630[63 /*20*/]) && ((PED::IS_PED_INJURED(Local_630[63 /*20*/]) || ENTITY::GET_ENTITY_HEALTH(Local_630[63 /*20*/]) < 200) || (Local_630[64 /*20*/].f_4 == 77 && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_630[63 /*20*/], "missheistfbi3b_ig8_2", "Cower_Loop_Paramedic", 3)))) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_630[63 /*20*/], 1), 1) >= 10f)
			{
				if (!PED::IS_PED_INJURED(Local_630[63 /*20*/]))
				{
					func_468(1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 133.8307f, -731.3259f, 249.1521f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_COWER(0, -1);
					func_466(Local_630[63 /*20*/], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_630[63 /*20*/]));
				}
				Local_630[63 /*20*/].f_4 = 77;
				if (Local_4253[19 /*5*/].f_1 < 3)
				{
					Local_4253[19 /*5*/].f_1 = 3;
				}
			}
		}
		switch (Local_630[65 /*20*/].f_4)
		{
			case 0:
				if (!PED::IS_PED_INJURED(Local_630[65 /*20*/]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_630[65 /*20*/], "missheistfbi3b_ig8_2", "hallyway_enter_fibagenta", 3) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[8]))
					{
						PED::SET_PED_RESET_FLAG(Local_630[65 /*20*/], 156, 1);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[8]) >= 0.975f)
						{
							func_468(1);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 100, 1);
							TASK::TASK_COMBAT_PED_TIMED(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
							func_466(Local_630[65 /*20*/], 1);
							PED::SET_PED_CONFIG_FLAG(Local_630[65 /*20*/], 286, true);
							Local_630[65 /*20*/].f_4++;
						}
					}
					else
					{
						PED::SET_PED_RESET_FLAG(Local_630[65 /*20*/], 156, 0);
						func_468(1);
						TASK::TASK_COMBAT_PED_TIMED(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
						func_466(Local_630[65 /*20*/], 1);
						PED::SET_PED_CONFIG_FLAG(Local_630[65 /*20*/], 286, true);
						Local_630[65 /*20*/].f_4++;
					}
				}
				break;
		}
		switch (Local_630[66 /*20*/].f_4)
		{
			case 0:
				if (!PED::IS_PED_INJURED(Local_630[66 /*20*/]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_630[66 /*20*/], "missheistfbi3b_ig8_2", "hallyway_enter_fibagentb", 3) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[8]))
					{
						PED::SET_PED_RESET_FLAG(Local_630[66 /*20*/], 156, 1);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[8]) >= 0.975f)
						{
							func_468(1);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500, 1);
							TASK::TASK_COMBAT_PED_TIMED(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
							func_466(Local_630[66 /*20*/], 1);
							PED::SET_PED_CONFIG_FLAG(Local_630[66 /*20*/], 286, true);
							Local_630[66 /*20*/].f_4++;
						}
					}
					else
					{
						PED::SET_PED_RESET_FLAG(Local_630[66 /*20*/], 156, 0);
						func_468(1);
						TASK::TASK_COMBAT_PED_TIMED(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
						func_466(Local_630[66 /*20*/], 1);
						PED::SET_PED_CONFIG_FLAG(Local_630[66 /*20*/], 286, true);
						Local_630[66 /*20*/].f_4++;
					}
				}
				break;
			}
	}
	switch (Local_4253[19 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, joaat("s_m_m_paramedic_01"));
			GlobalFunc_718(&Local_4444, iLocal_361);
			GlobalFunc_718(&Local_4444, iLocal_362);
			GlobalFunc_719(&Local_4444, "missheistfbi3b_ig8_2");
			GlobalFunc_719(&Local_4444, "FACIALS@GEN_MALE@BASE");
			if ((((STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_MODEL_LOADED(iLocal_362)) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_paramedic_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistfbi3b_ig8_2")) && STREAMING::HAS_ANIM_DICT_LOADED("FACIALS@GEN_MALE@BASE"))
			{
				func_667(&(Local_630[63 /*20*/]), joaat("s_m_m_paramedic_01"), 129.7995f, -741.9392f, 249.152f, 18.8529f, "IG8_Paramedic", iLocal_626, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[63 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[63 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[63 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[63 /*20*/], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[63 /*20*/], 1);
				func_667(&(Local_630[64 /*20*/]), iLocal_361, 132.1709f, -741.9894f, 249.152f, 21.9195f, "IG8_Victim", iLocal_626, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[64 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[64 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[64 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[64 /*20*/], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[64 /*20*/], 1);
				MISC::SET_BIT(&uVar0, 3);
				MISC::SET_BIT(&uVar0, 4);
				uLocal_3905[0] = OBJECT::CREATE_PICKUP(joaat("pickup_health_standard"), 131.95f, -742.44f, 249.15f, uVar0, -1, 1, 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_630[63 /*20*/], 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_630[64 /*20*/], 0);
				GlobalFunc_5174(&Local_4444, joaat("s_m_m_paramedic_01"));
				GlobalFunc_173(&uLocal_431, 8, Local_630[63 /*20*/], "PARAMEDIC", 0, 1);
				uLocal_3916[7] = PED::CREATE_SYNCHRONIZED_SCENE(Local_299, Local_302, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[63 /*20*/], uLocal_3916[7], "missheistfbi3b_ig8_2", "CPR_Loop_Paramedic", 1000f, -8f, 5, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[64 /*20*/], uLocal_3916[7], "missheistfbi3b_ig8_2", "CPR_Loop_Victim", 1000f, -8f, 5, 16, 1148846080, 0);
				TASK::TASK_PLAY_ANIM(Local_630[64 /*20*/], "FACIALS@GEN_MALE@BASE", "Mood_Knockout_1", 1000f, -8f, -1, 33, 0, 0, 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_3916[7], 1);
				Local_4253[19 /*5*/].f_2 = MISC::GET_GAME_TIMER();
				Local_4253[19 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 126.7143f, -741.7243f, 249.152f, 137.4074f, -745.619f, 251.5246f, 3.4375f, 0, 1, 0) || MISC::IS_BULLET_IN_ANGLED_AREA(116.4643f, -737.1581f, 248.9623f, 134.575f, -743.7006f, 252.652f, 4.8125f, 1))
			{
				uLocal_3916[7] = PED::CREATE_SYNCHRONIZED_SCENE(Local_299, Local_302, 2);
				if (Local_630[64 /*20*/].f_4 != 77)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[63 /*20*/], uLocal_3916[7], "missheistfbi3b_ig8_2", "CPR_To_Cower_Paramedic", 8f, -8f, 5, 16, 1148846080, 0);
				}
				if (Local_630[63 /*20*/].f_4 != 77)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[64 /*20*/], uLocal_3916[7], "missheistfbi3b_ig8_2", "CPR_To_Cower_Victim", 8f, -8f, 5, 16, 1148846080, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[7], 0);
				GlobalFunc_5122(Local_630[63 /*20*/], "GENERIC_SHOCKED_HIGH", 3);
				func_667(&(Local_630[65 /*20*/]), iLocal_361, 118.2252f, -741.4382f, 249.1522f, 309.9308f, "ig8_agent1", iLocal_625, joaat("weapon_pistol"), 0, 5, 150, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[65 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[65 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[65 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[65 /*20*/], 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_630[65 /*20*/], 2);
				PED::SET_COMBAT_FLOAT(Local_630[65 /*20*/], 5, 1f);
				GlobalFunc_173(&uLocal_431, 6, Local_630[65 /*20*/], "FBI2AGENT2", 0, 1);
				func_667(&(Local_630[66 /*20*/]), iLocal_362, 118.1177f, -742.7543f, 249.1522f, 153.1093f, "ig8_agent2", iLocal_625, joaat("weapon_pistol"), 0, 5, 150, 0, 1, 1);
				PED::_0x110F526AB784111F(Local_630[66 /*20*/], 0.099f);
				PED::SET_PED_ENVEFF_SCALE(Local_630[66 /*20*/], 1f);
				PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[66 /*20*/], 87, 81, 68);
				PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[66 /*20*/], 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_630[66 /*20*/], 1);
				PED::SET_COMBAT_FLOAT(Local_630[66 /*20*/], 5, 1f);
				GlobalFunc_173(&uLocal_431, 7, Local_630[66 /*20*/], "FBI2AGENT3", 0, 1);
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				Local_4253[19 /*5*/].f_2 = MISC::GET_GAME_TIMER();
				Local_4253[19 /*5*/].f_1++;
			}
			else if ((!PED::IS_PED_INJURED(Local_630[63 /*20*/]) && GlobalFunc_5170()) && (MISC::GET_GAME_TIMER() - Local_4253[19 /*5*/].f_2) > 10000)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_630[63 /*20*/], 1), 1) < 7f)
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PARAMED", 8, 0, 0, 0))
					{
						Local_4253[19 /*5*/].f_2 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_AGENTS1", 8, 0, 0, 0))
				{
					uLocal_3916[8] = PED::CREATE_SYNCHRONIZED_SCENE(Local_299, Local_302, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[65 /*20*/], uLocal_3916[8], "missheistfbi3b_ig8_2", "hallyway_enter_fibagenta", 8f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[66 /*20*/], uLocal_3916[8], "missheistfbi3b_ig8_2", "hallyway_enter_fibagentb", 8f, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[8], 0);
					Local_4253[19 /*5*/].f_1++;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[7]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[7]) >= 1f)
			{
				uLocal_3916[7] = PED::CREATE_SYNCHRONIZED_SCENE(Local_299, Local_302, 2);
				if (Local_630[63 /*20*/].f_4 != 77)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[63 /*20*/], uLocal_3916[7], "missheistfbi3b_ig8_2", "Cower_Loop_Paramedic", 8f, -8f, 5, 16, 1148846080, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_630[63 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (Local_630[64 /*20*/].f_4 != 77)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[64 /*20*/], uLocal_3916[7], "missheistfbi3b_ig8_2", "Cower_Loop_Victim", 8f, -8f, 5, 16, 1148846080, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_3916[7], 1);
				Local_4253[19 /*5*/].f_2 = MISC::GET_GAME_TIMER();
				Local_4253[19 /*5*/].f_1++;
			}
			break;
		
		case 5:
			if (((PED::IS_PED_INJURED(Local_630[63 /*20*/]) && PED::IS_PED_INJURED(Local_630[64 /*20*/])) && PED::IS_PED_INJURED(Local_630[65 /*20*/])) && PED::IS_PED_INJURED(Local_630[66 /*20*/]))
			{
				GlobalFunc_5175(&Local_4444, "missheistfbi3b_ig8_2");
				GlobalFunc_5175(&Local_4444, "FACIALS@GEN_MALE@BASE");
				func_476(19);
			}
			else if (PED::IS_PED_INJURED(Local_630[65 /*20*/]) && PED::IS_PED_INJURED(Local_630[66 /*20*/]))
			{
				if (!PED::IS_PED_INJURED(Local_630[63 /*20*/]) && !PED::IS_PED_INJURED(Local_630[64 /*20*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_630[63 /*20*/], 1), 1) < 7f)
					{
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - Local_4253[19 /*5*/].f_2) > 20000)
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_PARAMED2", 8, 0, 0, 0))
							{
								Local_4253[19 /*5*/].f_2 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			break;
	}
}

void func_900()//Position - 0x8D0EE
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_630[49 /*20*/]) && PED::IS_PED_INJURED(Local_630[49 /*20*/]))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AH3B_ENEMY_DOWN");
		GlobalFunc_5175(&Local_4444, &cLocal_275);
		func_476(18);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[49 /*20*/]) && !PED::IS_PED_INJURED(Local_630[49 /*20*/]))
		{
			PED::SET_PED_RESET_FLAG(Local_630[49 /*20*/], 156, 1);
		}
		switch (Local_4253[18 /*5*/].f_1)
		{
			case 1:
				GlobalFunc_718(&Local_4444, iLocal_361);
				GlobalFunc_719(&Local_4444, &cLocal_275);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_275))
				{
					func_667(&(Local_630[49 /*20*/]), iLocal_361, 136.54f, -733.814f, 250.189f, 158.5f, "ig7_elevator", iLocal_625, joaat("weapon_pistol"), 0, 5, 130, 0, 1, 1);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Local_630[49 /*20*/], 1);
					PED::_0x110F526AB784111F(Local_630[49 /*20*/], 0.099f);
					PED::SET_PED_ENVEFF_SCALE(Local_630[49 /*20*/], 1f);
					PED::SET_PED_ENVEFF_COLOR_MODULATOR(Local_630[49 /*20*/], 87, 81, 68);
					PED::SET_ENABLE_PED_ENVEFF_SCALE(Local_630[49 /*20*/], 1);
					GlobalFunc_173(&uLocal_431, 6, Local_630[49 /*20*/], "SWAT3", 0, 1);
					uLocal_3916[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_293, Local_296, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[49 /*20*/], uLocal_3916[6], &cLocal_275, &cLocal_281, 1000f, -4f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_3916[6], 1);
					Local_630[49 /*20*/].f_4 = -1;
					Local_4253[18 /*5*/].f_1++;
				}
				break;
			
			case 2:
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_630[49 /*20*/]))
				{
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Local_630[49 /*20*/], 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[49 /*20*/], joaat("weapon_pistol"), 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_630[49 /*20*/], 20f, 0);
					Local_630[49 /*20*/].f_4 = 0;
					Local_4253[18 /*5*/].f_1 = 5;
				}
				else if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_106(), 146.7784f, -735.5237f, 249.1521f, 131.956f, -730.5193f, 252.9734f, 4.5625f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[1 /*20*/], 146.7784f, -735.5237f, 249.1521f, 131.956f, -730.5193f, 252.9734f, 4.5625f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 146.7784f, -735.5237f, 249.1521f, 131.956f, -730.5193f, 252.9734f, 4.5625f, 0, 1, 0)) || PED::HAS_PED_RECEIVED_EVENT(Local_630[49 /*20*/], 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_630[49 /*20*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_630[49 /*20*/], 123))
				{
					uLocal_3916[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_293, Local_296, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_630[49 /*20*/], uLocal_3916[6], &cLocal_275, &cLocal_287, 4f, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[6], 0);
					Local_630[49 /*20*/].f_4 = 0;
					Local_4253[18 /*5*/].f_1++;
				}
				else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (Local_630[49 /*20*/].f_4 == -1)
					{
						Local_630[49 /*20*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
					}
					else if (MISC::GET_GAME_TIMER() > Local_630[49 /*20*/].f_4)
					{
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_AGENT_TRY", 8, 0, 0, 0))
							{
								Local_630[49 /*20*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							}
						}
					}
				}
				break;
			
			case 3:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[6]) >= 0.353f)
				{
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Local_630[49 /*20*/], 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[49 /*20*/], joaat("weapon_pistol"), 1);
					Local_4253[18 /*5*/].f_1++;
				}
				break;
			
			case 4:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[6]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[6]) >= 0.812f)
				{
					func_468(1);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500, 1);
					TASK::TASK_COMBAT_PED_TIMED(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
					func_466(Local_630[49 /*20*/], 1);
					Local_4253[18 /*5*/].f_1++;
				}
				break;
		}
		if (Local_4253[18 /*5*/].f_1 >= 3 && Local_630[49 /*20*/].f_4 != -1)
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			else if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_AGENT_SEE", 8, 0, 0, 0))
				{
					Local_630[49 /*20*/].f_4 = -1;
				}
			}
		}
	}
}

void func_901()//Position - 0x8D5AB
{
	float fVar0;
	
	switch (Local_4253[17 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_719(&Local_4444, &cLocal_239);
			iLocal_4234 = 0;
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_239))
			{
				func_667(&(Local_630[42 /*20*/]), iLocal_364, 129.45f, -728.34f, 254.15f, 173.95f, "stair 4", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 2, 110, 0, 1, 1);
				ENTITY::SET_ENTITY_HEALTH(Local_630[42 /*20*/], 110);
				func_667(&(Local_630[43 /*20*/]), iLocal_364, 127.0042f, -728.3694f, 253.1523f, 211.8783f, "stair 5", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 2, 110, 0, 1, 1);
				ENTITY::SET_ENTITY_HEALTH(Local_630[43 /*20*/], 110);
				TASK::TASK_AIM_GUN_AT_COORD(Local_630[42 /*20*/], 126.66f, -736.3271f, 253.9823f, -1, 1, 0);
				TASK::TASK_AIM_GUN_AT_COORD(Local_630[43 /*20*/], 130.4947f, -733.9948f, 254.8302f, -1, 1, 0);
				GlobalFunc_173(&uLocal_431, 8, Local_630[42 /*20*/], "SWAT3", 0, 1);
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[3 /*20*/], 0);
				func_602(&(Local_630[3 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 1f, 0, 0, 0, 0);
				PED::SET_PED_ACCURACY(Local_630[3 /*20*/], 10);
				PED::REMOVE_PED_DEFENSIVE_AREA(func_447(), 0);
				func_602(&(Local_630[0 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 1f, 0, 0, 0, 0);
				func_602(&(Local_630[1 /*20*/]), 0f, 0f, 0f, 0f, 2, 0, 1, 1, 1f, 1f, 0, 0, 0, 0);
				Local_4210 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_239, &cLocal_245, Local_251, Local_254, 0f, 2)) };
				func_600(&uLocal_7102, Local_4210, 343.8403f, 1, 2, 1);
				GlobalFunc_5175(&Local_4444, &cLocal_227);
				AUDIO::PREPARE_MUSIC_EVENT("AH3B_DOOR_52");
				iLocal_4219 = 1;
				iLocal_4220 = 1;
				iLocal_4221 = 0;
				Local_4253[17 /*5*/].f_1++;
			}
			break;
		
		case 2:
			bLocal_4199 = false;
			iLocal_4200 = 0;
			if (!GlobalFunc_709(func_447(), 242628503, 1) || iLocal_4219)
			{
				iLocal_4221 = 2;
				func_468(1);
				if (PED::IS_PED_IN_COVER(func_447(), 0))
				{
					TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
					iLocal_4221++;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 127.3561f, -733.6717f, 253.1511f, 2f, 20000, 0.25f, 2112, 40000f);
				TASK::TASK_AIM_GUN_AT_COORD(0, 129.1243f, -730.1541f, 254.6746f, -1, 0, 0);
				func_466(func_447(), 1);
				iLocal_4219 = 0;
			}
			else if ((GlobalFunc_709(func_447(), 242628503, 1) && ((iLocal_4221 == 2 && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 1) || (iLocal_4221 == 3 && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 2))) && GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 127.3561f, -733.6717f, 253.1511f, 2f))
			{
				PED::SET_PED_RESET_FLAG(func_447(), 71, 1);
				bLocal_4199 = true;
			}
			if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1) || iLocal_4220)
			{
				func_468(1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_4210, 2f, 20000, 0.25f, 2112, 40000f);
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 130.3619f, -730.3313f, 254.5613f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
				iLocal_4220 = 0;
			}
			else if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), Local_4210, 1.5f) && PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 0))
			{
				iLocal_4200 = 1;
			}
			if ((bLocal_4199 && iLocal_4200) && iLocal_4234 > 2)
			{
				uLocal_3916[4] = PED::CREATE_SYNCHRONIZED_SCENE(Local_251, Local_254, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_630[3 /*20*/], uLocal_3916[4], &cLocal_239, &cLocal_245, 8f, -4f, 1, 0, 1148846080, 0);
				StringCopy(&cLocal_4237, "", 24);
				Local_4253[17 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[4]))
			{
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[4]);
				if (fVar0 >= 0.44f)
				{
					func_6(7, 1, -1f, 700);
					if (AUDIO::PREPARE_MUSIC_EVENT("AH3B_DOOR_52"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_DOOR_52");
					}
					iLocal_4219 = 1;
					iLocal_4220 = 1;
					Local_4253[17 /*5*/].f_1 = 5;
				}
			}
			break;
		
		case 5:
			if (PED::IS_PED_INJURED(Local_630[42 /*20*/]) && PED::IS_PED_INJURED(Local_630[43 /*20*/]))
			{
				iLocal_4234 = 0;
				GlobalFunc_5175(&Local_4444, &cLocal_239);
				func_476(17);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
				{
					if (!GlobalFunc_709(func_447(), 242628503, 1) || iLocal_4219)
					{
						func_468(1);
						TASK::TASK_SHOOT_AT_ENTITY(0, Local_630[42 /*20*/], 3000, -957453492);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 10f, 0);
						func_466(func_447(), 1);
						iLocal_4219 = 0;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[42 /*20*/]) && !PED::IS_PED_INJURED(Local_630[42 /*20*/]))
				{
					if (!GlobalFunc_709(Local_630[42 /*20*/], 242628503, 1))
					{
						func_468(1);
						TASK::TASK_SHOOT_AT_ENTITY(0, func_447(), 2000, -687903391);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 10f, 0);
						func_466(Local_630[42 /*20*/], 1);
					}
					else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_630[42 /*20*/]))
					{
						GlobalFunc_5117(Local_630[42 /*20*/], "AH3b_EYAA", "SWAT2", 3);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_630[43 /*20*/]) && !PED::IS_PED_INJURED(Local_630[43 /*20*/]))
				{
					if (!GlobalFunc_709(Local_630[43 /*20*/], 242628503, 1))
					{
						func_468(1);
						TASK::TASK_SHOOT_AT_ENTITY(0, Local_630[3 /*20*/], 2000, -957453492);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 10f, 0);
						func_466(Local_630[43 /*20*/], 1);
					}
					else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_630[43 /*20*/]))
					{
						GlobalFunc_5117(Local_630[43 /*20*/], "AH3b_EZAA", "SWAT3", 3);
					}
				}
				if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[4]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[4]) == 1f) && (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1) || iLocal_4220))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 12, 1);
					PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 0, 1f);
					PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 1, 4f);
					func_468(1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, TASK::GET_SCRIPTED_COVER_POINT_COORDS(uLocal_7102[uLocal_7102.f_3]), 1000, 0, 0.5f, 1, 1, uLocal_7102[uLocal_7102.f_3], 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 10f, 0);
					func_466(Local_630[3 /*20*/], 1);
					iLocal_4220 = 0;
				}
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 2000)
				{
					func_449("AH_OUT", 1, &cLocal_4237, 0, 1, 1, 1);
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
					{
						StringCopy(&cLocal_4237, "", 24);
					}
				}
			}
			break;
	}
	switch (iLocal_4234)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 130.2438f, -732.3018f, 253.25f, 127.5568f, -739.0922f, 257.129f, 1.9375f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 125.6823f, -738.41f, 251.1881f, 128.2367f, -731.5858f, 255.1517f, 2.5f, 0, 1, 0))
			{
				GlobalFunc_4956();
				iLocal_4234++;
			}
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SWATCHAT2", 8, 0, 0, 0))
				{
					iLocal_4234++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_ODOOR", 0)}, 6);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					iLocal_4234++;
				}
			}
			break;
	}
}


void func_903()//Position - 0x8DDC1
{
	switch (Local_4253[16 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_5105();
			GlobalFunc_5175(&Local_4444, &cLocal_191);
			GlobalFunc_719(&Local_4444, &cLocal_227);
			func_600(&uLocal_7098, 129.7267f, -731.5209f, 257.1522f, 165.6992f, 0, 2, 0);
			func_600(&uLocal_7102, 127.6624f, -730.771f, 257.1522f, 157.5018f, 1, 2, 0);
			PED::REMOVE_PED_DEFENSIVE_AREA(func_447(), 0);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[3 /*20*/], 0);
			iLocal_4219 = 1;
			iLocal_4220 = 1;
			bLocal_4199 = false;
			iLocal_4200 = 0;
			Local_4253[16 /*5*/].f_1++;
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				func_449("AH_MOVEON", 1, &cLocal_4237, 0, 1, 1, 1);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					Local_4253[16 /*5*/].f_1++;
				}
			}
			break;
		
		case 3:
			PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 71, 1);
			PED::SET_PED_RESET_FLAG(Local_630[3 /*20*/], 319, 1);
			if ((GlobalFunc_709(func_447(), 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 2) && GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(func_447(), 1), 129.7267f, -731.5209f, 257.1522f, 2f))
			{
				bLocal_4199 = true;
			}
			else if (!GlobalFunc_709(func_447(), 242628503, 1) || iLocal_4219)
			{
				bLocal_4199 = false;
				PED::SET_PED_STEERS_AROUND_PEDS(func_447(), 0);
				func_468(1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 126.9454f, -728.5305f, 257.1519f, 2f, 20000, 0.25f, 1, 40000f);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 130.3221f, -730.3776f, 257.1519f, 128.6206f, -731.5894f, 258.554f, 2f, 0, 0.5f, 2f, 1, 1, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_COORD(0, 128.6206f, -731.5894f, 258.554f, -1, 0, 1);
				func_466(func_447(), 1);
				iLocal_4219 = 0;
			}
			if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 0) && GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), 127.6624f, -730.771f, 257.1522f, 2f))
			{
				iLocal_4200 = 1;
			}
			else if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1) || iLocal_4220)
			{
				iLocal_4200 = 0;
				func_468(1);
				if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 0))
				{
					TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 126.5442f, -736.1642f, 257.5806f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
				iLocal_4220 = 0;
			}
			if (bLocal_4199 && iLocal_4200)
			{
				if (GlobalFunc_5170())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 124.115f, -727.3353f, 257.1522f, 131.9197f, -730.1468f, 260.8183f, 4.625f, 0, 1, 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_227) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_447(), 129.9604f, -729.7942f, 257.1522f, 131.7941f, -730.4918f, 260.8587f, 4.3125f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 129.1647f, -729.8249f, 257.1522f, 128.612f, -731.4949f, 260.77f, 2.375f, 0, 1, 0))
							{
								MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_DOOR", 0)}, 6);
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									func_667(&(Local_630[41 /*20*/]), iLocal_364, 126.9457f, -736.9636f, 255.1506f, 348.8681f, "stair_3", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 2, 110, 0, 1, 1);
									AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_630[3 /*20*/], "SHOOT_THROUGH_DOOR_GROUP", 0f);
									AUDIO::START_AUDIO_SCENE("AH_3B_SHOOTTHROUGHDOOR_SCENE");
									uLocal_3916[3] = PED::CREATE_SYNCHRONIZED_SCENE(127.946f, -731.132f, 257.132f, 0f, 0f, -20f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_630[3 /*20*/], uLocal_3916[3], &cLocal_227, &cLocal_233, 4f, -8f, 1, 0, 1f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_630[41 /*20*/], uLocal_3916[3], &cLocal_227, "shoot_opendoor_guard", 4f, -8f, 0, 0, 1148846080, 0);
									PED::SET_PED_STEERS_AROUND_PEDS(PLAYER::PLAYER_PED_ID(), 1);
									PED::SET_PED_STEERS_AROUND_PEDS(func_447(), 1);
									RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
									GlobalFunc_719(&Local_4444, &cLocal_239);
									StringCopy(&cLocal_4237, "", 24);
									iLocal_4219 = 1;
									Local_4253[16 /*5*/].f_1++;
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 5000)
							{
								func_449("AH_DOORM", 0, &cLocal_4237, 1, 1, 1, 1);
								if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
								{
									StringCopy(&cLocal_4237, "", 24);
								}
							}
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
					{
						func_449("AH_MOVEON", 1, &cLocal_4237, 1, 1, 1, 1);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
						}
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_709(func_447(), 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 2)
			{
				if (iLocal_4219)
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_447(), uLocal_7098[uLocal_7098.f_3], 126.5442f, -736.1642f, 257.5806f, -1, 0);
					iLocal_4219 = 0;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[3]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[3]) >= 0.34f)
				{
					PED::SET_PED_ACCURACY(Local_630[3 /*20*/], 100);
					PED::SET_PED_SHOOTS_AT_COORD(Local_630[3 /*20*/], 127.9899f, -731.2427f, 258.175f, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "RFL_SINGLESHOT_NPC_MASTER", Local_630[3 /*20*/], 0, 0, 0);
					Local_4253[16 /*5*/].f_1++;
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_709(func_447(), 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 2)
			{
				if (iLocal_4219)
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_447(), uLocal_7098[uLocal_7098.f_3], 126.5442f, -736.1642f, 257.5806f, -1, 0);
					iLocal_4219 = 0;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[3]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[3]) >= 0.53f)
				{
					func_6(6, 1, 1f, 400);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3b_wood_splinter", 127.95f, -731.32f, 258.23f, 0f, 0f, 0f, 1f, 0, 0, 0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_630[3 /*20*/], 0f);
					AUDIO::STOP_AUDIO_SCENE("AH_3B_SHOOTTHROUGHDOOR_SCENE");
					Local_4253[16 /*5*/].f_1++;
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_709(func_447(), 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 2)
			{
				if (iLocal_4219)
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(func_447(), uLocal_7098[uLocal_7098.f_3], 126.5442f, -736.1642f, 257.5806f, -1, 0);
					iLocal_4219 = 0;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[3]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[3]) >= 0.72f)
				{
					if (!PED::IS_PED_INJURED(Local_630[41 /*20*/]))
					{
						WEAPON::SET_AMMO_IN_CLIP(Local_630[3 /*20*/], iLocal_375, 26);
						PED::SET_PED_COMBAT_MOVEMENT(Local_630[3 /*20*/], 0);
						PED::SET_PED_SHOOTS_AT_COORD(Local_630[3 /*20*/], ENTITY::GET_ENTITY_COORDS(Local_630[41 /*20*/], 1), 1);
					}
					else
					{
						Local_4253[16 /*5*/].f_1++;
					}
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_5170())
			{
				MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_STAIR", 0)}, 6);
				if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
				{
					StringCopy(&cLocal_4237, "", 24);
					func_476(16);
				}
			}
			break;
	}
}

void func_904()//Position - 0x8E56B
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	char cVar8[32];
	
	switch (Local_4253[15 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_364);
			GlobalFunc_727(&Local_4444, &cLocal_347);
			GlobalFunc_727(&Local_4444, &cLocal_353);
			GlobalFunc_719(&Local_4444, &cLocal_191);
			Local_630[39 /*20*/].f_4 = -1;
			Local_630[40 /*20*/].f_4 = -1;
			if ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_347) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_353)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_191))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(func_79(), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_79(), 1);
				WEAPON::SET_CURRENT_PED_WEAPON(func_79(), joaat("weapon_carbinerifle"), 1);
				if (TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_347, 4, &Var2))
				{
					ENTITY::SET_ENTITY_COORDS(func_79(), Var2, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_79(), 73.9792f);
				}
				Local_4207 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_191, &cLocal_197, Local_221, Local_224, 0f, 2)) };
				func_468(1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_347, 5, 0, -1);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_4207, 118.2876f, -734.7114f, 258.5561f, 1f, 0, 0f, 4f, 1, 512, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_COORD(0, 118.2876f, -734.7114f, 258.5561f, -1, 0, 0);
				func_466(func_447(), 1);
				iLocal_4229 = 3;
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_79(), 0, 0);
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_630[3 /*20*/], 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[3 /*20*/], 1);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
				ENTITY::SET_ENTITY_COORDS(Local_630[3 /*20*/], 146.7726f, -756.3869f, 257.1695f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_630[3 /*20*/], 68.9933f);
				func_905(&uLocal_7102);
				Local_4210 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_191, &cLocal_205, Local_221, Local_224, 0f, 2) };
				Local_4210.f_2 = 257.1523f;
				func_600(&uLocal_7102, 146.7726f, -756.3869f, 257.1695f, 68.9933f, 0, 0, 1);
				func_600(&uLocal_7102, Local_4210, 336.6323f, 1, 2, 0);
				func_468(1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 146.7726f, -756.3869f, 257.1695f, 1000, 0, 0f, 1, 0, uLocal_7102[(1 - uLocal_7102.f_3)], 0);
				TASK::TASK_EXIT_COVER(0, 3, 0f, 0f, 0f);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_353, 0, 8, -1);
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 120.4668f, -731.2372f, 257.1523f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
				Local_630[3 /*20*/].f_4 = MISC::GET_GAME_TIMER();
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[3 /*20*/], 0, 0);
				iLocal_4200 = 0;
				bLocal_4199 = false;
				func_880(15, 0);
			}
			break;
		
		case 2:
			if (!GlobalFunc_709(func_447(), 242628503, 1))
			{
				func_468(1);
				iLocal_4229 = 2;
				if (!GlobalFunc_537(func_897(ENTITY::GET_ENTITY_COORDS(func_447(), 1)), Local_4207, 3f))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_347, 0, 8, -1);
					iLocal_4229++;
				}
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_4207, 118.2876f, -734.7114f, 258.5561f, 1f, 0, 0f, 4f, 0, 513, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_COORD(0, 118.2876f, -734.7114f, 258.5561f, -1, 1, 0);
				func_466(func_447(), 1);
			}
			else if ((iLocal_4229 == 2 && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 1) || (iLocal_4229 == 3 && TASK::GET_SEQUENCE_PROGRESS(func_447()) == 2))
			{
				bLocal_4199 = true;
			}
			else
			{
				bLocal_4199 = false;
			}
			if (!GlobalFunc_709(Local_630[3 /*20*/], 242628503, 1) && !GlobalFunc_709(Local_630[3 /*20*/], -1716541277, 1))
			{
				func_468(1);
				if (!GlobalFunc_537(func_897(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1)), Local_4210, 3f))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_353, 0, 8, -1);
				}
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_7102[uLocal_7102.f_3], 120.4668f, -731.2372f, 257.1523f, -1, 0);
				func_466(Local_630[3 /*20*/], 1);
			}
			else if (PED::IS_PED_IN_COVER(Local_630[3 /*20*/], 0) && PED::IS_PED_IN_COVER_FACING_LEFT(Local_630[3 /*20*/]))
			{
				if (!iLocal_4200)
				{
					iLocal_4200 = 1;
					Local_4253[15 /*5*/].f_2 = MISC::GET_GAME_TIMER() + 500;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() - Local_630[3 /*20*/].f_4) > 30000)
				{
					if (!GlobalFunc_709(Local_630[3 /*20*/], -1716541277, 1))
					{
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_630[3 /*20*/], uLocal_7102[uLocal_7102.f_3], 120.4668f, -731.2372f, 257.1523f, -1, 0);
						Local_630[3 /*20*/].f_4 = MISC::GET_GAME_TIMER();
					}
				}
				iLocal_4200 = 0;
			}
			if ((((bLocal_4199 && iLocal_4200) && MISC::GET_GAME_TIMER() > Local_4253[15 /*5*/].f_2) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 116.4604f, -735.9209f, 257.1523f, 118.9378f, -736.8342f, 259.4023f, 1.375f, 0, 1, 0)) && iLocal_6077 == 0)
			{
				if (GlobalFunc_5170())
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 117.2096f, -737.2162f, 257.1524f, 0) <= 11f)
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_BREACH1", 8, 0, 0, 0))
						{
							Var5 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_191, &cLocal_205, Local_221, Local_224, 1f, 2)) };
							func_602(&(Local_630[3 /*20*/]), Var5, 1f, 1, 1, 1, 1, 1065353216, 0, 0, 0, 0, 0);
							func_600(&uLocal_7102, Var5, 251.0905f, 1, 2, 0);
							func_667(&(Local_630[39 /*20*/]), iLocal_364, 125.5959f, -728.5275f, 257.1522f, 72.9956f, "stair_1", iLocal_625, joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"), 100, 110, 0, 1, 1);
							PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_630[39 /*20*/]);
							GlobalFunc_200(&uLocal_431, 6);
							GlobalFunc_173(&uLocal_431, 6, Local_630[39 /*20*/], "SWAT3", 0, 1);
							Local_630[39 /*20*/].f_4 = 0;
							func_667(&(Local_630[40 /*20*/]), iLocal_364, 128.9331f, -731.0729f, 257.1522f, 64.3427f, "stair_2", iLocal_625, joaat("weapon_smg"), joaat("component_at_ar_flsh"), 2, 110, 0, 1, 1);
							func_534(&(Local_630[40 /*20*/]), 0);
							uLocal_3916[2] = PED::CREATE_SYNCHRONIZED_SCENE(Local_221, Local_224, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_447(), uLocal_3916[2], &cLocal_191, &cLocal_197, 4f, -4f, 1, 0, 4f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_630[3 /*20*/], uLocal_3916[2], &cLocal_191, &cLocal_205, 4f, -4f, 1, 0, 4f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_630[39 /*20*/], uLocal_3916[2], &cLocal_191, &cLocal_213, 1000f, -1000f, 17, 16, 1148846080, 0);
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							func_491(&uLocal_627, 128.489f, -731.9869f, 253.1524f, 0);
							GlobalFunc_5105();
							GlobalFunc_5186(&Local_4444, &cLocal_347);
							GlobalFunc_5186(&Local_4444, &cLocal_353);
							func_880(15, 0);
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_4236) > 7500)
					{
						func_449("AH_MOVEON", 1, &cLocal_4237, 1, 1, 1, 1);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
						}
					}
				}
			}
			break;
		
		case 3:
			if (Local_630[39 /*20*/].f_4 != 7)
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[2]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) <= 0.812f) && (PED::IS_PED_INJURED(Local_630[39 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_630[39 /*20*/], PLAYER::PLAYER_PED_ID(), 1)))
				{
					if (Local_630[39 /*20*/].f_4 != 602)
					{
						Local_630[39 /*20*/].f_4 = 602;
					}
					if (Local_630[40 /*20*/].f_4 < 0)
					{
						Local_630[40 /*20*/].f_4 = 0;
					}
				}
			}
			switch (Local_630[39 /*20*/].f_4)
			{
				case 0:
					PED::SET_PED_CAPSULE(func_79(), 0.4f);
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) >= 0.11f)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3b_wood_splinter", 117.91f, -735.82f, 258.18f, 0f, 0f, 0f, 1f, 0, 0, 0);
						func_6(0, 1, 1f, 500);
						func_6(1, 1, -1f, 400);
						Local_630[39 /*20*/].f_4++;
					}
					break;
				
				case 1:
					PED::SET_PED_CAPSULE(func_79(), 0.4f);
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) >= 0.236f)
					{
						PED::SET_PED_SHOOTS_AT_COORD(Local_630[39 /*20*/], 123.6343f, -728.335f, 258.2463f, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_STAIRWELL");
						func_671(&(Local_630[39 /*20*/]), 1);
						func_6(5, 0, -0.15f, 1000);
						Local_630[39 /*20*/].f_4 = 2;
					}
					break;
				
				case 2:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) >= 0.275f)
					{
						GlobalFunc_4956();
						func_6(5, 0, -1f, 600);
						Local_630[39 /*20*/].f_4++;
					}
					else
					{
						MISC::HAS_BULLET_IMPACTED_IN_AREA(123.59f, -728.47f, 258.19f, 0.3f, 0, 1);
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3b_wood_splinter", 123.59f, -728.47f, 258.19f, 0f, 0f, 0f, 1f, 0, 0, 0);
					}
					break;
				
				case 3:
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SWAT1", 8, 0, 0, 0))
					{
						Local_630[39 /*20*/].f_4++;
					}
					break;
				
				case 4:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) >= 0.373f)
					{
						GlobalFunc_4956();
						WEAPON::SET_PED_DROPS_WEAPON(Local_630[39 /*20*/]);
						Local_630[40 /*20*/].f_4 = 0;
						Local_630[39 /*20*/].f_4++;
					}
					break;
				
				case 5:
					if (GlobalFunc_5170())
					{
						cVar8 = { func_459(iLocal_4196, "AH_GUNHIT", 0) };
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cVar8, 8, 0, 0, 0))
						{
							Local_630[39 /*20*/].f_4 = 501;
						}
					}
					break;
				
				case 501:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) >= 0.789f)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) <= 0.8f)
						{
							PED::SET_PED_ACCURACY(func_447(), 100);
							PED::SET_PED_SHOOTS_AT_COORD(func_447(), 121.4192f, -726.5958f, 257.3294f, 0);
						}
						else
						{
							PED::SET_PED_ACCURACY(func_447(), 10);
							ENTITY::SET_ENTITY_HEALTH(Local_630[39 /*20*/], 0);
							Local_630[39 /*20*/].f_4 = 502;
						}
					}
					else if (iLocal_7971 < 2 && GlobalFunc_5170())
					{
						if (func_447() == func_106())
						{
							StringCopy(&cLocal_4237, "AH_SHOOT_M", 24);
						}
						else
						{
							StringCopy(&cLocal_4237, "AH_SHOOT_F", 24);
						}
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_7971++;
						}
					}
					break;
				
				case 502:
					if (GlobalFunc_5170())
					{
						if (PLAYER::PLAYER_PED_ID() == func_106())
						{
							StringCopy(&cLocal_4237, "AH_MICHSHOOT", 24);
						}
						else
						{
							StringCopy(&cLocal_4237, "AH_FRANSHOOT", 24);
						}
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							Local_630[39 /*20*/].f_4 = 601;
						}
					}
					break;
				
				case 601:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[2]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[2]) == 1f)
					{
						Var5 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_191, &cLocal_197, Local_221, Local_224, 1f, 2)) };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), Var5, 1.5f, 0, 0);
						TASK::TASK_AIM_GUN_AT_COORD(func_447(), 123.6345f, -728.0139f, 258.3256f, -1, 1, 0);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[3 /*20*/], Var5, -1, 0, 0f, 1, 1, uLocal_7102[uLocal_7102.f_3], 0);
						Local_630[39 /*20*/].f_4 = 7;
					}
					break;
				
				case 602:
					if (!PED::IS_PED_INJURED(Local_630[39 /*20*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_630[39 /*20*/], 0);
					}
					Var5 = { func_897(PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_191, &cLocal_197, Local_221, Local_224, 1f, 2)) };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_447(), Var5, 1.5f, 0, 0);
					func_468(1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var5, 123.986f, -728.0083f, 258.5623f, 1f, 0, 0.2f, 1f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 123.986f, -728.0083f, 258.5623f, -1, 1, 0);
					func_466(func_447(), 1);
					if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1f))
					{
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_630[3 /*20*/], uLocal_7102[uLocal_7102.f_3], 126.2951f, -728.7147f, 258.6575f, -1, 0);
					}
					else
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[3 /*20*/], 120.222f, -729.1161f, 257.1519f, 1.5f, 0, 0);
						func_468(1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 120.222f, -729.1161f, 257.1519f, 125.5695f, -727.522f, 258.4745f, 1f, 0, 0.2f, 1f, 1, 0, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 125.5695f, -727.522f, 258.4745f, -1, 1, 0);
						func_466(Local_630[3 /*20*/], 1);
					}
					Local_630[39 /*20*/].f_4 = 7;
					break;
			}
			if (PED::IS_PED_INJURED(Local_630[40 /*20*/]))
			{
				if (Local_630[40 /*20*/].f_4 < 99)
				{
					Local_630[40 /*20*/].f_4 = 99;
				}
			}
			switch (Local_630[40 /*20*/].f_4)
			{
				case 0:
					func_6(5, 0, 0f, 1500);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_630[40 /*20*/], 128.558f, -727.9175f, 257.1522f, 1.5f, 0, 0);
					func_468(1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 128.558f, -727.9175f, 257.1522f, func_79(), 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
					TASK::TASK_AIM_GUN_AT_COORD(0, 124.195f, -728.0079f, 258.6689f, -1, 0, 0);
					func_466(Local_630[40 /*20*/], 1);
					SYSTEM::SETTIMERA(0);
					GlobalFunc_173(&uLocal_431, 6, Local_630[40 /*20*/], "SWAT2", 0, 1);
					Local_630[40 /*20*/].f_4++;
					break;
				
				case 1:
					if (Local_630[39 /*20*/].f_4 == 7 && TASK::GET_SEQUENCE_PROGRESS(Local_630[40 /*20*/]) == 1)
					{
						GlobalFunc_4956();
						Local_630[40 /*20*/].f_4++;
					}
					break;
				
				case 2:
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_SWAT2", 8, 0, 0, 0))
						{
							Local_630[40 /*20*/].f_4++;
						}
					}
					break;
				
				case 3:
					if (!GlobalFunc_111() || SYSTEM::TIMERA() > 1000)
					{
						TASK::TASK_SHOOT_AT_COORD(Local_630[40 /*20*/], 124.195f, -728.0079f, 258.6689f, 1500, -957453492);
						func_534(&(Local_630[40 /*20*/]), 1);
						Local_630[40 /*20*/].f_4++;
					}
					break;
				
				case 4:
					func_679(5, &uVar1, &fVar0);
					if (fVar0 < 0.3f)
					{
						func_6(5, 1, -1f, 300);
						SYSTEM::SETTIMERA(0);
						Local_630[40 /*20*/].f_4++;
					}
					break;
				
				case 5:
					if (((!GlobalFunc_709(Local_630[40 /*20*/], -653332088, 1) && SYSTEM::TIMERA() > 4000) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_630[40 /*20*/])) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_630[40 /*20*/]))
					{
						if (GlobalFunc_697(iLocal_4196) == 1)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 12, 0);
							PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 0, 0f);
							TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], Local_630[40 /*20*/], 0, 16);
						}
						else if (GlobalFunc_697(iLocal_4196) == 2)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 12, 1);
							PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 0, 1f);
							PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 3, 4f);
							TASK::TASK_COMBAT_PED(Local_630[3 /*20*/], Local_630[40 /*20*/], 0, 16);
						}
						Local_630[40 /*20*/].f_4++;
					}
					break;
				
				case 6:
					PED::SET_COMBAT_FLOAT(Local_630[40 /*20*/], 5, 1f);
					PED::SET_COMBAT_FLOAT(Local_630[40 /*20*/], 8, 1f);
					func_468(1);
					TASK::TASK_AIM_GUN_AT_COORD(0, 124.195f, -728.0079f, 258.6689f, 6000, 1, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 128.6558f, -728.938f, 257.1522f, 124.195f, -728.0079f, 258.6689f, 1f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 124.195f, -728.0079f, 258.6689f, 3000, 1, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 128.558f, -727.9175f, 257.1522f, 124.195f, -728.0079f, 258.6689f, 1f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 124.195f, -728.0079f, 258.6689f, 7000, 1, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 128.6558f, -728.938f, 257.1522f, 124.195f, -728.0079f, 258.6689f, 1f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 124.195f, -728.0079f, 258.6689f, 8000, 1, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 128.558f, -727.9175f, 257.1522f, 124.195f, -728.0079f, 258.6689f, 1f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_596, 1);
					func_466(Local_630[40 /*20*/], 1);
					Local_630[40 /*20*/].f_4++;
					break;
			}
			if (Local_630[40 /*20*/].f_4 >= 0 && Local_630[40 /*20*/].f_4 <= 7)
			{
				if (PED::CAN_PED_SEE_HATED_PED(Local_630[40 /*20*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED(Local_630[40 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_630[40 /*20*/].f_4 = 7;
				}
				else if (Local_630[40 /*20*/].f_4 > 5)
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_630[40 /*20*/], func_447()))
					{
						TASK::TASK_COMBAT_PED(Local_630[40 /*20*/], func_447(), 0, 16);
						Local_630[40 /*20*/].f_4 = 7;
					}
					else if (PED::CAN_PED_SEE_HATED_PED(Local_630[40 /*20*/], Local_630[3 /*20*/]))
					{
						TASK::TASK_COMBAT_PED(Local_630[40 /*20*/], Local_630[3 /*20*/], 0, 16);
						Local_630[40 /*20*/].f_4 = 7;
					}
				}
				if (Local_630[40 /*20*/].f_4 >= 4)
				{
					if ((((GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_4236) > 3500) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_630[40 /*20*/])) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_COMBAT(Local_630[3 /*20*/], Local_630[40 /*20*/]))
					{
						func_449("AH_CLEAR", 0, &cLocal_4237, 1, 1, 1, 1);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
						}
					}
				}
			}
			if (PED::IS_PED_INJURED(Local_630[39 /*20*/]) && PED::IS_PED_INJURED(Local_630[40 /*20*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[3 /*20*/], 12, 0);
				PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 0, 0.05f);
				PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 3, 1.25f);
				func_476(15);
			}
			break;
	}
}

void func_905(var uParam0)//Position - 0x8F87C
{
	uParam0->f_3 = 0;
	if ((*uParam0)[0] != 0)
	{
		TASK::REMOVE_COVER_POINT((*uParam0)[0]);
	}
	(*uParam0)[0] = 0;
	if ((*uParam0)[1] != 0)
	{
		TASK::REMOVE_COVER_POINT((*uParam0)[1]);
	}
	(*uParam0)[1] = 0;
}

void func_906()//Position - 0x8F8B9
{
	struct<3> Var0;
	
	if (iLocal_6072 >= 3)
	{
		Local_4253[14 /*5*/].f_1 = 6;
	}
	switch (Local_4253[14 /*5*/].f_1)
	{
		case 1:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_341))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(&cLocal_341, 1, 1f, 0.5f);
				func_880(14, 0);
			}
			break;
		
		case 2:
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_173) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stickybomb")))
			{
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_173, &cLocal_179, Local_185, Local_188, 0f, 2) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_106(), 1), Var0, 1) <= 0.5f)
				{
					GlobalFunc_6685(1);
					GlobalFunc_7632(1);
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(&cLocal_341, 0, 1f, 0.5f);
					WEAPON::GIVE_WEAPON_TO_PED(func_106(), joaat("weapon_stickybomb"), 1, 1, 1);
					WEAPON::SET_PED_AMMO(func_106(), joaat("weapon_stickybomb"), 3);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_106(), 1);
					uLocal_3916[1] = PED::CREATE_SYNCHRONIZED_SCENE(Local_185, Local_188, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_106(), uLocal_3916[1], &cLocal_173, &cLocal_179, 1.5f, -1.5f, 0, 0, 1.5f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[1], 0);
					func_880(14, 0);
				}
			}
			break;
		
		case 3:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[1]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[1]) >= 0.596f)
				{
					if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_TRIES", 8, 0, 0, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_LOCKED_DOOR");
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 1);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_106(), 0);
						func_880(14, 0);
					}
				}
				else
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
			}
			break;
		
		case 4:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (!GlobalFunc_709(func_106(), -2017877118, 1))
			{
				GlobalFunc_7632(0);
				func_880(14, 10000);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(func_106(), MISC::GET_HASH_KEY("Interrupt")) && ((((PAD::IS_CONTROL_PRESSED(0, 30) || PAD::IS_CONTROL_PRESSED(0, 31)) || PAD::IS_CONTROL_PRESSED(0, 25)) || PAD::IS_CONTROL_PRESSED(0, 24)) || PAD::IS_CONTROL_PRESSED(0, 257)))
			{
				TASK::CLEAR_PED_TASKS(func_106());
			}
			break;
		
		case 5:
			if (GlobalFunc_5170() && iLocal_6072 <= 3)
			{
				GlobalFunc_1("A3B_ACCHLP");
				func_880(14, 0);
			}
			break;
		
		case 6:
			if (iLocal_6072 >= 3)
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && GlobalFunc_74("A3B_ACCHLP"))
				{
					HUD::CLEAR_HELP(1);
				}
				GlobalFunc_5175(&Local_4444, &cLocal_173);
				GlobalFunc_5186(&Local_4444, &cLocal_341);
				func_891(&Local_4444, joaat("weapon_stickybomb"));
				func_476(14);
			}
			break;
	}
}

void func_907()//Position - 0x8FB59
{
	switch (Local_4253[13 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_364);
			GlobalFunc_718(&Local_4444, WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_GRENADELAUNCHER_SMOKE")));
			GlobalFunc_736(&Local_4444, joaat("weapon_grenadelauncher_smoke"), 31, 0);
			GlobalFunc_719(&Local_4444, "MISSHeistFBI3Bsmokegrenade");
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_364) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_grenadelauncher_smoke"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSHeistFBI3Bsmokegrenade"))
			{
				func_667(&(Local_630[34 /*20*/]), iLocal_364, Local_6625[7 /*5*/], Local_6625[7 /*5*/].f_3, "GAS_1", iLocal_625, joaat("weapon_grenadelauncher_smoke"), 0, 100, 130, 0, 1, 1);
				func_671(&(Local_630[34 /*20*/]), 0);
				Local_4253[13 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[17]))
			{
				Local_4253[13 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3916[17]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[17]) == 1f)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3864[11 /*2*/], -1000f, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3864[11 /*2*/], 1);
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_3864[11 /*2*/], 1), 19, 1f, 1, 0, 1065353216);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[2]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[2], 0);
				}
				bLocal_7107 = true;
				Local_4253[13 /*5*/].f_1++;
			}
			break;
	}
	if (Local_4253[13 /*5*/].f_1 > 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[34 /*20*/]) && !PED::IS_PED_INJURED(Local_630[34 /*20*/]))
		{
			if (Local_630[34 /*20*/].f_4 < 2)
			{
				if (!GlobalFunc_709(Local_630[34 /*20*/], 242628503, 1))
				{
					func_468(1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 145.0271f, -751.9438f, 261.8503f, 2f, 20000, 0f, 512, 72.9996f);
					TASK::TASK_AIM_GUN_AT_COORD(0, 138.8614f, -749.8088f, 262.3764f, 1000, 0, 0);
					TASK::TASK_AIM_GUN_AT_COORD(0, 138.8614f, -749.8088f, 262.3764f, -1, 1, 0);
					func_466(Local_630[34 /*20*/], 1);
				}
			}
			switch (Local_630[34 /*20*/].f_4)
			{
				case 0:
					if (GlobalFunc_709(Local_630[34 /*20*/], 242628503, 1))
					{
						if (TASK::GET_SEQUENCE_PROGRESS(Local_630[34 /*20*/]) == 1)
						{
							Local_630[34 /*20*/].f_4++;
						}
					}
					break;
				
				case 1:
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3864[7 /*2*/]))
					{
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(141.68f, -751.91f, 263.08f, 0.5f, joaat("v_ilev_fib_atrgl2"), 0))
						{
							Local_3864[7 /*2*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(141.68f, -751.91f, 263.08f, 0.5f, joaat("v_ilev_fib_atrgl2"), 1, 0, 1);
						}
					}
					if (GlobalFunc_709(Local_630[34 /*20*/], 242628503, 1))
					{
						if (TASK::GET_SEQUENCE_PROGRESS(Local_630[34 /*20*/]) == 2)
						{
							PHYSICS::BREAK_ENTITY_GLASS(Local_3864[7 /*2*/], 141.68f, -751.91f, 263.08f, 0.5f, Vector(-1f, 0f, 0f) * Vector(1f, 1f, 1f), 700f, 3, 0);
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3864[7 /*2*/]));
							Local_3864[11 /*2*/] = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_GRENADELAUNCHER_SMOKE")), PED::GET_PED_BONE_COORDS(Local_630[34 /*20*/], 60309, 0f, 0f, 0f), 1, 1, 0);
							iLocal_3935[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("proj_grenade_trail", Local_3864[11 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_GRENADELAUNCHER_SMOKE")));
							uLocal_3916[17] = PED::CREATE_SYNCHRONIZED_SCENE(138.201f, -746.476f, 258.81f, 0f, 0f, -124.56f, 2);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[11 /*2*/], uLocal_3916[17], "SmokeGrenade", "MISSHeistFBI3Bsmokegrenade", 1000f, -8f, 5120, 1148846080);
							Local_630[34 /*20*/].f_5 = MISC::GET_GAME_TIMER() + 1000;
							Local_630[34 /*20*/].f_4++;
						}
					}
					break;
				
				case 2:
					if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[34 /*20*/], 1), 157.2785f, -758.9954f, 261.8044f, 2f))
					{
						PED::DELETE_PED(&(Local_630[34 /*20*/]));
						Local_630[34 /*20*/].f_4++;
					}
					else if (MISC::GET_GAME_TIMER() > Local_630[34 /*20*/].f_5)
					{
						if (!GlobalFunc_709(Local_630[34 /*20*/], 713668775, 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[34 /*20*/], 157.2785f, -758.9954f, 261.8044f, 2f, 20000, 0.25f, 0, 40000f);
						}
					}
					break;
			}
		}
		else
		{
			bLocal_7107 = true;
			func_476(13);
		}
	}
	if (bLocal_7107)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SHOOTOUT_SMOKE_BOMBS"))
		{
			AUDIO::START_AUDIO_SCENE("AH_3B_SHOOTOUT_SMOKE_BOMBS");
		}
	}
}

void func_908()//Position - 0x9003F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	
	iVar0 = Local_4253[9 /*5*/].f_1;
	switch (iVar0)
	{
		case 1:
			iVar1 = -1203619058;
			Var3 = { 114.8498f, -742.4081f, 0f };
			fVar6 = 4f;
			iVar7 = 4;
			iVar8 = -1;
			break;
		
		case 2:
			iVar1 = -1434673277;
			Var3 = { 122.2397f, -758.0907f, 0f };
			fVar6 = 4f;
			iVar7 = 2;
			iVar8 = -1;
			break;
		
		case 3:
			iVar1 = 927274285;
			Var3 = { 117.9736f, -735.8018f, 0f };
			fVar6 = 6.25f;
			iVar7 = 0;
			iVar8 = 1;
			break;
		
		case 4:
			iVar1 = -972597608;
			Var3 = { 139.59f, -735.38f, 0f };
			fVar6 = 4f;
			iVar7 = 3;
			iVar8 = -1;
			break;
	}
	iVar9 = 0;
	while (iVar9 < Local_630)
	{
		if ((Local_630[iVar9 /*20*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_630[iVar9 /*20*/])) && !PED::IS_PED_INJURED(Local_630[iVar9 /*20*/]))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_630[iVar9 /*20*/]) == iVar1)
			{
				Local_630[iVar9 /*20*/].f_15 = iVar0;
				Local_630[iVar9 /*20*/].f_16 = iVar0;
				bVar2 = true;
			}
			else if (Local_630[iVar9 /*20*/].f_15 == iVar0 || Local_630[iVar9 /*20*/].f_16 == iVar0)
			{
				Local_630[iVar9 /*20*/].f_15 = -1;
				if (Local_630[iVar9 /*20*/].f_16 == iVar0)
				{
					Var10 = { ENTITY::GET_ENTITY_COORDS(Local_630[iVar9 /*20*/], 1) };
					Var10.f_2 = 0f;
					if (SYSTEM::VDIST2(Var10, Var3) < fVar6)
					{
						bVar2 = true;
					}
					else
					{
						Local_630[iVar9 /*20*/].f_16 = -1;
					}
				}
			}
		}
		iVar9++;
	}
	if (bVar2)
	{
		if (iVar7 != -1)
		{
			func_6(iVar7, 0, 100f, 0);
		}
		if (iVar8 != -1)
		{
			func_6(iVar8, 0, 100f, 0);
		}
	}
	else
	{
		if (iVar7 != -1)
		{
			func_6(iVar7, 1, 0f, 500);
		}
		if (iVar8 != -1)
		{
			func_6(iVar8, 1, 0f, 500);
		}
	}
	Local_4253[9 /*5*/].f_1++;
	if (Local_4253[9 /*5*/].f_1 > 4)
	{
		Local_4253[9 /*5*/].f_1 = 1;
	}
}

void func_909()//Position - 0x90255
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	bool bVar12;
	
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	iVar4 = 0;
	while (iVar4 <= 23)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_630[(10 + iVar4) /*20*/]) && !PED::IS_PED_INJURED(Local_630[(10 + iVar4) /*20*/])) && Local_6666[iVar4 /*16*/].f_1 != -1) && Local_6494[Local_6666[iVar4 /*16*/].f_1 /*5*/].f_4)
		{
			Var8 = { Local_6494[Local_6666[iVar4 /*16*/].f_1 /*5*/] };
			switch (Local_6666[iVar4 /*16*/].f_1)
			{
				case 18:
					Var5 = { Local_6494[19 /*5*/] };
					bVar0 = false;
					break;
				
				case 19:
					Var5 = { Local_6494[18 /*5*/] };
					bVar0 = false;
					break;
				
				case 21:
					Var5 = { Local_6494[20 /*5*/] };
					bVar1 = false;
					break;
				
				case 20:
					Var5 = { Local_6494[21 /*5*/] };
					bVar1 = false;
					break;
				
				case 24:
					Var5 = { Local_6494[25 /*5*/] };
					bVar3 = false;
					break;
				
				case 25:
					Var5 = { Local_6494[24 /*5*/] };
					bVar3 = false;
					break;
				
				case 22:
					Var5 = { Local_6494[23 /*5*/] };
					bVar2 = false;
					break;
				
				case 23:
					Var5 = { Local_6494[22 /*5*/] };
					bVar2 = false;
					break;
				
				default:
					Var5 = { 0f, 0f, 0f };
					break;
			}
			if (!GlobalFunc_105(Var5) && !GlobalFunc_105(Var8))
			{
				switch (Local_630[(10 + iVar4) /*20*/].f_4)
				{
					case 0:
						Local_630[(10 + iVar4) /*20*/].f_4 = 1;
						break;
					
					case 1:
						if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[(10 + iVar4) /*20*/], 1), Var8, 1.5f))
						{
							Local_630[(10 + iVar4) /*20*/].f_4++;
						}
						break;
					
					case 2:
						if (Local_630[(10 + iVar4) /*20*/].f_5 == 0)
						{
							func_602(&(Local_630[(10 + iVar4) /*20*/]), Var5, 0.75f, 1, 1, 1, 1, 1f, 1f, 0, 1, 0, 0);
							Local_630[(10 + iVar4) /*20*/].f_5 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000);
							Local_630[(10 + iVar4) /*20*/].f_4 = -1;
						}
						else
						{
							Local_630[(10 + iVar4) /*20*/].f_5 = GlobalFunc_254((Local_630[(10 + iVar4) /*20*/].f_5 - SYSTEM::ROUND((SYSTEM::TIMESTEP() * 1000f))), 0, 999999999);
						}
						break;
					
					case -1:
						if (GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(Local_630[(10 + iVar4) /*20*/], 1), Var5, 1.5f))
						{
							Local_630[(10 + iVar4) /*20*/].f_4 = (Local_630[(10 + iVar4) /*20*/].f_4 - 1);
						}
						break;
					
					case -2:
						if (Local_630[(10 + iVar4) /*20*/].f_5 == 0)
						{
							func_602(&(Local_630[(10 + iVar4) /*20*/]), Var8, 0.75f, 1, 1, 1, 1, 1f, 1f, 0, 1, 0, 0);
							Local_630[(10 + iVar4) /*20*/].f_5 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000);
							Local_630[(10 + iVar4) /*20*/].f_4 = 1;
						}
						else
						{
							Local_630[(10 + iVar4) /*20*/].f_5 = GlobalFunc_254((Local_630[(10 + iVar4) /*20*/].f_5 - SYSTEM::ROUND((SYSTEM::TIMESTEP() * 1000f))), 0, 999999999);
						}
						break;
					}
				}
		}
		iVar4++;
	}
	if (iLocal_7074 > 1 && iLocal_7074 < 12)
	{
		iVar11 = 0;
		while (iVar11 < iLocal_7051)
		{
			if (iLocal_7051[iVar11] != -1)
			{
				switch (Local_6666[iLocal_7051[iVar11] /*16*/].f_1)
				{
					case 18:
					case 19:
						if (bVar0)
						{
							bVar12 = true;
						}
						break;
					
					case 21:
					case 20:
						if (bVar1)
						{
							bVar12 = true;
						}
						break;
					
					case 24:
					case 25:
						if (bVar3)
						{
							bVar12 = true;
						}
						break;
					
					case 22:
					case 23:
						if (bVar2)
						{
							bVar12 = true;
						}
						break;
				}
				if (bVar12)
				{
					func_910(iLocal_7051[iVar11]);
					iLocal_7051[iVar11] = -1;
				}
			}
			iVar11++;
		}
	}
}

void func_910(int iParam0)//Position - 0x9065A
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	
	if (Local_6666[iParam0 /*16*/].f_1 != -1)
	{
		Var0 = { Local_6494[Local_6666[iParam0 /*16*/].f_1 /*5*/] };
		fVar3 = Local_6494[Local_6666[iParam0 /*16*/].f_1 /*5*/].f_3;
		iVar4 = 1;
	}
	else
	{
		Var0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		iVar4 = 2;
	}
	StringCopy(&Var5, "WAVEPED_", 24);
	StringIntConCat(&Var5, iParam0, 24);
	func_667(&(Local_630[(10 + iParam0) /*20*/]), Local_6666[iParam0 /*16*/].f_2, Local_6625[Local_6666[iParam0 /*16*/] /*5*/], Local_6625[Local_6666[iParam0 /*16*/] /*5*/].f_3, &Var5, iLocal_625, Local_6666[iParam0 /*16*/].f_3, Local_6666[iParam0 /*16*/].f_4, Local_6666[iParam0 /*16*/].f_5, -1, 0, 1, 1);
	func_602(&(Local_630[(10 + iParam0) /*20*/]), Var0, fVar3, iVar4, 0, 1, 1, 1f, 0f, Local_6666[iParam0 /*16*/].f_7, Local_6625[Local_6666[iParam0 /*16*/] /*5*/].f_4, Local_6666[iParam0 /*16*/].f_8, Local_6666[iParam0 /*16*/].f_9);
	func_671(&(Local_630[(10 + iParam0) /*20*/]), 0);
	if (Local_6666[iParam0 /*16*/].f_2 == joaat("s_m_y_swat_01"))
	{
		ENTITY::SET_ENTITY_PROOFS(Local_630[(10 + iParam0) /*20*/], 0, 0, 0, 0, 0, 0, 0, 1);
	}
	PED::SET_PED_USING_ACTION_MODE(Local_630[(10 + iParam0) /*20*/], 1, -1, "DEFAULT_ACTION");
	ENTITY::SET_ENTITY_HEALTH(Local_630[(10 + iParam0) /*20*/], Local_6666[iParam0 /*16*/].f_6);
	PED::SET_PED_ARMOUR(Local_630[(10 + iParam0) /*20*/], 0);
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[(10 + iParam0) /*20*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0);
	Local_6666[iParam0 /*16*/].f_14 = 1;
	iLocal_7072 = MISC::GET_GAME_TIMER();
	iLocal_7073 = 0;
	iLocal_7074++;
}

void func_911()//Position - 0x907FD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		if (Local_6666[iVar0 /*16*/].f_14 && !Local_6666[iVar0 /*16*/].f_15)
		{
			if ((Local_630[(10 + iVar0) /*20*/] == 0 || !ENTITY::DOES_ENTITY_EXIST(Local_630[(10 + iVar0) /*20*/])) || PED::IS_PED_INJURED(Local_630[(10 + iVar0) /*20*/]))
			{
				Local_6666[iVar0 /*16*/].f_15 = 1;
				iLocal_7073++;
				iLocal_7074 = (iLocal_7074 - 1);
			}
			else if (!Local_630[(10 + iVar0) /*20*/].f_6)
			{
				if (Local_6625[Local_6666[iVar0 /*16*/] /*5*/].f_4)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[(10 + iVar0) /*20*/], 123.8983f, -744.7935f, 261.7321f, 146.5821f, -753.1028f, 265.1071f, 18.6875f, 0, 1, 0))
					{
						func_671(&(Local_630[(10 + iVar0) /*20*/]), 1);
					}
				}
				else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_630[(10 + iVar0) /*20*/]) == iLocal_6157)
				{
					if (Local_630[(10 + iVar0) /*20*/].f_15 == -1)
					{
						func_671(&(Local_630[(10 + iVar0) /*20*/]), 1);
					}
				}
			}
		}
		iVar0++;
	}
	iVar2 = (Local_4253[10 /*5*/].f_1 - 1);
	if (iVar2 < 24)
	{
		if ((((Local_6666[iVar2 /*16*/] != -1 && (!Local_6666[iVar2 /*16*/].f_13 || bLocal_7107)) && (MISC::GET_GAME_TIMER() - iLocal_7072) > Local_6666[iVar2 /*16*/].f_11) && iLocal_7074 < 12) && (fLocal_6464 >= Local_6666[iVar2 /*16*/].f_12 || iLocal_7073 >= Local_6666[iVar2 /*16*/].f_10))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_6666[iVar2 /*16*/].f_2))
			{
				if (Local_6625[Local_6666[iVar2 /*16*/] /*5*/].f_4)
				{
					while (iVar3 < iLocal_7051 && iLocal_7051[iVar3] != -1)
					{
						iVar3++;
					}
					if (iVar3 != -1 && iVar3 < iLocal_7051)
					{
						iLocal_7051[iVar3] = iVar2;
					}
				}
				else
				{
					func_910(iVar2);
				}
				Local_4253[10 /*5*/].f_1++;
			}
		}
	}
	else if (iLocal_7074 == 0 && iLocal_7075 == -1)
	{
		iLocal_7075 = MISC::GET_GAME_TIMER() + 3000;
	}
}

void func_912()//Position - 0x90A47
{
	switch (Local_4253[12 /*5*/].f_1)
	{
		case 1:
			GlobalFunc_718(&Local_4444, iLocal_361);
			GlobalFunc_718(&Local_4444, iLocal_362);
			GlobalFunc_718(&Local_4444, iLocal_363);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_361) && STREAMING::HAS_MODEL_LOADED(iLocal_362)) && STREAMING::HAS_MODEL_LOADED(iLocal_363))
			{
				func_667(&(Local_630[35 /*20*/]), iLocal_361, 136.7558f, -754.1835f, 257.1695f, 249.1905f, "wave_3_1", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				func_667(&(Local_630[36 /*20*/]), iLocal_362, 129.3333f, -750.0584f, 257.1696f, 250.7705f, "wave_3_2", iLocal_625, joaat("weapon_smg"), 0, 5, -1, 0, 1, 1);
				func_667(&(Local_630[37 /*20*/]), iLocal_363, 139.3069f, -747.4471f, 257.1696f, 249.2577f, "wave_3_3", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				func_667(&(Local_630[38 /*20*/]), iLocal_361, 115.1057f, -737.9293f, 257.1522f, 240.4648f, "wave_3_4", iLocal_625, joaat("weapon_pistol"), 0, 5, -1, 0, 1, 1);
				func_601(&(Local_630[35 /*20*/].f_1), 136.7558f, -754.1835f, 257.1695f, 249.1905f, 0, 0, 1);
				func_601(&(Local_630[37 /*20*/].f_1), 139.3069f, -747.4471f, 257.1696f, 249.2577f, 0, 0, 1);
				func_468(1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 136.7558f, -754.1835f, 257.1695f, 500, 0, 0f, 1, 0, Local_630[35 /*20*/].f_1, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 135.7717f, -749.6595f, 257.1522f, 32f, 0);
				func_466(Local_630[35 /*20*/], 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[35 /*20*/], 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_630[36 /*20*/], 135.7717f, -749.6595f, 257.1522f, 32f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[36 /*20*/], 0, 0);
				func_468(1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 139.3069f, -747.4471f, 257.1696f, 750, 0, 0f, 1, 0, Local_630[37 /*20*/].f_1, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 135.7717f, -749.6595f, 257.1522f, 32f, 0);
				func_466(Local_630[37 /*20*/], 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[37 /*20*/], 0, 0);
				func_468(1);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 123.2613f, -744.4315f, 257.1521f, func_106(), 2f, 1, 0.5f, 0.5f, 1, 0, 1, -957453492, 20000);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 135.7717f, -749.6595f, 257.1522f, 32f, 0);
				func_466(Local_630[38 /*20*/], 1);
				PED::FORCE_PED_MOTION_STATE(Local_630[38 /*20*/], -530524, 0, 0, 0);
				iLocal_7074 += 4;
				func_880(12, 0);
			}
			break;
		
		case 2:
			if (Local_630[35 /*20*/].f_4 != -1 && (!ENTITY::DOES_ENTITY_EXIST(Local_630[35 /*20*/]) || PED::IS_PED_INJURED(Local_630[35 /*20*/])))
			{
				Local_630[35 /*20*/].f_4 = -1;
				iLocal_7074 = (iLocal_7074 - 1);
			}
			if (Local_630[36 /*20*/].f_4 != -1 && (!ENTITY::DOES_ENTITY_EXIST(Local_630[36 /*20*/]) || PED::IS_PED_INJURED(Local_630[36 /*20*/])))
			{
				Local_630[36 /*20*/].f_4 = -1;
				iLocal_7074 = (iLocal_7074 - 1);
			}
			if (Local_630[37 /*20*/].f_4 != -1 && (!ENTITY::DOES_ENTITY_EXIST(Local_630[37 /*20*/]) || PED::IS_PED_INJURED(Local_630[37 /*20*/])))
			{
				Local_630[37 /*20*/].f_4 = -1;
				iLocal_7074 = (iLocal_7074 - 1);
			}
			if (Local_630[38 /*20*/].f_4 != -1 && (!ENTITY::DOES_ENTITY_EXIST(Local_630[38 /*20*/]) || PED::IS_PED_INJURED(Local_630[38 /*20*/])))
			{
				Local_630[38 /*20*/].f_4 = -1;
				iLocal_7074 = (iLocal_7074 - 1);
			}
			if (((Local_630[35 /*20*/].f_4 == -1 && Local_630[36 /*20*/].f_4 == -1) && Local_630[37 /*20*/].f_4 == -1) && Local_630[38 /*20*/].f_4 == -1)
			{
				func_476(12);
			}
			break;
	}
}

void func_913()//Position - 0x90E7E
{
	if (!Local_6122.f_20)
	{
		if (GlobalFunc_9810(&iLocal_6078, 0, 1))
		{
			if (!GlobalFunc_751(&iLocal_6078, 3))
			{
				Local_6122.f_12 = iLocal_6078[iLocal_6078.f_7];
				Local_6122.f_20 = 1;
			}
		}
	}
	if (!Local_6122.f_20)
	{
		iLocal_6077 = 0;
	}
	else if (GlobalFunc_9809(&Local_6122, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
	{
		if (Local_6122.f_18)
		{
			if (!Local_6122.f_19)
			{
				if (func_400(&iLocal_6078, 1, 1, 0))
				{
					Local_6122.f_19 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(func_79()))
					{
						if (iLocal_6078[1] == 0)
						{
							Local_630[1 /*20*/] = PLAYER::PLAYER_PED_ID();
							GlobalFunc_703(&(Local_630[1 /*20*/].f_3));
						}
						else
						{
							Local_630[1 /*20*/] = iLocal_6078[1];
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[1 /*20*/], 36, 0);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_630[1 /*20*/], 0);
						}
						PED::SET_PED_CAN_BE_TARGETTED(func_79(), 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_79(), 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_106()))
					{
						if (iLocal_6078[0] == 0)
						{
							Local_630[0 /*20*/] = PLAYER::PLAYER_PED_ID();
							GlobalFunc_703(&(Local_630[0 /*20*/].f_3));
						}
						else
						{
							Local_630[0 /*20*/] = iLocal_6078[0];
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_630[0 /*20*/], 36, 0);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_630[0 /*20*/], 0);
						}
						PED::SET_PED_CAN_BE_TARGETTED(func_106(), 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_106(), 1);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 36, 1);
				}
			}
		}
		iLocal_6077 = 2;
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
		}
		if (Local_6122.f_12 == func_106())
		{
			iLocal_6482 = 3;
		}
		Local_6122.f_20 = 0;
		GlobalFunc_565(561, 1, 0);
		iLocal_6077 = 1;
	}
}































void func_944()//Position - 0x92E73
{
	switch (Local_4253[2 /*5*/].f_1)
	{
		case 1:
			if (iLocal_6071 >= 4 && iLocal_6071 <= 8)
			{
				if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() <= 4)
				{
					Local_4253[2 /*5*/].f_1++;
				}
				else if (iLocal_6071 == 7)
				{
					CLOCK::ADVANCE_CLOCK_TIME_TO(0, 0, 0);
					Local_4253[2 /*5*/].f_1++;
				}
			}
			break;
		
		case 2:
			if (iLocal_6071 >= 9)
			{
				CLOCK::PAUSE_CLOCK(0);
				func_476(2);
			}
			else
			{
				CLOCK::PAUSE_CLOCK(1);
			}
			break;
	}
}

void func_945()//Position - 0x92F10
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	Var0 = { 135.8793f, -749.3595f, 261.8527f };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_106(), 1), Var0, 1);
	fVar4 = 50f;
	iVar5 = 75;
	if (fVar3 <= 500f)
	{
		fVar4 = GlobalFunc_253((fVar4 * SYSTEM::POW((fVar3 / 500f), 2f)), 1.5f, 50f);
	}
	Var6 = { ENTITY::GET_ENTITY_COORDS(func_106(), 1) };
	fVar9 = MISC::ABSF((Var6.f_2 - Var0.f_2));
	if (fVar9 <= 25f)
	{
		iVar5 = GlobalFunc_254(SYSTEM::ROUND((IntToFloat(iVar5) * SYSTEM::POW((fVar9 / 25f), 2f))), 0, 75);
	}
	HUD::GET_HUD_COLOUR(12, &uVar10, &uVar11, &uVar12, &uVar13);
	if (iVar5 != 0)
	{
		GRAPHICS::DRAW_MARKER(1, Var0, 0f, 0f, 0f, 0f, 0f, 0f, 25f, 25f, fVar4, uVar10, uVar11, uVar12, iVar5, 0, 0, 2, 0, 0, 0, 0);
	}
}

void func_946()//Position - 0x92FF8
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	switch (Local_4253[6 /*5*/].f_1)
	{
		case 1:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_630[1 /*20*/]);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_630[1 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2091[1 /*88*/], 10f, -10f, -20f), 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_630[1 /*20*/], 87.1315f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_630[1 /*20*/], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_630[1 /*20*/], 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_630[1 /*20*/], 5000);
			PED::SET_PED_LOD_MULTIPLIER(Local_630[1 /*20*/], 5f);
			TASK::TASK_SKY_DIVE(Local_630[1 /*20*/], 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_630[3 /*20*/]);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_630[3 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2091[1 /*88*/], 30f, 15f, -20f), 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_630[3 /*20*/], 87.1315f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_630[3 /*20*/], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_630[3 /*20*/], 5000);
			PED::SET_PED_LOD_MULTIPLIER(Local_630[3 /*20*/], 5f);
			TASK::TASK_SKY_DIVE(Local_630[3 /*20*/], 0);
			iLocal_6173 = 0;
			iLocal_6174 = 0;
			Local_4253[6 /*5*/].f_2 = MISC::GET_GAME_TIMER();
			Local_4253[6 /*5*/].f_1++;
			break;
		
		case 2:
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_106(), 1), Local_398, 0);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_79(), 1), Local_398, 0);
			fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1), Local_398, 0);
			Var0 = { ENTITY::GET_ENTITY_COORDS(func_79(), 1) };
			if (Var0.f_2 < 230f)
			{
				func_997(15);
			}
			if (!iLocal_6166)
			{
				if ((MISC::GET_GAME_TIMER() - Local_4253[6 /*5*/].f_2) >= 6000)
				{
					if (PED::GET_PED_PARACHUTE_STATE(func_79()) == 0)
					{
						TASK::TASK_PARACHUTE_TO_TARGET(func_79(), Local_401);
						iLocal_6166 = 1;
					}
				}
			}
			else if (!iLocal_6169)
			{
				if (PED::GET_PED_PARACHUTE_STATE(func_79()) == 2)
				{
					fVar3 = 0f;
					if (fVar7 > 200f)
					{
						fVar4 = (fVar6 - fVar7);
						fVar5 = (fVar4 / 50f);
						if (fVar4 <= 50f)
						{
							fVar3 = GlobalFunc_253(((1f - fVar5) * 5f), 0f, 5f);
						}
					}
					TASK::SET_PARACHUTE_TASK_THRUST(func_79(), fVar3);
				}
				else if (PED::GET_PED_PARACHUTE_STATE(func_79()) == -1)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(func_79()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_79(), 102.7317f, -738.6743f, 247.3427f, 168.8903f, -764.3366f, 268.4663f, 56.4375f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(func_79(), 0);
							PED::SET_PED_STEALTH_MOVEMENT(func_79(), 1, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[1 /*20*/], 138.7255f, -741.7317f, 261.8488f, 2f, -1, 0.25f, 0, 196.0327f);
							TASK::TASK_LOOK_AT_COORD(Local_630[1 /*20*/], 139.0352f, -744.258f, 262.0591f, -1, 0, 2);
							iLocal_6169 = 1;
						}
						else
						{
							func_997(15);
						}
					}
				}
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_630[3 /*20*/], 1) };
			if (Var0.f_2 < 230f)
			{
				func_997(16);
			}
			if (!iLocal_6167)
			{
				if ((MISC::GET_GAME_TIMER() - Local_4253[6 /*5*/].f_2) >= 7000)
				{
					if (PED::GET_PED_PARACHUTE_STATE(Local_630[3 /*20*/]) == 0)
					{
						TASK::TASK_PARACHUTE_TO_TARGET(Local_630[3 /*20*/], Local_404);
						iLocal_6167 = 1;
					}
				}
			}
			else if (!iLocal_6170)
			{
				if (PED::GET_PED_PARACHUTE_STATE(Local_630[3 /*20*/]) == 2)
				{
					fVar3 = 0f;
					if (fVar8 > 200f)
					{
						fVar4 = (fVar6 - fVar8);
						fVar5 = (fVar4 / 50f);
						if (fVar4 <= 50f)
						{
							fVar3 = GlobalFunc_253(((1f - fVar5) * 5f), 0f, 5f);
						}
					}
					TASK::SET_PARACHUTE_TASK_THRUST(Local_630[3 /*20*/], fVar3);
				}
				else if (PED::GET_PED_PARACHUTE_STATE(Local_630[3 /*20*/]) == -1)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(Local_630[3 /*20*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_630[3 /*20*/], 102.7317f, -738.6743f, 247.3427f, 168.8903f, -764.3366f, 268.4663f, 56.4375f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_630[3 /*20*/], 0);
							PED::SET_PED_STEALTH_MOVEMENT(Local_630[3 /*20*/], 1, "DEFAULT_ACTION");
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_630[3 /*20*/], 143.6292f, -743.4308f, 261.8488f, 2f, -1, 0.25f, 0, 118.006f);
							TASK::TASK_LOOK_AT_COORD(Local_630[3 /*20*/], 135.5912f, -747.2527f, 259.9271f, -1, 0, 2);
							iLocal_6170 = 1;
						}
						else
						{
							func_997(16);
						}
					}
				}
			}
			switch (iLocal_6173)
			{
				case 0:
					if (fVar7 < 100f && GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, "AH_LAND_FRAN", 8, 0, 0, 0))
						{
							iLocal_6173++;
						}
					}
					break;
			}
			switch (iLocal_6174)
			{
				case 0:
					if (fVar8 < 100f && GlobalFunc_5170())
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_LAND", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_6174++;
						}
					}
					break;
				
				case 1:
					if (iLocal_6170 && GlobalFunc_5170())
					{
						MemCopy(&cLocal_4237, {func_459(iLocal_4196, "AH_LANDD", 0)}, 6);
						if (GlobalFunc_10618(&uLocal_431, &cLocal_147, &cLocal_4237, 8, 0, 0, 0))
						{
							StringCopy(&cLocal_4237, "", 24);
							iLocal_6174++;
						}
					}
					break;
			}
			if (iLocal_6169 && iLocal_6170)
			{
				func_476(6);
			}
			break;
	}
}

void func_947()//Position - 0x9354B
{
	struct<3> Var0;
	struct<3> Var3;
	
	switch (Local_4253[5 /*5*/].f_1)
	{
		case 1:
			if (PED::GET_PED_PARACHUTE_STATE(func_106()) == 1 || PED::GET_PED_PARACHUTE_STATE(func_106()) == 2)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SKYDIVE_FREEFALL"))
				{
					AUDIO::STOP_AUDIO_SCENE("AH_3B_SKYDIVE_FREEFALL");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_SKYDIVE_PARACHUTE"))
				{
					AUDIO::START_AUDIO_SCENE("AH_3B_SKYDIVE_PARACHUTE");
				}
				Local_4253[5 /*5*/].f_1++;
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_630[0 /*20*/], 1) };
				if (Var0.f_2 < 230f)
				{
					func_997(13);
				}
			}
			break;
		
		case 2:
			if (!bLocal_6168)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(func_106(), 1) };
				if (Var0.f_2 < 230f)
				{
					func_997(14);
				}
				if (PED::GET_PED_PARACHUTE_STATE(func_106()) == -1 || PED::GET_PED_PARACHUTE_STATE(func_106()) == 3)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(func_106()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_106(), 102.7317f, -738.6743f, 247.3427f, 168.8903f, -764.3366f, 268.4663f, 56.4375f, 0, 1, 0))
						{
							HUD::CLEAR_HELP(1);
							iLocal_6171 = 0;
							bLocal_6168 = true;
							func_476(7);
						}
						else
						{
							func_997(14);
						}
					}
				}
				else if (PED::GET_PED_PARACHUTE_STATE(func_106()) == 2)
				{
					if (!iLocal_6171)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_398, 1) < 200f)
						{
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								GlobalFunc_1("A3B_PARAHLP3_KM");
							}
							else
							{
								GlobalFunc_1("A3B_PARAHLP3");
							}
							iLocal_6171 = 1;
						}
					}
					else if (MISC::IS_PC_VERSION())
					{
						if (PAD::_0x6CD79468A1E595C6(0))
						{
							iLocal_6171 = 0;
						}
					}
				}
				if (GlobalFunc_74("A3B_PARAHLP3"))
				{
					if (iLocal_6172 == -1)
					{
						if (PAD::IS_CONTROL_PRESSED(2, 207) && PAD::IS_CONTROL_PRESSED(2, 208))
						{
							iLocal_6172 = MISC::GET_GAME_TIMER() + 2000;
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_6172)
					{
						HUD::CLEAR_HELP(0);
					}
				}
			}
			if (bLocal_6168)
			{
				GlobalFunc_571(0, -1);
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if ((PED::GET_PED_PARACHUTE_STATE(func_106()) == 3 && Var3.f_2 > 261.2f) && Var3.f_2 < 266.3f)
				{
					GlobalFunc_553(572);
				}
				func_476(5);
			}
			break;
	}
}


void func_949()//Position - 0x937FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 3))
	{
		iVar0 = 0;
		while (iVar0 < GlobalFunc_760())
		{
			if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_759(iVar0)) && ENTITY::IS_ENTITY_A_PED(GlobalFunc_759(iVar0)))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_759(iVar0));
				if (ENTITY::IS_ENTITY_DEAD(iVar1))
				{
				}
				if ((PED::GET_PED_TYPE(iVar1) == 6 || PED::GET_PED_TYPE(iVar1) == 27) || PED::GET_PED_TYPE(iVar1) == 29)
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(iVar1)) && ENTITY::IS_ENTITY_A_PED(PED::GET_PED_SOURCE_OF_DEATH(iVar1)))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar1));
						if (((iVar2 == func_106() || iVar2 == func_79()) || iVar2 == Local_630[3 /*20*/]) || iVar2 == Local_630[4 /*20*/])
						{
							iLocal_8036++;
						}
					}
				}
			}
			iVar0++;
		}
	}
	switch (Local_4253[35 /*5*/].f_1)
	{
		case 1:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_416, 1) > 300f)
			{
				iLocal_8037 = MISC::GET_GAME_TIMER();
				Local_4253[35 /*5*/].f_1++;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_8037) > 5000 && ((MISC::GET_GAME_TIMER() - iLocal_8037) > 60000 || iLocal_8036 > 10))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_MAX_WANTED_LEVEL(3);
				iLocal_8037 = MISC::GET_GAME_TIMER();
				Local_4253[35 /*5*/].f_1++;
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_8037) > 30000)
			{
				MISC::ENABLE_DISPATCH_SERVICE(12, 0);
				MISC::ENABLE_DISPATCH_SERVICE(2, 0);
				iLocal_8037 = MISC::GET_GAME_TIMER();
				Local_4253[35 /*5*/].f_1++;
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_8037) > 15000)
			{
				MISC::ENABLE_DISPATCH_SERVICE(4, 1);
				iLocal_8037 = MISC::GET_GAME_TIMER();
				func_476(35);
			}
			break;
	}
}



void func_952()//Position - 0x93A2A
{
	int iVar0;
	int iVar1[5];
	char* sVar7[5];
	
	if (iLocal_6071 > 8 && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (Local_4444.f_687[iVar0 /*7*/])
			{
				Local_4444.f_687[iVar0 /*7*/].f_2 = 1;
			}
			Local_4444.f_977 = 1;
			iVar0++;
		}
		func_476(4);
	}
	else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != Local_4253[4 /*5*/].f_1)
	{
		switch (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		{
			case 647342791:
				sVar7[0] = "agency_IT3_01_3b.xml";
				iVar1[0] = iLocal_6157;
				break;
			
			case -46897258:
				sVar7[0] = "agency_IT3_01_3b.xml";
				iVar1[0] = iLocal_6157;
				sVar7[1] = "agency_IT3_02_3b.xml";
				iVar1[1] = iLocal_6157;
				break;
			
			case -657647164:
				sVar7[0] = "agency_IT3_01_3b.xml";
				iVar1[0] = iLocal_6157;
				sVar7[1] = "agency_IT3_02_3b.xml";
				iVar1[1] = iLocal_6157;
				sVar7[2] = "agency_IT3_03_3b.xml";
				iVar1[2] = iLocal_6157;
				break;
			
			case 1313459445:
				sVar7[0] = "agency_IT3_01_3b.xml";
				iVar1[0] = iLocal_6157;
				sVar7[1] = "agency_IT3_02_3b.xml";
				iVar1[1] = iLocal_6157;
				sVar7[2] = "agency_IT3_03_3b.xml";
				iVar1[2] = iLocal_6157;
				break;
			
			case 1074571376:
				sVar7[0] = "agency_IT3_01_3b.xml";
				iVar1[0] = iLocal_6157;
				sVar7[1] = "agency_IT3_02_3b.xml";
				iVar1[1] = iLocal_6157;
				sVar7[2] = "agency_IT3_03_3b.xml";
				iVar1[2] = iLocal_6157;
				sVar7[3] = "agency_IT2_01_3b.xml";
				iVar1[3] = iLocal_6158;
				sVar7[4] = "agency_IT2_02_3b.xml";
				iVar1[4] = iLocal_6158;
				break;
			
			case 1398453774:
				sVar7[0] = "agency_IT3_03_3b.xml";
				iVar1[0] = iLocal_6157;
				sVar7[1] = "agency_IT2_01_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_02_3b.xml";
				iVar1[2] = iLocal_6158;
				sVar7[3] = "agency_IT2_04_3b.xml";
				iVar1[3] = iLocal_6158;
				break;
			
			case 1812387707:
				sVar7[0] = "agency_IT2_01_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_02_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_04_3b.xml";
				iVar1[2] = iLocal_6158;
				break;
			
			case -2043278375:
				sVar7[0] = "agency_IT2_02_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_04_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_05_3b.xml";
				iVar1[2] = iLocal_6158;
				sVar7[3] = "agency_IT2_06_3b.xml";
				iVar1[3] = iLocal_6158;
				break;
			
			case 435393439:
				sVar7[0] = "agency_IT2_04_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_05_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_06_3b.xml";
				iVar1[2] = iLocal_6158;
				sVar7[3] = "agency_IT2_07_3b.xml";
				iVar1[3] = iLocal_6158;
				break;
			
			case 791461393:
				sVar7[0] = "agency_IT2_05_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_06_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_07_3b.xml";
				iVar1[2] = iLocal_6158;
				break;
			
			case -1767592778:
				sVar7[0] = "agency_IT2_05_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_06_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_07_3b.xml";
				iVar1[2] = iLocal_6158;
				sVar7[3] = "agency_IT2_08_3b.xml";
				iVar1[3] = iLocal_6158;
				break;
			
			case 909786638:
				sVar7[0] = "agency_IT2_07_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_08_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_09_3b.xml";
				iVar1[2] = iLocal_6158;
				break;
			
			case -2048401057:
				sVar7[0] = "agency_IT2_07_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_08_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT2_09_3b.xml";
				iVar1[2] = iLocal_6158;
				break;
			
			case -2116788666:
				sVar7[0] = "agency_IT2_08_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT2_09_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT1_02_3b.xml";
				iVar1[2] = iLocal_6158;
				break;
			
			case 197774026:
				sVar7[0] = "agency_IT2_09_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT1_02_3b.xml";
				iVar1[1] = iLocal_6158;
				sVar7[2] = "agency_IT1_03_3b.xml";
				iVar1[2] = iLocal_6158;
				break;
			
			case -2002341573:
				sVar7[0] = "agency_IT1_02_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT1_03_3b.xml";
				iVar1[1] = iLocal_6158;
				break;
			
			case 594096310:
				sVar7[0] = "agency_IT1_02_3b.xml";
				iVar1[0] = iLocal_6158;
				sVar7[1] = "agency_IT1_03_3b.xml";
				iVar1[1] = iLocal_6158;
				break;
			
			default:
				break;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (Local_4444.f_687[iVar0 /*7*/])
			{
				Local_4444.f_687[iVar0 /*7*/].f_2 = 1;
			}
			Local_4444.f_977 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (INTERIOR::IS_VALID_INTERIOR(iVar1[iVar0]) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar7[iVar0]))
			{
				GlobalFunc_710(&Local_4444, iVar1[iVar0]);
				func_953(&Local_4444, sVar7[iVar0], iVar1[iVar0]);
			}
			iVar0++;
		}
		Local_4253[4 /*5*/].f_1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	}
}

int func_953(var uParam0, char* sParam1, int iParam2)//Position - 0x93F82
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || !INTERIOR::IS_VALID_INTERIOR(uParam2))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_687)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_687[iVar0 /*7*/].f_4, sParam1))
			{
				uParam0->f_687[iVar0 /*7*/].f_2 = 0;
				if (!uParam0->f_687[iVar0 /*7*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iParam2))
		{
			uParam0->f_687[iVar1 /*7*/].f_5 = GRAPHICS::LOAD_MOVIE_MESH_SET(sParam1);
			uParam0->f_687[iVar1 /*7*/] = 1;
		}
		else
		{
			uParam0->f_687[iVar1 /*7*/] = 0;
		}
		uParam0->f_687[iVar1 /*7*/].f_6 = iParam2;
		uParam0->f_687[iVar1 /*7*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_687[iVar1 /*7*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_954()//Position - 0x94084
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	char cVar8[24];
	char cVar14[24];
	
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_6158 || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_6157)
	{
		GlobalFunc_734(&Local_4444);
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			switch (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
			{
				case -2043278375:
				case 1542490523:
				case -1767592778:
				case 909786638:
				case -2048401057:
					bVar7 = true;
					fVar3 = 0.25f;
					fVar2 = 0.5f;
					fVar4 = 0f;
					fVar5 = 0.5f;
					fVar6 = 0f;
					break;
				
				case 1313459445:
					bVar7 = true;
					fVar3 = 0.25f;
					fVar2 = 0.5f;
					fVar4 = 0.25f;
					fVar5 = 0.25f;
					fVar6 = 0.5f;
					bVar1 = true;
					break;
				
				case -657647164:
					bVar7 = true;
					fVar3 = 0.5f;
					fVar2 = 0.5f;
					fVar4 = 0.75f;
					fVar5 = 0.75f;
					fVar6 = 0f;
					break;
				
				case 1074571376:
					bVar7 = true;
					fVar3 = 0.5f;
					fVar2 = 0.5f;
					fVar4 = 0.75f;
					fVar5 = 0.75f;
					fVar6 = 1f;
					bVar1 = true;
					break;
				
				case 1398453774:
					bVar7 = true;
					fVar3 = 0.5f;
					fVar2 = 0.5f;
					fVar4 = 0.5f;
					fVar5 = 0.75f;
					fVar6 = 0.25f;
					bVar1 = true;
					break;
				
				case 1812387707:
					bVar7 = true;
					fVar3 = 0.5f;
					fVar2 = 0.5f;
					fVar4 = 0.25f;
					fVar5 = 0.5f;
					fVar6 = 0f;
					break;
				
				case 1839672584:
					bVar7 = true;
					fVar3 = 1f;
					fVar2 = 0.75f;
					fVar4 = 0.1f;
					fVar5 = 0.75f;
					fVar6 = 0f;
					break;
				
				case 647342791:
				case -46897258:
				case -2116788666:
				case 197774026:
				case -2002341573:
				case 594096310:
				default:
					bVar7 = false;
					fVar3 = 0f;
					fVar2 = 0f;
					fVar4 = 0f;
					fVar5 = 0f;
					fVar6 = 0f;
					break;
			}
			if (((fVar3 == 0f && fVar2 == 0f) && fVar4 == 0f) && fVar5 == 0f)
			{
				bVar0 = true;
			}
			if (!bVar0)
			{
				if (!AUDIO::IS_AMBIENT_ZONE_ENABLED("AZ_FBI_HEIST_SPRINKLER_FIRES_A_01"))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_FBI_HEIST_SPRINKLER_FIRES_A_01", 1, 0);
				}
			}
			else
			{
				AUDIO::CLEAR_AMBIENT_ZONE_STATE("AZ_FBI_HEIST_SPRINKLER_FIRES_A_01", 1);
			}
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_7973))
			{
				if (!bVar0)
				{
					iLocal_7973 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_env_agency3b_smoke", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
					iLocal_7974 = PLAYER::PLAYER_PED_ID();
				}
			}
			else if (PLAYER::PLAYER_PED_ID() != iLocal_7974 || bVar0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_7973, 0);
				iLocal_7973 = 0;
				iLocal_7974 = 0;
			}
			func_955(&Local_7975, fVar2, 1000);
			func_955(&Local_7979, fVar3, 1000);
			func_955(&Local_7983, fVar4, 1000);
			func_955(&Local_7987, fVar5, 1000);
			func_955(&Local_7991, fVar6, 1000);
			if (bVar7)
			{
				if (!iLocal_7995)
				{
					if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
					{
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("V_FIB_IT3", 1f);
						iLocal_7995 = 1;
					}
				}
			}
			else if (iLocal_7995)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::_0x1CBA05AE7BD7EE05(1f);
				}
				iLocal_7995 = 0;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_7973))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_7973, "smoke", (1f - Local_7975), 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_7973, "cinder", (1f - Local_7983), 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_7973, "debris", (1f - Local_7987), 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_7973, "smoke_strength", Local_7979, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_7973, "speed", Local_7991, 0);
			}
			StringCopy(&cVar8, "ent_amb_fbi_live_wires", 24);
			StringCopy(&cVar14, "scr_fbi5b_silt_fall", 24);
			if (iLocal_7996)
			{
				if (bVar1)
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[4]))
					{
						iLocal_3935[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(&cVar8, 156.2992f, -738.6639f, 255.4017f, -107.363f, 0f, 34.5115f, 1f, 0, 0, 0, 0);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[5]))
					{
						iLocal_3935[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(&cVar8, 151.8907f, -734.0749f, 256.0058f, -128.8885f, 0f, -86.9328f, 1f, 0, 0, 0, 0);
					}
					if (iLocal_7997 == -1 || MISC::GET_GAME_TIMER() > iLocal_7997)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(&cVar14, 154.8069f, -735.1069f, 256.4583f, -180f, 0f, 147.0874f, 1f, 0, 0, 0);
						iLocal_7997 = (MISC::GET_GAME_TIMER() + (1000 * MISC::GET_RANDOM_INT_IN_RANGE(7, 12)));
					}
					if (iLocal_7998 == -1 || MISC::GET_GAME_TIMER() > iLocal_7998)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(&cVar14, 151.4233f, -731.119f, 256.5137f, -180f, 0f, -136.622f, 1f, 0, 0, 0);
						iLocal_7998 = (MISC::GET_GAME_TIMER() + (1000 * MISC::GET_RANDOM_INT_IN_RANGE(7, 12)));
					}
					if (iLocal_7999 == -1 || MISC::GET_GAME_TIMER() > iLocal_7999)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(&cVar14, 154.3719f, -736.9957f, 256.5598f, -180f, 0f, -40.3884f, 1f, 0, 0, 0);
						iLocal_7999 = (MISC::GET_GAME_TIMER() + (1000 * MISC::GET_RANDOM_INT_IN_RANGE(7, 12)));
					}
				}
				else
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[4]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[4], 0);
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3935[5]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3935[5], 0);
					}
				}
			}
		}
	}
}

int func_955(var uParam0, float fParam1, int iParam2)//Position - 0x94580
{
	float fVar0;
	
	if (*uParam0 != fParam1)
	{
		if (uParam0->f_2 != fParam1)
		{
			uParam0->f_2 = fParam1;
			uParam0->f_1 = *uParam0;
			uParam0->f_3 = MISC::GET_GAME_TIMER();
		}
		fVar0 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - uParam0->f_3)) / SYSTEM::TO_FLOAT(iParam2)), 0f, 1f);
		*uParam0 = GlobalFunc_551(uParam0->f_1, uParam0->f_2, fVar0);
		if (fVar0 == 1f)
		{
			uParam0->f_3 = -1;
			uParam0->f_2 = -1f;
			uParam0->f_1 = -1f;
			return 1;
		}
	}
	return 0;
}

void func_956()//Position - 0x945F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		switch (iLocal_8011)
		{
			case -1:
				iVar0 = joaat("v_ilev_fib_sprklr");
				iVar3 = 1;
				break;
			
			case 0:
				iVar0 = joaat("v_ilev_fib_sprklr_off");
				iVar3 = -1;
				break;
			
			case 1:
				iVar0 = joaat("v_ilev_fib_sprklr_on");
				iVar3 = 0;
				break;
		}
		switch (iVar3)
		{
			case -1:
				iVar1 = joaat("v_ilev_fib_sprklr");
				iVar4 = 1;
				break;
			
			case 0:
				iVar1 = joaat("v_ilev_fib_sprklr_off");
				iVar4 = -1;
				break;
			
			case 1:
				iVar1 = joaat("v_ilev_fib_sprklr_on");
				iVar4 = 0;
				break;
		}
		switch (iVar4)
		{
			case -1:
				iVar2 = joaat("v_ilev_fib_sprklr");
				break;
			
			case 0:
				iVar2 = joaat("v_ilev_fib_sprklr_off");
				break;
			
			case 1:
				iVar2 = joaat("v_ilev_fib_sprklr_on");
				break;
		}
		if (iLocal_8011 == 0 || iLocal_8011 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_447()) && !PED::IS_PED_INJURED(func_447()))
			{
				PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(func_447());
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
			{
				PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(Local_630[3 /*20*/]);
			}
		}
		GlobalFunc_718(&Local_4444, iVar0);
		GlobalFunc_718(&Local_4444, iVar1);
		GlobalFunc_5174(&Local_4444, iVar2);
		if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			if (Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3 != iVar0 && !GlobalFunc_105(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/]))
			{
				if (Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_5))
					{
						if (Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3 != iVar0 || ENTITY::GET_ENTITY_MODEL(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_5) != iVar0)
						{
							OBJECT::DELETE_OBJECT(&(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_5));
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_5))
					{
						Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, Local_3942[Local_4253[1 /*5*/].f_1 /*6*/], 1, 1, 0);
						Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3 = iVar0;
					}
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3942[Local_4253[1 /*5*/].f_1 /*6*/]) < 900f)
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/], 0.25f, Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3, 0))
					{
						if (Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3 != joaat("v_ilev_fib_sprklr"))
						{
							ENTITY::REMOVE_MODEL_SWAP(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/], 0.25f, joaat("v_ilev_fib_sprklr"), Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3, 0);
							Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3 = joaat("v_ilev_fib_sprklr");
						}
						if (iVar0 != joaat("v_ilev_fib_sprklr"))
						{
							ENTITY::CREATE_MODEL_SWAP(Local_3942[Local_4253[1 /*5*/].f_1 /*6*/], 0.25f, Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3, iVar0, 1);
						}
						Local_3942[Local_4253[1 /*5*/].f_1 /*6*/].f_3 = iVar0;
					}
				}
			}
			Local_4253[1 /*5*/].f_1++;
			if (Local_4253[1 /*5*/].f_1 >= Local_3942)
			{
				Local_4253[1 /*5*/].f_1 = 0;
			}
		}
	}
}

void func_957()//Position - 0x9494A
{
	struct<3> Var0;
	
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_6157)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (Var0.f_2 < 253.0016f)
		{
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FIB03"), 135.332f, -746.367f, 250, 4);
		}
	}
}

void func_958(bool bParam0)//Position - 0x94994
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
	iVar3 = 0;
	while (iVar3 < Local_2091)
	{
		if (Local_2091[iVar3 /*88*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar3 /*88*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2091[iVar3 /*88*/], 0))
			{
				if (iVar3 == 1)
				{
					if (iLocal_4202)
					{
						func_997(8);
					}
				}
				else if (iVar3 == 16)
				{
					if (iLocal_4203)
					{
						func_997(11);
					}
				}
			}
			else if (!bParam0)
			{
				switch (iVar3)
				{
					case 16:
						if (iLocal_4203)
						{
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2091[16 /*88*/], 1, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2091[16 /*88*/], 0, 5000))
							{
								func_997(12);
							}
						}
						break;
					
					case 1:
						if (iLocal_4202)
						{
							if (iLocal_6071 == 1)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_2091[1 /*88*/], 2510.892f, -342.2148f, 118.9988f, 4.375f, 4.25f, 2.75f, 0, 1, 0))
								{
									func_997(10);
								}
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2091[1 /*88*/], 1, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2091[1 /*88*/], 0, 5000))
							{
								func_997(9);
							}
							if (iLocal_6071 == 2)
							{
								if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_2091[1 /*88*/], 1)) >= 22500f)
								{
									func_997(22);
								}
							}
						}
						break;
					}
				}
		}
		iVar4 = 0;
		while (iVar4 < 4)
		{
			if (Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/]))
			{
				if (Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_6)
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/]) == iLocal_625)
					{
						GlobalFunc_661(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/], &(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_7), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				if (PED::IS_PED_INJURED(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/]))
				{
					if (HUD::DOES_BLIP_EXIST(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_3))
					{
						HUD::REMOVE_BLIP(&(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_3));
					}
					if (Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_2)
					{
						TASK::REMOVE_COVER_POINT(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_1);
					}
					if (!PED::IS_PED_RAGDOLL(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/]) && !Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_18)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/]));
					}
					Local_2091[iVar3 /*88*/].f_1[iVar4 /*20*/].f_19 = 1;
				}
			}
			iVar4++;
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= (73 - 1))
	{
		bVar5 = false;
		if (Local_630[iVar3 /*20*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_630[iVar3 /*20*/]))
		{
			if (PED::IS_PED_INJURED(Local_630[iVar3 /*20*/]))
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (PLAYER::PLAYER_PED_ID() == Local_630[iVar3 /*20*/])
			{
				bVar6 = true;
			}
			else
			{
				bVar6 = false;
			}
			if (bVar5)
			{
				if (iVar3 == 0)
				{
					func_997(1);
				}
				else if (iVar3 == 1)
				{
					func_997(2);
				}
				else if (iVar3 == 2)
				{
					func_997(7);
				}
				else if (iVar3 == 3)
				{
					func_997(4);
				}
				else if (iVar3 == 6)
				{
					func_997(3);
				}
				else if (iVar3 == 4)
				{
					func_997(5);
				}
				else if (iLocal_4201 && iVar3 == 5)
				{
					func_997(6);
				}
			}
			if (!bParam0)
			{
				if (bVar6 && !bVar5)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!iLocal_629)
						{
							GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 568);
							GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 563);
							GlobalFunc_504(0, 567);
							iLocal_629 = 1;
						}
					}
					else if (iLocal_629)
					{
						GlobalFunc_503(0, 563);
						GlobalFunc_504(0, 568);
						GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 567);
						iLocal_629 = 0;
					}
				}
				if (Local_630[iVar3 /*20*/].f_6)
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_630[iVar3 /*20*/]) == iLocal_625)
					{
						GlobalFunc_661(Local_630[iVar3 /*20*/], &(Local_630[iVar3 /*20*/].f_7), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				if (!bVar5)
				{
					if (Local_630[iVar3 /*20*/].f_17 == 1)
					{
						PED::SET_PED_RESET_FLAG(Local_630[iVar3 /*20*/], 258, 1);
						PED::SET_PED_RESET_FLAG(Local_630[iVar3 /*20*/], 253, 0);
					}
					else if (Local_630[iVar3 /*20*/].f_17 == 0)
					{
						PED::SET_PED_RESET_FLAG(Local_630[iVar3 /*20*/], 258, 0);
						PED::SET_PED_RESET_FLAG(Local_630[iVar3 /*20*/], 253, 1);
					}
				}
			}
			if (bVar5)
			{
				if (bVar5)
				{
					if (HUD::DOES_BLIP_EXIST(Local_630[iVar3 /*20*/].f_3))
					{
						HUD::REMOVE_BLIP(&(Local_630[iVar3 /*20*/].f_3));
					}
					if (Local_630[iVar3 /*20*/].f_2)
					{
						TASK::REMOVE_COVER_POINT(Local_630[iVar3 /*20*/].f_1);
					}
					if (!PED::IS_PED_RAGDOLL(Local_630[iVar3 /*20*/]) && !Local_630[iVar3 /*20*/].f_18)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_630[iVar3 /*20*/]));
					}
					Local_630[iVar3 /*20*/].f_19 = 1;
				}
			}
			else if (!bParam0)
			{
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (((iLocal_6071 == 1 || iLocal_6071 == 2) || iLocal_6071 == 10) || iLocal_6071 == 11)
					{
						if (!bVar6)
						{
							if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_630[iVar3 /*20*/], 1)) >= 40000f)
							{
								switch (iVar3)
								{
									case 0:
										func_997(17);
										break;
									
									case 1:
										func_997(18);
										break;
									}
								}
							}
					}
					if ((iLocal_6071 == 2 || iLocal_6071 == 10) || iLocal_6071 == 11)
					{
						if (!bVar6)
						{
							switch (iVar3)
							{
								case 3:
									if (iLocal_4205)
									{
										bVar7 = true;
									}
									break;
								
								case 5:
									if (iLocal_4206)
									{
										bVar7 = true;
									}
									break;
								
								case 4:
									if (iLocal_4204)
									{
										bVar7 = true;
									}
									break;
							}
							if (bVar7)
							{
								if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_630[iVar3 /*20*/], 1)) >= 40000f)
								{
									switch (iVar3)
									{
										case 3:
											func_997(19);
											break;
										
										case 5:
											func_997(20);
											break;
										
										case 4:
											func_997(21);
											break;
										}
									}
								}
							}
						}
				}
				if (iLocal_6071 >= 3 && iLocal_6071 < 11)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_630[iVar3 /*20*/], 0))
					{
						if ((Local_630[iVar3 /*20*/].f_3 == 0 || !HUD::DOES_BLIP_EXIST(Local_630[iVar3 /*20*/].f_3)) && HUD::GET_BLIP_FROM_ENTITY(Local_630[iVar3 /*20*/]) == 0)
						{
							if (iVar3 == 0)
							{
								if (PLAYER::PLAYER_PED_ID() != Local_630[0 /*20*/])
								{
									func_485(&(Local_630[0 /*20*/].f_3), Local_630[0 /*20*/], 0);
								}
							}
							else if (iVar3 == 1)
							{
								if (PLAYER::PLAYER_PED_ID() != Local_630[1 /*20*/])
								{
									func_485(&(Local_630[1 /*20*/].f_3), Local_630[1 /*20*/], 0);
								}
							}
							else if (iVar3 == 3)
							{
								func_485(&(Local_630[3 /*20*/].f_3), Local_630[3 /*20*/], 0);
							}
						}
					}
					else if (Local_630[iVar3 /*20*/].f_3 != 0 && HUD::DOES_BLIP_EXIST(Local_630[iVar3 /*20*/].f_3))
					{
						GlobalFunc_703(&(Local_630[iVar3 /*20*/].f_3));
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Local_3864)
	{
		if (Local_3864[iVar3 /*2*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_3864[iVar3 /*2*/]))
		{
			switch (iVar3)
			{
				case 2:
					if (iLocal_6477)
					{
						if (iLocal_6071 >= 4 && iLocal_6071 < 6)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_3864[2 /*2*/]))
							{
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_agency3b_elec_box", Local_3864[2 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
								if (!iLocal_6467)
								{
									func_107(0);
									func_997(23);
								}
							}
						}
					}
					break;
				
				case 5:
					if (iLocal_6071 >= 4 && iLocal_6071 < 6)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_3864[5 /*2*/]))
						{
							func_107(0);
							func_997(24);
						}
					}
					break;
				}
		}
		iVar3++;
	}
	if (!bParam0)
	{
		if (iLocal_6071 < 3)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 136.2433f, -749.3834f, 265.6115f, 0) < 100f)
			{
				func_997(26);
			}
		}
		if (iLocal_6071 >= 6 && iLocal_6071 <= 8)
		{
			if (((!INTERIOR::IS_INTERIOR_SCENE() && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_6158) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_6157) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_6159)
			{
				if (iLocal_4232 == -1)
				{
					iLocal_4232 = MISC::GET_GAME_TIMER() + 3000;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_4232)
				{
					func_997(22);
				}
			}
		}
	}
}




void func_962()//Position - 0x953D3
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	
	if (bLocal_6075 == 1)
	{
		if (iLocal_6070 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				func_465(iLocal_6076);
			}
		}
		else if (iLocal_6070 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_2();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			GlobalFunc_762(&Local_4444);
			if (!GlobalFunc_188())
			{
				func_676(iLocal_6071);
				func_978(iLocal_6076, &Var0, &fVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&Local_4444, Var0, 50f, 0);
			}
			switch (iLocal_6071)
			{
				case 0:
					if (GlobalFunc_8315() == 0)
					{
						CUTSCENE::REQUEST_CUTSCENE("AH_3B_INT", 8);
					}
					else if (GlobalFunc_8315() == 1)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("AH_3B_INT", 2, 8);
					}
					GlobalFunc_712(&uLocal_5577, "Lester", 1, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_718(&Local_4444, joaat("prop_cs_lester_crate"));
					GlobalFunc_718(&Local_4444, joaat("prop_cs_walking_stick"));
					GlobalFunc_719(&Local_4444, "missheistfbi3bleadinoutah_3b_int");
					break;
				
				case 2:
					GlobalFunc_718(&Local_4444, iLocal_359);
					GlobalFunc_718(&Local_4444, iLocal_369);
					break;
				
				case 3:
					GlobalFunc_718(&Local_4444, iLocal_359);
					GlobalFunc_718(&Local_4444, iLocal_369);
					GlobalFunc_719(&Local_4444, &cLocal_155);
					GlobalFunc_734(&Local_4444);
					break;
				
				case 4:
					GlobalFunc_727(&Local_4444, &cLocal_341);
					GlobalFunc_719(&Local_4444, &cLocal_173);
					GlobalFunc_736(&Local_4444, joaat("weapon_stickybomb"), 31, 0);
					GlobalFunc_718(&Local_4444, joaat("prop_fib_skylight_plug"));
					GlobalFunc_734(&Local_4444);
					GlobalFunc_719(&Local_4444, "missheistfbi3bleadinoutah_3b_mcs_2");
					GlobalFunc_710(&Local_4444, iLocal_6157);
					func_759();
					break;
				
				case 5:
					GlobalFunc_718(&Local_4444, iLocal_361);
					GlobalFunc_718(&Local_4444, iLocal_362);
					GlobalFunc_718(&Local_4444, iLocal_363);
					GlobalFunc_718(&Local_4444, iLocal_364);
					GlobalFunc_718(&Local_4444, iLocal_368);
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					GlobalFunc_718(&Local_4444, joaat("prop_fib_skylight_plug"));
					GlobalFunc_734(&Local_4444);
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
					GlobalFunc_724(&Local_4444, "FBI_HEIST_3B_SHOOTOUT");
					GlobalFunc_733(&Local_4444, "Hacking_PC", &uLocal_70, 1);
					GlobalFunc_710(&Local_4444, iLocal_6157);
					GlobalFunc_718(&Local_4444, joaat("p_ld_heist_bag_s"));
					GlobalFunc_719(&Local_4444, "missheistfbi3bleadinoutah_3b_mcs_2");
					func_759();
					break;
				
				case 6:
					GlobalFunc_718(&Local_4444, iLocal_361);
					GlobalFunc_718(&Local_4444, iLocal_362);
					GlobalFunc_718(&Local_4444, iLocal_363);
					GlobalFunc_718(&Local_4444, iLocal_364);
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					GlobalFunc_718(&Local_4444, joaat("prop_fib_skylight_plug"));
					GlobalFunc_727(&Local_4444, &cLocal_347);
					GlobalFunc_727(&Local_4444, &cLocal_353);
					GlobalFunc_719(&Local_4444, &cLocal_191);
					GlobalFunc_734(&Local_4444);
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
					GlobalFunc_718(&Local_4444, joaat("p_ld_heist_bag_s"));
					GlobalFunc_719(&Local_4444, "missheistfbi3bleadinoutah_3b_mcs_2");
					func_759();
					break;
				
				case 7:
					GlobalFunc_718(&Local_4444, iLocal_361);
					GlobalFunc_718(&Local_4444, iLocal_362);
					GlobalFunc_718(&Local_4444, iLocal_363);
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
					GlobalFunc_734(&Local_4444);
					func_759();
					break;
				
				case 8:
					GlobalFunc_718(&Local_4444, iLocal_361);
					GlobalFunc_718(&Local_4444, iLocal_362);
					GlobalFunc_718(&Local_4444, iLocal_363);
					GlobalFunc_719(&Local_4444, &cLocal_275);
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_718(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
					GlobalFunc_734(&Local_4444);
					GlobalFunc_724(&Local_4444, "SIREN_DISTANT");
					func_759();
					break;
				
				case 9:
					GlobalFunc_718(&Local_4444, iLocal_363);
					GlobalFunc_718(&Local_4444, iLocal_364);
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
					GlobalFunc_724(&Local_4444, "SIREN_DISTANT");
					GlobalFunc_734(&Local_4444);
					func_759();
					GlobalFunc_7716(1, 1);
					break;
				
				case 10:
					if (func_490() == 2)
					{
						GlobalFunc_718(&Local_4444, joaat("ambulance"));
					}
					GlobalFunc_718(&Local_4444, iLocal_363);
					GlobalFunc_718(&Local_4444, joaat("firetruk"));
					GlobalFunc_718(&Local_4444, joaat("police3"));
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
					GlobalFunc_734(&Local_4444);
					func_759();
					break;
				
				case 11:
					if (func_490() == 2)
					{
						GlobalFunc_718(&Local_4444, joaat("ambulance"));
					}
					else
					{
						GlobalFunc_718(&Local_4444, joaat("fbi2"));
						GlobalFunc_718(&Local_4444, iLocal_365);
					}
					GlobalFunc_718(&Local_4444, joaat("firetruk"));
					GlobalFunc_718(&Local_4444, joaat("police3"));
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
					func_740(&Local_4444, "AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B");
					GlobalFunc_734(&Local_4444);
					func_759();
					break;
				
				case 12:
					GlobalFunc_710(&Local_4444, iLocal_6160);
					CUTSCENE::REQUEST_CUTSCENE("AH_3B_EXT", 8);
					func_977(&uLocal_5577, "Michael", 49, joaat("player_zero"));
					func_977(&uLocal_5577, "Franklin", 41, joaat("player_one"));
					break;
			}
			while (!GlobalFunc_7725(&Local_4444))
			{
				func_958(1);
				GlobalFunc_5195(&uLocal_5577);
				GlobalFunc_761(0);
			}
			switch (iLocal_6071)
			{
				case 0:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					func_974();
					bVar4 = true;
					break;
				
				case 1:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					if (GlobalFunc_8315() == 0)
					{
						func_970(0, 1, 1);
					}
					else
					{
						func_970(1, 1, 1);
					}
					while (!GlobalFunc_6808(&(Local_630[2 /*20*/]), 12, 713.033f, -964.717f, 30.399f, 42f, 1))
					{
						GlobalFunc_761(0);
						func_958(1);
					}
					PED::SET_PED_PROP_INDEX(Local_630[2 /*20*/], 1, 0, 0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_630[2 /*20*/], iLocal_623);
					Local_3864[1 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_cs_lester_crate"), 713.033f, -964.717f, 30.399f, 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3864[1 /*2*/], Local_630[2 /*20*/], PED::GET_PED_BONE_INDEX(Local_630[2 /*20*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_3864[0 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 713.033f, -964.717f, 30.399f, 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3864[0 /*2*/], Local_630[2 /*20*/], PED::GET_PED_BONE_INDEX(Local_630[2 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_630[2 /*20*/], "missheistfbi3bleadinoutah_3b_int", "_leadout_b_lester", 713.033f, -964.717f, 30.399f, 0f, 0f, 42f, 1000f, -8f, -1, 262145, 0, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[2 /*20*/], 0, 0);
					GlobalFunc_5174(&Local_4444, joaat("prop_cs_lester_crate"));
					GlobalFunc_5174(&Local_4444, joaat("prop_cs_walking_stick"));
					while (!GlobalFunc_9808(&(Local_2091[0 /*88*/]), 0, 718.3592f, -983.2876f, 23.1379f, 270.6242f, 1, 0))
					{
						GlobalFunc_761(0);
						func_958(1);
					}
					if (GlobalFunc_8315() == 0)
					{
						func_826(&(Local_630[1 /*20*/]), 1, 717.8079f, -971.8441f, 25.3313f, 183.4215f, 0, 5, 1, 1, 0, 0);
					}
					else
					{
						func_826(&(Local_630[0 /*20*/]), 0, 717.8079f, -971.8441f, 25.3313f, 183.4215f, 0, 5, 1, 1, 0, 0);
					}
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 2:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					Local_2091[1 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_359, Local_389, 116.221f, 1, 1);
					GlobalFunc_743(Local_2091[1 /*88*/], 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[1 /*88*/], 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[1 /*88*/], 0);
					iLocal_4202 = 1;
					GlobalFunc_5174(&Local_4444, iLocal_359);
					func_806(&(Local_630[1 /*20*/]), 1, &(Local_2091[1 /*88*/]), 2, 8, 5, 1, 1, 0, 0);
					GlobalFunc_11257(func_79(), 12, 5, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_11257(func_79(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_806(&(Local_630[3 /*20*/]), 3, &(Local_2091[1 /*88*/]), 1, 8, 5, 1, 1, 0, 0);
					func_871(&(Local_630[5 /*20*/]), iLocal_369, &(Local_2091[1 /*88*/]), 0, "CREW_PILOT", iLocal_623, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(Local_630[5 /*20*/], 9, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_630[5 /*20*/], 0, 0, 0, false);
					GlobalFunc_5174(&Local_4444, iLocal_369);
					PED::SET_PED_COMPONENT_VARIATION(Local_630[3 /*20*/], 6, 2, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(1383.66f, -2065.27f, 51f, 55f, 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2091[1 /*88*/]);
					CLOCK::SET_CLOCK_TIME(0, 0, 0);
					func_645(2, 0);
					GlobalFunc_695(0);
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(Local_2091[1 /*88*/], -1, 1);
					}
					else
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[1 /*88*/], -1);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 3:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					Local_2091[1 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_359, Local_395, 182.1244f, 1, 1);
					GlobalFunc_743(Local_2091[1 /*88*/], 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[1 /*88*/], 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_2091[1 /*88*/], 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_2091[1 /*88*/], 1);
					GlobalFunc_5174(&Local_4444, iLocal_359);
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_806(&(Local_630[1 /*20*/]), 1, &(Local_2091[1 /*88*/]), 2, 8, 5, 1, 1, 0, 0);
					func_806(&(Local_630[3 /*20*/]), 3, &(Local_2091[1 /*88*/]), 1, 8, 5, 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_630[3 /*20*/], 6, 2, 0, 0);
					func_871(&(Local_630[5 /*20*/]), iLocal_369, &(Local_2091[1 /*88*/]), -1, "CREW_PILOT", iLocal_623, joaat("weapon_unarmed"), 0, 5, -1, 0, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(Local_630[5 /*20*/], 9, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_630[5 /*20*/], 0, 0, 0, false);
					GlobalFunc_5174(&Local_4444, iLocal_369);
					CLOCK::SET_CLOCK_TIME(0, 30, 0);
					func_645(2, 0);
					iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					GlobalFunc_695(0);
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(Local_2091[1 /*88*/], 0, 1);
					}
					else
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[1 /*88*/], 0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_2091[1 /*88*/], 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_SKYDIVE_RT");
					iLocal_4222 = 0;
					iLocal_4226 = 0;
					bVar4 = true;
					break;
				
				case 4:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_826(&(Local_630[1 /*20*/]), 1, Local_410, 74.3802f, 8, 5, 1, 1, 0, 0);
					func_826(&(Local_630[3 /*20*/]), 3, Local_413, 57.7197f, 8, 5, 1, 1, 0, 0);
					func_958(1);
					func_715(0, 1, 0);
					func_534(&(Local_630[0 /*20*/]), 1);
					func_534(&(Local_630[1 /*20*/]), 1);
					func_534(&(Local_630[3 /*20*/]), 1);
					PED::SET_COMBAT_FLOAT(func_79(), 15, 0.03f);
					PED::SET_COMBAT_FLOAT(Local_630[3 /*20*/], 15, 0.03f);
					GlobalFunc_695(0);
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					if (!bLocal_6470)
					{
						GlobalFunc_7621(195, 2, 0, 1, 0);
						bLocal_6470 = true;
					}
					MISC::CLEAR_AREA_OF_OBJECTS(151.4373f, -766.3517f, 258.05f, 3f, 2);
					while (!func_758(0, 1, 1))
					{
						GlobalFunc_761(0);
						func_958(1);
					}
					func_645(26, 0);
					while (Local_4253[26 /*5*/].f_1 <= 1)
					{
						func_890();
						SYSTEM::WAIT(0);
					}
					CLOCK::SET_CLOCK_TIME(1, 0, 0);
					func_645(2, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AH_3B_BREAK_SERVER_ROOM_DOOR"))
					{
						AUDIO::START_AUDIO_SCENE("AH_3B_BREAK_SERVER_ROOM_DOOR");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_HACK_RT");
					break;
				
				case 5:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					Local_3864[5 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_368, Local_329, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3864[5 /*2*/], Local_329, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(Local_3864[5 /*2*/], Local_332, 2, 1);
					GlobalFunc_5174(&Local_4444, iLocal_368);
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_826(&(Local_630[1 /*20*/]), 1, Local_410, 74.3802f, 8, 5, 1, 1, 0, 0);
					func_826(&(Local_630[3 /*20*/]), 3, Local_413, 57.7197f, 8, 5, 1, 1, 0, 0);
					func_958(1);
					func_708();
					GlobalFunc_7621(195, 2, 0, 1, 0);
					func_715(0, 1, 1);
					func_715(1, 1, 1);
					func_715(3, 1, 1);
					func_534(&(Local_630[0 /*20*/]), 1);
					func_534(&(Local_630[1 /*20*/]), 1);
					func_534(&(Local_630[3 /*20*/]), 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
					func_46(1, 1, 1);
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					func_707();
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[0], "HACKING_DOWNLOADING", ENTITY::GET_ENTITY_COORDS(Local_3864[2 /*2*/], 1), 0, 0, 0, 0);
					Local_3864[19 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_ld_heist_bag_s"), Local_335, 1, 1, 0);
					uLocal_3916[12] = PED::CREATE_SYNCHRONIZED_SCENE(Local_335, Local_338, 2);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[19 /*2*/], uLocal_3916[12], "_leadout_bag", "missheistfbi3bleadinoutah_3b_mcs_2", 1000f, 8f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[12], 1);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[12], 0.9f);
					GlobalFunc_5174(&Local_4444, joaat("p_ld_heist_bag_s"));
					func_6(5, 1, 0f, 0);
					GlobalFunc_695(0);
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					if (!bLocal_6470)
					{
						GlobalFunc_7621(195, 2, 0, 1, 0);
						bLocal_6470 = true;
					}
					MISC::CLEAR_AREA_OF_OBJECTS(151.4373f, -766.3517f, 258.05f, 3f, 2);
					while (!func_758(1, 1, 1))
					{
						GlobalFunc_761(0);
						func_958(1);
					}
					ENTITY::SET_ENTITY_HEADING(Local_3864[2 /*2*/], -167.16f);
					func_703(0);
					func_687();
					func_686();
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_79(), Local_410, 1000, 1, 0f, 1, 1, Local_630[1 /*20*/].f_1, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[3 /*20*/], Local_413, 1000, 1, 0f, 1, 0, Local_630[3 /*20*/].f_1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_79(), 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[3 /*20*/], 0, 0);
					GlobalFunc_730(70.111f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.8101f, 1065353216);
					CLOCK::SET_CLOCK_TIME(1, 30, 0);
					func_645(2, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					iLocal_6466 = 1;
					iLocal_6477 = 1;
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_DOWNLOADING_RT");
					break;
				
				case 6:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (!bLocal_6470)
					{
						GlobalFunc_7621(195, 2, 0, 1, 0);
						bLocal_6470 = true;
					}
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_347, 1, &Var5);
					func_826(&(Local_630[1 /*20*/]), 1, Var5, 74.7167f, 8, 5, 1, 1, 0, 0);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_353, 1, &Var5);
					func_826(&(Local_630[3 /*20*/]), 3, Var5, 68.493f, 8, 5, 1, 1, 0, 0);
					func_958(1);
					func_708();
					func_715(0, 1, 1);
					func_715(1, 1, 1);
					func_715(3, 1, 1);
					func_534(&(Local_630[0 /*20*/]), 1);
					func_534(&(Local_630[1 /*20*/]), 1);
					func_534(&(Local_630[3 /*20*/]), 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
					func_46(1, 1, 1);
					func_43(1, 1);
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					func_698(0, 0, 1, 0, 0, 0);
					func_645(8, 0);
					func_42(1);
					Local_3864[19 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_ld_heist_bag_s"), Local_335, 1, 1, 0);
					uLocal_3916[12] = PED::CREATE_SYNCHRONIZED_SCENE(Local_335, Local_338, 2);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3864[19 /*2*/], uLocal_3916[12], "_leadout_bag", "missheistfbi3bleadinoutah_3b_mcs_2", 1000f, 8f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3916[12], 1);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3916[12], 0.9f);
					GlobalFunc_695(0);
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					func_974();
					MISC::CLEAR_AREA_OF_OBJECTS(151.4373f, -766.3517f, 258.05f, 3f, 2);
					while (!func_758(1, 0, 0))
					{
						GlobalFunc_761(0);
						func_958(1);
					}
					CLOCK::SET_CLOCK_TIME(2, 0, 0);
					func_645(2, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					func_645(15, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_STAIRWELL_RT");
					break;
				
				case 7:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_826(&(Local_630[1 /*20*/]), 1, 120.1913f, -733.5589f, 253.1525f, 167.3395f, 8, 5, 1, 1, 0, 0);
					GlobalFunc_11257(func_79(), 12, 5, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_826(&(Local_630[3 /*20*/]), 3, 117.588f, -732.5183f, 253.1525f, 158.8347f, 8, 5, 1, 1, 0, 0);
					func_958(1);
					func_715(0, 1, 1);
					func_715(1, 1, 1);
					func_715(3, 1, 1);
					func_534(&(Local_630[0 /*20*/]), 1);
					func_534(&(Local_630[1 /*20*/]), 1);
					func_534(&(Local_630[3 /*20*/]), 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
					func_46(1, 1, 0);
					func_43(1, 1);
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					func_645(1, 0);
					iLocal_8011 = 1;
					Global_89962.f_12[0] = 0;
					TASK::TASK_AIM_GUN_AT_COORD(Local_630[1 /*20*/], 118.0035f, -735.9307f, 254.6266f, -1, 1, 0);
					TASK::TASK_AIM_GUN_AT_COORD(Local_630[3 /*20*/], 117.4079f, -735.4523f, 254.5799f, -1, 1, 0);
					GlobalFunc_7621(195, 2, 0, 1, 0);
					func_683();
					func_42(1);
					func_698(0, 0, 1, 0, 0, 0);
					func_645(8, 0);
					GlobalFunc_695(0);
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					CLOCK::SET_CLOCK_TIME(2, 30, 0);
					func_645(2, 0);
					iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					func_645(3, 0);
					GlobalFunc_164("A3B_ESCAPE", 7500, 1);
					func_491(&uLocal_627, 118.1325f, -735.3059f, 253.1525f, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_BURNTOUT_RT");
					break;
				
				case 8:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[5], "Distant_Sirens_Rubble", 224.5f, -627f, 240.3f, "FBI_HEIST_FINALE_CHOPPER", 0, 0, 0);
					while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_7972))
					{
						uLocal_7972 = OBJECT::GET_RAYFIRE_MAP_OBJECT(152.2996f, -736.47f, 253.0175f, 10f, "DES_FIB_Floor");
						GlobalFunc_761(0);
					}
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_7972, 9);
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_826(&(Local_630[1 /*20*/]), 1, 151.3366f, -728.9139f, 249.1526f, 63.076f, 8, 5, 1, 1, 0, 0);
					func_826(&(Local_630[3 /*20*/]), 3, 144.876f, -732.1308f, 249.1522f, 66.7075f, 8, 5, 1, 1, 0, 0);
					func_600(&uLocal_7098, 151.3366f, -728.9139f, 249.1526f, 63.076f, 1, 2, 1);
					func_601(&(uLocal_7102[uLocal_7102.f_3]), 144.876f, -732.1308f, 249.1522f, 66.7075f, 1, 2, 1);
					func_958(1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_79(), 151.3366f, -728.9139f, 249.1526f, -1, 0, 0f, 1, 1, uLocal_7098[uLocal_7098.f_3], 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[3 /*20*/], 144.876f, -732.1308f, 249.1522f, -1, 0, 0f, 1, 1, uLocal_7102[uLocal_7102.f_3], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_79(), 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_630[3 /*20*/], 1);
					func_715(0, 1, 1);
					func_715(1, 1, 1);
					func_715(3, 1, 1);
					func_534(&(Local_630[0 /*20*/]), 1);
					func_534(&(Local_630[1 /*20*/]), 1);
					func_534(&(Local_630[3 /*20*/]), 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
					func_46(1, 1, 0);
					func_43(1, 1);
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					switch (iLocal_4195)
					{
						case 6:
							iLocal_8011 = 0;
							break;
						
						case 7:
							if (GlobalFunc_199() && Global_89962.f_12[0] != 0)
							{
								iLocal_8011 = (Global_89962.f_12[0] - 1);
							}
							else
							{
								iLocal_8011 = 0;
							}
							break;
						
						case 12:
							if (GlobalFunc_199() && Global_89962.f_12[0] != 0)
							{
								iLocal_8011 = (Global_89962.f_12[0] - 1);
							}
							else
							{
								iLocal_8011 = 1;
							}
							break;
					}
					func_645(1, 0);
					GlobalFunc_7621(195, 2, 0, 1, 0);
					func_683();
					func_42(1);
					func_698(0, 0, 1, 0, 0, 0);
					func_645(8, 0);
					GlobalFunc_695(0);
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					CLOCK::SET_CLOCK_TIME(3, 0, 0);
					func_645(2, 0);
					iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					func_645(3, 0);
					func_645(18, 0);
					GlobalFunc_164("A3B_ESCAPE", 7500, 1);
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_BURNTOUT_TWO_RT");
					break;
				
				case 9:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[5], "Distant_Sirens_Rubble", 224.5f, -627f, 240.3f, "FBI_HEIST_FINALE_CHOPPER", 0, 0, 0);
					AUDIO::DISTANT_COP_CAR_SIRENS(1);
					func_970(0, 1, 1);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					if (func_826(&(Local_630[1 /*20*/]), 1, 166.4286f, -761.4565f, 245.2417f, 260.0782f, 8, 5, 1, 1, 0, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_630[1 /*20*/], 1);
					}
					if (func_826(&(Local_630[3 /*20*/]), 3, 165.4856f, -763.9792f, 245.2417f, 267.4155f, 8, 5, 1, 1, 0, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_630[3 /*20*/], 1);
					}
					GlobalFunc_11257(func_106(), 9, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_11257(func_79(), 9, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_630[3 /*20*/], 1, 0, 0, 0);
					func_958(1);
					func_715(0, 1, 1);
					func_715(1, 1, 1);
					func_715(3, 1, 1);
					func_534(&(Local_630[0 /*20*/]), 1);
					func_534(&(Local_630[1 /*20*/]), 1);
					func_534(&(Local_630[3 /*20*/]), 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
					func_46(1, 1, 0);
					func_43(1, 1);
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					func_698(0, 0, 1, 0, 0, 0);
					func_645(8, 0);
					GlobalFunc_695(0);
					func_974();
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(267.7761f, -561.659f, 49.8593f, 5000f, 0, 0, 0, 0, 0);
					func_645(32, 0);
					CLOCK::SET_CLOCK_TIME(3, 30, 0);
					func_645(2, 0);
					iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[0 /*20*/]) && !PED::IS_PED_INJURED(Local_630[0 /*20*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_630[0 /*20*/], 0);
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(Local_630[0 /*20*/]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[1 /*20*/]) && !PED::IS_PED_INJURED(Local_630[1 /*20*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_630[1 /*20*/], 0);
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(Local_630[1 /*20*/]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_630[3 /*20*/], 0);
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(Local_630[3 /*20*/]);
					}
					func_654();
					func_653();
					func_649();
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_RAPPEL_RT");
					break;
				
				case 10:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[5], "Distant_Sirens_Rubble", 224.5f, -627f, 240.3f, "FBI_HEIST_FINALE_CHOPPER", 0, 0, 0);
					AUDIO::DISTANT_COP_CAR_SIRENS(1);
					func_970(0, 1, 0);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_826(&(Local_630[1 /*20*/]), 1, 153.2881f, -723.7296f, 46.077f, 69.0961f, 8, 5, 1, 0, 0, 0);
					func_826(&(Local_630[3 /*20*/]), 3, 134.3783f, -721.2941f, 46.077f, 70.2955f, 8, 5, 1, 0, 0, 0);
					GlobalFunc_11257(func_106(), 9, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_11257(func_79(), 9, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_630[3 /*20*/], 1, 0, 0, 0);
					if (func_490() == 2)
					{
						Local_2091[16 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 60.49f, -734.55f, 43.88f, 342.44f, 1, 1);
						VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(Local_2091[16 /*88*/], 0.2f);
						GlobalFunc_743(Local_2091[16 /*88*/], 1);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2091[16 /*88*/], 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2091[16 /*88*/], 0);
						VEHICLE::SET_VEHICLE_STRONG(Local_2091[16 /*88*/], 1);
						func_806(&(Local_630[4 /*20*/]), 4, &(Local_2091[16 /*88*/]), 0, 8, func_963(iLocal_4197), 1, 1, 0, 0);
						func_715(4, 0, 1);
						VEHICLE::SET_VEHICLE_SIREN(Local_2091[16 /*88*/], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(Local_2091[16 /*88*/], 1);
						GlobalFunc_5174(&Local_4444, joaat("ambulance"));
						iLocal_8035 = MISC::GET_GAME_TIMER();
						bLocal_8029 = true;
					}
					func_958(1);
					Local_2091[4 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 88.9f, -647.9f, 43.83f, 226.86f, 1, 1);
					Local_2091[5 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 65.3005f, -672.6956f, 43.2852f, 192.2619f, 1, 1);
					Local_2091[12 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), 81.48f, -661.66f, 44.32f, 132.13f, 1, 1);
					Local_2091[13 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), 78.87f, -684.03f, 44.18f, 324.12f, 1, 1);
					GlobalFunc_5174(&Local_4444, joaat("police3"));
					GlobalFunc_5174(&Local_4444, joaat("firetruk"));
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[4 /*88*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[5 /*88*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[12 /*88*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[13 /*88*/], 1);
					func_715(0, 1, 1);
					func_715(1, 1, 1);
					func_715(3, 1, 1);
					func_534(&(Local_630[0 /*20*/]), 1);
					func_534(&(Local_630[1 /*20*/]), 1);
					func_534(&(Local_630[3 /*20*/]), 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_106(), iLocal_372, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
					func_48(1);
					func_46(1, 1, 0);
					func_43(1, 1);
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					func_698(0, 0, 1, 0, 0, 0);
					func_645(8, 0);
					GlobalFunc_695(0);
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					func_974();
					func_611(&(Local_630[0 /*20*/]), 144.6043f, -720.4959f, 46.077f, 71.7143f, 1, 2, 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[0 /*20*/], 144.6043f, -720.4959f, 46.077f, -1, 0, 0f, 1, 1, Local_630[0 /*20*/].f_1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[0 /*20*/], 1, 0);
					func_611(&(Local_630[1 /*20*/]), 153.2881f, -723.7296f, 46.077f, 69.0961f, 1, 2, 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[1 /*20*/], 153.2881f, -723.7296f, 46.077f, -1, 0, 0f, 1, 1, Local_630[1 /*20*/].f_1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[1 /*20*/], 1, 0);
					func_611(&(Local_630[3 /*20*/]), 134.3783f, -721.2941f, 46.077f, 70.2955f, 0, 2, 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_630[3 /*20*/], 134.3783f, -721.2941f, 46.077f, -1, 0, 0f, 1, 0, Local_630[3 /*20*/].f_1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_630[3 /*20*/], 1, 0);
					CLOCK::SET_CLOCK_TIME(4, 0, 0);
					func_645(2, 0);
					iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-90f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					func_645(36, 0);
					func_645(33, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("AH3B_GET_TO_VAN_RT");
					break;
				
				case 11:
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3907[5], "Distant_Sirens_Rubble", 224.5f, -627f, 240.3f, "FBI_HEIST_FINALE_CHOPPER", 0, 0, 0);
					AUDIO::DISTANT_COP_CAR_SIRENS(1);
					if (func_490() == 2)
					{
						Local_2091[16 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 60.49f, -734.55f, 43.88f, 342.44f, 1, 1);
						VEHICLE::SET_VEHICLE_SIREN(Local_2091[16 /*88*/], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(Local_2091[16 /*88*/], 1);
						GlobalFunc_5174(&Local_4444, joaat("ambulance"));
						func_645(34, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_NO_WANTED_ESCAPE_RT");
						bLocal_8024 = false;
					}
					else
					{
						Local_2091[16 /*88*/] = VEHICLE::CREATE_VEHICLE(iLocal_365, 60.49f, -734.55f, 43.88f, 342.44f, 1, 1);
						Local_2091[18 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), 50.184f, -755.6543f, 43.8408f, -9.94f, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[18 /*88*/], 0, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[18 /*88*/], 1, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[18 /*88*/], 2, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[18 /*88*/], 3, 1, 1);
						Local_2091[19 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), 43.9931f, -728.7858f, 43.9026f, -147.94f, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[19 /*88*/], 0, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[19 /*88*/], 1, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[19 /*88*/], 2, 1, 1);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2091[19 /*88*/], 3, 1, 1);
						GlobalFunc_5174(&Local_4444, joaat("fbi2"));
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_MAX_WANTED_LEVEL(4);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
						PED::SET_CREATE_RANDOM_COPS(1);
						MISC::ENABLE_DISPATCH_SERVICE(3, 1);
						MISC::ENABLE_DISPATCH_SERVICE(1, 1);
						MISC::ENABLE_DISPATCH_SERVICE(8, 1);
						MISC::ENABLE_DISPATCH_SERVICE(2, 1);
						MISC::ENABLE_DISPATCH_SERVICE(6, 1);
						MISC::ENABLE_DISPATCH_SERVICE(4, 1);
						MISC::ENABLE_DISPATCH_SERVICE(12, 1);
						MISC::ENABLE_DISPATCH_SERVICE(5, 1);
						func_645(35, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("AH3B_EVADE_COPS_RT");
						bLocal_8024 = true;
					}
					GlobalFunc_743(Local_2091[16 /*88*/], 1);
					VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(Local_2091[16 /*88*/], 0.2f);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2091[16 /*88*/], 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2091[16 /*88*/], 0);
					VEHICLE::SET_VEHICLE_STRONG(Local_2091[16 /*88*/], 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2091[16 /*88*/], 1, 1);
					bLocal_8029 = true;
					func_970(0, 1, 0);
					GlobalFunc_11257(func_106(), 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_806(&(Local_630[1 /*20*/]), 1, &(Local_2091[16 /*88*/]), 1, 8, 40, 1, 0, 0, 0);
					func_806(&(Local_630[3 /*20*/]), 3, &(Local_2091[16 /*88*/]), 2, 8, 40, 1, 0, 0, 0);
					func_806(&(Local_630[4 /*20*/]), 4, &(Local_2091[16 /*88*/]), 0, 8, func_963(iLocal_4197), 1, 0, 0, 0);
					GlobalFunc_11257(func_106(), 9, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_11257(func_79(), 9, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_630[3 /*20*/], 1, 0, 0, 0);
					func_958(1);
					Local_2091[4 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 88.9f, -647.9f, 43.83f, 226.86f, 1, 1);
					Local_2091[5 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 65.3005f, -672.6956f, 43.2852f, 192.2619f, 1, 1);
					Local_2091[12 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), 81.48f, -661.66f, 44.32f, 132.13f, 1, 1);
					Local_2091[13 /*88*/] = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), 78.87f, -684.03f, 44.18f, 324.12f, 1, 1);
					GlobalFunc_5174(&Local_4444, joaat("police3"));
					GlobalFunc_5174(&Local_4444, joaat("firetruk"));
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[4 /*88*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[5 /*88*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[12 /*88*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2091[13 /*88*/], 1);
					func_715(0, 0, 1);
					func_715(1, 0, 1);
					func_715(3, 0, 1);
					func_715(4, 0, 1);
					func_534(&(Local_630[0 /*20*/]), 0);
					func_534(&(Local_630[1 /*20*/]), 0);
					func_534(&(Local_630[3 /*20*/]), 0);
					func_534(&(Local_630[4 /*20*/]), 0);
					WEAPON::SET_CURRENT_PED_WEAPON(func_106(), iLocal_372, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_79(), iLocal_373, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[3 /*20*/], iLocal_375, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_630[4 /*20*/], iLocal_374, 1);
					PED::SET_PED_USING_ACTION_MODE(func_106(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(func_79(), 1, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(Local_630[3 /*20*/], 1, -1, "DEFAULT_ACTION");
					PED::SET_PED_USING_ACTION_MODE(Local_630[4 /*20*/], 1, -1, "DEFAULT_ACTION");
					func_48(1);
					func_46(1, 1, 0);
					func_43(1, 1);
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b"));
					GlobalFunc_5174(&Local_4444, joaat("v_ilev_prop_74_emr_3b_02"));
					GlobalFunc_695(0);
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(Local_2091[16 /*88*/], -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2091[16 /*88*/], -1);
					}
					func_974();
					CLOCK::SET_CLOCK_TIME(4, 30, 0);
					func_645(2, 0);
					iLocal_3935[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3b_blding_smoke", Local_422, Local_425, 5f, 0, 0, 0, 0);
					GlobalFunc_7621(70, 0, 0, 1, 0);
					GlobalFunc_7621(71, 0, 0, 1, 0);
					GlobalFunc_7621(73, 0, 0, 1, 0);
					GlobalFunc_7621(72, 1, 0, 1, 0);
					GlobalFunc_7621(74, 1, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 12:
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					func_970(0, 1, 1);
					if (GlobalFunc_188())
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4967(0, -1, 1);
					}
					func_974();
					CLOCK::SET_CLOCK_TIME(4, 30, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					bVar4 = true;
					break;
			}
			func_535();
			if (!bVar4)
			{
				if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			bLocal_6075 = false;
		}
	}
}

int func_963(int iParam0)//Position - 0x97B3C
{
	if (GlobalFunc_595(iParam0) == 1)
	{
		return GlobalFunc_6802(iParam0, 1);
	}
	return 25;
}







int func_970(int iParam0, bool bParam1, bool bParam2)//Position - 0x97D6A
{
	int iVar0;
	
	if (iParam0 == 3)
	{
		return 0;
	}
	if (bParam1)
	{
		while (!func_971(iParam0, bParam2))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!func_971(iParam0, bParam2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			Local_630[0 /*20*/] = PLAYER::PLAYER_PED_ID();
			iLocal_6078[0] = Local_630[0 /*20*/];
			break;
		
		case 1:
			Local_630[1 /*20*/] = PLAYER::PLAYER_PED_ID();
			iLocal_6078[1] = Local_630[1 /*20*/];
			break;
	}
	if (iLocal_6078.f_5 != iParam0)
	{
		switch (iLocal_6078.f_5)
		{
			case 0:
				iVar0 = 0;
				break;
			
			case 1:
				iVar0 = 1;
				break;
		}
		Local_630[iVar0 /*20*/] = 0;
		GlobalFunc_703(&(Local_630[iVar0 /*20*/].f_3));
	}
	func_535();
	return 1;
}

int func_971(int iParam0, bool bParam1)//Position - 0x97E33
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
		GlobalFunc_11337(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		GlobalFunc_11338(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_400(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



void func_974()//Position - 0x97FEB
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	while (bVar0)
	{
		bVar1 = true;
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				bVar1 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[1 /*20*/]) && !PED::IS_PED_INJURED(Local_630[1 /*20*/]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_630[1 /*20*/]))
			{
				bVar1 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[3 /*20*/]) && !PED::IS_PED_INJURED(Local_630[3 /*20*/]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_630[3 /*20*/]))
			{
				bVar1 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[5 /*20*/]) && !PED::IS_PED_INJURED(Local_630[5 /*20*/]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_630[5 /*20*/]))
			{
				bVar1 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[4 /*20*/]) && !PED::IS_PED_INJURED(Local_630[4 /*20*/]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_630[4 /*20*/]))
			{
				bVar1 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_630[6 /*20*/]) && !PED::IS_PED_INJURED(Local_630[6 /*20*/]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_630[6 /*20*/]))
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			bVar0 = false;
		}
		else
		{
			GlobalFunc_761(0);
			func_958(1);
		}
	}
	if (!GlobalFunc_188())
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		GlobalFunc_5181(&Local_4444);
	}
}



void func_977(var uParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x98176
{
	var uVar0;
	int iVar16;
	struct<14> Var17;
	
	uVar0 = { GlobalFunc_7617(iParam3, iParam2) };
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((iVar16 != 12 && iVar16 != 13) && iVar16 != 14)
		{
			Var17 = { GlobalFunc_10836(iParam3, iVar16, uVar0[iVar16]) };
			GlobalFunc_711(uParam0, sParam1, GlobalFunc_33(iVar16), Var17.f_3, Var17.f_4, iParam3);
		}
		iVar16++;
	}
}

void func_978(int iParam0, var uParam1, var uParam2)//Position - 0x981E5
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 711.8967f, -962.9301f, 29.3956f };
			*uParam2 = 173.1497f;
			break;
		
		case 1:
			*uParam1 = { 718.0844f, -974.8945f, 23.9197f };
			*uParam2 = 184.0478f;
			break;
		
		case 2:
			*uParam1 = { Local_389 + Vector(0f, 1f, 1f) };
			*uParam2 = 0f;
			break;
		
		case 3:
			*uParam1 = { Local_395 };
			*uParam2 = 0f;
			break;
		
		case 4:
			*uParam1 = { 137.7823f, -747.077f, 257.1519f };
			*uParam2 = 226.0318f;
			break;
		
		case 5:
			*uParam1 = { Local_407 };
			*uParam2 = 67.9292f;
			break;
		
		case 6:
			*uParam1 = { 150.842f, -760.4207f, 257.1519f };
			*uParam2 = 56.8501f;
			break;
		
		case 7:
			*uParam1 = { 121.7277f, -725.8613f, 253.1521f };
			*uParam2 = 161.441f;
			break;
		
		case 8:
			*uParam1 = { 152.5221f, -731.9482f, 249.1525f };
			*uParam2 = 98.8415f;
			break;
		
		case 9:
			*uParam1 = { 166.3548f, -762.9729f, 245.1203f };
			*uParam2 = 257.2595f;
			break;
		
		case 10:
			*uParam1 = { 144.6043f, -720.4959f, 46.077f };
			*uParam2 = 160.9092f;
			break;
		
		case 11:
			*uParam1 = { 63.5075f, -738.0371f, 43.2205f };
			*uParam2 = 335.5202f;
			break;
		
		case 12:
			*uParam1 = { 5.8674f, 531.4399f, 174.3445f };
			*uParam2 = 155.4157f;
			break;
	}
}



void func_981()//Position - 0x98612
{
	switch (iLocal_6070)
	{
		case 1:
			iLocal_6070 = 2;
			iLocal_6072 = -1;
			iLocal_4198 = -1;
			break;
		
		case 2:
			iLocal_6070 = 3;
			iLocal_6072 = 0;
			iLocal_4198 = 0;
			iLocal_6071 = iLocal_6073;
			break;
		
		case 3:
			iLocal_6073 = -1;
			iLocal_6070 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_6074) > 2500)
			{
				iLocal_6074 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}




void func_985()//Position - 0x991D5
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		if (GlobalFunc_199())
		{
			iLocal_6076 = GlobalFunc_198();
			if (Global_84544)
			{
				iLocal_6076++;
			}
		}
		else if (GlobalFunc_2(0))
		{
			iLocal_6076 = 0;
		}
		switch (iLocal_6076)
		{
			case 0:
				iLocal_6076 = 0;
				break;
			
			case 1:
				iLocal_6076 = 1;
				break;
			
			case 2:
				iLocal_6076 = 2;
				break;
			
			case 3:
				iLocal_6076 = 3;
				break;
			
			case 4:
				iLocal_6076 = 4;
				break;
			
			case 5:
				iLocal_6076 = 5;
				break;
			
			case 6:
				iLocal_6076 = 6;
				break;
			
			case 7:
				iLocal_6076 = 8;
				break;
			
			case 8:
				iLocal_6076 = 9;
				break;
			
			case 9:
				iLocal_6076 = 10;
				break;
			
			case 10:
				iLocal_6076 = 11;
				break;
			
			case 11:
				iLocal_6076 = 12;
				break;
		}
		func_676(iLocal_6076);
		if (GlobalFunc_199())
		{
			func_978(iLocal_6076, &Var0, &uVar3);
			GlobalFunc_5196(Var0, uVar3, 1, 0);
		}
		bLocal_6075 = true;
	}
	else
	{
		func_676(0);
	}
	Global_86862 = 1;
	func_994();
	func_993(&Local_7145, 1f, 0.65f, 0.025f, 0.0025f);
	func_993(&Local_7475, 1f, 0.65f, 0.025f, 0.0025f);
	func_993(&Local_7255, 1f, 0.65f, 0.025f, 0.0025f);
	func_993(&Local_7585, 1f, 0.65f, 0.025f, 0.0025f);
	HUD::REQUEST_ADDITIONAL_TEXT("AH3B", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
	iVar4 = 0;
	while (iVar4 < iLocal_3907)
	{
		iLocal_3907[iVar4] = AUDIO::GET_SOUND_ID();
		iVar4++;
	}
	GlobalFunc_563(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
	iLocal_4195 = GlobalFunc_5133(3, 0);
	iLocal_4196 = GlobalFunc_5133(3, 1);
	iLocal_4197 = GlobalFunc_5133(3, 2);
	PED::ADD_RELATIONSHIP_GROUP("Crew", &iLocal_623);
	PED::ADD_RELATIONSHIP_GROUP("Enemy", &iLocal_625);
	PED::ADD_RELATIONSHIP_GROUP("911", &iLocal_626);
	PED::ADD_RELATIONSHIP_GROUP("CREW_IGNORE", &iLocal_624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_625, iLocal_623);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_625, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_625, iLocal_626);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_625, iLocal_624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_623, iLocal_625);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_623, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_623, iLocal_626);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_623, iLocal_624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_624, iLocal_625);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_624, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_624, iLocal_626);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_624, iLocal_623);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_625);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_623);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_626);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_626, iLocal_625);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_626, iLocal_623);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_626, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_626, iLocal_624);
	iLocal_6156 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(717.1278f, -964.4892f, 29.3957f, "v_sweatempty");
	iLocal_6157 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(130.0661f, -746.865f, 253.1522f, "v_fib03");
	iLocal_6158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(136.0289f, -732.2351f, 249.1521f, "v_fib02");
	iLocal_6159 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(129.6901f, -734.8077f, 253.351f, "v_fib04");
	iLocal_6160 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(0.4695f, 524.2726f, 173.6277f, "v_franklinshouse");
	if ((((!INTERIOR::IS_VALID_INTERIOR(iLocal_6156) && !INTERIOR::IS_VALID_INTERIOR(iLocal_6157)) && !INTERIOR::IS_VALID_INTERIOR(iLocal_6158)) && !INTERIOR::IS_VALID_INTERIOR(iLocal_6159)) && !INTERIOR::IS_VALID_INTERIOR(iLocal_6160))
	{
	}
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6158, "V_FIB02_set_AH3b"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_6158, "V_FIB02_set_AH3b");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6158, "V_FIB02_set_AH3a"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_6158, "V_FIB02_set_AH3a");
	}
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6157, "V_FIB03_set_AH3B"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_6157, "V_FIB03_set_AH3B");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6157, "V_FIB03_set_AH3a"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_6157, "V_FIB03_set_AH3a");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_6159, "V_FIB04_set_AH3a"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_6159, "V_FIB04_set_AH3a");
	}
	INTERIOR::REFRESH_INTERIOR(iLocal_6158);
	INTERIOR::REFRESH_INTERIOR(iLocal_6157);
	INTERIOR::REFRESH_INTERIOR(iLocal_6159);
	func_990();
	func_116();
	func_989(&(Local_6625[0 /*5*/]), 118.8291f, -732.9988f, 257.1522f, 163.011f, 0);
	func_989(&(Local_6625[1 /*5*/]), 141.6208f, -734.0158f, 257.1519f, 128.4372f, 0);
	func_989(&(Local_6625[2 /*5*/]), 114.2868f, -743.7798f, 257.1523f, 342.0726f, 0);
	func_989(&(Local_6625[3 /*5*/]), 123.4929f, -760.5908f, 257.1519f, 34.6909f, 0);
	func_989(&(Local_6625[6 /*5*/]), 148.3051f, -735.357f, 261.8402f, 145.8903f, 1);
	func_989(&(Local_6625[7 /*5*/]), 130.7267f, -766.4357f, 261.8663f, 341.4502f, 1);
	func_989(&(Local_6625[4 /*5*/]), 122.5439f, -733.271f, 261.8524f, 222.6655f, 1);
	func_989(&(Local_6625[5 /*5*/]), 113.8266f, -753.9981f, 261.8492f, 275.2845f, 1);
	func_988(&(Local_6494[0 /*5*/]), 117.0829f, -742.7855f, 257.1523f, 1f, 0);
	func_988(&(Local_6494[1 /*5*/]), 126.0562f, -741.8318f, 257.152f, 1f, 0);
	func_988(&(Local_6494[2 /*5*/]), 125.3624f, -743.7374f, 257.152f, 1f, 0);
	func_988(&(Local_6494[3 /*5*/]), 128.5511f, -742.7452f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[4 /*5*/]), 127.8216f, -744.7714f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[5 /*5*/]), 124.2615f, -746.7748f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[6 /*5*/]), 123.6546f, -748.7203f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[7 /*5*/]), 126.7811f, -747.5624f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[8 /*5*/]), 126.0501f, -749.6313f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[11 /*5*/]), 139.1954f, -747.4327f, 257.1697f, 2f, 0);
	func_988(&(Local_6494[9 /*5*/]), 131.2523f, -744.4833f, 257.1697f, 2f, 0);
	func_988(&(Local_6494[12 /*5*/]), 137.178f, -752.9827f, 257.1695f, 2f, 0);
	func_988(&(Local_6494[10 /*5*/]), 129.2593f, -749.9651f, 257.1697f, 2f, 0);
	func_988(&(Local_6494[14 /*5*/]), 136.3391f, -761.1171f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[15 /*5*/]), 124.8576f, -753.7386f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[16 /*5*/]), 145.3237f, -746.3768f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[17 /*5*/]), 141.4005f, -757.4299f, 257.1519f, 1f, 0);
	func_988(&(Local_6494[18 /*5*/]), 128.9251f, -743.8738f, 261.8518f, 1f, 1);
	func_988(&(Local_6494[19 /*5*/]), 127.8759f, -745.308f, 261.8515f, 1f, 1);
	func_988(&(Local_6494[20 /*5*/]), 127.2251f, -747.4048f, 261.8544f, 1f, 1);
	func_988(&(Local_6494[21 /*5*/]), 126.7614f, -748.9018f, 261.8517f, 1f, 1);
	func_988(&(Local_6494[25 /*5*/]), 128.4935f, -754.3387f, 261.8497f, 1f, 1);
	func_988(&(Local_6494[24 /*5*/]), 132.4571f, -755.5112f, 261.8494f, 1f, 1);
	func_988(&(Local_6494[23 /*5*/]), 132.7355f, -740.4968f, 261.8568f, 1f, 1);
	func_988(&(Local_6494[22 /*5*/]), 134.9779f, -741.5173f, 261.859f, 1f, 1);
	func_987(&(Local_6666[0 /*16*/]), 0, 11, iLocal_361, joaat("weapon_smg"), 0, 4, 200, 0, 0, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[1 /*16*/]), 2, 5, iLocal_363, joaat("weapon_pistol"), 0, 10, 200, 0, 1000, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[2 /*16*/]), 0, 9, iLocal_362, joaat("weapon_pistol"), 0, 10, 200, 0, 1000, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[3 /*16*/]), 3, 17, iLocal_361, joaat("weapon_smg"), 0, 4, 200, 1, 0, 0.1f, 0, 1, 1, 0);
	func_987(&(Local_6666[4 /*16*/]), 2, 12, iLocal_362, joaat("weapon_pumpshotgun"), 0, 2, 200, 0, 1000, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[5 /*16*/]), 5, 21, iLocal_364, joaat("weapon_smg"), 0, 10, 130, 1, 0, 0.15f, 0, 0, 0, 0);
	func_987(&(Local_6666[6 /*16*/]), 4, 18, iLocal_364, joaat("weapon_carbinerifle"), 0, 10, 130, 0, 1000, 0f, 0, 0, 0, 0);
	func_987(&(Local_6666[7 /*16*/]), 7, 24, iLocal_364, joaat("weapon_carbinerifle"), 0, 10, 130, 1, 0, 0.25f, 0, 0, 0, 0);
	func_987(&(Local_6666[8 /*16*/]), 6, 23, iLocal_364, joaat("weapon_smg"), 0, 10, 130, 0, 1000, 0f, 0, 0, 0, 0);
	func_987(&(Local_6666[9 /*16*/]), 0, -1, iLocal_363, joaat("weapon_pistol"), 0, 10, 200, 0, 500, 0f, 0, 1, 1, 1);
	func_987(&(Local_6666[10 /*16*/]), 1, 9, iLocal_361, joaat("weapon_smg"), 0, 4, 200, 0, 2000, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[11 /*16*/]), 3, 14, iLocal_362, joaat("weapon_pistol"), 0, 10, 200, 0, 2000, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[12 /*16*/]), 2, 7, iLocal_361, joaat("weapon_pistol"), 0, 10, 200, 0, 2000, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[13 /*16*/]), 5, 20, iLocal_364, joaat("weapon_carbinerifle"), 0, 10, 130, 2, 1000, 0f, 0, 0, 0, 0);
	func_987(&(Local_6666[14 /*16*/]), 4, 18, iLocal_364, joaat("weapon_smg"), 0, 10, 130, 0, 2000, 0f, 0, 0, 0, 0);
	func_987(&(Local_6666[15 /*16*/]), 0, -1, iLocal_362, joaat("weapon_smg"), 0, 4, 200, 2, 0, 0.35f, 0, 1, 1, 1);
	func_987(&(Local_6666[16 /*16*/]), 2, 2, iLocal_361, joaat("weapon_pistol"), 0, 10, 200, 0, 2000, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[17 /*16*/]), 0, 11, iLocal_364, joaat("weapon_smg"), 0, 10, 180, 0, 0, 0f, 1, 1, 1, 0);
	func_987(&(Local_6666[18 /*16*/]), 2, -1, iLocal_364, joaat("weapon_carbinerifle"), 0, 10, 200, 0, 0, 0f, 0, 1, 1, 1);
	func_987(&(Local_6666[19 /*16*/]), 0, 14, iLocal_364, joaat("weapon_carbinerifle"), 0, 10, 180, 0, 0, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[20 /*16*/]), 2, 17, iLocal_364, joaat("weapon_smg"), 0, 10, 180, 0, 0, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[21 /*16*/]), 0, 16, iLocal_364, joaat("weapon_pumpshotgun"), 0, 2, 180, 2, 1500, 0f, 0, 1, 1, 0);
	func_987(&(Local_6666[22 /*16*/]), 2, -1, iLocal_364, joaat("weapon_carbinerifle"), 0, 10, 200, 0, 500, 0f, 0, 1, 1, 1);
	func_987(&(Local_6666[23 /*16*/]), 0, 11, iLocal_364, joaat("weapon_smg"), 0, 10, 180, 0, 500, 0f, 0, 1, 1, 0);
	Local_3942[0 /*6*/] = { 129.65f, -729.84f, 256.45f };
	Local_3942[1 /*6*/] = { 125.18f, -728.22f, 256.45f };
	Local_3942[2 /*6*/] = { 120.73f, -727.85f, 256.45f };
	Local_3942[3 /*6*/] = { 119.1f, -732.32f, 256.45f };
	Local_3942[4 /*6*/] = { 116.56f, -738.97f, 256.45f };
	Local_3942[5 /*6*/] = { 121.09f, -740.61f, 256.45f };
	Local_3942[6 /*6*/] = { 148.73f, -750.67f, 256.45f };
	Local_3942[37 /*6*/] = { 125.54f, -742.21f, 256.41f };
	Local_3942[37 /*6*/].f_4 = 1;
	Local_3942[38 /*6*/] = { 130.03f, -743.85f, 256.41f };
	Local_3942[38 /*6*/].f_4 = 1;
	Local_3942[39 /*6*/] = { 134.48f, -745.49f, 256.4f };
	Local_3942[39 /*6*/].f_4 = 1;
	Local_3942[7 /*6*/] = { 139.05f, -733.11f, 252.25f };
	Local_3942[8 /*6*/] = { 134.56f, -731.49f, 252.25f };
	Local_3942[9 /*6*/] = { 138.13f, -739.08f, 252.25f };
	Local_3942[10 /*6*/] = { 136.51f, -743.54f, 252.25f };
	Local_3942[11 /*6*/] = { 131.63f, -743.05f, 252.25f };
	Local_3942[12 /*6*/] = { 127.19f, -741.43f, 252.25f };
	Local_3942[13 /*6*/] = { 122.72f, -739.81f, 252.25f };
	Local_3942[14 /*6*/] = { 118.26f, -738.18f, 252.25f };
	Local_3942[15 /*6*/] = { 117.93f, -743.12f, 252.25f };
	Local_3942[16 /*6*/] = { 116.31f, -747.58f, 252.25f };
	Local_3942[17 /*6*/] = { 117.26f, -751.79f, 252.25f };
	Local_3942[18 /*6*/] = { 120.21f, -754.08f, 252.25f };
	Local_3942[19 /*6*/] = { 127.08f, -756.48f, 252.25f };
	Local_3942[20 /*6*/] = { 131.54f, -758.1f, 252.25f };
	Local_3942[21 /*6*/] = { 136.41f, -758.61f, 252.25f };
	Local_3942[22 /*6*/] = { 139.21f, -754.95f, 252.25f };
	Local_3942[23 /*6*/] = { 143.67f, -756.58f, 252.25f };
	Local_3942[24 /*6*/] = { 148.14f, -758.2f, 252.25f };
	Local_3942[25 /*6*/] = { 152.6f, -759.83f, 252.25f };
	Local_3942[26 /*6*/] = { 152.69f, -766.71f, 252.25f };
	Local_3942[27 /*6*/] = { 151.07f, -771.18f, 252.25f };
	Local_3942[28 /*6*/] = { 145.06f, -770.26f, 252.25f };
	Local_3942[29 /*6*/] = { 140.6f, -768.64f, 252.25f };
	Local_3942[30 /*6*/] = { 141.98f, -765.7f, 252.25f };
	Local_3942[31 /*6*/] = { 140.59f, -768.64f, 248.25f };
	Local_3942[32 /*6*/] = { 145.06f, -770.26f, 248.25f };
	Local_3942[33 /*6*/] = { 150.64f, -772.32f, 248.25f };
	Local_3942[34 /*6*/] = { 152.28f, -767.86f, 248.25f };
	Local_3942[35 /*6*/] = { 155.27f, -760.92f, 248.25f };
	Local_3942[36 /*6*/] = { 160.3f, -762.75f, 248.25f };
	iLocal_59[0] = -1;
	iLocal_59[1] = -1;
	iVar4 = 0;
	while (iVar4 < iLocal_7108)
	{
		if (iLocal_7108[iVar4] != -1)
		{
			iLocal_7108[iVar4] = -1;
		}
		iVar4++;
	}
	Local_7915[0 /*3*/] = { 223.6732f, -767.7599f, 80f };
	Local_7915[1 /*3*/] = { 216.6973f, -741.3337f, 80f };
	Local_7915[2 /*3*/] = { 207.3634f, -716.4969f, 80f };
	Local_7915[3 /*3*/] = { 187.4426f, -688.3856f, 80f };
	Local_7915[4 /*3*/] = { 159.2153f, -673.806f, 80f };
	Local_7931[0 /*3*/] = { 169.3769f, -762.2784f, 73.1555f };
	Local_7931[1 /*3*/] = { 171.2729f, -752.6063f, 73.1555f };
	Local_7931[2 /*3*/] = { 169.9714f, -741.0135f, 73.1555f };
	Local_7931[3 /*3*/] = { 164.3842f, -731.3631f, 73.1555f };
	Local_7931[4 /*3*/] = { 155.0101f, -724.1595f, 73.1555f };
	Local_7947[0 /*3*/] = { 167.6451f, -766.4635f, 73.1555f };
	Local_7947[1 /*3*/] = { 170.7112f, -756.7259f, 73.1555f };
	Local_7947[2 /*3*/] = { 170.994f, -745.4851f, 73.1555f };
	Local_7947[3 /*3*/] = { 167.0817f, -735.4847f, 73.1555f };
	Local_7947[4 /*3*/] = { 158.9559f, -727.4032f, 73.1555f };
	iLocal_8006 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(45.50678f, -741.3155f, 105.1192f) - Vector(1f, 1f, 1f), Vector(45.50678f, -741.3155f, 105.1192f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	iLocal_8007 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(24.71592f, -992.7376f, 714.9756f) - Vector(2.75f, 3.9375f, 4.875f), Vector(24.71592f, -992.7376f, 714.9756f) + Vector(2.75f, 3.9375f, 4.875f), 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PEDS(714.9756f, -992.7376f, 24.71592f, 5f, 0);
	uLocal_8000[0] = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(94.5782f, -292.4247f, 2577.974f) - Vector(2.75f, 25f, 9.4375f), Vector(94.5782f, -292.4247f, 2577.974f) + Vector(2.75f, 25f, 9.4375f), 0, 1, 1, 1);
	uLocal_8000[1] = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(94.62894f, -332.262f, 2567.866f) - Vector(2.75f, 8.625f, 6.125f), Vector(94.62894f, -332.262f, 2567.866f) + Vector(2.75f, 8.625f, 6.125f), 0, 1, 1, 1);
	uLocal_8000[2] = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(94.49239f, -309.2956f, 2492.863f) - Vector(2.75f, 8.625f, 6.125f), Vector(94.49239f, -309.2956f, 2492.863f) + Vector(2.75f, 8.625f, 6.125f), 0, 1, 1, 1);
	uLocal_8000[3] = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(65.59364f, -601.2106f, 2561.147f) - Vector(2.75f, 16.3125f, 9.1875f), Vector(65.59364f, -601.2106f, 2561.147f) + Vector(2.75f, 16.3125f, 9.1875f), 0, 1, 1, 1);
	GlobalFunc_705(&uLocal_5577);
	switch (GlobalFunc_697(iLocal_4196))
	{
		case 0:
			iLocal_375 = joaat("weapon_assaultrifle");
			break;
		
		case 1:
			iLocal_375 = joaat("weapon_carbinerifle");
			break;
		
		case 2:
			iLocal_375 = joaat("weapon_carbinerifle");
			break;
	}
	iVar5 = GlobalFunc_7726(iLocal_4196, 3);
	if (iVar5 > 45)
	{
		iLocal_378 = joaat("component_at_ar_afgrip");
	}
	if (iVar5 > 50)
	{
		iLocal_376 = joaat("component_at_ar_flsh");
		if (iLocal_375 == joaat("weapon_carbinerifle"))
		{
			iLocal_377 = joaat("component_at_ar_supp");
		}
		else if (iLocal_377 == joaat("component_at_ar_supp_02"))
		{
		}
	}
	if (iVar5 > 60)
	{
		if (iLocal_375 == joaat("weapon_carbinerifle"))
		{
			iLocal_380 = joaat("component_carbinerifle_clip_02");
		}
		else
		{
			iLocal_380 = joaat("component_assaultrifle_clip_02");
		}
	}
	if (iVar5 > 75)
	{
		if (iLocal_375 == joaat("weapon_carbinerifle"))
		{
			iLocal_379 = joaat("component_at_scope_medium");
		}
		else if (iLocal_379 == joaat("component_at_scope_macro"))
		{
		}
	}
	GlobalFunc_52(1, 1);
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}


void func_987(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x9A55B
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_10 = iParam8;
	uParam0->f_11 = iParam9;
	uParam0->f_12 = fParam10;
	uParam0->f_13 = iParam11;
	uParam0->f_7 = iParam12;
	uParam0->f_8 = iParam13;
	uParam0->f_9 = iParam14;
}

void func_988(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x9A5B6
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
}

void func_989(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x9A5D2
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
}

void func_990()//Position - 0x9A5EE
{
	func_991(0, 116.51f, -735.44f, 258.42f, joaat("v_ilev_fib_door1"), 1);
	func_991(1, 119.16f, -736.4f, 258.4f, joaat("v_ilev_fib_door1"), 1);
	func_991(2, 121.66f, -757.86f, 258.3f, joaat("v_ilev_fib_door1"), 1);
	func_991(3, 139.02f, -735.12f, 258.3f, joaat("v_ilev_fib_door1"), 1);
	func_991(4, 114.4338f, -742.4111f, 258.3478f, joaat("v_ilev_fib_door1"), 1);
	func_991(5, 124f, -727.2f, 258.3f, joaat("v_ilev_fib_door1"), 1);
	func_991(16, 140.99f, -758.15f, 258.34f, joaat("v_ilev_fib_door1"), 1);
	func_991(6, 129f, -732f, 258f, joaat("v_ilev_fib_door1"), 1);
	func_991(7, 128.6526f, -731.6434f, 254.3504f, joaat("v_ilev_fib_door1"), 1);
	func_991(8, 128.3689f, -731.4404f, 233.9953f, joaat("v_ilev_fib_door1"), 1);
	func_991(9, 124.0606f, -727.2556f, 254.3019f, joaat("v_ilev_fib_door1"), 1);
	func_991(10, 118.67f, -736.01f, 254.26f, joaat("v_ilev_fib_door1"), 1);
	func_991(11, 116.73f, -735.3f, 254.17f, joaat("v_ilev_fib_door1"), 1);
	func_991(12, 155.3142f, -763.3002f, 250.3019f, joaat("v_ilev_fib_doorbrn"), 1);
	func_991(13, 152.8708f, -762.4113f, 250.3019f, joaat("v_ilev_fib_doorbrn"), 1);
	func_991(14, 141.5514f, -766.959f, 250.3019f, joaat("v_ilev_fib_doorbrn"), 1);
	func_991(15, 141.5514f, -766.959f, 246.3019f, joaat("v_ilev_fib_doorbrn"), 1);
	func_991(18, 2491.868f, -303.4783f, 91.9924f, joaat("prop_facgate_01"), 1);
	Local_5424[17 /*8*/] = 1986432421;
	Local_5424[17 /*8*/].f_7 = 1;
}

void func_991(int iParam0, struct<3> Param1, int iParam4, bool bParam5)//Position - 0x9A7EA
{
	char cVar0[24];
	
	if (iParam0 == -1)
	{
		return;
	}
	StringCopy(&cVar0, "AH3B_DOOR_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	Local_5424[iParam0 /*8*/] = MISC::GET_HASH_KEY(&cVar0);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_5424[iParam0 /*8*/]))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(Local_5424[iParam0 /*8*/], iParam4, Param1, 0, 1, 0);
	}
	if (bParam5)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_5424[iParam0 /*8*/], 0f, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iParam0 /*8*/], 6, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5424[iParam0 /*8*/], 4, 1, 0);
	}
}


void func_993(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x9A8AA
{
	uParam0->f_93 = fParam1;
	uParam0->f_94 = fParam2;
	uParam0->f_95 = fParam3;
	uParam0->f_96 = fParam4;
}

void func_994()//Position - 0x9A8CA
{
	if (iLocal_8040 == 0)
	{
		PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Rappelling");
		iLocal_8040 = 1;
	}
}



void func_997(int iParam0)//Position - 0x9A9A6
{
	struct<2> Var0;
	char cVar4[16];
	
	AUDIO::TRIGGER_MUSIC_EVENT("AH3B_DEAD");
	if (iParam0 == 28)
	{
		iLocal_628 = 0;
		func_378();
		GlobalFunc_10632();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (!iLocal_628)
	{
		GlobalFunc_4935();
		switch (iParam0)
		{
			case 0:
				StringCopy(&Var0, "A3B_FF", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "CMN_MDIED", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "CMN_FDIED", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "A3B_DIED", 16);
				StringCopy(&cVar4, GlobalFunc_5165(iLocal_4195), 16);
				break;
			
			case 4:
				StringCopy(&Var0, "A3B_DIED", 16);
				StringCopy(&cVar4, GlobalFunc_5165(iLocal_4196), 16);
				break;
			
			case 5:
				StringCopy(&Var0, "A3B_DIED", 16);
				StringCopy(&cVar4, GlobalFunc_5165(iLocal_4197), 16);
				break;
			
			case 6:
				StringCopy(&Var0, "A3B_DIED", 16);
				StringCopy(&cVar4, "A3B_PILOT", 16);
				break;
			
			case 7:
				StringCopy(&Var0, "CMN_LDIED", 16);
				break;
			
			case 17:
				StringCopy(&Var0, "CMN_MLEFT", 16);
				break;
			
			case 18:
				StringCopy(&Var0, "CMN_FLEFT", 16);
				break;
			
			case 19:
				StringCopy(&Var0, "A3B_ABAND1", 16);
				StringCopy(&cVar4, GlobalFunc_5165(iLocal_4196), 16);
				break;
			
			case 20:
				StringCopy(&Var0, "A3B_ABAND1", 16);
				StringCopy(&cVar4, "A3B_PILOT", 16);
				break;
			
			case 21:
				StringCopy(&Var0, "A3B_ABAND1", 16);
				StringCopy(&cVar4, GlobalFunc_5165(iLocal_4197), 16);
				break;
			
			case 13:
				StringCopy(&Var0, "A3B_FLATE", 16);
				StringCopy(&cVar4, "A3B_MIKE", 16);
				break;
			
			case 14:
				StringCopy(&Var0, "A3B_FLAND", 16);
				StringCopy(&cVar4, "A3B_MIKE", 16);
				break;
			
			case 15:
				StringCopy(&Var0, "A3B_FLAND", 16);
				StringCopy(&cVar4, "A3B_FRANK", 16);
				break;
			
			case 16:
				StringCopy(&Var0, "A3B_FLAND", 16);
				StringCopy(&cVar4, GlobalFunc_5165(iLocal_4196), 16);
				break;
			
			case 23:
				StringCopy(&Var0, "A3B_FDCOMP", 16);
				break;
			
			case 24:
				StringCopy(&Var0, "A3B_FDPHONE", 16);
				break;
			
			case 25:
				StringCopy(&Var0, "A3B_FAMMO", 16);
				break;
			
			case 26:
				StringCopy(&Var0, "A3B_HSPOT", 16);
				break;
			
			case 8:
				StringCopy(&Var0, "A3B_HDEST", 16);
				break;
			
			case 9:
				StringCopy(&Var0, "A3B_HSTUCK", 16);
				break;
			
			case 10:
				StringCopy(&Var0, "A3B_HTAKE", 16);
				break;
			
			case 11:
				StringCopy(&Var0, "A3B_VDEST", 16);
				break;
			
			case 12:
				StringCopy(&Var0, "A3B_VSTUCK", 16);
				break;
			
			case 22:
				StringCopy(&Var0, "A3B_ABAND2", 16);
				break;
			
			case 27:
				StringCopy(&Var0, "A3B_WNTDBASE", 16);
				break;
			
			default:
				StringCopy(&Var0, "A3B_DF", 16);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar4))
		{
			GlobalFunc_10835(&Var0);
		}
		else
		{
			func_998(&Var0, &cVar4);
		}
		iLocal_628 = 1;
	}
}

void func_998(char* sParam0, char* sParam1)//Position - 0x9AC75
{
	GlobalFunc_691(sParam0, sParam1);
	GlobalFunc_10616(0);
}














