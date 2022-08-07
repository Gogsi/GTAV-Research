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
	bool bLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82[3] = { 0, 0, 0 };
	int iLocal_86[3] = { 0, 0, 0 };
	int iLocal_90 = 0;
	var uLocal_91 = 15;
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
	var uLocal_143 = 15;
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
	var uLocal_195 = 15;
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
	var uLocal_247 = 15;
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
	struct<4> Local_299[2];
	struct<7> Local_308[6];
	int iLocal_351 = 0;
	char* sLocal_352 = NULL;
	char* sLocal_353 = NULL;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	struct<3> Local_360 = { 0, 0, 0 } ;
	struct<3> Local_363 = { 0, 0, 0 } ;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	float fLocal_369 = 0f;
	var uLocal_370 = 0;
	bool bLocal_371 = 0;
	bool bLocal_372 = 0;
	bool bLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	bool bLocal_386 = 0;
	bool bLocal_387 = 0;
	struct<22> Local_388[3];
	struct<6> Local_455 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_461[3];
	var uLocal_480 = 0;
	char[] cLocal_481[8] = 0;
	var uLocal_482 = 16;
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
	int iLocal_647[3] = { 0, 0, 0 };
	char* sLocal_651[3] = { NULL, NULL, NULL };
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	char cLocal_665[24] = "";
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	char cLocal_671[24] = "";
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	int iLocal_677 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	sLocal_353 = "FINPRA";
	Local_360 = { 0f, 0f, 0f };
	Local_363 = { 134.6909f, -1255.378f, 28.4875f };
	fLocal_369 = 0f;
	bLocal_372 = true;
	cLocal_481 = "BSPRAAU";
	iLocal_659 = -1;
	iLocal_661 = 1;
	iLocal_664 = -1;
	StringCopy(&cLocal_665, "NONE", 24);
	StringCopy(&cLocal_671, "NONE", 24);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_397();
		sLocal_352 = 0;
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
		GlobalFunc_10632();
		func_383();
	}
	func_382();
	func_368();
	uLocal_359 = PED::ADD_SCENARIO_BLOCKING_AREA(402.9022f, -1633.604f, 25.0472f, 315.6288f, -1558.814f, 38.7931f, 0, 1, 1, 1);
	GlobalFunc_585(27, 0);
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_5116(409.6954f, -1567.046f, 28.2916f, 138.7093f, 1, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_STS", 0);
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			func_357();
			func_354();
			func_349();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_79)
			{
				case 0:
					func_203();
					break;
				
				case 1:
					func_202();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_34();
					break;
				
				case 4:
					func_1();
					break;
			}
			if (iLocal_79 != 4)
			{
				if (iLocal_79 >= 0 && !bLocal_27)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1BE
{
	switch (iLocal_80)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_32();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_352))
			{
				GlobalFunc_10835(sLocal_352);
			}
			else
			{
				GlobalFunc_10616(0);
			}
			iLocal_80 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (GlobalFunc_764())
				{
					func_397();
				}
				else if (GlobalFunc_496(&uLocal_195, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					GlobalFunc_5129(408.3364f, -1567.429f, 28.2723f, 128.2512f);
					GlobalFunc_5166(471.5946f, -1412.737f, 28.1562f, 68.5531f);
				}
				MISC::CLEAR_AREA(372.9868f, -1623.531f, 28.2928f, 100f, 1, 0, 0, 0);
				func_2();
				func_383();
			}
			break;
	}
}

void func_2()//Position - 0x284
{
	int iVar0;
	
	VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_455);
	GlobalFunc_7089(&Local_455);
	GlobalFunc_130(&uLocal_357);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_881(&(Local_388[iVar0 /*22*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_7089(&(Local_461[iVar0 /*6*/]));
		iVar0++;
	}
}






























void func_32()//Position - 0x15BC
{
	GlobalFunc_146(&iLocal_355);
	GlobalFunc_146(&iLocal_356);
}


void func_34()//Position - 0x15F2
{
	var uVar0;
	
	func_89(&Local_455, &uVar0, &iLocal_81, &iLocal_356, &iLocal_355, Local_363, 0, 0, 1090519040);
	switch (iLocal_80)
	{
		case 0:
			if (func_69(iLocal_79, bLocal_27))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FHPRA_STOP"))
				{
					iLocal_384 = 0;
					iLocal_662 = 0;
					iLocal_80 = 1;
					AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_STOP");
				}
			}
			break;
		
		case 1:
			GlobalFunc_7251(&iLocal_355, Local_363, &iLocal_90, iLocal_81, &iLocal_354, &iLocal_383);
			if (iLocal_90 == 2)
			{
				if (GlobalFunc_496(&uLocal_195, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			if (func_56(Local_455, Local_363, &iLocal_355, iLocal_81, iLocal_90, &iLocal_662, &iLocal_384, &iLocal_378, &iLocal_379, &iLocal_354, 1090519040))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
				func_53();
				func_48();
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_455))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, -1);
				}
				else
				{
					GlobalFunc_5705(Local_455, Local_363, 126.0705f, 0, 1);
					func_35(1, 1, 1);
					iLocal_80 = 1;
				}
			}
			break;
	}
}

void func_35(int iParam0, int iParam1, int iParam2)//Position - 0x1717
{
	func_37(0, 0, iParam2, 1);
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


void func_37(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1787
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
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}











void func_48()//Position - 0x1ABE
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	GlobalFunc_5103(0, 0);
	func_383();
}





void func_53()//Position - 0x1C53
{
	GlobalFunc_571(1, 649);
	GlobalFunc_504(0, -1);
}



