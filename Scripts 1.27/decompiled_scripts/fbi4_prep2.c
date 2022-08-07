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
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1000;
	var uLocal_29 = 1000;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[3] = { 0, 0, 0 };
	int iLocal_100[3] = { 0, 0, 0 };
	var uLocal_104 = 0;
	var uLocal_105 = 15;
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
	var uLocal_157 = 15;
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
	int iLocal_209 = 0;
	char* sLocal_210 = NULL;
	char* sLocal_211 = NULL;
	int iLocal_212 = 0;
	char[] cLocal_213[8] = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = 0;
	struct<3> Local_220 = { 0, 0, 0 } ;
	struct<3> Local_223 = { 0, 0, 0 } ;
	bool bLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	float fLocal_235 = 0f;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	float fLocal_238 = 0f;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	int iLocal_243[3] = { 0, 0, 0 };
	bool bLocal_247 = 0;
	struct<3> Local_248 = { 0, 0, 0 } ;
	struct<16> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	struct<6> Local_269 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_275 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_281 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	char[] cLocal_291[8] = 0;
	var uLocal_292 = 16;
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
	sLocal_31 = "NULL";
	fLocal_32 = 0f;
	fLocal_36 = -0.0375f;
	fLocal_37 = 0.17f;
	fLocal_42 = 80f;
	fLocal_43 = 140f;
	fLocal_44 = 180f;
	iLocal_47 = 3;
	sLocal_211 = "FBIPRB";
	Local_220 = { 0f, 0f, 0f };
	Local_223 = { 1374.858f, -2077.374f, 50.9981f };
	iLocal_234 = -1;
	fLocal_235 = 0f;
	fLocal_238 = 0f;
	Local_248 = { 0.2f, 2.45f, 0f };
	cLocal_291 = "FIBP2AU";
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_210 = 0;
		GlobalFunc_10632();
		func_452();
	}
	func_439();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_4972(-404.3334f, -2147.648f, 9.314f, 182.5609f, 1, 0);
	}
	GlobalFunc_10375();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ToT", 0);
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			func_421();
			func_418();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_91)
			{
				case 0:
					func_239();
					break;
				
				case 1:
					func_237();
					break;
				
				case 2:
					func_131();
					break;
				
				case 3:
					func_89();
					break;
				
				case 4:
					func_27();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_91 != 5)
			{
				if (iLocal_91 >= 0 && !bLocal_39)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x17B
{
	switch (iLocal_92)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_25();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_210))
			{
				GlobalFunc_10835(sLocal_210);
			}
			else
			{
				GlobalFunc_10616(0);
			}
			iLocal_92 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_2();
				func_452();
			}
			break;
	}
}

void func_2()//Position - 0x1D3
{
	GlobalFunc_6692(&Local_281);
	GlobalFunc_6692(&Local_269);
	GlobalFunc_6692(&Local_275);
	GlobalFunc_6692(&iLocal_267);
	GlobalFunc_69(&Local_251);
}























void func_25()//Position - 0x135F
{
	GlobalFunc_146(&iLocal_217);
	GlobalFunc_146(&iLocal_218);
}


