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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	struct<3> Local_24 = { 0, 0, 0 } ;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<4> Local_51[10];
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	struct<61> Local_97 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_158 = 0;
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
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	struct<3> Local_327 = { 0, 0, 0 } ;
	struct<3> Local_330 = { 0, 0, 0 } ;
	float fLocal_333 = 0f;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	char* sLocal_338[4] = { NULL, NULL, NULL, NULL };
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	struct<3> Local_345 = { 0, 0, 0 } ;
	struct<3> Local_348 = { 0, 0, 0 } ;
	struct<3> Local_351 = { 0, 0, 0 } ;
	struct<3> Local_354 = { 0, 0, 0 } ;
	int iLocal_357 = 0;
	struct<3> Local_358 = { 0, 0, 0 } ;
	struct<3> Local_361 = { 0, 0, 0 } ;
	float fLocal_364 = 0f;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	char* sLocal_367[3] = { NULL, NULL, NULL };
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	char* sLocal_376 = NULL;
	char* sLocal_377 = NULL;
	char* sLocal_378 = NULL;
	char* sLocal_379 = NULL;
	char* sLocal_380 = NULL;
	char* sLocal_381 = NULL;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	bool bLocal_385 = 0;
	int iLocal_386 = 0;
	bool bLocal_387 = 0;
	int iLocal_388 = 0;
	var uLocal_389 = 0;
	bool bLocal_390 = 0;
	char* sLocal_391 = NULL;
	char* sLocal_392 = NULL;
	char* sLocal_393 = NULL;
	char* sLocal_394 = NULL;
	char* sLocal_395 = NULL;
	char* sLocal_396 = NULL;
	char* sLocal_397 = NULL;
	char* sLocal_398 = NULL;
	char* sLocal_399 = NULL;
	struct<3> Local_400 = { 0, 0, 0 } ;
	struct<3> Local_403 = { 0, 0, 0 } ;
	bool bLocal_406 = 0;
	bool bLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	struct<3> Local_411 = { 0, 0, 0 } ;
	struct<3> Local_414 = { 0, 0, 0 } ;
	struct<3> Local_417 = { 0, 0, 0 } ;
	struct<3> Local_420 = { 0, 0, 0 } ;
	struct<3> Local_423 = { 0, 0, 0 } ;
	float fLocal_426 = 0f;
	float fLocal_427 = 0f;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	struct<3> Local_431 = { 0, 0, 0 } ;
	float fLocal_434 = 0f;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	struct<3> Local_437 = { 0, 0, 0 } ;
	struct<3> Local_440 = { 0, 0, 0 } ;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	char* sLocal_445[3] = { NULL, NULL, NULL };
	char* sLocal_449[4] = { NULL, NULL, NULL, NULL };
	int iLocal_454[4] = { 0, 0, 0, 0 };
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	bool bLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	struct<3> Local_466 = { 0, 0, 0 } ;
	struct<3> Local_469 = { 0, 0, 0 } ;
	struct<3> Local_472 = { 0, 0, 0 } ;
	struct<3> Local_475 = { 0, 0, 0 } ;
	float fLocal_478 = 0f;
	char* sLocal_479 = NULL;
	char* sLocal_480 = NULL;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	struct<3> Local_483 = { 0, 0, 0 } ;
	float fLocal_486 = 0f;
	var uLocal_487 = 0;
	char* sLocal_488 = NULL;
	char* sLocal_489 = NULL;
	bool bLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
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
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	uLocal_48 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_49 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_94 = GlobalFunc_4946(50);
	iLocal_95 = joaat("pcj");
	Local_327 = { -498.844f, 230.9086f, 81.10313f };
	Local_330 = { -487.0969f, 230.1576f, 84.06667f };
	fLocal_333 = 11f;
	Local_345 = { 0f, 0f, 0f };
	Local_348 = { 0f, 0f, 0f };
	Local_351 = { 0.1181f, 0.2229f, -0.1535f };
	Local_354 = { 259.2501f, 24.08f, -51.2899f };
	iLocal_357 = -1;
	Local_358 = { -512.9788f, 225.1665f, 80.20329f };
	Local_361 = { -463.9805f, 219.8131f, 84.14708f };
	fLocal_364 = 18.5f;
	iLocal_366 = -1;
	sLocal_376 = "rcmpaparazzo_4";
	sLocal_377 = "lift_hands_in_air_loop";
	sLocal_378 = "MISSCOMMON@HANDS_UP_FLINCH";
	sLocal_379 = "reaction@back_away@f";
	sLocal_380 = "random@escape_paparazzi@standing@";
	sLocal_381 = "0";
	iLocal_384 = 1;
	bLocal_390 = true;
	sLocal_391 = "base_pap";
	sLocal_392 = "base_camman";
	sLocal_393 = "base_prod";
	sLocal_394 = "gesture_to_cam_pap";
	sLocal_395 = "gesture_to_cam_camman";
	sLocal_396 = "gesture_to_cam_prod";
	sLocal_397 = "idle_pap";
	sLocal_398 = "idle_camman";
	sLocal_399 = "idle_prod";
	Local_400 = { -493.7643f, 232.1764f, 82.05727f };
	Local_403 = { 0f, 0f, 0f };
	bLocal_406 = true;
	bLocal_407 = true;
	Local_411 = { -489.3798f, 232.0713f, 82.05263f };
	Local_414 = { -488.27f, 229.89f, 83.23f };
	Local_417 = { -493.3992f, 226.2236f, 82.1179f };
	Local_420 = { -497.99f, 224.97f, 82.67f };
	Local_423 = { -501.55f, 230.7f, 83.1f };
	fLocal_426 = 115.15f;
	fLocal_427 = -64.85f;
	fLocal_428 = 296.4216f;
	fLocal_429 = 266.5f;
	fLocal_430 = 233.87f;
	Local_431 = { -489.4534f, 233.7212f, 82.0251f };
	fLocal_434 = 294.5672f;
	Local_437 = { -494.3458f, 229.2922f, 82.11426f };
	Local_440 = { -499.68f, 232.26f, 82.1f };
	iLocal_460 = 1;
	iLocal_465 = 1;
	Local_466 = { -477.6708f, 236.9096f, 84.02463f };
	Local_469 = { -488.6829f, 232.3357f, 81.01718f };
	Local_472 = { -526.3283f, 245.7783f, 80.97247f };
	Local_475 = { -439.6462f, 235.0617f, 84.04542f };
	fLocal_478 = 6f;
	sLocal_479 = "pap4_BevRoute";
	sLocal_480 = "pap4_CamRoute";
	iLocal_481 = 20;
	iLocal_482 = 15;
	Local_483 = { -492.6779f, 227.6022f, 82.13477f };
	fLocal_486 = 15f;
	sLocal_488 = "PAPARAZZO_04_SOUNDSET";
	sLocal_489 = "CAMERA";
	iLocal_491 = -1;
	iLocal_492 = 1;
	Local_97 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_97);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10544(1);
		func_380();
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_93 = 0;
		while (!func_369(&Local_97))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_97, 0, 1);
		Global_68490 = 0;
	}
	GlobalFunc_9621(50, 1, 0);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_PRC", 0);
		SYSTEM::WAIT(0);
		func_350(Local_97.f_9, 0, 0, 0, 0, 0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
		switch (iLocal_325)
		{
			case 0:
				func_336();
				break;
			
			case 1:
				func_301();
				break;
			
			case 2:
				func_275();
				break;
			
			case 3:
				func_206();
				break;
			
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x408
{
	switch (iLocal_326)
	{
		case 0:
			RECORDING::_0x293220DA1B46CEBC(8f, 0f, 1);
			iLocal_337 = MISC::GET_GAME_TIMER() + 500;
			iLocal_326 = 1;
			break;
		
		case 1:
			func_205();
			if (GlobalFunc_4924(Local_97.f_28[1]) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[1]))
			{
				if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_FLEEING(Local_97.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 1))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[1], 128, 1);
						TASK::TASK_SMART_FLEE_PED(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					}
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(Local_97.f_28[1], 1193033728, 0);
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_337)
			{
				iLocal_326 = 2;
			}
			break;
		
		case 2:
			func_205();
			func_2();
			break;
	}
}

void func_2()//Position - 0x4EA
{
	GlobalFunc_4935();
	func_4(105, 1);
	HUD::CLEAR_PRINTS();
	if (bLocal_490)
	{
		GlobalFunc_553(806);
	}
	func_380();
}


void func_4(int iParam0, bool bParam1)//Position - 0x583
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8314();
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
	GlobalFunc_11303();
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









































































































































































































void func_205()//Position - 0x251A9
{
	if (!bLocal_490)
	{
		if (iLocal_491 == -1)
		{
			if ((!GlobalFunc_4924(Local_97.f_28[0]) || !GlobalFunc_4924(Local_97.f_28[1])) || !GlobalFunc_4924(Local_97.f_28[2]))
			{
				iLocal_491 = MISC::GET_GAME_TIMER() + 500;
			}
		}
		else if (iLocal_491 > MISC::GET_GAME_TIMER())
		{
			if ((!GlobalFunc_4924(Local_97.f_28[0]) && !GlobalFunc_4924(Local_97.f_28[1])) && !GlobalFunc_4924(Local_97.f_28[2]))
			{
				bLocal_490 = true;
			}
		}
	}
}