int func_56(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)//Position - 0x1D6E
{
	float fVar0;
	
	if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (GlobalFunc_4947(iParam0))
			{
				if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
				{
					GlobalFunc_5974(GlobalFunc_3012(GlobalFunc_785()), iParam11);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (GlobalFunc_663(GlobalFunc_3012(GlobalFunc_785()), 0, 0))
				{
					HUD::CLEAR_THIS_PRINT(GlobalFunc_3012(GlobalFunc_785()));
				}
				*iParam7 = 1;
				GlobalFunc_5973(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Param1, fVar0))
					{
						*iParam7 = 0;
						GlobalFunc_3020(1077936128, 1);
					}
				}
				GlobalFunc_146(iParam4);
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (GlobalFunc_663(GlobalFunc_3012(GlobalFunc_785()), 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			*iParam9 = MISC::GET_GAME_TIMER();
			*iParam10 = 1;
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (GlobalFunc_663(GlobalFunc_3011(GlobalFunc_785(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(GlobalFunc_3011(GlobalFunc_785(), 0));
			}
			if (!GlobalFunc_663(GlobalFunc_3010(GlobalFunc_785()), 0, 0))
			{
				GlobalFunc_164(GlobalFunc_3010(GlobalFunc_785()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}













int func_69(int iParam0, bool bParam1)//Position - 0x2254
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_27 = false;
				func_35(1, 1, 1);
			}
			else if (func_80(1, Local_360, 0))
			{
				if (((func_80(2, Local_455.f_1, Local_455.f_4) && func_80(4, Local_360, 0)) && func_80(3, Local_360, 0)) && func_80(5, Local_360, 0))
				{
					uLocal_370 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(400.8628f, -1609.739f, 28.29278f, 7.5f, 2f, 9.5f, GlobalFunc_723(229.3746f), 0, 7);
					if (HUD::GET_BLIP_FROM_ENTITY(Local_455) != 0)
					{
						iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_455);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						GlobalFunc_146(&iVar0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
					}
					GlobalFunc_7253(&iLocal_355, Local_455, 1);
					func_75();
					func_73();
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if (((func_80(2, Local_455.f_1, Local_455.f_4) && func_80(4, Local_360, 0)) && func_80(3, Local_360, 0)) && func_80(5, Local_360, 0))
				{
					GlobalFunc_7252(PLAYER::PLAYER_PED_ID(), 408.3364f, -1567.429f, 28.2723f, 128.2512f);
					func_70();
					MISC::CLEAR_AREA_OF_PEDS(369.0115f, -1609.116f, 28.2928f, 5f, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_388[0 /*22*/].f_1, 5f, 0);
					func_75();
					func_73();
					bLocal_27 = false;
					func_35(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if ((func_80(2, Local_455.f_1, Local_455.f_4) && func_80(4, Local_360, 0)) && func_80(3, Local_360, 0))
				{
					func_70();
					MISC::CLEAR_AREA_OF_PEDS(369.0115f, -1609.116f, 28.2928f, 5f, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_388[0 /*22*/].f_1, 5f, 0);
					func_75();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, -1);
					func_73();
					bLocal_27 = false;
					func_35(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_80(2, Local_363, Local_455.f_4))
				{
					func_70();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, -1);
					func_73();
					bLocal_27 = false;
					func_35(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_70()//Position - 0x24BD
{
	int iVar0;
	
	StringCopy(&cLocal_665, "NONE", 24);
	StringCopy(&cLocal_671, "NONE", 24);
	iLocal_383 = 0;
	iLocal_657 = 0;
	iLocal_384 = 0;
	iLocal_658 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	iLocal_90 = 0;
	func_71();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_388[iVar0 /*22*/].f_18 = 0;
		Local_388[iVar0 /*22*/].f_19 = 0;
		Local_388[iVar0 /*22*/].f_20 = 0;
		iLocal_647[iVar0] = 0;
		iVar0++;
	}
	iLocal_655 = 0;
	iLocal_656 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_82[iVar0] = 0;
		iLocal_86[iVar0] = 0;
		iVar0++;
	}
	iLocal_661 = 1;
	GlobalFunc_585(27, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[13 /*31*/], 4, 1, 0);
	iLocal_662 = 0;
}

void func_71()//Position - 0x2571
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= (15 - 1))
		{
			MISC::CLEAR_BIT(&(Local_388[iVar1 /*22*/].f_15), iVar0);
			iVar0++;
		}
		Local_388[iVar1 /*22*/].f_17 = 0;
		Local_388[iVar1 /*22*/].f_16 = 0;
		iVar1++;
	}
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_374 = 0;
	iLocal_659 = -1;
	iLocal_657 = 0;
	bLocal_373 = false;
	iLocal_660 = 0;
}


void func_73()//Position - 0x2605
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar2 = GlobalFunc_8315();
	if (iVar2 == 0)
	{
		iVar0 = 0;
		sVar1 = "MICHAEL";
	}
	else if (iVar2 == 1)
	{
		iVar0 = 1;
		sVar1 = "FRANKLIN";
	}
	else if (iVar2 == 2)
	{
		iVar0 = 2;
		sVar1 = "TREVOR";
	}
	GlobalFunc_1286(&uLocal_482, iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
	GlobalFunc_1286(&uLocal_482, 6, Local_388[0 /*22*/], "BSPRACopBreak1", 0, 1);
	GlobalFunc_1286(&uLocal_482, 7, Local_388[1 /*22*/], "BSPRACopBreak2", 0, 1);
	GlobalFunc_1286(&uLocal_482, 5, Local_388[2 /*22*/], "BSPRACopBreak3", 0, 1);
}


void func_75()//Position - 0x272E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_388[iVar0 /*22*/], false);
		if (!GlobalFunc_6964(Local_388[iVar0 /*22*/], -1098463898))
		{
			switch (iVar0)
			{
				case 0:
				case 1:
					TASK::TASK_START_SCENARIO_AT_POSITION(Local_388[iVar0 /*22*/], "WORLD_HUMAN_HANG_OUT_STREET", Local_388[iVar0 /*22*/].f_1, Local_388[iVar0 /*22*/].f_4, 0, 0, 1);
					break;
				
				case 2:
					TASK::TASK_USE_MOBILE_PHONE(Local_388[iVar0 /*22*/], 1, 1);
					break;
				}
		}
		WEAPON::GIVE_WEAPON_TO_PED(Local_388[iVar0 /*22*/], joaat("weapon_pistol"), -1, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_388[iVar0 /*22*/], uLocal_480);
		Local_388[iVar0 /*22*/].f_18 = 1;
		Local_388[iVar0 /*22*/].f_21 = 0;
		iVar0++;
	}
}





int func_80(int iParam0, struct<3> Param1, float fParam4)//Position - 0x2886
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_537(Param1, Local_360, 1056964608) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_353, 0);
			HUD::REQUEST_ADDITIONAL_TEXT(cLocal_481, 6);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_4947(Global_86864[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
				Local_455 = Global_86864[0];
				if (GlobalFunc_4947(Local_455))
				{
					if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_455))
					{
						VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_455);
					}
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_455, 2, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_455, 3, 0);
					GlobalFunc_534(Local_455, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_455, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_455, 1);
					return 1;
				}
			}
			else if (func_86(&Local_455, Local_455.f_5, Local_455.f_1, Local_455.f_4, 1))
			{
				if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_455))
				{
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_455);
				}
				GlobalFunc_534(Local_455, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_455, 1);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_455, 2, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_455, 3, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_455, 1);
				return 1;
			}
			break;
		
		case 3:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[iVar0]))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(Global_86864.f_9[iVar0], 1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[iVar0], 1, 1);
						Local_388[iVar0 /*22*/] = Global_86864.f_9[iVar0];
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[iVar0 /*22*/]))
						{
							PED::SET_PED_TARGET_LOSS_RESPONSE(Local_388[iVar0 /*22*/], 2);
							AUDIO::STOP_PED_SPEAKING(Local_388[iVar0 /*22*/], 1);
							func_85(iVar0);
							iVar1++;
						}
					}
					else
					{
						iVar1++;
					}
				}
				else if (func_84(&(Local_388[iVar0 /*22*/]), Local_388[iVar0 /*22*/].f_5, Local_388[iVar0 /*22*/].f_1, Local_388[iVar0 /*22*/].f_4, 0, 0, 0, 1))
				{
					func_85(iVar0);
					AUDIO::STOP_PED_SPEAKING(Local_388[iVar0 /*22*/], 1);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_388[iVar0 /*22*/], 2);
					StringCopy(&cVar2, "COP ", 16);
					StringIntConCat(&cVar2, iVar0, 16);
					PED::SET_PED_NAME_DEBUG(Local_388[iVar0 /*22*/], &cVar2);
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 3)
			{
				return 1;
			}
			break;
		
		case 4:
			iVar7 = 0;
			iVar8 = 0;
			iVar6 = 1;
			while (iVar6 <= 3)
			{
				if (GlobalFunc_4947(Global_86864[iVar6]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[iVar6], 1, 1);
					Local_461[iVar7 /*6*/] = Global_86864[iVar6];
					if (GlobalFunc_4947(Local_461[iVar7 /*6*/]))
					{
						iVar8++;
					}
				}
				else if (func_86(&(Local_461[iVar7 /*6*/]), Local_461[iVar7 /*6*/].f_5, Local_461[iVar7 /*6*/].f_1, Local_461[iVar7 /*6*/].f_4, 1))
				{
					iVar8++;
				}
				iVar7++;
				iVar6++;
			}
			if (iVar8 == 3)
			{
				return 1;
			}
			break;
		
		case 5:
			if (func_81(&uLocal_357, joaat("prop_box_guncase_03a"), 354.6938f, -1634.783f, 22.7849f, 299.1508f, 1))
			{
				if (GlobalFunc_4947(Local_455))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_357, Local_455, 0, 0f, -1.85f, 0.05f, ENTITY::GET_ENTITY_ROTATION(Local_455, 2), 0, 0, 0, 0, 2, 1);
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_455, uLocal_357))
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_81(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x2BF2
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (GlobalFunc_3015(iParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
				if (bParam6)
				{
					GlobalFunc_3014(iParam1, 1);
				}
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



int func_84(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x2CA9
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (GlobalFunc_3015(uParam1, "Loading", 0))
		{
			*uParam0 = PED::CREATE_PED(26, uParam1, Param2, uParam5, 1, 1);
			if (GlobalFunc_IsPedNotInjuredOrDead(*uParam0))
			{
				if (bParam7)
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
				}
				if (bParam8)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, bParam9);
				}
				if (bParam6)
				{
					GlobalFunc_3014(uParam1, 1);
				}
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

void func_85(int iParam0)//Position - 0x2D29
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[iParam0 /*22*/]))
	{
		if (iParam0 == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 9, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 10, 0, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 9, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_388[iParam0 /*22*/], 10, 0, 1, 0);
		}
	}
}