void func_27()//Position - 0x1393
{
	int iVar0;
	
	switch (iLocal_92)
	{
		case 0:
			iLocal_92 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_223, 270f))
			{
				iLocal_92 = 2;
			}
			else if (!GlobalFunc_663("PRB_LEVAREA", 0, 0))
			{
				GlobalFunc_164("PRB_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = GlobalFunc_8315();
			if (GlobalFunc_663("PRB_LEVAREA", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (iVar0 == 0)
			{
				if (func_54(&uLocal_104, &cLocal_213, &uLocal_292))
				{
					func_51();
					func_46();
				}
			}
			else
			{
				GlobalFunc_585(46, 1);
				func_40(func_44(iVar0), -621899663, -621899663, 5, 0, iVar0, func_43(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_51();
				func_46();
			}
			break;
		
		case 3:
			func_28(1, 1, 1);
			iLocal_92 = 2;
			break;
	}
}

void func_28(int iParam0, int iParam1, int iParam2)//Position - 0x1474
{
	func_30(0, 0, iParam2, 1);
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


void func_30(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x14E4
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
		if ((iLocal_48 != 0 && iLocal_48 != joaat("object")) && iLocal_48 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_48, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_48, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x17C1
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		GlobalFunc_5093(iParam5);
		return 1;
	}
	return 0;
}



int func_43(int iParam0)//Position - 0x1A4C
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_44(int iParam0)//Position - 0x1A61
{
	if (iParam0 == 1)
	{
		return 530956160;
	}
	return 240475766;
}


void func_46()//Position - 0x1AC1
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	GlobalFunc_5103(0, 0);
	func_452();
}





void func_51()//Position - 0x1C56
{
	GlobalFunc_503(0, 324);
	GlobalFunc_504(0, 323);
}



int func_54(var uParam0, char* sParam1, var uParam2)//Position - 0x1CEB
{
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_5972())
			{
				if ((GlobalFunc_230(74) || GlobalFunc_230(75)) && GlobalFunc_5202())
				{
					if (GlobalFunc_8315() == 0)
					{
						GlobalFunc_9030(1);
						GlobalFunc_585(46, 1);
						*uParam0 = 4;
					}
					else
					{
						GlobalFunc_173(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_69(uParam2, func_79(), GlobalFunc_8315(), "FBIPRAU", func_78(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { GlobalFunc_9032(1) };
							GlobalFunc_585(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (GlobalFunc_8315() == 0)
				{
					GlobalFunc_9030(0);
					*uParam0 = 4;
				}
				else
				{
					GlobalFunc_173(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_69(uParam2, func_79(), GlobalFunc_8315(), "FBIPRAU", func_78(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { GlobalFunc_9032(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_61();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (GlobalFunc_687())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					GlobalFunc_783("FBIPRAU", sParam1);
					GlobalFunc_782(1);
					*uParam0 = 3;
				}
			}
			if (GlobalFunc_781())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!GlobalFunc_687())
			{
				if (!GlobalFunc_116(0))
				{
					if (!GlobalFunc_230(3) && GlobalFunc_5972())
					{
						GlobalFunc_66(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}







void func_61()//Position - 0x1F74
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (GlobalFunc_9813(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	GlobalFunc_6822(func_63(), 0, GlobalFunc_8315(), func_79(), 9, 6000, 6000, -1, 0, -1, 0);
}


int func_63()//Position - 0x211C
{
	switch (GlobalFunc_785())
	{
		case 33:
			switch (GlobalFunc_8315())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (GlobalFunc_8315())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (GlobalFunc_8315())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (GlobalFunc_8315())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}






bool func_69(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x237C
{
	GlobalFunc_513(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_1581 = iParam2;
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15706 = 0;
	Global_15697 = 1;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam6 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return func_70(sParam4, iParam5, bParam9);
}

int func_70(char* sParam0, int iParam1, bool bParam2)//Position - 0x23E4
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					GlobalFunc_110();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (GlobalFunc_153(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		GlobalFunc_152();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				GlobalFunc_8951();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GlobalFunc_151())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (GlobalFunc_72())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			GlobalFunc_150();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		GlobalFunc_787();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		GlobalFunc_110();
	}
	return 0;
}








char* func_78()//Position - 0x2998
{
	char* sVar0;
	
	switch (GlobalFunc_785())
	{
		case 33:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_79()//Position - 0x2A9D
{
	int iVar0;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}










void func_89()//Position - 0x2D02
{
	func_124(&iLocal_267, &uLocal_268, &iLocal_94, &iLocal_218, &iLocal_217, Local_223, Local_281, 0, 11f);
	switch (iLocal_92)
	{
		case 0:
			if (func_103(iLocal_91, bLocal_39))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (GlobalFunc_4947(iLocal_267))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_267, 0))
						{
							GlobalFunc_5974("PRB_LEVVEH", &iLocal_212);
						}
					}
				}
				iLocal_92 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_7251(&iLocal_217, Local_223, &iLocal_93, iLocal_94, &iLocal_212, &iLocal_239);
			if (func_94(iLocal_267, Local_223, &iLocal_217, iLocal_94, iLocal_93, &uLocal_228, &iLocal_240, &uLocal_237, &uLocal_236, &iLocal_212, 11f))
			{
				if (!func_93())
				{
					if (func_54(&uLocal_104, &cLocal_213, &uLocal_292))
					{
						if (GlobalFunc_115(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_267)))
						{
							VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_267)));
						}
						func_51();
						func_46();
					}
				}
				else
				{
					if (GlobalFunc_115(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_267)))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_267)));
					}
					func_51();
					RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
					func_91(0);
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_281))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_281, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_281, -1);
				}
				else
				{
					GlobalFunc_5705(Local_281, Local_223, 126.0705f, 0, 1);
					func_28(1, 1, 1);
					iLocal_92 = 1;
				}
			}
			break;
	}
}


void func_91(bool bParam0)//Position - 0x2ED0
{
	GlobalFunc_3009(iLocal_91);
	iLocal_209 = iLocal_91;
	if (!bParam0)
	{
		iLocal_91 = iLocal_209 + 1;
	}
	else if (iLocal_209 > 0)
	{
		iLocal_91 = (iLocal_209 - 1);
	}
	iLocal_212 = 0;
	iLocal_92 = 0;
}


int func_93()//Position - 0x2F1B
{
	if (GlobalFunc_5972())
	{
		if ((GlobalFunc_230(74) || GlobalFunc_230(75)) && GlobalFunc_5202())
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10, int iParam11, float fParam12)//Position - 0x2F4D
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
				*uParam7 = 1;
				GlobalFunc_5973(iParam4, Param1, 1);
			}
			else
			{
				if (*uParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Param1, fVar0))
					{
						*uParam7 = 0;
						GlobalFunc_3020(1077936128, 1);
					}
				}
				GlobalFunc_146(iParam4);
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*uParam9 == -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
			return 1;
		}
		if (!*uParam10)
		{
			if (GlobalFunc_663(GlobalFunc_3012(GlobalFunc_785()), 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			*uParam9 = MISC::GET_GAME_TIMER();
			*uParam10 = 1;
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam9) > 3000)
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
		*uParam7 = 1;
	}
	return 0;
}









int func_103(int iParam0, bool bParam1)//Position - 0x33E0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_39 = false;
				func_28(1, 1, 1);
			}
			else if (func_117(1, Local_220, 0))
			{
				if (!GlobalFunc_Is_Mission_Retry())
				{
					if (func_116())
					{
						GlobalFunc_562(34);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 1);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
						iLocal_91 = 2;
						return 1;
					}
					else if ((((func_117(2, Local_281.f_1, Local_281.f_4) && func_117(5, Local_269.f_1, Local_269.f_4)) && func_117(6, Local_275.f_1, Local_275.f_4)) && func_117(3, Local_251.f_1, Local_251.f_4)) && func_117(4, Local_220, 0))
					{
						uLocal_290 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.198f, -2155.886f, 8.36266f, -383.4908f, -2188.511f, 12.9213f, 0, 1, 1, 1);
						GlobalFunc_562(34);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 1);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_251))
						{
							if (!GlobalFunc_6964(Local_251, -2017877118))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_251, "mini@repair", "fixing_a_ped", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, Local_248), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(Local_269), 1000f, -1.5f, -1, 1, 0, 2, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_251, 0, 0);
							}
							func_113();
							func_111();
							PED::SET_PED_CONFIG_FLAG(Local_251, 154, 0);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_251, uLocal_287);
						}
						if (HUD::GET_BLIP_FROM_ENTITY(Local_281) != 0)
						{
							iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_281);
							MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
							GlobalFunc_146(&iVar0);
							MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
						}
						GlobalFunc_7253(&iLocal_218, Local_281, 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Tow_truck_damage", Local_269, "FBI_04_HEAT_SOUNDS", 0, 0);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((((func_117(2, Local_281.f_1, Local_281.f_4) && func_117(5, Local_269.f_1, Local_269.f_4)) && func_117(4, Local_220, 0)) && func_117(6, Local_275.f_1, Local_275.f_4)) && func_117(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, Local_248), -ENTITY::GET_ENTITY_HEADING(Local_269)))
				{
					MISC::CLEAR_AREA(Local_251.f_1, 100f, 1, 0, 0, 0);
					func_108();
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_251))
					{
						PED::SET_PED_CAPSULE(Local_251, 0.1f);
						if (!GlobalFunc_6964(Local_251, -2017877118))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_251, "mini@repair", "fixing_a_ped", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, Local_248), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(Local_269), 1000f, -1.5f, -1, 1, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_251, 0, 0);
							func_113();
							func_111();
							PED::SET_PED_CONFIG_FLAG(Local_251, 154, 0);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_251, uLocal_287);
						}
					}
					if (!GlobalFunc_Is_Mission_Retry())
					{
						func_107(PLAYER::PLAYER_PED_ID(), -396.3081f, -2145.176f, 9.3193f, 172.0072f);
					}
					if (!GlobalFunc_188())
					{
						uLocal_290 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.198f, -2155.886f, 8.36266f, -383.4908f, -2188.511f, 12.9213f, 0, 1, 1, 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Tow_truck_damage", Local_269, "FBI_04_HEAT_SOUNDS", 0, 0);
						GlobalFunc_7253(&iLocal_218, Local_281, 1);
						bLocal_39 = false;
						func_28(1, 1, 1);
					}
					else
					{
						GlobalFunc_4967(0, -1, 1);
					}
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
				if (func_117(2, Local_281.f_1, Local_281.f_4))
				{
					func_108();
					if (!GlobalFunc_188())
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_281, -1);
					}
					if (!GlobalFunc_188())
					{
						uLocal_290 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.198f, -2155.886f, 8.36266f, -383.4908f, -2188.511f, 12.9213f, 0, 1, 1, 1);
						bLocal_39 = false;
						func_28(1, 1, 1);
					}
					else
					{
						GlobalFunc_4967(Local_281, -1, 1);
					}
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
				if (func_117(2, Local_223, Local_281.f_4))
				{
					func_108();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_281, -1);
					if (!GlobalFunc_188())
					{
						bLocal_39 = false;
						func_28(1, 1, 1);
					}
					else
					{
						GlobalFunc_4967(0, -1, 1);
					}
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




void func_107(int iParam0, struct<3> Param1, float fParam4)//Position - 0x3917
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
	}
	GlobalFunc_5705(iParam0, Param1, fParam4, 0, 1);
}

void func_108()//Position - 0x393D
{
	int iVar0;
	
	iLocal_239 = 0;
	iLocal_240 = 0;
	bLocal_226 = false;
	bLocal_242 = false;
	iLocal_241 = 0;
	iLocal_227 = 0;
	iLocal_233 = 0;
	iLocal_234 = -1;
	fLocal_235 = 0f;
	Local_251.f_14 = -1;
	Local_251.f_15 = 0;
	iLocal_95 = 0;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_96[iVar0] = 0;
		iLocal_100[iVar0] = 0;
		iLocal_243[iVar0] = 0;
		iVar0++;
	}
}



void func_111()//Position - 0x39EE
{
	func_112(&uLocal_292);
	GlobalFunc_173(&uLocal_292, 3, Local_251, "FIBP2TowGuy", 1, 1);
}

