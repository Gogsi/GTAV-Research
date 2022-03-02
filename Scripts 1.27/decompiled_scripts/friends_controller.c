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
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	var uLocal_90 = 8;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 2;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 8;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 8;
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
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 3;
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
	var uLocal_189 = 3;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 3;
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
	var uLocal_210 = 16;
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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	iLocal_124 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_456();
	}
	func_448();
	GlobalFunc_587();
	SYSTEM::WAIT(0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_86223[iVar0 /*2*/] == -1)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_18, 1))
			{
				GlobalFunc_2640(iVar0, 0);
				Global_86102++;
			}
		}
		iVar0++;
	}
	iLocal_126 = 0;
	while (iLocal_124)
	{
		SYSTEM::WAIT(0);
		Global_86101 = GlobalFunc_8315();
		if (Global_86101 == 145)
		{
			if (iLocal_125)
			{
			}
		}
		else
		{
			iLocal_125 = 1;
			if (Global_68514.f_1)
			{
			}
			else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_444(iLocal_126, &iVar1))
				{
					func_395(iLocal_126, iVar1);
				}
				iLocal_126 = (iLocal_126 + 1 % 9);
				if (!Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_398)
				{
					if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_406)
					{
						switch (GlobalFunc_5216("AM_H_NOFRND"))
						{
							case 2:
								GlobalFunc_6677("AM_H_NOFRND", 2, 0, 1000, 7500, 7, 0, 0, 0);
								break;
							
							case 1:
								Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_398 = 1;
								break;
							}
						}
				}
				if (Global_86213 == 4)
				{
					if ((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2))
					{
						GlobalFunc_6423(Global_86214, 5, Global_86215);
					}
				}
				else if (Global_86213 == 5)
				{
					if (!GlobalFunc_756())
					{
						GlobalFunc_2635(Global_86214);
					}
				}
				if ((MISC::GET_FRAME_COUNT() % 10) == 0)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395))
					{
						if (GlobalFunc_225(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iLocal_127 /*3*/])))
						{
							if ((Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_381[iLocal_127] == -1 || !GlobalFunc_2948(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_381[iLocal_127])) || func_385(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_381[iLocal_127]) == 6)
							{
								func_383(iLocal_127);
							}
						}
						iLocal_127 = (iLocal_127 + 1 % 6);
					}
				}
			}
			func_2(&uLocal_128, &uLocal_210);
		}
		if (!func_1())
		{
			iLocal_124 = 0;
		}
	}
	func_456();
}

int func_1()//Position - 0x271
{
	if (!GlobalFunc_756())
	{
		return 1;
	}
	if (((((GlobalFunc_39(6) || GlobalFunc_39(7)) || GlobalFunc_39(2)) || GlobalFunc_39(5)) || GlobalFunc_39(17)) || GlobalFunc_39(18))
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, var uParam1)//Position - 0x2CB
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_236() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (uParam0->f_49 == 0)
		{
			if (GlobalFunc_42(Global_87845.f_45) && !PED::IS_PED_INJURED((uParam0[Global_87845.f_45 /*15*/])->f_2))
			{
				TASK::CLEAR_PED_TASKS((uParam0[Global_87845.f_45 /*15*/])->f_2);
			}
			func_380(uParam0);
			func_379(uParam0, 0);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if ((*uParam0)[iVar0 /*15*/] == 6 && (uParam0[iVar0 /*15*/])->f_12 == 4)
				{
					uParam0->f_58 = 1;
				}
				iVar0++;
			}
			uParam0->f_59 = 1;
			uParam0->f_49 = 1;
		}
	}
	else if (uParam0->f_49)
	{
		uParam0->f_49 = 0;
	}
	else if (Global_34913 == 2)
	{
		func_377(uParam0, 0);
	}
	else if ((Global_34913 == 6 || Global_34913 == 7) && Global_86193 < 22)
	{
		func_377(uParam0, 0);
	}
	else if (Global_68245)
	{
		func_377(uParam0, 0);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_91(uParam0, uParam0[iVar1 /*15*/], uParam1);
			iVar1++;
		}
		if (uParam0->f_58)
		{
			if ((*uParam0)[1 /*15*/] == 6)
			{
				if ((*uParam0)[2 /*15*/] == 6 || (*uParam0)[2 /*15*/] == 1)
				{
					if (!PED::IS_PED_INJURED((uParam0[2 /*15*/])->f_2))
					{
						func_89(uParam0[1 /*15*/], 0, (uParam0[2 /*15*/])->f_2);
					}
				}
			}
			if ((*uParam0)[2 /*15*/] == 6)
			{
				if ((*uParam0)[1 /*15*/] == 6 || (*uParam0)[1 /*15*/] == 1)
				{
					if (!PED::IS_PED_INJURED((uParam0[1 /*15*/])->f_2))
					{
						func_89(uParam0[2 /*15*/], 0, (uParam0[1 /*15*/])->f_2);
					}
				}
			}
			uParam0->f_58 = 0;
		}
		uParam0->f_59 = 0;
		if (uParam0->f_60 == 0)
		{
			if (uParam0->f_46 > 0)
			{
				if (!func_85())
				{
					func_380(uParam0);
					func_379(uParam0, 0);
				}
				if (uParam0->f_50 == 0)
				{
					if (uParam0->f_46 > 0)
					{
						func_84(uParam0);
					}
				}
			}
			if (uParam0->f_46 == 0)
			{
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
			}
			if (uParam0->f_50 != 0)
			{
				if (GlobalFunc_42(uParam0->f_51) && (((*uParam0)[uParam0->f_51 /*15*/] == 3 || (*uParam0)[uParam0->f_51 /*15*/] == 4) || (*uParam0)[uParam0->f_51 /*15*/] == 5))
				{
					func_28(uParam0, uParam1);
				}
				else
				{
					if (GlobalFunc_42(uParam0->f_51))
					{
						func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
					}
					func_379(uParam0, 0);
				}
			}
		}
	}
}

void func_3(var uParam0, var uParam1)//Position - 0x52F
{
	int iVar0;
	
	if ((((*uParam1 == 3 || *uParam1 == 2) || *uParam1 == 6) || *uParam1 == 4) || *uParam1 == 5)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (uParam1->f_1 != iVar0)
			{
				if ((((*uParam0)[iVar0 /*15*/] == 1 || (*uParam0)[iVar0 /*15*/] == 3) || (*uParam0)[iVar0 /*15*/] == 4) || (*uParam0)[iVar0 /*15*/] == 5)
				{
					func_22(uParam1->f_1, iVar0, 2);
				}
			}
			iVar0++;
		}
	}
	if ((*uParam1 == 3 || *uParam1 == 2) || *uParam1 == 6)
	{
		if (*uParam1 != 6)
		{
			func_5(uParam0, uParam1, 6, 1);
		}
	}
	else if (*uParam1 == 4 || *uParam1 == 5)
	{
		func_5(uParam0, uParam1, 0, 1);
		func_4(uParam1, uParam1->f_1);
	}
}

void func_4(var uParam0, int iParam1)//Position - 0x61F
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = iParam1;
	uParam0->f_2 = 0;
	uParam0->f_5 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_6 = -86095805;
	uParam0->f_7 = -86095805;
	uParam0->f_8 = 0;
}

void func_5(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x66B
{
	if (bParam3)
	{
	}
	switch (*uParam1)
	{
		case 3:
		case 4:
		case 5:
			if (!PED::IS_PED_INJURED(uParam1->f_2))
			{
				TASK::TASK_CLEAR_LOOK_AT(uParam1->f_2);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			uParam0->f_46 = (uParam0->f_46 - 1);
			break;
		
		case 7:
			func_6(uParam0);
			break;
	}
	*uParam1 = iParam2;
	uParam1->f_4 = 0;
	if ((*uParam1 == 3 || *uParam1 == 4) || *uParam1 == 5)
	{
		uParam0->f_46++;
	}
	else if (*uParam1 == 6)
	{
		uParam1->f_12 = 0;
		uParam1->f_14 = 1;
		uParam1->f_13 = 0;
	}
}

void func_6(var uParam0)//Position - 0x721
{
	char[] cVar0[8];
	char[] cVar16[8];
	char[] cVar24[8];
	char[] cVar32[8];
	var uVar40;
	char* sVar41;
	char[] cVar57[8];
	struct<3> Var65;
	struct<3> Var68;
	
	func_21(uParam0->f_74, &uVar40, &cVar0, &cVar16, &cVar24, &cVar32);
	func_20(Global_86101, uParam0->f_74, &sVar41, &cVar57);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (!PED::IS_PED_INJURED((uParam0[uParam0->f_74 /*15*/])->f_2))
	{
		TASK::CLEAR_PED_TASKS((uParam0[uParam0->f_74 /*15*/])->f_2);
	}
	if (uParam0->f_78 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_78, 0);
		uParam0->f_78 = 0;
	}
	Var65 = { uParam0->f_79 - Vector(10f, 10f, 10f) };
	Var68 = { uParam0->f_79 + Vector(10f, 10f, 10f) };
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var65, Var68, 1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var65, Var68, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_77))
	{
		CAM::DESTROY_CAM(uParam0->f_77, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	STREAMING::REMOVE_ANIM_DICT(&cVar0);
	func_8(1, 0, 1, 1);
	if (uParam0->f_75 != -1)
	{
		GlobalFunc_54(&(uParam0->f_75));
	}
	uParam0->f_75 = -1;
	uParam0->f_74 = 145;
	uParam0->f_60 = 0;
}


void func_8(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x871
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
		if ((iLocal_44 != 0 && iLocal_44 != joaat("object")) && iLocal_44 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_44, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_44, 0);
				}
			}
		}
	}
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}












void func_20(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0xB8E
{
	if (iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			StringCopy(sParam2, "FRIENDS@FRF@IG_2", 64);
			StringCopy(sParam3, "KNOCKOUT_FRF_MIC_facial", 32);
		}
		else if (iParam1 == 2)
		{
			StringCopy(sParam2, "FRIENDS@FRT@IG_2", 64);
			StringCopy(sParam3, "KNOCKOUT_FRT_MIC_facial", 32);
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == 0)
		{
			StringCopy(sParam2, "FRIENDS@FRM@IG_2", 64);
			StringCopy(sParam3, "KNOCKOUT_FRM_FRA_facial", 32);
		}
		else if (iParam1 == 2)
		{
			StringCopy(sParam2, "FRIENDS@FRT@IG_2", 64);
			StringCopy(sParam3, "KNOCKOUT_FRT_FRA_facial", 32);
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			StringCopy(sParam2, "FRIENDS@FRM@IG_2", 64);
			StringCopy(sParam3, "KNOCKOUT_FRM_TRV_facial", 32);
		}
		else if (iParam1 == 1)
		{
			StringCopy(sParam2, "FRIENDS@FRF@IG_2", 64);
			StringCopy(sParam3, "KNOCKOUT_FRF_TRV_facial", 32);
		}
	}
}

void func_21(int iParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xC3B
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam2, "friends@frm@ig_2", 64);
			StringCopy(sParam3, "knockout_player", 32);
			StringCopy(sParam4, "knockout_mic", 32);
			StringCopy(sParam5, "knockout_cam", 32);
			*uParam1 = 0.231f;
			break;
		
		case 1:
			StringCopy(sParam2, "friends@frf@ig_2", 64);
			StringCopy(sParam3, "knockout_plyr", 32);
			StringCopy(sParam4, "knockout_fra", 32);
			StringCopy(sParam5, "knockout_cam", 32);
			*uParam1 = 0.224f;
			break;
		
		case 2:
		default:
			StringCopy(sParam2, "friends@frt@ig_2", 64);
			StringCopy(sParam3, "knockout_player", 32);
			StringCopy(sParam4, "knockout_trevor", 32);
			StringCopy(sParam5, "knockout_cam", 32);
			*uParam1 = 0.388f;
			break;
	}
}

void func_22(int iParam0, int iParam1, int iParam2)//Position - 0xCD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_768(iVar0, iVar1);
	if (iVar2 != 10)
	{
		GlobalFunc_6715(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_5));
		Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_8 = iParam2;
	}
}






void func_28(var uParam0, var uParam1)//Position - 0xF90
{
	int iVar0;
	
	switch (uParam0->f_50)
	{
		case 1:
			if (GlobalFunc_7239(Global_86101, uParam0->f_51) > (2f * 60f) || GlobalFunc_5953(Global_86101, uParam0->f_51) != 2)
			{
				func_81(uParam0, 2);
			}
			else
			{
				func_81(uParam0, 3);
			}
			break;
		
		case 2:
			if (func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 31, 0))
			{
				func_81(uParam0, 3);
				uParam0->f_47 = 1;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 11, 1))
			{
				func_81(uParam0, 5);
				uParam0->f_47 = 1;
			}
			break;
		
		case 5:
			if (func_64(uParam0, uParam1, Global_86101, uParam0->f_51, 0, 0))
			{
				func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
			}
			break;
		
		case 6:
			if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 13, 1))
			{
				func_81(uParam0, 7);
				uParam0->f_47 = 1;
			}
			break;
		
		case 7:
			func_63(uParam0);
			if (func_64(uParam0, uParam1, Global_86101, uParam0->f_51, 0, 1))
			{
				func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
			}
			break;
		
		case 10:
			if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 13, 1))
			{
				func_81(uParam0, 11);
				uParam0->f_47 = 1;
			}
			break;
		
		case 11:
			if (func_64(uParam0, uParam1, Global_86101, uParam0->f_51, 0, 2))
			{
				func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
			}
			break;
		
		case 8:
			if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 13, 1))
			{
				func_81(uParam0, 9);
				uParam0->f_47 = 1;
			}
			break;
		
		case 9:
			if (func_64(uParam0, uParam1, Global_86101, uParam0->f_51, 1, 3))
			{
				func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
			}
			break;
		
		case 12:
			if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 13, 1))
			{
				func_81(uParam0, 13);
				uParam0->f_47 = 1;
			}
			break;
		
		case 13:
			if (func_79(uParam0, uParam1, uParam0->f_51, Global_86101, 21, 1))
			{
				func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
			}
			break;
		
		case 15:
			func_62(uParam0);
			if ((uParam0->f_47 || uParam0->f_48) || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, func_60(uParam0, 0), 1))
			{
				func_81(uParam0, 16);
				uParam0->f_47 = 1;
			}
			break;
		
		case 14:
			func_62(uParam0);
			if (!func_59(uParam0[uParam0->f_51 /*15*/]))
			{
				if ((uParam0->f_47 || uParam0->f_48) || func_79(uParam0, uParam1, uParam0->f_51, Global_86101, func_60(uParam0, 0), 1))
				{
					func_81(uParam0, 16);
					uParam0->f_47 = 1;
				}
			}
			else if ((uParam0->f_47 || uParam0->f_48) || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, func_60(uParam0, 1), 1))
			{
				func_81(uParam0, 16);
				uParam0->f_47 = 1;
			}
			break;
		
		case 16:
			func_62(uParam0);
			if (uParam0->f_48 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 16, 1))
			{
				GlobalFunc_6715(&(uParam0->f_54));
				if (func_58(&iVar0) == 0)
				{
					func_81(uParam0, 17);
				}
				else
				{
					func_81(uParam0, 22);
				}
			}
			break;
		
		case 17:
			func_62(uParam0);
			if (!GlobalFunc_7072(&(uParam0->f_54), 30f))
			{
				if (uParam0->f_53 == -1)
				{
					if (uParam0->f_51 == 0)
					{
						GlobalFunc_7016(&(uParam0->f_53), 5, "FR_PK_AMB_M", 0, 0);
					}
					else if (uParam0->f_51 == 1)
					{
						GlobalFunc_7016(&(uParam0->f_53), 5, "FR_PK_AMB_F", 0, 0);
					}
					else
					{
						GlobalFunc_7016(&(uParam0->f_53), 5, "FR_PK_AMB_T", 0, 0);
					}
				}
				else if (GlobalFunc_5079(uParam0->f_53, 0))
				{
					func_81(uParam0, 20);
				}
				else if (GlobalFunc_5456(uParam0->f_53, 0) && PAD::IS_CONTROL_PRESSED(0, 234))
				{
					func_81(uParam0, 18);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, 234);
			}
			else
			{
				func_81(uParam0, 19);
			}
			break;
		
		case 18:
			if (func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 19, 1))
			{
				func_81(uParam0, 19);
			}
			func_62(uParam0);
			break;
		
		case 19:
			if (func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 20, 1))
			{
				func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
				func_49(uParam0);
			}
			func_62(uParam0);
			break;
		
		case 20:
			func_62(uParam0);
			if (func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 17, 1))
			{
				func_81(uParam0, 21);
			}
			break;
		
		case 21:
			func_62(uParam0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 18, 1))
			{
				func_81(uParam0, 22);
			}
			break;
		
		case 22:
			func_62(uParam0);
			if (func_48(Global_86101, uParam0->f_51, &iVar0) && GlobalFunc_2014(iVar0) == 0)
			{
				GlobalFunc_2640(iVar0, 3);
				func_46(iVar0, 3);
				uParam0->f_48 = 1;
			}
			func_81(uParam0, 23);
			break;
		
		case 23:
			func_62(uParam0);
			if (!func_48(Global_86101, uParam0->f_51, &iVar0) || (GlobalFunc_2014(iVar0) != 3 && GlobalFunc_2014(iVar0) != 4))
			{
				func_3(uParam0, uParam0[uParam0->f_51 /*15*/]);
			}
			break;
		
		case 25:
			if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, func_60(uParam0, 0), 1))
			{
				func_81(uParam0, 26);
				uParam0->f_47 = 1;
			}
			break;
		
		case 24:
			if (!func_59(uParam0[uParam0->f_51 /*15*/]))
			{
				if (uParam0->f_47 || func_79(uParam0, uParam1, uParam0->f_51, Global_86101, func_60(uParam0, 0), 1))
				{
					func_81(uParam0, 26);
					uParam0->f_47 = 1;
				}
			}
			else if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, func_60(uParam0, 1), 1))
			{
				func_81(uParam0, 26);
				uParam0->f_47 = 1;
			}
			break;
		
		case 26:
			if (func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 14, 1))
			{
				func_81(uParam0, 27);
			}
			break;
		
		case 27:
			if (func_79(uParam0, uParam1, uParam0->f_51, Global_86101, 20, 1))
			{
				func_34(uParam0);
			}
			break;
		
		case 29:
			if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, func_60(uParam0, 0), 1))
			{
				func_81(uParam0, 30);
				uParam0->f_47 = 1;
			}
			break;
		
		case 28:
			if (!func_59(uParam0[uParam0->f_51 /*15*/]))
			{
				if (uParam0->f_47 || func_79(uParam0, uParam1, uParam0->f_51, Global_86101, func_60(uParam0, 0), 1))
				{
					func_81(uParam0, 30);
					uParam0->f_47 = 1;
				}
			}
			else if (uParam0->f_47 || func_79(uParam0, uParam1, Global_86101, uParam0->f_51, func_60(uParam0, 1), 1))
			{
				func_81(uParam0, 30);
				uParam0->f_47 = 1;
			}
			break;
		
		case 30:
			if (func_79(uParam0, uParam1, Global_86101, uParam0->f_51, 15, 1))
			{
				func_81(uParam0, 31);
			}
			break;
		
		case 31:
			if (func_79(uParam0, uParam1, uParam0->f_51, Global_86101, 20, 1))
			{
				func_34(uParam0);
			}
			break;
		
		default:
			func_380(uParam0);
			break;
	}
	if (uParam0->f_50 != 0 && uParam0->f_50 != 3)
	{
		GlobalFunc_187();
		GlobalFunc_7629();
	}
}






