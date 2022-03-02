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
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1000;
	var uLocal_93 = 1000;
	var uLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	char* sLocal_160 = NULL;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	struct<3> Local_163 = { 0, 0, 0 } ;
	int iLocal_166[2] = { 0, 0 };
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 16;
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
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
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
	struct<3> Local_372[4];
	int iLocal_385[4] = { 0, 0, 0, 0 };
	int iLocal_390 = 0;
	char cLocal_391[24] = "";
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	char cLocal_397[48] = "";
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	var uLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	float fLocal_412 = 0f;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	struct<3> Local_415 = { 0, 0, 0 } ;
	float fLocal_418 = 0f;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	float fLocal_421 = 0f;
	var uLocal_422 = 0;
	struct<3> Local_423 = { 0, 0, 0 } ;
	struct<3> Local_426 = { 0, 0, 0 } ;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	struct<7> Local_431[2];
	var uLocal_446 = 0;
	var uLocal_447[2] = { 0, 0 };
	var uLocal_450[2] = { 0, 0 };
	int iLocal_453[2] = { 0, 0 };
	int iLocal_456[2] = { 0, 0 };
	int iLocal_459[2] = { 0, 0 };
	int iLocal_462[2] = { 0, 0 };
	int iLocal_465[2] = { 0, 0 };
	int iLocal_468[2] = { 0, 0 };
	float fLocal_471[2] = { 0f, 0f };
	int iLocal_474[2] = { 0, 0 };
	int iLocal_477[2] = { 0, 0 };
	int iLocal_480[2] = { 0, 0 };
	int iLocal_483[2] = { 0, 0 };
	int iLocal_486[2] = { 0, 0 };
	int iLocal_489[2] = { 0, 0 };
	int iLocal_492[2] = { 0, 0 };
	int iLocal_495[2] = { 0, 0 };
	int iLocal_498 = 0;
	struct<4> Local_499[5];
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	char* sLocal_523[3] = { NULL, NULL, NULL };
	int iLocal_527 = 0;
	char* sLocal_528[2] = { NULL, NULL };
	struct<3> Local_531 = { 0, 0, 0 } ;
	int iLocal_534 = 0;
	struct<3> Local_535 = { 0, 0, 0 } ;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	float fLocal_541 = 0f;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_559[7];
	int iLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
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
	uLocal_79 = GlobalFunc_4946(56);
	uLocal_80 = GlobalFunc_4946(57);
	uLocal_81 = GlobalFunc_4946(59);
	iLocal_82 = joaat("pranger");
	iLocal_156 = 1;
	Local_163 = { 323.606f, 3415.35f, 35.6612f };
	Local_415 = { 1996.501f, 3063.1f, 46.7716f };
	fLocal_418 = 56.14696f;
	Local_423 = { 1989.862f, 3047.604f, 46.21511f };
	Local_426 = { 1990.978f, 3054.2f, 46.2149f };
	Local_531 = { 2698.878f, 4110.849f, 42.11631f };
	Local_535 = { 1989.428f, 3051.913f, 46.1256f };
	iLocal_595 = -1;
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_626();
	}
	func_624();
	if (GlobalFunc_199())
	{
		func_614(&Local_95, 1, 1, 0);
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(321.9098f, 3410.653f, 35.7119f, 243.0269f, 1, 0);
				func_563(1);
				break;
			
			case 1:
				GlobalFunc_4972(1982.925f, 3078.192f, 45.9798f, 216.8597f, 1, 0);
				func_563(2);
				break;
			
			case 2:
				GlobalFunc_4972(1993.551f, 3058.102f, 46.0548f, 40.7551f, 1, 0);
				func_563(3);
				break;
			
			case 3:
				GlobalFunc_4972(2698.205f, 4135.905f, 42.8234f, 323.4031f, 1, 0);
				func_563(5);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_TCBP", 0);
		if (iLocal_594 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		func_547(Local_95.f_9, 0, 0, 0, 0, 0);
		func_544();
		switch (iLocal_156)
		{
			case 1:
				func_479();
				break;
			
			case 2:
				func_473();
				break;
			
			case 3:
				func_463();
				break;
			
			case 4:
				func_451();
				break;
			
			case 5:
				func_332();
				break;
			
			case 6:
				func_317();
				break;
			
			case 7:
				func_275();
				break;
			
			case 8:
				func_38();
				break;
			
			case 9:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x2B2
{
	switch (iLocal_158)
	{
		case 0:
			func_37();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_35();
			GlobalFunc_4956();
			AUDIO::TRIGGER_MUSIC_EVENT("MM1_FAIL");
			iLocal_358 = 0;
			func_31();
			if (GlobalFunc_115(iLocal_404) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_404, 10f, 1, 0);
			}
			switch (iLocal_159)
			{
				case 0:
					break;
				
				case 1:
					sLocal_160 = "MIN1_F1";
					break;
				
				case 2:
					sLocal_160 = "MIN1_F2";
					break;
				
				case 11:
					sLocal_160 = "MIN1_F3";
					break;
				
				case 3:
					sLocal_160 = "MIN1_F4";
					break;
				
				case 4:
					sLocal_160 = "MIN1_F5";
					break;
				
				case 5:
					sLocal_160 = "MIN1_F6";
					break;
				
				case 6:
					sLocal_160 = "MIN1_F7";
					break;
				
				case 7:
					sLocal_160 = "MIN1_F8";
					break;
				
				case 8:
					sLocal_160 = "MIN1_F9";
					break;
				
				case 9:
					sLocal_160 = "MIN1_F10";
					break;
				
				case 10:
					sLocal_160 = "MIN1_F12";
					break;
				
				case 12:
					sLocal_160 = "MIN1_F11";
					break;
				
				case 13:
					sLocal_160 = "MIN1_F15";
					break;
			}
			if (iLocal_159 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sLocal_160, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_26();
				func_23(1, 1);
				GlobalFunc_6692(&iLocal_414);
				GlobalFunc_6692(&iLocal_172);
				GlobalFunc_6692(&iLocal_404);
				func_626();
			}
			else
			{
				func_2();
			}
			break;
	}
}

void func_2()//Position - 0x42C
{
	if (iLocal_358 == 0 && iLocal_159 != 7)
	{
		if (GlobalFunc_115(Local_431[0 /*7*/]))
		{
			GlobalFunc_173(&uLocal_173, 3, Local_431[0 /*7*/], "JOE", 0, 1);
			if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_FLEE1", 8, 1, 0, 0))
			{
				iLocal_358 = 1;
			}
		}
		else if (GlobalFunc_115(Local_431[1 /*7*/]))
		{
			GlobalFunc_173(&uLocal_173, 4, Local_431[1 /*7*/], "JOSEF", 0, 1);
			if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_FLEE2", 8, 1, 0, 0))
			{
				iLocal_358 = 1;
			}
		}
		else
		{
			iLocal_358 = 1;
		}
	}
}





















void func_23(int iParam0, int iParam1)//Position - 0xE35
{
	if (iParam0 == 1)
	{
		if (iParam1 == 1)
		{
			GlobalFunc_881(&(Local_431[0 /*7*/]));
			GlobalFunc_881(&(Local_431[1 /*7*/]));
		}
		GlobalFunc_881(&iLocal_534);
		GlobalFunc_881(&(uLocal_447[0]));
		GlobalFunc_881(&(uLocal_447[1]));
		GlobalFunc_881(&iLocal_539);
	}
	else
	{
		if (iParam1 == 1)
		{
			GlobalFunc_2297(&(Local_431[0 /*7*/]), 1, 0, 1);
			GlobalFunc_2297(&(Local_431[1 /*7*/]), 1, 0, 1);
		}
		GlobalFunc_2297(&iLocal_534, 1, 0, 1);
		GlobalFunc_2297(&(uLocal_447[0]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_447[1]), 1, 0, 1);
		GlobalFunc_2297(&iLocal_539, 1, 0, 1);
	}
}



void func_26()//Position - 0xF5E
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (iLocal_157 == 0)
	{
		iLocal_156++;
	}
	else
	{
		iLocal_156 = iLocal_157;
	}
	iLocal_157 = 0;
	iLocal_158 = 0;
}





void func_31()//Position - 0x1028
{
	if (iLocal_159 != 7)
	{
		func_32(Local_431[0 /*7*/]);
		func_32(Local_431[1 /*7*/]);
	}
	func_32(uLocal_447[0]);
	func_32(uLocal_447[1]);
}

void func_32(int iParam0)//Position - 0x105E
{
	int iVar0;
	
	if (GlobalFunc_115(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iVar0 == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_590);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 250), 0);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_590);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_590);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_590);
			}
			else
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, 1);
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iParam0)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iParam0, iVar0, 30f, 786468);
					}
				}
				else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) == iParam0 && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar0);
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_590);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iVar0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iVar0, 30f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_590);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_590);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_590);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
			}
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
	}
}



void func_35()//Position - 0x11D9
{
	GlobalFunc_846(&uLocal_405);
	GlobalFunc_846(&uLocal_422);
	GlobalFunc_846(&(uLocal_450[0]));
	GlobalFunc_846(&(uLocal_450[1]));
	GlobalFunc_846(&uLocal_446);
}


void func_37()//Position - 0x122A
{
	iLocal_162 = 0;
	iLocal_158 = 1;
}

void func_38()//Position - 0x1238
{
	GlobalFunc_9223(0, joaat("weapon_stungun"), 1, 1);
	GlobalFunc_9223(1, joaat("weapon_stungun"), 1, 1);
	GlobalFunc_9223(2, joaat("weapon_stungun"), 1, 1);
	GlobalFunc_9621(56, 2, 1);
	SYSTEM::WAIT(0);
	GlobalFunc_9621(57, 2, 1);
	GlobalFunc_10829(2, 1, 500, 0, 0);
	GlobalFunc_11329(92, 1);
	func_626();
}













































































































































































































































void func_275()//Position - 0x287F1
{
	switch (iLocal_158)
	{
		case 0:
			func_37();
			func_316(1);
			iLocal_348 = 0;
			iLocal_349 = 0;
			iLocal_409 = 0;
			break;
		
		case 1:
			if (func_315() || (iLocal_595 >= 0 && MISC::GET_GAME_TIMER() >= iLocal_595))
			{
				if (GlobalFunc_115(iLocal_414) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_414, 0))
				{
					GlobalFunc_553(778);
				}
				iLocal_158 = 2;
			}
			else if (iLocal_409 == 0)
			{
				func_312();
				func_311();
				func_294();
				func_283();
				func_282();
				func_280();
			}
			else
			{
				if (iLocal_595 < 0)
				{
					iLocal_595 = MISC::GET_GAME_TIMER() + 30000;
				}
				func_277();
				func_276();
			}
			break;
		
		case 2:
			func_26();
			GlobalFunc_846(&uLocal_446);
			break;
	}
}

