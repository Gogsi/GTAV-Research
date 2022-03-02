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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	struct<4> Local_39[10];
	bool bLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	bool bLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	bool bLocal_169 = 0;
	bool bLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 0;
	struct<2> Local_174 = { 0, 0 } ;
	struct<2> Local_176 = { 0, 0 } ;
	struct<2> Local_178 = { 0, 0 } ;
	int iLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 16;
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
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	float fLocal_354 = 0f;
	float fLocal_355 = 0f;
	float fLocal_356 = 0f;
	float fLocal_357 = 0f;
	float fLocal_358 = 0f;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	char* sLocal_367[2] = { NULL, NULL };
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	char* sLocal_372[3] = { NULL, NULL, NULL };
	struct<2> Local_376 = { 0, 0 } ;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	struct<2> Local_380 = { 0, 0 } ;
	var uLocal_382 = -1;
	struct<2> Local_383 = { 0, 0 } ;
	var uLocal_385 = -1;
	struct<2> Local_386 = { 0, 0 } ;
	var uLocal_388 = -1;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	struct<5> Local_397[3];
	struct<5> Local_413 = { 0, 0, 0, 0, -1 } ;
	struct<3> Local_418 = { 0, 0, 0 } ;
	var uLocal_421 = 0;
	var uLocal_422 = -1;
	struct<3> Local_423 = { 0, 0, 0 } ;
	var uLocal_426 = 0;
	var uLocal_427 = -1;
	struct<3> Local_428 = { 0, 0, 0 } ;
	var uLocal_431 = 0;
	var uLocal_432 = -1;
	struct<3> Local_433 = { 0, 0, 0 } ;
	var uLocal_436 = 0;
	var uLocal_437 = -1;
	struct<3> Local_438 = { 0, 0, 0 } ;
	var uLocal_441 = 0;
	var uLocal_442 = -1;
	struct<3> Local_443 = { 0, 0, 0 } ;
	var uLocal_446 = 0;
	var uLocal_447 = -1;
	int iLocal_448 = 0;
	struct<3> Local_449 = { 0, 0, 0 } ;
	float fLocal_452 = 0f;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	char* sLocal_457 = NULL;
	var uLocal_458 = 0;
	int iLocal_459 = 0;
	struct<21> Local_460 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_481 = 0;
	struct<21> Local_482 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_503 = 0;
	struct<21> Local_504 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_525 = 0;
	struct<21> Local_526 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_547 = 0;
	struct<13> Local_548 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_561 = 0;
	struct<13> Local_562 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_575[4];
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	struct<3> Local_631 = { 0, 0, 0 } ;
	struct<3> Local_634 = { 0, 0, 0 } ;
	struct<3> Local_637 = { 0, 0, 0 } ;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	int iLocal_648 = 0;
	struct<3> Local_649 = { 0, 0, 0 } ;
	float fLocal_652 = 0f;
	int iLocal_653 = 0;
	char* sLocal_654 = NULL;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	struct<3> Local_659 = { 0, 0, 0 } ;
	struct<3> Local_662 = { 0, 0, 0 } ;
	struct<3> Local_665 = { 0, 0, 0 } ;
	struct<3> Local_668 = { 0, 0, 0 } ;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	struct<3> Local_677[10];
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	var uLocal_715 = 0;
	int iLocal_716 = 0;
	float fLocal_717 = 0f;
	float fLocal_718 = 0f;
	float fLocal_719 = 0f;
	float fLocal_720 = 0f;
	float fLocal_721 = 0f;
	int iLocal_722 = 0;
	var uLocal_723 = 0;
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
	iLocal_84 = 1;
	iLocal_85 = 65;
	iLocal_86 = 49;
	iLocal_87 = 64;
	uLocal_91 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_92 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_94 = GlobalFunc_4946(61);
	iLocal_166 = 1;
	iLocal_168 = 1;
	iLocal_352 = 1800;
	iLocal_353 = 4500;
	fLocal_354 = 1.025f;
	fLocal_355 = fLocal_354;
	fLocal_356 = 3f;
	fLocal_357 = fLocal_356;
	fLocal_358 = -1f;
	Local_449 = { -2002.52f, -503.53f, 11.27f };
	fLocal_452 = 0.13f;
	iLocal_453 = joaat("scorcher");
	iLocal_624 = joaat("a_f_y_fitness_01");
	Local_631 = { -1818.96f, -751.5f, 7.99f };
	iLocal_642 = -1;
	iLocal_643 = -1;
	Local_649 = { -1957.213f, -555.2614f, 11.08383f };
	fLocal_652 = -87.35699f;
	sLocal_654 = "Fanatic1MaryAnn";
	Local_668 = { -2005.65f, -508.08f, 10.76f };
	iLocal_709 = 1;
	fLocal_717 = 40f;
	fLocal_718 = 0.35f;
	fLocal_719 = 0f;
	fLocal_720 = -0.8f;
	fLocal_721 = -0.05f;
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		GlobalFunc_9624(1);
		func_437();
	}
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		Global_68490 = 1;
		iLocal_93 = 0;
		while (!func_427(&Local_95))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	GlobalFunc_601(2, 1);
	iLocal_348 = Local_95.f_28[0];
	uLocal_173 = GlobalFunc_5101(0);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		GlobalFunc_4923(&Local_95, 0, 1);
		if (GlobalFunc_115(iLocal_348))
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_348, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		GlobalFunc_4972(-1878.234f, -439.6985f, 45.0299f, 241.0468f, 1, 0);
		func_420();
		if (!GlobalFunc_2(0))
		{
			switch (GlobalFunc_198())
			{
				case 0:
					func_404(1);
					break;
			}
		}
		else if (GlobalFunc_199())
		{
			switch (GlobalFunc_198())
			{
				case 0:
					func_404(1);
					break;
			}
		}
		else
		{
			func_404(0);
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_EDM", 0);
		SYSTEM::WAIT(0);
		func_388(Local_95.f_9, 1, 0, 0, 0, 0);
		func_381();
		func_363();
		GlobalFunc_5964();
		if (((iLocal_157 != 0 && iLocal_157 != 1) && iLocal_157 != 10) && iLocal_157 != 9)
		{
			if (iLocal_157 != 8)
			{
				func_361();
			}
			func_348();
			func_346();
		}
		else if (iLocal_157 == 0)
		{
			GlobalFunc_8535();
		}
		else if (iLocal_157 == 1)
		{
			if (GlobalFunc_115(iLocal_348))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_348, 2.3f);
			}
		}
		switch (iLocal_157)
		{
			case 0:
				func_343();
				break;
			
			case 1:
				func_333();
				break;
			
			case 2:
				func_329();
				break;
			
			case 3:
				func_323();
				break;
			
			case 4:
				func_316();
				break;
			
			case 5:
				func_302();
				break;
			
			case 6:
				func_299();
				break;
			
			case 7:
				func_298();
				break;
			
			case 8:
				func_37();
				break;
			
			case 9:
				func_35();
				break;
			
			case 10:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x39E
{
	char* sVar0;
	
	switch (iLocal_156)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (iLocal_159 != 2)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_2838("Killing conversation in fail state");
					GlobalFunc_4956();
				}
			}
			else if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_AGGRO", 9, 0, 0, 0))
				{
					GlobalFunc_2838("Playing aggro convo with subs");
				}
			}
			else
			{
				GlobalFunc_2838("Convo already active when failing for scaring Mary Ann - playing without subs asap?");
				GlobalFunc_4935();
				GlobalFunc_5157(&uLocal_182, "FAN1AU", "FAN1_AGGRO", 8, 0, 0);
			}
			GlobalFunc_146(&iLocal_349);
			GlobalFunc_146(&iLocal_671);
			GlobalFunc_146(&iLocal_672);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_673);
			if ((iLocal_159 == 1 || iLocal_159 == 0) || iLocal_159 == 2)
			{
				if (GlobalFunc_115(iLocal_348))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_348, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				}
			}
			switch (iLocal_159)
			{
				case 0:
					sVar0 = "FATIC1_F8";
					break;
				
				case 2:
					sVar0 = "FATIC1_F2";
					break;
				
				case 1:
					sVar0 = "FATIC1_F1";
					break;
				
				case 3:
					sVar0 = "FATIC1_F5";
					break;
				
				case 4:
					sVar0 = "FATIC1_F3";
					break;
				
				case 5:
					sVar0 = "FATIC1_F7";
					break;
				
				case 6:
					sVar0 = "FATIC1_F6";
					break;
				
				default:
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				GlobalFunc_10702(sVar0, 1);
			}
			else
			{
				GlobalFunc_9624(1);
			}
			iLocal_156 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_5();
				func_4(1);
				GlobalFunc_5905(0, uLocal_173);
				func_437();
			}
			break;
	}
}



void func_4(int iParam0)//Position - 0x553
{
	if (iLocal_166 != iParam0)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1708.314f, -574.0266f, 36.87338f, -2044.766f, -370.9167f, 9.152167f, 27.25f, 0, iParam0, 1);
		iLocal_166 = iParam0;
	}
}

void func_5()//Position - 0x591
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_348, 0);
	}
	GlobalFunc_881(&iLocal_348);
	GlobalFunc_881(&iLocal_626);
	GlobalFunc_881(&iLocal_628);
	GlobalFunc_881(&iLocal_629);
	GlobalFunc_881(&iLocal_627);
	GlobalFunc_881(&iLocal_648);
	GlobalFunc_881(&(Local_575[0 /*12*/]));
	GlobalFunc_881(&(Local_575[1 /*12*/]));
	GlobalFunc_881(&(Local_575[2 /*12*/]));
	GlobalFunc_881(&(Local_575[3 /*12*/]));
	GlobalFunc_881(&Local_548);
	GlobalFunc_881(&(Local_548.f_1));
	GlobalFunc_881(&Local_562);
	GlobalFunc_881(&(Local_562.f_1));
	GlobalFunc_7089(&(Local_548.f_2));
	GlobalFunc_7089(&(Local_562.f_2));
	GlobalFunc_7089(&iLocal_630);
	GlobalFunc_7089(&iLocal_448);
}






























void func_35()//Position - 0x109B
{
	int iVar0;
	
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_2838("In setup for Lost Race");
			GlobalFunc_146(&iLocal_349);
			GlobalFunc_146(&iLocal_671);
			GlobalFunc_146(&iLocal_672);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_673);
			iVar0 = GlobalFunc_745();
			if (iLocal_347 == 0)
			{
				if (iVar0 == 1)
				{
					GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_LOSE", 8, 0, 0, 0);
					GlobalFunc_2838("Doing 'FAN1_LOSE'");
				}
				else
				{
					GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_LOSE2", 8, 0, 0, 0);
					GlobalFunc_2838("Doing 'FAN1_LOSE2'");
				}
			}
			TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_PLAY_ANIM(0, "rcmfanatic1celebrate", "celebrate", 4f, -16f, -1, 286720, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 16f, -4f, -1, 270337, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			GlobalFunc_2838("Going into loop for Lost Race");
			iLocal_156 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				GlobalFunc_2838("No conversation going in Lost Race, failing properly now");
				AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
				iLocal_159 = 5;
				iLocal_156 = 0;
				iLocal_157 = 10;
			}
			break;
	}
}


void func_37()//Position - 0x11DD
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iLocal_674 != 0)
	{
		GlobalFunc_2838("Fade previous CP");
		iLocal_675 = (iLocal_675 - 25);
		if (iLocal_675 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_674, uVar0, uVar1, uVar2, iLocal_675);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_674, uVar0, uVar1, uVar2, iLocal_675);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_674);
		}
	}
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_146(&iLocal_671);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_673);
			if (GlobalFunc_4924(iLocal_648))
			{
				TASK::CLEAR_PED_TASKS(iLocal_648);
				TASK::TASK_SMART_FLEE_PED(iLocal_648, PLAYER::PLAYER_PED_ID(), 40f, -1, 0, 0);
			}
			if (GlobalFunc_111())
			{
				GlobalFunc_2838("stop scripted conversation at END_CUTSCENE");
				GlobalFunc_4956();
			}
			if (GlobalFunc_115(iLocal_348))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_348, 1);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_348, 1);
			}
			iLocal_164 = 0;
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FINISH");
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, 0);
			if (iVar4 != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
			if (bLocal_169)
			{
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 0);
				GlobalFunc_9805(-2010.693f, -504.882f, 9.529695f, -1995.947f, -517.2494f, 13.76466f, 10f, -2008.54f, -494.1f, 11.04f, 48.19f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_284(Local_668, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				func_283();
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) > 32f)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_348, -1986.2f, -526.22f, 11f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_348, 58.26f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_654, func_279(), 1040, -1);
					TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
					PED::FORCE_PED_MOTION_STATE(iLocal_348, -530524, 1, 1, 0);
				}
				TASK::TASK_LOOK_AT_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_668, 1f, 20000, 0.5f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 1, 0, 0);
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1out_of_breath");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1out_of_breath"))
				{
					GlobalFunc_2838("Loading ANIMS");
					SYSTEM::WAIT(0);
				}
				iLocal_456 = 0;
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1out_of_breath");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1out_of_breath"))
				{
					GlobalFunc_2838("Loading ANIMS");
					SYSTEM::WAIT(0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_448))
			{
				STREAMING::REQUEST_MODEL(iLocal_453);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_453))
				{
					GlobalFunc_2838("Loading MARYSBIKE MODEL");
					SYSTEM::WAIT(0);
				}
				iLocal_448 = VEHICLE::CREATE_VEHICLE(iLocal_453, Local_449, fLocal_452, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_453);
			}
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if (GlobalFunc_4924(Local_575[iVar5 /*12*/]))
				{
					if ((PED::IS_PED_IN_MELEE_COMBAT(Local_575[iVar5 /*12*/]) || PED::IS_PED_RESPONDING_TO_EVENT(Local_575[iVar5 /*12*/], 54)) || PED::IS_PED_RESPONDING_TO_EVENT(Local_575[iVar5 /*12*/], 41))
					{
						TASK::CLEAR_PED_TASKS(Local_575[iVar5 /*12*/]);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
						TASK::TASK_PERFORM_SEQUENCE(Local_575[iVar5 /*12*/], uLocal_181);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
						GlobalFunc_2297(&(Local_575[iVar5 /*12*/]), 1, 0, 1);
					}
				}
				iVar5++;
			}
			iLocal_455 = 0;
			iLocal_156 = 1;
			break;
		
		case 1:
			func_277();
			GlobalFunc_112();
			GlobalFunc_7629();
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			switch (iLocal_454)
			{
				case 1:
					if (bLocal_169)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7)
						{
							if (iLocal_456 == 0)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_181);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
								iLocal_456 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_348, Local_668, 5f, 5f, 3f, 0, 1, 0) && iLocal_456 == 1)
						{
							if (iLocal_160 == 0)
							{
								sLocal_457 = "FAN1_DONE_2";
							}
							else if (iLocal_160 == 1)
							{
								sLocal_457 = "FAN1_DONE_3";
							}
							if (func_269(&uLocal_182, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_457, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
							{
								iLocal_454 = 2;
							}
						}
					}
					else
					{
						func_268();
						if (GlobalFunc_115(iLocal_348))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), &iVar6);
							if (iVar6 >= 125)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "jogging_up", 8f, -16f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "jogging_on_spot", 16f, -4f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (iLocal_160 == 0)
								{
									sLocal_457 = "FAN1_DONE_2";
								}
								else if (iLocal_160 == 1)
								{
									sLocal_457 = "FAN1_DONE_3";
								}
								if (func_269(&uLocal_182, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_457, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(10f, 10f, 1);
									iLocal_454 = 2;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, 4000, 0, 2);
									iLocal_454 = 2;
								}
							}
						}
					}
					break;
				
				case 2:
					if (bLocal_169)
					{
						switch (iLocal_455)
						{
							case 0:
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
								{
									CAM::DETACH_CAM(uLocal_458);
									CAM::STOP_CAM_POINTING(uLocal_458);
									CAM::SET_CAM_PARAMS(uLocal_458, -2008.226f, -508.2978f, 12.2798f, -9.0657f, 0f, -70.473f, 50f, 0, 1, 1, 2);
									iLocal_455 = 1;
								}
								break;
							
							case 1:
								if (GlobalFunc_4947(iLocal_448))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
									TASK::TASK_LOOK_AT_ENTITY(0, iLocal_448, -1, 0, 2);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 10241, 1193033728);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_448, 20000, -1, 1f, 1, 0);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_448, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_453, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_448, 10f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
									PED::SET_PED_KEEP_TASK(iLocal_348, 1);
									TASK::SET_ANIM_LOOPED(PLAYER::PLAYER_PED_ID(), 0, 0, 0);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
									TASK::TASK_PLAY_ANIM(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(0, iLocal_348, -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_COORD(0, -2000.81f, -496.56f, 10.56f, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_181);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
								}
								iLocal_454 = 3;
								break;
						}
					}
					else
					{
						func_268();
						func_266();
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
						{
							if (!bLocal_170)
							{
								if (GlobalFunc_4947(iLocal_448))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, iLocal_448, -1, 0, 2);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 2049, 1193033728);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_448, 20000, -1, 2f, 1, 0);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_448, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_453, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_448, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_453, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_448, 10f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
									PED::SET_PED_KEEP_TASK(iLocal_348, 1);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
								PED::SET_PED_KEEP_TASK(iLocal_348, 1);
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, 6000, 0, 2);
							iLocal_454 = 3;
						}
					}
					break;
				
				case 3:
					if (bLocal_169)
					{
						if (!GlobalFunc_111())
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_454 = 4;
							}
						}
					}
					else
					{
						func_268();
						if (bLocal_170)
						{
							if (!iLocal_171)
							{
								if (GlobalFunc_115(iLocal_348))
								{
									TASK::CLEAR_PED_TASKS(iLocal_348);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
									PED::SET_PED_KEEP_TASK(iLocal_348, 1);
									iLocal_171 = 1;
								}
							}
						}
						if (!GlobalFunc_111())
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_454 = 4;
							}
						}
					}
					break;
				
				case 4:
					if (bLocal_169)
					{
						if (!GlobalFunc_111())
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, 5f, 5f, 3f, 0, 1, 0))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
								CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
								func_258(1, 1, 1, 1);
								func_63();
							}
						}
					}
					else if (!GlobalFunc_111())
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, 5f, 5f, 3f, 0, 1, 0))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_exit", 1000f, -2f, -1, 48, 0, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							func_63();
						}
					}
					break;
			}
			if (bLocal_169)
			{
				if (GlobalFunc_4926(1000))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					func_258(1, 1, 1, 1);
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
					func_63();
				}
			}
			else if (GlobalFunc_115(iLocal_348))
			{
				func_51();
				func_39();
				if (iLocal_454 > 1)
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_348, 1) > 15f)
						{
							if (!bLocal_170)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_348, 1))
								{
									if (iLocal_454 <= 2)
									{
										if (GlobalFunc_4947(iLocal_448))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
											TASK::TASK_LOOK_AT_ENTITY(0, iLocal_448, -1, 0, 2);
											TASK::TASK_ENTER_VEHICLE(0, iLocal_448, 20000, -1, 1f, 1, 0);
											TASK::TASK_CLEAR_LOOK_AT(0);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_448, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_453, 8, 3f, 50f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_448, -2024.98f, -479.55f, 10.57f, 10f, 0, iLocal_453, 8, 3f, 50f);
											TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_448, 10f, 786599);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
											PED::SET_PED_KEEP_TASK(iLocal_348, 1);
										}
									}
								}
							}
							else if (!iLocal_171)
							{
								if (GlobalFunc_115(iLocal_348))
								{
									TASK::CLEAR_PED_TASKS(iLocal_348);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
									PED::SET_PED_KEEP_TASK(iLocal_348, 1);
									iLocal_171 = 1;
								}
							}
							GlobalFunc_4935();
							iLocal_454 = 4;
						}
					}
				}
			}
			break;
	}
}


