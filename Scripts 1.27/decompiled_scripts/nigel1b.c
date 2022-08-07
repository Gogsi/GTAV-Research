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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
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
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	struct<61> Local_98 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_159 = 16;
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
	bool bLocal_324 = 0;
	int iLocal_325 = 0;
	bool bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348[2] = { 0, 0 };
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	bool bLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	bool bLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	bool bLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	bool bLocal_365 = 0;
	bool bLocal_366 = 0;
	int iLocal_367[2] = { 0, 0 };
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	float fLocal_373[2] = { 0f, 0f };
	float fLocal_376[2] = { 0f, 0f };
	float fLocal_379[2] = { 0f, 0f };
	float fLocal_382 = 0f;
	float fLocal_383 = 0f;
	float fLocal_384 = 0f;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_394 = 0;
	var uLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_418 = 0;
	float fLocal_419 = 0f;
	struct<14> Local_420 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_434[2];
	struct<9> Local_463 = { 0, 0, 0, 0, 0, 0, 738282662, 0, 0 } ;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	struct<6> Local_474 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	struct<9> Local_483[3];
	struct<9> Local_511[2];
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	char* sLocal_542 = NULL;
	var uLocal_543 = 15;
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
	var uLocal_595 = 15;
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
	struct<6> Local_647 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_653[64] = "";
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	char cLocal_669[64] = "";
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	struct<3> Local_685 = { 0, 0, 0 } ;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	struct<3> Local_691 = { 0, 0, 0 } ;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	char* sLocal_697 = NULL;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	char[] cLocal_703[8] = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	struct<3> Local_709 = { 0, 0, 0 } ;
	struct<3> Local_712[2];
	struct<3> Local_719 = { 0, 0, 0 } ;
	struct<3> Local_722 = { 0, 0, 0 } ;
	struct<3> Local_725 = { 0, 0, 0 } ;
	struct<3> Local_728 = { 0, 0, 0 } ;
	struct<3> Local_731[2];
	struct<3> Local_738[2];
	struct<3> Local_745[2];
	struct<3> Local_752 = { 0, 0, 0 } ;
	struct<3> Local_755 = { 0, 0, 0 } ;
	struct<3> Local_758 = { 0, 0, 0 } ;
	struct<3> Local_761 = { 0, 0, 0 } ;
	struct<3> Local_764 = { 0, 0, 0 } ;
	struct<3> Local_767 = { 0, 0, 0 } ;
	struct<3> Local_770 = { 0, 0, 0 } ;
	struct<3> Local_773 = { 0, 0, 0 } ;
	struct<3> Local_776 = { 0, 0, 0 } ;
	struct<3> Local_779 = { 0, 0, 0 } ;
	struct<3> Local_782 = { 0, 0, 0 } ;
	struct<3> Local_785 = { 0, 0, 0 } ;
	struct<3> Local_788 = { 0, 0, 0 } ;
	struct<3> Local_791 = { 0, 0, 0 } ;
	struct<3> Local_794 = { 0, 0, 0 } ;
	struct<3> Local_797 = { 0, 0, 0 } ;
	struct<3> Local_800 = { 0, 0, 0 } ;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(64);
	uLocal_80 = GlobalFunc_4946(63);
	iLocal_81 = joaat("u_m_m_aldinapoli");
	iLocal_82 = joaat("premier");
	bLocal_355 = true;
	StringCopy(&Local_647, "", 24);
	StringCopy(&cLocal_653, "rcmnigel1b@reactions", 64);
	StringCopy(&cLocal_669, "rcmnigel1bnmt_1b", 64);
	StringCopy(&Local_685, "", 24);
	StringCopy(&Local_691, "", 24);
	iLocal_806 = joaat("weapon_unarmed");
	Local_98 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_98);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_98.f_59))
	{
		PED::_DISPOSE_SYNCHRONIZED_SCENE(Local_98.f_59);
	}
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_534();
	}
	func_520();
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_10698(&iLocal_805, -990.5321f, 342.9136f, 70.4615f, 111.0291f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_800, fLocal_419, 1, 0);
				func_453(0, 0);
				break;
			
			case 1:
				GlobalFunc_4972(-1045.017f, 367.3012f, 68.9128f, 103.701f, 1, 0);
				func_453(1, 0);
				break;
			
			case 2:
				GlobalFunc_4972(-462.2575f, -156.7884f, 37.0458f, 112.5754f, 1, 0);
				func_453(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), Local_800, fLocal_419, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_VST", 0);
		func_434(Local_98.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_432();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
			switch (iLocal_95)
			{
				case 0:
					func_362();
					break;
				
				case 1:
					func_361();
					break;
				
				case 2:
					func_360();
					break;
				
				case 5:
					func_348();
					break;
				
				case 3:
					func_267();
					break;
				
				case 4:
					func_72();
					break;
				
				case 6:
					func_45();
					break;
				
				case 7:
					break;
				}
		}
		if (bLocal_355 == 0)
		{
			func_1(iLocal_96);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2A1
{
	if (iLocal_95 == iParam0)
	{
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 0);
		}
		func_32(1, 1, 1);
		bLocal_355 = true;
		iLocal_356 = 0;
		if (iLocal_95 == 4)
		{
			GlobalFunc_79(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x2E2
{
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		func_22(1, 0);
		HUD::CLEAR_PRINTS();
		switch (iLocal_95)
		{
			case 0:
				if (iLocal_97 == 1)
				{
					GlobalFunc_846(&(Local_463.f_2));
					GlobalFunc_841(&Local_463);
					if (GlobalFunc_Is_Mission_Retry() && GlobalFunc_Get_Mission_Fail_Checkpoint() == 1)
					{
						func_19(Global_Mission_Fail_State.f_12[1], 1);
						func_15(Global_Mission_Fail_State.f_12[0], 1);
						if (iLocal_534 == 2 && iLocal_537 == 2)
						{
							GlobalFunc_6523(Local_420.f_8, -1050.359f, 354.0594f, 68.9132f, 38.0338f, 0, 0);
							Local_420.f_9 = 38;
						}
						else if (iLocal_534 == 5)
						{
							Local_420.f_9 = 51;
							func_12(&(Local_420.f_8), 1);
						}
					}
					if (!GlobalFunc_188())
					{
						GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), -1045.017f, 367.3012f, 68.9128f, 103.701f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_356 == 0)
						{
							if (iLocal_96 == 1)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_356 = 1;
								}
							}
						}
					}
					if (iLocal_537 == 0)
					{
						iLocal_354 = 1;
						iLocal_400 = MISC::GET_GAME_TIMER();
					}
					func_8();
					iLocal_97 = 2;
				}
				break;
			
			case 1:
				if (iLocal_97 == 1)
				{
					func_8();
					if (!GlobalFunc_188())
					{
						GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), -462.2575f, -156.7884f, 37.0458f, 112.5754f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						SYSTEM::WAIT(0);
						if (iLocal_356 == 0)
						{
							if (iLocal_96 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_356 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_97 == 1)
				{
					func_8();
					func_22(0, 0);
					iLocal_344 = 1;
				}
				break;
			
			case 3:
				if (GlobalFunc_116(0))
				{
					GlobalFunc_6685(0);
				}
				if (!iLocal_360)
				{
					iLocal_97 = 2;
				}
				else
				{
					while (GlobalFunc_111())
					{
						func_22(0, 1);
						SYSTEM::WAIT(0);
					}
				}
				break;
			
			case 5:
				if (iLocal_97 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				break;
			
			default:
				break;
			}
	}
}






void func_8()//Position - 0x6AC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_434[iVar0 /*14*/].f_11 = 0;
		Local_434[iVar0 /*14*/].f_12 = 0;
		Local_434[iVar0 /*14*/].f_13 = 0;
		iVar0++;
	}
	Local_420.f_11 = 0;
	Local_420.f_12 = 0;
	Local_420.f_13 = 0;
}




void func_12(var uParam0, bool bParam1)//Position - 0x79B
{
	if (bParam1)
	{
		GlobalFunc_881(uParam0);
	}
	else
	{
		GlobalFunc_132(uParam0, 1, 0, 1);
	}
}



void func_15(int iParam0, bool bParam1)//Position - 0x848
{
	int iVar0;
	
	iLocal_537 = iParam0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			switch (iLocal_537)
			{
				case 0:
					Local_434[iVar0 /*14*/].f_9 = 0;
					break;
				
				case 1:
					break;
				
				case 2:
					Local_434[iVar0 /*14*/].f_9 = 36;
					break;
				
				case 3:
					Local_434[iVar0 /*14*/].f_9 = 32;
					break;
				
				case 4:
					if (iVar0 == 0)
					{
						Local_434[iVar0 /*14*/].f_9 = 26;
					}
					else
					{
						Local_434[iVar0 /*14*/].f_9 = 32;
					}
					break;
				
				case 5:
					if (Local_434[iVar0 /*14*/].f_9 != 42 || Local_434[iVar0 /*14*/].f_9 != 43)
					{
						Local_434[iVar0 /*14*/].f_9 = 44;
						if (GlobalFunc_115(Local_434[iVar0 /*14*/].f_8))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_434[iVar0 /*14*/].f_8);
						}
					}
					break;
				
				case 6:
					Local_434[iVar0 /*14*/].f_9 = 48;
					break;
			}
			iVar0++;
		}
	}
	if (iLocal_537 == 5)
	{
		iLocal_407 = MISC::GET_GAME_TIMER();
	}
	else if (iLocal_537 == 2 || iLocal_537 == 4)
	{
		iLocal_399 = MISC::GET_GAME_TIMER();
	}
	else if (iLocal_537 == 6)
	{
		if (!iLocal_357)
		{
			func_18(0);
			func_17(5, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_387[5]), 0, 0);
			func_16(5, 0, 1);
			iLocal_361 = 1;
			iLocal_363 = 1;
			iLocal_357 = 1;
		}
	}
}

int func_16(int iParam0, int iParam1, int iParam2)//Position - 0x9AD
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_387[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_387[iParam0], iParam1, 0, iParam2);
		return 1;
	}
	return 0;
}

int func_17(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0x9D8
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_387[iParam0]))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(iLocal_387[iParam0], iParam2);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_387[iParam0], fParam1, 0, iParam3);
		return 1;
	}
	return 0;
}

void func_18(bool bParam0)//Position - 0xA10
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (!iLocal_361)
	{
		func_17(0, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_387[0]), 0, 0);
		func_16(0, iVar0, 1);
		func_17(1, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_387[1]), 0, 0);
		func_16(1, iVar0, 1);
	}
	if (!iLocal_363)
	{
		func_17(2, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_387[2]), 0, 0);
		func_16(2, iVar0, 1);
		func_17(3, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_387[3]), 0, 0);
		func_16(3, iVar0, 1);
	}
}

void func_19(int iParam0, bool bParam1)//Position - 0xA9D
{
	iLocal_534 = iParam0;
	if (bParam1)
	{
		switch (iLocal_534)
		{
			case 0:
				Local_420.f_9 = 0;
				break;
			
			case 1:
				Local_420.f_9 = 32;
				break;
			
			case 2:
				Local_420.f_9 = 38;
				break;
			
			case 3:
				Local_420.f_9 = 44;
				if (GlobalFunc_115(Local_420.f_8))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_420.f_8);
				}
				break;
			
			case 4:
				Local_420.f_9 = 49;
				break;
			
			case 5:
				Local_420.f_9 = 51;
				break;
			}
	}
}



void func_22(bool bParam0, bool bParam1)//Position - 0xB64
{
	if (GlobalFunc_111())
	{
		if (bParam0)
		{
			GlobalFunc_4935();
		}
		else
		{
			GlobalFunc_4956();
		}
	}
	if (bParam1)
	{
		GlobalFunc_5744();
	}
	func_23(&sLocal_697, &cLocal_703);
}

void func_23(char* sParam0, char* sParam1)//Position - 0xB96
{
	if (iLocal_539 != 0)
	{
		StringCopy(sParam0, "NULL", 24);
		StringCopy(sParam1, "NULL", 24);
		iLocal_539 = 0;
	}
}









void func_32(int iParam0, int iParam1, int iParam2)//Position - 0xCF0
{
	func_33(0, 0, iParam2, 1);
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

void func_33(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xD24
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












void func_45()//Position - 0x10DB
{
	char* sVar0;
	
	sVar0 = 0;
	Local_728 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	func_62();
	func_60();
	switch (iLocal_97)
	{
		case 0:
			if (GlobalFunc_4613("NIGEL1B_MISSION_FAIL", 0))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				func_22(1, 1);
				func_57();
				if (iLocal_372 == 0)
				{
					GlobalFunc_10539(1);
				}
				else
				{
					GlobalFunc_10811(sVar0, 1);
				}
				iLocal_401 = 2;
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				GlobalFunc_4613("NIGEL1B_MISSION_FAIL", 0);
				iLocal_97 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_46(1);
				MISC::CLEAR_AREA(Local_719, 35f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_719, 35f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_719, 35f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_719, 35f, 0);
				func_534();
			}
			break;
	}
}

void func_46(bool bParam0)//Position - 0x11B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[iVar0 /*14*/].f_8))
		{
			PED::SET_PED_KEEP_TASK(Local_434[iVar0 /*14*/].f_8, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_434[iVar0 /*14*/].f_8, 0);
			if (iVar0 == 0)
			{
				PED::SET_PED_LEG_IK_MODE(Local_434[iVar0 /*14*/].f_8, 1);
			}
		}
		func_12(&(Local_434[iVar0 /*14*/].f_8), bParam0);
		iVar0++;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8))
	{
		PED::SET_PED_KEEP_TASK(Local_420.f_8, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_420.f_8, 0);
	}
	func_12(&(Local_420.f_8), bParam0);
	GlobalFunc_841(&Local_463);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		GlobalFunc_5721(&(Local_511[iVar0 /*9*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_5721(&(Local_483[iVar0 /*9*/]), bParam0);
		iVar0++;
	}
	GlobalFunc_7957(&uLocal_803, bParam0);
	if (GlobalFunc_4947(iLocal_804))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_804, "rcmnigel1b", "idle_speedo", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_804, "idle_speedo", "rcmnigel1b", -4f);
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_804, 0);
	}
	GlobalFunc_7957(&iLocal_804, bParam0);
	GlobalFunc_7957(&iLocal_805, bParam0);
}











void func_57()//Position - 0x14FF
{
	int iVar0;
	
	GlobalFunc_846(&(Local_463.f_2));
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_589(&(Local_434[iVar0 /*14*/]));
		iVar0++;
	}
	GlobalFunc_589(&Local_420);
}



void func_60()//Position - 0x15CB
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_536 != 0)
		{
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			if (!iLocal_357)
			{
				func_18(0);
				func_17(5, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_387[5]), 0, 0);
				func_16(5, 0, 1);
				iLocal_361 = 1;
				iLocal_363 = 1;
				iLocal_357 = 1;
			}
		}
		func_61(0);
	}
}