void func_276()//Position - 0x288BD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((GlobalFunc_115(Local_431[iVar0 /*7*/]) && PED::IS_PED_BEING_STUNNED(Local_431[iVar0 /*7*/], 0)) && ENTITY::GET_ENTITY_HEALTH(Local_431[iVar0 /*7*/]) > 0)
		{
			ENTITY::SET_ENTITY_HEALTH(Local_431[iVar0 /*7*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((GlobalFunc_115(uLocal_447[iVar0]) && PED::IS_PED_BEING_STUNNED(uLocal_447[iVar0], 0)) && ENTITY::GET_ENTITY_HEALTH(uLocal_447[iVar0]) > 0)
		{
			ENTITY::SET_ENTITY_HEALTH(uLocal_447[iVar0], 0);
		}
		iVar0++;
	}
}

void func_277()//Position - 0x28969
{
	if ((iLocal_349 == 0 && func_278(1, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_CYA", 8, 0, 0, 0))
	{
		RECORDING::_0x293220DA1B46CEBC(2f, 3.5f, 0);
		iLocal_349 = 1;
	}
}

int func_278(int iParam0, int iParam1)//Position - 0x289AA
{
	if (iLocal_162 == 1)
	{
		return 0;
	}
	if ((iParam1 == 1 && HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_PROFILE_SETTING(203) > 0)
	{
		return 0;
	}
	if (GlobalFunc_111())
	{
		return 0;
	}
	if (iParam0 == 1 && !MISC::ARE_STRINGS_EQUAL(&cLocal_391, ""))
	{
		return 0;
	}
	return 1;
}


void func_280()//Position - 0x28A26
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (((iLocal_456[iVar0] > 1 && GlobalFunc_115(uLocal_447[iVar0])) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_447[iVar0], joaat("weapon_stungun"), 0))
		{
			WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(uLocal_447[iVar0]);
			iLocal_521++;
			if (iLocal_521 >= 8)
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_447[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (iLocal_521 < 8 && iLocal_521 > iLocal_522 * 2)
	{
		func_281();
	}
}

void func_281()//Position - 0x28AC4
{
	if (((iLocal_522 < 3 && (iLocal_456[0] != 6 || iLocal_456[1] != 6)) && func_278(1, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", sLocal_523[iLocal_522], 8, 0, 0, 0))
	{
		iLocal_522++;
	}
}

void func_282()//Position - 0x28B1D
{
	if (((((Local_431[0 /*7*/].f_3 == 5 && Local_431[1 /*7*/].f_3 == 5) && iLocal_456[0] == 6) && iLocal_456[1] == 6) && GlobalFunc_115(iLocal_404)) && GlobalFunc_115(Local_431[0 /*7*/]))
	{
		VEHICLE::SET_VEHICLE_SIREN(iLocal_404, 0);
		TASK::TASK_VEHICLE_DRIVE_WANDER(Local_431[0 /*7*/], iLocal_404, 10f, 786603);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_404, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_404, 0, 0, 0, 1, 0, 0, 0, 0);
		if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_404) < 500f)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_404, 500f);
		}
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_404) < 500)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_404, 500);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 0, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_404, 0);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 1, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_404, 1);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 4, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_404, 4);
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 5, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_404, 5);
		}
		iLocal_409 = 1;
	}
}

void func_283()//Position - 0x28C32
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_115(iLocal_404))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (GlobalFunc_115(Local_431[iVar0 /*7*/]) && GlobalFunc_115(uLocal_447[iVar0]))
			{
				switch (Local_431[iVar0 /*7*/].f_3)
				{
					case 0:
						if (func_291())
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_431[iVar0 /*7*/], joaat("weapon_stungun"), 200, 1, 1);
							VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_404, 10f, 2, 0);
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_431[iVar0 /*7*/], iVar0 * 1500 + 250, 320);
							Local_431[iVar0 /*7*/].f_3 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_IN_VEHICLE(Local_431[iVar0 /*7*/], iLocal_404, 0))
						{
							if (GlobalFunc_155(Local_431[iVar0 /*7*/], uLocal_447[iVar0], 5f))
							{
								PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 185, 1);
								Local_431[iVar0 /*7*/].f_3 = 2;
							}
							else if (!GlobalFunc_6695(Local_431[iVar0 /*7*/], -1207174364))
							{
								PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 185, 1);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_431[iVar0 /*7*/], uLocal_447[iVar0], uLocal_447[iVar0], 2f, 0, 1056964608, 1082130432, 1, 0, -957453492);
							}
						}
						break;
					
					case 2:
						if (iLocal_456[iVar0] == 6)
						{
							Local_431[iVar0 /*7*/].f_3 = 3;
						}
						else if (!GlobalFunc_155(Local_431[iVar0 /*7*/], uLocal_447[iVar0], 6f))
						{
							Local_431[iVar0 /*7*/].f_3 = 1;
						}
						else if (!GlobalFunc_6695(Local_431[iVar0 /*7*/], 1630799643))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_431[iVar0 /*7*/], uLocal_447[iVar0], -1, 0);
						}
						break;
					
					case 3:
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_404, Local_431[iVar0 /*7*/].f_2))
						{
							if (iVar0 == 0)
							{
								GlobalFunc_846(&uLocal_446);
								if (GlobalFunc_663("MIN1_10", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_404, 0);
							}
							else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0) && func_278(1, 1)) && GlobalFunc_155(Local_431[iVar0 /*7*/], iLocal_404, 50f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_NOJOSEF", 8, 0, 0, 0))
							{
							}
							Local_431[iVar0 /*7*/].f_3 = 4;
						}
						else
						{
							if (iVar0 == 0)
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_446))
								{
									uLocal_446 = GlobalFunc_4955(Local_431[iVar0 /*7*/], 1, 1, 5);
									GlobalFunc_164("MIN1_10", 7500, 1);
								}
								if (iLocal_355 == 0)
								{
									if ((func_278(1, 0) && GlobalFunc_155(Local_431[iVar0 /*7*/], iLocal_404, 50f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_BRING", 8, 1, 0, 0))
									{
										iLocal_355 = 1;
									}
								}
								else if (((iLocal_356 == 0 && func_278(1, 1)) && GlobalFunc_155(Local_431[iVar0 /*7*/], iLocal_404, 50f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_NOJO", 8, 0, 0, 0))
								{
									iLocal_356 = 1;
								}
							}
							if (!GlobalFunc_155(Local_431[iVar0 /*7*/], iLocal_404, 100f))
							{
								func_284(13);
							}
							else if (!GlobalFunc_155(Local_431[iVar0 /*7*/], iLocal_404, 10f))
							{
								if (!GlobalFunc_6695(Local_431[iVar0 /*7*/], 1227113341))
								{
									TASK::TASK_GO_TO_ENTITY(Local_431[iVar0 /*7*/], iLocal_404, 30000, 5f, 2f, 1073741824, 0);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_431[iVar0 /*7*/], PLAYER::PLAYER_PED_ID(), 30f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_431[iVar0 /*7*/], PLAYER::PLAYER_PED_ID(), 0);
							}
							else if (!GlobalFunc_6695(Local_431[iVar0 /*7*/], -982327190))
							{
								TASK::TASK_STAND_STILL(Local_431[iVar0 /*7*/], -1);
							}
						}
						break;
					
					case 4:
						if (PED::IS_PED_IN_VEHICLE(Local_431[iVar0 /*7*/], iLocal_404, 0))
						{
							PED::SET_PED_KEEP_TASK(Local_431[iVar0 /*7*/], 1);
							Local_431[iVar0 /*7*/].f_3 = 5;
						}
						else if (!GlobalFunc_6695(Local_431[iVar0 /*7*/], -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(Local_431[iVar0 /*7*/], iLocal_404, 30000, Local_431[iVar0 /*7*/].f_2, 1f, 520, 0);
						}
						break;
					
					case 5:
						if ((((((iLocal_357 == 0 && iVar0 == 1) && iLocal_456[0] == 6) && iLocal_456[1] == 6) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0)) && func_278(1, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_GOBACK2", 8, 0, 0, 0))
						{
							iLocal_357 = 1;
						}
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_284(int iParam0)//Position - 0x290B7
{
	if (iLocal_162 == 0)
	{
		iLocal_159 = iParam0;
		iLocal_158 = 2;
		iLocal_157 = 9;
	}
}







int func_291()//Position - 0x291CC
{
	if (func_293())
	{
		return 1;
	}
	if (GlobalFunc_115(iLocal_404))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0))
		{
			return 1;
		}
		if ((GlobalFunc_115(iLocal_414) && ENTITY::GET_ENTITY_SPEED(iLocal_404) < 1f) && GlobalFunc_156(iLocal_404, iLocal_414, 1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}


int func_293()//Position - 0x2928C
{
	if (iLocal_456[0] > 2 && iLocal_456[1] > 2)
	{
		return 1;
	}
	return 0;
}

void func_294()//Position - 0x292B1
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_404))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (GlobalFunc_115(uLocal_447[iVar0]))
			{
				switch (iLocal_456[iVar0])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_447[iVar0], 0))
						{
							PED::SET_PED_CAN_BE_TARGETTED(uLocal_447[iVar0], 1);
							if (GlobalFunc_713(uLocal_447[iVar0], Local_531, 1) < 25f)
							{
								TASK::TASK_WANDER_IN_AREA(uLocal_447[iVar0], Local_531, 10f, 0f, 0f);
							}
							else
							{
								TASK::TASK_WANDER_IN_AREA(uLocal_447[iVar0], ENTITY::GET_ENTITY_COORDS(uLocal_447[iVar0], 1), 10f, 0f, 0f);
							}
							iLocal_456[iVar0] = 1;
						}
						else if (iLocal_495[iVar0] > -1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_495[iVar0]) > 3000)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_447[iVar0], 0, 256);
								iLocal_495[iVar0] = -1;
							}
						}
						break;
					
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_474[iVar0]) > iLocal_477[iVar0])
						{
							if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_447[iVar0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_447[iVar0]))
							{
								func_309(iVar0, "MIN1_AIM", &(iLocal_486[iVar0]), 2);
							}
							else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_447[iVar0]))
							{
								func_309(iVar0, "MIN1_BUMP", &(iLocal_483[iVar0]), 3);
							}
							else
							{
								func_309(iVar0, "MIN1_DRNK", &(iLocal_480[iVar0]), 4);
							}
						}
						PED::SET_PED_RESET_FLAG(uLocal_447[iVar0], 187, 1);
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_447[iVar0], PLAYER::PLAYER_PED_ID(), 1))
						{
							if (func_308(iVar0))
							{
								WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(uLocal_447[iVar0]);
								GlobalFunc_846(&(uLocal_450[iVar0]));
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_447[iVar0], 0);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(uLocal_447[iVar0], 0);
								PED::SET_PED_MOVEMENT_CLIPSET(uLocal_447[iVar0], "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								iLocal_456[iVar0] = 2;
							}
						}
						break;
					
					case 2:
						func_309(iVar0, "MIN1_SHOCK", &(iLocal_489[iVar0]), 1);
						func_307(iVar0);
						if (!PED::IS_PED_BEING_STUNNED(uLocal_447[iVar0], 0) && !TASK::IS_PED_GETTING_UP(uLocal_447[iVar0]))
						{
							TASK::TASK_CLEAR_LOOK_AT(uLocal_447[iVar0]);
							GlobalFunc_8395(uLocal_447[iVar0]);
							TASK::CLEAR_PED_TASKS(uLocal_447[iVar0]);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(uLocal_447[iVar0], 0);
							if (iVar0 == 0)
							{
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar0], "missminuteman_1ig_2", "tasered_1", 4f, -4f, -1, 32768, 0, 0, 0, 0);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar0], "missminuteman_1ig_2", "tasered_2", 4f, -4f, -1, 32768, 0, 0, 0, 0);
							}
							iLocal_456[iVar0] = 3;
						}
						break;
					
					case 3:
						func_297(iVar0);
						if (!GlobalFunc_6695(uLocal_447[iVar0], -2017877118))
						{
							Local_431[iVar0 /*7*/].f_5 = 0;
							Local_431[iVar0 /*7*/].f_4 = MISC::GET_GAME_TIMER();
							Local_431[iVar0 /*7*/].f_6 = 5000;
							iLocal_456[iVar0] = 4;
						}
						break;
					
					case 4:
						if ((iLocal_468[iVar0] == 0 && iLocal_465[iVar0] == 1) && PED::IS_PED_BEING_STUNNED(uLocal_447[iVar0], 0))
						{
							iLocal_468[iVar0] = 1;
							PED::SET_PED_MOVEMENT_CLIPSET(uLocal_447[iVar0], "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
						}
						if (!PED::IS_PED_BEING_STUNNED(uLocal_447[iVar0], 0) && !TASK::IS_PED_GETTING_UP(uLocal_447[iVar0]))
						{
							iLocal_465[iVar0] = 1;
							func_295(iVar0);
							if (GlobalFunc_156(uLocal_447[iVar0], iLocal_404, 1) > 5f)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_447[iVar0], "missminuteman_1ig_2", "handsup_base", 3))
								{
									TASK::TASK_PLAY_ANIM(uLocal_447[iVar0], "missminuteman_1ig_2", "handsup_base", 2f, -2f, -1, 65585, 0, 0, 0, 0);
								}
								if (!GlobalFunc_6695(uLocal_447[iVar0], -2015108952))
								{
									if (GlobalFunc_156(uLocal_447[iVar0], iLocal_404, 1) < 20f)
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(uLocal_447[iVar0], iLocal_404, 20000, 0.5f, fLocal_471[iVar0], 0f, 1f, 0);
									}
									else if (GlobalFunc_156(uLocal_447[iVar0], iLocal_404, 1) < 40f)
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(uLocal_447[iVar0], iLocal_404, 40000, 0.5f, fLocal_471[iVar0], 0f, 1f, 0);
									}
									else
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(uLocal_447[iVar0], iLocal_404, 60000, 0.5f, fLocal_471[iVar0], 0f, 1f, 0);
									}
								}
							}
							else
							{
								iLocal_456[iVar0] = 5;
							}
						}
						break;
					
					case 5:
						if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_447[iVar0], iLocal_404))
						{
							PED::SET_PED_KEEP_TASK(uLocal_447[iVar0], 1);
							iLocal_456[iVar0] = 6;
						}
						else if (PED::IS_PED_BEING_STUNNED(uLocal_447[iVar0], 0))
						{
							iLocal_456[iVar0] = 4;
						}
						else
						{
							func_295(iVar0);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_447[iVar0], "missminuteman_1ig_2", "handsup_base", 3) && GlobalFunc_156(uLocal_447[iVar0], iLocal_404, 1) < 3f)
							{
								TASK::STOP_ANIM_TASK(uLocal_447[iVar0], "missminuteman_1ig_2", "handsup_base", -2f);
							}
							if (!GlobalFunc_6695(uLocal_447[iVar0], -1794415470))
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_447[iVar0], iLocal_404, 20000, iLocal_453[iVar0], 1f, 520, 0);
							}
						}
						break;
					
					case 6:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_447[iVar0], "missminuteman_1ig_2", "handsup_base", 3))
						{
							TASK::STOP_ANIM_TASK(uLocal_447[iVar0], "missminuteman_1ig_2", "handsup_base", -1000f);
						}
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_447[iVar0], iLocal_404))
						{
							iLocal_456[iVar0] = 4;
						}
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_295(int iParam0)//Position - 0x2986C
{
	func_297(iParam0);
	if ((MISC::GET_GAME_TIMER() - iLocal_474[iParam0]) > iLocal_477[iParam0])
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_447[iParam0]))
		{
			func_309(iParam0, "MIN1_BUMP", &(iLocal_483[iParam0]), 3);
		}
		else
		{
			func_309(iParam0, "MIN1_WALK", &(iLocal_492[iParam0]), 2);
		}
	}
	func_296(iParam0);
}