void func_34(var uParam0)//Position - 0x1901
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((*uParam0)[iVar0 /*15*/] == 3 || (*uParam0)[iVar0 /*15*/] == 4) || (*uParam0)[iVar0 /*15*/] == 5)
		{
			iVar1 = func_35(uParam0[iVar0 /*15*/]);
			if (((iVar1 == 25 || iVar1 == 24) || iVar1 == 29) || iVar1 == 28)
			{
				func_3(uParam0, uParam0[iVar0 /*15*/]);
			}
		}
		iVar0++;
	}
}

int func_35(var uParam0)//Position - 0x1983
{
	int iVar0;
	
	if (func_48(Global_86101, uParam0->f_1, &iVar0))
	{
		if (uParam0->f_11 == 1 || uParam0->f_11 == 3)
		{
			return 1;
		}
		else if (uParam0->f_11 == 2)
		{
			return 3;
		}
		else if (iVar0 == 0 && !GlobalFunc_230(17))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410, 0))
			{
				return 4;
			}
			else
			{
				return 29;
			}
		}
		else if (iVar0 == 2 && GlobalFunc_485(129))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410, 1))
			{
				return 6;
			}
			else
			{
				return 12;
			}
		}
		else if (iVar0 == 1 && GlobalFunc_485(135))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410, 2))
			{
				return 10;
			}
			else
			{
				return 12;
			}
		}
		else if (iVar0 == 0 && GlobalFunc_485(136))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410, 3))
			{
				return 8;
			}
			else
			{
				return 12;
			}
		}
		else if (GlobalFunc_5985(Global_86101, uParam0->f_1, 0))
		{
			if (func_42(GlobalFunc_769(Global_86101), GlobalFunc_769(uParam0->f_1)))
			{
				if (func_40())
				{
					return 24;
				}
				else
				{
					return 25;
				}
			}
			else if (func_40())
			{
				return 28;
			}
			else
			{
				return 29;
			}
		}
		else if (func_36(uParam0))
		{
			if (func_40())
			{
				return 14;
			}
			else
			{
				return 15;
			}
		}
		else if (func_40())
		{
			return 28;
		}
		else
		{
			return 29;
		}
	}
	return 0;
}

int func_36(var uParam0)//Position - 0x1B24
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((((Global_86213 == 0 || MISC::IS_BIT_SET(Global_86215, uParam0->f_1)) && !GlobalFunc_5985(Global_86101, uParam0->f_1, 1)) && !GlobalFunc_5985(Global_86101, uParam0->f_1, 2)) && Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[Global_86101] != 5)
	{
		if (func_48(Global_86101, uParam0->f_1, &iVar0))
		{
			iVar2 = func_39(&iVar1);
			if (iVar1 != iVar0)
			{
				if (iVar2 == 0)
				{
					return 1;
				}
				else if (iVar2 == 1)
				{
					if (func_37(iVar0, iVar1, &iVar3) && GlobalFunc_2014(iVar3) == 0)
					{
						if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_2 == 0)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_37(int iParam0, int iParam1, var uParam2)//Position - 0x1BE9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 7;
	iVar1 = 7;
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/] == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/])
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1;
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1;
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1 == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1)
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/];
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/];
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/] == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1)
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1;
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/];
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1 == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/])
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/];
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1;
	}
	if (GlobalFunc_42(GlobalFunc_3049(iVar0)) || GlobalFunc_42(GlobalFunc_3049(iVar1)))
	{
		*uParam2 = GlobalFunc_768(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}


int func_39(var uParam0)//Position - 0x1D98
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	*uParam0 = 10;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Global_86223[iVar1 /*2*/] == 3 || Global_86223[iVar1 /*2*/] == 4)
		{
			if (*uParam0 == 10)
			{
				*uParam0 = iVar1;
			}
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_40()//Position - 0x1DED
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = GlobalFunc_8315();
		if (iVar0 == 0)
		{
			if (GlobalFunc_103(0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -816.6923f, 169.9429f, 70.51423f, 115f, 115f, 115f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (GlobalFunc_103(1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1977.232f, 3812.881f, 31.3578f, 150f, 150f, 150f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (iVar0 == 1)
		{
			if (GlobalFunc_103(5))
			{
				Var1 = { Vector(35.04359f, -1459.37f, -31.63105f) - Vector(9f, 50.25f, 84.5f) };
				Var4 = { Vector(35.04359f, -1459.37f, -31.63105f) + Vector(9f, 50.25f, 84.5f) };
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var4, 0, 1, 0))
				{
					return 1;
				}
			}
			if (GlobalFunc_103(6))
			{
				Var7 = { Vector(158.115f, 528.3951f, 4.53609f) - Vector(28.5f, 74.75f, 152.5f) };
				Var10 = { Vector(158.115f, 528.3951f, 4.53609f) + Vector(28.5f, 74.75f, 152.5f) };
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var7, Var10, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (iVar0 == 2)
		{
			if (GlobalFunc_103(2))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1977.232f, 3812.881f, 31.3578f, 150f, 150f, 150f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (GlobalFunc_103(3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1155.24f, -1519.908f, 3.350527f, 150f, 150f, 150f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (GlobalFunc_103(4))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 131.592f, -1303.622f, 28.22608f, 100f, 100f, 100f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_42(int iParam0, int iParam1)//Position - 0x2020
{
	if ((iParam0 == 0 && iParam1 == 2) || (iParam1 == 0 && iParam0 == 2))
	{
		if (GlobalFunc_5985(GlobalFunc_3049(iParam0), GlobalFunc_3049(iParam1), 0))
		{
			if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[2 /*19*/].f_3 == 46)
			{
				return 0;
			}
		}
	}
	return 1;
}




void func_46(int iParam0, int iParam1)//Position - 0x2112
{
	if (iParam0 < 9)
	{
		Global_86223[iParam0 /*2*/].f_1 = iParam1;
	}
}


int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x214E
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*iParam2 = GlobalFunc_768(iVar0, iVar1);
		if (*iParam2 != 10)
		{
			return 1;
		}
	}
	*iParam2 = 10;
	return 0;
}

void func_49(var uParam0)//Position - 0x2193
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((*uParam0)[iVar0 /*15*/] == 3 || (*uParam0)[iVar0 /*15*/] == 4) || (*uParam0)[iVar0 /*15*/] == 5)
		{
			iVar1 = func_35(uParam0[iVar0 /*15*/]);
			if (iVar1 == 15 || iVar1 == 14)
			{
				func_3(uParam0, uParam0[iVar0 /*15*/]);
			}
		}
		iVar0++;
	}
}









int func_58(var uParam0)//Position - 0x255E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	*uParam0 = 10;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Global_86223[iVar1 /*2*/] == 4)
		{
			if (*uParam0 == 10)
			{
				*uParam0 = iVar1;
			}
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_59(var uParam0)//Position - 0x25A2
{
	if (GlobalFunc_103(1))
	{
		if (Global_86101 == 0 && uParam0->f_1 == 2)
		{
			return 1;
		}
		if (Global_86101 == 2 && uParam0->f_1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(var uParam0, bool bParam1)//Position - 0x25E3
{
	if (bParam1)
	{
		return 31;
	}
	if (func_61(uParam0[uParam0->f_51 /*15*/]))
	{
		return 12;
	}
	return 11;
}

int func_61(var uParam0)//Position - 0x2611
{
	int iVar0;
	
	iVar0 = GlobalFunc_5953(Global_86101, uParam0->f_1);
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (GlobalFunc_7239(Global_86101, uParam0->f_1) < (6f * 60f))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(var uParam0)//Position - 0x2654
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((*uParam0)[iVar0 /*15*/] == 3 || (*uParam0)[iVar0 /*15*/] == 4) || (*uParam0)[iVar0 /*15*/] == 5)
		{
			iVar1 = func_35(uParam0[iVar0 /*15*/]);
			if (((iVar1 == 12 || iVar1 == 6) || iVar1 == 10) || iVar1 == 8)
			{
				func_3(uParam0, uParam0[iVar0 /*15*/]);
			}
		}
		iVar0++;
	}
}

void func_63(var uParam0)//Position - 0x26D5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((*uParam0)[iVar0 /*15*/] == 3 || (*uParam0)[iVar0 /*15*/] == 4) || (*uParam0)[iVar0 /*15*/] == 5)
		{
			if (iVar0 != uParam0->f_51)
			{
				func_3(uParam0, uParam0[iVar0 /*15*/]);
			}
		}
		iVar0++;
	}
}

int func_64(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x272B
{
	char* sVar0;
	char[] cVar4[8];
	
	if (uParam0->f_52)
	{
		if (!func_76(iParam2, iParam3, iParam4, &sVar0, &cVar4) || GlobalFunc_10618(uParam1, &sVar0, &cVar4, 4, 0, 0, 0))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410), iParam5);
			uParam0->f_52 = 0;
		}
	}
	else if (!GlobalFunc_111())
	{
		return 1;
	}
	return 0;
}












int func_76(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2E02
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { GlobalFunc_5197(iVar0, iVar1, 7, 2) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_Amb", 16);
	StringIntConCat(sParam4, iParam2, 16);
	return 1;
}



int func_79(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2FC7
{
	char* sVar0;
	char[] cVar4[8];
	
	if (uParam0->f_52)
	{
		if (iParam5 || !GlobalFunc_111())
		{
			if (!func_80(iParam2, iParam3, iParam4, &sVar0, &cVar4) || GlobalFunc_10618(uParam1, &sVar0, &cVar4, 4, 0, 0, 0))
			{
				uParam0->f_52 = 0;
			}
		}
	}
	else if (!GlobalFunc_111())
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x3021
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { GlobalFunc_5197(iVar0, iVar1, 7, 1) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "PkOk", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "PkLt", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "PkFt", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "PkFul", 16);
			break;
		
		case 4:
			StringConCat(sParam4, "PkOdd", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "PkUDr", 16);
			break;
		
		case 6:
			StringConCat(sParam4, "GrOk", 16);
			break;
		
		case 7:
			StringConCat(sParam4, "GrIr", 16);
			break;
		
		case 8:
			StringConCat(sParam4, "GrVi", 16);
			break;
		
		case 9:
			StringConCat(sParam4, "GrPl", 16);
			break;
		
		case 10:
			StringConCat(sParam4, "GrUDr", 16);
			break;
		
		case 11:
			StringConCat(sParam4, "AmbH_ok", 16);
			break;
		
		case 12:
			StringConCat(sParam4, "AmbH_rc", 16);
			break;
		
		case 13:
			StringConCat(sParam4, "AmbH_ir", 16);
			break;
		
		case 14:
			StringConCat(sParam4, "AmbB_mi", 16);
			break;
		
		case 15:
			StringConCat(sParam4, "AmbB_ok", 16);
			break;
		
		case 16:
			StringConCat(sParam4, "AmbO_qu", 16);
			break;
		
		case 17:
			StringConCat(sParam4, "AmbO_Y1", 16);
			break;
		
		case 18:
			StringConCat(sParam4, "AmbO_Y2", 16);
			break;
		
		case 19:
			StringConCat(sParam4, "AmbO_N1", 16);
			break;
		
		case 20:
			StringConCat(sParam4, "AmbG_ok", 16);
			break;
		
		case 21:
			StringConCat(sParam4, "AmbG_ir", 16);
			break;
		
		case 22:
			StringConCat(sParam4, "AmbS1", 16);
			break;
		
		case 23:
			StringConCat(sParam4, "AmbS2", 16);
			break;
		
		case 24:
			StringConCat(sParam4, "AmbS3", 16);
			break;
		
		case 25:
			StringConCat(sParam4, "AmbS4_1", 16);
			break;
		
		case 26:
			StringConCat(sParam4, "AmbS4_2", 16);
			break;
		
		case 27:
			StringConCat(sParam4, "AmbS4_3", 16);
			break;
		
		case 28:
			StringConCat(sParam4, "AmbS4_4", 16);
			break;
		
		case 29:
			StringConCat(sParam4, "AmbS_ft", 16);
			break;
		
		case 30:
			StringConCat(sParam4, "AmbT1", 16);
			break;
		
		case 31:
			StringConCat(sParam4, "AmbT1_r", 16);
			break;
		
		case 32:
			StringConCat(sParam4, "AmbT2", 16);
			break;
		
		case 33:
			StringConCat(sParam4, "AmbT3", 16);
			break;
		
		case 34:
			StringConCat(sParam4, "AmbT4", 16);
			break;
		
		case 35:
			StringConCat(sParam4, "AmbP1a", 16);
			break;
		
		case 36:
			StringConCat(sParam4, "AmbP1b", 16);
			break;
		
		case 37:
			StringConCat(sParam4, "AmbP1c", 16);
			break;
		
		case 38:
			StringConCat(sParam4, "AmbP2", 16);
			break;
		
		case 39:
			StringConCat(sParam4, "VDrunk", 16);
			break;
		
		case 40:
			StringConCat(sParam4, "Satis", 16);
			break;
		
		case 41:
			StringConCat(sParam4, "Done", 16);
			break;
		
		case 42:
			StringConCat(sParam4, "ZnStory", 16);
			break;
		
		case 43:
			StringConCat(sParam4, "ZnSquad", 16);
			break;
		
		case 44:
			StringConCat(sParam4, "ZnDrunk", 16);
			break;
		
		case 45:
			StringConCat(sParam4, "ZnCncl", 16);
			break;
		
		case 46:
			StringConCat(sParam4, "ZnCnclD", 16);
			break;
		
		case 47:
			StringConCat(sParam4, "RjTime", 16);
			break;
		
		case 48:
			StringConCat(sParam4, "RjOk", 16);
			break;
		
		case 49:
			StringConCat(sParam4, "RjCrazy", 16);
			break;
		
		case 50:
			StringConCat(sParam4, "RjStuck", 16);
			break;
		
		case 51:
			StringConCat(sParam4, "SqStart", 16);
			break;
		
		case 52:
			StringConCat(sParam4, "SqPass", 16);
			break;
		
		case 53:
			StringConCat(sParam4, "NewH", 16);
			break;
		
		case 54:
			StringConCat(sParam4, "NewC", 16);
			break;
		
		case 55:
			StringConCat(sParam4, "NewT", 16);
			break;
		
		case 56:
			StringConCat(sParam4, "CinMlt", 16);
			break;
		
		case 57:
			StringConCat(sParam4, "CarDam", 16);
			break;
		
		case 58:
			StringConCat(sParam4, "PedDam", 16);
			break;
		
		case 59:
			StringConCat(sParam4, "DrpOp", 16);
			break;
		
		case 60:
			StringConCat(sParam4, "DrpOpDr", 16);
			break;
		
		case 61:
			StringConCat(sParam4, "DrpOpPl", 16);
			break;
		
		case 62:
			StringConCat(sParam4, "DrpA", 16);
			break;
		
		case 63:
			StringConCat(sParam4, "DrpB", 16);
			break;
		
		case 64:
			StringConCat(sParam4, "DrpC", 16);
			break;
		
		case 65:
			StringConCat(sParam4, "DrpDr", 16);
			break;
		
		case 66:
			StringConCat(sParam4, "DrpCar", 16);
			break;
		
		case 67:
			StringConCat(sParam4, "Death", 16);
			break;
		
		default:
			if (iParam2 != 69)
			{
			}
			return 0;
			break;
	}
	return 1;
}

void func_81(var uParam0, int iParam1)//Position - 0x350E
{
	if (uParam0->f_50 != iParam1)
	{
		if (uParam0->f_53 != -1)
		{
			GlobalFunc_5420(&(uParam0->f_53));
			uParam0->f_53 = -1;
		}
		uParam0->f_50 = iParam1;
		uParam0->f_52 = 1;
	}
}



void func_84(var uParam0)//Position - 0x35D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 145;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (((*uParam0)[iVar2 /*15*/] == 3 || (*uParam0)[iVar2 /*15*/] == 4) || (*uParam0)[iVar2 /*15*/] == 5)
		{
			iVar3 = func_35(uParam0[iVar2 /*15*/]);
			if (iVar0 == 0 || iVar0 > iVar3)
			{
				iVar0 = iVar3;
				iVar1 = (uParam0[iVar2 /*15*/])->f_1;
			}
		}
		iVar2++;
	}
	if (iVar0 != 0 && GlobalFunc_42(iVar1))
	{
		func_81(uParam0, iVar0);
		uParam0->f_51 = iVar1;
	}
}