void func_61(int iParam0)//Position - 0x1625
{
	if (iParam0 == iLocal_401)
	{
		switch (iLocal_401)
		{
			case 0:
				if (GlobalFunc_4613("NIGEL1B_START", 0))
				{
					iLocal_401++;
				}
				break;
			
			case 1:
				if (GlobalFunc_4613("NIGEL1B_WANTED", 0))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					iLocal_401++;
				}
				break;
			
			case 2:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_4613("NIGEL1B_COPS_LOST", 0))
					{
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
						iLocal_403 = MISC::GET_GAME_TIMER();
						iLocal_401 = 3;
					}
				}
				else if (GlobalFunc_4613("NIGEL1B_MISSION_FAIL", 0))
				{
					iLocal_401 = 4;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_62()//Position - 0x16C4
{
	if (iLocal_536 == 0)
	{
		if (func_71(PLAYER::PLAYER_PED_ID(), 0))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
			iLocal_536 = 1;
			return;
		}
	}
	else if (iLocal_536 == 1)
	{
		if (func_69(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_18(0);
			GlobalFunc_1998(1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
			{
				AUDIO::START_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
			}
			iLocal_536 = 2;
			return;
		}
		else if (func_65(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_18(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
			{
				AUDIO::START_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
			}
			iLocal_536 = 3;
			return;
		}
		else if (!func_71(PLAYER::PLAYER_PED_ID(), 0))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.8f);
			iLocal_536 = 0;
			return;
		}
	}
	else if (iLocal_536 == 2)
	{
		if (func_69(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
			}
			func_63();
		}
		else
		{
			func_18(1);
			GlobalFunc_1998(0);
			iLocal_536 = 1;
			return;
		}
	}
	else if (iLocal_536 == 3)
	{
		if (func_65(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
			}
			func_63();
		}
		else
		{
			func_18(1);
			iLocal_536 = 1;
			return;
		}
	}
}

void func_63()//Position - 0x17EC
{
	if (!iLocal_361)
	{
		if (func_64(0) || func_64(1))
		{
			iLocal_361 = 1;
		}
	}
	if (!iLocal_363)
	{
		if (func_64(2) || func_64(3))
		{
			iLocal_363 = 1;
		}
	}
}

int func_64(int iParam0)//Position - 0x1830
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_387[iParam0]))
	{
		if (!OBJECT::IS_DOOR_CLOSED(iLocal_387[iParam0]))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0, bool bParam1)//Position - 0x185A
{
	struct<3> Var0;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (GlobalFunc_496(&uLocal_595, Var0))
	{
		if (func_66(Var0.f_2, 66.21f, 11f))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(float fParam0, float fParam1, float fParam2)//Position - 0x18A8
{
	float fVar0;
	
	fVar0 = MISC::ABSF((fParam0 - fParam1));
	if (fVar0 <= fParam2)
	{
		return 1;
	}
	return 0;
}



int func_69(int iParam0, bool bParam1)//Position - 0x199C
{
	struct<3> Var0;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (GlobalFunc_775(iParam0, Local_761, 5.93f))
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(iParam0, -1055.184f, 382.7324f, 70.68832f, 1f, 2f, 2.75f, 0, 1, 0))
		{
			if (func_66(Var0.f_2, 66.21f, 11f))
			{
				return 1;
			}
		}
	}
	if ((((ENTITY::IS_ENTITY_IN_AREA(iParam0, Local_764, Local_767, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_770, Local_773, 2.8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_776, Local_779, 12.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_782, Local_785, 8.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_788, Local_791, 4f, 0, 1, 0))
	{
		if (func_66(Var0.f_2, 66.21f, 11f))
		{
			return 1;
		}
	}
	return 0;
}


int func_71(int iParam0, bool bParam1)//Position - 0x1AD2
{
	struct<3> Var0;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (GlobalFunc_496(&uLocal_543, Var0))
	{
		if (func_66(Var0.f_2, 66.21f, 11f))
		{
			return 1;
		}
	}
	return 0;
}

void func_72()//Position - 0x1B20
{
	GlobalFunc_79(500, 1);
	func_73(97, 1);
	func_534();
}

void func_73(int iParam0, bool bParam1)//Position - 0x1B3B
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
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_98();
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

























void func_98()//Position - 0x2E7B
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
				if (GlobalFunc_10995(iVar1, 14, iVar2))
				{
					func_99(iVar1, 14, iVar2);
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

int func_99(int iParam0, int iParam1, int iParam2)//Position - 0x2F3C
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
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10995(iParam0, iParam1, iParam2))
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
				func_99(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_99(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11115(iParam0, iVar0, &iVar46, 0))
	{
		func_102(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11114(iParam0, iVar0, &iVar46))
	{
		func_102(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_102(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x31BC
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7247(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7247(iParam0, 9);
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
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11241(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11241(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_108(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11115(iParam0, iVar10, &iVar4, 1))
							{
								func_102(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_102(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_102(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_102(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_102(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_102(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_102(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11241(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11241(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11241(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11115(iParam0, iVar10, &iVar4, 0))
		{
			func_102(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11114(iParam0, iVar10, &iVar4))
		{
			func_102(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_108(int iParam0, int iParam1, int iParam2)//Position - 0x41D0
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
				if (GlobalFunc_10995(iParam0, iParam1, iVar0))
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
				if (GlobalFunc_10995(iParam0, iParam1, iVar1))
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
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7247(iParam0, iParam1);
		}
	}
	return -99;
}































































































































































void func_267()//Position - 0x261EC
{
	func_347();
	func_321();
	func_284();
	switch (iLocal_97)
	{
		case 0:
			func_22(0, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&uLocal_159, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			GlobalFunc_173(&uLocal_159, 3, 0, "NIGEL", 0, 1);
			GlobalFunc_173(&uLocal_159, 4, 0, "MRSTHORNHILL", 0, 1);
			iLocal_402 = MISC::GET_GAME_TIMER();
			iLocal_97 = 1;
			break;
		
		case 1:
			if (!iLocal_360)
			{
				if (GlobalFunc_2311(iLocal_402, 2500))
				{
					if (GlobalFunc_10638(&uLocal_159, 64, "NIG1BAU", "NIG1B_OP", 11, 1, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 12f, 1);
						iLocal_360 = 1;
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_271(5);
				}
			}
			else if (!GlobalFunc_111() && !func_270("NULL"))
			{
				if (GlobalFunc_1993())
				{
					if (GlobalFunc_890())
					{
						iLocal_360 = 0;
					}
					else
					{
						iLocal_97 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_22(0, 1);
			func_271(4);
			break;
	}
}



int func_270(char* sParam0)//Position - 0x26322
{
	if (iLocal_539 == 2 || iLocal_539 == 4)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "NULL") || MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		{
			return 1;
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, &sLocal_697))
		{
			return 1;
		}
	}
	return 0;
}

void func_271(int iParam0)//Position - 0x2636E
{
	iLocal_95 = iParam0;
	iLocal_97 = 0;
}













void func_284()//Position - 0x26A54
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8))
	{
		func_320(Local_420.f_8, &(Local_420.f_13));
		switch (iLocal_534)
		{
			case 0:
				if (AUDIO::HAS_SOUND_FINISHED(uLocal_395))
				{
					if ((!PED::IS_PED_BEING_STEALTH_KILLED(Local_420.f_8) && !PED::IS_PED_RAGDOLL(Local_420.f_8)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_420.f_8))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_395, "WHISTLING", Local_420.f_8, "NIGEL_1B_SOUNDSET", 0, 0);
					}
				}
				else if ((PED::IS_PED_BEING_STEALTH_KILLED(Local_420.f_8) || PED::IS_PED_RAGDOLL(Local_420.f_8)) || AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_420.f_8))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
					{
						AUDIO::STOP_SOUND(uLocal_395);
					}
				}
				if (func_319() || func_318(Local_420.f_8, 1101004800, 1084227584, 1097859072))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
					{
						AUDIO::STOP_SOUND(uLocal_395);
					}
					if (GlobalFunc_115(Local_420.f_8))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 1))
						{
							iLocal_332 = 1;
						}
					}
					func_19(3, 1);
				}
				else if (Local_420.f_9 == 0)
				{
					if ((func_316(3) || (func_313(0, Local_420.f_13, 0, 0, 1) && iLocal_536 == 3)) || func_312())
					{
						if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
						{
							AUDIO::STOP_SOUND(uLocal_395);
						}
						func_19(1, 1);
					}
					else if (iLocal_535 == 2 || iLocal_535 == 3)
					{
						if (GlobalFunc_775(Local_420.f_8, Local_728, 4f))
						{
							if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
							{
								AUDIO::STOP_SOUND(uLocal_395);
							}
							func_19(1, 1);
						}
					}
					else if (iLocal_535 == 4)
					{
						if (GlobalFunc_775(Local_420.f_8, Local_728, 2.5f))
						{
							if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
							{
								AUDIO::STOP_SOUND(uLocal_395);
							}
							func_19(1, 1);
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
						{
							AUDIO::STOP_SOUND(uLocal_395);
						}
						func_19(1, 1);
					}
					else if (iLocal_536 == 3)
					{
						if (!GlobalFunc_111() && !func_270("NULL"))
						{
							if (GlobalFunc_2311(iLocal_404, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
							{
								if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GBV", 7, 0, 0, 0))
								{
									if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
									{
										AUDIO::STOP_SOUND(uLocal_395);
									}
									iLocal_404 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_404 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_404 = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_313(1, Local_420.f_13, 1, 1, 1) || func_316(3))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
					{
						AUDIO::STOP_SOUND(uLocal_395);
					}
					func_19(1, 1);
				}
				break;
			
			case 1:
				if (!iLocal_331)
				{
					func_22(0, 0);
					if (iLocal_536 == 3)
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GSP", 7, 0, 0, 0))
						{
							iLocal_409 = MISC::GET_GAME_TIMER();
							iLocal_331 = 1;
						}
					}
					else
					{
						iLocal_331 = 1;
					}
				}
				else
				{
					func_61(0);
					if (iLocal_537 == 0 || iLocal_537 == 1)
					{
						if ((!func_308("NIG1B_GSP", 1) || func_305(Local_420.f_8, 1082130432)) || GlobalFunc_2311(iLocal_409, 1250))
						{
							func_19(2, 1);
						}
					}
					else if (!iLocal_330)
					{
						if (!func_308("NIG1B_GSP", 1))
						{
							if (iLocal_536 == 3)
							{
								if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GSP2", 7, 0, 0, 0))
								{
									iLocal_330 = 1;
								}
							}
							else
							{
								iLocal_330 = 1;
							}
						}
						else if (iLocal_536 != 3)
						{
							func_22(1, 0);
						}
					}
					else if (!func_308("NIG1B_GSP2", 1))
					{
						func_19(4, 1);
					}
					else if (iLocal_536 != 3)
					{
						func_22(1, 0);
					}
				}
				if (func_319() || func_318(Local_420.f_8, 1101004800, 1084227584, 1097859072))
				{
					func_19(3, 1);
				}
				break;
			
			case 2:
				if (Local_420.f_9 == 38 || Local_420.f_9 == 39)
				{
					if (bLocal_362 || iLocal_537 == 4)
					{
						Local_420.f_9 = 34;
					}
				}
				if (iLocal_537 == 5 || iLocal_537 == 6)
				{
					if (func_69(Local_420.f_8, 0))
					{
						func_19(3, 1);
					}
				}
				if (func_305(Local_420.f_8, 1082130432))
				{
					if (bLocal_329)
					{
						if (!func_302("NIG1B_GIC", 1))
						{
							func_19(4, 1);
						}
					}
				}
				if (func_319() || func_318(Local_420.f_8, 1101004800, 1084227584, 1097859072))
				{
					func_19(3, 1);
				}
				break;
			
			case 3:
				func_61(0);
				if (!iLocal_332)
				{
					if ((func_69(Local_420.f_8, 0) && iLocal_537 == 5) || iLocal_537 == 6)
					{
						iLocal_332 = 1;
					}
					else if (iLocal_536 == 3 || GlobalFunc_775(Local_420.f_8, Local_728, 5f))
					{
						func_22(0, 0);
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GSU", 7, 0, 0, 0))
						{
							iLocal_396 = MISC::GET_GAME_TIMER();
							iLocal_332 = 1;
						}
					}
				}
				if (GlobalFunc_115(Local_420.f_8))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_420.f_8);
						func_19(4, 1);
					}
				}
				break;
			
			case 4:
				if (!iLocal_328)
				{
					if (func_71(Local_420.f_8, 0))
					{
						if (iLocal_536 == 3 || func_293(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
						{
							if (!GlobalFunc_111() && !func_270("NULL"))
							{
								if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GF", 7, 0, 0, 0))
								{
									iLocal_328 = 1;
								}
							}
						}
					}
				}
				break;
		}
		func_287();
		if (Local_420.f_9 == 49 || Local_420.f_9 == 50)
		{
			GlobalFunc_589(&Local_420);
		}
		else if (iLocal_95 == 0)
		{
			GlobalFunc_661(Local_420.f_8, &Local_420, -1, 0, 0, 0, -1082130432, 0);
		}
		else if (!bLocal_366)
		{
			if (iLocal_536 == 0 && !GlobalFunc_775(Local_420.f_8, Local_728, 35f))
			{
				GlobalFunc_589(&Local_420);
			}
			else
			{
				GlobalFunc_661(Local_420.f_8, &Local_420, -1, 0, 0, 0, -1082130432, 0);
			}
		}
		else
		{
			GlobalFunc_661(Local_420.f_8, &Local_420, -1, 0, 0, 0, -1082130432, 0);
		}
	}
	else
	{
		if (GlobalFunc_115(Local_483[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_483[0 /*9*/]))
		{
			ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
		{
			AUDIO::STOP_SOUND(uLocal_395);
		}
		if (!iLocal_333)
		{
			if (iLocal_536 == 3 && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_534 == 2 || iLocal_331)
				{
					if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GK", 7, 0, 0, 0))
					{
						iLocal_333 = 1;
					}
				}
				else
				{
					iLocal_333 = 1;
				}
			}
			else
			{
				iLocal_333 = 1;
			}
		}
		if (iLocal_534 != 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_420.f_8))
			{
				if (PED::WAS_PED_KILLED_BY_STEALTH(Local_420.f_8))
				{
					GlobalFunc_553(787);
					RECORDING::_0x293220DA1B46CEBC(2.5f, 2f, 0);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 1))
				{
					GlobalFunc_553(787);
					RECORDING::_0x293220DA1B46CEBC(2.5f, 2f, 0);
				}
				else
				{
					iVar0 = PED::GET_PED_SOURCE_OF_DEATH(Local_420.f_8);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar0))
						{
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
							{
								GlobalFunc_553(787);
								RECORDING::_0x293220DA1B46CEBC(2.5f, 2f, 0);
							}
						}
					}
				}
			}
			if (iLocal_534 != 0)
			{
				bLocal_366 = true;
			}
			Local_420.f_9 = 51;
			GlobalFunc_589(&Local_420);
			iLocal_534 = 5;
		}
	}
}



void func_287()//Position - 0x2739D
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	float fVar7;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_420.f_9)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "idle_gardener", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_420.f_8, "rcmnigel1b", "idle_gardener", 4f, -8f, -1, 270337, 0, 0, 0, 0);
					}
					break;
				
				case 32:
					if (GlobalFunc_115(Local_483[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_483[0 /*9*/], Local_420.f_8))
					{
						ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
					}
					TASK::CLEAR_PED_SECONDARY_TASK(Local_420.f_8);
					if (!PED::IS_PED_HEADTRACKING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "idle_gardener", 3))
					{
						if (!PED::IS_PED_RAGDOLL(Local_420.f_8) && !TASK::IS_PED_GETTING_UP(Local_420.f_8))
						{
							TASK::TASK_PLAY_ANIM(Local_420.f_8, "rcmnigel1b", "exit_gardener", 8f, -4f, -1, 8192, 0, 0, 0, 0);
						}
						else if (GlobalFunc_6964(Local_420.f_8, 1785177548))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_420.f_8, -16f, 1);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
					Local_420.f_9 = 33;
					break;
				
				case 33:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "exit_gardener", 3))
					{
						if (!PED::IS_PED_FACING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!GlobalFunc_6964(Local_420.f_8, -875674219))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 0);
							}
						}
					}
					else
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Local_420.f_8, "rcmnigel1b", "exit_gardener", 1.2f);
					}
					break;
				
				case 34:
					TASK::CLEAR_PED_TASKS(Local_420.f_8);
					if (!PED::IS_PED_HEADTRACKING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					if (!PED::IS_PED_FACING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 45f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
					Local_420.f_11 = MISC::GET_GAME_TIMER();
					Local_420.f_9 = 35;
					break;
				
				case 35:
					if (!GlobalFunc_6964(Local_420.f_8, -2017877118))
					{
						if (!PED::IS_PED_FACING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!GlobalFunc_6964(Local_420.f_8, -875674219))
							{
								Local_420.f_9 = 34;
							}
						}
						else if (GlobalFunc_2311(Local_420.f_11, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)))
						{
							if (func_291(&(Local_420.f_8), "react_small_variations_o", 4f, -4f, -1, 0, 0, 0, 0))
							{
								Local_420.f_11 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						if (!PED::IS_PED_FACING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 170f))
						{
							TASK::CLEAR_PED_TASKS(Local_420.f_8);
						}
						Local_420.f_11 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 38:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "exit_gardener", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
						if (!GlobalFunc_775(Local_420.f_8, -1050.359f, 354.0594f, 68.9132f, 3f))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1050.359f, 354.0594f, 68.9132f, 2f, 20000, 0.25f, 0, 38.0338f);
						}
						if (GlobalFunc_115(Local_434[0 /*14*/].f_8))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_434[0 /*14*/].f_8, -1);
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
						TASK::TASK_PERFORM_SEQUENCE(Local_420.f_8, uLocal_541);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
						Local_420.f_9 = 39;
					}
					break;
				
				case 39:
					if (!GlobalFunc_6964(Local_420.f_8, 242628503))
					{
						Local_420.f_9 = 38;
					}
					else if (GlobalFunc_115(Local_434[0 /*14*/].f_8))
					{
						if (!GlobalFunc_6964(Local_420.f_8, 150319005))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_420.f_8, Local_434[0 /*14*/].f_8, -1, 0, 2);
						}
					}
					break;
				
				case 42:
					if (GlobalFunc_115(Local_483[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_483[0 /*9*/], Local_420.f_8))
					{
						ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
					}
					TASK::CLEAR_PED_SECONDARY_TASK(Local_420.f_8);
					TASK::CLEAR_PED_TASKS(Local_420.f_8);
					PED::SET_PED_CAN_RAGDOLL(Local_420.f_8, 1);
					if (!PED::IS_PED_RAGDOLL(Local_420.f_8))
					{
						PED::SET_PED_TO_RAGDOLL(Local_420.f_8, 1000, 1000, 0, 1, 1, 0);
					}
					Local_420.f_9 = 43;
					break;
				
				case 43:
					if (!PED::IS_PED_RAGDOLL(Local_420.f_8))
					{
						if (!GlobalFunc_6964(Local_420.f_8, 474215631) && !GlobalFunc_6964(Local_420.f_8, -1519143300))
						{
							if (((!ENTITY::IS_ENTITY_IN_WATER(Local_420.f_8) && !GlobalFunc_775(Local_420.f_8, Local_752, fLocal_383)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_420.f_8, Local_755, Local_758, fLocal_384, 0, 1, 0)) && !PED::IS_PED_CLIMBING(Local_420.f_8))
							{
								PED::SET_PED_COWER_HASH(Local_420.f_8, "CODE_HUMAN_STAND_COWER");
								TASK::TASK_COWER(Local_420.f_8, -1);
							}
							else if (!GlobalFunc_6964(Local_420.f_8, 713668775))
							{
								TASK::CLEAR_PED_TASKS(Local_420.f_8);
								Var0 = { Local_745[0 /*3*/] };
								fVar3 = 201.7237f;
								if (GlobalFunc_1986(Local_728, Var0, 1.5f))
								{
									Var0 = { Local_745[1 /*3*/] };
									fVar3 = 325.0476f;
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_420.f_8, Var0, 1f, 20000, 0.25f, 0, fVar3);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
						}
					}
					break;
				
				case 44:
					if (GlobalFunc_115(Local_483[0 /*9*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_483[0 /*9*/], Local_420.f_8))
						{
							ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
						}
						GlobalFunc_5721(&(Local_483[0 /*9*/]), 0);
					}
					if (PED::IS_PED_USING_ANY_SCENARIO(Local_420.f_8))
					{
						PED::SET_PED_PANIC_EXIT_SCENARIO(Local_420.f_8, Local_728);
					}
					if (ENTITY::IS_ENTITY_IN_WATER(Local_420.f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_420.f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
					{
						if (!GlobalFunc_6964(Local_420.f_8, 713668775))
						{
							if ((!PED::IS_PED_RAGDOLL(Local_420.f_8) && !TASK::IS_PED_GETTING_UP(Local_420.f_8)) && !PED::IS_PED_CLIMBING(Local_420.f_8))
							{
								Var4 = { Local_745[0 /*3*/] };
								fVar7 = 201.7237f;
								if (GlobalFunc_1986(Local_728, Var4, 1.5f))
								{
									Var4 = { Local_745[1 /*3*/] };
									fVar7 = 325.0476f;
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_420.f_8, Var4, 1f, 20000, 0.25f, 0, fVar7);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
							}
						}
					}
					else
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "idle_gardener", 3))
						{
							if (((!PED::IS_PED_RAGDOLL(Local_420.f_8) && !TASK::IS_PED_GETTING_UP(Local_420.f_8)) && !PED::IS_PED_CLIMBING(Local_420.f_8)) && !PED::IS_PED_BEING_STUNNED(Local_420.f_8, 0))
							{
								TASK::TASK_PLAY_ANIM(Local_420.f_8, "rcmnigel1b", "exit_panic_gardener", 8f, -4f, -1, 8192, 0, 0, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
							}
							else if (GlobalFunc_6964(Local_420.f_8, 1785177548))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_420.f_8, -16f, 1);
							}
						}
						else
						{
							TASK::TASK_HANDS_UP(Local_420.f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
						}
						Local_420.f_9 = 45;
					}
					break;
				
				case 45:
					if (ENTITY::IS_ENTITY_IN_WATER(Local_420.f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_420.f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
					{
						Local_420.f_9 = 44;
					}
					else
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "exit_panic_gardener", 3))
						{
							if (!GlobalFunc_6964(Local_420.f_8, -1519143300))
							{
								TASK::TASK_HANDS_UP(Local_420.f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
							}
							if (func_288(Local_420.f_8, 0))
							{
								Local_420.f_9 = 46;
							}
						}
					}
					break;
				
				case 46:
					if ((((ENTITY::IS_ENTITY_IN_WATER(Local_420.f_8) || GlobalFunc_775(Local_420.f_8, Local_752, fLocal_383)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_420.f_8, Local_755, Local_758, fLocal_384, 0, 1, 0)) || PED::IS_PED_CLIMBING(Local_420.f_8)) || PED::IS_PED_RAGDOLL(Local_420.f_8))
					{
						Local_420.f_9 = 44;
					}
					else
					{
						if (GlobalFunc_115(Local_483[0 /*9*/]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_483[0 /*9*/], Local_420.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
							}
							GlobalFunc_5721(&(Local_483[0 /*9*/]), 0);
						}
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_420.f_8))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_420.f_8, Local_728);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(Local_420.f_8);
						PED::SET_PED_COWER_HASH(Local_420.f_8, "CODE_HUMAN_STAND_COWER");
						TASK::TASK_COWER(Local_420.f_8, -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
						Local_420.f_9 = 47;
					}
					break;
				
				case 47:
					if (!PED::IS_PED_RAGDOLL(Local_420.f_8))
					{
						if (!GlobalFunc_6964(Local_420.f_8, 474215631))
						{
							Local_420.f_9 = 46;
						}
						else if (ENTITY::IS_ENTITY_IN_WATER(Local_420.f_8))
						{
							Local_420.f_9 = 44;
						}
					}
					break;
				
				case 49:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "exit_panic_gardener", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "exit_gardener", 3))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_420.f_8, 64, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_420.f_8, 128, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_420.f_8, 2, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_420.f_8, 8, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_420.f_8, 1, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_420.f_8, 32, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_420.f_8, 4, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_420.f_8, 5, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_420.f_8, 17, 1);
						if (GlobalFunc_115(Local_483[0 /*9*/]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_483[0 /*9*/], Local_420.f_8))
							{
								ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
							}
							GlobalFunc_5721(&(Local_483[0 /*9*/]), 0);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(Local_420.f_8);
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_420.f_8))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_420.f_8, Local_728);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_420.f_8, "rcmnigel1b", "idle_gardener", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_420.f_8, "rcmnigel1b", "exit_panic_gardener", 8f, -4f, -1, 8192, 0, 0, 0, 0);
						}
						else
						{
							if ((!PED::IS_PED_RAGDOLL(Local_420.f_8) && !PED::IS_PED_SWIMMING(Local_420.f_8)) && !PED::IS_PED_CLIMBING(Local_420.f_8))
							{
								TASK::TASK_REACT_AND_FLEE_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID());
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID(), 150f, -1, 1, 0);
							}
							Local_420.f_9 = 50;
						}
					}
					break;
				
				case 50:
					if (!GlobalFunc_6964(Local_420.f_8, 1805844857) && !GlobalFunc_6964(Local_420.f_8, 2112745624))
					{
						Local_420.f_9 = 49;
					}
					break;
				
				default:
					break;
				}
			}
	}
}