void func_206()//Position - 0x2523E
{
	switch (iLocal_326)
	{
		case 0:
			iLocal_326 = 1;
			break;
		
		case 1:
			func_267();
			func_266();
			func_265();
			func_244();
			func_241();
			func_228();
			func_225(&iLocal_158, "", "", &uLocal_334, iLocal_335, 0);
			func_222();
			func_219();
			func_216();
			func_213();
			func_211();
			func_205();
			break;
		
		case 2:
			func_210(0);
			GlobalFunc_146(&iLocal_158);
			GlobalFunc_5105();
			break;
		
		case 3:
			iLocal_325 = 4;
			break;
	}
}




void func_210(bool bParam0)//Position - 0x25323
{
	iLocal_324 = iLocal_325;
	if (!bParam0)
	{
		iLocal_325 = iLocal_324 + 1;
	}
	else if (iLocal_324 > 0)
	{
		iLocal_325 = (iLocal_324 - 1);
	}
	iLocal_326 = 0;
}

void func_211()//Position - 0x25355
{
	if ((GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4947(Local_97.f_35[0])) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_479))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_97.f_35[0]))
		{
			if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_97.f_35[0]) >= iLocal_481)
			{
				if (bLocal_406)
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_97.f_28[0], Local_97.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 15f, 786468, 100f, 1f, 1);
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_97.f_28[0], Local_97.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, 100f, 1f, 1);
				}
			}
		}
	}
	if ((GlobalFunc_4924(Local_97.f_28[1]) && GlobalFunc_4947(Local_97.f_35[1])) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_480))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_97.f_35[1]))
		{
			if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_97.f_35[1]) >= iLocal_482)
			{
				if (GlobalFunc_4924(Local_97.f_28[0]))
				{
					if (bLocal_406)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_97.f_28[1], Local_97.f_35[1], Local_97.f_28[0], 7, 15f, 786468, 100f, 1f, 1);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_97.f_28[1], Local_97.f_35[1], Local_97.f_28[0], 7, 40f, 786468, 100f, 1f, 1);
					}
				}
				else
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_97.f_28[1], Local_97.f_35[1], 15f, 786597);
				}
			}
		}
	}
}


void func_213()//Position - 0x254FB
{
	if ((iLocal_464 && GlobalFunc_4924(Local_97.f_28[2])) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[2]))
	{
		if (((((!PED::IS_PED_FLEEING(Local_97.f_28[2]) && !TASK::IS_PED_GETTING_UP(Local_97.f_28[2])) && !PED::IS_PED_PRONE(Local_97.f_28[2])) && !PED::IS_PED_RAGDOLL(Local_97.f_28[2])) && !GlobalFunc_7188(Local_97.f_28[2], 63541484)) && !GlobalFunc_7188(Local_97.f_28[2], 242628503))
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[2], 1) || (GlobalFunc_4947(Local_97.f_35[1]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[1], 1))) || (GlobalFunc_4947(Local_97.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[0], 1)))
			{
				func_214(1);
				if (PED::IS_PED_IN_GROUP(Local_97.f_28[2]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_97.f_28[2]);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[2], 128, 1);
				TASK::TASK_SMART_FLEE_PED(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
		}
	}
}

void func_214(bool bParam0)//Position - 0x25637
{
	if (bParam0)
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_466, Local_469, 1, 0);
	}
	else
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_466, Local_469, 0, 0);
	}
}


void func_216()//Position - 0x2569A
{
	if ((bLocal_463 && GlobalFunc_4924(Local_97.f_28[1])) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[1]))
	{
		if ((((((!PED::IS_PED_FLEEING(Local_97.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 1)) && !TASK::IS_PED_GETTING_UP(Local_97.f_28[1])) && !PED::IS_PED_PRONE(Local_97.f_28[1])) && !PED::IS_PED_RAGDOLL(Local_97.f_28[1])) && !GlobalFunc_7188(Local_97.f_28[1], 63541484)) && !GlobalFunc_7188(Local_97.f_28[1], 242628503))
		{
			func_214(1);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[1], 128, 1);
			TASK::TASK_SMART_FLEE_PED(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			GlobalFunc_4956();
			iLocal_459 = 3;
		}
	}
}



void func_219()//Position - 0x257AC
{
	if (GlobalFunc_4924(Local_97.f_28[1]) && ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[1], sLocal_376, sLocal_392, 3))
		{
			if (PED::IS_PED_BEING_STEALTH_KILLED(Local_97.f_28[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
				{
					AUDIO::STOP_SOUND(uLocal_487);
					GlobalFunc_129(&(Local_97.f_41[1]), 0);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_389))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_97.f_28[1], -4f, 1);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_389, 1f);
				}
				else
				{
					TASK::STOP_ANIM_TASK(Local_97.f_28[1], sLocal_376, sLocal_392, -1056964608);
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 1))
			{
				AUDIO::STOP_SOUND(uLocal_487);
				GlobalFunc_130(&(Local_97.f_41[1]));
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_389))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_97.f_28[1], -4f, 1);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_389, 1f);
				}
				else
				{
					TASK::STOP_ANIM_TASK(Local_97.f_28[1], sLocal_376, sLocal_392, -1056964608);
				}
			}
		}
		else if ((((((((!bLocal_463 && !GlobalFunc_7188(Local_97.f_28[1], 1785177548)) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[1])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 1)) && ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1])) && !PED::IS_PED_FLEEING(Local_97.f_28[1])) && !GlobalFunc_7188(Local_97.f_28[1], 1805844857)) && ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
		{
			TASK::TASK_PLAY_ANIM(Local_97.f_28[1], sLocal_376, sLocal_392, 1000f, -8f, -1, 57, 0, 0, 0, 0);
		}
	}
}



void func_222()//Position - 0x259D8
{
	if (!GlobalFunc_4924(Local_97.f_28[0]) || (func_223(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0]) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(Local_97.f_28[0]) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], 17))))
	{
		if (!GlobalFunc_4924(Local_97.f_28[0]))
		{
			RECORDING::_0x293220DA1B46CEBC(3f, 0f, 0);
		}
		iLocal_326 = 0;
		iLocal_325 = 4;
	}
}

float func_223(int iParam0, int iParam1)//Position - 0x25A51
{
	return GlobalFunc_114(iParam0, iParam1, 1);
}


void func_225(int iParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, int iParam5)//Position - 0x25ABE
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if ((MISC::GET_GAME_TIMER() - *uParam3) > 500)
		{
			if (HUD::GET_BLIP_COLOUR(*iParam0) == 1)
			{
				HUD::SET_BLIP_COLOUR(*iParam0, 3);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_FRIEND");
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_165(sParam1, 0, 0))
					{
						GlobalFunc_2369(sParam2, 7500, 0);
					}
				}
				*uParam3 = MISC::GET_GAME_TIMER();
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*iParam0, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_ENEMY");
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_165(sParam2, 0, 0))
					{
						GlobalFunc_2369(sParam1, 7500, 0);
					}
				}
				*uParam3 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iParam4) > 7500)
	{
		if (GlobalFunc_165(sParam1, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam1);
		}
		if (GlobalFunc_165(sParam2, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam2);
		}
	}
}



void func_228()//Position - 0x25BF0
{
	if ((!bLocal_407 && GlobalFunc_4924(Local_97.f_28[1])) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((iLocal_343 < 4 && !PED::IS_PED_FLEEING(Local_97.f_28[1])) && !GlobalFunc_111()) && MISC::GET_GAME_TIMER() > iLocal_344) && func_223(Local_97.f_28[1], PLAYER::PLAYER_PED_ID()) < 10f) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 1)) && !PED::IS_PED_FLEEING(Local_97.f_28[1]))
		{
			if (GlobalFunc_10630(&uLocal_159, "PAP4AUD", "PAP4_CAMERA", sLocal_338[iLocal_343], 7, 0, 0))
			{
				iLocal_343++;
				iLocal_344 = MISC::GET_GAME_TIMER() + 15000;
			}
		}
	}
}













int func_241()//Position - 0x26335
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_406)
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_97.f_35[0], 0f, 2f, 0f), 2f, 0, 94);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!iVar0 == Local_97.f_35[0])
		{
			if (iVar0 == PLAYER::GET_PLAYERS_LAST_VEHICLE() || (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && VEHICLE::IS_VEHICLE_STOPPED(iVar0)))
			{
				bLocal_390 = false;
				iVar1 = 1;
			}
		}
	}
	if (func_243(Local_97.f_35[0]) || iVar1)
	{
		if (PED::IS_PED_IN_VEHICLE(Local_97.f_28[0], Local_97.f_35[0], 0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_97.f_35[0]))
			{
				if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_BLOCKED", 7, 0, 0, 0))
				{
					if (((GlobalFunc_4924(Local_97.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[0])) && !PED::IS_PED_FLEEING(Local_97.f_28[0]))
					{
						TASK::TASK_COMBAT_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
						GlobalFunc_129(&(Local_97.f_41[0]), 0);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_158))
					{
						HUD::SET_BLIP_SCALE(iLocal_158, 0.7f);
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[0], 0))
		{
			if (!GlobalFunc_111())
			{
				iLocal_460 = 0;
				iLocal_459 = 3;
				if (((GlobalFunc_4924(Local_97.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[0])) && !PED::IS_PED_FLEEING(Local_97.f_28[0]))
				{
					TASK::TASK_COMBAT_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
					GlobalFunc_129(&(Local_97.f_41[0]), 0);
				}
			}
		}
		bLocal_390 = false;
		return 1;
	}
	return 0;
}


int func_243(int iParam0)//Position - 0x26540
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 5f, 0f), 1.5f, 0, 4);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!iVar0 == iParam0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_244()//Position - 0x26588
{
	if (((!bLocal_407 && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && GlobalFunc_4924(Local_97.f_28[0])) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], 5f))
	{
		if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || func_245(Local_97.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || func_245(Local_97.f_28[1], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_372)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_371 < 3)
					{
						if (GlobalFunc_10630(&uLocal_159, "PAP4AUD", "PAP4_ATTACK", sLocal_367[iLocal_371], 7, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_97.f_28[0]);
							iLocal_371++;
							iLocal_372 = MISC::GET_GAME_TIMER() + 15000;
						}
					}
					else if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_BEG", 7, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_97.f_28[0]);
						iLocal_372 = MISC::GET_GAME_TIMER() + 15000;
					}
				}
			}
		}
	}
}