void func_112(var uParam0)//Position - 0x3A0D
{
	int iVar0;
	char* sVar1;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	GlobalFunc_173(uParam0, iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
}

void func_113()//Position - 0x3A63
{
	iLocal_95 = 1;
}



int func_116()//Position - 0x3AC5
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0);
			iLocal_267 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_4947(iLocal_267))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0, struct<3> Param1, float fParam4)//Position - 0x3B18
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_537(Param1, Local_220, 1056964608) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_211, 0);
			HUD::REQUEST_ADDITIONAL_TEXT(cLocal_291, 6);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_4947(Global_86864[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
				Local_281 = Global_86864[0];
				if (GlobalFunc_4947(Local_281))
				{
					GlobalFunc_743(Local_281, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_281, 1);
					return 1;
				}
			}
			else if (func_121(&Local_281, Local_281.f_5, Local_281.f_1, Local_281.f_4, 1))
			{
				GlobalFunc_743(Local_281, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_281, 1);
				return 1;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_86864.f_9[0], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
					Local_251 = Global_86864.f_9[0];
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_251))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251, true);
						PED::SET_PED_CAPSULE(Local_251, 0.1f);
						AUDIO::STOP_PED_SPEAKING(Local_251, 1);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_251, 0);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_118(&Local_251, Local_251.f_5, Local_251.f_1, Local_251.f_4, 1, 0, 1, 1))
			{
				PED::SET_PED_CAPSULE(Local_251, 0.1f);
				AUDIO::STOP_PED_SPEAKING(Local_251, 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_251);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_251, 0);
				return 1;
			}
			break;
		
		case 4:
			STREAMING::REQUEST_ANIM_DICT("mini@repair");
			STREAMING::REQUEST_ANIM_DICT("amb@code_human_cower@male@enter");
			if (STREAMING::HAS_ANIM_DICT_LOADED("mini@repair") && STREAMING::HAS_ANIM_DICT_LOADED("amb@code_human_cower@male@enter"))
			{
				return 1;
			}
			break;
		
		case 5:
			if (GlobalFunc_4947(Global_86864[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
				Local_269 = Global_86864[1];
				if (GlobalFunc_4947(Local_269))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_269, 0);
					return 1;
				}
			}
			else if (func_121(&Local_269, Local_269.f_5, Local_269.f_1, Local_269.f_4, 1))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_269, 0);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_269, 4, 0, 0);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_269, 0, 1, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_269, 100f);
				return 1;
			}
			break;
		
		case 6:
			if (GlobalFunc_4947(Global_86864[2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
				Local_275 = Global_86864[2];
				if (GlobalFunc_4947(Local_275))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_275, 3);
					return 1;
				}
			}
			else if (func_121(&Local_275, Local_275.f_5, Local_275.f_1, Local_275.f_4, 1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_275, 3);
				return 1;
			}
			break;
	}
	return 0;
}

int func_118(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x3DEC
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
	else if (GlobalFunc_IsPedNotInjuredOrDead(*uParam0))
	{
		return 1;
	}
	return 0;
}



int func_121(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x3ECA
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (GlobalFunc_3015(iParam1, "Loading", 0))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
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
		if (GlobalFunc_4947(*uParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}



void func_124(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)//Position - 0x3FD7
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
						func_127(iParam0);
					}
					else
					{
						func_125(iParam0, uParam1);
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
		func_127(iParam0);
	}
	else
	{
		func_125(iParam0, uParam1);
	}
}

void func_125(var uParam0, var uParam1)//Position - 0x41A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_39)
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
						GlobalFunc_190(uParam0);
						*uParam0 = iVar0;
						GlobalFunc_743(*uParam0, 1);
						GlobalFunc_743(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
						if (GlobalFunc_115(iVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								GlobalFunc_190(uParam0);
								*uParam0 = iVar0;
								GlobalFunc_743(*uParam0, 1);
								GlobalFunc_743(*uParam1, 3);
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


void func_127(var uParam0)//Position - 0x42C6
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (iVar0 != *uParam0)
		{
			if (GlobalFunc_4947(iVar0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == GlobalFunc_3017(GlobalFunc_785()))
				{
					GlobalFunc_190(uParam0);
					*uParam0 = iVar0;
					GlobalFunc_743(*uParam0, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
				}
			}
		}
	}
}




void func_131()//Position - 0x446B
{
	func_236();
	func_124(&iLocal_267, &uLocal_268, &iLocal_94, &iLocal_218, &iLocal_217, Local_223, Local_281, 0, 11f);
	func_235();
	func_149();
	switch (iLocal_92)
	{
		case 0:
			if (func_103(iLocal_91, bLocal_39))
			{
				GlobalFunc_5973(&iLocal_217, Local_223, 1);
				GlobalFunc_3008(1);
				iLocal_92 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_7251(&iLocal_217, Local_223, &iLocal_93, iLocal_94, &iLocal_212, &iLocal_239);
			func_138();
			if (!bLocal_242)
			{
				if (GlobalFunc_7256(iLocal_267, Local_223, &iLocal_217, iLocal_93, iLocal_94, &iLocal_212, &iLocal_240, 0, 0, 11f))
				{
					iLocal_92 = 2;
				}
			}
			else if (!iLocal_241)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_251))
					{
						if (GlobalFunc_7191(PED::GET_VEHICLE_PED_IS_IN(Local_251, 0)))
						{
							GlobalFunc_7253(&(Local_251.f_6.f_1), Local_281, 0);
						}
					}
					GlobalFunc_164("PRB_LOSETOW", 7500, 0);
					GlobalFunc_146(&iLocal_217);
					iLocal_241 = 1;
				}
			}
			break;
		
		case 2:
			GlobalFunc_10755();
			GlobalFunc_146(&iLocal_217);
			GlobalFunc_146(&iLocal_218);
			if (GlobalFunc_3020(1077936128, 1))
			{
				if (GlobalFunc_4947(iLocal_267))
				{
					func_91(0);
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(iLocal_267))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_267, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_267, -1);
				}
				else
				{
					GlobalFunc_5705(iLocal_267, Local_223, 146.5443f, 0, 1);
					func_28(1, 1, 1);
					iLocal_92 = 1;
				}
			}
			break;
	}
}







void func_138()//Position - 0x47E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			switch (iLocal_100[iVar0])
			{
				case 0:
					if (!GlobalFunc_9814(iVar1))
					{
						func_147(iVar1, iVar0);
						if (GlobalFunc_9813(iVar1, 0))
						{
							if (func_145(iVar0, iVar1) || func_143(iVar0, iVar1))
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
					func_147(iVar1, iVar0);
					if (func_140(iVar0, iVar1))
					{
						iLocal_96[iVar0] = 0;
						iLocal_100[iVar0] = 0;
						GlobalFunc_9811(iVar1);
					}
					break;
				
				case 2:
					func_147(iVar1, iVar0);
					if (func_139(iVar0, iVar1))
					{
						iLocal_96[iVar0] = 0;
						iLocal_100[iVar0] = 0;
						GlobalFunc_9811(iVar1);
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_139(int iParam0, int iParam1)//Position - 0x48D9
{
	switch (iLocal_96[iParam0])
	{
		case 0:
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-632.498f, -2424.908f, 1710.123f, -1791.79f);
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(-632.498f, -2424.908f, 1710.123f, -1791.79f))
			{
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, 0), Local_223, 4, 20f, 786469, 2f, 10f, 1);
				iLocal_96[iParam0] = 5;
			}
			break;
		
		case 5:
			if (!func_143(iParam0, iParam1) || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_223, 1.5f))
			{
				iLocal_96[iParam0] = 6;
			}
			break;
		
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)//Position - 0x4993
{
	struct<3> Var0;
	struct<3> Var3;
	char* sVar6;
	
	Var3 = { 0f, -1f, 0f };
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_251))
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(Local_251))
		{
			return 1;
		}
		switch (iLocal_96[iParam0])
		{
			case 0:
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_251, Var3) };
				if (!MISC::IS_POSITION_OCCUPIED(Var0, 1.5f, 0, 0, 1, 0, 0, Local_251, 0))
				{
					if (!bLocal_247)
					{
						if (iParam0 == 0)
						{
							sVar6 = "FP2_MTAKEDOW";
						}
						else if (iParam0 == 1)
						{
							sVar6 = "FP2_FTAKEDOW";
						}
						else if (iParam0 == 2)
						{
							sVar6 = "FP2_TTAKEDOW";
						}
						bLocal_247 = func_141(&uLocal_292, cLocal_291, sVar6, 7, 0, 0, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var0, 1f, 20000, 0.25f, 0, 82.7989f);
						PED::SET_PED_STEALTH_MOVEMENT(iParam1, 1, 0);
						if (iParam0 == 2)
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("weapon_knife"), -1, 1, 1);
							iLocal_96[iParam0] = 2;
						}
						else
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("weapon_unarmed"), -1, 1, 1);
							iLocal_96[iParam0] = 1;
						}
					}
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_251, Var3) };
				if (!GlobalFunc_6964(iParam1, 713668775) && GlobalFunc_775(iParam1, Var0, 3f))
				{
					TASK::TASK_STEALTH_KILL(iParam1, Local_251, MISC::GET_HASH_KEY("AR_stealth_kill_a"), 1f, 0);
					TASK::CLEAR_PED_TASKS(Local_251);
					iLocal_95 = 18;
					iLocal_96[iParam0] = 4;
				}
				break;
			
			case 2:
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_251, Var3) };
				if (!GlobalFunc_6964(iParam1, 713668775) && GlobalFunc_775(iParam1, Var0, 1.5f))
				{
					TASK::TASK_STEALTH_KILL(iParam1, Local_251, MISC::GET_HASH_KEY("AR_stealth_kill_knife"), 1f, 0);
					TASK::CLEAR_PED_TASKS(Local_251);
					iLocal_95 = 18;
					iLocal_96[iParam0] = 4;
				}
				break;
			
			case 3:
				break;
			
			case 4:
				break;
		}
	}
	else if (!GlobalFunc_6964(iParam1, 1343540250))
	{
		return 1;
	}
	return 0;
}