int func_85()//Position - 0x366B
{
	if (((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || Global_96400) || GlobalFunc_268()) || GlobalFunc_153(8, -1)) || GlobalFunc_489()) || GlobalFunc_331()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}




void func_89(var uParam0, bool bParam1, int iParam2)//Position - 0x371D
{
	if (uParam0->f_8 && iParam2 == PLAYER::PLAYER_PED_ID())
	{
		func_90(uParam0, 4, bParam1, iParam2);
	}
	else
	{
		func_90(uParam0, 1, bParam1, iParam2);
	}
}

void func_90(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3751
{
	uParam0->f_14 = 1;
	uParam0->f_12 = iParam1;
	uParam0->f_5 = iParam3;
	if (GlobalFunc_5953(Global_86101, uParam0->f_1) == 2)
	{
		if (GlobalFunc_7239(Global_86101, uParam0->f_1) < (3f * 60f))
		{
			func_22(Global_86101, uParam0->f_1, 2);
		}
	}
	if (bParam2)
	{
		uParam0->f_13 = 1;
	}
}

void func_91(var uParam0, var uParam1, var uParam2)//Position - 0x37A8
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar0 = 0f;
	iVar2 = 0;
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		if (*uParam1 != 0)
		{
			func_348(uParam0, uParam1, 1, 1, 0);
		}
		return;
	}
	else if (uParam0->f_60 && *uParam1 != 7)
	{
		if (*uParam1 != 0)
		{
			func_348(uParam0, uParam1, 0, 1, 1);
		}
		return;
	}
	else if (*uParam1 != 0 && *uParam1 != 1)
	{
		if (PED::IS_PED_INJURED(uParam1->f_2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var6 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 0) };
				if (SYSTEM::VDIST2(Var3, Var6) < 150f)
				{
					iVar9 = GlobalFunc_769(uParam1->f_1);
					if (iVar9 < 6)
					{
						GlobalFunc_7495("FR_X_INJ_1m", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[uParam1->f_1 /*29*/].f_3), 3, 0, 20000, 10000, 7, 0, 0, 0);
					}
				}
			}
			iVar10 = GlobalFunc_769(uParam1->f_1);
			iVar11 = GlobalFunc_4327(iVar10);
			func_342(iVar10, iVar11);
			if (!func_341(uParam1, 0))
			{
				if (iVar11 != -1)
				{
					iVar12 = GlobalFunc_5942(uParam1->f_2);
					if (iVar12 != 0)
					{
						if (!GlobalFunc_2647(iVar11) || func_327(iVar11) == 6)
						{
							func_276(Global_86101, uParam1->f_1, 2, 0, iVar12, iVar11, -1);
						}
					}
				}
			}
			func_348(uParam0, uParam1, 0, 1, 1);
			return;
		}
		else if (uParam1->f_2 == PLAYER::PLAYER_PED_ID())
		{
			func_348(uParam0, uParam1, 0, 0, 1);
			if (uParam1->f_1 == Global_86101 && func_273(uParam0, uParam1, uParam2))
			{
				func_5(uParam0, uParam1, 1, 1);
				return;
			}
			else
			{
				func_5(uParam0, uParam1, 0, 1);
				return;
			}
		}
		else if (func_272(uParam1->f_2))
		{
			func_348(uParam0, uParam1, 0, 1, 1);
			return;
		}
		else if ((!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_2, 1) && *uParam1 != 4) && *uParam1 != 5)
		{
			func_348(uParam0, uParam1, 0, 1, 1);
			return;
		}
		else if (uParam1->f_2 != Global_87845[GlobalFunc_237(uParam1->f_1)])
		{
			func_348(uParam0, uParam1, 0, 1, 1);
			return;
		}
		else if ((PED::IS_PED_FALLING(uParam1->f_2) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(uParam1->f_2)) && (((!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uParam1->f_2) && !PED::IS_PED_INJURED(uParam1->f_2)) || !MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1), &fVar1)) || fVar1 < -200f))
		{
			PED::DELETE_PED(&(uParam1->f_2));
			func_348(uParam0, uParam1, 1, 1, 1);
			return;
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1));
			if (fVar0 > (300f * 300f))
			{
				func_348(uParam0, uParam1, 1, 1, 1);
				return;
			}
		}
		if (uParam0->f_59)
		{
			if (func_341(uParam1, 0))
			{
				func_270(uParam0, uParam1, 1);
			}
			else
			{
				func_270(uParam0, uParam1, 0);
			}
		}
	}
	switch (*uParam1)
	{
		case 0:
			if (Global_86196)
			{
				if (func_273(uParam0, uParam1, uParam2))
				{
					if (uParam1->f_2 == PLAYER::PLAYER_PED_ID())
					{
						func_5(uParam0, uParam1, 1, 1);
					}
					else if (uParam1->f_11 == 1)
					{
						func_5(uParam0, uParam1, 4, 1);
					}
					else if (uParam1->f_11 == 2)
					{
						func_5(uParam0, uParam1, 4, 1);
					}
					else if (uParam1->f_11 == 3)
					{
						func_5(uParam0, uParam1, 5, 1);
					}
					else if (uParam1->f_11 == 4)
					{
						func_5(uParam0, uParam1, 6, 1);
						func_90(uParam1, 2, 1, 0);
						uParam1->f_11 = 0;
					}
					else if (uParam1->f_11 == 5)
					{
						func_5(uParam0, uParam1, 6, 1);
						func_90(uParam1, 0, 1, 0);
						uParam1->f_11 = 0;
					}
					else if (uParam1->f_11 == 6)
					{
						func_5(uParam0, uParam1, 6, 1);
						func_90(uParam1, 1, 1, PLAYER::PLAYER_PED_ID());
						uParam1->f_11 = 0;
					}
					else if (func_268(uParam0, uParam1))
					{
						if (func_341(uParam1, 0))
						{
							func_3(uParam0, uParam1);
							func_5(uParam0, uParam1, 6, 1);
						}
						else
						{
							func_5(uParam0, uParam1, 3, 1);
						}
					}
					else if (func_267(uParam1))
					{
						func_5(uParam0, uParam1, 6, 1);
					}
					else
					{
						func_5(uParam0, uParam1, 2, 1);
					}
				}
			}
			break;
		
		case 1:
			if (PED::IS_PED_INJURED(uParam1->f_2))
			{
				func_5(uParam0, uParam1, 0, 1);
			}
			else if (uParam1->f_2 != PLAYER::PLAYER_PED_ID())
			{
				if (!func_273(uParam0, uParam1, uParam2))
				{
					func_5(uParam0, uParam1, 0, 1);
				}
				else if (uParam1->f_11 == 4)
				{
					func_5(uParam0, uParam1, 6, 1);
					func_90(uParam1, 2, 1, 0);
					uParam1->f_11 = 0;
				}
				else if (uParam1->f_11 == 5)
				{
					func_5(uParam0, uParam1, 6, 1);
					func_90(uParam1, 0, 1, 0);
					uParam1->f_11 = 0;
				}
				else if (uParam1->f_11 == 6)
				{
					func_5(uParam0, uParam1, 6, 1);
					func_90(uParam1, 1, 1, PLAYER::PLAYER_PED_ID());
					uParam1->f_11 = 0;
				}
				else if (func_268(uParam0, uParam1))
				{
					if (func_341(uParam1, 0))
					{
						func_3(uParam0, uParam1);
						func_5(uParam0, uParam1, 6, 1);
					}
					else
					{
						func_5(uParam0, uParam1, 3, 1);
					}
				}
				else if (func_266(uParam1))
				{
					func_5(uParam0, uParam1, 6, 1);
				}
				else
				{
					func_5(uParam0, uParam1, 2, 1);
				}
			}
			else if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam1->f_2))
				{
					iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar13, -1) == uParam1->f_2)
					{
						uParam1->f_3 = iVar13;
					}
				}
			}
			break;
		
		case 2:
			if (func_266(uParam1))
			{
				func_5(uParam0, uParam1, 6, 1);
			}
			else if (func_268(uParam0, uParam1))
			{
				if (func_341(uParam1, 1))
				{
					func_3(uParam0, uParam1);
					func_5(uParam0, uParam1, 6, 1);
				}
				else
				{
					func_5(uParam0, uParam1, 3, 1);
				}
			}
			else if (func_260(uParam1))
			{
				func_3(uParam0, uParam1);
				func_89(uParam1, 1, PLAYER::PLAYER_PED_ID());
			}
			else if (func_259(uParam1, 0, &iVar2))
			{
				func_5(uParam0, uParam1, 6, 1);
				func_90(uParam1, 1, 0, iVar2);
			}
			else
			{
				func_257(uParam0, uParam1);
			}
			break;
		
		case 3:
			if (func_266(uParam1))
			{
				func_5(uParam0, uParam1, 6, 1);
			}
			else if (uParam0->f_46 > 1 && fVar0 > (35f * 35f))
			{
				func_3(uParam0, uParam1);
			}
			else if (uParam0->f_46 == 1 && fVar0 > (25f * 25f))
			{
				func_3(uParam0, uParam1);
			}
			else if (func_260(uParam1))
			{
				func_3(uParam0, uParam1);
				func_89(uParam1, 1, PLAYER::PLAYER_PED_ID());
			}
			else if (func_259(uParam1, 0, &iVar2))
			{
				func_3(uParam0, uParam1);
				func_90(uParam1, 1, 0, iVar2);
			}
			else if (func_244(uParam0, uParam1))
			{
				func_3(uParam0, uParam1);
				func_90(uParam1, 0, 1, 0);
			}
			else if (func_243(uParam0, uParam1))
			{
				func_3(uParam0, uParam1);
				func_90(uParam1, 3, 1, 0);
			}
			else if (PED::IS_PED_RAGDOLL(uParam1->f_2))
			{
				func_3(uParam0, uParam1);
			}
			else
			{
				func_242(uParam1, 1);
			}
			break;
		
		case 4:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
			{
				func_3(uParam0, uParam1);
			}
			else
			{
				func_242(uParam1, 0);
			}
			break;
		
		case 5:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 || fVar0 > (20f * 20f))
			{
				func_3(uParam0, uParam1);
			}
			else
			{
				func_242(uParam1, 0);
			}
			break;
		
		case 6:
			if (func_268(uParam0, uParam1))
			{
				func_5(uParam0, uParam1, 3, 1);
			}
			else if (func_220(uParam0, uParam1, uParam2, fVar0))
			{
				if (func_214(uParam0, uParam1))
				{
					func_5(uParam0, uParam1, 7, 1);
				}
			}
			break;
		
		case 7:
			if (func_92(uParam0, uParam1))
			{
				func_348(uParam0, uParam1, 1, 1, 1);
			}
			break;
	}
}

int func_92(var uParam0, var uParam1)//Position - 0x3FAB
{
	char[] cVar0[8];
	char[] cVar16[8];
	char[] cVar24[8];
	char[] cVar32[8];
	char* sVar40;
	char[] cVar56[8];
	char[] cVar64[8];
	char[] cVar80[8];
	char[] cVar88[8];
	char[] cVar104[8];
	float fVar112;
	var uVar113;
	float fVar114;
	struct<3> Var115;
	struct<3> Var118;
	struct<3> Var121;
	int iVar124;
	struct<3> Var125;
	struct<3> Var128;
	
	func_21(uParam1->f_1, &fVar114, &cVar0, &cVar16, &cVar24, &cVar32);
	func_20(Global_86101, uParam1->f_1, &sVar40, &cVar56);
	func_213(uParam1->f_1, &(uParam0->f_73), &cVar64, &cVar80, &cVar88, &cVar104, &fVar112, &uVar113);
	MISC::_0x6F2135B6129620C1(1);
	if (uParam1->f_4 == 0)
	{
		if ((CAM::IS_SCREEN_FADED_OUT() || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_INJURED(uParam1->f_2))
		{
			uParam1->f_4++;
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(&cVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar40);
			STREAMING::REQUEST_ANIM_DICT(&cVar64);
			if ((STREAMING::HAS_ANIM_DICT_LOADED(&cVar0) && STREAMING::HAS_ANIM_DICT_LOADED(&sVar40)) && STREAMING::HAS_ANIM_DICT_LOADED(&cVar64))
			{
				if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT(&cVar88, 0))
				{
					Var115 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					Var118 = { 0f, 0f, MISC::GET_HEADING_FROM_VECTOR_2D(Var115.x, Var115.f_1) };
					Var121 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var121, &(Var121.f_2));
					uParam0->f_79 = { Var121 };
					func_95(Var121, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1);
					uParam0->f_77 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar124 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar124))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
							VEHICLE::DELETE_VEHICLE(&iVar124);
						}
					}
					MISC::CLEAR_AREA_OF_VEHICLES(Var121, 10f, 0, 0, 1, 1, 0);
					MISC::CLEAR_AREA_OF_PEDS(Var121, 5f, 0);
					uParam0->f_78 = GlobalFunc_2662(Var121, 5f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam1->f_2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->f_2, 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam1->f_2, joaat("weapon_unarmed"), 1);
					Var125 = { uParam0->f_79 - Vector(10f, 10f, 10f) };
					Var128 = { uParam0->f_79 + Vector(10f, 10f, 10f) };
					PATHFIND::SET_ROADS_IN_AREA(Var125, Var128, 0, 1);
					PATHFIND::SET_PED_PATHS_IN_AREA(Var125, Var128, 0, 0);
					uParam0->f_76 = PED::CREATE_SYNCHRONIZED_SCENE(Var121, Var118, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_76, &cVar0, &cVar16, 8f, -2f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_2, uParam0->f_76, &cVar0, &cVar24, 8f, -2f, 0, 0, 1148846080, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_77, uParam0->f_76, &cVar32, &cVar0);
					PED::PLAY_FACIAL_ANIM(PLAYER::PLAYER_PED_ID(), &cVar56, &sVar40);
					PED::PLAY_FACIAL_ANIM(uParam1->f_2, &cVar80, &cVar64);
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uParam0->f_76);
					if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_76))
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_76, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					uParam1->f_4++;
				}
			}
		}
	}
	else if (uParam1->f_4 == 1)
	{
		if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_76) || CAM::IS_SCREEN_FADED_OUT()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_INJURED(uParam1->f_2))
		{
			uParam1->f_4++;
		}
		else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_76) >= fVar112)
		{
			if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				func_93(&cVar104, uVar113, 0);
			}
			uParam1->f_4++;
		}
	}
	else if (uParam1->f_4 == 2)
	{
		if ((((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_76) || CAM::IS_SCREEN_FADED_OUT()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_INJURED(uParam1->f_2)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_76) >= fVar114)
		{
			uParam1->f_4++;
		}
	}
	else if (uParam1->f_4 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::_0x6F2135B6129620C1(0);
			return 1;
		}
	}
	MISC::_0x6F2135B6129620C1(0);
	return 0;
}

void func_93(char[4] cParam0, var uParam1, int iParam2)//Position - 0x4374
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(cParam0);
	HUD::END_TEXT_COMMAND_PRINT(uParam1, 1);
}