int func_245(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x26693
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
		else if (func_246(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_246(int iParam0, float fParam1)//Position - 0x2674E
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
				if (func_247(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_247(int iParam0, float fParam1)//Position - 0x267C4
{
	return func_248(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_248(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x267DC
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_256(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_51[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_251();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_51[iVar4 /*4*/].f_1 = iParam0;
		Local_51[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_6501(&(Local_51[iVar4 /*4*/]), Var1, iParam1, &(Local_51[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_51[iVar4 /*4*/].f_3) < iParam4);
}



int func_251()//Position - 0x26A8E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_51)
	{
		if ((Local_51[iVar0 /*4*/] == 0 && Local_51[iVar0 /*4*/].f_1 == 0) && Local_51[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_256(int iParam0, int iParam1)//Position - 0x26BE4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_51)
	{
		if (Local_51[iVar0 /*4*/].f_1 == iParam0 && Local_51[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}









void func_265()//Position - 0x27024
{
	if (GlobalFunc_4924(Local_97.f_28[1]) && GlobalFunc_4947(Local_97.f_35[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_97.f_28[1], Local_97.f_35[1], 0))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_97.f_28[1], Local_97.f_35[1], sLocal_480, 786597, 0, 8, -1, -1082130432, 0, 1073741824);
		}
	}
}

void func_266()//Position - 0x27088
{
	if ((GlobalFunc_4947(Local_97.f_35[1]) && (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[1]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_35[1], PLAYER::PLAYER_PED_ID(), 1))) && !bLocal_387)
	{
		if ((GlobalFunc_4924(Local_97.f_28[1]) && !PED::IS_PED_FLEEING(Local_97.f_28[1])) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_VSTEAL", 8, 0, 0, 0);
			func_214(1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[1], sLocal_376, sLocal_392, 3))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_389))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_97.f_28[1], -4f, 1);
				}
				else
				{
					TASK::STOP_ANIM_TASK(Local_97.f_28[1], sLocal_376, sLocal_392, -1056964608);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
			{
				AUDIO::STOP_SOUND(uLocal_487);
				GlobalFunc_129(&(Local_97.f_41[1]), 0);
			}
			TASK::TASK_COMBAT_PED(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 0, 16);
			bLocal_387 = true;
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_97.f_35[1]);
		bLocal_390 = false;
		iLocal_459 = 3;
		GlobalFunc_4956();
		if (GlobalFunc_4924(Local_97.f_28[0]))
		{
			if ((!PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[0])) && !PED::IS_PED_FLEEING(Local_97.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
				{
					TASK::STOP_ANIM_TASK(Local_97.f_28[0], sLocal_376, sLocal_377, -1056964608);
					TASK::TASK_SMART_FLEE_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					GlobalFunc_129(&(Local_97.f_41[0]), 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
					GlobalFunc_129(&(Local_97.f_41[0]), 0);
				}
			}
		}
	}
}

void func_267()//Position - 0x2726D
{
	if (((GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[0])) && !PED::IS_PED_FLEEING(Local_97.f_28[0]))
	{
		if (GlobalFunc_4947(Local_97.f_35[0]))
		{
			if (iLocal_325 == 2)
			{
				if (iLocal_435 == 0)
				{
					if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[0], 0) || PED::IS_PED_BEING_JACKED(Local_97.f_28[0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_35[0], PLAYER::PLAYER_PED_ID(), 1)) || func_274(Local_97.f_35[0]))
					{
						iLocal_435 = 1;
						iLocal_325 = 2;
					}
				}
				else
				{
					func_270();
				}
			}
			else if (iLocal_325 == 3)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_35[0], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_268();
				}
			}
		}
		else if (!PED::IS_PED_FLEEING(Local_97.f_28[0]))
		{
			func_214(1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
			{
				TASK::STOP_ANIM_TASK(Local_97.f_28[0], sLocal_376, sLocal_377, -1056964608);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[0], 2, 0);
			iLocal_388 = 1;
			TASK::TASK_SMART_FLEE_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			GlobalFunc_129(&(Local_97.f_41[0]), 0);
			GlobalFunc_4956();
			iLocal_459 = 3;
			bLocal_390 = false;
		}
	}
}

void func_268()//Position - 0x273CB
{
	if (GlobalFunc_4924(Local_97.f_28[0]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[0], 1))
		{
			if ((((!bLocal_385 && iLocal_384) && !func_269(Local_97.f_28[0])) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[0])) && !PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[0]))
				{
					TASK::CLEAR_PED_TASKS(Local_97.f_28[0]);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[0], 2, 0);
				GlobalFunc_129(&(Local_97.f_41[0]), 0);
				iLocal_388 = 1;
				TASK::TASK_SMART_FLEE_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 400f, -1, 1, 0);
				GlobalFunc_4956();
				iLocal_459 = 3;
				iLocal_384 = 0;
				bLocal_385 = true;
			}
		}
		else if ((((!bLocal_385 && iLocal_384) && !func_269(Local_97.f_28[0])) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[0])) && !PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[0]))
			{
				TASK::CLEAR_PED_TASKS(Local_97.f_28[0]);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[0], 2, 1);
			TASK::TASK_SMART_FLEE_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 400f, -1, 1, 0);
			GlobalFunc_129(&(Local_97.f_41[0]), 0);
			GlobalFunc_4956();
			iLocal_459 = 3;
			iLocal_384 = 0;
			bLocal_385 = true;
		}
		iLocal_344 = MISC::GET_GAME_TIMER() + 15000;
	}
}

int func_269(int iParam0)//Position - 0x27556
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iParam0))
	{
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_270()//Position - 0x2758F
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	switch (iLocal_435)
	{
		case 1:
			iLocal_460 = 0;
			bLocal_390 = false;
			iLocal_459 = 3;
			bVar0 = false;
			GlobalFunc_4956();
			if ((GlobalFunc_4947(Local_97.f_35[0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_35[0], PLAYER::PLAYER_PED_ID(), 1)) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], 5f))
			{
				bVar0 = GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_CARSHOT", 7, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[0], 0) || func_274(Local_97.f_35[0]))
			{
				bVar0 = GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_STEAL", 7, 0, 0, 0);
			}
			else
			{
				bVar0 = GlobalFunc_10630(&uLocal_159, "PAP4AUD", "PAP4_STEAL", "PAP4_STEAL_1", 7, 0, 0);
			}
			if (bVar0)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
				{
					TASK::CLEAR_PED_TASKS(Local_97.f_28[0]);
					TASK::CLEAR_PED_SECONDARY_TASK(Local_97.f_28[0]);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_97.f_28[0]);
				}
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[0], 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_437, 2f, 20000, 1048576000, 0, 1193033728);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_97.f_28[0], uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				GlobalFunc_129(&(Local_97.f_41[0]), 0);
				if (GlobalFunc_4924(Local_97.f_28[1]) && !PED::IS_PED_FLEEING(Local_97.f_28[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_97.f_28[1], 0, 0);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[1], Local_97.f_28[0], -1);
					}
				}
				if ((((GlobalFunc_4924(Local_97.f_28[2]) && !PED::IS_PED_FLEEING(Local_97.f_28[2])) && !iLocal_386) && !iLocal_464) && !PED::IS_PED_RAGDOLL(Local_97.f_28[2]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_35[0], PLAYER::PLAYER_PED_ID(), 1))
					{
						TASK::TASK_SMART_FLEE_PED(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[2], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_97.f_28[2], 0, 4416);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), -1);
					}
				}
				iLocal_436 = MISC::GET_GAME_TIMER() + 3000;
				if (HUD::DOES_BLIP_EXIST(iLocal_158))
				{
					HUD::SET_BLIP_SCALE(iLocal_158, 0.7f);
				}
				iLocal_435 = 2;
			}
			break;
		
		case 2:
			if (func_223(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0]) > 20f)
			{
				iLocal_435 = 4;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_436)
			{
				if ((GlobalFunc_4924(Local_97.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0)) && iLocal_384)
				{
					if (iLocal_443)
					{
						TASK::TASK_COMBAT_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
						GlobalFunc_129(&(Local_97.f_41[0]), 0);
						iLocal_435 = 3;
					}
					else if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_RETAL", 7, 0, 0, 0))
					{
						iLocal_443 = 1;
						TASK::TASK_COMBAT_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
						GlobalFunc_129(&(Local_97.f_41[0]), 0);
						iLocal_435 = 3;
					}
					if ((((GlobalFunc_4924(Local_97.f_28[2]) && !PED::IS_PED_FLEEING(Local_97.f_28[2])) && !iLocal_386) && !iLocal_464) && !PED::IS_PED_RAGDOLL(Local_97.f_28[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_440, 2f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_97.f_28[2], uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_158))
					{
						HUD::SET_BLIP_SCALE(iLocal_158, 0.7f);
					}
				}
				else if (iLocal_384 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[0], 1))
				{
					if (!PED::IS_PED_FLEEING(Local_97.f_28[0]))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[0], 2, 0);
						iLocal_388 = 1;
						TASK::TASK_SMART_FLEE_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						GlobalFunc_129(&(Local_97.f_41[0]), 0);
						GlobalFunc_4956();
						iLocal_459 = 3;
						iLocal_435 = 5;
					}
				}
			}
			func_273();
			break;
		
		case 3:
			if (func_223(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0]) > 20f)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_437, 1f, 20000, 1048576000, 0, 1193033728);
				if (GlobalFunc_4924(Local_97.f_28[1]))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_97.f_28[1], -1);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_97.f_28[0], uVar3);
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				if (HUD::DOES_BLIP_EXIST(iLocal_158))
				{
					HUD::SET_BLIP_SCALE(iLocal_158, 0.7f);
				}
				iLocal_435 = 4;
			}
			func_273();
			break;
		
		case 4:
			func_271();
			func_273();
			break;
	}
}