bool func_141(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4B72
{
	GlobalFunc_513(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_70(sParam2, iParam3, 0);
}


int func_143(int iParam0, int iParam1)//Position - 0x4C46
{
	if (!GlobalFunc_236())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_267) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_267, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_267, Local_223, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_267, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_267, -1) != PLAYER::PLAYER_PED_ID())
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iLocal_267, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_267, -1) == iParam1)
				{
					iLocal_100[iParam0] = 2;
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_145(int iParam0, int iParam1)//Position - 0x4CF9
{
	if (!GlobalFunc_236())
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_251))
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -408.0286f, -2175.476f, 5.31836f, -394.644f, -2175.297f, 15.31835f, 21.52f, 0, 1, 0) && !func_146(iParam0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_251)) && !PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iLocal_100[iParam0] = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x4D72
{
	if (iParam0 == 0)
	{
		if (iLocal_100[1] == 1 || iLocal_100[2] == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 1)
	{
		if (iLocal_100[0] == 1 || iLocal_100[2] == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 2)
	{
		if (iLocal_100[1] == 1 || iLocal_100[0] == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_147(int iParam0, int iParam1)//Position - 0x4DE4
{
	if (iParam0 != PLAYER::PLAYER_PED_ID())
	{
		if (!iLocal_243[iParam1])
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				iLocal_243[iParam1] = 1;
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 0);
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iLocal_243[iParam1] = 0;
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 1);
		}
	}
	else if (iLocal_243[iParam1])
	{
		iLocal_243[iParam1] = 0;
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 1);
	}
}


void func_149()//Position - 0x4EA9
{
	var uVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_251))
	{
		func_213();
		switch (iLocal_95)
		{
			case 18:
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(9000, 10000)
				{
					if (!func_212())
					{
						func_196(iLocal_95);
					}
					else
					{
						func_196(15);
					}
				}
				PED::SET_PED_CAPSULE(Local_251, 0.1f);
				break;
			
			case 3:
				if (GlobalFunc_4947(Local_281))
				{
					if (GlobalFunc_775(Local_251, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_281, -1f, 0.5f, 0f), 3f))
					{
						func_196(15);
						return;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_4947(Local_269))
				{
					if (GlobalFunc_775(Local_269, Local_269.f_1, 2f))
					{
						if (GlobalFunc_775(Local_251, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, -1f, 0.5f, 0f), 2f))
						{
							func_196(4);
							return;
						}
					}
					else
					{
						func_196(15);
					}
				}
				break;
			
			case 4:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (GlobalFunc_775(Local_269, Local_269.f_1, 2f))
					{
						if (!func_212())
						{
							func_196(4);
						}
						else
						{
							func_196(15);
						}
					}
					else
					{
						func_196(15);
					}
				}
				break;
			
			case 7:
				if (GlobalFunc_4947(Local_281) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_281))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_251, Local_281))
					{
						func_196(9);
					}
					if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_251, Local_281))
						{
							func_196(7);
						}
					}
				}
				else
				{
					func_196(15);
				}
				break;
			
			case 6:
				if (GlobalFunc_4947(Local_269) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_269))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_251, Local_269))
					{
						func_196(9);
					}
					if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_251, Local_269))
						{
							func_196(6);
						}
					}
				}
				else
				{
					func_196(15);
				}
				break;
			
			case 8:
				if (GlobalFunc_4947(Local_275) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_275))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_251, Local_275))
					{
						func_196(9);
					}
					if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_251, Local_275))
						{
							func_196(8);
						}
					}
				}
				else
				{
					func_196(15);
				}
				break;
			
			case 9:
				if (GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 20f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_196(10);
					return;
				}
				if (func_194())
				{
					func_196(10);
				}
				else
				{
					func_196(9);
				}
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (!GlobalFunc_6964(Local_251, 780511057))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_251))
						{
							if (GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 10f))
							{
								func_196(10);
							}
							else if (GlobalFunc_4947(Local_275))
							{
								func_196(8);
							}
							else if (bLocal_226)
							{
								func_196(7);
							}
							else if (iLocal_94 == 1)
							{
								func_196(6);
							}
						}
					}
				}
				break;
			
			case 10:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (!func_194())
					{
						func_196(10);
					}
					else if (GlobalFunc_4947(Local_275))
					{
						if (!GlobalFunc_155(Local_251, Local_275, 15f) && !PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
						{
							func_196(8);
						}
					}
					else if (bLocal_226)
					{
						if (GlobalFunc_4947(Local_281))
						{
							if (!GlobalFunc_155(Local_251, Local_281, 10f))
							{
								func_196(7);
							}
						}
					}
					else if (iLocal_94 == 1)
					{
						if (GlobalFunc_4947(Local_269))
						{
							if (!GlobalFunc_155(Local_251, Local_269, 10f))
							{
								func_196(6);
							}
						}
					}
				}
				break;
			
			case 11:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000)
				{
					if (!func_212())
					{
						func_196(11);
					}
					else
					{
						func_196(15);
					}
				}
				break;
			
			case 14:
				if (!GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 118f))
				{
					func_193(&Local_251, 1, 1, 1);
					GlobalFunc_190(&Local_269);
				}
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
				}
				break;
			
			case 13:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000)
				{
					if (!GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 10f))
					{
						func_196(14);
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251, PLAYER::PLAYER_PED_ID(), 1))
					{
						func_196(14);
					}
					else
					{
						func_196(13);
					}
				}
				else if (GlobalFunc_8324(Local_251, 1, 0, 0, 0))
				{
					func_196(14);
				}
				break;
			
			case 15:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (func_181(Local_251, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
					{
						func_180();
						return;
					}
				}
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000)
				{
					func_196(15);
				}
				break;
			
			case 5:
				if (GlobalFunc_4947(Local_269))
				{
					if (GlobalFunc_775(Local_251, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, Local_248), 2f))
					{
						if (!GlobalFunc_6964(Local_251, 713668775) && !GlobalFunc_6964(Local_251, 1920390111))
						{
							func_196(1);
						}
					}
					PED::SET_PED_CAPSULE(Local_251, 0.1f);
					if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
					{
						func_179();
					}
				}
				break;
			
			case 12:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500)
				{
					if (!GlobalFunc_7191(PED::GET_VEHICLE_PED_IS_IN(Local_251, 0)))
					{
						func_196(9);
					}
					else
					{
						func_196(12);
					}
				}
				break;
			
			case 16:
				if (GlobalFunc_4947(Local_281))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_251, Local_281, 0))
					{
						if (func_176(Local_281, &uLocal_229, &uLocal_230, &uLocal_231, &uLocal_232, 3, 2f))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							if (PED::IS_PED_IN_VEHICLE(Local_251, Local_281, 0))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 4096);
							}
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_251, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							GlobalFunc_4948(&uLocal_19, 0, 0);
							iLocal_95 = 14;
						}
						else
						{
							GlobalFunc_10365(&uLocal_19, Local_281, 0, 0, 1, 1, 1);
						}
					}
				}
				break;
			
			case 17:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(10000, 12000)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -414.4899f, -2181.967f, 11.93531f, -414.1714f, -2170.252f, 5.64993f, 12.63f, 0, 1, 0))
					{
						func_196(5);
					}
					else
					{
						func_196(17);
					}
				}
				break;
			
			case 20:
				if (GlobalFunc_1993())
				{
					func_196(19);
				}
				else if (GlobalFunc_781())
				{
					func_196(1);
				}
				break;
			
			case 19:
				if (MISC::GET_GAME_TIMER() - Local_251.f_14) > MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000)
				{
					func_196(15);
				}
				break;
		}
	}
	else
	{
		func_193(&Local_251, 1, 0, 1);
		if (GlobalFunc_4947(Local_269))
		{
			if (!GlobalFunc_775(Local_269, Local_269.f_1, 50f) || !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_269, 250f))
			{
				GlobalFunc_190(&Local_269);
			}
		}
		GlobalFunc_146(&(Local_251.f_6));
		GlobalFunc_146(&(Local_251.f_6.f_1));
		if (bLocal_242)
		{
			bLocal_242 = false;
			GlobalFunc_164("PRB_TAKBACK", 7500, 0);
		}
	}
	if (iLocal_95 != 14 && iLocal_95 != 13)
	{
		GlobalFunc_661(Local_251, &(Local_251.f_6), -1, 0, 0, 0, -1082130432, 0);
	}
	else
	{
		func_150(&(Local_251.f_6));
	}
}