int func_288(int iParam0, bool bParam1)//Position - 0x27ED9
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		if (func_289(1, 0, 1))
		{
			fVar0 = 40f;
			if (GlobalFunc_775(iParam0, Local_728, fVar0))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 4f, 1))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		return 1;
	}
	fVar1 = 15f;
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var5 = { Var2 };
	Var2.x = (Var2.x - fVar1);
	Var2.f_1 = (Var2.f_1 - fVar1);
	Var2.f_2 = (Var2.f_2 - fVar1);
	Var5.x = (Var5.x + fVar1);
	Var5.f_1 = (Var5.f_1 + fVar1);
	Var5.f_2 = (Var5.f_2 + fVar1);
	if (MISC::IS_PROJECTILE_IN_AREA(Var2, Var5, 1))
	{
		return 1;
	}
	return 0;
}

int func_289(bool bParam0, bool bParam1, bool bParam2)//Position - 0x27FD6
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	switch (iVar0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_smg"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_rpg"):
		case joaat("weapon_minigun"):
			return 1;
		
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("weapon_grenade"):
			case joaat("weapon_stickybomb"):
			case joaat("weapon_molotov"):
				return 1;
			}
		
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("weapon_knife"):
			case joaat("weapon_hammer"):
			case joaat("weapon_crowbar"):
			case joaat("weapon_bottle"):
			case default:
			}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("weapon_stungun"))
		{
			return 1;
		}
	}
	return 0;
}


int func_291(var uParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x280FE
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(*uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(&cLocal_653);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_653))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar0)
				{
					case 0:
						sParam1 = "react_small_variations_k";
						break;
					
					case 1:
						sParam1 = "react_small_variations_m";
						break;
					
					case 2:
						sParam1 = "react_small_variations_n";
						break;
					
					case 3:
						sParam1 = "react_small_variations_o";
						break;
					}
			}
			TASK::TASK_PLAY_ANIM(*uParam0, &cLocal_653, sParam1, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, iParam8, 0);
			return 1;
		}
	}
	return 0;
}


bool func_293(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x281C8
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_301(iParam0, iParam1);
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
		iVar4 = func_296();
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



int func_296()//Position - 0x2847A
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





int func_301(int iParam0, int iParam1)//Position - 0x285D0
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

int func_302(char* sParam0, bool bParam1)//Position - 0x2860F
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_2209() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
		{
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_303(sParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(char* sParam0)//Position - 0x28657
{
	if (iLocal_539 == 2 || iLocal_539 == 4)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &sLocal_697))
		{
			return 1;
		}
	}
	return 0;
}


int func_305(int iParam0, float fParam1)//Position - 0x286C9
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			return 1;
		}
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iParam0, fParam1))
		{
			if (func_306(iParam0, 1126825984))
			{
				if ((PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_306(int iParam0, float fParam1)//Position - 0x2873E
{
	return func_293(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


int func_308(char* sParam0, bool bParam1)//Position - 0x28776
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
		{
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_270(sParam0))
		{
			return 1;
		}
	}
	return 0;
}


int func_310(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x287E2
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam4 == 0)
	{
		if (MISC::GET_PROFILE_SETTING(203) != 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = true;
				iParam4 = 1;
			}
		}
	}
	if (func_311(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		if (bVar0)
		{
			iLocal_539 = 3;
		}
		else
		{
			func_23(&sLocal_697, &cLocal_703);
		}
		return 1;
	}
	return 0;
}

bool func_311(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6)//Position - 0x2883A
{
	GlobalFunc_513(uParam0, 145, sParam1, iParam4, iParam5, uParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return GlobalFunc_9625(sParam2, iParam3, 0);
}

int func_312()//Position - 0x28888
{
	float fVar0;
	
	if (iLocal_536 == 3)
	{
		if (GlobalFunc_4947(iLocal_804))
		{
			fVar0 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_804, 2);
			if (fVar0 < 0.49f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_313(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x288BB
{
	int iVar0;
	
	if (!GlobalFunc_115(Local_420.f_8))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_BEING_STEALTH_KILLED(Local_420.f_8))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
	}
	if (bParam0)
	{
		if (func_315(Local_420.f_8, 0))
		{
			if (PED::CAN_PED_SEE_HATED_PED(Local_420.f_8, PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_2319(iParam1, 10))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (iLocal_535 == 2 || iLocal_535 == 3)
		{
			if (GlobalFunc_775(Local_420.f_8, Local_728, 7f))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (iLocal_535 == 4)
		{
			if (GlobalFunc_775(Local_420.f_8, Local_728, 3.5f))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_BEING_STUNNED(Local_420.f_8, 0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (iVar0 == joaat("weapon_stungun"))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_420.f_8, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}


int func_315(int iParam0, bool bParam1)//Position - 0x289C8
{
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	if (iLocal_535 == 0 || iLocal_535 == 1)
	{
		PED::SET_PED_SEEING_RANGE(iParam0, 15f);
		PED::SET_PED_HEARING_RANGE(iParam0, 0f);
	}
	else if (iLocal_535 == 2 || iLocal_535 == 3)
	{
		PED::SET_PED_SEEING_RANGE(iParam0, 22f);
		PED::SET_PED_HEARING_RANGE(iParam0, 10f);
	}
	else
	{
		PED::SET_PED_SEEING_RANGE(iParam0, 18f);
		PED::SET_PED_HEARING_RANGE(iParam0, 5f);
	}
	return 1;
}

int func_316(int iParam0)//Position - 0x28A4A
{
	int iVar0;
	
	if (iLocal_536 == iParam0)
	{
		if (func_317() == 5)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_4947(iVar0))
			{
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_317()//Position - 0x28A84
{
	return iLocal_535;
}

int func_318(int iParam0, float fParam1, int iParam2, float fParam3)//Position - 0x28A8F
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (func_289(1, 1, 1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			if (MISC::IS_BULLET_IN_AREA(Var0, iParam2, 1))
			{
				return 1;
			}
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iParam0, fParam1))
			{
				if (func_315(iParam0, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
						{
							return 1;
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
					return 1;
				}
			}
			Var3 = { Var0 };
			Var6 = { Var3 };
			Var3.x = (Var3.x - fParam3);
			Var3.f_1 = (Var3.f_1 - fParam3);
			Var3.f_2 = (Var3.f_2 - fParam3);
			Var6.x = (Var6.x + fParam3);
			Var6.f_1 = (Var6.f_1 + fParam3);
			Var6.f_2 = (Var6.f_2 + fParam3);
			if (MISC::IS_PROJECTILE_IN_AREA(Var3, Var6, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319()//Position - 0x28BA1
{
	int iVar0;
	
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if ((iLocal_536 == 3 || iLocal_536 == 2) || iLocal_536 == 1)
		{
			if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
				if (iVar0 != joaat("weapon_stickybomb"))
				{
					if (func_289(1, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_320(int iParam0, var uParam1)//Position - 0x28C06
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_293(iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_321()//Position - 0x28C34
{
	int iVar0;
	struct<6> Var1;
	struct<6> Var7;
	char* sVar13;
	int iVar14;
	struct<3> Var15;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_320(Local_434[iVar0 /*14*/].f_8, &(Local_434[iVar0 /*14*/].f_13));
		iVar0++;
	}
	if (iLocal_537 != 6)
	{
		if (func_346())
		{
			func_15(6, 1);
		}
	}
	switch (iLocal_537)
	{
		case 0:
			if ((iLocal_534 == 2 && GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8)) && func_69(Local_420.f_8, 1))
			{
				iLocal_399 = MISC::GET_GAME_TIMER();
				func_15(2, 1);
			}
			else
			{
				func_343();
				if (iLocal_536 == 2)
				{
					if (!iLocal_340)
					{
						if (Local_434[0 /*14*/].f_9 != 0)
						{
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_P0", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 4f, 0);
								iLocal_340 = 1;
							}
						}
					}
					else if (Local_434[0 /*14*/].f_9 == 5)
					{
						if (!func_308("NIG1B_P0", 1))
						{
							Local_434[0 /*14*/].f_9 = 6;
						}
					}
					else if (Local_434[0 /*14*/].f_9 == 10)
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_P1", 7, 0, 0, 0))
						{
							Local_434[0 /*14*/].f_9 = 11;
						}
					}
					else if (!iLocal_338)
					{
						if (Local_434[0 /*14*/].f_9 == 12)
						{
							if (!func_308("NIG1B_P1", 1))
							{
								if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_P2", 7, 0, 0, 0))
								{
									iLocal_338 = 1;
								}
							}
						}
					}
					else if (Local_434[0 /*14*/].f_9 == 13 || Local_434[0 /*14*/].f_9 == 12)
					{
						if (!func_308("NIG1B_P2", 1))
						{
							Local_434[0 /*14*/].f_9 = 14;
						}
					}
					else if (!iLocal_336)
					{
						if ((Local_434[0 /*14*/].f_9 == 17 || Local_434[0 /*14*/].f_9 == 18) || Local_434[0 /*14*/].f_9 == 19)
						{
							if (!GlobalFunc_111() && !func_270("NULL"))
							{
								if (iLocal_364)
								{
									if (func_341(&uLocal_159, "NIG1BAU", "NIG1B_P3", &Local_647, 7, 1, 0))
									{
										iLocal_364 = 0;
										iLocal_336 = 1;
									}
								}
								else if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_P3", 7, 0, 0, 0))
								{
									iLocal_336 = 1;
								}
							}
						}
					}
					else if (!iLocal_337)
					{
						if (!func_308("NIG1B_P3", 1))
						{
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_IDLE", 7, 0, 0, 0))
							{
								iLocal_400 = MISC::GET_GAME_TIMER();
								iLocal_337 = 1;
							}
						}
					}
					else if (!func_308("NIG1B_IDLE", 1))
					{
						if (iLocal_354)
						{
							if (GlobalFunc_2311(iLocal_400, 150000000))
							{
							}
						}
					}
					else
					{
						iLocal_400 = MISC::GET_GAME_TIMER();
					}
				}
				else if (GlobalFunc_111() && !func_270("NULL"))
				{
					Var1 = { GlobalFunc_560() };
					if ((((MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P0") || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P1")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P2")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P3")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_IDLE"))
					{
						func_22(1, 0);
					}
					else if (MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P3"))
					{
						Var7 = { GlobalFunc_514() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
						{
							iLocal_364 = 1;
							iLocal_336 = 0;
							Local_647 = { Var7 };
							func_22(1, 0);
						}
					}
				}
				if (!func_338())
				{
					func_15(3, 1);
				}
			}
			if (func_319() || func_337())
			{
				func_15(5, 1);
			}
			break;
		
		case 1:
			if ((iLocal_534 == 2 && GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8)) && func_69(Local_420.f_8, 1))
			{
				func_15(2, 1);
			}
			else
			{
				if (iLocal_536 == 2)
				{
					if (!iLocal_335)
					{
						func_22(1, 0);
						func_23(&sLocal_697, &cLocal_703);
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_CPT", 7, 0, 0, 0))
						{
							iLocal_335 = 1;
						}
					}
					else if (iLocal_358)
					{
						if (!iLocal_339)
						{
							func_22(0, 0);
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_CSC", 7, 0, 0, 0))
							{
								iLocal_339 = 1;
							}
						}
						else if (!GlobalFunc_111() && !func_270("NULL"))
						{
							if (Local_434[0 /*14*/].f_9 == 22 || Local_434[0 /*14*/].f_9 == 23)
							{
								Local_434[0 /*14*/].f_9 = 24;
							}
						}
					}
					if (!func_338())
					{
						func_15(3, 1);
					}
				}
				if (func_319() || func_337())
				{
					func_15(5, 1);
				}
			}
			break;
		
		case 2:
			if (iLocal_536 == 2)
			{
				if (!iLocal_346)
				{
					if (!GlobalFunc_2311(iLocal_408, 2000))
					{
						if (GlobalFunc_2311(iLocal_408, 500))
						{
							func_22(0, 0);
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0))
							{
								iLocal_346 = 1;
								iLocal_408 = 0;
							}
						}
					}
					else if ((iLocal_534 == 2 && GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8)) && func_69(Local_420.f_8, 1))
					{
						if (!bLocal_329)
						{
							func_22(0, 0);
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GIC", 7, 0, 0, 0))
							{
								iLocal_399 = MISC::GET_GAME_TIMER();
								bLocal_329 = true;
							}
						}
						else if (!bLocal_342)
						{
							if (!GlobalFunc_111() && !func_270("NULL"))
							{
								bLocal_342 = func_310(&uLocal_159, "NIG1BAU", "NIG1B_SPO", 7, 0, 0, 0);
								bLocal_342 = true;
							}
						}
						else if (!GlobalFunc_111() && !func_270("NULL"))
						{
							func_15(4, 1);
							return;
						}
					}
					else
					{
						func_15(3, 0);
						return;
					}
				}
				else if (!GlobalFunc_111() && !func_270("NULL"))
				{
					func_15(4, 1);
					return;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_399) > 10000)
			{
				func_15(4, 1);
				bLocal_329 = true;
				return;
			}
			if ((func_319() || func_337()) || func_336())
			{
				func_15(5, 1);
				return;
			}
			break;
		
		case 3:
			if (!iLocal_341)
			{
				if (bLocal_342)
				{
					iLocal_341 = 1;
				}
				else if (iLocal_536 == 2)
				{
					if (GlobalFunc_111())
					{
						func_22(0, 0);
					}
					else
					{
						if (iLocal_394 == 1)
						{
							sVar13 = "NIG1B_SPI_2";
						}
						else
						{
							sVar13 = "NIG1B_SPI_1";
						}
						if (func_334(&uLocal_159, "NIG1BAU", "NIG1B_SPI", sVar13, 7, 0, 0))
						{
							iLocal_341 = 1;
						}
					}
				}
			}
			else
			{
				func_61(0);
				if (iLocal_536 == 2)
				{
					if (!GlobalFunc_2311(iLocal_408, 2000))
					{
						if (!iLocal_346)
						{
							if (GlobalFunc_2311(iLocal_408, 500))
							{
								func_22(0, 0);
								if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0))
								{
									iLocal_346 = 1;
									iLocal_408 = 0;
								}
							}
						}
					}
					else if (!bLocal_342)
					{
						if (!GlobalFunc_111() && !func_270("NULL"))
						{
							bLocal_342 = func_310(&uLocal_159, "NIG1BAU", "NIG1B_SPO", 7, 0, 0, 0);
						}
					}
					else if (!GlobalFunc_111() && !func_270("NULL"))
					{
						iLocal_399 = MISC::GET_GAME_TIMER();
						func_15(4, 1);
					}
				}
				else
				{
					iLocal_399 = MISC::GET_GAME_TIMER();
					func_15(4, 1);
				}
			}
			if (func_319() || func_337())
			{
				func_15(5, 1);
				return;
			}
			break;
		
		case 4:
			if (!iLocal_334)
			{
				if (iLocal_325)
				{
					if (iLocal_536 == 2)
					{
						func_22(0, 0);
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_CC", 7, 0, 0, 0))
						{
							iLocal_399 = MISC::GET_GAME_TIMER();
							iLocal_334 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_399) > 4000)
					{
						iLocal_399 = MISC::GET_GAME_TIMER();
						iLocal_334 = 1;
						iLocal_351 = 0;
					}
				}
			}
			else
			{
				if (!bLocal_362)
				{
					if (!func_308("NIG1B_CC", 1))
					{
						if (Local_434[0 /*14*/].f_9 == 28 || Local_434[0 /*14*/].f_9 == 29)
						{
							Local_434[0 /*14*/].f_9 = 30;
						}
						if (iLocal_95 == 0 || iLocal_95 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_399) > 500)
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									bLocal_362 = true;
								}
								else
								{
									if (!func_333())
									{
										func_332();
									}
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
									iLocal_406 = MISC::GET_GAME_TIMER();
									bLocal_362 = true;
								}
							}
						}
					}
					else
					{
						iLocal_399 = MISC::GET_GAME_TIMER();
					}
				}
				else if (!iLocal_351)
				{
					if (iLocal_536 == 2)
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_CC3", 7, 0, 0, 0))
						{
							iLocal_399 = MISC::GET_GAME_TIMER();
							iLocal_351 = 1;
						}
					}
				}
				else
				{
					if (!func_308(&Local_691, 1))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_434[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_434[0 /*14*/].f_8))
						{
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TBUMP", 7, 0, 0, 0))
							{
								StringCopy(&Local_691, "NIG1B_TBUMP", 24);
							}
						}
						else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_434[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_434[1 /*14*/].f_8))
						{
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GBUMP", 7, 0, 0, 0))
							{
								StringCopy(&Local_691, "NIG1B_GBUMP", 24);
							}
						}
					}
					if (GlobalFunc_111())
					{
						iLocal_406 = MISC::GET_GAME_TIMER();
					}
					else if (iLocal_536 == 2)
					{
						if (GlobalFunc_2311(iLocal_406, 3000))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 5)
							{
								if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[0 /*14*/].f_8))
								{
									if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_CC2", 7, 0, 0, 0))
									{
										iLocal_406 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (func_331())
							{
								iLocal_406 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (Local_434[0 /*14*/].f_9 == 31)
				{
					Local_434[0 /*14*/].f_9 = 32;
				}
			}
			if ((func_319() || func_337()) || func_336())
			{
				if (iLocal_334 && !func_308("NIG1B_CC", 1))
				{
					bLocal_365 = false;
				}
				else
				{
					bLocal_365 = true;
				}
				func_15(5, 1);
				return;
			}
			break;
		
		case 5:
			func_61(0);
			if (iLocal_536 == 2)
			{
				if (!iLocal_343)
				{
					func_22(0, 0);
					if (bLocal_365)
					{
						StringCopy(&Local_685, "NIG1B_SCC", 24);
						if (func_310(&uLocal_159, "NIG1BAU", &Local_685, 7, 0, 0, 0))
						{
							iLocal_343 = 1;
						}
					}
					else if (func_289(1, 0, 0))
					{
						StringCopy(&Local_685, "NIG1B_SUR", 24);
						if (func_310(&uLocal_159, "NIG1BAU", &Local_685, 7, 0, 0, 0))
						{
							iLocal_343 = 1;
						}
					}
					else
					{
						StringCopy(&Local_685, "NIG1B_SNL", 24);
						if (func_310(&uLocal_159, "NIG1BAU", &Local_685, 7, 0, 0, 0))
						{
							iLocal_343 = 1;
						}
					}
					iLocal_396 = MISC::GET_GAME_TIMER();
				}
				else if (!func_308(&Local_685, 1))
				{
					if (!iLocal_346)
					{
						if (!GlobalFunc_2311(iLocal_408, 2000))
						{
							if (GlobalFunc_2311(iLocal_408, 500))
							{
								if (!GlobalFunc_111() && !func_270("NULL"))
								{
									if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0))
									{
										iLocal_408 = 0;
										iLocal_346 = 1;
									}
								}
							}
						}
					}
					func_330();
				}
			}
			else
			{
				if (!bLocal_362)
				{
					if (!iLocal_347)
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							bLocal_362 = true;
						}
						else if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[1 /*14*/].f_8) && GlobalFunc_775(Local_434[1 /*14*/].f_8, Local_728, 50f))
						{
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_C1", 7, 0, 0, 0))
							{
								iLocal_399 = MISC::GET_GAME_TIMER();
								iLocal_347 = 1;
							}
						}
						else
						{
							iLocal_399 = MISC::GET_GAME_TIMER();
							iLocal_347 = 1;
						}
					}
					else if (!func_308("NIG1B_C1", 1))
					{
						if (iLocal_95 == 0 || iLocal_95 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_399) > 2000)
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									bLocal_362 = true;
								}
								else
								{
									if (!func_333())
									{
										func_332();
									}
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
									bLocal_362 = true;
								}
							}
						}
					}
					else
					{
						iLocal_399 = MISC::GET_GAME_TIMER();
					}
				}
				if (iLocal_536 == 0)
				{
					if (GlobalFunc_2311(iLocal_407, 5000))
					{
						func_15(6, 1);
					}
				}
				else
				{
					iLocal_407 = MISC::GET_GAME_TIMER();
				}
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (GlobalFunc_115(Local_434[iVar0 /*14*/].f_8))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_434[iVar0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_434[iVar0 /*14*/].f_8);
						func_22(0, 0);
						if (iVar0 == 0)
						{
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_THIT", 7, 0, 0, 0))
							{
							}
							iLocal_418 = 0;
						}
						else if (iVar0 == 1)
						{
							if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GHIT", 7, 0, 0, 0))
							{
							}
							iLocal_418 = 1;
						}
						func_15(6, 1);
						return;
					}
				}
				iVar0++;
			}
			break;
		
		case 6:
			if (GlobalFunc_111())
			{
				iLocal_405 = MISC::GET_GAME_TIMER();
			}
			else if (iLocal_418 != -1)
			{
				if (iLocal_418 == 0)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_434[0 /*14*/].f_8, 0), Local_728) < (20f * 20f))
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_PBU", 7, 0, 0, 0))
						{
							iLocal_418 = -1;
						}
					}
					else
					{
						iLocal_418 = -1;
					}
				}
				else if (iLocal_418 == 1)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_434[1 /*14*/].f_8, 0), Local_728) < (20f * 20f))
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_BEAT", 7, 0, 0, 0))
						{
							iLocal_418 = -1;
						}
					}
					else
					{
						iLocal_418 = -1;
					}
				}
				else
				{
					iLocal_418 = -1;
				}
			}
			else if (GlobalFunc_2311(iLocal_405, 3000))
			{
				iVar14 = func_329(Local_728, 20f);
				if (iVar14 != -1)
				{
					if (iVar14 == 0)
					{
						StringCopy(&Var15, "NIG1B_CF1", 24);
					}
					else if (iVar14 == 1)
					{
						StringCopy(&Var15, "NIG1B_CF2", 24);
					}
					if (func_310(&uLocal_159, "NIG1BAU", &Var15, 7, 0, 0, 0))
					{
						iLocal_405 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (!bLocal_362)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_362 = true;
				}
				else if (!iLocal_347)
				{
					iLocal_399 = MISC::GET_GAME_TIMER();
					iLocal_347 = 1;
				}
				else if (iLocal_95 == 0 || iLocal_95 == 1)
				{
					if (GlobalFunc_2311(iLocal_399, 8000))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							bLocal_362 = true;
						}
						else
						{
							if (!func_333())
							{
								func_332();
							}
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							bLocal_362 = true;
						}
					}
				}
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_322(iVar0);
		iVar0++;
	}
}