void func_271()//Position - 0x27A85
{
	if (func_223(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0]) < 10f)
	{
		if (iLocal_444 || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[0], 0))
		{
			func_272();
		}
		else if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_RETURN", 7, 0, 0, 0))
		{
			iLocal_444 = 1;
			func_272();
		}
	}
}

void func_272()//Position - 0x27AE6
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), -1);
	iLocal_436 = MISC::GET_GAME_TIMER() + 3000;
	if (HUD::DOES_BLIP_EXIST(iLocal_158))
	{
		HUD::SET_BLIP_SCALE(iLocal_158, 0.7f);
	}
	iLocal_435 = 2;
}

void func_273()//Position - 0x27B20
{
	float fVar0;
	
	if (((GlobalFunc_4924(Local_97.f_28[1]) && GlobalFunc_4924(Local_97.f_28[0])) && !PED::IS_PED_FLEEING(Local_97.f_28[1])) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0))
	{
		fVar0 = func_223(Local_97.f_28[1], Local_97.f_28[0]);
		if (fVar0 > 20f)
		{
			if (!GlobalFunc_7188(Local_97.f_28[1], -2015108952))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(Local_97.f_28[1], Local_97.f_28[0], 20000, 0.5f, 0f, 2f, 2);
			}
		}
		else if (fVar0 < 10f)
		{
			if (!GlobalFunc_7188(Local_97.f_28[1], -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[1], Local_97.f_28[0], -1);
			}
		}
	}
}

int func_274(var uParam0)//Position - 0x27BEE
{
	int iVar0;
	int iVar1;
	
	if ((GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && GlobalFunc_4947(uParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (GlobalFunc_4947(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, uParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_275()//Position - 0x27C5A
{
	switch (iLocal_326)
	{
		case 0:
			if (GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4924(Local_97.f_28[1]))
			{
				if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_TV_TALK", 7, 0, 0, 0))
				{
					iLocal_158 = GlobalFunc_5739(Local_97.f_28[0], 1, 0, 5);
					func_299(&iLocal_158, "", "", &uLocal_334, &iLocal_335, 1, 0);
					PED::SET_PED_DIES_WHEN_INJURED(Local_97.f_28[0], 1);
					iLocal_371 = 0;
					iLocal_343 = 0;
					bLocal_406 = true;
					bLocal_407 = true;
					iLocal_384 = 1;
					iLocal_459 = 0;
					iLocal_460 = 1;
					iLocal_461 = 0;
					iLocal_462 = 0;
					iLocal_372 = 0;
					iLocal_336 = 0;
					iLocal_375 = 0;
					iLocal_465 = 1;
					iLocal_388 = 0;
					iLocal_326 = 1;
				}
			}
			break;
		
		case 1:
			func_297(0, 0);
			func_296();
			func_265();
			func_267();
			func_294();
			func_241();
			func_266();
			func_285();
			func_284();
			func_244();
			func_228();
			func_283(0);
			func_280();
			func_225(&iLocal_158, "", "", &uLocal_334, iLocal_335, 0);
			func_222();
			func_219();
			func_279();
			func_276();
			func_216();
			func_213();
			func_205();
			break;
		
		case 2:
			func_210(0);
			GlobalFunc_146(&iLocal_158);
			GlobalFunc_5105();
			break;
		
		case 3:
			iLocal_325 = 4;
			break;
	}
}

void func_276()//Position - 0x27DAB
{
	if ((((GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4924(Local_97.f_28[1])) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && !bLocal_387) && ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
	{
		if (PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_408)
			{
				func_277();
				iLocal_408 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_409)
			{
				if (iLocal_410)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[1], Local_97.f_28[0], -1);
					iLocal_410 = 0;
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), -1);
					iLocal_410 = 1;
				}
				iLocal_409 = (MISC::GET_GAME_TIMER() + 4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 20) * 100);
			}
		}
	}
}

void func_277()//Position - 0x27E88
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	var uVar11;
	
	if ((((!bLocal_463 && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && GlobalFunc_4924(Local_97.f_28[1])) && GlobalFunc_4924(Local_97.f_28[0])) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_97.f_28[0], 3f, 0f, 0f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_97.f_28[0], -3f, 0f, 0f) };
		fVar6 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var0, 1);
		fVar7 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var3, 1);
		if (fVar6 < fVar7)
		{
			Var8 = { Var3 };
		}
		else
		{
			Var8 = { Var0 };
		}
		TASK::OPEN_SEQUENCE_TASK(&uVar11);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var8, 3f, 20000, 1048576000, 0, 1193033728);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_97.f_28[0], 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar11);
		TASK::TASK_PERFORM_SEQUENCE(Local_97.f_28[1], uVar11);
		TASK::CLEAR_SEQUENCE_TASK(&uVar11);
	}
}


void func_279()//Position - 0x27FB4
{
	if ((iLocal_384 == 0 && GlobalFunc_4924(Local_97.f_28[0])) && iLocal_435 == 0)
	{
		if ((((((!TASK::IS_PED_GETTING_UP(Local_97.f_28[0]) && !PED::IS_PED_PRONE(Local_97.f_28[0])) && !PED::IS_PED_RAGDOLL(Local_97.f_28[0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[0], 1)) && !GlobalFunc_7188(Local_97.f_28[0], -1794415470)) && !PED::IS_PED_FLEEING(Local_97.f_28[0])) || PED::IS_PED_BEING_STEALTH_KILLED(Local_97.f_28[0]))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_376))
			{
				TASK::TASK_PLAY_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 4f, -8f, -1, 57, 0, 0, 0, 0);
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
		{
			TASK::STOP_ANIM_TASK(Local_97.f_28[0], sLocal_376, sLocal_377, -1056964608);
		}
	}
}

void func_280()//Position - 0x280C8
{
	int iVar0;
	int iVar1;
	
	if (((iLocal_459 != 3 && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && GlobalFunc_4924(Local_97.f_28[0])) && GlobalFunc_4924(Local_97.f_28[1]))
	{
		switch (iLocal_459)
		{
			case 0:
				if (iLocal_461 < 3)
				{
					if (func_282() && func_281())
					{
						iLocal_460 = 0;
						GlobalFunc_4956();
						iLocal_459 = 1;
					}
				}
				else
				{
					iLocal_460 = 1;
					iLocal_459 = 3;
				}
				break;
			
			case 1:
				if (iLocal_462 < 4)
				{
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						iVar0 = 1;
					}
					else
					{
						iVar0 = 0;
					}
					if (GlobalFunc_10630(&uLocal_159, "PAP4AUD", "PAP4_BLOCK", sLocal_449[iLocal_462], 7, iVar0, 0))
					{
						iLocal_462++;
						iLocal_459 = 2;
					}
				}
				else
				{
					iLocal_460 = 1;
					iLocal_459 = 3;
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					if (func_282())
					{
						iLocal_460 = 0;
						iLocal_459 = 1;
					}
					else if (iLocal_461 < 3)
					{
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							iVar1 = 1;
						}
						else
						{
							iVar1 = 0;
						}
						if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", sLocal_445[iLocal_461], 7, iVar1, 0, 0))
						{
							iLocal_460 = 1;
							iLocal_461++;
							iLocal_459 = 0;
						}
					}
					else
					{
						iLocal_460 = 1;
						iLocal_459 = 3;
					}
				}
				break;
			}
	}
}

int func_281()//Position - 0x28207
{
	if (GlobalFunc_111() && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() < iLocal_454[iLocal_461])
	{
		return 1;
	}
	return 0;
}