void func_150(int iParam0)//Position - 0x563F
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


























int func_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6)//Position - 0x667D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
		{
			if ((!*uParam1 && (MISC::GET_GAME_TIMER() - *uParam2) > 500) && *uParam4 >= fParam6)
			{
				*uParam1 = 1;
				*uParam3++;
				if (*uParam3 >= iParam5)
				{
					return 1;
				}
			}
		}
		else if (*uParam1)
		{
			*uParam2 = MISC::GET_GAME_TIMER();
			*uParam1 = 0;
		}
		Var1 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(iVar0, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
		Var4 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) - ENTITY::GET_ENTITY_VELOCITY(iVar0) };
		*uParam4 = GlobalFunc_168(Var4, Var1);
	}
	return 0;
}



void func_179()//Position - 0x678E
{
	if (GlobalFunc_4947(Local_269))
	{
		if (!GlobalFunc_6964(Local_251, -2017877118))
		{
			if (!GlobalFunc_775(Local_251, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, Local_248), 0.5f))
			{
				if (!GlobalFunc_6964(Local_251, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_251, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, Local_248), 1f, 60000, 0.3f, 512, -ENTITY::GET_ENTITY_HEADING(Local_269));
				}
			}
			else if (!GlobalFunc_6964(Local_251, 1920390111))
			{
				TASK::TASK_ACHIEVE_HEADING(Local_251, -ENTITY::GET_ENTITY_HEADING(Local_269), 0);
			}
		}
		PED::SET_PED_CAPSULE(Local_251, 0.1f);
	}
}

void func_180()//Position - 0x682A
{
	if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_251, 10f))
		{
			func_196(14);
		}
		else
		{
			func_196(13);
		}
	}
	else if (((((iLocal_95 != 15 && iLocal_95 != 9) && iLocal_95 != 10) && iLocal_95 != 6) && iLocal_95 != 8) && iLocal_95 != 7)
	{
		func_196(15);
	}
}

bool func_181(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x68A1
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_187(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_49[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_184();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_182(&(Local_49[iVar4 /*4*/]), Var1, iParam1, &(Local_49[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_49[iVar4 /*4*/].f_3) < iParam4);
}

int func_182(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0x6962
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
			if (bLocal_90)
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
				if (bLocal_90)
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


int func_184()//Position - 0x6B53
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_187(int iParam0, int iParam1)//Position - 0x6C49
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}






void func_193(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6FFA
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_194()//Position - 0x7049
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 20f))
		{
			return 1;
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f)
		{
			if (iLocal_234 == -1)
			{
				iLocal_234 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_234) > 6000)
			{
				return 1;
			}
		}
	}
	else if (GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 10f))
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f)
		{
			if (iLocal_234 == -1)
			{
				iLocal_234 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_234) > 5500)
			{
				return 1;
			}
		}
	}
	else
	{
		iLocal_234 = -1;
	}
	return 0;
}


void func_196(int iParam0)//Position - 0x7115
{
	func_200(iParam0);
	func_197(iParam0);
	Local_251.f_14 = MISC::GET_GAME_TIMER();
	iLocal_95 = iParam0;
}

void func_197(int iParam0)//Position - 0x7135
{
	var uVar0;
	var uVar1;
	
	switch (iParam0)
	{
		case 1:
			if (!GlobalFunc_6964(Local_251, -2017877118))
			{
				if (GlobalFunc_4947(Local_269))
				{
					TASK::TASK_PLAY_ANIM(Local_251, "mini@repair", "fixing_a_ped", 1.5f, -1.5f, -1, 1, 0, 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_6964(Local_251, -1794415470))
			{
				if (GlobalFunc_4947(Local_281))
				{
					TASK::TASK_ENTER_VEHICLE(Local_251, Local_281, 60000, -1, 2f, 524296, 0);
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_6964(Local_251, 713668775))
			{
				if (GlobalFunc_4947(Local_281))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_251, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_269, -1f, 0.5f, 0f), 1f, 30000, 0.25f, 0, 141.2603f);
				}
			}
			break;
		
		case 5:
			func_179();
			break;
		
		case 6:
			if (!GlobalFunc_6964(Local_251, -1794415470))
			{
				if (GlobalFunc_4947(Local_269))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_251, 0))
					{
						TASK::TASK_ENTER_VEHICLE(Local_251, Local_269, 60000, -1, 2f, 1, 0);
					}
				}
			}
			break;
		
		case 7:
			if (!GlobalFunc_6964(Local_251, -1794415470))
			{
				if (GlobalFunc_4947(Local_281))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_251, 0))
					{
						TASK::TASK_ENTER_VEHICLE(Local_251, Local_281, 60000, -1, 2f, 1, 0);
					}
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_6964(Local_251, 242628503) || TASK::GET_SCRIPT_TASK_STATUS(Local_251, 242628503) == 2)
			{
				TASK::CLEAR_PED_TASKS(Local_251);
			}
			if (GlobalFunc_4947(Local_275))
			{
				if (!GlobalFunc_6964(Local_251, -1794415470))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_251, 0))
					{
						TASK::TASK_ENTER_VEHICLE(Local_251, Local_275, 60000, -1, 2f, 1, 0);
					}
				}
			}
			break;
		
		case 9:
			if (!GlobalFunc_6964(Local_251, -1273030092))
			{
				if (GlobalFunc_4947(Local_275))
				{
					if (GlobalFunc_4947(Local_269) && GlobalFunc_4947(Local_281))
					{
						if (bLocal_226)
						{
							if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_275))
							{
								TASK::TASK_VEHICLE_MISSION(Local_251, Local_275, Local_269, 11, 30f, 34341156, 1f, -1f, 1);
							}
							else
							{
								func_199();
								iParam0 = 10;
							}
						}
						else if (iLocal_94 == 1)
						{
							if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_275))
							{
								TASK::TASK_VEHICLE_MISSION(Local_251, Local_275, Local_281, 11, 30f, 34341156, 1f, -1f, 1);
							}
							else
							{
								func_199();
								iParam0 = 10;
							}
						}
					}
				}
				else if (GlobalFunc_4947(Local_269) && GlobalFunc_4947(Local_281))
				{
					if (bLocal_226)
					{
						if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_281))
						{
							TASK::TASK_VEHICLE_MISSION(Local_251, Local_281, Local_269, 11, 30f, 34341156, 1f, -1f, 1);
						}
						else
						{
							func_199();
							iParam0 = 10;
						}
					}
					else if (iLocal_94 == 1)
					{
						if (!ENTITY::IS_ENTITY_UPSIDEDOWN(Local_269))
						{
							TASK::TASK_VEHICLE_MISSION(Local_251, Local_269, Local_281, 11, 30f, 34341156, 1f, -1f, 1);
						}
						else
						{
							func_199();
							iParam0 = 10;
						}
					}
				}
			}
			break;
		
		case 10:
			if (!GlobalFunc_6964(Local_251, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_251, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 0);
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_287, 1862763509);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_251, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			break;
		
		case 11:
			if (!GlobalFunc_6964(Local_251, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_251, PLAYER::PLAYER_PED_ID(), 0);
			}
			break;
		
		case 12:
			break;
		
		case 4:
			if (!GlobalFunc_6964(Local_251, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_251, PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAPSULE(Local_251, 0f);
			}
			break;
		
		case 13:
			if (!GlobalFunc_6964(Local_251, 474215631))
			{
				TASK::CLEAR_PED_TASKS(Local_251);
				TASK::TASK_COWER(Local_251, -1);
			}
			break;
		
		case 14:
			if (!GlobalFunc_6964(Local_251, 1805844857))
			{
				if (!GlobalFunc_6964(Local_251, 474215631))
				{
					TASK::CLEAR_PED_TASKS(Local_251);
				}
				TASK::TASK_SMART_FLEE_PED(Local_251, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
			}
			break;
		
		case 15:
			if (!GlobalFunc_6964(Local_251, 780511057))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_287, 1862763509);
				TASK::TASK_COMBAT_PED(Local_251, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			break;
		
		case 16:
			if (!GlobalFunc_6964(Local_251, 242628503))
			{
				if (GlobalFunc_4947(Local_281))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar1);
					if (!PED::IS_PED_IN_VEHICLE(Local_251, Local_281, 0))
					{
						TASK::TASK_ENTER_VEHICLE(0, Local_281, 60000, -1, 2f, 1, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_281, 30f, 786469);
					TASK::CLOSE_SEQUENCE_TASK(uVar1);
					TASK::TASK_PERFORM_SEQUENCE(Local_251, uVar1);
					TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					func_198(&uLocal_229, &uLocal_230, &uLocal_231, &uLocal_232);
				}
			}
			break;
		
		case 17:
			if (!GlobalFunc_6964(Local_251, -875674219))
			{
			}
			break;
		
		case 19:
			PED::SET_PED_CAPSULE(Local_251, 0f);
			if (!GlobalFunc_6964(Local_251, 780511057))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_287, 1862763509);
				TASK::TASK_COMBAT_PED(Local_251, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			break;
	}
}