int func_86(int iParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x2E02
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (GlobalFunc_3015(uParam1, "Loading", 0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, uParam5, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				if (bParam6)
				{
					GlobalFunc_3014(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (GlobalFunc_4947(*iParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam0, uParam5);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}



void func_89(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)//Position - 0x2F0F
{
	if (GlobalFunc_4947(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
				{
					GlobalFunc_146(iParam3);
					if (GlobalFunc_663(GlobalFunc_3010(GlobalFunc_785()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(GlobalFunc_3010(GlobalFunc_785()));
					}
					if (*iParam0 == iParam8)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (GlobalFunc_7191(*iParam0) || GlobalFunc_7190(*iParam0))
				{
					GlobalFunc_146(iParam3);
					if (GlobalFunc_663(GlobalFunc_3010(GlobalFunc_785()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(GlobalFunc_3010(GlobalFunc_785()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (GlobalFunc_663(GlobalFunc_3011(GlobalFunc_785(), bParam9), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(GlobalFunc_3011(GlobalFunc_785(), bParam9));
					}
					if (GlobalFunc_785() != 33)
					{
						GlobalFunc_7255(iParam0);
					}
					else
					{
						func_90(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0) && !GlobalFunc_7191(*iParam0)) && !GlobalFunc_7190(*iParam0))
				{
					GlobalFunc_146(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						GlobalFunc_7253(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!GlobalFunc_7191(*iParam0) && !GlobalFunc_7190(*iParam0))
				{
					GlobalFunc_146(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						GlobalFunc_7253(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (GlobalFunc_785() != 33)
	{
		GlobalFunc_7255(iParam0);
	}
	else
	{
		func_90(iParam0, uParam1);
	}
}

void func_90(var uParam0, var uParam1)//Position - 0x30C3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_27)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (iVar0 != *uParam0)
			{
				if (GlobalFunc_4947(iVar0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						GlobalFunc_131(uParam0);
						*uParam0 = iVar0;
						GlobalFunc_534(*uParam0, 1);
						GlobalFunc_534(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
						if (GlobalFunc_115(uVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								GlobalFunc_131(uParam0);
								*uParam0 = iVar0;
								GlobalFunc_534(*uParam0, 1);
								GlobalFunc_534(*uParam1, 3);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}






void func_96()//Position - 0x338C
{
	var uVar0;
	
	func_89(&Local_455, &uVar0, &iLocal_81, &iLocal_356, &iLocal_355, Local_363, 0, 0, 1090519040);
	func_116();
	func_104();
	switch (iLocal_80)
	{
		case 0:
			if (func_69(iLocal_79, bLocal_27))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FHPRA_VAN"))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_81 == 1 || iLocal_81 == 2)
						{
							GlobalFunc_5105();
							if (!GlobalFunc_111())
							{
								GlobalFunc_5974("PR_TAKBACK", &iLocal_354);
							}
							RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_VAN");
							GlobalFunc_5973(&iLocal_355, Local_363, 1);
						}
					}
					iLocal_663 = 0;
					iLocal_80 = 1;
				}
			}
			break;
		
		case 1:
			GlobalFunc_7251(&iLocal_355, Local_363, &iLocal_90, iLocal_81, &iLocal_354, &iLocal_383);
			if (iLocal_90 == 2)
			{
				if (GlobalFunc_496(&uLocal_195, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
				if (!iLocal_663)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_A_01", 0f);
					iLocal_663 = 1;
				}
			}
			if (GlobalFunc_7256(Local_455, Local_363, &iLocal_355, iLocal_90, iLocal_81, &iLocal_354, &iLocal_384, 0, 0, 1086324736))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
				iLocal_80 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_355);
			GlobalFunc_3020(1077936128, 1);
			func_97(0);
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_455))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, -1);
				}
				else
				{
					GlobalFunc_5705(Local_455, Local_363, 126.0705f, 0, 1);
					func_35(1, 1, 1);
					iLocal_80 = 1;
				}
			}
			break;
	}
}

void func_97(bool bParam0)//Position - 0x3527
{
	GlobalFunc_3009(iLocal_79);
	iLocal_351 = iLocal_79;
	if (!bParam0)
	{
		iLocal_79 = iLocal_351 + 1;
	}
	else if (iLocal_351 > 0)
	{
		iLocal_79 = (iLocal_351 - 1);
	}
	iLocal_354 = 0;
	iLocal_80 = 0;
}







void func_104()//Position - 0x36D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			switch (iLocal_86[iVar0])
			{
				case 0:
					if (!GlobalFunc_9814(iVar1))
					{
						if (GlobalFunc_9813(iVar1, 0))
						{
							if (func_111(iVar0, iVar1) || func_109(iVar0, iVar1))
							{
								if (GlobalFunc_9812(iVar1, 0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
									TASK::CLEAR_PED_TASKS(iVar1);
								}
							}
						}
					}
					break;
				
				case 1:
					if (func_107(iVar0, iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, 1))
					{
						iLocal_86[iVar0] = 0;
						GlobalFunc_9811(iVar1);
					}
					break;
				
				case 2:
					if (func_105(iVar0, iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, 1))
					{
						iLocal_86[iVar0] = 0;
						GlobalFunc_9811(iVar1);
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_105(int iParam0, int iParam1)//Position - 0x37B9
{
	switch (iLocal_82[iParam0])
	{
		case 0:
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, 0), Local_363, 4, 20f, 786469, 3.5f, 5f, 1);
			iLocal_82[iParam0] = 3;
			break;
		
		case 3:
			if (!func_109(iParam0, iParam1) || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_363, 2f))
			{
				iLocal_82[iParam0] = 4;
			}
			break;
		
		case 4:
			iLocal_82[iParam0] = 0;
			return 1;
			break;
	}
	return 0;
}


int func_107(int iParam0, int iParam1)//Position - 0x389C
{
	float fVar0;
	
	switch (iLocal_82[iParam0])
	{
		case 0:
			if (!MISC::IS_POSITION_OCCUPIED(Local_299[iLocal_664 /*4*/], 1.5f, 0, 0, 1, 0, 0, iParam1, 0))
			{
				if (GlobalFunc_775(iParam1, Local_299[iLocal_664 /*4*/], 5f))
				{
					fVar0 = 1f;
				}
				else
				{
					fVar0 = 2f;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Local_299[iLocal_664 /*4*/], fVar0, 20000, 0.25f, 0, Local_299[iLocal_664 /*4*/].f_3);
				iLocal_82[iParam0] = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_6964(iParam1, 713668775))
			{
				TASK::TASK_CLIMB(iParam1, 0);
				iLocal_82[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!GlobalFunc_6964(iParam1, -1207763510))
			{
				iLocal_82[iParam0] = 4;
			}
			break;
		
		case 4:
			iLocal_82[iParam0] = 0;
			return 1;
			break;
	}
	return 0;
}


int func_109(int iParam0, int iParam1)//Position - 0x3A00
{
	if (!GlobalFunc_236())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_455) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_455, 0)) && !ENTITY::IS_ENTITY_AT_COORD(Local_455, Local_363, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, Local_455, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_455, -1) == iParam1)
				{
					iLocal_86[iParam0] = 2;
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_111(int iParam0, int iParam1)//Position - 0x3AB0
{
	if (!GlobalFunc_236())
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, 344.9844f, -1604.011f, 28.29278f, 339.7212f, -1599.484f, 31.29056f, 3.63f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 345.1542f, -1604.173f, 28.29278f, 360.8858f, -1617.23f, 31.29278f, 3.38f, 0, 1, 0))
		{
			iLocal_664 = 0;
			iLocal_86[iParam0] = 1;
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, 345.1542f, -1604.173f, 28.29278f, 360.8858f, -1617.23f, 31.29278f, 3.63f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 344.9844f, -1604.011f, 28.29278f, 339.7212f, -1599.484f, 31.29056f, 3.38f, 0, 1, 0))
		{
			iLocal_664 = 1;
			iLocal_86[iParam0] = 1;
			return 1;
		}
	}
	return 0;
}





void func_116()//Position - 0x3CB7
{
	int iVar0;
	
	if (!bLocal_27)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 1)
		{
			bLocal_373 = true;
		}
		else
		{
			PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 38);
			PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 30);
			bLocal_373 = false;
		}
		if (iLocal_79 == 2)
		{
			if (!iLocal_385)
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_455.f_1, 180f))
				{
					iVar0 = 0;
					while (iVar0 <= 2)
					{
						func_201(&(Local_388[iVar0 /*22*/]), 1, 0, 1);
						iVar0++;
					}
					iLocal_385 = 1;
				}
			}
		}
		func_190();
		func_117();
	}
}

void func_117()//Position - 0x3D41
{
	int iVar0;
	
	iVar0 = 2;
	if (Local_388[iVar0 /*22*/].f_18 != 3 && Local_388[iVar0 /*22*/].f_20 != 7)
	{
		GlobalFunc_661(Local_388[iVar0 /*22*/], &(Local_388[iVar0 /*22*/].f_6), -1, 0, 0, 0, -1082130432, 0);
	}
	else
	{
		func_188(&(Local_388[iVar0 /*22*/].f_6));
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[iVar0 /*22*/]))
	{
		func_145(iVar0);
		switch (Local_388[iVar0 /*22*/].f_18)
		{
			case 0:
				break;
			
			case 1:
				func_144(iVar0);
				break;
			
			case 3:
				func_118(iVar0);
				break;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_388[iVar0 /*22*/]) && !PED::IS_PED_INJURED(Local_388[iVar0 /*22*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_388[iVar0 /*22*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_388[iVar0 /*22*/]);
				if (((WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_STEALTH_KILLED(Local_388[iVar0 /*22*/])) || PED::WAS_PED_KILLED_BY_STEALTH(Local_388[iVar0 /*22*/])) || PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_388[iVar0 /*22*/]))
				{
					if (!bLocal_373)
					{
						PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 41);
						PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 33);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
			}
			Local_388[iVar0 /*22*/].f_18 = 1;
			Local_388[iVar0 /*22*/].f_21 = 0;
		}
		GlobalFunc_146(&(Local_388[iVar0 /*22*/].f_6));
		func_201(&(Local_388[iVar0 /*22*/]), 1, 0, 1);
	}
}

void func_118(int iParam0)//Position - 0x3EBD
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	switch (Local_388[iParam0 /*22*/].f_20)
	{
		case 1:
			if (func_142(iParam0) && GlobalFunc_775(Local_388[iParam0 /*22*/], Local_388[iParam0 /*22*/].f_1, 3f))
			{
				if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500)
				{
					if (!GlobalFunc_6964(Local_388[iParam0 /*22*/], -875674219))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_388[iParam0 /*22*/]);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 0);
					}
					Local_388[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				func_132(iParam0);
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000)
			{
				if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 2))
				{
					func_125(iParam0);
					func_123();
					return;
				}
				else if (func_122(iParam0, 15))
				{
					func_132(iParam0);
					return;
				}
				else
				{
					Local_388[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 8))
				{
					Local_388[iParam0 /*22*/].f_17 = 1;
				}
				else
				{
					iLocal_377 = 0;
					func_132(iParam0);
				}
			}
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 8))
				{
					if (iLocal_377 >= 3)
					{
						func_125(iParam0);
						func_123();
						return;
					}
					else if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 9) && !bLocal_371)
					{
						func_125(iParam0);
						func_123();
						return;
					}
					else
					{
						Local_388[iParam0 /*22*/].f_17 = 1;
					}
				}
				else
				{
					iLocal_377 = 0;
					func_132(iParam0);
				}
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				iVar0 = 350;
			}
			else
			{
				iVar0 = 750;
			}
			if ((MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > iVar0)
			{
				if (!PED::IS_PED_BEING_STUNNED(Local_388[iParam0 /*22*/], 0) && !TASK::IS_PED_IN_WRITHE(Local_388[iParam0 /*22*/]))
				{
					Local_388[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
					func_125(iParam0);
				}
			}
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
			{
				func_123();
				return;
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > 350)
			{
				if (!bLocal_373 && func_122(iParam0, 15))
				{
					func_71();
					func_132(iParam0);
					HUD::_0xC594B315EDF2D4AF(Local_388[iParam0 /*22*/]);
					return;
				}
				else
				{
					if (iLocal_659 != -1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_659) > 12000)
						{
							func_121(-1);
						}
						else if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							func_121(2);
						}
						else if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
						{
							if (ENTITY::IS_ENTITY_A_PED(iVar1))
							{
								iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
								if ((iVar2 == Local_388[0 /*22*/] || iVar2 == Local_388[1 /*22*/]) || iVar2 == Local_388[2 /*22*/])
								{
									func_121(2);
								}
							}
						}
					}
					if (Local_388[iParam0 /*22*/].f_16)
					{
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
					}
					if ((GlobalFunc_6964(Local_388[iParam0 /*22*/], -2128726980) || GlobalFunc_6964(Local_388[iParam0 /*22*/], -982327190)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						if (!GlobalFunc_6964(Local_388[iParam0 /*22*/], 1392476864))
						{
							TASK::TASK_ARREST_PED(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (!iLocal_657)
			{
				if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 1) && MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 14))
				{
					if (iParam0 == 0)
					{
						sVar3 = "PRA_COPSHT1";
					}
					else
					{
						sVar3 = "PRA_COPSHT2";
					}
					GlobalFunc_4935();
					GlobalFunc_5157(&uLocal_482, cLocal_481, sVar3, 7, 0, 0);
					iLocal_657 = 1;
				}
			}
			break;
	}
}



void func_121(int iParam0)//Position - 0x436F
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	iLocal_659 = -1;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[0 /*22*/]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_388[0 /*22*/], false);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[1 /*22*/]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_388[1 /*22*/], false);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[2 /*22*/]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_388[2 /*22*/], false);
	}
	if (iParam0 != -1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
}

int func_122(int iParam0, int iParam1)//Position - 0x43E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 != iParam1)
		{
			if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (bLocal_373)
	{
		return 0;
	}
	return 1;
}

void func_123()//Position - 0x442A
{
	int iVar0;
	
	func_124();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_388[iVar0 /*22*/].f_20 != 6 && Local_388[iVar0 /*22*/].f_20 != 7)
		{
			func_188(&(Local_388[iVar0 /*22*/].f_6));
			Local_388[iVar0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
			Local_388[iVar0 /*22*/].f_18 = 3;
			Local_388[iVar0 /*22*/].f_20 = 6;
		}
		iVar0++;
	}
}