void func_39()//Position - 0x1E0F
{
	if ((((iLocal_157 != 7 && iLocal_157 != 10) && iLocal_157 != 8) && iLocal_157 != 10) && iLocal_157 != 9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (Local_178.f_1 == 0)
			{
				GlobalFunc_159(Local_178, -1);
				Local_178.f_1 = 1;
			}
			if (func_40(iLocal_348, 1126825984) || GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) < 7f)
			{
				iLocal_158 = iLocal_157;
				iLocal_156 = 0;
				iLocal_157 = 7;
			}
		}
	}
	else if (iLocal_157 == 8)
	{
		if (iLocal_454 != 4)
		{
			if (GlobalFunc_4947(iLocal_448))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_448, 0))
				{
					bLocal_170 = true;
				}
			}
		}
	}
}

bool func_40(int iParam0, float fParam1)//Position - 0x1EBF
{
	return func_41(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_41(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1ED7
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_49(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_39[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_44();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_39[iVar4 /*4*/].f_1 = iParam0;
		Local_39[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_5962(&(Local_39[iVar4 /*4*/]), Var1, iParam1, &(Local_39[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_39[iVar4 /*4*/].f_3) < iParam4);
}



int func_44()//Position - 0x2189
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39)
	{
		if ((Local_39[iVar0 /*4*/] == 0 && Local_39[iVar0 /*4*/].f_1 == 0) && Local_39[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_49(int iParam0, int iParam1)//Position - 0x22DF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39)
	{
		if (Local_39[iVar0 /*4*/].f_1 == iParam0 && Local_39[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_51()//Position - 0x2335
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_348))
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_2838("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 1");
			GlobalFunc_4956();
		}
		GlobalFunc_2838("Mary Ann killed");
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_159 = 0;
		iLocal_156 = 0;
		iLocal_157 = 10;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_2838("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 2");
				GlobalFunc_4956();
			}
			GlobalFunc_2838("Mary Ann injured by player");
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_159 = 1;
			iLocal_156 = 0;
			iLocal_157 = 10;
		}
		if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_348, 0, 2))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_2838("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 3");
				GlobalFunc_4956();
			}
			GlobalFunc_2838("Mary Ann injured by some form of weapon");
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_159 = 1;
			iLocal_156 = 0;
			iLocal_157 = 10;
		}
	}
	if (iLocal_362 == 1)
	{
		GlobalFunc_2838("Mary Ann scared");
		if (GlobalFunc_115(iLocal_348))
		{
			TASK::CLEAR_PED_TASKS(iLocal_348);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_159 = 2;
		iLocal_156 = 0;
		iLocal_157 = 10;
	}
	else if (GlobalFunc_115(iLocal_348))
	{
		if ((GlobalFunc_8639(iLocal_348, 1, 0, 0, 0) || func_52(iLocal_348, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), 10f, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_2838("Killing any convo before scared convo");
				GlobalFunc_4956();
			}
			iLocal_362 = 1;
		}
	}
}

int func_52(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2484
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8639(iParam0, bParam1, bParam5, bParam6, bParam7))
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
		else if (func_53(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, float fParam1)//Position - 0x253F
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
				if (func_40(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}










void func_63()//Position - 0x2A12
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		GlobalFunc_2838("Stopping scripted convo at script_passed");
		GlobalFunc_4956();
	}
	if (iLocal_160 != 1)
	{
		GlobalFunc_553(763);
	}
	HUD::CLEAR_PRINTS();
	GlobalFunc_9621(61, 0, 1);
	GlobalFunc_11315(85, 1);
	func_437();
}



































































































































































































void func_258(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x27604
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
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_266()//Position - 0x278AE
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (GlobalFunc_115(iLocal_348))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_348, "rcmfanatic1", "jogging_on_spot", 3))
		{
			Var3 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iLocal_348, 1)) };
			Var6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_348) };
			fVar9 = 0.25f;
			Var0 = { Var6 + Var3 - Var6 * Vector(fVar9, fVar9, fVar9) };
			ENTITY::SET_ENTITY_HEADING(iLocal_348, GlobalFunc_1695(0f, 0f, 0f, Var0, 1));
		}
	}
}


void func_268()//Position - 0x2798D
{
	struct<20> Var0;
	
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	if (iLocal_164 == 0)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_723);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_460, &Var0, &Var0, 1040187392, 1040187392);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_482, &Var0, &Var0, 1040187392, 1040187392);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_504, &Var0, &Var0, 1040187392, 1040187392);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Local_526, &Var0, &Var0, 1040187392, 1040187392);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_723);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_723);
			GlobalFunc_2838("Starting out of breath anim loop");
			iLocal_164 = 1;
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_723);
		}
	}
	else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_448, 1))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_01", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_02", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

bool func_269(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x27AF9
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, 145, sParam1, iParam11, iParam12, 0);
	if (iParam10 > 7)
	{
		if (iParam10 < 12)
		{
			iParam10 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_271(4, &uVar0, &uVar11, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, sParam9, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_9753(&uVar0, &uVar11, iParam10, 0);
}


void func_271(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x27EC0
{
	Global_15689 = iParam0;
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = uParam9;
	(*uParam2)[3] = uParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}






void func_277()//Position - 0x28101
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (GlobalFunc_4924(Local_575[iVar0 /*12*/]) && PED::IS_PED_RAGDOLL(Local_575[iVar0 /*12*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_575[iVar0 /*12*/]);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
			if (GlobalFunc_156(Local_575[iVar0 /*12*/], PLAYER::PLAYER_PED_ID(), 1) < GlobalFunc_156(Local_575[iVar0 /*12*/], iLocal_348, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			}
			else
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_348, -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_348, 0);
			}
			TASK::TASK_PAUSE(0, 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[iVar0 /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
			TASK::TASK_PERFORM_SEQUENCE(Local_575[iVar0 /*12*/], uLocal_181);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
		}
		if (GlobalFunc_115(Local_575[iVar0 /*12*/]))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_575[iVar0 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_575[iVar0 /*12*/]);
				TASK::TASK_SMART_FLEE_PED(Local_575[iVar0 /*12*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 1, 0);
				GlobalFunc_2297(&(Local_575[iVar0 /*12*/]), 1, 0, 1);
			}
		}
		iVar0++;
	}
	if (iLocal_625 == 0)
	{
		if (iLocal_657 > 114)
		{
			if (GlobalFunc_4924(Local_575[2 /*12*/]) && GlobalFunc_4924(Local_575[3 /*12*/]))
			{
				iVar1 = 2;
				while (iVar1 <= 3)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[iVar1 /*12*/].f_5, 0.7f, 20000, 1f, 1, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[iVar1 /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
					TASK::TASK_PERFORM_SEQUENCE(Local_575[iVar1 /*12*/], uLocal_181);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
					iVar1++;
				}
				TASK::TASK_LOOK_AT_ENTITY(Local_575[2 /*12*/], Local_575[3 /*12*/], -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(Local_575[3 /*12*/], Local_575[2 /*12*/], -1, 0, 2);
			}
			if (GlobalFunc_4924(iLocal_648))
			{
				TASK::CLEAR_PED_TASKS(iLocal_648);
			}
			iLocal_625 = 1;
		}
	}
	else
	{
		iVar2 = 2;
		while (iVar2 <= 3)
		{
			if (GlobalFunc_4924(Local_575[iVar2 /*12*/]) && PED::IS_PED_RAGDOLL(Local_575[iVar2 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_575[iVar2 /*12*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				if (GlobalFunc_156(Local_575[iVar2 /*12*/], PLAYER::PLAYER_PED_ID(), 1) < GlobalFunc_156(Local_575[iVar2 /*12*/], iLocal_348, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_348, -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_348, 0);
				}
				TASK::TASK_PAUSE(0, 3000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[iVar2 /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(Local_575[iVar2 /*12*/], uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			}
			if (GlobalFunc_115(Local_575[iVar2 /*12*/]))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_575[iVar2 /*12*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_575[iVar2 /*12*/]);
					TASK::TASK_SMART_FLEE_PED(Local_575[iVar2 /*12*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 1, 0);
					GlobalFunc_2297(&(Local_575[iVar2 /*12*/]), 1, 0, 1);
				}
			}
			iVar2++;
		}
	}
}


var func_279()//Position - 0x28472
{
	var uVar0;
	
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_654, func_280(), &uVar0);
	return uVar0;
}

Vector3 func_280()//Position - 0x2848A
{
	struct<3> Var0;
	
	func_281();
	if (iLocal_658 < (iLocal_656 - 1))
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_654, iLocal_658 + 1, &Var0);
	}
	else
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_654, (iLocal_656 - 1), &Var0);
	}
	return Var0;
}

void func_281()//Position - 0x284C6
{
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_654))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_654, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iLocal_657);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), &iLocal_658);
		if (iLocal_708 < iLocal_676)
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_654, iLocal_657, &Local_659);
		}
	}
}


void func_283()//Position - 0x28527
{
	uLocal_458 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	CAM::SET_CAM_PARAMS(uLocal_458, -2006.404f, -505.1258f, 12.1679f, -8.411f, 0f, -152.3152f, 50f, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	CAM::SET_CAM_ACTIVE(uLocal_458, 1);
}

void func_284(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x28579
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
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_38 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}














void func_298()//Position - 0x29184
{
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_2838("SETUP PLAYER IN VEHICLE STATE");
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(0);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_671))
			{
				HUD::SET_BLIP_ALPHA(iLocal_671, 0);
			}
			HUD::CLEAR_PRINTS();
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_348))
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_348, 1, 0);
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 3f, -1, 3f, 1);
			iLocal_714 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_111())
			{
				GlobalFunc_2838("stop scripted conversation at STAGE_PLAYER_IN_VEHICLE");
				GlobalFunc_4956();
			}
			iLocal_361 = 1;
			GlobalFunc_2838("STARTING PLAYER IN VEHICLE LOOP");
			iLocal_156 = 1;
			break;
		
		case 1:
			if (iLocal_361)
			{
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) < 4f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_348);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), -1);
					iLocal_361 = 0;
				}
			}
			else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) > 5f)
			{
				TASK::CLEAR_PED_TASKS(iLocal_348);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 3f, -1, 3f, 1);
				iLocal_361 = 1;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_714) > 4000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
				iLocal_159 = 3;
				iLocal_156 = 0;
				iLocal_157 = 10;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				HUD::CLEAR_PRINTS();
				if (!MISC::IS_STRING_NULL(sLocal_654))
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_654))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_280(), 3f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_654, func_279(), 1040, -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
					}
				}
				iLocal_156 = 1;
				iLocal_157 = iLocal_158;
				if (HUD::DOES_BLIP_EXIST(iLocal_671))
				{
					HUD::SET_BLIP_ALPHA(iLocal_671, 255);
				}
				AUDIO::RESTART_SCRIPTED_CONVERSATION();
			}
			break;
	}
}

void func_299()//Position - 0x29352
{
	switch (iLocal_156)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(iLocal_349))
			{
				iLocal_349 = GlobalFunc_4955(iLocal_348, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_349, 1);
			}
			iLocal_156 = 1;
			break;
		
		case 1:
			func_300();
			func_277();
			break;
	}
}

void func_300()//Position - 0x2939E
{
	if (!GlobalFunc_4947(iLocal_448))
	{
		STREAMING::REQUEST_MODEL(iLocal_453);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_453))
		{
			iLocal_448 = VEHICLE::CREATE_VEHICLE(iLocal_453, Local_449, fLocal_452, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_453);
		}
	}
}