void func_296(int iParam0)//Position - 0x298CF
{
	if ((((Local_431[iParam0 /*7*/].f_5 < 3 && func_278(1, 1)) && (MISC::GET_GAME_TIMER() - Local_431[iParam0 /*7*/].f_4) > Local_431[iParam0 /*7*/].f_6) && !GlobalFunc_155(iLocal_404, uLocal_447[iParam0], 4f)) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_447[iParam0], 50f))
	{
		if (iParam0 == 0)
		{
			if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_INSULT1", 7, 0, 0, 0))
			{
				Local_431[iParam0 /*7*/].f_5++;
				Local_431[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER();
				Local_431[iParam0 /*7*/].f_6 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000);
			}
		}
		else if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_INSULT2", 7, 0, 0, 0))
		{
			Local_431[iParam0 /*7*/].f_5++;
			Local_431[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER();
			Local_431[iParam0 /*7*/].f_6 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000);
		}
	}
}

void func_297(int iParam0)//Position - 0x299D4
{
	if (iLocal_462[iParam0] == 0 && func_278(1, 1))
	{
		if (iParam0 == 0)
		{
			if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_SOBER1", 8, 0, 0, 0))
			{
				iLocal_462[iParam0] = 1;
			}
		}
		else if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_SOBER2", 8, 0, 0, 0))
		{
			iLocal_462[iParam0] = 1;
		}
	}
}










void func_307(int iParam0)//Position - 0x29CAF
{
	if (iLocal_459[iParam0] == 0)
	{
		if (func_278(1, 1))
		{
			if (iLocal_498 == 0)
			{
				if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_CAR1", 8, 0, 0, 0))
				{
					iLocal_498 = 1;
					iLocal_459[iParam0] = 1;
				}
			}
			else if (iLocal_498 == 1)
			{
				if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_CAR2", 8, 0, 0, 0))
				{
					iLocal_498 = 2;
					iLocal_459[iParam0] = 1;
				}
			}
		}
	}
}

int func_308(int iParam0)//Position - 0x29D1E
{
	if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_447[iParam0], joaat("weapon_stungun"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_447[iParam0], joaat("weapon_unarmed"), 0))
	{
		return 1;
	}
	return 0;
}

void func_309(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x29D56
{
	struct<2> Var0;
	
	if ((((*uParam2 < iParam3 && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_115(uLocal_447[iParam0])) && func_278(1, 1)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_447[iParam0], 1) < 50f)
	{
		StringCopy(&Var0, sParam1, 16);
		if (iParam0 == 0)
		{
			StringIntConCat(&Var0, 1, 16);
		}
		else
		{
			StringIntConCat(&Var0, 2, 16);
		}
		if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", &Var0, 8, 0, 0, 0))
		{
			*uParam2++;
			iLocal_474[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
}


void func_311()//Position - 0x29E22
{
	if ((iLocal_348 == 0 && func_278(1, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_OUTRO", 8, 0, 0, 0))
	{
		iLocal_348 = 1;
	}
}

void func_312()//Position - 0x29E58
{
	int iVar0;
	
	if (iLocal_162 == 0)
	{
		if (GlobalFunc_115(iLocal_414))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_422) && iLocal_161 == 2)
			{
				GlobalFunc_2216(uLocal_422, iLocal_414, fLocal_541, 0.8f, 0);
			}
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (GlobalFunc_115(uLocal_447[iVar0]) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_447[iVar0], 1) > fLocal_541)
			{
				if ((((iLocal_156 == 6 && GlobalFunc_115(Local_431[0 /*7*/])) && GlobalFunc_115(Local_431[1 /*7*/])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_431[0 /*7*/], 1) > (fLocal_541 / 2f)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_431[1 /*7*/], 1) > (fLocal_541 / 2f))
				{
					func_284(6);
				}
				else
				{
					func_284(7);
				}
			}
			iVar0++;
		}
	}
}



int func_315()//Position - 0x2A102
{
	int iVar0;
	
	if (GlobalFunc_115(iLocal_404) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_404, 50f))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_115(Local_431[iVar0 /*7*/]) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_431[iVar0 /*7*/], 50f))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_115(uLocal_447[iVar0]) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_447[iVar0], 50f))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_316(bool bParam0)//Position - 0x2A1AE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_115(Local_431[iVar0 /*7*/]))
		{
			if (bParam0)
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_431[iVar0 /*7*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_431[iVar0 /*7*/]);
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_317()//Position - 0x2A205
{
	int iVar0;
	
	switch (iLocal_158)
	{
		case 0:
			func_37();
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 200, 1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "STUN_COLLECT", "MINUTE_MAN_01_SOUNDSET", 1);
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (GlobalFunc_115(uLocal_447[iVar0]))
				{
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uLocal_447[iVar0]);
					iLocal_456[iVar0] = 0;
					iLocal_459[iVar0] = 0;
					iLocal_462[iVar0] = 0;
					iLocal_465[iVar0] = 0;
					iLocal_468[iVar0] = 0;
					iLocal_474[iVar0] = MISC::GET_GAME_TIMER();
					iLocal_480[iVar0] = 0;
					iLocal_483[iVar0] = 0;
					iLocal_486[iVar0] = 0;
					iLocal_489[iVar0] = 0;
					iLocal_492[iVar0] = 0;
					GlobalFunc_7057(uLocal_447[iVar0]);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_447[iVar0], 1);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_447[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_447[iVar0], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_447[iVar0], iVar0 * 1500, 65792);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_450[iVar0]))
					{
						uLocal_450[iVar0] = GlobalFunc_7254(uLocal_447[iVar0], 1, 145);
					}
					iLocal_495[iVar0] = MISC::GET_GAME_TIMER();
				}
				iVar0++;
			}
			iLocal_477[0] = 8000;
			iLocal_477[1] = 10000;
			func_324();
			Local_431[0 /*7*/].f_3 = 0;
			Local_431[1 /*7*/].f_3 = 0;
			fLocal_541 = 100f;
			iLocal_355 = 0;
			iLocal_356 = 0;
			iLocal_357 = 0;
			iLocal_347 = 0;
			iLocal_498 = 0;
			iLocal_521 = 0;
			iLocal_522 = 0;
			sLocal_523[0] = "MIN1_STOP1";
			sLocal_523[1] = "MIN1_STOP2";
			sLocal_523[2] = "MIN1_STOP3";
			iLocal_453[0] = 1;
			iLocal_453[1] = 2;
			fLocal_471[0] = -3f;
			fLocal_471[1] = 3f;
			iLocal_545 = MISC::GET_GAME_TIMER();
			iLocal_542 = MISC::GET_GAME_TIMER();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_403, 3);
			STREAMING::REQUEST_ANIM_DICT("move_m@drunk@verydrunk");
			func_323(6);
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			RECORDING::_0x293220DA1B46CEBC(5f, 6f, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (func_293())
			{
				iLocal_158 = 2;
			}
			else
			{
				func_312();
				func_294();
				func_283();
				func_322();
				func_321();
				func_280();
				func_318();
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(5f, 5f, 0);
			func_26();
			break;
	}
}