void func_124()//Position - 0x4494
{
	if (!iLocal_374)
	{
		iLocal_659 = MISC::GET_GAME_TIMER();
		if (!iLocal_658)
		{
			GlobalFunc_5105();
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		iLocal_374 = 1;
	}
}

void func_125(int iParam0)//Position - 0x44CC
{
	if (Local_388[iParam0 /*22*/].f_20 != 7)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[iParam0 /*22*/]))
		{
			if (GlobalFunc_6964(Local_388[iParam0 /*22*/], 242628503) || PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_388[iParam0 /*22*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_388[iParam0 /*22*/]);
			}
			else if (GlobalFunc_6964(Local_388[iParam0 /*22*/], -1098463898) || GlobalFunc_6964(Local_388[iParam0 /*22*/], 993674639))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_388[iParam0 /*22*/]);
			}
			PED::SET_PED_AS_COP(Local_388[iParam0 /*22*/], 1);
			TASK::TASK_ARREST_PED(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID());
			WEAPON::GIVE_WEAPON_TO_PED(Local_388[iParam0 /*22*/], joaat("weapon_pistol"), -1, 0, 1);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_388[iParam0 /*22*/]);
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			func_126(iParam0);
			Local_388[iParam0 /*22*/].f_18 = 3;
			Local_388[iParam0 /*22*/].f_20 = 7;
		}
	}
}

void func_126(int iParam0)//Position - 0x45B0
{
	char* sVar0;
	
	if ((iLocal_79 != 2 && !iLocal_658) && !ENTITY::IS_ENTITY_DEAD(Local_388[iParam0 /*22*/]))
	{
		if (func_131(iParam0) && func_129(Local_388[iParam0 /*22*/], 30f))
		{
			if (iParam0 == 0)
			{
				sVar0 = "S_M_Y_COP_01_WHITE_MINI_03";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "S_M_Y_COP_01_BLACK_MINI_04";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "PRA_COPSARR3";
			}
			if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 3))
			{
				iLocal_658 = 1;
			}
			else if (!func_122(iParam0, 15) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 362.6359f, -1581.256f, 31.54774f, 358.1074f, -1586.615f, 34.29774f, 2f, 0, 1, 0))
			{
				GlobalFunc_4956();
				iLocal_655 = 0;
				if (iParam0 == 2)
				{
					GlobalFunc_5157(&uLocal_482, cLocal_481, sVar0, 7, 0, 0);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_388[iParam0 /*22*/], "ARREST_PLAYER", sVar0, "SPEECH_PARAMS_FORCE", 0);
				}
				iLocal_658 = 1;
			}
		}
	}
}



int func_129(int iParam0, float fParam1)//Position - 0x46E0
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iParam0, 0) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}


bool func_131(int iParam0)//Position - 0x477A
{
	return Local_388[iParam0 /*22*/].f_18 > 1;
}

void func_132(int iParam0)//Position - 0x478D
{
	var uVar0;
	
	if (Local_388[iParam0 /*22*/].f_18 != 1 && !GlobalFunc_6964(Local_388[iParam0 /*22*/], 242628503))
	{
		TASK::CLEAR_PED_TASKS(Local_388[iParam0 /*22*/]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_388[iParam0 /*22*/], uLocal_480);
		if (iParam0 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			if (!GlobalFunc_775(Local_388[iParam0 /*22*/], Local_388[iParam0 /*22*/].f_1, 3f))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_388[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_388[iParam0 /*22*/].f_4);
			}
			else
			{
				TASK::TASK_ACHIEVE_HEADING(0, Local_388[iParam0 /*22*/].f_4, 0);
			}
			if (iLocal_647[2] && MISC::IS_STRING_NULL_OR_EMPTY("sResumeRoot"))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			}
			else
			{
				TASK::TASK_USE_MOBILE_PHONE(0, 1, 1);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_388[iParam0 /*22*/], uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					if (!GlobalFunc_775(Local_388[iParam0 /*22*/], Local_388[iParam0 /*22*/].f_1, 3f))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_388[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_388[iParam0 /*22*/].f_4);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(0, Local_388[iParam0 /*22*/].f_4, 0);
					}
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_388[iParam0 /*22*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					break;
				
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					if (!GlobalFunc_775(Local_388[iParam0 /*22*/], Local_388[iParam0 /*22*/].f_1, 3f))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_388[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_388[iParam0 /*22*/].f_4);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(0, Local_388[iParam0 /*22*/].f_4, 0);
					}
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_388[iParam0 /*22*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					break;
				}
		}
		func_133();
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_388[iParam0 /*22*/], false);
		Local_388[iParam0 /*22*/].f_18 = 1;
		Local_388[iParam0 /*22*/].f_21 = 0;
		Local_388[iParam0 /*22*/].f_19 = 0;
		Local_388[iParam0 /*22*/].f_20 = 0;
	}
}

void func_133()//Position - 0x49C1
{
	if (GlobalFunc_496(&uLocal_91, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		if (!GlobalFunc_111())
		{
			if ((!MISC::ARE_STRINGS_EQUAL(&cLocal_665, "NONE") && !MISC::ARE_STRINGS_EQUAL(&cLocal_671, "NONE")) && !GlobalFunc_663("PR_TAKBACK", 0, 0))
			{
				if (GlobalFunc_10626(&uLocal_482, cLocal_481, &cLocal_665, &cLocal_671, 7, 0, 0))
				{
					StringCopy(&cLocal_665, "NONE", 24);
					StringCopy(&cLocal_671, "NONE", 24);
					iLocal_655 = 1;
				}
			}
		}
	}
}









int func_142(int iParam0)//Position - 0x4FEC
{
	if (Local_388[func_143(iParam0) /*22*/].f_18 > 1 && Local_388[func_143(iParam0) /*22*/].f_20 != 1)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x501F
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_144(int iParam0)//Position - 0x503B
{
	switch (Local_388[iParam0 /*22*/].f_21)
	{
		case 0:
			if (GlobalFunc_111())
			{
				if (PED::IS_PED_BEING_STEALTH_KILLED(Local_388[iParam0 /*22*/]))
				{
					GlobalFunc_4956();
				}
			}
			else if (iParam0 == 2)
			{
				if (iLocal_647[2] && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_388[iParam0 /*22*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_388[iParam0 /*22*/]);
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_388[iParam0 /*22*/], "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
			}
			break;
		
		case 1:
			break;
	}
}

void func_145(int iParam0)//Position - 0x50BB
{
	func_167(iParam0);
	if (!func_166(iParam0))
	{
		if (func_147(Local_388[iParam0 /*22*/], 1, 50f, 140f, 0, 1, 1, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_388[iParam0 /*22*/], 1), 100f))
		{
			if ((!PED::IS_PED_BEING_STEALTH_KILLED(Local_388[iParam0 /*22*/]) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_388[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_388[iParam0 /*22*/]))
			{
				func_123();
			}
			else if (!bLocal_373)
			{
				PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 41);
				PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 33);
				PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 12);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	else if (GlobalFunc_155(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 5f))
	{
		if (!bLocal_373)
		{
			PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 41);
			PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 33);
		}
	}
}


int func_147(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x51CD
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
		else if (func_148(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, float fParam1)//Position - 0x5288
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
				if (func_149(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_149(int iParam0, float fParam1)//Position - 0x52FE
{
	return func_150(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_150(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5316
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_158(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_153();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_151(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_151(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0x53D7
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!GlobalFunc_115(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { GlobalFunc_167(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_78)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}


int func_153()//Position - 0x55C8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_158(int iParam0, int iParam1)//Position - 0x571E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}








int func_166(int iParam0)//Position - 0x5B3E
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388[iParam0 /*22*/], 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)//Position - 0x5B7D
{
	func_187(iParam0);
	func_183(iParam0);
	func_180(iParam0);
	func_177(iParam0);
	if (Local_388[iParam0 /*22*/].f_20 != 7 || Local_388[iParam0 /*22*/].f_20 != 6)
	{
		if (((!bLocal_371 && !PED::IS_PED_BEING_STEALTH_KILLED(Local_388[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_388[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_388[iParam0 /*22*/]))
		{
			func_168(iParam0);
		}
	}
}

void func_168(int iParam0)//Position - 0x5BFC
{
	int iVar0;
	
	if ((((!func_142(iParam0) && Local_388[iParam0 /*22*/].f_20 != 7) && Local_388[iParam0 /*22*/].f_20 != 6) && !bLocal_373) && Local_388[iParam0 /*22*/].f_17)
	{
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, iVar0))
			{
				func_169(iParam0, iVar0);
				Local_388[iParam0 /*22*/].f_17 = 0;
				return;
			}
			iVar0++;
		}
	}
}

void func_169(int iParam0, int iParam1)//Position - 0x5C7F
{
	switch (iParam1)
	{
		case 0:
			func_125(iParam0);
			func_123();
			break;
		
		case 2:
			func_175(iParam0, 6, 0);
			break;
		
		case 3:
			func_125(iParam0);
			func_123();
			break;
		
		case 4:
			func_125(iParam0);
			func_123();
			break;
		
		case 1:
			func_125(iParam0);
			func_123();
			break;
		
		case 6:
			func_175(iParam0, 2, 0);
			break;
		
		case 5:
			func_175(iParam0, 5, 0);
			break;
		
		case 8:
			if (iLocal_377 < 2)
			{
				func_170(iParam0, 3, 0);
			}
			else
			{
				func_125(iParam0);
				func_123();
			}
			break;
		
		case 7:
			func_170(iParam0, 4, 0);
			break;
		
		case 10:
			func_175(iParam0, 1, 0);
			break;
		
		case 13:
			func_175(iParam0, 4, 0);
			break;
		
		case 11:
			func_175(iParam0, 7, 0);
			break;
	}
}

void func_170(int iParam0, int iParam1, int iParam2)//Position - 0x5D76
{
	char* sVar0;
	char* sVar1;
	
	if (!func_142(iParam0) || iParam2)
	{
		if (iParam1 == 2)
		{
			if (Local_388[func_143(iParam0) /*22*/].f_20 != 2)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPGUNW1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPGUNW2";
				}
				func_171(iParam0, sVar0, 0, 0);
				iLocal_376++;
			}
		}
		else if (iParam1 == 3)
		{
			if (Local_388[func_143(iParam0) /*22*/].f_20 != 3 || (MISC::GET_GAME_TIMER() - iLocal_375) > 7500)
			{
				if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 9))
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_CWCAR1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_CWCAR2";
					}
				}
				else if (iParam0 == 0)
				{
					sVar0 = "PRA_CCWCAR1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CCWCAR2";
				}
				if (iLocal_377 < 2)
				{
					func_171(iParam0, sVar0, 1, 0);
				}
				iLocal_377++;
			}
		}
		else if (iParam1 == 4)
		{
			if (Local_388[func_143(iParam0) /*22*/].f_20 != 4 || (MISC::GET_GAME_TIMER() - iLocal_375) > 7500)
			{
				if (!bLocal_372)
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_CWCARNP1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_CWCARNP2";
					}
				}
				else if (!bLocal_371)
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_CCWCNP1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_CCWCNP2";
					}
				}
				else if (iParam0 == 0)
				{
					sVar0 = "PRA_CWCARNP1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CWCARNP2";
				}
				if (iLocal_377 < 2)
				{
					func_171(iParam0, sVar0, 1, 0);
				}
				iLocal_377++;
			}
		}
		else if (iParam1 == 5)
		{
			if (Local_388[func_143(iParam0) /*22*/].f_20 != 5)
			{
				if (iParam0 == 0)
				{
					sVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_388[iParam0 /*22*/], "CHALLENGE_THREATEN", sVar1, "SPEECH_PARAMS_FORCE", 0);
				}
				else if (iParam0 == 1)
				{
					sVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_388[iParam0 /*22*/], "CHALLENGE_THREATEN", sVar1, "SPEECH_PARAMS_FORCE", 0);
				}
				else if (iParam0 == 2)
				{
					sVar0 = "PRA_COPSARR3";
					func_171(iParam0, sVar0, 0, 0);
				}
			}
		}
		if (!GlobalFunc_6964(Local_388[iParam0 /*22*/], -875674219))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_388[iParam0 /*22*/]);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 0);
		}
		Local_388[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
		Local_388[func_143(iParam0) /*22*/].f_14 = MISC::GET_GAME_TIMER();
		Local_388[func_143(iParam0) /*22*/].f_18 = 3;
		Local_388[func_143(iParam0) /*22*/].f_20 = 1;
		Local_388[iParam0 /*22*/].f_18 = 3;
		Local_388[iParam0 /*22*/].f_20 = iParam1;
	}
}