void func_322(int iParam0)//Position - 0x29A33
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	char[] cVar20[8];
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	struct<3> Var28;
	float fVar31;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[iParam0 /*14*/].f_8))
	{
		PED::SET_PED_RESET_FLAG(Local_434[iParam0 /*14*/].f_8, 187, 1);
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_434[iParam0 /*14*/].f_9)
			{
				case 0:
					if (iParam0 == 0)
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, -982327190))
						{
							TASK::TASK_STAND_STILL(Local_434[iParam0 /*14*/].f_8, -1);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (iLocal_386 == 1)
						{
							iVar0 = 0;
						}
						else if (iLocal_386 == 0)
						{
							iVar0 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_712[iVar0 /*3*/], 2f, 20000, fLocal_373[iVar0], 1056964608);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
						Local_434[iParam0 /*14*/].f_9 = 2;
					}
					break;
				
				case 2:
					if (iParam0 == 0)
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
						{
							Local_434[iParam0 /*14*/].f_9 = 3;
						}
					}
					break;
				
				case 3:
					if (iParam0 == 0)
					{
						if (iLocal_386 == 1)
						{
							iVar1 = 1;
						}
						else if (iLocal_386 == 0)
						{
							iVar1 = 0;
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_712[iVar1 /*3*/], 2f, 20000, fLocal_373[iVar1], 1056964608);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
						Local_434[iParam0 /*14*/].f_9 = 4;
					}
					break;
				
				case 4:
					if (iParam0 == 0)
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
						{
							Local_434[iParam0 /*14*/].f_9 = 5;
						}
					}
					break;
				
				case 5:
					if (iParam0 == 0)
					{
					}
					break;
				
				case 6:
					if (iParam0 == 0)
					{
						if (GlobalFunc_115(Local_434[1 /*14*/].f_8))
						{
							if (iLocal_386 == 1)
							{
								iVar2 = 0;
							}
							else if (iLocal_386 == 0)
							{
								iVar2 = 1;
							}
							TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_712[iVar2 /*3*/], 2f, 20000, 1193033728, 1056964608);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
							TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
							TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
							Local_434[iParam0 /*14*/].f_9 = 7;
						}
					}
					break;
				
				case 7:
					if (iParam0 == 0)
					{
						if (iLocal_386 == 1)
						{
							iVar3 = 0;
						}
						else if (iLocal_386 == 0)
						{
							iVar3 = 1;
						}
						if (GlobalFunc_115(Local_434[1 /*14*/].f_8))
						{
							if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
							{
								if (GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_712[iVar3 /*3*/], 2.5f))
								{
									Local_434[iParam0 /*14*/].f_9 = 8;
								}
								else
								{
									Local_434[iParam0 /*14*/].f_9 = 6;
								}
							}
						}
					}
					break;
				
				case 8:
					if (iParam0 == 0)
					{
						if (iLocal_386 == 1)
						{
							iVar4 = 0;
						}
						else if (iLocal_386 == 0)
						{
							iVar4 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_731[iVar4 /*3*/], 1f, 20000, fLocal_379[iVar4], 1056964608);
						TASK::TASK_CLIMB(0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_9 = 9;
					}
					break;
				
				case 9:
					if (iParam0 == 0)
					{
						if (iLocal_386 == 1)
						{
							iVar5 = 0;
						}
						else if (iLocal_386 == 0)
						{
							iVar5 = 1;
						}
						if (GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_738[iVar5 /*3*/], fLocal_382))
						{
							if (GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_434[iParam0 /*14*/].f_8);
								Local_434[iParam0 /*14*/].f_9 = 10;
							}
						}
						else if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
						{
							if (((!ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8) && !GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_752, fLocal_383)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0)) && !PED::IS_PED_CLIMBING(Local_434[iParam0 /*14*/].f_8))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_434[iParam0 /*14*/].f_8);
								Local_434[iParam0 /*14*/].f_9 = 10;
							}
							else
							{
								Local_434[iParam0 /*14*/].f_9 = 8;
							}
						}
					}
					break;
				
				case 10:
					break;
				
				case 11:
					if (iParam0 == 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
						TASK::TASK_PLAY_ANIM(0, &cLocal_669, "that_had_to_be_tyler", 4f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						PED::SET_PED_RESET_FLAG(Local_434[iParam0 /*14*/].f_8, 206, 1);
						Local_434[iParam0 /*14*/].f_9 = 12;
					}
					break;
				
				case 12:
					if (iParam0 == 0)
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
						{
							Local_434[iParam0 /*14*/].f_9 = 13;
						}
						else
						{
							PED::SET_PED_RESET_FLAG(Local_434[iParam0 /*14*/].f_8, 206, 1);
						}
					}
					break;
				
				case 13:
					break;
				
				case 14:
					if (iParam0 == 0)
					{
						if (iLocal_386 == 1)
						{
							iVar6 = 0;
						}
						else if (iLocal_386 == 0)
						{
							iVar6 = 1;
						}
						Var7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_669, "ENTER", Local_794, Local_797, 0, 2) };
						Var10 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&cLocal_669, "ENTER", Local_794, Local_797, 0, 2) };
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_434[iParam0 /*14*/].f_8, 1);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_434[iParam0 /*14*/].f_8, 0);
						PED::SET_PED_ALTERNATE_WALK_ANIM(Local_434[iParam0 /*14*/].f_8, &cLocal_669, "walk_tyler", 1090519040, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_745[iVar6 /*3*/], 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var7, 1f, 20000, 0.25f, 512, Var10.f_2);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
						TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_9 = 15;
					}
					break;
				
				case 15:
					if (iParam0 == 0)
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
						{
							Var13 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_669, "ENTER", Local_794, Local_797, 0, 2) };
							if (GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Var13, 1f))
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_434[iParam0 /*14*/].f_8, -1056964608);
								Local_434[iParam0 /*14*/].f_9 = 16;
							}
							else
							{
								Local_434[iParam0 /*14*/].f_9 = 14;
							}
						}
					}
					break;
				
				case 16:
					if (iParam0 == 0)
					{
						func_325(1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_9 = 18;
					}
					break;
				
				case 17:
					if (iParam0 == 0)
					{
						if (GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, -2017877118))
						{
							Local_434[iParam0 /*14*/].f_9 = 18;
						}
						else
						{
							Local_434[iParam0 /*14*/].f_9 = 16;
						}
					}
					break;
				
				case 18:
					if (iParam0 == 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[1]))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_410[1]) > 0.999f)
							{
								func_325(2);
								Local_434[iParam0 /*14*/].f_9 = 19;
								Local_434[1 /*14*/].f_9 = 20;
							}
						}
						else
						{
							func_325(2);
							Local_434[iParam0 /*14*/].f_9 = 19;
							Local_434[1 /*14*/].f_9 = 20;
						}
					}
					break;
				
				case 19:
					if (iParam0 == 0)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[3]))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[2]))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_410[2]) > 0.999f)
								{
									func_325(3);
								}
							}
							else
							{
								func_325(3);
							}
						}
					}
					break;
				
				case 20:
					break;
				
				case 21:
					break;
				
				case 22:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[3]) && !GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 1785177548))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_745[0 /*3*/], 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_709, 1f, 20000, 0.25f, 0, 223.4962f);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1b", "wipehead", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_9 = 23;
					}
					break;
				
				case 23:
					if (GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_709, 1.25f))
					{
						iLocal_358 = 1;
					}
					else if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
					{
						Local_434[iParam0 /*14*/].f_9 = 22;
					}
					break;
				
				case 24:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1049.915f, 357.2381f, 68.9132f, 1f, 20000, 0.25f, 0, 71.1227f);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1048.417f, 364.7032f, 68.9129f, 1f, 20000, 0.25f, 0, 6.9753f);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_541, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
					TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
					TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
					Local_434[iParam0 /*14*/].f_9 = 25;
					break;
				
				case 25:
					if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
					{
						Local_434[iParam0 /*14*/].f_9 = 24;
					}
					break;
				
				case 26:
					if ((ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8) || GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_752, fLocal_383)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						Var16 = { Local_745[0 /*3*/] };
						fVar19 = 201.7237f;
						if (GlobalFunc_1986(Local_728, Var16, 2.5f))
						{
							Var16 = { Local_745[1 /*3*/] };
							fVar19 = 325.0476f;
						}
						TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_434[iParam0 /*14*/].f_8, Var16, 1f, 20000, 0.25f, 0, fVar19);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_9 = 27;
					}
					else
					{
						Local_434[iParam0 /*14*/].f_9 = 28;
					}
					break;
				
				case 27:
					if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 713668775))
					{
						Local_434[iParam0 /*14*/].f_9 = 26;
					}
					else if (!ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8))
					{
						if (!GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_752, fLocal_383))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
							{
								if (!PED::IS_PED_CLIMBING(Local_434[iParam0 /*14*/].f_8))
								{
									if (!GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, -1057.136f, 369.1722f, 69.18319f, 1.25f))
									{
										if (!GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, -1057.108f, 354.7688f, 69.19383f, 1.25f))
										{
											if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, -1051.34f, 358.4045f, 66.91455f, -1051.362f, 365.5106f, 71.91416f, 2.25f, 0, 1, 0))
											{
												TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
												Local_434[iParam0 /*14*/].f_9 = 28;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 28:
					if (!GlobalFunc_115(Local_474))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_474))
						{
							OBJECT::DELETE_OBJECT(&Local_474);
						}
						STREAMING::REQUEST_MODEL(Local_474.f_1);
						if (STREAMING::HAS_MODEL_LOADED(Local_474.f_1))
						{
							Local_474 = OBJECT::CREATE_OBJECT(Local_474.f_1, ENTITY::GET_ENTITY_COORDS(Local_434[iParam0 /*14*/].f_8, 1) + Vector(-10f, 0f, 0f), 1, 1, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_474.f_1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_474, Local_434[iParam0 /*14*/].f_8))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_474, Local_434[iParam0 /*14*/].f_8, PED::GET_PED_BONE_INDEX(Local_434[iParam0 /*14*/].f_8, 28422), Local_474.f_2, Local_474.f_5, 1, 1, 0, 0, 2, 1);
						}
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 768, 2);
						TASK::TASK_USE_MOBILE_PHONE(Local_434[iParam0 /*14*/].f_8, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						iLocal_397 = MISC::GET_GAME_TIMER();
						Local_434[iParam0 /*14*/].f_9 = 29;
					}
					break;
				
				case 29:
					if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_434[iParam0 /*14*/].f_8))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 768, 2);
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_397) > 1500)
						{
							iLocal_325 = 1;
						}
					}
					else
					{
						iLocal_325 = 0;
						Local_434[iParam0 /*14*/].f_9 = 28;
					}
					break;
				
				case 30:
					if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_434[iParam0 /*14*/].f_8))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_434[iParam0 /*14*/].f_8, 0, 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
					}
					else
					{
						GlobalFunc_5721(&Local_474, 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						Local_434[iParam0 /*14*/].f_9 = 31;
					}
					break;
				
				case 31:
					break;
				
				case 32:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_434[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", 3))
					{
						TASK::STOP_ANIM_TASK(Local_434[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", -4f);
					}
					if (iParam0 == 0)
					{
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_434[iParam0 /*14*/].f_8, -1056964608);
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
						Local_434[iParam0 /*14*/].f_9 = 33;
					}
					else if (iParam0 == 1)
					{
						if (func_324())
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
							Local_434[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
							Local_434[iParam0 /*14*/].f_9 = 33;
						}
					}
					break;
				
				case 33:
					if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, -2017877118))
					{
						if (!PED::IS_PED_FACING_PED(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, -875674219))
							{
								Local_434[iParam0 /*14*/].f_9 = 32;
							}
						}
						else if ((GlobalFunc_2311(Local_434[iParam0 /*14*/].f_11, MISC::GET_RANDOM_INT_IN_RANGE(750, 3000)) && !ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
						{
							if (iParam0 == 1)
							{
								cVar20 = "react_small_variations_k";
							}
							else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
							{
								cVar20 = "react_small_variations_m";
							}
							else
							{
								cVar20 = "react_small_variations_n";
							}
							if (func_291(&(Local_434[iParam0 /*14*/].f_8), cVar20, 4f, -4f, -1, 0, 0, 0, 0))
							{
								Local_434[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						if (!PED::IS_PED_FACING_PED(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 170f))
						{
							TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						}
						Local_434[iParam0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
					}
					if (iParam0 == 1)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 1))
						{
							Local_434[iParam0 /*14*/].f_9 = 42;
						}
					}
					break;
				
				case 36:
					if (GlobalFunc_115(Local_420.f_8) && iLocal_537 == 2)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_434[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", 3))
						{
							TASK::STOP_ANIM_TASK(Local_434[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", -4f);
						}
						if (iParam0 == 0)
						{
							PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_434[iParam0 /*14*/].f_8, -1056964608);
						}
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, Local_420.f_8, -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_434[iParam0 /*14*/].f_8, Local_420.f_8, -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_9 = 37;
					}
					else
					{
						Local_434[iParam0 /*14*/].f_9 = 32;
					}
					break;
				
				case 37:
					if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, -875674219))
					{
						Local_434[iParam0 /*14*/].f_9 = 36;
					}
					if (!GlobalFunc_115(Local_420.f_8) || iLocal_537 != 2)
					{
						Local_434[iParam0 /*14*/].f_9 = 32;
					}
					if (iParam0 == 1)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 1))
						{
							Local_434[iParam0 /*14*/].f_9 = 42;
						}
					}
					break;
				
				case 40:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
					if (ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8))
					{
						Var21 = { ENTITY::GET_ENTITY_COORDS(Local_434[iParam0 /*14*/].f_8, 1) };
						if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var21, 1, &Var21, 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var21, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_434[iParam0 /*14*/].f_8);
					TASK::TASK_PERFORM_SEQUENCE(Local_434[iParam0 /*14*/].f_8, uLocal_541);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
					Local_434[iParam0 /*14*/].f_9 = 41;
					break;
				
				case 41:
					if (ENTITY::GET_ENTITY_HEALTH(Local_434[iParam0 /*14*/].f_8) < 180)
					{
						Local_434[iParam0 /*14*/].f_9 = 42;
					}
					else if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
					}
					else if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 242628503))
					{
						Local_434[iParam0 /*14*/].f_9 = 40;
					}
					break;
				
				case 42:
					if (iParam0 == 0)
					{
						if (GlobalFunc_115(Local_474))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_474, Local_434[iParam0 /*14*/].f_8))
							{
								ENTITY::DETACH_ENTITY(Local_474, 1, 1);
							}
							GlobalFunc_5721(&Local_474, 0);
						}
					}
					PED::SET_PED_CAN_RAGDOLL(Local_434[iParam0 /*14*/].f_8, 1);
					if (!PED::IS_PED_RAGDOLL(Local_434[iParam0 /*14*/].f_8))
					{
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						PED::SET_PED_TO_RAGDOLL(Local_434[iParam0 /*14*/].f_8, 1000, 1000, 0, 1, 1, 0);
					}
					Local_434[iParam0 /*14*/].f_9 = 43;
					break;
				
				case 43:
					if (!PED::IS_PED_RAGDOLL(Local_434[iParam0 /*14*/].f_8))
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 474215631) && !GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, -1519143300))
						{
							if ((ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8) || GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_752, fLocal_383)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
							{
								if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 713668775))
								{
									TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
									Var24 = { Local_745[0 /*3*/] };
									fVar27 = 201.7237f;
									if (GlobalFunc_1986(Local_728, Var24, 1.5f))
									{
										Var24 = { Local_745[1 /*3*/] };
										fVar27 = 325.0476f;
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_434[iParam0 /*14*/].f_8, Var24, 1f, 20000, 0.25f, 0, fVar27);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
								}
							}
							else
							{
								PED::SET_PED_COWER_HASH(Local_434[iParam0 /*14*/].f_8, "CODE_HUMAN_STAND_COWER");
								TASK::TASK_COWER(Local_434[iParam0 /*14*/].f_8, -1);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						}
					}
					break;
				
				case 44:
					AUDIO::STOP_PED_SPEAKING(Local_434[iParam0 /*14*/].f_8, 0);
					if (iParam0 == 0)
					{
						if (GlobalFunc_115(Local_474))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_474, Local_434[iParam0 /*14*/].f_8))
							{
								ENTITY::DETACH_ENTITY(Local_474, 1, 1);
							}
							GlobalFunc_5721(&Local_474, 0);
						}
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_434[iParam0 /*14*/].f_8, -1056964608);
					}
					if (func_323(iParam0))
					{
						if ((!PED::IS_PED_RAGDOLL(Local_434[iParam0 /*14*/].f_8) && !TASK::IS_PED_GETTING_UP(Local_434[iParam0 /*14*/].f_8)) && !PED::IS_PED_CLIMBING(Local_434[iParam0 /*14*/].f_8))
						{
							if ((((ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0)) || GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, -1057.136f, 369.1722f, 69.18319f, 1.25f)) || GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, -1057.108f, 354.7688f, 69.19383f, 1.25f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, -1051.34f, 358.4045f, 66.91455f, -1051.362f, 365.5106f, 71.91416f, 2.25f, 0, 1, 0))
							{
								if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 713668775))
								{
									TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
									Var28 = { Local_745[0 /*3*/] };
									fVar31 = 201.7237f;
									if (GlobalFunc_1986(Local_728, Var28, 1.5f))
									{
										Var28 = { Local_745[1 /*3*/] };
										fVar31 = 325.0476f;
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_434[iParam0 /*14*/].f_8, Var28, 1f, 20000, 0.25f, 0, fVar31);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
								}
							}
							else
							{
								TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
								TASK::TASK_LOOK_AT_ENTITY(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_HANDS_UP(Local_434[iParam0 /*14*/].f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
								Local_434[iParam0 /*14*/].f_9 = 45;
							}
						}
					}
					break;
				
				case 45:
					if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 713668775))
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, -1519143300))
						{
							Local_434[iParam0 /*14*/].f_9 = 44;
						}
						else if (ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
						{
							Local_434[iParam0 /*14*/].f_9 = 44;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0))
					{
						if (!GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, -1057.136f, 369.1722f, 69.18319f, 1.25f))
						{
							if (!GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, -1057.108f, 354.7688f, 69.19383f, 1.25f))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, -1051.34f, 358.4045f, 66.91455f, -1051.362f, 365.5106f, 71.91416f, 2.25f, 0, 1, 0))
								{
									Local_434[iParam0 /*14*/].f_9 = 44;
								}
							}
						}
					}
					break;
				
				case 46:
					if ((((ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8) || GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_752, fLocal_383)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iParam0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0)) || PED::IS_PED_CLIMBING(Local_434[iParam0 /*14*/].f_8)) || PED::IS_PED_RAGDOLL(Local_434[iParam0 /*14*/].f_8))
					{
						Local_434[iParam0 /*14*/].f_9 = 44;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_434[iParam0 /*14*/].f_8);
						PED::SET_PED_COWER_HASH(Local_434[iParam0 /*14*/].f_8, "CODE_HUMAN_STAND_COWER");
						TASK::TASK_COWER(Local_434[iParam0 /*14*/].f_8, -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iParam0 /*14*/].f_8, 1);
						Local_434[iParam0 /*14*/].f_9 = 47;
					}
					break;
				
				case 47:
					if (!PED::IS_PED_RAGDOLL(Local_434[iParam0 /*14*/].f_8))
					{
						if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 474215631))
						{
							Local_434[iParam0 /*14*/].f_9 = 46;
						}
						else if (ENTITY::IS_ENTITY_IN_WATER(Local_434[iParam0 /*14*/].f_8))
						{
							Local_434[iParam0 /*14*/].f_9 = 44;
						}
					}
					break;
				
				case 48:
					if (func_323(iParam0))
					{
						if ((!PED::IS_PED_RAGDOLL(Local_434[iParam0 /*14*/].f_8) && !PED::IS_PED_SWIMMING(Local_434[iParam0 /*14*/].f_8)) && !PED::IS_PED_CLIMBING(Local_434[iParam0 /*14*/].f_8))
						{
							AUDIO::STOP_PED_SPEAKING(Local_434[iParam0 /*14*/].f_8, 0);
							if (iParam0 == 0)
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_434[iParam0 /*14*/].f_8, -1056964608);
							}
							PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 64, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 128, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 2, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 8, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 1, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 32, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 4, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 5, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 17, 1);
							TASK::TASK_REACT_AND_FLEE_PED(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID());
							Local_434[iParam0 /*14*/].f_9 = 50;
						}
						else
						{
							Local_434[iParam0 /*14*/].f_9 = 49;
						}
					}
					else
					{
						Local_434[iParam0 /*14*/].f_9 = 49;
					}
					break;
				
				case 49:
					AUDIO::STOP_PED_SPEAKING(Local_434[iParam0 /*14*/].f_8, 0);
					if (iParam0 == 0)
					{
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_434[iParam0 /*14*/].f_8, -1056964608);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 64, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 128, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 2, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 8, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 32, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 4, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_434[iParam0 /*14*/].f_8, 17, 1);
					if (func_323(iParam0))
					{
						TASK::TASK_SMART_FLEE_PED(Local_434[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 150f, -1, 1, 0);
						Local_434[iParam0 /*14*/].f_9 = 50;
					}
					break;
				
				case 50:
					if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 1805844857) && !GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 2112745624))
					{
						Local_434[iParam0 /*14*/].f_9 = 49;
					}
					break;
				
				default:
					break;
				}
		}
		if ((Local_434[iParam0 /*14*/].f_9 == 49 || Local_434[iParam0 /*14*/].f_9 == 48) || Local_434[iParam0 /*14*/].f_9 == 50)
		{
			GlobalFunc_589(&(Local_434[iParam0 /*14*/]));
		}
		else if (iLocal_95 == 0)
		{
			GlobalFunc_661(Local_434[iParam0 /*14*/].f_8, &(Local_434[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0);
		}
		else if (iLocal_537 == 0 || iLocal_537 == 1)
		{
			if (iLocal_536 == 0 && !GlobalFunc_775(Local_434[iParam0 /*14*/].f_8, Local_728, 35f))
			{
				GlobalFunc_589(&(Local_434[iParam0 /*14*/]));
			}
			else
			{
				GlobalFunc_661(Local_434[iParam0 /*14*/].f_8, &(Local_434[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0);
			}
		}
		else
		{
			GlobalFunc_661(Local_434[iParam0 /*14*/].f_8, &(Local_434[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0);
		}
	}
	else
	{
		if (Local_434[iParam0 /*14*/].f_9 != 51)
		{
			if (iParam0 == 0)
			{
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 3))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 3);
				}
				RECORDING::_0x293220DA1B46CEBC(2.5f, 2f, 0);
			}
			Local_434[iParam0 /*14*/].f_9 = 51;
		}
		GlobalFunc_589(&(Local_434[iParam0 /*14*/]));
	}
}