int func_282()//Position - 0x2822D
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_97.f_28[0], 1) + Vector(1f, 0f, 0f) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(Local_97.f_28[1], 1) - Vector(1f, 0f, 0f) };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 0.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_283(bool bParam0)//Position - 0x2827D
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	float fVar4;
	
	if (bLocal_390)
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_389))
		{
			uLocal_389 = PED::CREATE_SYNCHRONIZED_SCENE(Local_400, Local_403, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_389, 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_389, 0);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					sVar1 = sLocal_391;
					sVar2 = sLocal_392;
					sVar3 = sLocal_393;
					break;
				
				case 1:
					sVar1 = sLocal_394;
					sVar2 = sLocal_395;
					sVar3 = sLocal_396;
					break;
				
				default:
					sVar1 = sLocal_397;
					sVar2 = sLocal_398;
					sVar3 = sLocal_399;
					break;
			}
			if (bParam0)
			{
				fVar4 = 1000f;
			}
			else
			{
				fVar4 = 4f;
			}
			if (GlobalFunc_4924(Local_97.f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_97.f_28[0], uLocal_389, sLocal_376, sVar1, fVar4, -4f, 1, 16, 1148846080, 0);
			}
			if (GlobalFunc_4924(Local_97.f_28[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_97.f_28[1], uLocal_389, sLocal_376, sVar2, 1000f, -2f, 1, 16, 1148846080, 0);
			}
			if (GlobalFunc_4924(Local_97.f_28[2]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_97.f_28[2], uLocal_389, sLocal_376, sVar3, fVar4, -4f, 1, 16, 1148846080, 0);
			}
		}
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_389))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_97.f_28[0], -4f, 1);
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_97.f_28[1], -2f, 1);
		if ((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[1], sLocal_376, sLocal_392, 3) && !PED::IS_PED_FLEEING(Local_97.f_28[1])) && !GlobalFunc_7188(Local_97.f_28[1], 1805844857)) && !bLocal_463) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[1])) && ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
		{
			TASK::TASK_PLAY_ANIM(Local_97.f_28[1], sLocal_376, sLocal_392, 1000f, -8f, -1, 57, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_97.f_28[1], 0, 0);
		}
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_97.f_28[2], -4f, 1);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_389, 1f);
	}
}

void func_284()//Position - 0x284A4
{
	if (GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_373)
			{
				if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_FIST", 7, 0, 0, 0))
				{
					iLocal_373 = MISC::GET_GAME_TIMER() + 5000;
				}
			}
		}
	}
}

void func_285()//Position - 0x284FF
{
	struct<6> Var0;
	char* sVar6;
	struct<6> Var7;
	char* sVar13;
	struct<6> Var14;
	char* sVar20;
	struct<6> Var21;
	char* sVar27;
	struct<6> Var28;
	char* sVar34;
	struct<6> Var35;
	char* sVar41;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (bLocal_406)
		{
			if ((((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && func_293()) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_483, fLocal_486)) || !GlobalFunc_4924(Local_97.f_28[1])) || !GlobalFunc_4924(Local_97.f_28[2]))
			{
				iLocal_460 = 1;
				iLocal_459 = 3;
				iLocal_435 = 5;
				func_268();
				bLocal_390 = false;
				bLocal_406 = false;
				func_277();
				if (GlobalFunc_111())
				{
					Var0 = { GlobalFunc_560() };
					sVar6 = GlobalFunc_217(&Var0);
					if (!MISC::ARE_STRINGS_EQUAL(sVar6, "PAP4_THREAT"))
					{
						GlobalFunc_4956();
					}
				}
				GlobalFunc_129(&(Local_97.f_41[0]), 0);
			}
			else if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 1)) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed")) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("object"))
			{
				func_268();
				iLocal_460 = 1;
				iLocal_459 = 3;
				iLocal_435 = 5;
				bLocal_390 = false;
				bLocal_406 = false;
				bLocal_407 = false;
				func_277();
				if (GlobalFunc_111())
				{
					Var7 = { GlobalFunc_560() };
					sVar13 = GlobalFunc_217(&Var7);
					if (!MISC::ARE_STRINGS_EQUAL(sVar13, "PAP4_THREAT"))
					{
						GlobalFunc_4956();
					}
				}
			}
			else if ((((func_246(Local_97.f_28[0], 1126825984) && func_293()) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed")) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("object")) || PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_7188(Local_97.f_28[0], 780511057))
				{
					iLocal_460 = 1;
					iLocal_459 = 3;
					iLocal_435 = 5;
					bLocal_390 = false;
					bLocal_406 = false;
					func_268();
					func_277();
					if (GlobalFunc_111())
					{
						Var14 = { GlobalFunc_560() };
						sVar20 = GlobalFunc_217(&Var14);
						if (!MISC::ARE_STRINGS_EQUAL(sVar20, "PAP4_THREAT"))
						{
							GlobalFunc_4956();
						}
					}
					GlobalFunc_129(&(Local_97.f_41[0]), 0);
				}
				else
				{
					iLocal_460 = 1;
					iLocal_459 = 3;
					iLocal_435 = 5;
					bLocal_390 = false;
					bLocal_406 = false;
					func_289();
					func_277();
					if (GlobalFunc_111())
					{
						Var21 = { GlobalFunc_560() };
						sVar27 = GlobalFunc_217(&Var21);
						if (!MISC::ARE_STRINGS_EQUAL(sVar27, "PAP4_THREAT"))
						{
							GlobalFunc_4956();
						}
					}
					GlobalFunc_129(&(Local_97.f_41[0]), 0);
				}
			}
			else if (((((func_246(Local_97.f_28[0], 1126825984) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 1)) || iLocal_386) && (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("object")))
			{
				if (GlobalFunc_4924(Local_97.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0))
				{
					TASK::TASK_COMBAT_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
					GlobalFunc_129(&(Local_97.f_41[0]), 0);
					bLocal_390 = false;
					iLocal_373 = MISC::GET_GAME_TIMER();
					GlobalFunc_4956();
					GlobalFunc_129(&(Local_97.f_41[0]), 0);
				}
			}
		}
		else
		{
			if (bLocal_407)
			{
				GlobalFunc_4956();
				if (GlobalFunc_4924(Local_97.f_28[0]) && !func_269(Local_97.f_28[0]))
				{
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_THREAT", 7, 1, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 2f, 0);
							bLocal_407 = false;
						}
					}
					else if (GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_THREAT", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 2f, 0);
						bLocal_407 = false;
					}
				}
			}
			else if ((GlobalFunc_4924(Local_97.f_28[0]) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[0])) && (((((((ENTITY::GET_ENTITY_HEALTH(Local_97.f_28[0]) < 150 || (GlobalFunc_8324(Local_97.f_28[0], 0, 0, 0, 0) && func_293())) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 1) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_stungun"))) || !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], 20f)) || (GlobalFunc_4924(Local_97.f_28[1]) && PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0))) || (GlobalFunc_4924(Local_97.f_28[1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 1))) || (GlobalFunc_4924(Local_97.f_28[2]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 1))) || iLocal_383))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
				{
					iLocal_383 = 1;
				}
				switch (iLocal_382)
				{
					case 0:
						if (iLocal_383 == 0)
						{
							iLocal_382++;
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_378, "flinch_additive_a", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_97.f_28[0], sLocal_378, "flinch_additive_a", 4f, -8f, -1, 272, 0, 0, 0, 0);
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_97.f_28[0], sLocal_378, "flinch_additive_a") > 0.7f)
						{
							TASK::STOP_ANIM_TASK(Local_97.f_28[0], sLocal_378, "flinch_additive_a", -1056964608);
							iLocal_382++;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[0], 0))
						{
							GlobalFunc_129(&(Local_97.f_41[0]), 0);
							iLocal_384 = 0;
							if (!PED::IS_PED_FLEEING(Local_97.f_28[0]))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(Local_97.f_28[0]);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
								{
									TASK::STOP_ANIM_TASK(Local_97.f_28[0], sLocal_376, sLocal_377, -1056964608);
								}
								GlobalFunc_129(&(Local_97.f_41[0]), 0);
								func_214(1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[0], 2, 0);
								iLocal_388 = 1;
								TASK::TASK_SMART_FLEE_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
								GlobalFunc_4956();
								iLocal_459 = 3;
								iLocal_435 = 5;
							}
						}
						iLocal_382++;
						break;
					}
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_97.f_28[0]);
		}
		if (GlobalFunc_4924(Local_97.f_28[1]))
		{
			if (((((((((GlobalFunc_8324(Local_97.f_28[1], 0, 0, 0, 0) && func_293()) || ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 1) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed")) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("object"))) || ((func_246(Local_97.f_28[1], 1126825984) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed")) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("object"))) || !GlobalFunc_4947(Local_97.f_35[1])) || PED::IS_PED_RAGDOLL(Local_97.f_28[1])) || func_287(Local_97.f_28[1])) || func_269(Local_97.f_28[0])) || func_269(Local_97.f_28[2])) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_483, fLocal_486))
			{
				if (!PED::IS_PED_FLEEING(Local_97.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 0))
				{
					if (GlobalFunc_111())
					{
						Var28 = { GlobalFunc_560() };
						sVar34 = GlobalFunc_217(&Var28);
						if (!MISC::ARE_STRINGS_EQUAL(sVar34, "PAP4_THREAT") && !MISC::ARE_STRINGS_EQUAL(sVar34, "PAP4_ATTACK"))
						{
							GlobalFunc_4956();
						}
					}
					GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_CAMFLEE", 7, 0, 0, 0);
					func_286();
					iLocal_386 = 1;
					func_268();
				}
			}
		}
		if (GlobalFunc_4924(Local_97.f_28[2]) && !iLocal_464)
		{
			if (((((((((((func_245(Local_97.f_28[2], 1, 1116471296, 1126825984, 0, 0, 0, 0) && func_293()) || (func_245(Local_97.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0) && func_293())) || (func_245(Local_97.f_28[1], 1, 1116471296, 1126825984, 0, 0, 0, 0) && func_293())) || func_287(Local_97.f_28[2])) || func_287(Local_97.f_28[0])) || func_287(Local_97.f_28[1])) || PED::IS_PED_RAGDOLL(Local_97.f_28[2])) || !GlobalFunc_4947(Local_97.f_35[1])) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_483, fLocal_486)) || func_269(Local_97.f_28[0])) || func_269(Local_97.f_28[1]))
			{
				if (!PED::IS_PED_FLEEING(Local_97.f_28[2]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[2], 0))
				{
					if (GlobalFunc_111())
					{
						Var35 = { GlobalFunc_560() };
						sVar41 = GlobalFunc_217(&Var35);
						if (!MISC::ARE_STRINGS_EQUAL(sVar41, "PAP4_THREAT") && !MISC::ARE_STRINGS_EQUAL(sVar41, "PAP4_ATTACK"))
						{
							GlobalFunc_4956();
						}
					}
					func_214(1);
					iLocal_464 = 1;
					bLocal_390 = false;
					iLocal_386 = 1;
					if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
					{
						func_268();
					}
					iLocal_459 = 3;
				}
			}
		}
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			func_268();
			func_286();
		}
	}
}