void func_171(int iParam0, char* sParam1, bool bParam2, bool bParam3)//Position - 0x6009
{
	struct<6> Var0;
	
	if (bParam3)
	{
		if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 12))
		{
			return;
		}
	}
	Var0 = { GlobalFunc_560() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		GlobalFunc_5157(&uLocal_482, cLocal_481, sParam1, 7, 0, 0);
		if (bParam2)
		{
			iLocal_375 = MISC::GET_GAME_TIMER();
		}
		return;
	}
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && !GlobalFunc_663("PR_TAKBACK", 0, 0)) && !GlobalFunc_663("PR_GOVEH", 0, 0))
	{
		func_172();
		GlobalFunc_5157(&uLocal_482, cLocal_481, sParam1, 7, 0, 0);
		if (bParam2)
		{
			iLocal_375 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_172()//Position - 0x60B0
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PRA_COPTLK1") || MISC::ARE_STRINGS_EQUAL(&Var0, "PRA_COPTLK2"))
		{
			cLocal_665 = { GlobalFunc_560() };
			cLocal_671 = { GlobalFunc_2209() };
		}
		if (iLocal_655)
		{
			GlobalFunc_4956();
			iLocal_655 = 0;
		}
		else
		{
			GlobalFunc_5105();
		}
	}
}



void func_175(int iParam0, int iParam1, int iParam2)//Position - 0x6175
{
	char* sVar0;
	char* sVar1;
	
	if (!func_142(iParam0) || iParam2)
	{
		if (iParam1 == 1)
		{
			if (Local_388[iParam0 /*22*/].f_19 != 1 || (MISC::GET_GAME_TIMER() - iLocal_375) > 7500)
			{
				if (!bLocal_371)
				{
					if (iParam0 == 0)
					{
						sVar0 = "PRA_COPPRT1";
					}
					else if (iParam0 == 1)
					{
						sVar0 = "PRA_COPPRT2";
					}
				}
				else if (iParam0 == 0)
				{
					sVar0 = "PRA_CPLYCOP1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CPLYCOP2";
				}
				else if (iParam0 == 2)
				{
					sVar0 = "PRA_CPLYCOP3";
				}
				func_171(iParam0, sVar0, 1, 1);
				func_176(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 2)
		{
			if (Local_388[iParam0 /*22*/].f_19 != 2 || (MISC::GET_GAME_TIMER() - iLocal_375) > 7500)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPPLY1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPPLY2";
				}
				func_171(iParam0, sVar0, 1, 1);
				func_176(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 4)
		{
			if (Local_388[iParam0 /*22*/].f_19 != 4 || (MISC::GET_GAME_TIMER() - iLocal_375) > 7500)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPST1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPST2";
				}
				func_171(iParam0, sVar0, 1, 0);
				func_176(iParam0, iParam1, 0);
			}
		}
		else if (iParam1 == 6)
		{
			if (Local_388[iParam0 /*22*/].f_19 != 6)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_COPGUNR1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_COPGUNR2";
				}
				func_171(iParam0, sVar0, 0, 1);
				func_176(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 5)
		{
			if (Local_388[iParam0 /*22*/].f_19 != 5)
			{
				if (iParam0 == 0)
				{
					sVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
				}
				else if (iParam0 == 1)
				{
					sVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
				}
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_388[iParam0 /*22*/], "BUMP", sVar1, "SPEECH_PARAMS_FORCE", 0);
				func_176(iParam0, iParam1, 0);
			}
		}
		else if (iParam1 == 7)
		{
			if (Local_388[iParam0 /*22*/].f_19 != 7)
			{
				if (iParam0 == 0)
				{
					sVar0 = "PRA_CHP1";
				}
				else if (iParam0 == 1)
				{
					sVar0 = "PRA_CHP2";
				}
				else if (iParam0 == 2)
				{
					sVar0 = "PRA_CHP3";
				}
				func_171(iParam0, sVar0, 1, 0);
				func_176(iParam0, iParam1, 0);
			}
		}
		if (bLocal_371)
		{
			if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 12))
			{
				MISC::SET_BIT(&(Local_388[iParam0 /*22*/].f_15), 12);
			}
		}
	}
}

void func_176(int iParam0, int iParam1, bool bParam2)//Position - 0x63D4
{
	if (bParam2)
	{
		if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 12))
		{
			return;
		}
	}
	if (!GlobalFunc_6964(Local_388[iParam0 /*22*/], -875674219))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_388[iParam0 /*22*/]);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 0);
	}
	Local_388[iParam0 /*22*/].f_14 = MISC::GET_GAME_TIMER();
	Local_388[func_143(iParam0) /*22*/].f_14 = MISC::GET_GAME_TIMER();
	Local_388[func_143(iParam0) /*22*/].f_18 = 3;
	Local_388[func_143(iParam0) /*22*/].f_20 = 1;
	Local_388[iParam0 /*22*/].f_19 = iParam1;
	Local_388[iParam0 /*22*/].f_18 = 2;
}

void func_177(int iParam0)//Position - 0x6474
{
	float fVar0;
	
	if ((!func_142(iParam0) && Local_388[iParam0 /*22*/].f_20 != 6) && Local_388[iParam0 /*22*/].f_20 != 7)
	{
		fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
		if (iParam0 == 0 || iParam0 == 1)
		{
			if (!iLocal_381)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 340.0758f, -1598.255f, 28.29322f, 346.4939f, -1603.684f, 38.29278f, 6.22f, 0, 1, 0))
				{
					if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_381 = 1;
						iLocal_380 = MISC::GET_GAME_TIMER();
						return;
					}
					else if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 11))
					{
						if ((((fVar0 > 16f && !Local_388[iParam0 /*22*/].f_16) && !MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 10)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 344.4482f, -1603.473f, 28.29278f, 345.6222f, -1604.478f, 32.29278f, 3.46f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_388[iParam0 /*22*/], Local_308[1 /*7*/], Local_308[1 /*7*/].f_3, Local_308[1 /*7*/].f_6, 0, 1, 0))
						{
							func_179(iParam0, 11);
							return;
						}
					}
				}
				if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308[1 /*7*/], Local_308[1 /*7*/].f_3, Local_308[1 /*7*/].f_6, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_388[iParam0 /*22*/], Local_308[1 /*7*/], Local_308[1 /*7*/].f_3, Local_308[1 /*7*/].f_6, 0, 1, 0)) && !MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 10)) && !MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 11))
				{
					if ((fVar0 > 12f && !Local_388[iParam0 /*22*/].f_16) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 344.4482f, -1603.473f, 28.29278f, 345.6222f, -1604.478f, 32.29278f, 3.46f, 0, 1, 0))
					{
						func_179(iParam0, 11);
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_380) > 4000)
			{
				iLocal_381 = 0;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308[5 /*7*/], Local_308[5 /*7*/].f_3, Local_308[5 /*7*/].f_6, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_388[iParam0 /*22*/], Local_308[5 /*7*/], Local_308[5 /*7*/].f_3, Local_308[5 /*7*/].f_6, 0, 1, 0))
		{
			if (fVar0 > 10f && !Local_388[iParam0 /*22*/].f_16)
			{
				func_179(iParam0, 11);
			}
			else
			{
				func_178(iParam0, 11);
			}
		}
	}
}

void func_178(int iParam0, int iParam1)//Position - 0x6740
{
	if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, iParam1))
	{
		MISC::CLEAR_BIT(&(Local_388[iParam0 /*22*/].f_15), iParam1);
		Local_388[iParam0 /*22*/].f_17 = 1;
	}
}

void func_179(int iParam0, int iParam1)//Position - 0x6773
{
	if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, iParam1))
	{
		MISC::SET_BIT(&(Local_388[iParam0 /*22*/].f_15), iParam1);
		Local_388[iParam0 /*22*/].f_17 = 1;
	}
}

void func_180(int iParam0)//Position - 0x67A7
{
	bool bVar0;
	
	if ((Local_388[iParam0 /*22*/].f_19 != 5 && Local_388[iParam0 /*22*/].f_20 != 6) && Local_388[iParam0 /*22*/].f_20 != 7)
	{
		bVar0 = false;
		if (((GlobalFunc_155(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 5f) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_388[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_388[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_388[iParam0 /*22*/]))
		{
			if (func_182(iParam0, &bVar0) || func_181(iParam0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (bVar0)
					{
						func_179(iParam0, 3);
					}
					else if (iParam0 == 2)
					{
						func_179(iParam0, 3);
					}
					else
					{
						func_179(iParam0, 5);
					}
				}
				else
				{
					func_179(iParam0, 3);
				}
			}
		}
	}
	else if (!GlobalFunc_155(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 5.5f))
	{
		func_178(iParam0, 5);
		func_178(iParam0, 3);
	}
}

int func_181(int iParam0)//Position - 0x68A3
{
	if (iParam0 == 2)
	{
		return 0;
	}
	if (Local_388[iParam0 /*22*/].f_20 != 7)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388[iParam0 /*22*/], 1f, -1f, 0f), 1f, 1f, 2f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)//Position - 0x68E6
{
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_RAGDOLL(Local_388[iParam0 /*22*/]))
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
		return 1;
	}
	return 0;
}