void func_302()//Position - 0x2942F
{
	var uVar0;
	
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_2838("SETUP SPRINT_TO_FINISH");
			if (!HUD::DOES_BLIP_EXIST(iLocal_349))
			{
				iLocal_349 = GlobalFunc_4955(iLocal_348, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_349, 1);
			}
			iLocal_653 = 0;
			iLocal_156 = 1;
			GlobalFunc_2838("GOING INTO SPRINT_TO_FINISH MAIN LOOP");
			break;
		
		case 1:
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			if (Local_428.f_2 == 0 && iLocal_658 < 105)
			{
				if (func_315() && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) < 25f)
				{
					if (GlobalFunc_10618(&uLocal_182, "FAN1AU", Local_428.x, 7, 0, 0, 0))
					{
						Local_428.f_2 = 1;
						TASK::TASK_PLAY_ANIM(iLocal_348, "rcmfanatic1yell", "yell_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
					}
				}
			}
			if (GlobalFunc_5664(Local_428.x))
			{
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) > 30f)
				{
					GlobalFunc_4935();
				}
			}
			func_311();
			func_300();
			func_309();
			func_305();
			func_277();
			if ((iLocal_371 < 3 && iLocal_658 < 117) && iLocal_657 < 117)
			{
				if (!GlobalFunc_111())
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_712) > 3000)
					{
						if (func_303("FAN1_FAST", sLocal_372[iLocal_371], 0, &uVar0))
						{
							iLocal_371++;
						}
					}
				}
				else
				{
					iLocal_712 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_303(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x2958D
{
	if (iLocal_347 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (bParam2)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				*uParam3 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				GlobalFunc_2838("Stopping scripted convo at can Mary Ann say single line");
				GlobalFunc_4956();
				HUD::CLEAR_PRINTS();
			}
			if (GlobalFunc_10630(&uLocal_182, "FAN1AU", sParam0, sParam1, 7, 0, 0))
			{
				return 1;
			}
		}
		else if (!GlobalFunc_111())
		{
			if (GlobalFunc_10630(&uLocal_182, "FAN1AU", sParam0, sParam1, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_305()//Position - 0x29658
{
	switch (iLocal_722)
	{
		case 0:
			if (func_308())
			{
				GlobalFunc_2838("CPR scene resources loaded - progressing");
				func_307(1);
				iLocal_722 = 1;
			}
			break;
		
		case 1:
			if (iLocal_708 >= 7)
			{
				if (GlobalFunc_4947(iLocal_630))
				{
					if (GlobalFunc_4924(iLocal_626) && GlobalFunc_4924(iLocal_627))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_630, "Fanatic1Quad", 16, 14, 0, -1, -1082130432, 0, 1073741824);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_630, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_627, -1, 0, 2);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_627, 1), 1.8f, 20000, 1193033728, 1056964608);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_626, uLocal_181);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_630, 5f);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_630);
						iLocal_722 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_4924(iLocal_626) && GlobalFunc_4924(iLocal_627))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_627))
				{
					iLocal_722 = 6;
				}
				if (GlobalFunc_156(iLocal_627, iLocal_626, 1) < 2f)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_626, 1);
					uLocal_640 = PED::CREATE_SYNCHRONIZED_SCENE(Local_634, Local_637, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_626, uLocal_640, "mini@cpr@char_a@cpr_def", "cpr_intro", 4f, -8f, 1, 0, 4f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_627, uLocal_640, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 4, 0, 1148846080, 0);
					iLocal_722 = 3;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_4924(iLocal_626) && GlobalFunc_4924(iLocal_627))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_626) || PED::IS_PED_RAGDOLL(iLocal_627))
				{
					iLocal_722 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_640) > 0.99f)
				{
					uLocal_640 = PED::CREATE_SYNCHRONIZED_SCENE(Local_634, Local_637, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_626, uLocal_640, "mini@cpr@char_a@cpr_str", "cpr_pumpchest", 8f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_627, uLocal_640, "mini@cpr@char_b@cpr_str", "cpr_pumpchest", 8f, -8f, 4, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_640, 1);
					iLocal_722 = 4;
				}
				if (func_306())
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_640) > 0.23f)
					{
						iLocal_722 = 5;
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_626, uLocal_181);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
						if (GlobalFunc_4924(iLocal_628))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
							TASK::TASK_PAUSE(0, 200);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_628, uLocal_181);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
						}
						if (GlobalFunc_4924(iLocal_629))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
							TASK::TASK_PAUSE(0, 500);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_629, uLocal_181);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
						}
						iLocal_722 = 8;
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_4924(iLocal_626) && GlobalFunc_4924(iLocal_627))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_626) || PED::IS_PED_RAGDOLL(iLocal_627))
				{
					iLocal_722 = 6;
				}
				else if (func_306())
				{
					iLocal_722 = 5;
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_4924(iLocal_626) && !PED::IS_PED_FLEEING(iLocal_626))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0, 0, 0, 0);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_626, uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			}
			if (GlobalFunc_4924(iLocal_628) && !PED::IS_PED_FLEEING(iLocal_628))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_PAUSE(0, 200);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_628, uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			}
			if (GlobalFunc_4924(iLocal_629) && !PED::IS_PED_FLEEING(iLocal_629))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_PAUSE(0, 500);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_629, uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			}
			if (GlobalFunc_4924(iLocal_627))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_627, 0);
			}
			iLocal_722 = 8;
			break;
		
		case 6:
			if (GlobalFunc_4924(iLocal_626))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_626, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				if (!PED::IS_PED_RAGDOLL(iLocal_626))
				{
					TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0, 0, 0, 0);
				}
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_627, -1, 0, 2);
				if (GlobalFunc_156(iLocal_626, iLocal_627, 1) > 2f)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_627, 1), 1f, 20000, 1.5f, 0, 1193033728);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_627, 0);
				TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 10000);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_626, uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			}
			if (GlobalFunc_4924(iLocal_628))
			{
				TASK::STOP_ANIM_PLAYBACK(iLocal_628, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_628, iLocal_627, 2000, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_628, iLocal_627, 0);
				GlobalFunc_2297(&iLocal_628, 1, 0, 1);
			}
			if (GlobalFunc_4924(iLocal_629))
			{
				TASK::STOP_ANIM_PLAYBACK(iLocal_629, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_629, iLocal_627, 2000, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_629, iLocal_627, 0);
				GlobalFunc_2297(&iLocal_629, 1, 0, 1);
			}
			if (GlobalFunc_4924(iLocal_627))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_627, 0);
			}
			iLocal_722 = 7;
			break;
		
		case 7:
			if (GlobalFunc_4924(iLocal_626))
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_626, 490823532) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_626, 490823532) != 0) && PED::IS_PED_RAGDOLL(iLocal_626))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_627, -1, 0, 2);
					if (GlobalFunc_156(iLocal_626, iLocal_627, 1) > 2f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_627, 1), 1f, 20000, 1.5f, 0, 1193033728);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_627, 0);
					TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 10000);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_626, uLocal_181);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
				}
			}
			if (func_306())
			{
				if (GlobalFunc_4924(iLocal_626) && !PED::IS_PED_FLEEING(iLocal_626))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_626, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				}
				if (GlobalFunc_4924(iLocal_628) && !PED::IS_PED_FLEEING(iLocal_628))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_628, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				}
				if (GlobalFunc_4924(iLocal_629) && !PED::IS_PED_FLEEING(iLocal_629))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_629, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				}
				iLocal_722 = 8;
			}
			break;
		
		case 8:
			break;
	}
	if (GlobalFunc_4924(iLocal_628) && !PED::IS_PED_FLEEING(iLocal_628))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_628))
		{
			TASK::CLEAR_PED_TASKS(iLocal_628);
			GlobalFunc_2297(&iLocal_628, 1, 0, 1);
		}
	}
	if (GlobalFunc_4924(iLocal_629) && !PED::IS_PED_FLEEING(iLocal_629))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_629))
		{
			TASK::CLEAR_PED_TASKS(iLocal_629);
			GlobalFunc_2297(&iLocal_629, 1, 0, 1);
		}
	}
	if (GlobalFunc_4924(iLocal_627))
	{
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(82, iLocal_627, 1f);
	}
}

int func_306()//Position - 0x29DF3
{
	if (((func_52(iLocal_626, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_52(iLocal_627, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || func_52(iLocal_628, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || func_52(iLocal_629, 1, 1116471296, 1126825984, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_307(bool bParam0)//Position - 0x29E6D
{
	if (!GlobalFunc_4947(iLocal_630))
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 0, 0);
		PATHFIND::DISABLE_NAVMESH_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 1);
		if (iLocal_642 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_642);
			iLocal_642 = -1;
		}
		iLocal_642 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1870.54f, -628.1f, 10.09f, 4f, 4f, 4f, 0f, 0, 7);
		if (iLocal_642 == -1)
		{
		}
		iLocal_627 = PED::CREATE_PED(4, joaat("a_m_m_beach_01"), -1870.54f, -628.1f, 10.09f, 80f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_627, 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_627);
		PED::SET_PED_MONEY(iLocal_627, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_627, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_627, 0);
		Local_634 = { ENTITY::GET_ENTITY_COORDS(iLocal_627, 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_627, 1), &(Local_634.f_2));
		Local_637 = { ENTITY::GET_ENTITY_ROTATION(iLocal_627, 2) };
		uLocal_641 = PED::CREATE_SYNCHRONIZED_SCENE(Local_634, Local_637, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_627, uLocal_641, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 0, 16, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_641, 0f);
		iLocal_628 = PED::CREATE_PED(5, joaat("a_f_y_beach_01"), -1869.76f, -627.7f, 10.1f, 0f, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_628, 17, 1);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_627, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_181, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_628, uLocal_181);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
		iLocal_629 = PED::CREATE_PED(5, joaat("a_f_y_beach_01"), -1873.61f, -628.88f, 11.16f, 0f, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_629, 17, 1);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_627, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 4f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_181, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_629, uLocal_181);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
		if (bParam0)
		{
			iLocal_630 = VEHICLE::CREATE_VEHICLE(joaat("blazer2"), Local_631, 36.64f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_630);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_630, 1);
			iLocal_626 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_630, 20, joaat("s_m_y_baywatch_01"), -1, 1, 1);
			iLocal_722 = 1;
		}
		else
		{
			iLocal_630 = VEHICLE::CREATE_VEHICLE(joaat("blazer2"), -1871.55f, -640.01f, 10.65f, 297.76f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_630);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_630, 1);
			iLocal_626 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_630, 4, joaat("s_m_y_baywatch_01"), -1, 1, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_627, -1, 0, 2);
			TASK::TASK_LEAVE_VEHICLE(0, iLocal_630, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_627, 1), 1.8f, 20000, 1048576000, 0, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_626, uLocal_181);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			iLocal_722 = 2;
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_626, 17, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_626, 1);
		PED::SET_PED_KEEP_TASK(iLocal_627, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_baywatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_beach_01"));
}