void func_318()//Position - 0x2A474
{
	if (func_320())
	{
		iLocal_542 = MISC::GET_GAME_TIMER();
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			GlobalFunc_5157(&uLocal_173, "MIN1AUD", "MIN1_SING1", 3, 1, 0);
		}
		else
		{
			GlobalFunc_5157(&uLocal_173, "MIN1AUD", "MIN1_SING2", 3, 1, 0);
		}
	}
}


int func_320()//Position - 0x2A4F2
{
	if (fLocal_421 > 1400f)
	{
		return 0;
	}
	if (iLocal_344 == 0)
	{
		return 0;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_542) < 10000)
	{
		return 0;
	}
	if (GlobalFunc_115(iLocal_414) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_414, 50f))
	{
		return 0;
	}
	return 1;
}

void func_321()//Position - 0x2A54C
{
	if (((((((iLocal_498 < 2 && iLocal_520 < 5) && iLocal_347 == 1) && func_278(1, 1)) && GlobalFunc_115(Local_431[0 /*7*/])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_431[0 /*7*/], 1) < 50f) && (MISC::GET_GAME_TIMER() - iLocal_545) > (20000 * iLocal_520 + 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", &(Local_499[iLocal_520 /*4*/]), 8, 0, 0, 0))
	{
		iLocal_520++;
	}
}

void func_322()//Position - 0x2A5DE
{
	if ((iLocal_347 == 0 && func_278(1, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_STUN", 8, 1, 0, 0))
	{
		iLocal_347 = 1;
		GlobalFunc_164("MIN1_07", 7500, 1);
	}
}

void func_323(int iParam0)//Position - 0x2A620
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_403);
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(iLocal_166[1]);
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_413);
			STREAMING::REQUEST_MODEL(iLocal_166[0]);
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Min1_Van");
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Min1_PV");
			STREAMING::REQUEST_ANIM_DICT("missminuteman_1ig_1");
			break;
		
		case 6:
			STREAMING::REQUEST_ANIM_DICT("missminuteman_1ig_2");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@BAIL_BOND_TAZERED");
			break;
		
		case 8:
			STREAMING::REQUEST_MODEL(iLocal_413);
			break;
	}
	iVar0 = 0;
	while (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_403))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_403, 1);
					iVar0 = 1;
				}
				break;
			
			case 3:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_166[1]))
				{
					iVar0 = 1;
				}
				break;
			
			case 4:
				if ((((STREAMING::HAS_MODEL_LOADED(iLocal_413) && STREAMING::HAS_MODEL_LOADED(iLocal_166[0])) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Min1_Van")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Min1_PV")) && STREAMING::HAS_ANIM_DICT_LOADED("missminuteman_1ig_1"))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_413, 1);
					iVar0 = 1;
				}
				break;
			
			case 6:
				if ((STREAMING::HAS_ANIM_DICT_LOADED("missminuteman_1ig_2") && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
				{
					iVar0 = 1;
				}
				break;
			
			case 8:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_413))
				{
					iVar0 = 1;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_324()//Position - 0x2A7A7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&(Local_499[iVar0 /*4*/]), "MIN1_HURRY", 16);
		StringIntConCat(&(Local_499[iVar0 /*4*/]), iVar0 + 1, 16);
		iVar0++;
	}
	iLocal_520 = 0;
}








void func_332()//Position - 0x2AA2B
{
	switch (iLocal_158)
	{
		case 0:
			func_37();
			func_450();
			func_449();
			iLocal_161 = 0;
			iLocal_420 = 500;
			fLocal_541 = 200f;
			iLocal_344 = 0;
			iLocal_371 = 0;
			if (GlobalFunc_115(iLocal_414))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_01_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("MINUTE_01_SCENE");
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_414, "MINUTE_01_SCENE_MARIACHI_VEHICLE", 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_414))
				{
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_414, 1);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_414);
				}
			}
			if (GlobalFunc_115(iLocal_404) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_404))
			{
				iLocal_410 = 0;
				iLocal_546 = -1;
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_404);
			}
			else
			{
				iLocal_410 = 1;
			}
			iLocal_419 = 0;
			iLocal_345 = 0;
			iLocal_346 = 0;
			iLocal_360 = 0;
			iLocal_361 = 0;
			iLocal_362 = 0;
			iLocal_363 = 0;
			iLocal_365 = 0;
			iLocal_366 = 0;
			iLocal_367 = 0;
			iLocal_368 = 0;
			iLocal_369 = 0;
			iLocal_370 = 0;
			iLocal_364 = 0;
			RECORDING::_0x293220DA1B46CEBC(5f, 10f, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			SYSTEM::WAIT(0);
			func_448(1);
			iLocal_542 = MISC::GET_GAME_TIMER();
			iLocal_543 = MISC::GET_GAME_TIMER();
			iLocal_549 = MISC::GET_GAME_TIMER();
			iLocal_544 = MISC::GET_GAME_TIMER();
			VEHICLE::SET_RANDOM_TRAINS(0);
			VEHICLE::DELETE_ALL_TRAINS();
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			GlobalFunc_574(779, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (GlobalFunc_115(iLocal_414))
			{
				func_444();
				func_443();
				func_312();
				func_442();
				if (func_439())
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 2f, 0);
					GlobalFunc_571(0, -1);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_414))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_414);
					}
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_414, 10f, 1, 0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Min1_Van");
					func_434();
					iLocal_158 = 2;
				}
				else
				{
					func_428();
					func_427();
					func_367();
					func_318();
					func_366();
					func_365();
					func_364();
					func_363();
					func_362();
					func_360();
					func_359();
					func_336();
					func_335();
				}
			}
			break;
		
		case 2:
			func_26();
			GlobalFunc_846(&uLocal_422);
			GlobalFunc_846(&uLocal_405);
			GlobalFunc_4948(&uLocal_83, 0, 0);
			func_316(0);
			func_448(0);
			AUDIO::TRIGGER_MUSIC_EVENT("MM1_STOP");
			AUDIO::STOP_STREAM();
			STREAMING::REMOVE_ANIM_DICT("missminuteman_1ig_1");
			break;
	}
}



void func_335()//Position - 0x2AD3A
{
	if (iLocal_410 == 0)
	{
		if (GlobalFunc_4947(iLocal_404))
		{
			if (iLocal_546 == -1)
			{
				iLocal_546 = MISC::GET_GAME_TIMER();
			}
			else if ((((((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_404) || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_JUST_PRESSED(0, 278)) || PAD::IS_CONTROL_JUST_PRESSED(0, 279)) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_404, -1)) || (MISC::GET_GAME_TIMER() - iLocal_546) > 3000)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_404))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_404);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Min1_PV");
				iLocal_410 = 1;
			}
		}
	}
}

void func_336()//Position - 0x2ADE5
{
	if (iLocal_344 == 1 && GlobalFunc_115(iLocal_414))
	{
		GlobalFunc_9626(&uLocal_83, iLocal_414, "MIN1_05", 0, 1, 1, 1);
	}
}























void func_359()//Position - 0x2BC2F
{
	int iVar0;
	int iVar1;
	
	if (iLocal_419 == 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (GlobalFunc_115(uLocal_447[iVar1]))
			{
				if (!GlobalFunc_6695(uLocal_447[iVar1], -2017877118))
				{
					if (fLocal_421 > 1100f)
					{
						iVar0 = 0;
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					}
					if (iVar1 == 0)
					{
						switch (iVar0)
						{
							case 0:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "base_drunk_mariachi_01", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 1:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_sing_1_mariachi_01", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 2:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_sing_2_mariachi_01", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 3:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_tequila_mariachi_01", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 4:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_waive_mariachi_01", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
						}
					}
					else
					{
						switch (iVar0)
						{
							case 0:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "base_drunk_mariachi_02", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 1:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_sing_1_mariachi_02", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 2:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_sing_2_mariachi_02", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 3:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_tequila_mariachi_02", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							
							case 4:
								TASK::TASK_PLAY_ANIM(uLocal_447[iVar1], "missminuteman_1ig_1", "idle_waive_mariachi_02", 4f, -4f, -1, 8, 0, 0, 0, 0);
								break;
							}
						}
					}
			}
			iVar1++;
		}
	}
}

void func_360()//Position - 0x2BE40
{
	int iVar0;
	
	if ((iLocal_390 < 4 && func_361()) && func_278(1, 1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if ((iLocal_385[iVar0] == 0 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_372[iVar0 /*3*/], 1) < 10f) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_CRASH2", 8, 0, 0, 0))
			{
				iLocal_385[iVar0] = 1;
				iLocal_390++;
			}
			iVar0++;
		}
	}
}

int func_361()//Position - 0x2BEC9
{
	if (GlobalFunc_115(iLocal_404) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0))
	{
		return 1;
	}
	return 0;
}

void func_362()//Position - 0x2BEF1
{
	int iVar0;
	
	if (((((((iLocal_588 < 7 && fLocal_421 < 1250f) && iLocal_344 == 1) && (MISC::GET_GAME_TIMER() - iLocal_543) > 12000) && func_361()) && GlobalFunc_115(iLocal_414)) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_414, 50f)) && func_278(1, 1))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		if (iLocal_551[iVar0] == 0 && GlobalFunc_10618(&uLocal_173, "MIN1AUD", &(Local_559[iVar0 /*4*/]), 8, 0, 0, 0))
		{
			iLocal_551[iVar0] = 1;
			iLocal_543 = MISC::GET_GAME_TIMER();
			iLocal_588++;
		}
	}
}