void func_95(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x43BF
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
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
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_98(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_98(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_98(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_98(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_44 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_44 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



int func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x45C4
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
		Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8541(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8541(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11250(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_98(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8541(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11250(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_98(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, GlobalFunc_11140(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11139(iParam0, iVar10, &iVar4, 1))
							{
								func_98(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_98(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10870(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_98(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_98(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_98(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_98(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_98(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8541(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11250(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_98(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		GlobalFunc_8541(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11250(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_98(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11250(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_98(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11078(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11139(iParam0, iVar10, &iVar4, 0))
		{
			func_98(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11138(iParam0, iVar10, &iVar4))
		{
			func_98(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}



















































































































void func_213(int iParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, var uParam6, var uParam7)//Position - 0x20582
{
	bool bVar0;
	
	bVar0 = false;
	if (*uParam1 <= 0)
	{
		bVar0 = true;
	}
	if (iParam0 == 0)
	{
		if (*uParam1 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
		}
		StringCopy(sParam2, "FRIENDS@FRM@IG_2", 64);
		StringCopy(sParam3, "MICHAEL_KNOCKS_OUT_ANYONE_0", 32);
		StringIntConCat(sParam3, *uParam1, 32);
		StringCopy(sParam4, "MICHAEL_KNOCKOUT_FAFM_ANAA_0", 64);
		StringIntConCat(sParam4, *uParam1, 64);
		StringCopy(sParam5, "FrOUT_M_0", 32);
		StringIntConCat(sParam5, *uParam1, 32);
		if (*uParam1 == 1)
		{
			*uParam6 = 0.04f;
			*uParam7 = 1500;
		}
		else if (*uParam1 == 2)
		{
			*uParam6 = 0f;
			*uParam7 = 1650;
		}
		else if (*uParam1 == 3)
		{
			*uParam6 = 0f;
			*uParam7 = 1650;
		}
		else
		{
			*uParam6 = 0f;
			*uParam7 = 2000;
		}
	}
	else if (iParam0 == 1)
	{
		if (*uParam1 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
		}
		StringCopy(sParam2, "FRIENDS@FRF@IG_2", 64);
		StringCopy(sParam3, "FRANKLIN_KNOCKS_OUT_ANYONE_0", 32);
		StringIntConCat(sParam3, *uParam1, 32);
		StringCopy(sParam4, "FRANKLIN_KNOCKOUT_FAMF_APAA_0", 64);
		StringIntConCat(sParam4, *uParam1, 64);
		StringCopy(sParam5, "FrOUT_F_0", 32);
		StringIntConCat(sParam5, *uParam1, 32);
		if (*uParam1 == 1)
		{
			*uParam6 = 0f;
			*uParam7 = 2000;
		}
		else if (*uParam1 == 2)
		{
			*uParam6 = 0.065f;
			*uParam7 = 2500;
		}
		else if (*uParam1 == 3)
		{
			*uParam6 = 0.05f;
			*uParam7 = 1750;
		}
		else if (*uParam1 == 4)
		{
			*uParam6 = 0.05f;
			*uParam7 = 2180;
		}
		else if (*uParam1 == 5)
		{
			*uParam6 = 0.075f;
			*uParam7 = 1200;
		}
		else if (*uParam1 == 6)
		{
			*uParam6 = 0.075f;
			*uParam7 = 1200;
		}
		else if (*uParam1 == 7)
		{
			*uParam6 = 0.058f;
			*uParam7 = 1200;
		}
		else
		{
			*uParam6 = 0f;
			*uParam7 = 2000;
		}
	}
	else if (iParam0 == 2)
	{
		if (*uParam1 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
		}
		StringCopy(sParam2, "FRIENDS@FRT@IG_2", 64);
		StringCopy(sParam3, "TREVOR_KNOCKS_OUT_ANYONE_0", 32);
		StringIntConCat(sParam3, *uParam1, 32);
		StringCopy(sParam4, "TREVOR_KNOCKOUT_FAMT_ANAA_0", 64);
		StringIntConCat(sParam4, *uParam1, 64);
		StringCopy(sParam5, "FrOUT_T_0", 32);
		StringIntConCat(sParam5, *uParam1, 32);
		if (*uParam1 == 1)
		{
			*uParam6 = 0.02f;
			*uParam7 = 2400;
		}
		else if (*uParam1 == 2)
		{
			*uParam6 = 0.02f;
			*uParam7 = 2600;
		}
		else if (*uParam1 == 3)
		{
			*uParam6 = 0f;
			*uParam7 = 2800;
		}
		else if (*uParam1 == 4)
		{
			*uParam6 = 0.078f;
			*uParam7 = 1750;
		}
		else
		{
			*uParam6 = 0f;
			*uParam7 = 2000;
		}
	}
	else
	{
		StringCopy(sParam2, "", 64);
		StringCopy(sParam3, "", 32);
	}
	if (bVar0)
	{
	}
}

int func_214(var uParam0, var uParam1)//Position - 0x207F2
{
	int iVar0;
	
	iVar0 = GlobalFunc_7733(&(uParam0->f_75), 1, 18, 0, 0);
	if (iVar0 == 1)
	{
		uParam0->f_60 = 1;
		uParam0->f_78 = 0;
		uParam0->f_74 = uParam1->f_1;
		uParam0->f_73 = -1;
		return 1;
	}
	return 0;
}






int func_220(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0x20BC5
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	char* sVar6;
	
	iVar0 = 0;
	if (uParam1->f_12 == 2)
	{
		if (func_260(uParam1))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_89(uParam1, 1, PLAYER::PLAYER_PED_ID());
		}
		else if (func_259(uParam1, 1, &iVar0))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_90(uParam1, 1, 0, iVar0);
		}
		else if (!GlobalFunc_6695(uParam1->f_2, 242628503))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_90(uParam1, 0, 0, 0);
		}
	}
	else if (uParam1->f_12 == 0)
	{
		if (uParam1->f_13)
		{
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_2) && !PED::IS_PED_RAGDOLL(uParam1->f_2)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam1->f_2))
			{
				GlobalFunc_5122(uParam1->f_2, "GENERIC_WHATEVER", 3);
				if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam1->f_2))
				{
					uParam1->f_13 = 0;
				}
			}
		}
		if (func_260(uParam1))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_89(uParam1, 1, PLAYER::PLAYER_PED_ID());
		}
		else if (func_259(uParam1, 1, &iVar0))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_90(uParam1, 1, 0, iVar0);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
		{
			if (func_238(uParam1, PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0), 1))
			{
				uParam1->f_3 = PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0);
				if (PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1), uParam1->f_3))
				{
					func_237(uParam1, 17f, 786603);
				}
				else
				{
					func_237(uParam1, 10f, 786603);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				func_236(uParam1);
			}
		}
		else if (func_238(uParam1, uParam1->f_3, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_3, 0))
			{
				if (GlobalFunc_99(uParam1->f_3) == uParam1->f_1 && func_234())
				{
					TASK::CLEAR_PED_TASKS(uParam1->f_2);
					func_90(uParam1, 3, 1, 0);
				}
				else
				{
					uParam1->f_3 = 0;
					func_233(uParam1);
				}
			}
			else
			{
				func_232(uParam1);
			}
		}
		else
		{
			uParam1->f_3 = 0;
			func_233(uParam1);
		}
	}
	else if (uParam1->f_12 == 3)
	{
		if (uParam1->f_13)
		{
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_2) && !PED::IS_PED_RAGDOLL(uParam1->f_2)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam1->f_2))
			{
				GlobalFunc_5122(uParam1->f_2, "JACKED_GENERIC", 3);
				if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam1->f_2))
				{
					uParam1->f_13 = 0;
				}
			}
		}
		if (uParam1->f_4 < 1)
		{
			uParam1->f_4 = 1;
		}
		if (!func_234())
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			uParam1->f_3 = 0;
			func_90(uParam1, 0, 0, 0);
		}
		else if (func_260(uParam1))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_89(uParam1, 1, PLAYER::PLAYER_PED_ID());
		}
		else if (func_259(uParam1, 1, &iVar0))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_90(uParam1, 1, 0, iVar0);
		}
		else if (!func_238(uParam1, uParam1->f_3, 0))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			uParam1->f_3 = 0;
			func_90(uParam1, 0, 0, 0);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_90(uParam1, 0, 0, 0);
		}
		else if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_3, 0))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_90(uParam1, 0, 0, 0);
		}
		else
		{
			func_230(uParam1);
		}
	}
	else if (uParam1->f_12 == 1)
	{
		if (uParam1->f_13)
		{
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_2) && !PED::IS_PED_RAGDOLL(uParam1->f_2)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam1->f_2))
			{
				GlobalFunc_5122(uParam1->f_2, "EXTREME_GRIEFING", 36);
				if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam1->f_2))
				{
					uParam1->f_13 = 0;
				}
			}
		}
		if (uParam1->f_14)
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			uParam1->f_14 = 0;
		}
		if (uParam1->f_5 == PLAYER::PLAYER_PED_ID())
		{
			if (uParam1->f_4 < 2)
			{
				uParam1->f_4 = 2;
			}
		}
		if (PED::IS_PED_INJURED(uParam1->f_5))
		{
			func_90(uParam1, 0, 0, 0);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
		{
			if (func_238(uParam1, PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0), 1))
			{
				uParam1->f_3 = PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0);
				if (func_229(uParam1->f_2, uParam1->f_5, 150f))
				{
					iVar1 = 4 | 8 | 16 | 32 | 256 | 512 | 524288;
					func_237(uParam1, 55f, iVar1);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(uParam1->f_2);
					func_90(uParam1, 0, 0, 0);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				func_236(uParam1);
			}
		}
		else if (func_229(uParam1->f_2, uParam1->f_5, 150f) || ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_2))
		{
			func_228(uParam1, uParam1->f_5);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			func_90(uParam1, 0, 0, 0);
		}
	}
	else if (uParam1->f_12 == 4)
	{
		if (uParam1->f_13)
		{
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_2) && !PED::IS_PED_RAGDOLL(uParam1->f_2)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam1->f_2))
			{
				GlobalFunc_5122(uParam1->f_2, "EXTREME_GRIEFING", 36);
				if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam1->f_2))
				{
					uParam1->f_13 = 0;
				}
			}
		}
		if (uParam1->f_14)
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			uParam1->f_14 = 0;
		}
		if (uParam1->f_5 == PLAYER::PLAYER_PED_ID())
		{
			if (uParam1->f_4 < 2)
			{
				uParam1->f_4 = 2;
			}
		}
		if (PED::IS_PED_INJURED(uParam1->f_5))
		{
			func_90(uParam1, 0, 0, 0);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
		{
			func_236(uParam1);
		}
		else if (!PED::IS_PED_RAGDOLL(uParam1->f_2) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam1->f_2))
		{
			if (!GlobalFunc_6695(uParam1->f_2, 780511057))
			{
				TASK::CLEAR_PED_TASKS(uParam1->f_2);
				TASK::TASK_COMBAT_PED(uParam1->f_2, uParam1->f_5, 67108864, 16);
			}
		}
	}
	if ((uParam1->f_12 != 3 && uParam1->f_12 != 4) && (uParam1->f_12 != 1 || uParam1->f_5 == PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam1->f_2) == 0)
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0) || PED::IS_PED_ON_ANY_BIKE(uParam1->f_2)) || (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0), 1) && (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0)) == 2 || VEHICLE::GET_CONVERTIBLE_ROOF_STATE(PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0)) == 6)))
			{
				if (uParam1->f_4 == 0)
				{
					uParam1->f_4++;
				}
				else if (uParam1->f_4 == 1)
				{
					if (func_227(uParam0))
					{
						if (GlobalFunc_7239(Global_86101, uParam1->f_1) > 15f)
						{
							if (fParam3 < (8f * 8f))
							{
								if (func_341(uParam1, 0))
								{
									func_80(Global_86101, uParam1->f_1, 29, &sVar6, &cVar2);
								}
								else
								{
									func_80(Global_86101, uParam1->f_1, 22, &sVar6, &cVar2);
								}
								func_223(uParam2, uParam1->f_1, uParam1->f_2, 0);
								if (GlobalFunc_10618(uParam2, &sVar6, &cVar2, 4, 0, 0, 0))
								{
									if (!GlobalFunc_6695(uParam1->f_2, 150319005))
									{
										TASK::TASK_LOOK_AT_ENTITY(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 4000, 3104, 4);
									}
									func_22(Global_86101, uParam1->f_1, 2);
									uParam1->f_4++;
								}
							}
						}
					}
				}
				else if (uParam1->f_4 == 2)
				{
					if (func_227(uParam0))
					{
						if (GlobalFunc_7239(Global_86101, uParam1->f_1) > 10f)
						{
							if (fParam3 < (8f * 8f))
							{
								if (func_341(uParam1, 0))
								{
									func_80(Global_86101, uParam1->f_1, 29, &sVar6, &cVar2);
								}
								else
								{
									func_80(Global_86101, uParam1->f_1, 23, &sVar6, &cVar2);
								}
								func_223(uParam2, uParam1->f_1, uParam1->f_2, 0);
								if (GlobalFunc_10618(uParam2, &sVar6, &cVar2, 4, 0, 0, 0))
								{
									if (!GlobalFunc_6695(uParam1->f_2, 150319005))
									{
										TASK::TASK_LOOK_AT_ENTITY(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 4000, 3104, 4);
									}
									func_22(Global_86101, uParam1->f_1, 2);
									uParam1->f_4++;
								}
							}
						}
					}
				}
				else if (uParam1->f_4 == 3)
				{
					if (func_227(uParam0))
					{
						if (GlobalFunc_7239(Global_86101, uParam1->f_1) > 10f)
						{
							if (fParam3 < (8f * 8f))
							{
								if (func_341(uParam1, 0))
								{
									func_80(Global_86101, uParam1->f_1, 29, &sVar6, &cVar2);
								}
								else
								{
									func_80(Global_86101, uParam1->f_1, 24, &sVar6, &cVar2);
								}
								func_223(uParam2, uParam1->f_1, uParam1->f_2, 0);
								if (GlobalFunc_10618(uParam2, &sVar6, &cVar2, 4, 0, 0, 0))
								{
									if (!GlobalFunc_6695(uParam1->f_2, 150319005))
									{
										TASK::TASK_LOOK_AT_ENTITY(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 4000, 3104, 4);
									}
									func_22(Global_86101, uParam1->f_1, 2);
									uParam1->f_4++;
								}
							}
						}
					}
				}
				else if (uParam1->f_4 == 4)
				{
					if (fParam3 < (8f * 8f))
					{
						if (GlobalFunc_7239(Global_86101, uParam1->f_1) > 10f)
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) == 0)
							{
								if ((((((((((Global_86197 && uParam0->f_50 == 0) && (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && MISC::ABSF(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID())) < 10f))) && !PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0)) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(uParam1->f_2)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(uParam1->f_2)) && !GlobalFunc_236()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && func_221(uParam0, uParam1))
								{
									return 1;
								}
							}
						}
						if (GlobalFunc_7239(Global_86101, uParam1->f_1) > 15f)
						{
							if (func_227(uParam0))
							{
								if (func_341(uParam1, 0))
								{
									func_80(Global_86101, uParam1->f_1, 29, &sVar6, &cVar2);
								}
								else
								{
									func_80(Global_86101, uParam1->f_1, 24, &sVar6, &cVar2);
								}
								func_223(uParam2, uParam1->f_1, uParam1->f_2, 0);
								if (GlobalFunc_10618(uParam2, &sVar6, &cVar2, 4, 0, 0, 0))
								{
									if (!GlobalFunc_6695(uParam1->f_2, 150319005))
									{
										TASK::TASK_LOOK_AT_ENTITY(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 4000, 3104, 4);
									}
									func_22(Global_86101, uParam1->f_1, 2);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_221(var uParam0, var uParam1)//Position - 0x215FF
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar12;
	int iVar15;
	struct<3> Var16[3];
	struct<3> Var26[3];
	int iVar36;
	struct<3> Var37;
	int iVar40;
	int iVar41;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.f_1);
	iVar7 = 0;
	func_222(uParam1->f_1, &(Var16[0 /*3*/]), &(Var26[0 /*3*/]), &(Var16[1 /*3*/]), &(Var26[1 /*3*/]), &(Var16[2 /*3*/]), &(Var26[2 /*3*/]));
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	iVar36 = 0;
	while (iVar36 < 3)
	{
		if (uParam0->f_61[iVar36] == 0)
		{
			if ((Var26[iVar36 /*3*/] != 0f && Var26[iVar36 /*3*/].f_1 != 0f) && Var26[iVar36 /*3*/].f_2 != 0f)
			{
				Var37 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, Var16[iVar36 /*3*/]) };
				iVar40 = 338;
				if (iVar36 == 0)
				{
					Var37 = { Var37 + Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_61[iVar36] = SHAPETEST::START_SHAPE_TEST_BOX(Var37, Var26[iVar36 /*3*/], 0f, 0f, fVar6, 2, iVar40, iVar7, 7);
			}
		}
		else
		{
			iVar41 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_61[iVar36], &iVar15, &uVar9, &uVar12, &uVar8);
			switch (iVar41)
			{
				case 2:
					if (iVar15 == 0)
					{
						if (iVar36 == 0)
						{
							uParam0->f_69 = { Var0 };
							uParam0->f_72 = fVar6;
						}
						uParam0->f_65[iVar36] = MISC::GET_GAME_TIMER();
					}
					uParam0->f_61[iVar36] = 0;
					break;
				
				case 1:
					break;
				
				case 0:
					uParam0->f_61[iVar36] = 0;
					break;
				}
		}
		iVar36++;
	}
	if ((MISC::GET_GAME_TIMER() < uParam0->f_65[0] + 500 && MISC::GET_GAME_TIMER() < uParam0->f_65[1] + 500) && MISC::GET_GAME_TIMER() < uParam0->f_65[2] + 500)
	{
		return 1;
	}
	return 0;
}

void func_222(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x217CF
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 0f, 0.5f, 0f };
			*uParam2 = { 1f, 1.5f, 2f };
			*uParam3 = { 0f, 1.5f, 0.25f };
			*uParam4 = { 1f, 1f, 1.5f };
			*uParam5 = { 0f, -1.5f, 0f };
			*uParam6 = { 1.5f, 2.5f, 1.25f };
			break;
		
		case 1:
			*uParam1 = { 0.1f, 0.5f, 0f };
			*uParam2 = { 1.75f, 1.5f, 2f };
			*uParam3 = { 0f, 1.5f, 0.1f };
			*uParam4 = { 1f, 1.8f, 1.6f };
			*uParam5 = { 0.75f, -1.75f, 0f };
			*uParam6 = { 2.5f, 3f, 1.25f };
			break;
		
		case 2:
		default:
			*uParam1 = { -0.25f, 0.75f, 0f };
			*uParam2 = { 1.25f, 1.5f, 2f };
			*uParam3 = { -0.25f, 1.75f, 0.1f };
			*uParam4 = { 1f, 2f, 1.6f };
			*uParam5 = { -1f, -1.5f, 0f };
			*uParam6 = { 3f, 3f, 1.25f };
			break;
	}
}