int func_323(int iParam0)//Position - 0x2B716
{
	if (iParam0 == 0)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[0 /*14*/].f_8))
		{
			if (!iLocal_367[0])
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[1]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_410[1]) > 0.55f)
					{
						func_325(4);
					}
					else
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_434[0 /*14*/].f_8, -4f, 1);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_410[1], 1f);
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[3]) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[2]))
				{
					func_325(4);
				}
				iLocal_367[0] = 1;
			}
			else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[4]))
			{
				if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 1785177548))
				{
					return 1;
				}
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[1 /*14*/].f_8))
		{
			if (!iLocal_367[1])
			{
				if (GlobalFunc_6964(Local_434[1 /*14*/].f_8, 1785177548))
				{
					func_325(5);
				}
				iLocal_367[1] = 1;
			}
			else if (func_324())
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[4]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[6]))
				{
					if (!GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 1785177548))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_324()//Position - 0x2B85F
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[1 /*14*/].f_8))
	{
		if (!iLocal_370)
		{
			if (GlobalFunc_6964(Local_434[1 /*14*/].f_8, 1785177548))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[5]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_410[5]) > 0.98f)
					{
						func_325(6);
						iLocal_370 = 1;
					}
				}
				else
				{
					func_325(6);
					iLocal_370 = 1;
				}
			}
			else
			{
				iLocal_370 = 1;
			}
		}
		else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[6]))
		{
			if (!GlobalFunc_6964(Local_434[1 /*14*/].f_8, 1785177548))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_325(int iParam0)//Position - 0x2B8F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_410[iParam0]))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	fVar3 = 8f;
	switch (iParam0)
	{
		case 0:
			iVar1 = 1;
			iVar2 = 0;
			break;
		
		case 1:
			iVar1 = 0;
			iVar2 = 0;
			fVar3 = 4f;
			break;
		
		case 2:
			iVar1 = 0;
			iVar2 = 0;
			fVar3 = 4f;
			break;
		
		case 3:
			iVar1 = 1;
			iVar2 = 0;
			break;
		
		case 4:
			iVar1 = 0;
			iVar2 = 0;
			fVar3 = 4f;
			break;
		
		case 5:
			iVar1 = 0;
			iVar2 = 0;
			fVar3 = 4f;
			break;
		
		case 6:
			iVar1 = 0;
			iVar2 = 0;
			fVar3 = 4f;
			break;
		
		default:
			break;
	}
	iLocal_410[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_794, Local_797, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_410[iParam0], iVar1);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_410[iParam0], iVar2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 6)
		{
			if (iVar0 == 1)
			{
				func_326(iVar0, iLocal_410[iParam0], iParam0, fVar3);
			}
		}
		else if (iParam0 == 1 || iParam0 == 4)
		{
			if (iVar0 == 0)
			{
				func_326(iVar0, iLocal_410[iParam0], iParam0, fVar3);
			}
		}
		else
		{
			func_326(iVar0, iLocal_410[iParam0], iParam0, fVar3);
		}
		iVar0++;
	}
}