void func_363()//Position - 0x2BFA4
{
	if ((iLocal_344 == 1 && fLocal_421 < 1465f) && GlobalFunc_115(iLocal_404))
	{
		if (iLocal_411 == 1)
		{
			if (!func_361())
			{
				iLocal_411 = 0;
				iLocal_368 = 1;
				iLocal_369 = 1;
			}
			else if (func_278(1, 1))
			{
				if ((iLocal_367 < 3 && iLocal_370 == 1) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_GOGO", 8, 0, 0, 0))
				{
					iLocal_367++;
					iLocal_370 = 0;
				}
			}
		}
		else if (func_361())
		{
			iLocal_411 = 1;
			iLocal_370 = 1;
		}
		else if (func_278(1, 1))
		{
			if ((iLocal_365 < 3 && iLocal_368 == 1) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_GETIN", 8, 0, 0, 0))
			{
				iLocal_365++;
				iLocal_368 = 0;
			}
			if ((iLocal_366 < 3 && iLocal_369 == 1) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_BACKIN", 8, 0, 0, 0))
			{
				iLocal_366++;
				iLocal_369 = 0;
			}
		}
	}
}

void func_364()//Position - 0x2C0B3
{
	if ((iLocal_363 < 3 && GlobalFunc_115(iLocal_404)) && GlobalFunc_115(iLocal_414))
	{
		if (iLocal_364 == 0)
		{
			if (((func_278(1, 1) && func_361()) && GlobalFunc_156(iLocal_404, iLocal_414, 1) > 100f) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_BEHIND", 8, 0, 0, 0))
			{
				iLocal_363++;
				iLocal_364 = 1;
			}
		}
		else if (GlobalFunc_156(iLocal_404, iLocal_414, 1) < 75f)
		{
			iLocal_364 = 0;
		}
	}
}

void func_365()//Position - 0x2C148
{
	if (iLocal_361 < 3 && GlobalFunc_115(iLocal_404))
	{
		if (iLocal_362 == 0)
		{
			if (((func_278(1, 1) && func_361()) && ENTITY::GET_ENTITY_SPEED(iLocal_404) < 1f) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_STOP", 8, 0, 0, 0))
			{
				iLocal_361++;
				iLocal_362 = 1;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(iLocal_404) > 2f)
		{
			iLocal_362 = 0;
		}
	}
}

void func_366()//Position - 0x2C1C1
{
	if ((((((iLocal_345 == 0 && fLocal_421 > 450f) && func_278(1, 1)) && GlobalFunc_115(iLocal_414)) && func_361()) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_414, 75f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_OFFROAD", 8, 0, 0, 0))
	{
		iLocal_345 = 1;
	}
}

void func_367()//Position - 0x2C22F
{
	struct<6> Var0;
	
	if (iLocal_343 == 1)
	{
		if (iLocal_344 == 0)
		{
			if (((func_361() && func_278(1, 1)) && (MISC::GET_GAME_TIMER() - iLocal_544) > 5000) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_DRIVEB", 8, 0, 0, 0))
			{
				iLocal_344 = 1;
				iLocal_411 = 1;
				GlobalFunc_11110(2, "Car chase", 1, 0, 0, 1);
			}
		}
		else if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
		{
			if (GlobalFunc_111())
			{
				Var0 = { GlobalFunc_514() };
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN1_DRIVEB_4"))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 200, 1, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 1);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "STUN_COLLECT", "MINUTE_MAN_01_SOUNDSET", 1);
				}
			}
		}
	}
}




























































void func_427()//Position - 0x30CEF
{
	if (iLocal_343 == 0)
	{
		if (func_278(1, 0) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_OUTBAR", 8, 0, 0, 0))
		{
			RECORDING::_0x293220DA1B46CEBC(2f, 4f, 0);
			iLocal_343 = 1;
		}
	}
	else if (iLocal_344 == 0)
	{
		if (((iLocal_360 < 3 && !func_361()) && func_278(1, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_WAIT2", 8, 0, 0, 0))
		{
			iLocal_360++;
		}
	}
}

void func_428()//Position - 0x30D6F
{
	if (GlobalFunc_115(iLocal_404))
	{
		switch (iLocal_161)
		{
			case 0:
				if (iLocal_156 == 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					GlobalFunc_846(&uLocal_405);
					iLocal_408 = 1;
					iLocal_161 = 1;
				}
				else
				{
					GlobalFunc_502();
					if (func_361())
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_846(&uLocal_405);
						iLocal_408 = 1;
						if (iLocal_156 == 2)
						{
							iLocal_161 = 1;
						}
						else
						{
							iLocal_161 = 2;
						}
					}
					else
					{
						if (!GlobalFunc_111() && !HUD::DOES_BLIP_EXIST(uLocal_405))
						{
							uLocal_405 = GlobalFunc_5743(iLocal_404, 1, 5);
							if (iLocal_406 == 0)
							{
								GlobalFunc_164("MIN1_01", 5000, 1);
								iLocal_406++;
							}
							else if (iLocal_406 == 1)
							{
								GlobalFunc_164("MIN1_08", 5000, 1);
								iLocal_406++;
							}
							else
							{
								HUD::CLEAR_PRINTS();
							}
						}
						func_431();
					}
				}
				break;
			
			case 1:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					HUD::CLEAR_PRINTS();
					if (func_361())
					{
						iLocal_408 = 1;
						iLocal_161 = 2;
					}
					else
					{
						iLocal_161 = 0;
					}
				}
				else if (iLocal_408 == 1)
				{
					iLocal_408 = 0;
					GlobalFunc_164("MIN1_02", 5000, 1);
				}
				break;
			
			case 2:
				if (iLocal_156 == 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					GlobalFunc_846(&uLocal_422);
					iLocal_408 = 1;
					iLocal_161 = 1;
				}
				else if (func_361())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_422))
					{
						switch (iLocal_156)
						{
							case 2:
								uLocal_422 = GlobalFunc_2324(Local_423, 5, 1);
								break;
							
							case 5:
								if (GlobalFunc_115(iLocal_414))
								{
									uLocal_422 = func_429(iLocal_414, 1, 0);
								}
								break;
							}
					}
					if (iLocal_408 == 1)
					{
						iLocal_408 = 0;
						if (iLocal_407 < 1)
						{
							switch (iLocal_156)
							{
								case 2:
									GlobalFunc_164("MIN1_03", 5000, 1);
									break;
								
								case 5:
									GlobalFunc_164("MIN1_06", 5000, 1);
									break;
							}
							iLocal_407++;
						}
						else
						{
							HUD::CLEAR_PRINTS();
						}
						func_316(0);
					}
					if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iLocal_404))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_404, false);
					}
				}
				else if (ENTITY::GET_ENTITY_SPEED(iLocal_404) < 1f)
				{
					GlobalFunc_846(&uLocal_422);
					func_316(1);
					if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iLocal_404))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_404, true);
					}
					iLocal_161 = 0;
				}
				else
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_404, 10f, 1, 0);
				}
				break;
			}
	}
}

int func_429(int iParam0, bool bParam1, bool bParam2)//Position - 0x30FBA
{
	return GlobalFunc_5976(iParam0, !bParam1, bParam2);
}


void func_431()//Position - 0x30FFB
{
	if (((iLocal_352 == 0 && iLocal_156 == 2) && func_278(0, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_GETSOUT", 8, 0, 0, 0))
	{
		iLocal_352 = 1;
	}
}



void func_434()//Position - 0x310DB
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if ((((((MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_559[0 /*4*/])) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_559[1 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_559[2 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_559[3 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_559[4 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_559[5 /*4*/]))) || MISC::ARE_STRINGS_EQUAL(&Var0, &(Local_559[6 /*4*/])))
		{
			GlobalFunc_5105();
		}
	}
}





int func_439()//Position - 0x31263
{
	int iVar0;
	
	if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_414))
	{
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_414, 200f);
		return 1;
	}
	else if (iLocal_346 == 0)
	{
		if (((fLocal_421 > 1465f && func_278(1, 1)) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_414, 75f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_CRASH", 8, 0, 0, 0))
		{
			iLocal_346 = 1;
		}
	}
	if (func_441())
	{
		return 1;
	}
	if (func_440())
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iLocal_414) < iLocal_420)
	{
		return 1;
	}
	if (iLocal_419 == 1)
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_414))
		{
			return 1;
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_414) < 0.5f)
		{
			return 1;
		}
		if (iLocal_419 == 1 && ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_414))
		{
			return 1;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_549) > 1000)
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_414, 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_414, 5, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_414, 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_414, 1, 0))
		{
			iVar0++;
		}
		if (iVar0 > 1)
		{
			return 1;
		}
		else
		{
			iLocal_549 = MISC::GET_GAME_TIMER();
		}
	}
	return 0;
}

int func_440()//Position - 0x313AD
{
	if (GlobalFunc_115(iLocal_414))
	{
		if (GlobalFunc_115(uLocal_447[0]) && ENTITY::GET_ENTITY_HEALTH(uLocal_447[0]) < 200)
		{
			return 1;
		}
		if (GlobalFunc_115(uLocal_447[1]) && ENTITY::GET_ENTITY_HEALTH(uLocal_447[1]) < 200)
		{
			return 1;
		}
	}
	return 0;
}

int func_441()//Position - 0x31406
{
	if (GlobalFunc_115(iLocal_414))
	{
		if (GlobalFunc_115(uLocal_447[0]) && !PED::IS_PED_IN_VEHICLE(uLocal_447[0], iLocal_414, 0))
		{
			return 1;
		}
		if (GlobalFunc_115(uLocal_447[1]) && !PED::IS_PED_IN_VEHICLE(uLocal_447[1], iLocal_414, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_442()//Position - 0x31463
{
	if ((iLocal_371 == 0 && AUDIO::LOAD_STREAM("MARIACHI", "MINUTE_MAN_01_SOUNDSET")) && GlobalFunc_115(iLocal_414))
	{
		AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
		AUDIO::PLAY_STREAM_FROM_VEHICLE(iLocal_414);
		AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
		iLocal_371 = 1;
	}
}

void func_443()//Position - 0x314AD
{
	if (iLocal_162 == 0)
	{
		if (iLocal_161 == 0 || iLocal_161 == 1)
		{
			if ((GlobalFunc_115(iLocal_404) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_404, 1) > 100f)
			{
				func_284(6);
			}
		}
	}
}

void func_444()//Position - 0x31504
{
	float fVar0;
	
	if ((GlobalFunc_115(iLocal_414) && GlobalFunc_115(iLocal_404)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_414))
	{
		fLocal_421 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_414);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_414, -1))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_414);
		}
		else
		{
			fVar0 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_414, 1);
			if (iLocal_419 == 0)
			{
				if (fLocal_421 > 1250f)
				{
					iLocal_419 = 1;
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_414, 262144);
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 0.7f);
				}
				else if (func_446())
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1.7f);
				}
				else if (func_445())
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1f);
				}
				else if (fVar0 > 75f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 0.5f);
				}
				else if (fVar0 > 30f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1f);
				}
				else if (fVar0 > 20f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1.3f);
				}
				else if (fVar0 > 10f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1.5f);
				}
				else
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1.7f);
				}
			}
			else if (fVar0 > 75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 0.5f);
			}
			else if (fVar0 > 30f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1f);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_414, 1.3f);
			}
		}
	}
}