int func_308()//Position - 0x2A396
{
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_a@cpr_def");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_b@cpr_def");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_a@cpr_str");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_b@cpr_str");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
	TASK::REQUEST_WAYPOINT_RECORDING("Fanatic1Quad");
	STREAMING::REQUEST_MODEL(joaat("blazer2"));
	STREAMING::REQUEST_MODEL(joaat("a_f_y_beach_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_baywatch_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_m_beach_01"));
	if (((((((((STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_a@cpr_def") && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_b@cpr_def")) && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_a@cpr_str")) && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_b@cpr_str")) && STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1Quad")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_beach_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_baywatch_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_beach_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("blazer2")))
	{
		return 1;
	}
	return 0;
}

void func_309()//Position - 0x2A47B
{
	if (GlobalFunc_4924(iLocal_648))
	{
		switch (iLocal_653)
		{
			case 0:
				if (func_310())
				{
					if (!GlobalFunc_115(iLocal_648))
					{
						iLocal_648 = PED::CREATE_PED(26, joaat("a_c_rottweiler"), Local_649, fLocal_652, 1, 1);
						PED::SET_PED_CAN_RAGDOLL(iLocal_648, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
					GlobalFunc_2838("Loaded and created dog - progressing");
					iLocal_653 = 1;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (iLocal_657 == 109)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_648, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 2.5f, -1, 0.2f, 1);
						iLocal_653 = 2;
					}
				}
				break;
			}
	}
}

int func_310()//Position - 0x2A525
{
	STREAMING::REQUEST_MODEL(joaat("a_c_rottweiler"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("a_c_rottweiler")))
	{
		return 1;
	}
	return 0;
}

void func_311()//Position - 0x2A547
{
	if (!GlobalFunc_115(Local_575[0 /*12*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_624);
		STREAMING::REQUEST_MODEL(joaat("a_m_y_beach_01"));
		STREAMING::REQUEST_MODEL(joaat("a_f_y_beach_01"));
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_624) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beach_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_beach_01")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_575[0 /*12*/]))
			{
				Local_575[0 /*12*/].f_2 = { -1951.48f, -556.16f, 11.71f };
				Local_575[0 /*12*/].f_11 = -121.42f;
				Local_575[0 /*12*/].f_5 = { -1910.1f, -591.56f, 10.67f };
				Local_575[0 /*12*/].f_8 = { -1843.73f, -649.16f, 9.53f };
				Local_575[0 /*12*/].f_1 = iLocal_624;
				Local_575[0 /*12*/] = PED::CREATE_PED(5, Local_575[0 /*12*/].f_1, Local_575[0 /*12*/].f_2, Local_575[0 /*12*/].f_11, 1, 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_575[0 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_575[0 /*12*/], 17, 1);
				func_312(Local_575[0 /*12*/]);
				if (GlobalFunc_4924(Local_575[0 /*12*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[0 /*12*/].f_5, 2f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[0 /*12*/].f_8, 2f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
					TASK::TASK_PERFORM_SEQUENCE(Local_575[0 /*12*/], uLocal_181);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_575[1 /*12*/]))
			{
				Local_575[1 /*12*/].f_2 = { -1953.85f, -555.66f, 11f };
				Local_575[1 /*12*/].f_11 = -121.42f;
				Local_575[1 /*12*/].f_5 = { -1911.54f, -591.7f, 10.61f };
				Local_575[1 /*12*/].f_8 = { -1839.87f, -651.49f, 9.53f };
				Local_575[1 /*12*/].f_1 = iLocal_624;
				Local_575[1 /*12*/] = PED::CREATE_PED(5, Local_575[1 /*12*/].f_1, Local_575[1 /*12*/].f_2, Local_575[1 /*12*/].f_11, 1, 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_575[1 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_575[1 /*12*/], 17, 1);
				if (GlobalFunc_4924(Local_575[1 /*12*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[1 /*12*/].f_5, 2.05f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_575[1 /*12*/].f_8, 2.05f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
					TASK::TASK_PERFORM_SEQUENCE(Local_575[1 /*12*/], uLocal_181);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_575[2 /*12*/]))
			{
				Local_575[2 /*12*/].f_2 = { -1999.4f, -508.02f, 11f };
				Local_575[2 /*12*/].f_11 = 167.3f;
				Local_575[2 /*12*/].f_5 = { -1997.21f, -517.17f, 10.73f };
				Local_575[2 /*12*/].f_8 = { -1961.31f, -547.96f, 10.7f };
				Local_575[2 /*12*/].f_1 = joaat("a_f_y_beach_01");
				Local_575[2 /*12*/] = PED::CREATE_PED(5, Local_575[2 /*12*/].f_1, Local_575[2 /*12*/].f_2, Local_575[2 /*12*/].f_11, 1, 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_575[2 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_575[2 /*12*/], 17, 1);
				func_312(Local_575[2 /*12*/]);
			}
			else if (GlobalFunc_4924(Local_575[2 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_575[2 /*12*/]);
				ENTITY::SET_ENTITY_COORDS(Local_575[2 /*12*/], Local_575[2 /*12*/].f_2, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_575[2 /*12*/], Local_575[2 /*12*/].f_11);
				func_312(Local_575[2 /*12*/]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_575[3 /*12*/]))
			{
				Local_575[3 /*12*/].f_2 = { -2000.19f, -507.37f, 11f };
				Local_575[3 /*12*/].f_11 = 83.65f;
				Local_575[3 /*12*/].f_5 = { -1998.27f, -517.46f, 10.67f };
				Local_575[3 /*12*/].f_8 = { -1962.75f, -549.56f, 10.62f };
				Local_575[3 /*12*/].f_1 = joaat("a_m_y_beach_01");
				Local_575[3 /*12*/] = PED::CREATE_PED(4, Local_575[3 /*12*/].f_1, Local_575[3 /*12*/].f_2, Local_575[3 /*12*/].f_11, 1, 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_575[3 /*12*/], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_575[3 /*12*/], 17, 1);
				func_312(Local_575[3 /*12*/]);
			}
			else if (GlobalFunc_4924(Local_575[3 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_575[3 /*12*/]);
				ENTITY::SET_ENTITY_COORDS(Local_575[3 /*12*/], Local_575[3 /*12*/].f_2, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_575[3 /*12*/], Local_575[3 /*12*/].f_11);
				func_312(Local_575[3 /*12*/]);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_beach_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beach_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_624);
		}
	}
}

void func_312(int iParam0)//Position - 0x2AA09
{
	struct<3> Var0;
	float fVar3;
	
	if (GlobalFunc_4924(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3);
		ENTITY::SET_ENTITY_COORDS(iParam0, Var0.x, Var0.f_1, fVar3, 1, 0, 0, 1);
	}
}



int func_315()//Position - 0x2AA86
{
	if ((iLocal_347 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !GlobalFunc_111())
	{
		return 1;
	}
	return 0;
}

void func_316()//Position - 0x2AAB2
{
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_2838("STEPS DOWN SETUP");
			if (!HUD::DOES_BLIP_EXIST(iLocal_349))
			{
				iLocal_349 = GlobalFunc_4955(iLocal_348, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_349, 1);
			}
			PED::SET_PED_NON_CREATION_AREA(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f, 0, 0);
			if (GlobalFunc_4924(Local_548))
			{
				TASK::CLEAR_PED_TASKS(Local_548);
				GlobalFunc_2297(&Local_548, 1, 0, 1);
			}
			if (GlobalFunc_4947(Local_548.f_2))
			{
				GlobalFunc_131(&(Local_548.f_2));
			}
			GlobalFunc_2838("GOING INTO STEPS_DOWN MAIN LOOP");
			iLocal_156 = 1;
			break;
		
		case 1:
			func_305();
			func_319();
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			if (iLocal_167 == 0)
			{
				func_318();
			}
			if (func_317(Local_665))
			{
				fLocal_355 = 1.15f;
				iLocal_156 = 0;
				iLocal_157 = 5;
			}
			break;
	}
}

int func_317(struct<3> Param0)//Position - 0x2ABB1
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_348, Param0, 3f, 3f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_318()//Position - 0x2ABD2
{
	if (iLocal_167 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1827.53f, -538.1213f, 21.83124f, -1805.926f, -555.6239f, 31.77323f, 2f, 0, 1, 0))
		{
			if (iLocal_347 == 0)
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					GlobalFunc_2838("Stopping scripted convo at check if player jumps off cliff");
					GlobalFunc_4935();
					HUD::CLEAR_PRINTS();
				}
				if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_5", 7, 0, 0, 0))
				{
					iLocal_160 = 1;
					iLocal_167 = 1;
				}
			}
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticCheated = 1;
		}
	}
}

void func_319()//Position - 0x2AC50
{
	if ((MISC::GET_GAME_TIMER() - iLocal_394) > 10000)
	{
		switch (iLocal_393)
		{
			case 0:
				func_321();
				break;
			
			case 1:
				func_320();
				break;
			
			case 2:
				func_321();
				break;
			
			case 3:
				func_320();
				break;
			
			case 4:
				func_321();
				break;
			
			case 5:
				func_320();
				break;
			
			case 6:
				func_321();
				break;
			
			case 7:
				func_320();
				break;
			
			case 8:
				func_321();
				break;
			
			case 9:
				func_320();
				break;
			
			default:
				break;
			}
	}
}

void func_320()//Position - 0x2ACF3
{
	if ((!GlobalFunc_111() && iLocal_347 == 0) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_ONELIN", 7, 0, 0, 0))
		{
			iLocal_393++;
			iLocal_394 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_321()//Position - 0x2AD3A
{
	if (iLocal_655 == 2)
	{
		if ((!GlobalFunc_111() && iLocal_347 == 0) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_TAUNT", 7, 0, 0, 0))
			{
				iLocal_393++;
				iLocal_394 = MISC::GET_GAME_TIMER();
			}
		}
	}
}


void func_323()//Position - 0x2ADBF
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_2838("SETUP ROAD_RUNNING_SECTION");
			if (!HUD::DOES_BLIP_EXIST(iLocal_349))
			{
				iLocal_349 = GlobalFunc_4955(iLocal_348, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_349, 1);
			}
			if (iLocal_166 == 1)
			{
				func_4(0);
			}
			iLocal_167 = 0;
			iLocal_396 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_111())
			{
				GlobalFunc_2838("stop scripted conversation at ROAD_RUNNING_SECTION");
				GlobalFunc_4935();
			}
			if (GlobalFunc_4947(Local_562.f_2) && GlobalFunc_4924(Local_562))
			{
				ENTITY::SET_ENTITY_COORDS(Local_562.f_2, -1934.15f, -438.19f, 19.6f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_562.f_2, 237.78f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_562.f_2);
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_562, Local_562.f_2, Local_562.f_8, 4, Local_562.f_12, 786599, 3f, 3f, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_562, 1);
			}
			GlobalFunc_2838("GOING INTO ROAD_RUNNING_SECTION LOOP");
			iLocal_561 = 1;
			iLocal_156 = 1;
			break;
		
		case 1:
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			if (func_315())
			{
				if (Local_418.f_2 == 0)
				{
					if (GlobalFunc_115(iLocal_348))
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), &iVar0);
					}
					if (iVar0 <= 52)
					{
						if ((Local_438.f_2 == 0 && Local_433.f_2 == 0) && iLocal_655 == 2)
						{
							GlobalFunc_10618(&uLocal_182, "FAN1AU", Local_418.x, 7, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10626(&uLocal_182, "FAN1AU", Local_418.x, "FAN1_RD1_3", 7, 0, 0);
						}
						Local_418.f_2 = 1;
					}
				}
			}
			if (iLocal_561 == 1)
			{
				if (iLocal_658 > 41)
				{
					iLocal_561 = 2;
				}
			}
			if (Local_418.f_2 == 1 && Local_423.f_2 == 1)
			{
				if (GlobalFunc_115(iLocal_348))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_348, 0f, 6f, 0f) };
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(Var1, 8f, 0, 2);
					if (iVar4 != 0)
					{
						if ((iLocal_347 == 0 && iLocal_396 > 2000) && iLocal_395 < 5)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
								{
									iLocal_395++;
									iLocal_396 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(Var1, 8f, 0, 4);
						if (iVar4 != 0)
						{
							if ((iLocal_347 == 0 && iLocal_396 > 2000) && iLocal_395 < 5)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
									{
										iLocal_395++;
										iLocal_396 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				func_319();
			}
			func_318();
			func_324();
			if (iLocal_658 > 61)
			{
				iLocal_156 = 0;
				iLocal_157 = 4;
			}
			break;
	}
}

void func_324()//Position - 0x2B05D
{
	if ((GlobalFunc_4924(Local_548.f_1) && GlobalFunc_4947(Local_548.f_2)) && GlobalFunc_4924(Local_548))
	{
		switch (iLocal_561)
		{
			case 0:
				if (func_327())
				{
					GlobalFunc_2838("Driveby scene resources loaded - progressing");
					iLocal_561 = 1;
				}
				break;
			
			case 1:
				break;
			
			case 2:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_PAUSE(0, 1500);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_548.f_2, Local_548.f_8, Local_548.f_12, 0, Local_548.f_4, 16, 10f, 10f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(Local_548, uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
				iLocal_172 = 0;
				iLocal_561 = 3;
				break;
			
			case 3:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_548.f_2, 1), ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), 1) <= 45f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_548.f_2, 1), ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), 1) <= 20f)
					{
						if (iLocal_172 == 0)
						{
							VEHICLE::START_VEHICLE_HORN(Local_548.f_2, 4500, 0, 0);
							if (GlobalFunc_4924(iLocal_348))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_348, Local_548.f_2, 3000, 1072, 2);
							}
							iLocal_172 = 1;
						}
						if (iLocal_347 == 0)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (GlobalFunc_10618(&uLocal_182, "FAN1AU", Local_423.x, 9, 0, 0, 0))
								{
									Local_423.f_2 = 1;
									GlobalFunc_2838("Doing Mary Ann's anim...");
									TASK::TASK_PLAY_ANIM(iLocal_348, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0, 0, 0, 0);
									iLocal_561 = 4;
									iLocal_347 = 0;
									if (iLocal_350 == 1)
									{
										iLocal_350 = 2;
									}
								}
							}
						}
						else if (GlobalFunc_10618(&uLocal_182, "FAN1AU", Local_423.x, 9, 1, 0, 0))
						{
							Local_423.f_2 = 1;
							GlobalFunc_2838("Doing Mary Ann's anim...");
							TASK::TASK_PLAY_ANIM(iLocal_348, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0, 0, 0, 0);
							iLocal_561 = 4;
							iLocal_347 = 1;
							if (iLocal_350 == 1)
							{
								iLocal_350 = 2;
							}
						}
					}
				}
				break;
			
			case 4:
				TASK::CLEAR_PED_TASKS(Local_548);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_548.f_2, 6f, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(Local_548, uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_DRIVE_BY(Local_548.f_1, iLocal_348, 0, 0f, 0f, 0f, 25f, 100, 0, -957453492);
				iLocal_394 = (MISC::GET_GAME_TIMER() - 3000);
				iLocal_561 = 5;
				break;
			
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_348, "rcmfanatic1yell", "yell_d", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_348, "rcmfanatic1yell", "yell_d") > 0.44f)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_348);
						iLocal_713 = MISC::GET_GAME_TIMER();
						iLocal_561 = 6;
						func_4(1);
					}
				}
				else
				{
					iLocal_713 = MISC::GET_GAME_TIMER();
					iLocal_561 = 6;
					func_4(1);
				}
				break;
			
			case 6:
				if ((MISC::GET_GAME_TIMER() - iLocal_713) > 3000)
				{
					if (GlobalFunc_4924(Local_548))
					{
						if (GlobalFunc_4947(Local_548.f_2))
						{
							TASK::CLEAR_PED_TASKS(Local_548);
							TASK::CLEAR_PED_SECONDARY_TASK(Local_548);
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_548, Local_548.f_2, 15f, 786613);
							PED::SET_PED_KEEP_TASK(Local_548, 1);
							GlobalFunc_2297(&Local_548, 1, 0, 1);
							GlobalFunc_131(&(Local_548.f_2));
						}
					}
					GlobalFunc_2297(&(Local_548.f_1), 1, 0, 1);
					GlobalFunc_2297(&Local_562, 1, 0, 1);
					if (GlobalFunc_4924(Local_562.f_1))
					{
						GlobalFunc_2838("*** Clearing driveby task and releasing");
						TASK::CLEAR_PED_TASKS(Local_562.f_1);
						GlobalFunc_2297(&(Local_562.f_1), 1, 0, 1);
					}
					GlobalFunc_131(&(Local_562.f_2));
				}
				break;
			}
	}
}



int func_327()//Position - 0x2B408
{
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_01"));
	STREAMING::REQUEST_MODEL(joaat("banshee"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_01")) && STREAMING::HAS_MODEL_LOADED(joaat("banshee")))
	{
		return 1;
	}
	return 0;
}


void func_329()//Position - 0x2B495
{
	var uVar0;
	
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_2838("Setup START_RUNNING");
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1835.53f, -518.7238f, 25.11678f, -1822.431f, -513.8933f, 30.38676f);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1835.53f, -518.7238f, 25.11678f, -1822.431f, -513.8933f, 30.38676f, 0, 1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
				if (GlobalFunc_115(iLocal_348))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_348, "FANATIC_MIX_MARY_ANNE", 0);
				}
			}
			if (!iLocal_163)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
				{
					GlobalFunc_2838("Starting music - start_running() init");
					iLocal_163 = 1;
				}
			}
			GlobalFunc_173(&uLocal_182, 3, iLocal_348, "MARYANN", 0, 1);
			func_258(1, 0, 1, 1);
			GlobalFunc_4923(&Local_95, 0, 1);
			if (GlobalFunc_115(iLocal_348))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_348, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			iLocal_710 = MISC::GET_GAME_TIMER();
			if (!HUD::DOES_BLIP_EXIST(iLocal_349))
			{
				iLocal_349 = GlobalFunc_4955(iLocal_348, 1, 1, 5);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_349, 1);
			}
			if (GlobalFunc_4924(iLocal_348))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_348, 0);
			}
			iLocal_350 = 3;
			iLocal_351 = MISC::GET_GAME_TIMER();
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1RollingStart"))
			{
				GlobalFunc_2838("*** Using assisted movement...");
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fanatic1RollingStart", 1, 2f, 0.7f);
			}
			iLocal_168 = 1;
			iLocal_711 = MISC::GET_GAME_TIMER();
			iLocal_712 = MISC::GET_GAME_TIMER();
			GlobalFunc_2838("GOING INTO START_RUNNING LOOP");
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 1);
			iLocal_156 = 1;
			break;
		
		case 1:
			if (!Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticHelp)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("FAN_HELP", -1);
					Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticHelp = 1;
				}
			}
			if (iLocal_168 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_711) < 5000)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_711) > 1000)
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_2838("FADING IN NOW");
							GlobalFunc_79(500, 0);
							func_258(1, 0, 1, 1);
						}
					}
				}
				else
				{
					iLocal_168 = 0;
					GlobalFunc_2838("TURNING OFF ASSISTED ROUTE");
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fanatic1RollingStart", 0, 1f, 0.5f);
					TASK::REMOVE_WAYPOINT_RECORDING("Fanatic1RollingStart");
				}
			}
			if (GlobalFunc_115(iLocal_348))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_348, 242628503) != 1)
				{
					GlobalFunc_2838("Re-set Mary Ann's task post-cutscene");
					TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_654, 1, 1052, -1);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
				}
			}
			if (Local_438.f_2 == 0)
			{
				if (iLocal_658 < 17)
				{
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1799.071f, -468.6591f, 40.07401f, -1820.119f, -492.4139f, 41.74369f, 18.25f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1798.076f, -468.2297f, 39.02536f, -1816.664f, -484.317f, 43.64211f, 12.5f, 0, 1, 0))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4935();
								}
								if (func_303(Local_438.x, Local_438.f_1, 0, &(Local_413.f_4)))
								{
									if (Local_413.f_4 != -1)
									{
										Local_413.f_3 = 1;
										GlobalFunc_2838("*** startRunConversation interrupted!");
										GlobalFunc_2837("*** startRunConversation will restart on line: ", Local_413.f_4);
									}
									iLocal_160 = 1;
									iLocal_165 = 1;
									Local_438.f_2 = 1;
									Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticCheated = 1;
								}
								else
								{
									GlobalFunc_2838("*** Waiting for prior conversation to end before can play cheated line!");
								}
							}
						}
					}
				}
			}
			if (Local_433.f_2 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1772.762f, -532.9971f, 35.58929f, -1797.246f, -492.1292f, 39.2704f, 26f, 0, 1, 0) || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1812.91f, -468.5253f, 41.32029f, 1) < 10f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
					}
					if (func_303(Local_433.x, Local_433.f_1, 0, &(Local_413.f_4)))
					{
						if (Local_413.f_4 != -1)
						{
							Local_413.f_3 = 1;
							GlobalFunc_2838("*** startRunConversation interrupted!");
							GlobalFunc_2837("*** startRunConversation will restart on line: ", Local_413.f_4);
						}
						iLocal_160 = 1;
						iLocal_165 = 1;
						Local_433.f_2 = 1;
						Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticCheated = 1;
					}
					else
					{
						GlobalFunc_2838("*** Waiting for prior conversation to end before can play cheated line!");
					}
				}
			}
			if (iLocal_165 == 1)
			{
				if (Local_443.f_2 == 0)
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) < 10f)
					{
						if (func_303(Local_443.x, Local_443.f_1, 0, &uVar0))
						{
							Local_443.f_2 = 1;
							iLocal_165 = 0;
							iLocal_394 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (func_315())
			{
				if (Local_413.f_2 == 0 && (MISC::GET_GAME_TIMER() - iLocal_712) > 3500)
				{
					GlobalFunc_10618(&uLocal_182, "FAN1AU", Local_413, 7, 0, 0, 0);
					GlobalFunc_2838("SETTING UP THE CONVERSATION");
					Local_413.f_2 = 1;
					iLocal_394 = MISC::GET_GAME_TIMER();
				}
				else if (Local_413.f_3 == 1)
				{
					if (Local_443.f_2 == 1)
					{
						StringCopy(&Local_376, Local_413, 16);
						StringConCat(&Local_376, "_", 16);
						StringIntConCat(&Local_376, Local_413.f_4, 16);
						if (GlobalFunc_10626(&uLocal_182, "FAN1AU", Local_413, &Local_376, 7, 0, 0))
						{
							Local_413.f_3 = 0;
						}
					}
				}
			}
			if (Local_413.f_2)
			{
				func_319();
			}
			if (func_317(Local_662))
			{
				fLocal_355 = 1.15f;
				iLocal_156 = 0;
				iLocal_157 = 3;
			}
			break;
	}
}