void func_326(int iParam0, var uParam1, int iParam2, float fParam3)//Position - 0x2BA53
{
	struct<6> Var0;
	char* sVar6;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[iParam0 /*14*/].f_8))
	{
		Var0 = { func_328(iParam0, iParam2) };
		sVar6 = GlobalFunc_217(&Var0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_434[iParam0 /*14*/].f_8, &cLocal_669, sVar6, 3))
		{
		}
		else
		{
			if (GlobalFunc_6964(Local_434[iParam0 /*14*/].f_8, 1785177548))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_434[iParam0 /*14*/].f_8, -8f, 0);
			}
			TASK::TASK_SYNCHRONIZED_SCENE(Local_434[iParam0 /*14*/].f_8, uParam1, &cLocal_669, sVar6, fParam3, -8f, 17, 0, 1148846080, 0);
			if (bLocal_355)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_434[iParam0 /*14*/].f_8, 0, 0);
			}
		}
	}
}


struct<6> func_328(int iParam0, int iParam1)//Position - 0x2BB04
{
	struct<6> Var0;
	char cVar6[24];
	
	StringCopy(&Var0, "", 24);
	switch (iParam1)
	{
		case 0:
			StringCopy(&Var0, "BASE_", 24);
			break;
		
		case 1:
			StringCopy(&Var0, "ENTER", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "DANCE_INTRO_", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "DANCE_LOOP_", 24);
			break;
		
		case 4:
		case 5:
			StringCopy(&Var0, "REACT_", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "OUTRO_", 24);
			break;
		
		default:
			break;
	}
	StringCopy(&cVar6, "", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar6, "TYLER", 24);
			break;
		
		case 1:
			StringCopy(&cVar6, "GIRL", 24);
			break;
		
		default:
			break;
	}
	StringConCat(&Var0, &cVar6, 24);
	if (iParam1 == 1)
	{
		StringCopy(&Var0, "ENTER", 24);
	}
	return Var0;
}

int func_329(struct<3> Param0, float fParam3)//Position - 0x2BBD2
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[iVar0 /*14*/].f_8))
	{
		if (fParam3 == -1f)
		{
			return iVar0;
		}
		else if (GlobalFunc_775(Local_434[iVar0 /*14*/].f_8, Param0, fParam3))
		{
			return iVar0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[iVar0 /*14*/].f_8))
		{
			if (fParam3 == -1f)
			{
				return iVar0;
			}
			else if (GlobalFunc_775(Local_434[iVar0 /*14*/].f_8, Param0, fParam3))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_330()//Position - 0x2BC69
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[0 /*14*/].f_8) && GlobalFunc_IsPedNotInjuredOrDead(Local_434[1 /*14*/].f_8))
	{
		if (!func_308(&Local_691, 1))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_434[0 /*14*/].f_8, 1), 3f, 1))
				{
					if (func_289(0, 0, 1) && (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID())))
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TREACT", 7, 0, 0, 0))
						{
							StringCopy(&Local_691, "NIG1B_TREACT", 24);
							return;
						}
					}
					else if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_691, "NIG1B_TSHOCK", 24);
						return;
					}
				}
				else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_434[1 /*14*/].f_8, 1), 3f, 1))
				{
					if (func_289(0, 0, 1) || (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID())))
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GREACT", 7, 0, 0, 0))
						{
							StringCopy(&Local_691, "NIG1B_GREACT", 24);
							return;
						}
					}
					else if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_691, "NIG1B_GSHOCK", 24);
						return;
					}
				}
				else if (PED::CAN_PED_SEE_HATED_PED(Local_434[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
				{
					if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_691, "NIG1B_TSHOCK", 24);
						return;
					}
				}
				else if (PED::CAN_PED_SEE_HATED_PED(Local_434[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
				{
					if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GSHOCK", 7, 0, 0, 0))
					{
						StringCopy(&Local_691, "NIG1B_GSHOCK", 24);
						return;
					}
				}
			}
			else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_434[0 /*14*/].f_8) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_434[0 /*14*/].f_8))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_434[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TTARG", 7, 0, 0, 0))
						{
							StringCopy(&Local_691, "NIG1B_TTARG", 24);
							return;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_434[1 /*14*/].f_8) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_434[1 /*14*/].f_8))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_434[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()))
					{
						if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GTARG", 7, 0, 0, 0))
						{
							StringCopy(&Local_691, "NIG1B_GTARG", 24);
							return;
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_434[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_434[0 /*14*/].f_8))
			{
				if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TBUMP", 7, 0, 0, 0))
				{
					StringCopy(&Local_691, "NIG1B_TBUMP", 24);
					return;
				}
			}
			else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_434[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_434[1 /*14*/].f_8))
			{
				if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GBUMP", 7, 0, 0, 0))
				{
					StringCopy(&Local_691, "NIG1B_GBUMP", 24);
					return;
				}
			}
			if (GlobalFunc_111() && !func_270("NULL"))
			{
				iLocal_396 = MISC::GET_GAME_TIMER();
			}
			else if (GlobalFunc_2311(iLocal_396, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)))
			{
				if (iLocal_536 == 2)
				{
					switch (iLocal_385)
					{
						case 0:
							if (func_289(0, 0, 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (func_334(&uLocal_159, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_1", 7, 0, 0))
								{
									iLocal_396 = MISC::GET_GAME_TIMER();
									iLocal_385++;
								}
							}
							else
							{
								iLocal_385++;
							}
							break;
						
						case 1:
							if (func_334(&uLocal_159, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_2", 7, 0, 0))
							{
								iLocal_396 = MISC::GET_GAME_TIMER();
								iLocal_385++;
							}
							break;
						
						case 2:
							if (func_334(&uLocal_159, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_3", 7, 0, 0))
							{
								iLocal_396 = MISC::GET_GAME_TIMER();
								iLocal_385++;
							}
							break;
						
						default:
							if (func_331())
							{
								iLocal_396 = MISC::GET_GAME_TIMER();
							}
							break;
						}
					}
				}
			}
	}
}

int func_331()//Position - 0x2C088
{
	int iVar0;
	
	if (!GlobalFunc_111() && !func_270("NULL"))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		if (iVar0 == 0)
		{
			if (iLocal_346)
			{
				if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TAMB", 7, 0, 0, 0))
				{
					return 1;
				}
			}
			else if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_TAMB2", 7, 0, 0, 0))
			{
				return 1;
			}
		}
		else if (iLocal_346)
		{
			if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GAMB", 7, 0, 0, 0))
			{
				return 1;
			}
		}
		else if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_GAMB2", 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_332()//Position - 0x2C12C
{
	STREAMING::REQUEST_MODEL(iLocal_531);
	STREAMING::REQUEST_MODEL(iLocal_532);
}

int func_333()//Position - 0x2C142
{
	STREAMING::REQUEST_MODEL(iLocal_531);
	STREAMING::REQUEST_MODEL(iLocal_532);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_531) && STREAMING::HAS_MODEL_LOADED(iLocal_532))
	{
		return 1;
	}
	return 0;
}

int func_334(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2C173
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam5 == 0)
	{
		if (MISC::GET_PROFILE_SETTING(203) != 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = true;
				iParam5 = 1;
			}
		}
	}
	if (GlobalFunc_10630(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		if (bVar0)
		{
			iLocal_539 = 3;
		}
		else
		{
			func_23(&sLocal_697, &cLocal_703);
		}
		return 1;
	}
	return 0;
}


int func_336()//Position - 0x2C21F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_305(Local_434[iVar0 /*14*/].f_8, 1082130432))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_337()//Position - 0x2C256
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_318(Local_434[iVar0 /*14*/].f_8, 1101004800, 1084227584, 1097859072))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_338()//Position - 0x2C294
{
	int iVar0;
	var uVar1;
	
	if (func_316(2))
	{
		return 0;
	}
	if (iLocal_536 == 2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (iVar0 == 1)
			{
				if (func_339(Local_434[1 /*14*/].f_8, 1, 1, 1, 1, 1))
				{
					iLocal_394 = 1;
					return 0;
				}
			}
			else if (func_339(Local_434[iVar0 /*14*/].f_8, 0, 1, 1, 1, 1))
			{
				if ((Local_434[iVar0 /*14*/].f_9 == 2 || Local_434[iVar0 /*14*/].f_9 == 6) || Local_434[iVar0 /*14*/].f_9 == 7)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_755, Local_758, fLocal_384, 0, 1, 0))
					{
						iLocal_394 = 0;
						return 0;
					}
					uVar1 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_434[iVar0 /*14*/].f_8);
					if (TASK::IS_MOVE_BLEND_RATIO_SPRINTING(uVar1) || ((TASK::IS_MOVE_BLEND_RATIO_RUNNING(uVar1) && PED::IS_PED_SWIMMING(Local_434[iVar0 /*14*/].f_8)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_434[iVar0 /*14*/].f_8, Local_755, Local_758, fLocal_384, 0, 1, 0)))
					{
					}
					else
					{
						iLocal_394 = 0;
						return 0;
					}
				}
				else
				{
					iLocal_394 = 0;
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_339(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2C3BD
{
	int iVar0;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		if (func_315(iParam0, 0))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (iLocal_535 == 2 || iLocal_535 == 3)
		{
			if (GlobalFunc_775(iParam0, Local_728, 7f))
			{
				return 1;
			}
		}
	}
	if (bParam3)
	{
		if (iLocal_535 == 4)
		{
			if (GlobalFunc_775(iParam0, Local_728, 3.5f))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_BEING_STUNNED(iParam0, 0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (iVar0 == joaat("weapon_stungun"))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}


int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2C545
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam5 == 0)
	{
		if (MISC::GET_PROFILE_SETTING(203) != 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = true;
				iParam5 = 1;
			}
		}
	}
	if (GlobalFunc_10626(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		if (bVar0)
		{
			iLocal_539 = 3;
		}
		else
		{
			func_23(&sLocal_697, &cLocal_703);
		}
		return 1;
	}
	return 0;
}


void func_343()//Position - 0x2C5F1
{
	struct<3> Var0;
	float fVar3;
	
	if (Local_434[0 /*14*/].f_9 == 0)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[0 /*14*/].f_8))
		{
			if (func_345(Local_434[0 /*14*/].f_8, 0) && iLocal_536 == 2)
			{
				Local_434[0 /*14*/].f_9 = 1;
			}
			else if (iLocal_386 == 1)
			{
				Var0 = { -1056.294f, 383.0128f, 68.68782f };
				fVar3 = 3f;
				if (GlobalFunc_497(Local_728, Var0, fVar3))
				{
					iLocal_386 = 0;
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_434[0 /*14*/].f_8, Local_712[iLocal_386 /*3*/], 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_434[0 /*14*/].f_8, fLocal_376[iLocal_386]);
				}
			}
			else if (iLocal_386 == 0)
			{
				Var0 = { -1035.078f, 347.5178f, 70.36205f };
				fVar3 = 4f;
				if (GlobalFunc_497(Local_728, Var0, fVar3))
				{
					iLocal_386 = 1;
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_434[0 /*14*/].f_8, Local_712[iLocal_386 /*3*/], 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_434[0 /*14*/].f_8, fLocal_376[iLocal_386]);
				}
			}
		}
	}
}


int func_345(int iParam0, bool bParam1)//Position - 0x2C72F
{
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_346()//Position - 0x2C762
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_434[iVar0 /*14*/].f_8))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_434[iVar0 /*14*/].f_8) || PED::IS_PED_INJURED(Local_434[iVar0 /*14*/].f_8))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_347()//Position - 0x2C7B4
{
	if (iLocal_95 >= 1)
	{
		if (iLocal_401 > 0 && iLocal_401 < 4)
		{
			if (iLocal_401 != 3)
			{
				if (iLocal_401 == 1)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_61(1);
					}
				}
				if (iLocal_95 == 1)
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (bLocal_362)
						{
							iLocal_401 = 2;
							func_61(2);
						}
					}
				}
				else if (iLocal_95 == 3)
				{
					iLocal_401 = 2;
					func_61(2);
				}
			}
			else if (GlobalFunc_2311(iLocal_403, 5000))
			{
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
				iLocal_401 = 4;
			}
		}
	}
}

void func_348()//Position - 0x2C842
{
	struct<3> Var0;
	struct<3> Var3;
	
	Local_728 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	func_62();
	func_60();
	func_347();
	func_358(0);
	func_321();
	func_284();
	func_356();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
	{
		if (iLocal_536 != 2 && iLocal_536 != 3)
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
		}
	}
	switch (iLocal_97)
	{
		case 0:
			iLocal_97 = 1;
			iLocal_327 = 0;
			iLocal_398 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_345 = 1;
				iLocal_97 = 2;
			}
			else if (bLocal_324)
			{
				if (!iLocal_345)
				{
					if (GlobalFunc_2311(iLocal_398, 1000))
					{
						Var0 = { Local_728 + Vector(-60f, -60f, -60f) };
						Var3 = { Local_728 + Vector(60f, 60f, 60f) };
						if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var0, Var3))
						{
							if (func_355())
							{
								iLocal_345 = 1;
							}
							else if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_DC", 7, 0, 0, 0))
							{
								iLocal_345 = 1;
							}
						}
						else if (!bLocal_359)
						{
							if (func_333())
							{
								bLocal_359 = func_354(Local_728, -1038090240, 1109393408);
							}
						}
					}
				}
				else if (!iLocal_327)
				{
					if (!GlobalFunc_111() && !func_270("NULL"))
					{
						if (!GlobalFunc_663("NIG1B_OBJ_04", 0, 0))
						{
							GlobalFunc_164("NIG1B_OBJ_04", 7500, 0);
							func_351();
							iLocal_327 = 1;
						}
					}
				}
			}
			else if (!iLocal_327)
			{
				if (!GlobalFunc_663("NIG1B_OBJ_04", 0, 0))
				{
					GlobalFunc_164("NIG1B_OBJ_04", 7500, 0);
					func_351();
					iLocal_327 = 1;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_663("NIG1B_OBJ_04", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_04");
			}
			GlobalFunc_200(&uLocal_159, 4);
			func_271(3);
			break;
	}
	func_349(&uLocal_159, "NIG1BAU", &sLocal_697, &cLocal_703);
}

void func_349(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x2CA25
{
	switch (iLocal_539)
	{
		case 0:
			break;
		
		case 1:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				*sParam2 = { GlobalFunc_560() };
				*sParam3 = { GlobalFunc_514() };
				if (MISC::ARE_STRINGS_EQUAL(sParam3, "") || MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
				{
				}
				else
				{
					GlobalFunc_4935();
					iLocal_539 = 2;
				}
			}
			break;
		
		case 2:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_341(uParam0, sParam1, sParam2, sParam3, 8, 1, 0))
					{
						iLocal_539 = 3;
					}
				}
				else
				{
					iLocal_539 = 4;
				}
			}
			break;
		
		case 3:
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				*sParam2 = { GlobalFunc_560() };
				*sParam3 = { GlobalFunc_514() };
				if (MISC::ARE_STRINGS_EQUAL(sParam3, "") || MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
				{
				}
				else
				{
					GlobalFunc_4935();
					iLocal_539 = 4;
				}
			}
			break;
		
		case 4:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && func_341(uParam0, sParam1, sParam2, sParam3, 8, 0, 0))
			{
				iLocal_539 = 0;
			}
			break;
	}
}


void func_351()//Position - 0x2CB4D
{
	if ((MISC::GET_PROFILE_SETTING(203) != 0 && iLocal_539 != 1) && GlobalFunc_111())
	{
		iLocal_539 = 1;
	}
}



int func_354(struct<3> Param0, int iParam3, int iParam4)//Position - 0x2CBB1
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, iParam3, 0f) };
	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(Var1, Param0, 0, &Var4, &fVar7, 1, 1077936128, 0))
	{
		if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var4, 7f, 7f, 7f, 0))
		{
			if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_531, Var4, 1))
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, iParam4, 0f) };
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(Var1, Param0, 0, &Var4, &fVar7, 1, 1077936128, 0))
		{
			if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var4, 7f, 7f, 7f, 0))
			{
				if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_531, Var4, 1))
				{
					bVar0 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
		{
			iVar8 = VEHICLE::CREATE_VEHICLE(iLocal_531, Var4, fVar7, 1, 1);
		}
		if (GlobalFunc_115(iVar8))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
			{
				iVar9 = PED::CREATE_PED_INSIDE_VEHICLE(iVar8, 6, iLocal_532, -1, 1, 1);
			}
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iVar8, 1);
			VEHICLE::SET_VEHICLE_SIREN(iVar8, 1);
			fVar10 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
			if (fVar10 > 40f)
			{
				fVar10 = 40f;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar8, fVar10);
			if (GlobalFunc_115(iVar9))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar9, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar9, 0);
				WEAPON::GIVE_WEAPON_TO_PED(iVar9, joaat("weapon_pistol"), -1, 1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar9, joaat("weapon_pistol"), 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar9);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar8);
			return 1;
		}
	}
	return 0;
}

int func_355()//Position - 0x2CD33
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[iVar0 /*14*/].f_8))
		{
			return 0;
		}
		iVar0++;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8))
	{
		return 0;
	}
	return 1;
}

void func_356()//Position - 0x2CD72
{
	if (!bLocal_326)
	{
		if (GlobalFunc_115(Local_483[0 /*9*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_483[0 /*9*/]))
			{
				if (!GlobalFunc_115(iLocal_804))
				{
					ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
					ENTITY::SET_ENTITY_DYNAMIC(Local_483[0 /*9*/], 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_483[0 /*9*/], 1);
				}
				else if (!GlobalFunc_537(ENTITY::GET_ENTITY_VELOCITY(iLocal_804), 0f, 0f, 0f, 5f))
				{
					ENTITY::DETACH_ENTITY(Local_483[0 /*9*/], 1, 1);
					ENTITY::SET_ENTITY_DYNAMIC(Local_483[0 /*9*/], 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_483[0 /*9*/], 1);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_483[0 /*9*/], 3, 0f, 1.5f, 0.2f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				}
			}
		}
	}
}


void func_358(bool bParam0)//Position - 0x2CE6B
{
	iLocal_535 = func_359(PLAYER::PLAYER_PED_ID(), bParam0);
}