int func_445()//Position - 0x31676
{
	if (GlobalFunc_115(iLocal_414))
	{
		if ((GlobalFunc_713(iLocal_414, 2262f, 3590f, 58f, 1) < 15f || GlobalFunc_713(iLocal_414, 2387f, 3705f, 53f, 1) < 15f) || GlobalFunc_713(iLocal_414, 2620f, 3853f, 72f, 1) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_446()//Position - 0x316F3
{
	float fVar0;
	float fVar1;
	
	if (GlobalFunc_115(iLocal_414) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = GlobalFunc_713(iLocal_414, Local_531, 1);
		fVar1 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_531, 1);
		if (fVar1 < fVar0)
		{
			return 1;
		}
	}
	return 0;
}


void func_448(int iParam0)//Position - 0x31788
{
	if (iParam0 == 1)
	{
		ENTITY::CREATE_FORCED_OBJECT(2142.74f, 3355.45f, 44.44f, 5f, joaat("prop_fnc_farm_01e"), 1);
		ENTITY::CREATE_FORCED_OBJECT(2146.07f, 3351.57f, 44.5f, 5f, joaat("prop_fnclink_01d"), 1);
		ENTITY::CREATE_FORCED_OBJECT(2067.85f, 3266.79f, 44.45f, 5f, joaat("prop_sign_road_03a"), 1);
	}
	else
	{
		ENTITY::REMOVE_FORCED_OBJECT(2142.74f, 3355.45f, 44.44f, 5f, joaat("prop_fnc_farm_01e"));
		ENTITY::REMOVE_FORCED_OBJECT(2146.07f, 3351.57f, 44.5f, 5f, joaat("prop_fnclink_01d"));
		ENTITY::REMOVE_FORCED_OBJECT(2067.85f, 3266.79f, 44.45f, 5f, joaat("prop_sign_road_03a"));
	}
}

void func_449()//Position - 0x31832
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_551[iVar0] = 0;
		StringCopy(&(Local_559[iVar0 /*4*/]), "MIN1_CHASE", 16);
		StringIntConCat(&(Local_559[iVar0 /*4*/]), iVar0 + 1, 16);
		iVar0++;
	}
	iLocal_588 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_385[iVar0] = 0;
		iVar0++;
	}
	iLocal_390 = 0;
}

void func_450()//Position - 0x31896
{
	iLocal_406 = 1;
	iLocal_407 = 0;
	iLocal_408 = 1;
}

void func_451()//Position - 0x318AA
{
	switch (iLocal_158)
	{
		case 0:
			func_37();
			GlobalFunc_4935();
			if (GlobalFunc_115(iLocal_404))
			{
				GlobalFunc_5921(iLocal_404, 1995.879f, 3058.195f, 46.69218f, 45.83372f, 0, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_404, 0.1f);
				ENTITY::SET_ENTITY_HEALTH(iLocal_404, 1000);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_404, 0, 0, 0);
			}
			RECORDING::_0x293220DA1B46CEBC(5f, 10f, 0);
			func_457(Local_415, fLocal_418, 500f, 1);
			func_456(0);
			func_316(1);
			iLocal_339 = 0;
			iLocal_342 = 0;
			iLocal_343 = 0;
			iLocal_594 = MISC::GET_GAME_TIMER() + 1000;
			break;
		
		case 1:
			func_455();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1990.335f, 3053.546f, 45.11235f, 1989.142f, 3051.733f, 48.11221f, 3f, 0, 1, 0))
			{
				iLocal_158 = 2;
			}
			else
			{
				func_454();
				func_452();
			}
			break;
		
		case 2:
			func_26();
			INTERIOR::UNPIN_INTERIOR(iLocal_429);
			break;
	}
}

void func_452()//Position - 0x319AB
{
	if (((iLocal_342 == 0 && func_278(1, 0)) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 1987.8f, 3053.5f, 46.1f, 1.5f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_GETOUT", 8, 0, 0, 0))
	{
		iLocal_342 = 1;
	}
}


void func_454()//Position - 0x31A1F
{
	if (func_278(1, 1))
	{
		if (iLocal_339 == 0)
		{
			if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_INBAR", 8, 0, 0, 0))
			{
				iLocal_339 = 1;
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uLocal_405))
		{
			if (GlobalFunc_115(iLocal_404))
			{
				uLocal_405 = GlobalFunc_5743(iLocal_404, 1, 5);
				GlobalFunc_164("MIN1_01", 7500, 1);
			}
		}
	}
}

void func_455()//Position - 0x31A80
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 228, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 239, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 240, 1);
	}
}

void func_456(int iParam0)//Position - 0x31AB4
{
	if (iParam0 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1906f, 3000f, 0f, 2150f, 3500f, 100f, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_IN_AREA(1906f, 3000f, 0f, 2150f, 3500f, 100f, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(1995.34f, 3061.054f, 46.04894f, 10f, 0, 0, 1, 1, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(1958.771f, 3090.406f, 45.94596f, 40f, 0, 0, 1, 1, 0);
	}
}

void func_457(struct<3> Param0, float fParam3, float fParam4, int iParam5)//Position - 0x31B3E
{
	int iVar0;
	
	MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 10f, 0);
	MISC::CLEAR_AREA_OF_PROJECTILES(2032.006f, 3308.285f, 45.0585f, 250f, 0);
	FIRE::STOP_FIRE_IN_RANGE(Param0, 10f);
	func_323(4);
	func_460(&iLocal_414, iLocal_413, Param0, fParam3, 15f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_413);
	if (GlobalFunc_115(iLocal_414))
	{
		if (iParam5 == 1)
		{
			ENTITY::SET_ENTITY_ROTATION(iLocal_414, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(500, "Min1_Van"), 0f), 2, 1);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_414, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_414, 200);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_414, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_414, 1);
		func_458(iLocal_414, &(uLocal_447[0]), iLocal_166[0], -1);
		func_458(iLocal_414, &(uLocal_447[1]), iLocal_166[0], 0);
		if (fParam4 > -1f)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_414, 500, "Min1_Van", 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_414);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_414, fParam4);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[0]);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_115(uLocal_447[iVar0]))
		{
			ENTITY::SET_ENTITY_HEALTH(uLocal_447[iVar0], 400);
			PED::SET_PED_MAX_HEALTH(uLocal_447[iVar0], 400);
			PED::SET_PED_CONFIG_FLAG(uLocal_447[iVar0], 32, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_447[iVar0], 116, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_447[iVar0], 118, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_447[iVar0], 177, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_447[iVar0], 42, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_447[iVar0], 170, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_447[iVar0], 281, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_447[iVar0], 1);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_447[iVar0], 0);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_447[iVar0], 0);
			ENTITY::SET_ENTITY_LOD_DIST(uLocal_447[iVar0], 200);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_447[iVar0], 1);
			if (iVar0 == 0)
			{
				GlobalFunc_173(&uLocal_173, 6, uLocal_447[iVar0], "MARIACHI1", 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_447[iVar0], 0, 0, 2, 0);
			}
			else
			{
				GlobalFunc_173(&uLocal_173, 7, uLocal_447[iVar0], "MARIACHI2", 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_447[iVar0], 0, 2, 1, 0);
			}
		}
		iVar0++;
	}
}

void func_458(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x31D68
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		GlobalFunc_2888(iParam2);
		*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam2, iParam3, 1, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, 1);
	}
}


void func_460(var uParam0, int iParam1, struct<3> Param2, float fParam5, float fParam6)//Position - 0x31DD6
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		GlobalFunc_2888(iParam1);
		*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, fParam6);
	}
}



void func_463()//Position - 0x31E73
{
	switch (iLocal_158)
	{
		case 0:
			func_37();
			GlobalFunc_11110(1, "Enter bar", 0, 0, 0, 1);
			func_323(3);
			func_316(1);
			PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(1985.258f, 3048.67f, 46.21502f, 7f, 20);
			iLocal_338 = 0;
			iLocal_340 = 0;
			iLocal_341 = 0;
			iLocal_359 = 0;
			iLocal_538 = 0;
			iLocal_540 = 0;
			RECORDING::_0x293220DA1B46CEBC(5f, 10f, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			iLocal_547 = MISC::GET_GAME_TIMER();
			iLocal_548 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			func_455();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1991.563f, 3049.609f, 45.12562f, 1988.916f, 3045.263f, 48.12549f, 5f, 0, 1, 0))
			{
				iLocal_158 = 2;
			}
			else
			{
				func_472();
				func_471();
				func_467();
				func_466();
				func_465();
				func_464();
			}
			break;
		
		case 2:
			func_26();
			GlobalFunc_846(&uLocal_405);
			GlobalFunc_846(&uLocal_422);
			GlobalFunc_2297(&iLocal_534, 1, 0, 1);
			GlobalFunc_2297(&iLocal_539, 1, 0, 1);
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			break;
	}
}

void func_464()//Position - 0x31F90
{
	if (GlobalFunc_775(iLocal_404, Local_426, 100f))
	{
		if (iLocal_430 == 0)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_429);
			iLocal_430 = 1;
		}
	}
	else if (iLocal_430 == 1)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_429);
		iLocal_430 = 0;
	}
}

void func_465()//Position - 0x31FD3
{
	if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && (MISC::GET_GAME_TIMER() - iLocal_547) > 1500) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_429)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, -1f), 5f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1.5f)), 2000, 0, 2);
		}
		else
		{
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 10f), 5f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1.5f)), 2000, 0, 2);
		}
		iLocal_547 = MISC::GET_GAME_TIMER();
	}
}

void func_466()//Position - 0x32070
{
	if (iLocal_540 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1987.803f, 3055.128f, 45.2153f, 1986.587f, 3053.184f, 48.21519f, 1.5f, 0, 1, 0))
	{
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(1);
		if (PED::GET_CLOSEST_PED(1983.41f, 3054.88f, 47.01f, 3f, 1, 1, &iLocal_539, 0, 0, -1) && GlobalFunc_115(iLocal_539))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_539) == joaat("ig_janet"))
			{
				GlobalFunc_4935();
				GlobalFunc_173(&uLocal_173, 8, iLocal_539, "JANET", 0, 1);
				GlobalFunc_5157(&uLocal_173, "MIN1AUD", "MIN1_BANNED", 3, 0, 0);
			}
			iLocal_540 = 1;
		}
	}
}

void func_467()//Position - 0x3211B
{
	if (iLocal_162 == 0)
	{
		if (iLocal_538 == 0)
		{
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_535, 20f) && !ENTITY::DOES_ENTITY_EXIST(iLocal_534))
			{
				func_470(&iLocal_534, iLocal_166[1], Local_535, 332.6105f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[1]);
				PED::SET_PED_CONFIG_FLAG(iLocal_534, 104, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_534, 13, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_534, 17, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_534, 2, 0);
				GlobalFunc_173(&uLocal_173, 5, iLocal_534, "MIN1DRUNKMALE", 0, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_591);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1992.058f, 3056.179f, 46.063f, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_WANDER_IN_AREA(0, 1994f, 3059f, 47f, 5f, 1077936128, 1086324736);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_591);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_534, uLocal_591);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_591);
				GlobalFunc_7057(iLocal_534);
				iLocal_538 = 1;
			}
		}
		else if (GlobalFunc_115(iLocal_534))
		{
			func_468();
			PED::SET_PED_RESET_FLAG(iLocal_534, 60, 1);
		}
	}
}