void func_223(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x218F3
{
	struct<2> Var0;
	int iVar4;
	
	StringCopy(&Var0, func_226(iParam1), 16);
	iVar4 = func_225(iParam1);
	if (bParam3)
	{
	}
	GlobalFunc_173(uParam0, iVar4, iParam2, &Var0, 0, 1);
}


int func_225(int iParam0)//Position - 0x219BB
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 19:
			return 3;
			break;
		
		case 14:
			return 4;
			break;
		
		case 17:
			return 5;
			break;
	}
	return 9;
}

char* func_226(int iParam0)//Position - 0x21A1A
{
	switch (iParam0)
	{
		case 0:
			return "MICHAEL";
			break;
		
		case 1:
			return "FRANKLIN";
			break;
		
		case 2:
			return "TREVOR";
			break;
		
		case 19:
			return "LAMAR";
			break;
		
		case 14:
			return "JIMMY";
			break;
		
		case 17:
			return "AMANDA";
			break;
	}
	return "invalid";
}

int func_227(var uParam0)//Position - 0x21A8D
{
	if ((uParam0->f_50 != 0 || GlobalFunc_111()) || HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	return 1;
}

void func_228(var uParam0, var uParam1)//Position - 0x21AB7
{
	if (!GlobalFunc_6695(uParam0->f_2, 1805844857))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_2);
		TASK::TASK_SMART_FLEE_PED(uParam0->f_2, uParam1, 1000f, -1, 0, 0);
	}
}

bool func_229(int iParam0, int iParam1, float fParam2)//Position - 0x21AEA
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	Var0.x = (Var0.x - Var3.x);
	Var0.f_1 = (Var0.f_1 - Var3.f_1);
	Var0.f_2 = (Var0.f_2 - Var3.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= (fParam2 * fParam2);
}

void func_230(var uParam0)//Position - 0x21B48
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_2, uParam0->f_3, 75f, 75f, 75f, 0, 1, 0))
	{
		iVar0 = GlobalFunc_708(PLAYER::PLAYER_PED_ID());
		if (iVar0 == -1)
		{
			if (!GlobalFunc_6695(uParam0->f_2, -1794415470))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_2);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_2, uParam0->f_3, -1, -1, 2f, 524297, 0);
			}
		}
		else if (!GlobalFunc_6695(uParam0->f_2, -875674219))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), -1);
		}
	}
	else
	{
		uParam0->f_3 = 0;
	}
}


void func_232(var uParam0)//Position - 0x21C5C
{
	if (!GlobalFunc_6695(uParam0->f_2, -1794415470))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_2);
		TASK::TASK_ENTER_VEHICLE(uParam0->f_2, uParam0->f_3, -1, -1, 1f, 4194817, 0);
	}
}

void func_233(var uParam0)//Position - 0x21C91
{
	if (!GlobalFunc_6695(uParam0->f_2, -1146898486))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_2);
		TASK::TASK_WANDER_STANDARD(uParam0->f_2, 1193033728, 0);
	}
}

int func_234()//Position - 0x21CC0
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}


void func_236(var uParam0)//Position - 0x21D3B
{
	if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(uParam0->f_2)) > 5f)
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0), -1) == uParam0->f_2)
		{
			if (!GlobalFunc_6695(uParam0->f_2, -1273030092))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_2);
				TASK::TASK_VEHICLE_MISSION(uParam0->f_2, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0), 0, 5, 0f, 786603, 0f, 0f, 1);
			}
		}
	}
	else if (!GlobalFunc_6695(uParam0->f_2, -828834893))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_2);
		TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_2, 0, 0);
	}
}

void func_237(var uParam0, float fParam1, int iParam2)//Position - 0x21DC3
{
	if (!GlobalFunc_6695(uParam0->f_2, -258271821))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_2);
		TASK::TASK_VEHICLE_DRIVE_WANDER(uParam0->f_2, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0), fParam1, iParam2);
	}
	else
	{
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_2, fParam1);
	}
}

int func_238(var uParam0, int iParam1, int iParam2)//Position - 0x21E06
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0) && ENTITY::GET_ENTITY_HEALTH(iParam1) > 600) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1)) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("caddy")) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("caddy2")) && ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_2, iParam1, 150f, 150f, 150f, 0, 1, 0))
	{
		if (iParam2 == 0 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0), -1) == uParam0->f_2)
		{
			return 1;
		}
	}
	return 0;
}




void func_242(var uParam0, bool bParam1)//Position - 0x220DA
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
		{
			if (!GlobalFunc_6695(uParam0->f_2, -828834893))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_2);
				TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_2, MISC::GET_RANDOM_INT_IN_RANGE(0, 1000), 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
		{
			if (!GlobalFunc_6695(uParam0->f_2, 1227113341))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_2);
				TASK::TASK_GO_TO_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 7.5f, 7.5f, 7.5f, 0, 1, 0))
		{
			if (!GlobalFunc_6695(uParam0->f_2, 1227113341))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_2);
				TASK::TASK_GO_TO_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), -1, 6f, 1f, 1073741824, 0);
			}
		}
		else if (!GlobalFunc_6695(uParam0->f_2, -875674219))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), -1);
		}
	}
	if (!GlobalFunc_6695(uParam0->f_2, 150319005))
	{
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
	}
	if (!GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), 150319005))
	{
		TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2, -1, 0, 3);
	}
}

int func_243(var uParam0, var uParam1)//Position - 0x2222E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_3, 0))
	{
		if (*uParam1 == 3 && uParam0->f_51 == uParam1->f_1)
		{
			if (((uParam0->f_50 == 20 || uParam0->f_50 == 21) || uParam0->f_50 == 22) || uParam0->f_50 == 23)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_244(var uParam0, var uParam1)//Position - 0x222A4
{
	if (func_245(uParam1->f_2, 170f))
	{
		if (*uParam1 == 3 && uParam0->f_51 == uParam1->f_1)
		{
			if (((uParam0->f_50 == 20 || uParam0->f_50 == 21) || uParam0->f_50 == 22) || uParam0->f_50 == 23)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_245(int iParam0, float fParam1)//Position - 0x2230C
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
				if (func_246(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_246(int iParam0, float fParam1)//Position - 0x22382
{
	return func_247(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_247(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2239A
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_255(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_48[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_250();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_48[iVar4 /*4*/].f_1 = iParam0;
		Local_48[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_6422(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_48[iVar4 /*4*/].f_3) < iParam4);
}



int func_250()//Position - 0x2264C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if ((Local_48[iVar0 /*4*/] == 0 && Local_48[iVar0 /*4*/].f_1 == 0) && Local_48[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_255(int iParam0, int iParam1)//Position - 0x227A2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if (Local_48[iVar0 /*4*/].f_1 == iParam0 && Local_48[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_257(var uParam0, var uParam1)//Position - 0x22809
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
	{
		if (uParam1->f_4 == 0)
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1) };
			if (PATHFIND::IS_POINT_ON_ROAD(Var0, 0))
			{
				uParam1->f_4++;
			}
			else
			{
				uParam1->f_4 = 60;
			}
		}
		else if (uParam1->f_4 < 60)
		{
			uParam1->f_4++;
			Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1) };
			iVar9 = 1 | 2 | 4 | 8;
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var3, 1, &Var6, iVar9))
			{
				iVar10 = 0;
				iVar11 = 0;
				while (iVar11 < 3)
				{
					if (iVar11 != uParam1->f_1)
					{
						if ((*uParam0)[iVar11 /*15*/] != 0)
						{
							if (!PED::IS_PED_INJURED((uParam0[iVar11 /*15*/])->f_2))
							{
								if (func_258((uParam0[iVar11 /*15*/])->f_2, Var6, 3f))
								{
									iVar10 = 1;
								}
							}
						}
					}
					iVar11++;
				}
				if (iVar10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1->f_2, Var6, 1f, -1, 1048576000, 0, 1193033728);
					uParam1->f_4 = 60;
				}
			}
		}
		else if (uParam1->f_4 == 60)
		{
			if (!GlobalFunc_6695(uParam1->f_2, 713668775))
			{
				uParam1->f_4++;
			}
		}
		else if (uParam1->f_4 == 61)
		{
			if (!PED::IS_PED_USING_ANY_SCENARIO(uParam1->f_2))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam1->f_2, 1);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam1->f_2, 1);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uParam1->f_2);
				TASK::CLEAR_PED_TASKS(uParam1->f_2);
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar12 == 0)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uParam1->f_2, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uParam1->f_2, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
			}
			else
			{
				PED::_0xC2EE020F5FB4DB53(uParam1->f_2);
			}
		}
	}
	else
	{
		uParam1->f_4 = 0;
		iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar13, -1) == uParam1->f_2)
		{
			if (!GlobalFunc_6695(uParam1->f_2, -1273030092))
			{
				TASK::CLEAR_PED_TASKS(uParam1->f_2);
				TASK::TASK_VEHICLE_DRIVE_WANDER(uParam1->f_2, iVar13, 7.5f, 786603);
			}
		}
		else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar13)) < 10f)
		{
			if (!GlobalFunc_6695(uParam1->f_2, -828834893))
			{
				TASK::CLEAR_PED_TASKS(uParam1->f_2);
				TASK::TASK_LEAVE_ANY_VEHICLE(uParam1->f_2, 0, 0);
			}
		}
		else if (!GlobalFunc_6695(uParam1->f_2, 63541484))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_2);
			TASK::TASK_PAUSE(uParam1->f_2, -1);
		}
	}
}

bool func_258(int iParam0, struct<3> Param1, float fParam4)//Position - 0x22A4F
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var0.x = (Var0.x - Param1.x);
	Var0.f_1 = (Var0.f_1 - Param1.f_1);
	Var0.f_2 = (Var0.f_2 - Param1.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= (fParam4 * fParam4);
}

int func_259(var uParam0, int iParam1, int iParam2)//Position - 0x22AA2
{
	var uVar0[12];
	int iVar13;
	int iVar14;
	
	if ((iParam1 && PED::_0x336B3D200AB007CB(uParam0->f_2, ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1), 75f) > 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_2))
	{
		iVar14 = PED::GET_PED_NEARBY_PEDS(uParam0->f_2, &uVar0, -1);
		iVar13 = 0;
		while (iVar13 < iVar14)
		{
			*iParam2 = uVar0[iVar13];
			if (!PED::IS_PED_INJURED(*iParam2))
			{
				if (PED::IS_PED_IN_COMBAT(*iParam2, uParam0->f_2))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2, *iParam2, 1) || (iParam1 && func_229(*iParam2, uParam0->f_2, 75f)))
					{
						*iParam2 = uVar0[iVar13];
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2);
						return 1;
					}
				}
			}
			iVar13++;
		}
		*iParam2 = 0;
	}
	return 0;
}

int func_260(var uParam0)//Position - 0x22B68
{
	int iVar0;
	struct<3> Var1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1) };
	if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 1)) || ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 1))) || GlobalFunc_8324(uParam0->f_2, 0, 0, 0, 0)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_2)) || (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var1, 20f) && !((FIRE::IS_EXPLOSION_IN_SPHERE(11, Var1, 20f) || FIRE::IS_EXPLOSION_IN_SPHERE(13, Var1, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Var1, 20f))))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2);
		return 1;
	}
	return 0;
}






int func_266(var uParam0)//Position - 0x22FDD
{
	int iVar0;
	
	iVar0 = GlobalFunc_5953(Global_86101, uParam0->f_1);
	if (iVar0 == 2)
	{
		if (GlobalFunc_7239(Global_86101, uParam0->f_1) < (3f * 60f))
		{
			return 1;
		}
	}
	return 0;
}

int func_267(var uParam0)//Position - 0x23015
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 != uParam0->f_1)
		{
			if (GlobalFunc_5953(iVar0, uParam0->f_1) == 2)
			{
				if (GlobalFunc_7239(iVar0, uParam0->f_1) < (3f * 60f))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_268(var uParam0, var uParam1)//Position - 0x23060
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (uParam1->f_9 == 0)
		{
			iVar0 = 279;
			Var1 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
			Var4 = { PED::GET_PED_BONE_COORDS(uParam1->f_2, 31086, 0f, 0f, 0f) };
			iVar7 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
			uParam1->f_9 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var1, Var4, iVar0, iVar7, 7);
		}
		else
		{
			iVar16 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam1->f_9, &iVar8, &uVar9, &uVar12, &iVar15);
			if (iVar16 == 2)
			{
				iVar17 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
				{
					iVar17 = PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0);
				}
				if ((iVar8 == 0 || (ENTITY::DOES_ENTITY_EXIST(iVar15) && iVar15 == GlobalFunc_1421(uParam1->f_2))) || (ENTITY::DOES_ENTITY_EXIST(iVar15) && iVar15 == GlobalFunc_1421(iVar17)))
				{
					uParam1->f_10 = MISC::GET_GAME_TIMER();
				}
				uParam1->f_9 = 0;
			}
			else if (iVar16 == 0)
			{
				uParam1->f_9 = 0;
			}
		}
		if ((MISC::GET_GAME_TIMER() - uParam1->f_10) < 500)
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::ABSF(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID())) < 10f) && (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0) || MISC::ABSF(ENTITY::GET_ENTITY_SPEED(uParam1->f_2)) < 10f))
			{
				if (!PED::IS_PED_RAGDOLL(uParam1->f_2))
				{
					fVar18 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1));
					fVar19 = 13f;
					if (func_341(uParam1, 0))
					{
						fVar19 = 5f;
					}
					else if (uParam0->f_46 > 0)
					{
						fVar19 = 25f;
					}
					if (fVar18 < (fVar19 * fVar19))
					{
						if (!func_266(uParam1))
						{
							if (*uParam1 == 6)
							{
								if (uParam1->f_12 == 4 || uParam1->f_12 == 1)
								{
									return 0;
								}
							}
							if (ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_2) && !ENTITY::IS_ENTITY_OCCLUDED(uParam1->f_2))
							{
								if (func_85() && Global_68514.f_1 == 0)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}


void func_270(var uParam0, var uParam1, bool bParam2)//Position - 0x23277
{
	if (bParam2)
	{
		if (uParam1->f_8 == 0 && uParam1->f_1 != Global_86101)
		{
			uParam1->f_6 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2);
			uParam1->f_7 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2);
			PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2, uParam0->f_57);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2, uParam0->f_57);
			uParam1->f_8 = 1;
		}
	}
	else if (uParam1->f_8 == 1)
	{
		if (uParam1->f_1 == Global_86101)
		{
		}
		else
		{
			if (GlobalFunc_6695(uParam1->f_2, 780511057))
			{
				TASK::CLEAR_PED_TASKS(uParam1->f_2);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2, uParam1->f_6);
			PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2, uParam1->f_7);
		}
		uParam1->f_8 = 0;
	}
}