int func_359(int iParam0, bool bParam1)//Position - 0x2CE80
{
	int iVar0;
	
	if (bParam1)
	{
		if (!GlobalFunc_115(iParam0))
		{
			iVar0 = 6;
			return iVar0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = 5;
	}
	else if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		iVar0 = 1;
	}
	else if (PED::IS_PED_IN_COVER(iParam0, 0))
	{
		iVar0 = 0;
	}
	else if (TASK::IS_PED_WALKING(iParam0))
	{
		iVar0 = 4;
	}
	else if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 2;
	}
	else if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 6;
	}
	return iVar0;
}

void func_360()//Position - 0x2CF06
{
	Local_728 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	func_62();
	func_60();
	func_347();
	func_358(0);
	func_321();
	func_284();
	func_356();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
	{
		if (iLocal_536 != 2 && iLocal_536 != 3)
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
		}
	}
	switch (iLocal_97)
	{
		case 0:
			if (iLocal_537 != 0 && iLocal_537 != 1)
			{
				sLocal_542 = "NIG1B_DD";
			}
			else if (bLocal_366)
			{
				sLocal_542 = "NIG1B_DDG";
			}
			else
			{
				sLocal_542 = "NIG1B_DS";
				GlobalFunc_553(788);
			}
			iLocal_97 = 1;
			break;
		
		case 1:
			if (!MISC::ARE_STRINGS_EQUAL(sLocal_542, "NIG1B_DS"))
			{
				if (!(MISC::ARE_STRINGS_EQUAL(sLocal_542, "NIG1B_DDG") && !GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8)))
				{
					if (!func_333())
					{
						func_332();
					}
				}
			}
			if (iLocal_344)
			{
				if (!func_308(sLocal_542, 1))
				{
					iLocal_97 = 2;
				}
			}
			else
			{
				func_22(0, 0);
				if (func_310(&uLocal_159, "NIG1BAU", sLocal_542, 7, 0, 0, 0))
				{
					iLocal_344 = 1;
				}
			}
			break;
		
		case 2:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_345 = 1;
				func_271(5);
			}
			else if (bLocal_362)
			{
				GlobalFunc_200(&uLocal_159, 4);
				func_271(3);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_542, "NIG1B_DS") || (MISC::ARE_STRINGS_EQUAL(sLocal_542, "NIG1B_DDG") && !GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8)))
			{
				GlobalFunc_200(&uLocal_159, 4);
				func_271(3);
			}
			else
			{
				if (!func_333())
				{
					func_332();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_324 = true;
				func_271(5);
			}
			break;
	}
	func_349(&uLocal_159, "NIG1BAU", &sLocal_697, &cLocal_703);
}

void func_361()//Position - 0x2D0CC
{
	Local_728 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	func_62();
	func_60();
	func_347();
	func_358(0);
	func_321();
	func_284();
	func_356();
	switch (iLocal_97)
	{
		case 0:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_97 = 2;
			}
			else
			{
				GlobalFunc_164("NIG1B_OBJ_03", 10000, 0);
				func_351();
				iLocal_97 = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_1986(Local_728, Local_719, 70f) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_97 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_663("NIG1B_OBJ_03", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_03");
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_271(5);
			}
			else
			{
				func_271(2);
			}
			break;
	}
	func_349(&uLocal_159, "NIG1BAU", &sLocal_697, &cLocal_703);
}

void func_362()//Position - 0x2D1AD
{
	Local_728 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	func_62();
	func_60();
	func_358(0);
	func_321();
	func_284();
	func_356();
	func_428();
	switch (iLocal_97)
	{
		case 0:
			func_425();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&uLocal_159, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			if (GlobalFunc_115(Local_420.f_8))
			{
				GlobalFunc_173(&uLocal_159, 4, Local_420.f_8, "Nigel1BGardener01", 0, 1);
			}
			if (GlobalFunc_115(Local_434[0 /*14*/].f_8))
			{
				GlobalFunc_173(&uLocal_159, 5, Local_434[0 /*14*/].f_8, "Nigel1BCelebMale01", 0, 1);
			}
			if (GlobalFunc_115(Local_434[1 /*14*/].f_8))
			{
				GlobalFunc_173(&uLocal_159, 6, Local_434[1 /*14*/].f_8, "Nigel1BCelebFemale01", 0, 1);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 10f, 1);
			GlobalFunc_164("NIG1B_OBJ_01", 7500, 0);
			func_351();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_CLOTHES", 0);
			if (bLocal_355)
			{
				GlobalFunc_79(800, 0);
			}
			iLocal_97 = 1;
			break;
		
		case 1:
			if (!iLocal_371)
			{
				if (GlobalFunc_115(iLocal_804))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_804, "rcmnigel1b", "idle_speedo", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(iLocal_804, "idle_speedo", "rcmnigel1b", -2f);
						iLocal_371 = 1;
					}
				}
			}
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_463))
			{
				RECORDING::_0x293220DA1B46CEBC(10f, 10f, 1);
				if (iLocal_537 != 0 && iLocal_537 != 1)
				{
					iLocal_408 = MISC::GET_GAME_TIMER();
				}
				if (iLocal_537 == 0)
				{
					iLocal_354 = 1;
					iLocal_400 = MISC::GET_GAME_TIMER();
				}
				GlobalFunc_846(&(Local_463.f_2));
				GlobalFunc_841(&Local_463);
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 0);
				iLocal_97 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_846(&(Local_463.f_2));
			GlobalFunc_841(&Local_463);
			if (GlobalFunc_663("NIG1B_OBJ_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_01");
			}
			if (!iLocal_371)
			{
				if (GlobalFunc_115(iLocal_804))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_804, "rcmnigel1b", "idle_speedo", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(iLocal_804, "idle_speedo", "rcmnigel1b", -2f);
						iLocal_371 = 1;
					}
				}
			}
			GlobalFunc_Checkpoint8(1, "Leave the area", 1, 0, 0, 1);
			Global_Mission_Fail_State.f_12[1] = iLocal_534;
			Global_Mission_Fail_State.f_12[0] = iLocal_537;
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_345 = 1;
				func_271(5);
			}
			else
			{
				func_271(1);
			}
			break;
	}
	func_349(&uLocal_159, "NIG1BAU", &sLocal_697, &cLocal_703);
}































































void func_425()//Position - 0x32857
{
	if (!HUD::DOES_BLIP_EXIST(Local_463.f_2))
	{
		if (OBJECT::DOES_PICKUP_EXIST(Local_463))
		{
			Local_463.f_2 = GlobalFunc_5666(Local_463);
		}
	}
	if (HUD::DOES_BLIP_EXIST(Local_463.f_2))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_463.f_2, "NIG1B_CP_BLIP");
	}
}



void func_428()//Position - 0x328EA
{
	struct<3> Var0;
	
	if (!GlobalFunc_116(0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (!iLocal_352)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1056.143f, 382.9233f, 67.74586f, -1054.965f, 382.899f, 70.98839f, 1.2f, 0, 1, 0))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_430(5))
					{
						if ((!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							if (GlobalFunc_2786(PLAYER::PLAYER_PED_ID(), 87.9952f, 90f))
							{
								if (!MISC::IS_AREA_OCCUPIED(-1056.172f, 382.1909f, 68.08848f, -1054.682f, 383.8394f, 70.969f, 0, 1, 0, 0, 0, 0, 0))
								{
									STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
									Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 0, 2) };
									if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
									{
										if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), 242628503))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
											TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 0, 2), 1f, 20000, Var0.f_2, 1056964608);
											TASK::TASK_PLAY_ANIM_ADVANCED(0, "rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 4f, -4f, -1, 7680, 0, 2, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_541);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
											WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_806, 1);
											WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
											RECORDING::_0x293220DA1B46CEBC(2f, 3f, 0);
											iLocal_352 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!iLocal_353)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1040.537f, 383.5369f, 67.96313f, -1041.792f, 383.5614f, 70.99346f, 1.2f, 0, 1, 0))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_430(4))
					{
						if ((!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							if (GlobalFunc_2786(PLAYER::PLAYER_PED_ID(), 277.6446f, 90f))
							{
								if (!MISC::IS_AREA_OCCUPIED(-1042.099f, 382.6709f, 68.07068f, -1040.595f, 384.2608f, 71.07093f, 0, 1, 0, 0, 0, 0, 0))
								{
									STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
									Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 0, 2) };
									if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
									{
										if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), 242628503))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_541);
											TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 0, 2), 1f, 20000, Var0.f_2, 1056964608);
											TASK::TASK_PLAY_ANIM_ADVANCED(0, "rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 4f, -4f, -1, 7680, 0, 2, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_541);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_541);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_541);
											WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_806, 1);
											WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
											RECORDING::_0x293220DA1B46CEBC(2f, 3f, 0);
											iLocal_353 = 1;
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
	if (iLocal_348[0] && iLocal_348[1])
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmnigel1b", "lockeddoor_tryopen", 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmnigel1b", "lockeddoor_tryopen") > 0.568f)
		{
			if (!iLocal_348[0])
			{
				if (!GlobalFunc_111() && !func_270("NULL"))
				{
					if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_PTLG1", 7, 0, 0, 0))
					{
						iLocal_348[0] = 1;
					}
				}
			}
			else if (!iLocal_348[1])
			{
				if (!GlobalFunc_111() && !func_270("NULL"))
				{
					if (func_310(&uLocal_159, "NIG1BAU", "NIG1B_PTLG2", 7, 0, 0, 0))
					{
						iLocal_348[1] = 1;
					}
				}
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1835780023))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		if (iLocal_806 != joaat("weapon_unarmed") && iLocal_806 != 0)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_806, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_806, 1);
			}
			iLocal_806 = joaat("weapon_unarmed");
		}
	}
}


int func_430(int iParam0)//Position - 0x32E05
{
	int iVar0;
	
	iVar0 = func_431(iParam0);
	if (iVar0 == 1 || iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

var func_431(int iParam0)//Position - 0x32E2B
{
	var uVar0;
	
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_387[iParam0]))
	{
		uVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_387[iParam0]);
	}
	return uVar0;
}

void func_432()//Position - 0x32E50
{
	if (bLocal_355)
	{
		if (iLocal_95 != 6 && iLocal_95 != 4)
		{
			GlobalFunc_587();
			if (iLocal_372 != 0)
			{
				func_271(6);
			}
		}
	}
}


void func_434(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x32E86
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



















void func_453(int iParam0, bool bParam1)//Position - 0x33927
{
	func_461(bParam1, 1);
	if (bParam1)
	{
		func_454();
	}
	iLocal_96 = iParam0;
	bLocal_355 = false;
	if (GlobalFunc_188())
	{
		iLocal_356 = 1;
	}
	else
	{
		iLocal_356 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_96 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), Local_800, fLocal_419, 1, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_356 = 1;
			}
		}
	}
	func_1(iLocal_96);
}

void func_454()//Position - 0x339B6
{
	func_455(1, 0);
	while (!GlobalFunc_4613("NIGEL1B_MISSION_FAIL", 0))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		if (!GlobalFunc_188())
		{
			GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), Local_800, fLocal_419, 1, 1);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
	}
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
	GlobalFunc_4613("NIGEL1B_MISSION_FAIL", 0);
	while (GlobalFunc_111())
	{
		func_22(0, 1);
		SYSTEM::WAIT(0);
	}
	func_23(&sLocal_697, &cLocal_703);
	SYSTEM::WAIT(0);
	func_520();
	func_271(0);
}

void func_455(bool bParam0, bool bParam1)//Position - 0x33A57
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	func_22(1, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_7632(0);
	GlobalFunc_4937(0, 0);
	GlobalFunc_1998(0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	func_33(1, 1, 1, 1);
	MISC::SET_TIME_SCALE(1f);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_540, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_725, Local_722, 1, 1);
	if (GlobalFunc_Is_Mission_Retry() || !bLocal_355)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_725, Local_722);
		MISC::CLEAR_AREA(Local_719, 35f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_719, 27f, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_PEDS(Local_719, 27f, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_387[iVar0]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_387[iVar0]);
		}
		iVar0++;
	}
	GlobalFunc_200(&uLocal_159, 2);
	GlobalFunc_200(&uLocal_159, 3);
	GlobalFunc_200(&uLocal_159, 4);
	GlobalFunc_200(&uLocal_159, 5);
	GlobalFunc_200(&uLocal_159, 6);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(0);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
	}
	GlobalFunc_4613("NIGEL1B_MISSION_FAIL", 0);
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
	func_458(1, 1, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_538);
	func_457();
	func_57();
	func_46(bParam0);
	func_456(bParam1);
}

void func_456(bool bParam0)//Position - 0x33BF4
{
	int iVar0;
	
	STREAMING::REMOVE_ANIM_DICT("rcmnigel1b");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_653);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_669);
	if (!AUDIO::HAS_SOUND_FINISHED(uLocal_395))
	{
		AUDIO::STOP_SOUND(uLocal_395);
	}
	AUDIO::RELEASE_SOUND_ID(uLocal_395);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_511[iVar0 /*9*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_483[iVar0 /*9*/].f_1);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_463.f_1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_434[iVar0 /*14*/].f_10);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_530);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_533);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_531);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_532);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_420.f_10);
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
}

void func_457()//Position - 0x33CD1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		GlobalFunc_169(&(Local_36[iVar0 /*4*/]));
		iVar0++;
	}
}

void func_458(bool bParam0, int iParam1, int iParam2)//Position - 0x33CF6
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
			func_33(iParam1, iParam2, 1, 1);
		}
	}
}



void func_461(bool bParam0, bool bParam1)//Position - 0x33DE1
{
	if (bParam0)
	{
		func_458(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_462(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_462(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x33E14
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
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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


























































void func_520()//Position - 0x3A9F7
{
	func_529();
	GlobalFunc_9161();
	func_527();
	func_524();
	PED::ADD_RELATIONSHIP_GROUP("N1B_PLAYER_HATE_GROUP", &iLocal_538);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_538, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_538);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_538, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_538);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	GlobalFunc_9621(64, 2, 0);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 3);
	func_521();
}

void func_521()//Position - 0x3AA70
{
	int iVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_98.f_35[0]))
	{
		iLocal_804 = Local_98.f_35[0];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_804))
		{
			iLocal_804 = VEHICLE::CREATE_VEHICLE(iLocal_533, -1010.97f, 359.91f, 70.65f, 331.46f, 1, 1);
		}
		if (GlobalFunc_115(iLocal_804))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_804);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_804, 97, 97);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_804, 13.5f);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_804, 2, 0);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_804, 2, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_804, 2, 0, 1f);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_804);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_804, "rcmnigel1b", "idle_speedo", 3))
			{
				STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
				{
					TASK::TASK_VEHICLE_PLAY_ANIM(iLocal_804, "rcmnigel1b", "idle_speedo");
				}
			}
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_533);
	GlobalFunc_130(&(Local_98.f_41[0]));
	if (!OBJECT::DOES_PICKUP_EXIST(Local_463))
	{
		Local_463 = OBJECT::CREATE_PICKUP_ROTATE(Local_463.f_6, Local_463.f_3, Local_463.f_8, Local_463.f_7, -1, 0, 1, Local_463.f_1);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_463))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(Local_463))
		{
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_463.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_98.f_28[0]))
	{
		Local_434[0 /*14*/].f_8 = Local_98.f_28[0];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_434[0 /*14*/].f_8))
		{
			iLocal_386 = 1;
			Local_434[0 /*14*/].f_8 = PED::CREATE_PED(26, Local_434[0 /*14*/].f_10, Local_712[iLocal_386 /*3*/], fLocal_376[iLocal_386], 1, 1);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[0 /*14*/].f_8))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_434[0 /*14*/].f_8, Local_712[iLocal_386 /*3*/], 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_434[0 /*14*/].f_8, fLocal_376[iLocal_386]);
			TASK::TASK_PLAY_ANIM(Local_434[0 /*14*/].f_8, "rcmnigel1b", "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[0 /*14*/].f_8))
	{
		PED::SET_PED_DIES_IN_WATER(Local_434[0 /*14*/].f_8, 0);
		PED::SET_PED_LEG_IK_MODE(Local_434[0 /*14*/].f_8, 2);
		PED::SET_PED_ALTERNATE_WALK_ANIM(Local_434[0 /*14*/].f_8, &cLocal_669, "walk_tyler", 1090519040, 1);
		TASK::TASK_PLAY_ANIM(Local_434[0 /*14*/].f_8, "rcmnigel1b", "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_434[0 /*14*/].f_10);
	if (ENTITY::DOES_ENTITY_EXIST(Local_98.f_28[1]))
	{
		Local_434[1 /*14*/].f_8 = Local_98.f_28[1];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_434[1 /*14*/].f_8))
		{
			Local_434[1 /*14*/].f_8 = PED::CREATE_PED(26, Local_434[1 /*14*/].f_10, -1058.43f, 362.78f, 69.86f, 130.45f, 1, 1);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[1 /*14*/].f_8))
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_434[1 /*14*/].f_8, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_434[1 /*14*/].f_8, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_434[1 /*14*/].f_8, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_434[1 /*14*/].f_8, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_434[1 /*14*/].f_8, 8, 0, 1, 0);
			func_325(0);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_434[1 /*14*/].f_10);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_434[iVar0 /*14*/].f_8))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_434[iVar0 /*14*/].f_8, 1);
			PED::SET_PED_CAN_BE_TARGETTED(Local_434[iVar0 /*14*/].f_8, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_434[iVar0 /*14*/].f_8, 1);
			PED::SET_PED_DIES_IN_WATER(Local_434[iVar0 /*14*/].f_8, 0);
			PED::SET_PED_MAX_TIME_UNDERWATER(Local_434[iVar0 /*14*/].f_8, 60f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_434[iVar0 /*14*/].f_8, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_434[iVar0 /*14*/].f_8, 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_434[iVar0 /*14*/].f_8, 1);
			AUDIO::STOP_PED_SPEAKING(Local_434[iVar0 /*14*/].f_8, 1);
			if (PED::IS_PED_IN_GROUP(Local_434[iVar0 /*14*/].f_8))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_434[iVar0 /*14*/].f_8);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_434[iVar0 /*14*/].f_8, iLocal_538);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_434[iVar0 /*14*/].f_8, 1);
			Local_434[iVar0 /*14*/].f_9 = 0;
			Local_434[iVar0 /*14*/].f_13 = 0;
			Local_434[iVar0 /*14*/].f_12 = 0;
			Local_434[iVar0 /*14*/].f_11 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_511[iVar0 /*9*/]))
		{
			Local_511[iVar0 /*9*/] = OBJECT::CREATE_OBJECT(Local_511[iVar0 /*9*/].f_1, Local_511[iVar0 /*9*/].f_2, 1, 1, 0);
		}
		if (GlobalFunc_115(Local_511[iVar0 /*9*/]))
		{
			if (iVar0 == 0 || iVar0 == 1)
			{
				ENTITY::SET_ENTITY_ROTATION(Local_511[iVar0 /*9*/], Local_511[iVar0 /*9*/].f_5, 2, 1);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_511[iVar0 /*9*/], Local_511[iVar0 /*9*/].f_2, 0, 0, 1);
			}
			PHYSICS::ACTIVATE_PHYSICS(Local_511[iVar0 /*9*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_511[iVar0 /*9*/].f_1);
		iVar0++;
	}
	if (GlobalFunc_115(iLocal_804))
	{
		uVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_804, "chassis");
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_483[iVar0 /*9*/]))
			{
				Local_483[iVar0 /*9*/] = OBJECT::CREATE_OBJECT(Local_483[iVar0 /*9*/].f_1, Local_483[iVar0 /*9*/].f_2, 1, 1, 0);
			}
			if (GlobalFunc_115(Local_483[iVar0 /*9*/]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_483[iVar0 /*9*/], iLocal_804, uVar1, Local_483[iVar0 /*9*/].f_2, Local_483[iVar0 /*9*/].f_5, 1, 1, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_483[iVar0 /*9*/], 0);
				ENTITY::SET_ENTITY_DYNAMIC(Local_483[iVar0 /*9*/], 0);
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_483[iVar0 /*9*/], 0);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_483[iVar0 /*9*/], 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_483[iVar0 /*9*/].f_1);
			}
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_98.f_35[1]))
	{
		uLocal_803 = Local_98.f_35[1];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_803))
		{
			iLocal_803 = VEHICLE::CREATE_VEHICLE(iLocal_530, -1018.26f, 357.76f, 70.2f, 339.52f, 1, 1);
		}
		if (GlobalFunc_115(iLocal_803))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_803);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_803, 27, 27);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_530);
	if (ENTITY::DOES_ENTITY_EXIST(Local_98.f_28[2]))
	{
		Local_420.f_8 = Local_98.f_28[2];
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_420.f_8))
		{
			Local_420.f_8 = PED::CREATE_PED(26, Local_420.f_10, -1012.57f, 357.48f, 70.62f, -28.55f, 1, 1);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8))
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_420.f_8);
			ENTITY::SET_ENTITY_HEALTH(Local_420.f_8, 160);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_420.f_8, -1012.57f, 357.48f, 70.62f, 0, 0, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_420.f_8, 1);
			STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b"))
			{
				TASK::TASK_PLAY_ANIM(Local_420.f_8, "rcmnigel1b", "idle_gardener", 1000f, -8f, -1, 270337, 0, 0, 0, 0);
			}
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_420.f_10);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_420.f_8))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_420.f_8, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_420.f_8, 1);
		PED::SET_PED_DIES_IN_WATER(Local_420.f_8, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_420.f_8, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_420.f_8, 1);
		AUDIO::STOP_PED_SPEAKING(Local_420.f_8, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_420.f_8, 1);
		PED::_BLOCK_PED_DEAD_BODY_SHOCKING_EVENTS(Local_420.f_8, 1);
		if (PED::IS_PED_IN_GROUP(Local_420.f_8))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_420.f_8);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_420.f_8, iLocal_538);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_420.f_8, 1);
		Local_420.f_9 = 0;
		Local_420.f_13 = 0;
		Local_420.f_12 = 0;
		Local_420.f_11 = 0;
	}
}