void func_198(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7630
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0f;
}

void func_199()//Position - 0x7648
{
	var uVar0;
	
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_251, 0))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 0);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_287, 1862763509);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_251, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}

void func_200(int iParam0)//Position - 0x7696
{
	switch (iParam0)
	{
		case 1:
			if (func_209(Local_251, 20f))
			{
				func_208("FP2_RPAIR", 0, 5000);
			}
			break;
		
		case 3:
			func_205("FP2_REACTTOW", iParam0, 1);
			break;
		
		case 2:
			func_205("FP2_REACTCAR", iParam0, 0);
			break;
		
		case 4:
			if (iLocal_94 == 1)
			{
				func_208("FP2_ABUSETOW", 1, 5000);
			}
			else if (bLocal_226)
			{
				func_208("FP2_REACTCAR", 1, 5000);
			}
			break;
		
		case 5:
			if (func_209(Local_251, 20f))
			{
				func_205("FP2_RETRPAIR", iParam0, 0);
			}
			break;
		
		case 7:
			func_205("FP2_ENTTOW", iParam0, 0);
			break;
		
		case 6:
			func_205("FP2_ENTCAR", iParam0, 0);
			break;
		
		case 9:
			if (func_209(Local_251, 20f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_208("FP2_VEHCHASE", 0, 5000);
				}
			}
			break;
		
		case 10:
			break;
		
		case 14:
			if (func_209(Local_251, 20f))
			{
				GlobalFunc_5977();
				func_208("FP2_FLEE", 0, 5000);
			}
			break;
		
		case 13:
			if (func_209(Local_251, 20f))
			{
				if (GlobalFunc_745())
				{
					func_201("GENERIC_FRIGHTENED_MED");
				}
				else
				{
					func_201("GENERIC_FRIGHTENED_HIGH");
				}
			}
			break;
		
		case 15:
			if (func_209(Local_251, 20f))
			{
				func_208("FP2_ATTACK", 0, 5000);
			}
			break;
		
		case 11:
			if (func_209(Local_251, 20f))
			{
				if (GlobalFunc_745())
				{
					func_201("GENERIC_CURSE_MED");
				}
				else
				{
					func_201("GENERIC_CURSE_HIGH");
				}
			}
			break;
		
		case 12:
			if (func_209(Local_251, 20f))
			{
				func_208("FP2_TOW", 0, 5000);
			}
			break;
		
		case 17:
			if (func_209(Local_251, 20f))
			{
				if (GlobalFunc_745())
				{
					func_201("GENERIC_CURSE_MED");
				}
				else
				{
					func_201("GENERIC_CURSE_HIGH");
				}
			}
			break;
		
		case 19:
			if (func_209(Local_251, 20f))
			{
				func_205("FP2_ENTCAR", iParam0, 0);
			}
			break;
	}
}

void func_201(char* sParam0)//Position - 0x78C3
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_251, sParam0, "S_M_M_TRUCKER_01_BLACK_FULL_02", "SPEECH_PARAMS_FORCE", 0);
}




void func_205(char* sParam0, int iParam1, int iParam2)//Position - 0x792E
{
	struct<6> Var0;
	
	if (iLocal_95 != iParam1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		Var0 = { GlobalFunc_560() };
		if ((((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam0) && !TASK::IS_PED_IN_WRITHE(Local_251)) && !PED::IS_PED_RAGDOLL(Local_251)) && !PED::IS_PED_BEING_STUNNED(Local_251, 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_251))
		{
			GlobalFunc_5157(&uLocal_292, cLocal_291, sParam0, 7, iParam2, 0);
		}
	}
}



void func_208(char* sParam0, bool bParam1, int iParam2)//Position - 0x79FC
{
	struct<6> Var0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_233) > iParam2 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		Var0 = { GlobalFunc_560() };
		if ((((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam0) && !TASK::IS_PED_IN_WRITHE(Local_251)) && !PED::IS_PED_RAGDOLL(Local_251)) && !PED::IS_PED_BEING_STUNNED(Local_251, 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_251))
		{
			GlobalFunc_5157(&uLocal_292, cLocal_291, sParam0, 7, 0, 0);
			if (bParam1)
			{
				Local_251.f_15++;
			}
			iLocal_233 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_209(int iParam0, float fParam1)//Position - 0x7A84
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iParam0, 0) <= fParam1 && func_210(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0, int iParam1)//Position - 0x7AD1
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	fVar6 = MISC::ABSF((Var0.f_2 - Var3.f_2));
	if (fVar6 <= 1.5f)
	{
		return 1;
	}
	return 0;
}


int func_212()//Position - 0x7B6A
{
	if ((iLocal_95 != 15 && iLocal_95 != 20) && iLocal_95 != 14)
	{
		if (Local_251.f_15 >= 3)
		{
			func_196(15);
			return 1;
		}
	}
	return 0;
}

void func_213()//Position - 0x7BA1
{
	func_232();
	func_231();
	func_230();
	func_228();
	func_224();
	func_223();
	func_214();
}

void func_214()//Position - 0x7BC5
{
	if (iLocal_95 != 14 && iLocal_95 != 13)
	{
		if (GlobalFunc_8619(Local_251, 1090519040, 1097859072))
		{
			func_196(14);
			return;
		}
		if (!func_221() || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_251, 30f))
			{
				if (func_216(Local_251, 1, 50f, 150f, 0, 1, 0, 0))
				{
					func_215();
					return;
				}
			}
		}
	}
}