void func_333()//Position - 0x2BAC8
{
	switch (iLocal_156)
	{
		case 0:
			GlobalFunc_2838("Intro Cutscene");
			GlobalFunc_9623("ef_1_rcm", 1);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_2838("Trying to set Mary Ann component variation");
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_348, joaat("cs_maryann"));
			}
			iLocal_459 = 0;
			iLocal_163 = 0;
			if (iLocal_643 == -1)
			{
				iLocal_643 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1877.3f, -439.7f, 45.05f, 4f, 6f, 2f, 45f, 0, 7);
			}
			if (GlobalFunc_8027(1, 1093140480, 0))
			{
				if (GlobalFunc_115(iLocal_348))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_348, "Mary_Ann", 0, joaat("ig_maryann"), 0);
					GlobalFunc_2838("Registered Mary Ann");
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
					GlobalFunc_2838("Registered Michael");
				}
				uLocal_644 = PED::ADD_SCENARIO_BLOCKING_AREA(-1926.654f, -387.8897f, 46.7354f, -1897.322f, -374.5802f, 51.0241f, 0, 1, 1, 1);
				GlobalFunc_8954();
				PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
				CAM::STOP_GAMEPLAY_HINT(0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				GlobalFunc_79(500, 0);
				GlobalFunc_9805(-1873.526f, -441.6211f, 44.69363f, -1882.03f, -436.9917f, 47.48379f, 7f, -1875.09f, -431.08f, 45.21f, 236.42f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				GlobalFunc_9805(-1875.815f, -443.1191f, 49.13515f, -1808.561f, -491.7887f, 36.58029f, 11f, -1875.09f, -431.08f, 45.21f, 236.42f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_284(-1877.23f, -440.46f, 45.07f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				func_420();
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1799.513f, -467.6459f, 43.13879f, -1789.603f, -476.6616f, 36.83729f, 7.5f, 0, 0, 0, 0, 0);
				bLocal_162 = false;
				GlobalFunc_2838("Going into cutscene main loop now");
				iLocal_156 = 1;
			}
			else
			{
				GlobalFunc_2838("Waiting for cutscene to be OK to start...");
			}
			break;
		
		case 1:
			if (iLocal_459 == 0)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 31000)
				{
					if (!iLocal_163)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							GlobalFunc_2838("Starting music");
							iLocal_163 = 1;
						}
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					GlobalFunc_2838("*** Cutscene skip detected");
					GlobalFunc_2838("*** Cam exit state pitch/heading on skip");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					if (GlobalFunc_115(iLocal_348))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_348, -1869.24f, -444.99f, 45.17f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_348, -143.87f);
					}
					bLocal_162 = true;
					iLocal_459 = 1;
				}
				if (func_336())
				{
					iLocal_459 = 1;
				}
				func_334();
			}
			else if (iLocal_459 == 1)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 31000)
				{
					if (!iLocal_163)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							GlobalFunc_2838("Starting music");
							iLocal_163 = 1;
						}
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					GlobalFunc_2838("*** Cutscene skip detected");
					GlobalFunc_2838("*** Cam exit state pitch/heading on skip");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					if (GlobalFunc_115(iLocal_348))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_348, -1869.24f, -444.99f, 45.17f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_348, -143.87f);
					}
					if (!iLocal_163)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							GlobalFunc_2838("Starting music from skip");
							iLocal_163 = 1;
						}
					}
				}
				func_334();
				func_336();
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					RECORDING::_0x81CBAE94390F9F89();
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_643);
					iLocal_643 = -1;
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_644, 0);
					iLocal_389 = MISC::GET_GAME_TIMER();
					iLocal_156 = 0;
					iLocal_157 = 2;
				}
			}
			break;
	}
}

void func_334()//Position - 0x2BE69
{
	if (GlobalFunc_115(iLocal_348))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mary_Ann", joaat("ig_maryann")))
		{
			GlobalFunc_2838("*** Forcing Mary Ann's move state");
			GlobalFunc_2838("SET MARY ANNS TASK");
			if (bLocal_162)
			{
				GlobalFunc_5705(iLocal_348, -1867.64f, -446.01f, 45.16f, 229.3557f, 0, 1);
			}
			TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_654, 1, 1052, -1);
			TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			PED::FORCE_PED_MOTION_STATE(iLocal_348, -530524, 0, 1, 0);
		}
	}
}


int func_336()//Position - 0x2BF7E
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			GlobalFunc_2838("*** Forcing Michael's move state");
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0, 1, 0);
			return 1;
		}
	}
	return 0;
}







void func_343()//Position - 0x2C2AD
{
	GlobalFunc_8535();
	switch (iLocal_156)
	{
		case 0:
			if (!GlobalFunc_199())
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_348, 1) <= 1.2f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					GlobalFunc_2838("Player too close to Mary Ann, starting cutscene early");
					iLocal_156 = 0;
					iLocal_157 = 1;
				}
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_348, 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_717);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_718);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_719);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_720);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_721);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				}
				else
				{
					CAM::_0xCCD078C2665D2973(1);
				}
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1") && iLocal_157 == 0)
				{
					if (GlobalFunc_115(iLocal_348))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_348, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_348, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base") < 0.1f)
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_348, 0);
								GlobalFunc_173(&uLocal_182, 3, iLocal_348, "MARYANN", 0, 1);
								GlobalFunc_173(&uLocal_182, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
								TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_348, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", -1878.223f, -440.5181f, 46.03983f, 0f, 0f, 159.97f, 8f, -8f, -1, 262154, 0, 2, 0);
								GlobalFunc_2838("Done Mary Ann leadin anim");
								iLocal_156 = 1;
							}
							else
							{
								GlobalFunc_2838("Waiting to blend the lead-in...");
							}
						}
					}
				}
			}
			else
			{
				GlobalFunc_2838("Replay in progress or in wrong area - skipping to intro");
				iLocal_157 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4924(iLocal_348))
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_348, 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_717);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_718);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_719);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_720);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_721);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				}
				else
				{
					CAM::_0xCCD078C2665D2973(1);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_348, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", 3))
				{
					if (iLocal_161 == 0)
					{
						if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_LDI", 8, 0, 0, 0))
						{
							GlobalFunc_2838("Done Mary Ann leadin conv");
							iLocal_161 = 1;
						}
					}
					else if (!GlobalFunc_111())
					{
						GlobalFunc_2838("Mary Ann leadin conv over");
						SYSTEM::WAIT(250);
						iLocal_156 = 0;
						iLocal_157 = 1;
					}
				}
				else
				{
					GlobalFunc_2838("Mary Ann not playing leadin anim anymore - skip to cutscene for safety");
					iLocal_156 = 0;
					iLocal_157 = 1;
				}
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_348, 1) <= 4f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_348, -1, 0, 2);
					}
				}
			}
			break;
	}
}



void func_346()//Position - 0x2C5A9
{
	if (iLocal_390 == 1 && (MISC::GET_GAME_TIMER() - iLocal_389) < 1500)
	{
		if (!GlobalFunc_111())
		{
			if (Local_386.f_1 <= 3)
			{
				if (iLocal_391 == 0)
				{
					if (func_347(Local_386))
					{
						GlobalFunc_2837("Said OvertakeLines #", Local_386.f_1);
						Local_386.f_1++;
						iLocal_390 = 0;
						iLocal_391 = 1;
						iLocal_389 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_391 = 0;
					iLocal_390 = 0;
					iLocal_389 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_390 = 0;
				iLocal_389 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_390 = 0;
			iLocal_389 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iLocal_390 == 1)
	{
		iLocal_390 = 0;
		iLocal_389 = MISC::GET_GAME_TIMER();
	}
}

int func_347(char* sParam0)//Position - 0x2C658
{
	if (iLocal_347 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (GlobalFunc_10618(&uLocal_182, "FAN1AU", sParam0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_348()//Position - 0x2C689
{
	if (GlobalFunc_4924(iLocal_348))
	{
		if (iLocal_157 != 8)
		{
			func_360();
		}
		else if (iLocal_454 >= 3)
		{
			if (!GlobalFunc_6964(iLocal_348, 242628503) && !bLocal_170)
			{
				if (GlobalFunc_4947(iLocal_448))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_448, 20000, -1, 2f, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_448, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_453, 8, 3f, 50f);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_448, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_453, 8, 3f, 50f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_448, 10f, 786599);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
					PED::SET_PED_KEEP_TASK(iLocal_348, 1);
					GlobalFunc_2838("Emergency retasked Mary Ann!");
				}
			}
		}
		func_359();
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) > 80f)
		{
			if (iLocal_360 == 0)
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_348, 1);
				iLocal_360 = 1;
			}
		}
		else if (iLocal_360 == 1)
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_348, 0);
			iLocal_360 = 0;
		}
		if ((iLocal_157 != 8 && iLocal_157 != 7) && iLocal_157 != 9)
		{
			if (iLocal_347 != 1)
			{
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) > 25f)
				{
					func_358(1);
				}
			}
		}
		if (iLocal_347 != 0)
		{
			if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) < 24f)
			{
				func_358(0);
			}
		}
		func_352();
		if ((iLocal_157 != 8 && iLocal_157 != 1) && iLocal_157 != 9)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_348, -1809.173f, -549.0106f, 14.03168f, -1841.729f, -529.4575f, 33.6412f, 21.75f, 0, 1, 0))
			{
				if (iLocal_359 == 0)
				{
					PED::SET_PED_STEERS_AROUND_PEDS(iLocal_348, 1);
					iLocal_359 = 1;
					GlobalFunc_2838("Set Mary Ann to steer round peds");
				}
			}
			else if (iLocal_359 == 1)
			{
				PED::SET_PED_STEERS_AROUND_PEDS(iLocal_348, 0);
				iLocal_359 = 0;
				GlobalFunc_2838("Unset Mary Ann to steer round peds");
			}
			func_349();
		}
	}
}

void func_349()//Position - 0x2C8AC
{
	int iVar0;
	
	switch (iLocal_363)
	{
		case 0:
			iLocal_365 = iLocal_658;
			iLocal_364 = MISC::GET_GAME_TIMER();
			iLocal_363 = 1;
			break;
		
		case 1:
			if (iLocal_365 == iLocal_658)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_364) > 20000)
				{
					GlobalFunc_2838("Mary Ann got stuck!");
					iLocal_363 = 2;
				}
			}
			else
			{
				iLocal_363 = 0;
			}
			break;
		
		case 2:
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_654, &iVar0);
			if (iLocal_365 + 4 > iVar0)
			{
				func_351((iVar0 - 1));
			}
			else
			{
				func_351(iLocal_365 + 4);
			}
			func_350(iLocal_157, 0);
			iLocal_363 = 0;
			break;
	}
}

void func_350(int iParam0, int iParam1)//Position - 0x2C946
{
	if (GlobalFunc_4924(iLocal_348))
	{
		if (!MISC::IS_STRING_NULL(sLocal_654))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_654))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_181);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_654, func_279(), 1052, -1);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_181);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_348, uLocal_181);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_181);
			}
		}
		GlobalFunc_2838("Keep Running used");
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_348, 0);
		if (iParam1 == 1)
		{
			iLocal_156 = 0;
			iLocal_157 = iParam0;
		}
	}
}

void func_351(int iParam0)//Position - 0x2C9E1
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_654, iParam0, &Var0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_654, iParam0 + 1, &Var4);
	fVar3 = GlobalFunc_1695(Var0, Var4, 1);
	GlobalFunc_5705(iLocal_348, Var0, fVar3, 1, 1);
	if (iParam0 < 6)
	{
		iLocal_709 = 1;
	}
	else if (iParam0 < 30)
	{
		iLocal_709 = 1;
	}
	else if (iParam0 < 36)
	{
		iLocal_709 = 2;
	}
	else if (iParam0 < 48)
	{
		iLocal_709 = 3;
	}
	else if (iParam0 < 62)
	{
		iLocal_709 = 4;
	}
	else if (iParam0 < 81)
	{
		iLocal_709 = 5;
	}
	else if (iParam0 < 95)
	{
		iLocal_709 = 6;
	}
	else if (iParam0 < 106)
	{
		iLocal_709 = 7;
	}
	else
	{
		iLocal_709 = 8;
	}
}

void func_352()//Position - 0x2CA96
{
	if (iLocal_157 != 8)
	{
		if (iLocal_157 == 5)
		{
			iLocal_350 = 3;
			func_357();
		}
		else
		{
			if (iLocal_350 != 2)
			{
				func_354();
			}
			else if (iLocal_655 == 1)
			{
				func_354();
			}
			func_353();
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_348))
		{
			if (iLocal_350 == 1)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_348, fLocal_358, 0);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_348, fLocal_357, 0);
			}
		}
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_348, (fLocal_357 - 0.5f));
		PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_348, fLocal_355);
	}
}

void func_353()//Position - 0x2CB17
{
	switch (iLocal_350)
	{
		case 0:
			if (GlobalFunc_115(iLocal_348))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_348, -1809.173f, -549.0106f, 14.03168f, -1841.729f, -529.4575f, 33.6412f, 21.75f, 0, 1, 0))
				{
					if (fLocal_357 >= 2.5f)
					{
						if (GlobalFunc_115(iLocal_348))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), 1500, 3120, 4);
						}
						fLocal_358 = fLocal_357;
						iLocal_350 = 1;
						iLocal_351 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_351) < iLocal_352)
			{
				if (fLocal_358 < fLocal_357)
				{
					fLocal_358 = fLocal_357;
				}
			}
			else
			{
				fLocal_357 = fLocal_358;
				iLocal_350 = 2;
			}
			break;
		
		case 2:
			if (iLocal_655 == 2)
			{
				if (fLocal_357 > 2.49f)
				{
					fLocal_357 = (fLocal_357 - 0.002f);
				}
				else
				{
					iLocal_350 = 3;
					iLocal_351 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_351) > iLocal_353)
			{
				GlobalFunc_2838("*** SPRINT BOOST WAITING");
				iLocal_350 = 0;
			}
			break;
	}
}