void func_286()//Position - 0x28E7B
{
	if (GlobalFunc_4924(Local_97.f_28[1]))
	{
		if (PED::IS_PED_IN_GROUP(Local_97.f_28[1]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_97.f_28[1]);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[1], sLocal_376, sLocal_392, 3))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_389))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_97.f_28[1], -4f, 1);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_389, 1f);
			}
			else
			{
				TASK::STOP_ANIM_TASK(Local_97.f_28[1], sLocal_376, sLocal_392, -1056964608);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
		{
			AUDIO::STOP_SOUND(uLocal_487);
			GlobalFunc_129(&(Local_97.f_41[1]), 0);
		}
		bLocal_463 = true;
		bLocal_390 = false;
		iLocal_459 = 3;
	}
}

int func_287(int iParam0)//Position - 0x28F29
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && !GlobalFunc_644(iVar0))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}


void func_289()//Position - 0x28FB6
{
	if (GlobalFunc_4924(Local_97.f_28[0]))
	{
		if ((((((!PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[0], 1) && iLocal_384) && !bLocal_385) && !func_269(Local_97.f_28[0])) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[0])) && !PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())) && iLocal_435 == 0)
		{
			if (PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[0]))
			{
				TASK::CLEAR_PED_TASKS(Local_97.f_28[0]);
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_376))
			{
				TASK::TASK_PLAY_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 4f, -8f, -1, 57, 0, 0, 0, 0);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), -1);
			iLocal_384 = 0;
		}
	}
	iLocal_344 = MISC::GET_GAME_TIMER() + 15000;
}




int func_293()//Position - 0x290DA
{
	if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_stickybomb"))
	{
		if ((func_247(Local_97.f_28[0], 1126825984) || func_247(Local_97.f_28[1], 1126825984)) || func_247(Local_97.f_28[2], 1126825984))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_294()//Position - 0x2913D
{
	if ((((((bLocal_406 && iLocal_384) && iLocal_460) && GlobalFunc_4947(Local_97.f_35[0])) && GlobalFunc_4924(Local_97.f_28[0])) && !GlobalFunc_111()) && GlobalFunc_7188(Local_97.f_28[0], -1794415470))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_336)
		{
			func_295();
			iLocal_336 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
}

int func_295()//Position - 0x291B3
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_97.f_28[0], Local_97.f_35[0], -1, 0, 0);
	bVar1 = VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_97.f_28[0], Local_97.f_35[0], 0, 0, 0);
	if (!bVar0 && !bVar1)
	{
		iLocal_460 = 0;
		iLocal_459 = 3;
		bLocal_390 = false;
		if (((GlobalFunc_4924(Local_97.f_28[0]) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[0])) && !PED::IS_PED_FLEEING(Local_97.f_28[0]))
		{
			TASK::TASK_COMBAT_PED(Local_97.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
			GlobalFunc_129(&(Local_97.f_41[0]), 0);
		}
		if (((GlobalFunc_4924(Local_97.f_28[1]) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[1])) && !PED::IS_PED_FLEEING(Local_97.f_28[1]))
		{
			TASK::TASK_COMBAT_PED(Local_97.f_28[1], PLAYER::PLAYER_PED_ID(), 0, 16);
			GlobalFunc_129(&(Local_97.f_41[1]), 0);
		}
		if (((GlobalFunc_4924(Local_97.f_28[2]) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[2], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_97.f_28[2])) && !PED::IS_PED_FLEEING(Local_97.f_28[2]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
		}
		return 1;
	}
	return 0;
}

void func_296()//Position - 0x29321
{
	if (GlobalFunc_4924(Local_97.f_28[0]))
	{
		if (GlobalFunc_4947(Local_97.f_35[0]) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_479))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Local_97.f_28[0], Local_97.f_35[0]) && !GlobalFunc_7188(Local_97.f_28[0], -1273030092))
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_472, Local_475, fLocal_478, 0, 1, 1);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_97.f_28[0], Local_97.f_35[0], sLocal_479, 786597, 0, 8, -1, -1082130432, 0, 1073741824);
				if (HUD::DOES_BLIP_EXIST(iLocal_158))
				{
					HUD::SET_BLIP_SCALE(iLocal_158, 1f);
				}
				func_210(0);
			}
			else if (PED::IS_PED_IN_VEHICLE(Local_97.f_28[0], Local_97.f_35[0], 1))
			{
				GlobalFunc_130(&(Local_97.f_41[0]));
			}
		}
		if (GlobalFunc_4947(Local_97.f_35[1]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Local_97.f_28[0], Local_97.f_35[1]))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_158))
				{
					HUD::SET_BLIP_SCALE(iLocal_158, 1f);
				}
				func_210(0);
			}
		}
	}
}

void func_297(bool bParam0, bool bParam1)//Position - 0x29429
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if ((((((GlobalFunc_4947(Local_97.f_35[0]) && GlobalFunc_4924(Local_97.f_28[0])) && bLocal_406) && iLocal_384) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[0], 0)) && !PED::IS_PED_FLEEING(Local_97.f_28[0])) && !iLocal_388)
	{
		if (iLocal_375 && MISC::GET_GAME_TIMER() > iLocal_374)
		{
			if (iLocal_435 == 0)
			{
				func_298();
			}
		}
		else if ((bParam0 || !GlobalFunc_111()) || !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], 30f))
		{
			if (((((iLocal_460 && !GlobalFunc_7188(Local_97.f_28[0], -1794415470)) && !GlobalFunc_7188(Local_97.f_28[0], 355471868)) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_97.f_35[0], -1)) && !PED::IS_PED_FLEEING(Local_97.f_28[0])) && !iLocal_388)
			{
				if (!func_295() && !func_241())
				{
					bVar0 = false;
					if (!bParam0)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
						iVar1 = 0;
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], 30f))
						{
							iVar1 = 1;
						}
						if (iLocal_462 > 1)
						{
							bVar0 = GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_LEAVE2", 7, iVar1, 0, 0);
						}
						else
						{
							bVar0 = GlobalFunc_10618(&uLocal_159, "PAP4AUD", "PAP4_LEAVE", 7, iVar1, 0, 0);
						}
					}
					if (bVar0 || bParam0)
					{
						func_214(1);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_97.f_28[0], sLocal_380);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_97.f_28[0], 0, 0);
						if (bParam1)
						{
							TASK::TASK_ENTER_VEHICLE(Local_97.f_28[0], Local_97.f_35[0], 20000, -1, 2f, 1, 0);
						}
						else
						{
							TASK::TASK_ENTER_VEHICLE(Local_97.f_28[0], Local_97.f_35[0], 20000, -1, 1f, 1, 0);
						}
						if (GlobalFunc_4924(Local_97.f_28[1]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_97.f_28[1], Local_97.f_28[0], -1);
						}
						if ((((GlobalFunc_4924(Local_97.f_28[2]) && !PED::IS_PED_FLEEING(Local_97.f_28[2])) && !iLocal_386) && !iLocal_464) && !PED::IS_PED_RAGDOLL(Local_97.f_28[2]))
						{
							if (bParam0 || (GlobalFunc_4947(Local_97.f_35[1]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_35[1], 1)))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_35[0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_97.f_35[0], PLAYER::PLAYER_PED_ID(), 1))
								{
									TASK::TASK_SMART_FLEE_PED(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
								}
								else if (GlobalFunc_4947(Local_97.f_35[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
									TASK::TASK_ENTER_VEHICLE(0, Local_97.f_35[0], 20000, 0, 2f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar2);
									TASK::TASK_PERFORM_SEQUENCE(Local_97.f_28[2], uVar2);
									TASK::CLEAR_SEQUENCE_TASK(&uVar2);
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(Local_97.f_28[2], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
								}
							}
							else if (GlobalFunc_4947(Local_97.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_97.f_35[1], 0))
							{
								TASK::TASK_ENTER_VEHICLE(Local_97.f_28[2], Local_97.f_35[1], 20000, 0, 1f, 1, 0);
							}
						}
						iLocal_374 = MISC::GET_GAME_TIMER() + 1500;
						iLocal_375 = 1;
						iLocal_459 = 3;
						bLocal_390 = false;
					}
				}
			}
		}
	}
}