void func_215()//Position - 0x7C45
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_251, 1))
	{
		func_180();
	}
	else
	{
		if (GlobalFunc_4947(Local_281))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_251, Local_281, 0))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_251, Local_281, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
				iLocal_95 = 14;
				return;
			}
		}
		if (GlobalFunc_4947(Local_269))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_251, Local_269, 0))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_251, Local_269, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
				iLocal_95 = 14;
				return;
			}
		}
		if (GlobalFunc_4947(Local_275))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_251, Local_275, 0))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_251, Local_275, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
				iLocal_95 = 14;
			}
		}
	}
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_251);
}

int func_216(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7D19
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
		else if (func_217(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0, float fParam1)//Position - 0x7DD4
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
				if (func_218(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_218(int iParam0, float fParam1)//Position - 0x7E4A
{
	return func_181(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}



int func_221()//Position - 0x7ED1
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_251, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}


void func_223()//Position - 0x7F43
{
	if ((((((iLocal_95 != 6 && iLocal_95 != 7) && iLocal_95 != 8) && iLocal_95 != 9) && iLocal_95 != 10) && iLocal_95 != 14) && iLocal_95 != 13)
	{
		if (bLocal_226 || iLocal_94 == 1)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -419.0416f, -2179.051f, 8.78829f, -389.5436f, -2179.148f, 20.31836f, 25f, 0, 1, 0))
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_251))
				{
					if (GlobalFunc_4947(Local_275))
					{
						func_196(8);
					}
					else if (bLocal_226)
					{
						func_196(7);
					}
					else if (iLocal_94 == 1)
					{
						func_196(6);
					}
				}
			}
		}
	}
}

void func_224()//Position - 0x8003
{
	if (GlobalFunc_4947(Local_281))
	{
		if (((func_227() && iLocal_95 != 6) && iLocal_95 != 11) && iLocal_95 != 8)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_281, 0))
			{
				func_196(3);
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_155(Local_281, PLAYER::PLAYER_PED_ID(), 6f))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_281, PLAYER::PLAYER_PED_ID()))
					{
						func_196(15);
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_281, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					func_196(15);
				}
			}
		}
	}
	if (GlobalFunc_4947(Local_269))
	{
		if ((func_227() && iLocal_95 != 7) && iLocal_95 != 8)
		{
			if (iLocal_95 != 2)
			{
				if (iLocal_95 != 4)
				{
					if (bLocal_226)
					{
						func_196(2);
						return;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_155(Local_269, PLAYER::PLAYER_PED_ID(), 6f))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_269, PLAYER::PLAYER_PED_ID()))
							{
								func_196(15);
							}
						}
					}
					else if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_269))
					{
						func_196(15);
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_269, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
						{
							func_196(15);
						}
					}
				}
			}
		}
		if (func_225())
		{
			if (GlobalFunc_775(Local_269, Local_269.f_1, 2f))
			{
				func_196(5);
			}
		}
	}
	else if ((((((func_227() && iLocal_95 != 7) && iLocal_95 != 6) && iLocal_95 != 8) && iLocal_95 != 11) && iLocal_95 != 16) && iLocal_95 != 7)
	{
		func_196(16);
	}
}

int func_225()//Position - 0x81B3
{
	if (func_226())
	{
		if (iLocal_94 == 0 && !bLocal_226)
		{
			if (iLocal_95 == 11 && GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 5f))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_226()//Position - 0x81F2
{
	if ((((((iLocal_95 == 5 || iLocal_95 == 1) || iLocal_95 == 17) || !func_227()) || iLocal_91 == 2) || iLocal_95 == 20) || iLocal_95 == 19)
	{
		return 0;
	}
	return 1;
}

int func_227()//Position - 0x8246
{
	if ((((((iLocal_95 != 14 && iLocal_95 != 13) && iLocal_95 != 15) && iLocal_95 != 9) && iLocal_95 != 10) && iLocal_95 != 16) && iLocal_95 != 12)
	{
		return 1;
	}
	return 0;
}

void func_228()//Position - 0x8297
{
	bool bVar0;
	
	if ((((func_227() && iLocal_94 == 0) && iLocal_95 != 6) && iLocal_95 != 7) && iLocal_95 != 8)
	{
		if (iLocal_95 != 11)
		{
			if (func_229(&bVar0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (bVar0)
					{
						func_196(15);
					}
					else
					{
						func_196(11);
					}
				}
				else
				{
					func_196(15);
				}
			}
		}
		else if (func_225())
		{
			func_196(5);
		}
	}
}

int func_229(var uParam0)//Position - 0x8314
{
	if (GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 2f) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_251, PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_RAGDOLL(Local_251))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 0;
			}
			return 1;
		}
	}
	return 0;
}

void func_230()//Position - 0x835F
{
	if (iLocal_95 == 9 && iLocal_95 != 12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_251, 0))
		{
			if (GlobalFunc_7191(PED::GET_VEHICLE_PED_IS_IN(Local_251, 0)))
			{
				func_196(12);
			}
		}
	}
}

void func_231()//Position - 0x8397
{
	if (((iLocal_95 != 17 && iLocal_95 != 14) && iLocal_95 != 13) && iLocal_95 != 15)
	{
		if (fLocal_238 < 20f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -414.4899f, -2181.967f, 11.93531f, -414.1714f, -2170.252f, 5.64993f, 12.63f, 0, 1, 0))
			{
				fLocal_238 = (fLocal_238 + MISC::GET_FRAME_TIME());
			}
		}
		else
		{
			func_196(17);
			fLocal_238 = 0f;
		}
	}
}

void func_232()//Position - 0x8416
{
	if (iLocal_95 != 20)
	{
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_251, 15f))
		{
			if ((GlobalFunc_116(0) && GlobalFunc_666()) && GlobalFunc_111())
			{
				if ((GlobalFunc_791(0) || GlobalFunc_791(1)) || GlobalFunc_791(2))
				{
					iLocal_95 = 20;
				}
			}
		}
	}
}



void func_235()//Position - 0x84D9
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_223, 220f))
	{
		if (!iLocal_289 && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_223, 100f))
		{
			iLocal_289 = func_121(&iLocal_288, joaat("sadler"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_223, 240f))
	{
		if (iLocal_289)
		{
			GlobalFunc_190(&iLocal_288);
			iLocal_289 = 0;
		}
	}
}

void func_236()//Position - 0x855F
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_251) && iLocal_95 != 15)
	{
		if (GlobalFunc_775(Local_251, Local_223, 200f))
		{
			bLocal_242 = true;
		}
		if (!GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 150f) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_251))
		{
			fLocal_235 = (fLocal_235 + MISC::GET_FRAME_TIME());
			if (fLocal_235 > 10f)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(Local_251))
				{
					func_193(&Local_251, 0, 1, 1);
					GlobalFunc_190(&Local_269);
				}
				else
				{
					GlobalFunc_69(&Local_251);
					GlobalFunc_6692(&Local_269);
				}
				return;
			}
		}
		else if (!GlobalFunc_155(Local_251, PLAYER::PLAYER_PED_ID(), 200f))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_251))
			{
				func_193(&Local_251, 0, 1, 1);
				GlobalFunc_190(&Local_269);
			}
			else
			{
				GlobalFunc_69(&Local_251);
				GlobalFunc_6692(&Local_269);
			}
		}
	}
}

void func_237()//Position - 0x862D
{
	func_238();
	func_124(&iLocal_267, &uLocal_268, &iLocal_94, &iLocal_218, &iLocal_217, Local_223, Local_281, 0, 1090519040);
	func_149();
	func_138();
	switch (iLocal_92)
	{
		case 0:
			if (func_103(iLocal_91, bLocal_39))
			{
				GlobalFunc_5974("PRB_GOVAN", &iLocal_212);
				iLocal_92 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4947(iLocal_267))
			{
				if ((iLocal_94 == 1 || iLocal_94 == 2) || iLocal_94 == 3)
				{
					RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
					iLocal_92 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_218);
			func_91(0);
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_281))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_281, -1);
			}
			func_28(1, 1, 1);
			iLocal_92 = 1;
			break;
	}
}

void func_238()//Position - 0x8703
{
	if (GlobalFunc_4947(Local_269))
	{
		if (!bLocal_226)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_269, 0))
			{
				bLocal_226 = true;
			}
		}
		else if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_269))
		{
			bLocal_226 = false;
		}
	}
}