void func_183(int iParam0)//Position - 0x691E
{
	int iVar0;
	
	if (Local_388[iParam0 /*22*/].f_20 != 6 && Local_388[iParam0 /*22*/].f_20 != 7)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Local_388[iParam0 /*22*/].f_16)
			{
				if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 12))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308[iVar0 /*7*/], Local_308[iVar0 /*7*/].f_3, Local_308[iVar0 /*7*/].f_6, 0, 1, 0))
					{
						iLocal_381 = 1;
						iLocal_380 = MISC::GET_GAME_TIMER();
						if (iVar0 == 4)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								func_186(iParam0, 4);
							}
							else
							{
								func_184(iParam0, 4);
							}
						}
						else
						{
							func_186(iParam0, iVar0);
						}
					}
					else
					{
						func_184(iParam0, iVar0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308[iVar0 /*7*/], Local_308[iVar0 /*7*/].f_3, Local_308[iVar0 /*7*/].f_6, 0, 1, 0) || MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 12))
			{
				func_184(iParam0, iVar0);
			}
			iVar0++;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308[3 /*7*/], Local_308[3 /*7*/].f_3, Local_308[3 /*7*/].f_6, 0, 1, 0))
	{
		func_186(iParam0, 3);
	}
	else
	{
		func_184(iParam0, 3);
	}
}

void func_184(int iParam0, int iParam1)//Position - 0x6A6C
{
	int iVar0;
	
	switch (iParam1)
	{
		case 1:
			func_178(iParam0, 10);
			break;
		
		case 2:
			func_178(iParam0, 6);
			break;
		
		case 0:
			if (!bLocal_373)
			{
				func_178(iParam0, 1);
			}
			break;
		
		case 3:
			func_178(iParam0, 14);
			break;
		
		case 4:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (GlobalFunc_4947(iVar0))
				{
					if (GlobalFunc_540(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
						bLocal_372 = true;
					}
					else
					{
						bLocal_372 = false;
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_308[4 /*7*/], Local_308[4 /*7*/].f_3, Local_308[4 /*7*/].f_6, 0, 1, 0))
					{
						func_178(iParam0, 8);
						func_178(iParam0, 7);
					}
					else if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 7))
					{
						func_179(iParam0, 7);
					}
				}
				else
				{
					func_178(iParam0, 8);
					func_178(iParam0, 7);
				}
			}
			break;
		
		case 5:
			func_178(iParam0, 4);
			break;
	}
}


void func_186(int iParam0, int iParam1)//Position - 0x6BCE
{
	switch (iParam1)
	{
		case 1:
			if ((!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 6) && !MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 1)) && !MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 9))
			{
				if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 10))
				{
					func_179(iParam0, 10);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 1))
			{
				if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 6))
				{
					func_179(iParam0, 6);
				}
			}
			break;
		
		case 0:
			if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 1))
			{
				func_179(iParam0, 1);
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 14))
			{
				func_179(iParam0, 14);
			}
			break;
		
		case 4:
			if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 8))
			{
				if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::SET_BIT(&(Local_388[iParam0 /*22*/].f_15), 9);
					func_179(iParam0, 8);
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_388[iParam0 /*22*/].f_15), 9);
					func_179(iParam0, 8);
				}
			}
			break;
		
		case 5:
			if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 4))
			{
				if ((!PED::IS_PED_BEING_STEALTH_KILLED(Local_388[iParam0 /*22*/]) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_388[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_388[iParam0 /*22*/]))
				{
					func_179(iParam0, 4);
				}
			}
			break;
	}
}

void func_187(int iParam0)//Position - 0x6D61
{
	if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_388[iParam0 /*22*/], 30f))
	{
		if (func_150(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 140f, 1, 250, 7))
		{
			Local_388[iParam0 /*22*/].f_16 = 1;
		}
		else
		{
			Local_388[iParam0 /*22*/].f_16 = 0;
		}
	}
}

void func_188(int iParam0)//Position - 0x6DB2
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_7))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}


void func_190()//Position - 0x6F3F
{
	int iVar0;
	
	func_198();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Local_388[iVar0 /*22*/].f_18 != 3 && Local_388[iVar0 /*22*/].f_20 != 7)
		{
			GlobalFunc_661(Local_388[iVar0 /*22*/], &(Local_388[iVar0 /*22*/].f_6), -1, 0, 0, 0, -1082130432, 0);
		}
		else
		{
			func_188(&(Local_388[iVar0 /*22*/].f_6));
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[iVar0 /*22*/]))
		{
			func_192(iVar0);
			switch (Local_388[iVar0 /*22*/].f_18)
			{
				case 0:
					break;
				
				case 1:
					func_144(iVar0);
					break;
				
				case 2:
					func_191(iVar0);
					break;
				
				case 3:
					func_118(iVar0);
					break;
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_388[iVar0 /*22*/]))
			{
				if (GlobalFunc_4947(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_388[iVar0 /*22*/], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_388[iVar0 /*22*/]);
						func_123();
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_388[iVar0 /*22*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_388[iVar0 /*22*/]);
					func_123();
				}
				Local_388[iVar0 /*22*/].f_18 = 1;
				Local_388[iVar0 /*22*/].f_21 = 0;
			}
			GlobalFunc_146(&(Local_388[iVar0 /*22*/].f_6));
			func_201(&(Local_388[iVar0 /*22*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

void func_191(int iParam0)//Position - 0x7091
{
	char* sVar0;
	float fVar1;
	
	switch (Local_388[iParam0 /*22*/].f_19)
	{
		case 1:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 362.6359f, -1581.256f, 31.54774f, 358.1074f, -1586.615f, 34.29774f, 2f, 0, 1, 0))
				{
					func_125(iParam0);
					func_123();
					return;
				}
				if (func_122(iParam0, 12))
				{
					func_132(iParam0);
					return;
				}
				else
				{
					if ((MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 13) && (MISC::GET_GAME_TIMER() - iLocal_375) > 2500) && !iLocal_660)
					{
						if (iParam0 == 0)
						{
							sVar0 = "PRA_COPST1";
						}
						else if (iParam0 == 1)
						{
							sVar0 = "PRA_COPST2";
						}
						GlobalFunc_5157(&uLocal_482, cLocal_481, sVar0, 7, 0, 0);
						MISC::CLEAR_BIT(&(Local_388[iParam0 /*22*/].f_15), 13);
						MISC::CLEAR_BIT(&(Local_388[func_143(iParam0) /*22*/].f_15), 13);
						iLocal_660 = 1;
					}
					Local_388[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2000)
			{
				if (func_122(iParam0, 12))
				{
					func_132(iParam0);
					return;
				}
				else
				{
					Local_388[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (func_122(iParam0, 12))
				{
					func_132(iParam0);
					return;
				}
				else
				{
					Local_388[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				if (!GlobalFunc_155(Local_388[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 1.5f))
				{
					MISC::CLEAR_BIT(&(Local_388[iParam0 /*22*/].f_15), 5);
				}
				if (func_122(iParam0, 12))
				{
					func_132(iParam0);
					return;
				}
				else
				{
					Local_388[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		
		case 6:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000)
			{
				if (func_122(iParam0, 12))
				{
					func_132(iParam0);
					return;
				}
				else if (iLocal_376 > 0)
				{
					func_125(iParam0);
					func_123();
				}
			}
			break;
		
		case 7:
			if (MISC::GET_GAME_TIMER() - Local_388[iParam0 /*22*/].f_14) > MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000)
			{
				fVar1 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
				if (((fVar1 < 12f && !Local_388[iParam0 /*22*/].f_16) && !MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 10)) && !GlobalFunc_6964(Local_388[iParam0 /*22*/], -875674219))
				{
					MISC::CLEAR_BIT(&(Local_388[iParam0 /*22*/].f_15), 11);
				}
				if (func_122(iParam0, 12))
				{
					func_132(iParam0);
					return;
				}
				else
				{
					Local_388[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
	}
}

void func_192(int iParam0)//Position - 0x7386
{
	func_193(iParam0);
	func_177(iParam0);
	func_168(iParam0);
}

void func_193(int iParam0)//Position - 0x73A0
{
	func_187(iParam0);
	func_196(iParam0);
	func_183(iParam0);
	if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 1))
	{
		if ((Local_388[iParam0 /*22*/].f_20 != 6 && Local_388[iParam0 /*22*/].f_20 != 7) && !bLocal_373)
		{
			if (!bLocal_371 && GlobalFunc_775(Local_388[iParam0 /*22*/], Local_388[iParam0 /*22*/].f_1, 6f))
			{
				func_195(iParam0);
			}
			func_180(iParam0);
			func_194(iParam0);
		}
	}
}

void func_194(int iParam0)//Position - 0x7428
{
	bool bVar0;
	
	if (!iLocal_660)
	{
		bVar0 = PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID());
		if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 13))
		{
			if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 10))
			{
				if (Local_388[iParam0 /*22*/].f_16)
				{
					if (bVar0)
					{
						func_179(iParam0, 13);
					}
					else
					{
						func_178(iParam0, 13);
					}
				}
			}
		}
		else if (func_131(iParam0))
		{
			if (bVar0)
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_388[iParam0 /*22*/], 10f))
				{
					if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 10) && !MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 6))
					{
						MISC::CLEAR_BIT(&(Local_388[iParam0 /*22*/].f_15), 13);
					}
				}
			}
			else
			{
				func_178(iParam0, 13);
			}
		}
	}
}