void func_354()//Position - 0x2CC32
{
	struct<3> Var0;
	
	if (iLocal_657 == iLocal_658)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_654, iLocal_658 + 1, &Var0);
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var0, 1) < GlobalFunc_713(iLocal_348, Var0, 1))
		{
			func_356();
		}
		else
		{
			func_355();
		}
	}
	else if (iLocal_657 > iLocal_658)
	{
		func_356();
	}
	else
	{
		func_355();
	}
}

void func_355()//Position - 0x2CC91
{
	float fVar0;
	
	if (fLocal_355 > 1f)
	{
		fLocal_355 = (fLocal_355 - 0.02f);
	}
	else
	{
		fLocal_355 = 1f;
	}
	if (fLocal_355 > fLocal_354)
	{
		fLocal_355 = fLocal_354;
	}
	fVar0 = (4.5f - (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_348) / 2f));
	if (fVar0 < 1.8f)
	{
		fVar0 = 1.8f;
	}
	else if (fVar0 > fLocal_356)
	{
		fVar0 = fLocal_356;
	}
	if (fLocal_357 > fVar0)
	{
		fLocal_357 = (fLocal_357 - 0.01f);
	}
	else
	{
		fLocal_357 = fVar0;
	}
}

void func_356()//Position - 0x2CD19
{
	fLocal_355 = (fLocal_355 + (MISC::GET_FRAME_TIME() / 20f));
	if (fLocal_355 > fLocal_354)
	{
		fLocal_355 = fLocal_354;
	}
	fLocal_357 = (fLocal_357 + 0.02f);
	if (fLocal_357 > fLocal_356)
	{
		fLocal_357 = fLocal_356;
	}
}

void func_357()//Position - 0x2CD5E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (GlobalFunc_115(iLocal_348))
	{
		if (iLocal_655 == 2)
		{
			fVar0 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_348, 1);
			if (fVar0 < 15f)
			{
				fVar1 = (fVar0 / 100f);
				if (fLocal_357 > 2.42f)
				{
					fLocal_357 = (fLocal_357 - fVar1);
				}
			}
			else if (fLocal_357 < 2.52f)
			{
				fLocal_357 = (fLocal_357 + 0.002f);
			}
		}
		else
		{
			fVar2 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_348, 1);
			fVar3 = (fVar2 / 300f);
			if (fVar2 < 10f)
			{
				if (fLocal_357 < 2.487f)
				{
					fLocal_357 = (fLocal_357 + 0.002f);
				}
				else if (fLocal_357 > 2.492f)
				{
					fLocal_357 = (fLocal_357 - 0.002f);
				}
			}
			else
			{
				if (fLocal_357 < 2.55f)
				{
					fLocal_357 = (fLocal_357 + fVar3);
				}
				else if (fLocal_357 > 2.55f)
				{
					fLocal_357 = (fLocal_357 - fVar3);
				}
				if (fLocal_357 > 3f)
				{
					fLocal_357 = 3f;
				}
			}
		}
	}
}

void func_358(int iParam0)//Position - 0x2CE5F
{
	if (iLocal_347 != iParam0)
	{
		switch (iLocal_347)
		{
			case 0:
				if (iParam0 == 1)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
					}
					GlobalFunc_2838("MA Dialogue: Kill convo, switch to MA_OUT_OF_TALKING_RANGE, trying keep up line if possible");
					iLocal_347 = 2;
				}
				break;
			
			case 1:
				if (iParam0 == 0)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
					}
					GlobalFunc_2838("MA Dialogue: Kill convo, switch to MA_WITHIN_TALKING_RANGE, trying you caught up line if possible");
					iLocal_347 = 3;
				}
				break;
			}
	}
}

void func_359()//Position - 0x2CEC5
{
	if (iLocal_347 == 2)
	{
		if (iLocal_366 < 2)
		{
			if ((Local_433.f_2 || Local_438.f_2) && iLocal_157 == 2)
			{
				iLocal_347 = 1;
				GlobalFunc_2838("MA Dialogue: Now in MA_OUT_OF_TALKING_RANGE");
			}
			else if (iLocal_655 == 2)
			{
				if (GlobalFunc_10630(&uLocal_182, "FAN1AU", "FAN1_FALLB", sLocal_367[iLocal_366], 8, 0, 0))
				{
					iLocal_366++;
					iLocal_347 = 1;
					GlobalFunc_2838("MA Dialogue: Played keep up line, now in MA_OUT_OF_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_347 = 1;
				GlobalFunc_2838("MA Dialogue: Player in 1st place so no need for keep up line, now in MA_OUT_OF_TALKING_RANGE");
			}
		}
		else
		{
			GlobalFunc_2838("MA Dialogue: Said all keep up lines, now in MA_OUT_OF_TALKING_RANGE");
			iLocal_347 = 1;
		}
	}
	else if (iLocal_347 == 3)
	{
		if (iLocal_370 < 2)
		{
			if ((Local_433.f_2 || Local_438.f_2) && iLocal_157 == 2)
			{
				if (iLocal_392 == 0)
				{
					if (GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_CATCHC", 8, 0, 0, 0))
					{
						iLocal_392 = 1;
						iLocal_165 = 0;
					}
				}
				iLocal_347 = 0;
				GlobalFunc_2838("MA Dialogue: Now in MA_WITHIN_TALKING_RANGE");
			}
			else if (iLocal_655 == 2)
			{
				if (func_347("FAN1_CATCHU"))
				{
					iLocal_370++;
					iLocal_347 = 0;
					GlobalFunc_2838("MA Dialogue: Played catchup line, now in MA_WITHIN_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_347 = 0;
				GlobalFunc_2838("MA Dialogue: Player in 1st place so no need for catchup line, now in MA_WITHIN_TALKING_RANGE");
			}
		}
	}
}

void func_360()//Position - 0x2CFF9
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_348))
	{
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), 0.75f, 1, 1, &iVar0, 0, 0, -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (!PED::IS_PED_RAGDOLL(iVar0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_348, iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0);
				PED::SET_PED_TO_RAGDOLL(iVar0, 800, 1500, 2, 1, 1, 0);
				Var1 = { -ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_348, ENTITY::GET_ENTITY_COORDS(iVar0, 1)) };
				ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 1, Var1, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(iVar0, 7), 0, 0, 1, 0, 1);
				if (!GlobalFunc_111())
				{
					if (PED::_0x46B05BCAE43856B0(iVar0, 4))
					{
						if (Local_397[2 /*5*/].f_2 == 0)
						{
							if (func_303("FAN1_PUSH", Local_397[2 /*5*/].f_1, 0, &uVar4))
							{
								Local_397[2 /*5*/].f_2 = 1;
							}
						}
						else if (Local_397[0 /*5*/].f_2 == 0)
						{
							if (func_303("FAN1_PUSH", Local_397[0 /*5*/].f_1, 0, &uVar5))
							{
								Local_397[0 /*5*/].f_2 = 1;
							}
						}
					}
					else if (Local_397[1 /*5*/].f_2 == 0)
					{
						if (func_303("FAN1_PUSH", Local_397[1 /*5*/].f_1, 0, &uVar6))
						{
							Local_397[1 /*5*/].f_2 = 1;
						}
					}
					else if (Local_397[0 /*5*/].f_2 == 0)
					{
						if (func_303("FAN1_PUSH", Local_397[0 /*5*/].f_1, 0, &uVar7))
						{
							Local_397[0 /*5*/].f_2 = 1;
						}
					}
				}
			}
		}
	}
}

void func_361()//Position - 0x2D160
{
	var uVar0[32];
	struct<3> Var33;
	
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1) > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar0[0]) && !ENTITY::IS_ENTITY_DEAD(uVar0[0]))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uVar0[0]))
				{
					if (uVar0[0] == iLocal_348)
					{
						GlobalFunc_2838("Player touched Mary Ann!");
						if (!GlobalFunc_111())
						{
							if (Local_380.f_1 <= 3)
							{
								if (func_347(Local_380))
								{
									GlobalFunc_2837("Saying MikePushMALine #", Local_380.f_1);
									Local_380.f_1++;
								}
							}
						}
					}
					else
					{
						GlobalFunc_2838("Player touched a civ!");
						if (!PED::IS_PED_IN_ANY_VEHICLE(uVar0[0], 0))
						{
							if (!PED::IS_PED_RAGDOLL(uVar0[0]))
							{
								TASK::CLEAR_PED_TASKS(uVar0[0]);
								PED::SET_PED_TO_RAGDOLL(uVar0[0], 800, 1500, 2, 1, 1, 0);
								Var33 = { -ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uVar0[0], 1)) };
								ENTITY::APPLY_FORCE_TO_ENTITY(uVar0[0], 1, Var33, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(uVar0[0], 7), 0, 0, 1, 0, 1);
							}
							if (!GlobalFunc_111())
							{
								if (Local_383.f_1 <= 3)
								{
									if (func_347(Local_383))
									{
										GlobalFunc_2837("Said MikePushPedLine #", Local_383.f_1);
										Local_383.f_1++;
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


void func_363()//Position - 0x2D2EC
{
	if (GlobalFunc_4924(iLocal_348))
	{
		if (iLocal_157 < 8 && iLocal_157 > 1)
		{
			func_378();
			func_377(iLocal_349, iLocal_348, 70f, 0.72f, 0);
			if (iLocal_657 > iLocal_658)
			{
				if (iLocal_655 != 1)
				{
					iLocal_655 = 1;
					if ((MISC::GET_GAME_TIMER() - iLocal_389) > 3000)
					{
						GlobalFunc_2838("Trying an overtake line...");
						iLocal_390 = 1;
						iLocal_389 = MISC::GET_GAME_TIMER();
					}
					else
					{
						GlobalFunc_2837("Can't do overtake line, overtake timer is = ", (MISC::GET_GAME_TIMER() - iLocal_389));
					}
				}
			}
			else if (iLocal_657 < iLocal_658)
			{
				if (iLocal_655 != 2)
				{
					iLocal_655 = 2;
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), Local_677[func_376() /*3*/], 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_677[func_376() /*3*/], 1))
			{
				if (iLocal_655 != 2)
				{
					iLocal_655 = 2;
				}
			}
			else if (iLocal_655 != 1)
			{
				iLocal_655 = 1;
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 3000)
				{
					GlobalFunc_2838("Trying an overtake line...");
					iLocal_390 = 1;
					iLocal_389 = MISC::GET_GAME_TIMER();
				}
				else
				{
					GlobalFunc_2837("Can't do overtake line, overtake timer is = ", (MISC::GET_GAME_TIMER() - iLocal_389));
				}
			}
			GlobalFunc_1470();
			func_364((MISC::GET_GAME_TIMER() - iLocal_710), "", -1, -1, "", iLocal_655, 2, "", 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
		}
	}
}

void func_364(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26)//Position - 0x2D44A
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	
	if (fParam24 > -1f)
	{
		GlobalFunc_5969(0, "", iParam22, iParam25, 9, 0, sParam23, 1, fParam24, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = iParam16;
		if (GlobalFunc_1561(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		GlobalFunc_5968(iParam14, iParam15, sVar0, iParam17, iParam22, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		sVar1 = iParam12;
		if (GlobalFunc_1561(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		iParam13 = iParam13;
		iParam11 = iParam11;
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (GlobalFunc_1561(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		GlobalFunc_5967(iParam5, iParam6, sVar2, iParam9, iParam22, 9, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (GlobalFunc_1561(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
		GlobalFunc_5966(iParam2, iParam3, sVar3, iParam22, 1, 8, 0, 0, 0, 0, 0);
	}
	if (iParam18 > -1)
	{
		sVar4 = iParam19;
		if (GlobalFunc_1561(sVar4))
		{
			sVar4 = "TIMER_BESLAP";
		}
		iParam26 = iParam26;
		iParam20 = iParam20;
	}
	sVar5 = sParam1;
	if (GlobalFunc_1561(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE";
	}
	if (bParam21)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	GlobalFunc_5965(iParam0, sVar5, iParam8, iVar6, iParam22, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}












int func_376()//Position - 0x2DC63
{
	if (iLocal_708 > iLocal_709)
	{
		if (iLocal_708 >= 10)
		{
			return 9;
		}
		else
		{
			return iLocal_708;
		}
	}
	if (iLocal_709 >= 10)
	{
		return 9;
	}
	return iLocal_709;
}

void func_377(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x2DCA0
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_378()//Position - 0x2DDF9
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	
	if (iLocal_708 < iLocal_676)
	{
		if (iLocal_708 < (iLocal_676 - 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_677[iLocal_708 /*3*/], 4f, 4f, 3f, 0, 1, 0) || !HUD::DOES_BLIP_EXIST(iLocal_671))
			{
				GlobalFunc_146(&iLocal_671);
				GlobalFunc_146(&iLocal_672);
				if (iLocal_673 != 0)
				{
					GlobalFunc_2838("Create prev CP");
					iLocal_675 = 180;
					iVar0 = 1;
					HUD::GET_HUD_COLOUR(iVar0, &uVar5, &uVar6, &uVar7, &iLocal_675);
					iLocal_674 = GRAPHICS::CREATE_CHECKPOINT(func_380(iLocal_708), Local_677[iLocal_708 /*3*/] + Vector(2f, 0f, 0f), Local_677[iLocal_708 + 1 /*3*/], 3.2f, uVar5, uVar6, uVar7, iLocal_675, 0);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_674, uVar5, uVar6, uVar7, iLocal_675);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_674, uVar5, uVar6, uVar7, iLocal_675);
				}
				GRAPHICS::DELETE_CHECKPOINT(iLocal_673);
				if (iLocal_708 != 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
				}
				iLocal_708++;
				if (iLocal_708 < (iLocal_676 - 1))
				{
					iLocal_673 = GRAPHICS::CREATE_CHECKPOINT(func_380(iLocal_708), Local_677[iLocal_708 /*3*/] + Vector(2f, 0f, 0f), Local_677[iLocal_708 + 1 /*3*/], 3.2f, uVar1, uVar2, uVar3, iVar4, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_673, 1.6f, 1.6f, 100f);
					iVar0 = 13;
					HUD::GET_HUD_COLOUR(iVar0, &uVar1, &uVar2, &uVar3, &iVar4);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_673, uVar1, uVar2, uVar3, iVar4);
					iVar0 = 134;
					HUD::GET_HUD_COLOUR(iVar0, &uVar1, &uVar2, &uVar3, &iVar4);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_673, uVar1, uVar2, uVar3, iVar4);
					iLocal_671 = HUD::ADD_BLIP_FOR_COORD(Local_677[iLocal_708 /*3*/]);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_671, 0);
					HUD::SET_BLIP_SCALE(iLocal_671, 1.2f);
					iLocal_672 = HUD::ADD_BLIP_FOR_COORD(Local_677[iLocal_708 + 1 /*3*/]);
					if (iLocal_708 + 1 == (iLocal_676 - 1))
					{
						HUD::SET_BLIP_SCALE(iLocal_672, 1.2f);
						HUD::SET_BLIP_SPRITE(iLocal_672, 38);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_672, 0);
					}
					else
					{
						HUD::SET_BLIP_SCALE(iLocal_672, 0.7f);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_672, 0);
					}
				}
				else if (iLocal_708 == (iLocal_676 - 1))
				{
					iVar0 = func_379(func_380(iLocal_708));
					HUD::GET_HUD_COLOUR(iVar0, &uVar1, &uVar2, &uVar3, &iVar4);
					iLocal_673 = GRAPHICS::CREATE_CHECKPOINT(func_380(iLocal_708), Local_677[iLocal_708 /*3*/] + Vector(2f, 0f, 0f), Local_677[iLocal_708 /*3*/], 3.2f, uVar1, uVar2, uVar3, iVar4, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_673, 1.6f, 1.6f, 100f);
					iLocal_671 = HUD::ADD_BLIP_FOR_COORD(Local_677[iLocal_708 /*3*/]);
					HUD::SET_BLIP_SCALE(iLocal_671, 1.2f);
					HUD::SET_BLIP_SPRITE(iLocal_671, 38);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_671, 0);
				}
			}
		}
		else if (iLocal_708 == (iLocal_676 - 1))
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_668, 1) < 4f)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (iLocal_673 != 0)
					{
						GlobalFunc_2838("Create prev CP");
						iLocal_675 = 180;
						iVar0 = 1;
						HUD::GET_HUD_COLOUR(iVar0, &uVar5, &uVar6, &uVar7, &iLocal_675);
						iLocal_674 = GRAPHICS::CREATE_CHECKPOINT(9, Local_677[iLocal_708 /*3*/] + Vector(2f, 0f, 0f), Local_677[iLocal_708 /*3*/], 3.2f, uVar5, uVar6, uVar7, iLocal_675, 0);
						GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_674, uVar5, uVar6, uVar7, iLocal_675);
						GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_674, uVar5, uVar6, uVar7, iLocal_675);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
					iLocal_454 = 1;
					iLocal_156 = 0;
					iLocal_157 = 8;
					GlobalFunc_2838("PLAYER_AT_FINISH_LINE");
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_677[iLocal_708 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
		if (iLocal_673 != 0)
		{
			if (fVar8 > 100f)
			{
				iVar4 = 240;
				iVar0 = 13;
				HUD::GET_HUD_COLOUR(iVar0, &uVar1, &uVar2, &uVar3, &iVar4);
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_673, uVar1, uVar2, uVar3, iVar4);
				iVar0 = 134;
				HUD::GET_HUD_COLOUR(iVar0, &uVar1, &uVar2, &uVar3, &iVar4);
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_673, uVar1, uVar2, uVar3, iVar4);
			}
			else
			{
				iVar0 = 13;
				HUD::GET_HUD_COLOUR(iVar0, &uVar1, &uVar2, &uVar3, &iVar4);
				iVar4 = SYSTEM::ROUND((fVar8 * 2.4f));
				if (iVar4 < 60)
				{
					iVar4 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_673, uVar1, uVar2, uVar3, iVar4);
				iVar0 = 134;
				HUD::GET_HUD_COLOUR(iVar0, &uVar1, &uVar2, &uVar3, &iVar4);
				iVar4 = SYSTEM::ROUND((fVar8 * 2.4f));
				if (iVar4 < 60)
				{
					iVar4 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_673, uVar1, uVar2, uVar3, iVar4);
			}
		}
	}
	if (iLocal_674 != 0)
	{
		iLocal_675 = (iLocal_675 - 25);
		if (iLocal_675 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar5, &uVar6, &uVar7, &iVar4);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_674, uVar5, uVar6, uVar7, iLocal_675);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_674, uVar5, uVar6, uVar7, iLocal_675);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_674);
		}
	}
	if (iLocal_709 < iLocal_676)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_348, Local_677[iLocal_709 /*3*/], 3f, 3f, 3f, 0, 1, 0))
		{
			iLocal_709++;
		}
	}
}