int func_272(int iParam0)//Position - 0x23359
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_89952)
	{
		if (Global_89952[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(var uParam0, var uParam1, var uParam2)//Position - 0x23388
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (uParam1->f_1 == Global_86101)
		{
			uParam1->f_2 = PLAYER::PLAYER_PED_ID();
			func_223(uParam2, uParam1->f_1, uParam1->f_2, 0);
			uParam1->f_11 = 0;
			return 1;
		}
		else if (!PED::IS_PED_INJURED(Global_86205[uParam1->f_1]))
		{
			uParam1->f_2 = Global_86205[uParam1->f_1];
			uParam1->f_11 = Global_86209[uParam1->f_1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_2, 1, 1);
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_2, 1))
			{
				func_275(uParam0, uParam1, uParam2);
				Global_86205[uParam1->f_1] = 0;
				uParam1->f_3 = 0;
				return 1;
			}
		}
		else
		{
			iVar0 = GlobalFunc_237(uParam1->f_1);
			uParam1->f_2 = Global_87845[iVar0];
			if (!PED::IS_PED_INJURED(uParam1->f_2))
			{
				if (MISC::IS_BIT_SET(Global_87845.f_47, iVar0))
				{
				}
				else if (func_272(uParam1->f_2))
				{
				}
				else if (func_48(Global_86101, uParam1->f_1, &iVar1) && GlobalFunc_2014(iVar1) == 0)
				{
					sVar2 = "";
					iVar3 = 0;
					sVar2 = ENTITY::GET_ENTITY_SCRIPT(uParam1->f_2, &iVar3);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var7 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, 1) };
						fVar10 = SYSTEM::VDIST2(Var4, Var7);
						if (fVar10 < (200f * 200f))
						{
							if (MISC::ARE_STRINGS_EQUAL(sVar2, "player_controller") || MISC::ARE_STRINGS_EQUAL(sVar2, "player_controller_b"))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_2, 1, 1);
								if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_2, 1))
								{
									uParam1->f_11 = 0;
									func_275(uParam0, uParam1, uParam2);
									return 1;
								}
							}
							else if (uParam1->f_1 == 2 && MISC::ARE_STRINGS_EQUAL(sVar2, "family_scene_t0"))
							{
								switch (Global_85373[9])
								{
									case 114:
									case 116:
										if (func_274(uParam1, 0, 12f))
										{
											uParam1->f_11 = 3;
											func_275(uParam0, uParam1, uParam2);
											return 1;
										}
										break;
									
									case 117:
									case 113:
										if (func_274(uParam1, 1, 30f))
										{
											uParam1->f_11 = 1;
											func_275(uParam0, uParam1, uParam2);
											return 1;
										}
										break;
									
									case 112:
									case 115:
										if (func_274(uParam1, 1, 30f))
										{
											uParam1->f_11 = 2;
											func_275(uParam0, uParam1, uParam2);
											return 1;
										}
										break;
									}
								}
							}
						}
					}
				}
			}
	}
	return 0;
}

int func_274(var uParam0, int iParam1, float fParam2)//Position - 0x235E9
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			iVar0 = 1;
		}
		if (iParam1 == iVar0)
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1));
			fVar2 = fParam2;
			if (fVar1 < (fVar2 * fVar2))
			{
				if (func_85())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_275(var uParam0, var uParam1, var uParam2)//Position - 0x23649
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(uParam1->f_2))
	{
		if (PED::IS_PED_USING_ACTION_MODE(uParam1->f_2))
		{
			PED::SET_PED_USING_ACTION_MODE(uParam1->f_2, 0, -1, 0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam1->f_2, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == uParam1->f_2)
			{
				uParam1->f_3 = iVar0;
			}
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam1->f_2);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_3))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam1->f_3);
		}
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam1->f_2, 16);
		func_223(uParam2, Global_86101, PLAYER::PLAYER_PED_ID(), 0);
		func_223(uParam2, uParam1->f_1, uParam1->f_2, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_2, 1);
		AUDIO::STOP_PED_SPEAKING(uParam1->f_2, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(uParam1->f_2, joaat("weapon_unarmed"), 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_2, 0);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam1->f_2, 1);
		if (func_341(uParam1, 0))
		{
			func_270(uParam0, uParam1, 1);
		}
	}
}

int func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x23741
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	
	iVar0 = 3;
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_2962(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (func_324(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return 0;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (GlobalFunc_7121(iParam5, iVar4, iVar5, iVar0, iVar2, iParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (func_318(iVar1, iParam2, -1, &sVar8))
	{
		if (GlobalFunc_10725(iParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_306();
						break;
					
					case 203:
						func_305();
						break;
					
					case 204:
						func_304();
						break;
					
					case 205:
						func_303();
						break;
					
					case 206:
						func_277();
						break;
					}
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

void func_277()//Position - 0x238EB
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10871(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10871(iVar0, 127, (iVar1 / 10));
	}
}


























void func_303()//Position - 0x24869
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10871(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10871(iVar0, 126, (iVar1 / 10));
	}
}

void func_304()//Position - 0x248AB
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10871(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10871(iVar0, 125, (iVar1 / 10));
	}
}

void func_305()//Position - 0x248ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10871(iVar0, 124, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10871(iVar0, 124, (iVar1 / 10));
	}
}

void func_306()//Position - 0x2492F
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10871(iVar0, 123, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10871(iVar0, 123, (iVar1 / 10));
	}
}












int func_318(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2583C
{
	struct<4> Var0;
	struct<4> Var4[2];
	int iVar13;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		StringCopy(&Var0, "FTX_", 16);
		StringConCat(&Var0, GlobalFunc_765(iParam0), 16);
		StringConCat(&Var0, "_", 16);
		switch (iParam1)
		{
			case 0:
				StringConCat(&Var0, "LOST", 16);
				break;
			
			case 1:
				StringConCat(&Var0, "LATE", 16);
				break;
			
			case 2:
				StringConCat(&Var0, "HOSP", 16);
				break;
			
			case 3:
				StringConCat(&Var0, "PDIED", 16);
				break;
			
			case 4:
				StringConCat(&Var0, "PBUST", 16);
				break;
			
			default:
				StringConCat(&Var0, "X", 16);
				StringIntConCat(&Var0, iParam1, 16);
				*uParam3 = { Var0 };
				return 0;
				break;
		}
		Var4[0 /*4*/] = { Var0 };
		StringConCat(&(Var4[0 /*4*/]), "a", 16);
		Var4[1 /*4*/] = { Var0 };
		StringConCat(&(Var4[1 /*4*/]), "b", 16);
		if (iParam2 == -1)
		{
			iVar13 = GlobalFunc_3049(iParam0);
			if (func_319(&(Var4[0 /*4*/]), iVar13))
			{
				iParam2 = 1;
			}
			else if (func_319(&(Var4[1 /*4*/]), iVar13))
			{
				iParam2 = 0;
			}
			else
			{
				iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
		}
		*uParam3 = { Var4[iParam2 /*4*/] };
		return 1;
	}
	return 0;
}

int func_319(char* sParam0, int iParam1)//Position - 0x25974
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 > 3)
	{
		return 0;
	}
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/]), sParam0))
			{
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_99[iParam1])
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return 1;
	}
	return 0;
}





int func_324(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x25C7F
{
	struct<4> Var0[2];
	int iVar9;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		switch (iParam0)
		{
			case 0:
				*uParam3 = 61;
				break;
			
			case 1:
				*uParam3 = 62;
				break;
			
			case 2:
				*uParam3 = 63;
				break;
			
			case 3:
				*uParam3 = 64;
				break;
			
			case 4:
				*uParam3 = 65;
				break;
			
			case 5:
				*uParam3 = 66;
				break;
		}
		if (iParam2 == -1)
		{
			if (func_318(iParam0, iParam1, 0, &(Var0[0 /*4*/])) && func_318(iParam0, iParam1, 1, &(Var0[1 /*4*/])))
			{
				iVar9 = GlobalFunc_3049(iParam0);
				if (func_319(&(Var0[0 /*4*/]), iVar9))
				{
					iParam2 = 1;
				}
				else if (func_319(&(Var0[1 /*4*/]), iVar9))
				{
					iParam2 = 0;
				}
				else
				{
					iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
			}
			else
			{
				iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
		}
		*uParam4 = GlobalFunc_4326(iParam1, iParam2);
		return 1;
	}
	return 0;
}



int func_327(int iParam0)//Position - 0x25E66
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar1 /*15*/] == iParam0)
		{
			return func_336(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar1 /*14*/] == iParam0)
		{
			return func_334(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar1 /*10*/] == iParam0)
		{
			return func_328(iParam0, iVar0);
		}
		iVar1++;
	}
	return 6;
}

int func_328(int iParam0, int iParam1)//Position - 0x25F1C
{
	struct<10> Var0;
	bool bVar10;
	
	Var0 = { GlobalFunc_4329(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!GlobalFunc_42(GlobalFunc_8315()))
	{
		return 6;
	}
	bVar10 = false;
	if (MISC::IS_BIT_SET(Var0.f_2, GlobalFunc_8315()))
	{
		bVar10 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar10)
	{
		if (Var0.f_3 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[GlobalFunc_8315()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_35465[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_35464 > iParam1)
	{
		return 2;
	}
	return 1;
}






int func_334(int iParam0, int iParam1)//Position - 0x26180
{
	struct<14> Var0;
	bool bVar14;
	
	Var0 = { GlobalFunc_4330(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!GlobalFunc_42(GlobalFunc_8315()))
	{
		return 6;
	}
	bVar14 = false;
	if (MISC::IS_BIT_SET(Var0.f_2, GlobalFunc_8315()))
	{
		bVar14 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar14)
	{
		if (Var0.f_3 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[GlobalFunc_8315()])
		{
			return 5;
		}
	}
	if (Global_35465[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_35464 > iParam1)
	{
		return 2;
	}
	return 1;
}


int func_336(int iParam0, int iParam1)//Position - 0x2625E
{
	struct<15> Var0;
	bool bVar15;
	
	Var0 = { GlobalFunc_4331(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!GlobalFunc_42(GlobalFunc_8315()))
	{
		return 1;
	}
	if (Global_35460 != -1)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_35460 /*15*/] == iParam0)
		{
			return 0;
		}
	}
	bVar15 = false;
	if (MISC::IS_BIT_SET(Var0.f_2, GlobalFunc_8315()))
	{
		bVar15 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar15)
	{
		if (Var0.f_3 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[GlobalFunc_8315()])
		{
			return 5;
		}
	}
	if (Global_35465[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_35464 > iParam1)
	{
		return 2;
	}
	return 1;
}





int func_341(var uParam0, bool bParam1)//Position - 0x2655D
{
	if ((uParam0->f_1 == 1 && Global_86101 == 2) || (uParam0->f_1 == 2 && Global_86101 == 1))
	{
		if (!GlobalFunc_230(30))
		{
			if (bParam1)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_2))
				{
					if (Global_86101 == 2)
					{
						GlobalFunc_5122(uParam0->f_2, "GENERIC_FUCK_YOU", 3);
					}
					else
					{
						GlobalFunc_5122(uParam0->f_2, "GENERIC_FUCK_YOU", 3);
					}
				}
				if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_2))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_342(int iParam0, int iParam1)//Position - 0x265E7
{
	if (iParam0 < 6)
	{
		GlobalFunc_6715(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/]));
		Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_381[iParam0] = iParam1;
		if (iParam1 != -1)
		{
			GlobalFunc_4985(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/]));
		}
	}
}






void func_348(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x269EC
{
	if (*uParam1 != 0)
	{
		func_5(uParam0, uParam1, 0, bParam3);
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_2) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_2, 0)) && !func_272(uParam1->f_2))
		{
			if (PED::IS_PED_INJURED(uParam1->f_2))
			{
				Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam1->f_1] = 0;
				func_362(uParam1->f_2);
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[uParam1->f_1] = GlobalFunc_7626();
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_2));
			}
			else
			{
				func_350(uParam0, uParam1);
				if (bParam2)
				{
					if (bParam4)
					{
						func_362(uParam1->f_2);
					}
					PED::DELETE_PED(&(uParam1->f_2));
				}
				else
				{
					func_349(uParam1->f_2);
				}
			}
		}
	}
	func_4(uParam1, uParam1->f_1);
}

void func_349(var uParam0)//Position - 0x26AA7
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < Global_89952)
	{
		if (iVar0 < 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_89952[iVar1]))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0 || iVar0 > Global_89952)
	{
		iVar0 = 0;
	}
	Global_89952[iVar0] = uParam0;
}

void func_350(var uParam0, var uParam1)//Position - 0x26B02
{
	if (!PED::IS_PED_INJURED(uParam1->f_2))
	{
		PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(uParam1->f_2);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_2, 16);
		PED::SET_PED_CAN_SWITCH_WEAPON(uParam1->f_2, 1);
		func_270(uParam0, uParam1, 0);
	}
}












void func_362(int iParam0)//Position - 0x26E26
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	
	iVar0 = GlobalFunc_6674(iParam0);
	Var1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] };
	uVar4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0];
	uVar5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar0];
	Var6 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/] };
	func_364(iParam0, 0);
	if (!GlobalFunc_100(Var1, 0f, 0f, 0f))
	{
		fVar9 = MISC::ABSF((Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_2 - Var1.f_2));
		fVar10 = SYSTEM::VDIST2(Var1, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/]);
		fVar11 = SYSTEM::VMAG(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/]);
		bVar12 = false;
		if (fVar11 > 25f)
		{
			if (fVar9 > 25f)
			{
				bVar12 = true;
			}
			if (fVar10 > (25f * 25f))
			{
				bVar12 = true;
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				bVar12 = true;
			}
			if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0))
			{
				bVar12 = true;
			}
		}
		if (bVar12)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { Var1 };
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0] = uVar4;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar0] = uVar5;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/] = { Var6 };
		}
	}
}


void func_364(int iParam0, bool bParam1)//Position - 0x26FCD
{
	func_376(iParam0);
	GlobalFunc_7700(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}












void func_376(int iParam0)//Position - 0x2826A
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(uParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(uParam0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar0] = GlobalFunc_7626();
	}
}

void func_377(var uParam0, bool bParam1)//Position - 0x282A4
{
	int iVar0;
	
	func_379(uParam0, 0);
	if (uParam0->f_46 > 0)
	{
		func_380(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_348(uParam0, uParam0[iVar0 /*15*/], bParam1, 1, 1);
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(uParam0->f_57);
	func_378(uParam0);
}

void func_378(var uParam0)//Position - 0x282F1
{
	int iVar0;
	
	uParam0->f_49 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 145;
	uParam0->f_53 = -1;
	uParam0->f_60 = 0;
	uParam0->f_74 = 145;
	uParam0->f_75 = -1;
	uParam0->f_78 = 0;
	uParam0->f_77 = 0;
	if (PED::ADD_RELATIONSHIP_GROUP("AmbFriendEmpty", &(uParam0->f_57)))
	{
	}
	uParam0->f_58 = 0;
	uParam0->f_59 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_4(uParam0[iVar0 /*15*/], iVar0);
		iVar0++;
	}
}

void func_379(var uParam0, int iParam1)//Position - 0x2836E
{
	if (uParam0->f_50 != 0)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(iParam1);
		func_81(uParam0, 0);
	}
}

void func_380(var uParam0)//Position - 0x2838C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((*uParam0)[iVar0 /*15*/] == 3 || (*uParam0)[iVar0 /*15*/] == 4) || (*uParam0)[iVar0 /*15*/] == 5)
		{
			func_3(uParam0, uParam0[iVar0 /*15*/]);
		}
		iVar0++;
	}
}



void func_383(int iParam0)//Position - 0x28401
{
	if (iParam0 < 6)
	{
		Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_381[iParam0] = -1;
		if (GlobalFunc_226(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/])) && GlobalFunc_225(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/])))
		{
			GlobalFunc_5947(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/]));
		}
	}
}


int func_385(int iParam0)//Position - 0x2849D
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar1 /*14*/] == iParam0)
		{
			return func_334(iParam0, iVar0);
		}
		iVar1++;
	}
	return 6;
}