void func_195(int iParam0)//Position - 0x74F4
{
	bool bVar0;
	
	bVar0 = WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4);
	if (Local_388[iParam0 /*22*/].f_20 != 6 && Local_388[iParam0 /*22*/].f_20 != 7)
	{
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_388[iParam0 /*22*/], 12f))
		{
			if (bVar0)
			{
				if (Local_388[iParam0 /*22*/].f_16)
				{
					if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 2))
					{
						func_179(iParam0, 2);
					}
				}
			}
			else
			{
				func_178(iParam0, 2);
			}
		}
		else if (bVar0)
		{
			if (MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 10))
			{
				if (!MISC::IS_BIT_SET(Local_388[iParam0 /*22*/].f_15, 2))
				{
					func_179(iParam0, 2);
				}
			}
			else
			{
				func_178(iParam0, 2);
			}
		}
		else
		{
			func_178(iParam0, 2);
		}
	}
}

void func_196(int iParam0)//Position - 0x75B7
{
	if (!func_166(iParam0))
	{
		if (bLocal_373)
		{
			func_123();
		}
		else if (func_147(Local_388[iParam0 /*22*/], 1, 70f, 150f, 0, 1, 0, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_388[iParam0 /*22*/], 1), 100f))
		{
			func_123();
		}
		else if (func_197(func_143(iParam0)))
		{
			func_123();
		}
	}
}

int func_197(int iParam0)//Position - 0x7627
{
	float fVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[iParam0 /*22*/]))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			fVar0 = 20f;
		}
		else
		{
			fVar0 = 3f;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_388[iParam0 /*22*/], fVar0, fVar0, fVar0, 0, 1, 0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_388[iParam0 /*22*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_388[iParam0 /*22*/]))
			{
				if (Local_388[iParam0 /*22*/].f_16)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_198()//Position - 0x76A9
{
	if ((Local_388[0 /*22*/].f_18 == 1 && Local_388[1 /*22*/].f_18 == 1) && Local_388[2 /*22*/].f_18 == 1)
	{
		if ((((GlobalFunc_IsPedNotInjuredOrDead(Local_388[0 /*22*/]) && GlobalFunc_IsPedNotInjuredOrDead(Local_388[1 /*22*/])) && GlobalFunc_496(&uLocal_91, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))) && GlobalFunc_775(Local_388[0 /*22*/], Local_388[0 /*22*/].f_1, 3f)) && GlobalFunc_775(Local_388[1 /*22*/], Local_388[1 /*22*/].f_1, 3f))
		{
			if ((func_122(0, 15) && func_122(1, 15)) && !iLocal_647[iLocal_656])
			{
				if (func_199(0, &(iLocal_647[iLocal_656]), sLocal_651[iLocal_656], 10f, 4))
				{
					iLocal_656++;
					if (iLocal_656 == 2)
					{
						iLocal_656 = 0;
					}
					iLocal_655 = 1;
				}
			}
		}
		else if ((GlobalFunc_IsPedNotInjuredOrDead(Local_388[2 /*22*/]) && GlobalFunc_496(&uLocal_143, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))) && GlobalFunc_775(Local_388[2 /*22*/], Local_388[2 /*22*/].f_1, 3f))
		{
			if (!MISC::IS_BIT_SET(Local_388[2 /*22*/].f_15, 2) && !MISC::IS_BIT_SET(Local_388[2 /*22*/].f_15, 4))
			{
				if (func_199(0, &(iLocal_647[2]), "PRA_COPTLK3", 10f, 4))
				{
					iLocal_655 = 1;
				}
			}
		}
		else if (iLocal_655 && GlobalFunc_111())
		{
			GlobalFunc_4935();
			iLocal_655 = 0;
		}
	}
}

bool func_199(int iParam0, var uParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x7831
{
	if (!*uParam1)
	{
		if (!GlobalFunc_111() && CAM::IS_SCREEN_FADED_IN())
		{
			if (func_129(iParam0, fParam3) && !GlobalFunc_663("PR_TAKBACK", 0, 0))
			{
				*uParam1 = GlobalFunc_10618(&uLocal_482, cLocal_481, sParam2, iParam4, 0, 0, 0);
			}
		}
	}
	else if (!func_129(iParam0, fParam3))
	{
		GlobalFunc_5105();
	}
	return *uParam1;
}


void func_201(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x78E3
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_202()//Position - 0x7932
{
	var uVar0;
	
	func_89(&Local_455, &uVar0, &iLocal_81, &iLocal_356, &iLocal_355, Local_363, 0, 0, 1090519040);
	func_116();
	func_104();
	switch (iLocal_80)
	{
		case 0:
			if (func_69(iLocal_79, bLocal_27))
			{
				GlobalFunc_7253(&iLocal_355, Local_455, 1);
				GlobalFunc_5974("PR_GOVEH", &iLocal_354);
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_START");
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[13 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[13 /*31*/], 1);
				}
				iLocal_677 = 0;
				RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
				iLocal_80 = 1;
			}
			break;
		
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_388[2 /*22*/]))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 371.9393f, -1604.252f, 45.603f, 399.8371f, -1627.065f, 31.75287f, 32.73f, 0, 1, 2) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
					}
				}
			}
			if ((PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && iLocal_677 == 0) && GlobalFunc_156(Local_455, PLAYER::PLAYER_PED_ID(), 1) < 100f)
			{
				RECORDING::_0x293220DA1B46CEBC(7f, 7f, 4);
				iLocal_677 = 1;
			}
			if (GlobalFunc_4947(Local_455))
			{
				if ((iLocal_81 == 1 || iLocal_81 == 2) || iLocal_81 == 3)
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 6f, 4);
					iLocal_80 = 2;
				}
				if (bLocal_373)
				{
					if (GlobalFunc_496(&uLocal_195, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
					{
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					}
				}
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_355);
			func_97(0);
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_455))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, -1);
			}
			func_35(1, 1, 1);
			iLocal_80 = 1;
			break;
	}
}

void func_203()//Position - 0x7B0C
{
	switch (iLocal_80)
	{
		case 0:
			if (func_69(iLocal_79, 0))
			{
				GlobalFunc_562(78);
				PLAYER::SET_MAX_WANTED_LEVEL(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
				MISC::CLEAR_AREA_OF_PEDS(369.0115f, -1609.116f, 28.2928f, 5f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_388[0 /*22*/].f_1, 5f, 0);
				if (func_260(PLAYER::PLAYER_PED_ID(), 12, 4) || func_260(PLAYER::PLAYER_PED_ID(), 12, 3))
				{
					bLocal_371 = true;
				}
				GlobalFunc_10756();
				GlobalFunc_5198(78);
				if (GlobalFunc_Is_Mission_Retry())
				{
					GlobalFunc_5108(0, -1, 1);
					GlobalFunc_79(500, 1);
					iLocal_80 = 2;
				}
				else
				{
					if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						GlobalFunc_7252(PLAYER::PLAYER_PED_ID(), 408.3364f, -1567.429f, 28.2723f, 128.2512f);
						GlobalFunc_8533(408.3364f, -1567.429f, 28.2723f, 50f, 12, 5000, 0, 0);
						GlobalFunc_79(500, 1);
					}
					iLocal_80 = 2;
				}
			}
			break;
		
		case 2:
			func_97(0);
			break;
	}
}

























































int func_260(int iParam0, int iParam1, int iParam2)//Position - 0xB180
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(uParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_260(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_260(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_260(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7110(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_260(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

























































































void func_349()//Position - 0x24612
{
	func_351();
	func_350();
}

void func_350()//Position - 0x24622
{
	if (PED::IS_COP_PED_IN_AREA_3D(385.8528f, -1629.945f, 35.29278f, 398.8063f, -1640.865f, 28f))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_368, 0, 1, 1);
	}
	else
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_368, 1, 1, 1);
	}
}

void func_351()//Position - 0x24666
{
	if (bLocal_373)
	{
		if (PED::IS_COP_PED_IN_AREA_3D(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 390.4927f, -1621.07f, 28.29278f, 406.0266f, -1604.358f, 35.2086f, 15f, 0, 1, 0))
		{
			if (GlobalFunc_496(&uLocal_195, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
			{
				func_353(Global_34036[13 /*31*/], &fLocal_369);
				return;
			}
		}
		else
		{
			func_352(Global_34036[13 /*31*/], &fLocal_369);
		}
	}
	else if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) || iLocal_81 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 390.4927f, -1621.07f, 28.29278f, 406.0266f, -1604.358f, 35.2086f, 15f, 0, 1, 0) || PED::IS_COP_PED_IN_AREA_3D(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f))
		{
			func_353(Global_34036[13 /*31*/], &fLocal_369);
		}
		else
		{
			func_352(Global_34036[13 /*31*/], &fLocal_369);
		}
	}
	else if (!PED::IS_COP_PED_IN_AREA_3D(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f))
	{
		func_352(Global_34036[13 /*31*/], &fLocal_369);
	}
	else
	{
		func_353(Global_34036[13 /*31*/], &fLocal_369);
	}
}

void func_352(int iParam0, float fParam1)//Position - 0x247D9
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if (*fParam1 != 0f)
		{
			if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_370))
			{
				uLocal_370 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(400.8628f, -1609.739f, 28.29278f, 7.5f, 2f, 9.5f, GlobalFunc_723(229.3746f), 0, 7);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, *fParam1, 1, 1);
			*fParam1 = (*fParam1 - (0.2f * SYSTEM::TIMESTEP()));
			if (*fParam1 <= 0f)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1, 1, 0);
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_370);
				*fParam1 = 0f;
			}
		}
	}
}

void func_353(int iParam0, float fParam1)//Position - 0x24864
{
	if (*fParam1 != 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(uParam0, *fParam1, 1, 1);
		*fParam1 = (*fParam1 + (0.2f * SYSTEM::TIMESTEP()));
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_370))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_370);
		}
		if (*fParam1 >= 1f)
		{
			*fParam1 = 1f;
		}
	}
}

void func_354()//Position - 0x248AD
{
	func_355();
	if (iLocal_661)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			GlobalFunc_585(27, 1);
			iLocal_661 = 0;
		}
	}
}

void func_355()//Position - 0x248D6
{
	if (!iLocal_382)
	{
		if (iLocal_81 == 1 || iLocal_81 == 2)
		{
			GlobalFunc_504(Local_455, 650);
			GlobalFunc_574(649, 0);
			iLocal_382 = 1;
		}
	}
}


void func_357()//Position - 0x24956
{
	if (!bLocal_27 && iLocal_79 != 4)
	{
		if (iLocal_79 > 0)
		{
			func_361();
			func_358();
		}
	}
}