void func_239()//Position - 0x8742
{
	switch (iLocal_92)
	{
		case 0:
			if (func_103(iLocal_91, 0))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
				func_373();
				GlobalFunc_5198(34);
				if (GlobalFunc_Is_Mission_Retry())
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-399.8117f, -2172.942f, 9.3184f, 50f, 0, 0, 1, 1, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-399.8117f, -2172.942f, 9.3184f, 50f, 0);
					func_245(1);
				}
				else
				{
					if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						func_107(PLAYER::PLAYER_PED_ID(), -404.3334f, -2147.648f, 9.314f, 182.5609f);
						CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						MISC::CLEAR_AREA_OF_VEHICLES(-399.8117f, -2172.942f, 9.3184f, 50f, 0, 0, 1, 1, 0);
						func_240(-404.3334f, -2147.648f, 9.314f, 1112014848, 12, 5000, 0, 0);
						GlobalFunc_79(500, 1);
					}
					if (iLocal_91 == 2)
					{
						iLocal_92 = 0;
					}
					else
					{
						iLocal_92 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_91(0);
			break;
	}
}

void func_240(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x8855
{
	var uVar0;
	int iVar1;
	
	uVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, iParam3, iParam4, 127);
	if (STREAMING::STREAMVOL_IS_VALID(uVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam5);
		while (!STREAMING::STREAMVOL_HAS_LOADED(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam7)
			{
				func_242();
			}
			if (bParam6)
			{
				GlobalFunc_187();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(uVar0);
	}
}


void func_242()//Position - 0x88D2
{
	if (!Global_14393.f_1 == 1)
	{
		if (GlobalFunc_116(0))
		{
			GlobalFunc_6823(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}



void func_245(int iParam0)//Position - 0x89DE
{
	func_253(1, 1);
	bLocal_39 = true;
	iLocal_91 = iParam0;
	if (iLocal_91 == 0)
	{
		iLocal_91 = 0;
	}
	iLocal_212 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	iLocal_92 = 0;
	func_246(1);
}

void func_246(bool bParam0)//Position - 0x8A1A
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	func_252(1, 1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_25();
	func_251();
	GlobalFunc_587();
	func_249();
	GlobalFunc_587();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_267))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_267, 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		GlobalFunc_5977();
		HUD::CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_247();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	if (CAM::DOES_CAM_EXIST(uLocal_219))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_219, 0);
	}
}

void func_247()//Position - 0x8AD2
{
	GlobalFunc_190(&Local_281);
	GlobalFunc_190(&Local_269);
	GlobalFunc_190(&Local_275);
	GlobalFunc_190(&iLocal_267);
	func_193(&Local_251, 1, 0, 1);
}


void func_249()//Position - 0x8B07
{
	STREAMING::REMOVE_ANIM_DICT("mini@repair");
	STREAMING::REMOVE_ANIM_DICT("amb@code_human_cower@male@react_cowering");
}


void func_251()//Position - 0x8B27
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_281.f_5);
}

void func_252(bool bParam0, int iParam1, int iParam2)//Position - 0x8B38
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
			func_30(iParam1, iParam2, 1, 1);
		}
	}
}

void func_253(bool bParam0, bool bParam1)//Position - 0x8B97
{
	if (bParam0)
	{
		func_252(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_254(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_254(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x8BCA
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
			iLocal_48 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_48 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}























































































































void func_373()//Position - 0x250A8
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			GlobalFunc_9815(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 24, 0);
		}
	}
}













































void func_418()//Position - 0x28297
{
	GlobalFunc_587();
	func_419();
}

void func_419()//Position - 0x282A7
{
	if (!iLocal_227)
	{
		if (GlobalFunc_4947(iLocal_267))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_267, 0))
			{
				GlobalFunc_503(iLocal_267, 324);
				GlobalFunc_504(iLocal_267, 323);
				iLocal_227 = 1;
			}
		}
	}
}


void func_421()//Position - 0x282ED
{
	if (!bLocal_39 && iLocal_91 != 5)
	{
		if (iLocal_91 > 0)
		{
			func_422();
		}
	}
}

void func_422()//Position - 0x2830E
{
	int iVar0;
	
	iVar0 = 0;
	if (!GlobalFunc_4947(iLocal_267))
	{
		if (!GlobalFunc_4947(uLocal_268) && !GlobalFunc_4947(Local_281))
		{
			func_424(1);
			return;
		}
		if (GlobalFunc_4947(Local_281))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_281, 500f))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (GlobalFunc_4947(uLocal_268))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_268, 500f))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 >= 2)
		{
			if (iLocal_91 != 4)
			{
				func_424(2);
				return;
			}
		}
	}
	else
	{
		if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_267, 500f))
		{
			iVar0++;
		}
		if (GlobalFunc_4947(uLocal_268))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_268, 500f))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (GlobalFunc_4947(Local_281))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_281, 500f))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 >= 3)
		{
			if (iLocal_91 != 4)
			{
				func_424(2);
				return;
			}
		}
		iVar0 = 0;
		if (GlobalFunc_7257(iLocal_267))
		{
			iVar0++;
		}
		if (GlobalFunc_4947(uLocal_268))
		{
			if (GlobalFunc_7257(uLocal_268))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (GlobalFunc_4947(Local_281))
		{
			if (GlobalFunc_7257(Local_281))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 >= 3)
		{
			func_424(3);
			return;
		}
	}
}


void func_424(int iParam0)//Position - 0x284FF
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_210 = "PRB_FWRECK";
			break;
		
		case 2:
			sLocal_210 = "PRB_FFAR";
			break;
		
		case 3:
			sLocal_210 = "PRB_FSTUCK";
			break;
	}
	iLocal_91 = 5;
	iLocal_92 = 0;
}















void func_439()//Position - 0x28D92
{
	int iVar0;
	
	func_450();
	func_448();
	func_441();
	func_440();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_96[iVar0] = 0;
		iLocal_100[iVar0] = 0;
		iLocal_243[iVar0] = 0;
		iVar0++;
	}
}

void func_440()//Position - 0x28DD1
{
	PED::ADD_RELATIONSHIP_GROUP("ENEMY", &uLocal_287);
}

void func_441()//Position - 0x28DE5
{
	struct<3> Var0[5];
	
	Var0[0 /*3*/] = { -1138.69f, -1893.385f, 2.453f };
	Var0[1 /*3*/] = { -1067.893f, -1941.208f, 12.1445f };
	Var0[2 /*3*/] = { -1062.374f, -2034.396f, 12.1273f };
	Var0[3 /*3*/] = { -1178.806f, -2101.68f, 12.3805f };
	Var0[4 /*3*/] = { -1250.224f, -2047.043f, 8.9687f };
	func_442(&Var0, 5);
}

void func_442(var uParam0, int iParam1)//Position - 0x28E67
{
	int iVar0;
	
	GlobalFunc_500(&uLocal_105);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		GlobalFunc_499(&uLocal_105, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	GlobalFunc_498(&uLocal_105);
	GlobalFunc_5902(&uLocal_157, &uLocal_105, 50f);
}






void func_448()//Position - 0x2916C
{
	Local_251 = { func_449(-409.7205f, -2175.858f, 9.31836f, 121.7754f, joaat("s_m_m_trucker_01")) };
}

struct<16> func_449(struct<3> Param0, float fParam3, int iParam4)//Position - 0x29196
{
	struct<16> Var0;
	
	Var0.f_14 = -1;
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_450()//Position - 0x291C2
{
	Local_281 = { GlobalFunc_3018(-413.2349f, -2182.086f, 9.3184f, 83.9445f, joaat("towtruck")) };
	Local_269 = { GlobalFunc_3018(-412.3477f, -2176.262f, 9.3184f, 281.0786f, joaat("peyote")) };
	Local_275 = { GlobalFunc_3018(-386.5059f, -2168.738f, 9.3184f, 87.2085f, joaat("ruiner")) };
}


void func_452()//Position - 0x29252
{
	GlobalFunc_3008(1);
	GlobalFunc_695(1);
	func_51();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	GlobalFunc_771();
	GlobalFunc_10376();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_290, 0);
	func_246(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