void func_298()//Position - 0x29799
{
	var uVar0;
	
	if (GlobalFunc_4924(Local_97.f_28[1]))
	{
		if ((((!GlobalFunc_7188(Local_97.f_28[1], 242628503) && !PED::IS_PED_FLEEING(Local_97.f_28[1])) && !PED::IS_PED_IN_COMBAT(Local_97.f_28[1], 0)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_480)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			if (GlobalFunc_4924(Local_97.f_28[0]))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_97.f_28[0], 6000);
			}
			if (GlobalFunc_4947(Local_97.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_97.f_35[1], -1))
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_472, Local_475, fLocal_478, 0, 1, 1);
				TASK::TASK_ENTER_VEHICLE(0, Local_97.f_35[1], 20000, -1, 2f, 1, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_97.f_28[1], uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
}

void func_299(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6)//Position - 0x29886
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (bParam5)
		{
			HUD::SET_BLIP_COLOUR(*uParam0, 1);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_ENEMY");
			if (iParam6 && !GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_165(sParam2, 0, 0))
				{
					GlobalFunc_2369(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			HUD::SET_BLIP_COLOUR(*uParam0, 3);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_FRIEND");
			if (iParam6 && !GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_165(sParam1, 0, 0))
				{
					GlobalFunc_2369(sParam2, 7500, 0);
				}
			}
		}
		*uParam3 = MISC::GET_GAME_TIMER();
		*uParam4 = MISC::GET_GAME_TIMER();
	}
}


void func_301()//Position - 0x29984
{
	switch (iLocal_326)
	{
		case 0:
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
			if (MISC::GET_GAME_TIMER() > iLocal_357)
			{
				GlobalFunc_9623("pap_4_rcm", 0);
				if (func_333(1, 1093140480, 0))
				{
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_358, Local_361, fLocal_364, 0, 1, 0))
						{
							iLocal_365 = 1;
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
					}
					if (GlobalFunc_4924(Local_97.f_28[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_97.f_28[0], "Beverley", 0, 0, 0);
					}
					if (GlobalFunc_4924(Local_97.f_28[1]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_97.f_28[1], "film_guy", 0, 0, 0);
					}
					if (GlobalFunc_4924(Local_97.f_28[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_97.f_28[2], "makeup_artist", 0, 0, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[0]))
					{
						ENTITY::DETACH_ENTITY(Local_97.f_41[0], 0, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_97.f_41[0], "Beverlys_camera", 0, 0, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
					{
						ENTITY::DETACH_ENTITY(Local_97.f_41[1], 0, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_97.f_41[1], "Video_camera_forMan", 0, 0, 0);
					}
					GlobalFunc_8954();
					RECORDING::_0x48621C9FCA3EBD28(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					if (iLocal_365)
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_366 = -1;
					}
					GlobalFunc_79(500, 0);
					if (GlobalFunc_4947(Local_97.f_35[0]))
					{
						GlobalFunc_4965(Local_97.f_35[0], Local_420, fLocal_429, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_97.f_35[0]);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_97.f_35[0], 1);
					}
					if (GlobalFunc_4947(Local_97.f_35[1]))
					{
						GlobalFunc_4965(Local_97.f_35[1], Local_423, fLocal_430, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_97.f_35[1]);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_97.f_35[1], 1);
					}
					GlobalFunc_9807(Local_327, Local_330, fLocal_333, -500.71f, 241.83f, 82.46f, 262.59f, 1, 1, 1, 0, 0);
					func_319(-484.2f, 229.68f, 82.21f, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
					MISC::CLEAR_AREA_OF_PEDS(-483.5037f, 231.0559f, 82.1456f, 15f, 0);
					MISC::CLEAR_AREA_OF_OBJECTS(-483.5037f, 231.0559f, 82.1456f, 15f, 0);
					iLocal_492 = 1;
					iLocal_326 = 1;
				}
			}
			else
			{
				GlobalFunc_8320();
			}
			break;
		
		case 1:
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				}
				else if (iLocal_492)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					iLocal_492 = 0;
				}
			}
			if ((((GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4924(Local_97.f_28[1])) && GlobalFunc_4924(Local_97.f_28[2])) && ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[0])) && ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
			{
				if ((((CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverley", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("film_guy", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("makeup_artist", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverlys_camera", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Video_camera_forMan", 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_97.f_41[0], Local_97.f_28[0], PED::GET_PED_BONE_INDEX(Local_97.f_28[0], 28422), Local_345, Local_348, 0, 0, 0, 0, 2, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_97.f_41[1], Local_97.f_28[1], PED::GET_PED_BONE_INDEX(Local_97.f_28[1], 57005), Local_351, Local_354, 0, 0, 0, 0, 2, 1);
					func_310();
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				if (iLocal_365 && MISC::GET_GAME_TIMER() > iLocal_366)
				{
					if (iLocal_366 < 0)
					{
						iLocal_366 = MISC::GET_GAME_TIMER() + 4000;
					}
					else
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
						iLocal_365 = 0;
					}
				}
			}
			else
			{
				iLocal_326 = 2;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				iLocal_326 = 2;
			}
			break;
		
		case 2:
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			if ((GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4924(Local_97.f_28[1])) && GlobalFunc_4924(Local_97.f_28[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_97.f_28[0], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_97.f_28[1], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_97.f_28[2], 1);
				PED::SET_PED_CONFIG_FLAG(Local_97.f_28[0], 177, 1);
				PED::SET_PED_CONFIG_FLAG(Local_97.f_28[0], 214, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_97.f_28[0], 1);
				PED::SET_PED_LOD_MULTIPLIER(Local_97.f_28[0], 1.5f);
				PED::SET_PED_LOD_MULTIPLIER(Local_97.f_28[1], 1.5f);
				PED::SET_PED_LOD_MULTIPLIER(Local_97.f_28[2], 1.5f);
				if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
				}
			}
			bLocal_463 = false;
			iLocal_464 = 0;
			func_302(1, 1, 1, 1);
			GlobalFunc_4923(&Local_97, 0, 1);
			func_210(0);
			break;
	}
}

void func_302(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x29EBA
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
		if ((iLocal_50 != 0 && iLocal_50 != joaat("object")) && iLocal_50 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_50, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_50, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_310()//Position - 0x2A164
{
	uLocal_389 = PED::CREATE_SYNCHRONIZED_SCENE(Local_400, Local_403, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_389, 0);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_389, 0);
	if (GlobalFunc_4924(Local_97.f_28[0]))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(Local_97.f_28[0], uLocal_389, sLocal_376, sLocal_391, 1000f, -4f, 1, 16, 1148846080, 0);
	}
	if (GlobalFunc_4924(Local_97.f_28[1]))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(Local_97.f_28[1], uLocal_389, sLocal_376, sLocal_392, 1000f, -4f, 1, 16, 1148846080, 0);
	}
	if (GlobalFunc_4924(Local_97.f_28[2]))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(Local_97.f_28[2], uLocal_389, sLocal_376, sLocal_393, 1000f, -4f, 1, 16, 1148846080, 0);
	}
	bLocal_390 = true;
}









void func_319(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2A5D5
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
			iLocal_50 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_50 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}














int func_333(int iParam0, int iParam1, int iParam2)//Position - 0x2B222
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_113(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_7188(PLAYER::PLAYER_PED_ID(), -828834893))
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



void func_336()//Position - 0x2B32E
{
	switch (iLocal_326)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("PAP4", 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_376);
			STREAMING::REQUEST_ANIM_DICT(sLocal_379);
			STREAMING::REQUEST_ANIM_DICT(sLocal_378);
			STREAMING::REQUEST_CLIP_SET(sLocal_380);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_479);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_480);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_1286(&uLocal_159, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				func_348();
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_472, Local_475, fLocal_478, 0, 0, 1);
				MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_takedown_a"), 0);
				MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_takedown_heavy"), 0);
				MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_armed_takedown"), 0);
				sLocal_367[0] = "PAP4_ATTACK_1";
				sLocal_367[1] = "PAP4_ATTACK_2";
				sLocal_367[2] = "PAP4_ATTACK_3";
				sLocal_338[0] = "PAP4_CAMERA_1";
				sLocal_338[1] = "PAP4_CAMERA_2";
				sLocal_338[2] = "PAP4_CAMERA_3";
				sLocal_338[3] = "PAP4_CAMERA_4";
				sLocal_445[0] = "PAP4_TV_2";
				sLocal_445[1] = "PAP4_TV_3";
				sLocal_445[2] = "PAP4_TV_4";
				sLocal_449[0] = "PAP4_BLOCK_1";
				sLocal_449[1] = "PAP4_BLOCK_2";
				sLocal_449[2] = "PAP4_BLOCK_3";
				sLocal_449[3] = "PAP4_BLOCK_4";
				iLocal_454[0] = 17;
				iLocal_454[1] = 8;
				iLocal_454[2] = 5;
				iLocal_454[3] = 2;
				func_214(0);
				uLocal_487 = AUDIO::GET_SOUND_ID();
				if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_487, sLocal_489, Local_97.f_41[1], sLocal_488, 0, 0);
				}
				iLocal_326 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_199())
			{
				GlobalFunc_4972(Local_431, fLocal_434, 1, 0);
				func_337();
			}
			else
			{
				if (GlobalFunc_2(0))
				{
					CUTSCENE::REQUEST_CUTSCENE("pap_4_rcm", 8);
					while (!GlobalFunc_109())
					{
						SYSTEM::WAIT(0);
					}
					func_348();
				}
				if ((CAM::IS_SCREEN_FADED_IN() && GlobalFunc_115(Local_97.f_28[0])) && GlobalFunc_114(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], 1) > 6f)
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_97.f_28[0], 0f, 0f, 0f, 1, -1, 3000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.01f);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_97.f_28[0], -1, 0, 2);
					iLocal_357 = MISC::GET_GAME_TIMER() + 3000;
				}
				else
				{
					iLocal_357 = -1;
				}
				func_210(0);
			}
			break;
	}
}