void func_358()//Position - 0x2497B
{
	if (iLocal_79 != 2 && iLocal_79 != 3)
	{
		if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 372.0053f, -1604.076f, 36.7536f, 100f) && !bLocal_386)
		{
			func_360("PR_AREAWARN", &bLocal_386);
		}
		else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 372.0053f, -1604.076f, 36.7536f, 170f) && bLocal_386)
		{
			func_359(3);
		}
	}
}

void func_359(int iParam0)//Position - 0x249F7
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_352 = "PR_FWRECK";
			break;
		
		case 2:
			sLocal_352 = "PR_FSTUCK";
			break;
		
		case 3:
			sLocal_352 = "PR_FLEFT";
			break;
		
		case 4:
			sLocal_352 = "PR_FLEFTV";
			break;
	}
	iLocal_79 = 4;
	iLocal_80 = 0;
}

void func_360(char* sParam0, bool bParam1)//Position - 0x24A65
{
	if (!*bParam1)
	{
		GlobalFunc_164(sParam0, 7500, 0);
		*bParam1 = 1;
	}
}

void func_361()//Position - 0x24A82
{
	if (!GlobalFunc_4947(Local_455))
	{
		func_359(1);
	}
	else
	{
		func_362();
		if (iLocal_79 == 2 || iLocal_79 == 3)
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_455, 50f) && !bLocal_387)
			{
				func_360("PR_VANWARN", &bLocal_387);
			}
			else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_455, 100f) && bLocal_387)
			{
				func_359(4);
			}
		}
	}
}

void func_362()//Position - 0x24AFE
{
	if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_455))
	{
		if (iLocal_367)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_366) > 5000)
			{
				func_359(2);
				return;
			}
		}
		else
		{
			iLocal_366 = MISC::GET_GAME_TIMER();
			iLocal_367 = 1;
		}
	}
	else
	{
		iLocal_367 = 0;
	}
	if (GlobalFunc_7257(Local_455))
	{
		func_359(2);
	}
}






void func_368()//Position - 0x24CC9
{
	func_380();
	func_378();
	func_373();
	func_372();
	func_371();
	func_369();
}

void func_369()//Position - 0x24CE9
{
	Local_308[1 /*7*/] = { GlobalFunc_2570(359.5238f, -1581.445f, 28.29278f, 341.1343f, -1603.052f, 40.37049f, 7.3f) };
	Local_308[2 /*7*/] = { GlobalFunc_2570(352.2312f, -1590.471f, 28.29277f, 341.1343f, -1603.052f, 40.37049f, 6.78f) };
	Local_308[0 /*7*/] = { GlobalFunc_2570(344.5851f, -1601.562f, 28.29278f, 342.4275f, -1604.071f, 40.29278f, 3.79f) };
	Local_308[3 /*7*/] = { GlobalFunc_2570(345.0102f, -1604.096f, 40.6735f, 361.0914f, -1617.46f, 28.29278f, 3.33f) };
	Local_308[4 /*7*/] = { GlobalFunc_2570(362.7986f, -1577.081f, 28.29278f, 341.1343f, -1603.052f, 40.37049f, 6.78f) };
	Local_308[5 /*7*/] = { GlobalFunc_2570(365.9773f, -1611.556f, 28.29277f, 373.1279f, -1617.806f, 40.37049f, 19.19f) };
}


void func_371()//Position - 0x24E2F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_82[iVar0] = 0;
		iLocal_86[iVar0] = 0;
		iVar0++;
	}
	Local_299[0 /*4*/] = { 344.4447f, -1603.428f, 28.2928f };
	Local_299[0 /*4*/].f_3 = 228.9052f;
	Local_299[1 /*4*/] = { 345.9821f, -1604.801f, 28.2928f };
	Local_299[1 /*4*/].f_3 = 40.2137f;
}

void func_372()//Position - 0x24E9F
{
	iLocal_368 = -1469527606;
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_368))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_368, joaat("prop_fnclink_03gate5"), 391.8602f, -1636.07f, 29.9744f, 1, 1, 0);
	}
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[13 /*31*/], 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_368, 1, 1, 0);
}

void func_373()//Position - 0x24EF0
{
	struct<3> Var0[8];
	
	Var0[0 /*3*/] = { 331.7678f, -1596.396f, 31.53864f };
	Var0[1 /*3*/] = { 348.4934f, -1576.657f, 31.83304f };
	Var0[2 /*3*/] = { 356.2655f, -1567.396f, 28.29265f };
	Var0[3 /*3*/] = { 368.4805f, -1576.274f, 28.26307f };
	Var0[4 /*3*/] = { 364.8242f, -1580.737f, 28.29278f };
	Var0[5 /*3*/] = { 350.2896f, -1606.614f, 28.29278f };
	Var0[6 /*3*/] = { 346.1393f, -1608.523f, 31.53354f };
	func_377(&uLocal_91, &Var0, 7);
	Var0[0 /*3*/] = { 353.657f, -1613.421f, 28.29278f };
	Var0[1 /*3*/] = { 391.3156f, -1601.633f, 28.29278f };
	Var0[2 /*3*/] = { 397.667f, -1607.168f, 28.29278f };
	Var0[3 /*3*/] = { 376.649f, -1633.096f, 26.96452f };
	func_377(&uLocal_143, &Var0, 4);
	Var0[0 /*3*/] = { 344.0985f, -1605.154f, 28.2928f };
	Var0[1 /*3*/] = { 365.6985f, -1580.435f, 28.2928f };
	Var0[2 /*3*/] = { 407.9943f, -1616.259f, 28.2928f };
	Var0[3 /*3*/] = { 387.3322f, -1641.258f, 29.0912f };
	func_377(&uLocal_195, &Var0, 4);
	GlobalFunc_500(&uLocal_247);
	GlobalFunc_499(&uLocal_247, 408.8245f, -1616.011f, 31.7537f);
	GlobalFunc_499(&uLocal_247, 376.3118f, -1588.036f, 36.7534f);
	GlobalFunc_499(&uLocal_247, 354.1272f, -1614.819f, 31.5335f);
	GlobalFunc_499(&uLocal_247, 387.2971f, -1641.943f, 31.833f);
	GlobalFunc_498(&uLocal_247);
}




void func_377(var uParam0, var uParam1, int iParam2)//Position - 0x251BB
{
	int iVar0;
	
	GlobalFunc_500(uParam0);
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		GlobalFunc_499(uParam0, *(uParam1[iVar0 /*3*/]));
		iVar0++;
	}
	GlobalFunc_498(uParam0);
}

void func_378()//Position - 0x251F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = joaat("s_m_y_cop_01");
	Local_388[0 /*22*/] = { func_379(353.1191f, -1589.606f, 28.2928f, 270.0968f, iVar0) };
	Local_388[1 /*22*/] = { func_379(354.557f, -1590.549f, 28.2928f, 16.3702f, iVar0) };
	Local_388[2 /*22*/] = { func_379(369.8186f, -1611.029f, 28.3928f, 9.0837f, iVar0) };
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		Local_388[iVar1 /*22*/].f_18 = 0;
		Local_388[iVar1 /*22*/].f_19 = 0;
		Local_388[iVar1 /*22*/].f_20 = 0;
		Local_388[iVar1 /*22*/].f_17 = 0;
		Local_388[iVar1 /*22*/].f_16 = 0;
		iVar2 = 0;
		while (iVar2 <= (15 - 1))
		{
			MISC::CLEAR_BIT(&(Local_388[iVar1 /*22*/].f_15), iVar2);
			iVar2++;
		}
		iVar1++;
	}
	iLocal_655 = 0;
	iLocal_656 = 0;
	sLocal_651[0] = "PRA_COPTLK1";
	sLocal_651[1] = "PRA_COPTLK2";
}

struct<22> func_379(struct<3> Param0, float fParam3, int iParam4)//Position - 0x252EE
{
	struct<22> Var0;
	
	Var0.f_14 = -1;
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_380()//Position - 0x2531A
{
	Local_455 = { GlobalFunc_3018(372.9868f, -1623.531f, 28.2928f, 321.7075f, joaat("policet")) };
	Local_461[0 /*6*/] = { GlobalFunc_3018(400.5771f, -1618.927f, 28.2928f, 48.8115f, joaat("police3")) };
	Local_461[1 /*6*/] = { GlobalFunc_3018(396.6843f, -1623.222f, 28.2928f, 231.3392f, joaat("police3")) };
	Local_461[2 /*6*/] = { GlobalFunc_3018(394.3527f, -1625.337f, 28.2928f, 49.3732f, joaat("police3")) };
}


void func_382()//Position - 0x253D5
{
	PED::ADD_RELATIONSHIP_GROUP("COPS", &uLocal_480);
}

void func_383()//Position - 0x253E9
{
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_480);
	GlobalFunc_695(1);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[13 /*31*/]))
	{
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[13 /*31*/], 0);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[13 /*31*/], 0f, 1, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[13 /*31*/], 4, 1, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_368, 0, 1, 0);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_368);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_359, 0);
	func_53();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_771();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_384(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_384(bool bParam0)//Position - 0x2546B
{
	struct<3> Var0;
	
	if (bParam0)
	{
		MISC::CLEAR_AREA(372.9868f, -1623.531f, 28.2928f, 100f, 1, 0, 0, 0);
	}
	GlobalFunc_5105();
	HUD::CLEAR_PRINTS();
	func_392(1, 1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	GlobalFunc_10755();
	func_32();
	func_390();
	GlobalFunc_587();
	GlobalFunc_587();
	GlobalFunc_587();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_455))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_455, 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_2();
	}
	else
	{
		func_385();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	if (CAM::DOES_CAM_EXIST(uLocal_358))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_358, 0);
	}
}

void func_385()//Position - 0x25545
{
	int iVar0;
	
	VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_455);
	GlobalFunc_131(&Local_455);
	GlobalFunc_129(&uLocal_357, 0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_201(&(Local_388[iVar0 /*22*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_131(&(Local_461[iVar0 /*6*/]));
		iVar0++;
	}
}





void func_390()//Position - 0x255F3
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_455.f_5);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_461[iVar0 /*6*/].f_5);
		iVar0++;
	}
}


void func_392(bool bParam0, int iParam1, int iParam2)//Position - 0x2565F
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
			func_37(iParam1, iParam2, 1, 1);
		}
	}
}





void func_397()//Position - 0x25788
{
	GlobalFunc_5129(475.3364f, -1409.782f, 28.3108f, 123.1614f);
	GlobalFunc_5166(471.5946f, -1412.737f, 28.1562f, 68.5531f);
}