int func_379(var uParam0)//Position - 0x2E2DA
{
	uParam0 = uParam0;
	return 13;
}

int func_380(int iParam0)//Position - 0x2E2E8
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	fVar16 = 180f;
	fVar17 = 140f;
	fVar18 = 80f;
	Var0 = { Local_677[iParam0 /*3*/] };
	if (iParam0 == (iLocal_676 - 1))
	{
		return 9;
	}
	else if (iParam0 == 0)
	{
		Var6 = { -1869.12f, -445.17f, 45.17f };
		Var3 = { Local_677[iParam0 + 1 /*3*/] };
	}
	else
	{
		Var6 = { Local_677[(iParam0 - 1) /*3*/] };
		Var3 = { Local_677[iParam0 + 1 /*3*/] };
	}
	Var9 = { Var6 - Var0 };
	Var12 = { Var3 - Var0 };
	fVar15 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.f_1, Var12.x, Var12.f_1);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
	if (fVar15 < fVar18)
	{
		return 7;
	}
	else if (fVar15 < fVar17)
	{
		return 6;
	}
	else if (fVar15 < fVar16)
	{
		return 5;
	}
	else
	{
		return 5;
	}
	return 5;
}

void func_381()//Position - 0x2E3E0
{
	if ((iLocal_157 != 8 && iLocal_157 != 10) && iLocal_157 > 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_348))
		{
			func_51();
			func_39();
			func_281();
			func_383();
			func_382();
		}
	}
}

void func_382()//Position - 0x2E421
{
	if (iLocal_157 != 9 && iLocal_157 != 10)
	{
		if (GlobalFunc_713(iLocal_348, Local_668, 1) < 3f)
		{
			GlobalFunc_2838("Detected Mary Ann won race");
			iLocal_159 = 5;
			iLocal_156 = 0;
			iLocal_157 = 9;
		}
	}
}

void func_383()//Position - 0x2E460
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_659, 1) > 60f || func_387(60f))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_159 = 6;
		iLocal_156 = 0;
		iLocal_157 = 10;
	}
	else if (Local_176.f_1 == 0)
	{
		if (!GlobalFunc_165(Local_174, 0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_659, 1) > 40f || func_387(40f))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_2838("stop scripted conversation at CHECK_IF_PLAYER_LEFT_THE_COURSE_OR_MARY_ANN");
					GlobalFunc_4935();
				}
				HUD::CLEAR_PRINTS();
				func_385(Local_176, 7500, 1);
				Local_176.f_1 = 1;
			}
		}
	}
	if (iLocal_657 < iLocal_658)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), 1) > 70f)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_159 = 4;
			iLocal_156 = 0;
			iLocal_157 = 10;
		}
		else if (Local_174.f_1 == 0 && !GlobalFunc_165(Local_176, 0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_348, 1), 1) > 50f)
			{
				GlobalFunc_2369(Local_174, 7500, 1);
				Local_174.f_1 = 1;
			}
		}
	}
}


void func_385(var uParam0, int iParam1, int iParam2)//Position - 0x2E5A9
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(uParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}


int func_387(float fParam0)//Position - 0x2E5E0
{
	int iVar0;
	
	if (iLocal_708 < (iLocal_676 - 1))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_654, Local_677[iLocal_708 /*3*/], &iVar0);
		if (iVar0 < iLocal_657)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_677[iLocal_708 /*3*/], 1) > fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_388(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2E632
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
















void func_404(int iParam0)//Position - 0x2F074
{
	func_417(1, 1);
	HUD::CLEAR_PRINTS();
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	func_416(0, 1);
	HUD::DISPLAY_RADAR(1);
	AUDIO::STOP_SOUND(uLocal_715);
	iLocal_716 = 0;
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	iLocal_625 = 0;
	iLocal_172 = 0;
	GlobalFunc_146(&iLocal_671);
	GlobalFunc_146(&iLocal_672);
	GRAPHICS::DELETE_CHECKPOINT(iLocal_673);
	if (GlobalFunc_111())
	{
		GlobalFunc_2838("Stopping scripted convo at jump_to_stage");
		GlobalFunc_4956();
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_180);
	PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_180);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_180, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_180);
	STREAMING::REQUEST_MODEL(joaat("ig_maryann"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_maryann")))
	{
		SYSTEM::WAIT(0);
	}
	func_5();
	func_415();
	iLocal_389 = MISC::GET_GAME_TIMER();
	iLocal_394 = MISC::GET_GAME_TIMER();
	iLocal_390 = 0;
	iLocal_348 = PED::CREATE_PED(26, joaat("ig_maryann"), -1865.9f, -448.81f, 45.13f, -143.87f, 1, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_348, iLocal_180);
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_348, "FEMALE_FAST_RUNNER", 1048576000);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_348, 4, 1, 0, 0);
	GlobalFunc_173(&uLocal_182, 3, iLocal_348, "MARYANN", 0, 1);
	if (iParam0 <= 3)
	{
		iLocal_352 = 1800;
		iLocal_353 = 4500;
	}
	if (iParam0 == 0)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_348, 0);
			AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
		}
	}
	else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
		if (GlobalFunc_115(iLocal_348))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_348, "FANATIC_MIX_MARY_ANNE", 0);
		}
	}
	switch (iParam0)
	{
		case 0:
			GlobalFunc_9623("ef_1_rcm", 0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_2838("Trying to set Mary Ann component variation");
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_348, joaat("cs_maryann"));
			}
			iLocal_708 = 0;
			iLocal_709 = 1;
			PED::REMOVE_RELATIONSHIP_GROUP(iLocal_180);
			func_4(0);
			func_414();
			func_413();
			func_412();
			iLocal_156 = 0;
			iLocal_157 = 1;
			break;
		
		case 1:
			iLocal_708 = 0;
			iLocal_709 = 1;
			if (!GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1878.234f, -439.6985f, 45.0299f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 241.0468f);
			}
			MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 7f, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_348, -1869.24f, -444.99f, 45.17f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_348, -143.87f);
			func_4(0);
			func_414();
			func_413();
			func_412();
			func_350(2, 1);
			if (!GlobalFunc_188())
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 1, 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0, 1, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
			break;
		
		case 2:
			iLocal_708 = 3;
			iLocal_709 = 4;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1731.05f, -549.78f, 36.4f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 104.26f);
			TASK::CLEAR_PED_TASKS(iLocal_348);
			ENTITY::SET_ENTITY_COORDS(iLocal_348, -1732.88f, -551.7632f, 36.5f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_348, 115.26f);
			func_4(0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1806.495f, -525.8696f, 29.92591f, 100f, 0, 0, 0, 0, 0);
			func_414();
			func_413();
			func_412();
			func_350(3, 1);
			break;
		
		case 3:
			iLocal_708 = 5;
			iLocal_709 = 6;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1832.52f, -519.37f, 27.89f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 162.59f);
			TASK::CLEAR_PED_TASKS(iLocal_348);
			ENTITY::SET_ENTITY_COORDS(iLocal_348, -1833.81f, -523.7f, 28.14f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_348, 172.66f);
			func_414();
			while (!func_308() || !func_310())
			{
				SYSTEM::WAIT(0);
			}
			func_410();
			func_307(1);
			func_311();
			func_412();
			func_4(1);
			func_350(4, 1);
			break;
		
		case 4:
			iLocal_708 = 6;
			iLocal_709 = 7;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1850.1f, -592.21f, 18.2f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 124.19f);
			TASK::CLEAR_PED_TASKS(iLocal_348);
			ENTITY::SET_ENTITY_COORDS(iLocal_348, -1849.61f, -592.9f, 18.2f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_348, 135.16f);
			func_414();
			while (!func_308() || !func_310())
			{
				SYSTEM::WAIT(0);
			}
			func_410();
			func_307(0);
			func_311();
			if (GlobalFunc_4924(iLocal_627))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(95, iLocal_627, -1f);
			}
			func_412();
			func_4(1);
			if (func_407(1))
			{
				GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_BCHB", 7, 0, 0, 0);
			}
			else
			{
				GlobalFunc_10618(&uLocal_182, "FAN1AU", "FAN1_BCHA", 7, 0, 0, 0);
			}
			func_350(5, 1);
			break;
		
		case 5:
			iLocal_708 = 8;
			iLocal_709 = 9;
			func_414();
			while (!func_308() || !func_310())
			{
				SYSTEM::WAIT(0);
			}
			func_410();
			func_307(1);
			func_311();
			func_412();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_668, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 19.95f);
			if (GlobalFunc_4924(iLocal_348))
			{
				TASK::CLEAR_PED_TASKS(iLocal_348);
				ENTITY::SET_ENTITY_COORDS(iLocal_348, -1986.93f, -526.39f, 11.7f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_348, 44.46f);
			}
			func_4(1);
			func_350(6, 1);
			break;
		
		case 6:
			iLocal_708 = 8;
			iLocal_709 = 9;
			func_414();
			while (!func_308() || !func_310())
			{
				SYSTEM::WAIT(0);
			}
			func_410();
			func_307(1);
			func_311();
			func_412();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2001.27f, -514.18f, 11f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 19.95f);
			if (GlobalFunc_4924(iLocal_348))
			{
				TASK::CLEAR_PED_TASKS(iLocal_348);
				ENTITY::SET_ENTITY_COORDS(iLocal_348, -1986.93f, -526.39f, 11.7f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_348, 44.46f);
			}
			func_4(1);
			func_350(6, 1);
			break;
	}
	func_312(iLocal_348);
	func_312(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_348) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		func_281();
		func_363();
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_2838("JUMP_TO_STAGE: replay being set up");
		GlobalFunc_4967(0, -1, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0, 1, 0);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 1, 0, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		SYSTEM::WAIT(1000);
		func_405(1, 1, 1);
	}
	else
	{
		GlobalFunc_2838("JUMP_TO_STAGE: replay not being set up");
		if (iLocal_157 == 1)
		{
			while (!GlobalFunc_8027(1, 1093140480, 0))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (GlobalFunc_115(iLocal_348))
					{
						GlobalFunc_2838("Trying to set Mary Ann component variation");
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_348, joaat("cs_maryann"));
					}
				}
				GlobalFunc_9623("ef_1_rcm", 0);
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			SYSTEM::WAIT(1000);
			func_405(1, 1, 1);
		}
	}
}