void func_337()//Position - 0x2B59C
{
	func_345(1, 1);
	iLocal_325 = 1;
	iLocal_326 = 2;
	if (GlobalFunc_4924(Local_97.f_28[1]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_97.f_28[1], Local_414, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_97.f_28[1], fLocal_427);
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_188())
	{
		GlobalFunc_6502(PLAYER::PLAYER_PED_ID(), Local_431);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_434);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (GlobalFunc_4947(Local_97.f_35[0]))
	{
		GlobalFunc_4965(Local_97.f_35[0], Local_420, fLocal_429, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_97.f_35[0]);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_97.f_35[0], 1);
	}
	if (GlobalFunc_4947(Local_97.f_35[1]))
	{
		GlobalFunc_4965(Local_97.f_35[1], Local_423, fLocal_430, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_97.f_35[1]);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_97.f_35[1], 1);
	}
	MISC::CLEAR_AREA_OF_VEHICLES(Local_411, 50f, 0, 0, 0, 0, 0);
	func_310();
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	func_338(1, 1, 1);
}

void func_338(int iParam0, int iParam1, int iParam2)//Position - 0x2B6E0
{
	func_302(0, 0, iParam2, 1);
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







void func_345(bool bParam0, bool bParam1)//Position - 0x2B8CA
{
	if (bParam0)
	{
		func_346(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_319(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_346(bool bParam0, int iParam1, int iParam2)//Position - 0x2B8FD
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
			func_302(iParam1, iParam2, 1, 1);
		}
	}
}


void func_348()//Position - 0x2B9F1
{
	if (GlobalFunc_4924(Local_97.f_28[0]))
	{
		PED::SET_PED_MONEY(Local_97.f_28[0], 2000);
		PED::SET_PED_DIES_WHEN_INJURED(Local_97.f_28[0], 1);
		GlobalFunc_1286(&uLocal_159, 3, Local_97.f_28[0], "BEVERLY", 0, 1);
	}
	if (GlobalFunc_4924(Local_97.f_28[1]))
	{
		GlobalFunc_1286(&uLocal_159, 4, Local_97.f_28[1], "Pap4Cameraman", 0, 1);
	}
}


void func_350(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2BAF2
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
				if (fLocal_23 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_24 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_23 = 0f;
				}
				else
				{
					fLocal_23 = (fLocal_23 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_23 = 0f;
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
					fLocal_28 = 0.14f;
				}
				else
				{
					fLocal_28 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_28)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_24.x, (Local_24.f_1 + fLocal_27));
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
					fLocal_23 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_23 = 0f;
			}
		}
	}
}



















int func_369(var uParam0)//Position - 0x2C833
{
	int iVar0[7];
	char* sVar8;
	int iVar9;
	var uVar10;
	bool bVar11;
	
	sVar8 = "rcmpaparazzo_4";
	iVar0[0] = uLocal_94;
	iVar0[1] = joaat("issi2");
	iVar0[2] = joaat("rumpo");
	iVar0[3] = joaat("s_m_y_grip_01");
	iVar0[4] = joaat("a_f_y_bevhills_02");
	iVar0[5] = joaat("prop_pap_camera_01");
	iVar0[6] = joaat("prop_v_cam_01");
	switch (iLocal_93)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -476.3686f, 229.5744f, 82.07077f };
			uParam0->f_17[1 /*3*/] = { -513.6883f, 234.2165f, 87.28937f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_4_RCM", 24);
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar9]);
				iVar9++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar8);
			iLocal_93 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar8))
			{
				return 0;
			}
			iLocal_93 = 2;
			break;
		
		case 2:
			bVar11 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 50, -490.809f, 232.39f, 82.018f, 33.84f, "PAPARAZZO LAUNCHER RC", 0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
					uVar10 = PED::CREATE_SYNCHRONIZED_SCENE(-490.809f, 232.39f, 82.018f, 0f, 0f, 33.84f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar10, 1);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar10, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uVar10, "rcmpaparazzo_4", "pap_4_rcm_leadin", 8f, -8f, 1, 16, 1148846080, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[3], -498.1656f, 228.6284f, 82.09948f, 292.9763f, 26);
				if (GlobalFunc_4924(uParam0->f_28[1]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "Camera Man");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmpaparazzo_4", "Idle_Camman", 8f, -8f, -1, 57, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[2]))
			{
				GlobalFunc_6479(&(uParam0->f_28[2]), iVar0[4], -498.309f, 227.9112f, 82.106f, 296.4216f, 26);
				if (GlobalFunc_4924(uParam0->f_28[2]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[2], "Makeup Woman");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[2], "rcmpaparazzo_4", "Idle_Prod", 8f, -8f, -1, 57, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[2], 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 9, 0, 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_371(&(uParam0->f_35[0]), iVar0[1], -497.99f, 224.97f, 82.67f, 266.5f);
				if (GlobalFunc_4947(uParam0->f_35[0]))
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				func_371(&(uParam0->f_35[1]), iVar0[2], -501.55f, 230.7f, 83.1f, 233.93f);
				if (GlobalFunc_4947(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 2);
					VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_35[1], 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[5], -490.11f, 233.15f, 82.1f, 0f);
				if (GlobalFunc_115(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 57005), 0.1561f, -0.003f, -0.0344f, 202.8703f, -124.43f, -121.5398f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5742(&(uParam0->f_41[1]), iVar0[6], -490.11f, 233.15f, 82.1f, 0f);
				if (GlobalFunc_115(uParam0->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 57005), 0.1181f, 0.2229f, -0.1535f, 259.2501f, 24.08f, -51.2899f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (bVar11)
			{
				iLocal_93 = 3;
			}
			break;
		
		case 3:
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar9]);
				iVar9++;
			}
			return 1;
			break;
	}
	return 0;
}


void func_371(var uParam0, var uParam1, struct<3> Param2, float fParam5)//Position - 0x2CE15
{
	GlobalFunc_7089(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}









void func_380()//Position - 0x2D0D0
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		func_390();
	}
	GlobalFunc_9252(&Local_97, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}










void func_390()//Position - 0x2D28C
{
	var uVar0;
	var uVar1;
	
	func_214(1);
	if (GlobalFunc_4924(Local_97.f_28[0]))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_97.f_28[0], 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_97.f_28[0], sLocal_376, sLocal_377, 3))
		{
			TASK::STOP_ANIM_TASK(Local_97.f_28[0], sLocal_376, sLocal_377, -1056964608);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[0], 0))
		{
			TASK::TASK_WANDER_STANDARD(Local_97.f_28[0], 1193033728, 0);
		}
	}
	if (GlobalFunc_4924(Local_97.f_28[1]) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[1]))
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_4924(Local_97.f_28[0]) && GlobalFunc_4947(Local_97.f_35[1]))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(Local_97.f_28[1], Local_97.f_35[1], 20f, 786597);
			}
			else if (!PED::IS_PED_FLEEING(Local_97.f_28[1]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[1], 1))
			{
				func_286();
				PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[1], 128, 1);
				func_391(&(Local_97.f_28[1]), 500, 0);
			}
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(Local_97.f_28[1], 1193033728, 0);
		}
	}
	if (GlobalFunc_4924(Local_97.f_28[2]) && !FIRE::IS_ENTITY_ON_FIRE(Local_97.f_28[2]))
	{
		if (PED::IS_PED_IN_GROUP(Local_97.f_28[2]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_97.f_28[2]);
		}
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_97.f_28[2], 1))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_97.f_28[2], 1);
				if (GlobalFunc_4947(uVar0) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar0, 1) || !GlobalFunc_4924(Local_97.f_28[0])))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar1);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar1);
					TASK::TASK_PERFORM_SEQUENCE(Local_97.f_28[2], uVar1);
					TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				}
			}
			else if (!PED::IS_PED_FLEEING(Local_97.f_28[2]))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(Local_97.f_28[2], 128, 1);
				func_391(&(Local_97.f_28[2]), 350, 1);
			}
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(Local_97.f_28[2], 1193033728, 0);
		}
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_takedown_a"), 1);
	MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_takedown_heavy"), 1);
	MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_armed_takedown"), 1);
	STREAMING::REMOVE_ANIM_DICT(sLocal_376);
	STREAMING::REMOVE_ANIM_DICT(sLocal_379);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_479))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_479);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_480))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_480);
	}
	AUDIO::STOP_SOUND(uLocal_487);
	GlobalFunc_146(&iLocal_158);
	GlobalFunc_129(&(Local_97.f_41[0]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_41[1]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_97.f_41[1]));
	}
	GlobalFunc_132(&(Local_97.f_28[0]), 1, 0, 1);
	GlobalFunc_132(&(Local_97.f_28[1]), 1, 0, 1);
	GlobalFunc_132(&(Local_97.f_28[2]), 1, 0, 1);
	GlobalFunc_131(&(Local_97.f_35[0]));
	GlobalFunc_131(&(Local_97.f_35[1]));
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_472, Local_475, fLocal_478, 1);
	GlobalFunc_5105();
}

void func_391(var uParam0, int iParam1, int iParam2)//Position - 0x2D5A6
{
	var uVar0;
	
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PAUSE(0, iParam1);
	if ((iParam2 && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_379)) && iLocal_465)
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_379, sLocal_381, 8f, -8f, -1, 8192, 0, 0, 0, 0);
		iLocal_465 = 0;
	}
	TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}

























