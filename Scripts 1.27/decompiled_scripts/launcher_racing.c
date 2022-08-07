#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
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
	struct<4> Local_39[10];
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	struct<6> Local_82 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	var uLocal_102[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	float fLocal_120 = 0f;
	struct<3> Local_121[3];
	float fLocal_131[3] = { 0f, 0f, 0f };
	struct<3> Local_135[7];
	float fLocal_157[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_165[3] = { 0, 0, 0 };
	int iLocal_169[3] = { 0, 0, 0 };
	int iLocal_173[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	char[] cLocal_183[8] = 0;
	char* sLocal_184[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	struct<3> Local_200 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	float fLocal_212 = 0f;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 8;
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
	var uLocal_362 = 1;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_92 = 1;
	bLocal_101 = true;
	iLocal_182 = joaat("feltzer2");
	iLocal_192 = 1;
	Local_200 = { 0f, 0f, 0f };
	Local_203 = { 1f, 1f, 1f };
	Local_206 = { 0f, 0f, 0f };
	Local_209 = { 0f, 0f, 0f };
	fLocal_212 = 0f;
	MISC::_0x6F2135B6129620C1(1);
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_197(0);
	}
	func_194();
	switch (Local_82.f_1)
	{
		case 1:
		case 2:
			if (!GlobalFunc_892(0, 8))
			{
				func_197(0);
			}
			if (!func_192(Local_82))
			{
				func_197(0);
			}
			break;
		
		case 3:
			if (!GlobalFunc_892(0, 7))
			{
				func_197(0);
			}
			break;
		
		case 0:
			func_197(0);
			break;
	}
	func_186();
	if (!func_162())
	{
		func_197(0);
	}
	func_156();
	while (true)
	{
		func_153(&uLocal_215);
		if (func_162())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_81)
				{
					case 0:
						iLocal_81 = 1;
						break;
					
					case 1:
						func_144();
						func_115();
						break;
					
					case 2:
						func_54();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_197(0);
			}
		}
		else
		{
			func_197(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19C
{
	if (!bLocal_99)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x1B5
{
	GlobalFunc_3785(-1);
	GlobalFunc_1799(0);
	GlobalFunc_3784(Local_88);
	GlobalFunc_1800();
	Global_1312344 = 1;
	Global_1312344.f_1 = Local_82;
	StringCopy(&(Global_1312344.f_2), func_4(), 24);
	StringCopy(&(Global_1312344.f_8), func_3(Local_82), 32);
	Global_1312344.f_16 = { Local_88 };
	Global_1315903 = 1;
	func_197(1);
}

char* func_3(int iParam0)//Position - 0x210
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_ORBIS_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()//Position - 0x4EC
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_ORBIS_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_PC_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}





void func_9()//Position - 0x591
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_82.f_2 = -1;
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	while (!func_47())
	{
		SYSTEM::WAIT(0);
	}
	if (Local_82.f_1 != 3)
	{
		GlobalFunc_10834(GlobalFunc_8329(), 1, Local_82.f_3);
		iVar0 = MISC::GET_GAME_TIMER() + 1500;
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (GlobalFunc_4947(iVar1))
		{
			while (!GlobalFunc_530(iVar1, 3f, 2, 1056964608, 0, 1) || MISC::GET_GAME_TIMER() < iVar0)
			{
				SYSTEM::WAIT(0);
			}
		}
		uVar2 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(uVar2))
		{
			PLAYER::SET_PLAYER_CONTROL(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()//Position - 0x63F
{
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		SCRIPT::REQUEST_SCRIPT("mission_Race");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_Race"))
		{
			SCRIPT::REQUEST_SCRIPT("mission_Race");
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mission_Race", &Local_82, 6, 17000);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_Race");
	func_197(1);
}





































int func_47()//Position - 0x1979
{
	int iVar0;
	
	iVar0 = GlobalFunc_7733(&(Local_82.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}







void func_54()//Position - 0x1D57
{
	var uVar0;
	
	switch (iLocal_95)
	{
		case 0:
			if (GlobalFunc_6490(0, -1))
			{
				HUD::CLEAR_HELP(1);
				func_102();
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				iLocal_100 = 1;
				bLocal_98 = false;
				bLocal_99 = false;
				iLocal_95 = 1;
			}
			break;
		
		case 1:
			if (func_67())
			{
				iLocal_95 = 2;
			}
			break;
		
		case 2:
			uVar0 = PLAYER::GET_PLAYER_INDEX();
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
			PLAYER::SET_PLAYER_CONTROL(uVar0, 1, 0);
			GlobalFunc_8316(0, 1, 1, 0);
			GlobalFunc_6489(1, -1);
			iLocal_95 = 0;
			if (bLocal_98)
			{
				iLocal_81 = 3;
			}
			else
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
				iLocal_81 = 1;
			}
			break;
	}
}













int func_67()//Position - 0x2181
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	GlobalFunc_612(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	if (iLocal_97 != 0)
	{
		if (SYSTEM::TIMERA() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_97 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
	bVar5 = (iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_96 == 1)
		{
			bLocal_99 = true;
		}
		else
		{
			bLocal_99 = false;
		}
		bLocal_98 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_193 = 0;
		bLocal_98 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_96 == 0)
			{
				iLocal_96 = 1;
			}
			else if (iLocal_96 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_96 == 1)
			{
				iLocal_96 = 0;
			}
			else if (iLocal_96 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_97 = 1;
			}
			GlobalFunc_1588(iLocal_96, 1, 1);
		}
	}
	func_68(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_68(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x22DC
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!GlobalFunc_240(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!GlobalFunc_4997(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (GlobalFunc_6888(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar57, &iVar58);
		fVar60 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (GlobalFunc_1313())
		{
			iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) * fVar60));
		}
		fVar61 = (SYSTEM::TO_FLOAT(iVar57) / SYSTEM::TO_FLOAT(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (GlobalFunc_1313())
		{
			fVar59 = 1f;
		}
		iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar57) / fVar59));
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar59));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(29), GlobalFunc_5343(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				GlobalFunc_1327(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) != 0)
				{
					GlobalFunc_1326();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						GlobalFunc_1326();
						GlobalFunc_1325((((Global_17233 + fParam5) - 0.00390625f) - GlobalFunc_5346("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				GlobalFunc_1327(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var37.x = (Var37.x * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.x / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					GlobalFunc_6888(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				GlobalFunc_1324(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				GlobalFunc_1327(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				GlobalFunc_1324(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					GlobalFunc_6888(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					GlobalFunc_1323(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_4045), GlobalFunc_5343(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_2543305.f_21)) != 0 && Global_2543305.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2543305.f_67 != 0)
				{
					GlobalFunc_6888(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				GlobalFunc_1324(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				GlobalFunc_1327(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				GlobalFunc_1324(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2543305.f_67 != 0)
				{
					GlobalFunc_6888(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					GlobalFunc_1323(Global_2543305.f_67, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_2543305.f_67), GlobalFunc_5343(Global_2543305.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2543305.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_2543305.f_66) > Global_2543305.f_65)
					{
						StringCopy(&(Global_2543305.f_21), "", 16);
						Global_2543305.f_65 = -1;
					}
				}
			}
			GlobalFunc_7827(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar63 = (Global_17236.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17236.f_7199)
					{
						HUD::GET_HUD_COLOUR(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					GlobalFunc_5345(bVar31, 1, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (MISC::IS_BIT_SET(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (GlobalFunc_6888(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (GlobalFunc_6888(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6888(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6888(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6888(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (GlobalFunc_6888(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (GlobalFunc_6888(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															GlobalFunc_1323(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar28)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar28)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (GlobalFunc_6888(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (GlobalFunc_6888(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															GlobalFunc_1323(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[iVar20]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (GlobalFunc_6888(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6888(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6888(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6888(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										GlobalFunc_1321((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (GlobalFunc_6888(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6888(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6888(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6888(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										GlobalFunc_1320((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (GlobalFunc_6888(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (GlobalFunc_6888(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (GlobalFunc_6888(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (GlobalFunc_6888(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (GlobalFunc_6888(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (GlobalFunc_6888(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												GlobalFunc_1323(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[iVar22]), GlobalFunc_5343(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * GlobalFunc_1319(Global_17236.f_3843[iVar22])), (fVar36 * GlobalFunc_1319(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
								{
									if (GlobalFunc_6888(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		GlobalFunc_7629();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		GlobalFunc_732(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


































void func_102()//Position - 0x6381
{
	GlobalFunc_262(0);
	GlobalFunc_1317(1, 0, 0, 0, 0);
	GlobalFunc_1316(1, 1, 1, 1, 1);
	if (Local_82.f_1 == 3)
	{
		GlobalFunc_1318("SEA_MENU");
	}
	else
	{
		GlobalFunc_1318("STREET_MENU");
	}
	func_106(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_106(1, "RACES_OPT_MP", 0, 1, 0, 0);
	GlobalFunc_261(201, "ITEM_SELECT", -1);
	GlobalFunc_261(202, "ITEM_EXIT", -1);
	GlobalFunc_260(11, "ITEM_SCROLL", -1);
	GlobalFunc_1543(0);
	GlobalFunc_1588(0, 1, 1);
	iLocal_96 = 0;
}




void func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x6574
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4494 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 1)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17236.f_73[Global_17236.f_4494 /*4*/]), sParam1, 16);
	Global_17236.f_1074[Global_17236.f_4494] = iParam3;
	Global_17236.f_1325[Global_17236.f_4494] = iParam4;
	Global_17236.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = GlobalFunc_6889(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			GlobalFunc_6888(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = GlobalFunc_1311(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}









void func_115()//Position - 0x6ECA
{
	int iVar0;
	
	if (func_143())
	{
		if (func_126())
		{
			iVar0 = 6;
			if (Local_82.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_124(iVar0);
			if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[iVar0]))
			{
				if (bLocal_101)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 3))
					{
						TASK::STOP_ANIM_TASK(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], -1056964608);
					}
					func_117(iVar0);
				}
			}
			PAD::SET_INPUT_EXCLUSIVE(0, 51);
			if (PAD::IS_CONTROL_JUST_RELEASED(0, 51))
			{
				iLocal_193 = 1;
				HUD::CLEAR_HELP(1);
				iLocal_81 = 3;
			}
		}
		else if (!iLocal_92)
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			iLocal_92 = 1;
		}
	}
	else
	{
		func_116();
		if (!iLocal_92)
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			iLocal_92 = 1;
		}
	}
}

void func_116()//Position - 0x6F7B
{
	if (iLocal_91 && MISC::GET_GAME_TIMER() > iLocal_94)
	{
		HUD::CLEAR_HELP(1);
		iLocal_91 = 0;
	}
}

void func_117(int iParam0)//Position - 0x6F9C
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_102[iParam0]) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_194)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_102[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 64f)
				{
					iLocal_195 = 0;
					iLocal_196 = 0;
					iLocal_194 = 1;
				}
				break;
			
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_102[iParam0], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				iLocal_194 = 2;
				break;
			
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_102[iParam0], 242628503) != 1 || PED::IS_PED_FACING_PED(uLocal_102[iParam0], PLAYER::PLAYER_PED_ID(), 20f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_102[iParam0], PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_196)
					{
						GlobalFunc_5117(uLocal_102[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						GlobalFunc_5117(uLocal_102[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_194 = 3;
				}
				break;
			
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_102[iParam0]))
				{
					GlobalFunc_6877(&uLocal_197);
					TASK::TASK_PLAY_ANIM(uLocal_102[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_194 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_102[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 225f)
				{
					iLocal_194 = 0;
				}
				if (GlobalFunc_5182(&uLocal_197) >= 5f && !iLocal_195)
				{
					iLocal_195 = 1;
					iLocal_194 = 1;
				}
				else if (GlobalFunc_5182(&uLocal_197) >= 10f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_194 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}







void func_124(int iParam0)//Position - 0x73DD
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !GlobalFunc_1720())
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[iParam0]))
		{
			if (iLocal_92 && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_102[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_92 = 0;
			}
		}
	}
}


int func_126()//Position - 0x7453
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_142())
		{
			return 0;
		}
		if (GlobalFunc_469(GlobalFunc_8329()) < Local_82.f_3)
		{
			if (Local_82.f_1 == 3)
			{
				func_138("SEA_NA_CASH", Local_82.f_3);
			}
			else
			{
				func_138("STREET_NA_CASH", Local_82.f_3);
			}
			iLocal_91 = 1;
			iLocal_94 = MISC::GET_GAME_TIMER() + 1000;
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_190(&iLocal_0);
			iLocal_0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (!func_132())
			{
				iLocal_91 = 1;
				iLocal_94 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if ((ENTITY::GET_ENTITY_HEALTH(iLocal_0) <= 200 || FIRE::IS_ENTITY_ON_FIRE(iLocal_0)) || func_131())
			{
				func_130("RACE_VehDmg");
				iLocal_91 = 1;
				iLocal_94 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_0, -1) != PLAYER::PLAYER_PED_ID())
			{
				func_127();
				return 0;
			}
			else
			{
				if (GlobalFunc_116(0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
				{
					func_116();
					return 0;
				}
				switch (Local_82.f_1)
				{
					case 1:
						func_138("STREET_PLAY_B", Local_82.f_3);
						break;
					
					case 2:
						func_138("STREET_PLAY_C", Local_82.f_3);
						break;
					
					case 3:
						func_130("SEA_PLAY");
						break;
				}
				iLocal_91 = 1;
				iLocal_94 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else
		{
			GlobalFunc_190(&iLocal_0);
			func_127();
			return 0;
		}
	}
	return 0;
}

void func_127()//Position - 0x75C4
{
	char* sVar0;
	
	if (Local_82.f_1 == 3)
	{
		if (GlobalFunc_4947(iLocal_110))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!GlobalFunc_74(sVar0))
		{
			GlobalFunc_Display_Help_Text(sVar0);
			iLocal_91 = 1;
			iLocal_94 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (Local_82.f_1 == 1)
	{
		if (!GlobalFunc_74("STREET_NA_BIKE"))
		{
			GlobalFunc_Display_Help_Text("STREET_NA_BIKE");
			iLocal_91 = 1;
			iLocal_94 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (!GlobalFunc_74("STREET_NA_CAR"))
	{
		GlobalFunc_Display_Help_Text("STREET_NA_CAR");
		iLocal_91 = 1;
		iLocal_94 = MISC::GET_GAME_TIMER() + 1000;
	}
}



void func_130(char* sParam0)//Position - 0x767F
{
	if (!GlobalFunc_74(sParam0))
	{
		GlobalFunc_Display_Help_Text(sParam0);
	}
}

int func_131()//Position - 0x7697
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 6, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_132()//Position - 0x7713
{
	int iVar0;
	char* sVar1;
	
	switch (Local_82.f_1)
	{
		case 1:
			iVar0 = func_136();
			if (iVar0 == 1)
			{
				func_130("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_130("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_134();
			if (iVar0 == 1)
			{
				func_130("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_130("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_133())
			{
				if (GlobalFunc_4947(iLocal_110))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_130(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_133()//Position - 0x77C4
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_134()//Position - 0x7806
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (GlobalFunc_540(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 2;
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
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
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
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}


int func_136()//Position - 0x7D02
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}


void func_138(char* sParam0, var uParam1)//Position - 0x7D85
{
	if (!GlobalFunc_2541(sParam0, uParam1))
	{
		GlobalFunc_2540(sParam0, uParam1);
	}
}




int func_142()//Position - 0x7E2E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_115(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					if (Local_82.f_1 == 3 && ENTITY::IS_ENTITY_IN_WATER(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_143()//Position - 0x7E8D
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = 20;
		if (Local_82.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_88, 1) < IntToFloat(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_144()//Position - 0x7EDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_149(&uLocal_215))
	{
		if (Local_82.f_1 == 2)
		{
			if (func_146())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_181) && STREAMING::HAS_MODEL_LOADED(iLocal_181))
					{
						iLocal_110 = VEHICLE::CREATE_VEHICLE(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (PED::CAN_CREATE_RANDOM_PED(1) && PED::CAN_CREATE_RANDOM_DRIVER())
						{
							iLocal_111 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_110, 1);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_111, iLocal_110, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_111, 1);
							PED::SET_PED_KEEP_TASK(iLocal_111, 1);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_110);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_110, 1);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_110, 1);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_110, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_110, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_181);
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_116))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_182))
					{
						iLocal_116 = VEHICLE::CREATE_VEHICLE(iLocal_182, Local_117, fLocal_120, 1, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_116, 0, 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_116, 1);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_116, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_116);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_116, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_116, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_182);
						SYSTEM::WAIT(0);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_173 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_102[iVar0]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_102[iVar0]) && !GlobalFunc_6964(uLocal_102[iVar0], -2017877118))
								{
									TASK::TASK_PLAY_ANIM(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									PED::SET_PED_KEEP_TASK(uLocal_102[iVar0], 1);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_173[iVar0]))
							{
								uLocal_102[iVar0] = PED::CREATE_PED(25, iLocal_173[iVar0], Local_135[iVar0 /*3*/], fLocal_157[iVar0], 1, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_102[iVar0], Local_135[iVar0 /*3*/], 0, 0, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_102[iVar0], 1);
								TASK::TASK_PLAY_ANIM(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								PED::SET_PED_KEEP_TASK(uLocal_102[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[0]) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[1])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[2])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[3])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[4])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[5])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[6])) && GlobalFunc_4947(iLocal_110)) && GlobalFunc_4947(iLocal_116))
						{
							bLocal_101 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_173 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
								iVar0++;
							}
							iLocal_192 = 0;
						}
					}
				}
			}
		}
		else if (Local_82.f_1 == 1)
		{
			if (func_146())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_181))
					{
						iLocal_110 = VEHICLE::CREATE_VEHICLE(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (PED::CAN_CREATE_RANDOM_PED(0) && PED::CAN_CREATE_RANDOM_BIKE_RIDER())
						{
							iLocal_111 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_110, 1);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_111, iLocal_110, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_111, 1);
							PED::SET_PED_KEEP_TASK(iLocal_111, 1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 1, 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_110, 1);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_110, 1);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_110, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_110, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_181);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_173 - 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_102[iVar1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_102[iVar1]) && !GlobalFunc_6964(uLocal_102[iVar1], -2017877118))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_102[iVar1], Local_135[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										TASK::TASK_PLAY_ANIM(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										TASK::TASK_PLAY_ANIM(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									PED::SET_PED_KEEP_TASK(uLocal_102[iVar1], 1);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_173[iVar1]))
							{
								uLocal_102[iVar1] = PED::CREATE_PED(25, iLocal_173[iVar1], Local_135[iVar1 /*3*/], fLocal_157[iVar1], 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_102[iVar1], 1);
							}
							iVar1++;
						}
						if ((((GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[0]) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[1])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[2])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[3])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[4]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_102[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_173 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar1]);
								iVar1++;
							}
							iLocal_192 = 0;
						}
					}
				}
			}
		}
		else if (Local_82.f_1 == 3)
		{
			if (func_146())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_181))
					{
						iLocal_110 = VEHICLE::CREATE_VEHICLE(iLocal_181, Local_112, fLocal_115, 1, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_110);
						VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(iLocal_110, 0f);
						VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iLocal_110, 0);
						VEHICLE::_0xB28B1FE5BFADD7F5(iLocal_110, 0);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_110))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_110, 1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, 0, 1);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_165[iVar2]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_169[iVar2]))
						{
							if (!PED::IS_PED_INJURED(iLocal_169[iVar2]) && GlobalFunc_4947(iLocal_165[iVar2]))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_165[iVar2], -1))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_169[iVar2], iLocal_165[iVar2], -1);
								}
							}
						}
						else if (GlobalFunc_4947(iLocal_165[iVar2]) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_jetski_01")))
						{
							iLocal_169[iVar2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_165[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							PED::SET_PED_DIES_IN_WATER(iLocal_169[iVar2], 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_169[iVar2], 1);
						}
					}
					else if (STREAMING::HAS_MODEL_LOADED(iLocal_181))
					{
						iLocal_165[iVar2] = VEHICLE::CREATE_VEHICLE(iLocal_181, Local_121[iVar2 /*3*/], fLocal_131[iVar2], 1, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_165[iVar2]);
						VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(iLocal_165[iVar2], 0f);
						VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iLocal_165[iVar2], 1);
						VEHICLE::_0xB28B1FE5BFADD7F5(iLocal_165[iVar2], 1);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_165[iVar2]))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_165[iVar2], 1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_165[iVar2], 0, 1);
					}
					iVar2++;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_110) && ENTITY::DOES_ENTITY_EXIST(iLocal_165[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_165[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_165[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_181);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_169[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_169[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_169[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_jetski_01"));
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
			}
		}
	}
}


int func_146()//Position - 0x8616
{
	if (!func_148())
	{
		return 0;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_112, 100f) || CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}


int func_148()//Position - 0x8676
{
	if (Local_82.f_1 == 3)
	{
		return 1;
	}
	else if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_149(var uParam0)//Position - 0x86C4
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_150(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_150(var uParam0)//Position - 0x8726
{
	return func_151(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_151(var uParam0, char[4] cParam1, int iParam2)//Position - 0x873D
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (GlobalFunc_2270(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(cParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(cParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, cParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(cParam1, MISC::IS_BIT_SET(uParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}


void func_153(var uParam0)//Position - 0x885C
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 2)) || MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_154(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_154(var uParam0)//Position - 0x88E6
{
	func_155(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_155(var uParam0, char* sParam1, int iParam2)//Position - 0x88FC
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (GlobalFunc_2270(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, uParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}

void func_156()//Position - 0x89D5
{
	int iVar0;
	
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		switch (Local_82)
		{
			case 0:
				Local_112 = { -158.67f, -1555.16f, 34.63f };
				fLocal_115 = 187.71f;
				Local_117 = { -155.15f, -1550.83f, 34.53f };
				fLocal_120 = 213.13f;
				Local_200 = { -68.87878f, -1818.903f, 24.55311f };
				Local_203 = { -56.0098f, -1807.029f, 27.85417f };
				Local_135[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_135[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_135[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_135[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_135[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_135[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_135[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_157[0] = 101.91f;
				fLocal_157[1] = 38.48f;
				fLocal_157[2] = -36.7f;
				fLocal_157[3] = -52.93f;
				fLocal_157[4] = -75.07f;
				fLocal_157[5] = 33.13f;
				fLocal_157[6] = -170.02f;
				break;
			
			case 1:
				Local_112 = { 368.72f, 294.06f, 102.96f };
				fLocal_115 = 25.17f;
				Local_117 = { 373.71f, 290.72f, 102.89f };
				fLocal_120 = 33.24f;
				Local_200 = { -523.5497f, 262.2986f, 80.01991f };
				Local_203 = { -509.1013f, 272.478f, 86.17713f };
				Local_135[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_135[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_135[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_135[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_135[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_135[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_135[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_157[0] = -64.83f;
				fLocal_157[1] = -163.04f;
				fLocal_157[2] = -118.77f;
				fLocal_157[3] = 127.18f;
				fLocal_157[4] = 105.04f;
				fLocal_157[5] = -146.75f;
				fLocal_157[6] = 10.11f;
				break;
			
			case 2:
				Local_112 = { -807.98f, -2555.14f, 13.34f };
				fLocal_115 = 3.35f;
				Local_117 = { -810.1f, -2560.85f, 13.38f };
				fLocal_120 = 43.57f;
				Local_200 = { -1000.759f, -2436.092f, 17.16946f };
				Local_203 = { -986.7399f, -2424.87f, 22.16946f };
				Local_135[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_135[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_135[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_135[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_135[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_135[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_135[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_157[0] = -86.65f;
				fLocal_157[1] = -130.05f;
				fLocal_157[2] = 150.04f;
				fLocal_157[3] = 137.51f;
				fLocal_157[4] = 115.37f;
				fLocal_157[5] = -136.43f;
				fLocal_157[6] = 20.43f;
				break;
			
			case 3:
				Local_112 = { 778.59f, -1160.2f, 28.35f };
				fLocal_115 = 302.47f;
				Local_117 = { 778.47f, -1164.01f, 28.25f };
				fLocal_120 = 287.97f;
				Local_200 = { -1000.759f, -2436.092f, 17.16946f };
				Local_203 = { -986.7399f, -2424.87f, 22.16946f };
				Local_135[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_135[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_135[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_135[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_135[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_135[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_135[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_157[0] = -147.53f;
				fLocal_157[1] = 171.51f;
				fLocal_157[2] = 104.94f;
				fLocal_157[3] = 21.91f;
				fLocal_157[4] = -0.22f;
				fLocal_157[5] = 107.91f;
				fLocal_157[6] = -95.23f;
				break;
			
			case 4:
				Local_112 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_115 = 258.32f;
				Local_135[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_135[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_135[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_135[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_135[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_157[0] = 75.06f;
				fLocal_157[1] = 134.25f;
				fLocal_157[2] = -52.71f;
				fLocal_157[3] = -93.39f;
				fLocal_157[4] = -141.52f;
				Local_200 = { -1265.744f, -1057.199f, 5.410841f };
				Local_203 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		GlobalFunc_4410(Local_82, &Local_206, &Local_209, &fLocal_212);
		iLocal_173[0] = joaat("a_f_y_hipster_02");
		iLocal_173[1] = joaat("a_m_y_hipster_02");
		iLocal_173[2] = joaat("a_m_y_hipster_02");
		iLocal_173[3] = joaat("a_f_y_hipster_02");
		iLocal_173[4] = joaat("a_m_y_hipster_02");
		iLocal_173[5] = joaat("a_m_y_hipster_02");
		iLocal_173[6] = joaat("a_m_y_hipster_02");
		if (Local_82.f_1 == 1)
		{
			cLocal_183 = "random@street_race";
			sLocal_184[0] = "_car_b_chatting_female";
			sLocal_184[1] = "_car_b_chatting_male";
			sLocal_184[2] = "_car_b_chatting_male";
			sLocal_184[3] = "_car_b_chatting_female";
			sLocal_184[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_183 = "random@street_race";
			sLocal_184[0] = "_car_a_flirt_girl";
			sLocal_184[1] = "_car_a_gawker_male_a";
			sLocal_184[2] = "_car_a_gawker_male_b";
			sLocal_184[3] = "_car_b_chatting_female";
			sLocal_184[4] = "_car_b_chatting_male";
			sLocal_184[5] = "_car_b_driver";
			sLocal_184[6] = "_car_b_lookout";
			GlobalFunc_6492(&uLocal_215, iLocal_182);
		}
		iLocal_181 = GlobalFunc_4411(Local_82.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_173 - 1))
		{
			GlobalFunc_6492(&uLocal_215, iLocal_173[iVar0]);
			iVar0++;
		}
		GlobalFunc_6492(&uLocal_215, iLocal_181);
		GlobalFunc_6491(&uLocal_215, cLocal_183);
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_200, Local_203, 0, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_206, Local_209, fLocal_212, 0, 0, 1);
		iLocal_93 = 1;
	}
	else if (Local_82.f_1 == 3)
	{
		switch (Local_82)
		{
			case 5:
				Local_112 = { 3066.63f, 650.9f, 0.17f };
				fLocal_115 = 351.81f;
				Local_121[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_131[0] = 5.72f;
				Local_121[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_131[1] = 351.33f;
				Local_121[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_131[2] = 348.18f;
				break;
			
			case 6:
				Local_112 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_115 = 222.9f;
				Local_121[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_131[0] = 211.54f;
				Local_121[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_131[1] = 201.55f;
				Local_121[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_131[2] = 221.55f;
				break;
			
			case 7:
				Local_112 = { 194.64f, 3621.27f, 29.91f };
				fLocal_115 = 163.95f;
				Local_121[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_131[0] = 175.4f;
				Local_121[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_131[1] = 163.69f;
				Local_121[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_131[2] = 175.31f;
				break;
			
			case 8:
				Local_112 = { 627.58f, -2138.06f, -0.07f };
				fLocal_115 = 180.09f;
				Local_121[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_131[0] = 143.89f;
				Local_121[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_131[1] = 172.41f;
				Local_121[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_131[2] = 191.97f;
				break;
		}
		iLocal_181 = joaat("seashark");
		GlobalFunc_6492(&uLocal_215, iLocal_181);
		GlobalFunc_6492(&uLocal_215, joaat("a_m_y_jetski_01"));
	}
}






int func_162()//Position - 0x95D2
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (GlobalFunc_6687(9))
	{
		return 0;
	}
	if (GlobalFunc_39(6) || GlobalFunc_39(7))
	{
		return 0;
	}
	if (Global_54744)
	{
		return 0;
	}
	if (func_185())
	{
		return 0;
	}
	if (Local_82.f_1 != 3 && GlobalFunc_8329() != 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (((GlobalFunc_4947(uVar0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar0)) && !GlobalFunc_1287(PLAYER::PLAYER_PED_ID(), uVar0, -1)) && ENTITY::GET_ENTITY_MODEL(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_82)
	{
		case 0:
			if (Global_97327[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_97327[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_97327[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_97327[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_97327[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_97317[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_97317[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_97317[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_97317[3])
			{
				return 0;
			}
			break;
	}
	if (!func_148())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_173 - 1))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_PAUSE(0, iVar1 * 100);
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_102[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_169 - 1))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_169[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_PAUSE(0, iVar1 * 110);
				if (GlobalFunc_4947(iLocal_165[iVar1]) && PED::IS_PED_IN_VEHICLE(iLocal_169[iVar1], iLocal_165[iVar1], 0))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_165[iVar1], 30f, 786597);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_169[iVar1], uVar2);
			}
			iVar1++;
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_111))
		{
			if (GlobalFunc_4947(iLocal_110) && PED::IS_PED_IN_VEHICLE(iLocal_111, iLocal_110, 0))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_111, iLocal_110, 30f, 786597);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_111, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_164())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_173 - 1))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_102[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_PAUSE(0, iVar4 * 50);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(uLocal_102[iVar4], 1);
				}
				TASK::TASK_PERFORM_SEQUENCE(uLocal_102[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_169 - 1))
		{
			if (GlobalFunc_4947(iLocal_165[iVar4]) && Local_82.f_1 == 3)
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_165[iVar4], 0);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_169[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_PAUSE(0, iVar4 * 60);
				if (GlobalFunc_4947(iLocal_165[iVar4]) && PED::IS_PED_IN_VEHICLE(iLocal_169[iVar4], iLocal_165[iVar4], 0))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_165[iVar4], 50f, 786468);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_169[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(iLocal_169[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (GlobalFunc_4947(iLocal_110) && Local_82.f_1 == 3)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_110, 0);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_111))
		{
			if (GlobalFunc_4947(iLocal_110) && PED::IS_PED_IN_VEHICLE(iLocal_111, iLocal_110, 0))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_111, iLocal_110, 50f, 786468);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_111, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
		}
		switch (Local_82)
		{
			case 0:
				Global_97327[0] = 1;
				Global_97333[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 1:
				Global_97327[1] = 1;
				Global_97333[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 2:
				Global_97327[2] = 1;
				Global_97333[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 3:
				Global_97327[3] = 1;
				Global_97333[3] = MISC::GET_GAME_TIMER();
				break;
			
			case 4:
				Global_97327[4] = 1;
				Global_97333[4] = MISC::GET_GAME_TIMER();
				break;
			
			case 5:
				Global_97317[0] = 1;
				Global_97322[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				Global_97317[1] = 1;
				Global_97322[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 7:
				Global_97317[2] = 1;
				Global_97322[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				Global_97317[3] = 1;
				Global_97322[3] = MISC::GET_GAME_TIMER();
				break;
		}
		return 0;
	}
	return 1;
}

void func_163(var uParam0, bool bParam1)//Position - 0x9B26
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (PED::IS_PED_MALE(uParam0))
		{
			GlobalFunc_5117(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			GlobalFunc_5117(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_164()//Position - 0x9B97
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (Local_82.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_169 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_169[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_169[iVar0]))
				{
					return 1;
				}
				else if (func_165(iLocal_169[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_BEING_JACKED(iLocal_169[iVar0]))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_165[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_165[iVar0]))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_165[iVar0], PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_165[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_110))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_110, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_110) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_88, 50f) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
	{
		if (PED::IS_PED_INJURED(iLocal_111))
		{
			return 1;
		}
		else if (func_165(iLocal_111, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_BEING_JACKED(iLocal_111))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_111, 0);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_110))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_110, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_116))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_116))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_116, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_116, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_173 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_102[iVar0]))
		{
			if (PED::IS_PED_INJURED(uLocal_102[iVar0]))
			{
				return 1;
			}
			else if (func_165(uLocal_102[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x9DE5
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
		else if (func_166(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0, float fParam1)//Position - 0x9EA0
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
				if (func_167(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_167(int iParam0, float fParam1)//Position - 0x9F16
{
	return func_168(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_168(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9F2E
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_176(iParam0, iParam1);
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
		iVar4 = func_171();
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



int func_171()//Position - 0xA1E0
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





int func_176(int iParam0, int iParam1)//Position - 0xA336
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









int func_185()//Position - 0xA791
{
	switch (Local_82)
	{
		case 5:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea, 0);
			break;
		
		case 6:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea, 1);
			break;
		
		case 7:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea, 2);
			break;
		
		case 8:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea, 3);
			break;
		
		case 0:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea, 0);
			break;
		
		case 1:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea, 1);
			break;
		
		case 2:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea, 2);
			break;
		
		case 3:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea, 3);
			break;
		
		case 4:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea, 4);
			break;
	}
	return 0;
}

void func_186()//Position - 0xA88B
{
	iLocal_81 = 0;
	iLocal_91 = 0;
	bLocal_98 = false;
	bLocal_99 = false;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	func_188(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_82 == 1)
	{
		uLocal_214 = GlobalFunc_2662(374.0083f, 279.5919f, 102.3306f, 40f);
		MISC::CLEAR_AREA_OF_VEHICLES(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		uLocal_213 = GlobalFunc_2662(Local_88, 60f);
	}
}


void func_188(bool bParam0)//Position - 0xA952
{
	if (bParam0)
	{
		switch (Local_82)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				GlobalFunc_6492(&uLocal_215, joaat("banshee"));
				GlobalFunc_6492(&uLocal_215, joaat("feltzer2"));
				GlobalFunc_6492(&uLocal_215, joaat("sentinel"));
				break;
			
			case 4:
				GlobalFunc_6492(&uLocal_215, joaat("bati"));
				GlobalFunc_6492(&uLocal_215, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				GlobalFunc_6492(&uLocal_215, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_189(&uLocal_215);
	}
}

void func_189(var uParam0)//Position - 0xA9F0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_190(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_190(var uParam0)//Position - 0xAA29
{
	func_191(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_191(var uParam0, char* sParam1, int iParam2)//Position - 0xAA40
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (GlobalFunc_2270(uParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(uParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_192(int iParam0)//Position - 0xAB00
{
	switch (iParam0)
	{
		case 0:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 0);
			break;
		
		case 1:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 1);
			break;
		
		case 2:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 2);
			break;
		
		case 3:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 3);
			break;
		
		case 4:
			return MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, 4);
			break;
	}
	return 0;
}


void func_194()//Position - 0xABDF
{
	if (GlobalFunc_537(GlobalFunc_2247(85, 0), Local_88, 1f))
	{
		Local_82 = 0;
		Local_82.f_1 = 2;
		Local_82.f_3 = 100;
		Local_82.f_4 = 20;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(86, 0), Local_88, 1f))
	{
		Local_82 = 1;
		Local_82.f_1 = 2;
		Local_82.f_3 = 500;
		Local_82.f_4 = 18;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(87, 0), Local_88, 1f))
	{
		Local_82 = 2;
		Local_82.f_1 = 2;
		Local_82.f_3 = 1000;
		Local_82.f_4 = 2;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(88, 0), Local_88, 1f))
	{
		Local_82 = 3;
		Local_82.f_1 = 2;
		Local_82.f_3 = 1250;
		Local_82.f_4 = 4;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(89, 0), Local_88, 1f))
	{
		Local_82 = 4;
		Local_82.f_1 = 1;
		Local_82.f_3 = 1500;
		Local_82.f_4 = 5;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(81, 0), Local_88, 1f))
	{
		Local_82 = 5;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 16;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(82, 0), Local_88, 1f))
	{
		Local_82 = 6;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 13;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(83, 0), Local_88, 1f))
	{
		Local_82 = 7;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 15;
		Local_82.f_5 = 1;
	}
	else if (GlobalFunc_537(GlobalFunc_2247(84, 0), Local_88, 1f))
	{
		Local_82 = 8;
		Local_82.f_1 = 3;
		Local_82.f_4 = 24;
		Local_82.f_3 = 0;
		Local_82.f_5 = 1;
	}
	else
	{
		func_197(0);
	}
}



void func_197(bool bParam0)//Position - 0xADF8
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_92)
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		iLocal_92 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (GlobalFunc_115(uLocal_102[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(uLocal_102[iVar0]);
			TASK::TASK_WANDER_STANDARD(uLocal_102[iVar0], 1193033728, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_102[iVar0], 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_102[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (GlobalFunc_115(iLocal_169[iVar0]))
		{
			if (GlobalFunc_115(iLocal_165[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_169[iVar0]);
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_165[iVar0])))
				{
					VEHICLE::SET_BOAT_ANCHOR(iLocal_165[iVar0], 0);
				}
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_169[iVar0], iLocal_165[iVar0], 20f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_169[iVar0], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_169[iVar0], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_169[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_165[iVar0]));
			}
		}
		iVar0++;
	}
	if (GlobalFunc_115(iLocal_111))
	{
		if (GlobalFunc_115(iLocal_110))
		{
			TASK::CLEAR_PED_TASKS(iLocal_111);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_111, 1, 1);
			TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_111, iLocal_110, 15f, 786599);
			PED::SET_PED_KEEP_TASK(iLocal_111, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_111, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_111);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_110);
		}
	}
	if (GlobalFunc_115(iLocal_116))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_116);
	}
	switch (Local_82)
	{
		case 5:
			GlobalFunc_2436(81, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 0);
			break;
		
		case 6:
			GlobalFunc_2436(82, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 1);
			break;
		
		case 7:
			GlobalFunc_2436(83, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 2);
			break;
		
		case 8:
			GlobalFunc_2436(84, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 3);
			break;
		
		case 0:
			GlobalFunc_2436(85, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 0);
			break;
		
		case 1:
			GlobalFunc_2436(86, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 1);
			break;
		
		case 2:
			GlobalFunc_2436(87, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 2);
			break;
		
		case 3:
			GlobalFunc_2436(88, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 3);
			break;
		
		case 4:
			GlobalFunc_2436(89, 0, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 4);
			break;
	}
	if (iLocal_91)
	{
		HUD::CLEAR_HELP(1);
	}
	AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 0);
	if (iLocal_100)
	{
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	}
	if (iLocal_193 && !bParam0)
	{
		uVar1 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(uVar1))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(iVar1))
			{
				PLAYER::SET_PLAYER_CONTROL(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_188(0);
	}
	if (iLocal_93)
	{
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_200, Local_203, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_206, Local_209, fLocal_212, 1);
		iLocal_93 = 0;
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_82 == 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_214, 0);
	}
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_213, 0);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
	}
	func_198(&uLocal_215, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_198(var uParam0, bool bParam1)//Position - 0xB13F
{
	int iVar0;
	
	if (!bParam1)
	{
		func_189(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_2281(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}