void func_524()//Position - 0x3B437
{
	STREAMING::REQUEST_MODEL(Local_463.f_1);
	STREAMING::REQUEST_MODEL(Local_434[0 /*14*/].f_10);
	STREAMING::REQUEST_MODEL(Local_434[1 /*14*/].f_10);
	STREAMING::REQUEST_MODEL(Local_420.f_10);
	STREAMING::REQUEST_MODEL(iLocal_530);
	STREAMING::REQUEST_MODEL(iLocal_533);
	STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_669);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_WHISTLES", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1B", 0);
	while (((((((((((!func_526() || !func_525()) || !STREAMING::HAS_MODEL_LOADED(Local_463.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_434[0 /*14*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_434[1 /*14*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_420.f_10)) || !STREAMING::HAS_MODEL_LOADED(iLocal_530)) || !STREAMING::HAS_MODEL_LOADED(iLocal_533)) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b")) || !STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_669)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_WHISTLES", 0)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_525()//Position - 0x3B550
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::REQUEST_MODEL(Local_483[iVar0 /*9*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_483[iVar0 /*9*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_526()//Position - 0x3B59F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_511[iVar0 /*9*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_511[iVar0 /*9*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_527()//Position - 0x3B5EE
{
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PED::SET_PED_NON_CREATION_AREA(Local_725, Local_722);
	uLocal_540 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_725, Local_722, 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_725, Local_722, 0, 1);
	if (((GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)) || GlobalFunc_188()) || !bLocal_355)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_725, Local_722);
		MISC::CLEAR_AREA(Local_719, 35f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_719, 27f, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_PEDS(Local_719, 27f, 0);
	}
	func_17(0, 0f, 0, 0);
	func_16(0, 4, 1);
	func_17(1, 0f, 0, 0);
	func_16(1, 4, 1);
	func_17(2, 0f, 0, 0);
	func_16(2, 4, 1);
	func_17(3, 0f, 0, 0);
	func_16(3, 4, 1);
	func_17(4, 0f, 0, 0);
	func_16(4, 4, 1);
	func_17(5, 0f, 0, 0);
	func_16(5, 4, 1);
}


void func_529()//Position - 0x3B734
{
	int iVar0;
	
	iVar0 = 0;
	bLocal_324 = false;
	iLocal_327 = 0;
	iLocal_344 = 0;
	iLocal_346 = 0;
	bLocal_342 = false;
	iLocal_341 = 0;
	iLocal_334 = 0;
	iLocal_343 = 0;
	iLocal_340 = 0;
	iLocal_345 = 0;
	bLocal_359 = false;
	iLocal_360 = 0;
	iLocal_361 = 0;
	iLocal_363 = 0;
	bLocal_326 = false;
	iLocal_331 = 0;
	iLocal_330 = 0;
	iLocal_332 = 0;
	bLocal_329 = false;
	iLocal_333 = 0;
	iLocal_335 = 0;
	iLocal_339 = 0;
	iLocal_336 = 0;
	iLocal_337 = 0;
	iLocal_338 = 0;
	iLocal_328 = 0;
	iLocal_347 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_348[iVar0] = 0;
		iVar0++;
	}
	iLocal_351 = 1;
	iLocal_352 = 0;
	iLocal_353 = 0;
	iLocal_354 = 0;
	iLocal_357 = 0;
	iLocal_358 = 0;
	bLocal_362 = false;
	iLocal_325 = 0;
	bLocal_365 = false;
	bLocal_366 = false;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_367[iVar0] = 0;
		iVar0++;
	}
	iLocal_370 = 0;
	iLocal_371 = 0;
	iLocal_364 = 0;
	iLocal_372 = 0;
	iLocal_536 = 0;
	iLocal_534 = 0;
	iLocal_535 = 6;
	iLocal_537 = 0;
	fLocal_376[0] = 148.84f;
	fLocal_376[1] = 23.67f;
	fLocal_373[0] = 6.24f;
	fLocal_373[1] = 165.1f;
	fLocal_379[0] = -4.8f;
	fLocal_379[1] = -170.96f;
	fLocal_383 = 2f;
	fLocal_384 = 5.5f;
	fLocal_382 = 2.4f;
	iLocal_385 = 0;
	iLocal_386 = 1;
	iLocal_400 = 0;
	iLocal_399 = -1;
	iLocal_401 = 0;
	iLocal_403 = 0;
	iLocal_402 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	iLocal_406 = 0;
	iLocal_407 = 0;
	iLocal_408 = 0;
	iLocal_409 = 0;
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		iLocal_410[iVar0] = -1;
		iVar0++;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_98.f_59))
	{
		iLocal_410[0] = Local_98.f_59;
	}
	iLocal_418 = -1;
	iLocal_394 = 0;
	uLocal_395 = AUDIO::GET_SOUND_ID();
	iLocal_397 = 0;
	iLocal_398 = 0;
	iLocal_396 = 0;
	fLocal_419 = 40.9431f;
	sLocal_542 = "NULL";
	Local_719 = { -1035.73f, 365.44f, 68.91f };
	Local_709 = { -1051.564f, 369.6159f, 68.9137f };
	Local_725 = { -1073.19f, 342.05f, 63.32832f };
	Local_722 = { -966.24f, 411.05f, 84.82043f };
	Local_761 = { -1058.74f, 378.36f, 68.97f };
	Local_764 = { -1064.68f, 378.42f, 67f };
	Local_767 = { -1039.15f, 351.76f, 75f };
	Local_770 = { -1041.712f, 348.0622f, 66.91643f };
	Local_773 = { -1036.664f, 347.7731f, 75.36364f };
	Local_776 = { -1047.452f, 347.568f, 66.91404f };
	Local_779 = { -1046.71f, 353.1779f, 73.91792f };
	Local_782 = { -1057.542f, 348.6674f, 66.91409f };
	Local_785 = { -1057.282f, 352.6161f, 73.91387f };
	Local_788 = { -1063.374f, 350.3959f, 66.91391f };
	Local_791 = { -1061.651f, 352.8345f, 73.81593f };
	Local_712[0 /*3*/] = { -1054.42f, 368.18f, 68.35f };
	Local_712[1 /*3*/] = { -1054.7f, 355.94f, 68.35f };
	Local_731[0 /*3*/] = { -1053.947f, 370.4447f, 68.6948f };
	Local_731[1 /*3*/] = { -1054.26f, 353.4767f, 68.6948f };
	Local_738[0 /*3*/] = { -1054.092f, 373.472f, 68.9138f };
	Local_738[1 /*3*/] = { -1054.13f, 350.572f, 68.913f };
	Local_752 = { -1059.451f, 361.9821f, 69.78663f };
	Local_755 = { -1054.633f, 353.7263f, 67.44479f };
	Local_758 = { -1054.807f, 370.0012f, 69.42931f };
	Local_745[0 /*3*/] = { -1059.845f, 366.6072f, 69.75161f };
	Local_745[1 /*3*/] = { -1059.642f, 357.378f, 69.75161f };
	Local_794 = { -1059f, 360.976f, 69f };
	Local_797 = { 0f, 0f, -1.08f };
	Local_800 = { -1011.885f, 346.9502f, 69.2904f };
	Local_434[0 /*14*/].f_10 = joaat("ig_tylerdix");
	Local_434[1 /*14*/].f_10 = joaat("a_f_y_beach_01");
	Local_420.f_10 = joaat("s_m_m_gardener_01");
	Local_463.f_3 = { -1050.03f, 368.95f, 69.29f };
	Local_463.f_8 = { 0f, 0f, -11.27f };
	Local_463.f_1 = joaat("prop_nigel_bag_pickup");
	Local_463.f_6 = joaat("pickup_custom_script");
	Local_463.f_7 = 0;
	MISC::SET_BIT(&(Local_463.f_7), 3);
	MISC::SET_BIT(&(Local_463.f_7), 4);
	MISC::SET_BIT(&(Local_463.f_7), 1);
	MISC::SET_BIT(&(Local_463.f_7), 8);
	iLocal_530 = joaat("comet2");
	iLocal_533 = joaat("speedo");
	Local_511[0 /*9*/].f_1 = joaat("prop_beach_ring_01");
	Local_511[0 /*9*/].f_2 = { -1047.42f, 370.22f, 69.09f };
	Local_511[0 /*9*/].f_8 = 38.2398f;
	Local_511[0 /*9*/].f_5 = { -0.57f, -0.15f, 92.03f };
	Local_511[1 /*9*/].f_1 = joaat("prop_beachball_01");
	Local_511[1 /*9*/].f_2 = { -1051.157f, 368.6751f, 68.9139f };
	Local_511[1 /*9*/].f_5 = { 0f, 0f, 90f };
	Local_511[1 /*9*/].f_8 = 53.2741f;
	Local_483[0 /*9*/].f_1 = joaat("prop_leaf_blower_01");
	Local_483[0 /*9*/].f_2 = { -0.3f, -2.4f, 0.16f };
	Local_483[0 /*9*/].f_5 = { 0f, 0f, 75f };
	Local_483[1 /*9*/].f_1 = joaat("prop_tool_box_01");
	Local_483[1 /*9*/].f_2 = { 0.3f, -0.8f, -0.15f };
	Local_483[1 /*9*/].f_5 = { 0f, 0f, 325f };
	Local_483[2 /*9*/].f_1 = joaat("prop_tool_rake");
	Local_483[2 /*9*/].f_2 = { -0.2f, -0.9f, -0.1f };
	Local_483[2 /*9*/].f_5 = { 270f, 180f, 20f };
	Local_474.f_1 = joaat("p_amb_phone_01");
	Local_474.f_2 = { 0f, 0f, 0f };
	Local_474.f_5 = { 0f, 0f, 0f };
	iLocal_531 = joaat("police");
	iLocal_532 = joaat("s_m_y_cop_01");
	StringCopy(&Local_647, "", 24);
	StringCopy(&cLocal_653, "rcmnigel1b@reactions", 64);
	StringCopy(&cLocal_669, "rcmnigel1bnmt_1b", 64);
	iLocal_806 = joaat("weapon_unarmed");
	func_533(0, joaat("prop_lrggate_01_l"), -1011.63f, 367.21f, 72.24f);
	func_533(1, joaat("prop_lrggate_01_r"), -1006.89f, 364.48f, 72.24f);
	func_533(2, joaat("prop_lrggate_01_l"), -1017.81f, 351.32f, 70.66f);
	func_533(3, joaat("prop_lrggate_01_r"), -1012.49f, 352.58f, 70.66f);
	func_533(4, joaat("prop_lrggate_03b_ld"), -1040.49f, 384.38f, 69.92f);
	func_533(5, joaat("prop_lrggate_03b_ld"), -1056.19f, 382.26f, 69.72f);
	GlobalFunc_500(&uLocal_543);
	GlobalFunc_499(&uLocal_543, -987.81f, 363.85f, 71.32f);
	GlobalFunc_499(&uLocal_543, -988.15f, 352.77f, 71.03f);
	GlobalFunc_499(&uLocal_543, -1030.05f, 342.06f, 67.88f);
	GlobalFunc_499(&uLocal_543, -1071.7f, 346.33f, 66.21f);
	GlobalFunc_499(&uLocal_543, -1070.97f, 379.39f, 67.96f);
	GlobalFunc_499(&uLocal_543, -1067.3f, 387.2f, 67.82f);
	GlobalFunc_499(&uLocal_543, -1059.75f, 390.57f, 67.96f);
	GlobalFunc_499(&uLocal_543, -1030.35f, 392.35f, 69.34f);
	GlobalFunc_499(&uLocal_543, -1016.2f, 378.02f, 70.67f);
	GlobalFunc_499(&uLocal_543, -1006f, 370.87f, 71.04f);
	GlobalFunc_498(&uLocal_543);
	GlobalFunc_500(&uLocal_595);
	GlobalFunc_499(&uLocal_595, -1025.32f, 380.54f, 70.79f);
	GlobalFunc_499(&uLocal_595, -1020.4f, 375.87f, 70.38f);
	GlobalFunc_499(&uLocal_595, -1012.08f, 369.8f, 71.1f);
	GlobalFunc_499(&uLocal_595, -1011.78f, 367.31f, 71.12f);
	GlobalFunc_499(&uLocal_595, -1006.72f, 364.41f, 71.28f);
	GlobalFunc_499(&uLocal_595, -1004.07f, 365.51f, 71.78f);
	GlobalFunc_499(&uLocal_595, -993.65f, 360.78f, 71.51f);
	GlobalFunc_499(&uLocal_595, -993.68f, 355.4f, 71.02f);
	GlobalFunc_499(&uLocal_595, -1008.25f, 350.7f, 70f);
	GlobalFunc_499(&uLocal_595, -1010.9f, 352.95f, 69.54f);
	GlobalFunc_499(&uLocal_595, -1018.94f, 351.08f, 69.9f);
	GlobalFunc_499(&uLocal_595, -1020.24f, 349.86f, 69.67f);
	GlobalFunc_499(&uLocal_595, -1020.85f, 347.65f, 68.93f);
	GlobalFunc_499(&uLocal_595, -1030.98f, 346.06f, 70.4f);
	GlobalFunc_499(&uLocal_595, -1036.05f, 346.14f, 70.45f);
	GlobalFunc_498(&uLocal_595);
	func_457();
}




void func_533(int iParam0, int iParam1, struct<3> Param2)//Position - 0x3C15B
{
	char cVar0[24];
	
	StringCopy(&cVar0, "N1B_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	iLocal_387[iParam0] = MISC::GET_HASH_KEY(&cVar0);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_387[iParam0]))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_387[iParam0], iParam1, Param2, 0, 1, 0);
	}
}

void func_534()//Position - 0x3C1A2
{
	if (GlobalFunc_9162())
	{
		func_455(0, 1);
	}
	GlobalFunc_9252(&Local_98, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



