void func_395(int iParam0, int iParam1)//Position - 0x2867B
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	char cVar5[16];
	char cVar9[16];
	var uVar13;
	
	iVar0 = GlobalFunc_3049(iParam1);
	iVar4 = Global_86223[iParam0 /*2*/];
	if (iVar4 == 0)
	{
		if (!GlobalFunc_39(17))
		{
			if (func_443(iVar0))
			{
				if (!GlobalFunc_6687(6))
				{
					if (func_405(iVar0, &bVar1, &bVar2, &bVar3))
					{
						if (bVar1)
						{
							if (bVar3)
							{
								func_46(iParam0, 1);
							}
							else
							{
								func_46(iParam0, 0);
							}
							func_404(iParam0, 2, 0);
							func_404(iParam0, 3, 0);
							GlobalFunc_2640(iParam0, 1);
						}
						else
						{
							Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_16 = iParam1;
							func_404(iParam0, 2, 0);
							func_404(iParam0, 3, bVar2);
							GlobalFunc_2640(iParam0, 2);
						}
						return;
					}
				}
			}
		}
	}
	else if (iVar4 == 1)
	{
		if (!func_403(iParam0, 2))
		{
			if (GlobalFunc_687())
			{
				func_404(iParam0, 2, 1);
			}
		}
		StringCopy(&cVar5, "FriendActivity", 16);
		SCRIPT::REQUEST_SCRIPT(&cVar5);
		if (GlobalFunc_1993() || GlobalFunc_781())
		{
			if (func_403(iParam0, 2))
			{
				func_22(Global_86101, iVar0, 0);
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_404 = 1;
				GlobalFunc_2640(iParam0, 3);
			}
			else
			{
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar5);
				GlobalFunc_2640(iParam0, 0);
			}
		}
	}
	else if (iVar4 == 2)
	{
		if (func_403(iParam0, 3) && GlobalFunc_42(iVar0))
		{
			if (!func_443(iVar0))
			{
				if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_406 == 0)
				{
					Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_406 = 1;
				}
				GlobalFunc_2640(iParam0, 0);
			}
		}
		else
		{
			if (!func_403(iParam0, 2))
			{
				if (GlobalFunc_687())
				{
					func_404(iParam0, 2, 1);
				}
			}
			if (GlobalFunc_1993() || GlobalFunc_781())
			{
				if (func_403(iParam0, 2))
				{
					if (!func_403(iParam0, 3))
					{
						func_22(Global_86101, iVar0, 0);
					}
					if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_406 == 0)
					{
						Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_406 = 1;
					}
					else if (!func_403(iParam0, 3))
					{
						func_396(Global_86101, iVar0, 0);
					}
				}
				GlobalFunc_2640(iParam0, 0);
			}
		}
	}
	else if (iVar4 == 3)
	{
		StringCopy(&cVar9, "FriendActivity", 16);
		if (!SCRIPT::IS_THREAD_ACTIVE(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395))
		{
			if (!SCRIPT::HAS_SCRIPT_LOADED(&cVar9))
			{
				SCRIPT::REQUEST_SCRIPT(&cVar9);
			}
			else
			{
				uVar13 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar9, &iParam0, 1, 2050);
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395 = uVar13;
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar9);
			}
		}
	}
	else if (iVar4 == 4)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395))
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395 = 0;
			GlobalFunc_2640(iParam0, 0);
		}
	}
	else if (iVar4 == -1)
	{
	}
}

void func_396(int iParam0, int iParam1, int iParam2)//Position - 0x288FB
{
	switch (iParam2)
	{
		case 0:
			func_397(iParam0, iParam1, -1);
			break;
		
		case 5:
			func_397(iParam0, iParam1, -1);
			break;
		
		case 3:
			func_397(iParam0, iParam1, -2);
			break;
		
		case 4:
			func_397(iParam0, iParam1, -5);
			break;
		
		case 1:
			func_397(iParam0, iParam1, -5);
			break;
		
		case 2:
			func_397(iParam0, iParam1, -5);
			break;
		
		case 6:
			func_397(iParam0, iParam1, 5);
			break;
		
		case 7:
			func_397(iParam0, iParam1, 3);
			break;
		
		default:
			break;
	}
}

void func_397(int iParam0, int iParam1, int iParam2)//Position - 0x289A5
{
	GlobalFunc_5844(iParam0, iParam1, (func_399(iParam0, iParam1) + iParam2));
}


int func_399(int iParam0, int iParam1)//Position - 0x28A3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_768(iVar0, iVar1);
	return Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_17;
}




int func_403(int iParam0, int iParam1)//Position - 0x28ACB
{
	if (iParam0 < 9)
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_18, iParam1);
	}
	return 0;
}

void func_404(int iParam0, int iParam1, bool bParam2)//Position - 0x28AF6
{
	if (iParam0 < 9)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_18), iParam1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_18), iParam1);
		}
	}
}

int func_405(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x28B3A
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char[] cVar7[8];
	char[] cVar11[8];
	char cVar15[32];
	char cVar19[16];
	char[] cVar23[8];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	
	iVar0 = Global_86101;
	iVar1 = GlobalFunc_769(iVar0);
	iVar2 = GlobalFunc_769(iParam0);
	func_223(&uLocal_210, iVar0, PLAYER::PLAYER_PED_ID(), 1);
	func_223(&uLocal_210, iParam0, 0, 1);
	iVar27 = 0;
	if (!func_432(iVar1, iVar2))
	{
		if (GlobalFunc_42(iParam0) || func_430(&uLocal_210, iParam0))
		{
			*uParam1 = 0;
			*uParam2 = 1;
			return 1;
		}
	}
	else if (func_426(iVar1, iVar2))
	{
		func_425(iVar1, &iVar28, &iVar29);
		func_417(iVar1, iVar2, &iVar30, &iVar31, 1);
		func_416(iVar0, iParam0, iVar28, &sVar3, &cVar7);
		func_416(iVar0, iParam0, iVar29, &sVar3, &cVar11);
		func_416(iVar0, iParam0, iVar30, &sVar3, &cVar15);
		func_416(iVar0, iParam0, iVar31, &sVar3, &cVar23);
		cVar19 = { cVar15 };
		if (iVar30 == 9)
		{
			StringConCat(&cVar19, "_1", 16);
		}
		if (func_411(&uLocal_210, GlobalFunc_3049(iVar2), &sVar3, &cVar7, &cVar7, &cVar11, &cVar11, &cVar15, &cVar19, &cVar23, &cVar23, 12, iVar27, 0, 0, 0))
		{
			if (iVar30 == 12)
			{
				*uParam3 = 1;
			}
			else
			{
				*uParam3 = 0;
			}
			*uParam1 = 1;
			*uParam2 = 0;
			return 1;
		}
	}
	else if (!func_410(iVar2))
	{
		iVar32 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar32 == 0)
		{
			func_416(iVar0, iParam0, 35, &sVar3, &cVar7);
		}
		else if (iVar32 == 1)
		{
			func_416(iVar0, iParam0, 36, &sVar3, &cVar7);
		}
		else
		{
			func_416(iVar0, iParam0, 37, &sVar3, &cVar7);
		}
		if (GlobalFunc_10638(&uLocal_210, GlobalFunc_3049(iVar2), &sVar3, &cVar7, 12, iVar27, 0, 0, 0))
		{
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
		}
	}
	else
	{
		func_425(iVar1, &iVar33, &iVar34);
		func_406(iVar1, iVar2, &iVar35, &iVar36);
		func_416(iVar0, iParam0, iVar33, &sVar3, &cVar7);
		func_416(iVar0, iParam0, iVar34, &sVar3, &cVar11);
		func_416(iVar0, iParam0, iVar35, &sVar3, &cVar15);
		func_416(iVar0, iParam0, iVar36, &sVar3, &cVar23);
		if (func_411(&uLocal_210, GlobalFunc_3049(iVar2), &sVar3, &cVar7, &cVar7, &cVar11, &cVar11, &cVar15, &cVar15, &cVar23, &cVar23, 12, iVar27, 0, 0, 0))
		{
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x28D67
{
	int iVar0;
	var uVar1;
	
	if (!func_408(iParam0, iParam1, &uVar1, &iVar0))
	{
		if (iVar0 == 1 || iVar0 == 2)
		{
			*uParam2 = 16;
			*uParam3 = 19;
			return 1;
		}
		else
		{
			*uParam2 = 17;
			*uParam3 = 19;
			return 1;
		}
	}
	else if (!func_407(iParam0, iParam1))
	{
		*uParam2 = 18;
		*uParam3 = 19;
		return 1;
	}
	else
	{
		*uParam2 = 15;
		*uParam3 = 19;
		return 1;
	}
	return 0;
}

bool func_407(int iParam0, int iParam1)//Position - 0x28DDE
{
	return !GlobalFunc_5985(GlobalFunc_3049(iParam0), GlobalFunc_3049(iParam1), 0);
}

int func_408(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x28DF8
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_3049(iParam0);
	iVar1 = GlobalFunc_3049(iParam1);
	*uParam2 = GlobalFunc_7239(iVar0, iVar1);
	*uParam3 = GlobalFunc_5953(iVar0, iVar1);
	if (*uParam2 <= (5f * 60f))
	{
		return 0;
	}
	return 1;
}


int func_410(int iParam0)//Position - 0x28E98
{
	int iVar0;
	
	if (iParam0 == 3)
	{
		if (GlobalFunc_485(135) || GlobalFunc_485(136))
		{
			iVar0 = CLOCK::GET_CLOCK_HOURS();
			if (iVar0 < 21 && iVar0 >= 5)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 1;
}

bool func_411(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15)//Position - 0x28EDE
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, iParam1, sParam2, iParam13, iParam14, 0);
	GlobalFunc_2443();
	if (iParam12 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_413(4, &uVar0, &uVar11, cParam3, cParam4, cParam5, cParam6, cParam7, cParam8, cParam9, cParam10, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_9753(&uVar0, &uVar11, iParam11, bParam15);
}


void func_413(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x292AB
{
	GlobalFunc_2442(iParam0);
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



int func_416(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2937A
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { GlobalFunc_5197(iVar0, iVar1, 7, 0) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "G1", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "G2", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "G2_mm", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "G2_mf", 16);
			break;
		
		case 4:
			StringConCat(sParam4, "G2_mt", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "G2_ml", 16);
			break;
		
		case 6:
			StringConCat(sParam4, "Y1_ok", 16);
			break;
		
		case 7:
			StringConCat(sParam4, "Y1_ir", 16);
			break;
		
		case 8:
			StringConCat(sParam4, "Y1_vi", 16);
			break;
		
		case 9:
			StringConCat(sParam4, "Y1_fs", 16);
			break;
		
		case 10:
			StringConCat(sParam4, "Y1_lo", 16);
			break;
		
		case 11:
			StringConCat(sParam4, "Y1_bs", 16);
			break;
		
		case 12:
			StringConCat(sParam4, "Y1_cm", 16);
			break;
		
		case 13:
			StringConCat(sParam4, "Y2_ok", 16);
			break;
		
		case 14:
			StringConCat(sParam4, "Y2_cm", 16);
			break;
		
		case 15:
			StringConCat(sParam4, "N1_ok", 16);
			break;
		
		case 16:
			StringConCat(sParam4, "N1_fc", 16);
			break;
		
		case 17:
			StringConCat(sParam4, "N1_ph", 16);
			break;
		
		case 18:
			StringConCat(sParam4, "N1_bl", 16);
			break;
		
		case 19:
			StringConCat(sParam4, "N2", 16);
			break;
		
		case 20:
			StringConCat(sParam4, "B1", 16);
			break;
		
		case 21:
			StringConCat(sParam4, "B1_d2", 16);
			break;
		
		case 22:
			StringConCat(sParam4, "B1_r", 16);
			break;
		
		case 23:
			StringConCat(sParam4, "B1_a", 16);
			break;
		
		case 24:
			StringConCat(sParam4, "B1_b1", 16);
			break;
		
		case 25:
			StringConCat(sParam4, "B1_b2", 16);
			break;
		
		case 26:
			StringConCat(sParam4, "B1_f1", 16);
			break;
		
		case 27:
			StringConCat(sParam4, "B1_f2", 16);
			break;
		
		case 28:
			StringConCat(sParam4, "B1_f4", 16);
			break;
		
		case 29:
			StringConCat(sParam4, "B1_f5", 16);
			break;
		
		case 30:
			StringConCat(sParam4, "Cncl", 16);
			break;
		
		case 31:
			StringConCat(sParam4, "CnclH", 16);
			break;
		
		case 32:
			StringConCat(sParam4, "CnclM", 16);
			break;
		
		case 33:
			StringConCat(sParam4, "CnclL", 16);
			break;
		
		case 34:
			StringConCat(sParam4, "CnclF", 16);
			break;
		
		case 35:
			StringConCat(sParam4, "Lay1", 16);
			break;
		
		case 36:
			StringConCat(sParam4, "Lay2", 16);
			break;
		
		case 37:
			StringConCat(sParam4, "Lay3", 16);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_417(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x29662
{
	int iVar0;
	
	iVar0 = GlobalFunc_768(iParam0, iParam1);
	if (!Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_404)
	{
		*uParam2 = 9;
		*uParam3 = 13;
		return 1;
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_17 < 30)
	{
		*uParam2 = 10;
		*uParam3 = 13;
		return 1;
	}
	else if (func_424(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_5)))
	{
		*uParam2 = 8;
		*uParam3 = 13;
		return 1;
	}
	else if (func_423(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_5)))
	{
		*uParam2 = 7;
		*uParam3 = 13;
		return 1;
	}
	else if (((((iParam4 && MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 15) && !(iParam0 == 2 && iParam1 == 0)) && !(iParam0 == 0 && iParam1 == 5)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_418(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		*uParam2 = 12;
		*uParam3 = 14;
		return 1;
	}
	else
	{
		*uParam2 = 6;
		*uParam3 = 13;
		return 1;
	}
	return 0;
}

int func_418(struct<3> Param0)//Position - 0x2977E
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	if (func_422())
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_85668[0 /*18*/], 1) < 10f)
		{
			return 1;
		}
		else
		{
			func_421();
		}
	}
	if (!func_420())
	{
		if (Global_87295 == 0)
		{
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, 1, &Var0, &fVar3, &uVar4, 4, 1077936128, 0))
			{
				if ((PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, 0, &Var8) && MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var8, 1) < 10f) && MISC::ABSF((Param0.f_2 - Var8.f_2)) < 2.5f)
				{
					Var5 = { Var8 };
				}
				else if ((PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, 1, &Var8) && MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var8, 1) < 10f) && MISC::ABSF((Param0.f_2 - Var8.f_2)) < 2.5f)
				{
					Var5 = { Var8 };
				}
				else
				{
					return 0;
				}
				Var11 = { Var5 - Var0 };
				Var14 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, (fVar3 - 90f), 0f, 1f, 0f) };
				Var17 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, (fVar3 + 90f), 0f, 1f, 0f) };
				if (GlobalFunc_880(Var11, Var14) > 0f)
				{
					Var11 = { Var14 };
				}
				else
				{
					Var11 = { Var17 };
				}
				Var20 = { -Var11.f_1, Var11.x, 0f };
				Var23 = { Var5 - Var11 * Vector(4f, 4f, 4f) };
				Var26 = { Var5 + Var11 * Vector(1f, 1f, 1f) - Var20 * Vector(2f, 2f, 2f) };
				Var29 = { Var5 + Var11 * Vector(1f, 1f, 1f) + Var20 * Vector(2f, 2f, 2f) };
				if ((PATHFIND::GET_SAFE_COORD_FOR_PED(Var5 + Var11 * Vector(1f, 1f, 1f), 1, &Var26, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var26, 1) < 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var23, Var26, 1) > 2f)
				{
					Var26 = { Var26 };
				}
				else
				{
					return 0;
				}
				if ((PATHFIND::GET_SAFE_COORD_FOR_PED(Var5 + Var11 * Vector(1f, 1f, 1f), 1, &Var29, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var29, 1) < 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var23, Var29, 1) > 2f)
				{
					Var29 = { Var29 };
				}
				else
				{
					Var29 = { Var26 };
				}
				Global_85668[0 /*18*/] = { Var5 };
				Global_85668[0 /*18*/].f_3 = { Var26 - Var5 };
				Global_85668[0 /*18*/].f_6 = { Var29 - Var5 };
				Global_85668[0 /*18*/].f_9 = { 0f, 0f, 0f };
				Global_85668[0 /*18*/].f_12 = 0f;
				Global_85668[0 /*18*/].f_13 = { Var23 };
				Global_85668[0 /*18*/].f_16 = 10;
				Global_85668[0 /*18*/].f_17 = 1215;
				return 1;
			}
		}
	}
	return 0;
}


bool func_420()//Position - 0x29A52
{
	return Global_85668[0 /*18*/].f_17 != 0;
}

void func_421()//Position - 0x29A65
{
	Global_85668[0 /*18*/].f_17 = 0;
}

bool func_422()//Position - 0x29A77
{
	return Global_85668[0 /*18*/].f_17 & 1024 != 0;
}

int func_423(var uParam0)//Position - 0x29A8E
{
	if (GlobalFunc_7072(uParam0, (60f * 60f)))
	{
		return 1;
	}
	return 0;
}

int func_424(var uParam0)//Position - 0x29AAF
{
	if (GlobalFunc_7072(uParam0, (300f * 60f)))
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0, var uParam1, var uParam2)//Position - 0x29AD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 7;
	if (func_39(&iVar1) > 0)
	{
		iVar2 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar1 /*19*/];
		iVar3 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar1 /*19*/].f_1;
		if (iVar2 == iParam0)
		{
			iVar0 = iVar3;
		}
		if (iVar3 == iParam0)
		{
			iVar0 = iVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 2;
			break;
		
		case 1:
			*uParam1 = 0;
			*uParam2 = 3;
			break;
		
		case 2:
			*uParam1 = 0;
			*uParam2 = 4;
			break;
		
		case 3:
			*uParam1 = 0;
			*uParam2 = 5;
			break;
		
		default:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
	}
	return 1;
}