void func_468()//Position - 0x32230
{
	if (iLocal_340 == 0)
	{
		if (func_278(1, 1))
		{
			GlobalFunc_5157(&uLocal_173, "MIN1AUD", "MIN1_DRUNK", 3, 0, 0);
			iLocal_340 = 1;
		}
	}
	else if (iLocal_341 == 0)
	{
		if (PED::IS_PED_FLEEING(iLocal_534))
		{
			if (GlobalFunc_5664("MIN1_DRUNK"))
			{
				GlobalFunc_4956();
			}
			GlobalFunc_5157(&uLocal_173, "MIN1AUD", "MIN1_BUMP", 3, 0, 0);
			iLocal_341 = 1;
		}
	}
}


void func_470(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x322B3
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		GlobalFunc_2888(iParam1);
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, 1);
	}
}

void func_471()//Position - 0x322EE
{
	if ((((iLocal_359 < 5 && (MISC::GET_GAME_TIMER() - iLocal_548) > 10000) && func_361()) && func_278(1, 1)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_WAIT", 8, 0, 0, 0))
	{
		iLocal_359++;
		iLocal_548 = MISC::GET_GAME_TIMER();
	}
}

void func_472()//Position - 0x32349
{
	if (func_278(1, 1))
	{
		if (iLocal_338 == 0)
		{
			if (GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_ATBAR", 8, 0, 0, 0))
			{
				iLocal_338 = 1;
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uLocal_422))
		{
			uLocal_422 = GlobalFunc_2324(Local_423, 7, 0);
			GlobalFunc_164("MIN1_03", 5000, 1);
		}
	}
}

void func_473()//Position - 0x323A2
{
	switch (iLocal_158)
	{
		case 0:
			func_37();
			GlobalFunc_190(&iLocal_172);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
			func_450();
			iLocal_161 = 2;
			iLocal_350 = 0;
			iLocal_351 = 0;
			iLocal_352 = 0;
			iLocal_353 = 0;
			iLocal_354 = 0;
			iLocal_430 = 0;
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(40f, 40f, 40f), Vector(35f, 3409f, 322f) + Vector(40f, 40f, 40f), 0, 1);
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_404))
			{
				if (GlobalFunc_775(iLocal_404, Local_426, 20f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					GlobalFunc_4935();
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_404, 10f, 1, 0);
					}
					iLocal_158 = 2;
				}
				else
				{
					func_428();
					func_476();
					func_475();
					func_474();
					func_443();
					func_464();
				}
				if (INTERIOR::IS_INTERIOR_READY(iLocal_429) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_429)
				{
					func_284(6);
				}
			}
			break;
		
		case 2:
			func_26();
			break;
	}
}

void func_474()//Position - 0x324DD
{
	if (((((iLocal_353 == 0 && iLocal_351 == 1) && func_278(1, 1)) && func_361()) && GlobalFunc_713(iLocal_404, Local_426, 1) > (fLocal_412 + 50f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_WRONG", 8, 0, 0, 0))
	{
		iLocal_353 = 1;
	}
}

void func_475()//Position - 0x32542
{
	if (((((iLocal_354 == 0 && func_278(1, 1)) && func_361()) && GlobalFunc_775(iLocal_404, Local_426, 60f)) && !GlobalFunc_775(iLocal_404, Local_426, 40f)) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_ALMOST", 8, 0, 0, 0))
	{
		iLocal_354 = 1;
	}
}

void func_476()//Position - 0x325AE
{
	if (iLocal_351 == 0)
	{
		if (iLocal_350 == 0)
		{
			if (func_278(1, 1) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", "MIN1_DRIVEA", 8, 0, 0, 0))
			{
				iLocal_350 = 1;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cLocal_391, ""))
		{
			if (GlobalFunc_111())
			{
				cLocal_397 = { GlobalFunc_514() };
				if (!func_361() && !GlobalFunc_775(iLocal_404, Local_426, 20f))
				{
					cLocal_391 = { GlobalFunc_560() };
					GlobalFunc_4935();
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(&cLocal_397, "NULL"))
			{
				iLocal_351 = 1;
				if (GlobalFunc_115(iLocal_404))
				{
					fLocal_412 = GlobalFunc_713(iLocal_404, Local_426, 1);
				}
			}
		}
		else if ((func_361() && func_278(0, 1)) && GlobalFunc_10626(&uLocal_173, "MIN1AUD", &cLocal_391, &cLocal_397, 8, 0, 0))
		{
			StringCopy(&cLocal_391, "", 24);
		}
	}
}



void func_479()//Position - 0x32721
{
	switch (iLocal_158)
	{
		case 0:
			func_37();
			GlobalFunc_9623("mmb_1_rcm", 1);
			func_542();
			iLocal_169 = 0;
			if ((((CAM::IS_SCREEN_FADED_IN() && !GlobalFunc_199()) && GlobalFunc_115(Local_95.f_28[0])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], 1) > 7f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 329.2873f, 3403.302f, 34.5026f, 336.4215f, 3385.256f, 39.40556f, 20f, 0, 1, 0))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_95.f_28[0], 0f, 0f, 0f, 1, -1, 3000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.01f);
				CAM::SET_GAMEPLAY_HINT_FOV(25f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_171);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				}
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Local_95.f_28[0], 0f, -3f, 0f, 1f, -1, 1036831949, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_95.f_28[0], 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_171);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_171);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_171);
				iLocal_170 = MISC::GET_GAME_TIMER();
			}
			else
			{
				iLocal_170 = -1;
			}
			break;
		
		case 1:
			switch (iLocal_169)
			{
				case 0:
					func_542();
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_8535();
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
					if (iLocal_170 == -1 || (MISC::GET_GAME_TIMER() - iLocal_170) > 3000)
					{
						if (func_533(1, 1093140480, 0))
						{
							if (GlobalFunc_115(Local_95.f_28[0]))
							{
								Local_431[0 /*7*/] = Local_95.f_28[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_431[0 /*7*/], 1, 1);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_431[0 /*7*/], "Joe", 0, GlobalFunc_4946(56), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_431[0 /*7*/], "Joe", 2, GlobalFunc_4946(56), 0);
							}
							if (GlobalFunc_115(Local_95.f_28[1]))
							{
								Local_431[1 /*7*/] = Local_95.f_28[1];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_431[1 /*7*/], 1, 1);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_431[1 /*7*/], "Josef", 0, GlobalFunc_4946(57), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_431[1 /*7*/], "Josef", 2, GlobalFunc_4946(57), 0);
							}
							if (GlobalFunc_115(Local_95.f_35[0]))
							{
								iLocal_404 = Local_95.f_35[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_404, 1, 1);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_404, "MMB_Patrol_Vehicle", 0, joaat("pranger"), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_404, "MMB_Patrol_Vehicle", 2, joaat("pranger"), 0);
							}
							if (GlobalFunc_115(Local_95.f_35[1]))
							{
								iLocal_172 = Local_95.f_35[1];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_172, 1, 1);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_172, "MMB_Camper_Van", 0, joaat("surfer2"), 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_172, "MMB_Camper_Van", 2, joaat("surfer2"), 0);
							}
							GlobalFunc_9161();
							RECORDING::_0x48621C9FCA3EBD28(1);
							CUTSCENE::START_CUTSCENE(2);
							if (GlobalFunc_115(iLocal_404))
							{
								CUTSCENE::_0x7F96F23FA9B73327(ENTITY::GET_ENTITY_MODEL(iLocal_404));
							}
							iLocal_169++;
						}
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
						GlobalFunc_10063(331.7412f, 3402.093f, 34.43951f, 318.0074f, 3410.16f, 38.72809f, 5f, Local_163, 254.7861f, GlobalFunc_625(), 1, 1, 1, 0, 0);
						GlobalFunc_10606(Local_163, 254.7861f, 0, 145);
						func_496(327.85f, 3405.7f, 35.73f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						GlobalFunc_79(500, 0);
						iLocal_169++;
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_431[0 /*7*/]) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Joe", 0)))
						{
							Local_431[0 /*7*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Joe", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_431[0 /*7*/], 1, 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_431[1 /*7*/]) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josef", 0)))
						{
							Local_431[1 /*7*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josef", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_431[1 /*7*/], 1, 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_404) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Patrol_Vehicle", 0)))
						{
							iLocal_404 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Patrol_Vehicle", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_404, 1, 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Camper_Van", 0)))
						{
							iLocal_172 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Camper_Van", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_172, 1, 1);
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_404, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						func_489(321.6873f, 3408.641f, 35.34377f, -105.7971f, 0);
						func_481(1, 1, 1, 1);
						iLocal_158 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_26();
			GlobalFunc_4923(&Local_95, 0, 1);
			break;
	}
}


void func_481(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x32CE7
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








void func_489(struct<3> Param0, float fParam3, int iParam4)//Position - 0x32F91
{
	int iVar0;
	
	if (!GlobalFunc_115(iLocal_404))
	{
		func_323(1);
		func_460(&iLocal_404, iLocal_403, Param0, fParam3, 10f);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_403);
	}
	if (!GlobalFunc_115(Local_431[0 /*7*/]) && GlobalFunc_115(iLocal_404))
	{
		while (!func_493(&(Local_431[0 /*7*/]), 56, iLocal_404, Local_431[0 /*7*/].f_1, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!GlobalFunc_115(Local_431[1 /*7*/]) && GlobalFunc_115(iLocal_404))
	{
		while (!func_493(&(Local_431[1 /*7*/]), 57, iLocal_404, Local_431[1 /*7*/].f_1, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_115(iLocal_404))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_404, 1, 1);
		if (iParam4 == 1)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_404, 500, "Min1_PV", 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_404);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_404, 1500f);
		}
		else
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_404);
		}
		GlobalFunc_743(iLocal_404, 0);
		VEHICLE::SET_VEHICLE_ALARM(iLocal_404, 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_404, 1);
		VEHICLE::SET_VEHICLE_ALARM(iLocal_404, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_404, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_404, 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_404, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_404, 200);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_404, 10f);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_404, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_404, 1);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (GlobalFunc_115(Local_431[iVar0 /*7*/]))
			{
				if (iVar0 == 1)
				{
					PED::SET_PED_PROP_INDEX(Local_431[iVar0 /*7*/], 0, 0, 0, false);
				}
				PED::SET_PED_PROP_INDEX(Local_431[iVar0 /*7*/], 1, 0, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_431[iVar0 /*7*/], 1);
				if (!PED::IS_PED_IN_VEHICLE(Local_431[iVar0 /*7*/], iLocal_404, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_431[iVar0 /*7*/], 0);
					PED::SET_PED_INTO_VEHICLE(Local_431[iVar0 /*7*/], iLocal_404, Local_431[iVar0 /*7*/].f_1);
				}
				func_491(Local_431[iVar0 /*7*/]);
				PED::SET_PED_CAN_BE_TARGETTED(Local_431[iVar0 /*7*/], 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_431[iVar0 /*7*/], 0);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 32, 0);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 29, 0);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 116, 1);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 118, 1);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 185, 0);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 26, 1);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 42, 1);
				PED::SET_PED_CONFIG_FLAG(Local_431[iVar0 /*7*/], 170, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_431[iVar0 /*7*/], 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_431[iVar0 /*7*/], 1);
				if (iVar0 == 0)
				{
					GlobalFunc_173(&uLocal_173, 3, Local_431[0 /*7*/], "JOE", 0, 1);
				}
				else
				{
					GlobalFunc_173(&uLocal_173, 4, Local_431[1 /*7*/], "JOSEF", 0, 1);
				}
			}
			iVar0++;
		}
		if (!GlobalFunc_188())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, -1);
			}
		}
	}
	GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
}