void func_405(int iParam0, int iParam1, int iParam2)//Position - 0x2F7B1
{
	func_258(0, 0, iParam2, 1);
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


int func_407(int iParam0)//Position - 0x2F8A9
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_408(iParam0, 12))
			{
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (iVar0 != 12)
				{
					if (!func_408(iParam0, iVar0))
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
			break;
		
		case 3:
			if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 12, 6))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)//Position - 0x2F923
{
	int iVar0;
	
	if (iParam1 != 14)
	{
		iVar0 = GlobalFunc_11032(PLAYER::PLAYER_PED_ID(), iParam1, -1);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					if ((((((iVar0 == 69 || (iVar0 >= 17 && iVar0 <= 32)) || iVar0 == 69) || (iVar0 >= 77 && iVar0 <= 84)) || (iVar0 >= 85 && iVar0 <= 90)) || (iVar0 >= 113 && iVar0 <= 128)) || (iVar0 >= 171 && iVar0 <= 173))
					{
						return 1;
					}
					break;
				
				case 4:
					if (((iVar0 == 40 || (iVar0 >= 41 && iVar0 <= 45)) || (iVar0 >= 89 && iVar0 <= 91)) || (iVar0 >= 96 && iVar0 <= 111))
					{
						return 1;
					}
					break;
				
				case 6:
					if (((iVar0 == 6 || iVar0 == 13) || iVar0 == 7) || (iVar0 >= 20 && iVar0 <= 29))
					{
						return 1;
					}
					break;
				
				case 8:
					if (((iVar0 == 0 || iVar0 == 10) || iVar0 == 11) || iVar0 == 16)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iVar0 == 0)
					{
						return 1;
					}
					break;
				
				case 12:
					if (iVar0 == 13 || iVar0 == 9)
					{
						return 1;
					}
					break;
				
				case 14:
					iVar0 = GlobalFunc_11032(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if ((((((iVar0 == 58 || (iVar0 >= 70 && iVar0 <= 79)) || iVar0 == 61) || (iVar0 >= 62 && iVar0 <= 69)) || (iVar0 >= 80 && iVar0 <= 89)) || (iVar0 >= 91 && iVar0 <= 102)) || (iVar0 >= 103 && iVar0 <= 110))
					{
						return 1;
					}
					if (!func_409(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					if ((((((((iVar0 >= 0 && iVar0 <= 15) || (iVar0 >= 18 && iVar0 <= 26)) || iVar0 == 53) || (iVar0 >= 54 && iVar0 <= 69)) || (iVar0 >= 79 && iVar0 <= 94)) || iVar0 == 95) || (iVar0 >= 120 && iVar0 <= 135)) || (iVar0 >= 162 && iVar0 <= 177))
					{
						return 1;
					}
					break;
				
				case 4:
					if (((iVar0 == 17 || iVar0 == 33) || (iVar0 >= 54 && iVar0 <= 61)) || iVar0 == 91)
					{
						return 1;
					}
					break;
				
				case 6:
					if ((iVar0 == 8 || iVar0 == 11) || iVar0 == 34)
					{
						return 1;
					}
					break;
				
				case 8:
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 10) || iVar0 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iVar0 == 0 || iVar0 == 7)
					{
						return 1;
					}
					break;
				
				case 12:
					if (iVar0 == 5 || iVar0 == 9)
					{
						return 1;
					}
					break;
				
				case 14:
					iVar0 = GlobalFunc_11032(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if (((((((iVar0 == 89 || (iVar0 >= 100 && iVar0 <= 109)) || iVar0 == 111) || (iVar0 >= 113 && iVar0 <= 122)) || (iVar0 >= 123 && iVar0 <= 132)) || (iVar0 >= 133 && iVar0 <= 142)) || (iVar0 >= 90 && iVar0 <= 99)) || (iVar0 >= 143 && iVar0 <= 152))
					{
						return 1;
					}
					if (!func_409(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x2FDD5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (PED::GET_PED_PROP_INDEX(uParam0, iVar0) != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_410()//Position - 0x2FE01
{
	if (!GlobalFunc_115(iLocal_648))
	{
		iLocal_648 = PED::CREATE_PED(26, joaat("a_c_rottweiler"), Local_649, fLocal_652, 1, 1);
		PED::SET_PED_CAN_RAGDOLL(iLocal_648, 1);
	}
}


void func_412()//Position - 0x2FE48
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_624);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_baywatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_maryann"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_453);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("regina"));
}

void func_413()//Position - 0x2FEAF
{
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_01"));
	STREAMING::REQUEST_MODEL(joaat("banshee"));
	STREAMING::REQUEST_MODEL(joaat("regina"));
	while ((!STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("banshee"))) || !STREAMING::HAS_MODEL_LOADED(joaat("regina")))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA_OF_VEHICLES(1829.384f, -516.19f, 27.85739f, 7f, 0, 0, 0, 0, 0);
	if (!GlobalFunc_4947(Local_548.f_2))
	{
		Local_548.f_5 = { -1833.33f, -513.3883f, 28.21071f };
		Local_548.f_11 = 286.343f;
		Local_548.f_8 = { -1721.02f, -559.7f, 37.46f };
		Local_548.f_12 = 18f;
		Local_548.f_4 = joaat("banshee");
		Local_548.f_2 = VEHICLE::CREATE_VEHICLE(Local_548.f_4, Local_548.f_5, Local_548.f_11, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_548.f_2, 1, 1);
		Local_548 = PED::CREATE_PED_INSIDE_VEHICLE(Local_548.f_2, 4, joaat("g_m_y_salvagoon_01"), -1, 1, 1);
		Local_548.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_548.f_2, 4, joaat("g_m_y_salvagoon_01"), 0, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_548.f_1, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_548.f_1, 20, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_548, 17, 1);
	}
	if (!GlobalFunc_4947(Local_562.f_2))
	{
		Local_562.f_5 = { -2000.79f, -494.35f, 11.09f };
		Local_562.f_11 = 321.61f;
		Local_562.f_8 = { -1719.08f, -559.41f, 36.33f };
		Local_562.f_12 = 12f;
		Local_562.f_4 = joaat("regina");
		Local_562.f_2 = VEHICLE::CREATE_VEHICLE(Local_562.f_4, Local_562.f_5, Local_562.f_11, 1, 1);
		Local_562 = PED::CREATE_PED_INSIDE_VEHICLE(Local_562.f_2, 4, joaat("g_m_y_salvagoon_01"), -1, 1, 1);
		Local_562.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_562.f_2, 4, joaat("g_m_y_salvagoon_01"), 0, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_562, 17, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_562.f_1, 17, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("regina"));
}

void func_414()//Position - 0x300BC
{
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1celebrate");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1yell");
	STREAMING::REQUEST_ANIM_DICT("move_f@runner");
	STREAMING::REQUEST_ANIM_SET("FEMALE_FAST_RUNNER");
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_654);
	TASK::REQUEST_WAYPOINT_RECORDING("Fanatic1RollingStart");
	HUD::REQUEST_ADDITIONAL_TEXT("FATIC1", 0);
	STREAMING::REQUEST_MODEL(joaat("ig_maryann"));
	while ((((((((!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1") || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1celebrate")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1yell")) || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@runner")) || !STREAMING::HAS_ANIM_SET_LOADED("FEMALE_FAST_RUNNER")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_654)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1RollingStart")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_maryann")))
	{
		GlobalFunc_2838("Loading other assets");
		SYSTEM::WAIT(0);
	}
}

void func_415()//Position - 0x301A4
{
	iLocal_392 = 0;
	iLocal_390 = 0;
	iLocal_389 = MISC::GET_GAME_TIMER();
	iLocal_394 = MISC::GET_GAME_TIMER();
	iLocal_396 = MISC::GET_GAME_TIMER();
	iLocal_395 = 0;
	Local_386.f_1 = 0;
	Local_380.f_1 = 0;
	Local_383.f_1 = 0;
	Local_397[0 /*5*/].f_2 = 0;
	Local_397[1 /*5*/].f_2 = 0;
	Local_397[2 /*5*/].f_2 = 0;
	Local_438.f_2 = 0;
	Local_433.f_2 = 0;
	Local_443.f_2 = 0;
	Local_413.f_2 = 0;
	Local_418.f_2 = 0;
	Local_423.f_2 = 0;
	Local_428.f_2 = 0;
	Local_176.f_1 = 0;
	Local_174.f_1 = 0;
	Local_178.f_1 = 0;
	iLocal_366 = 0;
	iLocal_370 = 0;
}

void func_416(int iParam0, bool bParam1)//Position - 0x3023B
{
	HUD::CLEAR_HELP(1);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	CAM::RENDER_SCRIPT_CAMS(0, iParam0, 3000, 1, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_458))
	{
		CAM::SET_CAM_ACTIVE(uLocal_458, 0);
		CAM::DESTROY_CAM(uLocal_458, 0);
	}
	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1065353216);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}

void func_417(bool bParam0, bool bParam1)//Position - 0x302AF
{
	if (bParam0)
	{
		func_418(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_284(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_418(bool bParam0, int iParam1, int iParam2)//Position - 0x302E2
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
			func_258(iParam1, iParam2, 1, 1);
		}
	}
}


void func_420()//Position - 0x3036B
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_2838("IN INIT");
	sLocal_654 = "Fanatic1MaryAnn";
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1877.022f, -439.5663f, 47.06139f, -1809.615f, -493.494f, 39.58508f, 12.75f, 1, 0, 0, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1816.865f, -492.4081f, 42.83916f, -1792.158f, -470.2095f, 38.51269f, 12.75f, 1, 0, 0, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1792.194f, -470.2319f, 42.51471f, -1726.926f, -552.8375f, 35.24149f, 12.75f, 1, 0, 0, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1728.024f, -561.8721f, 39.49737f, -1835.285f, -514.9333f, 26.33557f, 19.75f, 1, 0, 0, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1822.226f, -535.3092f, 31.95555f, -1890.278f, -616.2764f, 9.657555f, 39.75f, 1, 0, 0, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1867.243f, -622.763f, 13.38351f, -2013.267f, -497.9799f, 9.736394f, 23.75f, 1, 0, 0, 0, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_180);
	PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_180);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_180, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_180);
	GlobalFunc_173(&uLocal_182, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_414();
	if (GlobalFunc_115(iLocal_348))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_348, iLocal_180);
		PED::SET_PED_SEEING_RANGE(iLocal_348, 25f);
		PED::SET_PED_MOVEMENT_CLIPSET(iLocal_348, "FEMALE_FAST_RUNNER", 1048576000);
	}
	func_421();
	func_413();
	func_4(0);
	uLocal_645 = PED::ADD_SCENARIO_BLOCKING_AREA(-1979.062f, -534.325f, 10.4558f, -1973.332f, -528.2116f, 13.7014f, 0, 1, 1, 1);
	uLocal_646 = PED::ADD_SCENARIO_BLOCKING_AREA(-1914.78f, -591.1177f, 9.8302f, -1910.329f, -586.7218f, 12.0195f, 0, 1, 1, 1);
	uLocal_647 = PED::ADD_SCENARIO_BLOCKING_AREA(-1991.067f, -523.592f, 10.4269f, -1989.145f, -521.6824f, 11.3735f, 0, 1, 1, 1);
	Local_460 = 1;
	Local_460.f_1 = "rcmfanatic1out_of_breath";
	Local_460.f_2 = "p_zero_tired_enter";
	Local_460.f_17 = 2f;
	Local_460.f_18 = -8f;
	Local_460.f_20 = 48;
	Local_460.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_482 = 1;
	Local_482.f_1 = "rcmfanatic1out_of_breath";
	Local_482.f_2 = "p_zero_tired_01";
	Local_482.f_17 = 8f;
	Local_482.f_18 = -8f;
	Local_482.f_20 = 48;
	Local_482.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_504 = 1;
	Local_504.f_1 = "rcmfanatic1out_of_breath";
	Local_504.f_2 = "p_zero_tired_02";
	Local_504.f_17 = 8f;
	Local_504.f_18 = -8f;
	Local_504.f_20 = 48;
	Local_504.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_526 = 1;
	Local_526.f_1 = "rcmfanatic1out_of_breath";
	Local_526.f_2 = "p_zero_tired_01";
	Local_526.f_17 = 8f;
	Local_526.f_18 = -1000f;
	Local_526.f_20 = 49;
	Local_526.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	Local_662 = { -1730.284f, -551.7269f, 36.3939f };
	Local_665 = { -1870.67f, -616.2423f, 10.8184f };
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_654, &iLocal_656);
	Local_677[0 /*3*/] = { -1868.36f, -447.84f, 45.2f };
	Local_677[1 /*3*/] = { -1835.81f, -468.73f, 43.45f };
	Local_677[2 /*3*/] = { -1753.45f, -523.3f, 37.35f };
	Local_677[3 /*3*/] = { Local_662 };
	Local_677[4 /*3*/] = { -1755.65f, -558.99f, 36.11f };
	Local_677[5 /*3*/] = { -1828.99f, -516.33f, 27.87f };
	Local_677[6 /*3*/] = { -1819.2f, -555.86f, 15.77f };
	Local_677[7 /*3*/] = { Local_665 };
	Local_677[8 /*3*/] = { -1918.04f, -583.45f, 10.76f };
	Local_677[9 /*3*/] = { Local_668 };
	iLocal_676 = Local_677.x;
	sLocal_367[0] = "FAN1_FALLB_1";
	sLocal_367[1] = "FAN1_FALLB_2";
	sLocal_372[0] = "FAN1_FAST_1";
	sLocal_372[1] = "FAN1_FAST_2";
	sLocal_372[2] = "FAN1_FAST_3";
	Local_380 = "FAN1_RUNIN";
	Local_383 = "FAN1_RUNIN2";
	Local_386 = "FAN1_OVERT";
	Local_397[0 /*5*/].f_1 = "FAN1_PUSH_1";
	Local_397[1 /*5*/].f_1 = "FAN1_PUSH_2";
	Local_397[2 /*5*/].f_1 = "FAN1_PUSH_3";
	Local_438.f_1 = "FAN1_CHEAT_1";
	Local_438.x = "FAN1_CHEAT";
	Local_433.f_1 = "FAN1_CHEAT_2";
	Local_433.x = "FAN1_CHEAT";
	Local_443.f_1 = "FAN1_CATCHC_1";
	Local_443.x = "FAN1_CATCHC";
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (func_407(1))
		{
			Local_413 = "FAN1_STRTB";
			Local_428.x = "FAN1_BCHB";
		}
		else
		{
			Local_413 = "FAN1_STRTA";
			Local_428.x = "FAN1_BCHA";
		}
	}
	Local_418.x = "FAN1_RD1";
	Local_423.x = "FAN1_RD2";
	Local_176 = "FATIC1_7";
	Local_174 = "FATIC1_6";
	Local_178 = "FATIC1_H";
	GlobalFunc_2838("end of init");
}

void func_421()//Position - 0x30890
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_654))
	{
		iVar0 = 0;
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_654, &iVar0);
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= iVar0)
		{
			Var2 = { 0f, 0f, 0f };
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_654, iVar1, &Var2);
			MISC::CLEAR_AREA_OF_VEHICLES(Var2, 4f, 0, 0, 0, 0, 0);
			GlobalFunc_2837("Clearing area around waypoint", iVar1);
			iVar1++;
		}
	}
}






int func_427(var uParam0)//Position - 0x30AE3
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	
	iVar0[0] = uLocal_94;
	switch (iLocal_93)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_1_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 0);
			uParam0->f_48.f_5 = { -1878.223f, -440.5181f, 46.03983f };
			uParam0->f_48.f_8 = { 0f, 0f, 159.97f };
			iLocal_93 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_93 = 2;
			break;
		
		case 2:
			bVar3 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 61, -1878.27f, -440.55f, 46.23f, 165.94f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], 1);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_93 = 3;
			}
			break;
		
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}










void func_437()//Position - 0x30E7A
{
	int iVar0;
	
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		GlobalFunc_2838("...Random Character Script was triggered so additional cleanup required");
	}
	if (GlobalFunc_115(iLocal_348))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_348, 0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_180);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_348))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_348, 0);
		}
		AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
	}
	AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
	GlobalFunc_131(&iLocal_448);
	GlobalFunc_2297(&iLocal_348, 1, 0, 1);
	GlobalFunc_146(&iLocal_671);
	GlobalFunc_146(&iLocal_349);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_2297(&(Local_575[iVar0 /*12*/]), 1, 0, 1);
		iVar0++;
	}
	GlobalFunc_2297(&Local_548, 1, 0, 1);
	if (GlobalFunc_115(Local_548.f_1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_548.f_1, 3, 1);
		GlobalFunc_2297(&(Local_548.f_1), 1, 0, 1);
	}
	GlobalFunc_131(&(Local_548.f_2));
	GlobalFunc_2297(&iLocal_648, 1, 0, 1);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_654);
	TASK::REMOVE_WAYPOINT_RECORDING("Fanatic1RollingStart");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1out_of_breath");
	STREAMING::REMOVE_ANIM_DICT("move_f@runner");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1");
	STREAMING::REMOVE_ANIM_SET("FEMALE_FAST_RUNNER");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_624);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_453);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_baywatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_trampbeac_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_maryann"));
	func_447();
	func_4(1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1842.3f, -517.7f, 26.68f, -1823.52f, -515.43f, 29.27f, 1, 1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1864.08f, -632.07f, 10.09f, -1863.31f, -631.53f, 10.15f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1820.57f, -552.41f, 17.4f, -1865.76f, -617.48f, 10.58f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_645, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_646, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_647, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	AUDIO::STOP_SOUND(uLocal_715);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	GlobalFunc_601(2, 0);
	func_438(&Local_95, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_438(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3109D
{
	GlobalFunc_7246(uParam0, iParam1);
	GlobalFunc_8534(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}









void func_447()//Position - 0x31215
{
	GlobalFunc_2297(&iLocal_626, 1, 0, 1);
	GlobalFunc_2297(&iLocal_627, 1, 0, 1);
	GlobalFunc_2297(&iLocal_628, 1, 0, 1);
	GlobalFunc_2297(&iLocal_629, 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_a@cpr_def");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_b@cpr_def");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_a@cpr_str");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_b@cpr_str");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1");
	PATHFIND::SET_PED_PATHS_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 1, 0);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 0);
}

