int func_426(int iParam0, int iParam1)//Position - 0x29B72
{
	var uVar0;
	var uVar1;
	
	if (!func_410(iParam1))
	{
		return 0;
	}
	if (!func_407(iParam0, iParam1))
	{
		return 0;
	}
	if (!func_429(iParam0, iParam1))
	{
		return 0;
	}
	if (!func_428(iParam0, iParam1))
	{
		if (!func_408(iParam0, iParam1, &uVar1, &uVar0))
		{
			return 0;
		}
	}
	if (!func_427(iParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_427(int iParam0, int iParam1)//Position - 0x29BD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = GlobalFunc_3049(iParam0);
	iVar1 = GlobalFunc_3049(iParam1);
	iVar5 = func_39(&iVar3);
	if (func_48(iVar0, iVar1, &iVar2))
	{
		if (iVar5 == 0)
		{
			return 1;
		}
		else if (iVar5 == 1)
		{
			if (func_37(iVar3, iVar2, &iVar4))
			{
				if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar4 /*19*/].f_2 == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_428(int iParam0, int iParam1)//Position - 0x29C3E
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_768(iParam0, iParam1);
	iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_16;
	if (iParam0 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_429(int iParam0, int iParam1)//Position - 0x29C6D
{
	return !GlobalFunc_5985(GlobalFunc_3049(iParam0), GlobalFunc_3049(iParam1), 2);
}

int func_430(var uParam0, int iParam1)//Position - 0x29C87
{
	int iVar0;
	char* sVar1;
	char[] cVar5[8];
	
	GlobalFunc_173(uParam0, 1, 0, func_226(iParam1), 0, 1);
	iVar0 = 0;
	func_431(GlobalFunc_769(iParam1), &sVar1, &cVar5);
	if (GlobalFunc_10638(uParam0, iParam1, &sVar1, &cVar5, 2, iVar0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0, char* sParam1, char* sParam2)//Position - 0x29CCB
{
	StringCopy(sParam1, "ANAUD", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam2, "MIC_APH1", 16);
			break;
		
		case 1:
			StringCopy(sParam2, "ARI_APH1", 16);
			break;
		
		case 2:
			StringCopy(sParam2, "TRE_APH1", 16);
			break;
		
		case 3:
			StringCopy(sParam2, "LAM_APH1", 16);
			break;
		
		case 4:
			StringCopy(sParam2, "JIM_APH1", 16);
			break;
		
		case 5:
			StringCopy(sParam2, "AMA_APH1", 16);
			break;
		
		default:
			StringCopy(sParam2, "XXX_APH1", 16);
			return 0;
			break;
	}
	return 1;
}

int func_432(int iParam0, int iParam1)//Position - 0x29D58
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (!func_441(iParam1))
	{
		return 0;
	}
	else if (!func_438(iParam1))
	{
		return 0;
	}
	else if (!func_42(iParam0, iParam1))
	{
		return 0;
	}
	else if (!func_437(iParam0, iParam1))
	{
		return 0;
	}
	else if (!func_435(iParam0, iParam1))
	{
		return 0;
	}
	else if (!func_433(iParam1, &uVar0, &uVar1, &uVar2))
	{
		return 0;
	}
	else if (func_428(iParam0, iParam1))
	{
		if (!func_426(iParam0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_433(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x29DEE
{
	func_434(iParam0, uParam1, uParam2);
	*uParam3 = CLOCK::GET_CLOCK_HOURS();
	if (*uParam1 < *uParam2)
	{
		if (*uParam3 < *uParam1 || *uParam3 >= *uParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (*uParam3 < *uParam1 && *uParam3 >= *uParam2)
	{
		return 0;
	}
	return 1;
}

int func_434(int iParam0, var uParam1, var uParam2)//Position - 0x29E54
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
			break;
		
		case 1:
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
			break;
		
		case 2:
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
			break;
		
		case 3:
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
			break;
		
		case 4:
			*uParam1 = 14;
			*uParam2 = 5;
			return 1;
			break;
		
		case 5:
			*uParam1 = 9;
			*uParam2 = 0;
			return 1;
			break;
	}
	*uParam1 = -1;
	*uParam2 = 24;
	return 0;
}

int func_435(int iParam0, int iParam1)//Position - 0x29EED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = GlobalFunc_3049(iParam0);
	iVar1 = GlobalFunc_3049(iParam1);
	iVar5 = func_39(&iVar3);
	if (func_48(iVar0, iVar1, &iVar2) && GlobalFunc_2014(iVar2) == 0)
	{
		if (iVar5 == 0)
		{
			return 1;
		}
		else if (iVar5 == 1)
		{
			if (func_37(iVar3, iVar2, &iVar4) && GlobalFunc_2014(iVar4) == 0)
			{
				if (func_436(iVar2, 14) || func_436(iVar3, 14))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_436(int iParam0, int iParam1)//Position - 0x29F79
{
	int iVar0;
	
	iVar0 = GlobalFunc_769(iParam1);
	if (iVar0 < 6)
	{
		if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/] == iVar0 || Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_437(int iParam0, int iParam1)//Position - 0x29FBF
{
	return !GlobalFunc_5985(GlobalFunc_3049(iParam0), GlobalFunc_3049(iParam1), 1);
}

int func_438(int iParam0)//Position - 0x29FD9
{
	if (func_439(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_439(int iParam0)//Position - 0x29FEF
{
	if (iParam0 < 6)
	{
		if (GlobalFunc_226(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/])))
		{
			if (GlobalFunc_4981(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/])) < (3f * 60f))
			{
				return 1;
			}
			else
			{
				GlobalFunc_235(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/]));
				return 0;
			}
		}
	}
	return 0;
}


int func_441(int iParam0)//Position - 0x2A066
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GlobalFunc_3049(iParam0);
	if (!GlobalFunc_8633(iVar0))
	{
		if (GlobalFunc_42(iVar0))
		{
			iVar1 = GlobalFunc_237(iVar0);
			if (iVar1 < 3)
			{
				iVar2 = Global_87845[iVar1];
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar3 = (iParam0 - 3);
			if (iVar3 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86201[iVar3]))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}


int func_443(int iParam0)//Position - 0x2A0ED
{
	if (Global_16806 == 0)
	{
		return 0;
	}
	if (Global_16805 == 1)
	{
		return 0;
	}
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14393.f_1 == 10)
		{
			if (Global_1578 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_444(int iParam0, var uParam1)//Position - 0x2A141
{
	int iVar0;
	
	iVar0 = GlobalFunc_769(Global_86101);
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1 == iVar0)
	{
		*uParam1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/];
		return 1;
	}
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/] == iVar0)
	{
		*uParam1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1;
		return 1;
	}
	*uParam1 = 7;
	return 0;
}




void func_448()//Position - 0x2A1F6
{
	func_451(1);
	func_449();
	func_378(&uLocal_128);
}

void func_449()//Position - 0x2A20D
{
	func_450(11, 0, 67);
	func_450(13, 1, 95);
	func_450(16, 1, 96);
	func_450(19, 1, 97);
	func_450(17, 1, 98);
	func_450(15, 1, 99);
	func_450(18, 1, 100);
	func_450(20, 1, 101);
	func_450(14, 1, 102);
	func_450(12, 2, 93);
	func_450(10, 3, 66);
	func_450(9, 4, 111);
	func_450(7, 4, 112);
	func_450(8, 4, 113);
	func_450(0, 5, 116);
	func_450(1, 5, 117);
	func_450(2, 5, 118);
	func_450(3, 5, 119);
	func_450(4, 5, 120);
	func_450(5, 5, 121);
	func_450(6, 5, 122);
	func_450(21, 6, 161);
}

void func_450(int iParam0, int iParam1, int iParam2)//Position - 0x2A2D3
{
	Global_86103[iParam0 /*2*/].f_1 = iParam1;
	Global_86103[iParam0 /*2*/] = iParam2;
}

void func_451(bool bParam0)//Position - 0x2A2F1
{
	if (bParam0)
	{
		func_455(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 10);
		func_454(0f, 0f, 0f, 0f, 0f, 0f, 0f);
	}
	func_455(1, -824.9975f, 179.9752f, 70.4895f, 5.8945f, -0.6014f, 0.6636f, 7.3145f, -2.6014f, 0.7136f, 0);
	func_454(-860.8041f, 136.4404f, 59.025f, 0.6456f, -828.7663f, 178.8821f, 71.2117f);
	func_453(1);
	func_452(896);
	func_455(2, 1986.868f, 3810.984f, 31.1159f, -2.28f, 0.42f, 0.11f, -1.02f, 2.28f, 0.0138f, 1);
	func_454(2138.562f, 3767.596f, 32.1819f, 120.8022f, 1995.681f, 3818.576f, 32.1837f);
	func_453(1);
	func_452(896);
	func_455(3, -13.8595f, -1454.332f, 29.4997f, 0.1999f, 8.5446f, 0.1003f, -1.0001f, 7.9046f, 0.1003f, 5);
	func_454(70.9006f, -1477.241f, 28.2852f, 140.958f, -24.3995f, -1457.326f, 30.6446f);
	func_453(2);
	func_452(896);
	func_455(4, 10.8316f, 549.0906f, 174.9739f, -1.4644f, -9.0339f, 0.0539f, -2.4844f, -8.6139f, -0.0211f, 6);
	func_454(-90.6814f, 511.137f, 142.8975f, 68.9617f, 5.0911f, 547.0732f, 174.9908f);
	func_453(2);
	func_452(896);
	func_455(5, 1986.867f, 3810.984f, 31.1159f, -2.28f, 0.42f, 0.11f, -1.02f, 2.28f, 0.0138f, 2);
	func_454(2138.562f, 3767.596f, 32.1819f, 120.8022f, 1995.681f, 3818.576f, 32.1837f);
	func_453(4);
	func_452(896);
	func_455(6, -1158.263f, -1515.861f, 3.2873f, 3.7331f, 0.363f, 0.0341f, 3.1931f, 1.563f, 0.0341f, 3);
	func_454(-1079.374f, -1475.24f, 4.1272f, 25.0007f, -1166.17f, -1519.469f, 4.229f);
	func_453(4);
	func_452(896);
	func_455(7, 132.7787f, -1305.208f, 28.1826f, -1.1933f, 4.1322f, 0.0451f, -2.1933f, 3.8922f, -0.0049f, 4);
	func_454(65.7439f, -1308.325f, 28.3417f, 210.5102f, 125.2967f, -1307.992f, 29.2187f);
	func_453(4);
	func_452(768);
	func_455(8, 176.9471f, -1340.813f, 28.2908f, -1.2f, 2.1f, 0.0032f, -3f, 0.12f, 0.0032f, 4);
	func_454(361.4975f, -1296.77f, 31.3318f, 140.8159f, 182.2761f, -1333.38f, 28.8827f);
	func_453(4);
	func_452(640);
	func_455(9, -57.8633f, -1459.24f, 30.994f, -1.14f, 2.52f, 0.22f, -3.36f, 1.74f, 0.1667f, 10);
	func_454(68.9364f, -1479.64f, 29.2941f, 145.6588f, -50.0051f, -1459.135f, 31.9645f);
	func_453(8);
	func_452(896);
	func_455(10, -14.7793f, -114.3548f, 55.8073f, -0.7199f, 3.7608f, 0.05f, 0.76f, 3.48f, 0.05f, 10);
	func_454(40.216f, -256.6415f, 47.4194f, 340.2766f, -23.3476f, -113.7569f, 55.8956f);
	func_453(1);
	func_452(384);
	func_455(11, -597.897f, -305.1185f, 33.9548f, -1.02f, 0.84f, -0.047f, 0f, 1.68f, -0.047f, 10);
	func_454(-584.9772f, -258.7058f, 34.8225f, 210.2552f, -590.3728f, -302.9131f, 34.853f);
	func_453(32);
	func_452(384);
	func_455(12, -155.6107f, -175.4378f, 42.7614f, 4.5615f, 6.7732f, -0.1419f, 3.1815f, 7.1932f, -0.1419f, 10);
	func_454(-107.3334f, -191.8515f, 45.7935f, 165.1659f, -158.1629f, -174.8294f, 43.2478f);
	func_453(16);
	func_452(384);
	func_455(13, 194.0434f, -42.2946f, 67.5703f, 0.24f, 4.86f, 0f, 1.5f, 4.68f, 0f, 10);
	func_454(298.4399f, -19.2893f, 75.8441f, 157.1038f, 202.8657f, -46.2839f, 68.6749f);
	func_453(6);
	func_452(384);
	func_455(14, -165.44f, -788.5505f, 30.9774f, -6.3719f, 2.4632f, 0.0021f, -7.3019f, 1.7432f, 0.0021f, 10);
	func_454(-156.6818f, -713.4197f, 33.5995f, 241.8992f, -159.4454f, -778.2214f, 32.2215f);
	func_453(33);
	func_452(384);
	func_455(15, -820.9531f, -1088.276f, 10.0086f, -1.804f, 4.1191f, 0.1191f, -3.124f, 3.2191f, 0.1191f, 10);
	func_454(-841.6274f, -1165.006f, 6.0014f, 294.8121f, -819.1121f, -1091.451f, 10.6171f);
	func_453(6);
	func_452(128);
	func_455(16, 234.715f, -959.095f, 28.2856f, -1.6816f, -0.2787f, 0.0127f, -1.0216f, 1.4013f, 0.0127f, 10);
	func_454(354.8806f, -855.5883f, 28.3444f, 89.9428f, 240.9607f, -948.6324f, 28.1587f);
	func_453(18);
	func_452(384);
	func_455(17, 249.3746f, -1008.328f, 28.2705f, 3.848f, -3.0003f, 0.0001f, 4.328f, -1.8003f, 0.0001f, 10);
	func_454(238.4106f, -1127.997f, 28.2691f, 87.3779f, 244.4703f, -1020.02f, 29.1059f);
	func_453(4);
	func_452(256);
	func_455(18, -210.3783f, -1498.204f, 30.4273f, 2.28f, -2.727f, 0.1f, 0.6f, -2.727f, 0.1f, 10);
	func_454(-281.035f, -1533.152f, 26.3419f, 343.7635f, -219.2698f, -1492.04f, 31.2461f);
	func_453(8);
	func_452(384);
	func_455(19, -1220.569f, -773.4271f, 17.1055f, 3.8194f, 4.9089f, 0.0656f, 5.9194f, 4.1889f, -0.0844f, 10);
	func_454(-1212.768f, -876.4072f, 12.1331f, 309.3317f, -1209.417f, -785.0978f, 16.9499f);
	func_453(49);
	func_452(384);
	func_455(20, -1391.763f, -584.7326f, 29.2332f, -2.1715f, -1.7725f, -0.01f, -2.6515f, -3.3925f, -0.11f, 10);
	func_454(-1513.684f, -678.0259f, 27.4965f, 47.765f, -1409.272f, -590.8218f, 30.3243f);
	func_453(4);
	func_452(256);
	func_455(21, -1345.279f, -385.1048f, 35.755f, 1.86f, -0.78f, 0f, 1.2f, -1.62f, 0f, 10);
	func_454(-1325.355f, -453.5642f, 33.4523f, 35.295f, -1346.246f, -397.871f, 36.6207f);
	func_453(10);
	func_452(384);
	func_455(22, -14.6068f, 6505.243f, 30.5105f, -0.5104f, -7.4223f, 0.0239f, 0.8696f, -6.2223f, 0.0239f, 10);
	func_454(90.1534f, 6595.789f, 30.5382f, 47.4841f, -8.4122f, 6513.607f, 31.3368f);
	func_453(63);
	func_452(384);
	func_455(23, 1393.716f, 3592.585f, 33.9297f, 0.8771f, 4.9569f, 0.0859f, -0.9829f, 5.4369f, 0.0859f, 10);
	func_454(1449.097f, 3669.69f, 33.1474f, 201.6678f, 1408.635f, 3599.183f, 34.8791f);
	func_453(63);
	func_452(384);
}

void func_452(int iParam0)//Position - 0x2AC57
{
	Global_85668[iLocal_123 /*18*/].f_17 = (Global_85668[iLocal_123 /*18*/].f_17 || iParam0);
}

void func_453(int iParam0)//Position - 0x2AC76
{
	Global_85668[iLocal_123 /*18*/].f_17 = (Global_85668[iLocal_123 /*18*/].f_17 || iParam0);
}

void func_454(struct<3> Param0, float fParam3, struct<3> Param4)//Position - 0x2AC95
{
	Global_85668[iLocal_123 /*18*/].f_9 = { Param0 };
	Global_85668[iLocal_123 /*18*/].f_12 = fParam3;
	Global_85668[iLocal_123 /*18*/].f_13 = { Param4 };
}

void func_455(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, int iParam10)//Position - 0x2ACC9
{
	iLocal_123 = iParam0;
	Global_85668[iLocal_123 /*18*/] = { Param1 };
	Global_85668[iLocal_123 /*18*/].f_3 = { Param4 };
	Global_85668[iLocal_123 /*18*/].f_6 = { Param7 };
	Global_85668[iLocal_123 /*18*/].f_17 = 0;
	Global_85668[iLocal_123 /*18*/].f_16 = iParam10;
}

void func_456()//Position - 0x2AD1A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if ((Global_86223[iVar0 /*2*/] == 1 || Global_86223[iVar0 /*2*/] == 2) || Global_86223[iVar0 /*2*/] == 3)
		{
			GlobalFunc_2640(iVar0, 0);
		}
		iVar0++;
	}
	func_377(&uLocal_128, 0);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!PED::IS_PED_INJURED(Global_86205[iVar1]))
		{
			func_349(Global_86205[iVar1]);
			Global_86205[iVar1] = 0;
		}
		iVar1++;
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