void func_491(int iParam0)//Position - 0x3328E
{
	if (GlobalFunc_115(uParam0))
	{
		uLocal_589 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0, uLocal_589);
		PED::SET_PED_CONFIG_FLAG(uParam0, 132, 1);
	}
}


int func_493(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x332D0
{
	int iVar0;
	
	if (!GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4946(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 0, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
				GlobalFunc_189(*uParam0, iParam1);
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



void func_496(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x333D2
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





































int func_533(int iParam0, float fParam1, int iParam2)//Position - 0x3658E
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	GlobalFunc_112();
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!GlobalFunc_109())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}









void func_542()//Position - 0x369CE
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Joe", 1, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 0, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 1, 0, 0, 0);
	}
}


void func_544()//Position - 0x36A17
{
	int iVar0;
	
	if (iLocal_156 < (10 - 1))
	{
		if (iLocal_156 > 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_593 == -1)
			{
				iLocal_593 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_593) > 2000)
			{
				func_284(10);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_431[0 /*7*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_431[0 /*7*/]))
			{
				func_284(1);
			}
			else
			{
				func_546(Local_431[0 /*7*/]);
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_431[0 /*7*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_284(8);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_431[1 /*7*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_431[1 /*7*/]))
			{
				func_284(2);
			}
			else
			{
				func_546(Local_431[1 /*7*/]);
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_431[1 /*7*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_284(9);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_404))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_404))
			{
				func_284(3);
			}
			else
			{
				if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_404, joaat("weapon_stickybomb"), -1))
				{
					func_284(11);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_404, 0))
				{
					if (iLocal_156 < 7)
					{
						if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_404, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_404, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_404, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_404, 1, 7000))
						{
							func_284(3);
						}
					}
					if (((iLocal_156 < 6 && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_404, 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_404, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_404, 0, 2))
						{
							if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_404, joaat("weapon_unarmed"), 0))
							{
							}
							else if (FIRE::IS_ENTITY_ON_FIRE(iLocal_404))
							{
								func_284(12);
							}
							else if (iLocal_527 == 0 || iLocal_527 == 1)
							{
								func_545();
							}
							else if (func_278(0, 1))
							{
								func_284(12);
							}
							WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_404);
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_404);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_550) > 1000)
					{
						iLocal_550 = MISC::GET_GAME_TIMER();
						if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 5, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 0, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_404, 1, 0))
						{
							func_284(12);
						}
					}
				}
				else
				{
					func_284(3);
				}
			}
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_447[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_447[iVar0]))
				{
					func_284(4);
				}
				else
				{
					func_546(uLocal_447[iVar0]);
					if ((!PED::IS_PED_IN_ANY_VEHICLE(uLocal_447[iVar0], 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_447[iVar0], PLAYER::PLAYER_PED_ID(), 1)) && !func_308(iVar0))
					{
						func_284(5);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_545()//Position - 0x36CEB
{
	if (func_278(0, 1) && GlobalFunc_10618(&uLocal_173, "MIN1AUD", sLocal_528[iLocal_527], 8, 0, 0, 0))
	{
		iLocal_527++;
	}
}

void func_546(int iParam0)//Position - 0x36D1F
{
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0, 0);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 0);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0, 0);
}

void func_547(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x36D3C
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
















void func_563(int iParam0)//Position - 0x37757
{
	func_610(1, 1);
	iLocal_162 = 1;
	StringCopy(&cLocal_391, "", 24);
	if (!GlobalFunc_188())
	{
		GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 0, 1);
	}
	func_606(1, 0);
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
	EVENT::REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS();
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	iLocal_527 = 0;
	switch (iParam0)
	{
		case 0:
			iLocal_157 = 1;
			break;
		
		case 1:
			func_489(321.6873f, 3408.641f, 35.34377f, -105.7971f, 0);
			GlobalFunc_10698(&iLocal_592, Local_163, 254.7861f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
			iLocal_157 = 2;
			break;
		
		case 2:
			func_489(1981.663f, 3076.814f, 46.63754f, -140.2501f, 0);
			iLocal_430 = 0;
			iLocal_157 = 3;
			break;
		
		case 3:
			func_323(4);
			func_489(1995.878f, 3058.197f, 46.6988f, 45.83372f, 1);
			func_457(Local_415, fLocal_418, 4000f, 1);
			func_456(0);
			iLocal_157 = 5;
			break;
		
		case 4:
			func_323(4);
			func_489(2673.983f, 4277.231f, 43.6559f, 25.4114f, 0);
			func_457(2668.026f, 4288.959f, 43.7695f, 28.0026f, -1f, 0);
			iLocal_157 = 6;
			break;
		
		case 5:
			func_323(8);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), 2698.205f, 4135.905f, 42.8234f, 323.4031f, 0, 1);
			}
			func_460(&iLocal_414, iLocal_413, 2699.654f, 4141.004f, 42.6652f, 312.624f, 15f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_413);
			iLocal_157 = 8;
			break;
	}
	if (!GlobalFunc_188())
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	if (iParam0 == 3)
	{
		iLocal_343 = 1;
	}
	if (((iParam0 == 1 || iParam0 == 2) || iParam0 == 3) || iParam0 == 4)
	{
		GlobalFunc_4967(iLocal_404, -1, 1);
	}
	else
	{
		GlobalFunc_4967(0, -1, 1);
	}
	if (iParam0 == 5)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GlobalFunc_79(500, 1);
	}
	if (iParam0 == 0)
	{
		func_564(1, 0, 1);
	}
	else
	{
		func_564(1, 1, 1);
	}
	iLocal_158 = 2;
}

void func_564(int iParam0, int iParam1, int iParam2)//Position - 0x379B7
{
	func_481(0, 0, iParam2, 1);
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










































void func_606(int iParam0, int iParam1)//Position - 0x3C408
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4956();
	GlobalFunc_4948(&uLocal_83, 0, 0);
	GlobalFunc_200(&uLocal_173, 2);
	GlobalFunc_200(&uLocal_173, 3);
	GlobalFunc_200(&uLocal_173, 4);
	GlobalFunc_200(&uLocal_173, 5);
	GlobalFunc_200(&uLocal_173, 6);
	GlobalFunc_200(&uLocal_173, 7);
	GlobalFunc_200(&uLocal_173, 8);
	if (GlobalFunc_115(iLocal_414))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_414);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_414))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_414);
		}
	}
	if (GlobalFunc_115(iLocal_404))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_404, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_404, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	func_35();
	func_23(iParam0, 1);
	func_608(iParam0);
	VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Min1_Van");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
		iVar0++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_413, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_403, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_413);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_403);
	INTERIOR::UNPIN_INTERIOR(iLocal_429);
	func_448(0);
	func_456(1);
	STREAMING::REMOVE_ANIM_DICT("missminuteman_1ig_1");
	AUDIO::TRIGGER_MUSIC_EVENT("MM1_STOP");
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_01_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MINUTE_01_SCENE");
	}
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_403);
	STREAMING::REMOVE_ANIM_DICT("move_m@drunk@verydrunk");
	STREAMING::REMOVE_ANIM_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REMOVE_ANIM_SET("MOVE_M@BAIL_BOND_TAZERED");
	func_614(&Local_95, 0, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	AUDIO::STOP_STREAM();
	if (iParam1 == 1)
	{
		PED::SET_CREATE_RANDOM_COPS(1);
		PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(1);
		GlobalFunc_699();
		VEHICLE::SET_RANDOM_TRAINS(1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(40f, 40f, 40f), Vector(35f, 3409f, 322f) + Vector(40f, 40f, 40f), 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(42.92f, 4141.74f, 2710.43f) - Vector(100f, 100f, 100f), Vector(42.92f, 4141.74f, 2710.43f) + Vector(100f, 100f, 100f), 1, 1);
	}
}


void func_608(int iParam0)//Position - 0x3C616
{
	if (GlobalFunc_115(iLocal_414))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_414, 0);
	}
	if (GlobalFunc_115(iLocal_404) && VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_404))
	{
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iLocal_404);
	}
	if (iParam0 == 1)
	{
		GlobalFunc_6692(&iLocal_414);
		GlobalFunc_6692(&iLocal_172);
		GlobalFunc_190(&iLocal_404);
		GlobalFunc_6692(&iLocal_592);
	}
	else
	{
		GlobalFunc_190(&iLocal_414);
		GlobalFunc_190(&iLocal_172);
		GlobalFunc_190(&iLocal_404);
		GlobalFunc_190(&iLocal_592);
	}
}


void func_610(bool bParam0, bool bParam1)//Position - 0x3C6A9
{
	if (bParam0)
	{
		func_611(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_496(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_611(bool bParam0, int iParam1, int iParam2)//Position - 0x3C6DC
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
			func_481(iParam1, iParam2, 1, 1);
		}
	}
}



void func_614(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3C7FA
{
	GlobalFunc_7246(uParam0, iParam1);
	GlobalFunc_8327(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}










void func_624()//Position - 0x3C996
{
	iLocal_159 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("MIN1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_413 = joaat("tornado4");
	iLocal_403 = joaat("pranger");
	iLocal_166[0] = joaat("s_m_m_mariachi_01");
	iLocal_166[1] = joaat("a_m_m_hillbilly_01");
	Local_431[0 /*7*/].f_1 = 0;
	Local_431[1 /*7*/].f_1 = 2;
	Local_431[0 /*7*/].f_2 = -1;
	Local_431[1 /*7*/].f_2 = 0;
	iLocal_429 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_423);
	iLocal_527 = 0;
	sLocal_528[0] = "MIN1_SHOOT1";
	sLocal_528[1] = "MIN1_SHOOT2";
	Local_372[0 /*3*/] = { 2212.979f, 3478.386f, 47.9132f };
	Local_372[1 /*3*/] = { 2268.723f, 3601.117f, 46.2687f };
	Local_372[2 /*3*/] = { 2392.132f, 3710.281f, 48.0988f };
	Local_372[3 /*3*/] = { 2632.282f, 3854.485f, 64.1631f };
	StringCopy(&cLocal_391, "", 24);
	iLocal_550 = MISC::GET_GAME_TIMER();
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_403, 3);
	GlobalFunc_696();
	PED::SET_CREATE_RANDOM_COPS(0);
	PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(0);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"));
	}
	iLocal_593 = -1;
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(42.92f, 4141.74f, 2710.43f) - Vector(100f, 100f, 100f), Vector(42.92f, 4141.74f, 2710.43f) + Vector(100f, 100f, 100f), 0, 1);
}


void func_626()//Position - 0x3CB32
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_606(0, 1);
	}
	func_614(&Local_95, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






















